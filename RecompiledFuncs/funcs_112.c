#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_08001148_6C9358(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001148: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800114C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001150: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001154: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001158: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x0800115C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001160: jalr        $t9
    // 0x08001164: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001164: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    after_0:
    // 0x08001168: bne         $v0, $zero, L_080011B0
    if (ctx->r2 != 0) {
        // 0x0800116C: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_080011B0;
    }
    // 0x0800116C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08001170: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001174: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08001178: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x0800117C: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08001180: jalr        $t9
    // 0x08001184: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001184: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_1:
    // 0x08001188: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800118C: addiu       $t9, $t9, -0x7234
    ctx->r25 = ADD32(ctx->r25, -0X7234);
    // 0x08001190: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08001194: jalr        $t9
    // 0x08001198: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001198: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_2:
    // 0x0800119C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080011A0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080011A4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X11C8) << 16);
    // 0x080011A8: jalr        $t9
    // 0x080011AC: addiu       $a0, $a0, 0x11C8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X11C8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080011AC: addiu       $a0, $a0, 0x11C8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X11C8));
    after_3:
L_080011B0:
    // 0x080011B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080011B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080011B8: jr          $ra
    // 0x080011BC: nop

    TRACE_RETURN()
    return;
    // 0x080011BC: nop

    // 0x080011C0: jr          $ra
    // 0x080011C4: nop

    TRACE_RETURN()
    return;
    // 0x080011C4: nop

;}
RECOMP_FUNC void func_080036FC_6CB90C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080036FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003700: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003704: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08003708: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x0800370C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x08003710: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08003714: xori        $v1, $v0, 0x19
    ctx->r3 = ctx->r2 ^ 0X19;
    // 0x08003718: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x0800371C: bne         $v1, $zero, L_08003738
    if (ctx->r3 != 0) {
        // 0x08003720: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08003738;
    }
    // 0x08003720: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08003724: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08003728: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    // 0x0800372C: jalr        $t9
    // 0x08003730: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003730: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x08003734: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
L_08003738:
    // 0x08003738: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800373C: addiu       $t9, $t9, 0x210
    ctx->r25 = ADD32(ctx->r25, 0X210);
    // 0x08003740: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x08003744: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x08003748: jalr        $t9
    // 0x0800374C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800374C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x08003750: bne         $v0, $zero, L_080037B0
    if (ctx->r2 != 0) {
        // 0x08003754: lw          $a2, 0x18($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X18);
            goto L_080037B0;
    }
    // 0x08003754: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x08003758: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800375C: addiu       $t9, $t9, -0x5DD4
    ctx->r25 = ADD32(ctx->r25, -0X5DD4);
    // 0x08003760: sw          $zero, 0x60($a2)
    MEM_W(0X60, ctx->r6) = 0;
    // 0x08003764: jalr        $t9
    // 0x08003768: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003768: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    after_2:
    // 0x0800376C: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08003770: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x08003774: lw          $t7, 0x184($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X184);
    // 0x08003778: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x0800377C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08003780: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x08003784: sw          $t8, 0x184($v0)
    MEM_W(0X184, ctx->r2) = ctx->r24;
    // 0x08003788: ori         $t1, $t8, 0x1000
    ctx->r9 = ctx->r24 | 0X1000;
    // 0x0800378C: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x08003790: sw          $t1, 0x184($v0)
    MEM_W(0X184, ctx->r2) = ctx->r9;
    // 0x08003794: jalr        $t9
    // 0x08003798: addiu       $a0, $zero, 0x16B
    ctx->r4 = ADD32(0, 0X16B);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08003798: addiu       $a0, $zero, 0x16B
    ctx->r4 = ADD32(0, 0X16B);
    after_3:
    // 0x0800379C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080037A0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080037A4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X37C0) << 16);
    // 0x080037A8: jalr        $t9
    // 0x080037AC: addiu       $a0, $a0, 0x37C0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X37C0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080037AC: addiu       $a0, $a0, 0x37C0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X37C0));
    after_4:
L_080037B0:
    // 0x080037B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080037B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080037B8: jr          $ra
    // 0x080037BC: nop

    TRACE_RETURN()
    return;
    // 0x080037BC: nop

;}
RECOMP_FUNC void func_08005AA0_6CDCB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08005AA0: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x08005AA4: lw          $t6, -0x3A1C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A1C);
    // 0x08005AA8: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x08005AAC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08005AB0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08005AB4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08005AB8: bne         $t6, $zero, L_08005B60
    if (ctx->r14 != 0) {
        // 0x08005ABC: sw          $a1, 0x74($sp)
        MEM_W(0X74, ctx->r29) = ctx->r5;
            goto L_08005B60;
    }
    // 0x08005ABC: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x08005AC0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08005AC4: addiu       $t9, $t9, 0x1BB4
    ctx->r25 = ADD32(ctx->r25, 0X1BB4);
    // 0x08005AC8: jalr        $t9
    // 0x08005ACC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08005ACC: nop

    after_0:
    // 0x08005AD0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08005AD4: addiu       $t9, $t9, 0x1C58
    ctx->r25 = ADD32(ctx->r25, 0X1C58);
    // 0x08005AD8: jalr        $t9
    // 0x08005ADC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08005ADC: nop

    after_1:
    // 0x08005AE0: lw          $v0, 0x84($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X84);
    // 0x08005AE4: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x08005AE8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08005AEC: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08005AF0: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08005AF4: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
    // 0x08005AF8: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x08005AFC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08005B00: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x08005B04: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x08005B08: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x08005B0C: lw          $a0, 0xE4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE4);
    // 0x08005B10: add.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x08005B14: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x08005B18: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x08005B1C: jalr        $t9
    // 0x08005B20: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08005B20: nop

    after_2:
    // 0x08005B24: lw          $v0, 0x84($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X84);
    // 0x08005B28: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x08005B2C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08005B30: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08005B34: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08005B38: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x08005B3C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08005B40: lw          $a0, 0xE4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE4);
    // 0x08005B44: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x08005B48: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x08005B4C: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x08005B50: jalr        $t9
    // 0x08005B54: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08005B54: nop

    after_3:
    // 0x08005B58: b           L_08005F24
    // 0x08005B5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_08005F24;
    // 0x08005B5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08005B60:
    // 0x08005B60: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08005B64: lw          $v0, -0x3A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A38);
    // 0x08005B68: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x08005B6C: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x08005B70: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x08005B74: lhu         $t7, 0x307A($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X307A);
    // 0x08005B78: andi        $t8, $t7, 0x10
    ctx->r24 = ctx->r15 & 0X10;
    // 0x08005B7C: beql        $t8, $zero, L_08005BCC
    if (ctx->r24 == 0) {
        // 0x08005B80: lbu         $v0, 0xD6($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0XD6);
            goto L_08005BCC;
    }
    goto skip_0;
    // 0x08005B80: lbu         $v0, 0xD6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD6);
    skip_0:
    // 0x08005B84: lhu         $v1, 0x307C($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X307C);
    // 0x08005B88: andi        $t0, $v1, 0x8
    ctx->r8 = ctx->r3 & 0X8;
    // 0x08005B8C: beq         $t0, $zero, L_08005BAC
    if (ctx->r8 == 0) {
        // 0x08005B90: andi        $t2, $v1, 0x4
        ctx->r10 = ctx->r3 & 0X4;
            goto L_08005BAC;
    }
    // 0x08005B90: andi        $t2, $v1, 0x4
    ctx->r10 = ctx->r3 & 0X4;
    // 0x08005B94: lbu         $v0, 0xD6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD6);
    // 0x08005B98: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x08005B9C: bne         $at, $zero, L_08005BC8
    if (ctx->r1 != 0) {
        // 0x08005BA0: addiu       $t1, $v0, -0x1
        ctx->r9 = ADD32(ctx->r2, -0X1);
            goto L_08005BC8;
    }
    // 0x08005BA0: addiu       $t1, $v0, -0x1
    ctx->r9 = ADD32(ctx->r2, -0X1);
    // 0x08005BA4: b           L_08005BC8
    // 0x08005BA8: sb          $t1, 0xD6($s0)
    MEM_B(0XD6, ctx->r16) = ctx->r9;
        goto L_08005BC8;
    // 0x08005BA8: sb          $t1, 0xD6($s0)
    MEM_B(0XD6, ctx->r16) = ctx->r9;
L_08005BAC:
    // 0x08005BAC: beql        $t2, $zero, L_08005BCC
    if (ctx->r10 == 0) {
        // 0x08005BB0: lbu         $v0, 0xD6($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0XD6);
            goto L_08005BCC;
    }
    goto skip_1;
    // 0x08005BB0: lbu         $v0, 0xD6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD6);
    skip_1:
    // 0x08005BB4: lbu         $v0, 0xD6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD6);
    // 0x08005BB8: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x08005BBC: beq         $at, $zero, L_08005BC8
    if (ctx->r1 == 0) {
        // 0x08005BC0: addiu       $t3, $v0, 0x1
        ctx->r11 = ADD32(ctx->r2, 0X1);
            goto L_08005BC8;
    }
    // 0x08005BC0: addiu       $t3, $v0, 0x1
    ctx->r11 = ADD32(ctx->r2, 0X1);
    // 0x08005BC4: sb          $t3, 0xD6($s0)
    MEM_B(0XD6, ctx->r16) = ctx->r11;
L_08005BC8:
    // 0x08005BC8: lbu         $v0, 0xD6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD6);
L_08005BCC:
    // 0x08005BCC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08005BD0: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x08005BD4: beq         $v0, $at, L_08005BF8
    if (ctx->r2 == ctx->r1) {
        // 0x08005BD8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_08005BF8;
    }
    // 0x08005BD8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08005BDC: beq         $v0, $at, L_08005C04
    if (ctx->r2 == ctx->r1) {
        // 0x08005BE0: addiu       $t5, $zero, 0xC8
        ctx->r13 = ADD32(0, 0XC8);
            goto L_08005C04;
    }
    // 0x08005BE0: addiu       $t5, $zero, 0xC8
    ctx->r13 = ADD32(0, 0XC8);
    // 0x08005BE4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x08005BE8: beq         $v0, $at, L_08005C0C
    if (ctx->r2 == ctx->r1) {
        // 0x08005BEC: addiu       $t6, $zero, 0x12C
        ctx->r14 = ADD32(0, 0X12C);
            goto L_08005C0C;
    }
    // 0x08005BEC: addiu       $t6, $zero, 0x12C
    ctx->r14 = ADD32(0, 0X12C);
    // 0x08005BF0: b           L_08005C14
    // 0x08005BF4: lw          $v0, 0x84($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X84);
        goto L_08005C14;
    // 0x08005BF4: lw          $v0, 0x84($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X84);
L_08005BF8:
    // 0x08005BF8: addiu       $t4, $zero, 0x64
    ctx->r12 = ADD32(0, 0X64);
    // 0x08005BFC: b           L_08005C10
    // 0x08005C00: sh          $t4, 0xD4($s0)
    MEM_H(0XD4, ctx->r16) = ctx->r12;
        goto L_08005C10;
    // 0x08005C00: sh          $t4, 0xD4($s0)
    MEM_H(0XD4, ctx->r16) = ctx->r12;
L_08005C04:
    // 0x08005C04: b           L_08005C10
    // 0x08005C08: sh          $t5, 0xD4($s0)
    MEM_H(0XD4, ctx->r16) = ctx->r13;
        goto L_08005C10;
    // 0x08005C08: sh          $t5, 0xD4($s0)
    MEM_H(0XD4, ctx->r16) = ctx->r13;
L_08005C0C:
    // 0x08005C0C: sh          $t6, 0xD4($s0)
    MEM_H(0XD4, ctx->r16) = ctx->r14;
L_08005C10:
    // 0x08005C10: lw          $v0, 0x84($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X84);
L_08005C14:
    // 0x08005C14: addiu       $v1, $v1, -0x33D0
    ctx->r3 = ADD32(ctx->r3, -0X33D0);
    // 0x08005C18: lwc1        $f10, 0x148($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X148);
    // 0x08005C1C: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
    // 0x08005C20: lwc1        $f18, 0x140($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X140);
    // 0x08005C24: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08005C28: sub.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x08005C2C: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x08005C30: addiu       $a0, $a0, 0x17E0
    ctx->r4 = ADD32(ctx->r4, 0X17E0);
    // 0x08005C34: sub.s       $f2, $f18, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x08005C38: mul.s       $f6, $f0, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x08005C3C: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    // 0x08005C40: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x08005C44: jalr        $a0
    // 0x08005C48: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    LOOKUP_FUNC(ctx->r4)(rdram, ctx);
        goto after_4;
    // 0x08005C48: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    after_4:
    // 0x08005C4C: lhu         $t9, 0xD4($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0XD4);
    // 0x08005C50: lw          $v0, 0x84($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X84);
    // 0x08005C54: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x08005C58: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x08005C5C: addiu       $v1, $v1, -0x33D0
    ctx->r3 = ADD32(ctx->r3, -0X33D0);
    // 0x08005C60: lwc1        $f2, 0x8($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08005C64: bgez        $t9, L_08005C7C
    if (SIGNED(ctx->r25) >= 0) {
        // 0x08005C68: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_08005C7C;
    }
    // 0x08005C68: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x08005C6C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x08005C70: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08005C74: nop

    // 0x08005C78: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
L_08005C7C:
    // 0x08005C7C: div.s       $f14, $f16, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    // 0x08005C80: lwc1        $f4, 0x140($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X140);
    // 0x08005C84: lwc1        $f18, 0x148($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X148);
    // 0x08005C88: lui         $a1, 0x8002
    ctx->r5 = S32(0X8002 << 16);
    // 0x08005C8C: sub.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f2.fl;
    // 0x08005C90: addiu       $a1, $a1, 0x40DC
    ctx->r5 = ADD32(ctx->r5, 0X40DC);
    // 0x08005C94: addiu       $a0, $zero, 0x167
    ctx->r4 = ADD32(0, 0X167);
    // 0x08005C98: mul.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x08005C9C: sub.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f8.fl;
    // 0x08005CA0: swc1        $f10, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f10.u32l;
    // 0x08005CA4: lwc1        $f12, 0x10($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X10);
    // 0x08005CA8: sw          $a1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r5;
    // 0x08005CAC: sub.s       $f16, $f18, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f18.fl - ctx->f12.fl;
    // 0x08005CB0: mul.s       $f4, $f16, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x08005CB4: sub.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f4.fl;
    // 0x08005CB8: jalr        $a1
    // 0x08005CBC: swc1        $f6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r5)(rdram, ctx);
        goto after_5;
    // 0x08005CBC: swc1        $f6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f6.u32l;
    after_5:
    // 0x08005CC0: beq         $v0, $zero, L_08005D10
    if (ctx->r2 == 0) {
        // 0x08005CC4: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_08005D10;
    }
    // 0x08005CC4: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08005CC8: addiu       $t9, $t9, 0x4088
    ctx->r25 = ADD32(ctx->r25, 0X4088);
    // 0x08005CCC: jalr        $t9
    // 0x08005CD0: addiu       $a0, $zero, 0x167
    ctx->r4 = ADD32(0, 0X167);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08005CD0: addiu       $a0, $zero, 0x167
    ctx->r4 = ADD32(0, 0X167);
    after_6:
    // 0x08005CD4: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08005CD8: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x08005CDC: lhu         $t7, 0x184($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X184);
    // 0x08005CE0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x08005CE4: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x08005CE8: bgez        $t7, L_08005CFC
    if (SIGNED(ctx->r15) >= 0) {
        // 0x08005CEC: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_08005CFC;
    }
    // 0x08005CEC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x08005CF0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08005CF4: nop

    // 0x08005CF8: add.s       $f10, $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f18.fl;
L_08005CFC:
    // 0x08005CFC: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x08005D00: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08005D04: nop

    // 0x08005D08: div.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x08005D0C: swc1        $f4, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->f4.u32l;
L_08005D10:
    // 0x08005D10: lwc1        $f6, 0xDC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XDC);
    // 0x08005D14: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(22, 0X6EB0) << 16);
    // 0x08005D18: ldc1        $f18, 0x6EB0($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(22, 0X6EB0));
    // 0x08005D1C: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x08005D20: mtc1        $zero, $f11
    ctx->f_odd[(11 - 1) * 2] = 0;
    // 0x08005D24: mul.d       $f0, $f8, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f18.d); 
    ctx->f0.d = MUL_D(ctx->f8.d, ctx->f18.d);
    // 0x08005D28: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x08005D2C: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08005D30: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08005D34: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x08005D38: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(22, 0X6EB8) << 16);
    // 0x08005D3C: addiu       $t9, $t9, 0x26E0
    ctx->r25 = ADD32(ctx->r25, 0X26E0);
    // 0x08005D40: c.lt.d      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.d < ctx->f10.d;
    // 0x08005D44: nop

    // 0x08005D48: bc1fl       L_08005D5C
    if (!c1cs) {
        // 0x08005D4C: mov.d       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.d = ctx->f0.d;
            goto L_08005D5C;
    }
    goto skip_2;
    // 0x08005D4C: mov.d       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.d = ctx->f0.d;
    skip_2:
    // 0x08005D50: b           L_08005D5C
    // 0x08005D54: neg.d       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = -ctx->f0.d;
        goto L_08005D5C;
    // 0x08005D54: neg.d       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = -ctx->f0.d;
    // 0x08005D58: mov.d       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.d = ctx->f0.d;
L_08005D5C:
    // 0x08005D5C: ldc1        $f16, 0x6EB8($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(22, 0X6EB8));
    // 0x08005D60: c.lt.d      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.d < ctx->f2.d;
    // 0x08005D64: nop

    // 0x08005D68: bc1fl       L_08005D80
    if (!c1cs) {
        // 0x08005D6C: mtc1        $zero, $f6
        ctx->f6.u32l = 0;
            goto L_08005D80;
    }
    goto skip_3;
    // 0x08005D6C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    skip_3:
    // 0x08005D70: cvt.s.d     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f4.fl = CVT_S_D(ctx->f0.d);
    // 0x08005D74: b           L_08005D88
    // 0x08005D78: swc1        $f4, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->f4.u32l;
        goto L_08005D88;
    // 0x08005D78: swc1        $f4, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->f4.u32l;
    // 0x08005D7C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
L_08005D80:
    // 0x08005D80: nop

    // 0x08005D84: swc1        $f6, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->f6.u32l;
L_08005D88:
    // 0x08005D88: lw          $a0, 0xE4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE4);
    // 0x08005D8C: lw          $a1, 0x140($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X140);
    // 0x08005D90: jalr        $t9
    // 0x08005D94: lw          $a2, 0x148($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X148);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08005D94: lw          $a2, 0x148($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X148);
    after_7:
    // 0x08005D98: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(22, 0X6EC0) << 16);
    // 0x08005D9C: lwc1        $f18, 0x6EC0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(22, 0X6EC0));
    // 0x08005DA0: lwc1        $f8, 0xDC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XDC);
    // 0x08005DA4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08005DA8: addiu       $t9, $t9, 0x2848
    ctx->r25 = ADD32(ctx->r25, 0X2848);
    // 0x08005DAC: add.s       $f10, $f8, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x08005DB0: lw          $a0, 0xE4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE4);
    // 0x08005DB4: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x08005DB8: jalr        $t9
    // 0x08005DBC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08005DBC: nop

    after_8:
    // 0x08005DC0: lhu         $t8, 0xD4($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0XD4);
    // 0x08005DC4: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x08005DC8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08005DCC: div         $zero, $t8, $at
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r1)));
    // 0x08005DD0: mflo        $t0
    ctx->r8 = lo;
    // 0x08005DD4: addiu       $t1, $t0, 0x136
    ctx->r9 = ADD32(ctx->r8, 0X136);
    // 0x08005DD8: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x08005DDC: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x08005DE0: lw          $a0, 0xE4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE4);
    // 0x08005DE4: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x08005DE8: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x08005DEC: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    // 0x08005DF0: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x08005DF4: jalr        $t9
    // 0x08005DF8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08005DF8: nop

    after_9:
    // 0x08005DFC: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x08005E00: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    // 0x08005E04: jalr        $t9
    // 0x08005E08: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08005E08: nop

    after_10:
    // 0x08005E0C: beq         $v0, $zero, L_08005E24
    if (ctx->r2 == 0) {
        // 0x08005E10: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(22, 0X5F34) << 16);
            goto L_08005E24;
    }
    // 0x08005E10: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X5F34) << 16);
    // 0x08005E14: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08005E18: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08005E1C: jalr        $t9
    // 0x08005E20: addiu       $a0, $a0, 0x5F34
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X5F34));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08005E20: addiu       $a0, $a0, 0x5F34
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X5F34));
    after_11:
L_08005E24:
    // 0x08005E24: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x08005E28: addiu       $a0, $zero, 0x169
    ctx->r4 = ADD32(0, 0X169);
    // 0x08005E2C: jalr        $t9
    // 0x08005E30: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x08005E30: nop

    after_12:
    // 0x08005E34: beq         $v0, $zero, L_08005E6C
    if (ctx->r2 == 0) {
        // 0x08005E38: addiu       $a0, $zero, 0x169
        ctx->r4 = ADD32(0, 0X169);
            goto L_08005E6C;
    }
    // 0x08005E38: addiu       $a0, $zero, 0x169
    ctx->r4 = ADD32(0, 0X169);
    // 0x08005E3C: lui         $t2, 0x8003
    ctx->r10 = S32(0X8003 << 16);
    // 0x08005E40: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08005E44: addiu       $t9, $t9, 0x4088
    ctx->r25 = ADD32(ctx->r25, 0X4088);
    // 0x08005E48: addiu       $t2, $t2, 0x521C
    ctx->r10 = ADD32(ctx->r10, 0X521C);
    // 0x08005E4C: jalr        $t9
    // 0x08005E50: sw          $t2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r10;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x08005E50: sw          $t2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r10;
    after_13:
    // 0x08005E54: sb          $zero, 0xD7($s0)
    MEM_B(0XD7, ctx->r16) = 0;
    // 0x08005E58: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x08005E5C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X636C) << 16);
    // 0x08005E60: addiu       $a0, $a0, 0x636C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X636C));
    // 0x08005E64: jalr        $t9
    // 0x08005E68: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x08005E68: nop

    after_14:
