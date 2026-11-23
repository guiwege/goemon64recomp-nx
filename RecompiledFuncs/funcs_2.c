#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80000D00_1900(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80000D00: lui         $v1, 0x8005
    ctx->r3 = S32(0X8005 << 16);
    // 0x80000D04: addiu       $v1, $v1, 0x48F0
    ctx->r3 = ADD32(ctx->r3, 0X48F0);
    // 0x80000D08: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x80000D0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80000D10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80000D14: slti        $at, $v0, 0x12
    ctx->r1 = SIGNED(ctx->r2) < 0X12 ? 1 : 0;
    // 0x80000D18: beq         $at, $zero, L_80001190
    if (ctx->r1 == 0) {
        // 0x80000D1C: addiu       $t6, $v0, 0x1
        ctx->r14 = ADD32(ctx->r2, 0X1);
            goto L_80001190;
    }
    // 0x80000D1C: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x80000D20: sh          $t6, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r14;
    // 0x80000D24: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x80000D28: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x80000D2C: lw          $t8, 0x48E8($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X48E8);
    // 0x80000D30: lw          $t7, 0x48D8($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X48D8);
    // 0x80000D34: lui         $v1, 0x8005
    ctx->r3 = S32(0X8005 << 16);
    // 0x80000D38: or          $t9, $t7, $t8
    ctx->r25 = ctx->r15 | ctx->r24;
    // 0x80000D3C: bne         $t9, $zero, L_80001110
    if (ctx->r25 != 0) {
        // 0x80000D40: nop
    
            goto L_80001110;
    }
    // 0x80000D40: nop

    // 0x80000D44: lhu         $v1, 0x48F4($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X48F4);
    // 0x80000D48: bne         $v1, $zero, L_80000E44
    if (ctx->r3 != 0) {
        // 0x80000D4C: lui         $t4, 0x8016
        ctx->r12 = S32(0X8016 << 16);
            goto L_80000E44;
    }
    // 0x80000D4C: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x80000D50: lw          $t4, -0x3A38($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X3A38);
    // 0x80000D54: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
    // 0x80000D58: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x80000D5C: addu        $v0, $v0, $t4
    ctx->r2 = ADD32(ctx->r2, ctx->r12);
    // 0x80000D60: lh          $v0, -0x5250($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X5250);
    // 0x80000D64: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80000D68: addiu       $a1, $a1, 0x6800
    ctx->r5 = ADD32(ctx->r5, 0X6800);
    // 0x80000D6C: beq         $v0, $zero, L_80000D94
    if (ctx->r2 == 0) {
        // 0x80000D70: addiu       $a0, $a0, 0x1000
        ctx->r4 = ADD32(ctx->r4, 0X1000);
            goto L_80000D94;
    }
    // 0x80000D70: addiu       $a0, $a0, 0x1000
    ctx->r4 = ADD32(ctx->r4, 0X1000);
    // 0x80000D74: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80000D78: beq         $v0, $at, L_80000DC8
    if (ctx->r2 == ctx->r1) {
        // 0x80000D7C: lui         $a0, 0x8028
        ctx->r4 = S32(0X8028 << 16);
            goto L_80000DC8;
    }
    // 0x80000D7C: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80000D80: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80000D84: beq         $v0, $at, L_80000E08
    if (ctx->r2 == ctx->r1) {
        // 0x80000D88: lui         $a0, 0x802B
        ctx->r4 = S32(0X802B << 16);
            goto L_80000E08;
    }
    // 0x80000D88: lui         $a0, 0x802B
    ctx->r4 = S32(0X802B << 16);
    // 0x80000D8C: b           L_80000E44
    // 0x80000D90: nop

        goto L_80000E44;
    // 0x80000D90: nop

L_80000D94:
    // 0x80000D94: lui         $a2, 0x2
    ctx->r6 = S32(0X2 << 16);
    // 0x80000D98: jal         0x80004208
    // 0x80000D9C: ori         $a2, $a2, 0x5800
    ctx->r6 = ctx->r6 | 0X5800;
    func_80004208_4E08(rdram, ctx);
        goto after_0;
    // 0x80000D9C: ori         $a2, $a2, 0x5800
    ctx->r6 = ctx->r6 | 0X5800;
    after_0:
    // 0x80000DA0: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x80000DA4: lui         $a1, 0x802B
    ctx->r5 = S32(0X802B << 16);
    // 0x80000DA8: lui         $a2, 0x2
    ctx->r6 = S32(0X2 << 16);
    // 0x80000DAC: ori         $a2, $a2, 0x5800
    ctx->r6 = ctx->r6 | 0X5800;
    // 0x80000DB0: addiu       $a1, $a1, -0x4000
    ctx->r5 = ADD32(ctx->r5, -0X4000);
    // 0x80000DB4: jal         0x80004208
    // 0x80000DB8: addiu       $a0, $a0, 0x1000
    ctx->r4 = ADD32(ctx->r4, 0X1000);
    func_80004208_4E08(rdram, ctx);
        goto after_1;
    // 0x80000DB8: addiu       $a0, $a0, 0x1000
    ctx->r4 = ADD32(ctx->r4, 0X1000);
    after_1:
    // 0x80000DBC: lui         $v1, 0x8005
    ctx->r3 = S32(0X8005 << 16);
    // 0x80000DC0: b           L_80000E44
    // 0x80000DC4: lhu         $v1, 0x48F4($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X48F4);
        goto L_80000E44;
    // 0x80000DC4: lhu         $v1, 0x48F4($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X48F4);
L_80000DC8:
    // 0x80000DC8: lui         $a1, 0x8026
    ctx->r5 = S32(0X8026 << 16);
    // 0x80000DCC: lui         $a2, 0x2
    ctx->r6 = S32(0X2 << 16);
    // 0x80000DD0: ori         $a2, $a2, 0x5800
    ctx->r6 = ctx->r6 | 0X5800;
    // 0x80000DD4: addiu       $a1, $a1, 0x1000
    ctx->r5 = ADD32(ctx->r5, 0X1000);
    // 0x80000DD8: jal         0x80004208
    // 0x80000DDC: addiu       $a0, $a0, 0x6800
    ctx->r4 = ADD32(ctx->r4, 0X6800);
    func_80004208_4E08(rdram, ctx);
        goto after_2;
    // 0x80000DDC: addiu       $a0, $a0, 0x6800
    ctx->r4 = ADD32(ctx->r4, 0X6800);
    after_2:
    // 0x80000DE0: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80000DE4: lui         $a1, 0x802B
    ctx->r5 = S32(0X802B << 16);
    // 0x80000DE8: lui         $a2, 0x2
    ctx->r6 = S32(0X2 << 16);
    // 0x80000DEC: ori         $a2, $a2, 0x5800
    ctx->r6 = ctx->r6 | 0X5800;
    // 0x80000DF0: addiu       $a1, $a1, -0x4000
    ctx->r5 = ADD32(ctx->r5, -0X4000);
    // 0x80000DF4: jal         0x80004208
    // 0x80000DF8: addiu       $a0, $a0, 0x6800
    ctx->r4 = ADD32(ctx->r4, 0X6800);
    func_80004208_4E08(rdram, ctx);
        goto after_3;
    // 0x80000DF8: addiu       $a0, $a0, 0x6800
    ctx->r4 = ADD32(ctx->r4, 0X6800);
    after_3:
    // 0x80000DFC: lui         $v1, 0x8005
    ctx->r3 = S32(0X8005 << 16);
    // 0x80000E00: b           L_80000E44
    // 0x80000E04: lhu         $v1, 0x48F4($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X48F4);
        goto L_80000E44;
    // 0x80000E04: lhu         $v1, 0x48F4($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X48F4);
L_80000E08:
    // 0x80000E08: lui         $a1, 0x8026
    ctx->r5 = S32(0X8026 << 16);
    // 0x80000E0C: lui         $a2, 0x2
    ctx->r6 = S32(0X2 << 16);
    // 0x80000E10: ori         $a2, $a2, 0x5800
    ctx->r6 = ctx->r6 | 0X5800;
    // 0x80000E14: addiu       $a1, $a1, 0x1000
    ctx->r5 = ADD32(ctx->r5, 0X1000);
    // 0x80000E18: jal         0x80004208
    // 0x80000E1C: addiu       $a0, $a0, -0x4000
    ctx->r4 = ADD32(ctx->r4, -0X4000);
    func_80004208_4E08(rdram, ctx);
        goto after_4;
    // 0x80000E1C: addiu       $a0, $a0, -0x4000
    ctx->r4 = ADD32(ctx->r4, -0X4000);
    after_4:
    // 0x80000E20: lui         $a0, 0x802B
    ctx->r4 = S32(0X802B << 16);
    // 0x80000E24: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80000E28: lui         $a2, 0x2
    ctx->r6 = S32(0X2 << 16);
    // 0x80000E2C: ori         $a2, $a2, 0x5800
    ctx->r6 = ctx->r6 | 0X5800;
    // 0x80000E30: addiu       $a1, $a1, 0x6800
    ctx->r5 = ADD32(ctx->r5, 0X6800);
    // 0x80000E34: jal         0x80004208
    // 0x80000E38: addiu       $a0, $a0, -0x4000
    ctx->r4 = ADD32(ctx->r4, -0X4000);
    func_80004208_4E08(rdram, ctx);
        goto after_5;
    // 0x80000E38: addiu       $a0, $a0, -0x4000
    ctx->r4 = ADD32(ctx->r4, -0X4000);
    after_5:
    // 0x80000E3C: lui         $v1, 0x8005
    ctx->r3 = S32(0X8005 << 16);
    // 0x80000E40: lhu         $v1, 0x48F4($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X48F4);
L_80000E44:
    // 0x80000E44: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x80000E48: lw          $v0, -0x3A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A38);
    // 0x80000E4C: addiu       $t5, $v1, 0x1
    ctx->r13 = ADD32(ctx->r3, 0X1);
    // 0x80000E50: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80000E54: lui         $t6, 0x4
    ctx->r14 = S32(0X4 << 16);
    // 0x80000E58: sh          $t5, 0x48F4($at)
    MEM_H(0X48F4, ctx->r1) = ctx->r13;
    // 0x80000E5C: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x80000E60: lh          $t6, -0x524E($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X524E);
    // 0x80000E64: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x80000E68: ori         $at, $at, 0xD6D8
    ctx->r1 = ctx->r1 | 0XD6D8;
    // 0x80000E6C: multu       $t6, $at
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r1)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80000E70: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80000E74: addiu       $a0, $a0, -0x3A34
    ctx->r4 = ADD32(ctx->r4, -0X3A34);
    // 0x80000E78: mflo        $t7
    ctx->r15 = lo;
    // 0x80000E7C: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x80000E80: jal         0x800011A0
    // 0x80000E84: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    func_800011A0_1DA0(rdram, ctx);
        goto after_6;
    // 0x80000E84: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    after_6:
    // 0x80000E88: jal         0x800012FC
    // 0x80000E8C: nop

    func_800012FC_1EFC(rdram, ctx);
        goto after_7;
    // 0x80000E8C: nop

    after_7:
    // 0x80000E90: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80000E94: addiu       $a0, $a0, -0x3A34
    ctx->r4 = ADD32(ctx->r4, -0X3A34);
    // 0x80000E98: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80000E9C: lui         $t5, 0x50
    ctx->r13 = S32(0X50 << 16);
    // 0x80000EA0: ori         $t5, $t5, 0x3C0
    ctx->r13 = ctx->r13 | 0X3C0;
    // 0x80000EA4: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80000EA8: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x80000EAC: lui         $t4, 0xED00
    ctx->r12 = S32(0XED00 << 16);
    // 0x80000EB0: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x80000EB4: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x80000EB8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80000EBC: lui         $t3, 0xE700
    ctx->r11 = S32(0XE700 << 16);
    // 0x80000EC0: lui         $t8, 0xBA00
    ctx->r24 = S32(0XBA00 << 16);
    // 0x80000EC4: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80000EC8: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x80000ECC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80000ED0: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x80000ED4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80000ED8: ori         $t8, $t8, 0x1402
    ctx->r24 = ctx->r24 | 0X1402;
    // 0x80000EDC: lui         $t9, 0x30
    ctx->r25 = S32(0X30 << 16);
    // 0x80000EE0: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80000EE4: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x80000EE8: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x80000EEC: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80000EF0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80000EF4: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x80000EF8: lui         $t6, 0x4
    ctx->r14 = S32(0X4 << 16);
    // 0x80000EFC: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x80000F00: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x80000F04: lw          $t5, -0x3A38($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X3A38);
    // 0x80000F08: lui         $at, 0xFF00
    ctx->r1 = S32(0XFF00 << 16);
    // 0x80000F0C: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x80000F10: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80000F14: lhu         $t6, -0x523E($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X523E);
    // 0x80000F18: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x80000F1C: lui         $a3, 0xF64F
    ctx->r7 = S32(0XF64F << 16);
    // 0x80000F20: andi        $t7, $t6, 0x3
    ctx->r15 = ctx->r14 & 0X3;
    // 0x80000F24: sll         $t8, $t7, 19
    ctx->r24 = S32(ctx->r15 << 19);
    // 0x80000F28: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x80000F2C: ori         $t4, $t9, 0x13F
    ctx->r12 = ctx->r25 | 0X13F;
    // 0x80000F30: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x80000F34: lw          $t5, -0x3A38($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X3A38);
    // 0x80000F38: lui         $t6, 0x4
    ctx->r14 = S32(0X4 << 16);
    // 0x80000F3C: lui         $t9, 0x8026
    ctx->r25 = S32(0X8026 << 16);
    // 0x80000F40: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80000F44: lh          $t6, -0x5250($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X5250);
    // 0x80000F48: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80000F4C: addiu       $t9, $t9, 0x1000
    ctx->r25 = ADD32(ctx->r25, 0X1000);
    // 0x80000F50: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80000F54: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80000F58: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80000F5C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80000F60: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80000F64: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80000F68: sll         $t7, $t7, 11
    ctx->r15 = S32(ctx->r15 << 11);
    // 0x80000F6C: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x80000F70: addu        $t4, $t8, $t9
    ctx->r12 = ADD32(ctx->r24, ctx->r25);
    // 0x80000F74: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x80000F78: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80000F7C: lui         $t7, 0x1
    ctx->r15 = S32(0X1 << 16);
    // 0x80000F80: ori         $t7, $t7, 0x1
    ctx->r15 = ctx->r15 | 0X1;
    // 0x80000F84: addiu       $t5, $v0, 0x8
    ctx->r13 = ADD32(ctx->r2, 0X8);
    // 0x80000F88: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x80000F8C: lui         $t6, 0xF700
    ctx->r14 = S32(0XF700 << 16);
    // 0x80000F90: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x80000F94: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80000F98: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x80000F9C: lhu         $t8, 0x48F4($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X48F4);
    // 0x80000FA0: ori         $a3, $a3, 0xC3BC
    ctx->r7 = ctx->r7 | 0XC3BC;
    // 0x80000FA4: multu       $t8, $t2
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80000FA8: mflo        $v1
    ctx->r3 = lo;
    // 0x80000FAC: andi        $t9, $v1, 0xFFFF
    ctx->r25 = ctx->r3 & 0XFFFF;
    // 0x80000FB0: slti        $at, $t9, 0xA0
    ctx->r1 = SIGNED(ctx->r25) < 0XA0 ? 1 : 0;
    // 0x80000FB4: bne         $at, $zero, L_80000FC0
    if (ctx->r1 != 0) {
        // 0x80000FB8: or          $v1, $t9, $zero
        ctx->r3 = ctx->r25 | 0;
            goto L_80000FC0;
    }
    // 0x80000FB8: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
    // 0x80000FBC: addiu       $v1, $zero, 0xA0
    ctx->r3 = ADD32(0, 0XA0);
L_80000FC0:
    // 0x80000FC0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80000FC4: andi        $t5, $v1, 0x3FF
    ctx->r13 = ctx->r3 & 0X3FF;
    // 0x80000FC8: sll         $t6, $t5, 14
    ctx->r14 = S32(ctx->r13 << 14);
    // 0x80000FCC: lui         $at, 0xF600
    ctx->r1 = S32(0XF600 << 16);
    // 0x80000FD0: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x80000FD4: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x80000FD8: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x80000FDC: ori         $t8, $t7, 0x3BC
    ctx->r24 = ctx->r15 | 0X3BC;
    // 0x80000FE0: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x80000FE4: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80000FE8: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80000FEC: lhu         $t9, 0x48F4($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0X48F4);
    // 0x80000FF0: addiu       $t5, $zero, 0x140
    ctx->r13 = ADD32(0, 0X140);
    // 0x80000FF4: multu       $t9, $t2
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80000FF8: mflo        $t4
    ctx->r12 = lo;
    // 0x80000FFC: subu        $v1, $t5, $t4
    ctx->r3 = SUB32(ctx->r13, ctx->r12);
    // 0x80001000: andi        $a2, $v1, 0xFFFF
    ctx->r6 = ctx->r3 & 0XFFFF;
    // 0x80001004: slti        $at, $a2, 0x140
    ctx->r1 = SIGNED(ctx->r6) < 0X140 ? 1 : 0;
    // 0x80001008: bne         $at, $zero, L_80001018
    if (ctx->r1 != 0) {
        // 0x8000100C: or          $v1, $a2, $zero
        ctx->r3 = ctx->r6 | 0;
            goto L_80001018;
    }
    // 0x8000100C: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
    // 0x80001010: addiu       $v1, $zero, 0x13F
    ctx->r3 = ADD32(0, 0X13F);
    // 0x80001014: addiu       $a2, $zero, 0x13F
    ctx->r6 = ADD32(0, 0X13F);
L_80001018:
    // 0x80001018: slti        $at, $a2, 0xA1
    ctx->r1 = SIGNED(ctx->r6) < 0XA1 ? 1 : 0;
    // 0x8000101C: beq         $at, $zero, L_80001028
    if (ctx->r1 == 0) {
        // 0x80001020: lui         $t5, 0x8005
        ctx->r13 = S32(0X8005 << 16);
            goto L_80001028;
    }
    // 0x80001020: lui         $t5, 0x8005
    ctx->r13 = S32(0X8005 << 16);
    // 0x80001024: addiu       $v1, $zero, 0xA0
    ctx->r3 = ADD32(0, 0XA0);
L_80001028:
    // 0x80001028: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8000102C: andi        $t8, $v1, 0x3FF
    ctx->r24 = ctx->r3 & 0X3FF;
    // 0x80001030: sll         $t9, $t8, 14
    ctx->r25 = S32(ctx->r24 << 14);
    // 0x80001034: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80001038: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x8000103C: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x80001040: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x80001044: lhu         $t5, 0x48F4($t5)
    ctx->r13 = MEM_HU(ctx->r13, 0X48F4);
    // 0x80001048: multu       $t5, $t2
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8000104C: lui         $t5, 0x8005
    ctx->r13 = S32(0X8005 << 16);
    // 0x80001050: mflo        $v1
    ctx->r3 = lo;
    // 0x80001054: andi        $t4, $v1, 0xFFFF
    ctx->r12 = ctx->r3 & 0XFFFF;
    // 0x80001058: slti        $at, $t4, 0x76
    ctx->r1 = SIGNED(ctx->r12) < 0X76 ? 1 : 0;
    // 0x8000105C: bne         $at, $zero, L_80001068
    if (ctx->r1 != 0) {
        // 0x80001060: or          $v1, $t4, $zero
        ctx->r3 = ctx->r12 | 0;
            goto L_80001068;
    }
    // 0x80001060: or          $v1, $t4, $zero
    ctx->r3 = ctx->r12 | 0;
    // 0x80001064: addiu       $v1, $zero, 0x76
    ctx->r3 = ADD32(0, 0X76);
L_80001068:
    // 0x80001068: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8000106C: andi        $t7, $v1, 0x3FF
    ctx->r15 = ctx->r3 & 0X3FF;
    // 0x80001070: lui         $at, 0xF64F
    ctx->r1 = S32(0XF64F << 16);
    // 0x80001074: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80001078: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8000107C: ori         $at, $at, 0xC000
    ctx->r1 = ctx->r1 | 0XC000;
    // 0x80001080: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80001084: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x80001088: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8000108C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80001090: lhu         $t5, 0x48F4($t5)
    ctx->r13 = MEM_HU(ctx->r13, 0X48F4);
    // 0x80001094: addiu       $t6, $zero, 0xF0
    ctx->r14 = ADD32(0, 0XF0);
    // 0x80001098: multu       $t5, $t2
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8000109C: mflo        $t4
    ctx->r12 = lo;
    // 0x800010A0: subu        $v1, $t6, $t4
    ctx->r3 = SUB32(ctx->r14, ctx->r12);
    // 0x800010A4: andi        $a2, $v1, 0xFFFF
    ctx->r6 = ctx->r3 & 0XFFFF;
    // 0x800010A8: slti        $at, $a2, 0xF0
    ctx->r1 = SIGNED(ctx->r6) < 0XF0 ? 1 : 0;
    // 0x800010AC: bne         $at, $zero, L_800010BC
    if (ctx->r1 != 0) {
        // 0x800010B0: or          $v1, $a2, $zero
        ctx->r3 = ctx->r6 | 0;
            goto L_800010BC;
    }
    // 0x800010B0: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
    // 0x800010B4: addiu       $v1, $zero, 0xEF
    ctx->r3 = ADD32(0, 0XEF);
    // 0x800010B8: addiu       $a2, $zero, 0xEF
    ctx->r6 = ADD32(0, 0XEF);
L_800010BC:
    // 0x800010BC: slti        $at, $a2, 0x7B
    ctx->r1 = SIGNED(ctx->r6) < 0X7B ? 1 : 0;
    // 0x800010C0: beql        $at, $zero, L_800010D0
    if (ctx->r1 == 0) {
        // 0x800010C4: lw          $v0, 0x0($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X0);
            goto L_800010D0;
    }
    goto skip_0;
    // 0x800010C4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    skip_0:
    // 0x800010C8: addiu       $v1, $zero, 0x7A
    ctx->r3 = ADD32(0, 0X7A);
    // 0x800010CC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
L_800010D0:
    // 0x800010D0: andi        $t9, $v1, 0x3FF
    ctx->r25 = ctx->r3 & 0X3FF;
    // 0x800010D4: sll         $t5, $t9, 2
    ctx->r13 = S32(ctx->r25 << 2);
    // 0x800010D8: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x800010DC: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x800010E0: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x800010E4: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x800010E8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800010EC: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x800010F0: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x800010F4: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x800010F8: jal         0x80001328
    // 0x800010FC: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    func_80001328_1F28(rdram, ctx);
        goto after_8;
    // 0x800010FC: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    after_8:
    // 0x80001100: jal         0x8000098C
    // 0x80001104: nop

    func_8000098C_158C(rdram, ctx);
        goto after_9;
    // 0x80001104: nop

    after_9:
    // 0x80001108: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000110C: sw          $zero, 0x48D8($at)
    MEM_W(0X48D8, ctx->r1) = 0;
L_80001110:
    // 0x80001110: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x80001114: lhu         $t4, 0x48F4($t4)
    ctx->r12 = MEM_HU(ctx->r12, 0X48F4);
    // 0x80001118: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x8000111C: bne         $t4, $at, L_80001190
    if (ctx->r12 != ctx->r1) {
        // 0x80001120: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_80001190;
    }
    // 0x80001120: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80001124: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80001128: jal         0x800405C0
    // 0x8000112C: nop

    osViSetYScale_recomp(rdram, ctx);
        goto after_10;
    // 0x8000112C: nop

    after_10:
    // 0x80001130: jal         0x80038BC8
    // 0x80001134: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80038BC8_397C8(rdram, ctx);
        goto after_11;
    // 0x80001134: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_11:
    // 0x80001138: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x8000113C: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x80001140: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80001144: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x80001148: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8000114C: sh          $zero, -0x5246($at)
    MEM_H(-0X5246, ctx->r1) = 0;
    // 0x80001150: lw          $t8, -0x3A38($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3A38);
    // 0x80001154: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80001158: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x8000115C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80001160: sh          $zero, -0x5244($at)
    MEM_H(-0X5244, ctx->r1) = 0;
    // 0x80001164: lw          $t9, -0x3A38($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3A38);
    // 0x80001168: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8000116C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80001170: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80001174: jal         0x80037B10
    // 0x80001178: sh          $zero, -0x5242($at)
    MEM_H(-0X5242, ctx->r1) = 0;
    func_80037B10_38710(rdram, ctx);
        goto after_12;
    // 0x80001178: sh          $zero, -0x5242($at)
    MEM_H(-0X5242, ctx->r1) = 0;
    after_12:
    // 0x8000117C: bne         $v0, $zero, L_80001190
    if (ctx->r2 != 0) {
        // 0x80001180: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_80001190;
    }
    // 0x80001180: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80001184: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80001188: jal         0x80037C20
    // 0x8000118C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80037C20_38820(rdram, ctx);
        goto after_13;
    // 0x8000118C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_13:
L_80001190:
    // 0x80001190: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80001194: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80001198: jr          $ra
    // 0x8000119C: nop

    TRACE_RETURN()
    return;
    // 0x8000119C: nop

;}
RECOMP_FUNC void func_800086C4_92C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800086C4: sw          $a1, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->r5;
    // 0x800086C8: sw          $a2, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r6;
    // 0x800086CC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800086D0: jr          $ra
    // 0x800086D4: sw          $a2, 0x2C38($at)
    MEM_W(0X2C38, ctx->r1) = ctx->r6;
    TRACE_RETURN()
    return;
    // 0x800086D4: sw          $a2, 0x2C38($at)
    MEM_W(0X2C38, ctx->r1) = ctx->r6;
