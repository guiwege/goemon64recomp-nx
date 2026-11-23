#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_08002128_6B53C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002128: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800212C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002130: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002134: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002138: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x0800213C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08002140: jalr        $t9
    // 0x08002144: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002144: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x08002148: bne         $v0, $zero, L_08002180
    if (ctx->r2 != 0) {
        // 0x0800214C: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_08002180;
    }
    // 0x0800214C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08002150: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002154: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08002158: lui         $a2, 0x3E2A
    ctx->r6 = S32(0X3E2A << 16);
    // 0x0800215C: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x08002160: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08002164: jalr        $t9
    // 0x08002168: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002168: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x0800216C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002170: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002174: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X2190) << 16);
    // 0x08002178: jalr        $t9
    // 0x0800217C: addiu       $a0, $a0, 0x2190
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X2190));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800217C: addiu       $a0, $a0, 0x2190
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X2190));
    after_2:
L_08002180:
    // 0x08002180: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002184: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002188: jr          $ra
    // 0x0800218C: nop

    TRACE_RETURN()
    return;
    // 0x0800218C: nop

;}
RECOMP_FUNC void func_08002534_6B57D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002534: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002538: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800253C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002540: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002544: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08002548: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0800254C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x08002550: jalr        $t9
    // 0x08002554: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002554: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08002558: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800255C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002560: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X257C) << 16);
    // 0x08002564: jalr        $t9
    // 0x08002568: addiu       $a0, $a0, 0x257C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X257C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002568: addiu       $a0, $a0, 0x257C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X257C));
    after_1:
    // 0x0800256C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002570: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002574: jr          $ra
    // 0x08002578: nop

    TRACE_RETURN()
    return;
    // 0x08002578: nop

;}
RECOMP_FUNC void func_08002DA8_6B6048(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002DA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002DAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002DB0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002DB4: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08002DB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002DBC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08002DC0: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08002DC4: bne         $v0, $zero, L_08002DF0
    if (ctx->r2 != 0) {
        // 0x08002DC8: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08002DF0;
    }
    // 0x08002DC8: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08002DCC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002DD0: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x08002DD4: jalr        $t9
    // 0x08002DD8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002DD8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08002DDC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002DE0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002DE4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X1D54) << 16);
    // 0x08002DE8: jalr        $t9
    // 0x08002DEC: addiu       $a0, $a0, 0x1D54
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X1D54));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002DEC: addiu       $a0, $a0, 0x1D54
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X1D54));
    after_1:
L_08002DF0:
    // 0x08002DF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002DF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002DF8: jr          $ra
    // 0x08002DFC: nop

    TRACE_RETURN()
    return;
    // 0x08002DFC: nop

;}
RECOMP_FUNC void func_08007D24_6BAFC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08007D24: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08007D28: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08007D2C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x08007D30: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x08007D34: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08007D38: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x08007D3C: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x08007D40: lui         $s0, 0x8004
    ctx->r16 = S32(0X8004 << 16);
    // 0x08007D44: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x08007D48: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x08007D4C: sw          $t7, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r15;
    // 0x08007D50: addiu       $s0, $s0, -0x7468
    ctx->r16 = ADD32(ctx->r16, -0X7468);
    // 0x08007D54: jalr        $s0
    // 0x08007D58: ori         $a0, $zero, 0x8243
    ctx->r4 = 0 | 0X8243;
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_0;
    // 0x08007D58: ori         $a0, $zero, 0x8243
    ctx->r4 = 0 | 0X8243;
    after_0:
    // 0x08007D5C: jalr        $s0
    // 0x08007D60: ori         $a0, $zero, 0x8203
    ctx->r4 = 0 | 0X8203;
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_1;
    // 0x08007D60: ori         $a0, $zero, 0x8203
    ctx->r4 = 0 | 0X8203;
    after_1:
    // 0x08007D64: jalr        $s0
    // 0x08007D68: ori         $a0, $zero, 0x8251
    ctx->r4 = 0 | 0X8251;
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_2;
    // 0x08007D68: ori         $a0, $zero, 0x8251
    ctx->r4 = 0 | 0X8251;
    after_2:
    // 0x08007D6C: lw          $t8, 0xE8($s1)
    ctx->r24 = MEM_W(ctx->r17, 0XE8);
    // 0x08007D70: addiu       $a0, $zero, 0x12D
    ctx->r4 = ADD32(0, 0X12D);
    // 0x08007D74: ori         $t9, $t8, 0x80
    ctx->r25 = ctx->r24 | 0X80;
    // 0x08007D78: sw          $t9, 0xE8($s1)
    MEM_W(0XE8, ctx->r17) = ctx->r25;
    // 0x08007D7C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08007D80: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x08007D84: jalr        $t9
    // 0x08007D88: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08007D88: nop

    after_3:
    // 0x08007D8C: lui         $s0, 0x8002
    ctx->r16 = S32(0X8002 << 16);
    // 0x08007D90: addiu       $s0, $s0, 0x3DF0
    ctx->r16 = ADD32(ctx->r16, 0X3DF0);
    // 0x08007D94: jalr        $s0
    // 0x08007D98: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_4;
    // 0x08007D98: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x08007D9C: jalr        $s0
    // 0x08007DA0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_5;
    // 0x08007DA0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_5:
    // 0x08007DA4: jalr        $s0
    // 0x08007DA8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_6;
    // 0x08007DA8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_6:
    // 0x08007DAC: jalr        $s0
    // 0x08007DB0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_7;
    // 0x08007DB0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_7:
    // 0x08007DB4: jalr        $s0
    // 0x08007DB8: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_8;
    // 0x08007DB8: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_8:
    // 0x08007DBC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08007DC0: addiu       $t0, $zero, 0x78
    ctx->r8 = ADD32(0, 0X78);
    // 0x08007DC4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08007DC8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X7DEC) << 16);
    // 0x08007DCC: sh          $t0, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = ctx->r8;
    // 0x08007DD0: jalr        $t9
    // 0x08007DD4: addiu       $a0, $a0, 0x7DEC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X7DEC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08007DD4: addiu       $a0, $a0, 0x7DEC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X7DEC));
    after_9:
    // 0x08007DD8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08007DDC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x08007DE0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x08007DE4: jr          $ra
    // 0x08007DE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x08007DE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0800A5E0_6BD880(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800A5E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800A5E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800A5E8: lw          $v0, 0xE8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XE8);
    // 0x0800A5EC: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x0800A5F0: sll         $t6, $v0, 0
    ctx->r14 = S32(ctx->r2 << 0);
    // 0x0800A5F4: bgez        $t6, L_0800A6E8
    if (SIGNED(ctx->r14) >= 0) {
        // 0x0800A5F8: sll         $t7, $v0, 5
        ctx->r15 = S32(ctx->r2 << 5);
            goto L_0800A6E8;
    }
    // 0x0800A5F8: sll         $t7, $v0, 5
    ctx->r15 = S32(ctx->r2 << 5);
    // 0x0800A5FC: bgez        $t7, L_0800A684
    if (SIGNED(ctx->r15) >= 0) {
        // 0x0800A600: lui         $t8, 0x8016
        ctx->r24 = S32(0X8016 << 16);
            goto L_0800A684;
    }
    // 0x0800A600: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x0800A604: lw          $t8, -0x3A38($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3A38);
    // 0x0800A608: lui         $v1, 0x4
    ctx->r3 = S32(0X4 << 16);
    // 0x0800A60C: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x0800A610: addu        $v1, $v1, $t8
    ctx->r3 = ADD32(ctx->r3, ctx->r24);
    // 0x0800A614: lhu         $v1, -0x5232($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X5232);
    // 0x0800A618: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800A61C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x0800A620: bgez        $v1, L_0800A634
    if (SIGNED(ctx->r3) >= 0) {
        // 0x0800A624: andi        $t9, $v1, 0x1
        ctx->r25 = ctx->r3 & 0X1;
            goto L_0800A634;
    }
    // 0x0800A624: andi        $t9, $v1, 0x1
    ctx->r25 = ctx->r3 & 0X1;
    // 0x0800A628: beq         $t9, $zero, L_0800A634
    if (ctx->r25 == 0) {
        // 0x0800A62C: nop
    
            goto L_0800A634;
    }
    // 0x0800A62C: nop

    // 0x0800A630: addiu       $t9, $t9, -0x2
    ctx->r25 = ADD32(ctx->r25, -0X2);
L_0800A634:
    // 0x0800A634: bne         $t9, $zero, L_0800A65C
    if (ctx->r25 != 0) {
        // 0x0800A638: or          $v1, $t9, $zero
        ctx->r3 = ctx->r25 | 0;
            goto L_0800A65C;
    }
    // 0x0800A638: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
    // 0x0800A63C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800A640: addiu       $t9, $t9, -0x291C
    ctx->r25 = ADD32(ctx->r25, -0X291C);
    // 0x0800A644: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x0800A648: jalr        $t9
    // 0x0800A64C: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800A64C: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_0:
    // 0x0800A650: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x0800A654: b           L_0800A684
    // 0x0800A658: lw          $v0, 0xE8($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XE8);
        goto L_0800A684;
    // 0x0800A658: lw          $v0, 0xE8($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XE8);
L_0800A65C:
    // 0x0800A65C: bne         $v1, $at, L_0800A684
    if (ctx->r3 != ctx->r1) {
        // 0x0800A660: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_0800A684;
    }
    // 0x0800A660: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x0800A664: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800A668: addiu       $t9, $t9, -0x291C
    ctx->r25 = ADD32(ctx->r25, -0X291C);
    // 0x0800A66C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800A670: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x0800A674: jalr        $t9
    // 0x0800A678: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800A678: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_1:
    // 0x0800A67C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x0800A680: lw          $v0, 0xE8($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XE8);
L_0800A684:
    // 0x0800A684: sll         $t0, $v0, 4
    ctx->r8 = S32(ctx->r2 << 4);
    // 0x0800A688: bgez        $t0, L_0800A6E8
    if (SIGNED(ctx->r8) >= 0) {
        // 0x0800A68C: lui         $v0, 0x8016
        ctx->r2 = S32(0X8016 << 16);
            goto L_0800A6E8;
    }
    // 0x0800A68C: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x0800A690: lhu         $v0, -0x33D0($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X33D0);
    // 0x0800A694: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x0800A698: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x0800A69C: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x0800A6A0: mfhi        $v0
    ctx->r2 = hi;
    // 0x0800A6A4: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x0800A6A8: beq         $at, $zero, L_0800A6C8
    if (ctx->r1 == 0) {
        // 0x0800A6AC: addiu       $a1, $zero, 0x20
        ctx->r5 = ADD32(0, 0X20);
            goto L_0800A6C8;
    }
    // 0x0800A6AC: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x0800A6B0: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x0800A6B4: addiu       $t9, $t9, -0x5C04
    ctx->r25 = ADD32(ctx->r25, -0X5C04);
    // 0x0800A6B8: jalr        $t9
    // 0x0800A6BC: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800A6BC: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    after_2:
    // 0x0800A6C0: b           L_0800A6EC
    // 0x0800A6C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_0800A6EC;
    // 0x0800A6C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_0800A6C8:
    // 0x0800A6C8: slti        $at, $v0, 0x6
    ctx->r1 = SIGNED(ctx->r2) < 0X6 ? 1 : 0;
    // 0x0800A6CC: beq         $at, $zero, L_0800A6E8
    if (ctx->r1 == 0) {
        // 0x0800A6D0: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_0800A6E8;
    }
    // 0x0800A6D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x0800A6D4: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x0800A6D8: addiu       $t9, $t9, -0x5C04
    ctx->r25 = ADD32(ctx->r25, -0X5C04);
    // 0x0800A6DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800A6E0: jalr        $t9
    // 0x0800A6E4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800A6E4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_3:
L_0800A6E8:
    // 0x0800A6E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_0800A6EC:
    // 0x0800A6EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800A6F0: jr          $ra
    // 0x0800A6F4: nop

    TRACE_RETURN()
    return;
    // 0x0800A6F4: nop

;}
RECOMP_FUNC void func_08002E34_6B60D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002E34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002E38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002E3C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002E40: lbu         $t6, 0x8D($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X8D);
    // 0x08002E44: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08002E48: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x08002E4C: bne         $t6, $at, L_08002E70
    if (ctx->r14 != ctx->r1) {
        // 0x08002E50: lui         $a2, 0x3EAA
        ctx->r6 = S32(0X3EAA << 16);
            goto L_08002E70;
    }
    // 0x08002E50: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x08002E54: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002E58: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002E5C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X2FFC) << 16);
    // 0x08002E60: jalr        $t9
    // 0x08002E64: addiu       $a0, $a0, 0x2FFC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X2FFC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002E64: addiu       $a0, $a0, 0x2FFC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X2FFC));
    after_0:
    // 0x08002E68: b           L_08002EBC
    // 0x08002E6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08002EBC;
    // 0x08002E6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08002E70:
    // 0x08002E70: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002E74: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08002E78: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x08002E7C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08002E80: jalr        $t9
    // 0x08002E84: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002E84: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x08002E88: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002E8C: addiu       $t9, $t9, 0x26C
    ctx->r25 = ADD32(ctx->r25, 0X26C);
    // 0x08002E90: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08002E94: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x08002E98: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    // 0x08002E9C: jalr        $t9
    // 0x08002EA0: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002EA0: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_2:
    // 0x08002EA4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002EA8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002EAC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X2EC8) << 16);
    // 0x08002EB0: jalr        $t9
    // 0x08002EB4: addiu       $a0, $a0, 0x2EC8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X2EC8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002EB4: addiu       $a0, $a0, 0x2EC8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X2EC8));
    after_3:
    // 0x08002EB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08002EBC:
    // 0x08002EBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002EC0: jr          $ra
    // 0x08002EC4: nop

    TRACE_RETURN()
    return;
    // 0x08002EC4: nop

;}
RECOMP_FUNC void func_080020D8_6B5378(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080020D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080020DC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080020E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080020E4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080020E8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x080020EC: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x080020F0: sb          $zero, -0x324A($at)
    MEM_B(-0X324A, ctx->r1) = 0;
    // 0x080020F4: addiu       $a1, $zero, 0x190
    ctx->r5 = ADD32(0, 0X190);
    // 0x080020F8: addiu       $a2, $zero, 0x190
    ctx->r6 = ADD32(0, 0X190);
    // 0x080020FC: jalr        $t9
    // 0x08002100: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002100: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
    // 0x08002104: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002108: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800210C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X2128) << 16);
    // 0x08002110: jalr        $t9
    // 0x08002114: addiu       $a0, $a0, 0x2128
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X2128));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002114: addiu       $a0, $a0, 0x2128
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X2128));
    after_1:
    // 0x08002118: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800211C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002120: jr          $ra
    // 0x08002124: nop

    TRACE_RETURN()
    return;
    // 0x08002124: nop

;}
RECOMP_FUNC void func_08003C68_6B6F08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003C68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003C6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003C70: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08003C74: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x08003C78: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003C7C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003C80: andi        $t7, $t6, 0x20
    ctx->r15 = ctx->r14 & 0X20;
    // 0x08003C84: bne         $t7, $zero, L_08003C94
    if (ctx->r15 != 0) {
        // 0x08003C88: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(20, 0X3CA4) << 16);
            goto L_08003C94;
    }
    // 0x08003C88: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X3CA4) << 16);
    // 0x08003C8C: jalr        $t9
    // 0x08003C90: addiu       $a0, $a0, 0x3CA4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X3CA4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003C90: addiu       $a0, $a0, 0x3CA4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X3CA4));
    after_0:
L_08003C94:
    // 0x08003C94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08003C98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08003C9C: jr          $ra
    // 0x08003CA0: nop

    TRACE_RETURN()
    return;
    // 0x08003CA0: nop

;}
RECOMP_FUNC void func_08002F0C_6B61AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002F0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002F10: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002F14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002F18: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002F1C: addiu       $t9, $t9, 0x168
    ctx->r25 = ADD32(ctx->r25, 0X168);
    // 0x08002F20: jalr        $t9
    // 0x08002F24: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002F24: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    after_0:
    // 0x08002F28: bne         $v0, $zero, L_08002F40
    if (ctx->r2 != 0) {
        // 0x08002F2C: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(20, 0X2F50) << 16);
            goto L_08002F40;
    }
    // 0x08002F2C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X2F50) << 16);
    // 0x08002F30: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002F34: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002F38: jalr        $t9
    // 0x08002F3C: addiu       $a0, $a0, 0x2F50
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X2F50));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002F3C: addiu       $a0, $a0, 0x2F50
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X2F50));
    after_1:
L_08002F40:
    // 0x08002F40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002F44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002F48: jr          $ra
    // 0x08002F4C: nop

    TRACE_RETURN()
    return;
    // 0x08002F4C: nop

;}
RECOMP_FUNC void func_08000000_6B32A0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void func_080005F4_6B3894(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080005F4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x080005F8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080005FC: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x08000600: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x08000604: lw          $v0, 0xE8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XE8);
    // 0x08000608: addiu       $t6, $zero, 0x323
    ctx->r14 = ADD32(0, 0X323);
    // 0x0800060C: addiu       $t7, $zero, 0x40
    ctx->r15 = ADD32(0, 0X40);
    // 0x08000610: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x08000614: andi        $t9, $v0, 0x100
    ctx->r25 = ctx->r2 & 0X100;
    // 0x08000618: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x0800061C: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x08000620: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x08000624: sb          $t7, 0xEC($a0)
    MEM_B(0XEC, ctx->r4) = ctx->r15;
    // 0x08000628: beq         $t9, $zero, L_0800065C
    if (ctx->r25 == 0) {
        // 0x0800062C: sb          $t8, 0x6D($a0)
        MEM_B(0X6D, ctx->r4) = ctx->r24;
            goto L_0800065C;
    }
    // 0x0800062C: sb          $t8, 0x6D($a0)
    MEM_B(0X6D, ctx->r4) = ctx->r24;
    // 0x08000630: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000634: addiu       $t9, $t9, -0x2350
    ctx->r25 = ADD32(ctx->r25, -0X2350);
    // 0x08000638: lbu         $a1, 0xEC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XEC);
    // 0x0800063C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08000640: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000644: jalr        $t9
    // 0x08000648: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000648: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_0:
    // 0x0800064C: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08000650: or          $t0, $v0, $at
    ctx->r8 = ctx->r2 | ctx->r1;
    // 0x08000654: b           L_080006D4
    // 0x08000658: sw          $t0, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r8;
        goto L_080006D4;
    // 0x08000658: sw          $t0, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r8;
L_0800065C:
    // 0x0800065C: andi        $t1, $v0, 0x4000
    ctx->r9 = ctx->r2 & 0X4000;
    // 0x08000660: beq         $t1, $zero, L_080006AC
    if (ctx->r9 == 0) {
        // 0x08000664: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_080006AC;
    }
    // 0x08000664: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000668: lbu         $a1, 0xEC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XEC);
    // 0x0800066C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000670: addiu       $t9, $t9, -0x22B4
    ctx->r25 = ADD32(ctx->r25, -0X22B4);
    // 0x08000674: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08000678: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800067C: bgez        $a1, L_0800068C
    if (SIGNED(ctx->r5) >= 0) {
        // 0x08000680: sra         $t2, $a1, 2
        ctx->r10 = S32(SIGNED(ctx->r5) >> 2);
            goto L_0800068C;
    }
    // 0x08000680: sra         $t2, $a1, 2
    ctx->r10 = S32(SIGNED(ctx->r5) >> 2);
    // 0x08000684: addiu       $at, $a1, 0x3
    ctx->r1 = ADD32(ctx->r5, 0X3);
    // 0x08000688: sra         $t2, $at, 2
    ctx->r10 = S32(SIGNED(ctx->r1) >> 2);
L_0800068C:
    // 0x0800068C: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    // 0x08000690: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000694: jalr        $t9
    // 0x08000698: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000698: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_1:
    // 0x0800069C: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x080006A0: or          $t3, $v0, $at
    ctx->r11 = ctx->r2 | ctx->r1;
    // 0x080006A4: b           L_080006D4
    // 0x080006A8: sw          $t3, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r11;
        goto L_080006D4;
    // 0x080006A8: sw          $t3, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r11;
L_080006AC:
    // 0x080006AC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080006B0: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x080006B4: lbu         $a1, 0xEC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XEC);
    // 0x080006B8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x080006BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080006C0: jalr        $t9
    // 0x080006C4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080006C4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_2:
    // 0x080006C8: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x080006CC: or          $t4, $v0, $at
    ctx->r12 = ctx->r2 | ctx->r1;
    // 0x080006D0: sw          $t4, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r12;
L_080006D4:
    // 0x080006D4: lui         $t5, 0x40
    ctx->r13 = S32(0X40 << 16);
    // 0x080006D8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080006DC: ori         $t5, $t5, 0x6E0
    ctx->r13 = ctx->r13 | 0X6E0;
    // 0x080006E0: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x080006E4: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x080006E8: sw          $t5, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r13;
    // 0x080006EC: sb          $t6, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r14;
    // 0x080006F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080006F4: jalr        $t9
    // 0x080006F8: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080006F8: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    after_3:
    // 0x080006FC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000700: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08000704: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000708: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800070C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000710: jalr        $t9
    // 0x08000714: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000714: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x08000718: lw          $t7, 0xE8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XE8);
    // 0x0800071C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000720: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000724: andi        $t8, $t7, 0x4000
    ctx->r24 = ctx->r15 & 0X4000;
    // 0x08000728: beq         $t8, $zero, L_08000748
    if (ctx->r24 == 0) {
        // 0x0800072C: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(20, 0X77C) << 16);
            goto L_08000748;
    }
    // 0x0800072C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X77C) << 16);
    // 0x08000730: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC2BC) << 16);
    // 0x08000734: lwc1        $f0, -0x3D44($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(20, 0XC2BC));
    // 0x08000738: swc1        $f0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f0.u32l;
    // 0x0800073C: swc1        $f0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f0.u32l;
    // 0x08000740: b           L_08000760
    // 0x08000744: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
        goto L_08000760;
    // 0x08000744: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
L_08000748:
    // 0x08000748: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x0800074C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08000750: nop

    // 0x08000754: swc1        $f0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f0.u32l;
    // 0x08000758: swc1        $f0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f0.u32l;
    // 0x0800075C: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
L_08000760:
    // 0x08000760: jalr        $t9
    // 0x08000764: addiu       $a0, $a0, 0x77C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X77C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000764: addiu       $a0, $a0, 0x77C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X77C));
    after_5:
    // 0x08000768: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0800076C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x08000770: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x08000774: jr          $ra
    // 0x08000778: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x08000778: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_08003CE0_6B6F80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003CE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003CE4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003CE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003CEC: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08003CF0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08003CF4: jalr        $t9
    // 0x08003CF8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003CF8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x08003CFC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003D00: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08003D04: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08003D08: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x08003D0C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08003D10: jalr        $t9
    // 0x08003D14: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003D14: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x08003D18: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003D1C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003D20: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X3D3C) << 16);
    // 0x08003D24: jalr        $t9
    // 0x08003D28: addiu       $a0, $a0, 0x3D3C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X3D3C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003D28: addiu       $a0, $a0, 0x3D3C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X3D3C));
    after_2:
    // 0x08003D2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08003D30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08003D34: jr          $ra
    // 0x08003D38: nop

    TRACE_RETURN()
    return;
    // 0x08003D38: nop

;}
RECOMP_FUNC void func_08003D3C_6B6FDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003D3C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08003D40: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003D44: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08003D48: addiu       $t9, $t9, 0x125C
    ctx->r25 = ADD32(ctx->r25, 0X125C);
    // 0x08003D4C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08003D50: jalr        $t9
    // 0x08003D54: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003D54: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x08003D58: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x08003D5C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08003D60: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x08003D64: lw          $t7, 0x68($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X68);
    // 0x08003D68: andi        $t8, $t7, 0x4000
    ctx->r24 = ctx->r15 & 0X4000;
    // 0x08003D6C: beql        $t8, $zero, L_08003DA4
    if (ctx->r24 == 0) {
        // 0x08003D70: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_08003DA4;
    }
    goto skip_0;
    // 0x08003D70: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x08003D74: jalr        $t9
    // 0x08003D78: addiu       $a0, $zero, 0x97
    ctx->r4 = ADD32(0, 0X97);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003D78: addiu       $a0, $zero, 0x97
    ctx->r4 = ADD32(0, 0X97);
    after_1:
    // 0x08003D7C: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08003D80: addiu       $t9, $t9, -0x5B5C
    ctx->r25 = ADD32(ctx->r25, -0X5B5C);
    // 0x08003D84: addiu       $t0, $zero, 0x100
    ctx->r8 = ADD32(0, 0X100);
    // 0x08003D88: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x08003D8C: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x08003D90: addiu       $a1, $zero, -0x6E
    ctx->r5 = ADD32(0, -0X6E);
    // 0x08003D94: addiu       $a2, $zero, -0x46
    ctx->r6 = ADD32(0, -0X46);
    // 0x08003D98: jalr        $t9
    // 0x08003D9C: addiu       $a3, $zero, 0x27
    ctx->r7 = ADD32(0, 0X27);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003D9C: addiu       $a3, $zero, 0x27
    ctx->r7 = ADD32(0, 0X27);
    after_2:
    // 0x08003DA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08003DA4:
    // 0x08003DA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08003DA8: jr          $ra
    // 0x08003DAC: nop

    TRACE_RETURN()
    return;
    // 0x08003DAC: nop