L_08005E6C:
    // 0x08005E6C: lui         $t3, 0x8020
    ctx->r11 = S32(0X8020 << 16);
    // 0x08005E70: lw          $t3, -0x39D8($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X39D8);
    // 0x08005E74: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x08005E78: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x08005E7C: lw          $a1, 0x2C($t3)
    ctx->r5 = MEM_W(ctx->r11, 0X2C);
    // 0x08005E80: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08005E84: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x08005E88: and         $t4, $a1, $at
    ctx->r12 = ctx->r5 & ctx->r1;
    // 0x08005E8C: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    // 0x08005E90: jalr        $t9
    // 0x08005E94: lw          $a0, 0xE4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x08005E94: lw          $a0, 0xE4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE4);
    after_15:
    // 0x08005E98: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x08005E9C: lwc1        $f6, -0x3290($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X3290);
    // 0x08005EA0: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x08005EA4: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x08005EA8: lwc1        $f18, -0x3288($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X3288);
    // 0x08005EAC: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x08005EB0: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x08005EB4: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x08005EB8: sub.s       $f2, $f8, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f18.fl;
    // 0x08005EBC: mul.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x08005EC0: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
    // 0x08005EC4: mul.s       $f16, $f2, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x08005EC8: swc1        $f2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f2.u32l;
    // 0x08005ECC: jalr        $t9
    // 0x08005ED0: add.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f16.fl;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x08005ED0: add.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f16.fl;
    after_16:
    // 0x08005ED4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08005ED8: addiu       $t9, $t9, 0x3898
    ctx->r25 = ADD32(ctx->r25, 0X3898);
    // 0x08005EDC: addiu       $t5, $sp, 0x5C
    ctx->r13 = ADD32(ctx->r29, 0X5C);
    // 0x08005EE0: addiu       $t6, $sp, 0x58
    ctx->r14 = ADD32(ctx->r29, 0X58);
    // 0x08005EE4: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    // 0x08005EE8: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x08005EEC: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x08005EF0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x08005EF4: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x08005EF8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08005EFC: jalr        $t9
    // 0x08005F00: addiu       $a3, $sp, 0x60
    ctx->r7 = ADD32(ctx->r29, 0X60);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x08005F00: addiu       $a3, $sp, 0x60
    ctx->r7 = ADD32(ctx->r29, 0X60);
    after_17:
    // 0x08005F04: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08005F08: addiu       $t9, $t9, 0x33E0
    ctx->r25 = ADD32(ctx->r25, 0X33E0);
    // 0x08005F0C: lw          $a0, 0xE0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE0);
    // 0x08005F10: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x08005F14: lw          $a2, 0x5C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X5C);
    // 0x08005F18: jalr        $t9
    // 0x08005F1C: lw          $a3, 0x58($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X58);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x08005F1C: lw          $a3, 0x58($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X58);
    after_18:
    // 0x08005F20: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08005F24:
    // 0x08005F24: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08005F28: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x08005F2C: jr          $ra
    // 0x08005F30: nop

    TRACE_RETURN()
    return;
    // 0x08005F30: nop

;}
RECOMP_FUNC void func_08001260_6C9470(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001260: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08001264: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08001268: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800126C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08001270: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08001274: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08001278: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x0800127C: jalr        $t9
    // 0x08001280: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001280: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    after_0:
    // 0x08001284: bne         $v0, $zero, L_0800134C
    if (ctx->r2 != 0) {
        // 0x08001288: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_0800134C;
    }
    // 0x08001288: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800128C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001290: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x08001294: jalr        $t9
    // 0x08001298: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001298: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_1:
    // 0x0800129C: bne         $v0, $zero, L_0800134C
    if (ctx->r2 != 0) {
        // 0x080012A0: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_0800134C;
    }
    // 0x080012A0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x080012A4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080012A8: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x080012AC: lw          $v0, 0x84($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X84);
    // 0x080012B0: swc1        $f4, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = ctx->f4.u32l;
    // 0x080012B4: lwc1        $f8, 0x10($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X10);
    // 0x080012B8: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x080012BC: lwc1        $f16, 0x8($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X8);
    // 0x080012C0: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x080012C4: sub.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x080012C8: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080012CC: addiu       $t9, $t9, 0x17E0
    ctx->r25 = ADD32(ctx->r25, 0X17E0);
    // 0x080012D0: sub.s       $f2, $f10, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x080012D4: mul.s       $f18, $f0, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x080012D8: nop

    // 0x080012DC: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x080012E0: jalr        $t9
    // 0x080012E4: add.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f4.fl;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080012E4: add.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f4.fl;
    after_2:
    // 0x080012E8: lui         $at, 0x425C
    ctx->r1 = S32(0X425C << 16);
    // 0x080012EC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080012F0: lw          $t6, 0x60($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X60);
    // 0x080012F4: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x080012F8: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x080012FC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001300: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08001304: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x08001308: swc1        $f8, 0xEC($s0)
    MEM_W(0XEC, ctx->r16) = ctx->f8.u32l;
    // 0x0800130C: sw          $t7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r15;
    // 0x08001310: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001314: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x08001318: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x0800131C: jalr        $t9
    // 0x08001320: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001320: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_3:
    // 0x08001324: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001328: addiu       $t9, $t9, -0x7234
    ctx->r25 = ADD32(ctx->r25, -0X7234);
    // 0x0800132C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001330: jalr        $t9
    // 0x08001334: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001334: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_4:
    // 0x08001338: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800133C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001340: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X1360) << 16);
    // 0x08001344: jalr        $t9
    // 0x08001348: addiu       $a0, $a0, 0x1360
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X1360));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08001348: addiu       $a0, $a0, 0x1360
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X1360));
    after_5:
L_0800134C:
    // 0x0800134C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08001350: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08001354: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08001358: jr          $ra
    // 0x0800135C: nop

    TRACE_RETURN()
    return;
    // 0x0800135C: nop

;}
RECOMP_FUNC void func_080025C8_6CA7D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080025C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080025CC: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080025D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080025D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080025D8: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x080025DC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080025E0: jalr        $t9
    // 0x080025E4: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080025E4: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    after_0:
    // 0x080025E8: bne         $v0, $zero, L_08002610
    if (ctx->r2 != 0) {
        // 0x080025EC: lw          $t6, 0x1C($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X1C);
            goto L_08002610;
    }
    // 0x080025EC: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x080025F0: lbu         $t7, 0x7C($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X7C);
    // 0x080025F4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080025F8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080025FC: andi        $t8, $t7, 0x2
    ctx->r24 = ctx->r15 & 0X2;
    // 0x08002600: beq         $t8, $zero, L_08002610
    if (ctx->r24 == 0) {
        // 0x08002604: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(22, 0X970) << 16);
            goto L_08002610;
    }
    // 0x08002604: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X970) << 16);
    // 0x08002608: jalr        $t9
    // 0x0800260C: addiu       $a0, $a0, 0x970
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X970));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800260C: addiu       $a0, $a0, 0x970
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X970));
    after_1:
L_08002610:
    // 0x08002610: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002614: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002618: jr          $ra
    // 0x0800261C: nop

    TRACE_RETURN()
    return;
    // 0x0800261C: nop

;}
RECOMP_FUNC void func_080054EC_6CD6FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080054EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080054F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080054F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080054F8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080054FC: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08005500: slti        $v1, $v0, 0x5A
    ctx->r3 = SIGNED(ctx->r2) < 0X5A ? 1 : 0;
    // 0x08005504: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x08005508: bne         $v1, $zero, L_08005554
    if (ctx->r3 != 0) {
        // 0x0800550C: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08005554;
    }
    // 0x0800550C: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08005510: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x08005514: lw          $v0, -0x39FC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39FC);
    // 0x08005518: addiu       $at, $zero, 0x380
    ctx->r1 = ADD32(0, 0X380);
    // 0x0800551C: lhu         $t7, 0x94($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X94);
    // 0x08005520: addiu       $t8, $t7, -0x10
    ctx->r24 = ADD32(ctx->r15, -0X10);
    // 0x08005524: andi        $t9, $t8, 0x3FF
    ctx->r25 = ctx->r24 & 0X3FF;
    // 0x08005528: sh          $t9, 0x94($v0)
    MEM_H(0X94, ctx->r2) = ctx->r25;
    // 0x0800552C: lw          $t0, 0x84($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X84);
    // 0x08005530: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08005534: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08005538: lhu         $t1, 0x16($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X16);
    // 0x0800553C: bnel        $t1, $at, L_08005558
    if (ctx->r9 != ctx->r1) {
        // 0x08005540: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08005558;
    }
    goto skip_0;
    // 0x08005540: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08005544: sh          $zero, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = 0;
    // 0x08005548: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X5564) << 16);
    // 0x0800554C: jalr        $t9
    // 0x08005550: addiu       $a0, $a0, 0x5564
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X5564));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08005550: addiu       $a0, $a0, 0x5564
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X5564));
    after_0:
L_08005554:
    // 0x08005554: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08005558:
    // 0x08005558: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800555C: jr          $ra
    // 0x08005560: nop

    TRACE_RETURN()
    return;
    // 0x08005560: nop

;}
RECOMP_FUNC void func_080007CC_6C89DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080007CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080007D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080007D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080007D8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080007DC: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x080007E0: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080007E4: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x080007E8: slti        $v1, $v0, 0xA
    ctx->r3 = SIGNED(ctx->r2) < 0XA ? 1 : 0;
    // 0x080007EC: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x080007F0: bne         $v1, $zero, L_08000818
    if (ctx->r3 != 0) {
        // 0x080007F4: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08000818;
    }
    // 0x080007F4: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x080007F8: sh          $zero, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = 0;
    // 0x080007FC: jalr        $t9
    // 0x08000800: addiu       $a0, $zero, 0x274
    ctx->r4 = ADD32(0, 0X274);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000800: addiu       $a0, $zero, 0x274
    ctx->r4 = ADD32(0, 0X274);
    after_0:
    // 0x08000804: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000808: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800080C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X828) << 16);
    // 0x08000810: jalr        $t9
    // 0x08000814: addiu       $a0, $a0, 0x828
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X828));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000814: addiu       $a0, $a0, 0x828
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X828));
    after_1:
L_08000818:
    // 0x08000818: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800081C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000820: jr          $ra
    // 0x08000824: nop

    TRACE_RETURN()
    return;
    // 0x08000824: nop

;}
RECOMP_FUNC void func_0800284C_6CAA5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800284C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x08002850: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x08002854: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x08002858: lui         $t6, 0x40
    ctx->r14 = S32(0X40 << 16);
    // 0x0800285C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002860: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x08002864: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x08002868: ori         $t6, $t6, 0x6E0
    ctx->r14 = ctx->r14 | 0X6E0;
    // 0x0800286C: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08002870: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(22, 0X2B30) << 16);
    // 0x08002874: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08002878: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x0800287C: addiu       $a1, $a1, 0x2B30
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(22, 0X2B30));
    // 0x08002880: jalr        $t9
    // 0x08002884: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002884: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x08002888: beq         $v0, $zero, L_080028CC
    if (ctx->r2 == 0) {
        // 0x0800288C: addiu       $t7, $zero, 0x1F
        ctx->r15 = ADD32(0, 0X1F);
            goto L_080028CC;
    }
    // 0x0800288C: addiu       $t7, $zero, 0x1F
    ctx->r15 = ADD32(0, 0X1F);
    // 0x08002890: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002894: sh          $t7, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r15;
    // 0x08002898: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x0800289C: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x080028A0: jalr        $t9
    // 0x080028A4: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080028A4: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    after_1:
    // 0x080028A8: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x080028AC: sw          $v0, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r2;
    // 0x080028B0: lwc1        $f4, 0xD4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XD4);
    // 0x080028B4: lw          $v1, 0x18($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X18);
    // 0x080028B8: swc1        $f4, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f4.u32l;
    // 0x080028BC: lwc1        $f6, 0xEC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XEC);
    // 0x080028C0: swc1        $f6, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f6.u32l;
    // 0x080028C4: lwc1        $f8, 0xE8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XE8);
    // 0x080028C8: swc1        $f8, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f8.u32l;
L_080028CC:
    // 0x080028CC: lwc1        $f10, 0x8($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X8);
    // 0x080028D0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080028D4: addiu       $t9, $t9, -0x44FC
    ctx->r25 = ADD32(ctx->r25, -0X44FC);
    // 0x080028D8: swc1        $f10, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->f10.u32l;
    // 0x080028DC: lwc1        $f16, 0xC($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0XC);
    // 0x080028E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080028E4: lw          $a1, 0xE0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XE0);
    // 0x080028E8: swc1        $f16, 0xEC($s0)
    MEM_W(0XEC, ctx->r16) = ctx->f16.u32l;
    // 0x080028EC: lwc1        $f18, 0x10($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X10);
    // 0x080028F0: lw          $a2, 0xE4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XE4);
    // 0x080028F4: lui         $a3, 0x4100
    ctx->r7 = S32(0X4100 << 16);
    // 0x080028F8: jalr        $t9
    // 0x080028FC: swc1        $f18, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->f18.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080028FC: swc1        $f18, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->f18.u32l;
    after_2:
    // 0x08002900: beq         $v0, $zero, L_08002930
    if (ctx->r2 == 0) {
        // 0x08002904: lui         $t9, 0x8003
        ctx->r25 = S32(0X8003 << 16);
            goto L_08002930;
    }
    // 0x08002904: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002908: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x0800290C: lwc1        $f12, 0x8($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X8);
    // 0x08002910: lwc1        $f14, 0xC($s1)
    ctx->f14.u32l = MEM_W(ctx->r17, 0XC);
    // 0x08002914: jalr        $t9
    // 0x08002918: lw          $a2, 0x10($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002918: lw          $a2, 0x10($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X10);
    after_3:
    // 0x0800291C: bne         $v0, $zero, L_08002930
    if (ctx->r2 != 0) {
        // 0x08002920: nop
    
            goto L_08002930;
    }
    // 0x08002920: nop

    // 0x08002924: lw          $t8, 0x68($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X68);
    // 0x08002928: andi        $t0, $t8, 0x200
    ctx->r8 = ctx->r24 & 0X200;
    // 0x0800292C: beq         $t0, $zero, L_08002A2C
    if (ctx->r8 == 0) {
        // 0x08002930: lui         $t9, 0x8001
        ctx->r25 = S32(0X8001 << 16);
            goto L_08002A2C;
    }
L_08002930:
    // 0x08002930: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002934: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08002938: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x0800293C: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08002940: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    // 0x08002944: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x08002948: jalr        $t9
    // 0x0800294C: lui         $a3, 0x4496
    ctx->r7 = S32(0X4496 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x0800294C: lui         $a3, 0x4496
    ctx->r7 = S32(0X4496 << 16);
    after_4:
    // 0x08002950: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08002954: lui         $s1, 0x800
    ctx->r17 = S32(RELOC_HI16(22, 0X2C74) << 16);
    // 0x08002958: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x0800295C: addiu       $v0, $v0, -0x2218
    ctx->r2 = ADD32(ctx->r2, -0X2218);
    // 0x08002960: addiu       $s1, $s1, 0x2C74
    ctx->r17 = ADD32(ctx->r17, (int16_t)RELOC_LO16(22, 0X2C74));
    // 0x08002964: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x08002968: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x0800296C: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x08002970: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002974: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x08002978: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x0800297C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x08002980: jalr        $v0
    // 0x08002984: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x08002984: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x08002988: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0800298C: beq         $v0, $zero, L_080029C4
    if (ctx->r2 == 0) {
        // 0x08002990: addiu       $t1, $zero, 0x1F
        ctx->r9 = ADD32(0, 0X1F);
            goto L_080029C4;
    }
    // 0x08002990: addiu       $t1, $zero, 0x1F
    ctx->r9 = ADD32(0, 0X1F);
    // 0x08002994: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002998: sh          $t1, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r9;
    // 0x0800299C: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080029A0: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x080029A4: jalr        $t9
    // 0x080029A8: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080029A8: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    after_6:
    // 0x080029AC: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x080029B0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x080029B4: lw          $t2, 0xE8($v1)
    ctx->r10 = MEM_W(ctx->r3, 0XE8);
    // 0x080029B8: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x080029BC: ori         $t3, $t2, 0x80
    ctx->r11 = ctx->r10 | 0X80;
    // 0x080029C0: sw          $t3, 0xE8($v1)
    MEM_W(0XE8, ctx->r3) = ctx->r11;
L_080029C4:
    // 0x080029C4: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x080029C8: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x080029CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080029D0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x080029D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x080029D8: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x080029DC: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x080029E0: jalr        $t9
    // 0x080029E4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080029E4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_7:
    // 0x080029E8: beq         $v0, $zero, L_08002A1C
    if (ctx->r2 == 0) {
        // 0x080029EC: addiu       $t4, $zero, 0x1F
        ctx->r12 = ADD32(0, 0X1F);
            goto L_08002A1C;
    }
    // 0x080029EC: addiu       $t4, $zero, 0x1F
    ctx->r12 = ADD32(0, 0X1F);
    // 0x080029F0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080029F4: sh          $t4, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r12;
    // 0x080029F8: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080029FC: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x08002A00: jalr        $t9
    // 0x08002A04: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08002A04: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    after_8:
    // 0x08002A08: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x08002A0C: lw          $t5, 0xE8($v1)
    ctx->r13 = MEM_W(ctx->r3, 0XE8);
    // 0x08002A10: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x08002A14: ori         $t6, $t5, 0x100
    ctx->r14 = ctx->r13 | 0X100;
    // 0x08002A18: sw          $t6, 0xE8($v1)
    MEM_W(0XE8, ctx->r3) = ctx->r14;
L_08002A1C:
    // 0x08002A1C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002A20: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08002A24: jalr        $t9
    // 0x08002A28: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08002A28: nop

    after_9:
L_08002A2C:
    // 0x08002A2C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x08002A30: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x08002A34: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x08002A38: jr          $ra
    // 0x08002A3C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x08002A3C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_080055C0_6CD7D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080055C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080055C4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080055C8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080055CC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080055D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080055D4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x080055D8: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x080055DC: lw          $a0, 0xE4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XE4);
    // 0x080055E0: jalr        $t9
    // 0x080055E4: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080055E4: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    after_0:
    // 0x080055E8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080055EC: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x080055F0: lui         $a2, 0x43A2
    ctx->r6 = S32(0X43A2 << 16);
    // 0x080055F4: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x080055F8: lw          $a0, 0xE4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE4);
    // 0x080055FC: lui         $a1, 0xC315
    ctx->r5 = S32(0XC315 << 16);
    // 0x08005600: jalr        $t9
    // 0x08005604: lui         $a3, 0xC150
    ctx->r7 = S32(0XC150 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08005604: lui         $a3, 0xC150
    ctx->r7 = S32(0XC150 << 16);
    after_1:
    // 0x08005608: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800560C: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x08005610: lw          $a0, 0xE4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE4);
    // 0x08005614: lui         $a1, 0xC3AC
    ctx->r5 = S32(0XC3AC << 16);
    // 0x08005618: lui         $a2, 0x43A5
    ctx->r6 = S32(0X43A5 << 16);
    // 0x0800561C: jalr        $t9
    // 0x08005620: lui         $a3, 0x4313
    ctx->r7 = S32(0X4313 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08005620: lui         $a3, 0x4313
    ctx->r7 = S32(0X4313 << 16);
    after_2:
    // 0x08005624: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x08005628: lw          $t6, -0x39D8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39D8);
    // 0x0800562C: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x08005630: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x08005634: lw          $a1, 0x2C($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X2C);
    // 0x08005638: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800563C: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x08005640: and         $t7, $a1, $at
    ctx->r15 = ctx->r5 & ctx->r1;
    // 0x08005644: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x08005648: jalr        $t9
    // 0x0800564C: lw          $a0, 0xE4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800564C: lw          $a0, 0xE4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE4);
    after_3:
    // 0x08005650: lhu         $v0, 0x8A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8A);
    // 0x08005654: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    // 0x08005658: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800565C: slti        $v1, $v0, 0x78
    ctx->r3 = SIGNED(ctx->r2) < 0X78 ? 1 : 0;
    // 0x08005660: addiu       $t8, $v0, 0x1
    ctx->r24 = ADD32(ctx->r2, 0X1);
    // 0x08005664: bne         $v1, $zero, L_0800568C
    if (ctx->r3 != 0) {
        // 0x08005668: sh          $t8, 0x8A($s0)
        MEM_H(0X8A, ctx->r16) = ctx->r24;
            goto L_0800568C;
    }
    // 0x08005668: sh          $t8, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r24;
    // 0x0800566C: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x08005670: jalr        $t9
    // 0x08005674: sh          $zero, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08005674: sh          $zero, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = 0;
    after_4:
    // 0x08005678: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800567C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08005680: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X56A0) << 16);
    // 0x08005684: jalr        $t9
    // 0x08005688: addiu       $a0, $a0, 0x56A0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X56A0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08005688: addiu       $a0, $a0, 0x56A0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X56A0));
    after_5:
L_0800568C:
    // 0x0800568C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08005690: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08005694: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08005698: jr          $ra
    // 0x0800569C: nop

    TRACE_RETURN()
    return;
    // 0x0800569C: nop

;}
RECOMP_FUNC void func_08001618_6C9828(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001618: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0800161C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x08001620: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001624: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08001628: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0800162C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x08001630: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08001634: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x08001638: jalr        $t9
    // 0x0800163C: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800163C: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    after_0:
    // 0x08001640: bnel        $v0, $zero, L_08001720
    if (ctx->r2 != 0) {
        // 0x08001644: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_08001720;
    }
    goto skip_0;
    // 0x08001644: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x08001648: lwc1        $f4, 0xD8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XD8);
    // 0x0800164C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(22, 0X6DF0) << 16);
    // 0x08001650: ldc1        $f8, 0x6DF0($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(22, 0X6DF0));
    // 0x08001654: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08001658: lui         $at, 0x439B
    ctx->r1 = S32(0X439B << 16);
    // 0x0800165C: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x08001660: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08001664: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001668: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x0800166C: cvt.s.d     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f0.fl = CVT_S_D(ctx->f10.d);
    // 0x08001670: swc1        $f0, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = ctx->f0.u32l;
    // 0x08001674: lwc1        $f16, 0xC($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0XC);
    // 0x08001678: add.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x0800167C: swc1        $f18, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f18.u32l;
    // 0x08001680: lwc1        $f4, 0xC($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0XC);
    // 0x08001684: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x08001688: nop

    // 0x0800168C: bc1fl       L_08001720
    if (!c1cs) {
        // 0x08001690: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_08001720;
    }
    goto skip_1;
    // 0x08001690: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x08001694: jalr        $t9
    // 0x08001698: addiu       $a0, $zero, 0x167
    ctx->r4 = ADD32(0, 0X167);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001698: addiu       $a0, $zero, 0x167
    ctx->r4 = ADD32(0, 0X167);
    after_1:
    // 0x0800169C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080016A0: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x080016A4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x080016A8: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x080016AC: addiu       $a0, $zero, 0x2A2
    ctx->r4 = ADD32(0, 0X2A2);
    // 0x080016B0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x080016B4: jalr        $t9
    // 0x080016B8: lui         $a3, 0x4496
    ctx->r7 = S32(0X4496 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080016B8: lui         $a3, 0x4496
    ctx->r7 = S32(0X4496 << 16);
    after_2:
    // 0x080016BC: lui         $at, 0x439B
    ctx->r1 = S32(0X439B << 16);
    // 0x080016C0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080016C4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x080016C8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080016CC: swc1        $f8, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f8.u32l;
    // 0x080016D0: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080016D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080016D8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x080016DC: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x080016E0: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x080016E4: swc1        $f0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f0.u32l;
    // 0x080016E8: swc1        $f0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f0.u32l;
    // 0x080016EC: jalr        $t9
    // 0x080016F0: swc1        $f0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080016F0: swc1        $f0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f0.u32l;
    after_3:
    // 0x080016F4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080016F8: addiu       $t9, $t9, -0x7234
    ctx->r25 = ADD32(ctx->r25, -0X7234);
    // 0x080016FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001700: jalr        $t9
    // 0x08001704: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001704: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_4:
    // 0x08001708: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800170C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001710: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X1730) << 16);
    // 0x08001714: jalr        $t9
    // 0x08001718: addiu       $a0, $a0, 0x1730
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X1730));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08001718: addiu       $a0, $a0, 0x1730
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X1730));
    after_5:
    // 0x0800171C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08001720:
    // 0x08001720: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x08001724: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x08001728: jr          $ra
    // 0x0800172C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x0800172C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_080065E8_6CE7F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080065E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080065EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080065F0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080065F4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x080065F8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080065FC: addiu       $t9, $t9, 0x2938
    ctx->r25 = ADD32(ctx->r25, 0X2938);
    // 0x08006600: lw          $a0, 0xE4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XE4);
    // 0x08006604: jalr        $t9
    // 0x08006608: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08006608: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x0800660C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x08006610: addiu       $t0, $zero, 0x140
    ctx->r8 = ADD32(0, 0X140);
    // 0x08006614: addiu       $t2, $zero, 0xF0
    ctx->r10 = ADD32(0, 0XF0);
    // 0x08006618: lbu         $t6, 0xD7($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0XD7);
    // 0x0800661C: lui         $t5, 0x8020
    ctx->r13 = S32(0X8020 << 16);
    // 0x08006620: addiu       $t7, $t6, -0x2
    ctx->r15 = ADD32(ctx->r14, -0X2);
    // 0x08006624: sb          $t7, 0xD7($a2)
    MEM_B(0XD7, ctx->r6) = ctx->r15;
    // 0x08006628: sh          $zero, 0x48($v0)
    MEM_H(0X48, ctx->r2) = 0;
    // 0x0800662C: lbu         $t8, 0xD7($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0XD7);
    // 0x08006630: sh          $t0, 0x4C($v0)
    MEM_H(0X4C, ctx->r2) = ctx->r8;
    // 0x08006634: sh          $t8, 0x4A($v0)
    MEM_H(0X4A, ctx->r2) = ctx->r24;
    // 0x08006638: lbu         $t1, 0xD7($a2)
    ctx->r9 = MEM_BU(ctx->r6, 0XD7);
    // 0x0800663C: subu        $t3, $t2, $t1
    ctx->r11 = SUB32(ctx->r10, ctx->r9);
    // 0x08006640: sh          $t3, 0x4E($v0)
    MEM_H(0X4E, ctx->r2) = ctx->r11;
    // 0x08006644: lbu         $t4, 0xD7($a2)
    ctx->r12 = MEM_BU(ctx->r6, 0XD7);
    // 0x08006648: bnel        $t4, $zero, L_080066D4
    if (ctx->r12 != 0) {
        // 0x0800664C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_080066D4;
    }
    goto skip_0;
    // 0x0800664C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08006650: lw          $t5, -0x39D8($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X39D8);
    // 0x08006654: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x08006658: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x0800665C: lw          $a1, 0x2C($t5)
    ctx->r5 = MEM_W(ctx->r13, 0X2C);
    // 0x08006660: lw          $a0, 0xE4($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XE4);
    // 0x08006664: and         $t9, $a1, $at
    ctx->r25 = ctx->r5 & ctx->r1;
    // 0x08006668: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x0800666C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08006670: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x08006674: jalr        $t9
    // 0x08006678: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08006678: nop

    after_1:
    // 0x0800667C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08006680: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x08006684: jalr        $t9
    // 0x08006688: addiu       $a0, $zero, 0x16D
    ctx->r4 = ADD32(0, 0X16D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08006688: addiu       $a0, $zero, 0x16D
    ctx->r4 = ADD32(0, 0X16D);
    after_2:
    // 0x0800668C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08006690: addiu       $t9, $t9, 0x1FB0
    ctx->r25 = ADD32(ctx->r25, 0X1FB0);
    // 0x08006694: jalr        $t9
    // 0x08006698: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08006698: nop

    after_3:
    // 0x0800669C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080066A0: addiu       $t9, $t9, 0x1BB4
    ctx->r25 = ADD32(ctx->r25, 0X1BB4);
    // 0x080066A4: jalr        $t9
    // 0x080066A8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080066A8: nop

    after_4:
    // 0x080066AC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080066B0: addiu       $t9, $t9, 0x1C58
    ctx->r25 = ADD32(ctx->r25, 0X1C58);
    // 0x080066B4: jalr        $t9
    // 0x080066B8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080066B8: nop

    after_5:
    // 0x080066BC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080066C0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080066C4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X66E0) << 16);
    // 0x080066C8: jalr        $t9
    // 0x080066CC: addiu       $a0, $a0, 0x66E0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X66E0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080066CC: addiu       $a0, $a0, 0x66E0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X66E0));
    after_6:
    // 0x080066D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080066D4:
    // 0x080066D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080066D8: jr          $ra
    // 0x080066DC: nop

    TRACE_RETURN()
    return;
    // 0x080066DC: nop

;}
RECOMP_FUNC void func_08002C00_6CAE10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002C00: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08002C04: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08002C08: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08002C0C: lbu         $v0, 0xD0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD0);
    // 0x08002C10: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002C14: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x08002C18: addiu       $v0, $v0, -0x10
    ctx->r2 = ADD32(ctx->r2, -0X10);
    // 0x08002C1C: blez        $v0, L_08002C5C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x08002C20: addiu       $t9, $t9, 0x4ED4
        ctx->r25 = ADD32(ctx->r25, 0X4ED4);
            goto L_08002C5C;
    }
    // 0x08002C20: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08002C24: sb          $v0, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = ctx->r2;
    // 0x08002C28: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x08002C2C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x08002C30: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x08002C34: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x08002C38: lbu         $t7, 0xD0($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0XD0);
    // 0x08002C3C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002C40: addiu       $t9, $t9, -0x1ECC
    ctx->r25 = ADD32(ctx->r25, -0X1ECC);
    // 0x08002C44: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08002C48: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x08002C4C: jalr        $t9
    // 0x08002C50: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002C50: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    after_0:
    // 0x08002C54: b           L_08002C68
    // 0x08002C58: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_08002C68;
    // 0x08002C58: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08002C5C:
    // 0x08002C5C: jalr        $t9
    // 0x08002C60: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002C60: nop

    after_1:
    // 0x08002C64: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08002C68:
    // 0x08002C68: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08002C6C: jr          $ra
    // 0x08002C70: nop

    TRACE_RETURN()
    return;
    // 0x08002C70: nop