;}
RECOMP_FUNC void _getRate(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004FCF4: addiu       $sp, $sp, -0xE8
    ctx->r29 = ADD32(ctx->r29, -0XE8);
    // 0x8004FCF8: bne         $a0, $zero, L_8004FD28
    if (ctx->r4 != 0) {
        // 0x8004FCFC: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8004FD28;
    }
    // 0x8004FCFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004FD00: c.le.d      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.d <= ctx->f14.d;
    // 0x8004FD04: ori         $t6, $zero, 0xFFFF
    ctx->r14 = 0 | 0XFFFF;
    // 0x8004FD08: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8004FD0C: bc1f        L_8004FD20
    if (!c1cs) {
        // 0x8004FD10: nop
    
            goto L_8004FD20;
    }
    // 0x8004FD10: nop

    // 0x8004FD14: sh          $t6, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r14;
    // 0x8004FD18: b           L_8004FEB4
    // 0x8004FD1C: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
        goto L_8004FEB4;
    // 0x8004FD1C: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
L_8004FD20:
    // 0x8004FD20: b           L_8004FEB4
    // 0x8004FD24: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
        goto L_8004FEB4;
    // 0x8004FD24: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
L_8004FD28:
    // 0x8004FD28: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8004FD2C: mtc1        $at, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r1;
    // 0x8004FD30: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x8004FD34: mtc1        $zero, $f5
    ctx->f_odd[(5 - 1) * 2] = 0;
    // 0x8004FD38: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8004FD3C: c.lt.d      $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f14.d < ctx->f22.d;
    // 0x8004FD40: addiu       $s2, $sp, 0x68
    ctx->r18 = ADD32(ctx->r29, 0X68);
    // 0x8004FD44: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x8004FD48: addiu       $t7, $t7, -0x5A10
    ctx->r15 = ADD32(ctx->r15, -0X5A10);
    // 0x8004FD4C: bc1f        L_8004FD58
    if (!c1cs) {
        // 0x8004FD50: or          $t6, $s2, $zero
        ctx->r14 = ctx->r18 | 0;
            goto L_8004FD58;
    }
    // 0x8004FD50: or          $t6, $s2, $zero
    ctx->r14 = ctx->r18 | 0;
    // 0x8004FD54: mov.d       $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    ctx->f14.d = ctx->f22.d;
L_8004FD58:
    // 0x8004FD58: c.le.d      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.d <= ctx->f4.d;
    // 0x8004FD5C: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8004FD60: addiu       $t9, $t7, 0x3C
    ctx->r25 = ADD32(ctx->r15, 0X3C);
    // 0x8004FD64: bc1f        L_8004FD78
    if (!c1cs) {
        // 0x8004FD68: nop
    
            goto L_8004FD78;
    }
    // 0x8004FD68: nop

    // 0x8004FD6C: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x8004FD70: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8004FD74: nop

L_8004FD78:
    // 0x8004FD78: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x8004FD7C: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x8004FD80: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x8004FD84: sw          $at, -0xC($t6)
    MEM_W(-0XC, ctx->r14) = ctx->r1;
    // 0x8004FD88: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x8004FD8C: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x8004FD90: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x8004FD94: bne         $t7, $t9, L_8004FD78
    if (ctx->r15 != ctx->r25) {
        // 0x8004FD98: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_8004FD78;
    }
    // 0x8004FD98: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x8004FD9C: mtc1        $a0, $f8
    ctx->f8.u32l = ctx->r4;
    // 0x8004FDA0: lui         $t8, 0x4000
    ctx->r24 = S32(0X4000 << 16);
    // 0x8004FDA4: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8004FDA8: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x8004FDAC: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x8004FDB0: addiu       $a2, $sp, 0xB0
    ctx->r6 = ADD32(ctx->r29, 0XB0);
    // 0x8004FDB4: cvt.d.w     $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    ctx->f20.d = CVT_D_W(ctx->f6.u32l);
    // 0x8004FDB8: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x8004FDBC: div.d       $f4, $f22, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f22.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = DIV_D(ctx->f22.d, ctx->f10.d);
    // 0x8004FDC0: div.d       $f12, $f14, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.d); NAN_CHECK(ctx->f16.d); 
    ctx->f12.d = DIV_D(ctx->f14.d, ctx->f16.d);
    // 0x8004FDC4: mul.d       $f2, $f4, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f20.d); 
    ctx->f2.d = MUL_D(ctx->f4.d, ctx->f20.d);
    // 0x8004FDC8: trunc.w.d   $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    ctx->f6.u32l = TRUNC_W_D(ctx->f2.d);
    // 0x8004FDCC: mfc1        $s0, $f6
    ctx->r16 = (int32_t)ctx->f6.u32l;
    // 0x8004FDD0: jal         0x8004FB28
    // 0x8004FDD4: nop

    _frexpf(rdram, ctx);
        goto after_0;
    // 0x8004FDD4: nop

    after_0:
    // 0x8004FDD8: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x8004FDDC: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x8004FDE0: lw          $t6, 0xB0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB0);
    // 0x8004FDE4: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8004FDE8: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x8004FDEC: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x8004FDF0: mul.d       $f2, $f0, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f10.d); 
    ctx->f2.d = MUL_D(ctx->f0.d, ctx->f10.d);
    // 0x8004FDF4: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x8004FDF8: ldc1        $f8, -0x2B30($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X2B30);
    // 0x8004FDFC: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8004FE00: trunc.w.d   $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    ctx->f4.u32l = TRUNC_W_D(ctx->f2.d);
    // 0x8004FE04: mov.d       $f2, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    ctx->f2.d = ctx->f22.d;
    // 0x8004FE08: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x8004FE0C: nop

    // 0x8004FE10: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x8004FE14: addu        $t7, $s2, $t9
    ctx->r15 = ADD32(ctx->r18, ctx->r25);
    // 0x8004FE18: ldc1        $f6, -0x40($t7)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r15, -0X40);
    // 0x8004FE1C: add.d       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = ctx->f6.d + ctx->f10.d;
    // 0x8004FE20: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8004FE24: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x8004FE28: mul.d       $f12, $f4, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f12.d = MUL_D(ctx->f4.d, ctx->f8.d);
    // 0x8004FE2C: nop

    // 0x8004FE30: mul.d       $f14, $f6, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f20.d); 
    ctx->f14.d = MUL_D(ctx->f6.d, ctx->f20.d);
    // 0x8004FE34: div.d       $f12, $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f14.d); 
    ctx->f12.d = DIV_D(ctx->f12.d, ctx->f14.d);
    // 0x8004FE38: beq         $s0, $zero, L_8004FE60
    if (ctx->r16 == 0) {
        // 0x8004FE3C: add.d       $f0, $f22, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f22.d); NAN_CHECK(ctx->f12.d); 
    ctx->f0.d = ctx->f22.d + ctx->f12.d;
            goto L_8004FE60;
    }
    // 0x8004FE3C: add.d       $f0, $f22, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f22.d); NAN_CHECK(ctx->f12.d); 
    ctx->f0.d = ctx->f22.d + ctx->f12.d;
L_8004FE40:
    // 0x8004FE40: andi        $t8, $s0, 0x1
    ctx->r24 = ctx->r16 & 0X1;
    // 0x8004FE44: beq         $t8, $zero, L_8004FE54
    if (ctx->r24 == 0) {
        // 0x8004FE48: sra         $t9, $s0, 1
        ctx->r25 = S32(SIGNED(ctx->r16) >> 1);
            goto L_8004FE54;
    }
    // 0x8004FE48: sra         $t9, $s0, 1
    ctx->r25 = S32(SIGNED(ctx->r16) >> 1);
    // 0x8004FE4C: mul.d       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = MUL_D(ctx->f2.d, ctx->f0.d);
    // 0x8004FE50: nop

L_8004FE54:
    // 0x8004FE54: mul.d       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = MUL_D(ctx->f0.d, ctx->f0.d);
    // 0x8004FE58: bne         $t9, $zero, L_8004FE40
    if (ctx->r25 != 0) {
        // 0x8004FE5C: or          $s0, $t9, $zero
        ctx->r16 = ctx->r25 | 0;
            goto L_8004FE40;
    }
    // 0x8004FE5C: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
L_8004FE60:
    // 0x8004FE60: mul.d       $f0, $f2, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = MUL_D(ctx->f2.d, ctx->f2.d);
    // 0x8004FE64: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8004FE68: mul.d       $f12, $f0, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f0.d); 
    ctx->f12.d = MUL_D(ctx->f0.d, ctx->f0.d);
    // 0x8004FE6C: nop

    // 0x8004FE70: mul.d       $f2, $f12, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f12.d); 
    ctx->f2.d = MUL_D(ctx->f12.d, ctx->f12.d);
    // 0x8004FE74: trunc.w.d   $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    ctx->f10.u32l = TRUNC_W_D(ctx->f2.d);
    // 0x8004FE78: mfc1        $v1, $f10
    ctx->r3 = (int32_t)ctx->f10.u32l;
    // 0x8004FE7C: nop

    // 0x8004FE80: sll         $t6, $v1, 16
    ctx->r14 = S32(ctx->r3 << 16);
    // 0x8004FE84: sra         $v0, $t6, 16
    ctx->r2 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8004FE88: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x8004FE8C: nop

    // 0x8004FE90: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8004FE94: ldc1        $f4, -0x2B28($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X2B28);
    // 0x8004FE98: cvt.d.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f6.d = CVT_D_S(ctx->f8.fl);
    // 0x8004FE9C: sub.d       $f10, $f2, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = ctx->f2.d - ctx->f6.d;
    // 0x8004FEA0: mul.d       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = MUL_D(ctx->f10.d, ctx->f4.d);
    // 0x8004FEA4: trunc.w.d   $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = TRUNC_W_D(ctx->f8.d);
    // 0x8004FEA8: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x8004FEAC: nop

    // 0x8004FEB0: sh          $t7, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r15;
L_8004FEB4:
    // 0x8004FEB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004FEB8: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
    // 0x8004FEBC: jr          $ra
    // 0x8004FEC0: nop

    TRACE_RETURN()
    return;
    // 0x8004FEC0: nop

;}
RECOMP_FUNC void func_8000A480_B080(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000A480: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8000A484: addiu       $t6, $zero, 0x85
    ctx->r14 = ADD32(0, 0X85);
    // 0x8000A488: ori         $t7, $zero, 0x8009
    ctx->r15 = 0 | 0X8009;
    // 0x8000A48C: addiu       $t8, $zero, 0x140
    ctx->r24 = ADD32(0, 0X140);
    // 0x8000A490: addiu       $t9, $zero, 0xF0
    ctx->r25 = ADD32(0, 0XF0);
    // 0x8000A494: addiu       $t0, $zero, 0x13F
    ctx->r8 = ADD32(0, 0X13F);
    // 0x8000A498: addiu       $t1, $zero, 0xEF
    ctx->r9 = ADD32(0, 0XEF);
    // 0x8000A49C: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x8000A4A0: sb          $t6, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r14;
    // 0x8000A4A4: sb          $zero, 0x5($a0)
    MEM_B(0X5, ctx->r4) = 0;
    // 0x8000A4A8: sh          $zero, 0x6($a0)
    MEM_H(0X6, ctx->r4) = 0;
    // 0x8000A4AC: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    // 0x8000A4B0: sw          $zero, 0x38($a0)
    MEM_W(0X38, ctx->r4) = 0;
    // 0x8000A4B4: sw          $zero, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = 0;
    // 0x8000A4B8: sh          $zero, 0xC($a0)
    MEM_H(0XC, ctx->r4) = 0;
    // 0x8000A4BC: sh          $t7, 0xE($a0)
    MEM_H(0XE, ctx->r4) = ctx->r15;
    // 0x8000A4C0: sh          $t8, 0x10($a0)
    MEM_H(0X10, ctx->r4) = ctx->r24;
    // 0x8000A4C4: sh          $t9, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r25;
    // 0x8000A4C8: sh          $zero, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = 0;
    // 0x8000A4CC: sh          $zero, 0x30($a0)
    MEM_H(0X30, ctx->r4) = 0;
    // 0x8000A4D0: sh          $t0, 0x32($a0)
    MEM_H(0X32, ctx->r4) = ctx->r8;
    // 0x8000A4D4: sh          $t1, 0x34($a0)
    MEM_H(0X34, ctx->r4) = ctx->r9;
    // 0x8000A4D8: sh          $t2, 0x40($a0)
    MEM_H(0X40, ctx->r4) = ctx->r10;
    // 0x8000A4DC: swc1        $f0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f0.u32l;
    // 0x8000A4E0: swc1        $f0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f0.u32l;
    // 0x8000A4E4: swc1        $f0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f0.u32l;
    // 0x8000A4E8: swc1        $f0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f0.u32l;
    // 0x8000A4EC: swc1        $f0, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f0.u32l;
    // 0x8000A4F0: jr          $ra
    // 0x8000A4F4: swc1        $f0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f0.u32l;
    TRACE_RETURN()
    return;
    // 0x8000A4F4: swc1        $f0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_8000E2D4_EED4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000E2D4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8000E2D8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8000E2DC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8000E2E0: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x8000E2E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000E2E8: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8000E2EC: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8000E2F0: bc1f        L_8000E300
    if (!c1cs) {
        // 0x8000E2F4: lhu         $a0, 0x26($sp)
        ctx->r4 = MEM_HU(ctx->r29, 0X26);
            goto L_8000E300;
    }
    // 0x8000E2F4: lhu         $a0, 0x26($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X26);
    // 0x8000E2F8: b           L_8000E304
    // 0x8000E2FC: neg.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = -ctx->f12.fl;
        goto L_8000E304;
    // 0x8000E2FC: neg.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = -ctx->f12.fl;
L_8000E300:
    // 0x8000E300: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
L_8000E304:
    // 0x8000E304: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    // 0x8000E308: jal         0x80003E10
    // 0x8000E30C: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    func_80003E10_4A10(rdram, ctx);
        goto after_0;
    // 0x8000E30C: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x8000E310: lwc1        $f2, 0x18($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8000E314: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8000E318: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8000E31C: mul.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x8000E320: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8000E324: c.lt.s      $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f12.fl < ctx->f8.fl;
    // 0x8000E328: nop

    // 0x8000E32C: bc1f        L_8000E33C
    if (!c1cs) {
        // 0x8000E330: swc1        $f6, 0x74($t6)
        MEM_W(0X74, ctx->r14) = ctx->f6.u32l;
            goto L_8000E33C;
    }
    // 0x8000E330: swc1        $f6, 0x74($t6)
    MEM_W(0X74, ctx->r14) = ctx->f6.u32l;
    // 0x8000E334: b           L_8000E340
    // 0x8000E338: neg.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = -ctx->f12.fl;
        goto L_8000E340;
    // 0x8000E338: neg.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = -ctx->f12.fl;
L_8000E33C:
    // 0x8000E33C: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
L_8000E340:
    // 0x8000E340: lhu         $a0, 0x26($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X26);
    // 0x8000E344: jal         0x80003EA0
    // 0x8000E348: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    func_80003EA0_4AA0(rdram, ctx);
        goto after_1;
    // 0x8000E348: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    after_1:
    // 0x8000E34C: lwc1        $f2, 0x18($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8000E350: lhu         $a0, 0x2A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X2A);
    // 0x8000E354: mul.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x8000E358: jal         0x80003E10
    // 0x8000E35C: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    func_80003E10_4A10(rdram, ctx);
        goto after_2;
    // 0x8000E35C: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    after_2:
    // 0x8000E360: lwc1        $f16, 0x1C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8000E364: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8000E368: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x8000E36C: swc1        $f18, 0x70($t7)
    MEM_W(0X70, ctx->r15) = ctx->f18.u32l;
    // 0x8000E370: jal         0x80003EA0
    // 0x8000E374: lhu         $a0, 0x2A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X2A);
    func_80003EA0_4AA0(rdram, ctx);
        goto after_3;
    // 0x8000E374: lhu         $a0, 0x2A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X2A);
    after_3:
    // 0x8000E378: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8000E37C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8000E380: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8000E384: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8000E388: swc1        $f6, 0x78($t8)
    MEM_W(0X78, ctx->r24) = ctx->f6.u32l;
    // 0x8000E38C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000E390: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8000E394: jr          $ra
    // 0x8000E398: nop

    TRACE_RETURN()
    return;
    // 0x8000E398: nop

;}
RECOMP_FUNC void func_80034C84_35884(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80034C84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80034C88: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80034C8C: andi        $a3, $a1, 0xFFFF
    ctx->r7 = ctx->r5 & 0XFFFF;
    // 0x80034C90: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80034C94: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80034C98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80034C9C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80034CA0: lw          $a0, -0x254C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X254C);
    // 0x80034CA4: jal         0x80034CBC
    // 0x80034CA8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80034CBC_358BC(rdram, ctx);
        goto after_0;
    // 0x80034CA8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
    // 0x80034CAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80034CB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80034CB4: jr          $ra
    // 0x80034CB8: nop

    TRACE_RETURN()
    return;
    // 0x80034CB8: nop

;}
RECOMP_FUNC void func_80034CBC_358BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80034CBC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80034CC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80034CC4: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80034CC8: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80034CCC: jal         0x80034B58
    // 0x80034CD0: andi        $a2, $a3, 0xFFFF
    ctx->r6 = ctx->r7 & 0XFFFF;
    func_80034B58_35758(rdram, ctx);
        goto after_0;
    // 0x80034CD0: andi        $a2, $a3, 0xFFFF
    ctx->r6 = ctx->r7 & 0XFFFF;
    after_0:
    // 0x80034CD4: bne         $v0, $zero, L_80034CE4
    if (ctx->r2 != 0) {
        // 0x80034CD8: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80034CE4;
    }
    // 0x80034CD8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80034CDC: b           L_80034D14
    // 0x80034CE0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80034D14;
    // 0x80034CE0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80034CE4:
    // 0x80034CE4: beq         $v0, $zero, L_80034D10
    if (ctx->r2 == 0) {
        // 0x80034CE8: lh          $a1, 0x2A($sp)
        ctx->r5 = MEM_H(ctx->r29, 0X2A);
            goto L_80034D10;
    }
    // 0x80034CE8: lh          $a1, 0x2A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X2A);
    // 0x80034CEC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80034CF0: jal         0x80035DFC
    // 0x80034CF4: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_80035DFC_369FC(rdram, ctx);
        goto after_1;
    // 0x80034CF4: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_1:
    // 0x80034CF8: bne         $v0, $zero, L_80034D10
    if (ctx->r2 != 0) {
        // 0x80034CFC: lw          $a0, 0x1C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X1C);
            goto L_80034D10;
    }
    // 0x80034CFC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80034D00: jal         0x80035044
    // 0x80034D04: nop

    func_80035044_35C44(rdram, ctx);
        goto after_2;
    // 0x80034D04: nop

    after_2:
    // 0x80034D08: b           L_80034D14
    // 0x80034D0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80034D14;
    // 0x80034D0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80034D10:
    // 0x80034D10: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_80034D14:
    // 0x80034D14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80034D18: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80034D1C: jr          $ra
    // 0x80034D20: nop

    TRACE_RETURN()
    return;
    // 0x80034D20: nop

;}
RECOMP_FUNC void alResampleNew(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004E40C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8004E410: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8004E414: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8004E418: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x8004E41C: lui         $a2, 0x8005
    ctx->r6 = S32(0X8005 << 16);
    // 0x8004E420: addiu       $a2, $a2, -0x800
    ctx->r6 = ADD32(ctx->r6, -0X800);
    // 0x8004E424: addiu       $a1, $a1, -0x714
    ctx->r5 = ADD32(ctx->r5, -0X714);
    // 0x8004E428: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8004E42C: jal         0x800518C0
    // 0x8004E430: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    alFilterNew(rdram, ctx);
        goto after_0;
    // 0x8004E430: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x8004E434: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x8004E438: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8004E43C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8004E440: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8004E444: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x8004E448: jal         0x800476B0
    // 0x8004E44C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    alHeapDBAlloc(rdram, ctx);
        goto after_1;
    // 0x8004E44C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x8004E450: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8004E454: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8004E458: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8004E45C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8004E460: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8004E464: sw          $v0, 0x14($t0)
    MEM_W(0X14, ctx->r8) = ctx->r2;
    // 0x8004E468: sw          $t7, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->r15;
    // 0x8004E46C: sw          $zero, 0x30($t0)
    MEM_W(0X30, ctx->r8) = 0;
    // 0x8004E470: sw          $zero, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = 0;
    // 0x8004E474: sw          $zero, 0x28($t0)
    MEM_W(0X28, ctx->r8) = 0;
    // 0x8004E478: sw          $zero, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = 0;
    // 0x8004E47C: swc1        $f4, 0x20($t0)
    MEM_W(0X20, ctx->r8) = ctx->f4.u32l;
    // 0x8004E480: swc1        $f6, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->f6.u32l;
    // 0x8004E484: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8004E488: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8004E48C: jr          $ra
    // 0x8004E490: nop

    TRACE_RETURN()
    return;
    // 0x8004E490: nop

;}
RECOMP_FUNC void func_80001D94_2994(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80001D94: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x80001D98: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80001D9C: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x80001DA0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80001DA4: lw          $t8, 0x73D8($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X73D8);
    // 0x80001DA8: lui         $v1, 0x7FFF
    ctx->r3 = S32(0X7FFF << 16);
    // 0x80001DAC: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x80001DB0: and         $t9, $t8, $v1
    ctx->r25 = ctx->r24 & ctx->r3;
    // 0x80001DB4: and         $v0, $t9, $v1
    ctx->r2 = ctx->r25 & ctx->r3;
    // 0x80001DB8: jr          $ra
    // 0x80001DBC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    TRACE_RETURN()
    return;
    // 0x80001DBC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_8003A060_3AC60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003A060: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8003A064: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003A068: addiu       $v0, $v0, 0x9D0
    ctx->r2 = ADD32(ctx->r2, 0X9D0);
    // 0x8003A06C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8003A070: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8003A074: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8003A078: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8003A07C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8003A080: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8003A084: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8003A088: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8003A08C: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x8003A090: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8003A094: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8003A098: bne         $t6, $zero, L_8003A110
    if (ctx->r14 != 0) {
        // 0x8003A09C: lui         $s1, 0x801C
        ctx->r17 = S32(0X801C << 16);
            goto L_8003A110;
    }
    // 0x8003A09C: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x8003A0A0: lui         $s4, 0x801C
    ctx->r20 = S32(0X801C << 16);
    // 0x8003A0A4: lui         $s3, 0x8008
    ctx->r19 = S32(0X8008 << 16);
    // 0x8003A0A8: lui         $s2, 0x801C
    ctx->r18 = S32(0X801C << 16);
    // 0x8003A0AC: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    // 0x8003A0B0: addiu       $s2, $s2, 0x1728
    ctx->r18 = ADD32(ctx->r18, 0X1728);
    // 0x8003A0B4: addiu       $s3, $s3, -0x5DD0
    ctx->r19 = ADD32(ctx->r19, -0X5DD0);
    // 0x8003A0B8: addiu       $s4, $s4, 0xA68
    ctx->r20 = ADD32(ctx->r20, 0XA68);
    // 0x8003A0BC: addiu       $s1, $s1, 0xC28
    ctx->r17 = ADD32(ctx->r17, 0XC28);
    // 0x8003A0C0: addiu       $s6, $zero, 0x10
    ctx->r22 = ADD32(0, 0X10);
    // 0x8003A0C4: addiu       $s5, $zero, 0x1C
    ctx->r21 = ADD32(0, 0X1C);
L_8003A0C8:
    // 0x8003A0C8: sw          $s1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r17;
    // 0x8003A0CC: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x8003A0D0: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x8003A0D4: beql        $t8, $zero, L_8003A108
    if (ctx->r24 == 0) {
        // 0x8003A0D8: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8003A108;
    }
    goto skip_0;
    // 0x8003A0D8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x8003A0DC: multu       $s0, $s5
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003A0E0: lbu         $t9, 0x6($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X6);
    // 0x8003A0E4: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x8003A0E8: ori         $t0, $t9, 0x1
    ctx->r8 = ctx->r25 | 0X1;
    // 0x8003A0EC: sb          $t0, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r8;
    // 0x8003A0F0: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x8003A0F4: mflo        $t1
    ctx->r9 = lo;
    // 0x8003A0F8: addu        $a1, $s4, $t1
    ctx->r5 = ADD32(ctx->r20, ctx->r9);
    // 0x8003A0FC: jal         0x800485B0
    // 0x8003A100: nop

    alSynSetPan(rdram, ctx);
        goto after_0;
    // 0x8003A100: nop

    after_0:
    // 0x8003A104: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8003A108:
    // 0x8003A108: bne         $s0, $s6, L_8003A0C8
    if (ctx->r16 != ctx->r22) {
        // 0x8003A10C: addiu       $s1, $s1, 0xB0
        ctx->r17 = ADD32(ctx->r17, 0XB0);
            goto L_8003A0C8;
    }
    // 0x8003A10C: addiu       $s1, $s1, 0xB0
    ctx->r17 = ADD32(ctx->r17, 0XB0);
L_8003A110:
    // 0x8003A110: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8003A114: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8003A118: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8003A11C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8003A120: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8003A124: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8003A128: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8003A12C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8003A130: jr          $ra
    // 0x8003A134: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8003A134: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80010358_10F58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80010358: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8001035C: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80010360: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80010364: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80010368: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8001036C: jr          $ra
    // 0x80010370: sh          $zero, 0x7EFA($at)
    MEM_H(0X7EFA, ctx->r1) = 0;
    TRACE_RETURN()
    return;
    // 0x80010370: sh          $zero, 0x7EFA($at)
    MEM_H(0X7EFA, ctx->r1) = 0;
;}
RECOMP_FUNC void func_80024088_24C88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80024088: bgez        $a0, L_80024098
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8002408C: sra         $t6, $a0, 3
        ctx->r14 = S32(SIGNED(ctx->r4) >> 3);
            goto L_80024098;
    }
    // 0x8002408C: sra         $t6, $a0, 3
    ctx->r14 = S32(SIGNED(ctx->r4) >> 3);
    // 0x80024090: addiu       $at, $a0, 0x7
    ctx->r1 = ADD32(ctx->r4, 0X7);
    // 0x80024094: sra         $t6, $at, 3
    ctx->r14 = S32(SIGNED(ctx->r1) >> 3);
L_80024098:
    // 0x80024098: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x8002409C: addiu       $t8, $t8, -0x39F8
    ctx->r24 = ADD32(ctx->r24, -0X39F8);
    // 0x800240A0: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x800240A4: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x800240A8: lbu         $t9, 0x0($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X0);
    // 0x800240AC: bgez        $a0, L_800240C0
    if (SIGNED(ctx->r4) >= 0) {
        // 0x800240B0: andi        $t0, $a0, 0x7
        ctx->r8 = ctx->r4 & 0X7;
            goto L_800240C0;
    }
    // 0x800240B0: andi        $t0, $a0, 0x7
    ctx->r8 = ctx->r4 & 0X7;
    // 0x800240B4: beq         $t0, $zero, L_800240C0
    if (ctx->r8 == 0) {
        // 0x800240B8: nop
    
            goto L_800240C0;
    }
    // 0x800240B8: nop

    // 0x800240BC: addiu       $t0, $t0, -0x8
    ctx->r8 = ADD32(ctx->r8, -0X8);
L_800240C0:
    // 0x800240C0: andi        $t1, $t0, 0xFF
    ctx->r9 = ctx->r8 & 0XFF;
    // 0x800240C4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800240C8: sllv        $t4, $t2, $t1
    ctx->r12 = S32(ctx->r10 << (ctx->r9 & 31));
    // 0x800240CC: nor         $t5, $t4, $zero
    ctx->r13 = ~(ctx->r12 | 0);
    // 0x800240D0: and         $t6, $t9, $t5
    ctx->r14 = ctx->r25 & ctx->r13;
    // 0x800240D4: jr          $ra
    // 0x800240D8: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x800240D8: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
;}
RECOMP_FUNC void func_80016AA4_176A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80016AA4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80016AA8: lw          $t6, -0x7B5C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X7B5C);
    // 0x80016AAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80016AB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80016AB4: bne         $t6, $zero, L_80016AF0
    if (ctx->r14 != 0) {
        // 0x80016AB8: nop
    
            goto L_80016AF0;
    }
    // 0x80016AB8: nop

    // 0x80016ABC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80016AC0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80016AC4: addiu       $a0, $a0, -0x7B50
    ctx->r4 = ADD32(ctx->r4, -0X7B50);
    // 0x80016AC8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80016ACC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80016AD0: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80016AD4: jal         0x8001E444
    // 0x80016AD8: nop

    func_8001E444_1F044(rdram, ctx);
        goto after_0;
    // 0x80016AD8: nop

    after_0:
    // 0x80016ADC: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x80016AE0: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x80016AE4: addiu       $a1, $a1, -0x7B50
    ctx->r5 = ADD32(ctx->r5, -0X7B50);
    // 0x80016AE8: jal         0x80017D8C
    // 0x80016AEC: addiu       $a0, $a0, -0x49C0
    ctx->r4 = ADD32(ctx->r4, -0X49C0);
    func_80017D8C_1898C(rdram, ctx);
        goto after_1;
    // 0x80016AEC: addiu       $a0, $a0, -0x49C0
    ctx->r4 = ADD32(ctx->r4, -0X49C0);
    after_1:
L_80016AF0:
    // 0x80016AF0: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80016AF4: addiu       $t4, $t4, -0x7B08
    ctx->r12 = ADD32(ctx->r12, -0X7B08);
    // 0x80016AF8: lw          $v0, 0x0($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X0);
    // 0x80016AFC: lui         $a3, 0x8016
    ctx->r7 = S32(0X8016 << 16);
    // 0x80016B00: addiu       $a3, $a3, -0x3A34
    ctx->r7 = ADD32(ctx->r7, -0X3A34);
    // 0x80016B04: bltz        $v0, L_80016C30
    if (SIGNED(ctx->r2) < 0) {
        // 0x80016B08: lui         $t1, 0x8017
        ctx->r9 = S32(0X8017 << 16);
            goto L_80016C30;
    }
    // 0x80016B08: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80016B0C: bne         $v0, $zero, L_80016B20
    if (ctx->r2 != 0) {
        // 0x80016B10: addiu       $t1, $t1, -0x7B04
        ctx->r9 = ADD32(ctx->r9, -0X7B04);
            goto L_80016B20;
    }
    // 0x80016B10: addiu       $t1, $t1, -0x7B04
    ctx->r9 = ADD32(ctx->r9, -0X7B04);
    // 0x80016B14: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x80016B18: sw          $t7, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r15;
    // 0x80016B1C: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_80016B20:
    // 0x80016B20: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x80016B24: sw          $v0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r2;
    // 0x80016B28: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x80016B2C: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x80016B30: sw          $t8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r24;
    // 0x80016B34: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80016B38: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80016B3C: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x80016B40: lui         $t6, 0xB700
    ctx->r14 = S32(0XB700 << 16);
    // 0x80016B44: lui         $t7, 0x2
    ctx->r15 = S32(0X2 << 16);
    // 0x80016B48: addiu       $t5, $v1, 0x8
    ctx->r13 = ADD32(ctx->r3, 0X8);
    // 0x80016B4C: sw          $t5, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r13;
    // 0x80016B50: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x80016B54: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80016B58: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x80016B5C: lui         $t9, 0xBC00
    ctx->r25 = S32(0XBC00 << 16);
    // 0x80016B60: ori         $t9, $t9, 0x2
    ctx->r25 = ctx->r25 | 0X2;
    // 0x80016B64: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x80016B68: sw          $t8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r24;
    // 0x80016B6C: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80016B70: lw          $t5, 0x0($t1)
    ctx->r13 = MEM_W(ctx->r9, 0X0);
    // 0x80016B74: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80016B78: ori         $at, $at, 0x20
    ctx->r1 = ctx->r1 | 0X20;
    // 0x80016B7C: sll         $t6, $t5, 5
    ctx->r14 = S32(ctx->r13 << 5);
    // 0x80016B80: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
    // 0x80016B84: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x80016B88: lw          $t0, 0x0($t1)
    ctx->r8 = MEM_W(ctx->r9, 0X0);
    // 0x80016B8C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80016B90: addiu       $a1, $zero, 0x86
    ctx->r5 = ADD32(0, 0X86);
    // 0x80016B94: blez        $t0, L_80016BF4
    if (SIGNED(ctx->r8) <= 0) {
        // 0x80016B98: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_80016BF4;
    }
    // 0x80016B98: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80016B9C: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80016BA0: addiu       $t3, $t3, -0x7B58
    ctx->r11 = ADD32(ctx->r11, -0X7B58);
    // 0x80016BA4: lui         $t2, 0x300
    ctx->r10 = S32(0X300 << 16);
    // 0x80016BA8: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
L_80016BAC:
    // 0x80016BAC: andi        $t9, $a1, 0xFF
    ctx->r25 = ctx->r5 & 0XFF;
    // 0x80016BB0: sll         $t5, $t9, 16
    ctx->r13 = S32(ctx->r25 << 16);
    // 0x80016BB4: or          $t6, $t5, $t2
    ctx->r14 = ctx->r13 | ctx->r10;
    // 0x80016BB8: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x80016BBC: sw          $t8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r24;
    // 0x80016BC0: ori         $t7, $t6, 0x10
    ctx->r15 = ctx->r14 | 0X10;
    // 0x80016BC4: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80016BC8: lw          $t8, 0x0($t3)
    ctx->r24 = MEM_W(ctx->r11, 0X0);
    // 0x80016BCC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80016BD0: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x80016BD4: addu        $t9, $t8, $a2
    ctx->r25 = ADD32(ctx->r24, ctx->r6);
    // 0x80016BD8: addiu       $t5, $t9, 0x8
    ctx->r13 = ADD32(ctx->r25, 0X8);
    // 0x80016BDC: sw          $t5, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r13;
    // 0x80016BE0: lw          $t0, 0x0($t1)
    ctx->r8 = MEM_W(ctx->r9, 0X0);
    // 0x80016BE4: addiu       $a2, $a2, 0x10
    ctx->r6 = ADD32(ctx->r6, 0X10);
    // 0x80016BE8: slt         $at, $a0, $t0
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80016BEC: bnel        $at, $zero, L_80016BAC
    if (ctx->r1 != 0) {
        // 0x80016BF0: lw          $v1, 0x0($a3)
        ctx->r3 = MEM_W(ctx->r7, 0X0);
            goto L_80016BAC;
    }
    goto skip_0;
    // 0x80016BF0: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    skip_0:
L_80016BF4:
    // 0x80016BF4: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x80016BF8: sll         $t7, $t0, 1
    ctx->r15 = S32(ctx->r8 << 1);
    // 0x80016BFC: addiu       $t8, $t7, 0x86
    ctx->r24 = ADD32(ctx->r15, 0X86);
    // 0x80016C00: andi        $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 & 0XFF;
    // 0x80016C04: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x80016C08: lui         $t2, 0x300
    ctx->r10 = S32(0X300 << 16);
    // 0x80016C0C: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
    // 0x80016C10: sll         $t5, $t9, 16
    ctx->r13 = S32(ctx->r25 << 16);
    // 0x80016C14: or          $t6, $t5, $t2
    ctx->r14 = ctx->r13 | ctx->r10;
    // 0x80016C18: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80016C1C: ori         $t7, $t6, 0x10
    ctx->r15 = ctx->r14 | 0X10;
    // 0x80016C20: addiu       $t3, $t3, -0x7B58
    ctx->r11 = ADD32(ctx->r11, -0X7B58);
    // 0x80016C24: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80016C28: lw          $t8, 0x0($t3)
    ctx->r24 = MEM_W(ctx->r11, 0X0);
    // 0x80016C2C: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