;}
RECOMP_FUNC void func_080083BC_6BB65C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080083BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080083C0: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080083C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080083C8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x080083CC: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x080083D0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080083D4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x080083D8: jalr        $t9
    // 0x080083DC: addiu       $a0, $zero, 0xA4
    ctx->r4 = ADD32(0, 0XA4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080083DC: addiu       $a0, $zero, 0xA4
    ctx->r4 = ADD32(0, 0XA4);
    after_0:
    // 0x080083E0: bne         $v0, $zero, L_0800854C
    if (ctx->r2 != 0) {
        // 0x080083E4: lui         $s0, 0x8002
        ctx->r16 = S32(0X8002 << 16);
            goto L_0800854C;
    }
    // 0x080083E4: lui         $s0, 0x8002
    ctx->r16 = S32(0X8002 << 16);
    // 0x080083E8: addiu       $s0, $s0, 0x4038
    ctx->r16 = ADD32(ctx->r16, 0X4038);
    // 0x080083EC: jalr        $s0
    // 0x080083F0: addiu       $a0, $zero, 0x132
    ctx->r4 = ADD32(0, 0X132);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_1;
    // 0x080083F0: addiu       $a0, $zero, 0x132
    ctx->r4 = ADD32(0, 0X132);
    after_1:
    // 0x080083F4: jalr        $s0
    // 0x080083F8: addiu       $a0, $zero, 0x134
    ctx->r4 = ADD32(0, 0X134);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_2;
    // 0x080083F8: addiu       $a0, $zero, 0x134
    ctx->r4 = ADD32(0, 0X134);
    after_2:
    // 0x080083FC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08008400: addiu       $t9, $t9, 0x1F70
    ctx->r25 = ADD32(ctx->r25, 0X1F70);
    // 0x08008404: jalr        $t9
    // 0x08008408: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08008408: nop

    after_3:
    // 0x0800840C: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x08008410: lw          $t7, -0x39D8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X39D8);
    // 0x08008414: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x08008418: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800841C: addiu       $t9, $t9, 0x2940
    ctx->r25 = ADD32(ctx->r25, 0X2940);
    // 0x08008420: sb          $t6, 0x64($t7)
    MEM_B(0X64, ctx->r15) = ctx->r14;
    // 0x08008424: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08008428: jalr        $t9
    // 0x0800842C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x0800842C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x08008430: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08008434: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08008438: addiu       $t9, $t9, 0x2500
    ctx->r25 = ADD32(ctx->r25, 0X2500);
    // 0x0800843C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08008440: addiu       $a1, $zero, 0xD00
    ctx->r5 = ADD32(0, 0XD00);
    // 0x08008444: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x08008448: jalr        $t9
    // 0x0800844C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x0800844C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    after_5:
    // 0x08008450: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08008454: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x08008458: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x0800845C: lui         $a1, 0xC282
    ctx->r5 = S32(0XC282 << 16);
    // 0x08008460: lui         $a2, 0xC28C
    ctx->r6 = S32(0XC28C << 16);
    // 0x08008464: jalr        $t9
    // 0x08008468: lui         $a3, 0x430C
    ctx->r7 = S32(0X430C << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08008468: lui         $a3, 0x430C
    ctx->r7 = S32(0X430C << 16);
    after_6:
    // 0x0800846C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08008470: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x08008474: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x08008478: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    // 0x0800847C: lui         $a2, 0xC248
    ctx->r6 = S32(0XC248 << 16);
    // 0x08008480: jalr        $t9
    // 0x08008484: lui         $a3, 0x433E
    ctx->r7 = S32(0X433E << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08008484: lui         $a3, 0x433E
    ctx->r7 = S32(0X433E << 16);
    after_7:
    // 0x08008488: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800848C: addiu       $t9, $t9, 0x381C
    ctx->r25 = ADD32(ctx->r25, 0X381C);
    // 0x08008490: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08008494: jalr        $t9
    // 0x08008498: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08008498: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x0800849C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x080084A0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080084A4: addiu       $t9, $t9, 0x33E0
    ctx->r25 = ADD32(ctx->r25, 0X33E0);
    // 0x080084A8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x080084AC: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x080084B0: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x080084B4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x080084B8: jalr        $t9
    // 0x080084BC: lui         $a2, 0xC2C8
    ctx->r6 = S32(0XC2C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x080084BC: lui         $a2, 0xC2C8
    ctx->r6 = S32(0XC2C8 << 16);
    after_9:
    // 0x080084C0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080084C4: addiu       $t9, $t9, 0x3400
    ctx->r25 = ADD32(ctx->r25, 0X3400);
    // 0x080084C8: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x080084CC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x080084D0: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    // 0x080084D4: jalr        $t9
    // 0x080084D8: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x080084D8: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    after_10:
    // 0x080084DC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080084E0: addiu       $t9, $t9, 0x3484
    ctx->r25 = ADD32(ctx->r25, 0X3484);
    // 0x080084E4: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x080084E8: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x080084EC: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    // 0x080084F0: jalr        $t9
    // 0x080084F4: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x080084F4: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    after_11:
    // 0x080084F8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080084FC: addiu       $t9, $t9, 0x2938
    ctx->r25 = ADD32(ctx->r25, 0X2938);
    // 0x08008500: jalr        $t9
    // 0x08008504: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x08008504: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_12:
    // 0x08008508: addiu       $t8, $zero, 0x38
    ctx->r24 = ADD32(0, 0X38);
    // 0x0800850C: addiu       $t0, $zero, 0x140
    ctx->r8 = ADD32(0, 0X140);
    // 0x08008510: addiu       $t1, $zero, 0xB8
    ctx->r9 = ADD32(0, 0XB8);
    // 0x08008514: sh          $zero, 0x48($v0)
    MEM_H(0X48, ctx->r2) = 0;
    // 0x08008518: sh          $t8, 0x4A($v0)
    MEM_H(0X4A, ctx->r2) = ctx->r24;
    // 0x0800851C: sh          $t0, 0x4C($v0)
    MEM_H(0X4C, ctx->r2) = ctx->r8;
    // 0x08008520: sh          $t1, 0x4E($v0)
    MEM_H(0X4E, ctx->r2) = ctx->r9;
    // 0x08008524: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x08008528: addiu       $t2, $zero, 0x1E
    ctx->r10 = ADD32(0, 0X1E);
    // 0x0800852C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08008530: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x08008534: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08008538: lui         $a0, 0x801
    ctx->r4 = S32(RELOC_HI16(20, 0X8560) << 16);
    // 0x0800853C: sh          $t2, 0x8A($t3)
    MEM_H(0X8A, ctx->r11) = ctx->r10;
    // 0x08008540: sw          $v0, -0x324C($at)
    MEM_W(-0X324C, ctx->r1) = ctx->r2;
    // 0x08008544: jalr        $t9
    // 0x08008548: addiu       $a0, $a0, -0x7AA0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X8560));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x08008548: addiu       $a0, $a0, -0x7AA0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X8560));
    after_13:
L_0800854C:
    // 0x0800854C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08008550: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08008554: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08008558: jr          $ra
    // 0x0800855C: nop

    TRACE_RETURN()
    return;
    // 0x0800855C: nop

;}
RECOMP_FUNC void func_0800A228_6BD4C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800A228: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x0800A22C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x0800A230: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x0800A234: lw          $v1, 0xE8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XE8);
    // 0x0800A238: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x0800A23C: sll         $t6, $v1, 5
    ctx->r14 = S32(ctx->r3 << 5);
    // 0x0800A240: bgezl       $t6, L_0800A414
    if (SIGNED(ctx->r14) >= 0) {
        // 0x0800A244: sll         $t4, $v1, 4
        ctx->r12 = S32(ctx->r3 << 4);
            goto L_0800A414;
    }
    goto skip_0;
    // 0x0800A244: sll         $t4, $v1, 4
    ctx->r12 = S32(ctx->r3 << 4);
    skip_0:
    // 0x0800A248: lbu         $t7, 0x8D($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X8D);
    // 0x0800A24C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800A250: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x0800A254: bnel        $t7, $zero, L_0800A2C4
    if (ctx->r15 != 0) {
        // 0x0800A258: lbu         $v0, 0x8D($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X8D);
            goto L_0800A2C4;
    }
    goto skip_1;
    // 0x0800A258: lbu         $v0, 0x8D($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8D);
    skip_1:
    // 0x0800A25C: jalr        $t9
    // 0x0800A260: addiu       $a0, $zero, 0x12E
    ctx->r4 = ADD32(0, 0X12E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800A260: addiu       $a0, $zero, 0x12E
    ctx->r4 = ADD32(0, 0X12E);
    after_0:
    // 0x0800A264: bne         $v0, $zero, L_0800A2C0
    if (ctx->r2 != 0) {
        // 0x0800A268: addiu       $at, $zero, -0x3
        ctx->r1 = ADD32(0, -0X3);
            goto L_0800A2C0;
    }
    // 0x0800A268: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x0800A26C: lw          $t8, 0x68($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X68);
    // 0x0800A270: lw          $t1, 0x60($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X60);
    // 0x0800A274: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800A278: and         $t0, $t8, $at
    ctx->r8 = ctx->r24 & ctx->r1;
    // 0x0800A27C: lui         $at, 0xFFDF
    ctx->r1 = S32(0XFFDF << 16);
    // 0x0800A280: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x0800A284: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x0800A288: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x0800A28C: and         $t2, $t1, $at
    ctx->r10 = ctx->r9 & ctx->r1;
    // 0x0800A290: sw          $t0, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r8;
    // 0x0800A294: sw          $t2, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r10;
    // 0x0800A298: sb          $t3, 0x8D($s0)
    MEM_B(0X8D, ctx->r16) = ctx->r11;
    // 0x0800A29C: jalr        $t9
    // 0x0800A2A0: addiu       $a0, $zero, 0x1A1
    ctx->r4 = ADD32(0, 0X1A1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800A2A0: addiu       $a0, $zero, 0x1A1
    ctx->r4 = ADD32(0, 0X1A1);
    after_1:
    // 0x0800A2A4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800A2A8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800A2AC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X7D24) << 16);
    // 0x0800A2B0: jalr        $t9
    // 0x0800A2B4: addiu       $a0, $a0, 0x7D24
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X7D24));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800A2B4: addiu       $a0, $a0, 0x7D24
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X7D24));
    after_2:
    // 0x0800A2B8: b           L_0800A5D0
    // 0x0800A2BC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_0800A5D0;
    // 0x0800A2BC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_0800A2C0:
    // 0x0800A2C0: lbu         $v0, 0x8D($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8D);
L_0800A2C4:
    // 0x0800A2C4: addiu       $at, $zero, 0x19
    ctx->r1 = ADD32(0, 0X19);
    // 0x0800A2C8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x0800A2CC: bnel        $v0, $at, L_0800A300
    if (ctx->r2 != ctx->r1) {
        // 0x0800A2D0: addiu       $at, $zero, 0x14
        ctx->r1 = ADD32(0, 0X14);
            goto L_0800A300;
    }
    goto skip_2;
    // 0x0800A2D0: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    skip_2:
    // 0x0800A2D4: lui         $v0, 0x8002
    ctx->r2 = S32(0X8002 << 16);
    // 0x0800A2D8: addiu       $v0, $v0, 0x3DF0
    ctx->r2 = ADD32(ctx->r2, 0X3DF0);
    // 0x0800A2DC: jalr        $v0
    // 0x0800A2E0: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x0800A2E0: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    after_3:
    // 0x0800A2E4: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x0800A2E8: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x0800A2EC: jalr        $v0
    // 0x0800A2F0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x0800A2F0: nop

    after_4:
    // 0x0800A2F4: b           L_0800A410
    // 0x0800A2F8: lw          $v1, 0xE8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XE8);
        goto L_0800A410;
    // 0x0800A2F8: lw          $v1, 0xE8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XE8);
    // 0x0800A2FC: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
L_0800A300:
    // 0x0800A300: bne         $v0, $at, L_0800A330
    if (ctx->r2 != ctx->r1) {
        // 0x0800A304: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_0800A330;
    }
    // 0x0800A304: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x0800A308: lui         $v0, 0x8002
    ctx->r2 = S32(0X8002 << 16);
    // 0x0800A30C: addiu       $v0, $v0, 0x3DF0
    ctx->r2 = ADD32(ctx->r2, 0X3DF0);
    // 0x0800A310: jalr        $v0
    // 0x0800A314: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x0800A314: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    after_5:
    // 0x0800A318: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x0800A31C: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x0800A320: jalr        $v0
    // 0x0800A324: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_6;
    // 0x0800A324: nop

    after_6:
    // 0x0800A328: b           L_0800A410
    // 0x0800A32C: lw          $v1, 0xE8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XE8);
        goto L_0800A410;
    // 0x0800A32C: lw          $v1, 0xE8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XE8);
L_0800A330:
    // 0x0800A330: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x0800A334: bne         $v0, $at, L_0800A364
    if (ctx->r2 != ctx->r1) {
        // 0x0800A338: addiu       $a0, $zero, 0x5
        ctx->r4 = ADD32(0, 0X5);
            goto L_0800A364;
    }
    // 0x0800A338: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x0800A33C: lui         $v0, 0x8002
    ctx->r2 = S32(0X8002 << 16);
    // 0x0800A340: addiu       $v0, $v0, 0x3DF0
    ctx->r2 = ADD32(ctx->r2, 0X3DF0);
    // 0x0800A344: jalr        $v0
    // 0x0800A348: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_7;
    // 0x0800A348: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    after_7:
    // 0x0800A34C: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x0800A350: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x0800A354: jalr        $v0
    // 0x0800A358: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_8;
    // 0x0800A358: nop

    after_8:
    // 0x0800A35C: b           L_0800A410
    // 0x0800A360: lw          $v1, 0xE8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XE8);
        goto L_0800A410;
    // 0x0800A360: lw          $v1, 0xE8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XE8);
L_0800A364:
    // 0x0800A364: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x0800A368: bne         $v0, $at, L_0800A398
    if (ctx->r2 != ctx->r1) {
        // 0x0800A36C: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_0800A398;
    }
    // 0x0800A36C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x0800A370: lui         $v0, 0x8002
    ctx->r2 = S32(0X8002 << 16);
    // 0x0800A374: addiu       $v0, $v0, 0x3DF0
    ctx->r2 = ADD32(ctx->r2, 0X3DF0);
    // 0x0800A378: jalr        $v0
    // 0x0800A37C: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_9;
    // 0x0800A37C: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    after_9:
    // 0x0800A380: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x0800A384: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x0800A388: jalr        $v0
    // 0x0800A38C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_10;
    // 0x0800A38C: nop

    after_10:
    // 0x0800A390: b           L_0800A410
    // 0x0800A394: lw          $v1, 0xE8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XE8);
        goto L_0800A410;
    // 0x0800A394: lw          $v1, 0xE8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XE8);
L_0800A398:
    // 0x0800A398: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x0800A39C: bne         $v0, $at, L_0800A3CC
    if (ctx->r2 != ctx->r1) {
        // 0x0800A3A0: addiu       $a0, $zero, 0x3
        ctx->r4 = ADD32(0, 0X3);
            goto L_0800A3CC;
    }
    // 0x0800A3A0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x0800A3A4: lui         $v0, 0x8002
    ctx->r2 = S32(0X8002 << 16);
    // 0x0800A3A8: addiu       $v0, $v0, 0x3DF0
    ctx->r2 = ADD32(ctx->r2, 0X3DF0);
    // 0x0800A3AC: jalr        $v0
    // 0x0800A3B0: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_11;
    // 0x0800A3B0: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    after_11:
    // 0x0800A3B4: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x0800A3B8: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x0800A3BC: jalr        $v0
    // 0x0800A3C0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_12;
    // 0x0800A3C0: nop

    after_12:
    // 0x0800A3C4: b           L_0800A410
    // 0x0800A3C8: lw          $v1, 0xE8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XE8);
        goto L_0800A410;
    // 0x0800A3C8: lw          $v1, 0xE8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XE8);
L_0800A3CC:
    // 0x0800A3CC: bne         $v0, $zero, L_0800A400
    if (ctx->r2 != 0) {
        // 0x0800A3D0: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_0800A400;
    }
    // 0x0800A3D0: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800A3D4: lui         $v0, 0x8002
    ctx->r2 = S32(0X8002 << 16);
    // 0x0800A3D8: addiu       $v0, $v0, 0x3DF0
    ctx->r2 = ADD32(ctx->r2, 0X3DF0);
    // 0x0800A3DC: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x0800A3E0: jalr        $v0
    // 0x0800A3E4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_13;
    // 0x0800A3E4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_13:
    // 0x0800A3E8: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x0800A3EC: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x0800A3F0: jalr        $v0
    // 0x0800A3F4: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_14;
    // 0x0800A3F4: nop

    after_14:
    // 0x0800A3F8: b           L_0800A410
    // 0x0800A3FC: lw          $v1, 0xE8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XE8);
        goto L_0800A410;
    // 0x0800A3FC: lw          $v1, 0xE8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XE8);
L_0800A400:
    // 0x0800A400: addiu       $t9, $t9, 0x3E40
    ctx->r25 = ADD32(ctx->r25, 0X3E40);
    // 0x0800A404: jalr        $t9
    // 0x0800A408: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x0800A408: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_15:
    // 0x0800A40C: lw          $v1, 0xE8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XE8);
L_0800A410:
    // 0x0800A410: sll         $t4, $v1, 4
    ctx->r12 = S32(ctx->r3 << 4);
L_0800A414:
    // 0x0800A414: bgez        $t4, L_0800A5CC
    if (SIGNED(ctx->r12) >= 0) {
        // 0x0800A418: sll         $t5, $v1, 9
        ctx->r13 = S32(ctx->r3 << 9);
            goto L_0800A5CC;
    }
    // 0x0800A418: sll         $t5, $v1, 9
    ctx->r13 = S32(ctx->r3 << 9);
    // 0x0800A41C: bgez        $t5, L_0800A518
    if (SIGNED(ctx->r13) >= 0) {
        // 0x0800A420: lw          $v0, 0x18($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X18);
            goto L_0800A518;
    }
    // 0x0800A420: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x0800A424: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x0800A428: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x0800A42C: lui         $v1, 0x4
    ctx->r3 = S32(0X4 << 16);
    // 0x0800A430: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x0800A434: addu        $v1, $v1, $t6
    ctx->r3 = ADD32(ctx->r3, ctx->r14);
    // 0x0800A438: lhu         $v1, -0x5232($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X5232);
    // 0x0800A43C: div         $zero, $v1, $at
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r1)));
    // 0x0800A440: mfhi        $v1
    ctx->r3 = hi;
    // 0x0800A444: slti        $at, $v1, 0x5
    ctx->r1 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
    // 0x0800A448: beql        $at, $zero, L_0800A49C
    if (ctx->r1 == 0) {
        // 0x0800A44C: slti        $at, $v1, 0xF
        ctx->r1 = SIGNED(ctx->r3) < 0XF ? 1 : 0;
            goto L_0800A49C;
    }
    goto skip_3;
    // 0x0800A44C: slti        $at, $v1, 0xF
    ctx->r1 = SIGNED(ctx->r3) < 0XF ? 1 : 0;
    skip_3:
    // 0x0800A450: lhu         $t8, 0x14($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X14);
    // 0x0800A454: lhu         $t2, 0x18($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X18);
    // 0x0800A458: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x0800A45C: addiu       $t0, $t8, -0x5
    ctx->r8 = ADD32(ctx->r24, -0X5);
    // 0x0800A460: addiu       $t3, $t2, 0x5
    ctx->r11 = ADD32(ctx->r10, 0X5);
    // 0x0800A464: andi        $t1, $t0, 0x3FF
    ctx->r9 = ctx->r8 & 0X3FF;
    // 0x0800A468: andi        $t9, $t3, 0x3FF
    ctx->r25 = ctx->r11 & 0X3FF;
    // 0x0800A46C: sh          $t1, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r9;
    // 0x0800A470: sh          $t9, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r25;
    // 0x0800A474: lw          $t4, -0x3A38($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X3A38);
    // 0x0800A478: lui         $v1, 0x4
    ctx->r3 = S32(0X4 << 16);
    // 0x0800A47C: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x0800A480: addu        $v1, $v1, $t4
    ctx->r3 = ADD32(ctx->r3, ctx->r12);
    // 0x0800A484: lhu         $v1, -0x5232($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X5232);
    // 0x0800A488: div         $zero, $v1, $at
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r1)));
    // 0x0800A48C: mfhi        $v1
    ctx->r3 = hi;
    // 0x0800A490: nop

    // 0x0800A494: nop

    // 0x0800A498: slti        $at, $v1, 0xF
    ctx->r1 = SIGNED(ctx->r3) < 0XF ? 1 : 0;
L_0800A49C:
    // 0x0800A49C: beql        $at, $zero, L_0800A4F0
    if (ctx->r1 == 0) {
        // 0x0800A4A0: slti        $at, $v1, 0x14
        ctx->r1 = SIGNED(ctx->r3) < 0X14 ? 1 : 0;
            goto L_0800A4F0;
    }
    goto skip_4;
    // 0x0800A4A0: slti        $at, $v1, 0x14
    ctx->r1 = SIGNED(ctx->r3) < 0X14 ? 1 : 0;
    skip_4:
    // 0x0800A4A4: lhu         $t6, 0x14($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X14);
    // 0x0800A4A8: lhu         $t0, 0x18($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X18);
    // 0x0800A4AC: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x0800A4B0: addiu       $t7, $t6, 0x5
    ctx->r15 = ADD32(ctx->r14, 0X5);
    // 0x0800A4B4: addiu       $t1, $t0, -0x5
    ctx->r9 = ADD32(ctx->r8, -0X5);
    // 0x0800A4B8: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x0800A4BC: andi        $t2, $t1, 0x3FF
    ctx->r10 = ctx->r9 & 0X3FF;
    // 0x0800A4C0: sh          $t8, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r24;
    // 0x0800A4C4: sh          $t2, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r10;
    // 0x0800A4C8: lw          $t3, -0x3A38($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X3A38);
    // 0x0800A4CC: lui         $v1, 0x4
    ctx->r3 = S32(0X4 << 16);
    // 0x0800A4D0: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x0800A4D4: addu        $v1, $v1, $t3
    ctx->r3 = ADD32(ctx->r3, ctx->r11);
    // 0x0800A4D8: lhu         $v1, -0x5232($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X5232);
    // 0x0800A4DC: div         $zero, $v1, $at
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r1)));
    // 0x0800A4E0: mfhi        $v1
    ctx->r3 = hi;
    // 0x0800A4E4: nop

    // 0x0800A4E8: nop

    // 0x0800A4EC: slti        $at, $v1, 0x14
    ctx->r1 = SIGNED(ctx->r3) < 0X14 ? 1 : 0;
L_0800A4F0:
    // 0x0800A4F0: beql        $at, $zero, L_0800A51C
    if (ctx->r1 == 0) {
        // 0x0800A4F4: lw          $t1, 0xE8($s0)
        ctx->r9 = MEM_W(ctx->r16, 0XE8);
            goto L_0800A51C;
    }
    goto skip_5;
    // 0x0800A4F4: lw          $t1, 0xE8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XE8);
    skip_5:
    // 0x0800A4F8: lhu         $t4, 0x14($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X14);
    // 0x0800A4FC: lhu         $t7, 0x18($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X18);
    // 0x0800A500: addiu       $t5, $t4, -0x5
    ctx->r13 = ADD32(ctx->r12, -0X5);
    // 0x0800A504: addiu       $t8, $t7, 0x5
    ctx->r24 = ADD32(ctx->r15, 0X5);
    // 0x0800A508: andi        $t6, $t5, 0x3FF
    ctx->r14 = ctx->r13 & 0X3FF;
    // 0x0800A50C: andi        $t0, $t8, 0x3FF
    ctx->r8 = ctx->r24 & 0X3FF;
    // 0x0800A510: sh          $t6, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r14;
    // 0x0800A514: sh          $t0, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r8;