;}
RECOMP_FUNC void func_0800314C_6CB35C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800314C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08003150: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003154: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x08003158: lhu         $v0, 0x7E($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X7E);
    // 0x0800315C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x08003160: beq         $v0, $zero, L_0800316C
    if (ctx->r2 == 0) {
        // 0x08003164: addiu       $t6, $v0, -0x2
        ctx->r14 = ADD32(ctx->r2, -0X2);
            goto L_0800316C;
    }
    // 0x08003164: addiu       $t6, $v0, -0x2
    ctx->r14 = ADD32(ctx->r2, -0X2);
    // 0x08003168: sh          $t6, 0x7E($a1)
    MEM_H(0X7E, ctx->r5) = ctx->r14;
L_0800316C:
    // 0x0800316C: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x08003170: addiu       $v0, $v0, -0x6D4C
    ctx->r2 = ADD32(ctx->r2, -0X6D4C);
    // 0x08003174: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x08003178: jalr        $v0
    // 0x0800317C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x0800317C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_0:
    // 0x08003180: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x08003184: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x08003188: lui         $t8, 0x4
    ctx->r24 = S32(0X4 << 16);
    // 0x0800318C: addiu       $t9, $v0, 0xA
    ctx->r25 = ADD32(ctx->r2, 0XA);
    // 0x08003190: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x08003194: lhu         $t8, -0x5232($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X5232);
    // 0x08003198: div         $zero, $t8, $t9
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r25))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r25)));
    // 0x0800319C: mfhi        $t0
    ctx->r8 = hi;
    // 0x080031A0: bne         $t9, $zero, L_080031AC
    if (ctx->r25 != 0) {
        // 0x080031A4: nop
    
            goto L_080031AC;
    }
    // 0x080031A4: nop

    // 0x080031A8: break       7
    do_break(134230440);
L_080031AC:
    // 0x080031AC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x080031B0: bne         $t9, $at, L_080031C4
    if (ctx->r25 != ctx->r1) {
        // 0x080031B4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_080031C4;
    }
    // 0x080031B4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x080031B8: bne         $t8, $at, L_080031C4
    if (ctx->r24 != ctx->r1) {
        // 0x080031BC: nop
    
            goto L_080031C4;
    }
    // 0x080031BC: nop

    // 0x080031C0: break       6
    do_break(134230464);
L_080031C4:
    // 0x080031C4: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x080031C8: bnel        $t0, $zero, L_080033A0
    if (ctx->r8 != 0) {
        // 0x080031CC: lw          $t9, 0x1C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X1C);
            goto L_080033A0;
    }
    goto skip_0;
    // 0x080031CC: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x080031D0: jalr        $t9
    // 0x080031D4: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080031D4: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_1:
    // 0x080031D8: slti        $at, $v0, 0x33
    ctx->r1 = SIGNED(ctx->r2) < 0X33 ? 1 : 0;
    // 0x080031DC: bne         $at, $zero, L_080032C4
    if (ctx->r1 != 0) {
        // 0x080031E0: lw          $a0, 0x30($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X30);
            goto L_080032C4;
    }
    // 0x080031E0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x080031E4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080031E8: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x080031EC: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x080031F0: addiu       $a1, $a1, 0x12EC
    ctx->r5 = ADD32(ctx->r5, 0X12EC);
    // 0x080031F4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x080031F8: jalr        $t9
    // 0x080031FC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080031FC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x08003200: beq         $v0, $zero, L_0800339C
    if (ctx->r2 == 0) {
        // 0x08003204: addiu       $a0, $zero, 0x106
        ctx->r4 = ADD32(0, 0X106);
            goto L_0800339C;
    }
    // 0x08003204: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    // 0x08003208: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800320C: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08003210: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08003214: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08003218: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x0800321C: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    // 0x08003220: jalr        $t9
    // 0x08003224: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08003224: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_3:
    // 0x08003228: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x0800322C: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08003230: lhu         $a0, -0x3284($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X3284);
    // 0x08003234: lw          $v0, 0x18($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X18);
    // 0x08003238: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x0800323C: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x08003240: addiu       $t1, $a0, 0x200
    ctx->r9 = ADD32(ctx->r4, 0X200);
    // 0x08003244: andi        $a0, $t1, 0x3FF
    ctx->r4 = ctx->r9 & 0X3FF;
    // 0x08003248: jalr        $t9
    // 0x0800324C: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x0800324C: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    after_4:
    // 0x08003250: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x08003254: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08003258: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x0800325C: addiu       $v1, $v1, -0x33D0
    ctx->r3 = ADD32(ctx->r3, -0X33D0);
    // 0x08003260: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x08003264: lwc1        $f8, 0x140($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X140);
    // 0x08003268: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x0800326C: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08003270: addiu       $t9, $t9, 0x3EA0
    ctx->r25 = ADD32(ctx->r25, 0X3EA0);
    // 0x08003274: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x08003278: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
    // 0x0800327C: lhu         $a0, 0x14C($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X14C);
    // 0x08003280: addiu       $t3, $a0, 0x200
    ctx->r11 = ADD32(ctx->r4, 0X200);
    // 0x08003284: jalr        $t9
    // 0x08003288: andi        $a0, $t3, 0x3FF
    ctx->r4 = ctx->r11 & 0X3FF;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08003288: andi        $a0, $t3, 0x3FF
    ctx->r4 = ctx->r11 & 0X3FF;
    after_5:
    // 0x0800328C: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x08003290: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x08003294: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x08003298: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x0800329C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x080032A0: lwc1        $f4, -0x3288($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3288);
    // 0x080032A4: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x080032A8: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x080032AC: swc1        $f2, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f2.u32l;
    // 0x080032B0: swc1        $f2, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f2.u32l;
    // 0x080032B4: swc1        $f2, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f2.u32l;
    // 0x080032B8: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x080032BC: b           L_0800339C
    // 0x080032C0: swc1        $f6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f6.u32l;
        goto L_0800339C;
    // 0x080032C0: swc1        $f6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f6.u32l;
L_080032C4:
    // 0x080032C4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080032C8: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x080032CC: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x080032D0: addiu       $a1, $a1, 0x183C
    ctx->r5 = ADD32(ctx->r5, 0X183C);
    // 0x080032D4: jalr        $t9
    // 0x080032D8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080032D8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x080032DC: beq         $v0, $zero, L_0800339C
    if (ctx->r2 == 0) {
        // 0x080032E0: addiu       $a0, $zero, 0x10B
        ctx->r4 = ADD32(0, 0X10B);
            goto L_0800339C;
    }
    // 0x080032E0: addiu       $a0, $zero, 0x10B
    ctx->r4 = ADD32(0, 0X10B);
    // 0x080032E4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080032E8: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x080032EC: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x080032F0: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x080032F4: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x080032F8: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    // 0x080032FC: jalr        $t9
    // 0x08003300: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08003300: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_7:
    // 0x08003304: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x08003308: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x0800330C: lhu         $a0, -0x3284($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X3284);
    // 0x08003310: lw          $v0, 0x18($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X18);
    // 0x08003314: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08003318: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x0800331C: addiu       $t5, $a0, 0x200
    ctx->r13 = ADD32(ctx->r4, 0X200);
    // 0x08003320: andi        $a0, $t5, 0x3FF
    ctx->r4 = ctx->r13 & 0X3FF;
    // 0x08003324: jalr        $t9
    // 0x08003328: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08003328: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    after_8:
    // 0x0800332C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x08003330: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08003334: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x08003338: addiu       $v1, $v1, -0x33D0
    ctx->r3 = ADD32(ctx->r3, -0X33D0);
    // 0x0800333C: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x08003340: lwc1        $f16, 0x140($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X140);
    // 0x08003344: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x08003348: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x0800334C: addiu       $t9, $t9, 0x3EA0
    ctx->r25 = ADD32(ctx->r25, 0X3EA0);
    // 0x08003350: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x08003354: swc1        $f18, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f18.u32l;
    // 0x08003358: lhu         $a0, 0x14C($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X14C);
    // 0x0800335C: addiu       $t7, $a0, 0x200
    ctx->r15 = ADD32(ctx->r4, 0X200);
    // 0x08003360: jalr        $t9
    // 0x08003364: andi        $a0, $t7, 0x3FF
    ctx->r4 = ctx->r15 & 0X3FF;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08003364: andi        $a0, $t7, 0x3FF
    ctx->r4 = ctx->r15 & 0X3FF;
    after_9:
    // 0x08003368: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x0800336C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x08003370: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x08003374: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08003378: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x0800337C: lwc1        $f8, -0x3288($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X3288);
    // 0x08003380: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x08003384: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x08003388: swc1        $f2, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f2.u32l;
    // 0x0800338C: swc1        $f2, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f2.u32l;
    // 0x08003390: swc1        $f2, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f2.u32l;
    // 0x08003394: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x08003398: swc1        $f10, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f10.u32l;
L_0800339C:
    // 0x0800339C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
L_080033A0:
    // 0x080033A0: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x080033A4: jalr        $t9
    // 0x080033A8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x080033A8: nop

    after_10:
    // 0x080033AC: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x080033B0: lw          $t0, -0x3A38($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3A38);
    // 0x080033B4: lui         $t1, 0x4
    ctx->r9 = S32(0X4 << 16);
    // 0x080033B8: addiu       $t2, $v0, 0x7
    ctx->r10 = ADD32(ctx->r2, 0X7);
    // 0x080033BC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x080033C0: lhu         $t1, -0x5232($t1)
    ctx->r9 = MEM_HU(ctx->r9, -0X5232);
    // 0x080033C4: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    // 0x080033C8: div         $zero, $t1, $t2
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r10))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r10)));
    // 0x080033CC: mfhi        $t3
    ctx->r11 = hi;
    // 0x080033D0: bne         $t2, $zero, L_080033DC
    if (ctx->r10 != 0) {
        // 0x080033D4: nop
    
            goto L_080033DC;
    }
    // 0x080033D4: nop

    // 0x080033D8: break       7
    do_break(134231000);
L_080033DC:
    // 0x080033DC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x080033E0: bne         $t2, $at, L_080033F4
    if (ctx->r10 != ctx->r1) {
        // 0x080033E4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_080033F4;
    }
    // 0x080033E4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x080033E8: bne         $t1, $at, L_080033F4
    if (ctx->r9 != ctx->r1) {
        // 0x080033EC: nop
    
            goto L_080033F4;
    }
    // 0x080033EC: nop

    // 0x080033F0: break       6
    do_break(134231024);
L_080033F4:
    // 0x080033F4: bnel        $t3, $zero, L_0800364C
    if (ctx->r11 != 0) {
        // 0x080033F8: lw          $a1, 0x30($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X30);
            goto L_0800364C;
    }
    goto skip_1;
    // 0x080033F8: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    skip_1:
    // 0x080033FC: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x08003400: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x08003404: addiu       $v1, $v1, 0x71A8
    ctx->r3 = ADD32(ctx->r3, 0X71A8);
    // 0x08003408: jalr        $t9
    // 0x0800340C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x0800340C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_11:
    // 0x08003410: slti        $at, $v0, 0x33
    ctx->r1 = SIGNED(ctx->r2) < 0X33 ? 1 : 0;
    // 0x08003414: bne         $at, $zero, L_0800353C
    if (ctx->r1 != 0) {
        // 0x08003418: lw          $v1, 0x18($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X18);
            goto L_0800353C;
    }
    // 0x08003418: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x0800341C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x08003420: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    // 0x08003424: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x08003428: jalr        $t9
    // 0x0800342C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x0800342C: nop

    after_12:
    // 0x08003430: slti        $at, $v0, 0x33
    ctx->r1 = SIGNED(ctx->r2) < 0X33 ? 1 : 0;
    // 0x08003434: bne         $at, $zero, L_080034BC
    if (ctx->r1 != 0) {
        // 0x08003438: lw          $v1, 0x18($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X18);
            goto L_080034BC;
    }
    // 0x08003438: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x0800343C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08003440: addiu       $a1, $a1, 0x12EC
    ctx->r5 = ADD32(ctx->r5, 0X12EC);
    // 0x08003444: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x08003448: jalr        $v1
    // 0x0800344C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_13;
    // 0x0800344C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_13:
    // 0x08003450: beq         $v0, $zero, L_08003648
    if (ctx->r2 == 0) {
        // 0x08003454: addiu       $a0, $zero, 0x106
        ctx->r4 = ADD32(0, 0X106);
            goto L_08003648;
    }
    // 0x08003454: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    // 0x08003458: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800345C: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08003460: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08003464: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08003468: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x0800346C: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    // 0x08003470: jalr        $t9
    // 0x08003474: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x08003474: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_14:
    // 0x08003478: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x0800347C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x08003480: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08003484: lw          $v0, 0x18($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X18);
    // 0x08003488: lui         $at, 0x41D0
    ctx->r1 = S32(0X41D0 << 16);
    // 0x0800348C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08003490: lui         $at, 0xC28C
    ctx->r1 = S32(0XC28C << 16);
    // 0x08003494: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08003498: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x0800349C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080034A0: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x080034A4: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x080034A8: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x080034AC: swc1        $f16, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f16.u32l;
    // 0x080034B0: swc1        $f18, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f18.u32l;
    // 0x080034B4: b           L_08003648
    // 0x080034B8: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
        goto L_08003648;
    // 0x080034B8: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
L_080034BC:
    // 0x080034BC: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x080034C0: addiu       $a1, $a1, 0x183C
    ctx->r5 = ADD32(ctx->r5, 0X183C);
    // 0x080034C4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x080034C8: jalr        $v1
    // 0x080034CC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_15;
    // 0x080034CC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_15:
    // 0x080034D0: beq         $v0, $zero, L_08003648
    if (ctx->r2 == 0) {
        // 0x080034D4: addiu       $a0, $zero, 0x10B
        ctx->r4 = ADD32(0, 0X10B);
            goto L_08003648;
    }
    // 0x080034D4: addiu       $a0, $zero, 0x10B
    ctx->r4 = ADD32(0, 0X10B);
    // 0x080034D8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080034DC: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x080034E0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x080034E4: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x080034E8: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x080034EC: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    // 0x080034F0: jalr        $t9
    // 0x080034F4: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x080034F4: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_16:
    // 0x080034F8: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x080034FC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x08003500: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08003504: lw          $v0, 0x18($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X18);
    // 0x08003508: lui         $at, 0x41D0
    ctx->r1 = S32(0X41D0 << 16);
    // 0x0800350C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08003510: lui         $at, 0xC28C
    ctx->r1 = S32(0XC28C << 16);
    // 0x08003514: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08003518: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x0800351C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08003520: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x08003524: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x08003528: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x0800352C: swc1        $f6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f6.u32l;
    // 0x08003530: swc1        $f8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f8.u32l;
    // 0x08003534: b           L_08003648
    // 0x08003538: swc1        $f10, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f10.u32l;
        goto L_08003648;
    // 0x08003538: swc1        $f10, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f10.u32l;
L_0800353C:
    // 0x0800353C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x08003540: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    // 0x08003544: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x08003548: jalr        $t9
    // 0x0800354C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x0800354C: nop

    after_17:
    // 0x08003550: slti        $at, $v0, 0x33
    ctx->r1 = SIGNED(ctx->r2) < 0X33 ? 1 : 0;
    // 0x08003554: bne         $at, $zero, L_080035D4
    if (ctx->r1 != 0) {
        // 0x08003558: lw          $v1, 0x18($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X18);
            goto L_080035D4;
    }
    // 0x08003558: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x0800355C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08003560: addiu       $a1, $a1, 0x12EC
    ctx->r5 = ADD32(ctx->r5, 0X12EC);
    // 0x08003564: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x08003568: jalr        $v1
    // 0x0800356C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_18;
    // 0x0800356C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_18:
    // 0x08003570: beq         $v0, $zero, L_08003648
    if (ctx->r2 == 0) {
        // 0x08003574: addiu       $a0, $zero, 0x106
        ctx->r4 = ADD32(0, 0X106);
            goto L_08003648;
    }
    // 0x08003574: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    // 0x08003578: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800357C: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08003580: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08003584: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08003588: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x0800358C: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    // 0x08003590: jalr        $t9
    // 0x08003594: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_19;
    // 0x08003594: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_19:
    // 0x08003598: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x0800359C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x080035A0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x080035A4: lw          $v0, 0x18($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X18);
    // 0x080035A8: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x080035AC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x080035B0: lui         $at, 0xC220
    ctx->r1 = S32(0XC220 << 16);
    // 0x080035B4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x080035B8: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x080035BC: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x080035C0: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x080035C4: swc1        $f2, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f2.u32l;
    // 0x080035C8: swc1        $f2, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f2.u32l;
    // 0x080035CC: b           L_08003648
    // 0x080035D0: swc1        $f16, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f16.u32l;
        goto L_08003648;
    // 0x080035D0: swc1        $f16, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f16.u32l;