L_80016C30:
    // 0x80016C30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80016C34: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x80016C38: sw          $t9, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r25;
    // 0x80016C3C: jr          $ra
    // 0x80016C40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80016C40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80013484_14084(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80013484: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x80013488: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8001348C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80013490: andi        $t7, $a2, 0xFF
    ctx->r15 = ctx->r6 & 0XFF;
    // 0x80013494: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x80013498: andi        $t8, $a3, 0xFF
    ctx->r24 = ctx->r7 & 0XFF;
    // 0x8001349C: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    // 0x800134A0: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x800134A4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x800134A8: bgez        $t6, L_800134C0
    if (SIGNED(ctx->r14) >= 0) {
        // 0x800134AC: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_800134C0;
    }
    // 0x800134AC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800134B0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800134B4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800134B8: nop

    // 0x800134BC: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_800134C0:
    // 0x800134C0: mtc1        $a2, $f10
    ctx->f10.u32l = ctx->r6;
    // 0x800134C4: swc1        $f6, 0xA8($a0)
    MEM_W(0XA8, ctx->r4) = ctx->f6.u32l;
    // 0x800134C8: bgez        $a2, L_800134E0
    if (SIGNED(ctx->r6) >= 0) {
        // 0x800134CC: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_800134E0;
    }
    // 0x800134CC: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800134D0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800134D4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800134D8: nop

    // 0x800134DC: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
L_800134E0:
    // 0x800134E0: mtc1        $a3, $f4
    ctx->f4.u32l = ctx->r7;
    // 0x800134E4: swc1        $f16, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->f16.u32l;
    // 0x800134E8: bgez        $a3, L_80013500
    if (SIGNED(ctx->r7) >= 0) {
        // 0x800134EC: cvt.s.w     $f8, $f4
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80013500;
    }
    // 0x800134EC: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800134F0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800134F4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800134F8: nop

    // 0x800134FC: add.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f6.fl;
L_80013500:
    // 0x80013500: jr          $ra
    // 0x80013504: swc1        $f8, 0xC0($a0)
    MEM_W(0XC0, ctx->r4) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x80013504: swc1        $f8, 0xC0($a0)
    MEM_W(0XC0, ctx->r4) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_80018CA0_198A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80018CA0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80018CA4: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80018CA8: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80018CAC: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80018CB0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80018CB4: lui         $s3, 0x8017
    ctx->r19 = S32(0X8017 << 16);
    // 0x80018CB8: lui         $s6, 0x8017
    ctx->r22 = S32(0X8017 << 16);
    // 0x80018CBC: lui         $s7, 0x8FFF
    ctx->r23 = S32(0X8FFF << 16);
    // 0x80018CC0: lui         $fp, 0x8017
    ctx->r30 = S32(0X8017 << 16);
    // 0x80018CC4: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80018CC8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80018CCC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80018CD0: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80018CD4: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x80018CD8: addiu       $s5, $zero, 0x18
    ctx->r21 = ADD32(0, 0X18);
    // 0x80018CDC: addiu       $fp, $fp, -0x7B10
    ctx->r30 = ADD32(ctx->r30, -0X7B10);
    // 0x80018CE0: ori         $s7, $s7, 0xFFFF
    ctx->r23 = ctx->r23 | 0XFFFF;
    // 0x80018CE4: addiu       $s6, $s6, -0x7ADC
    ctx->r22 = ADD32(ctx->r22, -0X7ADC);
    // 0x80018CE8: addiu       $s3, $s3, -0x7B60
    ctx->r19 = ADD32(ctx->r19, -0X7B60);
    // 0x80018CEC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80018CF0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80018CF4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80018CF8: lw          $t6, 0x30($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X30);
L_80018CFC:
    // 0x80018CFC: lw          $s4, 0x0($s3)
    ctx->r20 = MEM_W(ctx->r19, 0X0);
    // 0x80018D00: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80018D04: beq         $t6, $zero, L_80018D14
    if (ctx->r14 == 0) {
        // 0x80018D08: nop
    
            goto L_80018D14;
    }
    // 0x80018D08: nop

    // 0x80018D0C: sw          $zero, 0x0($s6)
    MEM_W(0X0, ctx->r22) = 0;
    // 0x80018D10: sw          $s2, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r18;
L_80018D14:
    // 0x80018D14: jal         0x800192D0
    // 0x80018D18: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_800192D0_19ED0(rdram, ctx);
        goto after_0;
    // 0x80018D18: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_0:
    // 0x80018D1C: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x80018D20: sll         $t7, $v1, 3
    ctx->r15 = S32(ctx->r3 << 3);
    // 0x80018D24: bltz        $t7, L_80018D48
    if (SIGNED(ctx->r15) < 0) {
        // 0x80018D28: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_80018D48;
    }
    // 0x80018D28: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80018D2C: and         $v0, $v1, $s7
    ctx->r2 = ctx->r3 & ctx->r23;
    // 0x80018D30: beql        $v0, $zero, L_80018E28
    if (ctx->r2 == 0) {
        // 0x80018D34: lhu         $t9, 0xC($s1)
        ctx->r25 = MEM_HU(ctx->r17, 0XC);
            goto L_80018E28;
    }
    goto skip_0;
    // 0x80018D34: lhu         $t9, 0xC($s1)
    ctx->r25 = MEM_HU(ctx->r17, 0XC);
    skip_0:
    // 0x80018D38: jal         0x800196F0
    // 0x80018D3C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800196F0_1A2F0(rdram, ctx);
        goto after_1;
    // 0x80018D3C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80018D40: b           L_80018E28
    // 0x80018D44: lhu         $t9, 0xC($s1)
    ctx->r25 = MEM_HU(ctx->r17, 0XC);
        goto L_80018E28;
    // 0x80018D44: lhu         $t9, 0xC($s1)
    ctx->r25 = MEM_HU(ctx->r17, 0XC);
L_80018D48:
    // 0x80018D48: beq         $v1, $zero, L_80018DC0
    if (ctx->r3 == 0) {
        // 0x80018D4C: sw          $v1, 0x0($fp)
        MEM_W(0X0, ctx->r30) = ctx->r3;
            goto L_80018DC0;
    }
    // 0x80018D4C: sw          $v1, 0x0($fp)
    MEM_W(0X0, ctx->r30) = ctx->r3;
    // 0x80018D50: sll         $t8, $v1, 0
    ctx->r24 = S32(ctx->r3 << 0);
    // 0x80018D54: bgez        $t8, L_80018D64
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80018D58: lui         $at, 0x800
        ctx->r1 = S32(0X800 << 16);
            goto L_80018D64;
    }
    // 0x80018D58: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x80018D5C: b           L_80018DC4
    // 0x80018D60: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_80018DC4;
    // 0x80018D60: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80018D64:
    // 0x80018D64: ori         $at, $at, 0x1
    ctx->r1 = ctx->r1 | 0X1;
    // 0x80018D68: sltu        $at, $v0, $at
    ctx->r1 = ctx->r2 < ctx->r1 ? 1 : 0;
    // 0x80018D6C: bne         $at, $zero, L_80018D9C
    if (ctx->r1 != 0) {
        // 0x80018D70: srl         $t0, $v0, 24
        ctx->r8 = S32(U32(ctx->r2) >> 24);
            goto L_80018D9C;
    }
    // 0x80018D70: srl         $t0, $v0, 24
    ctx->r8 = S32(U32(ctx->r2) >> 24);
    // 0x80018D74: lw          $t9, 0x0($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X0);
    // 0x80018D78: andi        $t1, $t0, 0xF
    ctx->r9 = ctx->r8 & 0XF;
    // 0x80018D7C: sll         $t2, $t1, 3
    ctx->r10 = S32(ctx->r9 << 3);
    // 0x80018D80: lui         $at, 0x80FF
    ctx->r1 = S32(0X80FF << 16);
    // 0x80018D84: addu        $t3, $t9, $t2
    ctx->r11 = ADD32(ctx->r25, ctx->r10);
    // 0x80018D88: lw          $t4, -0x8($t3)
    ctx->r12 = MEM_W(ctx->r11, -0X8);
    // 0x80018D8C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80018D90: and         $t5, $v0, $at
    ctx->r13 = ctx->r2 & ctx->r1;
    // 0x80018D94: b           L_80018DB4
    // 0x80018D98: addu        $a0, $t4, $t5
    ctx->r4 = ADD32(ctx->r12, ctx->r13);
        goto L_80018DB4;
    // 0x80018D98: addu        $a0, $t4, $t5
    ctx->r4 = ADD32(ctx->r12, ctx->r13);
L_80018D9C:
    // 0x80018D9C: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
    // 0x80018DA0: lui         $at, 0x80FF
    ctx->r1 = S32(0X80FF << 16);
    // 0x80018DA4: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80018DA8: lw          $t7, 0x38($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X38);
    // 0x80018DAC: and         $t8, $v0, $at
    ctx->r24 = ctx->r2 & ctx->r1;
    // 0x80018DB0: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
L_80018DB4:
    // 0x80018DB4: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80018DB8: b           L_80018DC4
    // 0x80018DBC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_80018DC4;
    // 0x80018DBC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80018DC0:
    // 0x80018DC0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80018DC4:
    // 0x80018DC4: and         $s0, $v0, $s7
    ctx->r16 = ctx->r2 & ctx->r23;
    // 0x80018DC8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80018DCC: beql        $a0, $zero, L_80018DE0
    if (ctx->r4 == 0) {
        // 0x80018DD0: lb          $v0, 0x4($s0)
        ctx->r2 = MEM_B(ctx->r16, 0X4);
            goto L_80018DE0;
    }
    goto skip_1;
    // 0x80018DD0: lb          $v0, 0x4($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X4);
    skip_1:
    // 0x80018DD4: jal         0x800196F0
    // 0x80018DD8: nop

    func_800196F0_1A2F0(rdram, ctx);
        goto after_2;
    // 0x80018DD8: nop

    after_2:
    // 0x80018DDC: lb          $v0, 0x4($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X4);
L_80018DE0:
    // 0x80018DE0: beql        $v0, $zero, L_80018E04
    if (ctx->r2 == 0) {
        // 0x80018DE4: lb          $v0, 0x5($s0)
        ctx->r2 = MEM_B(ctx->r16, 0X5);
            goto L_80018E04;
    }
    goto skip_2;
    // 0x80018DE4: lb          $v0, 0x5($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X5);
    skip_2:
    // 0x80018DE8: multu       $v0, $s5
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80018DEC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80018DF0: mflo        $t0
    ctx->r8 = lo;
    // 0x80018DF4: addu        $a0, $s0, $t0
    ctx->r4 = ADD32(ctx->r16, ctx->r8);
    // 0x80018DF8: jal         0x80018CA0
    // 0x80018DFC: nop

    func_80018CA0_198A0(rdram, ctx);
        goto after_3;
    // 0x80018DFC: nop

    after_3:
    // 0x80018E00: lb          $v0, 0x5($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X5);
L_80018E04:
    // 0x80018E04: beql        $v0, $zero, L_80018E28
    if (ctx->r2 == 0) {
        // 0x80018E08: lhu         $t9, 0xC($s1)
        ctx->r25 = MEM_HU(ctx->r17, 0XC);
            goto L_80018E28;
    }
    goto skip_3;
    // 0x80018E08: lhu         $t9, 0xC($s1)
    ctx->r25 = MEM_HU(ctx->r17, 0XC);
    skip_3:
    // 0x80018E0C: multu       $v0, $s5
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80018E10: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80018E14: mflo        $t1
    ctx->r9 = lo;
    // 0x80018E18: addu        $a0, $s0, $t1
    ctx->r4 = ADD32(ctx->r16, ctx->r9);
    // 0x80018E1C: jal         0x80018CA0
    // 0x80018E20: nop

    func_80018CA0_198A0(rdram, ctx);
        goto after_4;
    // 0x80018E20: nop

    after_4:
    // 0x80018E24: lhu         $t9, 0xC($s1)
    ctx->r25 = MEM_HU(ctx->r17, 0XC);
L_80018E28:
    // 0x80018E28: lhu         $t2, 0xE($s1)
    ctx->r10 = MEM_HU(ctx->r17, 0XE);
    // 0x80018E2C: lhu         $t4, 0x10($s1)
    ctx->r12 = MEM_HU(ctx->r17, 0X10);
    // 0x80018E30: or          $t3, $t9, $t2
    ctx->r11 = ctx->r25 | ctx->r10;
    // 0x80018E34: or          $t5, $t3, $t4
    ctx->r13 = ctx->r11 | ctx->r12;
    // 0x80018E38: andi        $t6, $t5, 0x4000
    ctx->r14 = ctx->r13 & 0X4000;
    // 0x80018E3C: beql        $t6, $zero, L_80018E50
    if (ctx->r14 == 0) {
        // 0x80018E40: lw          $t7, 0x0($s3)
        ctx->r15 = MEM_W(ctx->r19, 0X0);
            goto L_80018E50;
    }
    goto skip_4;
    // 0x80018E40: lw          $t7, 0x0($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X0);
    skip_4:
    // 0x80018E44: jal         0x800196A4
    // 0x80018E48: nop

    func_800196A4_1A2A4(rdram, ctx);
        goto after_5;
    // 0x80018E48: nop

    after_5:
    // 0x80018E4C: lw          $t7, 0x0($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X0);
L_80018E50:
    // 0x80018E50: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80018E54: beql        $s4, $t7, L_80018E68
    if (ctx->r20 == ctx->r15) {
        // 0x80018E58: lb          $t8, 0x4($s1)
        ctx->r24 = MEM_B(ctx->r17, 0X4);
            goto L_80018E68;
    }
    goto skip_5;
    // 0x80018E58: lb          $t8, 0x4($s1)
    ctx->r24 = MEM_B(ctx->r17, 0X4);
    skip_5:
    // 0x80018E5C: sw          $zero, 0x0($s6)
    MEM_W(0X0, ctx->r22) = 0;
    // 0x80018E60: sw          $s4, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r20;
    // 0x80018E64: lb          $t8, 0x4($s1)
    ctx->r24 = MEM_B(ctx->r17, 0X4);
L_80018E68:
    // 0x80018E68: beql        $t8, $zero, L_80018EA4
    if (ctx->r24 == 0) {
        // 0x80018E6C: lw          $a1, 0x78($s2)
        ctx->r5 = MEM_W(ctx->r18, 0X78);
            goto L_80018EA4;
    }
    goto skip_6;
    // 0x80018E6C: lw          $a1, 0x78($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X78);
    skip_6:
    // 0x80018E70: jal         0x80018F3C
    // 0x80018E74: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_80018F3C_19B3C(rdram, ctx);
        goto after_6;
    // 0x80018E74: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_6:
    // 0x80018E78: beq         $v0, $zero, L_80018EB4
    if (ctx->r2 == 0) {
        // 0x80018E7C: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_80018EB4;
    }
    // 0x80018E7C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80018E80: lb          $t0, 0x4($s1)
    ctx->r8 = MEM_B(ctx->r17, 0X4);
    // 0x80018E84: multu       $t0, $s5
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80018E88: mflo        $t1
    ctx->r9 = lo;
    // 0x80018E8C: addu        $a0, $s1, $t1
    ctx->r4 = ADD32(ctx->r17, ctx->r9);
    // 0x80018E90: jal         0x80018CA0
    // 0x80018E94: nop

    func_80018CA0_198A0(rdram, ctx);
        goto after_7;
    // 0x80018E94: nop

    after_7:
    // 0x80018E98: b           L_80018EB4
    // 0x80018E9C: nop

        goto L_80018EB4;
    // 0x80018E9C: nop

    // 0x80018EA0: lw          $a1, 0x78($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X78);
L_80018EA4:
    // 0x80018EA4: beq         $a1, $zero, L_80018EB4
    if (ctx->r5 == 0) {
        // 0x80018EA8: nop
    
            goto L_80018EB4;
    }
    // 0x80018EA8: nop

    // 0x80018EAC: jal         0x8003674C
    // 0x80018EB0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8003674C_3734C(rdram, ctx);
        goto after_8;
    // 0x80018EB0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_8:
L_80018EB4:
    // 0x80018EB4: jal         0x800196A4
    // 0x80018EB8: nop

    func_800196A4_1A2A4(rdram, ctx);
        goto after_9;
    // 0x80018EB8: nop

    after_9:
    // 0x80018EBC: lb          $t9, 0x5($s1)
    ctx->r25 = MEM_B(ctx->r17, 0X5);
    // 0x80018EC0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80018EC4: beql        $t9, $zero, L_80018EFC
    if (ctx->r25 == 0) {
        // 0x80018EC8: lw          $v0, 0x74($s2)
        ctx->r2 = MEM_W(ctx->r18, 0X74);
            goto L_80018EFC;
    }
    goto skip_7;
    // 0x80018EC8: lw          $v0, 0x74($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X74);
    skip_7:
    // 0x80018ECC: jal         0x8001904C
    // 0x80018ED0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_8001904C_19C4C(rdram, ctx);
        goto after_10;
    // 0x80018ED0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_10:
    // 0x80018ED4: beql        $v0, $zero, L_80018F10
    if (ctx->r2 == 0) {
        // 0x80018ED8: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_80018F10;
    }
    goto skip_8;
    // 0x80018ED8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_8:
    // 0x80018EDC: lb          $t2, 0x5($s1)
    ctx->r10 = MEM_B(ctx->r17, 0X5);
    // 0x80018EE0: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x80018EE4: multu       $t2, $s5
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80018EE8: mflo        $t3
    ctx->r11 = lo;
    // 0x80018EEC: addu        $s1, $s1, $t3
    ctx->r17 = ADD32(ctx->r17, ctx->r11);
    // 0x80018EF0: b           L_80018CFC
    // 0x80018EF4: lw          $t6, 0x30($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X30);
        goto L_80018CFC;
    // 0x80018EF4: lw          $t6, 0x30($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X30);
    // 0x80018EF8: lw          $v0, 0x74($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X74);
L_80018EFC:
    // 0x80018EFC: beql        $v0, $zero, L_80018F10
    if (ctx->r2 == 0) {
        // 0x80018F00: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_80018F10;
    }
    goto skip_9;
    // 0x80018F00: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_9:
    // 0x80018F04: jal         0x80036798
    // 0x80018F08: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80036798_37398(rdram, ctx);
        goto after_11;
    // 0x80018F08: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_11:
    // 0x80018F0C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80018F10:
    // 0x80018F10: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80018F14: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80018F18: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80018F1C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80018F20: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80018F24: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80018F28: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80018F2C: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80018F30: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80018F34: jr          $ra
    // 0x80018F38: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80018F38: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8001DB04_1E704(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001DB04: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x8001DB08: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x8001DB0C: sw          $s1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r17;
    // 0x8001DB10: sw          $s0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r16;
    // 0x8001DB14: sdc1        $f26, 0x50($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X50, ctx->r29);
    // 0x8001DB18: sdc1        $f24, 0x48($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X48, ctx->r29);
    // 0x8001DB1C: sdc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X40, ctx->r29);
    // 0x8001DB20: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x8001DB24: sw          $a2, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r6;
    // 0x8001DB28: sw          $a3, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r7;
    // 0x8001DB2C: lwc1        $f2, 0x4($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X4);
    // 0x8001DB30: lwc1        $f14, 0x0($a1)
    ctx->f14.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8001DB34: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8001DB38: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8001DB3C: andi        $t7, $a2, 0xFFFF
    ctx->r15 = ctx->r6 & 0XFFFF;
    // 0x8001DB40: c.le.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl <= ctx->f2.fl;
    // 0x8001DB44: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x8001DB48: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x8001DB4C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8001DB50: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x8001DB54: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8001DB58: add.s       $f0, $f8, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x8001DB5C: bc1f        L_8001DB74
    if (!c1cs) {
        // 0x8001DB60: sqrt.s      $f22, $f0
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = sqrtf(ctx->f0.fl);
            goto L_8001DB74;
    }
    // 0x8001DB60: sqrt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = sqrtf(ctx->f0.fl);
    // 0x8001DB64: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8001DB68: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x8001DB6C: b           L_8001DB80
    // 0x8001DB70: lhu         $t8, 0x0($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X0);
        goto L_8001DB80;
    // 0x8001DB70: lhu         $t8, 0x0($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X0);
L_8001DB74:
    // 0x8001DB74: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x8001DB78: nop

    // 0x8001DB7C: lhu         $t8, 0x0($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X0);
L_8001DB80:
    // 0x8001DB80: addiu       $t1, $zero, 0x200
    ctx->r9 = ADD32(0, 0X200);
    // 0x8001DB84: andi        $a0, $a2, 0xFFFF
    ctx->r4 = ctx->r6 & 0XFFFF;
    // 0x8001DB88: sh          $t8, 0x7C($sp)
    MEM_H(0X7C, ctx->r29) = ctx->r24;
    // 0x8001DB8C: lhu         $t9, 0x2($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X2);
    // 0x8001DB90: addiu       $a1, $sp, 0xC0
    ctx->r5 = ADD32(ctx->r29, 0XC0);
    // 0x8001DB94: sh          $t9, 0x7E($sp)
    MEM_H(0X7E, ctx->r29) = ctx->r25;
    // 0x8001DB98: lhu         $t0, 0x4($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X4);
    // 0x8001DB9C: sh          $t0, 0x80($sp)
    MEM_H(0X80, ctx->r29) = ctx->r8;
    // 0x8001DBA0: jal         0x80003F30
    // 0x8001DBA4: sh          $t1, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r9;
    func_80003F30_4B30(rdram, ctx);
        goto after_0;
    // 0x8001DBA4: sh          $t1, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r9;
    after_0:
    // 0x8001DBA8: swc1        $f0, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f0.u32l;
    // 0x8001DBAC: lhu         $a0, 0xDE($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0XDE);
    // 0x8001DBB0: jal         0x80003F30
    // 0x8001DBB4: addiu       $a1, $sp, 0xB8
    ctx->r5 = ADD32(ctx->r29, 0XB8);
    func_80003F30_4B30(rdram, ctx);
        goto after_1;
    // 0x8001DBB4: addiu       $a1, $sp, 0xB8
    ctx->r5 = ADD32(ctx->r29, 0XB8);
    after_1:
    // 0x8001DBB8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8001DBBC: lhu         $a0, 0xE2($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0XE2);
    // 0x8001DBC0: jal         0x80003F30
    // 0x8001DBC4: addiu       $a1, $sp, 0xB0
    ctx->r5 = ADD32(ctx->r29, 0XB0);
    func_80003F30_4B30(rdram, ctx);
        goto after_2;
    // 0x8001DBC4: addiu       $a1, $sp, 0xB0
    ctx->r5 = ADD32(ctx->r29, 0XB0);
    after_2:
    // 0x8001DBC8: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x8001DBCC: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    // 0x8001DBD0: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001DBD4: c.lt.s      $f22, $f12
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f22.fl < ctx->f12.fl;
    // 0x8001DBD8: lwc1        $f6, 0xB8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x8001DBDC: bc1fl       L_8001DBF0
    if (!c1cs) {
        // 0x8001DBE0: mov.s       $f2, $f22
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    ctx->f2.fl = ctx->f22.fl;
            goto L_8001DBF0;
    }
    goto skip_0;
    // 0x8001DBE0: mov.s       $f2, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    ctx->f2.fl = ctx->f22.fl;
    skip_0:
    // 0x8001DBE4: b           L_8001DBF0
    // 0x8001DBE8: neg.s       $f2, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f2.fl = -ctx->f22.fl;
        goto L_8001DBF0;
    // 0x8001DBE8: neg.s       $f2, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f2.fl = -ctx->f22.fl;
    // 0x8001DBEC: mov.s       $f2, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    ctx->f2.fl = ctx->f22.fl;
L_8001DBF0:
    // 0x8001DBF0: ldc1        $f8, -0x46C0($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X46C0);
    // 0x8001DBF4: cvt.d.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
    // 0x8001DBF8: c.lt.d      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.d < ctx->f8.d;
    // 0x8001DBFC: nop

    // 0x8001DC00: bc1f        L_8001DD34
    if (!c1cs) {
        // 0x8001DC04: nop
    
            goto L_8001DD34;
    }
    // 0x8001DC04: nop

    // 0x8001DC08: lwc1        $f6, 0x8($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X8);
    // 0x8001DC0C: lwc1        $f14, 0xB8($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x8001DC10: lwc1        $f16, 0xB0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x8001DC14: c.lt.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl < ctx->f6.fl;
    // 0x8001DC18: nop

    // 0x8001DC1C: bc1f        L_8001DCAC
    if (!c1cs) {
        // 0x8001DC20: nop
    
            goto L_8001DCAC;
    }
    // 0x8001DC20: nop

    // 0x8001DC24: lwc1        $f14, 0xB8($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x8001DC28: lwc1        $f16, 0xB0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x8001DC2C: lwc1        $f6, 0xC4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x8001DC30: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8001DC34: mul.s       $f2, $f14, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = MUL_S(ctx->f14.fl, ctx->f16.fl);
    // 0x8001DC38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8001DC3C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8001DC40: mul.s       $f4, $f20, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x8001DC44: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x8001DC48: swc1        $f14, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f14.u32l;
    // 0x8001DC4C: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    // 0x8001DC50: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8001DC54: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    // 0x8001DC58: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x8001DC5C: mul.s       $f8, $f14, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f24.fl);
    // 0x8001DC60: add.s       $f0, $f4, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x8001DC64: lwc1        $f4, 0xC0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x8001DC68: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x8001DC6C: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x8001DC70: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x8001DC74: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8001DC78: jal         0x8001DE74
    // 0x8001DC7C: nop

    func_8001DE74_1EA74(rdram, ctx);
        goto after_3;
    // 0x8001DC7C: nop

    after_3:
    // 0x8001DC80: lhu         $t2, 0x7E($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X7E);
    // 0x8001DC84: lhu         $t3, 0x80($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X80);
    // 0x8001DC88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8001DC8C: addiu       $a1, $s0, 0x2
    ctx->r5 = ADD32(ctx->r16, 0X2);
    // 0x8001DC90: addiu       $a2, $s0, 0x4
    ctx->r6 = ADD32(ctx->r16, 0X4);
    // 0x8001DC94: lhu         $a3, 0x7C($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X7C);
    // 0x8001DC98: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8001DC9C: jal         0x8001F6C8
    // 0x8001DCA0: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    func_8001F6C8_202C8(rdram, ctx);
        goto after_4;
    // 0x8001DCA0: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    after_4:
    // 0x8001DCA4: b           L_8001DE54
    // 0x8001DCA8: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
        goto L_8001DE54;
    // 0x8001DCA8: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
L_8001DCAC:
    // 0x8001DCAC: mul.s       $f2, $f14, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = MUL_S(ctx->f14.fl, ctx->f16.fl);
    // 0x8001DCB0: neg.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = -ctx->f20.fl;
    // 0x8001DCB4: neg.s       $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = -ctx->f14.fl;
    // 0x8001DCB8: mul.s       $f10, $f12, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x8001DCBC: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x8001DCC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8001DCC4: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8001DCC8: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8001DCCC: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    // 0x8001DCD0: swc1        $f14, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f14.u32l;
    // 0x8001DCD4: mul.s       $f4, $f6, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f24.fl);
    // 0x8001DCD8: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x8001DCDC: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    // 0x8001DCE0: add.s       $f0, $f10, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x8001DCE4: lwc1        $f8, 0xC0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x8001DCE8: lwc1        $f10, 0xC4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x8001DCEC: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x8001DCF0: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x8001DCF4: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x8001DCF8: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x8001DCFC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8001DD00: jal         0x8001DF94
    // 0x8001DD04: nop

    func_8001DF94_1EB94(rdram, ctx);
        goto after_5;
    // 0x8001DD04: nop

    after_5:
    // 0x8001DD08: lhu         $t4, 0x7E($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X7E);
    // 0x8001DD0C: lhu         $t5, 0x80($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X80);
    // 0x8001DD10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8001DD14: addiu       $a1, $s0, 0x2
    ctx->r5 = ADD32(ctx->r16, 0X2);
    // 0x8001DD18: addiu       $a2, $s0, 0x4
    ctx->r6 = ADD32(ctx->r16, 0X4);
    // 0x8001DD1C: lhu         $a3, 0x7C($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X7C);
    // 0x8001DD20: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x8001DD24: jal         0x8001F6C8
    // 0x8001DD28: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    func_8001F6C8_202C8(rdram, ctx);
        goto after_6;
    // 0x8001DD28: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    after_6:
    // 0x8001DD2C: b           L_8001DE54
    // 0x8001DD30: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
        goto L_8001DE54;
    // 0x8001DD30: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