L_0800A518:
    // 0x0800A518: lw          $t1, 0xE8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XE8);
L_0800A51C:
    // 0x0800A51C: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x0800A520: sll         $t2, $t1, 8
    ctx->r10 = S32(ctx->r9 << 8);
    // 0x0800A524: bgezl       $t2, L_0800A5A8
    if (SIGNED(ctx->r10) >= 0) {
        // 0x0800A528: lw          $t6, 0xE8($s0)
        ctx->r14 = MEM_W(ctx->r16, 0XE8);
            goto L_0800A5A8;
    }
    goto skip_6;
    // 0x0800A528: lw          $t6, 0xE8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XE8);
    skip_6:
    // 0x0800A52C: lw          $t3, -0x3A38($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X3A38);
    // 0x0800A530: lui         $t9, 0x4
    ctx->r25 = S32(0X4 << 16);
    // 0x0800A534: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(20, 0X4808) << 16);
    // 0x0800A538: addu        $t9, $t9, $t3
    ctx->r25 = ADD32(ctx->r25, ctx->r11);
    // 0x0800A53C: lhu         $t9, -0x5232($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X5232);
    // 0x0800A540: addiu       $a1, $a1, 0x4808
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(20, 0X4808));
    // 0x0800A544: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800A548: andi        $t4, $t9, 0x3
    ctx->r12 = ctx->r25 & 0X3;
    // 0x0800A54C: bne         $t4, $zero, L_0800A5A4
    if (ctx->r12 != 0) {
        // 0x0800A550: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_0800A5A4;
    }
    // 0x0800A550: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x0800A554: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0800A558: lui         $at, 0xC1A0
    ctx->r1 = S32(0XC1A0 << 16);
    // 0x0800A55C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x0800A560: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800A564: addiu       $t9, $t9, -0x2218
    ctx->r25 = ADD32(ctx->r25, -0X2218);
    // 0x0800A568: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x0800A56C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x0800A570: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x0800A574: jalr        $t9
    // 0x0800A578: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x0800A578: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_16:
    // 0x0800A57C: beq         $v0, $zero, L_0800A5A4
    if (ctx->r2 == 0) {
        // 0x0800A580: addiu       $t5, $zero, 0x1D
        ctx->r13 = ADD32(0, 0X1D);
            goto L_0800A5A4;
    }
    // 0x0800A580: addiu       $t5, $zero, 0x1D
    ctx->r13 = ADD32(0, 0X1D);
    // 0x0800A584: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800A588: sh          $t5, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r13;
    // 0x0800A58C: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x0800A590: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x0800A594: jalr        $t9
    // 0x0800A598: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x0800A598: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    after_17:
    // 0x0800A59C: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x0800A5A0: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
L_0800A5A4:
    // 0x0800A5A4: lw          $t6, 0xE8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XE8);
L_0800A5A8:
    // 0x0800A5A8: lui         $a1, 0x3ECC
    ctx->r5 = S32(0X3ECC << 16);
    // 0x0800A5AC: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x0800A5B0: sll         $t7, $t6, 7
    ctx->r15 = S32(ctx->r14 << 7);
    // 0x0800A5B4: bgez        $t7, L_0800A5CC
    if (SIGNED(ctx->r15) >= 0) {
        // 0x0800A5B8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_0800A5CC;
    }
    // 0x0800A5B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800A5BC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800A5C0: addiu       $t9, $t9, -0x43FC
    ctx->r25 = ADD32(ctx->r25, -0X43FC);
    // 0x0800A5C4: jalr        $t9
    // 0x0800A5C8: lui         $a2, 0x4180
    ctx->r6 = S32(0X4180 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x0800A5C8: lui         $a2, 0x4180
    ctx->r6 = S32(0X4180 << 16);
    after_18:
L_0800A5CC:
    // 0x0800A5CC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_0800A5D0:
    // 0x0800A5D0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x0800A5D4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x0800A5D8: jr          $ra
    // 0x0800A5DC: nop

    TRACE_RETURN()
    return;
    // 0x0800A5DC: nop

;}
RECOMP_FUNC void func_0800B3B0_6BE650(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800B3B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800B3B4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800B3B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800B3BC: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x0800B3C0: lui         $a2, 0x3DCC
    ctx->r6 = S32(0X3DCC << 16);
    // 0x0800B3C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x0800B3C8: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x0800B3CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800B3D0: jalr        $t9
    // 0x0800B3D4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800B3D4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x0800B3D8: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x0800B3DC: lbu         $t6, 0xD0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0XD0);
    // 0x0800B3E0: addiu       $v0, $v0, 0xD0
    ctx->r2 = ADD32(ctx->r2, 0XD0);
    // 0x0800B3E4: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x0800B3E8: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    // 0x0800B3EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800B3F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800B3F4: jr          $ra
    // 0x0800B3F8: nop

    TRACE_RETURN()
    return;
    // 0x0800B3F8: nop

;}
RECOMP_FUNC void func_080070D8_6BA378(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080070D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080070DC: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC408) << 16);
    // 0x080070E0: lwc1        $f0, -0x3BF8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(20, 0XC408));
    // 0x080070E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080070E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080070EC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080070F0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080070F4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X711C) << 16);
    // 0x080070F8: addiu       $a0, $a0, 0x711C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X711C));
    // 0x080070FC: swc1        $f0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f0.u32l;
    // 0x08007100: swc1        $f0, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f0.u32l;
    // 0x08007104: jalr        $t9
    // 0x08007108: swc1        $f0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08007108: swc1        $f0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f0.u32l;
    after_0:
    // 0x0800710C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08007110: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08007114: jr          $ra
    // 0x08007118: nop

    TRACE_RETURN()
    return;
    // 0x08007118: nop

;}
RECOMP_FUNC void func_08003850_6B6AF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003850: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003854: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003858: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x0800385C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08003860: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08003864: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x08003868: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800386C: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08003870: bne         $v0, $zero, L_080038A8
    if (ctx->r2 != 0) {
        // 0x08003874: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_080038A8;
    }
    // 0x08003874: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08003878: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x0800387C: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    // 0x08003880: jalr        $t9
    // 0x08003884: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003884: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x08003888: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x0800388C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003890: addiu       $t7, $zero, 0x1E
    ctx->r15 = ADD32(0, 0X1E);
    // 0x08003894: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003898: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X38B8) << 16);
    // 0x0800389C: addiu       $a0, $a0, 0x38B8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X38B8));
    // 0x080038A0: jalr        $t9
    // 0x080038A4: sh          $t7, 0x8A($a1)
    MEM_H(0X8A, ctx->r5) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080038A4: sh          $t7, 0x8A($a1)
    MEM_H(0X8A, ctx->r5) = ctx->r15;
    after_1:
L_080038A8:
    // 0x080038A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080038AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080038B0: jr          $ra
    // 0x080038B4: nop

    TRACE_RETURN()
    return;
    // 0x080038B4: nop

;}
RECOMP_FUNC void func_08004000_6B72A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004000: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x08004004: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x08004008: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x0800400C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x08004010: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x08004014: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x08004018: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x0800401C: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08004020: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x08004024: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x08004028: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x0800402C: bne         $v0, $zero, L_080044D0
    if (ctx->r2 != 0) {
        // 0x08004030: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_080044D0;
    }
    // 0x08004030: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08004034: andi        $t7, $zero, 0xFFFF
    ctx->r15 = 0 & 0XFFFF;
    // 0x08004038: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x0800403C: sh          $zero, 0x18($a1)
    MEM_H(0X18, ctx->r5) = 0;
    // 0x08004040: bgez        $t7, L_08004058
    if (SIGNED(ctx->r15) >= 0) {
        // 0x08004044: cvt.s.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
            goto L_08004058;
    }
    // 0x08004044: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08004048: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x0800404C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08004050: nop

    // 0x08004054: add.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
L_08004058:
    // 0x08004058: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800405C: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x08004060: swc1        $f0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f0.u32l;
    // 0x08004064: swc1        $f0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f0.u32l;
    // 0x08004068: jalr        $t9
    // 0x0800406C: addiu       $a0, $zero, 0x175
    ctx->r4 = ADD32(0, 0X175);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800406C: addiu       $a0, $zero, 0x175
    ctx->r4 = ADD32(0, 0X175);
    after_0:
    // 0x08004070: lw          $t8, 0x60($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X60);
    // 0x08004074: lui         $at, 0x80
    ctx->r1 = S32(0X80 << 16);
    // 0x08004078: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800407C: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08004080: or          $t0, $t8, $at
    ctx->r8 = ctx->r24 | ctx->r1;
    // 0x08004084: sw          $t0, 0x60($s2)
    MEM_W(0X60, ctx->r18) = ctx->r8;
    // 0x08004088: jalr        $t9
    // 0x0800408C: addiu       $a0, $zero, 0x17A
    ctx->r4 = ADD32(0, 0X17A);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800408C: addiu       $a0, $zero, 0x17A
    ctx->r4 = ADD32(0, 0X17A);
    after_1:
    // 0x08004090: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08004094: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x08004098: addiu       $v0, $v0, 0x71A8
    ctx->r2 = ADD32(ctx->r2, 0X71A8);
    // 0x0800409C: addiu       $a1, $a1, 0x2088
    ctx->r5 = ADD32(ctx->r5, 0X2088);
    // 0x080040A0: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x080040A4: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x080040A8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x080040AC: jalr        $v0
    // 0x080040B0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x080040B0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x080040B4: beq         $v0, $zero, L_08004138
    if (ctx->r2 == 0) {
        // 0x080040B8: lui         $at, 0xC1A0
        ctx->r1 = S32(0XC1A0 << 16);
            goto L_08004138;
    }
    // 0x080040B8: lui         $at, 0xC1A0
    ctx->r1 = S32(0XC1A0 << 16);
    // 0x080040BC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080040C0: lui         $at, 0xC343
    ctx->r1 = S32(0XC343 << 16);
    // 0x080040C4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x080040C8: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x080040CC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x080040D0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080040D4: addiu       $t9, $t9, -0x6D4C
    ctx->r25 = ADD32(ctx->r25, -0X6D4C);
    // 0x080040D8: swc1        $f8, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f8.u32l;
    // 0x080040DC: swc1        $f10, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f10.u32l;
    // 0x080040E0: swc1        $f16, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f16.u32l;
    // 0x080040E4: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x080040E8: jalr        $t9
    // 0x080040EC: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080040EC: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_3:
    // 0x080040F0: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x080040F4: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x080040F8: mtc1        $at, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r1;
    // 0x080040FC: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x08004100: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x08004104: lui         $at, 0x4008
    ctx->r1 = S32(0X4008 << 16);
    // 0x08004108: mtc1        $at, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r1;
    // 0x0800410C: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x08004110: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004114: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08004118: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x0800411C: div.d       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f20.d); 
    ctx->f8.d = DIV_D(ctx->f6.d, ctx->f20.d);
    // 0x08004120: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x08004124: add.d       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f22.d); 
    ctx->f10.d = ctx->f8.d + ctx->f22.d;
    // 0x08004128: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x0800412C: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x08004130: jalr        $t9
    // 0x08004134: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08004134: nop

    after_4:
L_08004138:
    // 0x08004138: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x0800413C: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x08004140: mtc1        $at, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r1;
    // 0x08004144: lui         $at, 0x4008
    ctx->r1 = S32(0X4008 << 16);
    // 0x08004148: mtc1        $at, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r1;
    // 0x0800414C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x08004150: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x08004154: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x08004158: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x0800415C: jalr        $t9
    // 0x08004160: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08004160: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x08004164: beq         $v0, $zero, L_080041CC
    if (ctx->r2 == 0) {
        // 0x08004168: lui         $at, 0xC343
        ctx->r1 = S32(0XC343 << 16);
            goto L_080041CC;
    }
    // 0x08004168: lui         $at, 0xC343
    ctx->r1 = S32(0XC343 << 16);
    // 0x0800416C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08004170: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x08004174: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08004178: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x0800417C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004180: addiu       $t9, $t9, -0x6D4C
    ctx->r25 = ADD32(ctx->r25, -0X6D4C);
    // 0x08004184: lui         $s0, 0x8022
    ctx->r16 = S32(0X8022 << 16);
    // 0x08004188: swc1        $f4, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f4.u32l;
    // 0x0800418C: swc1        $f6, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f6.u32l;
    // 0x08004190: swc1        $f18, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f18.u32l;
    // 0x08004194: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x08004198: addiu       $s0, $s0, -0x61F8
    ctx->r16 = ADD32(ctx->r16, -0X61F8);
    // 0x0800419C: jalr        $t9
    // 0x080041A0: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080041A0: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_6:
    // 0x080041A4: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x080041A8: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x080041AC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x080041B0: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x080041B4: div.d       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f20.d); 
    ctx->f18.d = DIV_D(ctx->f16.d, ctx->f20.d);
    // 0x080041B8: add.d       $f4, $f18, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f22.d); 
    ctx->f4.d = ctx->f18.d + ctx->f22.d;
    // 0x080041BC: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x080041C0: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x080041C4: jalr        $s0
    // 0x080041C8: nop

    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_7;
    // 0x080041C8: nop

    after_7:
L_080041CC:
    // 0x080041CC: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x080041D0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x080041D4: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x080041D8: jalr        $t9
    // 0x080041DC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x080041DC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
    // 0x080041E0: beq         $v0, $zero, L_08004244
    if (ctx->r2 == 0) {
        // 0x080041E4: lui         $at, 0x41A0
        ctx->r1 = S32(0X41A0 << 16);
            goto L_08004244;
    }
    // 0x080041E4: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x080041E8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x080041EC: lui         $at, 0xC343
    ctx->r1 = S32(0XC343 << 16);
    // 0x080041F0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080041F4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080041F8: addiu       $t9, $t9, -0x6D4C
    ctx->r25 = ADD32(ctx->r25, -0X6D4C);
    // 0x080041FC: lui         $s0, 0x8022
    ctx->r16 = S32(0X8022 << 16);
    // 0x08004200: swc1        $f0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f0.u32l;
    // 0x08004204: swc1        $f0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f0.u32l;
    // 0x08004208: swc1        $f8, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f8.u32l;
    // 0x0800420C: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x08004210: addiu       $s0, $s0, -0x61F8
    ctx->r16 = ADD32(ctx->r16, -0X61F8);
    // 0x08004214: jalr        $t9
    // 0x08004218: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08004218: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_9:
    // 0x0800421C: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x08004220: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x08004224: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x08004228: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x0800422C: div.d       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f20.d); 
    ctx->f4.d = DIV_D(ctx->f18.d, ctx->f20.d);
    // 0x08004230: add.d       $f6, $f4, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f22.d); 
    ctx->f6.d = ctx->f4.d + ctx->f22.d;
    // 0x08004234: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x08004238: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x0800423C: jalr        $s0
    // 0x08004240: nop

    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_10;
    // 0x08004240: nop

    after_10:
L_08004244:
    // 0x08004244: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x08004248: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x0800424C: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x08004250: jalr        $t9
    // 0x08004254: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08004254: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_11:
    // 0x08004258: beq         $v0, $zero, L_080042C0
    if (ctx->r2 == 0) {
        // 0x0800425C: lui         $at, 0xC1A0
        ctx->r1 = S32(0XC1A0 << 16);
            goto L_080042C0;
    }
    // 0x0800425C: lui         $at, 0xC1A0
    ctx->r1 = S32(0XC1A0 << 16);
    // 0x08004260: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08004264: lui         $at, 0xC343
    ctx->r1 = S32(0XC343 << 16);
    // 0x08004268: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x0800426C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x08004270: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004274: addiu       $t9, $t9, -0x6D4C
    ctx->r25 = ADD32(ctx->r25, -0X6D4C);
    // 0x08004278: lui         $s0, 0x8022
    ctx->r16 = S32(0X8022 << 16);
    // 0x0800427C: swc1        $f10, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f10.u32l;
    // 0x08004280: swc1        $f16, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f16.u32l;
    // 0x08004284: swc1        $f18, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f18.u32l;
    // 0x08004288: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x0800428C: addiu       $s0, $s0, -0x61F8
    ctx->r16 = ADD32(ctx->r16, -0X61F8);
    // 0x08004290: jalr        $t9
    // 0x08004294: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x08004294: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_12:
    // 0x08004298: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x0800429C: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x080042A0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x080042A4: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x080042A8: div.d       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f20.d); 
    ctx->f10.d = DIV_D(ctx->f8.d, ctx->f20.d);
    // 0x080042AC: add.d       $f16, $f10, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f22.d); 
    ctx->f16.d = ctx->f10.d + ctx->f22.d;
    // 0x080042B0: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x080042B4: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x080042B8: jalr        $s0
    // 0x080042BC: nop

    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_13;
    // 0x080042BC: nop

    after_13:
L_080042C0:
    // 0x080042C0: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x080042C4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x080042C8: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x080042CC: jalr        $t9
    // 0x080042D0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x080042D0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_14:
    // 0x080042D4: beq         $v0, $zero, L_0800433C
    if (ctx->r2 == 0) {
        // 0x080042D8: lui         $at, 0x41A0
        ctx->r1 = S32(0X41A0 << 16);
            goto L_0800433C;
    }
    // 0x080042D8: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x080042DC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080042E0: lui         $at, 0xC343
    ctx->r1 = S32(0XC343 << 16);
    // 0x080042E4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080042E8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x080042EC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080042F0: addiu       $t9, $t9, -0x6D4C
    ctx->r25 = ADD32(ctx->r25, -0X6D4C);
    // 0x080042F4: lui         $s0, 0x8022
    ctx->r16 = S32(0X8022 << 16);
    // 0x080042F8: swc1        $f4, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f4.u32l;
    // 0x080042FC: swc1        $f6, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f6.u32l;
    // 0x08004300: swc1        $f8, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f8.u32l;
    // 0x08004304: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x08004308: addiu       $s0, $s0, -0x61F8
    ctx->r16 = ADD32(ctx->r16, -0X61F8);
    // 0x0800430C: jalr        $t9
    // 0x08004310: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x08004310: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_15:
    // 0x08004314: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x08004318: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x0800431C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x08004320: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x08004324: div.d       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f20.d); 
    ctx->f4.d = DIV_D(ctx->f18.d, ctx->f20.d);
    // 0x08004328: add.d       $f6, $f4, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f22.d); 
    ctx->f6.d = ctx->f4.d + ctx->f22.d;
    // 0x0800432C: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x08004330: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x08004334: jalr        $s0
    // 0x08004338: nop

    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_16;
    // 0x08004338: nop

    after_16:
L_0800433C:
    // 0x0800433C: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x08004340: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x08004344: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x08004348: jalr        $t9
    // 0x0800434C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x0800434C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_17:
    // 0x08004350: beq         $v0, $zero, L_080043B4
    if (ctx->r2 == 0) {
        // 0x08004354: lui         $at, 0xC1A0
        ctx->r1 = S32(0XC1A0 << 16);
            goto L_080043B4;
    }
    // 0x08004354: lui         $at, 0xC1A0
    ctx->r1 = S32(0XC1A0 << 16);
    // 0x08004358: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x0800435C: lui         $at, 0xC343
    ctx->r1 = S32(0XC343 << 16);
    // 0x08004360: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08004364: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004368: addiu       $t9, $t9, -0x6D4C
    ctx->r25 = ADD32(ctx->r25, -0X6D4C);
    // 0x0800436C: lui         $s0, 0x8022
    ctx->r16 = S32(0X8022 << 16);
    // 0x08004370: swc1        $f0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f0.u32l;
    // 0x08004374: swc1        $f0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f0.u32l;
    // 0x08004378: swc1        $f10, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f10.u32l;
    // 0x0800437C: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x08004380: addiu       $s0, $s0, -0x61F8
    ctx->r16 = ADD32(ctx->r16, -0X61F8);
    // 0x08004384: jalr        $t9
    // 0x08004388: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x08004388: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_18:
    // 0x0800438C: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x08004390: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x08004394: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x08004398: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x0800439C: div.d       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f20.d); 
    ctx->f6.d = DIV_D(ctx->f4.d, ctx->f20.d);
    // 0x080043A0: add.d       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f22.d); 
    ctx->f8.d = ctx->f6.d + ctx->f22.d;
    // 0x080043A4: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x080043A8: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x080043AC: jalr        $s0
    // 0x080043B0: nop

    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_19;
    // 0x080043B0: nop

    after_19:
L_080043B4:
    // 0x080043B4: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x080043B8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x080043BC: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x080043C0: jalr        $t9
    // 0x080043C4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_20;
    // 0x080043C4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_20:
    // 0x080043C8: beq         $v0, $zero, L_08004430
    if (ctx->r2 == 0) {
        // 0x080043CC: lui         $at, 0xC343
        ctx->r1 = S32(0XC343 << 16);
            goto L_08004430;
    }
    // 0x080043CC: lui         $at, 0xC343
    ctx->r1 = S32(0XC343 << 16);
    // 0x080043D0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x080043D4: lui         $at, 0xC1A0
    ctx->r1 = S32(0XC1A0 << 16);
    // 0x080043D8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080043DC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x080043E0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080043E4: addiu       $t9, $t9, -0x6D4C
    ctx->r25 = ADD32(ctx->r25, -0X6D4C);
    // 0x080043E8: lui         $s0, 0x8022
    ctx->r16 = S32(0X8022 << 16);
    // 0x080043EC: swc1        $f18, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f18.u32l;
    // 0x080043F0: swc1        $f4, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f4.u32l;
    // 0x080043F4: swc1        $f16, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f16.u32l;
    // 0x080043F8: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x080043FC: addiu       $s0, $s0, -0x61F8
    ctx->r16 = ADD32(ctx->r16, -0X61F8);
    // 0x08004400: jalr        $t9
    // 0x08004404: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_21;
    // 0x08004404: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_21:
    // 0x08004408: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x0800440C: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x08004410: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x08004414: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x08004418: div.d       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f20.d); 
    ctx->f16.d = DIV_D(ctx->f10.d, ctx->f20.d);
    // 0x0800441C: add.d       $f18, $f16, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f22.d); 
    ctx->f18.d = ctx->f16.d + ctx->f22.d;
    // 0x08004420: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x08004424: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x08004428: jalr        $s0
    // 0x0800442C: nop

    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_22;
    // 0x0800442C: nop

    after_22:
L_08004430:
    // 0x08004430: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x08004434: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x08004438: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x0800443C: jalr        $t9
    // 0x08004440: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_23;
    // 0x08004440: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_23:
    // 0x08004444: beq         $v0, $zero, L_080044B0
    if (ctx->r2 == 0) {
        // 0x08004448: lui         $at, 0x41A0
        ctx->r1 = S32(0X41A0 << 16);
            goto L_080044B0;
    }
    // 0x08004448: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x0800444C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08004450: lui         $at, 0xC343
    ctx->r1 = S32(0XC343 << 16);
    // 0x08004454: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08004458: lui         $at, 0xC1A0
    ctx->r1 = S32(0XC1A0 << 16);
    // 0x0800445C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08004460: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004464: addiu       $t9, $t9, -0x6D4C
    ctx->r25 = ADD32(ctx->r25, -0X6D4C);
    // 0x08004468: lui         $s0, 0x8022
    ctx->r16 = S32(0X8022 << 16);
    // 0x0800446C: swc1        $f6, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f6.u32l;
    // 0x08004470: swc1        $f8, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f8.u32l;
    // 0x08004474: swc1        $f10, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f10.u32l;
    // 0x08004478: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x0800447C: addiu       $s0, $s0, -0x61F8
    ctx->r16 = ADD32(ctx->r16, -0X61F8);
    // 0x08004480: jalr        $t9
    // 0x08004484: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_24;
    // 0x08004484: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_24:
    // 0x08004488: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x0800448C: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x08004490: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x08004494: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x08004498: div.d       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f20.d); 
    ctx->f6.d = DIV_D(ctx->f4.d, ctx->f20.d);
    // 0x0800449C: add.d       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f22.d); 
    ctx->f8.d = ctx->f6.d + ctx->f22.d;
    // 0x080044A0: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x080044A4: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x080044A8: jalr        $s0
    // 0x080044AC: nop

    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_25;
    // 0x080044AC: nop

    after_25:
L_080044B0:
    // 0x080044B0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x080044B4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x080044B8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080044BC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080044C0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X44F0) << 16);
    // 0x080044C4: addiu       $a0, $a0, 0x44F0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X44F0));
    // 0x080044C8: jalr        $t9
    // 0x080044CC: swc1        $f16, 0x7C($s2)
    MEM_W(0X7C, ctx->r18) = ctx->f16.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_26;
    // 0x080044CC: swc1        $f16, 0x7C($s2)
    MEM_W(0X7C, ctx->r18) = ctx->f16.u32l;
    after_26:
L_080044D0:
    // 0x080044D0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x080044D4: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x080044D8: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x080044DC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x080044E0: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x080044E4: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x080044E8: jr          $ra
    // 0x080044EC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x080044EC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_0800257C_6B581C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800257C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x08002580: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x08002584: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002588: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x0800258C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x08002590: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x08002594: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x08002598: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x0800259C: jalr        $t9
    // 0x080025A0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080025A0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_0:
    // 0x080025A4: lbu         $t6, 0x7C($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X7C);
    // 0x080025A8: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x080025AC: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x080025B0: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x080025B4: beq         $t7, $zero, L_080027D0
    if (ctx->r15 == 0) {
        // 0x080025B8: addiu       $a0, $zero, 0x261
        ctx->r4 = ADD32(0, 0X261);
            goto L_080027D0;
    }
    // 0x080025B8: addiu       $a0, $zero, 0x261
    ctx->r4 = ADD32(0, 0X261);
    // 0x080025BC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080025C0: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x080025C4: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x080025C8: jalr        $t9
    // 0x080025CC: lui         $a3, 0x43A5
    ctx->r7 = S32(0X43A5 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080025CC: lui         $a3, 0x43A5
    ctx->r7 = S32(0X43A5 << 16);
    after_1:
    // 0x080025D0: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x080025D4: lbu         $t8, -0x324A($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X324A);
    // 0x080025D8: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
    // 0x080025DC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080025E0: bne         $t8, $at, L_080026CC
    if (ctx->r24 != ctx->r1) {
        // 0x080025E4: lui         $a1, 0x800
        ctx->r5 = S32(RELOC_HI16(20, 0X49A4) << 16);
            goto L_080026CC;
    }
    // 0x080025E4: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(20, 0X49A4) << 16);
    // 0x080025E8: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x080025EC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080025F0: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x080025F4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080025F8: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(20, 0X49A4) << 16);
    // 0x080025FC: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x08002600: addiu       $v0, $v0, -0x2218
    ctx->r2 = ADD32(ctx->r2, -0X2218);
    // 0x08002604: addiu       $a1, $a1, 0x49A4
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(20, 0X49A4));
    // 0x08002608: sw          $a1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r5;
    // 0x0800260C: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x08002610: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08002614: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x08002618: lui         $a3, 0xC1F0
    ctx->r7 = S32(0XC1F0 << 16);
    // 0x0800261C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x08002620: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x08002624: jalr        $v0
    // 0x08002628: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x08002628: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x0800262C: beq         $v0, $zero, L_08002660
    if (ctx->r2 == 0) {
        // 0x08002630: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08002660;
    }
    // 0x08002630: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08002634: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002638: addiu       $t0, $zero, 0x1D
    ctx->r8 = ADD32(0, 0X1D);
    // 0x0800263C: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08002640: sh          $t0, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r8;
    // 0x08002644: jalr        $t9
    // 0x08002648: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002648: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    after_3:
    // 0x0800264C: lw          $t1, 0xE8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XE8);
    // 0x08002650: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x08002654: sw          $s1, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r17;
    // 0x08002658: ori         $t2, $t1, 0x1
    ctx->r10 = ctx->r9 | 0X1;
    // 0x0800265C: sw          $t2, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r10;
L_08002660:
    // 0x08002660: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x08002664: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08002668: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x0800266C: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x08002670: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08002674: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08002678: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x0800267C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x08002680: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    // 0x08002684: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x08002688: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x0800268C: jalr        $t9
    // 0x08002690: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08002690: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_4:
    // 0x08002694: beq         $v0, $zero, L_0800279C
    if (ctx->r2 == 0) {
        // 0x08002698: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_0800279C;
    }
    // 0x08002698: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x0800269C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080026A0: addiu       $t3, $zero, 0x1D
    ctx->r11 = ADD32(0, 0X1D);
    // 0x080026A4: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080026A8: sh          $t3, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r11;
    // 0x080026AC: jalr        $t9
    // 0x080026B0: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080026B0: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    after_5:
    // 0x080026B4: lw          $t4, 0xE8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XE8);
    // 0x080026B8: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x080026BC: sw          $s1, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r17;
    // 0x080026C0: ori         $t5, $t4, 0x41
    ctx->r13 = ctx->r12 | 0X41;
    // 0x080026C4: b           L_0800279C
    // 0x080026C8: sw          $t5, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r13;
        goto L_0800279C;
    // 0x080026C8: sw          $t5, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r13;
L_080026CC:
    // 0x080026CC: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x080026D0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x080026D4: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x080026D8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x080026DC: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x080026E0: addiu       $v0, $v0, -0x2218
    ctx->r2 = ADD32(ctx->r2, -0X2218);
    // 0x080026E4: addiu       $a1, $a1, 0x49A4
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(20, 0X49A4));
    // 0x080026E8: sw          $a1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r5;
    // 0x080026EC: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x080026F0: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x080026F4: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    // 0x080026F8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x080026FC: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x08002700: jalr        $v0
    // 0x08002704: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_6;
    // 0x08002704: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_6:
    // 0x08002708: beq         $v0, $zero, L_08002738
    if (ctx->r2 == 0) {
        // 0x0800270C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08002738;
    }
    // 0x0800270C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08002710: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002714: addiu       $t6, $zero, 0x1D
    ctx->r14 = ADD32(0, 0X1D);
    // 0x08002718: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x0800271C: sh          $t6, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r14;
    // 0x08002720: jalr        $t9
    // 0x08002724: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08002724: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    after_7:
    // 0x08002728: lw          $t7, 0xE8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XE8);
    // 0x0800272C: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x08002730: ori         $t8, $t7, 0x4
    ctx->r24 = ctx->r15 | 0X4;
    // 0x08002734: sw          $t8, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r24;
L_08002738:
    // 0x08002738: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x0800273C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08002740: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x08002744: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x08002748: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x0800274C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08002750: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x08002754: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x08002758: lui         $a3, 0xC1F0
    ctx->r7 = S32(0XC1F0 << 16);
    // 0x0800275C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x08002760: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x08002764: jalr        $t9
    // 0x08002768: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08002768: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_8:
    // 0x0800276C: beq         $v0, $zero, L_0800279C
    if (ctx->r2 == 0) {
        // 0x08002770: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_0800279C;
    }
    // 0x08002770: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08002774: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002778: addiu       $t0, $zero, 0x1D
    ctx->r8 = ADD32(0, 0X1D);
    // 0x0800277C: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08002780: sh          $t0, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r8;
    // 0x08002784: jalr        $t9
    // 0x08002788: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08002788: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    after_9:
    // 0x0800278C: lw          $t1, 0xE8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XE8);
    // 0x08002790: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x08002794: ori         $t2, $t1, 0x44
    ctx->r10 = ctx->r9 | 0X44;
    // 0x08002798: sw          $t2, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r10;
L_0800279C:
    // 0x0800279C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080027A0: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080027A4: lui         $a2, 0x3F55
    ctx->r6 = S32(0X3F55 << 16);
    // 0x080027A8: ori         $a2, $a2, 0x5555
    ctx->r6 = ctx->r6 | 0X5555;
    // 0x080027AC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080027B0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x080027B4: jalr        $t9
    // 0x080027B8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x080027B8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_10:
    // 0x080027BC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080027C0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080027C4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X27E4) << 16);
    // 0x080027C8: jalr        $t9
    // 0x080027CC: addiu       $a0, $a0, 0x27E4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X27E4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x080027CC: addiu       $a0, $a0, 0x27E4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X27E4));
    after_11:
L_080027D0:
    // 0x080027D0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x080027D4: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x080027D8: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x080027DC: jr          $ra
    // 0x080027E0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x080027E0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_08003A44_6B6CE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003A44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003A48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003A4C: lwc1        $f4, 0x1C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x08003A50: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC398) << 16);
    // 0x08003A54: ldc1        $f0, -0x3C68($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(20, 0XC398));
    // 0x08003A58: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08003A5C: lwc1        $f16, 0x20($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X20);
    // 0x08003A60: sub.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = ctx->f6.d - ctx->f0.d;
    // 0x08003A64: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x08003A68: addiu       $at, $zero, -0x202
    ctx->r1 = ADD32(0, -0X202);
    // 0x08003A6C: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x08003A70: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08003A74: lwc1        $f8, 0x24($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X24);
    // 0x08003A78: sub.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = ctx->f18.d - ctx->f0.d;
    // 0x08003A7C: swc1        $f10, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f10.u32l;
    // 0x08003A80: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x08003A84: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08003A88: lwc1        $f4, 0x1C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x08003A8C: sub.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = ctx->f10.d - ctx->f0.d;
    // 0x08003A90: swc1        $f6, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f6.u32l;
    // 0x08003A94: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x08003A98: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08003A9C: bc1t        L_08003AF0
    if (c1cs) {
        // 0x08003AA0: swc1        $f18, 0x24($a1)
        MEM_W(0X24, ctx->r5) = ctx->f18.u32l;
            goto L_08003AF0;
    }
    // 0x08003AA0: swc1        $f18, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f18.u32l;
    // 0x08003AA4: swc1        $f2, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f2.u32l;
    // 0x08003AA8: swc1        $f2, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f2.u32l;
    // 0x08003AAC: swc1        $f2, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f2.u32l;
    // 0x08003AB0: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x08003AB4: lw          $t8, 0xE8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XE8);
    // 0x08003AB8: swc1        $f2, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f2.u32l;
    // 0x08003ABC: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x08003AC0: lui         $at, 0xFE7F
    ctx->r1 = S32(0XFE7F << 16);
    // 0x08003AC4: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x08003AC8: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x08003ACC: sw          $t9, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->r25;
    // 0x08003AD0: swc1        $f2, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f2.u32l;
    // 0x08003AD4: swc1        $f2, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f2.u32l;
    // 0x08003AD8: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x08003ADC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003AE0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003AE4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X3B0C) << 16);
    // 0x08003AE8: jalr        $t9
    // 0x08003AEC: addiu       $a0, $a0, 0x3B0C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X3B0C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003AEC: addiu       $a0, $a0, 0x3B0C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X3B0C));
    after_0:
L_08003AF0:
    // 0x08003AF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08003AF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08003AF8: jr          $ra
    // 0x08003AFC: nop

    TRACE_RETURN()
    return;
    // 0x08003AFC: nop

;}
RECOMP_FUNC void func_0800000C_6B32AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800000C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x08000010: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x08000014: lw          $t6, -0x3A1C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A1C);
    // 0x08000018: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x0800001C: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x08000020: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x08000024: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x08000028: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x0800002C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x08000030: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x08000034: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x08000038: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x0800003C: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x08000040: beq         $t6, $zero, L_08000360
    if (ctx->r14 == 0) {
        // 0x08000044: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_08000360;
    }
    // 0x08000044: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x08000048: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x0800004C: lw          $t8, -0x3A38($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3A38);
    // 0x08000050: lui         $t9, 0xD
    ctx->r25 = S32(0XD << 16);
    // 0x08000054: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x08000058: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x0800005C: lw          $t9, -0x718($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X718);
    // 0x08000060: addiu       $a0, $zero, 0x12E
    ctx->r4 = ADD32(0, 0X12E);
    // 0x08000064: sh          $t7, 0x22($t9)
    MEM_H(0X22, ctx->r25) = ctx->r15;
    // 0x08000068: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800006C: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08000070: jalr        $t9
    // 0x08000074: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000074: nop

    after_0:
    // 0x08000078: beq         $v0, $zero, L_080000A0
    if (ctx->r2 == 0) {
        // 0x0800007C: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_080000A0;
    }
    // 0x0800007C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x08000080: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08000084: addiu       $t9, $t9, -0x5C04
    ctx->r25 = ADD32(ctx->r25, -0X5C04);
    // 0x08000088: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x0800008C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x08000090: jalr        $t9
    // 0x08000094: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000094: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_1:
    // 0x08000098: b           L_080000B4
    // 0x0800009C: nop

        goto L_080000B4;
    // 0x0800009C: nop

L_080000A0:
    // 0x080000A0: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x080000A4: addiu       $t9, $t9, -0x5C04
    ctx->r25 = ADD32(ctx->r25, -0X5C04);
    // 0x080000A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080000AC: jalr        $t9
    // 0x080000B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080000B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_080000B4:
    // 0x080000B4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080000B8: addiu       $t9, $t9, -0x7184
    ctx->r25 = ADD32(ctx->r25, -0X7184);
    // 0x080000BC: lw          $s0, 0x68($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X68);
    // 0x080000C0: jalr        $t9
    // 0x080000C4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080000C4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_3:
    // 0x080000C8: lui         $t9, 0x801
    ctx->r25 = S32(RELOC_HI16(20, 0XA228) << 16);
    // 0x080000CC: addiu       $t9, $t9, -0x5DD8
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(20, 0XA228));
    // 0x080000D0: jalr        $t9
    // 0x080000D4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080000D4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_4:
    // 0x080000D8: lw          $t0, 0x18($s5)
    ctx->r8 = MEM_W(ctx->r21, 0X18);
    // 0x080000DC: andi        $t1, $s0, 0x1
    ctx->r9 = ctx->r16 & 0X1;
    // 0x080000E0: beql        $t0, $zero, L_08000364
    if (ctx->r8 == 0) {
        // 0x080000E4: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_08000364;
    }
    goto skip_0;
    // 0x080000E4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_0:
    // 0x080000E8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x080000EC: lwc1        $f0, 0xDC($s5)
    ctx->f0.u32l = MEM_W(ctx->r21, 0XDC);
    // 0x080000F0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x080000F4: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x080000F8: nop

    // 0x080000FC: bc1t        L_08000114
    if (c1cs) {
        // 0x08000100: nop
    
            goto L_08000114;
    }
    // 0x08000100: nop

    // 0x08000104: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000108: nop

    // 0x0800010C: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x08000110: swc1        $f6, 0xDC($s5)
    MEM_W(0XDC, ctx->r21) = ctx->f6.u32l;
L_08000114:
    // 0x08000114: beql        $t1, $zero, L_0800016C
    if (ctx->r9 == 0) {
        // 0x08000118: lw          $t3, 0x68($s5)
        ctx->r11 = MEM_W(ctx->r21, 0X68);
            goto L_0800016C;
    }
    goto skip_1;
    // 0x08000118: lw          $t3, 0x68($s5)
    ctx->r11 = MEM_W(ctx->r21, 0X68);
    skip_1:
    // 0x0800011C: lwc1        $f8, 0xDC($s5)
    ctx->f8.u32l = MEM_W(ctx->r21, 0XDC);
    // 0x08000120: andi        $t2, $s0, 0x80
    ctx->r10 = ctx->r16 & 0X80;
    // 0x08000124: c.eq.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl == ctx->f8.fl;
    // 0x08000128: nop

    // 0x0800012C: bc1fl       L_0800016C
    if (!c1cs) {
        // 0x08000130: lw          $t3, 0x68($s5)
        ctx->r11 = MEM_W(ctx->r21, 0X68);
            goto L_0800016C;
    }
    goto skip_2;
    // 0x08000130: lw          $t3, 0x68($s5)
    ctx->r11 = MEM_W(ctx->r21, 0X68);
    skip_2:
    // 0x08000134: beq         $t2, $zero, L_08000168
    if (ctx->r10 == 0) {
        // 0x08000138: addiu       $a0, $zero, 0x24F
        ctx->r4 = ADD32(0, 0X24F);
            goto L_08000168;
    }
    // 0x08000138: addiu       $a0, $zero, 0x24F
    ctx->r4 = ADD32(0, 0X24F);
    // 0x0800013C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000140: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08000144: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08000148: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x0800014C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x08000150: jalr        $t9
    // 0x08000154: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000154: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    after_5:
    // 0x08000158: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x0800015C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08000160: nop

    // 0x08000164: swc1        $f10, 0xDC($s5)
    MEM_W(0XDC, ctx->r21) = ctx->f10.u32l;
L_08000168:
    // 0x08000168: lw          $t3, 0x68($s5)
    ctx->r11 = MEM_W(ctx->r21, 0X68);