L_080035D4:
    // 0x080035D4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x080035D8: addiu       $a1, $a1, 0x183C
    ctx->r5 = ADD32(ctx->r5, 0X183C);
    // 0x080035DC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x080035E0: jalr        $v1
    // 0x080035E4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_20;
    // 0x080035E4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_20:
    // 0x080035E8: beq         $v0, $zero, L_08003648
    if (ctx->r2 == 0) {
        // 0x080035EC: addiu       $a0, $zero, 0x10B
        ctx->r4 = ADD32(0, 0X10B);
            goto L_08003648;
    }
    // 0x080035EC: addiu       $a0, $zero, 0x10B
    ctx->r4 = ADD32(0, 0X10B);
    // 0x080035F0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080035F4: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x080035F8: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x080035FC: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08003600: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x08003604: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    // 0x08003608: jalr        $t9
    // 0x0800360C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_21;
    // 0x0800360C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_21:
    // 0x08003610: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x08003614: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x08003618: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x0800361C: lw          $v0, 0x18($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X18);
    // 0x08003620: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x08003624: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x08003628: lui         $at, 0xC220
    ctx->r1 = S32(0XC220 << 16);
    // 0x0800362C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08003630: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x08003634: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x08003638: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x0800363C: swc1        $f2, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f2.u32l;
    // 0x08003640: swc1        $f2, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f2.u32l;
    // 0x08003644: swc1        $f18, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f18.u32l;
L_08003648:
    // 0x08003648: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
L_0800364C:
    // 0x0800364C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08003650: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08003654: lhu         $v0, 0x8A($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X8A);
    // 0x08003658: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    // 0x0800365C: slti        $v1, $v0, 0x78
    ctx->r3 = SIGNED(ctx->r2) < 0X78 ? 1 : 0;
    // 0x08003660: addiu       $t4, $v0, 0x1
    ctx->r12 = ADD32(ctx->r2, 0X1);
    // 0x08003664: bne         $v1, $zero, L_08003688
    if (ctx->r3 != 0) {
        // 0x08003668: sh          $t4, 0x8A($a1)
        MEM_H(0X8A, ctx->r5) = ctx->r12;
            goto L_08003688;
    }
    // 0x08003668: sh          $t4, 0x8A($a1)
    MEM_H(0X8A, ctx->r5) = ctx->r12;
    // 0x0800366C: jalr        $t9
    // 0x08003670: sh          $zero, 0x8A($a1)
    MEM_H(0X8A, ctx->r5) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_22;
    // 0x08003670: sh          $zero, 0x8A($a1)
    MEM_H(0X8A, ctx->r5) = 0;
    after_22:
    // 0x08003674: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003678: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800367C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X3698) << 16);
    // 0x08003680: jalr        $t9
    // 0x08003684: addiu       $a0, $a0, 0x3698
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X3698));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_23;
    // 0x08003684: addiu       $a0, $a0, 0x3698
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X3698));
    after_23:
L_08003688:
    // 0x08003688: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800368C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x08003690: jr          $ra
    // 0x08003694: nop

    TRACE_RETURN()
    return;
    // 0x08003694: nop

;}
RECOMP_FUNC void func_080011C8_6C93D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080011C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080011CC: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080011D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080011D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080011D8: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x080011DC: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    // 0x080011E0: jalr        $t9
    // 0x080011E4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080011E4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x080011E8: bne         $v0, $zero, L_08001250
    if (ctx->r2 != 0) {
        // 0x080011EC: lw          $a2, 0x1C($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X1C);
            goto L_08001250;
    }
    // 0x080011EC: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x080011F0: lbu         $t6, 0x7C($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X7C);
    // 0x080011F4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080011F8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080011FC: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x08001200: bne         $t7, $zero, L_08001248
    if (ctx->r15 != 0) {
        // 0x08001204: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(22, 0X970) << 16);
            goto L_08001248;
    }
    // 0x08001204: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X970) << 16);
    // 0x08001208: lwc1        $f6, 0x28($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X28);
    // 0x0800120C: lui         $at, 0x4030
    ctx->r1 = S32(0X4030 << 16);
    // 0x08001210: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x08001214: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08001218: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x0800121C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08001220: c.eq.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d == ctx->f8.d;
    // 0x08001224: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001228: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x0800122C: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08001230: bc1f        L_08001250
    if (!c1cs) {
        // 0x08001234: addiu       $a0, $zero, 0x164
        ctx->r4 = ADD32(0, 0X164);
            goto L_08001250;
    }
    // 0x08001234: addiu       $a0, $zero, 0x164
    ctx->r4 = ADD32(0, 0X164);
    // 0x08001238: jalr        $t9
    // 0x0800123C: lui         $a3, 0x4496
    ctx->r7 = S32(0X4496 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800123C: lui         $a3, 0x4496
    ctx->r7 = S32(0X4496 << 16);
    after_1:
    // 0x08001240: b           L_08001254
    // 0x08001244: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08001254;
    // 0x08001244: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08001248:
    // 0x08001248: jalr        $t9
    // 0x0800124C: addiu       $a0, $a0, 0x970
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X970));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800124C: addiu       $a0, $a0, 0x970
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X970));
    after_2:
L_08001250:
    // 0x08001250: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08001254:
    // 0x08001254: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001258: jr          $ra
    // 0x0800125C: nop

    TRACE_RETURN()
    return;
    // 0x0800125C: nop

;}
RECOMP_FUNC void func_0800432C_6CC53C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800432C: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x08004330: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x08004334: sw          $s7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r23;
    // 0x08004338: sw          $s6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r22;
    // 0x0800433C: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x08004340: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x08004344: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x08004348: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x0800434C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x08004350: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x08004354: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x08004358: lhu         $v0, 0xD6($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XD6);
    // 0x0800435C: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x08004360: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x08004364: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x08004368: lw          $a2, 0x18($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X18);
    // 0x0800436C: bne         $v0, $zero, L_080046A4
    if (ctx->r2 != 0) {
        // 0x08004370: sw          $t7, 0x68($a0)
        MEM_W(0X68, ctx->r4) = ctx->r15;
            goto L_080046A4;
    }
    // 0x08004370: sw          $t7, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r15;
    // 0x08004374: lbu         $t8, 0xD1($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0XD1);
    // 0x08004378: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x0800437C: addiu       $v0, $v0, -0xBE0
    ctx->r2 = ADD32(ctx->r2, -0XBE0);
    // 0x08004380: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x08004384: sb          $t9, 0xD1($a0)
    MEM_B(0XD1, ctx->r4) = ctx->r25;
    // 0x08004388: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x0800438C: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08004390: sw          $a2, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r6;
    // 0x08004394: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x08004398: addiu       $a0, $zero, 0x24F
    ctx->r4 = ADD32(0, 0X24F);
    // 0x0800439C: jalr        $v0
    // 0x080043A0: lui         $a3, 0x4496
    ctx->r7 = S32(0X4496 << 16);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x080043A0: lui         $a3, 0x4496
    ctx->r7 = S32(0X4496 << 16);
    after_0:
    // 0x080043A4: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x080043A8: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x080043AC: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x080043B0: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    // 0x080043B4: lw          $a2, 0x74($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X74);
    // 0x080043B8: jalr        $t9
    // 0x080043BC: lui         $a3, 0x4496
    ctx->r7 = S32(0X4496 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080043BC: lui         $a3, 0x4496
    ctx->r7 = S32(0X4496 << 16);
    after_1:
    // 0x080043C0: lui         $s5, 0x8021
    ctx->r21 = S32(0X8021 << 16);
    // 0x080043C4: addiu       $s5, $s5, 0x71A8
    ctx->r21 = ADD32(ctx->r21, 0X71A8);
    // 0x080043C8: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(22, 0X4B18) << 16);
    // 0x080043CC: addiu       $a1, $a1, 0x4B18
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(22, 0X4B18));
    // 0x080043D0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x080043D4: jalr        $s5
    // 0x080043D8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r21)(rdram, ctx);
        goto after_2;
    // 0x080043D8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x080043DC: beq         $v0, $zero, L_08004424
    if (ctx->r2 == 0) {
        // 0x080043E0: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08004424;
    }
    // 0x080043E0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x080043E4: lui         $s7, 0x8001
    ctx->r23 = S32(0X8001 << 16);
    // 0x080043E8: addiu       $s7, $s7, 0x41C4
    ctx->r23 = ADD32(ctx->r23, 0X41C4);
    // 0x080043EC: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    // 0x080043F0: jalr        $s7
    // 0x080043F4: sh          $a0, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r4;
    LOOKUP_FUNC(ctx->r23)(rdram, ctx);
        goto after_3;
    // 0x080043F4: sh          $a0, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r4;
    after_3:
    // 0x080043F8: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(22, 0X6E74) << 16);
    // 0x080043FC: lwc1        $f0, 0x6E74($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(22, 0X6E74));
    // 0x08004400: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x08004404: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08004408: lw          $v1, 0x18($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X18);
    // 0x0800440C: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x08004410: sw          $s3, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->r19;
    // 0x08004414: swc1        $f4, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->f4.u32l;
    // 0x08004418: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    // 0x0800441C: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x08004420: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
L_08004424:
    // 0x08004424: lui         $s7, 0x8001
    ctx->r23 = S32(0X8001 << 16);
    // 0x08004428: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(22, 0X4814) << 16);
    // 0x0800442C: addiu       $s7, $s7, 0x41C4
    ctx->r23 = ADD32(ctx->r23, 0X41C4);
    // 0x08004430: addiu       $s6, $zero, 0x1F
    ctx->r22 = ADD32(0, 0X1F);
    // 0x08004434: addiu       $a1, $a1, 0x4814
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(22, 0X4814));
    // 0x08004438: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x0800443C: jalr        $s5
    // 0x08004440: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r21)(rdram, ctx);
        goto after_4;
    // 0x08004440: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x08004444: beq         $v0, $zero, L_08004498
    if (ctx->r2 == 0) {
        // 0x08004448: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08004498;
    }
    // 0x08004448: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x0800444C: sh          $s6, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r22;
    // 0x08004450: jalr        $s7
    // 0x08004454: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    LOOKUP_FUNC(ctx->r23)(rdram, ctx);
        goto after_5;
    // 0x08004454: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_5:
    // 0x08004458: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(22, 0X6E80) << 16);
    // 0x0800445C: lwc1        $f0, 0x6E80($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(22, 0X6E80));
    // 0x08004460: lui         $at, 0x41E8
    ctx->r1 = S32(0X41E8 << 16);
    // 0x08004464: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08004468: lw          $v1, 0x18($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X18);
    // 0x0800446C: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x08004470: addiu       $t0, $zero, 0x60
    ctx->r8 = ADD32(0, 0X60);
    // 0x08004474: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x08004478: sw          $s3, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->r19;
    // 0x0800447C: sb          $a0, 0xD8($s0)
    MEM_B(0XD8, ctx->r16) = ctx->r4;
    // 0x08004480: sb          $a0, 0xD9($s0)
    MEM_B(0XD9, ctx->r16) = ctx->r4;
    // 0x08004484: sb          $t0, 0xDA($s0)
    MEM_B(0XDA, ctx->r16) = ctx->r8;
    // 0x08004488: swc1        $f6, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->f6.u32l;
    // 0x0800448C: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    // 0x08004490: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x08004494: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
L_08004498:
    // 0x08004498: lbu         $v0, 0xD1($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0XD1);
    // 0x0800449C: lui         $s4, 0x800
    ctx->r20 = S32(RELOC_HI16(22, 0X4DAC) << 16);
    // 0x080044A0: addiu       $s4, $s4, 0x4DAC
    ctx->r20 = ADD32(ctx->r20, (int16_t)RELOC_LO16(22, 0X4DAC));
    // 0x080044A4: beq         $v0, $zero, L_08004624
    if (ctx->r2 == 0) {
        // 0x080044A8: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_08004624;
    }
    // 0x080044A8: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x080044AC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x080044B0: beq         $v0, $at, L_080045A0
    if (ctx->r2 == ctx->r1) {
        // 0x080044B4: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_080045A0;
    }
    // 0x080044B4: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x080044B8: beq         $v0, $at, L_08004534
    if (ctx->r2 == ctx->r1) {
        // 0x080044BC: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_08004534;
    }
    // 0x080044BC: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x080044C0: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x080044C4: beq         $v0, $at, L_080044D4
    if (ctx->r2 == ctx->r1) {
        // 0x080044C8: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_080044D4;
    }
    // 0x080044C8: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x080044CC: b           L_080046A4
    // 0x080044D0: lhu         $v0, 0xD6($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0XD6);
        goto L_080046A4;
    // 0x080044D0: lhu         $v0, 0xD6($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0XD6);
L_080044D4:
    // 0x080044D4: lui         $s4, 0x800
    ctx->r20 = S32(RELOC_HI16(22, 0X4DAC) << 16);
    // 0x080044D8: addiu       $s4, $s4, 0x4DAC
    ctx->r20 = ADD32(ctx->r20, (int16_t)RELOC_LO16(22, 0X4DAC));
    // 0x080044DC: addiu       $s2, $zero, 0x7
    ctx->r18 = ADD32(0, 0X7);
    // 0x080044E0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
L_080044E4:
    // 0x080044E4: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x080044E8: jalr        $s5
    // 0x080044EC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r21)(rdram, ctx);
        goto after_6;
    // 0x080044EC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x080044F0: beq         $v0, $zero, L_0800450C
    if (ctx->r2 == 0) {
        // 0x080044F4: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_0800450C;
    }
    // 0x080044F4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x080044F8: sh          $s6, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r22;
    // 0x080044FC: jalr        $s7
    // 0x08004500: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    LOOKUP_FUNC(ctx->r23)(rdram, ctx);
        goto after_7;
    // 0x08004500: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_7:
    // 0x08004504: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x08004508: sw          $s3, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->r19;
L_0800450C:
    // 0x0800450C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x08004510: bnel        $s1, $s2, L_080044E4
    if (ctx->r17 != ctx->r18) {
        // 0x08004514: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_080044E4;
    }
    goto skip_0;
    // 0x08004514: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    skip_0:
    // 0x08004518: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x0800451C: lw          $t1, -0x324C($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X324C);
    // 0x08004520: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x08004524: ori         $t2, $t1, 0x200
    ctx->r10 = ctx->r9 | 0X200;
    // 0x08004528: sw          $t2, -0x324C($at)
    MEM_W(-0X324C, ctx->r1) = ctx->r10;
    // 0x0800452C: b           L_080046A4
    // 0x08004530: lhu         $v0, 0xD6($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0XD6);
        goto L_080046A4;
    // 0x08004530: lhu         $v0, 0xD6($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0XD6);
L_08004534:
    // 0x08004534: lui         $s4, 0x800
    ctx->r20 = S32(RELOC_HI16(22, 0X4DAC) << 16);
    // 0x08004538: addiu       $s4, $s4, 0x4DAC
    ctx->r20 = ADD32(ctx->r20, (int16_t)RELOC_LO16(22, 0X4DAC));
    // 0x0800453C: addiu       $s2, $zero, 0x7
    ctx->r18 = ADD32(0, 0X7);
    // 0x08004540: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
L_08004544:
    // 0x08004544: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x08004548: jalr        $s5
    // 0x0800454C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r21)(rdram, ctx);
        goto after_8;
    // 0x0800454C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
    // 0x08004550: beq         $v0, $zero, L_0800456C
    if (ctx->r2 == 0) {
        // 0x08004554: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_0800456C;
    }
    // 0x08004554: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08004558: sh          $s6, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r22;
    // 0x0800455C: jalr        $s7
    // 0x08004560: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    LOOKUP_FUNC(ctx->r23)(rdram, ctx);
        goto after_9;
    // 0x08004560: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_9:
    // 0x08004564: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x08004568: sw          $s3, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->r19;
L_0800456C:
    // 0x0800456C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x08004570: bnel        $s1, $s2, L_08004544
    if (ctx->r17 != ctx->r18) {
        // 0x08004574: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_08004544;
    }
    goto skip_1;
    // 0x08004574: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    skip_1:
    // 0x08004578: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x0800457C: addiu       $v1, $v1, -0x33D0
    ctx->r3 = ADD32(ctx->r3, -0X33D0);
    // 0x08004580: lw          $t3, 0x184($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X184);
    // 0x08004584: addiu       $at, $zero, -0x201
    ctx->r1 = ADD32(0, -0X201);
    // 0x08004588: and         $t4, $t3, $at
    ctx->r12 = ctx->r11 & ctx->r1;
    // 0x0800458C: sw          $t4, 0x184($v1)
    MEM_W(0X184, ctx->r3) = ctx->r12;
    // 0x08004590: ori         $t6, $t4, 0x400
    ctx->r14 = ctx->r12 | 0X400;
    // 0x08004594: sw          $t6, 0x184($v1)
    MEM_W(0X184, ctx->r3) = ctx->r14;
    // 0x08004598: b           L_080046A4
    // 0x0800459C: lhu         $v0, 0xD6($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0XD6);
        goto L_080046A4;
    // 0x0800459C: lhu         $v0, 0xD6($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0XD6);
L_080045A0:
    // 0x080045A0: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x080045A4: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x080045A8: lw          $t7, 0x184($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X184);
    // 0x080045AC: lui         $s4, 0x800
    ctx->r20 = S32(RELOC_HI16(22, 0X4DAC) << 16);
    // 0x080045B0: addiu       $s4, $s4, 0x4DAC
    ctx->r20 = ADD32(ctx->r20, (int16_t)RELOC_LO16(22, 0X4DAC));
    // 0x080045B4: ori         $t8, $t7, 0x800
    ctx->r24 = ctx->r15 | 0X800;
    // 0x080045B8: sw          $t8, 0x184($v0)
    MEM_W(0X184, ctx->r2) = ctx->r24;
    // 0x080045BC: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x080045C0: addiu       $s2, $zero, 0x7
    ctx->r18 = ADD32(0, 0X7);
    // 0x080045C4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
L_080045C8:
    // 0x080045C8: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x080045CC: jalr        $s5
    // 0x080045D0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r21)(rdram, ctx);
        goto after_10;
    // 0x080045D0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_10:
    // 0x080045D4: beq         $v0, $zero, L_080045F0
    if (ctx->r2 == 0) {
        // 0x080045D8: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_080045F0;
    }
    // 0x080045D8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x080045DC: sh          $s6, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r22;
    // 0x080045E0: jalr        $s7
    // 0x080045E4: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    LOOKUP_FUNC(ctx->r23)(rdram, ctx);
        goto after_11;
    // 0x080045E4: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_11:
    // 0x080045E8: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x080045EC: sw          $s3, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->r19;
L_080045F0:
    // 0x080045F0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x080045F4: bnel        $s1, $s2, L_080045C8
    if (ctx->r17 != ctx->r18) {
        // 0x080045F8: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_080045C8;
    }
    goto skip_2;
    // 0x080045F8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    skip_2:
    // 0x080045FC: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x08004600: lw          $t9, -0x324C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X324C);
    // 0x08004604: addiu       $at, $zero, -0x401
    ctx->r1 = ADD32(0, -0X401);
    // 0x08004608: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x0800460C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x08004610: sw          $t0, -0x324C($at)
    MEM_W(-0X324C, ctx->r1) = ctx->r8;
    // 0x08004614: ori         $t1, $t0, 0x800
    ctx->r9 = ctx->r8 | 0X800;
    // 0x08004618: sw          $t1, -0x324C($at)
    MEM_W(-0X324C, ctx->r1) = ctx->r9;
    // 0x0800461C: b           L_080046A4
    // 0x08004620: lhu         $v0, 0xD6($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0XD6);
        goto L_080046A4;
    // 0x08004620: lhu         $v0, 0xD6($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0XD6);
L_08004624:
    // 0x08004624: addiu       $s2, $zero, 0x7
    ctx->r18 = ADD32(0, 0X7);
    // 0x08004628: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
L_0800462C:
    // 0x0800462C: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x08004630: jalr        $s5
    // 0x08004634: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r21)(rdram, ctx);
        goto after_12;
    // 0x08004634: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_12:
    // 0x08004638: beq         $v0, $zero, L_08004654
    if (ctx->r2 == 0) {
        // 0x0800463C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08004654;
    }
    // 0x0800463C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08004640: sh          $s6, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r22;
    // 0x08004644: jalr        $s7
    // 0x08004648: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    LOOKUP_FUNC(ctx->r23)(rdram, ctx);
        goto after_13;
    // 0x08004648: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_13:
    // 0x0800464C: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x08004650: sw          $s3, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->r19;
L_08004654:
    // 0x08004654: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x08004658: bnel        $s1, $s2, L_0800462C
    if (ctx->r17 != ctx->r18) {
        // 0x0800465C: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_0800462C;
    }
    goto skip_3;
    // 0x0800465C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    skip_3:
    // 0x08004660: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x08004664: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08004668: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x0800466C: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    // 0x08004670: lw          $a2, 0x74($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X74);
    // 0x08004674: jalr        $t9
    // 0x08004678: lui         $a3, 0x4496
    ctx->r7 = S32(0X4496 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x08004678: lui         $a3, 0x4496
    ctx->r7 = S32(0X4496 << 16);
    after_14:
    // 0x0800467C: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x08004680: lw          $t2, -0x324C($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X324C);
    // 0x08004684: addiu       $s0, $zero, -0x2
    ctx->r16 = ADD32(0, -0X2);
    // 0x08004688: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x0800468C: and         $t3, $t2, $s0
    ctx->r11 = ctx->r10 & ctx->r16;
    // 0x08004690: sw          $t3, -0x324C($at)
    MEM_W(-0X324C, ctx->r1) = ctx->r11;
    // 0x08004694: lw          $t4, 0x68($s3)
    ctx->r12 = MEM_W(ctx->r19, 0X68);
    // 0x08004698: lhu         $v0, 0xD6($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0XD6);
    // 0x0800469C: and         $t5, $t4, $s0
    ctx->r13 = ctx->r12 & ctx->r16;
    // 0x080046A0: sw          $t5, 0x68($s3)
    MEM_W(0X68, ctx->r19) = ctx->r13;
L_080046A4:
    // 0x080046A4: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x080046A8: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x080046AC: slti        $at, $t7, 0x5A
    ctx->r1 = SIGNED(ctx->r15) < 0X5A ? 1 : 0;
    // 0x080046B0: addiu       $s0, $zero, -0x2
    ctx->r16 = ADD32(0, -0X2);
    // 0x080046B4: beq         $at, $zero, L_08004724
    if (ctx->r1 == 0) {
        // 0x080046B8: sh          $t6, 0xD6($s3)
        MEM_H(0XD6, ctx->r19) = ctx->r14;
            goto L_08004724;
    }
    // 0x080046B8: sh          $t6, 0xD6($s3)
    MEM_H(0XD6, ctx->r19) = ctx->r14;
    // 0x080046BC: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x080046C0: lhu         $t8, -0x33D0($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X33D0);
    // 0x080046C4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x080046C8: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x080046CC: andi        $t0, $t8, 0x2
    ctx->r8 = ctx->r24 & 0X2;
    // 0x080046D0: beq         $t0, $zero, L_08004704
    if (ctx->r8 == 0) {
        // 0x080046D4: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_08004704;
    }
    // 0x080046D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080046D8: lhu         $a3, 0xDA($s3)
    ctx->r7 = MEM_HU(ctx->r19, 0XDA);
    // 0x080046DC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080046E0: addiu       $t9, $t9, -0x2004
    ctx->r25 = ADD32(ctx->r25, -0X2004);
    // 0x080046E4: addiu       $t1, $a3, 0x80
    ctx->r9 = ADD32(ctx->r7, 0X80);
    // 0x080046E8: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x080046EC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x080046F0: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x080046F4: jalr        $t9
    // 0x080046F8: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x080046F8: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_15:
    // 0x080046FC: b           L_0800476C
    // 0x08004700: nop

        goto L_0800476C;
    // 0x08004700: nop

L_08004704:
    // 0x08004704: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004708: addiu       $t9, $t9, -0x2004
    ctx->r25 = ADD32(ctx->r25, -0X2004);
    // 0x0800470C: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x08004710: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x08004714: jalr        $t9
    // 0x08004718: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x08004718: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_16:
    // 0x0800471C: b           L_0800476C
    // 0x08004720: nop

        goto L_0800476C;
    // 0x08004720: nop

L_08004724:
    // 0x08004724: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004728: addiu       $t9, $t9, -0x2004
    ctx->r25 = ADD32(ctx->r25, -0X2004);
    // 0x0800472C: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x08004730: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x08004734: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x08004738: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800473C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08004740: jalr        $t9
    // 0x08004744: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x08004744: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_17:
    // 0x08004748: lw          $t4, 0x68($s3)
    ctx->r12 = MEM_W(ctx->r19, 0X68);
    // 0x0800474C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004750: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08004754: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X3F78) << 16);
    // 0x08004758: and         $t5, $t4, $s0
    ctx->r13 = ctx->r12 & ctx->r16;
    // 0x0800475C: sh          $zero, 0xD6($s3)
    MEM_H(0XD6, ctx->r19) = 0;
    // 0x08004760: sw          $t5, 0x68($s3)
    MEM_W(0X68, ctx->r19) = ctx->r13;
    // 0x08004764: jalr        $t9
    // 0x08004768: addiu       $a0, $a0, 0x3F78
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X3F78));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x08004768: addiu       $a0, $a0, 0x3F78
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X3F78));
    after_18:
L_0800476C:
    // 0x0800476C: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x08004770: addiu       $v1, $v1, -0x33D0
    ctx->r3 = ADD32(ctx->r3, -0X33D0);
    // 0x08004774: lw          $v0, 0x184($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X184);
    // 0x08004778: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x0800477C: bne         $t6, $zero, L_080047E8
    if (ctx->r14 != 0) {
        // 0x08004780: andi        $t7, $v0, 0x2
        ctx->r15 = ctx->r2 & 0X2;
            goto L_080047E8;
    }
    // 0x08004780: andi        $t7, $v0, 0x2
    ctx->r15 = ctx->r2 & 0X2;
    // 0x08004784: bnel        $t7, $zero, L_080047EC
    if (ctx->r15 != 0) {
        // 0x08004788: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_080047EC;
    }
    goto skip_4;
    // 0x08004788: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_4:
    // 0x0800478C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08004790: lwc1        $f8, 0x78($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0X78);
    // 0x08004794: c.eq.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl == ctx->f8.fl;
    // 0x08004798: nop

    // 0x0800479C: bc1fl       L_080047EC
    if (!c1cs) {
        // 0x080047A0: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_080047EC;
    }
    goto skip_5;
    // 0x080047A0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_5:
    // 0x080047A4: lwc1        $f10, 0x7C($s3)
    ctx->f10.u32l = MEM_W(ctx->r19, 0X7C);
    // 0x080047A8: c.eq.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl == ctx->f10.fl;
    // 0x080047AC: nop

    // 0x080047B0: bc1fl       L_080047EC
    if (!c1cs) {
        // 0x080047B4: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_080047EC;
    }
    goto skip_6;
    // 0x080047B4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_6:
    // 0x080047B8: lwc1        $f16, 0x80($s3)
    ctx->f16.u32l = MEM_W(ctx->r19, 0X80);
    // 0x080047BC: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(22, 0X30A8) << 16);
    // 0x080047C0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080047C4: c.eq.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl == ctx->f16.fl;
    // 0x080047C8: ori         $t8, $v0, 0x2
    ctx->r24 = ctx->r2 | 0X2;
    // 0x080047CC: addiu       $t9, $t9, 0x522C
    ctx->r25 = ADD32(ctx->r25, 0X522C);
    // 0x080047D0: addiu       $a1, $a1, 0x30A8
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(22, 0X30A8));
    // 0x080047D4: bc1fl       L_080047EC
    if (!c1cs) {
        // 0x080047D8: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_080047EC;
    }
    goto skip_7;
    // 0x080047D8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_7:
    // 0x080047DC: sw          $t8, 0x184($v1)
    MEM_W(0X184, ctx->r3) = ctx->r24;
    // 0x080047E0: jalr        $t9
    // 0x080047E4: lw          $a0, 0xDC($s3)
    ctx->r4 = MEM_W(ctx->r19, 0XDC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_19;
    // 0x080047E4: lw          $a0, 0xDC($s3)
    ctx->r4 = MEM_W(ctx->r19, 0XDC);
    after_19:
L_080047E8:
    // 0x080047E8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_080047EC:
    // 0x080047EC: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x080047F0: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x080047F4: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x080047F8: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x080047FC: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x08004800: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x08004804: lw          $s6, 0x34($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X34);
    // 0x08004808: lw          $s7, 0x38($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X38);
    // 0x0800480C: jr          $ra
    // 0x08004810: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    TRACE_RETURN()
    return;
    // 0x08004810: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_08003698_6CB8A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003698: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800369C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080036A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080036A4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080036A8: addiu       $t9, $t9, 0x26C
    ctx->r25 = ADD32(ctx->r25, 0X26C);
    // 0x080036AC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080036B0: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x080036B4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x080036B8: jalr        $t9
    // 0x080036BC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080036BC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_0:
    // 0x080036C0: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080036C4: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x080036C8: jalr        $t9
    // 0x080036CC: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080036CC: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_1:
    // 0x080036D0: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x080036D4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080036D8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080036DC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X36FC) << 16);
    // 0x080036E0: addiu       $a0, $a0, 0x36FC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X36FC));
    // 0x080036E4: jalr        $t9
    // 0x080036E8: sh          $zero, 0x8A($t6)
    MEM_H(0X8A, ctx->r14) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080036E8: sh          $zero, 0x8A($t6)
    MEM_H(0X8A, ctx->r14) = 0;
    after_2:
    // 0x080036EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080036F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080036F4: jr          $ra
    // 0x080036F8: nop

    TRACE_RETURN()
    return;
    // 0x080036F8: nop

;}
RECOMP_FUNC void func_08003804_6CBA14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003804: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08003808: jr          $ra
    // 0x0800380C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x0800380C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08001F08_6CA118(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001F08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001F0C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001F10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001F14: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x08001F18: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08001F1C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001F20: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x08001F24: jalr        $t9
    // 0x08001F28: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001F28: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    after_0:
    // 0x08001F2C: bne         $v0, $zero, L_080020A4
    if (ctx->r2 != 0) {
        // 0x08001F30: lw          $a3, 0x18($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X18);
            goto L_080020A4;
    }
    // 0x08001F30: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x08001F34: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x08001F38: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x08001F3C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08001F40: lwc1        $f4, 0x28($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X28);
    // 0x08001F44: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x08001F48: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x08001F4C: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x08001F50: nop

    // 0x08001F54: bc1tl       L_080020A8
    if (c1cs) {
        // 0x08001F58: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_080020A8;
    }
    goto skip_0;
    // 0x08001F58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08001F5C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x08001F60: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x08001F64: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08001F68: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x08001F6C: cvt.w.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = CVT_W_S(ctx->f0.fl);
    // 0x08001F70: swc1        $f0, 0xD8($a3)
    MEM_W(0XD8, ctx->r7) = ctx->f0.u32l;
    // 0x08001F74: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x08001F78: nop

    // 0x08001F7C: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x08001F80: beql        $t7, $zero, L_08001FD0
    if (ctx->r15 == 0) {
        // 0x08001F84: mfc1        $t7, $f8
        ctx->r15 = (int32_t)ctx->f8.u32l;
            goto L_08001FD0;
    }
    goto skip_1;
    // 0x08001F84: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    skip_1:
    // 0x08001F88: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08001F8C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x08001F90: sub.s       $f8, $f0, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x08001F94: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x08001F98: nop

    // 0x08001F9C: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x08001FA0: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x08001FA4: nop

    // 0x08001FA8: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x08001FAC: bne         $t7, $zero, L_08001FC4
    if (ctx->r15 != 0) {
        // 0x08001FB0: nop
    
            goto L_08001FC4;
    }
    // 0x08001FB0: nop

    // 0x08001FB4: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x08001FB8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08001FBC: b           L_08001FDC
    // 0x08001FC0: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_08001FDC;
    // 0x08001FC0: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_08001FC4:
    // 0x08001FC4: b           L_08001FDC
    // 0x08001FC8: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_08001FDC;
    // 0x08001FC8: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x08001FCC: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
L_08001FD0:
    // 0x08001FD0: nop

    // 0x08001FD4: bltz        $t7, L_08001FC4
    if (SIGNED(ctx->r15) < 0) {
        // 0x08001FD8: nop
    
            goto L_08001FC4;
    }
    // 0x08001FD8: nop

L_08001FDC:
    // 0x08001FDC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x08001FE0: sh          $t7, -0x324C($at)
    MEM_H(-0X324C, ctx->r1) = ctx->r15;
    // 0x08001FE4: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x08001FE8: lwc1        $f10, 0xD8($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0XD8);
    // 0x08001FEC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(22, 0X6DF8) << 16);
    // 0x08001FF0: ldc1        $f18, 0x6DF8($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(22, 0X6DF8));
    // 0x08001FF4: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x08001FF8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08001FFC: div.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = DIV_D(ctx->f16.d, ctx->f18.d);
    // 0x08002000: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x08002004: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x08002008: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(22, 0X6E00) << 16);
    // 0x0800200C: ldc1        $f10, 0x6E00($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(22, 0X6E00));
    // 0x08002010: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08002014: lhu         $a1, 0x16($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X16);
    // 0x08002018: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800201C: addiu       $t9, $t9, -0x4BDC
    ctx->r25 = ADD32(ctx->r25, -0X4BDC);
    // 0x08002020: addiu       $t8, $a1, 0x200
    ctx->r24 = ADD32(ctx->r5, 0X200);
    // 0x08002024: andi        $a1, $t8, 0x3FF
    ctx->r5 = ctx->r24 & 0X3FF;
    // 0x08002028: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x0800202C: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x08002030: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x08002034: lwc1        $f8, 0xEC($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0XEC);
    // 0x08002038: trunc.w.d   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_D(ctx->f16.d);
    // 0x0800203C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08002040: mfc1        $t2, $f18
    ctx->r10 = (int32_t)ctx->f18.u32l;
    // 0x08002044: nop

    // 0x08002048: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x0800204C: nop

    // 0x08002050: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08002054: div.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f6.fl);
    // 0x08002058: div.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x0800205C: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x08002060: jalr        $t9
    // 0x08002064: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002064: nop

    after_1:
    // 0x08002068: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x0800206C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002070: addiu       $t3, $zero, 0x100
    ctx->r11 = ADD32(0, 0X100);
    // 0x08002074: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08002078: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x0800207C: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08002080: addiu       $a0, $zero, 0x2A1
    ctx->r4 = ADD32(0, 0X2A1);
    // 0x08002084: lui         $a3, 0x4496
    ctx->r7 = S32(0X4496 << 16);
    // 0x08002088: jalr        $t9
    // 0x0800208C: sh          $t3, 0x7E($a2)
    MEM_H(0X7E, ctx->r6) = ctx->r11;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800208C: sh          $t3, 0x7E($a2)
    MEM_H(0X7E, ctx->r6) = ctx->r11;
    after_2:
    // 0x08002090: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002094: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002098: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X20B4) << 16);
    // 0x0800209C: jalr        $t9
    // 0x080020A0: addiu       $a0, $a0, 0x20B4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X20B4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080020A0: addiu       $a0, $a0, 0x20B4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X20B4));
    after_3:
L_080020A4:
    // 0x080020A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080020A8:
    // 0x080020A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080020AC: jr          $ra
    // 0x080020B0: nop

    TRACE_RETURN()
    return;
    // 0x080020B0: nop

;}
RECOMP_FUNC void func_0800425C_6D333C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800425C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08004260: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08004264: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08004268: lbu         $t6, 0x7C($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X7C);
    // 0x0800426C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X3F70) << 16);
    // 0x08004270: addiu       $a0, $a0, 0x3F70
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X3F70));
    // 0x08004274: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x08004278: beq         $t7, $zero, L_080042D4
    if (ctx->r15 == 0) {
        // 0x0800427C: lui         $v0, 0x8003
        ctx->r2 = S32(0X8003 << 16);
            goto L_080042D4;
    }
    // 0x0800427C: lui         $v0, 0x8003
    ctx->r2 = S32(0X8003 << 16);
    // 0x08004280: addiu       $v0, $v0, 0x521C
    ctx->r2 = ADD32(ctx->r2, 0X521C);
    // 0x08004284: jalr        $v0
    // 0x08004288: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x08004288: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x0800428C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08004290: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08004294: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08004298: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800429C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x080042A0: jalr        $t9
    // 0x080042A4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080042A4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x080042A8: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x080042AC: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x080042B0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080042B4: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x080042B8: sh          $t8, 0x8A($v0)
    MEM_H(0X8A, ctx->r2) = ctx->r24;
    // 0x080042BC: swc1        $f4, 0x7C($v0)
    MEM_W(0X7C, ctx->r2) = ctx->f4.u32l;
    // 0x080042C0: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x080042C4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X42E4) << 16);
    // 0x080042C8: addiu       $a0, $a0, 0x42E4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X42E4));
    // 0x080042CC: jalr        $t9
    // 0x080042D0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080042D0: nop

    after_2:
L_080042D4:
    // 0x080042D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080042D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080042DC: jr          $ra
    // 0x080042E0: nop

    TRACE_RETURN()
    return;
    // 0x080042E0: nop

;}
RECOMP_FUNC void func_08003938_6D2A18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003938: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800393C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003940: lui         $at, 0x4280
    ctx->r1 = S32(0X4280 << 16);
    // 0x08003944: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08003948: lwc1        $f4, 0x7C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x0800394C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08003950: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x08003954: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x08003958: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    // 0x0800395C: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x08003960: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x08003964: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x08003968: nop

    // 0x0800396C: andi        $t0, $t9, 0x3FF
    ctx->r8 = ctx->r25 & 0X3FF;
    // 0x08003970: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003974: sh          $t0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r8;
    // 0x08003978: addiu       $t9, $t9, -0x43FC
    ctx->r25 = ADD32(ctx->r25, -0X43FC);
    // 0x0800397C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08003980: jalr        $t9
    // 0x08003984: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003984: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_0:
    // 0x08003988: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800398C: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x08003990: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08003994: jalr        $t9
    // 0x08003998: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003998: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_1:
    // 0x0800399C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x080039A0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080039A4: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x080039A8: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x080039AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x080039B0: addiu       $t1, $v0, -0x1
    ctx->r9 = ADD32(ctx->r2, -0X1);
    // 0x080039B4: bne         $v0, $zero, L_080039C4
    if (ctx->r2 != 0) {
        // 0x080039B8: sh          $t1, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r9;
            goto L_080039C4;
    }
    // 0x080039B8: sh          $t1, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r9;
    // 0x080039BC: jalr        $t9
    // 0x080039C0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080039C0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
L_080039C4:
    // 0x080039C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080039C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080039CC: jr          $ra
    // 0x080039D0: nop

    TRACE_RETURN()
    return;
    // 0x080039D0: nop

;}
RECOMP_FUNC void func_08002B70_6D1C50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002B70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002B74: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002B78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002B7C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08002B80: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x08002B84: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x08002B88: lwc1        $f4, 0xE0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XE0);
    // 0x08002B8C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002B90: addiu       $t9, $t9, -0x2658
    ctx->r25 = ADD32(ctx->r25, -0X2658);
    // 0x08002B94: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x08002B98: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x08002B9C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x08002BA0: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x08002BA4: nop

    // 0x08002BA8: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x08002BAC: beql        $a1, $zero, L_08002BFC
    if (ctx->r5 == 0) {
        // 0x08002BB0: mfc1        $a1, $f6
        ctx->r5 = (int32_t)ctx->f6.u32l;
            goto L_08002BFC;
    }
    goto skip_0;
    // 0x08002BB0: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    skip_0:
    // 0x08002BB4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08002BB8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08002BBC: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x08002BC0: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x08002BC4: nop

    // 0x08002BC8: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x08002BCC: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x08002BD0: nop

    // 0x08002BD4: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x08002BD8: bne         $a1, $zero, L_08002BF0
    if (ctx->r5 != 0) {
        // 0x08002BDC: nop
    
            goto L_08002BF0;
    }
    // 0x08002BDC: nop

    // 0x08002BE0: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x08002BE4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08002BE8: b           L_08002C08
    // 0x08002BEC: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
        goto L_08002C08;
    // 0x08002BEC: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
L_08002BF0:
    // 0x08002BF0: b           L_08002C08
    // 0x08002BF4: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
        goto L_08002C08;
    // 0x08002BF4: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x08002BF8: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
L_08002BFC:
    // 0x08002BFC: nop

    // 0x08002C00: bltz        $a1, L_08002BF0
    if (SIGNED(ctx->r5) < 0) {
        // 0x08002C04: nop
    
            goto L_08002BF0;
    }
    // 0x08002C04: nop

L_08002C08:
    // 0x08002C08: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x08002C0C: andi        $t7, $a1, 0xFFFF
    ctx->r15 = ctx->r5 & 0XFFFF;
    // 0x08002C10: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x08002C14: jalr        $t9
    // 0x08002C18: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002C18: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x08002C1C: beq         $v0, $zero, L_08002C48
    if (ctx->r2 == 0) {
        // 0x08002C20: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_08002C48;
    }
    // 0x08002C20: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08002C24: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002C28: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08002C2C: jalr        $t9
    // 0x08002C30: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002C30: nop

    after_1:
    // 0x08002C34: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002C38: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002C3C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X28B4) << 16);
    // 0x08002C40: jalr        $t9
    // 0x08002C44: addiu       $a0, $a0, 0x28B4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X28B4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002C44: addiu       $a0, $a0, 0x28B4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X28B4));
    after_2:
L_08002C48:
    // 0x08002C48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002C4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002C50: jr          $ra
    // 0x08002C54: nop

    TRACE_RETURN()
    return;
    // 0x08002C54: nop

;}
RECOMP_FUNC void func_08000788_6CF868(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000788: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800078C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000790: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000794: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000798: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x0800079C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080007A0: jalr        $t9
    // 0x080007A4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080007A4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x080007A8: bne         $v0, $zero, L_080007DC
    if (ctx->r2 != 0) {
        // 0x080007AC: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_080007DC;
    }
    // 0x080007AC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x080007B0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080007B4: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080007B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x080007BC: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x080007C0: jalr        $t9
    // 0x080007C4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080007C4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x080007C8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080007CC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080007D0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X7EC) << 16);
    // 0x080007D4: jalr        $t9
    // 0x080007D8: addiu       $a0, $a0, 0x7EC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X7EC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080007D8: addiu       $a0, $a0, 0x7EC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X7EC));
    after_2:
L_080007DC:
    // 0x080007DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080007E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080007E4: jr          $ra
    // 0x080007E8: nop

    TRACE_RETURN()
    return;
    // 0x080007E8: nop

;}
RECOMP_FUNC void func_080031DC_6D22BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080031DC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080031E0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080031E4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080031E8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080031EC: addiu       $t9, $t9, -0x6BB8
    ctx->r25 = ADD32(ctx->r25, -0X6BB8);
    // 0x080031F0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080031F4: jalr        $t9
    // 0x080031F8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080031F8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x080031FC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003200: addiu       $t9, $t9, -0x5230
    ctx->r25 = ADD32(ctx->r25, -0X5230);
    // 0x08003204: lwc1        $f12, 0x78($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X78);
    // 0x08003208: jalr        $t9
    // 0x0800320C: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800320C: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    after_1:
    // 0x08003210: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x08003214: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003218: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x0800321C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003220: jalr        $t9
    // 0x08003224: sh          $v0, 0x16($t6)
    MEM_H(0X16, ctx->r14) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003224: sh          $v0, 0x16($t6)
    MEM_H(0X16, ctx->r14) = ctx->r2;
    after_2:
    // 0x08003228: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800322C: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08003230: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003234: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08003238: jalr        $t9
    // 0x0800323C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800323C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x08003240: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08003244: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08003248: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x0800324C: jr          $ra
    // 0x08003250: nop

    TRACE_RETURN()
    return;
    // 0x08003250: nop

;}
RECOMP_FUNC void func_08003CAC_6D2D8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003CAC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08003CB0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08003CB4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08003CB8: lui         $at, 0x4280
    ctx->r1 = S32(0X4280 << 16);
    // 0x08003CBC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08003CC0: lwc1        $f4, 0x7C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x08003CC4: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x08003CC8: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x08003CCC: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x08003CD0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x08003CD4: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x08003CD8: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x08003CDC: nop

    // 0x08003CE0: andi        $t0, $t9, 0x3FF
    ctx->r8 = ctx->r25 & 0X3FF;
    // 0x08003CE4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08003CE8: sh          $t0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r8;
    // 0x08003CEC: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08003CF0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08003CF4: jalr        $t9
    // 0x08003CF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003CF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x08003CFC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08003D00: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x08003D04: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003D08: lbu         $t2, 0xEB($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0XEB);
    // 0x08003D0C: lbu         $a1, 0xE8($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XE8);
    // 0x08003D10: lbu         $a2, 0xE9($a0)
    ctx->r6 = MEM_BU(ctx->r4, 0XE9);
    // 0x08003D14: lbu         $a3, 0xEA($a0)
    ctx->r7 = MEM_BU(ctx->r4, 0XEA);
    // 0x08003D18: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x08003D1C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x08003D20: lhu         $t5, 0x16($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X16);
    // 0x08003D24: addiu       $t9, $t9, -0x6CD0
    ctx->r25 = ADD32(ctx->r25, -0X6CD0);
    // 0x08003D28: jalr        $t9
    // 0x08003D2C: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003D2C: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    after_1:
    // 0x08003D30: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003D34: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003D38: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X3BF8) << 16);
    // 0x08003D3C: jalr        $t9
    // 0x08003D40: addiu       $a0, $a0, 0x3BF8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X3BF8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003D40: addiu       $a0, $a0, 0x3BF8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X3BF8));
    after_2:
    // 0x08003D44: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08003D48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08003D4C: jr          $ra
    // 0x08003D50: nop

    TRACE_RETURN()
    return;
    // 0x08003D50: nop

;}
RECOMP_FUNC void func_08000AE4_6CFBC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000AE4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000AE8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000AEC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000AF0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000AF4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000AF8: addiu       $t9, $t9, -0x3E6C
    ctx->r25 = ADD32(ctx->r25, -0X3E6C);
    // 0x08000AFC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000B00: jalr        $t9
    // 0x08000B04: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000B04: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_0:
    // 0x08000B08: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000B0C: addiu       $t9, $t9, -0x5230
    ctx->r25 = ADD32(ctx->r25, -0X5230);
    // 0x08000B10: lwc1        $f12, 0x78($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X78);
    // 0x08000B14: jalr        $t9
    // 0x08000B18: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000B18: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    after_1:
    // 0x08000B1C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x08000B20: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000B24: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08000B28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000B2C: jalr        $t9
    // 0x08000B30: sh          $v0, 0x16($t6)
    MEM_H(0X16, ctx->r14) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000B30: sh          $v0, 0x16($t6)
    MEM_H(0X16, ctx->r14) = ctx->r2;
    after_2:
    // 0x08000B34: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000B38: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08000B3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000B40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000B44: jalr        $t9
    // 0x08000B48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000B48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x08000B4C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000B50: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000B54: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000B58: jr          $ra
    // 0x08000B5C: nop

    TRACE_RETURN()
    return;
    // 0x08000B5C: nop