L_8001DD34:
    // 0x8001DD34: mul.s       $f12, $f6, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8001DD38: lwc1        $f16, 0x8($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X8);
    // 0x8001DD3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8001DD40: mul.s       $f4, $f16, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x8001DD44: nop

    // 0x8001DD48: mul.s       $f10, $f20, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x8001DD4C: nop

    // 0x8001DD50: mul.s       $f8, $f10, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f26.fl);
    // 0x8001DD54: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x8001DD58: mul.s       $f18, $f20, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8001DD5C: lwc1        $f16, 0xB0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x8001DD60: lwc1        $f8, 0xC4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x8001DD64: neg.s       $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = -ctx->f10.fl;
    // 0x8001DD68: mul.s       $f10, $f6, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x8001DD6C: swc1        $f4, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f4.u32l;
    // 0x8001DD70: lwc1        $f2, 0x4($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X4);
    // 0x8001DD74: lwc1        $f14, 0x0($s1)
    ctx->f14.u32l = MEM_W(ctx->r17, 0X0);
    // 0x8001DD78: swc1        $f4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f4.u32l;
    // 0x8001DD7C: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x8001DD80: swc1        $f22, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f22.u32l;
    // 0x8001DD84: mul.s       $f10, $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x8001DD88: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8001DD8C: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x8001DD90: mul.s       $f4, $f18, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f14.fl);
    // 0x8001DD94: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8001DD98: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    // 0x8001DD9C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x8001DDA0: add.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8001DDA4: div.s       $f4, $f10, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f22.fl);
    // 0x8001DDA8: mul.s       $f10, $f4, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f26.fl);
    // 0x8001DDAC: nop

    // 0x8001DDB0: mul.s       $f4, $f14, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f12.fl);
    // 0x8001DDB4: add.s       $f4, $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x8001DDB8: neg.s       $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = -ctx->f6.fl;
    // 0x8001DDBC: swc1        $f4, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f4.u32l;
    // 0x8001DDC0: mul.s       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8001DDC4: swc1        $f4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f4.u32l;
    // 0x8001DDC8: mul.s       $f10, $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x8001DDCC: mov.s       $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = ctx->f6.fl;
    // 0x8001DDD0: lwc1        $f6, 0x68($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8001DDD4: mul.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x8001DDD8: swc1        $f14, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f14.u32l;
    // 0x8001DDDC: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x8001DDE0: add.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8001DDE4: div.s       $f4, $f10, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f22.fl);
    // 0x8001DDE8: mul.s       $f10, $f4, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f26.fl);
    // 0x8001DDEC: nop

    // 0x8001DDF0: mul.s       $f4, $f2, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x8001DDF4: lwc1        $f2, 0x6C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8001DDF8: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    // 0x8001DDFC: add.s       $f12, $f4, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x8001DE00: mul.s       $f10, $f12, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x8001DE04: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x8001DE08: swc1        $f12, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f12.u32l;
    // 0x8001DE0C: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8001DE10: add.s       $f0, $f10, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8001DE14: lwc1        $f10, 0xC0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x8001DE18: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x8001DE1C: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x8001DE20: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8001DE24: jal         0x8001E0BC
    // 0x8001DE28: nop

    func_8001E0BC_1ECBC(rdram, ctx);
        goto after_7;
    // 0x8001DE28: nop

    after_7:
    // 0x8001DE2C: lhu         $t6, 0x7E($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X7E);
    // 0x8001DE30: lhu         $t7, 0x80($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X80);
    // 0x8001DE34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8001DE38: addiu       $a1, $s0, 0x2
    ctx->r5 = ADD32(ctx->r16, 0X2);
    // 0x8001DE3C: addiu       $a2, $s0, 0x4
    ctx->r6 = ADD32(ctx->r16, 0X4);
    // 0x8001DE40: lhu         $a3, 0x7C($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X7C);
    // 0x8001DE44: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8001DE48: jal         0x8001F6C8
    // 0x8001DE4C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    func_8001F6C8_202C8(rdram, ctx);
        goto after_8;
    // 0x8001DE4C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_8:
    // 0x8001DE50: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
L_8001DE54:
    // 0x8001DE54: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x8001DE58: ldc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X40);
    // 0x8001DE5C: ldc1        $f24, 0x48($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X48);
    // 0x8001DE60: ldc1        $f26, 0x50($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X50);
    // 0x8001DE64: lw          $s0, 0x5C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X5C);
    // 0x8001DE68: lw          $s1, 0x60($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X60);
    // 0x8001DE6C: jr          $ra
    // 0x8001DE70: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    TRACE_RETURN()
    return;
    // 0x8001DE70: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void func_8003A24C_3AE4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003A24C: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8003A250: addiu       $a1, $a1, 0xA20
    ctx->r5 = ADD32(ctx->r5, 0XA20);
    // 0x8003A254: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x8003A258: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003A25C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003A260: andi        $v0, $t6, 0x7FFF
    ctx->r2 = ctx->r14 & 0X7FFF;
    // 0x8003A264: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x8003A268: addiu       $v1, $v1, 0x9F0
    ctx->r3 = ADD32(ctx->r3, 0X9F0);
    // 0x8003A26C: addiu       $a0, $a0, 0x9E8
    ctx->r4 = ADD32(ctx->r4, 0X9E8);
    // 0x8003A270: lhu         $t8, 0x0($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X0);
L_8003A274:
    // 0x8003A274: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x8003A278: sltu        $at, $a0, $v1
    ctx->r1 = ctx->r4 < ctx->r3 ? 1 : 0;
    // 0x8003A27C: beq         $v0, $t8, L_8003A2C8
    if (ctx->r2 == ctx->r24) {
        // 0x8003A280: nop
    
            goto L_8003A2C8;
    }
    // 0x8003A280: nop

    // 0x8003A284: bnel        $at, $zero, L_8003A274
    if (ctx->r1 != 0) {
        // 0x8003A288: lhu         $t8, 0x0($a0)
        ctx->r24 = MEM_HU(ctx->r4, 0X0);
            goto L_8003A274;
    }
    goto skip_0;
    // 0x8003A288: lhu         $t8, 0x0($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X0);
    skip_0:
    // 0x8003A28C: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003A290: addiu       $a0, $a0, 0x9E8
    ctx->r4 = ADD32(ctx->r4, 0X9E8);
    // 0x8003A294: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8003A298: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
L_8003A29C:
    // 0x8003A29C: lhu         $t9, 0x0($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X0);
    // 0x8003A2A0: bne         $t9, $zero, L_8003A2BC
    if (ctx->r25 != 0) {
        // 0x8003A2A4: lui         $at, 0x801C
        ctx->r1 = S32(0X801C << 16);
            goto L_8003A2BC;
    }
    // 0x8003A2A4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003A2A8: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x8003A2AC: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8003A2B0: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8003A2B4: jr          $ra
    // 0x8003A2B8: sb          $t0, 0x9E0($at)
    MEM_B(0X9E0, ctx->r1) = ctx->r8;
    TRACE_RETURN()
    return;
    // 0x8003A2B8: sb          $t0, 0x9E0($at)
    MEM_B(0X9E0, ctx->r1) = ctx->r8;
L_8003A2BC:
    // 0x8003A2BC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8003A2C0: bne         $v1, $a1, L_8003A29C
    if (ctx->r3 != ctx->r5) {
        // 0x8003A2C4: addiu       $a0, $a0, 0x2
        ctx->r4 = ADD32(ctx->r4, 0X2);
            goto L_8003A29C;
    }
    // 0x8003A2C4: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
L_8003A2C8:
    // 0x8003A2C8: jr          $ra
    // 0x8003A2CC: nop

    TRACE_RETURN()
    return;
    // 0x8003A2CC: nop

;}
RECOMP_FUNC void func_80005394_5F94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80005394: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80005398: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8000539C: lui         $fp, 0x8016
    ctx->r30 = S32(0X8016 << 16);
    // 0x800053A0: addiu       $fp, $fp, 0x73A4
    ctx->r30 = ADD32(ctx->r30, 0X73A4);
    // 0x800053A4: sw          $a0, 0x0($fp)
    MEM_W(0X0, ctx->r30) = ctx->r4;
    // 0x800053A8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800053AC: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x800053B0: sw          $a0, 0x73A0($at)
    MEM_W(0X73A0, ctx->r1) = ctx->r4;
    // 0x800053B4: addiu       $v1, $v1, 0x73AC
    ctx->r3 = ADD32(ctx->r3, 0X73AC);
    // 0x800053B8: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x800053BC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800053C0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800053C4: sw          $a2, 0x73A8($at)
    MEM_W(0X73A8, ctx->r1) = ctx->r6;
    // 0x800053C8: addiu       $t7, $a2, -0x1
    ctx->r15 = ADD32(ctx->r6, -0X1);
    // 0x800053CC: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x800053D0: lui         $s2, 0x8016
    ctx->r18 = S32(0X8016 << 16);
    // 0x800053D4: lw          $s2, -0x3A38($s2)
    ctx->r18 = MEM_W(ctx->r18, -0X3A38);
    // 0x800053D8: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x800053DC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x800053E0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800053E4: ori         $at, $at, 0x5FA0
    ctx->r1 = ctx->r1 | 0X5FA0;
    // 0x800053E8: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x800053EC: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x800053F0: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x800053F4: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x800053F8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800053FC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80005400: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80005404: jal         0x80005984
    // 0x80005408: addu        $s2, $s2, $at
    ctx->r18 = ADD32(ctx->r18, ctx->r1);
    func_80005984_6584(rdram, ctx);
        goto after_0;
    // 0x80005408: addu        $s2, $s2, $at
    ctx->r18 = ADD32(ctx->r18, ctx->r1);
    after_0:
    // 0x8000540C: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x80005410: lw          $t8, 0x73AC($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X73AC);
    // 0x80005414: lui         $s5, 0x8016
    ctx->r21 = S32(0X8016 << 16);
    // 0x80005418: addiu       $s5, $s5, 0x73B6
    ctx->r21 = ADD32(ctx->r21, 0X73B6);
    // 0x8000541C: blezl       $t8, L_800058D0
    if (SIGNED(ctx->r24) <= 0) {
        // 0x80005420: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_800058D0;
    }
    goto skip_0;
    // 0x80005420: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_0:
    // 0x80005424: lbu         $s6, 0x0($s2)
    ctx->r22 = MEM_BU(ctx->r18, 0X0);
L_80005428:
    // 0x80005428: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8000542C: sll         $t9, $s6, 24
    ctx->r25 = S32(ctx->r22 << 24);
    // 0x80005430: jal         0x80005900
    // 0x80005434: or          $s6, $t9, $zero
    ctx->r22 = ctx->r25 | 0;
    func_80005900_6500(rdram, ctx);
        goto after_1;
    // 0x80005434: or          $s6, $t9, $zero
    ctx->r22 = ctx->r25 | 0;
    after_1:
    // 0x80005438: lbu         $t0, 0x0($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X0);
    // 0x8000543C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80005440: sll         $t1, $t0, 16
    ctx->r9 = S32(ctx->r8 << 16);
    // 0x80005444: jal         0x80005900
    // 0x80005448: addu        $s6, $s6, $t1
    ctx->r22 = ADD32(ctx->r22, ctx->r9);
    func_80005900_6500(rdram, ctx);
        goto after_2;
    // 0x80005448: addu        $s6, $s6, $t1
    ctx->r22 = ADD32(ctx->r22, ctx->r9);
    after_2:
    // 0x8000544C: lbu         $t2, 0x0($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X0);
    // 0x80005450: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80005454: sll         $t3, $t2, 8
    ctx->r11 = S32(ctx->r10 << 8);
    // 0x80005458: jal         0x80005900
    // 0x8000545C: addu        $s6, $s6, $t3
    ctx->r22 = ADD32(ctx->r22, ctx->r11);
    func_80005900_6500(rdram, ctx);
        goto after_3;
    // 0x8000545C: addu        $s6, $s6, $t3
    ctx->r22 = ADD32(ctx->r22, ctx->r11);
    after_3:
    // 0x80005460: lbu         $t4, 0x0($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X0);
    // 0x80005464: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80005468: jal         0x80005900
    // 0x8000546C: addu        $s6, $s6, $t4
    ctx->r22 = ADD32(ctx->r22, ctx->r12);
    func_80005900_6500(rdram, ctx);
        goto after_4;
    // 0x8000546C: addu        $s6, $s6, $t4
    ctx->r22 = ADD32(ctx->r22, ctx->r12);
    after_4:
    // 0x80005470: lw          $v1, 0x0($fp)
    ctx->r3 = MEM_W(ctx->r30, 0X0);
    // 0x80005474: lui         $at, 0xF000
    ctx->r1 = S32(0XF000 << 16);
    // 0x80005478: and         $a0, $s6, $at
    ctx->r4 = ctx->r22 & ctx->r1;
    // 0x8000547C: addu        $s7, $v1, $s6
    ctx->r23 = ADD32(ctx->r3, ctx->r22);
    // 0x80005480: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x80005484: beq         $a0, $zero, L_8000561C
    if (ctx->r4 == 0) {
        // 0x80005488: addiu       $s7, $s7, -0x4
        ctx->r23 = ADD32(ctx->r23, -0X4);
            goto L_8000561C;
    }
    // 0x80005488: addiu       $s7, $s7, -0x4
    ctx->r23 = ADD32(ctx->r23, -0X4);
    // 0x8000548C: sltu        $at, $v1, $s7
    ctx->r1 = ctx->r3 < ctx->r23 ? 1 : 0;
    // 0x80005490: beq         $at, $zero, L_80005614
    if (ctx->r1 == 0) {
        // 0x80005494: nop
    
            goto L_80005614;
    }
    // 0x80005494: nop

    // 0x80005498: lbu         $s0, 0x0($s2)
    ctx->r16 = MEM_BU(ctx->r18, 0X0);
L_8000549C:
    // 0x8000549C: jal         0x80005900
    // 0x800054A0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80005900_6500(rdram, ctx);
        goto after_5;
    // 0x800054A0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_5:
    // 0x800054A4: slti        $at, $s0, 0x80
    ctx->r1 = SIGNED(ctx->r16) < 0X80 ? 1 : 0;
    // 0x800054A8: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x800054AC: beq         $at, $zero, L_8000551C
    if (ctx->r1 == 0) {
        // 0x800054B0: or          $s4, $s0, $zero
        ctx->r20 = ctx->r16 | 0;
            goto L_8000551C;
    }
    // 0x800054B0: or          $s4, $s0, $zero
    ctx->r20 = ctx->r16 | 0;
    // 0x800054B4: lbu         $t5, 0x0($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X0);
    // 0x800054B8: sll         $t6, $s0, 8
    ctx->r14 = S32(ctx->r16 << 8);
    // 0x800054BC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800054C0: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x800054C4: jal         0x80005900
    // 0x800054C8: andi        $s3, $t7, 0x3FF
    ctx->r19 = ctx->r15 & 0X3FF;
    func_80005900_6500(rdram, ctx);
        goto after_6;
    // 0x800054C8: andi        $s3, $t7, 0x3FF
    ctx->r19 = ctx->r15 & 0X3FF;
    after_6:
    // 0x800054CC: sra         $a1, $s4, 2
    ctx->r5 = S32(SIGNED(ctx->r20) >> 2);
    // 0x800054D0: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x800054D4: andi        $t9, $a1, 0xFFFF
    ctx->r25 = ctx->r5 & 0XFFFF;
    // 0x800054D8: addiu       $s0, $t9, -0x1
    ctx->r16 = ADD32(ctx->r25, -0X1);
    // 0x800054DC: andi        $t0, $s0, 0xFFFF
    ctx->r8 = ctx->r16 & 0XFFFF;
    // 0x800054E0: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x800054E4: subu        $a0, $s1, $s3
    ctx->r4 = SUB32(ctx->r17, ctx->r19);
    // 0x800054E8: beq         $t9, $zero, L_80005604
    if (ctx->r25 == 0) {
        // 0x800054EC: or          $s0, $t0, $zero
        ctx->r16 = ctx->r8 | 0;
            goto L_80005604;
    }
    // 0x800054EC: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
L_800054F0:
    // 0x800054F0: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x800054F4: lbu         $t1, 0x0($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X0);
    // 0x800054F8: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x800054FC: andi        $t2, $s0, 0xFFFF
    ctx->r10 = ctx->r16 & 0XFFFF;
    // 0x80005500: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
    // 0x80005504: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80005508: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8000550C: bne         $v1, $zero, L_800054F0
    if (ctx->r3 != 0) {
        // 0x80005510: sb          $t1, -0x1($s1)
        MEM_B(-0X1, ctx->r17) = ctx->r9;
            goto L_800054F0;
    }
    // 0x80005510: sb          $t1, -0x1($s1)
    MEM_B(-0X1, ctx->r17) = ctx->r9;
    // 0x80005514: b           L_80005608
    // 0x80005518: lw          $t2, 0x0($fp)
    ctx->r10 = MEM_W(ctx->r30, 0X0);
        goto L_80005608;
    // 0x80005518: lw          $t2, 0x0($fp)
    ctx->r10 = MEM_W(ctx->r30, 0X0);
L_8000551C:
    // 0x8000551C: slti        $at, $s4, 0xA0
    ctx->r1 = SIGNED(ctx->r20) < 0XA0 ? 1 : 0;
    // 0x80005520: beq         $at, $zero, L_8000556C
    if (ctx->r1 == 0) {
        // 0x80005524: andi        $t3, $s4, 0x1F
        ctx->r11 = ctx->r20 & 0X1F;
            goto L_8000556C;
    }
    // 0x80005524: andi        $t3, $s4, 0x1F
    ctx->r11 = ctx->r20 & 0X1F;
    // 0x80005528: addiu       $s0, $t3, -0x1
    ctx->r16 = ADD32(ctx->r11, -0X1);
    // 0x8000552C: andi        $t4, $s0, 0xFFFF
    ctx->r12 = ctx->r16 & 0XFFFF;
    // 0x80005530: beq         $t3, $zero, L_80005604
    if (ctx->r11 == 0) {
        // 0x80005534: or          $s0, $t4, $zero
        ctx->r16 = ctx->r12 | 0;
            goto L_80005604;
    }
    // 0x80005534: or          $s0, $t4, $zero
    ctx->r16 = ctx->r12 | 0;
L_80005538:
    // 0x80005538: lbu         $t5, 0x0($s2)
    ctx->r13 = MEM_BU(ctx->r18, 0X0);
    // 0x8000553C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80005540: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80005544: jal         0x80005900
    // 0x80005548: sb          $t5, -0x1($s1)
    MEM_B(-0X1, ctx->r17) = ctx->r13;
    func_80005900_6500(rdram, ctx);
        goto after_7;
    // 0x80005548: sb          $t5, -0x1($s1)
    MEM_B(-0X1, ctx->r17) = ctx->r13;
    after_7:
    // 0x8000554C: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x80005550: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x80005554: andi        $t6, $s0, 0xFFFF
    ctx->r14 = ctx->r16 & 0XFFFF;
    // 0x80005558: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x8000555C: bne         $v1, $zero, L_80005538
    if (ctx->r3 != 0) {
        // 0x80005560: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_80005538;
    }
    // 0x80005560: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x80005564: b           L_80005608
    // 0x80005568: lw          $t2, 0x0($fp)
    ctx->r10 = MEM_W(ctx->r30, 0X0);
        goto L_80005608;
    // 0x80005568: lw          $t2, 0x0($fp)
    ctx->r10 = MEM_W(ctx->r30, 0X0);
L_8000556C:
    // 0x8000556C: slti        $at, $s4, 0xE0
    ctx->r1 = SIGNED(ctx->r20) < 0XE0 ? 1 : 0;
    // 0x80005570: beq         $at, $zero, L_80005598
    if (ctx->r1 == 0) {
        // 0x80005574: andi        $s0, $s4, 0x1F
        ctx->r16 = ctx->r20 & 0X1F;
            goto L_80005598;
    }
    // 0x80005574: andi        $s0, $s4, 0x1F
    ctx->r16 = ctx->r20 & 0X1F;
    // 0x80005578: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x8000557C: andi        $t7, $s0, 0xFFFF
    ctx->r15 = ctx->r16 & 0XFFFF;
    // 0x80005580: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x80005584: lbu         $s3, 0x0($s2)
    ctx->r19 = MEM_BU(ctx->r18, 0X0);
    // 0x80005588: jal         0x80005900
    // 0x8000558C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80005900_6500(rdram, ctx);
        goto after_8;
    // 0x8000558C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_8:
    // 0x80005590: b           L_800055D4
    // 0x80005594: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
        goto L_800055D4;
    // 0x80005594: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_80005598:
    // 0x80005598: slti        $at, $s4, 0xFF
    ctx->r1 = SIGNED(ctx->r20) < 0XFF ? 1 : 0;
    // 0x8000559C: beq         $at, $zero, L_800055B8
    if (ctx->r1 == 0) {
        // 0x800055A0: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_800055B8;
    }
    // 0x800055A0: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x800055A4: andi        $s0, $s4, 0x1F
    ctx->r16 = ctx->r20 & 0X1F;
    // 0x800055A8: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x800055AC: andi        $t8, $s0, 0xFFFF
    ctx->r24 = ctx->r16 & 0XFFFF;
    // 0x800055B0: b           L_800055D4
    // 0x800055B4: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
        goto L_800055D4;
    // 0x800055B4: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
L_800055B8:
    // 0x800055B8: lbu         $s0, 0x0($s2)
    ctx->r16 = MEM_BU(ctx->r18, 0X0);
    // 0x800055BC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800055C0: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x800055C4: andi        $t9, $s0, 0xFFFF
    ctx->r25 = ctx->r16 & 0XFFFF;
    // 0x800055C8: jal         0x80005900
    // 0x800055CC: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    func_80005900_6500(rdram, ctx);
        goto after_9;
    // 0x800055CC: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    after_9:
    // 0x800055D0: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_800055D4:
    // 0x800055D4: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x800055D8: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x800055DC: andi        $t0, $s0, 0xFFFF
    ctx->r8 = ctx->r16 & 0XFFFF;
    // 0x800055E0: beq         $v1, $zero, L_80005604
    if (ctx->r3 == 0) {
        // 0x800055E4: or          $s0, $t0, $zero
        ctx->r16 = ctx->r8 | 0;
            goto L_80005604;
    }
    // 0x800055E4: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
L_800055E8:
    // 0x800055E8: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x800055EC: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x800055F0: andi        $t1, $s0, 0xFFFF
    ctx->r9 = ctx->r16 & 0XFFFF;
    // 0x800055F4: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
    // 0x800055F8: sb          $s3, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r19;
    // 0x800055FC: bne         $v1, $zero, L_800055E8
    if (ctx->r3 != 0) {
        // 0x80005600: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_800055E8;
    }
    // 0x80005600: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_80005604:
    // 0x80005604: lw          $t2, 0x0($fp)
    ctx->r10 = MEM_W(ctx->r30, 0X0);
L_80005608:
    // 0x80005608: sltu        $at, $t2, $s7
    ctx->r1 = ctx->r10 < ctx->r23 ? 1 : 0;
    // 0x8000560C: bnel        $at, $zero, L_8000549C
    if (ctx->r1 != 0) {
        // 0x80005610: lbu         $s0, 0x0($s2)
        ctx->r16 = MEM_BU(ctx->r18, 0X0);
            goto L_8000549C;
    }
    goto skip_1;
    // 0x80005610: lbu         $s0, 0x0($s2)
    ctx->r16 = MEM_BU(ctx->r18, 0X0);
    skip_1:
L_80005614:
    // 0x80005614: b           L_8000589C
    // 0x80005618: andi        $v1, $s7, 0xF
    ctx->r3 = ctx->r23 & 0XF;
        goto L_8000589C;
    // 0x80005618: andi        $v1, $s7, 0xF
    ctx->r3 = ctx->r23 & 0XF;
L_8000561C:
    // 0x8000561C: srl         $t4, $a0, 28
    ctx->r12 = S32(U32(ctx->r4) >> 28);
    // 0x80005620: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80005624: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x80005628: andi        $t6, $t5, 0xFFFF
    ctx->r14 = ctx->r13 & 0XFFFF;
    // 0x8000562C: andi        $v0, $zero, 0xFFFF
    ctx->r2 = 0 & 0XFFFF;
    // 0x80005630: addiu       $a1, $a1, 0x73B4
    ctx->r5 = ADD32(ctx->r5, 0X73B4);
    // 0x80005634: slt         $at, $v0, $t6
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80005638: sh          $zero, 0x0($a1)
    MEM_H(0X0, ctx->r5) = 0;
    // 0x8000563C: sh          $t5, 0x0($s5)
    MEM_H(0X0, ctx->r21) = ctx->r13;
    // 0x80005640: beq         $at, $zero, L_80005898
    if (ctx->r1 == 0) {
        // 0x80005644: sw          $s1, 0x40($sp)
        MEM_W(0X40, ctx->r29) = ctx->r17;
            goto L_80005898;
    }
    // 0x80005644: sw          $s1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r17;
L_80005648:
    // 0x80005648: beql        $v0, $zero, L_800056BC
    if (ctx->r2 == 0) {
        // 0x8000564C: lui         $at, 0xFFF
        ctx->r1 = S32(0XFFF << 16);
            goto L_800056BC;
    }
    goto skip_2;
    // 0x8000564C: lui         $at, 0xFFF
    ctx->r1 = S32(0XFFF << 16);
    skip_2:
    // 0x80005650: lbu         $s6, 0x0($s2)
    ctx->r22 = MEM_BU(ctx->r18, 0X0);
    // 0x80005654: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80005658: sll         $t7, $s6, 24
    ctx->r15 = S32(ctx->r22 << 24);
    // 0x8000565C: jal         0x80005900
    // 0x80005660: or          $s6, $t7, $zero
    ctx->r22 = ctx->r15 | 0;
    func_80005900_6500(rdram, ctx);
        goto after_10;
    // 0x80005660: or          $s6, $t7, $zero
    ctx->r22 = ctx->r15 | 0;
    after_10:
    // 0x80005664: lbu         $t8, 0x0($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X0);
    // 0x80005668: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8000566C: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x80005670: jal         0x80005900
    // 0x80005674: addu        $s6, $s6, $t9
    ctx->r22 = ADD32(ctx->r22, ctx->r25);
    func_80005900_6500(rdram, ctx);
        goto after_11;
    // 0x80005674: addu        $s6, $s6, $t9
    ctx->r22 = ADD32(ctx->r22, ctx->r25);
    after_11:
    // 0x80005678: lbu         $t0, 0x0($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X0);
    // 0x8000567C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80005680: sll         $t1, $t0, 8
    ctx->r9 = S32(ctx->r8 << 8);
    // 0x80005684: jal         0x80005900
    // 0x80005688: addu        $s6, $s6, $t1
    ctx->r22 = ADD32(ctx->r22, ctx->r9);
    func_80005900_6500(rdram, ctx);
        goto after_12;
    // 0x80005688: addu        $s6, $s6, $t1
    ctx->r22 = ADD32(ctx->r22, ctx->r9);
    after_12:
    // 0x8000568C: lbu         $t2, 0x0($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X0);
    // 0x80005690: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80005694: jal         0x80005900
    // 0x80005698: addu        $s6, $s6, $t2
    ctx->r22 = ADD32(ctx->r22, ctx->r10);
    func_80005900_6500(rdram, ctx);
        goto after_13;
    // 0x80005698: addu        $s6, $s6, $t2
    ctx->r22 = ADD32(ctx->r22, ctx->r10);
    after_13:
    // 0x8000569C: lw          $v1, 0x0($fp)
    ctx->r3 = MEM_W(ctx->r30, 0X0);
    // 0x800056A0: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x800056A4: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x800056A8: addu        $s7, $v1, $s6
    ctx->r23 = ADD32(ctx->r3, ctx->r22);
    // 0x800056AC: addiu       $s7, $s7, -0x4
    ctx->r23 = ADD32(ctx->r23, -0X4);
    // 0x800056B0: addiu       $a1, $a1, 0x73B4
    ctx->r5 = ADD32(ctx->r5, 0X73B4);
    // 0x800056B4: lw          $s1, 0x40($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X40);
    // 0x800056B8: lui         $at, 0xFFF
    ctx->r1 = S32(0XFFF << 16);
L_800056BC:
    // 0x800056BC: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x800056C0: and         $t3, $s6, $at
    ctx->r11 = ctx->r22 & ctx->r1;
    // 0x800056C4: sltu        $at, $v1, $s7
    ctx->r1 = ctx->r3 < ctx->r23 ? 1 : 0;
    // 0x800056C8: beq         $at, $zero, L_80005870
    if (ctx->r1 == 0) {
        // 0x800056CC: or          $s6, $t3, $zero
        ctx->r22 = ctx->r11 | 0;
            goto L_80005870;
    }
    // 0x800056CC: or          $s6, $t3, $zero
    ctx->r22 = ctx->r11 | 0;
    // 0x800056D0: lbu         $s0, 0x0($s2)
    ctx->r16 = MEM_BU(ctx->r18, 0X0);