L_0800016C:
    // 0x0800016C: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x08000170: beql        $t4, $zero, L_08000364
    if (ctx->r12 == 0) {
        // 0x08000174: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_08000364;
    }
    goto skip_3;
    // 0x08000174: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_3:
    // 0x08000178: lbu         $t5, 0x8C($s5)
    ctx->r13 = MEM_BU(ctx->r21, 0X8C);
    // 0x0800017C: addiu       $at, $zero, 0x3B
    ctx->r1 = ADD32(0, 0X3B);
    // 0x08000180: addiu       $a0, $zero, 0x250
    ctx->r4 = ADD32(0, 0X250);
    // 0x08000184: bne         $t5, $at, L_08000240
    if (ctx->r13 != ctx->r1) {
        // 0x08000188: lui         $a1, 0x8021
        ctx->r5 = S32(0X8021 << 16);
            goto L_08000240;
    }
    // 0x08000188: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x0800018C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000190: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08000194: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08000198: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x0800019C: jalr        $t9
    // 0x080001A0: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080001A0: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    after_6:
    // 0x080001A4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x080001A8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x080001AC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x080001B0: lui         $s4, 0x8021
    ctx->r20 = S32(0X8021 << 16);
    // 0x080001B4: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x080001B8: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x080001BC: addiu       $s1, $s1, -0x39F4
    ctx->r17 = ADD32(ctx->r17, -0X39F4);
    // 0x080001C0: addiu       $s4, $s4, 0x7360
    ctx->r20 = ADD32(ctx->r20, 0X7360);
    // 0x080001C4: swc1        $f16, 0xDC($s5)
    MEM_W(0XDC, ctx->r21) = ctx->f16.u32l;
    // 0x080001C8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_080001CC:
    // 0x080001CC: addiu       $a1, $zero, 0x36C
    ctx->r5 = ADD32(0, 0X36C);
    // 0x080001D0: jalr        $s4
    // 0x080001D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_7;
    // 0x080001D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x080001D8: beq         $v0, $zero, L_08000230
    if (ctx->r2 == 0) {
        // 0x080001DC: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08000230;
    }
    // 0x080001DC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x080001E0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080001E4: addiu       $t6, $zero, 0x1D
    ctx->r14 = ADD32(0, 0X1D);
    // 0x080001E8: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080001EC: sh          $t6, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r14;
    // 0x080001F0: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    // 0x080001F4: jalr        $t9
    // 0x080001F8: sll         $s2, $s3, 7
    ctx->r18 = S32(ctx->r19 << 7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x080001F8: sll         $s2, $s3, 7
    ctx->r18 = S32(ctx->r19 << 7);
    after_8:
    // 0x080001FC: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x08000200: sh          $s2, 0x88($s0)
    MEM_H(0X88, ctx->r16) = ctx->r18;
    // 0x08000204: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x08000208: lw          $v1, 0x18($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X18);
    // 0x0800020C: lwc1        $f18, 0x8($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X8);
    // 0x08000210: swc1        $f18, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f18.u32l;
    // 0x08000214: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x08000218: lwc1        $f4, 0xC($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0XC);
    // 0x0800021C: add.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f20.fl;
    // 0x08000220: swc1        $f6, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f6.u32l;
    // 0x08000224: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x08000228: lwc1        $f8, 0x10($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X10);
    // 0x0800022C: swc1        $f8, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f8.u32l;
L_08000230:
    // 0x08000230: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x08000234: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x08000238: bnel        $s3, $at, L_080001CC
    if (ctx->r19 != ctx->r1) {
        // 0x0800023C: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_080001CC;
    }
    goto skip_4;
    // 0x0800023C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    skip_4:
L_08000240:
    // 0x08000240: lw          $v0, 0x38($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X38);
    // 0x08000244: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x08000248: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x0800024C: beq         $v0, $zero, L_08000360
    if (ctx->r2 == 0) {
        // 0x08000250: lui         $t1, 0x8020
        ctx->r9 = S32(0X8020 << 16);
            goto L_08000360;
    }
    // 0x08000250: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x08000254: lw          $t1, -0x39FC($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X39FC);
    // 0x08000258: lw          $s0, 0x18($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X18);
    // 0x0800025C: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x08000260: bnel        $v0, $t1, L_0800035C
    if (ctx->r2 != ctx->r9) {
        // 0x08000264: sw          $zero, 0x38($s5)
        MEM_W(0X38, ctx->r21) = 0;
            goto L_0800035C;
    }
    goto skip_5;
    // 0x08000264: sw          $zero, 0x38($s5)
    MEM_W(0X38, ctx->r21) = 0;
    skip_5:
    // 0x08000268: lw          $t2, -0x3A38($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X3A38);
    // 0x0800026C: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
    // 0x08000270: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x08000274: addu        $v0, $v0, $t2
    ctx->r2 = ADD32(ctx->r2, ctx->r10);
    // 0x08000278: lhu         $v0, -0x5232($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X5232);
    // 0x0800027C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08000280: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08000284: bgez        $v0, L_08000298
    if (SIGNED(ctx->r2) >= 0) {
        // 0x08000288: andi        $t3, $v0, 0x3
        ctx->r11 = ctx->r2 & 0X3;
            goto L_08000298;
    }
    // 0x08000288: andi        $t3, $v0, 0x3
    ctx->r11 = ctx->r2 & 0X3;
    // 0x0800028C: beq         $t3, $zero, L_08000298
    if (ctx->r11 == 0) {
        // 0x08000290: nop
    
            goto L_08000298;
    }
    // 0x08000290: nop

    // 0x08000294: addiu       $t3, $t3, -0x4
    ctx->r11 = ADD32(ctx->r11, -0X4);
L_08000298:
    // 0x08000298: bne         $t3, $zero, L_080002F8
    if (ctx->r11 != 0) {
        // 0x0800029C: or          $v0, $t3, $zero
        ctx->r2 = ctx->r11 | 0;
            goto L_080002F8;
    }
    // 0x0800029C: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
    // 0x080002A0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080002A4: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x080002A8: addiu       $a1, $a1, 0x2088
    ctx->r5 = ADD32(ctx->r5, 0X2088);
    // 0x080002AC: jalr        $t9
    // 0x080002B0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x080002B0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_9:
    // 0x080002B4: beq         $v0, $zero, L_08000358
    if (ctx->r2 == 0) {
        // 0x080002B8: lui         $at, 0x801
        ctx->r1 = S32(RELOC_HI16(20, 0XC2B4) << 16);
            goto L_08000358;
    }
    // 0x080002B8: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC2B4) << 16);
    // 0x080002BC: lwc1        $f0, -0x3D4C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(20, 0XC2B4));
    // 0x080002C0: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x080002C4: addiu       $t4, $zero, 0x2000
    ctx->r12 = ADD32(0, 0X2000);
    // 0x080002C8: sw          $t4, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r12;
    // 0x080002CC: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    // 0x080002D0: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x080002D4: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    // 0x080002D8: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x080002DC: swc1        $f10, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f10.u32l;
    // 0x080002E0: lwc1        $f16, 0xC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XC);
    // 0x080002E4: add.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f20.fl;
    // 0x080002E8: swc1        $f18, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f18.u32l;
    // 0x080002EC: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x080002F0: b           L_08000358
    // 0x080002F4: swc1        $f4, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f4.u32l;
        goto L_08000358;
    // 0x080002F4: swc1        $f4, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f4.u32l;
L_080002F8:
    // 0x080002F8: bne         $v0, $at, L_08000358
    if (ctx->r2 != ctx->r1) {
        // 0x080002FC: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_08000358;
    }
    // 0x080002FC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x08000300: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000304: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08000308: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x0800030C: addiu       $a1, $a1, 0x2088
    ctx->r5 = ADD32(ctx->r5, 0X2088);
    // 0x08000310: jalr        $t9
    // 0x08000314: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08000314: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_10:
    // 0x08000318: beq         $v0, $zero, L_08000358
    if (ctx->r2 == 0) {
        // 0x0800031C: lui         $at, 0x801
        ctx->r1 = S32(RELOC_HI16(20, 0XC2B8) << 16);
            goto L_08000358;
    }
    // 0x0800031C: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC2B8) << 16);
    // 0x08000320: lwc1        $f0, -0x3D48($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(20, 0XC2B8));
    // 0x08000324: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x08000328: addiu       $t5, $zero, 0x800
    ctx->r13 = ADD32(0, 0X800);
    // 0x0800032C: sw          $t5, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r13;
    // 0x08000330: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    // 0x08000334: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x08000338: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    // 0x0800033C: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x08000340: swc1        $f6, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f6.u32l;
    // 0x08000344: lwc1        $f8, 0xC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC);
    // 0x08000348: sub.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f20.fl;
    // 0x0800034C: swc1        $f10, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f10.u32l;
    // 0x08000350: lwc1        $f16, 0x10($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X10);
    // 0x08000354: swc1        $f16, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f16.u32l;
L_08000358:
    // 0x08000358: sw          $zero, 0x38($s5)
    MEM_W(0X38, ctx->r21) = 0;
L_0800035C:
    // 0x0800035C: sw          $zero, 0x34($s5)
    MEM_W(0X34, ctx->r21) = 0;
L_08000360:
    // 0x08000360: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_08000364:
    // 0x08000364: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x08000368: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x0800036C: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x08000370: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x08000374: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x08000378: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x0800037C: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x08000380: jr          $ra
    // 0x08000384: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x08000384: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_080029D8_6B5C78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080029D8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x080029DC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x080029E0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x080029E4: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x080029E8: lbu         $t7, -0x324C($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X324C);
    // 0x080029EC: lhu         $t6, 0x16($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X16);
    // 0x080029F0: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x080029F4: lui         $t3, 0x4
    ctx->r11 = S32(0X4 << 16);
    // 0x080029F8: subu        $t8, $t6, $t7
    ctx->r24 = SUB32(ctx->r14, ctx->r15);
    // 0x080029FC: andi        $t9, $t8, 0x3FF
    ctx->r25 = ctx->r24 & 0X3FF;
    // 0x08002A00: sh          $t9, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r25;
    // 0x08002A04: lw          $t2, -0x3A38($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X3A38);
    // 0x08002A08: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x08002A0C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08002A10: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x08002A14: lhu         $t3, -0x5232($t3)
    ctx->r11 = MEM_HU(ctx->r11, -0X5232);
    // 0x08002A18: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08002A1C: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08002A20: andi        $t4, $t3, 0x7
    ctx->r12 = ctx->r11 & 0X7;
    // 0x08002A24: bne         $t4, $zero, L_08002A44
    if (ctx->r12 != 0) {
        // 0x08002A28: addiu       $a0, $zero, 0x261
        ctx->r4 = ADD32(0, 0X261);
            goto L_08002A44;
    }
    // 0x08002A28: addiu       $a0, $zero, 0x261
    ctx->r4 = ADD32(0, 0X261);
    // 0x08002A2C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002A30: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08002A34: lui         $a3, 0x43A5
    ctx->r7 = S32(0X43A5 << 16);
    // 0x08002A38: jalr        $t9
    // 0x08002A3C: sw          $a2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002A3C: sw          $a2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r6;
    after_0:
    // 0x08002A40: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
L_08002A44:
    // 0x08002A44: lhu         $t5, 0x8A($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X8A);
    // 0x08002A48: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x08002A4C: andi        $v0, $t6, 0xFFFF
    ctx->r2 = ctx->r14 & 0XFFFF;
    // 0x08002A50: slti        $at, $v0, 0x137
    ctx->r1 = SIGNED(ctx->r2) < 0X137 ? 1 : 0;
    // 0x08002A54: beq         $at, $zero, L_08002C38
    if (ctx->r1 == 0) {
        // 0x08002A58: sh          $t6, 0x8A($s0)
        MEM_H(0X8A, ctx->r16) = ctx->r14;
            goto L_08002C38;
    }
    // 0x08002A58: sh          $t6, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r14;
    // 0x08002A5C: andi        $t7, $v0, 0x7
    ctx->r15 = ctx->r2 & 0X7;
    // 0x08002A60: bne         $t7, $zero, L_08002B34
    if (ctx->r15 != 0) {
        // 0x08002A64: addiu       $a0, $zero, 0x261
        ctx->r4 = ADD32(0, 0X261);
            goto L_08002B34;
    }
    // 0x08002A64: addiu       $a0, $zero, 0x261
    ctx->r4 = ADD32(0, 0X261);
    // 0x08002A68: lbu         $v0, 0xD3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD3);
    // 0x08002A6C: lui         $t0, 0x8001
    ctx->r8 = S32(0X8001 << 16);
    // 0x08002A70: addiu       $t0, $t0, -0xBE0
    ctx->r8 = ADD32(ctx->r8, -0XBE0);
    // 0x08002A74: sll         $t1, $v0, 2
    ctx->r9 = S32(ctx->r2 << 2);
    // 0x08002A78: addu        $t1, $t1, $v0
    ctx->r9 = ADD32(ctx->r9, ctx->r2);
    // 0x08002A7C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x08002A80: addu        $t1, $t1, $v0
    ctx->r9 = ADD32(ctx->r9, ctx->r2);
    // 0x08002A84: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x08002A88: addiu       $t2, $v0, 0x1
    ctx->r10 = ADD32(ctx->r2, 0X1);
    // 0x08002A8C: andi        $v1, $t2, 0xFF
    ctx->r3 = ctx->r10 & 0XFF;
    // 0x08002A90: addu        $t1, $t1, $v0
    ctx->r9 = ADD32(ctx->r9, ctx->r2);
    // 0x08002A94: andi        $t8, $t1, 0xFFFF
    ctx->r24 = ctx->r9 & 0XFFFF;
    // 0x08002A98: slti        $at, $v1, 0xD
    ctx->r1 = SIGNED(ctx->r3) < 0XD ? 1 : 0;
    // 0x08002A9C: or          $t1, $t8, $zero
    ctx->r9 = ctx->r24 | 0;
    // 0x08002AA0: bne         $at, $zero, L_08002AB0
    if (ctx->r1 != 0) {
        // 0x08002AA4: sb          $t2, 0xD3($s0)
        MEM_B(0XD3, ctx->r16) = ctx->r10;
            goto L_08002AB0;
    }
    // 0x08002AA4: sb          $t2, 0xD3($s0)
    MEM_B(0XD3, ctx->r16) = ctx->r10;
    // 0x08002AA8: addiu       $t3, $v1, -0xC
    ctx->r11 = ADD32(ctx->r3, -0XC);
    // 0x08002AAC: sb          $t3, 0xD3($s0)
    MEM_B(0XD3, ctx->r16) = ctx->r11;
L_08002AB0:
    // 0x08002AB0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08002AB4: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08002AB8: lui         $a3, 0x43A5
    ctx->r7 = S32(0X43A5 << 16);
    // 0x08002ABC: jalr        $t0
    // 0x08002AC0: sh          $t1, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r9;
    LOOKUP_FUNC(ctx->r8)(rdram, ctx);
        goto after_1;
    // 0x08002AC0: sh          $t1, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r9;
    after_1:
    // 0x08002AC4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08002AC8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x08002ACC: lhu         $t1, 0x42($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X42);
    // 0x08002AD0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08002AD4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002AD8: addiu       $t9, $t9, -0x2218
    ctx->r25 = ADD32(ctx->r25, -0X2218);
    // 0x08002ADC: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(20, 0X49A4) << 16);
    // 0x08002AE0: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x08002AE4: addiu       $a1, $a1, 0x49A4
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(20, 0X49A4));
    // 0x08002AE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002AEC: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x08002AF0: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x08002AF4: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x08002AF8: jalr        $t9
    // 0x08002AFC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002AFC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x08002B00: beq         $v0, $zero, L_08002B34
    if (ctx->r2 == 0) {
        // 0x08002B04: addiu       $t4, $zero, 0x1D
        ctx->r12 = ADD32(0, 0X1D);
            goto L_08002B34;
    }
    // 0x08002B04: addiu       $t4, $zero, 0x1D
    ctx->r12 = ADD32(0, 0X1D);
    // 0x08002B08: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002B0C: sh          $t4, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r12;
    // 0x08002B10: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08002B14: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x08002B18: jalr        $t9
    // 0x08002B1C: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002B1C: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    after_3:
    // 0x08002B20: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x08002B24: lw          $t5, 0xE8($v1)
    ctx->r13 = MEM_W(ctx->r3, 0XE8);
    // 0x08002B28: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x08002B2C: ori         $t6, $t5, 0x8
    ctx->r14 = ctx->r13 | 0X8;
    // 0x08002B30: sw          $t6, 0xE8($v1)
    MEM_W(0XE8, ctx->r3) = ctx->r14;
L_08002B34:
    // 0x08002B34: lhu         $t7, 0x8A($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X8A);
    // 0x08002B38: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(20, 0X49A4) << 16);
    // 0x08002B3C: addiu       $a1, $a1, 0x49A4
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(20, 0X49A4));
    // 0x08002B40: bgtz        $t7, L_08002C38
    if (SIGNED(ctx->r15) > 0) {
        // 0x08002B44: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08002C38;
    }
    // 0x08002B44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002B48: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x08002B4C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08002B50: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x08002B54: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08002B58: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x08002B5C: addiu       $v0, $v0, -0x2218
    ctx->r2 = ADD32(ctx->r2, -0X2218);
    // 0x08002B60: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x08002B64: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x08002B68: lui         $a3, 0xC1F0
    ctx->r7 = S32(0XC1F0 << 16);
    // 0x08002B6C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x08002B70: sw          $a1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r5;
    // 0x08002B74: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x08002B78: jalr        $v0
    // 0x08002B7C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x08002B7C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x08002B80: beq         $v0, $zero, L_08002BB8
    if (ctx->r2 == 0) {
        // 0x08002B84: addiu       $t8, $zero, 0x1D
        ctx->r24 = ADD32(0, 0X1D);
            goto L_08002BB8;
    }
    // 0x08002B84: addiu       $t8, $zero, 0x1D
    ctx->r24 = ADD32(0, 0X1D);
    // 0x08002B88: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002B8C: sh          $t8, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r24;
    // 0x08002B90: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08002B94: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x08002B98: jalr        $t9
    // 0x08002B9C: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08002B9C: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    after_5:
    // 0x08002BA0: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x08002BA4: lw          $t2, 0xE8($v1)
    ctx->r10 = MEM_W(ctx->r3, 0XE8);
    // 0x08002BA8: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x08002BAC: sw          $s0, 0xD4($v1)
    MEM_W(0XD4, ctx->r3) = ctx->r16;
    // 0x08002BB0: ori         $t3, $t2, 0x1
    ctx->r11 = ctx->r10 | 0X1;
    // 0x08002BB4: sw          $t3, 0xE8($v1)
    MEM_W(0XE8, ctx->r3) = ctx->r11;
L_08002BB8:
    // 0x08002BB8: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x08002BBC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08002BC0: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x08002BC4: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x08002BC8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08002BCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002BD0: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x08002BD4: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x08002BD8: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    // 0x08002BDC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x08002BE0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x08002BE4: jalr        $t9
    // 0x08002BE8: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08002BE8: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_6:
    // 0x08002BEC: beq         $v0, $zero, L_08002C24
    if (ctx->r2 == 0) {
        // 0x08002BF0: addiu       $t4, $zero, 0x1D
        ctx->r12 = ADD32(0, 0X1D);
            goto L_08002C24;
    }
    // 0x08002BF0: addiu       $t4, $zero, 0x1D
    ctx->r12 = ADD32(0, 0X1D);
    // 0x08002BF4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002BF8: sh          $t4, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r12;
    // 0x08002BFC: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08002C00: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x08002C04: jalr        $t9
    // 0x08002C08: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08002C08: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    after_7:
    // 0x08002C0C: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x08002C10: lw          $t5, 0xE8($v1)
    ctx->r13 = MEM_W(ctx->r3, 0XE8);
    // 0x08002C14: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x08002C18: sw          $s0, 0xD4($v1)
    MEM_W(0XD4, ctx->r3) = ctx->r16;
    // 0x08002C1C: ori         $t6, $t5, 0x41
    ctx->r14 = ctx->r13 | 0X41;
    // 0x08002C20: sw          $t6, 0xE8($v1)
    MEM_W(0XE8, ctx->r3) = ctx->r14;
L_08002C24:
    // 0x08002C24: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002C28: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002C2C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X2C4C) << 16);
    // 0x08002C30: jalr        $t9
    // 0x08002C34: addiu       $a0, $a0, 0x2C4C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X2C4C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08002C34: addiu       $a0, $a0, 0x2C4C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X2C4C));
    after_8:
L_08002C38:
    // 0x08002C38: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x08002C3C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x08002C40: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x08002C44: jr          $ra
    // 0x08002C48: nop

    TRACE_RETURN()
    return;
    // 0x08002C48: nop

;}
RECOMP_FUNC void func_08008E54_6BC0F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08008E54: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x08008E58: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x08008E5C: lw          $t6, -0x39D8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39D8);
    // 0x08008E60: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08008E64: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08008E68: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x08008E6C: lw          $t7, 0x2C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X2C);
    // 0x08008E70: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x08008E74: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x08008E78: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08008E7C: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x08008E80: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08008E84: sw          $t8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r24;
    // 0x08008E88: addiu       $t9, $t9, 0x27FC
    ctx->r25 = ADD32(ctx->r25, 0X27FC);
    // 0x08008E8C: lw          $a0, 0xD0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XD0);
    // 0x08008E90: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x08008E94: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    // 0x08008E98: jalr        $t9
    // 0x08008E9C: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08008E9C: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    after_0:
    // 0x08008EA0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x08008EA4: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x08008EA8: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x08008EAC: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x08008EB0: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08008EB4: lwc1        $f18, 0xC($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08008EB8: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x08008EBC: sub.s       $f2, $f16, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f16.fl - ctx->f6.fl;
    // 0x08008EC0: lwc1        $f14, 0x10($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X10);
    // 0x08008EC4: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x08008EC8: sub.s       $f12, $f18, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f8.fl;
    // 0x08008ECC: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x08008ED0: lw          $t0, -0x3A38($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3A38);
    // 0x08008ED4: sub.s       $f0, $f14, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f4.fl;
    // 0x08008ED8: mul.s       $f4, $f12, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x08008EDC: lui         $v1, 0x4
    ctx->r3 = S32(0X4 << 16);
    // 0x08008EE0: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x08008EE4: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x08008EE8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08008EEC: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x08008EF0: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x08008EF4: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    // 0x08008EF8: lhu         $v1, -0x5232($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X5232);
    // 0x08008EFC: bgez        $v1, L_08008F10
    if (SIGNED(ctx->r3) >= 0) {
        // 0x08008F00: andi        $t1, $v1, 0x3
        ctx->r9 = ctx->r3 & 0X3;
            goto L_08008F10;
    }
    // 0x08008F00: andi        $t1, $v1, 0x3
    ctx->r9 = ctx->r3 & 0X3;
    // 0x08008F04: beq         $t1, $zero, L_08008F10
    if (ctx->r9 == 0) {
        // 0x08008F08: nop
    
            goto L_08008F10;
    }
    // 0x08008F08: nop

    // 0x08008F0C: addiu       $t1, $t1, -0x4
    ctx->r9 = ADD32(ctx->r9, -0X4);
L_08008F10:
    // 0x08008F10: bne         $t1, $zero, L_08008F98
    if (ctx->r9 != 0) {
        // 0x08008F14: or          $v1, $t1, $zero
        ctx->r3 = ctx->r9 | 0;
            goto L_08008F98;
    }
    // 0x08008F14: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x08008F18: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC410) << 16);
    // 0x08008F1C: lwc1        $f4, -0x3BF0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(20, 0XC410));
    // 0x08008F20: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x08008F24: c.lt.s      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.fl < ctx->f10.fl;
    // 0x08008F28: nop

    // 0x08008F2C: bc1fl       L_08008F6C
    if (!c1cs) {
        // 0x08008F30: mtc1        $at, $f4
        ctx->f4.u32l = ctx->r1;
            goto L_08008F6C;
    }
    goto skip_0;
    // 0x08008F30: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    skip_0:
    // 0x08008F34: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x08008F38: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08008F3C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08008F40: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x08008F44: add.s       $f6, $f18, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x08008F48: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x08008F4C: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x08008F50: lw          $a0, 0xD0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XD0);
    // 0x08008F54: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x08008F58: jalr        $t9
    // 0x08008F5C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08008F5C: nop

    after_1:
    // 0x08008F60: b           L_08009130
    // 0x08008F64: nop

        goto L_08009130;
    // 0x08008F64: nop

    // 0x08008F68: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
L_08008F6C:
    // 0x08008F6C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08008F70: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x08008F74: add.s       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x08008F78: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x08008F7C: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x08008F80: lw          $a0, 0xD0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XD0);
    // 0x08008F84: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x08008F88: jalr        $t9
    // 0x08008F8C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08008F8C: nop

    after_2:
    // 0x08008F90: b           L_08009130
    // 0x08008F94: nop

        goto L_08009130;
    // 0x08008F94: nop

L_08008F98:
    // 0x08008F98: bne         $v1, $at, L_08009020
    if (ctx->r3 != ctx->r1) {
        // 0x08008F9C: lwc1        $f6, 0x34($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
            goto L_08009020;
    }
    // 0x08008F9C: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x08008FA0: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC414) << 16);
    // 0x08008FA4: lwc1        $f8, -0x3BEC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(20, 0XC414));
    // 0x08008FA8: lui         $at, 0x4150
    ctx->r1 = S32(0X4150 << 16);
    // 0x08008FAC: c.lt.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl < ctx->f6.fl;
    // 0x08008FB0: nop

    // 0x08008FB4: bc1fl       L_08008FF4
    if (!c1cs) {
        // 0x08008FB8: mtc1        $at, $f8
        ctx->f8.u32l = ctx->r1;
            goto L_08008FF4;
    }
    goto skip_1;
    // 0x08008FB8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    skip_1:
    // 0x08008FBC: lui         $at, 0x4204
    ctx->r1 = S32(0X4204 << 16);
    // 0x08008FC0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08008FC4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08008FC8: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x08008FCC: add.s       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x08008FD0: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x08008FD4: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x08008FD8: lw          $a0, 0xD0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XD0);
    // 0x08008FDC: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x08008FE0: jalr        $t9
    // 0x08008FE4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08008FE4: nop

    after_3:
    // 0x08008FE8: b           L_08009130
    // 0x08008FEC: nop

        goto L_08009130;
    // 0x08008FEC: nop

    // 0x08008FF0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
L_08008FF4:
    // 0x08008FF4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08008FF8: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x08008FFC: add.s       $f6, $f18, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x08009000: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x08009004: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x08009008: lw          $a0, 0xD0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XD0);
    // 0x0800900C: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x08009010: jalr        $t9
    // 0x08009014: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08009014: nop

    after_4:
    // 0x08009018: b           L_08009130
    // 0x0800901C: nop

        goto L_08009130;
    // 0x0800901C: nop

L_08009020:
    // 0x08009020: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08009024: bne         $v1, $at, L_080090AC
    if (ctx->r3 != ctx->r1) {
        // 0x08009028: lwc1        $f10, 0x34($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
            goto L_080090AC;
    }
    // 0x08009028: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x0800902C: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC418) << 16);
    // 0x08009030: lwc1        $f4, -0x3BE8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(20, 0XC418));
    // 0x08009034: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x08009038: c.lt.s      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.fl < ctx->f10.fl;
    // 0x0800903C: nop

    // 0x08009040: bc1fl       L_08009080
    if (!c1cs) {
        // 0x08009044: mtc1        $at, $f4
        ctx->f4.u32l = ctx->r1;
            goto L_08009080;
    }
    goto skip_2;
    // 0x08009044: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    skip_2:
    // 0x08009048: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x0800904C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08009050: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08009054: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x08009058: add.s       $f6, $f18, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x0800905C: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x08009060: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x08009064: lw          $a0, 0xD0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XD0);
    // 0x08009068: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x0800906C: jalr        $t9
    // 0x08009070: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08009070: nop

    after_5:
    // 0x08009074: b           L_08009130
    // 0x08009078: nop

        goto L_08009130;
    // 0x08009078: nop

    // 0x0800907C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
L_08009080:
    // 0x08009080: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08009084: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x08009088: add.s       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x0800908C: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x08009090: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x08009094: lw          $a0, 0xD0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XD0);
    // 0x08009098: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x0800909C: jalr        $t9
    // 0x080090A0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080090A0: nop

    after_6:
    // 0x080090A4: b           L_08009130
    // 0x080090A8: nop

        goto L_08009130;
    // 0x080090A8: nop

L_080090AC:
    // 0x080090AC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x080090B0: bne         $v1, $at, L_08009130
    if (ctx->r3 != ctx->r1) {
        // 0x080090B4: lwc1        $f6, 0x34($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
            goto L_08009130;
    }
    // 0x080090B4: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x080090B8: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC41C) << 16);
    // 0x080090BC: lwc1        $f8, -0x3BE4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(20, 0XC41C));
    // 0x080090C0: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x080090C4: c.lt.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl < ctx->f6.fl;
    // 0x080090C8: nop

    // 0x080090CC: bc1fl       L_0800910C
    if (!c1cs) {
        // 0x080090D0: mtc1        $at, $f8
        ctx->f8.u32l = ctx->r1;
            goto L_0800910C;
    }
    goto skip_3;
    // 0x080090D0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    skip_3:
    // 0x080090D4: lui         $at, 0x41D8
    ctx->r1 = S32(0X41D8 << 16);
    // 0x080090D8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080090DC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080090E0: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x080090E4: add.s       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x080090E8: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x080090EC: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x080090F0: lw          $a0, 0xD0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XD0);
    // 0x080090F4: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x080090F8: jalr        $t9
    // 0x080090FC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080090FC: nop

    after_7:
    // 0x08009100: b           L_08009130
    // 0x08009104: nop

        goto L_08009130;
    // 0x08009104: nop

    // 0x08009108: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
L_0800910C:
    // 0x0800910C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08009110: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x08009114: add.s       $f6, $f18, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x08009118: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x0800911C: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x08009120: lw          $a0, 0xD0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XD0);
    // 0x08009124: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x08009128: jalr        $t9
    // 0x0800912C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x0800912C: nop

    after_8:
L_08009130:
    // 0x08009130: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08009134: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x08009138: lw          $a0, 0xD0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XD0);
    // 0x0800913C: jalr        $t9
    // 0x08009140: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08009140: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    after_9:
    // 0x08009144: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08009148: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x0800914C: sb          $zero, 0xDC($s0)
    MEM_B(0XDC, ctx->r16) = 0;
    // 0x08009150: jalr        $t9
    // 0x08009154: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08009154: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_10:
    // 0x08009158: bne         $v0, $zero, L_08009170
    if (ctx->r2 != 0) {
        // 0x0800915C: lui         $a0, 0x801
        ctx->r4 = S32(RELOC_HI16(20, 0X8A38) << 16);
            goto L_08009170;
    }
    // 0x0800915C: lui         $a0, 0x801
    ctx->r4 = S32(RELOC_HI16(20, 0X8A38) << 16);
    // 0x08009160: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08009164: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08009168: jalr        $t9
    // 0x0800916C: addiu       $a0, $a0, -0x75C8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X8A38));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x0800916C: addiu       $a0, $a0, -0x75C8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X8A38));
    after_11:
L_08009170:
    // 0x08009170: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08009174: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08009178: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x0800917C: jr          $ra
    // 0x08009180: nop

    TRACE_RETURN()
    return;
    // 0x08009180: nop

;}
RECOMP_FUNC void func_0800781C_6BAABC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800781C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08007820: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08007824: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08007828: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800782C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08007830: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X73FC) << 16);
    // 0x08007834: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08007838: jalr        $t9
    // 0x0800783C: addiu       $a0, $a0, 0x73FC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X73FC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800783C: addiu       $a0, $a0, 0x73FC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X73FC));
    after_0:
    // 0x08007840: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08007844: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08007848: jr          $ra
    // 0x0800784C: nop

    TRACE_RETURN()
    return;
    // 0x0800784C: nop