;}
RECOMP_FUNC void func_08003890_6D2970(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003890: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08003894: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003898: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0800389C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080038A0: addiu       $t9, $t9, -0x691C
    ctx->r25 = ADD32(ctx->r25, -0X691C);
    // 0x080038A4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080038A8: jalr        $t9
    // 0x080038AC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080038AC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x080038B0: lui         $at, 0x4280
    ctx->r1 = S32(0X4280 << 16);
    // 0x080038B4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080038B8: lwc1        $f4, 0x7C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x080038BC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x080038C0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080038C4: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x080038C8: addiu       $t9, $t9, -0x43FC
    ctx->r25 = ADD32(ctx->r25, -0X43FC);
    // 0x080038CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080038D0: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x080038D4: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x080038D8: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x080038DC: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x080038E0: nop

    // 0x080038E4: andi        $t1, $t0, 0x3FF
    ctx->r9 = ctx->r8 & 0X3FF;
    // 0x080038E8: jalr        $t9
    // 0x080038EC: sh          $t1, 0x18($t2)
    MEM_H(0X18, ctx->r10) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080038EC: sh          $t1, 0x18($t2)
    MEM_H(0X18, ctx->r10) = ctx->r9;
    after_1:
    // 0x080038F0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080038F4: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x080038F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080038FC: jalr        $t9
    // 0x08003900: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003900: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_2:
    // 0x08003904: bne         $v0, $zero, L_08003924
    if (ctx->r2 != 0) {
        // 0x08003908: addiu       $t3, $zero, 0x78
        ctx->r11 = ADD32(0, 0X78);
            goto L_08003924;
    }
    // 0x08003908: addiu       $t3, $zero, 0x78
    ctx->r11 = ADD32(0, 0X78);
    // 0x0800390C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003910: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003914: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X3810) << 16);
    // 0x08003918: sh          $t3, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r11;
    // 0x0800391C: jalr        $t9
    // 0x08003920: addiu       $a0, $a0, 0x3810
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X3810));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08003920: addiu       $a0, $a0, 0x3810
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X3810));
    after_3:
L_08003924:
    // 0x08003924: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08003928: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0800392C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08003930: jr          $ra
    // 0x08003934: nop

    TRACE_RETURN()
    return;
    // 0x08003934: nop

;}
RECOMP_FUNC void func_080007EC_6CF8CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080007EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080007F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080007F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080007F8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080007FC: addiu       $t6, $zero, 0x27
    ctx->r14 = ADD32(0, 0X27);
    // 0x08000800: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08000804: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000808: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800080C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X828) << 16);
    // 0x08000810: jalr        $t9
    // 0x08000814: addiu       $a0, $a0, 0x828
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X828));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000814: addiu       $a0, $a0, 0x828
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X828));
    after_0:
    // 0x08000818: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800081C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000820: jr          $ra
    // 0x08000824: nop

    TRACE_RETURN()
    return;
    // 0x08000824: nop

;}
RECOMP_FUNC void func_08002304_6D13E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002304: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002308: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800230C: lbu         $t6, 0x7C($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X7C);
    // 0x08002310: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002314: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x08002318: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x0800231C: beq         $t7, $zero, L_08002334
    if (ctx->r15 == 0) {
        // 0x08002320: addiu       $t9, $t9, 0x521C
        ctx->r25 = ADD32(ctx->r25, 0X521C);
            goto L_08002334;
    }
    // 0x08002320: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002324: sh          $t8, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r24;
    // 0x08002328: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X2344) << 16);
    // 0x0800232C: jalr        $t9
    // 0x08002330: addiu       $a0, $a0, 0x2344
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X2344));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002330: addiu       $a0, $a0, 0x2344
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X2344));
    after_0:
L_08002334:
    // 0x08002334: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002338: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800233C: jr          $ra
    // 0x08002340: nop

    TRACE_RETURN()
    return;
    // 0x08002340: nop

;}
RECOMP_FUNC void func_08001CD0_6D0DB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001CD0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08001CD4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08001CD8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08001CDC: jal         0x080016A8
    // 0x08001CE0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_080016A8_6D0788(rdram, ctx);
        goto after_0;
    // 0x08001CE0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x08001CE4: bne         $v0, $zero, L_08001D6C
    if (ctx->r2 != 0) {
        // 0x08001CE8: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_08001D6C;
    }
    // 0x08001CE8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08001CEC: lh          $t6, 0xA0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XA0);
    // 0x08001CF0: lh          $t7, 0xA2($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XA2);
    // 0x08001CF4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08001CF8: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x08001CFC: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x08001D00: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001D04: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08001D08: addiu       $t9, $t9, -0x6904
    ctx->r25 = ADD32(ctx->r25, -0X6904);
    // 0x08001D0C: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x08001D10: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    // 0x08001D14: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x08001D18: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x08001D1C: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x08001D20: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x08001D24: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08001D28: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x08001D2C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x08001D30: jalr        $t9
    // 0x08001D34: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001D34: nop

    after_1:
    // 0x08001D38: bne         $v0, $zero, L_08001D6C
    if (ctx->r2 != 0) {
        // 0x08001D3C: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_08001D6C;
    }
    // 0x08001D3C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08001D40: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001D44: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08001D48: lbu         $a1, 0xA8($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XA8);
    // 0x08001D4C: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08001D50: jalr        $t9
    // 0x08001D54: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001D54: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x08001D58: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001D5C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001D60: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X1D7C) << 16);
    // 0x08001D64: jalr        $t9
    // 0x08001D68: addiu       $a0, $a0, 0x1D7C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X1D7C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001D68: addiu       $a0, $a0, 0x1D7C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X1D7C));
    after_3:
L_08001D6C:
    // 0x08001D6C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08001D70: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08001D74: jr          $ra
    // 0x08001D78: nop

    TRACE_RETURN()
    return;
    // 0x08001D78: nop

;}
RECOMP_FUNC void func_08004668_6D3748(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004668: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0800466C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004670: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08004674: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08004678: addiu       $t9, $t9, -0x59BC
    ctx->r25 = ADD32(ctx->r25, -0X59BC);
    // 0x0800467C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08004680: jalr        $t9
    // 0x08004684: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004684: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x08004688: lbu         $t0, 0xD0($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XD0);
    // 0x0800468C: lui         $t6, 0x2E
    ctx->r14 = S32(0X2E << 16);
    // 0x08004690: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004694: ori         $t6, $t6, 0xCE1
    ctx->r14 = ctx->r14 | 0XCE1;
    // 0x08004698: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x0800469C: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x080046A0: addiu       $t9, $t9, -0x39AC
    ctx->r25 = ADD32(ctx->r25, -0X39AC);
    // 0x080046A4: sw          $t6, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r14;
    // 0x080046A8: sb          $t7, 0x8E($s0)
    MEM_B(0X8E, ctx->r16) = ctx->r15;
    // 0x080046AC: sb          $t8, 0x8F($s0)
    MEM_B(0X8F, ctx->r16) = ctx->r24;
    // 0x080046B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080046B4: jalr        $t9
    // 0x080046B8: sh          $t0, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080046B8: sh          $t0, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r8;
    after_1:
    // 0x080046BC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080046C0: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080046C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080046C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080046CC: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x080046D0: jalr        $t9
    // 0x080046D4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080046D4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x080046D8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080046DC: addiu       $t9, $t9, -0x589C
    ctx->r25 = ADD32(ctx->r25, -0X589C);
    // 0x080046E0: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x080046E4: addiu       $a1, $a1, 0x29F0
    ctx->r5 = ADD32(ctx->r5, 0X29F0);
    // 0x080046E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080046EC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x080046F0: jalr        $t9
    // 0x080046F4: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080046F4: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_3:
    // 0x080046F8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080046FC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08004700: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X439C) << 16);
    // 0x08004704: jalr        $t9
    // 0x08004708: addiu       $a0, $a0, 0x439C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X439C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08004708: addiu       $a0, $a0, 0x439C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X439C));
    after_4:
    // 0x0800470C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08004710: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08004714: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08004718: jr          $ra
    // 0x0800471C: nop

    TRACE_RETURN()
    return;
    // 0x0800471C: nop

;}
RECOMP_FUNC void func_08000C00_6CFCE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000C00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000C04: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000C08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000C0C: addiu       $t9, $t9, -0x54E8
    ctx->r25 = ADD32(ctx->r25, -0X54E8);
    // 0x08000C10: jalr        $t9
    // 0x08000C14: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000C14: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x08000C18: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000C1C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000C20: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0XC3C) << 16);
    // 0x08000C24: jalr        $t9
    // 0x08000C28: addiu       $a0, $a0, 0xC3C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0XC3C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000C28: addiu       $a0, $a0, 0xC3C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0XC3C));
    after_1:
    // 0x08000C2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000C30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000C34: jr          $ra
    // 0x08000C38: nop

    TRACE_RETURN()
    return;
    // 0x08000C38: nop

;}
RECOMP_FUNC void func_08000E44_6CFF24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000E44: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000E48: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000E4C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x08000E50: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x08000E54: lui         $t7, 0xC0
    ctx->r15 = S32(0XC0 << 16);
    // 0x08000E58: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000E5C: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x08000E60: addiu       $t6, $zero, 0x7E
    ctx->r14 = ADD32(0, 0X7E);
    // 0x08000E64: ori         $t7, $t7, 0x6E0
    ctx->r15 = ctx->r15 | 0X6E0;
    // 0x08000E68: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08000E6C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000E70: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x08000E74: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x08000E78: jalr        $t9
    // 0x08000E7C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000E7C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_0:
    // 0x08000E80: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(23, 0X4990) << 16);
    // 0x08000E84: lwc1        $f0, 0x4990($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(23, 0X4990));
    // 0x08000E88: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08000E8C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(23, 0X4994) << 16);
    // 0x08000E90: swc1        $f0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f0.u32l;
    // 0x08000E94: swc1        $f0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f0.u32l;
    // 0x08000E98: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
    // 0x08000E9C: lw          $v0, 0xE8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XE8);
    // 0x08000EA0: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x08000EA4: andi        $t8, $v0, 0x1
    ctx->r24 = ctx->r2 & 0X1;
    // 0x08000EA8: beq         $t8, $zero, L_08000EBC
    if (ctx->r24 == 0) {
        // 0x08000EAC: andi        $t0, $v0, 0x2
        ctx->r8 = ctx->r2 & 0X2;
            goto L_08000EBC;
    }
    // 0x08000EAC: andi        $t0, $v0, 0x2
    ctx->r8 = ctx->r2 & 0X2;
    // 0x08000EB0: lwc1        $f4, 0x4994($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(23, 0X4994));
    // 0x08000EB4: b           L_08000F18
    // 0x08000EB8: swc1        $f4, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f4.u32l;
        goto L_08000F18;
    // 0x08000EB8: swc1        $f4, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f4.u32l;
L_08000EBC:
    // 0x08000EBC: beq         $t0, $zero, L_08000ED4
    if (ctx->r8 == 0) {
        // 0x08000EC0: andi        $t1, $v0, 0x4
        ctx->r9 = ctx->r2 & 0X4;
            goto L_08000ED4;
    }
    // 0x08000EC0: andi        $t1, $v0, 0x4
    ctx->r9 = ctx->r2 & 0X4;
    // 0x08000EC4: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(23, 0X4998) << 16);
    // 0x08000EC8: lwc1        $f6, 0x4998($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(23, 0X4998));
    // 0x08000ECC: b           L_08000F18
    // 0x08000ED0: swc1        $f6, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f6.u32l;
        goto L_08000F18;
    // 0x08000ED0: swc1        $f6, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f6.u32l;
L_08000ED4:
    // 0x08000ED4: beq         $t1, $zero, L_08000EEC
    if (ctx->r9 == 0) {
        // 0x08000ED8: andi        $t2, $v0, 0x8
        ctx->r10 = ctx->r2 & 0X8;
            goto L_08000EEC;
    }
    // 0x08000ED8: andi        $t2, $v0, 0x8
    ctx->r10 = ctx->r2 & 0X8;
    // 0x08000EDC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(23, 0X499C) << 16);
    // 0x08000EE0: lwc1        $f8, 0x499C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(23, 0X499C));
    // 0x08000EE4: b           L_08000F18
    // 0x08000EE8: swc1        $f8, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f8.u32l;
        goto L_08000F18;
    // 0x08000EE8: swc1        $f8, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f8.u32l;
L_08000EEC:
    // 0x08000EEC: beq         $t2, $zero, L_08000F04
    if (ctx->r10 == 0) {
        // 0x08000EF0: andi        $t3, $v0, 0x10
        ctx->r11 = ctx->r2 & 0X10;
            goto L_08000F04;
    }
    // 0x08000EF0: andi        $t3, $v0, 0x10
    ctx->r11 = ctx->r2 & 0X10;
    // 0x08000EF4: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(23, 0X49A0) << 16);
    // 0x08000EF8: lwc1        $f10, 0x49A0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(23, 0X49A0));
    // 0x08000EFC: b           L_08000F18
    // 0x08000F00: swc1        $f10, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f10.u32l;
        goto L_08000F18;
    // 0x08000F00: swc1        $f10, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f10.u32l;
L_08000F04:
    // 0x08000F04: beq         $t3, $zero, L_08000F18
    if (ctx->r11 == 0) {
        // 0x08000F08: lui         $at, 0x40C0
        ctx->r1 = S32(0X40C0 << 16);
            goto L_08000F18;
    }
    // 0x08000F08: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x08000F0C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08000F10: nop

    // 0x08000F14: swc1        $f16, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f16.u32l;
L_08000F18:
    // 0x08000F18: jalr        $t9
    // 0x08000F1C: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000F1C: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    after_1:
    // 0x08000F20: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x08000F24: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08000F28: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x08000F2C: addiu       $t9, $t9, 0x3EA0
    ctx->r25 = ADD32(ctx->r25, 0X3EA0);
    // 0x08000F30: swc1        $f4, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f4.u32l;
    // 0x08000F34: jalr        $t9
    // 0x08000F38: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000F38: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    after_2:
    // 0x08000F3C: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x08000F40: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000F44: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x08000F48: addiu       $t9, $t9, -0x5CF0
    ctx->r25 = ADD32(ctx->r25, -0X5CF0);
    // 0x08000F4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000F50: jalr        $t9
    // 0x08000F54: swc1        $f8, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000F54: swc1        $f8, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f8.u32l;
    after_3:
    // 0x08000F58: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000F5C: addiu       $t4, $zero, 0xB4
    ctx->r12 = ADD32(0, 0XB4);
    // 0x08000F60: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08000F64: sh          $t4, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r12;
    // 0x08000F68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000F6C: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x08000F70: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000F74: jalr        $t9
    // 0x08000F78: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000F78: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x08000F7C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000F80: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x08000F84: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x08000F88: sb          $t5, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r13;
    // 0x08000F8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000F90: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x08000F94: jalr        $t9
    // 0x08000F98: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000F98: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x08000F9C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000FA0: addiu       $t6, $zero, 0x14
    ctx->r14 = ADD32(0, 0X14);
    // 0x08000FA4: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08000FA8: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08000FAC: sb          $t6, 0x75($s0)
    MEM_B(0X75, ctx->r16) = ctx->r14;
    // 0x08000FB0: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08000FB4: addiu       $a0, $zero, 0x25A
    ctx->r4 = ADD32(0, 0X25A);
    // 0x08000FB8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x08000FBC: jalr        $t9
    // 0x08000FC0: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000FC0: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_6:
    // 0x08000FC4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000FC8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000FCC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0XFEC) << 16);
    // 0x08000FD0: jalr        $t9
    // 0x08000FD4: addiu       $a0, $a0, 0xFEC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0XFEC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08000FD4: addiu       $a0, $a0, 0xFEC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0XFEC));
    after_7:
    // 0x08000FD8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000FDC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x08000FE0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x08000FE4: jr          $ra
    // 0x08000FE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x08000FE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_08001BC8_6D0CA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001BC8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08001BCC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001BD0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08001BD4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08001BD8: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08001BDC: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x08001BE0: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x08001BE4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001BE8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08001BEC: jalr        $t9
    // 0x08001BF0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001BF0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x08001BF4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08001BF8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x08001BFC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001C00: lbu         $t6, 0xEB($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XEB);
    // 0x08001C04: lbu         $a1, 0xE8($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XE8);
    // 0x08001C08: lbu         $a2, 0xE9($a0)
    ctx->r6 = MEM_BU(ctx->r4, 0XE9);
    // 0x08001C0C: lbu         $a3, 0xEA($a0)
    ctx->r7 = MEM_BU(ctx->r4, 0XEA);
    // 0x08001C10: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x08001C14: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x08001C18: lhu         $t0, 0x16($t8)
    ctx->r8 = MEM_HU(ctx->r24, 0X16);
    // 0x08001C1C: addiu       $t9, $t9, -0x6CD0
    ctx->r25 = ADD32(ctx->r25, -0X6CD0);
    // 0x08001C20: jalr        $t9
    // 0x08001C24: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001C24: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_1:
    // 0x08001C28: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001C2C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001C30: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X1C4C) << 16);
    // 0x08001C34: jalr        $t9
    // 0x08001C38: addiu       $a0, $a0, 0x1C4C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X1C4C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001C38: addiu       $a0, $a0, 0x1C4C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X1C4C));
    after_2:
    // 0x08001C3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08001C40: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08001C44: jr          $ra
    // 0x08001C48: nop

    TRACE_RETURN()
    return;
    // 0x08001C48: nop

;}
RECOMP_FUNC void func_08002EA4_6D1F84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002EA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002EA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002EAC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002EB0: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x08002EB4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002EB8: addiu       $t9, $t9, -0x39D8
    ctx->r25 = ADD32(ctx->r25, -0X39D8);
    // 0x08002EBC: andi        $t7, $t6, 0x20
    ctx->r15 = ctx->r14 & 0X20;
    // 0x08002EC0: bnel        $t7, $zero, L_08002EE8
    if (ctx->r15 != 0) {
        // 0x08002EC4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08002EE8;
    }
    goto skip_0;
    // 0x08002EC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08002EC8: jalr        $t9
    // 0x08002ECC: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002ECC: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    after_0:
    // 0x08002ED0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002ED4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002ED8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X2EF4) << 16);
    // 0x08002EDC: jalr        $t9
    // 0x08002EE0: addiu       $a0, $a0, 0x2EF4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X2EF4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002EE0: addiu       $a0, $a0, 0x2EF4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X2EF4));
    after_1:
    // 0x08002EE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08002EE8:
    // 0x08002EE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002EEC: jr          $ra
    // 0x08002EF0: nop

    TRACE_RETURN()
    return;
    // 0x08002EF0: nop

;}
RECOMP_FUNC void func_080021BC_6D129C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080021BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080021C0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x080021C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080021C8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080021CC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x080021D0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080021D4: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x080021D8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080021DC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x080021E0: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x080021E4: jalr        $t9
    // 0x080021E8: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080021E8: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    after_0:
    // 0x080021EC: bne         $v0, $zero, L_0800222C
    if (ctx->r2 != 0) {
        // 0x080021F0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_0800222C;
    }
    // 0x080021F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080021F4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080021F8: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080021FC: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x08002200: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x08002204: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08002208: jalr        $t9
    // 0x0800220C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800220C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x08002210: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002214: addiu       $t6, $zero, 0x12
    ctx->r14 = ADD32(0, 0X12);
    // 0x08002218: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800221C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X2240) << 16);
    // 0x08002220: sh          $t6, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r14;
    // 0x08002224: jalr        $t9
    // 0x08002228: addiu       $a0, $a0, 0x2240
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X2240));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002228: addiu       $a0, $a0, 0x2240
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X2240));
    after_2:
L_0800222C:
    // 0x0800222C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08002230: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08002234: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08002238: jr          $ra
    // 0x0800223C: nop

    TRACE_RETURN()
    return;
    // 0x0800223C: nop

;}
RECOMP_FUNC void func_08003254_6D2334(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003254: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08003258: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800325C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08003260: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08003264: addiu       $t9, $t9, -0x59BC
    ctx->r25 = ADD32(ctx->r25, -0X59BC);
    // 0x08003268: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x0800326C: jalr        $t9
    // 0x08003270: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003270: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x08003274: lhu         $t0, 0xD0($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0XD0);
    // 0x08003278: lui         $t7, 0x2AE
    ctx->r15 = S32(0X2AE << 16);
    // 0x0800327C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003280: addiu       $t6, $zero, 0xFB
    ctx->r14 = ADD32(0, 0XFB);
    // 0x08003284: ori         $t7, $t7, 0x87E1
    ctx->r15 = ctx->r15 | 0X87E1;
    // 0x08003288: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x0800328C: addiu       $t2, $zero, 0x21
    ctx->r10 = ADD32(0, 0X21);
    // 0x08003290: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x08003294: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x08003298: addiu       $t9, $t9, -0x39AC
    ctx->r25 = ADD32(ctx->r25, -0X39AC);
    // 0x0800329C: addiu       $t1, $t0, -0x64
    ctx->r9 = ADD32(ctx->r8, -0X64);
    // 0x080032A0: sh          $t6, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r14;
    // 0x080032A4: sw          $t7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r15;
    // 0x080032A8: sb          $t8, 0x6D($s0)
    MEM_B(0X6D, ctx->r16) = ctx->r24;
    // 0x080032AC: sh          $t1, 0xD0($s0)
    MEM_H(0XD0, ctx->r16) = ctx->r9;
    // 0x080032B0: sh          $t2, 0x96($s0)
    MEM_H(0X96, ctx->r16) = ctx->r10;
    // 0x080032B4: sb          $t3, 0x8E($s0)
    MEM_B(0X8E, ctx->r16) = ctx->r11;
    // 0x080032B8: sb          $t4, 0x8F($s0)
    MEM_B(0X8F, ctx->r16) = ctx->r12;
    // 0x080032BC: jalr        $t9
    // 0x080032C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080032C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x080032C4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080032C8: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x080032CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080032D0: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x080032D4: jalr        $t9
    // 0x080032D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080032D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x080032DC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080032E0: addiu       $t9, $t9, 0x6840
    ctx->r25 = ADD32(ctx->r25, 0X6840);
    // 0x080032E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080032E8: jalr        $t9
    // 0x080032EC: lhu         $a1, 0xD2($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0XD2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080032EC: lhu         $a1, 0xD2($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0XD2);
    after_3:
    // 0x080032F0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080032F4: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080032F8: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x080032FC: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x08003300: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003304: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08003308: jalr        $t9
    // 0x0800330C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x0800330C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_4:
    // 0x08003310: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x08003314: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x08003318: addiu       $v0, $v0, -0x589C
    ctx->r2 = ADD32(ctx->r2, -0X589C);
    // 0x0800331C: addiu       $a1, $a1, 0x3B10
    ctx->r5 = ADD32(ctx->r5, 0X3B10);
    // 0x08003320: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08003324: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x08003328: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800332C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x08003330: jalr        $v0
    // 0x08003334: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x08003334: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_5:
    // 0x08003338: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x0800333C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x08003340: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003344: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x08003348: jalr        $v0
    // 0x0800334C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_6;
    // 0x0800334C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_6:
    // 0x08003350: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003354: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003358: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X3378) << 16);
    // 0x0800335C: jalr        $t9
    // 0x08003360: addiu       $a0, $a0, 0x3378
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X3378));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08003360: addiu       $a0, $a0, 0x3378
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X3378));
    after_7:
    // 0x08003364: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08003368: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0800336C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08003370: jr          $ra
    // 0x08003374: nop

    TRACE_RETURN()
    return;
    // 0x08003374: nop