L_800056D4:
    // 0x800056D4: jal         0x80005900
    // 0x800056D8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80005900_6500(rdram, ctx);
        goto after_14;
    // 0x800056D8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_14:
    // 0x800056DC: slti        $at, $s0, 0x80
    ctx->r1 = SIGNED(ctx->r16) < 0X80 ? 1 : 0;
    // 0x800056E0: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x800056E4: beq         $at, $zero, L_80005768
    if (ctx->r1 == 0) {
        // 0x800056E8: or          $s4, $s0, $zero
        ctx->r20 = ctx->r16 | 0;
            goto L_80005768;
    }
    // 0x800056E8: or          $s4, $s0, $zero
    ctx->r20 = ctx->r16 | 0;
    // 0x800056EC: lbu         $t4, 0x0($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X0);
    // 0x800056F0: sll         $t5, $s0, 8
    ctx->r13 = S32(ctx->r16 << 8);
    // 0x800056F4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800056F8: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x800056FC: jal         0x80005900
    // 0x80005700: andi        $s3, $t6, 0x3FF
    ctx->r19 = ctx->r14 & 0X3FF;
    func_80005900_6500(rdram, ctx);
        goto after_15;
    // 0x80005700: andi        $s3, $t6, 0x3FF
    ctx->r19 = ctx->r14 & 0X3FF;
    after_15:
    // 0x80005704: lhu         $t8, 0x0($s5)
    ctx->r24 = MEM_HU(ctx->r21, 0X0);
    // 0x80005708: sra         $a1, $s4, 2
    ctx->r5 = S32(SIGNED(ctx->r20) >> 2);
    // 0x8000570C: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x80005710: multu       $s3, $t8
    result = U64(U32(ctx->r19)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80005714: andi        $t0, $a1, 0xFFFF
    ctx->r8 = ctx->r5 & 0XFFFF;
    // 0x80005718: addiu       $s0, $t0, -0x1
    ctx->r16 = ADD32(ctx->r8, -0X1);
    // 0x8000571C: andi        $t1, $s0, 0xFFFF
    ctx->r9 = ctx->r16 & 0XFFFF;
    // 0x80005720: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x80005724: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
    // 0x80005728: mflo        $t9
    ctx->r25 = lo;
    // 0x8000572C: subu        $a0, $s1, $t9
    ctx->r4 = SUB32(ctx->r17, ctx->r25);
    // 0x80005730: beql        $t0, $zero, L_8000585C
    if (ctx->r8 == 0) {
        // 0x80005734: lw          $v1, 0x0($fp)
        ctx->r3 = MEM_W(ctx->r30, 0X0);
            goto L_8000585C;
    }
    goto skip_3;
    // 0x80005734: lw          $v1, 0x0($fp)
    ctx->r3 = MEM_W(ctx->r30, 0X0);
    skip_3:
L_80005738:
    // 0x80005738: lbu         $t2, 0x0($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X0);
    // 0x8000573C: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x80005740: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x80005744: sb          $t2, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r10;
    // 0x80005748: lhu         $v0, 0x0($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X0);
    // 0x8000574C: andi        $t3, $s0, 0xFFFF
    ctx->r11 = ctx->r16 & 0XFFFF;
    // 0x80005750: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
    // 0x80005754: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x80005758: bne         $v1, $zero, L_80005738
    if (ctx->r3 != 0) {
        // 0x8000575C: addu        $a0, $a0, $v0
        ctx->r4 = ADD32(ctx->r4, ctx->r2);
            goto L_80005738;
    }
    // 0x8000575C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80005760: b           L_8000585C
    // 0x80005764: lw          $v1, 0x0($fp)
    ctx->r3 = MEM_W(ctx->r30, 0X0);
        goto L_8000585C;
    // 0x80005764: lw          $v1, 0x0($fp)
    ctx->r3 = MEM_W(ctx->r30, 0X0);
L_80005768:
    // 0x80005768: slti        $at, $s4, 0xA0
    ctx->r1 = SIGNED(ctx->r20) < 0XA0 ? 1 : 0;
    // 0x8000576C: beq         $at, $zero, L_800057BC
    if (ctx->r1 == 0) {
        // 0x80005770: andi        $t4, $s4, 0x1F
        ctx->r12 = ctx->r20 & 0X1F;
            goto L_800057BC;
    }
    // 0x80005770: andi        $t4, $s4, 0x1F
    ctx->r12 = ctx->r20 & 0X1F;
    // 0x80005774: addiu       $s0, $t4, -0x1
    ctx->r16 = ADD32(ctx->r12, -0X1);
    // 0x80005778: andi        $t5, $s0, 0xFFFF
    ctx->r13 = ctx->r16 & 0XFFFF;
    // 0x8000577C: beq         $t4, $zero, L_80005858
    if (ctx->r12 == 0) {
        // 0x80005780: or          $s0, $t5, $zero
        ctx->r16 = ctx->r13 | 0;
            goto L_80005858;
    }
    // 0x80005780: or          $s0, $t5, $zero
    ctx->r16 = ctx->r13 | 0;
L_80005784:
    // 0x80005784: lbu         $t6, 0x0($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X0);
    // 0x80005788: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8000578C: sb          $t6, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r14;
    // 0x80005790: lhu         $t7, 0x0($s5)
    ctx->r15 = MEM_HU(ctx->r21, 0X0);
    // 0x80005794: jal         0x80005900
    // 0x80005798: addu        $s1, $s1, $t7
    ctx->r17 = ADD32(ctx->r17, ctx->r15);
    func_80005900_6500(rdram, ctx);
        goto after_16;
    // 0x80005798: addu        $s1, $s1, $t7
    ctx->r17 = ADD32(ctx->r17, ctx->r15);
    after_16:
    // 0x8000579C: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x800057A0: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x800057A4: andi        $t8, $s0, 0xFFFF
    ctx->r24 = ctx->r16 & 0XFFFF;
    // 0x800057A8: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x800057AC: bne         $v1, $zero, L_80005784
    if (ctx->r3 != 0) {
        // 0x800057B0: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_80005784;
    }
    // 0x800057B0: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x800057B4: b           L_8000585C
    // 0x800057B8: lw          $v1, 0x0($fp)
    ctx->r3 = MEM_W(ctx->r30, 0X0);
        goto L_8000585C;
    // 0x800057B8: lw          $v1, 0x0($fp)
    ctx->r3 = MEM_W(ctx->r30, 0X0);
L_800057BC:
    // 0x800057BC: slti        $at, $s4, 0xE0
    ctx->r1 = SIGNED(ctx->r20) < 0XE0 ? 1 : 0;
    // 0x800057C0: beq         $at, $zero, L_800057E8
    if (ctx->r1 == 0) {
        // 0x800057C4: andi        $s0, $s4, 0x1F
        ctx->r16 = ctx->r20 & 0X1F;
            goto L_800057E8;
    }
    // 0x800057C4: andi        $s0, $s4, 0x1F
    ctx->r16 = ctx->r20 & 0X1F;
    // 0x800057C8: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x800057CC: andi        $t9, $s0, 0xFFFF
    ctx->r25 = ctx->r16 & 0XFFFF;
    // 0x800057D0: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    // 0x800057D4: lbu         $s3, 0x0($s2)
    ctx->r19 = MEM_BU(ctx->r18, 0X0);
    // 0x800057D8: jal         0x80005900
    // 0x800057DC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80005900_6500(rdram, ctx);
        goto after_17;
    // 0x800057DC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_17:
    // 0x800057E0: b           L_80005824
    // 0x800057E4: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
        goto L_80005824;
    // 0x800057E4: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_800057E8:
    // 0x800057E8: slti        $at, $s4, 0xFF
    ctx->r1 = SIGNED(ctx->r20) < 0XFF ? 1 : 0;
    // 0x800057EC: beq         $at, $zero, L_80005808
    if (ctx->r1 == 0) {
        // 0x800057F0: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_80005808;
    }
    // 0x800057F0: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x800057F4: andi        $s0, $s4, 0x1F
    ctx->r16 = ctx->r20 & 0X1F;
    // 0x800057F8: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x800057FC: andi        $t0, $s0, 0xFFFF
    ctx->r8 = ctx->r16 & 0XFFFF;
    // 0x80005800: b           L_80005824
    // 0x80005804: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
        goto L_80005824;
    // 0x80005804: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
L_80005808:
    // 0x80005808: lbu         $s0, 0x0($s2)
    ctx->r16 = MEM_BU(ctx->r18, 0X0);
    // 0x8000580C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80005810: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x80005814: andi        $t1, $s0, 0xFFFF
    ctx->r9 = ctx->r16 & 0XFFFF;
    // 0x80005818: jal         0x80005900
    // 0x8000581C: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
    func_80005900_6500(rdram, ctx);
        goto after_18;
    // 0x8000581C: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
    after_18:
    // 0x80005820: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_80005824:
    // 0x80005824: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x80005828: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x8000582C: andi        $t2, $s0, 0xFFFF
    ctx->r10 = ctx->r16 & 0XFFFF;
    // 0x80005830: beq         $v1, $zero, L_80005858
    if (ctx->r3 == 0) {
        // 0x80005834: or          $s0, $t2, $zero
        ctx->r16 = ctx->r10 | 0;
            goto L_80005858;
    }
    // 0x80005834: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
L_80005838:
    // 0x80005838: sb          $s3, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r19;
    // 0x8000583C: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x80005840: lhu         $t3, 0x0($s5)
    ctx->r11 = MEM_HU(ctx->r21, 0X0);
    // 0x80005844: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x80005848: andi        $t4, $s0, 0xFFFF
    ctx->r12 = ctx->r16 & 0XFFFF;
    // 0x8000584C: or          $s0, $t4, $zero
    ctx->r16 = ctx->r12 | 0;
    // 0x80005850: bne         $v1, $zero, L_80005838
    if (ctx->r3 != 0) {
        // 0x80005854: addu        $s1, $s1, $t3
        ctx->r17 = ADD32(ctx->r17, ctx->r11);
            goto L_80005838;
    }
    // 0x80005854: addu        $s1, $s1, $t3
    ctx->r17 = ADD32(ctx->r17, ctx->r11);
L_80005858:
    // 0x80005858: lw          $v1, 0x0($fp)
    ctx->r3 = MEM_W(ctx->r30, 0X0);
L_8000585C:
    // 0x8000585C: sltu        $at, $v1, $s7
    ctx->r1 = ctx->r3 < ctx->r23 ? 1 : 0;
    // 0x80005860: bnel        $at, $zero, L_800056D4
    if (ctx->r1 != 0) {
        // 0x80005864: lbu         $s0, 0x0($s2)
        ctx->r16 = MEM_BU(ctx->r18, 0X0);
            goto L_800056D4;
    }
    goto skip_4;
    // 0x80005864: lbu         $s0, 0x0($s2)
    ctx->r16 = MEM_BU(ctx->r18, 0X0);
    skip_4:
    // 0x80005868: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x8000586C: addiu       $a1, $a1, 0x73B4
    ctx->r5 = ADD32(ctx->r5, 0X73B4);
L_80005870:
    // 0x80005870: lhu         $t7, 0x0($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X0);
    // 0x80005874: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x80005878: lhu         $t9, 0x0($s5)
    ctx->r25 = MEM_HU(ctx->r21, 0X0);
    // 0x8000587C: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80005880: andi        $v0, $t8, 0xFFFF
    ctx->r2 = ctx->r24 & 0XFFFF;
    // 0x80005884: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80005888: slt         $at, $v0, $t9
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8000588C: sw          $t6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r14;
    // 0x80005890: bne         $at, $zero, L_80005648
    if (ctx->r1 != 0) {
        // 0x80005894: sh          $t8, 0x0($a1)
        MEM_H(0X0, ctx->r5) = ctx->r24;
            goto L_80005648;
    }
    // 0x80005894: sh          $t8, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r24;
L_80005898:
    // 0x80005898: andi        $v1, $s7, 0xF
    ctx->r3 = ctx->r23 & 0XF;
L_8000589C:
    // 0x8000589C: beq         $v1, $zero, L_800058BC
    if (ctx->r3 == 0) {
        // 0x800058A0: addiu       $s7, $s7, 0x1
        ctx->r23 = ADD32(ctx->r23, 0X1);
            goto L_800058BC;
    }
    // 0x800058A0: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
L_800058A4:
    // 0x800058A4: jal         0x80005900
    // 0x800058A8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80005900_6500(rdram, ctx);
        goto after_19;
    // 0x800058A8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_19:
    // 0x800058AC: andi        $v1, $s7, 0xF
    ctx->r3 = ctx->r23 & 0XF;
    // 0x800058B0: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x800058B4: bne         $v1, $zero, L_800058A4
    if (ctx->r3 != 0) {
        // 0x800058B8: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_800058A4;
    }
    // 0x800058B8: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_800058BC:
    // 0x800058BC: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x800058C0: lw          $t0, 0x73AC($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X73AC);
    // 0x800058C4: bgtzl       $t0, L_80005428
    if (SIGNED(ctx->r8) > 0) {
        // 0x800058C8: lbu         $s6, 0x0($s2)
        ctx->r22 = MEM_BU(ctx->r18, 0X0);
            goto L_80005428;
    }
    goto skip_5;
    // 0x800058C8: lbu         $s6, 0x0($s2)
    ctx->r22 = MEM_BU(ctx->r18, 0X0);
    skip_5:
    // 0x800058CC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_800058D0:
    // 0x800058D0: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x800058D4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800058D8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800058DC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800058E0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800058E4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800058E8: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x800058EC: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x800058F0: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x800058F4: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x800058F8: jr          $ra
    // 0x800058FC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x800058FC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_8000D060_DC60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000D060: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x8000D064: lui         $a2, 0x8016
    ctx->r6 = S32(0X8016 << 16);
    // 0x8000D068: addu        $a2, $a2, $t7
    ctx->r6 = ADD32(ctx->r6, ctx->r15);
    // 0x8000D06C: lw          $a2, 0x7C48($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X7C48);
    // 0x8000D070: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8000D074: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8000D078: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8000D07C: beq         $a2, $zero, L_8000D170
    if (ctx->r6 == 0) {
        // 0x8000D080: sw          $a1, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r5;
            goto L_8000D170;
    }
    // 0x8000D080: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8000D084: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
    // 0x8000D088: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8000D08C: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x8000D090: addiu       $a0, $zero, 0x78
    ctx->r4 = ADD32(0, 0X78);
L_8000D094:
    // 0x8000D094: lh          $t8, 0x19C($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X19C);
    // 0x8000D098: bnel        $t8, $zero, L_8000D164
    if (ctx->r24 != 0) {
        // 0x8000D09C: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_8000D164;
    }
    goto skip_0;
    // 0x8000D09C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    skip_0:
    // 0x8000D0A0: lw          $t9, 0x50($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X50);
    // 0x8000D0A4: lh          $t0, 0x6E($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X6E);
    // 0x8000D0A8: lw          $t8, 0x18($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X18);
    // 0x8000D0AC: lw          $t1, 0x54($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X54);
    // 0x8000D0B0: addu        $v0, $t9, $t0
    ctx->r2 = ADD32(ctx->r25, ctx->r8);
    // 0x8000D0B4: lw          $t9, 0x1C($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X1C);
    // 0x8000D0B8: lh          $t2, 0x74($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X74);
    // 0x8000D0BC: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x8000D0C0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8000D0C4: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x8000D0C8: lw          $t7, 0x24($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X24);
    // 0x8000D0CC: lui         $t6, 0x8006
    ctx->r14 = S32(0X8006 << 16);
    // 0x8000D0D0: addu        $a3, $t1, $t2
    ctx->r7 = ADD32(ctx->r9, ctx->r10);
    // 0x8000D0D4: andi        $t0, $t3, 0x1
    ctx->r8 = ctx->r11 & 0X1;
    // 0x8000D0D8: addiu       $t6, $t6, 0x29A0
    ctx->r14 = ADD32(ctx->r14, 0X29A0);
    // 0x8000D0DC: addu        $t1, $t7, $t0
    ctx->r9 = ADD32(ctx->r15, ctx->r8);
    // 0x8000D0E0: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x8000D0E4: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x8000D0E8: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8000D0EC: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    // 0x8000D0F0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8000D0F4: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x8000D0F8: bgez        $t3, L_8000D108
    if (SIGNED(ctx->r11) >= 0) {
        // 0x8000D0FC: sra         $t4, $t3, 1
        ctx->r12 = S32(SIGNED(ctx->r11) >> 1);
            goto L_8000D108;
    }
    // 0x8000D0FC: sra         $t4, $t3, 1
    ctx->r12 = S32(SIGNED(ctx->r11) >> 1);
    // 0x8000D100: addiu       $at, $t3, 0x1
    ctx->r1 = ADD32(ctx->r11, 0X1);
    // 0x8000D104: sra         $t4, $at, 1
    ctx->r12 = S32(SIGNED(ctx->r1) >> 1);
L_8000D108:
    // 0x8000D108: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8000D10C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8000D110: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8000D114: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x8000D118: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8000D11C: addu        $a2, $t5, $t6
    ctx->r6 = ADD32(ctx->r13, ctx->r14);
    // 0x8000D120: jal         0x8000D180
    // 0x8000D124: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    func_8000D180_DD80(rdram, ctx);
        goto after_0;
    // 0x8000D124: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x8000D128: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x8000D12C: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x8000D130: lui         $t5, 0x8006
    ctx->r13 = S32(0X8006 << 16);
    // 0x8000D134: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8000D138: lbu         $t5, -0x44F0($t5)
    ctx->r13 = MEM_BU(ctx->r13, -0X44F0);
    // 0x8000D13C: lh          $t2, 0x6E($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X6E);
    // 0x8000D140: lh          $t9, 0x6C($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X6C);
    // 0x8000D144: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x8000D148: addu        $t6, $t2, $t5
    ctx->r14 = ADD32(ctx->r10, ctx->r13);
    // 0x8000D14C: addiu       $t8, $t6, 0x1
    ctx->r24 = ADD32(ctx->r14, 0X1);
    // 0x8000D150: addiu       $t3, $t9, 0x1
    ctx->r11 = ADD32(ctx->r25, 0X1);
    // 0x8000D154: sh          $t8, 0x6E($v1)
    MEM_H(0X6E, ctx->r3) = ctx->r24;
    // 0x8000D158: b           L_8000D170
    // 0x8000D15C: sh          $t3, 0x6C($v1)
    MEM_H(0X6C, ctx->r3) = ctx->r11;
        goto L_8000D170;
    // 0x8000D15C: sh          $t3, 0x6C($v1)
    MEM_H(0X6C, ctx->r3) = ctx->r11;
    // 0x8000D160: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_8000D164:
    // 0x8000D164: bne         $a1, $a0, L_8000D094
    if (ctx->r5 != ctx->r4) {
        // 0x8000D168: addiu       $v0, $v0, 0x30
        ctx->r2 = ADD32(ctx->r2, 0X30);
            goto L_8000D094;
    }
    // 0x8000D168: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
    // 0x8000D16C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8000D170:
    // 0x8000D170: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8000D174: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8000D178: jr          $ra
    // 0x8000D17C: nop

    TRACE_RETURN()
    return;
    // 0x8000D17C: nop

;}
RECOMP_FUNC void func_80001498_2098(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80001498: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x8000149C: addiu       $t4, $t4, -0x3A34
    ctx->r12 = ADD32(ctx->r12, -0X3A34);
    // 0x800014A0: lw          $v1, 0x0($t4)
    ctx->r3 = MEM_W(ctx->r12, 0X0);
    // 0x800014A4: lui         $t5, 0xE700
    ctx->r13 = S32(0XE700 << 16);
    // 0x800014A8: lui         $t8, 0xBA00
    ctx->r24 = S32(0XBA00 << 16);
    // 0x800014AC: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x800014B0: sw          $t6, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r14;
    // 0x800014B4: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x800014B8: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x800014BC: lw          $v1, 0x0($t4)
    ctx->r3 = MEM_W(ctx->r12, 0X0);
    // 0x800014C0: ori         $t8, $t8, 0x1402
    ctx->r24 = ctx->r24 | 0X1402;
    // 0x800014C4: lui         $t9, 0x30
    ctx->r25 = S32(0X30 << 16);
    // 0x800014C8: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x800014CC: sw          $t7, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r15;
    // 0x800014D0: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x800014D4: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x800014D8: lw          $v1, 0x0($t4)
    ctx->r3 = MEM_W(ctx->r12, 0X0);
    // 0x800014DC: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x800014E0: lui         $t8, 0x4
    ctx->r24 = S32(0X4 << 16);
    // 0x800014E4: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x800014E8: sw          $t6, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r14;
    // 0x800014EC: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x800014F0: lui         $at, 0xFF00
    ctx->r1 = S32(0XFF00 << 16);
    // 0x800014F4: lui         $a2, 0x8016
    ctx->r6 = S32(0X8016 << 16);
    // 0x800014F8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800014FC: lhu         $t8, -0x523E($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X523E);
    // 0x80001500: andi        $t9, $t8, 0x3
    ctx->r25 = ctx->r24 & 0X3;
    // 0x80001504: sll         $t6, $t9, 19
    ctx->r14 = S32(ctx->r25 << 19);
    // 0x80001508: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x8000150C: ori         $t8, $t7, 0x13F
    ctx->r24 = ctx->r15 | 0X13F;
    // 0x80001510: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x80001514: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80001518: lw          $t9, -0x3A38($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3A38);
    // 0x8000151C: lui         $t6, 0x4
    ctx->r14 = S32(0X4 << 16);
    // 0x80001520: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80001524: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80001528: lh          $t6, -0x5250($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X5250);
    // 0x8000152C: lui         $t9, 0x8026
    ctx->r25 = S32(0X8026 << 16);
    // 0x80001530: addiu       $t9, $t9, 0x1000
    ctx->r25 = ADD32(ctx->r25, 0X1000);
    // 0x80001534: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80001538: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8000153C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80001540: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80001544: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80001548: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8000154C: sll         $t7, $t7, 11
    ctx->r15 = S32(ctx->r15 << 11);
    // 0x80001550: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x80001554: addu        $t6, $t8, $t9
    ctx->r14 = ADD32(ctx->r24, ctx->r25);
    // 0x80001558: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x8000155C: lw          $v1, 0x0($t4)
    ctx->r3 = MEM_W(ctx->r12, 0X0);
    // 0x80001560: lui         $t8, 0xF700
    ctx->r24 = S32(0XF700 << 16);
    // 0x80001564: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80001568: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x8000156C: sw          $t7, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r15;
    // 0x80001570: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80001574: lw          $a2, -0x3A38($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3A38);
    // 0x80001578: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x8000157C: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
    // 0x80001580: lhu         $t9, 0x2DBA($a2)
    ctx->r25 = MEM_HU(ctx->r6, 0X2DBA);
    // 0x80001584: lhu         $t8, 0x2DBC($a2)
    ctx->r24 = MEM_HU(ctx->r6, 0X2DBC);
    // 0x80001588: sll         $t6, $t9, 8
    ctx->r14 = S32(ctx->r25 << 8);
    // 0x8000158C: andi        $t7, $t6, 0xF800
    ctx->r15 = ctx->r14 & 0XF800;
    // 0x80001590: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x80001594: andi        $t6, $t9, 0x7C0
    ctx->r14 = ctx->r25 & 0X7C0;
    // 0x80001598: lhu         $t9, 0x2DBE($a2)
    ctx->r25 = MEM_HU(ctx->r6, 0X2DBE);
    // 0x8000159C: or          $t8, $t7, $t6
    ctx->r24 = ctx->r15 | ctx->r14;
    // 0x800015A0: sra         $t7, $t9, 2
    ctx->r15 = S32(SIGNED(ctx->r25) >> 2);
    // 0x800015A4: andi        $t6, $t7, 0x3E
    ctx->r14 = ctx->r15 & 0X3E;
    // 0x800015A8: lhu         $t7, 0x2DC0($a2)
    ctx->r15 = MEM_HU(ctx->r6, 0X2DC0);
    // 0x800015AC: or          $t9, $t8, $t6
    ctx->r25 = ctx->r24 | ctx->r14;
    // 0x800015B0: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x800015B4: or          $t0, $t9, $t8
    ctx->r8 = ctx->r25 | ctx->r24;
    // 0x800015B8: sll         $t6, $t0, 16
    ctx->r14 = S32(ctx->r8 << 16);
    // 0x800015BC: or          $t7, $t6, $t0
    ctx->r15 = ctx->r14 | ctx->r8;
    // 0x800015C0: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x800015C4: lw          $v1, 0x0($t4)
    ctx->r3 = MEM_W(ctx->r12, 0X0);
    // 0x800015C8: lui         $t8, 0xF64F
    ctx->r24 = S32(0XF64F << 16);
    // 0x800015CC: ori         $t8, $t8, 0xC3BC
    ctx->r24 = ctx->r24 | 0XC3BC;
    // 0x800015D0: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x800015D4: sw          $t9, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r25;
    // 0x800015D8: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x800015DC: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x800015E0: lw          $v1, 0x0($t4)
    ctx->r3 = MEM_W(ctx->r12, 0X0);
    // 0x800015E4: lui         $t9, 0xBA00
    ctx->r25 = S32(0XBA00 << 16);
    // 0x800015E8: ori         $t9, $t9, 0x1402
    ctx->r25 = ctx->r25 | 0X1402;
    // 0x800015EC: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x800015F0: sw          $t6, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r14;
    // 0x800015F4: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x800015F8: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x800015FC: lw          $v1, 0x0($t4)
    ctx->r3 = MEM_W(ctx->r12, 0X0);
    // 0x80001600: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x80001604: sw          $t7, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r15;
    // 0x80001608: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8000160C: jr          $ra
    // 0x80001610: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    TRACE_RETURN()
    return;
    // 0x80001610: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
;}
RECOMP_FUNC void func_8000B7E4_C3E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000B7E4: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x8000B7E8: addiu       $v1, $v1, -0x3340
    ctx->r3 = ADD32(ctx->r3, -0X3340);
    // 0x8000B7EC: addiu       $v0, $v1, 0x7FFF
    ctx->r2 = ADD32(ctx->r3, 0X7FFF);
    // 0x8000B7F0: lhu         $v0, 0x2DCD($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X2DCD);
    // 0x8000B7F4: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8000B7F8: addiu       $a0, $a0, -0x39F8
    ctx->r4 = ADD32(ctx->r4, -0X39F8);
    // 0x8000B7FC: slti        $at, $v0, 0x3C
    ctx->r1 = SIGNED(ctx->r2) < 0X3C ? 1 : 0;
    // 0x8000B800: bne         $at, $zero, L_8000B81C
    if (ctx->r1 != 0) {
        // 0x8000B804: addiu       $t6, $v0, -0x3C
        ctx->r14 = ADD32(ctx->r2, -0X3C);
            goto L_8000B81C;
    }
    // 0x8000B804: addiu       $t6, $v0, -0x3C
    ctx->r14 = ADD32(ctx->r2, -0X3C);
    // 0x8000B808: addiu       $at, $v1, 0x7FFF
    ctx->r1 = ADD32(ctx->r3, 0X7FFF);
    // 0x8000B80C: sh          $t6, 0x2DCD($at)
    MEM_H(0X2DCD, ctx->r1) = ctx->r14;
    // 0x8000B810: lw          $t7, 0x264($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X264);
    // 0x8000B814: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8000B818: sw          $t8, 0x264($a0)
    MEM_W(0X264, ctx->r4) = ctx->r24;
L_8000B81C:
    // 0x8000B81C: jr          $ra
    // 0x8000B820: nop

    TRACE_RETURN()
    return;
    // 0x8000B820: nop