;}
RECOMP_FUNC void func_080023E0_6B5680(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080023E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080023E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080023E8: lbu         $t6, 0x7C($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X7C);
    // 0x080023EC: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x080023F0: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x080023F4: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x080023F8: beq         $t7, $zero, L_08002450
    if (ctx->r15 == 0) {
        // 0x080023FC: addiu       $v0, $v0, -0x33D0
        ctx->r2 = ADD32(ctx->r2, -0X33D0);
            goto L_08002450;
    }
    // 0x080023FC: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x08002400: lbu         $t8, 0x186($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X186);
    // 0x08002404: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x08002408: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X2460) << 16);
    // 0x0800240C: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x08002410: andi        $t0, $t9, 0xFF
    ctx->r8 = ctx->r25 & 0XFF;
    // 0x08002414: slti        $at, $t0, 0x4
    ctx->r1 = SIGNED(ctx->r8) < 0X4 ? 1 : 0;
    // 0x08002418: beq         $at, $zero, L_0800243C
    if (ctx->r1 == 0) {
        // 0x0800241C: sb          $t9, 0x186($v0)
        MEM_B(0X186, ctx->r2) = ctx->r25;
            goto L_0800243C;
    }
    // 0x0800241C: sb          $t9, 0x186($v0)
    MEM_B(0X186, ctx->r2) = ctx->r25;
    // 0x08002420: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002424: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002428: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X2128) << 16);
    // 0x0800242C: jalr        $t9
    // 0x08002430: addiu       $a0, $a0, 0x2128
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X2128));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002430: addiu       $a0, $a0, 0x2128
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X2128));
    after_0:
    // 0x08002434: b           L_08002454
    // 0x08002438: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08002454;
    // 0x08002438: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_0800243C:
    // 0x0800243C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002440: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002444: sh          $t1, 0x8A($a2)
    MEM_H(0X8A, ctx->r6) = ctx->r9;
    // 0x08002448: jalr        $t9
    // 0x0800244C: addiu       $a0, $a0, 0x2460
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X2460));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800244C: addiu       $a0, $a0, 0x2460
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X2460));
    after_1:
L_08002450:
    // 0x08002450: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08002454:
    // 0x08002454: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002458: jr          $ra
    // 0x0800245C: nop

    TRACE_RETURN()
    return;
    // 0x0800245C: nop

;}
RECOMP_FUNC void func_080045F8_6B7898(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080045F8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x080045FC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08004600: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08004604: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08004608: addiu       $t6, $zero, 0x5A
    ctx->r14 = ADD32(0, 0X5A);
    // 0x0800460C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08004610: sb          $t6, 0xEC($a0)
    MEM_B(0XEC, ctx->r4) = ctx->r14;
    // 0x08004614: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004618: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x0800461C: lbu         $a1, 0xEC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XEC);
    // 0x08004620: addiu       $t7, $zero, 0x78
    ctx->r15 = ADD32(0, 0X78);
    // 0x08004624: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x08004628: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x0800462C: jalr        $t9
    // 0x08004630: addiu       $a3, $zero, 0x78
    ctx->r7 = ADD32(0, 0X78);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004630: addiu       $a3, $zero, 0x78
    ctx->r7 = ADD32(0, 0X78);
    after_0:
    // 0x08004634: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x08004638: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x0800463C: or          $t8, $v0, $at
    ctx->r24 = ctx->r2 | ctx->r1;
    // 0x08004640: lui         $t1, 0x20
    ctx->r9 = S32(0X20 << 16);
    // 0x08004644: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08004648: addiu       $t0, $zero, 0xCB
    ctx->r8 = ADD32(0, 0XCB);
    // 0x0800464C: ori         $t1, $t1, 0x6C1
    ctx->r9 = ctx->r9 | 0X6C1;
    // 0x08004650: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08004654: sw          $t8, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r24;
    // 0x08004658: sh          $t0, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r8;
    // 0x0800465C: sw          $t1, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r9;
    // 0x08004660: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08004664: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x08004668: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x0800466C: jalr        $t9
    // 0x08004670: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004670: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x08004674: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC3B0) << 16);
    // 0x08004678: lwc1        $f0, -0x3C50($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(20, 0XC3B0));
    // 0x0800467C: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x08004680: sb          $zero, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = 0;
    // 0x08004684: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004688: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800468C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X46B8) << 16);
    // 0x08004690: addiu       $a0, $a0, 0x46B8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X46B8));
    // 0x08004694: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    // 0x08004698: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x0800469C: jalr        $t9
    // 0x080046A0: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080046A0: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    after_2:
    // 0x080046A4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x080046A8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x080046AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x080046B0: jr          $ra
    // 0x080046B4: nop

    TRACE_RETURN()
    return;
    // 0x080046B4: nop

;}
RECOMP_FUNC void func_08003058_6B62F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003058: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800305C: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08003060: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x08003064: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003068: lhu         $t7, 0x16($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X16);
    // 0x0800306C: lbu         $t6, 0x184($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X184);
    // 0x08003070: addiu       $t3, $zero, 0x40
    ctx->r11 = ADD32(0, 0X40);
    // 0x08003074: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x08003078: andi        $t9, $t8, 0x3FF
    ctx->r25 = ctx->r24 & 0X3FF;
    // 0x0800307C: sh          $t9, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r25;
    // 0x08003080: lbu         $t0, 0x184($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X184);
    // 0x08003084: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003088: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x0800308C: andi        $t2, $t1, 0xFF
    ctx->r10 = ctx->r9 & 0XFF;
    // 0x08003090: slti        $at, $t2, 0x40
    ctx->r1 = SIGNED(ctx->r10) < 0X40 ? 1 : 0;
    // 0x08003094: bne         $at, $zero, L_080030C0
    if (ctx->r1 != 0) {
        // 0x08003098: sb          $t1, 0x184($v0)
        MEM_B(0X184, ctx->r2) = ctx->r9;
            goto L_080030C0;
    }
    // 0x08003098: sb          $t1, 0x184($v0)
    MEM_B(0X184, ctx->r2) = ctx->r9;
    // 0x0800309C: sb          $t3, 0x184($v0)
    MEM_B(0X184, ctx->r2) = ctx->r11;
    // 0x080030A0: lw          $t4, 0xE8($a0)
    ctx->r12 = MEM_W(ctx->r4, 0XE8);
    // 0x080030A4: lui         $at, 0x40
    ctx->r1 = S32(0X40 << 16);
    // 0x080030A8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080030AC: or          $t5, $t4, $at
    ctx->r13 = ctx->r12 | ctx->r1;
    // 0x080030B0: sw          $t5, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->r13;
    // 0x080030B4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X30D0) << 16);
    // 0x080030B8: jalr        $t9
    // 0x080030BC: addiu       $a0, $a0, 0x30D0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X30D0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080030BC: addiu       $a0, $a0, 0x30D0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X30D0));
    after_0:
L_080030C0:
    // 0x080030C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080030C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080030C8: jr          $ra
    // 0x080030CC: nop

    TRACE_RETURN()
    return;
    // 0x080030CC: nop

;}
RECOMP_FUNC void func_08008888_6BBB28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08008888: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800888C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08008890: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08008894: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08008898: addiu       $t6, $zero, 0x38
    ctx->r14 = ADD32(0, 0X38);
    // 0x0800889C: sb          $t6, 0xDD($a0)
    MEM_B(0XDD, ctx->r4) = ctx->r14;
    // 0x080088A0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080088A4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080088A8: lui         $a0, 0x801
    ctx->r4 = S32(RELOC_HI16(20, 0X88C4) << 16);
    // 0x080088AC: jalr        $t9
    // 0x080088B0: addiu       $a0, $a0, -0x773C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X88C4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080088B0: addiu       $a0, $a0, -0x773C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X88C4));
    after_0:
    // 0x080088B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080088B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080088BC: jr          $ra
    // 0x080088C0: nop

    TRACE_RETURN()
    return;
    // 0x080088C0: nop

;}
RECOMP_FUNC void func_08000F44_6B41E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000F44: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08000F48: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08000F4C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08000F50: lbu         $t6, 0xED($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XED);
    // 0x08000F54: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08000F58: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x08000F5C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x08000F60: sb          $t7, 0xED($a0)
    MEM_B(0XED, ctx->r4) = ctx->r15;
    // 0x08000F64: lwc1        $f4, 0xC($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0XC);
    // 0x08000F68: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x08000F6C: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x08000F70: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08000F74: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000F78: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x08000F7C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x08000F80: andi        $t1, $t0, 0xFF
    ctx->r9 = ctx->r8 & 0XFF;
    // 0x08000F84: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08000F88: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x08000F8C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000F90: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08000F94: swc1        $f16, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f16.u32l;
    // 0x08000F98: lbu         $t8, 0xED($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0XED);
    // 0x08000F9C: slti        $at, $t8, 0xA
    ctx->r1 = SIGNED(ctx->r24) < 0XA ? 1 : 0;
    // 0x08000FA0: beq         $at, $zero, L_08000FB0
    if (ctx->r1 == 0) {
        // 0x08000FA4: sw          $t8, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r24;
            goto L_08000FB0;
    }
    // 0x08000FA4: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x08000FA8: sb          $t0, 0xED($a0)
    MEM_B(0XED, ctx->r4) = ctx->r8;
    // 0x08000FAC: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
L_08000FB0:
    // 0x08000FB0: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x08000FB4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08000FB8: jalr        $t9
    // 0x08000FBC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000FBC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_0:
    // 0x08000FC0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x08000FC4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000FC8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000FCC: lw          $v0, 0xE8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XE8);
    // 0x08000FD0: andi        $t2, $v0, 0x10
    ctx->r10 = ctx->r2 & 0X10;
    // 0x08000FD4: beq         $t2, $zero, L_0800102C
    if (ctx->r10 == 0) {
        // 0x08000FD8: nop
    
            goto L_0800102C;
    }
    // 0x08000FD8: nop

    // 0x08000FDC: lwc1        $f18, 0x1C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x08000FE0: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC2D8) << 16);
    // 0x08000FE4: ldc1        $f0, -0x3D28($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(20, 0XC2D8));
    // 0x08000FE8: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x08000FEC: lwc1        $f10, 0x20($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X20);
    // 0x08000FF0: add.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = ctx->f4.d + ctx->f0.d;
    // 0x08000FF4: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC2E0) << 16);
    // 0x08000FF8: ldc1        $f2, -0x3D20($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(20, 0XC2E0));
    // 0x08000FFC: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x08001000: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x08001004: lwc1        $f6, 0x24($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X24);
    // 0x08001008: add.d       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f2.d); 
    ctx->f18.d = ctx->f16.d + ctx->f2.d;
    // 0x0800100C: swc1        $f8, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f8.u32l;
    // 0x08001010: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x08001014: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x08001018: add.d       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = ctx->f8.d + ctx->f0.d;
    // 0x0800101C: swc1        $f4, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f4.u32l;
    // 0x08001020: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x08001024: swc1        $f16, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f16.u32l;
    // 0x08001028: lw          $v0, 0xE8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XE8);
L_0800102C:
    // 0x0800102C: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC2E8) << 16);
    // 0x08001030: andi        $t3, $v0, 0x20
    ctx->r11 = ctx->r2 & 0X20;
    // 0x08001034: beq         $t3, $zero, L_0800108C
    if (ctx->r11 == 0) {
        // 0x08001038: ldc1        $f2, -0x3D18($at)
        CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(20, 0XC2E8));
            goto L_0800108C;
    }
    // 0x08001038: ldc1        $f2, -0x3D18($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(20, 0XC2E8));
    // 0x0800103C: lwc1        $f18, 0x1C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x08001040: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC2F0) << 16);
    // 0x08001044: ldc1        $f0, -0x3D10($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(20, 0XC2F0));
    // 0x08001048: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x0800104C: lwc1        $f10, 0x20($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X20);
    // 0x08001050: add.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = ctx->f4.d + ctx->f0.d;
    // 0x08001054: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC2F8) << 16);
    // 0x08001058: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x0800105C: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x08001060: swc1        $f8, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f8.u32l;
    // 0x08001064: lwc1        $f8, 0x24($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X24);
    // 0x08001068: ldc1        $f18, -0x3D08($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(20, 0XC2F8));
    // 0x0800106C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x08001070: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x08001074: add.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = ctx->f10.d + ctx->f0.d;
    // 0x08001078: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x0800107C: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08001080: swc1        $f6, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f6.u32l;
    // 0x08001084: swc1        $f18, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f18.u32l;
    // 0x08001088: lw          $v0, 0xE8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XE8);
L_0800108C:
    // 0x0800108C: andi        $t4, $v0, 0x40
    ctx->r12 = ctx->r2 & 0X40;
    // 0x08001090: beql        $t4, $zero, L_080010E0
    if (ctx->r12 == 0) {
        // 0x08001094: lhu         $v0, 0x8A($a0)
        ctx->r2 = MEM_HU(ctx->r4, 0X8A);
            goto L_080010E0;
    }
    goto skip_0;
    // 0x08001094: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    skip_0:
    // 0x08001098: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x0800109C: lwc1        $f16, 0x20($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X20);
    // 0x080010A0: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC300) << 16);
    // 0x080010A4: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x080010A8: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x080010AC: add.d       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = ctx->f6.d + ctx->f2.d;
    // 0x080010B0: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x080010B4: swc1        $f10, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f10.u32l;
    // 0x080010B8: lwc1        $f10, 0x24($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X24);
    // 0x080010BC: ldc1        $f4, -0x3D00($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(20, 0XC300));
    // 0x080010C0: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x080010C4: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x080010C8: add.d       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f2.d); 
    ctx->f18.d = ctx->f16.d + ctx->f2.d;
    // 0x080010CC: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x080010D0: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x080010D4: swc1        $f8, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f8.u32l;
    // 0x080010D8: swc1        $f4, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f4.u32l;
    // 0x080010DC: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
L_080010E0:
    // 0x080010E0: addiu       $t5, $v0, -0x1
    ctx->r13 = ADD32(ctx->r2, -0X1);
    // 0x080010E4: bne         $v0, $zero, L_080010F8
    if (ctx->r2 != 0) {
        // 0x080010E8: sh          $t5, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r13;
            goto L_080010F8;
    }
    // 0x080010E8: sh          $t5, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r13;
    // 0x080010EC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X110C) << 16);
    // 0x080010F0: jalr        $t9
    // 0x080010F4: addiu       $a0, $a0, 0x110C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X110C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080010F4: addiu       $a0, $a0, 0x110C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X110C));
    after_1:
L_080010F8:
    // 0x080010F8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x080010FC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08001100: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x08001104: jr          $ra
    // 0x08001108: nop

    TRACE_RETURN()
    return;
    // 0x08001108: nop

;}
RECOMP_FUNC void func_08003B0C_6B6DAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003B0C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08003B10: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08003B14: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08003B18: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08003B1C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08003B20: lw          $t7, 0x60($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X60);
    // 0x08003B24: lui         $at, 0x2A0
    ctx->r1 = S32(0X2A0 << 16);
    // 0x08003B28: ori         $at, $at, 0x7E1
    ctx->r1 = ctx->r1 | 0X7E1;
    // 0x08003B2C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003B30: addiu       $t6, $zero, 0x2D5
    ctx->r14 = ADD32(0, 0X2D5);
    // 0x08003B34: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x08003B38: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x08003B3C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08003B40: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x08003B44: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
    // 0x08003B48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08003B4C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08003B50: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08003B54: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    // 0x08003B58: swc1        $f0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f0.u32l;
    // 0x08003B5C: jalr        $t9
    // 0x08003B60: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003B60: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    after_0:
    // 0x08003B64: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC3A0) << 16);
    // 0x08003B68: lwc1        $f0, -0x3C60($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(20, 0XC3A0));
    // 0x08003B6C: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x08003B70: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003B74: addiu       $t0, $zero, 0x28
    ctx->r8 = ADD32(0, 0X28);
    // 0x08003B78: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x08003B7C: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x08003B80: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x08003B84: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x08003B88: addiu       $t2, $zero, 0x400
    ctx->r10 = ADD32(0, 0X400);
    // 0x08003B8C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003B90: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X3BBC) << 16);
    // 0x08003B94: sb          $t0, 0x75($s0)
    MEM_B(0X75, ctx->r16) = ctx->r8;
    // 0x08003B98: sb          $t1, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r9;
    // 0x08003B9C: sw          $t2, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r10;
    // 0x08003BA0: jalr        $t9
    // 0x08003BA4: addiu       $a0, $a0, 0x3BBC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X3BBC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003BA4: addiu       $a0, $a0, 0x3BBC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X3BBC));
    after_1:
    // 0x08003BA8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08003BAC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08003BB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08003BB4: jr          $ra
    // 0x08003BB8: nop

    TRACE_RETURN()
    return;
    // 0x08003BB8: nop

;}
RECOMP_FUNC void func_080012E0_6B4580(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080012E0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x080012E4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x080012E8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080012EC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x080012F0: addiu       $t6, $zero, 0xC8
    ctx->r14 = ADD32(0, 0XC8);
    // 0x080012F4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080012F8: sb          $t6, 0xEE($a0)
    MEM_B(0XEE, ctx->r4) = ctx->r14;
    // 0x080012FC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001300: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08001304: lbu         $a1, 0xEE($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XEE);
    // 0x08001308: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0800130C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08001310: jalr        $t9
    // 0x08001314: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001314: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08001318: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x0800131C: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08001320: or          $t7, $v0, $at
    ctx->r15 = ctx->r2 | ctx->r1;
    // 0x08001324: lui         $t1, 0x40
    ctx->r9 = S32(0X40 << 16);
    // 0x08001328: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800132C: sw          $t7, 0x30($t8)
    MEM_W(0X30, ctx->r24) = ctx->r15;
    // 0x08001330: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x08001334: ori         $t1, $t1, 0x6EE
    ctx->r9 = ctx->r9 | 0X6EE;
    // 0x08001338: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x0800133C: sh          $t0, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r8;
    // 0x08001340: sw          $t1, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r9;
    // 0x08001344: sb          $zero, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = 0;
    // 0x08001348: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800134C: jalr        $t9
    // 0x08001350: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001350: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_1:
    // 0x08001354: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001358: addiu       $t9, $t9, 0x4ABC
    ctx->r25 = ADD32(ctx->r25, 0X4ABC);
    // 0x0800135C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001360: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08001364: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x08001368: jalr        $t9
    // 0x0800136C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800136C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x08001370: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001374: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08001378: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800137C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001380: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08001384: jalr        $t9
    // 0x08001388: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001388: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x0800138C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001390: addiu       $t9, $t9, -0x5CF0
    ctx->r25 = ADD32(ctx->r25, -0X5CF0);
    // 0x08001394: jalr        $t9
    // 0x08001398: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001398: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x0800139C: lui         $at, 0x3F40
    ctx->r1 = S32(0X3F40 << 16);
    // 0x080013A0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080013A4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080013A8: addiu       $t2, $zero, 0x3C
    ctx->r10 = ADD32(0, 0X3C);
    // 0x080013AC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080013B0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X13D8) << 16);
    // 0x080013B4: sh          $t2, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r10;
    // 0x080013B8: addiu       $a0, $a0, 0x13D8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X13D8));
    // 0x080013BC: jalr        $t9
    // 0x080013C0: swc1        $f4, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080013C0: swc1        $f4, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f4.u32l;
    after_5:
    // 0x080013C4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x080013C8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x080013CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x080013D0: jr          $ra
    // 0x080013D4: nop

    TRACE_RETURN()
    return;
    // 0x080013D4: nop

;}
RECOMP_FUNC void func_08007CBC_6BAF5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08007CBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08007CC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08007CC4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08007CC8: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08007CCC: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08007CD0: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x08007CD4: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08007CD8: bne         $v0, $zero, L_08007D14
    if (ctx->r2 != 0) {
        // 0x08007CDC: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08007D14;
    }
    // 0x08007CDC: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08007CE0: jalr        $t9
    // 0x08007CE4: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08007CE4: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_0:
    // 0x08007CE8: beq         $v0, $zero, L_08007D00
    if (ctx->r2 == 0) {
        // 0x08007CEC: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(20, 0X79B0) << 16);
            goto L_08007D00;
    }
    // 0x08007CEC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X79B0) << 16);
    // 0x08007CF0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08007CF4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08007CF8: jalr        $t9
    // 0x08007CFC: addiu       $a0, $a0, 0x79B0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X79B0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08007CFC: addiu       $a0, $a0, 0x79B0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X79B0));
    after_1:
L_08007D00:
    // 0x08007D00: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08007D04: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08007D08: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X73FC) << 16);
    // 0x08007D0C: jalr        $t9
    // 0x08007D10: addiu       $a0, $a0, 0x73FC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X73FC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08007D10: addiu       $a0, $a0, 0x73FC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X73FC));
    after_2:
L_08007D14:
    // 0x08007D14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08007D18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08007D1C: jr          $ra
    // 0x08007D20: nop

    TRACE_RETURN()
    return;
    // 0x08007D20: nop

;}
RECOMP_FUNC void func_08007C18_6BAEB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08007C18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08007C1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08007C20: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08007C24: lhu         $t6, 0x8A($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X8A);
    // 0x08007C28: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x08007C2C: andi        $v0, $t7, 0xFFFF
    ctx->r2 = ctx->r15 & 0XFFFF;
    // 0x08007C30: slti        $at, $v0, 0x1F
    ctx->r1 = SIGNED(ctx->r2) < 0X1F ? 1 : 0;
    // 0x08007C34: beq         $at, $zero, L_08007C60
    if (ctx->r1 == 0) {
        // 0x08007C38: sh          $t7, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r15;
            goto L_08007C60;
    }
    // 0x08007C38: sh          $t7, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r15;
    // 0x08007C3C: lw          $t8, 0xE8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XE8);
    // 0x08007C40: ori         $t9, $t8, 0x80
    ctx->r25 = ctx->r24 | 0X80;
    // 0x08007C44: bne         $v0, $zero, L_08007C60
    if (ctx->r2 != 0) {
        // 0x08007C48: sw          $t9, 0xE8($a0)
        MEM_W(0XE8, ctx->r4) = ctx->r25;
            goto L_08007C60;
    }
    // 0x08007C48: sw          $t9, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->r25;
    // 0x08007C4C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08007C50: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08007C54: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X7C70) << 16);
    // 0x08007C58: jalr        $t9
    // 0x08007C5C: addiu       $a0, $a0, 0x7C70
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X7C70));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08007C5C: addiu       $a0, $a0, 0x7C70
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X7C70));
    after_0:
L_08007C60:
    // 0x08007C60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08007C64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08007C68: jr          $ra
    // 0x08007C6C: nop

    TRACE_RETURN()
    return;
    // 0x08007C6C: nop

;}
RECOMP_FUNC void func_080073DC_6BA67C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080073DC: jr          $ra
    // 0x080073E0: nop

    TRACE_RETURN()
    return;
    // 0x080073E0: nop

    // 0x080073E4: jr          $ra
    // 0x080073E8: nop

    TRACE_RETURN()
    return;
    // 0x080073E8: nop

    // 0x080073EC: jr          $ra
    // 0x080073F0: nop

    TRACE_RETURN()
    return;
    // 0x080073F0: nop

    // 0x080073F4: jr          $ra
    // 0x080073F8: nop

    TRACE_RETURN()
    return;
    // 0x080073F8: nop

;}
RECOMP_FUNC void func_08000D34_6B3FD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000D34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000D38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000D3C: lw          $v1, 0xD0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XD0);
    // 0x08000D40: sb          $zero, 0x30($a0)
    MEM_B(0X30, ctx->r4) = 0;
    // 0x08000D44: addiu       $at, $zero, -0x401
    ctx->r1 = ADD32(0, -0X401);
    // 0x08000D48: lw          $v0, 0xE8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XE8);
    // 0x08000D4C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x08000D50: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x08000D54: andi        $t6, $v0, 0x400
    ctx->r14 = ctx->r2 & 0X400;
    // 0x08000D58: beq         $t6, $zero, L_08000D68
    if (ctx->r14 == 0) {
        // 0x08000D5C: and         $t7, $v0, $at
        ctx->r15 = ctx->r2 & ctx->r1;
            goto L_08000D68;
    }
    // 0x08000D5C: and         $t7, $v0, $at
    ctx->r15 = ctx->r2 & ctx->r1;
    // 0x08000D60: sw          $t7, 0xE8($v1)
    MEM_W(0XE8, ctx->r3) = ctx->r15;
    // 0x08000D64: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_08000D68:
    // 0x08000D68: andi        $t8, $v0, 0x800
    ctx->r24 = ctx->r2 & 0X800;
    // 0x08000D6C: beq         $t8, $zero, L_08000D7C
    if (ctx->r24 == 0) {
        // 0x08000D70: addiu       $at, $zero, -0x801
        ctx->r1 = ADD32(0, -0X801);
            goto L_08000D7C;
    }
    // 0x08000D70: addiu       $at, $zero, -0x801
    ctx->r1 = ADD32(0, -0X801);
    // 0x08000D74: and         $t9, $v0, $at
    ctx->r25 = ctx->r2 & ctx->r1;
    // 0x08000D78: sw          $t9, 0xE8($v1)
    MEM_W(0XE8, ctx->r3) = ctx->r25;