;}
RECOMP_FUNC void func_08002494_6D1574(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002494: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08002498: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800249C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x080024A0: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x080024A4: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x080024A8: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x080024AC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080024B0: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x080024B4: jalr        $t9
    // 0x080024B8: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080024B8: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    after_0:
    // 0x080024BC: lui         $t7, 0x40
    ctx->r15 = S32(0X40 << 16);
    // 0x080024C0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080024C4: addiu       $t6, $zero, 0x7E
    ctx->r14 = ADD32(0, 0X7E);
    // 0x080024C8: ori         $t7, $t7, 0x6E0
    ctx->r15 = ctx->r15 | 0X6E0;
    // 0x080024CC: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x080024D0: sh          $t6, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r14;
    // 0x080024D4: sw          $t7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r15;
    // 0x080024D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080024DC: jalr        $t9
    // 0x080024E0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080024E0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_1:
    // 0x080024E4: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(23, 0X49A4) << 16);
    // 0x080024E8: lwc1        $f20, 0x49A4($at)
    ctx->f20.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(23, 0X49A4));
    // 0x080024EC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x080024F0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080024F4: swc1        $f20, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f20.u32l;
    // 0x080024F8: swc1        $f20, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f20.u32l;
    // 0x080024FC: swc1        $f20, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f20.u32l;
    // 0x08002500: lw          $v0, 0x84($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X84);
    // 0x08002504: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x08002508: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x0800250C: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08002510: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002514: addiu       $t9, $t9, -0x4678
    ctx->r25 = ADD32(ctx->r25, -0X4678);
    // 0x08002518: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x0800251C: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x08002520: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x08002524: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002528: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x0800252C: jalr        $t9
    // 0x08002530: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002530: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_2:
    // 0x08002534: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08002538: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x0800253C: jalr        $t9
    // 0x08002540: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002540: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    after_3:
    // 0x08002544: lui         $at, 0x3FF8
    ctx->r1 = S32(0X3FF8 << 16);
    // 0x08002548: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x0800254C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x08002550: cvt.d.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.d = CVT_D_S(ctx->f0.fl);
    // 0x08002554: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08002558: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x0800255C: addiu       $t9, $t9, 0x3EA0
    ctx->r25 = ADD32(ctx->r25, 0X3EA0);
    // 0x08002560: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08002564: swc1        $f6, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f6.u32l;
    // 0x08002568: jalr        $t9
    // 0x0800256C: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x0800256C: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    after_4:
    // 0x08002570: lui         $at, 0x3FF8
    ctx->r1 = S32(0X3FF8 << 16);
    // 0x08002574: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x08002578: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x0800257C: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x08002580: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002584: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x08002588: addiu       $t9, $t9, -0x5CF0
    ctx->r25 = ADD32(ctx->r25, -0X5CF0);
    // 0x0800258C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002590: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08002594: jalr        $t9
    // 0x08002598: swc1        $f18, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f18.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08002598: swc1        $f18, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f18.u32l;
    after_5:
    // 0x0800259C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080025A0: addiu       $t8, $zero, 0x3C
    ctx->r24 = ADD32(0, 0X3C);
    // 0x080025A4: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x080025A8: sh          $t8, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r24;
    // 0x080025AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080025B0: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x080025B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080025B8: jalr        $t9
    // 0x080025BC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080025BC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_6:
    // 0x080025C0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080025C4: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x080025C8: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x080025CC: sb          $t0, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r8;
    // 0x080025D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080025D4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x080025D8: jalr        $t9
    // 0x080025DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080025DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x080025E0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080025E4: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x080025E8: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x080025EC: addiu       $a1, $a1, 0x2088
    ctx->r5 = ADD32(ctx->r5, 0X2088);
    // 0x080025F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080025F4: jalr        $t9
    // 0x080025F8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x080025F8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
    // 0x080025FC: beq         $v0, $zero, L_08002628
    if (ctx->r2 == 0) {
        // 0x08002600: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(23, 0X2650) << 16);
            goto L_08002628;
    }
    // 0x08002600: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X2650) << 16);
    // 0x08002604: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x08002608: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x0800260C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08002610: lwc1        $f4, 0xC($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0XC);
    // 0x08002614: swc1        $f20, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f20.u32l;
    // 0x08002618: swc1        $f20, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f20.u32l;
    // 0x0800261C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x08002620: swc1        $f20, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f20.u32l;
    // 0x08002624: swc1        $f8, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f8.u32l;
L_08002628:
    // 0x08002628: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800262C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002630: jalr        $t9
    // 0x08002634: addiu       $a0, $a0, 0x2650
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X2650));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08002634: addiu       $a0, $a0, 0x2650
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X2650));
    after_9:
    // 0x08002638: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x0800263C: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x08002640: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x08002644: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x08002648: jr          $ra
    // 0x0800264C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x0800264C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_08000530_6CF610(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000530: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000534: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000538: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x0800053C: lh          $t8, 0xA2($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XA2);
    // 0x08000540: lh          $t7, 0xE0($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XE0);
    // 0x08000544: lh          $t6, 0xA0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XA0);
    // 0x08000548: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x0800054C: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x08000550: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x08000554: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x08000558: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x0800055C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08000560: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000564: addiu       $t9, $t9, -0x4678
    ctx->r25 = ADD32(ctx->r25, -0X4678);
    // 0x08000568: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x0800056C: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x08000570: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08000574: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x08000578: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x0800057C: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x08000580: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x08000584: jalr        $t9
    // 0x08000588: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000588: nop

    after_0:
    // 0x0800058C: bne         $v0, $zero, L_080005A8
    if (ctx->r2 != 0) {
        // 0x08000590: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_080005A8;
    }
    // 0x08000590: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08000594: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000598: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x0800059C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x080005A0: jalr        $t9
    // 0x080005A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080005A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
L_080005A8:
    // 0x080005A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080005AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080005B0: jr          $ra
    // 0x080005B4: nop

    TRACE_RETURN()
    return;
    // 0x080005B4: nop

;}
RECOMP_FUNC void func_08002034_6D1114(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002034: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08002038: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800203C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08002040: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08002044: addiu       $t9, $t9, -0x59BC
    ctx->r25 = ADD32(ctx->r25, -0X59BC);
    // 0x08002048: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x0800204C: jalr        $t9
    // 0x08002050: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002050: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_0:
    // 0x08002054: lw          $t0, 0xD0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XD0);
    // 0x08002058: lui         $t6, 0x2AE
    ctx->r14 = S32(0X2AE << 16);
    // 0x0800205C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002060: ori         $t6, $t6, 0x87E1
    ctx->r14 = ctx->r14 | 0X87E1;
    // 0x08002064: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x08002068: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x0800206C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x08002070: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08002074: sw          $t6, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r14;
    // 0x08002078: sb          $t7, 0x8E($s0)
    MEM_B(0X8E, ctx->r16) = ctx->r15;
    // 0x0800207C: sb          $t8, 0x8F($s0)
    MEM_B(0X8F, ctx->r16) = ctx->r24;
    // 0x08002080: sb          $t1, 0x6D($s0)
    MEM_B(0X6D, ctx->r16) = ctx->r9;
    // 0x08002084: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002088: jalr        $t9
    // 0x0800208C: sw          $t0, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800208C: sw          $t0, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r8;
    after_1:
    // 0x08002090: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002094: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08002098: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800209C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080020A0: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x080020A4: jalr        $t9
    // 0x080020A8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080020A8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x080020AC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080020B0: addiu       $t2, $zero, 0xE1
    ctx->r10 = ADD32(0, 0XE1);
    // 0x080020B4: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x080020B8: sh          $t2, 0x96($s0)
    MEM_H(0X96, ctx->r16) = ctx->r10;
    // 0x080020BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080020C0: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x080020C4: addiu       $a2, $zero, 0xA0
    ctx->r6 = ADD32(0, 0XA0);
    // 0x080020C8: jalr        $t9
    // 0x080020CC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080020CC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x080020D0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080020D4: addiu       $t9, $t9, -0x7270
    ctx->r25 = ADD32(ctx->r25, -0X7270);
    // 0x080020D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080020DC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x080020E0: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x080020E4: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    // 0x080020E8: jalr        $t9
    // 0x080020EC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080020EC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
    // 0x080020F0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080020F4: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x080020F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080020FC: addiu       $a1, $zero, 0x1F4
    ctx->r5 = ADD32(0, 0X1F4);
    // 0x08002100: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08002104: jalr        $t9
    // 0x08002108: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08002108: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x0800210C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002110: addiu       $t9, $t9, -0x39AC
    ctx->r25 = ADD32(ctx->r25, -0X39AC);
    // 0x08002114: jalr        $t9
    // 0x08002118: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08002118: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x0800211C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002120: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x08002124: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002128: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x0800212C: jalr        $t9
    // 0x08002130: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08002130: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x08002134: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x08002138: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x0800213C: addiu       $v0, $v0, -0x589C
    ctx->r2 = ADD32(ctx->r2, -0X589C);
    // 0x08002140: addiu       $a1, $a1, 0x5520
    ctx->r5 = ADD32(ctx->r5, 0X5520);
    // 0x08002144: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08002148: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x0800214C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002150: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x08002154: jalr        $v0
    // 0x08002158: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_8;
    // 0x08002158: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_8:
    // 0x0800215C: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x08002160: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x08002164: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002168: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x0800216C: jalr        $v0
    // 0x08002170: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_9;
    // 0x08002170: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_9:
    // 0x08002174: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002178: addiu       $t9, $t9, -0x4F9C
    ctx->r25 = ADD32(ctx->r25, -0X4F9C);
    // 0x0800217C: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(23, 0X4780) << 16);
    // 0x08002180: addiu       $a1, $a1, 0x4780
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(23, 0X4780));
    // 0x08002184: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002188: jalr        $t9
    // 0x0800218C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x0800218C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_10:
    // 0x08002190: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002194: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08002198: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800219C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080021A0: jalr        $t9
    // 0x080021A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x080021A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_11:
    // 0x080021A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x080021AC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x080021B0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x080021B4: jr          $ra
    // 0x080021B8: nop

    TRACE_RETURN()
    return;
    // 0x080021B8: nop

;}
RECOMP_FUNC void func_08000828_6CF908(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000828: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0800082C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000830: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x08000834: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x08000838: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x0800083C: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x08000840: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x08000844: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x08000848: jalr        $t9
    // 0x0800084C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800084C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x08000850: lhu         $t6, 0x8A($s1)
    ctx->r14 = MEM_HU(ctx->r17, 0X8A);
    // 0x08000854: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x08000858: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x0800085C: div         $zero, $t6, $at
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r1)));
    // 0x08000860: mfhi        $t7
    ctx->r15 = hi;
    // 0x08000864: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x08000868: bne         $t7, $at, L_080008D4
    if (ctx->r15 != ctx->r1) {
        // 0x0800086C: lui         $a1, 0x800
        ctx->r5 = S32(RELOC_HI16(23, 0XE44) << 16);
            goto L_080008D4;
    }
    // 0x0800086C: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(23, 0XE44) << 16);
    // 0x08000870: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x08000874: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000878: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x0800087C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000880: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000884: addiu       $t9, $t9, -0x2218
    ctx->r25 = ADD32(ctx->r25, -0X2218);
    // 0x08000888: addiu       $a1, $a1, 0xE44
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(23, 0XE44));
    // 0x0800088C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x08000890: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x08000894: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x08000898: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x0800089C: jalr        $t9
    // 0x080008A0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080008A0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x080008A4: beq         $v0, $zero, L_080008D4
    if (ctx->r2 == 0) {
        // 0x080008A8: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_080008D4;
    }
    // 0x080008A8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x080008AC: lw          $t8, 0xE8($v0)
    ctx->r24 = MEM_W(ctx->r2, 0XE8);
    // 0x080008B0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080008B4: addiu       $t1, $zero, 0x20
    ctx->r9 = ADD32(0, 0X20);
    // 0x080008B8: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080008BC: ori         $t0, $t8, 0x10
    ctx->r8 = ctx->r24 | 0X10;
    // 0x080008C0: sw          $t0, 0xE8($v0)
    MEM_W(0XE8, ctx->r2) = ctx->r8;
    // 0x080008C4: sh          $t1, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r9;
    // 0x080008C8: jalr        $t9
    // 0x080008CC: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080008CC: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    after_2:
    // 0x080008D0: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
L_080008D4:
    // 0x080008D4: lhu         $t2, 0x8A($s1)
    ctx->r10 = MEM_HU(ctx->r17, 0X8A);
    // 0x080008D8: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x080008DC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080008E0: div         $zero, $t2, $at
    lo = S32(S64(S32(ctx->r10)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r10)) % S64(S32(ctx->r1)));
    // 0x080008E4: mfhi        $t3
    ctx->r11 = hi;
    // 0x080008E8: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x080008EC: bne         $t3, $at, L_08000958
    if (ctx->r11 != ctx->r1) {
        // 0x080008F0: lui         $a1, 0x800
        ctx->r5 = S32(RELOC_HI16(23, 0XE44) << 16);
            goto L_08000958;
    }
    // 0x080008F0: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(23, 0XE44) << 16);
    // 0x080008F4: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x080008F8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080008FC: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x08000900: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08000904: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000908: addiu       $t9, $t9, -0x2218
    ctx->r25 = ADD32(ctx->r25, -0X2218);
    // 0x0800090C: addiu       $a1, $a1, 0xE44
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(23, 0XE44));
    // 0x08000910: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x08000914: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x08000918: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x0800091C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x08000920: jalr        $t9
    // 0x08000924: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000924: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x08000928: beq         $v0, $zero, L_08000958
    if (ctx->r2 == 0) {
        // 0x0800092C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08000958;
    }
    // 0x0800092C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08000930: lw          $t4, 0xE8($v0)
    ctx->r12 = MEM_W(ctx->r2, 0XE8);
    // 0x08000934: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000938: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x0800093C: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000940: ori         $t5, $t4, 0x4
    ctx->r13 = ctx->r12 | 0X4;
    // 0x08000944: sw          $t5, 0xE8($v0)
    MEM_W(0XE8, ctx->r2) = ctx->r13;
    // 0x08000948: sh          $t6, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r14;
    // 0x0800094C: jalr        $t9
    // 0x08000950: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000950: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    after_4:
    // 0x08000954: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
L_08000958:
    // 0x08000958: lhu         $t7, 0x8A($s1)
    ctx->r15 = MEM_HU(ctx->r17, 0X8A);
    // 0x0800095C: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x08000960: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(23, 0XE44) << 16);
    // 0x08000964: div         $zero, $t7, $at
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r1)));
    // 0x08000968: mfhi        $t8
    ctx->r24 = hi;
    // 0x0800096C: addiu       $a1, $a1, 0xE44
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(23, 0XE44));
    // 0x08000970: bne         $t8, $zero, L_080009D8
    if (ctx->r24 != 0) {
        // 0x08000974: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_080009D8;
    }
    // 0x08000974: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000978: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x0800097C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08000980: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x08000984: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08000988: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800098C: addiu       $t9, $t9, -0x2218
    ctx->r25 = ADD32(ctx->r25, -0X2218);
    // 0x08000990: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x08000994: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x08000998: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x0800099C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x080009A0: jalr        $t9
    // 0x080009A4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080009A4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_5:
    // 0x080009A8: beq         $v0, $zero, L_080009D8
    if (ctx->r2 == 0) {
        // 0x080009AC: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_080009D8;
    }
    // 0x080009AC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x080009B0: lw          $t0, 0xE8($v0)
    ctx->r8 = MEM_W(ctx->r2, 0XE8);
    // 0x080009B4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080009B8: addiu       $t2, $zero, 0x20
    ctx->r10 = ADD32(0, 0X20);
    // 0x080009BC: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080009C0: ori         $t1, $t0, 0x1
    ctx->r9 = ctx->r8 | 0X1;
    // 0x080009C4: sw          $t1, 0xE8($v0)
    MEM_W(0XE8, ctx->r2) = ctx->r9;
    // 0x080009C8: sh          $t2, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r10;
    // 0x080009CC: jalr        $t9
    // 0x080009D0: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080009D0: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    after_6:
    // 0x080009D4: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
L_080009D8:
    // 0x080009D8: lhu         $v0, 0x8A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8A);
    // 0x080009DC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080009E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080009E4: addiu       $t3, $v0, -0x1
    ctx->r11 = ADD32(ctx->r2, -0X1);
    // 0x080009E8: bne         $v0, $zero, L_08000A20
    if (ctx->r2 != 0) {
        // 0x080009EC: sh          $t3, 0x8A($s1)
        MEM_H(0X8A, ctx->r17) = ctx->r11;
            goto L_08000A20;
    }
    // 0x080009EC: sh          $t3, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = ctx->r11;
    // 0x080009F0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080009F4: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080009F8: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x080009FC: jalr        $t9
    // 0x08000A00: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08000A00: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_7:
    // 0x08000A04: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000A08: addiu       $t4, $zero, 0x3C
    ctx->r12 = ADD32(0, 0X3C);
    // 0x08000A0C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000A10: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0XA34) << 16);
    // 0x08000A14: sh          $t4, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = ctx->r12;
    // 0x08000A18: jalr        $t9
    // 0x08000A1C: addiu       $a0, $a0, 0xA34
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0XA34));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08000A1C: addiu       $a0, $a0, 0xA34
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0XA34));
    after_8:
L_08000A20:
    // 0x08000A20: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x08000A24: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x08000A28: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x08000A2C: jr          $ra
    // 0x08000A30: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x08000A30: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_080019D0_6D0AB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080019D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080019D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080019D8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080019DC: jal         0x080016A8
    // 0x080019E0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_080016A8_6D0788(rdram, ctx);
        goto after_0;
    // 0x080019E0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x080019E4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x080019E8: bne         $v0, $zero, L_08001A30
    if (ctx->r2 != 0) {
        // 0x080019EC: lw          $a2, 0x18($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X18);
            goto L_08001A30;
    }
    // 0x080019EC: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x080019F0: lhu         $t6, 0x8A($a2)
    ctx->r14 = MEM_HU(ctx->r6, 0X8A);
    // 0x080019F4: lhu         $t7, 0x16($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X16);
    // 0x080019F8: addiu       $t1, $zero, 0x1E
    ctx->r9 = ADD32(0, 0X1E);
    // 0x080019FC: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x08001A00: andi        $t9, $t8, 0x3FF
    ctx->r25 = ctx->r24 & 0X3FF;
    // 0x08001A04: sh          $t9, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r25;
    // 0x08001A08: lhu         $v0, 0x8A($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X8A);
    // 0x08001A0C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X1A40) << 16);
    // 0x08001A10: addiu       $a0, $a0, 0x1A40
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X1A40));
    // 0x08001A14: addiu       $t0, $v0, -0x1
    ctx->r8 = ADD32(ctx->r2, -0X1);
    // 0x08001A18: bne         $v0, $zero, L_08001A30
    if (ctx->r2 != 0) {
        // 0x08001A1C: sh          $t0, 0x8A($a2)
        MEM_H(0X8A, ctx->r6) = ctx->r8;
            goto L_08001A30;
    }
    // 0x08001A1C: sh          $t0, 0x8A($a2)
    MEM_H(0X8A, ctx->r6) = ctx->r8;
    // 0x08001A20: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001A24: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001A28: jalr        $t9
    // 0x08001A2C: sh          $t1, 0x8A($a2)
    MEM_H(0X8A, ctx->r6) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001A2C: sh          $t1, 0x8A($a2)
    MEM_H(0X8A, ctx->r6) = ctx->r9;
    after_1:
L_08001A30:
    // 0x08001A30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001A34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001A38: jr          $ra
    // 0x08001A3C: nop

    TRACE_RETURN()
    return;
    // 0x08001A3C: nop

;}
RECOMP_FUNC void func_08000A8C_6CFB6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000A8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000A90: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08000A94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000A98: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000A9C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000AA0: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000AA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000AA8: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08000AAC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x08000AB0: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x08000AB4: swc1        $f0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f0.u32l;
    // 0x08000AB8: jalr        $t9
    // 0x08000ABC: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000ABC: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    after_0:
    // 0x08000AC0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000AC4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000AC8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0XAE4) << 16);
    // 0x08000ACC: jalr        $t9
    // 0x08000AD0: addiu       $a0, $a0, 0xAE4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0XAE4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000AD0: addiu       $a0, $a0, 0xAE4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0XAE4));
    after_1:
    // 0x08000AD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000AD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000ADC: jr          $ra
    // 0x08000AE0: nop

    TRACE_RETURN()
    return;
    // 0x08000AE0: nop

;}
RECOMP_FUNC void func_08000D80_6CFE60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000D80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000D84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000D88: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000D8C: lhu         $v0, 0x14($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X14);
    // 0x08000D90: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08000D94: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x08000D98: beq         $v0, $zero, L_08000DA8
    if (ctx->r2 == 0) {
        // 0x08000D9C: addiu       $t7, $v0, -0x40
        ctx->r15 = ADD32(ctx->r2, -0X40);
            goto L_08000DA8;
    }
    // 0x08000D9C: addiu       $t7, $v0, -0x40
    ctx->r15 = ADD32(ctx->r2, -0X40);
    // 0x08000DA0: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x08000DA4: sh          $t8, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r24;
L_08000DA8:
    // 0x08000DA8: lw          $t9, 0x68($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X68);
    // 0x08000DAC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08000DB0: andi        $t0, $t9, 0x20
    ctx->r8 = ctx->r25 & 0X20;
    // 0x08000DB4: bne         $t0, $zero, L_08000E34
    if (ctx->r8 != 0) {
        // 0x08000DB8: lui         $t9, 0x8021
        ctx->r25 = S32(0X8021 << 16);
            goto L_08000E34;
    }
    // 0x08000DB8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000DBC: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000DC0: jalr        $t9
    // 0x08000DC4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000DC4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x08000DC8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08000DCC: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x08000DD0: addiu       $t3, $zero, 0x19
    ctx->r11 = ADD32(0, 0X19);
    // 0x08000DD4: lw          $t1, 0x68($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X68);
    // 0x08000DD8: addiu       $t4, $zero, 0xE1
    ctx->r12 = ADD32(0, 0XE1);
    // 0x08000DDC: sb          $t3, 0x75($a0)
    MEM_B(0X75, ctx->r4) = ctx->r11;
    // 0x08000DE0: and         $t2, $t1, $at
    ctx->r10 = ctx->r9 & ctx->r1;
    // 0x08000DE4: sw          $t2, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r10;
    // 0x08000DE8: sh          $t4, 0x96($a0)
    MEM_H(0X96, ctx->r4) = ctx->r12;
    // 0x08000DEC: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x08000DF0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000DF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000DF8: sh          $zero, 0x14($t5)
    MEM_H(0X14, ctx->r13) = 0;
    // 0x08000DFC: lw          $t7, 0xE8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XE8);
    // 0x08000E00: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000E04: andi        $t8, $t7, 0x20
    ctx->r24 = ctx->r15 & 0X20;
    // 0x08000E08: beq         $t8, $zero, L_08000E28
    if (ctx->r24 == 0) {
        // 0x08000E0C: nop
    
            goto L_08000E28;
    }
    // 0x08000E0C: nop

    // 0x08000E10: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000E14: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08000E18: jalr        $t9
    // 0x08000E1C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000E1C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x08000E20: b           L_08000E38
    // 0x08000E24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08000E38;
    // 0x08000E24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000E28:
    // 0x08000E28: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X1204) << 16);
    // 0x08000E2C: jalr        $t9
    // 0x08000E30: addiu       $a0, $a0, 0x1204
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X1204));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000E30: addiu       $a0, $a0, 0x1204
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X1204));
    after_2:
L_08000E34:
    // 0x08000E34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000E38:
    // 0x08000E38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000E3C: jr          $ra
    // 0x08000E40: nop

    TRACE_RETURN()
    return;
    // 0x08000E40: nop

;}
RECOMP_FUNC void func_0800439C_6D347C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800439C: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x080043A0: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x080043A4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080043A8: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x080043AC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x080043B0: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x080043B4: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x080043B8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080043BC: jalr        $t9
    // 0x080043C0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080043C0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x080043C4: bne         $v0, $zero, L_08004654
    if (ctx->r2 != 0) {
        // 0x080043C8: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_08004654;
    }
    // 0x080043C8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080043CC: addiu       $t9, $t9, -0x1284
    ctx->r25 = ADD32(ctx->r25, -0X1284);
    // 0x080043D0: jalr        $t9
    // 0x080043D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080043D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x080043D8: bnel        $v0, $zero, L_08004658
    if (ctx->r2 != 0) {
        // 0x080043DC: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_08004658;
    }
    goto skip_0;
    // 0x080043DC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_0:
    // 0x080043E0: lhu         $v0, 0x8A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8A);
    // 0x080043E4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X4338) << 16);
    // 0x080043E8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080043EC: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x080043F0: bne         $v0, $zero, L_08004654
    if (ctx->r2 != 0) {
        // 0x080043F4: sh          $t6, 0x8A($s0)
        MEM_H(0X8A, ctx->r16) = ctx->r14;
            goto L_08004654;
    }
    // 0x080043F4: sh          $t6, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r14;
    // 0x080043F8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080043FC: jalr        $t9
    // 0x08004400: addiu       $a0, $a0, 0x4338
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X4338));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08004400: addiu       $a0, $a0, 0x4338
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X4338));
    after_2:
    // 0x08004404: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08004408: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x0800440C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08004410: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08004414: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x08004418: jalr        $t9
    // 0x0800441C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800441C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x08004420: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08004424: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08004428: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x0800442C: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x08004430: addiu       $v1, $v1, -0x655C
    ctx->r3 = ADD32(ctx->r3, -0X655C);
    // 0x08004434: addiu       $v0, $v0, 0x3C5C
    ctx->r2 = ADD32(ctx->r2, 0X3C5C);
    // 0x08004438: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
    // 0x0800443C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x08004440: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x08004444: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x08004448: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    // 0x0800444C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08004450: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x08004454: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x08004458: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x0800445C: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x08004460: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x08004464: jalr        $v1
    // 0x08004468: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_4;
    // 0x08004468: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x0800446C: beq         $v0, $zero, L_08004558
    if (ctx->r2 == 0) {
        // 0x08004470: sw          $v0, 0x64($sp)
        MEM_W(0X64, ctx->r29) = ctx->r2;
            goto L_08004558;
    }
    // 0x08004470: sw          $v0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r2;
    // 0x08004474: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x08004478: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x0800447C: lwc1        $f6, 0x8($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X8);
    // 0x08004480: lwc1        $f10, 0x10($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X10);
    // 0x08004484: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08004488: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x0800448C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004490: addiu       $t9, $t9, -0x5230
    ctx->r25 = ADD32(ctx->r25, -0X5230);
    // 0x08004494: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x08004498: jalr        $t9
    // 0x0800449C: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x0800449C: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    after_5:
    // 0x080044A0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080044A4: addiu       $t9, $t9, -0x6D4C
    ctx->r25 = ADD32(ctx->r25, -0X6D4C);
    // 0x080044A8: sh          $v0, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r2;
    // 0x080044AC: jalr        $t9
    // 0x080044B0: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080044B0: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    after_6:
    // 0x080044B4: lhu         $t8, 0x52($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X52);
    // 0x080044B8: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x080044BC: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x080044C0: addu        $v1, $v0, $t8
    ctx->r3 = ADD32(ctx->r2, ctx->r24);
    // 0x080044C4: addiu       $v1, $v1, -0x18
    ctx->r3 = ADD32(ctx->r3, -0X18);
    // 0x080044C8: andi        $t0, $v1, 0x3FF
    ctx->r8 = ctx->r3 & 0X3FF;
    // 0x080044CC: addiu       $a1, $t0, 0x10
    ctx->r5 = ADD32(ctx->r8, 0X10);
    // 0x080044D0: andi        $t1, $a1, 0x3FF
    ctx->r9 = ctx->r5 & 0X3FF;
    // 0x080044D4: sw          $t0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r8;
    // 0x080044D8: sw          $t1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r9;
    // 0x080044DC: jalr        $t9
    // 0x080044E0: andi        $a0, $t1, 0xFFFF
    ctx->r4 = ctx->r9 & 0XFFFF;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080044E0: andi        $a0, $t1, 0xFFFF
    ctx->r4 = ctx->r9 & 0XFFFF;
    after_7:
    // 0x080044E4: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x080044E8: addiu       $t9, $t9, 0x3EA0
    ctx->r25 = ADD32(ctx->r25, 0X3EA0);
    // 0x080044EC: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    // 0x080044F0: jalr        $t9
    // 0x080044F4: lhu         $a0, 0x5E($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X5E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x080044F4: lhu         $a0, 0x5E($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X5E);
    after_8:
    // 0x080044F8: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x080044FC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x08004500: lwc1        $f16, 0x48($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X48);
    // 0x08004504: lwc1        $f4, 0x8($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X8);
    // 0x08004508: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x0800450C: mul.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x08004510: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08004514: lwc1        $f8, 0xC($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0XC);
    // 0x08004518: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x0800451C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004520: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x08004524: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08004528: addiu       $t9, $t9, -0x4678
    ctx->r25 = ADD32(ctx->r25, -0X4678);
    // 0x0800452C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x08004530: mul.s       $f18, $f0, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x08004534: lwc1        $f4, 0x10($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X10);
    // 0x08004538: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x0800453C: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x08004540: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x08004544: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x08004548: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x0800454C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x08004550: jalr        $t9
    // 0x08004554: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08004554: nop

    after_9:
L_08004558:
    // 0x08004558: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x0800455C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08004560: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x08004564: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x08004568: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x0800456C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x08004570: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08004574: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x08004578: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x0800457C: ori         $a3, $zero, 0xFFF0
    ctx->r7 = 0 | 0XFFF0;
    // 0x08004580: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x08004584: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x08004588: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x0800458C: jalr        $t9
    // 0x08004590: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08004590: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    after_10:
    // 0x08004594: beq         $v0, $zero, L_08004654
    if (ctx->r2 == 0) {
        // 0x08004598: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_08004654;
    }
    // 0x08004598: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x0800459C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x080045A0: sh          $t4, 0xD0($v0)
    MEM_H(0XD0, ctx->r2) = ctx->r12;
    // 0x080045A4: lw          $v0, 0x60($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X60);
    // 0x080045A8: lui         $t6, 0x8022
    ctx->r14 = S32(0X8022 << 16);
    // 0x080045AC: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x080045B0: addiu       $v0, $v0, -0x10
    ctx->r2 = ADD32(ctx->r2, -0X10);
    // 0x080045B4: andi        $t5, $v0, 0x3FF
    ctx->r13 = ctx->r2 & 0X3FF;
    // 0x080045B8: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x080045BC: addiu       $t6, $t6, -0x4678
    ctx->r14 = ADD32(ctx->r14, -0X4678);
    // 0x080045C0: lui         $s0, 0x8000
    ctx->r16 = S32(0X8000 << 16);
    // 0x080045C4: addiu       $s0, $s0, 0x3EA0
    ctx->r16 = ADD32(ctx->r16, 0X3EA0);
    // 0x080045C8: sw          $t6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r14;
    // 0x080045CC: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
    // 0x080045D0: andi        $a0, $t5, 0xFFFF
    ctx->r4 = ctx->r13 & 0XFFFF;
    // 0x080045D4: sw          $t5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r13;
    // 0x080045D8: jalr        $t9
    // 0x080045DC: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x080045DC: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    after_11:
    // 0x080045E0: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x080045E4: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    // 0x080045E8: jalr        $s0
    // 0x080045EC: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_12;
    // 0x080045EC: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    after_12:
    // 0x080045F0: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x080045F4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x080045F8: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x080045FC: lwc1        $f4, 0x8($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X8);
    // 0x08004600: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x08004604: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x08004608: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x0800460C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x08004610: lwc1        $f8, 0xC($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0XC);
    // 0x08004614: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x08004618: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x0800461C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x08004620: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x08004624: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08004628: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x0800462C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08004630: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x08004634: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x08004638: lwc1        $f6, 0x10($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X10);
    // 0x0800463C: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x08004640: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x08004644: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08004648: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x0800464C: jalr        $t9
    // 0x08004650: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x08004650: nop

    after_13:
L_08004654:
    // 0x08004654: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_08004658:
    // 0x08004658: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x0800465C: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x08004660: jr          $ra
    // 0x08004664: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    TRACE_RETURN()
    return;
    // 0x08004664: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_08003718_6D27F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003718: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800371C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003720: lui         $at, 0x4280
    ctx->r1 = S32(0X4280 << 16);
    // 0x08003724: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08003728: lwc1        $f4, 0x7C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x0800372C: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x08003730: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x08003734: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x08003738: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x0800373C: nop

    // 0x08003740: andi        $t0, $t9, 0x3FF
    ctx->r8 = ctx->r25 & 0X3FF;
    // 0x08003744: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003748: sh          $t0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r8;
    // 0x0800374C: addiu       $t9, $t9, -0x43FC
    ctx->r25 = ADD32(ctx->r25, -0X43FC);
    // 0x08003750: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08003754: jalr        $t9
    // 0x08003758: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003758: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_0:
    // 0x0800375C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08003760: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003764: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08003768: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x0800376C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08003770: addiu       $t1, $v0, -0x1
    ctx->r9 = ADD32(ctx->r2, -0X1);
    // 0x08003774: bne         $v0, $zero, L_08003784
    if (ctx->r2 != 0) {
        // 0x08003778: sh          $t1, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r9;
            goto L_08003784;
    }
    // 0x08003778: sh          $t1, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r9;
    // 0x0800377C: jalr        $t9
    // 0x08003780: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003780: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
L_08003784:
    // 0x08003784: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08003788: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800378C: jr          $ra
    // 0x08003790: nop

    TRACE_RETURN()
    return;
    // 0x08003790: nop

;}
RECOMP_FUNC void func_080003EC_6CF4CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080003EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080003F0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080003F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080003F8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080003FC: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000400: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000404: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x08000408: jalr        $t9
    // 0x0800040C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800040C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x08000410: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000414: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000418: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X434) << 16);
    // 0x0800041C: jalr        $t9
    // 0x08000420: addiu       $a0, $a0, 0x434
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X434));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000420: addiu       $a0, $a0, 0x434
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X434));
    after_1:
    // 0x08000424: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000428: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800042C: jr          $ra
    // 0x08000430: nop

    TRACE_RETURN()
    return;
    // 0x08000430: nop

;}
RECOMP_FUNC void func_08000000_6CF0E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000000: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08000004: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000008: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x0800000C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08000010: addiu       $t9, $t9, -0x59BC
    ctx->r25 = ADD32(ctx->r25, -0X59BC);
    // 0x08000014: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000018: jalr        $t9
    // 0x0800001C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800001C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x08000020: lui         $t6, 0x62E
    ctx->r14 = S32(0X62E << 16);
    // 0x08000024: ori         $t6, $t6, 0xFE3
    ctx->r14 = ctx->r14 | 0XFE3;
    // 0x08000028: lui         $t7, 0x20
    ctx->r15 = S32(0X20 << 16);
    // 0x0800002C: addiu       $t8, $zero, 0x223
    ctx->r24 = ADD32(0, 0X223);
    // 0x08000030: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x08000034: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x08000038: sw          $t6, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r14;
    // 0x0800003C: sw          $t7, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r15;
    // 0x08000040: sh          $t8, 0x96($s0)
    MEM_H(0X96, ctx->r16) = ctx->r24;
    // 0x08000044: sb          $t0, 0x8E($s0)
    MEM_B(0X8E, ctx->r16) = ctx->r8;
    // 0x08000048: sb          $t1, 0x8F($s0)
    MEM_B(0X8F, ctx->r16) = ctx->r9;
    // 0x0800004C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x08000050: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000054: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000058: lwc1        $f4, 0xC($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0XC);
    // 0x0800005C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000060: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000064: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x08000068: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x0800006C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x08000070: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x08000074: jalr        $t9
    // 0x08000078: sh          $t4, 0xE0($s0)
    MEM_H(0XE0, ctx->r16) = ctx->r12;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000078: sh          $t4, 0xE0($s0)
    MEM_H(0XE0, ctx->r16) = ctx->r12;
    after_1:
    // 0x0800007C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000080: addiu       $t9, $t9, 0x4ABC
    ctx->r25 = ADD32(ctx->r25, 0X4ABC);
    // 0x08000084: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000088: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800008C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x08000090: jalr        $t9
    // 0x08000094: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000094: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x08000098: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800009C: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x080000A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080000A4: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x080000A8: jalr        $t9
    // 0x080000AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080000AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x080000B0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080000B4: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x080000B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080000BC: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    // 0x080000C0: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    // 0x080000C4: jalr        $t9
    // 0x080000C8: addiu       $a3, $zero, -0x28
    ctx->r7 = ADD32(0, -0X28);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080000C8: addiu       $a3, $zero, -0x28
    ctx->r7 = ADD32(0, -0X28);
    after_4:
    // 0x080000CC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080000D0: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x080000D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080000D8: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x080000DC: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x080000E0: jalr        $t9
    // 0x080000E4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080000E4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x080000E8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080000EC: addiu       $t9, $t9, -0x7270
    ctx->r25 = ADD32(ctx->r25, -0X7270);
    // 0x080000F0: addiu       $t5, $zero, -0x3
    ctx->r13 = ADD32(0, -0X3);
    // 0x080000F4: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x080000F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080000FC: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x08000100: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x08000104: jalr        $t9
    // 0x08000108: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000108: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    after_6:
    // 0x0800010C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000110: addiu       $t9, $t9, -0x4F9C
    ctx->r25 = ADD32(ctx->r25, -0X4F9C);
    // 0x08000114: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(23, 0X4720) << 16);
    // 0x08000118: addiu       $a1, $a1, 0x4720
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(23, 0X4720));
    // 0x0800011C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000120: jalr        $t9
    // 0x08000124: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08000124: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x08000128: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800012C: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08000130: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000134: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08000138: jalr        $t9
    // 0x0800013C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x0800013C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_8:
    // 0x08000140: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08000144: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08000148: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x0800014C: jr          $ra
    // 0x08000150: nop

    TRACE_RETURN()
    return;
    // 0x08000150: nop

;}
RECOMP_FUNC void func_08002F58_6D2038(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002F58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002F5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002F60: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002F64: lwc1        $f4, 0x78($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X78);
    // 0x08002F68: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(23, 0X49A8) << 16);
    // 0x08002F6C: ldc1        $f0, 0x49A8($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(23, 0X49A8));
    // 0x08002F70: lwc1        $f16, 0x80($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X80);
    // 0x08002F74: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08002F78: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08002F7C: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x08002F80: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x08002F84: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08002F88: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08002F8C: mul.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x08002F90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002F94: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x08002F98: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x08002F9C: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08002FA0: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08002FA4: swc1        $f10, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f10.u32l;
    // 0x08002FA8: bne         $v0, $zero, L_08002FDC
    if (ctx->r2 != 0) {
        // 0x08002FAC: swc1        $f6, 0x80($a0)
        MEM_W(0X80, ctx->r4) = ctx->f6.u32l;
            goto L_08002FDC;
    }
    // 0x08002FAC: swc1        $f6, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f6.u32l;
    // 0x08002FB0: lw          $t7, 0x60($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X60);
    // 0x08002FB4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002FB8: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08002FBC: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x08002FC0: jalr        $t9
    // 0x08002FC4: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002FC4: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
    after_0:
    // 0x08002FC8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002FCC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002FD0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X2FEC) << 16);
    // 0x08002FD4: jalr        $t9
    // 0x08002FD8: addiu       $a0, $a0, 0x2FEC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X2FEC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002FD8: addiu       $a0, $a0, 0x2FEC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X2FEC));
    after_1:
L_08002FDC:
    // 0x08002FDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002FE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002FE4: jr          $ra
    // 0x08002FE8: nop

    TRACE_RETURN()
    return;
    // 0x08002FE8: nop

;}
RECOMP_FUNC void func_08001D7C_6D0E5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001D7C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08001D80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001D84: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08001D88: jal         0x080016A8
    // 0x08001D8C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_080016A8_6D0788(rdram, ctx);
        goto after_0;
    // 0x08001D8C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x08001D90: bne         $v0, $zero, L_08001E94
    if (ctx->r2 != 0) {
        // 0x08001D94: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_08001E94;
    }
    // 0x08001D94: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08001D98: lh          $t6, 0xA0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XA0);
    // 0x08001D9C: lh          $t7, 0xA2($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XA2);
    // 0x08001DA0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001DA4: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x08001DA8: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x08001DAC: addiu       $t9, $t9, -0x44FC
    ctx->r25 = ADD32(ctx->r25, -0X44FC);
    // 0x08001DB0: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08001DB4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08001DB8: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    // 0x08001DBC: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x08001DC0: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x08001DC4: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x08001DC8: jalr        $t9
    // 0x08001DCC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001DCC: nop

    after_1:
    // 0x08001DD0: bne         $v0, $zero, L_08001E94
    if (ctx->r2 != 0) {
        // 0x08001DD4: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_08001E94;
    }
    // 0x08001DD4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08001DD8: lhu         $v0, 0x94($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X94);
    // 0x08001DDC: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08001DE0: addiu       $a1, $a1, 0x2088
    ctx->r5 = ADD32(ctx->r5, 0X2088);
    // 0x08001DE4: andi        $t8, $v0, 0x20
    ctx->r24 = ctx->r2 & 0X20;
    // 0x08001DE8: bne         $t8, $zero, L_08001E00
    if (ctx->r24 != 0) {
        // 0x08001DEC: andi        $t0, $v0, 0x40
        ctx->r8 = ctx->r2 & 0X40;
            goto L_08001E00;
    }
    // 0x08001DEC: andi        $t0, $v0, 0x40
    ctx->r8 = ctx->r2 & 0X40;
    // 0x08001DF0: bne         $t0, $zero, L_08001E00
    if (ctx->r8 != 0) {
        // 0x08001DF4: andi        $t1, $v0, 0x80
        ctx->r9 = ctx->r2 & 0X80;
            goto L_08001E00;
    }
    // 0x08001DF4: andi        $t1, $v0, 0x80
    ctx->r9 = ctx->r2 & 0X80;
    // 0x08001DF8: beq         $t1, $zero, L_08001E84
    if (ctx->r9 == 0) {
        // 0x08001DFC: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_08001E84;
    }
    // 0x08001DFC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_08001E00:
    // 0x08001E00: lw          $t2, 0x68($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X68);
    // 0x08001E04: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001E08: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08001E0C: ori         $t3, $t2, 0x2
    ctx->r11 = ctx->r10 | 0X2;
    // 0x08001E10: sw          $t3, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r11;
    // 0x08001E14: jalr        $t9
    // 0x08001E18: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001E18: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x08001E1C: beq         $v0, $zero, L_08001E94
    if (ctx->r2 == 0) {
        // 0x08001E20: addiu       $a0, $zero, 0x5
        ctx->r4 = ADD32(0, 0X5);
            goto L_08001E94;
    }
    // 0x08001E20: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x08001E24: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001E28: addiu       $t9, $t9, -0x6D4C
    ctx->r25 = ADD32(ctx->r25, -0X6D4C);
    // 0x08001E2C: jalr        $t9
    // 0x08001E30: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001E30: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_3:
    // 0x08001E34: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x08001E38: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x08001E3C: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x08001E40: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x08001E44: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x08001E48: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08001E4C: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x08001E50: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x08001E54: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001E58: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x08001E5C: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x08001E60: div.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = DIV_D(ctx->f16.d, ctx->f18.d);
    // 0x08001E64: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x08001E68: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x08001E6C: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08001E70: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x08001E74: jalr        $t9
    // 0x08001E78: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001E78: nop

    after_4:
    // 0x08001E7C: b           L_08001E98
    // 0x08001E80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08001E98;
    // 0x08001E80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08001E84:
    // 0x08001E84: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001E88: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08001E8C: jalr        $t9
    // 0x08001E90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08001E90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
L_08001E94:
    // 0x08001E94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08001E98:
    // 0x08001E98: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08001E9C: jr          $ra
    // 0x08001EA0: nop

    TRACE_RETURN()
    return;
    // 0x08001EA0: nop

;}
RECOMP_FUNC void func_08001520_6D0600(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001520: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001524: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001528: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800152C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001530: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x08001534: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x08001538: jalr        $t9
    // 0x0800153C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800153C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x08001540: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08001544: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001548: addiu       $t9, $t9, -0x48C4
    ctx->r25 = ADD32(ctx->r25, -0X48C4);
    // 0x0800154C: lhu         $v1, 0x8A($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X8A);
    // 0x08001550: lui         $a1, 0x42F0
    ctx->r5 = S32(0X42F0 << 16);
    // 0x08001554: addiu       $t6, $v1, -0x1
    ctx->r14 = ADD32(ctx->r3, -0X1);
    // 0x08001558: bne         $v1, $zero, L_080015B0
    if (ctx->r3 != 0) {
        // 0x0800155C: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_080015B0;
    }
    // 0x0800155C: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08001560: jalr        $t9
    // 0x08001564: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001564: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x08001568: beq         $v0, $zero, L_0800159C
    if (ctx->r2 == 0) {
        // 0x0800156C: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_0800159C;
    }
    // 0x0800156C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08001570: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001574: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08001578: jalr        $t9
    // 0x0800157C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800157C: nop

    after_2:
    // 0x08001580: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001584: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001588: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X1294) << 16);
    // 0x0800158C: jalr        $t9
    // 0x08001590: addiu       $a0, $a0, 0x1294
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X1294));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001590: addiu       $a0, $a0, 0x1294
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X1294));
    after_3:
    // 0x08001594: b           L_080015B4
    // 0x08001598: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_080015B4;
    // 0x08001598: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_0800159C:
    // 0x0800159C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080015A0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080015A4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X15C0) << 16);
    // 0x080015A8: jalr        $t9
    // 0x080015AC: addiu       $a0, $a0, 0x15C0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X15C0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080015AC: addiu       $a0, $a0, 0x15C0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X15C0));
    after_4:
L_080015B0:
    // 0x080015B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080015B4:
    // 0x080015B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080015B8: jr          $ra
    // 0x080015BC: nop

    TRACE_RETURN()
    return;
    // 0x080015BC: nop

;}