;}
RECOMP_FUNC void func_80033688_34288(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80033688: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8003368C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80033690: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80033694: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80033698: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8003369C: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x800336A0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800336A4: lwc1        $f6, -0x7080($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X7080);
    // 0x800336A8: lwc1        $f4, 0x1C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x800336AC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800336B0: lwc1        $f16, -0x707C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X707C);
    // 0x800336B4: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800336B8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800336BC: lwc1        $f6, -0x7078($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X7078);
    // 0x800336C0: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x800336C4: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x800336C8: or          $s2, $a3, $zero
    ctx->r18 = ctx->r7 | 0;
    // 0x800336CC: addiu       $t2, $sp, 0x40
    ctx->r10 = ADD32(ctx->r29, 0X40);
    // 0x800336D0: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    // 0x800336D4: lwc1        $f10, 0x20($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X20);
    // 0x800336D8: addiu       $t3, $sp, 0x3C
    ctx->r11 = ADD32(ctx->r29, 0X3C);
    // 0x800336DC: addiu       $a3, $sp, 0x44
    ctx->r7 = ADD32(ctx->r29, 0X44);
    // 0x800336E0: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x800336E4: swc1        $f18, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f18.u32l;
    // 0x800336E8: lwc1        $f4, 0x24($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X24);
    // 0x800336EC: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800336F0: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    // 0x800336F4: lhu         $t0, 0x18($s1)
    ctx->r8 = MEM_HU(ctx->r17, 0X18);
    // 0x800336F8: lhu         $t8, 0x16($s1)
    ctx->r24 = MEM_HU(ctx->r17, 0X16);
    // 0x800336FC: lhu         $t6, 0x14($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X14);
    // 0x80033700: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x80033704: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80033708: andi        $a2, $t0, 0x3FF
    ctx->r6 = ctx->r8 & 0X3FF;
    // 0x8003370C: andi        $a1, $t8, 0x3FF
    ctx->r5 = ctx->r24 & 0X3FF;
    // 0x80033710: jal         0x80033898
    // 0x80033714: andi        $a0, $t6, 0x3FF
    ctx->r4 = ctx->r14 & 0X3FF;
    func_80033898_34498(rdram, ctx);
        goto after_0;
    // 0x80033714: andi        $a0, $t6, 0x3FF
    ctx->r4 = ctx->r14 & 0X3FF;
    after_0:
    // 0x80033718: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8003371C: lwc1        $f16, 0x8($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X8);
    // 0x80033720: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80033724: addiu       $t0, $sp, 0x40
    ctx->r8 = ADD32(ctx->r29, 0X40);
    // 0x80033728: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8003372C: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80033730: addiu       $t1, $sp, 0x3C
    ctx->r9 = ADD32(ctx->r29, 0X3C);
    // 0x80033734: addiu       $a3, $sp, 0x44
    ctx->r7 = ADD32(ctx->r29, 0X44);
    // 0x80033738: swc1        $f18, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f18.u32l;
    // 0x8003373C: lwc1        $f6, 0xC($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0XC);
    // 0x80033740: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80033744: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    // 0x80033748: lwc1        $f16, 0x10($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X10);
    // 0x8003374C: add.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80033750: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    // 0x80033754: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x80033758: sub.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x8003375C: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
    // 0x80033760: lwc1        $f16, 0xC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XC);
    // 0x80033764: sub.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x80033768: swc1        $f18, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f18.u32l;
    // 0x8003376C: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x80033770: sub.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80033774: swc1        $f10, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f10.u32l;
    // 0x80033778: lhu         $t8, 0x18($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X18);
    // 0x8003377C: lhu         $t6, 0x16($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X16);
    // 0x80033780: lhu         $t4, 0x14($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X14);
    // 0x80033784: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x80033788: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x8003378C: andi        $a2, $t8, 0x3FF
    ctx->r6 = ctx->r24 & 0X3FF;
    // 0x80033790: andi        $a1, $t6, 0x3FF
    ctx->r5 = ctx->r14 & 0X3FF;
    // 0x80033794: jal         0x80033A3C
    // 0x80033798: andi        $a0, $t4, 0x3FF
    ctx->r4 = ctx->r12 & 0X3FF;
    func_80033A3C_3463C(rdram, ctx);
        goto after_1;
    // 0x80033798: andi        $a0, $t4, 0x3FF
    ctx->r4 = ctx->r12 & 0X3FF;
    after_1:
    // 0x8003379C: lh          $t2, 0x40($s2)
    ctx->r10 = MEM_H(ctx->r18, 0X40);
    // 0x800337A0: lwc1        $f18, 0x20($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X20);
    // 0x800337A4: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x800337A8: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x800337AC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800337B0: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800337B4: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x800337B8: sub.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x800337BC: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800337C0: swc1        $f10, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f10.u32l;
    // 0x800337C4: lh          $t3, 0x42($s2)
    ctx->r11 = MEM_H(ctx->r18, 0X42);
    // 0x800337C8: lwc1        $f18, 0x24($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X24);
    // 0x800337CC: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x800337D0: nop

    // 0x800337D4: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800337D8: mul.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x800337DC: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800337E0: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    // 0x800337E4: lhu         $t4, 0x3C($s2)
    ctx->r12 = MEM_HU(ctx->r18, 0X3C);
    // 0x800337E8: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x800337EC: bgez        $t4, L_80033800
    if (SIGNED(ctx->r12) >= 0) {
        // 0x800337F0: cvt.s.w     $f18, $f16
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
            goto L_80033800;
    }
    // 0x800337F0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800337F4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800337F8: nop

    // 0x800337FC: add.s       $f18, $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f4.fl;
L_80033800:
    // 0x80033800: lhu         $t5, 0x3E($s2)
    ctx->r13 = MEM_HU(ctx->r18, 0X3E);
    // 0x80033804: lwc1        $f6, 0x1C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x80033808: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8003380C: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x80033810: mul.s       $f12, $f18, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x80033814: bgez        $t5, L_80033828
    if (SIGNED(ctx->r13) >= 0) {
        // 0x80033818: cvt.s.w     $f4, $f16
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
            goto L_80033828;
    }
    // 0x80033818: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8003381C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80033820: nop

    // 0x80033824: add.s       $f4, $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f18.fl;
L_80033828:
    // 0x80033828: lwc1        $f6, 0x20($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X20);
    // 0x8003382C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80033830: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80033834: lwc1        $f18, -0x7074($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X7074);
    // 0x80033838: lwc1        $f16, 0x1C($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x8003383C: mul.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80033840: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x80033844: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x80033848: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x8003384C: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x80033850: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x80033854: lw          $t7, 0x54($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X54);
    // 0x80033858: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8003385C: jal         0x80033BDC
    // 0x80033860: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    func_80033BDC_347DC(rdram, ctx);
        goto after_2;
    // 0x80033860: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    after_2:
    // 0x80033864: beq         $v0, $zero, L_80033880
    if (ctx->r2 == 0) {
        // 0x80033868: lw          $t8, 0x50($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X50);
            goto L_80033880;
    }
    // 0x80033868: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x8003386C: sw          $s2, 0x34($t8)
    MEM_W(0X34, ctx->r24) = ctx->r18;
    // 0x80033870: sw          $t8, 0x38($s2)
    MEM_W(0X38, ctx->r18) = ctx->r24;
    // 0x80033874: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80033878: lbu         $t9, -0x7070($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X7070);
    // 0x8003387C: sb          $t9, 0x44($s2)
    MEM_B(0X44, ctx->r18) = ctx->r25;
L_80033880:
    // 0x80033880: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80033884: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80033888: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8003388C: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80033890: jr          $ra
    // 0x80033894: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x80033894: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80020724_21324(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80020724: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80020728: jr          $ra
    // 0x8002072C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x8002072C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_8003F350_3FF50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003F350: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003F354: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003F358: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003F35C: lw          $a0, 0x7740($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7740);
    // 0x8003F360: jal         0x80034B24
    // 0x8003F364: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034B24_35724(rdram, ctx);
        goto after_0;
    // 0x8003F364: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8003F368: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003F36C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003F370: sw          $v0, 0x7750($at)
    MEM_W(0X7750, ctx->r1) = ctx->r2;
    // 0x8003F374: jr          $ra
    // 0x8003F378: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8003F378: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80037060_37C60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80037060: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80037064: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80037068: jr          $ra
    // 0x8003706C: sb          $t6, 0x7A95($at)
    MEM_B(0X7A95, ctx->r1) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x8003706C: sb          $t6, 0x7A95($at)
    MEM_B(0X7A95, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void func_800370B0_37CB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800370B0: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x800370B4: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x800370B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800370BC: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x800370C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800370C4: addiu       $t6, $zero, 0x260
    ctx->r14 = ADD32(0, 0X260);
    // 0x800370C8: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800370CC: sh          $t6, -0x5020($at)
    MEM_H(-0X5020, ctx->r1) = ctx->r14;
    // 0x800370D0: jal         0x80003728
    // 0x800370D4: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    func_80003728_4328(rdram, ctx);
        goto after_0;
    // 0x800370D4: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_0:
    // 0x800370D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800370DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800370E0: jr          $ra
    // 0x800370E4: nop

    TRACE_RETURN()
    return;
    // 0x800370E4: nop

;}
RECOMP_FUNC void func_8000F3D8_FFD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000F3D8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8000F3DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8000F3E0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8000F3E4: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8000F3E8: or          $t7, $a2, $zero
    ctx->r15 = ctx->r6 | 0;
    // 0x8000F3EC: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x8000F3F0: lwc1        $f4, 0x10($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X10);
    // 0x8000F3F4: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x8000F3F8: lw          $a3, 0xC($t7)
    ctx->r7 = MEM_W(ctx->r15, 0XC);
    // 0x8000F3FC: lw          $a2, 0x8($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X8);
    // 0x8000F400: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8000F404: swc1        $f12, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f12.u32l;
    // 0x8000F408: jal         0x8000F5F8
    // 0x8000F40C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8000F5F8_101F8(rdram, ctx);
        goto after_0;
    // 0x8000F40C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x8000F410: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8000F414: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8000F418: jr          $ra
    // 0x8000F41C: nop

    TRACE_RETURN()
    return;
    // 0x8000F41C: nop

;}
RECOMP_FUNC void func_80008690_9290(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80008690: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80008694: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x80008698: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x8000869C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800086A0: jr          $ra
    // 0x800086A4: sw          $a0, 0x5F7C($at)
    MEM_W(0X5F7C, ctx->r1) = ctx->r4;
    TRACE_RETURN()
    return;
    // 0x800086A4: sw          $a0, 0x5F7C($at)
    MEM_W(0X5F7C, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_800041E0_4DE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800041E0: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x800041E4: beq         $a1, $zero, L_80004200
    if (ctx->r5 == 0) {
        // 0x800041E8: addiu       $a1, $a1, -0x1
        ctx->r5 = ADD32(ctx->r5, -0X1);
            goto L_80004200;
    }
    // 0x800041E8: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
L_800041EC:
    // 0x800041EC: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x800041F0: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    // 0x800041F4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x800041F8: bne         $a1, $zero, L_800041EC
    if (ctx->r5 != 0) {
        // 0x800041FC: addiu       $a1, $a1, -0x1
        ctx->r5 = ADD32(ctx->r5, -0X1);
            goto L_800041EC;
    }
    // 0x800041FC: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
L_80004200:
    // 0x80004200: jr          $ra
    // 0x80004204: nop

    TRACE_RETURN()
    return;
    // 0x80004204: nop

;}
RECOMP_FUNC void func_80036308_36F08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80036308: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003630C: beq         $a0, $zero, L_80036378
    if (ctx->r4 == 0) {
        // 0x80036310: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80036378;
    }
    // 0x80036310: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80036314: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x80036318: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8003631C: andi        $t6, $v0, 0x7F
    ctx->r14 = ctx->r2 & 0X7F;
    // 0x80036320: beq         $t6, $at, L_80036348
    if (ctx->r14 == ctx->r1) {
        // 0x80036324: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80036348;
    }
    // 0x80036324: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80036328: beq         $t6, $at, L_80036360
    if (ctx->r14 == ctx->r1) {
        // 0x8003632C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80036360;
    }
    // 0x8003632C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80036330: beq         $t6, $at, L_80036370
    if (ctx->r14 == ctx->r1) {
        // 0x80036334: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_80036370;
    }
    // 0x80036334: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80036338: beql        $t6, $at, L_8003637C
    if (ctx->r14 == ctx->r1) {
        // 0x8003633C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8003637C;
    }
    goto skip_0;
    // 0x8003633C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80036340: b           L_8003637C
    // 0x80036344: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8003637C;
    // 0x80036344: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80036348:
    // 0x80036348: jal         0x80007C90
    // 0x8003634C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80007C90_8890(rdram, ctx);
        goto after_0;
    // 0x8003634C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80036350: jal         0x8000A228
    // 0x80036354: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8000A228_AE28(rdram, ctx);
        goto after_1;
    // 0x80036354: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80036358: b           L_8003637C
    // 0x8003635C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8003637C;
    // 0x8003635C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80036360:
    // 0x80036360: jal         0x8000A5C4
    // 0x80036364: nop

    func_8000A5C4_B1C4(rdram, ctx);
        goto after_2;
    // 0x80036364: nop

    after_2:
    // 0x80036368: b           L_8003637C
    // 0x8003636C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8003637C;
    // 0x8003636C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80036370:
    // 0x80036370: jal         0x8000A394
    // 0x80036374: nop

    func_8000A394_AF94(rdram, ctx);
        goto after_3;
    // 0x80036374: nop

    after_3:
L_80036378:
    // 0x80036378: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003637C:
    // 0x8003637C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80036380: jr          $ra
    // 0x80036384: nop

    TRACE_RETURN()
    return;
    // 0x80036384: nop

;}
RECOMP_FUNC void func_80037414_38014(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80037414: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x80037418: addiu       $v0, $v0, -0x3A38
    ctx->r2 = ADD32(ctx->r2, -0X3A38);
    // 0x8003741C: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80037420: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80037424: addiu       $t6, $zero, 0x80
    ctx->r14 = ADD32(0, 0X80);
    // 0x80037428: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8003742C: sb          $t6, -0x51D7($at)
    MEM_B(-0X51D7, ctx->r1) = ctx->r14;
    // 0x80037430: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80037434: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80037438: addiu       $t8, $zero, 0x221
    ctx->r24 = ADD32(0, 0X221);
    // 0x8003743C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80037440: jr          $ra
    // 0x80037444: sh          $t8, -0x5020($at)
    MEM_H(-0X5020, ctx->r1) = ctx->r24;
    TRACE_RETURN()
    return;
    // 0x80037444: sh          $t8, -0x5020($at)
    MEM_H(-0X5020, ctx->r1) = ctx->r24;
;}
RECOMP_FUNC void alFxPull(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800521EC: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x800521F0: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x800521F4: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x800521F8: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x800521FC: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x80052200: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x80052204: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80052208: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x8005220C: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80052210: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80052214: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80052218: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8005221C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x80052220: lw          $t6, 0xB8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB8);
    // 0x80052224: sw          $zero, 0x80($sp)
    MEM_W(0X80, ctx->r29) = 0;
    // 0x80052228: or          $s6, $a2, $zero
    ctx->r22 = ctx->r6 | 0;
    // 0x8005222C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80052230: lw          $t9, 0x4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X4);
    // 0x80052234: jalr        $t9
    // 0x80052238: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80052238: nop

    after_0:
    // 0x8005223C: sll         $s1, $s6, 1
    ctx->r17 = S32(ctx->r22 << 1);
    // 0x80052240: lui         $t8, 0xC00
    ctx->r24 = S32(0XC00 << 16);
    // 0x80052244: lui         $t2, 0x6C0
    ctx->r10 = S32(0X6C0 << 16);
    // 0x80052248: lui         $t3, 0xC00
    ctx->r11 = S32(0XC00 << 16);
    // 0x8005224C: lui         $t4, 0x800
    ctx->r12 = S32(0X800 << 16);
    // 0x80052250: andi        $t1, $s1, 0xFFFF
    ctx->r9 = ctx->r17 & 0XFFFF;
    // 0x80052254: lui         $t7, 0x800
    ctx->r15 = S32(0X800 << 16);
    // 0x80052258: ori         $t2, $t2, 0x6C0
    ctx->r10 = ctx->r10 | 0X6C0;
    // 0x8005225C: ori         $t8, $t8, 0xDA83
    ctx->r24 = ctx->r24 | 0XDA83;
    // 0x80052260: ori         $t4, $t4, 0x6C0
    ctx->r12 = ctx->r12 | 0X6C0;
    // 0x80052264: ori         $t3, $t3, 0x5A82
    ctx->r11 = ctx->r11 | 0X5A82;
    // 0x80052268: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8005226C: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x80052270: sw          $t8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r24;
    // 0x80052274: sw          $t2, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r10;
    // 0x80052278: sw          $t3, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r11;
    // 0x8005227C: sw          $t4, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r12;
    // 0x80052280: lw          $a1, 0x18($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X18);
    // 0x80052284: addiu       $t5, $v0, 0x18
    ctx->r13 = ADD32(ctx->r2, 0X18);
    // 0x80052288: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x8005228C: addiu       $s2, $zero, 0x140
    ctx->r18 = ADD32(0, 0X140);
    // 0x80052290: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80052294: sw          $t1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r9;
    // 0x80052298: sw          $s1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r17;
    // 0x8005229C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x800522A0: addiu       $a2, $zero, 0x6C0
    ctx->r6 = ADD32(0, 0X6C0);
    // 0x800522A4: jal         0x80051A40
    // 0x800522A8: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    _saveBuffer(rdram, ctx);
        goto after_1;
    // 0x800522A8: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    after_1:
    // 0x800522AC: lw          $v1, 0x80($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X80);
    // 0x800522B0: lui         $t6, 0x200
    ctx->r14 = S32(0X200 << 16);
    // 0x800522B4: ori         $t6, $t6, 0x800
    ctx->r14 = ctx->r14 | 0X800;
    // 0x800522B8: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x800522BC: sw          $s1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r17;
    // 0x800522C0: lbu         $t9, 0x24($s3)
    ctx->r25 = MEM_BU(ctx->r19, 0X24);
    // 0x800522C4: addiu       $s0, $v0, 0x8
    ctx->r16 = ADD32(ctx->r2, 0X8);
    // 0x800522C8: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x800522CC: blezl       $t9, L_800524AC
    if (SIGNED(ctx->r25) <= 0) {
        // 0x800522D0: lw          $v1, 0x1C($s3)
        ctx->r3 = MEM_W(ctx->r19, 0X1C);
            goto L_800524AC;
    }
    goto skip_0;
    // 0x800522D0: lw          $v1, 0x1C($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X1C);
    skip_0:
    // 0x800522D4: lw          $v0, 0x18($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X18);
L_800522D8:
    // 0x800522D8: lw          $t7, 0x20($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X20);
    // 0x800522DC: sll         $t8, $s7, 2
    ctx->r24 = S32(ctx->r23 << 2);
    // 0x800522E0: addu        $t8, $t8, $s7
    ctx->r24 = ADD32(ctx->r24, ctx->r23);
    // 0x800522E4: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x800522E8: addu        $s1, $t7, $t8
    ctx->r17 = ADD32(ctx->r15, ctx->r24);
    // 0x800522EC: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
    // 0x800522F0: lw          $t5, 0x4($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X4);
    // 0x800522F4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x800522F8: negu        $t3, $t2
    ctx->r11 = SUB32(0, ctx->r10);
    // 0x800522FC: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x80052300: negu        $t6, $t5
    ctx->r14 = SUB32(0, ctx->r13);
    // 0x80052304: addu        $s4, $v0, $t4
    ctx->r20 = ADD32(ctx->r2, ctx->r12);
    // 0x80052308: sll         $t9, $t6, 1
    ctx->r25 = S32(ctx->r14 << 1);
    // 0x8005230C: bne         $s4, $v1, L_80052334
    if (ctx->r20 != ctx->r3) {
        // 0x80052310: addu        $fp, $v0, $t9
        ctx->r30 = ADD32(ctx->r2, ctx->r25);
            goto L_80052334;
    }
    // 0x80052310: addu        $fp, $v0, $t9
    ctx->r30 = ADD32(ctx->r2, ctx->r25);
    // 0x80052314: or          $t7, $s2, $zero
    ctx->r15 = ctx->r18 | 0;
    // 0x80052318: sll         $s2, $s5, 16
    ctx->r18 = S32(ctx->r21 << 16);
    // 0x8005231C: sll         $s5, $t7, 16
    ctx->r21 = S32(ctx->r15 << 16);
    // 0x80052320: sra         $t2, $s5, 16
    ctx->r10 = S32(SIGNED(ctx->r21) >> 16);
    // 0x80052324: sra         $t8, $s2, 16
    ctx->r24 = S32(SIGNED(ctx->r18) >> 16);
    // 0x80052328: or          $s2, $t8, $zero
    ctx->r18 = ctx->r24 | 0;
    // 0x8005232C: b           L_8005234C
    // 0x80052330: or          $s5, $t2, $zero
    ctx->r21 = ctx->r10 | 0;
        goto L_8005234C;
    // 0x80052330: or          $s5, $t2, $zero
    ctx->r21 = ctx->r10 | 0;
L_80052334:
    // 0x80052334: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x80052338: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x8005233C: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    // 0x80052340: jal         0x80051BC8
    // 0x80052344: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    _loadBuffer(rdram, ctx);
        goto after_2;
    // 0x80052344: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_2:
    // 0x80052348: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_8005234C:
    // 0x8005234C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80052350: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80052354: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x80052358: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    // 0x8005235C: jal         0x80051D54
    // 0x80052360: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    _loadOutputBuffer(rdram, ctx);
        goto after_3;
    // 0x80052360: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_3:
    // 0x80052364: lh          $a0, 0x8($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X8);
    // 0x80052368: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8005236C: lui         $at, 0xC00
    ctx->r1 = S32(0XC00 << 16);
    // 0x80052370: beq         $a0, $zero, L_800523C4
    if (ctx->r4 == 0) {
        // 0x80052374: andi        $t4, $a0, 0xFFFF
        ctx->r12 = ctx->r4 & 0XFFFF;
            goto L_800523C4;
    }
    // 0x80052374: andi        $t4, $a0, 0xFFFF
    ctx->r12 = ctx->r4 & 0XFFFF;
    // 0x80052378: sll         $t9, $s5, 16
    ctx->r25 = S32(ctx->r21 << 16);
    // 0x8005237C: andi        $t7, $s2, 0xFFFF
    ctx->r15 = ctx->r18 & 0XFFFF;
    // 0x80052380: or          $t8, $t9, $t7
    ctx->r24 = ctx->r25 | ctx->r15;
    // 0x80052384: or          $t5, $t4, $at
    ctx->r13 = ctx->r12 | ctx->r1;
    // 0x80052388: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x8005238C: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80052390: lw          $t2, 0x24($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X24);
    // 0x80052394: addiu       $s0, $v0, 0x8
    ctx->r16 = ADD32(ctx->r2, 0X8);
    // 0x80052398: bnel        $t2, $zero, L_800523C8
    if (ctx->r10 != 0) {
        // 0x8005239C: lh          $v1, 0xA($s1)
        ctx->r3 = MEM_H(ctx->r17, 0XA);
            goto L_800523C8;
    }
    goto skip_1;
    // 0x8005239C: lh          $v1, 0xA($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XA);
    skip_1:
    // 0x800523A0: lw          $t3, 0x20($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X20);
    // 0x800523A4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x800523A8: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    // 0x800523AC: bne         $t3, $zero, L_800523C4
    if (ctx->r11 != 0) {
        // 0x800523B0: or          $a2, $s2, $zero
        ctx->r6 = ctx->r18 | 0;
            goto L_800523C4;
    }
    // 0x800523B0: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x800523B4: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    // 0x800523B8: jal         0x80051A40
    // 0x800523BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    _saveBuffer(rdram, ctx);
        goto after_4;
    // 0x800523BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_4:
    // 0x800523C0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_800523C4:
    // 0x800523C4: lh          $v1, 0xA($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XA);
L_800523C8:
    // 0x800523C8: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x800523CC: lui         $at, 0xC00
    ctx->r1 = S32(0XC00 << 16);
    // 0x800523D0: beq         $v1, $zero, L_80052410
    if (ctx->r3 == 0) {
        // 0x800523D4: andi        $t5, $v1, 0xFFFF
        ctx->r13 = ctx->r3 & 0XFFFF;
            goto L_80052410;
    }
    // 0x800523D4: andi        $t5, $v1, 0xFFFF
    ctx->r13 = ctx->r3 & 0XFFFF;
    // 0x800523D8: sll         $t7, $s2, 16
    ctx->r15 = S32(ctx->r18 << 16);
    // 0x800523DC: andi        $t8, $s5, 0xFFFF
    ctx->r24 = ctx->r21 & 0XFFFF;
    // 0x800523E0: or          $t2, $t7, $t8
    ctx->r10 = ctx->r15 | ctx->r24;
    // 0x800523E4: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x800523E8: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x800523EC: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
    // 0x800523F0: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x800523F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x800523F8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x800523FC: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x80052400: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x80052404: jal         0x80051A40
    // 0x80052408: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    _saveBuffer(rdram, ctx);
        goto after_5;
    // 0x80052408: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    after_5:
    // 0x8005240C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_80052410:
    // 0x80052410: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x80052414: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80052418: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x8005241C: beql        $a0, $zero, L_80052434
    if (ctx->r4 == 0) {
        // 0x80052420: lw          $t3, 0x24($s1)
        ctx->r11 = MEM_W(ctx->r17, 0X24);
            goto L_80052434;
    }
    goto skip_2;
    // 0x80052420: lw          $t3, 0x24($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X24);
    skip_2:
    // 0x80052424: jal         0x80051988
    // 0x80052428: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    _filterBuffer(rdram, ctx);
        goto after_6;
    // 0x80052428: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    after_6:
    // 0x8005242C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80052430: lw          $t3, 0x24($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X24);
L_80052434:
    // 0x80052434: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80052438: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    // 0x8005243C: bne         $t3, $zero, L_80052454
    if (ctx->r11 != 0) {
        // 0x80052440: or          $a2, $s2, $zero
        ctx->r6 = ctx->r18 | 0;
            goto L_80052454;
    }
    // 0x80052440: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x80052444: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    // 0x80052448: jal         0x80051A40
    // 0x8005244C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    _saveBuffer(rdram, ctx);
        goto after_7;
    // 0x8005244C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_7:
    // 0x80052450: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_80052454:
    // 0x80052454: lh          $v1, 0xC($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XC);
    // 0x80052458: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x8005245C: sll         $t4, $s7, 16
    ctx->r12 = S32(ctx->r23 << 16);
    // 0x80052460: beq         $v1, $zero, L_8005248C
    if (ctx->r3 == 0) {
        // 0x80052464: sra         $s7, $t4, 16
        ctx->r23 = S32(SIGNED(ctx->r12) >> 16);
            goto L_8005248C;
    }
    // 0x80052464: sra         $s7, $t4, 16
    ctx->r23 = S32(SIGNED(ctx->r12) >> 16);
    // 0x80052468: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x8005246C: andi        $t5, $v1, 0xFFFF
    ctx->r13 = ctx->r3 & 0XFFFF;
    // 0x80052470: lui         $at, 0xC00
    ctx->r1 = S32(0XC00 << 16);
    // 0x80052474: sll         $t7, $s2, 16
    ctx->r15 = S32(ctx->r18 << 16);
    // 0x80052478: ori         $t8, $t7, 0x800
    ctx->r24 = ctx->r15 | 0X800;
    // 0x8005247C: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x80052480: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80052484: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80052488: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_8005248C:
    // 0x8005248C: lbu         $t6, 0x24($s3)
    ctx->r14 = MEM_BU(ctx->r19, 0X24);
    // 0x80052490: lw          $t2, 0x4($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X4);
    // 0x80052494: lw          $v0, 0x18($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X18);
    // 0x80052498: slt         $at, $s7, $t6
    ctx->r1 = SIGNED(ctx->r23) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8005249C: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x800524A0: bne         $at, $zero, L_800522D8
    if (ctx->r1 != 0) {
        // 0x800524A4: addu        $v1, $v0, $t3
        ctx->r3 = ADD32(ctx->r2, ctx->r11);
            goto L_800522D8;
    }
    // 0x800524A4: addu        $v1, $v0, $t3
    ctx->r3 = ADD32(ctx->r2, ctx->r11);
    // 0x800524A8: lw          $v1, 0x1C($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X1C);
L_800524AC:
    // 0x800524AC: lw          $t9, 0x18($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X18);
    // 0x800524B0: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x800524B4: lw          $t3, 0x14($s3)
    ctx->r11 = MEM_W(ctx->r19, 0X14);
    // 0x800524B8: sll         $t2, $v1, 1
    ctx->r10 = S32(ctx->r3 << 1);
    // 0x800524BC: addu        $t8, $t9, $t7
    ctx->r24 = ADD32(ctx->r25, ctx->r15);
    // 0x800524C0: addu        $t4, $t3, $t2
    ctx->r12 = ADD32(ctx->r11, ctx->r10);
    // 0x800524C4: sltu        $at, $t4, $t8
    ctx->r1 = ctx->r12 < ctx->r24 ? 1 : 0;
    // 0x800524C8: beq         $at, $zero, L_800524D8
    if (ctx->r1 == 0) {
        // 0x800524CC: sw          $t8, 0x18($s3)
        MEM_W(0X18, ctx->r19) = ctx->r24;
            goto L_800524D8;
    }
    // 0x800524CC: sw          $t8, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->r24;
    // 0x800524D0: subu        $t5, $t8, $t2
    ctx->r13 = SUB32(ctx->r24, ctx->r10);
    // 0x800524D4: sw          $t5, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->r13;
L_800524D8:
    // 0x800524D8: lui         $t6, 0xA00
    ctx->r14 = S32(0XA00 << 16);
    // 0x800524DC: ori         $t6, $t6, 0x800
    ctx->r14 = ctx->r14 | 0X800;
    // 0x800524E0: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x800524E4: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x800524E8: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x800524EC: lui         $at, 0x6C0
    ctx->r1 = S32(0X6C0 << 16);
    // 0x800524F0: addiu       $v0, $s0, 0x8
    ctx->r2 = ADD32(ctx->r16, 0X8);
    // 0x800524F4: or          $t7, $t9, $at
    ctx->r15 = ctx->r25 | ctx->r1;
    // 0x800524F8: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x800524FC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80052500: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x80052504: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x80052508: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x8005250C: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80052510: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80052514: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80052518: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8005251C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80052520: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80052524: jr          $ra
    // 0x80052528: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    TRACE_RETURN()
    return;
    // 0x80052528: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
;}
RECOMP_FUNC void func_80023560_24160(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80023560: addiu       $sp, $sp, -0x130
    ctx->r29 = ADD32(ctx->r29, -0X130);
    // 0x80023564: sw          $a0, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->r4;
    // 0x80023568: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8002356C: lw          $a0, -0x717C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X717C);
    // 0x80023570: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80023574: addiu       $t7, $sp, 0x2C
    ctx->r15 = ADD32(ctx->r29, 0X2C);
    // 0x80023578: addiu       $t6, $zero, 0x100
    ctx->r14 = ADD32(0, 0X100);
    // 0x8002357C: lw          $a1, 0x3F0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X3F0);
    // 0x80023580: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80023584: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80023588: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8002358C: jal         0x8004525C
    // 0x80023590: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    osPfsReadWriteFile_recomp(rdram, ctx);
        goto after_0;
    // 0x80023590: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x80023594: bne         $v0, $zero, L_800235E0
    if (ctx->r2 != 0) {
        // 0x80023598: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_800235E0;
    }
    // 0x80023598: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8002359C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x800235A0: jal         0x80023A1C
    // 0x800235A4: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    func_80023A1C_2461C(rdram, ctx);
        goto after_1;
    // 0x800235A4: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_1:
    // 0x800235A8: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800235AC: lw          $t9, 0x130($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X130);
    // 0x800235B0: addiu       $t0, $sp, 0x30
    ctx->r8 = ADD32(ctx->r29, 0X30);
    // 0x800235B4: beql        $v0, $t8, L_800235C8
    if (ctx->r2 == ctx->r24) {
        // 0x800235B8: lw          $at, 0x0($t0)
        ctx->r1 = MEM_W(ctx->r8, 0X0);
            goto L_800235C8;
    }
    goto skip_0;
    // 0x800235B8: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    skip_0:
    // 0x800235BC: b           L_800235E0
    // 0x800235C0: addiu       $a0, $zero, 0x102
    ctx->r4 = ADD32(0, 0X102);
        goto L_800235E0;
    // 0x800235C0: addiu       $a0, $zero, 0x102
    ctx->r4 = ADD32(0, 0X102);
    // 0x800235C4: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
L_800235C8:
    // 0x800235C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800235CC: sw          $at, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r1;
    // 0x800235D0: lw          $t2, 0x4($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X4);
    // 0x800235D4: sw          $t2, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r10;
    // 0x800235D8: lw          $at, 0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X8);
    // 0x800235DC: sw          $at, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r1;
L_800235E0:
    // 0x800235E0: jal         0x80023ADC
    // 0x800235E4: sw          $a0, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r4;
    func_80023ADC_246DC(rdram, ctx);
        goto after_2;
    // 0x800235E4: sw          $a0, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r4;
    after_2:
    // 0x800235E8: lui         $v1, 0x8017
    ctx->r3 = S32(0X8017 << 16);
    // 0x800235EC: addiu       $v1, $v1, -0x717C
    ctx->r3 = ADD32(ctx->r3, -0X717C);
    // 0x800235F0: lw          $a0, 0x12C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X12C);
    // 0x800235F4: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x800235F8: sw          $a0, 0x3FC($t3)
    MEM_W(0X3FC, ctx->r11) = ctx->r4;
    // 0x800235FC: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x80023600: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80023604: lw          $v0, 0x3FC($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X3FC);
    // 0x80023608: jr          $ra
    // 0x8002360C: addiu       $sp, $sp, 0x130
    ctx->r29 = ADD32(ctx->r29, 0X130);
    TRACE_RETURN()
    return;
    // 0x8002360C: addiu       $sp, $sp, 0x130
    ctx->r29 = ADD32(ctx->r29, 0X130);
;}
RECOMP_FUNC void func_800020B8_2CB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800020B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800020BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800020C0: jal         0x80004240
    // 0x800020C4: nop

    func_80004240_4E40(rdram, ctx);
        goto after_0;
    // 0x800020C4: nop

    after_0:
    // 0x800020C8: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x800020CC: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x800020D0: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x800020D4: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x800020D8: lui         $a1, 0x802F
    ctx->r5 = S32(0X802F << 16);
    // 0x800020DC: addiu       $a1, $a1, 0x7000
    ctx->r5 = ADD32(ctx->r5, 0X7000);
    // 0x800020E0: ori         $a2, $zero, 0xA000
    ctx->r6 = 0 | 0XA000;
    // 0x800020E4: jal         0x800148C0
    // 0x800020E8: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_800148C0_154C0(rdram, ctx);
        goto after_1;
    // 0x800020E8: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_1:
    // 0x800020EC: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x800020F0: jal         0x80005A20
    // 0x800020F4: addiu       $a0, $a0, -0x5230
    ctx->r4 = ADD32(ctx->r4, -0X5230);
    func_80005A20_6620(rdram, ctx);
        goto after_2;
    // 0x800020F4: addiu       $a0, $a0, -0x5230
    ctx->r4 = ADD32(ctx->r4, -0X5230);
    after_2:
    // 0x800020F8: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x800020FC: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x80002100: lui         $t6, 0x8006
    ctx->r14 = S32(0X8006 << 16);
    // 0x80002104: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x80002108: addiu       $t6, $t6, -0x7798
    ctx->r14 = ADD32(ctx->r14, -0X7798);
    // 0x8000210C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80002110: jal         0x8000B880
    // 0x80002114: sw          $t6, -0x850($at)
    MEM_W(-0X850, ctx->r1) = ctx->r14;
    func_8000B880_C480(rdram, ctx);
        goto after_3;
    // 0x80002114: sw          $t6, -0x850($at)
    MEM_W(-0X850, ctx->r1) = ctx->r14;
    after_3:
    // 0x80002118: jal         0x8000A0F0
    // 0x8000211C: nop

    func_8000A0F0_ACF0(rdram, ctx);
        goto after_4;
    // 0x8000211C: nop

    after_4:
    // 0x80002120: jal         0x8000378C
    // 0x80002124: nop

    func_8000378C_438C(rdram, ctx);
        goto after_5;
    // 0x80002124: nop

    after_5:
    // 0x80002128: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000212C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80002130: jr          $ra
    // 0x80002134: nop

    TRACE_RETURN()
    return;
    // 0x80002134: nop