L_08000D7C:
    // 0x08000D7C: lw          $t0, -0x39FC($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X39FC);
    // 0x08000D80: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08000D84: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000D88: lbu         $t1, 0xD4($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0XD4);
    // 0x08000D8C: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08000D90: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08000D94: bne         $t1, $zero, L_08000DA4
    if (ctx->r9 != 0) {
        // 0x08000D98: addiu       $a0, $zero, 0x244
        ctx->r4 = ADD32(0, 0X244);
            goto L_08000DA4;
    }
    // 0x08000D98: addiu       $a0, $zero, 0x244
    ctx->r4 = ADD32(0, 0X244);
    // 0x08000D9C: jalr        $t9
    // 0x08000DA0: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000DA0: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    after_0:
L_08000DA4:
    // 0x08000DA4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000DA8: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08000DAC: jalr        $t9
    // 0x08000DB0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000DB0: nop

    after_1:
    // 0x08000DB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000DB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000DBC: jr          $ra
    // 0x08000DC0: nop

    TRACE_RETURN()
    return;
    // 0x08000DC0: nop

    // 0x08000DC4: jr          $ra
    // 0x08000DC8: nop

    TRACE_RETURN()
    return;
    // 0x08000DC8: nop

;}
RECOMP_FUNC void func_08003814_6B6AB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003814: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003818: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800381C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08003820: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08003824: addiu       $t6, $zero, 0x1E
    ctx->r14 = ADD32(0, 0X1E);
    // 0x08003828: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x0800382C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003830: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003834: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X3850) << 16);
    // 0x08003838: jalr        $t9
    // 0x0800383C: addiu       $a0, $a0, 0x3850
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X3850));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800383C: addiu       $a0, $a0, 0x3850
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X3850));
    after_0:
    // 0x08003840: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08003844: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08003848: jr          $ra
    // 0x0800384C: nop

    TRACE_RETURN()
    return;
    // 0x0800384C: nop

;}
RECOMP_FUNC void func_08002D2C_6B5FCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002D2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002D30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002D34: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002D38: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08002D3C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002D40: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002D44: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08002D48: bne         $v0, $zero, L_08002D5C
    if (ctx->r2 != 0) {
        // 0x08002D4C: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08002D5C;
    }
    // 0x08002D4C: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08002D50: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X2D6C) << 16);
    // 0x08002D54: jalr        $t9
    // 0x08002D58: addiu       $a0, $a0, 0x2D6C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X2D6C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002D58: addiu       $a0, $a0, 0x2D6C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X2D6C));
    after_0:
L_08002D5C:
    // 0x08002D5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002D60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002D64: jr          $ra
    // 0x08002D68: nop

    TRACE_RETURN()
    return;
    // 0x08002D68: nop

;}
RECOMP_FUNC void func_080013D8_6B4678(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080013D8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x080013DC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080013E0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x080013E4: lbu         $t6, 0xEE($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XEE);
    // 0x080013E8: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x080013EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080013F0: addiu       $t7, $t6, -0x6
    ctx->r15 = ADD32(ctx->r14, -0X6);
    // 0x080013F4: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x080013F8: sb          $t7, 0xEE($a0)
    MEM_B(0XEE, ctx->r4) = ctx->r15;
    // 0x080013FC: slti        $at, $t8, 0xA
    ctx->r1 = SIGNED(ctx->r24) < 0XA ? 1 : 0;
    // 0x08001400: beq         $at, $zero, L_08001418
    if (ctx->r1 == 0) {
        // 0x08001404: sw          $t8, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r24;
            goto L_08001418;
    }
    // 0x08001404: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x08001408: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x0800140C: sb          $t0, 0xEE($a0)
    MEM_B(0XEE, ctx->r4) = ctx->r8;
    // 0x08001410: andi        $t1, $t0, 0xFF
    ctx->r9 = ctx->r8 & 0XFF;
    // 0x08001414: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
L_08001418:
    // 0x08001418: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800141C: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08001420: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x08001424: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08001428: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0800142C: jalr        $t9
    // 0x08001430: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001430: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_0:
    // 0x08001434: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x08001438: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC338) << 16);
    // 0x0800143C: ldc1        $f0, -0x3CC8($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(20, 0XC338));
    // 0x08001440: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08001444: lwc1        $f16, 0x20($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X20);
    // 0x08001448: add.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = ctx->f6.d + ctx->f0.d;
    // 0x0800144C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x08001450: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001454: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x08001458: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x0800145C: lwc1        $f8, 0x24($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X24);
    // 0x08001460: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08001464: add.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = ctx->f18.d + ctx->f0.d;
    // 0x08001468: swc1        $f10, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f10.u32l;
    // 0x0800146C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x08001470: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08001474: add.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = ctx->f10.d + ctx->f0.d;
    // 0x08001478: swc1        $f6, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f6.u32l;
    // 0x0800147C: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08001480: swc1        $f18, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f18.u32l;
    // 0x08001484: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08001488: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x0800148C: addiu       $t2, $v0, -0x1
    ctx->r10 = ADD32(ctx->r2, -0X1);
    // 0x08001490: beq         $v1, $zero, L_080014A0
    if (ctx->r3 == 0) {
        // 0x08001494: sh          $t2, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r10;
            goto L_080014A0;
    }
    // 0x08001494: sh          $t2, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r10;
    // 0x08001498: jalr        $t9
    // 0x0800149C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800149C: nop

    after_1:
L_080014A0:
    // 0x080014A0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x080014A4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x080014A8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x080014AC: jr          $ra
    // 0x080014B0: nop

    TRACE_RETURN()
    return;
    // 0x080014B0: nop

;}
RECOMP_FUNC void func_08001AA8_6B4D48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001AA8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08001AAC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08001AB0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08001AB4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08001AB8: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x08001ABC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001AC0: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08001AC4: lui         $a2, 0x3DE3
    ctx->r6 = S32(0X3DE3 << 16);
    // 0x08001AC8: ori         $t7, $t6, 0x20
    ctx->r15 = ctx->r14 | 0X20;
    // 0x08001ACC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08001AD0: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x08001AD4: ori         $a2, $a2, 0x8E39
    ctx->r6 = ctx->r6 | 0X8E39;
    // 0x08001AD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001ADC: jalr        $t9
    // 0x08001AE0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001AE0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x08001AE4: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x08001AE8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08001AEC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x08001AF0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08001AF4: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x08001AF8: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x08001AFC: swc1        $f4, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f4.u32l;
    // 0x08001B00: lw          $t8, 0xE8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XE8);
    // 0x08001B04: lui         $at, 0x80
    ctx->r1 = S32(0X80 << 16);
    // 0x08001B08: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001B0C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001B10: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X1B38) << 16);
    // 0x08001B14: or          $t0, $t8, $at
    ctx->r8 = ctx->r24 | ctx->r1;
    // 0x08001B18: sw          $t0, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r8;
    // 0x08001B1C: jalr        $t9
    // 0x08001B20: addiu       $a0, $a0, 0x1B38
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X1B38));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001B20: addiu       $a0, $a0, 0x1B38
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X1B38));
    after_1:
    // 0x08001B24: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08001B28: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08001B2C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08001B30: jr          $ra
    // 0x08001B34: nop

    TRACE_RETURN()
    return;
    // 0x08001B34: nop

;}
RECOMP_FUNC void func_0800B29C_6BE53C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800B29C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0800B2A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0800B2A4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0800B2A8: lbu         $v0, 0xD0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD0);
    // 0x0800B2AC: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x0800B2B0: addiu       $t6, $zero, 0x318
    ctx->r14 = ADD32(0, 0X318);
    // 0x0800B2B4: beq         $v0, $zero, L_0800B2D8
    if (ctx->r2 == 0) {
        // 0x0800B2B8: lui         $t7, 0x20
        ctx->r15 = S32(0X20 << 16);
            goto L_0800B2D8;
    }
    // 0x0800B2B8: lui         $t7, 0x20
    ctx->r15 = S32(0X20 << 16);
    // 0x0800B2BC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x0800B2C0: beq         $v0, $at, L_0800B358
    if (ctx->r2 == ctx->r1) {
        // 0x0800B2C4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_0800B358;
    }
    // 0x0800B2C4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x0800B2C8: beql        $v0, $at, L_0800B33C
    if (ctx->r2 == ctx->r1) {
        // 0x0800B2CC: lui         $at, 0x4000
        ctx->r1 = S32(0X4000 << 16);
            goto L_0800B33C;
    }
    goto skip_0;
    // 0x0800B2CC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    skip_0:
    // 0x0800B2D0: b           L_0800B35C
    // 0x0800B2D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_0800B35C;
    // 0x0800B2D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_0800B2D8:
    // 0x0800B2D8: ori         $t7, $t7, 0x6E1
    ctx->r15 = ctx->r15 | 0X6E1;
    // 0x0800B2DC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800B2E0: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x0800B2E4: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x0800B2E8: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x0800B2EC: lui         $a2, 0x3DCC
    ctx->r6 = S32(0X3DCC << 16);
    // 0x0800B2F0: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x0800B2F4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x0800B2F8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x0800B2FC: jalr        $t9
    // 0x0800B300: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800B300: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x0800B304: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC478) << 16);
    // 0x0800B308: lwc1        $f0, -0x3B88($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(20, 0XC478));
    // 0x0800B30C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x0800B310: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC47C) << 16);
    // 0x0800B314: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x0800B318: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x0800B31C: lwc1        $f4, -0x3B84($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(20, 0XC47C));
    // 0x0800B320: addiu       $t8, $zero, 0x300
    ctx->r24 = ADD32(0, 0X300);
    // 0x0800B324: sh          $t8, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r24;
    // 0x0800B328: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x0800B32C: swc1        $f4, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f4.u32l;
    // 0x0800B330: b           L_0800B358
    // 0x0800B334: sb          $t0, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = ctx->r8;
        goto L_0800B358;
    // 0x0800B334: sb          $t0, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = ctx->r8;
    // 0x0800B338: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
L_0800B33C:
    // 0x0800B33C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x0800B340: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x0800B344: lhu         $t1, 0x16($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X16);
    // 0x0800B348: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x0800B34C: addiu       $t2, $t1, 0x40
    ctx->r10 = ADD32(ctx->r9, 0X40);
    // 0x0800B350: sh          $t2, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r10;
    // 0x0800B354: swc1        $f10, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f10.u32l;
L_0800B358:
    // 0x0800B358: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_0800B35C:
    // 0x0800B35C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0800B360: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x0800B364: jr          $ra
    // 0x0800B368: nop

    TRACE_RETURN()
    return;
    // 0x0800B368: nop

;}
RECOMP_FUNC void func_08005EC4_6B9164(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08005EC4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08005EC8: addiu       $t6, $zero, 0x100
    ctx->r14 = ADD32(0, 0X100);
    // 0x08005ECC: jr          $ra
    // 0x08005ED0: sh          $t6, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x08005ED0: sh          $t6, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r14;
;}
RECOMP_FUNC void func_0800868C_6BB92C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800868C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x08008690: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x08008694: lw          $t6, -0x39D8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39D8);
    // 0x08008698: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0800869C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080086A0: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x080086A4: lw          $t7, 0x2C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X2C);
    // 0x080086A8: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x080086AC: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x080086B0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080086B4: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x080086B8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080086BC: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x080086C0: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x080086C4: lw          $a0, 0xD0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XD0);
    // 0x080086C8: jalr        $t9
    // 0x080086CC: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080086CC: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    after_0:
    // 0x080086D0: addiu       $v0, $s0, 0xD0
    ctx->r2 = ADD32(ctx->r16, 0XD0);
    // 0x080086D4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080086D8: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x080086DC: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x080086E0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x080086E4: lui         $a1, 0x4326
    ctx->r5 = S32(0X4326 << 16);
    // 0x080086E8: lui         $a2, 0xC270
    ctx->r6 = S32(0XC270 << 16);
    // 0x080086EC: jalr        $t9
    // 0x080086F0: lui         $a3, 0x4363
    ctx->r7 = S32(0X4363 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080086F0: lui         $a3, 0x4363
    ctx->r7 = S32(0X4363 << 16);
    after_1:
    // 0x080086F4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x080086F8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080086FC: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x08008700: lui         $a1, 0x4313
    ctx->r5 = S32(0X4313 << 16);
    // 0x08008704: lui         $a2, 0xC218
    ctx->r6 = S32(0XC218 << 16);
    // 0x08008708: lui         $a3, 0x4325
    ctx->r7 = S32(0X4325 << 16);
    // 0x0800870C: jalr        $t9
    // 0x08008710: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08008710: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    after_2:
    // 0x08008714: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x08008718: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800871C: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x08008720: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x08008724: jalr        $t9
    // 0x08008728: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08008728: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    after_3:
    // 0x0800872C: lhu         $v0, 0x8A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8A);
    // 0x08008730: addiu       $t3, $zero, 0x64
    ctx->r11 = ADD32(0, 0X64);
    // 0x08008734: lui         $a0, 0x801
    ctx->r4 = S32(RELOC_HI16(20, 0X876C) << 16);
    // 0x08008738: addiu       $t2, $v0, -0x1
    ctx->r10 = ADD32(ctx->r2, -0X1);
    // 0x0800873C: bne         $v0, $zero, L_08008758
    if (ctx->r2 != 0) {
        // 0x08008740: sh          $t2, 0x8A($s0)
        MEM_H(0X8A, ctx->r16) = ctx->r10;
            goto L_08008758;
    }
    // 0x08008740: sh          $t2, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r10;
    // 0x08008744: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08008748: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800874C: sh          $t3, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r11;
    // 0x08008750: jalr        $t9
    // 0x08008754: addiu       $a0, $a0, -0x7894
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X876C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08008754: addiu       $a0, $a0, -0x7894
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X876C));
    after_4:
L_08008758:
    // 0x08008758: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0800875C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08008760: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x08008764: jr          $ra
    // 0x08008768: nop

    TRACE_RETURN()
    return;
    // 0x08008768: nop

;}
RECOMP_FUNC void func_080044F0_6B7790(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080044F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080044F4: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x080044F8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080044FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08004500: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08004504: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08004508: addiu       $a1, $a1, 0x2088
    ctx->r5 = ADD32(ctx->r5, 0X2088);
    // 0x0800450C: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x08004510: jalr        $t9
    // 0x08004514: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004514: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x08004518: beq         $v0, $zero, L_08004584
    if (ctx->r2 == 0) {
        // 0x0800451C: lw          $a3, 0x24($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X24);
            goto L_08004584;
    }
    // 0x0800451C: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x08004520: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004524: addiu       $t9, $t9, -0x6D4C
    ctx->r25 = ADD32(ctx->r25, -0X6D4C);
    // 0x08004528: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x0800452C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x08004530: jalr        $t9
    // 0x08004534: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004534: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_1:
    // 0x08004538: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x0800453C: lui         $at, 0x4014
    ctx->r1 = S32(0X4014 << 16);
    // 0x08004540: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x08004544: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08004548: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x0800454C: lui         $at, 0x4008
    ctx->r1 = S32(0X4008 << 16);
    // 0x08004550: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x08004554: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x08004558: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800455C: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x08004560: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x08004564: div.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x08004568: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x0800456C: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x08004570: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08004574: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x08004578: jalr        $t9
    // 0x0800457C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800457C: nop

    after_2:
    // 0x08004580: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
L_08004584:
    // 0x08004584: lwc1        $f8, 0x1C($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X1C);
    // 0x08004588: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC3A8) << 16);
    // 0x0800458C: ldc1        $f0, -0x3C58($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(20, 0XC3A8));
    // 0x08004590: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x08004594: lwc1        $f4, 0x20($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X20);
    // 0x08004598: sub.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = ctx->f10.d - ctx->f0.d;
    // 0x0800459C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x080045A0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080045A4: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x080045A8: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x080045AC: lwc1        $f16, 0x24($a3)
    ctx->f16.u32l = MEM_W(ctx->r7, 0X24);
    // 0x080045B0: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x080045B4: sub.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = ctx->f6.d - ctx->f0.d;
    // 0x080045B8: swc1        $f18, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->f18.u32l;
    // 0x080045BC: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x080045C0: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x080045C4: lwc1        $f8, 0x1C($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X1C);
    // 0x080045C8: sub.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = ctx->f18.d - ctx->f0.d;
    // 0x080045CC: swc1        $f10, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->f10.u32l;
    // 0x080045D0: c.le.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl <= ctx->f8.fl;
    // 0x080045D4: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x080045D8: bc1t        L_080045E8
    if (c1cs) {
        // 0x080045DC: swc1        $f6, 0x24($a3)
        MEM_W(0X24, ctx->r7) = ctx->f6.u32l;
            goto L_080045E8;
    }
    // 0x080045DC: swc1        $f6, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->f6.u32l;
    // 0x080045E0: jalr        $t9
    // 0x080045E4: swc1        $f2, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->f2.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080045E4: swc1        $f2, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->f2.u32l;
    after_3:
L_080045E8:
    // 0x080045E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080045EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080045F0: jr          $ra
    // 0x080045F4: nop

    TRACE_RETURN()
    return;
    // 0x080045F4: nop

;}
RECOMP_FUNC void func_08001EAC_6B514C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001EAC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x08001EB0: lwc1        $f4, -0x3248($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3248);
    // 0x08001EB4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08001EB8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08001EBC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08001EC0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x08001EC4: swc1        $f4, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f4.u32l;
    // 0x08001EC8: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x08001ECC: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x08001ED0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08001ED4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001ED8: addiu       $t9, $t9, -0x4678
    ctx->r25 = ADD32(ctx->r25, -0X4678);
    // 0x08001EDC: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x08001EE0: lw          $a2, 0xC($v0)
    ctx->r6 = MEM_W(ctx->r2, 0XC);
    // 0x08001EE4: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x08001EE8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08001EEC: jalr        $t9
    // 0x08001EF0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001EF0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x08001EF4: bne         $v0, $zero, L_08001F18
    if (ctx->r2 != 0) {
        // 0x08001EF8: addiu       $t6, $zero, 0xA
        ctx->r14 = ADD32(0, 0XA);
            goto L_08001F18;
    }
    // 0x08001EF8: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x08001EFC: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x08001F00: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001F04: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001F08: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X1F28) << 16);
    // 0x08001F0C: addiu       $a0, $a0, 0x1F28
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X1F28));
    // 0x08001F10: jalr        $t9
    // 0x08001F14: sh          $t6, 0x8A($t7)
    MEM_H(0X8A, ctx->r15) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001F14: sh          $t6, 0x8A($t7)
    MEM_H(0X8A, ctx->r15) = ctx->r14;
    after_1:
L_08001F18:
    // 0x08001F18: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08001F1C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08001F20: jr          $ra
    // 0x08001F24: nop

    TRACE_RETURN()
    return;
    // 0x08001F24: nop

;}
RECOMP_FUNC void func_08006F14_6BA1B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08006F14: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x08006F18: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08006F1C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08006F20: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x08006F24: lw          $t0, 0xDC($a0)
    ctx->r8 = MEM_W(ctx->r4, 0XDC);
    // 0x08006F28: lui         $t9, 0x801
    ctx->r25 = S32(RELOC_HI16(20, 0XA854) << 16);
    // 0x08006F2C: addiu       $t9, $t9, -0x57AC
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(20, 0XA854));
    // 0x08006F30: lw          $t6, 0x18($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X18);
    // 0x08006F34: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08006F38: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x08006F3C: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x08006F40: jalr        $t9
    // 0x08006F44: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08006F44: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    after_0:
    // 0x08006F48: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x08006F4C: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x08006F50: lui         $v0, 0x8002
    ctx->r2 = S32(0X8002 << 16);
    // 0x08006F54: lhu         $t8, 0x16($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X16);
    // 0x08006F58: addiu       $v0, $v0, 0x3E94
    ctx->r2 = ADD32(ctx->r2, 0X3E94);
    // 0x08006F5C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x08006F60: sh          $t8, 0x16($t1)
    MEM_H(0X16, ctx->r9) = ctx->r24;
    // 0x08006F64: jalr        $v0
    // 0x08006F68: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x08006F68: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    after_1:
    // 0x08006F6C: beq         $v0, $zero, L_08006F80
    if (ctx->r2 == 0) {
        // 0x08006F70: lw          $t0, 0x38($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X38);
            goto L_08006F80;
    }
    // 0x08006F70: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x08006F74: lw          $t2, 0x60($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X60);
    // 0x08006F78: ori         $t3, $t2, 0x1
    ctx->r11 = ctx->r10 | 0X1;
    // 0x08006F7C: sw          $t3, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r11;
L_08006F80:
    // 0x08006F80: lw          $t4, 0x68($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X68);
    // 0x08006F84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08006F88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08006F8C: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x08006F90: beq         $t5, $zero, L_08007050
    if (ctx->r13 == 0) {
        // 0x08006F94: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_08007050;
    }
    // 0x08006F94: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08006F98: lbu         $v1, 0x8C($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0X8C);
    // 0x08006F9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08006FA0: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x08006FA4: bgez        $v1, L_08006FB8
    if (SIGNED(ctx->r3) >= 0) {
        // 0x08006FA8: andi        $t6, $v1, 0x3
        ctx->r14 = ctx->r3 & 0X3;
            goto L_08006FB8;
    }
    // 0x08006FA8: andi        $t6, $v1, 0x3
    ctx->r14 = ctx->r3 & 0X3;
    // 0x08006FAC: beq         $t6, $zero, L_08006FB8
    if (ctx->r14 == 0) {
        // 0x08006FB0: nop
    
            goto L_08006FB8;
    }
    // 0x08006FB0: nop

    // 0x08006FB4: addiu       $t6, $t6, -0x4
    ctx->r14 = ADD32(ctx->r14, -0X4);
L_08006FB8:
    // 0x08006FB8: bne         $t6, $zero, L_08007000
    if (ctx->r14 != 0) {
        // 0x08006FBC: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_08007000;
    }
    // 0x08006FBC: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x08006FC0: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x08006FC4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x08006FC8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08006FCC: addiu       $t9, $t9, -0x20A0
    ctx->r25 = ADD32(ctx->r25, -0X20A0);
    // 0x08006FD0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08006FD4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x08006FD8: jalr        $t9
    // 0x08006FDC: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08006FDC: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    after_2:
    // 0x08006FE0: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x08006FE4: lbu         $v1, 0x8C($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0X8C);
    // 0x08006FE8: bgez        $v1, L_08006FFC
    if (SIGNED(ctx->r3) >= 0) {
        // 0x08006FEC: andi        $t7, $v1, 0x3
        ctx->r15 = ctx->r3 & 0X3;
            goto L_08006FFC;
    }
    // 0x08006FEC: andi        $t7, $v1, 0x3
    ctx->r15 = ctx->r3 & 0X3;
    // 0x08006FF0: beq         $t7, $zero, L_08006FFC
    if (ctx->r15 == 0) {
        // 0x08006FF4: nop
    
            goto L_08006FFC;
    }
    // 0x08006FF4: nop

    // 0x08006FF8: addiu       $t7, $t7, -0x4
    ctx->r15 = ADD32(ctx->r15, -0X4);
L_08006FFC:
    // 0x08006FFC: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
L_08007000:
    // 0x08007000: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x08007004: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08007008: bne         $v1, $at, L_08007030
    if (ctx->r3 != ctx->r1) {
        // 0x0800700C: addiu       $v0, $v0, -0x20A0
        ctx->r2 = ADD32(ctx->r2, -0X20A0);
            goto L_08007030;
    }
    // 0x0800700C: addiu       $v0, $v0, -0x20A0
    ctx->r2 = ADD32(ctx->r2, -0X20A0);
    // 0x08007010: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08007014: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x08007018: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x0800701C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08007020: jalr        $v0
    // 0x08007024: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x08007024: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x08007028: b           L_08007068
    // 0x0800702C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
        goto L_08007068;
    // 0x0800702C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
L_08007030:
    // 0x08007030: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08007034: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08007038: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x0800703C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08007040: jalr        $v0
    // 0x08007044: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x08007044: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
    // 0x08007048: b           L_08007068
    // 0x0800704C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
        goto L_08007068;
    // 0x0800704C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
L_08007050:
    // 0x08007050: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08007054: addiu       $t9, $t9, -0x20A0
    ctx->r25 = ADD32(ctx->r25, -0X20A0);
    // 0x08007058: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x0800705C: jalr        $t9
    // 0x08007060: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08007060: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
    // 0x08007064: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