;}
RECOMP_FUNC void func_8003BCAC_3C8AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003BCAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003BCB0: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003BCB4: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8003BCB8: addiu       $a1, $a1, 0x172C
    ctx->r5 = ADD32(ctx->r5, 0X172C);
    // 0x8003BCBC: addiu       $a0, $a0, 0x1728
    ctx->r4 = ADD32(ctx->r4, 0X1728);
    // 0x8003BCC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003BCC4: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8003BCC8: sb          $zero, 0x5B($t6)
    MEM_B(0X5B, ctx->r14) = 0;
    // 0x8003BCCC: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x8003BCD0: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8003BCD4: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8003BCD8: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x8003BCDC: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x8003BCE0: sll         $t8, $v1, 8
    ctx->r24 = S32(ctx->r3 << 8);
    // 0x8003BCE4: jal         0x8003BCFC
    // 0x8003BCE8: sh          $t8, 0x58($t9)
    MEM_H(0X58, ctx->r25) = ctx->r24;
    func_8003BCFC_3C8FC(rdram, ctx);
        goto after_0;
    // 0x8003BCE8: sh          $t8, 0x58($t9)
    MEM_H(0X58, ctx->r25) = ctx->r24;
    after_0:
    // 0x8003BCEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003BCF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003BCF4: jr          $ra
    // 0x8003BCF8: nop

    TRACE_RETURN()
    return;
    // 0x8003BCF8: nop

;}
RECOMP_FUNC void func_8000AFA8_BBA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000AFA8: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x8000AFAC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8000AFB0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8000AFB4: sw          $a3, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r7;
    // 0x8000AFB8: lwc1        $f10, 0xC($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0XC);
    // 0x8000AFBC: lwc1        $f18, 0x8($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8000AFC0: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x8000AFC4: swc1        $f10, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f10.u32l;
    // 0x8000AFC8: lwc1        $f8, 0x10($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X10);
    // 0x8000AFCC: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8000AFD0: swc1        $f8, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f8.u32l;
    // 0x8000AFD4: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8000AFD8: lwc1        $f4, 0xC($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0XC);
    // 0x8000AFDC: lwc1        $f2, 0x4($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X4);
    // 0x8000AFE0: lwc1        $f14, 0x8($a1)
    ctx->f14.u32l = MEM_W(ctx->r5, 0X8);
    // 0x8000AFE4: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x8000AFE8: swc1        $f6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f6.u32l;
    // 0x8000AFEC: lwc1        $f10, 0x10($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X10);
    // 0x8000AFF0: sub.s       $f8, $f10, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f2.fl;
    // 0x8000AFF4: lwc1        $f10, 0x9C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x8000AFF8: swc1        $f8, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f8.u32l;
    // 0x8000AFFC: lwc1        $f4, 0x14($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X14);
    // 0x8000B000: lwc1        $f8, 0x88($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X88);
    // 0x8000B004: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x8000B008: sub.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f14.fl;
    // 0x8000B00C: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x8000B010: swc1        $f12, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f12.u32l;
    // 0x8000B014: sub.s       $f4, $f2, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f8.fl;
    // 0x8000B018: swc1        $f6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f6.u32l;
    // 0x8000B01C: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x8000B020: sub.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f18.fl;
    // 0x8000B024: lwc1        $f10, 0x84($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X84);
    // 0x8000B028: mul.s       $f4, $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x8000B02C: sub.s       $f8, $f14, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f14.fl - ctx->f10.fl;
    // 0x8000B030: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x8000B034: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8000B038: lwc1        $f6, 0xA0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x8000B03C: mul.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8000B040: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x8000B044: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8000B048: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x8000B04C: mul.s       $f6, $f8, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x8000B050: nop

    // 0x8000B054: mul.s       $f10, $f12, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x8000B058: add.s       $f10, $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x8000B05C: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8000B060: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x8000B064: mul.s       $f4, $f6, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x8000B068: add.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8000B06C: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8000B070: div.s       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f4.fl, ctx->f10.fl);
    // 0x8000B074: lwc1        $f4, 0x98($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X98);
    // 0x8000B078: mul.s       $f10, $f4, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x8000B07C: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x8000B080: sub.s       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x8000B084: mul.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x8000B088: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8000B08C: swc1        $f10, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f10.u32l;
    // 0x8000B090: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x8000B094: sub.s       $f8, $f4, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f2.fl;
    // 0x8000B098: mul.s       $f4, $f6, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x8000B09C: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8000B0A0: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    // 0x8000B0A4: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8000B0A8: sub.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f14.fl;
    // 0x8000B0AC: mul.s       $f4, $f8, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x8000B0B0: nop

    // 0x8000B0B4: mul.s       $f8, $f10, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x8000B0B8: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    // 0x8000B0BC: add.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x8000B0C0: mul.s       $f8, $f6, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x8000B0C4: add.s       $f12, $f10, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x8000B0C8: jal         0x800417E0
    // 0x8000B0CC: swc1        $f12, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f12.u32l;
    _nsqrtf(rdram, ctx);
        goto after_0;
    // 0x8000B0CC: swc1        $f12, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x8000B0D0: lwc1        $f4, 0xA8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x8000B0D4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8000B0D8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8000B0DC: div.s       $f2, $f4, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8000B0E0: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
    // 0x8000B0E4: swc1        $f2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f2.u32l;
    // 0x8000B0E8: bc1f        L_8000B0F8
    if (!c1cs) {
        // 0x8000B0EC: nop
    
            goto L_8000B0F8;
    }
    // 0x8000B0EC: nop

    // 0x8000B0F0: b           L_8000B284
    // 0x8000B0F4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
        goto L_8000B284;
    // 0x8000B0F4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_8000B0F8:
    // 0x8000B0F8: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8000B0FC: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8000B100: c.le.s      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.fl <= ctx->f6.fl;
    // 0x8000B104: nop

    // 0x8000B108: bc1f        L_8000B11C
    if (!c1cs) {
        // 0x8000B10C: nop
    
            goto L_8000B11C;
    }
    // 0x8000B10C: nop

    // 0x8000B110: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x8000B114: b           L_8000B12C
    // 0x8000B118: nop

        goto L_8000B12C;
    // 0x8000B118: nop

L_8000B11C:
    // 0x8000B11C: mul.s       $f8, $f10, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x8000B120: jal         0x800417E0
    // 0x8000B124: sub.s       $f12, $f16, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f16.fl - ctx->f8.fl;
    _nsqrtf(rdram, ctx);
        goto after_1;
    // 0x8000B124: sub.s       $f12, $f16, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f16.fl - ctx->f8.fl;
    after_1:
    // 0x8000B128: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
L_8000B12C:
    // 0x8000B12C: jal         0x800166E0
    // 0x8000B130: lwc1        $f12, 0x58($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X58);
    func_800166E0_172E0(rdram, ctx);
        goto after_2;
    // 0x8000B130: lwc1        $f12, 0x58($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X58);
    after_2:
    // 0x8000B134: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    // 0x8000B138: jal         0x800417E0
    // 0x8000B13C: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    _nsqrtf(rdram, ctx);
        goto after_3;
    // 0x8000B13C: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    after_3:
    // 0x8000B140: lwc1        $f2, 0x74($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X74);
    // 0x8000B144: lwc1        $f14, 0x70($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8000B148: lwc1        $f16, 0x6C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8000B14C: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8000B150: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x8000B154: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x8000B158: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8000B15C: mul.s       $f8, $f16, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x8000B160: jal         0x800417E0
    // 0x8000B164: add.s       $f12, $f10, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f8.fl;
    _nsqrtf(rdram, ctx);
        goto after_4;
    // 0x8000B164: add.s       $f12, $f10, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f8.fl;
    after_4:
    // 0x8000B168: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8000B16C: lwc1        $f6, 0x74($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X74);
    // 0x8000B170: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8000B174: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8000B178: mul.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8000B17C: lwc1        $f4, 0x70($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8000B180: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8000B184: mul.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x8000B188: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8000B18C: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x8000B190: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8000B194: mul.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x8000B198: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8000B19C: add.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x8000B1A0: mul.s       $f8, $f0, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x8000B1A4: div.s       $f14, $f4, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x8000B1A8: c.lt.s      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl < ctx->f14.fl;
    // 0x8000B1AC: nop

    // 0x8000B1B0: bc1f        L_8000B1C4
    if (!c1cs) {
        // 0x8000B1B4: nop
    
            goto L_8000B1C4;
    }
    // 0x8000B1B4: nop

    // 0x8000B1B8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8000B1BC: b           L_8000B208
    // 0x8000B1C0: lhu         $t7, 0x1A($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X1A);
        goto L_8000B208;
    // 0x8000B1C0: lhu         $t7, 0x1A($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X1A);
L_8000B1C4:
    // 0x8000B1C4: mul.s       $f0, $f14, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x8000B1C8: c.le.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl <= ctx->f0.fl;
    // 0x8000B1CC: nop

    // 0x8000B1D0: bc1fl       L_8000B1E8
    if (!c1cs) {
        // 0x8000B1D4: sub.s       $f12, $f16, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f16.fl - ctx->f0.fl;
            goto L_8000B1E8;
    }
    goto skip_0;
    // 0x8000B1D4: sub.s       $f12, $f16, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f16.fl - ctx->f0.fl;
    skip_0:
    // 0x8000B1D8: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x8000B1DC: b           L_8000B1F8
    // 0x8000B1E0: nop

        goto L_8000B1F8;
    // 0x8000B1E0: nop

    // 0x8000B1E4: sub.s       $f12, $f16, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f16.fl - ctx->f0.fl;
L_8000B1E8:
    // 0x8000B1E8: jal         0x800417E0
    // 0x8000B1EC: swc1        $f14, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f14.u32l;
    _nsqrtf(rdram, ctx);
        goto after_5;
    // 0x8000B1EC: swc1        $f14, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f14.u32l;
    after_5:
    // 0x8000B1F0: lwc1        $f14, 0x48($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8000B1F4: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_8000B1F8:
    // 0x8000B1F8: jal         0x800166E0
    // 0x8000B1FC: nop

    func_800166E0_172E0(rdram, ctx);
        goto after_6;
    // 0x8000B1FC: nop

    after_6:
    // 0x8000B200: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x8000B204: lhu         $t7, 0x1A($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X1A);
L_8000B208:
    // 0x8000B208: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8000B20C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8000B210: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x8000B214: bgez        $t7, L_8000B228
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8000B218: cvt.s.w     $f10, $f6
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
            goto L_8000B228;
    }
    // 0x8000B218: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8000B21C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8000B220: nop

    // 0x8000B224: add.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f4.fl;
L_8000B228:
    // 0x8000B228: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8000B22C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8000B230: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8000B234: mul.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x8000B238: ldc1        $f10, -0x5508($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X5508);
    // 0x8000B23C: lui         $at, 0x40F0
    ctx->r1 = S32(0X40F0 << 16);
    // 0x8000B240: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x8000B244: cvt.d.s     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f4.d = CVT_D_S(ctx->f6.fl);
    // 0x8000B248: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8000B24C: mul.d       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f10.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f10.d);
    // 0x8000B250: lwc1        $f10, 0xA4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x8000B254: div.d       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f4.d = DIV_D(ctx->f8.d, ctx->f6.d);
    // 0x8000B258: cvt.d.s     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f8.d = CVT_D_S(ctx->f10.fl);
    // 0x8000B25C: mul.d       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f8.d);
    // 0x8000B260: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8000B264: sub.s       $f8, $f2, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f4.fl;
    // 0x8000B268: cvt.s.d     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f10.fl = CVT_S_D(ctx->f6.d);
    // 0x8000B26C: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x8000B270: nop

    // 0x8000B274: bc1f        L_8000B284
    if (!c1cs) {
        // 0x8000B278: nop
    
            goto L_8000B284;
    }
    // 0x8000B278: nop

    // 0x8000B27C: b           L_8000B284
    // 0x8000B280: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
        goto L_8000B284;
    // 0x8000B280: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_8000B284:
    // 0x8000B284: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8000B288: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8000B28C: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    // 0x8000B290: jr          $ra
    // 0x8000B294: nop

    TRACE_RETURN()
    return;
    // 0x8000B294: nop

;}
RECOMP_FUNC void func_80010318_10F18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80010318: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8001031C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80010320: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80010324: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80010328: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8001032C: addiu       $s1, $zero, 0x28
    ctx->r17 = ADD32(0, 0X28);
L_80010330:
    // 0x80010330: jal         0x800102E0
    // 0x80010334: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800102E0_10EE0(rdram, ctx);
        goto after_0;
    // 0x80010334: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80010338: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8001033C: bne         $s0, $s1, L_80010330
    if (ctx->r16 != ctx->r17) {
        // 0x80010340: nop
    
            goto L_80010330;
    }
    // 0x80010340: nop

    // 0x80010344: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80010348: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8001034C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80010350: jr          $ra
    // 0x80010354: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80010354: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800087C4_93C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800087C4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800087C8: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x800087CC: lbu         $t6, 0x29C4($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X29C4);
    // 0x800087D0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800087D4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800087D8: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x800087DC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x800087E0: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x800087E4: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x800087E8: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x800087EC: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x800087F0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800087F4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800087F8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800087FC: beq         $t6, $at, L_800088F0
    if (ctx->r14 == ctx->r1) {
        // 0x80008800: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_800088F0;
    }
    // 0x80008800: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80008804: lbu         $v1, 0x370($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X370);
    // 0x80008808: lui         $fp, 0x8001
    ctx->r30 = S32(0X8001 << 16);
    // 0x8000880C: addiu       $fp, $fp, -0x7910
    ctx->r30 = ADD32(ctx->r30, -0X7910);
    // 0x80008810: blez        $v1, L_800088F0
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80008814: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_800088F0;
    }
    // 0x80008814: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80008818: lui         $s7, 0x8016
    ctx->r23 = S32(0X8016 << 16);
    // 0x8000881C: lui         $s6, 0x8016
    ctx->r22 = S32(0X8016 << 16);
    // 0x80008820: lui         $s5, 0x8016
    ctx->r21 = S32(0X8016 << 16);
    // 0x80008824: addiu       $s5, $s5, 0x7A60
    ctx->r21 = ADD32(ctx->r21, 0X7A60);
    // 0x80008828: addiu       $s6, $s6, 0x7A72
    ctx->r22 = ADD32(ctx->r22, 0X7A72);
    // 0x8000882C: addiu       $s7, $s7, 0x7A68
    ctx->r23 = ADD32(ctx->r23, 0X7A68);
    // 0x80008830: ori         $s4, $zero, 0xFFFF
    ctx->r20 = 0 | 0XFFFF;
    // 0x80008834: sll         $t7, $s3, 2
    ctx->r15 = S32(ctx->r19 << 2);
L_80008838:
    // 0x80008838: addu        $t8, $s2, $t7
    ctx->r24 = ADD32(ctx->r18, ctx->r15);
    // 0x8000883C: lw          $s1, 0x0($t8)
    ctx->r17 = MEM_W(ctx->r24, 0X0);
    // 0x80008840: lbu         $v0, 0x4($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4);
    // 0x80008844: andi        $t9, $v0, 0x80
    ctx->r25 = ctx->r2 & 0X80;
    // 0x80008848: bne         $t9, $zero, L_800088D8
    if (ctx->r25 != 0) {
        // 0x8000884C: addiu       $t0, $v0, -0x1
        ctx->r8 = ADD32(ctx->r2, -0X1);
            goto L_800088D8;
    }
    // 0x8000884C: addiu       $t0, $v0, -0x1
    ctx->r8 = ADD32(ctx->r2, -0X1);
    // 0x80008850: sltiu       $at, $t0, 0x5
    ctx->r1 = ctx->r8 < 0X5 ? 1 : 0;
    // 0x80008854: beq         $at, $zero, L_800088D8
    if (ctx->r1 == 0) {
        // 0x80008858: sll         $t0, $t0, 2
        ctx->r8 = S32(ctx->r8 << 2);
            goto L_800088D8;
    }
    // 0x80008858: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8000885C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80008860: addu        $at, $at, $t0
    gpr jr_addend_80008868 = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80008864: lw          $t0, -0x5538($at)
    ctx->r8 = ADD32(ctx->r1, -0X5538);
    // 0x80008868: jr          $t0
    // 0x8000886C: nop

    switch (jr_addend_80008868 >> 2) {
        case 0: goto L_80008870; break;
        case 1: goto L_80008888; break;
        case 2: goto L_800088D8; break;
        case 3: goto L_800088A4; break;
        case 4: goto L_800088B8; break;
        default: switch_error(__func__, 0x80008868, 0x8007AAC8);
    }
    // 0x8000886C: nop

L_80008870:
    // 0x80008870: jal         0x800086F0
    // 0x80008874: nop

    func_800086F0_92F0(rdram, ctx);
        goto after_0;
    // 0x80008874: nop

    after_0:
    // 0x80008878: jal         0x80008920
    // 0x8000887C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80008920_9520(rdram, ctx);
        goto after_1;
    // 0x8000887C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x80008880: b           L_800088D8
    // 0x80008884: lbu         $v1, 0x370($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X370);
        goto L_800088D8;
    // 0x80008884: lbu         $v1, 0x370($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X370);
L_80008888:
    // 0x80008888: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8000888C: jal         0x80016C44
    // 0x80008890: or          $s0, $fp, $zero
    ctx->r16 = ctx->r30 | 0;
    func_80016C44_17844(rdram, ctx);
        goto after_2;
    // 0x80008890: or          $s0, $fp, $zero
    ctx->r16 = ctx->r30 | 0;
    after_2:
    // 0x80008894: sw          $s0, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r16;
    // 0x80008898: sh          $s4, 0x0($s7)
    MEM_H(0X0, ctx->r23) = ctx->r20;
    // 0x8000889C: b           L_800088D8
    // 0x800088A0: lbu         $v1, 0x370($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X370);
        goto L_800088D8;
    // 0x800088A0: lbu         $v1, 0x370($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X370);
L_800088A4:
    // 0x800088A4: sw          $fp, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r30;
    // 0x800088A8: sh          $s4, 0x0($s7)
    MEM_H(0X0, ctx->r23) = ctx->r20;
    // 0x800088AC: sh          $s4, 0x0($s6)
    MEM_H(0X0, ctx->r22) = ctx->r20;
    // 0x800088B0: b           L_800088D8
    // 0x800088B4: lbu         $v1, 0x370($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X370);
        goto L_800088D8;
    // 0x800088B4: lbu         $v1, 0x370($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X370);
L_800088B8:
    // 0x800088B8: jal         0x800215D0
    // 0x800088BC: or          $s0, $fp, $zero
    ctx->r16 = ctx->r30 | 0;
    func_800215D0_221D0(rdram, ctx);
        goto after_3;
    // 0x800088BC: or          $s0, $fp, $zero
    ctx->r16 = ctx->r30 | 0;
    after_3:
    // 0x800088C0: jal         0x80021740
    // 0x800088C4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80021740_22340(rdram, ctx);
        goto after_4;
    // 0x800088C4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x800088C8: sw          $s0, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r16;
    // 0x800088CC: sh          $s4, 0x0($s6)
    MEM_H(0X0, ctx->r22) = ctx->r20;
    // 0x800088D0: sh          $s4, 0x0($s7)
    MEM_H(0X0, ctx->r23) = ctx->r20;
    // 0x800088D4: lbu         $v1, 0x370($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X370);
L_800088D8:
    // 0x800088D8: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x800088DC: sll         $t2, $s3, 16
    ctx->r10 = S32(ctx->r19 << 16);
    // 0x800088E0: sra         $s3, $t2, 16
    ctx->r19 = S32(SIGNED(ctx->r10) >> 16);
    // 0x800088E4: slt         $at, $s3, $v1
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800088E8: bnel        $at, $zero, L_80008838
    if (ctx->r1 != 0) {
        // 0x800088EC: sll         $t7, $s3, 2
        ctx->r15 = S32(ctx->r19 << 2);
            goto L_80008838;
    }
    goto skip_0;
    // 0x800088EC: sll         $t7, $s3, 2
    ctx->r15 = S32(ctx->r19 << 2);
    skip_0:
L_800088F0:
    // 0x800088F0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x800088F4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800088F8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800088FC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80008900: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80008904: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80008908: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8000890C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80008910: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80008914: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80008918: jr          $ra
    // 0x8000891C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8000891C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80039F60_3AB60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80039F60: lui         $t6, 0x801C
    ctx->r14 = S32(0X801C << 16);
    // 0x80039F64: lbu         $t6, 0x9CF($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X9CF);
    // 0x80039F68: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80039F6C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80039F70: beq         $t6, $zero, L_80039F7C
    if (ctx->r14 == 0) {
        // 0x80039F74: nop
    
            goto L_80039F7C;
    }
    // 0x80039F74: nop

    // 0x80039F78: sb          $t7, 0x9CE($at)
    MEM_B(0X9CE, ctx->r1) = ctx->r15;
L_80039F7C:
    // 0x80039F7C: jr          $ra
    // 0x80039F80: nop

    TRACE_RETURN()
    return;
    // 0x80039F80: nop

;}
RECOMP_FUNC void func_8000DD58_E958(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000DD58: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x8000DD5C: addiu       $v1, $v1, 0x7C60
    ctx->r3 = ADD32(ctx->r3, 0X7C60);
    // 0x8000DD60: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x8000DD64: addiu       $at, $zero, 0x11B7
    ctx->r1 = ADD32(0, 0X11B7);
    // 0x8000DD68: mtc1        $a0, $f16
    ctx->f16.u32l = ctx->r4;
    // 0x8000DD6C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8000DD70: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8000DD74: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8000DD78: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8000DD7C: addiu       $t8, $t7, 0x929
    ctx->r24 = ADD32(ctx->r15, 0X929);
    // 0x8000DD80: div         $zero, $t8, $at
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r1)));
    // 0x8000DD84: mfhi        $t0
    ctx->r8 = hi;
    // 0x8000DD88: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x8000DD8C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x8000DD90: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8000DD94: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x8000DD98: ldc1        $f8, -0x5388($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X5388);
    // 0x8000DD9C: cvt.d.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.d = CVT_D_W(ctx->f16.u32l);
    // 0x8000DDA0: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x8000DDA4: nop

    // 0x8000DDA8: mul.d       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f10.d, ctx->f18.d);
    // 0x8000DDAC: cvt.s.d     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f0.fl = CVT_S_D(ctx->f4.d);
    // 0x8000DDB0: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x8000DDB4: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x8000DDB8: jr          $ra
    // 0x8000DDBC: nop

    TRACE_RETURN()
    return;
    // 0x8000DDBC: nop

;}
RECOMP_FUNC void func_8000A680_B280(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000A680: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8000A684: sw          $s0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r16;
    // 0x8000A688: slti        $at, $a2, 0x2
    ctx->r1 = SIGNED(ctx->r6) < 0X2 ? 1 : 0;
    // 0x8000A68C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8000A690: sw          $s1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r17;
    // 0x8000A694: bne         $at, $zero, L_8000A73C
    if (ctx->r1 != 0) {
        // 0x8000A698: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8000A73C;
    }
    // 0x8000A698: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8000A69C: addiu       $a0, $a1, 0x2
    ctx->r4 = ADD32(ctx->r5, 0X2);
    // 0x8000A6A0: addiu       $t0, $s0, 0x4
    ctx->r8 = ADD32(ctx->r16, 0X4);
    // 0x8000A6A4: or          $t2, $zero, $zero
    ctx->r10 = 0 | 0;
L_8000A6A8:
    // 0x8000A6A8: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
    // 0x8000A6AC: lw          $a3, 0x0($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X0);
    // 0x8000A6B0: bltz        $t2, L_8000A710
    if (SIGNED(ctx->r10) < 0) {
        // 0x8000A6B4: or          $t1, $t2, $zero
        ctx->r9 = ctx->r10 | 0;
            goto L_8000A710;
    }
    // 0x8000A6B4: or          $t1, $t2, $zero
    ctx->r9 = ctx->r10 | 0;
    // 0x8000A6B8: sll         $t6, $t2, 1
    ctx->r14 = S32(ctx->r10 << 1);
    // 0x8000A6BC: addu        $t7, $a1, $t6
    ctx->r15 = ADD32(ctx->r5, ctx->r14);
    // 0x8000A6C0: lhu         $t8, 0x0($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X0);
    // 0x8000A6C4: sll         $t9, $t1, 1
    ctx->r25 = S32(ctx->r9 << 1);
    // 0x8000A6C8: addu        $t4, $a1, $t9
    ctx->r12 = ADD32(ctx->r5, ctx->r25);
    // 0x8000A6CC: slt         $at, $v1, $t8
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x8000A6D0: beq         $at, $zero, L_8000A710
    if (ctx->r1 == 0) {
        // 0x8000A6D4: or          $t3, $v1, $zero
        ctx->r11 = ctx->r3 | 0;
            goto L_8000A710;
    }
    // 0x8000A6D4: or          $t3, $v1, $zero
    ctx->r11 = ctx->r3 | 0;
    // 0x8000A6D8: sll         $t6, $t1, 2
    ctx->r14 = S32(ctx->r9 << 2);
    // 0x8000A6DC: addu        $s1, $s0, $t6
    ctx->r17 = ADD32(ctx->r16, ctx->r14);
    // 0x8000A6E0: lhu         $t5, 0x0($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X0);
    // 0x8000A6E4: sh          $t5, 0x2($t4)
    MEM_H(0X2, ctx->r12) = ctx->r13;
L_8000A6E8:
    // 0x8000A6E8: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x8000A6EC: addiu       $t1, $t1, -0x1
    ctx->r9 = ADD32(ctx->r9, -0X1);
    // 0x8000A6F0: addiu       $t4, $t4, -0x2
    ctx->r12 = ADD32(ctx->r12, -0X2);
    // 0x8000A6F4: addiu       $s1, $s1, -0x4
    ctx->r17 = ADD32(ctx->r17, -0X4);
    // 0x8000A6F8: bltz        $t1, L_8000A710
    if (SIGNED(ctx->r9) < 0) {
        // 0x8000A6FC: sw          $t7, 0x8($s1)
        MEM_W(0X8, ctx->r17) = ctx->r15;
            goto L_8000A710;
    }
    // 0x8000A6FC: sw          $t7, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r15;
    // 0x8000A700: lhu         $t5, 0x0($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X0);
    // 0x8000A704: slt         $at, $t3, $t5
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x8000A708: bnel        $at, $zero, L_8000A6E8
    if (ctx->r1 != 0) {
        // 0x8000A70C: sh          $t5, 0x2($t4)
        MEM_H(0X2, ctx->r12) = ctx->r13;
            goto L_8000A6E8;
    }
    goto skip_0;
    // 0x8000A70C: sh          $t5, 0x2($t4)
    MEM_H(0X2, ctx->r12) = ctx->r13;
    skip_0:
L_8000A710:
    // 0x8000A710: sll         $t8, $t1, 1
    ctx->r24 = S32(ctx->r9 << 1);
    // 0x8000A714: addu        $t9, $a1, $t8
    ctx->r25 = ADD32(ctx->r5, ctx->r24);
    // 0x8000A718: sll         $t6, $t1, 2
    ctx->r14 = S32(ctx->r9 << 2);
    // 0x8000A71C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8000A720: sh          $v1, 0x2($t9)
    MEM_H(0X2, ctx->r25) = ctx->r3;
    // 0x8000A724: addu        $t7, $s0, $t6
    ctx->r15 = ADD32(ctx->r16, ctx->r14);
    // 0x8000A728: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x8000A72C: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x8000A730: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
    // 0x8000A734: bne         $v0, $a2, L_8000A6A8
    if (ctx->r2 != ctx->r6) {
        // 0x8000A738: sw          $a3, 0x4($t7)
        MEM_W(0X4, ctx->r15) = ctx->r7;
            goto L_8000A6A8;
    }
    // 0x8000A738: sw          $a3, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r7;
L_8000A73C:
    // 0x8000A73C: lw          $s0, 0x8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X8);
    // 0x8000A740: lw          $s1, 0xC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XC);
    // 0x8000A744: jr          $ra
    // 0x8000A748: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    TRACE_RETURN()
    return;
    // 0x8000A748: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_80035384_35F84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80035384: lui         $v0, 0x8017
    ctx->r2 = S32(0X8017 << 16);
    // 0x80035388: lw          $v0, -0x254C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X254C);
    // 0x8003538C: lw          $t6, 0x14($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X14);
    // 0x80035390: jr          $ra
    // 0x80035394: sw          $t6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x80035394: sw          $t6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r14;
;}
RECOMP_FUNC void func_80034A10_35610(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80034A10: sh          $zero, 0x24($a0)
    MEM_H(0X24, ctx->r4) = 0;
    // 0x80034A14: lh          $t6, 0x24($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X24);
    // 0x80034A18: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x80034A1C: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x80034A20: sw          $zero, 0x14($a0)
    MEM_W(0X14, ctx->r4) = 0;
    // 0x80034A24: sw          $zero, 0x10($a0)
    MEM_W(0X10, ctx->r4) = 0;
    // 0x80034A28: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x80034A2C: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    // 0x80034A30: sw          $zero, 0x18($a0)
    MEM_W(0X18, ctx->r4) = 0;
    // 0x80034A34: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
    // 0x80034A38: sh          $zero, 0x20($a0)
    MEM_H(0X20, ctx->r4) = 0;
    // 0x80034A3C: sh          $zero, 0x28($a0)
    MEM_H(0X28, ctx->r4) = 0;
    // 0x80034A40: sw          $zero, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = 0;
    // 0x80034A44: sw          $zero, 0x48($a0)
    MEM_W(0X48, ctx->r4) = 0;
    // 0x80034A48: sh          $zero, 0x3C($a0)
    MEM_H(0X3C, ctx->r4) = 0;
    // 0x80034A4C: sh          $zero, 0x3E($a0)
    MEM_H(0X3E, ctx->r4) = 0;
    // 0x80034A50: sh          $zero, 0x40($a0)
    MEM_H(0X40, ctx->r4) = 0;
    // 0x80034A54: sh          $zero, 0x42($a0)
    MEM_H(0X42, ctx->r4) = 0;
    // 0x80034A58: sb          $zero, 0x44($a0)
    MEM_B(0X44, ctx->r4) = 0;
    // 0x80034A5C: sw          $zero, 0x34($a0)
    MEM_W(0X34, ctx->r4) = 0;
    // 0x80034A60: sw          $zero, 0x38($a0)
    MEM_W(0X38, ctx->r4) = 0;
    // 0x80034A64: sb          $zero, 0x30($a0)
    MEM_B(0X30, ctx->r4) = 0;
    // 0x80034A68: sb          $zero, 0x4C($a0)
    MEM_B(0X4C, ctx->r4) = 0;
    // 0x80034A6C: sh          $zero, 0x4E($a0)
    MEM_H(0X4E, ctx->r4) = 0;
    // 0x80034A70: sh          $zero, 0x50($a0)
    MEM_H(0X50, ctx->r4) = 0;
    // 0x80034A74: sh          $zero, 0x52($a0)
    MEM_H(0X52, ctx->r4) = 0;
    // 0x80034A78: sw          $zero, 0x54($a0)
    MEM_W(0X54, ctx->r4) = 0;
    // 0x80034A7C: sw          $zero, 0x58($a0)
    MEM_W(0X58, ctx->r4) = 0;
    // 0x80034A80: sw          $zero, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = 0;
    // 0x80034A84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80034A88: addiu       $v1, $a0, 0x4
    ctx->r3 = ADD32(ctx->r4, 0X4);
    // 0x80034A8C: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    // 0x80034A90: sh          $t6, 0x22($a0)
    MEM_H(0X22, ctx->r4) = ctx->r14;
L_80034A94:
    // 0x80034A94: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80034A98: sw          $zero, 0x5C($v1)
    MEM_W(0X5C, ctx->r3) = 0;
    // 0x80034A9C: sw          $zero, 0x60($v1)
    MEM_W(0X60, ctx->r3) = 0;
    // 0x80034AA0: sw          $zero, 0x64($v1)
    MEM_W(0X64, ctx->r3) = 0;
    // 0x80034AA4: sw          $zero, 0x68($v1)
    MEM_W(0X68, ctx->r3) = 0;
    // 0x80034AA8: bne         $v0, $a1, L_80034A94
    if (ctx->r2 != ctx->r5) {
        // 0x80034AAC: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_80034A94;
    }
    // 0x80034AAC: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x80034AB0: jr          $ra
    // 0x80034AB4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    TRACE_RETURN()
    return;
    // 0x80034AB4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
;}
RECOMP_FUNC void func_80018718_19318(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80018718: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8001871C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80018720: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80018724: bne         $a1, $zero, L_80018734
    if (ctx->r5 != 0) {
        // 0x80018728: sw          $a1, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r5;
            goto L_80018734;
    }
    // 0x80018728: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8001872C: jal         0x800192D0
    // 0x80018730: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800192D0_19ED0(rdram, ctx);
        goto after_0;
    // 0x80018730: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
L_80018734:
    // 0x80018734: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80018738: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x8001873C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80018740: lw          $v1, 0x0($t7)
    ctx->r3 = MEM_W(ctx->r15, 0X0);
    // 0x80018744: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80018748: addiu       $a0, $a0, -0x7B10
    ctx->r4 = ADD32(ctx->r4, -0X7B10);
    // 0x8001874C: sll         $t8, $v1, 3
    ctx->r24 = S32(ctx->r3 << 3);
    // 0x80018750: bltz        $t8, L_80018774
    if (SIGNED(ctx->r24) < 0) {
        // 0x80018754: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_80018774;
    }
    // 0x80018754: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80018758: and         $v0, $v1, $at
    ctx->r2 = ctx->r3 & ctx->r1;
    // 0x8001875C: beql        $v0, $zero, L_80018868
    if (ctx->r2 == 0) {
        // 0x80018760: lw          $t0, 0x34($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X34);
            goto L_80018868;
    }
    goto skip_0;
    // 0x80018760: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    skip_0:
    // 0x80018764: jal         0x800196F0
    // 0x80018768: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800196F0_1A2F0(rdram, ctx);
        goto after_1;
    // 0x80018768: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x8001876C: b           L_80018868
    // 0x80018770: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
        goto L_80018868;
    // 0x80018770: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
L_80018774:
    // 0x80018774: beq         $v1, $zero, L_800187F4
    if (ctx->r3 == 0) {
        // 0x80018778: sw          $v1, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->r3;
            goto L_800187F4;
    }
    // 0x80018778: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x8001877C: sll         $t9, $v1, 0
    ctx->r25 = S32(ctx->r3 << 0);
    // 0x80018780: bgez        $t9, L_80018790
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80018784: lui         $at, 0x800
        ctx->r1 = S32(0X800 << 16);
            goto L_80018790;
    }
    // 0x80018784: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x80018788: b           L_800187F8
    // 0x8001878C: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
        goto L_800187F8;
    // 0x8001878C: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
L_80018790:
    // 0x80018790: ori         $at, $at, 0x1
    ctx->r1 = ctx->r1 | 0X1;
    // 0x80018794: sltu        $at, $v0, $at
    ctx->r1 = ctx->r2 < ctx->r1 ? 1 : 0;
    // 0x80018798: bne         $at, $zero, L_800187D0
    if (ctx->r1 != 0) {
        // 0x8001879C: lui         $t7, 0x8017
        ctx->r15 = S32(0X8017 << 16);
            goto L_800187D0;
    }
    // 0x8001879C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800187A0: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800187A4: lw          $t0, -0x7B60($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X7B60);
    // 0x800187A8: srl         $t1, $v0, 24
    ctx->r9 = S32(U32(ctx->r2) >> 24);
    // 0x800187AC: andi        $t2, $t1, 0xF
    ctx->r10 = ctx->r9 & 0XF;
    // 0x800187B0: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x800187B4: lui         $at, 0x80FF
    ctx->r1 = S32(0X80FF << 16);
    // 0x800187B8: addu        $t4, $t0, $t3
    ctx->r12 = ADD32(ctx->r8, ctx->r11);
    // 0x800187BC: lw          $t5, -0x8($t4)
    ctx->r13 = MEM_W(ctx->r12, -0X8);
    // 0x800187C0: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x800187C4: and         $t6, $v0, $at
    ctx->r14 = ctx->r2 & ctx->r1;
    // 0x800187C8: b           L_800187E8
    // 0x800187CC: addu        $a0, $t5, $t6
    ctx->r4 = ADD32(ctx->r13, ctx->r14);
        goto L_800187E8;
    // 0x800187CC: addu        $a0, $t5, $t6
    ctx->r4 = ADD32(ctx->r13, ctx->r14);
L_800187D0:
    // 0x800187D0: lw          $t7, -0x7B60($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X7B60);
    // 0x800187D4: lui         $at, 0x80FF
    ctx->r1 = S32(0X80FF << 16);
    // 0x800187D8: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x800187DC: lw          $t8, 0x38($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X38);
    // 0x800187E0: and         $t9, $v0, $at
    ctx->r25 = ctx->r2 & ctx->r1;
    // 0x800187E4: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
L_800187E8:
    // 0x800187E8: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x800187EC: b           L_800187F8
    // 0x800187F0: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
        goto L_800187F8;
    // 0x800187F0: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
L_800187F4:
    // 0x800187F4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_800187F8:
    // 0x800187F8: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x800187FC: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80018800: and         $v0, $a0, $at
    ctx->r2 = ctx->r4 & ctx->r1;
    // 0x80018804: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x80018808: beq         $a1, $zero, L_80018824
    if (ctx->r5 == 0) {
        // 0x8001880C: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_80018824;
    }
    // 0x8001880C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80018810: jal         0x800196F0
    // 0x80018814: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_800196F0_1A2F0(rdram, ctx);
        goto after_2;
    // 0x80018814: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_2:
    // 0x80018818: jal         0x800196A4
    // 0x8001881C: nop

    func_800196A4_1A2A4(rdram, ctx);
        goto after_3;
    // 0x8001881C: nop

    after_3:
    // 0x80018820: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
L_80018824:
    // 0x80018824: lb          $v1, 0x4($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X4);
    // 0x80018828: beq         $v1, $zero, L_80018848
    if (ctx->r3 == 0) {
        // 0x8001882C: sll         $t1, $v1, 2
        ctx->r9 = S32(ctx->r3 << 2);
            goto L_80018848;
    }
    // 0x8001882C: sll         $t1, $v1, 2
    ctx->r9 = S32(ctx->r3 << 2);
    // 0x80018830: subu        $t1, $t1, $v1
    ctx->r9 = SUB32(ctx->r9, ctx->r3);
    // 0x80018834: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x80018838: addu        $a0, $v0, $t1
    ctx->r4 = ADD32(ctx->r2, ctx->r9);
    // 0x8001883C: jal         0x80018908
    // 0x80018840: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_80018908_19508(rdram, ctx);
        goto after_4;
    // 0x80018840: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_4:
    // 0x80018844: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
L_80018848:
    // 0x80018848: lb          $v1, 0x5($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X5);
    // 0x8001884C: beq         $v1, $zero, L_80018864
    if (ctx->r3 == 0) {
        // 0x80018850: sll         $t2, $v1, 2
        ctx->r10 = S32(ctx->r3 << 2);
            goto L_80018864;
    }
    // 0x80018850: sll         $t2, $v1, 2
    ctx->r10 = S32(ctx->r3 << 2);
    // 0x80018854: subu        $t2, $t2, $v1
    ctx->r10 = SUB32(ctx->r10, ctx->r3);
    // 0x80018858: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x8001885C: jal         0x80018908
    // 0x80018860: addu        $a0, $v0, $t2
    ctx->r4 = ADD32(ctx->r2, ctx->r10);
    func_80018908_19508(rdram, ctx);
        goto after_5;
    // 0x80018860: addu        $a0, $v0, $t2
    ctx->r4 = ADD32(ctx->r2, ctx->r10);
    after_5:
L_80018864:
    // 0x80018864: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
L_80018868:
    // 0x80018868: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x8001886C: bnel        $t0, $zero, L_800188A0
    if (ctx->r8 != 0) {
        // 0x80018870: lw          $t1, 0x30($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X30);
            goto L_800188A0;
    }
    goto skip_1;
    // 0x80018870: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    skip_1:
    // 0x80018874: lhu         $t4, 0xC($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0XC);
    // 0x80018878: lhu         $t5, 0xE($t3)
    ctx->r13 = MEM_HU(ctx->r11, 0XE);
    // 0x8001887C: lhu         $t7, 0x10($t3)
    ctx->r15 = MEM_HU(ctx->r11, 0X10);
    // 0x80018880: or          $t6, $t4, $t5
    ctx->r14 = ctx->r12 | ctx->r13;
    // 0x80018884: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x80018888: andi        $t9, $t8, 0x4000
    ctx->r25 = ctx->r24 & 0X4000;
    // 0x8001888C: beql        $t9, $zero, L_800188A0
    if (ctx->r25 == 0) {
        // 0x80018890: lw          $t1, 0x30($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X30);
            goto L_800188A0;
    }
    goto skip_2;
    // 0x80018890: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    skip_2:
    // 0x80018894: jal         0x800196A4
    // 0x80018898: nop

    func_800196A4_1A2A4(rdram, ctx);
        goto after_6;
    // 0x80018898: nop

    after_6:
    // 0x8001889C: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
L_800188A0:
    // 0x800188A0: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x800188A4: lb          $v0, 0x4($t1)
    ctx->r2 = MEM_B(ctx->r9, 0X4);
    // 0x800188A8: beq         $v0, $zero, L_800188C0
    if (ctx->r2 == 0) {
        // 0x800188AC: sll         $t0, $v0, 2
        ctx->r8 = S32(ctx->r2 << 2);
            goto L_800188C0;
    }
    // 0x800188AC: sll         $t0, $v0, 2
    ctx->r8 = S32(ctx->r2 << 2);
    // 0x800188B0: subu        $t0, $t0, $v0
    ctx->r8 = SUB32(ctx->r8, ctx->r2);
    // 0x800188B4: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x800188B8: jal         0x80018908
    // 0x800188BC: addu        $a0, $t2, $t0
    ctx->r4 = ADD32(ctx->r10, ctx->r8);
    func_80018908_19508(rdram, ctx);
        goto after_7;
    // 0x800188BC: addu        $a0, $t2, $t0
    ctx->r4 = ADD32(ctx->r10, ctx->r8);
    after_7:
L_800188C0:
    // 0x800188C0: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x800188C4: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x800188C8: lb          $v0, 0x5($t4)
    ctx->r2 = MEM_B(ctx->r12, 0X5);
    // 0x800188CC: beq         $v0, $zero, L_800188E4
    if (ctx->r2 == 0) {
        // 0x800188D0: sll         $t3, $v0, 2
        ctx->r11 = S32(ctx->r2 << 2);
            goto L_800188E4;
    }
    // 0x800188D0: sll         $t3, $v0, 2
    ctx->r11 = S32(ctx->r2 << 2);
    // 0x800188D4: subu        $t3, $t3, $v0
    ctx->r11 = SUB32(ctx->r11, ctx->r2);
    // 0x800188D8: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x800188DC: jal         0x80018908
    // 0x800188E0: addu        $a0, $t5, $t3
    ctx->r4 = ADD32(ctx->r13, ctx->r11);
    func_80018908_19508(rdram, ctx);
        goto after_8;
    // 0x800188E0: addu        $a0, $t5, $t3
    ctx->r4 = ADD32(ctx->r13, ctx->r11);
    after_8:
L_800188E4:
    // 0x800188E4: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800188E8: bnel        $t6, $zero, L_800188FC
    if (ctx->r14 != 0) {
        // 0x800188EC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800188FC;
    }
    goto skip_3;
    // 0x800188EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x800188F0: jal         0x800196A4
    // 0x800188F4: nop

    func_800196A4_1A2A4(rdram, ctx);
        goto after_9;
    // 0x800188F4: nop

    after_9:
    // 0x800188F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800188FC:
    // 0x800188FC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80018900: jr          $ra
    // 0x80018904: nop

    TRACE_RETURN()
    return;
    // 0x80018904: nop

;}
RECOMP_FUNC void func_80019160_19D60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80019160: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80019164: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80019168: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x8001916C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80019170: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
L_80019174:
    // 0x80019174: lw          $s0, 0x94($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X94);
    // 0x80019178: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8001917C: bnel        $s0, $zero, L_80019190
    if (ctx->r16 != 0) {
        // 0x80019180: lw          $a2, 0x74($a0)
        ctx->r6 = MEM_W(ctx->r4, 0X74);
            goto L_80019190;
    }
    goto skip_0;
    // 0x80019180: lw          $a2, 0x74($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X74);
    skip_0:
    // 0x80019184: b           L_800191B8
    // 0x80019188: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800191B8;
    // 0x80019188: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8001918C: lw          $a2, 0x74($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X74);
L_80019190:
    // 0x80019190: beq         $a2, $zero, L_800191B0
    if (ctx->r6 == 0) {
        // 0x80019194: nop
    
            goto L_800191B0;
    }
    // 0x80019194: nop

    // 0x80019198: jal         0x800191CC
    // 0x8001919C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_800191CC_19DCC(rdram, ctx);
        goto after_0;
    // 0x8001919C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x800191A0: beq         $v0, $zero, L_800191B0
    if (ctx->r2 == 0) {
        // 0x800191A4: nop
    
            goto L_800191B0;
    }
    // 0x800191A4: nop

    // 0x800191A8: b           L_800191B8
    // 0x800191AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800191B8;
    // 0x800191AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800191B0:
    // 0x800191B0: b           L_80019174
    // 0x800191B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80019174;
    // 0x800191B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_800191B8:
    // 0x800191B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800191BC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800191C0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800191C4: jr          $ra
    // 0x800191C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x800191C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80035854_36454(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80035854: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80035858: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x8003585C: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x80035860: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80035864: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80035868: lhu         $t6, 0x62($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X62);
    // 0x8003586C: lhu         $t7, 0x66($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X66);
    // 0x80035870: lhu         $t8, 0x6A($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X6A);
    // 0x80035874: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80035878: lwc1        $f10, 0x70($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8003587C: lwc1        $f16, 0x74($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80035880: lhu         $t9, 0x7A($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X7A);
    // 0x80035884: lhu         $t0, 0x7E($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X7E);
    // 0x80035888: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8003588C: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x80035890: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80035894: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x80035898: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8003589C: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    // 0x800358A0: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    // 0x800358A4: lw          $a0, -0x254C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X254C);
    // 0x800358A8: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x800358AC: swc1        $f12, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f12.u32l;
    // 0x800358B0: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x800358B4: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x800358B8: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x800358BC: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x800358C0: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x800358C4: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x800358C8: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
    // 0x800358CC: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800358D0: jal         0x800358E8
    // 0x800358D4: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    func_800358E8_364E8(rdram, ctx);
        goto after_0;
    // 0x800358D4: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    after_0:
    // 0x800358D8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x800358DC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x800358E0: jr          $ra
    // 0x800358E4: nop

    TRACE_RETURN()
    return;
    // 0x800358E4: nop

;}
RECOMP_FUNC void func_8001C688_1D288(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001C688: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8001C68C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8001C690: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8001C694: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8001C698: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8001C69C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8001C6A0: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x8001C6A4: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x8001C6A8: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8001C6AC: beq         $t7, $zero, L_8001C714
    if (ctx->r15 == 0) {
        // 0x8001C6B0: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_8001C714;
    }
    // 0x8001C6B0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8001C6B4: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x8001C6B8: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x8001C6BC: lui         $a1, 0x8FFF
    ctx->r5 = S32(0X8FFF << 16);
    // 0x8001C6C0: lui         $a0, 0x8FFF
    ctx->r4 = S32(0X8FFF << 16);
    // 0x8001C6C4: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x8001C6C8: ori         $a1, $a1, 0xFFFE
    ctx->r5 = ctx->r5 | 0XFFFE;
    // 0x8001C6CC: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
L_8001C6D0:
    // 0x8001C6D0: and         $t9, $t8, $a0
    ctx->r25 = ctx->r24 & ctx->r4;
    // 0x8001C6D4: bnel        $t9, $v1, L_8001C708
    if (ctx->r25 != ctx->r3) {
        // 0x8001C6D8: lw          $v1, 0x8($v0)
        ctx->r3 = MEM_W(ctx->r2, 0X8);
            goto L_8001C708;
    }
    goto skip_0;
    // 0x8001C6D8: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    skip_0:
    // 0x8001C6DC: lw          $t0, 0x4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X4);
    // 0x8001C6E0: beq         $s0, $zero, L_8001C704
    if (ctx->r16 == 0) {
        // 0x8001C6E4: sw          $t0, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->r8;
            goto L_8001C704;
    }
    // 0x8001C6E4: sw          $t0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r8;
    // 0x8001C6E8: lw          $t1, 0x2C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X2C);
    // 0x8001C6EC: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x8001C6F0: and         $t2, $t1, $a1
    ctx->r10 = ctx->r9 & ctx->r5;
    // 0x8001C6F4: bnel        $t2, $t3, L_8001C708
    if (ctx->r10 != ctx->r11) {
        // 0x8001C6F8: lw          $v1, 0x8($v0)
        ctx->r3 = MEM_W(ctx->r2, 0X8);
            goto L_8001C708;
    }
    goto skip_1;
    // 0x8001C6F8: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    skip_1:
    // 0x8001C6FC: lw          $t4, 0x4($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X4);
    // 0x8001C700: sw          $t4, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r12;
L_8001C704:
    // 0x8001C704: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
L_8001C708:
    // 0x8001C708: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8001C70C: bnel        $v1, $zero, L_8001C6D0
    if (ctx->r3 != 0) {
        // 0x8001C710: lw          $t8, 0x0($s1)
        ctx->r24 = MEM_W(ctx->r17, 0X0);
            goto L_8001C6D0;
    }
    goto skip_2;
    // 0x8001C710: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    skip_2:
L_8001C714:
    // 0x8001C714: lb          $t5, 0x4($s1)
    ctx->r13 = MEM_B(ctx->r17, 0X4);
    // 0x8001C718: beql        $t5, $zero, L_8001C778
    if (ctx->r13 == 0) {
        // 0x8001C71C: lb          $t9, 0x5($s1)
        ctx->r25 = MEM_B(ctx->r17, 0X5);
            goto L_8001C778;
    }
    goto skip_3;
    // 0x8001C71C: lb          $t9, 0x5($s1)
    ctx->r25 = MEM_B(ctx->r17, 0X5);
    skip_3:
    // 0x8001C720: beq         $s0, $zero, L_8001C754
    if (ctx->r16 == 0) {
        // 0x8001C724: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_8001C754;
    }
    // 0x8001C724: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8001C728: jal         0x80018F3C
    // 0x8001C72C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80018F3C_19B3C(rdram, ctx);
        goto after_0;
    // 0x8001C72C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x8001C730: bne         $v0, $zero, L_8001C754
    if (ctx->r2 != 0) {
        // 0x8001C734: or          $a3, $v0, $zero
        ctx->r7 = ctx->r2 | 0;
            goto L_8001C754;
    }
    // 0x8001C734: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x8001C738: lw          $t7, 0x78($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X78);
    // 0x8001C73C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8001C740: beql        $t7, $zero, L_8001C758
    if (ctx->r15 == 0) {
        // 0x8001C744: lb          $t6, 0x4($s1)
        ctx->r14 = MEM_B(ctx->r17, 0X4);
            goto L_8001C758;
    }
    goto skip_4;
    // 0x8001C744: lb          $t6, 0x4($s1)
    ctx->r14 = MEM_B(ctx->r17, 0X4);
    skip_4:
    // 0x8001C748: jal         0x8003674C
    // 0x8001C74C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    func_8003674C_3734C(rdram, ctx);
        goto after_1;
    // 0x8001C74C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_1:
    // 0x8001C750: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
L_8001C754:
    // 0x8001C754: lb          $t6, 0x4($s1)
    ctx->r14 = MEM_B(ctx->r17, 0X4);
L_8001C758:
    // 0x8001C758: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8001C75C: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    // 0x8001C760: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x8001C764: subu        $t8, $t8, $t6
    ctx->r24 = SUB32(ctx->r24, ctx->r14);
    // 0x8001C768: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x8001C76C: jal         0x8001C688
    // 0x8001C770: addu        $a0, $s1, $t8
    ctx->r4 = ADD32(ctx->r17, ctx->r24);
    func_8001C688_1D288(rdram, ctx);
        goto after_2;
    // 0x8001C770: addu        $a0, $s1, $t8
    ctx->r4 = ADD32(ctx->r17, ctx->r24);
    after_2:
    // 0x8001C774: lb          $t9, 0x5($s1)
    ctx->r25 = MEM_B(ctx->r17, 0X5);
L_8001C778:
    // 0x8001C778: beql        $t9, $zero, L_8001C7D0
    if (ctx->r25 == 0) {
        // 0x8001C77C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8001C7D0;
    }
    goto skip_5;
    // 0x8001C77C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_5:
    // 0x8001C780: beq         $s0, $zero, L_8001C7AC
    if (ctx->r16 == 0) {
        // 0x8001C784: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_8001C7AC;
    }
    // 0x8001C784: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8001C788: jal         0x8001904C
    // 0x8001C78C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001904C_19C4C(rdram, ctx);
        goto after_3;
    // 0x8001C78C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
    // 0x8001C790: bne         $v0, $zero, L_8001C7AC
    if (ctx->r2 != 0) {
        // 0x8001C794: sw          $v0, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r2;
            goto L_8001C7AC;
    }
    // 0x8001C794: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8001C798: lw          $t0, 0x74($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X74);
    // 0x8001C79C: beql        $t0, $zero, L_8001C7B0
    if (ctx->r8 == 0) {
        // 0x8001C7A0: lb          $t1, 0x5($s1)
        ctx->r9 = MEM_B(ctx->r17, 0X5);
            goto L_8001C7B0;
    }
    goto skip_6;
    // 0x8001C7A0: lb          $t1, 0x5($s1)
    ctx->r9 = MEM_B(ctx->r17, 0X5);
    skip_6:
    // 0x8001C7A4: jal         0x80036798
    // 0x8001C7A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80036798_37398(rdram, ctx);
        goto after_4;
    // 0x8001C7A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
L_8001C7AC:
    // 0x8001C7AC: lb          $t1, 0x5($s1)
    ctx->r9 = MEM_B(ctx->r17, 0X5);
L_8001C7B0:
    // 0x8001C7B0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8001C7B4: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x8001C7B8: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8001C7BC: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x8001C7C0: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x8001C7C4: jal         0x8001C688
    // 0x8001C7C8: addu        $a0, $s1, $t2
    ctx->r4 = ADD32(ctx->r17, ctx->r10);
    func_8001C688_1D288(rdram, ctx);
        goto after_5;
    // 0x8001C7C8: addu        $a0, $s1, $t2
    ctx->r4 = ADD32(ctx->r17, ctx->r10);
    after_5:
    // 0x8001C7CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8001C7D0:
    // 0x8001C7D0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8001C7D4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8001C7D8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8001C7DC: jr          $ra
    // 0x8001C7E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x8001C7E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8000DBD8_E7D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000DBD8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8000DBDC: jr          $ra
    // 0x8000DBE0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x8000DBE0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_8003F37C_3FF7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003F37C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8003F380: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8003F384: lwc1        $f2, -0x2EF8($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X2EF8);
    // 0x8003F388: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8003F38C: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x8003F390: addiu       $v1, $v1, -0x33D0
    ctx->r3 = ADD32(ctx->r3, -0X33D0);
    // 0x8003F394: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8003F398: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8003F39C: lui         $a3, 0x8007
    ctx->r7 = S32(0X8007 << 16);
    // 0x8003F3A0: addiu       $a3, $a3, -0x26E0
    ctx->r7 = ADD32(ctx->r7, -0X26E0);
    // 0x8003F3A4: lw          $a1, 0x7740($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7740);
    // 0x8003F3A8: lw          $a0, 0x8C($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X8C);
    // 0x8003F3AC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8003F3B0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8003F3B4: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8003F3B8: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x8003F3BC: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x8003F3C0: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x8003F3C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8003F3C8: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x8003F3CC: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x8003F3D0: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
    // 0x8003F3D4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x8003F3D8: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x8003F3DC: jal         0x80035690
    // 0x8003F3E0: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    func_80035690_36290(rdram, ctx);
        goto after_0;
    // 0x8003F3E0: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x8003F3E4: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x8003F3E8: addiu       $v1, $v1, -0x33D0
    ctx->r3 = ADD32(ctx->r3, -0X33D0);
    // 0x8003F3EC: lbu         $t6, 0xD8($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0XD8);
    // 0x8003F3F0: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x8003F3F4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003F3F8: sb          $t6, 0x74($v0)
    MEM_B(0X74, ctx->r2) = ctx->r14;
    // 0x8003F3FC: lbu         $t7, 0xD8($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0XD8);
    // 0x8003F400: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x8003F404: addiu       $a1, $a1, -0x70D0
    ctx->r5 = ADD32(ctx->r5, -0X70D0);
    // 0x8003F408: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8003F40C: sb          $t8, 0xD8($v1)
    MEM_B(0XD8, ctx->r3) = ctx->r24;
    // 0x8003F410: sw          $v0, 0x7750($at)
    MEM_W(0X7750, ctx->r1) = ctx->r2;
    // 0x8003F414: jal         0x80035244
    // 0x8003F418: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80035244_35E44(rdram, ctx);
        goto after_1;
    // 0x8003F418: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x8003F41C: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x8003F420: addiu       $a1, $a1, -0x6DA4
    ctx->r5 = ADD32(ctx->r5, -0X6DA4);
    // 0x8003F424: jal         0x80035214
    // 0x8003F428: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    func_80035214_35E14(rdram, ctx);
        goto after_2;
    // 0x8003F428: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    after_2:
    // 0x8003F42C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8003F430: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x8003F434: jr          $ra
    // 0x8003F438: nop

    TRACE_RETURN()
    return;
    // 0x8003F438: nop

;}
RECOMP_FUNC void func_80005984_6584(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80005984: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x80005988: addiu       $v1, $v1, 0x73A8
    ctx->r3 = ADD32(ctx->r3, 0X73A8);
    // 0x8000598C: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x80005990: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80005994: addiu       $t6, $zero, 0x2000
    ctx->r14 = ADD32(0, 0X2000);
    // 0x80005998: addiu       $a0, $a0, 0x73B0
    ctx->r4 = ADD32(ctx->r4, 0X73B0);
    // 0x8000599C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800059A0: subu        $t8, $t7, $t6
    ctx->r24 = SUB32(ctx->r15, ctx->r14);
    // 0x800059A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800059A8: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x800059AC: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x800059B0: bgez        $t8, L_800059D0
    if (SIGNED(ctx->r24) >= 0) {
        // 0x800059B4: or          $a2, $t6, $zero
        ctx->r6 = ctx->r14 | 0;
            goto L_800059D0;
    }
    // 0x800059B4: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x800059B8: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x800059BC: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x800059C0: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x800059C4: addu        $a2, $t6, $t0
    ctx->r6 = ADD32(ctx->r14, ctx->r8);
    // 0x800059C8: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
    // 0x800059CC: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
L_800059D0:
    // 0x800059D0: blez        $a2, L_800059FC
    if (SIGNED(ctx->r6) <= 0) {
        // 0x800059D4: lui         $a0, 0x8016
        ctx->r4 = S32(0X8016 << 16);
            goto L_800059FC;
    }
    // 0x800059D4: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x800059D8: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x800059DC: lw          $a1, -0x3A38($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3A38);
    // 0x800059E0: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x800059E4: ori         $at, $at, 0x5FA0
    ctx->r1 = ctx->r1 | 0X5FA0;
    // 0x800059E8: lw          $a0, 0x73A0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X73A0);
    // 0x800059EC: jal         0x80001640
    // 0x800059F0: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    func_80001640_2240(rdram, ctx);
        goto after_0;
    // 0x800059F0: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    after_0:
    // 0x800059F4: lui         $a2, 0x8016
    ctx->r6 = S32(0X8016 << 16);
    // 0x800059F8: lw          $a2, 0x73B0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X73B0);
L_800059FC:
    // 0x800059FC: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x80005A00: lw          $t2, 0x73A0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X73A0);
    // 0x80005A04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80005A08: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80005A0C: addu        $t3, $t2, $a2
    ctx->r11 = ADD32(ctx->r10, ctx->r6);
    // 0x80005A10: sw          $t3, 0x73A0($at)
    MEM_W(0X73A0, ctx->r1) = ctx->r11;
    // 0x80005A14: jr          $ra
    // 0x80005A18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80005A18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