L_08007068:
    // 0x08007068: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x0800706C: jalr        $t9
    // 0x08007070: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08007070: nop

    after_6:
    // 0x08007074: beq         $v0, $zero, L_080070C4
    if (ctx->r2 == 0) {
        // 0x08007078: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_080070C4;
    }
    // 0x08007078: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800707C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08007080: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08007084: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08007088: addiu       $a1, $a1, 0x183C
    ctx->r5 = ADD32(ctx->r5, 0X183C);
    // 0x0800708C: jalr        $t9
    // 0x08007090: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08007090: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_7:
    // 0x08007094: beq         $v0, $zero, L_080070B4
    if (ctx->r2 == 0) {
        // 0x08007098: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(20, 0X72E0) << 16);
            goto L_080070B4;
    }
    // 0x08007098: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X72E0) << 16);
    // 0x0800709C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x080070A0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x080070A4: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x080070A8: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    // 0x080070AC: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x080070B0: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
L_080070B4:
    // 0x080070B4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080070B8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080070BC: jalr        $t9
    // 0x080070C0: addiu       $a0, $a0, 0x72E0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X72E0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x080070C0: addiu       $a0, $a0, 0x72E0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X72E0));
    after_8:
L_080070C4:
    // 0x080070C4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x080070C8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x080070CC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x080070D0: jr          $ra
    // 0x080070D4: nop

    TRACE_RETURN()
    return;
    // 0x080070D4: nop

;}
RECOMP_FUNC void func_080095B0_6BC850(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080095B0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x080095B4: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x080095B8: lw          $t6, -0x39D8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39D8);
    // 0x080095BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080095C0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080095C4: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x080095C8: lw          $t7, 0x2C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X2C);
    // 0x080095CC: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x080095D0: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x080095D4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080095D8: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x080095DC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080095E0: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x080095E4: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x080095E8: lw          $a0, 0xD0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XD0);
    // 0x080095EC: lui         $a1, 0xC32A
    ctx->r5 = S32(0XC32A << 16);
    // 0x080095F0: lui         $a2, 0x428C
    ctx->r6 = S32(0X428C << 16);
    // 0x080095F4: jalr        $t9
    // 0x080095F8: lui         $a3, 0x432A
    ctx->r7 = S32(0X432A << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080095F8: lui         $a3, 0x432A
    ctx->r7 = S32(0X432A << 16);
    after_0:
    // 0x080095FC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x08009600: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x08009604: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x08009608: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x0800960C: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08009610: addiu       $v1, $s0, 0xD0
    ctx->r3 = ADD32(ctx->r16, 0XD0);
    // 0x08009614: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08009618: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x0800961C: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x08009620: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x08009624: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x08009628: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x0800962C: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x08009630: jalr        $t9
    // 0x08009634: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08009634: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_1:
    // 0x08009638: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x0800963C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08009640: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x08009644: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x08009648: jalr        $t9
    // 0x0800964C: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800964C: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    after_2:
    // 0x08009650: lhu         $v0, 0x8A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8A);
    // 0x08009654: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08009658: addiu       $t9, $t9, 0x4088
    ctx->r25 = ADD32(ctx->r25, 0X4088);
    // 0x0800965C: addiu       $t0, $v0, -0x1
    ctx->r8 = ADD32(ctx->r2, -0X1);
    // 0x08009660: bne         $v0, $zero, L_08009688
    if (ctx->r2 != 0) {
        // 0x08009664: sh          $t0, 0x8A($s0)
        MEM_H(0X8A, ctx->r16) = ctx->r8;
            goto L_08009688;
    }
    // 0x08009664: sh          $t0, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r8;
    // 0x08009668: jalr        $t9
    // 0x0800966C: addiu       $a0, $zero, 0x132
    ctx->r4 = ADD32(0, 0X132);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800966C: addiu       $a0, $zero, 0x132
    ctx->r4 = ADD32(0, 0X132);
    after_3:
    // 0x08009670: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08009674: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08009678: lui         $a0, 0x801
    ctx->r4 = S32(RELOC_HI16(20, 0X8A38) << 16);
    // 0x0800967C: sb          $zero, 0xDD($s0)
    MEM_B(0XDD, ctx->r16) = 0;
    // 0x08009680: jalr        $t9
    // 0x08009684: addiu       $a0, $a0, -0x75C8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X8A38));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08009684: addiu       $a0, $a0, -0x75C8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X8A38));
    after_4:
L_08009688:
    // 0x08009688: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0800968C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08009690: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x08009694: jr          $ra
    // 0x08009698: nop

    TRACE_RETURN()
    return;
    // 0x08009698: nop

;}
RECOMP_FUNC void func_08007DEC_6BB08C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08007DEC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08007DF0: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x08007DF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08007DF8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x08007DFC: addiu       $v0, $v0, -0x6D4C
    ctx->r2 = ADD32(ctx->r2, -0X6D4C);
    // 0x08007E00: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x08007E04: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x08007E08: jalr        $v0
    // 0x08007E0C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x08007E0C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_0:
    // 0x08007E10: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x08007E14: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x08007E18: lui         $t7, 0x4
    ctx->r15 = S32(0X4 << 16);
    // 0x08007E1C: addiu       $t8, $v0, 0xA
    ctx->r24 = ADD32(ctx->r2, 0XA);
    // 0x08007E20: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x08007E24: lhu         $t7, -0x5232($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X5232);
    // 0x08007E28: div         $zero, $t7, $t8
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r24))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r24)));
    // 0x08007E2C: mfhi        $t9
    ctx->r25 = hi;
    // 0x08007E30: bne         $t8, $zero, L_08007E3C
    if (ctx->r24 != 0) {
        // 0x08007E34: nop
    
            goto L_08007E3C;
    }
    // 0x08007E34: nop

    // 0x08007E38: break       7
    do_break(134250040);
L_08007E3C:
    // 0x08007E3C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x08007E40: bne         $t8, $at, L_08007E54
    if (ctx->r24 != ctx->r1) {
        // 0x08007E44: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_08007E54;
    }
    // 0x08007E44: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08007E48: bne         $t7, $at, L_08007E54
    if (ctx->r15 != ctx->r1) {
        // 0x08007E4C: nop
    
            goto L_08007E54;
    }
    // 0x08007E4C: nop

    // 0x08007E50: break       6
    do_break(134250064);
L_08007E54:
    // 0x08007E54: bnel        $t9, $zero, L_08007F0C
    if (ctx->r25 != 0) {
        // 0x08007E58: lw          $t9, 0x1C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X1C);
            goto L_08007F0C;
    }
    goto skip_0;
    // 0x08007E58: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x08007E5C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x08007E60: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    // 0x08007E64: jalr        $t9
    // 0x08007E68: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08007E68: nop

    after_1:
    // 0x08007E6C: slti        $at, $v0, 0x33
    ctx->r1 = SIGNED(ctx->r2) < 0X33 ? 1 : 0;
    // 0x08007E70: bne         $at, $zero, L_08007EC4
    if (ctx->r1 != 0) {
        // 0x08007E74: lw          $a0, 0x30($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X30);
            goto L_08007EC4;
    }
    // 0x08007E74: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x08007E78: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08007E7C: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08007E80: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08007E84: addiu       $a1, $a1, 0x12EC
    ctx->r5 = ADD32(ctx->r5, 0X12EC);
    // 0x08007E88: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x08007E8C: jalr        $t9
    // 0x08007E90: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08007E90: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x08007E94: beq         $v0, $zero, L_08007F08
    if (ctx->r2 == 0) {
        // 0x08007E98: lui         $at, 0x3FC0
        ctx->r1 = S32(0X3FC0 << 16);
            goto L_08007F08;
    }
    // 0x08007E98: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x08007E9C: lw          $t0, 0x64($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X64);
    // 0x08007EA0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08007EA4: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x08007EA8: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x08007EAC: or          $t1, $t0, $at
    ctx->r9 = ctx->r8 | ctx->r1;
    // 0x08007EB0: sw          $t1, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r9;
    // 0x08007EB4: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    // 0x08007EB8: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x08007EBC: b           L_08007F08
    // 0x08007EC0: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
        goto L_08007F08;
    // 0x08007EC0: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
L_08007EC4:
    // 0x08007EC4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08007EC8: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08007ECC: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08007ED0: addiu       $a1, $a1, 0x183C
    ctx->r5 = ADD32(ctx->r5, 0X183C);
    // 0x08007ED4: jalr        $t9
    // 0x08007ED8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08007ED8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x08007EDC: beq         $v0, $zero, L_08007F08
    if (ctx->r2 == 0) {
        // 0x08007EE0: lui         $at, 0x3FC0
        ctx->r1 = S32(0X3FC0 << 16);
            goto L_08007F08;
    }
    // 0x08007EE0: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x08007EE4: lw          $t2, 0x64($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X64);
    // 0x08007EE8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08007EEC: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x08007EF0: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x08007EF4: or          $t3, $t2, $at
    ctx->r11 = ctx->r10 | ctx->r1;
    // 0x08007EF8: sw          $t3, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r11;
    // 0x08007EFC: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    // 0x08007F00: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x08007F04: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
L_08007F08:
    // 0x08007F08: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
L_08007F0C:
    // 0x08007F0C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x08007F10: jalr        $t9
    // 0x08007F14: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08007F14: nop

    after_4:
    // 0x08007F18: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x08007F1C: lw          $t4, -0x3A38($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X3A38);
    // 0x08007F20: lui         $t5, 0x4
    ctx->r13 = S32(0X4 << 16);
    // 0x08007F24: addiu       $t6, $v0, 0x7
    ctx->r14 = ADD32(ctx->r2, 0X7);
    // 0x08007F28: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x08007F2C: lhu         $t5, -0x5232($t5)
    ctx->r13 = MEM_HU(ctx->r13, -0X5232);
    // 0x08007F30: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    // 0x08007F34: div         $zero, $t5, $t6
    lo = S32(S64(S32(ctx->r13)) / S64(S32(ctx->r14))); hi = S32(S64(S32(ctx->r13)) % S64(S32(ctx->r14)));
    // 0x08007F38: mfhi        $t7
    ctx->r15 = hi;
    // 0x08007F3C: bne         $t6, $zero, L_08007F48
    if (ctx->r14 != 0) {
        // 0x08007F40: nop
    
            goto L_08007F48;
    }
    // 0x08007F40: nop

    // 0x08007F44: break       7
    do_break(134250308);
L_08007F48:
    // 0x08007F48: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x08007F4C: bne         $t6, $at, L_08007F60
    if (ctx->r14 != ctx->r1) {
        // 0x08007F50: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_08007F60;
    }
    // 0x08007F50: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08007F54: bne         $t5, $at, L_08007F60
    if (ctx->r13 != ctx->r1) {
        // 0x08007F58: nop
    
            goto L_08007F60;
    }
    // 0x08007F58: nop

    // 0x08007F5C: break       6
    do_break(134250332);
L_08007F60:
    // 0x08007F60: bnel        $t7, $zero, L_08008158
    if (ctx->r15 != 0) {
        // 0x08007F64: lw          $a1, 0x30($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X30);
            goto L_08008158;
    }
    goto skip_1;
    // 0x08007F64: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    skip_1:
    // 0x08007F68: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x08007F6C: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x08007F70: addiu       $v1, $v1, 0x71A8
    ctx->r3 = ADD32(ctx->r3, 0X71A8);
    // 0x08007F74: jalr        $t9
    // 0x08007F78: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08007F78: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_5:
    // 0x08007F7C: slti        $at, $v0, 0x33
    ctx->r1 = SIGNED(ctx->r2) < 0X33 ? 1 : 0;
    // 0x08007F80: bne         $at, $zero, L_08008078
    if (ctx->r1 != 0) {
        // 0x08007F84: lw          $v1, 0x18($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X18);
            goto L_08008078;
    }
    // 0x08007F84: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x08007F88: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x08007F8C: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    // 0x08007F90: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x08007F94: jalr        $t9
    // 0x08007F98: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08007F98: nop

    after_6:
    // 0x08007F9C: slti        $at, $v0, 0x33
    ctx->r1 = SIGNED(ctx->r2) < 0X33 ? 1 : 0;
    // 0x08007FA0: bne         $at, $zero, L_08008010
    if (ctx->r1 != 0) {
        // 0x08007FA4: lw          $v1, 0x18($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X18);
            goto L_08008010;
    }
    // 0x08007FA4: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x08007FA8: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08007FAC: addiu       $a1, $a1, 0x12EC
    ctx->r5 = ADD32(ctx->r5, 0X12EC);
    // 0x08007FB0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x08007FB4: jalr        $v1
    // 0x08007FB8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_7;
    // 0x08007FB8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_7:
    // 0x08007FBC: beq         $v0, $zero, L_08008154
    if (ctx->r2 == 0) {
        // 0x08007FC0: lui         $at, 0x3F00
        ctx->r1 = S32(0X3F00 << 16);
            goto L_08008154;
    }
    // 0x08007FC0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x08007FC4: lw          $t8, 0x64($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X64);
    // 0x08007FC8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08007FCC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x08007FD0: or          $t0, $t8, $at
    ctx->r8 = ctx->r24 | ctx->r1;
    // 0x08007FD4: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x08007FD8: lui         $at, 0x41D0
    ctx->r1 = S32(0X41D0 << 16);
    // 0x08007FDC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08007FE0: sw          $t0, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r8;
    // 0x08007FE4: lui         $at, 0xC28C
    ctx->r1 = S32(0XC28C << 16);
    // 0x08007FE8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08007FEC: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x08007FF0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08007FF4: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    // 0x08007FF8: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x08007FFC: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    // 0x08008000: swc1        $f4, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f4.u32l;
    // 0x08008004: swc1        $f6, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f6.u32l;
    // 0x08008008: b           L_08008154
    // 0x0800800C: swc1        $f8, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f8.u32l;
        goto L_08008154;
    // 0x0800800C: swc1        $f8, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f8.u32l;
L_08008010:
    // 0x08008010: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08008014: addiu       $a1, $a1, 0x183C
    ctx->r5 = ADD32(ctx->r5, 0X183C);
    // 0x08008018: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x0800801C: jalr        $v1
    // 0x08008020: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_8;
    // 0x08008020: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
    // 0x08008024: beq         $v0, $zero, L_08008154
    if (ctx->r2 == 0) {
        // 0x08008028: lui         $at, 0x3F00
        ctx->r1 = S32(0X3F00 << 16);
            goto L_08008154;
    }
    // 0x08008028: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x0800802C: lw          $t1, 0x64($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X64);
    // 0x08008030: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08008034: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x08008038: or          $t2, $t1, $at
    ctx->r10 = ctx->r9 | ctx->r1;
    // 0x0800803C: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x08008040: lui         $at, 0x41D0
    ctx->r1 = S32(0X41D0 << 16);
    // 0x08008044: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08008048: sw          $t2, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r10;
    // 0x0800804C: lui         $at, 0xC28C
    ctx->r1 = S32(0XC28C << 16);
    // 0x08008050: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08008054: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x08008058: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x0800805C: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    // 0x08008060: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x08008064: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    // 0x08008068: swc1        $f10, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f10.u32l;
    // 0x0800806C: swc1        $f16, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f16.u32l;
    // 0x08008070: b           L_08008154
    // 0x08008074: swc1        $f18, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f18.u32l;
        goto L_08008154;
    // 0x08008074: swc1        $f18, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f18.u32l;
L_08008078:
    // 0x08008078: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x0800807C: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    // 0x08008080: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x08008084: jalr        $t9
    // 0x08008088: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08008088: nop

    after_9:
    // 0x0800808C: slti        $at, $v0, 0x33
    ctx->r1 = SIGNED(ctx->r2) < 0X33 ? 1 : 0;
    // 0x08008090: bne         $at, $zero, L_080080F8
    if (ctx->r1 != 0) {
        // 0x08008094: lw          $v1, 0x18($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X18);
            goto L_080080F8;
    }
    // 0x08008094: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x08008098: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x0800809C: addiu       $a1, $a1, 0x12EC
    ctx->r5 = ADD32(ctx->r5, 0X12EC);
    // 0x080080A0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x080080A4: jalr        $v1
    // 0x080080A8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_10;
    // 0x080080A8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_10:
    // 0x080080AC: beq         $v0, $zero, L_08008154
    if (ctx->r2 == 0) {
        // 0x080080B0: lui         $at, 0x3F00
        ctx->r1 = S32(0X3F00 << 16);
            goto L_08008154;
    }
    // 0x080080B0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x080080B4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x080080B8: lw          $t3, 0x64($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X64);
    // 0x080080BC: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x080080C0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x080080C4: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x080080C8: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x080080CC: or          $t4, $t3, $at
    ctx->r12 = ctx->r11 | ctx->r1;
    // 0x080080D0: sw          $t4, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r12;
    // 0x080080D4: lui         $at, 0xC220
    ctx->r1 = S32(0XC220 << 16);
    // 0x080080D8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080080DC: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    // 0x080080E0: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x080080E4: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    // 0x080080E8: swc1        $f2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f2.u32l;
    // 0x080080EC: swc1        $f2, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f2.u32l;
    // 0x080080F0: b           L_08008154
    // 0x080080F4: swc1        $f4, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f4.u32l;
        goto L_08008154;
    // 0x080080F4: swc1        $f4, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f4.u32l;
L_080080F8:
    // 0x080080F8: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x080080FC: addiu       $a1, $a1, 0x183C
    ctx->r5 = ADD32(ctx->r5, 0X183C);
    // 0x08008100: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x08008104: jalr        $v1
    // 0x08008108: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_11;
    // 0x08008108: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_11:
    // 0x0800810C: beq         $v0, $zero, L_08008154
    if (ctx->r2 == 0) {
        // 0x08008110: lui         $at, 0x3F00
        ctx->r1 = S32(0X3F00 << 16);
            goto L_08008154;
    }
    // 0x08008110: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x08008114: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08008118: lw          $t5, 0x64($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X64);
    // 0x0800811C: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x08008120: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x08008124: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x08008128: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x0800812C: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x08008130: sw          $t6, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r14;
    // 0x08008134: lui         $at, 0xC220
    ctx->r1 = S32(0XC220 << 16);
    // 0x08008138: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x0800813C: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    // 0x08008140: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x08008144: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    // 0x08008148: swc1        $f2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f2.u32l;
    // 0x0800814C: swc1        $f2, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f2.u32l;
    // 0x08008150: swc1        $f6, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f6.u32l;
L_08008154:
    // 0x08008154: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
L_08008158:
    // 0x08008158: lui         $a0, 0x801
    ctx->r4 = S32(RELOC_HI16(20, 0X8194) << 16);
    // 0x0800815C: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x08008160: lhu         $v0, 0x8A($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X8A);
    // 0x08008164: addiu       $a0, $a0, -0x7E6C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X8194));
    // 0x08008168: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800816C: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x08008170: bne         $v0, $zero, L_08008184
    if (ctx->r2 != 0) {
        // 0x08008174: sh          $t7, 0x8A($a1)
        MEM_H(0X8A, ctx->r5) = ctx->r15;
            goto L_08008184;
    }
    // 0x08008174: sh          $t7, 0x8A($a1)
    MEM_H(0X8A, ctx->r5) = ctx->r15;
    // 0x08008178: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800817C: jalr        $t9
    // 0x08008180: sh          $t8, 0x8A($a1)
    MEM_H(0X8A, ctx->r5) = ctx->r24;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x08008180: sh          $t8, 0x8A($a1)
    MEM_H(0X8A, ctx->r5) = ctx->r24;
    after_12:
L_08008184:
    // 0x08008184: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08008188: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x0800818C: jr          $ra
    // 0x08008190: nop

    TRACE_RETURN()
    return;
    // 0x08008190: nop

;}
RECOMP_FUNC void func_08006638_6B98D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08006638: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800663C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08006640: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08006644: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08006648: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800664C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X73FC) << 16);
    // 0x08006650: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08006654: jalr        $t9
    // 0x08006658: addiu       $a0, $a0, 0x73FC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X73FC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08006658: addiu       $a0, $a0, 0x73FC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X73FC));
    after_0:
    // 0x0800665C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08006660: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08006664: jr          $ra
    // 0x08006668: nop

    TRACE_RETURN()
    return;
    // 0x08006668: nop

;}
RECOMP_FUNC void func_08003F20_6B71C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003F20: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08003F24: lhu         $v0, -0x33D0($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X33D0);
    // 0x08003F28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003F2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003F30: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x08003F34: bgez        $v0, L_08003F48
    if (SIGNED(ctx->r2) >= 0) {
        // 0x08003F38: andi        $t6, $v0, 0x3
        ctx->r14 = ctx->r2 & 0X3;
            goto L_08003F48;
    }
    // 0x08003F38: andi        $t6, $v0, 0x3
    ctx->r14 = ctx->r2 & 0X3;
    // 0x08003F3C: beq         $t6, $zero, L_08003F48
    if (ctx->r14 == 0) {
        // 0x08003F40: nop
    
            goto L_08003F48;
    }
    // 0x08003F40: nop

    // 0x08003F44: addiu       $t6, $t6, -0x4
    ctx->r14 = ADD32(ctx->r14, -0X4);
L_08003F48:
    // 0x08003F48: slti        $at, $t6, 0x2
    ctx->r1 = SIGNED(ctx->r14) < 0X2 ? 1 : 0;
    // 0x08003F4C: beq         $at, $zero, L_08003F84
    if (ctx->r1 == 0) {
        // 0x08003F50: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_08003F84;
    }
    // 0x08003F50: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x08003F54: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08003F58: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08003F5C: lwc1        $f4, 0xC($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0XC);
    // 0x08003F60: lhu         $t7, 0x14($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X14);
    // 0x08003F64: lhu         $t9, 0x18($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0X18);
    // 0x08003F68: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08003F6C: addiu       $t8, $t7, 0x5
    ctx->r24 = ADD32(ctx->r15, 0X5);
    // 0x08003F70: addiu       $t0, $t9, 0x5
    ctx->r8 = ADD32(ctx->r25, 0X5);
    // 0x08003F74: sh          $t8, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r24;
    // 0x08003F78: swc1        $f8, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f8.u32l;
    // 0x08003F7C: b           L_08003FB8
    // 0x08003F80: sh          $t0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r8;
        goto L_08003FB8;
    // 0x08003F80: sh          $t0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r8;
L_08003F84:
    // 0x08003F84: slti        $at, $v0, 0x4
    ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x08003F88: beq         $at, $zero, L_08003FB8
    if (ctx->r1 == 0) {
        // 0x08003F8C: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_08003FB8;
    }
    // 0x08003F8C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08003F90: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08003F94: lwc1        $f10, 0xC($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0XC);
    // 0x08003F98: lhu         $t1, 0x14($a1)
    ctx->r9 = MEM_HU(ctx->r5, 0X14);
    // 0x08003F9C: lhu         $t3, 0x18($a1)
    ctx->r11 = MEM_HU(ctx->r5, 0X18);
    // 0x08003FA0: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x08003FA4: addiu       $t2, $t1, -0x5
    ctx->r10 = ADD32(ctx->r9, -0X5);
    // 0x08003FA8: addiu       $t4, $t3, -0x5
    ctx->r12 = ADD32(ctx->r11, -0X5);
    // 0x08003FAC: sh          $t2, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r10;
    // 0x08003FB0: swc1        $f18, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f18.u32l;
    // 0x08003FB4: sh          $t4, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r12;
L_08003FB8:
    // 0x08003FB8: lhu         $t5, 0x16($a1)
    ctx->r13 = MEM_HU(ctx->r5, 0X16);
    // 0x08003FBC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X4000) << 16);
    // 0x08003FC0: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x08003FC4: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x08003FC8: sh          $t6, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r14;
    // 0x08003FCC: lhu         $v0, 0x8A($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X8A);
    // 0x08003FD0: addiu       $a0, $a0, 0x4000
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X4000));
    // 0x08003FD4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003FD8: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x08003FDC: bne         $v0, $zero, L_08003FF0
    if (ctx->r2 != 0) {
        // 0x08003FE0: sh          $t7, 0x8A($a2)
        MEM_H(0X8A, ctx->r6) = ctx->r15;
            goto L_08003FF0;
    }
    // 0x08003FE0: sh          $t7, 0x8A($a2)
    MEM_H(0X8A, ctx->r6) = ctx->r15;
    // 0x08003FE4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003FE8: jalr        $t9
    // 0x08003FEC: sh          $t8, 0x8A($a2)
    MEM_H(0X8A, ctx->r6) = ctx->r24;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003FEC: sh          $t8, 0x8A($a2)
    MEM_H(0X8A, ctx->r6) = ctx->r24;
    after_0:
L_08003FF0:
    // 0x08003FF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08003FF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08003FF8: jr          $ra
    // 0x08003FFC: nop

    TRACE_RETURN()
    return;
    // 0x08003FFC: nop

;}
