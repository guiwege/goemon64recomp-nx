#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_08003938_6ECA88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003938: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800393C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003940: lui         $at, 0xC2E6
    ctx->r1 = S32(0XC2E6 << 16);
    // 0x08003944: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08003948: lwc1        $f0, 0x8($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X8);
    // 0x0800394C: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x08003950: nop

    // 0x08003954: bc1fl       L_08003990
    if (!c1cs) {
        // 0x08003958: lui         $at, 0xC325
        ctx->r1 = S32(0XC325 << 16);
            goto L_08003990;
    }
    goto skip_0;
    // 0x08003958: lui         $at, 0xC325
    ctx->r1 = S32(0XC325 << 16);
    skip_0:
    // 0x0800395C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x08003960: lwc1        $f8, 0x10($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X10);
    // 0x08003964: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x08003968: nop

    // 0x0800396C: bc1fl       L_08003990
    if (!c1cs) {
        // 0x08003970: lui         $at, 0xC325
        ctx->r1 = S32(0XC325 << 16);
            goto L_08003990;
    }
    goto skip_1;
    // 0x08003970: lui         $at, 0xC325
    ctx->r1 = S32(0XC325 << 16);
    skip_1:
    // 0x08003974: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x08003978: lui         $at, 0x7FFF
    ctx->r1 = S32(0X7FFF << 16);
    // 0x0800397C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x08003980: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x08003984: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x08003988: lwc1        $f0, 0x8($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X8);
    // 0x0800398C: lui         $at, 0xC325
    ctx->r1 = S32(0XC325 << 16);
L_08003990:
    // 0x08003990: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08003994: nop

    // 0x08003998: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x0800399C: nop

    // 0x080039A0: bc1fl       L_080039DC
    if (!c1cs) {
        // 0x080039A4: lw          $t8, 0xD0($a0)
        ctx->r24 = MEM_W(ctx->r4, 0XD0);
            goto L_080039DC;
    }
    goto skip_2;
    // 0x080039A4: lw          $t8, 0xD0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XD0);
    skip_2:
    // 0x080039A8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x080039AC: lwc1        $f18, 0x10($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X10);
    // 0x080039B0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080039B4: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x080039B8: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x080039BC: nop

    // 0x080039C0: bc1fl       L_080039DC
    if (!c1cs) {
        // 0x080039C4: lw          $t8, 0xD0($a0)
        ctx->r24 = MEM_W(ctx->r4, 0XD0);
            goto L_080039DC;
    }
    goto skip_3;
    // 0x080039C4: lw          $t8, 0xD0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XD0);
    skip_3:
    // 0x080039C8: jalr        $t9
    // 0x080039CC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080039CC: nop

    after_0:
    // 0x080039D0: b           L_080039F4
    // 0x080039D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_080039F4;
    // 0x080039D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080039D8: lw          $t8, 0xD0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XD0);
L_080039DC:
    // 0x080039DC: lw          $v0, 0x18($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X18);
    // 0x080039E0: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x080039E4: swc1        $f4, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f4.u32l;
    // 0x080039E8: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x080039EC: swc1        $f6, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f6.u32l;
    // 0x080039F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080039F4:
    // 0x080039F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080039F8: jr          $ra
    // 0x080039FC: nop

    TRACE_RETURN()
    return;
    // 0x080039FC: nop

;}
RECOMP_FUNC void func_08001108_6EA258(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001108: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x0800110C: jr          $ra
    // 0x08001110: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08001110: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08000124_6E9274(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000124: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000128: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0800012C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000130: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000134: lw          $v0, 0x38($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X38);
    // 0x08000138: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x0800013C: beql        $v0, $zero, L_08000200
    if (ctx->r2 == 0) {
        // 0x08000140: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_08000200;
    }
    goto skip_0;
    // 0x08000140: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x08000144: lw          $v1, 0x68($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X68);
    // 0x08000148: andi        $t6, $v1, 0x1
    ctx->r14 = ctx->r3 & 0X1;
    // 0x0800014C: beql        $t6, $zero, L_08000200
    if (ctx->r14 == 0) {
        // 0x08000150: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_08000200;
    }
    goto skip_1;
    // 0x08000150: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x08000154: lbu         $t7, 0x4C($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X4C);
    // 0x08000158: addiu       $at, $zero, 0x1B
    ctx->r1 = ADD32(0, 0X1B);
    // 0x0800015C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000160: bne         $t7, $at, L_080001F0
    if (ctx->r15 != ctx->r1) {
        // 0x08000164: addiu       $t9, $t9, 0x4038
        ctx->r25 = ADD32(ctx->r25, 0X4038);
            goto L_080001F0;
    }
    // 0x08000164: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x08000168: jalr        $t9
    // 0x0800016C: lhu         $a0, 0xD0($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XD0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800016C: lhu         $a0, 0xD0($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XD0);
    after_0:
    // 0x08000170: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000174: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08000178: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x0800017C: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08000180: addiu       $a0, $zero, 0x204
    ctx->r4 = ADD32(0, 0X204);
    // 0x08000184: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x08000188: jalr        $t9
    // 0x0800018C: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800018C: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_1:
    // 0x08000190: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000194: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08000198: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(31, 0X21C) << 16);
    // 0x0800019C: addiu       $a1, $a1, 0x21C
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(31, 0X21C));
    // 0x080001A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080001A4: jalr        $t9
    // 0x080001A8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080001A8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x080001AC: beq         $v0, $zero, L_080001FC
    if (ctx->r2 == 0) {
        // 0x080001B0: sw          $v0, 0xD0($s0)
        MEM_W(0XD0, ctx->r16) = ctx->r2;
            goto L_080001FC;
    }
    // 0x080001B0: sw          $v0, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->r2;
    // 0x080001B4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080001B8: addiu       $t8, $zero, 0x28
    ctx->r24 = ADD32(0, 0X28);
    // 0x080001BC: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080001C0: sh          $t8, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r24;
    // 0x080001C4: jalr        $t9
    // 0x080001C8: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080001C8: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    after_3:
    // 0x080001CC: lw          $t1, 0xD0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XD0);
    // 0x080001D0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080001D4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080001D8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(31, 0X210) << 16);
    // 0x080001DC: addiu       $a0, $a0, 0x210
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0X210));
    // 0x080001E0: jalr        $t9
    // 0x080001E4: sw          $v0, 0x2C($t1)
    MEM_W(0X2C, ctx->r9) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080001E4: sw          $v0, 0x2C($t1)
    MEM_W(0X2C, ctx->r9) = ctx->r2;
    after_4:
    // 0x080001E8: b           L_08000200
    // 0x080001EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08000200;
    // 0x080001EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080001F0:
    // 0x080001F0: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x080001F4: and         $t2, $v1, $at
    ctx->r10 = ctx->r3 & ctx->r1;
    // 0x080001F8: sw          $t2, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r10;
L_080001FC:
    // 0x080001FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08000200:
    // 0x08000200: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000204: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000208: jr          $ra
    // 0x0800020C: nop

    TRACE_RETURN()
    return;
    // 0x0800020C: nop

;}
RECOMP_FUNC void func_08000508_6E9658(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000508: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800050C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000510: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000514: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000518: addiu       $t9, $t9, -0x4854
    ctx->r25 = ADD32(ctx->r25, -0X4854);
    // 0x0800051C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000520: jalr        $t9
    // 0x08000524: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000524: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    after_0:
    // 0x08000528: beq         $v0, $zero, L_08000550
    if (ctx->r2 == 0) {
        // 0x0800052C: lui         $t6, 0x2A0
        ctx->r14 = S32(0X2A0 << 16);
            goto L_08000550;
    }
    // 0x0800052C: lui         $t6, 0x2A0
    ctx->r14 = S32(0X2A0 << 16);
    // 0x08000530: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x08000534: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000538: ori         $t6, $t6, 0x7E1
    ctx->r14 = ctx->r14 | 0X7E1;
    // 0x0800053C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000540: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(31, 0X560) << 16);
    // 0x08000544: addiu       $a0, $a0, 0x560
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0X560));
    // 0x08000548: jalr        $t9
    // 0x0800054C: sw          $t6, 0x60($t7)
    MEM_W(0X60, ctx->r15) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800054C: sw          $t6, 0x60($t7)
    MEM_W(0X60, ctx->r15) = ctx->r14;
    after_1:
L_08000550:
    // 0x08000550: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000554: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000558: jr          $ra
    // 0x0800055C: nop

    TRACE_RETURN()
    return;
    // 0x0800055C: nop

;}
RECOMP_FUNC void func_08003818_6EC968(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003818: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800381C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003820: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08003824: lui         $t6, 0x8000
    ctx->r14 = S32(0X8000 << 16);
    // 0x08003828: ori         $t6, $t6, 0x20
    ctx->r14 = ctx->r14 | 0X20;
    // 0x0800382C: addiu       $t7, $zero, 0x4000
    ctx->r15 = ADD32(0, 0X4000);
    // 0x08003830: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003834: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x08003838: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x0800383C: sw          $t7, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r15;
    // 0x08003840: sb          $zero, 0x6C($a0)
    MEM_B(0X6C, ctx->r4) = 0;
    // 0x08003844: addiu       $t9, $t9, -0x6D4C
    ctx->r25 = ADD32(ctx->r25, -0X6D4C);
    // 0x08003848: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x0800384C: jalr        $t9
    // 0x08003850: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003850: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_0:
    // 0x08003854: sltiu       $at, $v0, 0x5
    ctx->r1 = ctx->r2 < 0X5 ? 1 : 0;
    // 0x08003858: beq         $at, $zero, L_080038FC
    if (ctx->r1 == 0) {
        // 0x0800385C: lw          $a2, 0x18($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X18);
            goto L_080038FC;
    }
    // 0x0800385C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x08003860: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x08003864: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(31, 0X57D8) << 16);
    // 0x08003868: addu        $at, $at, $t8
    gpr jr_addend_08003870 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x0800386C: lw          $t8, 0x57D8($at)
    ctx->r24 = ADD32(ctx->r1, (int16_t)RELOC_LO16(31, 0X57D8));
    // 0x08003870: jr          $t8
    // 0x08003874: nop

    switch (jr_addend_08003870 >> 2) {
        case 0: goto L_08003878; break;
        case 1: goto L_08003894; break;
        case 2: goto L_080038B0; break;
        case 3: goto L_080038CC; break;
        case 4: goto L_080038E8; break;
        default: switch_error(__func__, 0x08003870, 0x080057D8);
    }
    // 0x08003874: nop

L_08003878:
    // 0x08003878: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800387C: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08003880: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x08003884: jalr        $t9
    // 0x08003888: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003888: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x0800388C: b           L_080038FC
    // 0x08003890: nop

        goto L_080038FC;
    // 0x08003890: nop

L_08003894:
    // 0x08003894: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08003898: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x0800389C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x080038A0: jalr        $t9
    // 0x080038A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080038A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x080038A8: b           L_080038FC
    // 0x080038AC: nop

        goto L_080038FC;
    // 0x080038AC: nop

L_080038B0:
    // 0x080038B0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080038B4: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x080038B8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x080038BC: jalr        $t9
    // 0x080038C0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080038C0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x080038C4: b           L_080038FC
    // 0x080038C8: nop

        goto L_080038FC;
    // 0x080038C8: nop

L_080038CC:
    // 0x080038CC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080038D0: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x080038D4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x080038D8: jalr        $t9
    // 0x080038DC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080038DC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_4:
    // 0x080038E0: b           L_080038FC
    // 0x080038E4: nop

        goto L_080038FC;
    // 0x080038E4: nop

L_080038E8:
    // 0x080038E8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080038EC: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x080038F0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x080038F4: jalr        $t9
    // 0x080038F8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080038F8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_5:
L_080038FC:
    // 0x080038FC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(31, 0X57EC) << 16);
    // 0x08003900: lwc1        $f0, 0x57EC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(31, 0X57EC));
    // 0x08003904: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x08003908: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800390C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003910: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(31, 0X3938) << 16);
    // 0x08003914: addiu       $a0, $a0, 0x3938
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0X3938));
    // 0x08003918: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x0800391C: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x08003920: jalr        $t9
    // 0x08003924: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08003924: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    after_6:
    // 0x08003928: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800392C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08003930: jr          $ra
    // 0x08003934: nop

    TRACE_RETURN()
    return;
    // 0x08003934: nop

;}
RECOMP_FUNC void func_080045F0_6ED740(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080045F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080045F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080045F8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080045FC: lui         $at, 0xC325
    ctx->r1 = S32(0XC325 << 16);
    // 0x08004600: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08004604: lwc1        $f2, 0x8($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X8);
    // 0x08004608: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x0800460C: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x08004610: nop

    // 0x08004614: bc1fl       L_08004650
    if (!c1cs) {
        // 0x08004618: lw          $t6, 0xD0($a0)
        ctx->r14 = MEM_W(ctx->r4, 0XD0);
            goto L_08004650;
    }
    goto skip_0;
    // 0x08004618: lw          $t6, 0xD0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD0);
    skip_0:
    // 0x0800461C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x08004620: lwc1        $f8, 0x10($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X10);
    // 0x08004624: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004628: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x0800462C: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x08004630: nop

    // 0x08004634: bc1fl       L_08004650
    if (!c1cs) {
        // 0x08004638: lw          $t6, 0xD0($a0)
        ctx->r14 = MEM_W(ctx->r4, 0XD0);
            goto L_08004650;
    }
    goto skip_1;
    // 0x08004638: lw          $t6, 0xD0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD0);
    skip_1:
    // 0x0800463C: jalr        $t9
    // 0x08004640: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004640: nop

    after_0:
    // 0x08004644: b           L_080046E8
    // 0x08004648: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_080046E8;
    // 0x08004648: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0800464C: lw          $t6, 0xD0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD0);
L_08004650:
    // 0x08004650: lwc1        $f18, 0x10($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X10);
    // 0x08004654: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x08004658: lwc1        $f10, 0xE4($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0XE4);
    // 0x0800465C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x08004660: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(31, 0X5800) << 16);
    // 0x08004664: add.s       $f16, $f2, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f2.fl + ctx->f10.fl;
    // 0x08004668: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800466C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08004670: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08004674: swc1        $f16, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f16.u32l;
    // 0x08004678: lw          $t7, 0xD0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XD0);
    // 0x0800467C: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x08004680: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x08004684: lwc1        $f4, 0xE8($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0XE8);
    // 0x08004688: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x0800468C: swc1        $f6, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f6.u32l;
    // 0x08004690: lwc1        $f8, 0xE4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0XE4);
    // 0x08004694: ldc1        $f16, 0x5800($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(31, 0X5800));
    // 0x08004698: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x0800469C: sub.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d - ctx->f16.d;
    // 0x080046A0: cvt.s.d     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f0.fl = CVT_S_D(ctx->f18.d);
    // 0x080046A4: swc1        $f0, 0xE4($a0)
    MEM_W(0XE4, ctx->r4) = ctx->f0.u32l;
    // 0x080046A8: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x080046AC: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x080046B0: swc1        $f6, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f6.u32l;
    // 0x080046B4: lwc1        $f8, 0xC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC);
    // 0x080046B8: c.lt.s      $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f8.fl < ctx->f12.fl;
    // 0x080046BC: nop

    // 0x080046C0: bc1fl       L_080046E8
    if (!c1cs) {
        // 0x080046C4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_080046E8;
    }
    goto skip_2;
    // 0x080046C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x080046C8: jalr        $t9
    // 0x080046CC: swc1        $f12, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f12.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080046CC: swc1        $f12, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f12.u32l;
    after_1:
    // 0x080046D0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080046D4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080046D8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(31, 0X46F8) << 16);
    // 0x080046DC: jalr        $t9
    // 0x080046E0: addiu       $a0, $a0, 0x46F8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0X46F8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080046E0: addiu       $a0, $a0, 0x46F8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0X46F8));
    after_2:
    // 0x080046E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080046E8:
    // 0x080046E8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080046EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080046F0: jr          $ra
    // 0x080046F4: nop

    TRACE_RETURN()
    return;
    // 0x080046F4: nop

;}
RECOMP_FUNC void func_080029FC_6EBB4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080029FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002A00: lui         $t6, 0x8000
    ctx->r14 = S32(0X8000 << 16);
    // 0x08002A04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002A08: ori         $t6, $t6, 0x20
    ctx->r14 = ctx->r14 | 0X20;
    // 0x08002A0C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002A10: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x08002A14: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08002A18: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08002A1C: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x08002A20: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08002A24: jalr        $t9
    // 0x08002A28: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002A28: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_0:
    // 0x08002A2C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x08002A30: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x08002A34: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08002A38: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08002A3C: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x08002A40: sb          $t7, 0x6C($a2)
    MEM_B(0X6C, ctx->r6) = ctx->r15;
    // 0x08002A44: lwc1        $f4, 0xC($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0XC);
    // 0x08002A48: swc1        $f0, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->f0.u32l;
    // 0x08002A4C: swc1        $f0, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->f0.u32l;
    // 0x08002A50: swc1        $f0, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->f0.u32l;
    // 0x08002A54: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x08002A58: swc1        $f4, 0xDC($a2)
    MEM_W(0XDC, ctx->r6) = ctx->f4.u32l;
    // 0x08002A5C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08002A60: lwc1        $f6, 0xC($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0XC);
    // 0x08002A64: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002A68: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002A6C: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x08002A70: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(31, 0X2A90) << 16);
    // 0x08002A74: addiu       $a0, $a0, 0x2A90
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0X2A90));
    // 0x08002A78: jalr        $t9
    // 0x08002A7C: swc1        $f10, 0xE0($a2)
    MEM_W(0XE0, ctx->r6) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002A7C: swc1        $f10, 0xE0($a2)
    MEM_W(0XE0, ctx->r6) = ctx->f10.u32l;
    after_1:
    // 0x08002A80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002A84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002A88: jr          $ra
    // 0x08002A8C: nop

    TRACE_RETURN()
    return;
    // 0x08002A8C: nop

;}
RECOMP_FUNC void func_08003A00_6ECB50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003A00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003A04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003A08: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08003A0C: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x08003A10: lui         $t6, 0x2E
    ctx->r14 = S32(0X2E << 16);
    // 0x08003A14: sb          $t9, 0x8E($a0)
    MEM_B(0X8E, ctx->r4) = ctx->r25;
    // 0x08003A18: ori         $t6, $t6, 0xEE1
    ctx->r14 = ctx->r14 | 0XEE1;
    // 0x08003A1C: ori         $t7, $zero, 0x8000
    ctx->r15 = 0 | 0X8000;
    // 0x08003A20: addiu       $t8, $zero, 0x137
    ctx->r24 = ADD32(0, 0X137);
    // 0x08003A24: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x08003A28: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x08003A2C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003A30: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08003A34: sw          $t7, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r15;
    // 0x08003A38: sh          $t8, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r24;
    // 0x08003A3C: sb          $t0, 0x8F($a0)
    MEM_B(0X8F, ctx->r4) = ctx->r8;
    // 0x08003A40: sb          $zero, 0x75($a0)
    MEM_B(0X75, ctx->r4) = 0;
    // 0x08003A44: sb          $t1, 0x4C($a0)
    MEM_B(0X4C, ctx->r4) = ctx->r9;
    // 0x08003A48: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x08003A4C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08003A50: addiu       $a1, $zero, 0x2D
    ctx->r5 = ADD32(0, 0X2D);
    // 0x08003A54: addiu       $a2, $zero, 0x8C
    ctx->r6 = ADD32(0, 0X8C);
    // 0x08003A58: jalr        $t9
    // 0x08003A5C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003A5C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08003A60: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003A64: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08003A68: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08003A6C: addiu       $a1, $zero, 0x190
    ctx->r5 = ADD32(0, 0X190);
    // 0x08003A70: addiu       $a2, $zero, 0x46
    ctx->r6 = ADD32(0, 0X46);
    // 0x08003A74: jalr        $t9
    // 0x08003A78: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003A78: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x08003A7C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08003A80: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08003A84: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x08003A88: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x08003A8C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08003A90: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08003A94: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x08003A98: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x08003A9C: sb          $t2, 0x98($a0)
    MEM_B(0X98, ctx->r4) = ctx->r10;
    // 0x08003AA0: sb          $v0, 0x99($a0)
    MEM_B(0X99, ctx->r4) = ctx->r2;
    // 0x08003AA4: sb          $v0, 0x9A($a0)
    MEM_B(0X9A, ctx->r4) = ctx->r2;
    // 0x08003AA8: jalr        $t9
    // 0x08003AAC: sb          $zero, 0x9B($a0)
    MEM_B(0X9B, ctx->r4) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003AAC: sb          $zero, 0x9B($a0)
    MEM_B(0X9B, ctx->r4) = 0;
    after_2:
    // 0x08003AB0: lui         $at, 0x3E00
    ctx->r1 = S32(0X3E00 << 16);
    // 0x08003AB4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08003AB8: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x08003ABC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003AC0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003AC4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(31, 0X3AEC) << 16);
    // 0x08003AC8: addiu       $a0, $a0, 0x3AEC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0X3AEC));
    // 0x08003ACC: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x08003AD0: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x08003AD4: jalr        $t9
    // 0x08003AD8: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08003AD8: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    after_3:
    // 0x08003ADC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08003AE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08003AE4: jr          $ra
    // 0x08003AE8: nop

    TRACE_RETURN()
    return;
    // 0x08003AE8: nop

;}
RECOMP_FUNC void func_080002F0_6E9440(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080002F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080002F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080002F8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080002FC: lwc1        $f4, 0x1C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x08000300: lwc1        $f16, 0x20($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X20);
    // 0x08000304: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(31, 0X5400) << 16);
    // 0x08000308: ldc1        $f0, 0x5400($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(31, 0X5400));
    // 0x0800030C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08000310: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x08000314: add.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = ctx->f6.d + ctx->f0.d;
    // 0x08000318: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x0800031C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x08000320: add.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = ctx->f18.d + ctx->f0.d;
    // 0x08000324: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08000328: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x0800032C: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08000330: addiu       $t9, $t9, -0x5C04
    ctx->r25 = ADD32(ctx->r25, -0X5C04);
    // 0x08000334: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08000338: swc1        $f10, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f10.u32l;
    // 0x0800033C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08000340: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x08000344: swc1        $f6, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f6.u32l;
    // 0x08000348: lwc1        $f8, 0x20($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X20);
    // 0x0800034C: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x08000350: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x08000354: ctc1        $a0, $FpcCsr
    set_cop1_cs(ctx->r4);
    // 0x08000358: nop

    // 0x0800035C: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x08000360: cfc1        $a0, $FpcCsr
    ctx->r4 = get_cop1_cs();
    // 0x08000364: nop

    // 0x08000368: andi        $a0, $a0, 0x78
    ctx->r4 = ctx->r4 & 0X78;
    // 0x0800036C: beql        $a0, $zero, L_080003BC
    if (ctx->r4 == 0) {
        // 0x08000370: mfc1        $a0, $f18
        ctx->r4 = (int32_t)ctx->f18.u32l;
            goto L_080003BC;
    }
    goto skip_0;
    // 0x08000370: mfc1        $a0, $f18
    ctx->r4 = (int32_t)ctx->f18.u32l;
    skip_0:
    // 0x08000374: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08000378: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x0800037C: sub.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x08000380: ctc1        $a0, $FpcCsr
    set_cop1_cs(ctx->r4);
    // 0x08000384: nop

    // 0x08000388: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x0800038C: cfc1        $a0, $FpcCsr
    ctx->r4 = get_cop1_cs();
    // 0x08000390: nop

    // 0x08000394: andi        $a0, $a0, 0x78
    ctx->r4 = ctx->r4 & 0X78;
    // 0x08000398: bne         $a0, $zero, L_080003B0
    if (ctx->r4 != 0) {
        // 0x0800039C: nop
    
            goto L_080003B0;
    }
    // 0x0800039C: nop

    // 0x080003A0: mfc1        $a0, $f18
    ctx->r4 = (int32_t)ctx->f18.u32l;
    // 0x080003A4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x080003A8: b           L_080003C8
    // 0x080003AC: or          $a0, $a0, $at
    ctx->r4 = ctx->r4 | ctx->r1;
        goto L_080003C8;
    // 0x080003AC: or          $a0, $a0, $at
    ctx->r4 = ctx->r4 | ctx->r1;
L_080003B0:
    // 0x080003B0: b           L_080003C8
    // 0x080003B4: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
        goto L_080003C8;
    // 0x080003B4: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x080003B8: mfc1        $a0, $f18
    ctx->r4 = (int32_t)ctx->f18.u32l;
L_080003BC:
    // 0x080003BC: nop

    // 0x080003C0: bltz        $a0, L_080003B0
    if (SIGNED(ctx->r4) < 0) {
        // 0x080003C4: nop
    
            goto L_080003B0;
    }
    // 0x080003C4: nop

L_080003C8:
    // 0x080003C8: andi        $t7, $a0, 0xFFFF
    ctx->r15 = ctx->r4 & 0XFFFF;
    // 0x080003CC: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x080003D0: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x080003D4: andi        $a1, $t7, 0xFFFF
    ctx->r5 = ctx->r15 & 0XFFFF;
    // 0x080003D8: andi        $a2, $t7, 0xFFFF
    ctx->r6 = ctx->r15 & 0XFFFF;
    // 0x080003DC: jalr        $t9
    // 0x080003E0: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080003E0: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_0:
    // 0x080003E4: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x080003E8: lui         $at, 0x3FD0
    ctx->r1 = S32(0X3FD0 << 16);
    // 0x080003EC: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x080003F0: lwc1        $f4, 0x1C($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X1C);
    // 0x080003F4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x080003F8: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(31, 0X5408) << 16);
    // 0x080003FC: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08000400: c.le.d      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.d <= ctx->f6.d;
    // 0x08000404: nop

    // 0x08000408: bc1fl       L_08000420
    if (!c1cs) {
        // 0x0800040C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08000420;
    }
    goto skip_1;
    // 0x0800040C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x08000410: lwc1        $f0, 0x5408($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(31, 0X5408));
    // 0x08000414: swc1        $f0, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->f0.u32l;
    // 0x08000418: swc1        $f0, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->f0.u32l;
    // 0x0800041C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000420:
    // 0x08000420: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000424: jr          $ra
    // 0x08000428: nop

    TRACE_RETURN()
    return;
    // 0x08000428: nop

;}
RECOMP_FUNC void func_080019F8_6EAB48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080019F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080019FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001A00: lui         $t6, 0x8000
    ctx->r14 = S32(0X8000 << 16);
    // 0x08001A04: ori         $t6, $t6, 0x220
    ctx->r14 = ctx->r14 | 0X220;
    // 0x08001A08: addiu       $t7, $zero, 0x4000
    ctx->r15 = ADD32(0, 0X4000);
    // 0x08001A0C: addiu       $t8, $zero, 0x333
    ctx->r24 = ADD32(0, 0X333);
    // 0x08001A10: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001A14: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x08001A18: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08001A1C: sw          $t7, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r15;
    // 0x08001A20: sh          $t8, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r24;
    // 0x08001A24: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08001A28: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x08001A2C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001A30: jalr        $t9
    // 0x08001A34: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001A34: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x08001A38: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(31, 0X5424) << 16);
    // 0x08001A3C: lwc1        $f0, 0x5424($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(31, 0X5424));
    // 0x08001A40: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x08001A44: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08001A48: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x08001A4C: swc1        $f0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f0.u32l;
    // 0x08001A50: swc1        $f0, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f0.u32l;
    // 0x08001A54: swc1        $f0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f0.u32l;
    // 0x08001A58: sb          $v1, 0x6C($a0)
    MEM_B(0X6C, ctx->r4) = ctx->r3;
    // 0x08001A5C: lwc1        $f4, 0x8($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X8);
    // 0x08001A60: lw          $v0, 0xD0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD0);
    // 0x08001A64: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001A68: swc1        $f4, 0xDC($a0)
    MEM_W(0XDC, ctx->r4) = ctx->f4.u32l;
    // 0x08001A6C: lwc1        $f6, 0x10($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X10);
    // 0x08001A70: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001A74: beq         $v0, $zero, L_08001A9C
    if (ctx->r2 == 0) {
        // 0x08001A78: swc1        $f6, 0xE0($a0)
        MEM_W(0XE0, ctx->r4) = ctx->f6.u32l;
            goto L_08001A9C;
    }
    // 0x08001A78: swc1        $f6, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->f6.u32l;
    // 0x08001A7C: beq         $v0, $v1, L_08001AA4
    if (ctx->r2 == ctx->r3) {
        // 0x08001A80: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_08001AA4;
    }
    // 0x08001A80: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08001A84: beq         $v0, $at, L_08001A9C
    if (ctx->r2 == ctx->r1) {
        // 0x08001A88: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_08001A9C;
    }
    // 0x08001A88: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x08001A8C: beql        $v0, $at, L_08001AA8
    if (ctx->r2 == ctx->r1) {
        // 0x08001A90: addiu       $t0, $zero, 0x200
        ctx->r8 = ADD32(0, 0X200);
            goto L_08001AA8;
    }
    goto skip_0;
    // 0x08001A90: addiu       $t0, $zero, 0x200
    ctx->r8 = ADD32(0, 0X200);
    skip_0:
    // 0x08001A94: b           L_08001AAC
    // 0x08001A98: nop

        goto L_08001AAC;
    // 0x08001A98: nop

L_08001A9C:
    // 0x08001A9C: b           L_08001AAC
    // 0x08001AA0: sh          $zero, 0xE4($a0)
    MEM_H(0XE4, ctx->r4) = 0;
        goto L_08001AAC;
    // 0x08001AA0: sh          $zero, 0xE4($a0)
    MEM_H(0XE4, ctx->r4) = 0;
L_08001AA4:
    // 0x08001AA4: addiu       $t0, $zero, 0x200
    ctx->r8 = ADD32(0, 0X200);
L_08001AA8:
    // 0x08001AA8: sh          $t0, 0xE4($a0)
    MEM_H(0XE4, ctx->r4) = ctx->r8;
L_08001AAC:
    // 0x08001AAC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(31, 0X1AC8) << 16);
    // 0x08001AB0: jalr        $t9
    // 0x08001AB4: addiu       $a0, $a0, 0x1AC8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0X1AC8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001AB4: addiu       $a0, $a0, 0x1AC8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0X1AC8));
    after_1:
    // 0x08001AB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001ABC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001AC0: jr          $ra
    // 0x08001AC4: nop

    TRACE_RETURN()
    return;
    // 0x08001AC4: nop

;}
RECOMP_FUNC void func_08001AC8_6EAC18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001AC8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08001ACC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08001AD0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08001AD4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08001AD8: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x08001ADC: lhu         $t8, -0x33D0($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X33D0);
    // 0x08001AE0: lhu         $t6, 0x72($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X72);
    // 0x08001AE4: lw          $v0, 0xD0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD0);
    // 0x08001AE8: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x08001AEC: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x08001AF0: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x08001AF4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08001AF8: beq         $v0, $zero, L_08001B28
    if (ctx->r2 == 0) {
        // 0x08001AFC: andi        $a2, $t0, 0x3FF
        ctx->r6 = ctx->r8 & 0X3FF;
            goto L_08001B28;
    }
    // 0x08001AFC: andi        $a2, $t0, 0x3FF
    ctx->r6 = ctx->r8 & 0X3FF;
    // 0x08001B00: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08001B04: beq         $v0, $at, L_08001B28
    if (ctx->r2 == ctx->r1) {
        // 0x08001B08: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_08001B28;
    }
    // 0x08001B08: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08001B0C: beq         $v0, $at, L_08001BA8
    if (ctx->r2 == ctx->r1) {
        // 0x08001B10: lui         $t9, 0x8000
        ctx->r25 = S32(0X8000 << 16);
            goto L_08001BA8;
    }
    // 0x08001B10: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08001B14: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x08001B18: beq         $v0, $at, L_08001BA8
    if (ctx->r2 == ctx->r1) {
        // 0x08001B1C: nop
    
            goto L_08001BA8;
    }
    // 0x08001B1C: nop

    // 0x08001B20: b           L_08001C24
    // 0x08001B24: lw          $t8, 0xD8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XD8);
        goto L_08001C24;
    // 0x08001B24: lw          $t8, 0xD8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XD8);
L_08001B28:
    // 0x08001B28: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08001B2C: addiu       $t9, $t9, 0x3EA0
    ctx->r25 = ADD32(ctx->r25, 0X3EA0);
    // 0x08001B30: jalr        $t9
    // 0x08001B34: andi        $a0, $a2, 0xFFFF
    ctx->r4 = ctx->r6 & 0XFFFF;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001B34: andi        $a0, $a2, 0xFFFF
    ctx->r4 = ctx->r6 & 0XFFFF;
    after_0:
    // 0x08001B38: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x08001B3C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08001B40: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x08001B44: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08001B48: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x08001B4C: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x08001B50: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x08001B54: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    // 0x08001B58: nop

    // 0x08001B5C: addiu       $t4, $t3, 0x400
    ctx->r12 = ADD32(ctx->r11, 0X400);
    // 0x08001B60: andi        $t5, $t4, 0x3FF
    ctx->r13 = ctx->r12 & 0X3FF;
    // 0x08001B64: sh          $t5, 0x14($t6)
    MEM_H(0X14, ctx->r14) = ctx->r13;
    // 0x08001B68: jalr        $t9
    // 0x08001B6C: lhu         $a0, 0xE4($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XE4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001B6C: lhu         $a0, 0xE4($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XE4);
    after_1:
    // 0x08001B70: lw          $t8, 0xD4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XD4);
    // 0x08001B74: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x08001B78: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x08001B7C: bgez        $t8, L_08001B90
    if (SIGNED(ctx->r24) >= 0) {
        // 0x08001B80: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_08001B90;
    }
    // 0x08001B80: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x08001B84: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08001B88: nop

    // 0x08001B8C: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
L_08001B90:
    // 0x08001B90: mul.s       $f4, $f0, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x08001B94: lwc1        $f6, 0xDC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XDC);
    // 0x08001B98: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x08001B9C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08001BA0: b           L_08001C20
    // 0x08001BA4: swc1        $f8, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f8.u32l;
        goto L_08001C20;
    // 0x08001BA4: swc1        $f8, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f8.u32l;
L_08001BA8:
    // 0x08001BA8: addiu       $t9, $t9, 0x3EA0
    ctx->r25 = ADD32(ctx->r25, 0X3EA0);
    // 0x08001BAC: jalr        $t9
    // 0x08001BB0: andi        $a0, $a2, 0xFFFF
    ctx->r4 = ctx->r6 & 0XFFFF;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001BB0: andi        $a0, $a2, 0xFFFF
    ctx->r4 = ctx->r6 & 0XFFFF;
    after_2:
    // 0x08001BB4: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x08001BB8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08001BBC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x08001BC0: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08001BC4: mul.s       $f18, $f0, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x08001BC8: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x08001BCC: trunc.w.s   $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x08001BD0: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
    // 0x08001BD4: nop

    // 0x08001BD8: addiu       $t2, $t1, 0x400
    ctx->r10 = ADD32(ctx->r9, 0X400);
    // 0x08001BDC: andi        $t3, $t2, 0x3FF
    ctx->r11 = ctx->r10 & 0X3FF;
    // 0x08001BE0: sh          $t3, 0x18($t4)
    MEM_H(0X18, ctx->r12) = ctx->r11;
    // 0x08001BE4: jalr        $t9
    // 0x08001BE8: lhu         $a0, 0xE4($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XE4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001BE8: lhu         $a0, 0xE4($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XE4);
    after_3:
    // 0x08001BEC: lw          $t5, 0xD4($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XD4);
    // 0x08001BF0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x08001BF4: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x08001BF8: bgez        $t5, L_08001C0C
    if (SIGNED(ctx->r13) >= 0) {
        // 0x08001BFC: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_08001C0C;
    }
    // 0x08001BFC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08001C00: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08001C04: nop

    // 0x08001C08: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_08001C0C:
    // 0x08001C0C: mul.s       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x08001C10: lwc1        $f18, 0xE0($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XE0);
    // 0x08001C14: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x08001C18: add.s       $f16, $f10, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x08001C1C: swc1        $f16, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->f16.u32l;
L_08001C20:
    // 0x08001C20: lw          $t8, 0xD8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XD8);
L_08001C24:
    // 0x08001C24: lhu         $t7, 0xE4($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0XE4);
    // 0x08001C28: addu        $t0, $t8, $t7
    ctx->r8 = ADD32(ctx->r24, ctx->r15);
    // 0x08001C2C: andi        $t1, $t0, 0x3FF
    ctx->r9 = ctx->r8 & 0X3FF;
    // 0x08001C30: sh          $t1, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r9;
    // 0x08001C34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08001C38: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08001C3C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08001C40: jr          $ra
    // 0x08001C44: nop

    TRACE_RETURN()
    return;
    // 0x08001C44: nop

;}
RECOMP_FUNC void func_08001F5C_6EB0AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001F5C: lw          $t6, 0x84($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X84);
    // 0x08001F60: lwc1        $f2, 0x8($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X8);
    // 0x08001F64: lui         $at, 0x4320
    ctx->r1 = S32(0X4320 << 16);
    // 0x08001F68: lwc1        $f0, 0x8($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X8);
    // 0x08001F6C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08001F70: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x08001F74: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x08001F78: nop

    // 0x08001F7C: bc1fl       L_08001F94
    if (!c1cs) {
        // 0x08001F80: sub.s       $f12, $f0, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
            goto L_08001F94;
    }
    goto skip_0;
    // 0x08001F80: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    skip_0:
    // 0x08001F84: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x08001F88: b           L_08001F94
    // 0x08001F8C: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
        goto L_08001F94;
    // 0x08001F8C: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    // 0x08001F90: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
L_08001F94:
    // 0x08001F94: c.lt.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl < ctx->f12.fl;
    // 0x08001F98: nop

    // 0x08001F9C: bc1fl       L_08001FC0
    if (!c1cs) {
        // 0x08001FA0: lw          $t9, 0x60($a0)
        ctx->r25 = MEM_W(ctx->r4, 0X60);
            goto L_08001FC0;
    }
    goto skip_1;
    // 0x08001FA0: lw          $t9, 0x60($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X60);
    skip_1:
    // 0x08001FA4: lw          $t7, 0x60($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X60);
    // 0x08001FA8: lui         $at, 0x7FFF
    ctx->r1 = S32(0X7FFF << 16);
    // 0x08001FAC: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x08001FB0: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x08001FB4: b           L_08001FCC
    // 0x08001FB8: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
        goto L_08001FCC;
    // 0x08001FB8: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
    // 0x08001FBC: lw          $t9, 0x60($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X60);
L_08001FC0:
    // 0x08001FC0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08001FC4: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x08001FC8: sw          $t0, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r8;
L_08001FCC:
    // 0x08001FCC: lw          $t1, -0x39FC($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X39FC);
    // 0x08001FD0: lw          $t2, 0xA0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0XA0);
    // 0x08001FD4: bnel        $a1, $t2, L_08002000
    if (ctx->r5 != ctx->r10) {
        // 0x08001FD8: lw          $v0, 0xE8($a0)
        ctx->r2 = MEM_W(ctx->r4, 0XE8);
            goto L_08002000;
    }
    goto skip_2;
    // 0x08001FD8: lw          $v0, 0xE8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XE8);
    skip_2:
    // 0x08001FDC: lw          $t4, 0xE8($a0)
    ctx->r12 = MEM_W(ctx->r4, 0XE8);
    // 0x08001FE0: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x08001FE4: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(31, 0X542C) << 16);
    // 0x08001FE8: sb          $t3, 0xEC($t4)
    MEM_B(0XEC, ctx->r12) = ctx->r11;
    // 0x08001FEC: lw          $t5, 0xE8($a0)
    ctx->r13 = MEM_W(ctx->r4, 0XE8);
    // 0x08001FF0: lwc1        $f6, 0x542C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(31, 0X542C));
    // 0x08001FF4: b           L_0800200C
    // 0x08001FF8: swc1        $f6, 0xD0($t5)
    MEM_W(0XD0, ctx->r13) = ctx->f6.u32l;
        goto L_0800200C;
    // 0x08001FF8: swc1        $f6, 0xD0($t5)
    MEM_W(0XD0, ctx->r13) = ctx->f6.u32l;
    // 0x08001FFC: lw          $v0, 0xE8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XE8);
L_08002000:
    // 0x08002000: lbu         $t6, 0xEC($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0XEC);
    // 0x08002004: andi        $t7, $t6, 0xFFFE
    ctx->r15 = ctx->r14 & 0XFFFE;
    // 0x08002008: sb          $t7, 0xEC($v0)
    MEM_B(0XEC, ctx->r2) = ctx->r15;
L_0800200C:
    // 0x0800200C: lw          $v0, 0xE8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XE8);
    // 0x08002010: lbu         $t8, 0xEC($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0XEC);
    // 0x08002014: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x08002018: sltiu       $at, $t9, 0x20
    ctx->r1 = ctx->r25 < 0X20 ? 1 : 0;
    // 0x0800201C: beq         $at, $zero, L_08002090
    if (ctx->r1 == 0) {
        // 0x08002020: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_08002090;
    }
    // 0x08002020: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x08002024: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(31, 0X5430) << 16);
    // 0x08002028: addu        $at, $at, $t9
    gpr jr_addend_08002030 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x0800202C: lw          $t9, 0x5430($at)
    ctx->r25 = ADD32(ctx->r1, (int16_t)RELOC_LO16(31, 0X5430));
    // 0x08002030: jr          $t9
    // 0x08002034: nop

    switch (jr_addend_08002030 >> 2) {
        case 0: goto L_08002038; break;
        case 1: goto L_08002038; break;
        case 2: goto L_08002090; break;
        case 3: goto L_08002038; break;
        case 4: goto L_08002090; break;
        case 5: goto L_08002090; break;
        case 6: goto L_08002090; break;
        case 7: goto L_08002064; break;
        case 8: goto L_08002090; break;
        case 9: goto L_08002090; break;
        case 10: goto L_08002090; break;
        case 11: goto L_08002090; break;
        case 12: goto L_08002090; break;
        case 13: goto L_08002090; break;
        case 14: goto L_08002090; break;
        case 15: goto L_08002064; break;
        case 16: goto L_08002090; break;
        case 17: goto L_08002090; break;
        case 18: goto L_08002090; break;
        case 19: goto L_08002090; break;
        case 20: goto L_08002090; break;
        case 21: goto L_08002090; break;
        case 22: goto L_08002090; break;
        case 23: goto L_08002090; break;
        case 24: goto L_08002090; break;
        case 25: goto L_08002090; break;
        case 26: goto L_08002090; break;
        case 27: goto L_08002090; break;
        case 28: goto L_08002090; break;
        case 29: goto L_08002090; break;
        case 30: goto L_08002090; break;
        case 31: goto L_08002064; break;
        default: switch_error(__func__, 0x08002030, 0x08005430);
    }
    // 0x08002034: nop

L_08002038:
    // 0x08002038: lwc1        $f8, 0xC($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0XC);
    // 0x0800203C: lwc1        $f10, 0xD0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XD0);
    // 0x08002040: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x08002044: swc1        $f12, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f12.u32l;
    // 0x08002048: lwc1        $f0, 0xE0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XE0);
    // 0x0800204C: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x08002050: nop

    // 0x08002054: bc1f        L_080020C4
    if (!c1cs) {
        // 0x08002058: nop
    
            goto L_080020C4;
    }
    // 0x08002058: nop

    // 0x0800205C: jr          $ra
    // 0x08002060: swc1        $f0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f0.u32l;
    TRACE_RETURN()
    return;
    // 0x08002060: swc1        $f0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f0.u32l;
L_08002064:
    // 0x08002064: lwc1        $f16, 0xC($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0XC);
    // 0x08002068: lwc1        $f18, 0xD0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0XD0);
    // 0x0800206C: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x08002070: swc1        $f12, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f12.u32l;
    // 0x08002074: lwc1        $f0, 0xDC($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XDC);
    // 0x08002078: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x0800207C: nop

    // 0x08002080: bc1f        L_080020C4
    if (!c1cs) {
        // 0x08002084: nop
    
            goto L_080020C4;
    }
    // 0x08002084: nop

    // 0x08002088: jr          $ra
    // 0x0800208C: swc1        $f0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f0.u32l;
    TRACE_RETURN()
    return;
    // 0x0800208C: swc1        $f0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f0.u32l;
L_08002090:
    // 0x08002090: lwc1        $f4, 0xC($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0XC);
    // 0x08002094: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(31, 0X54B0) << 16);
    // 0x08002098: ldc1        $f8, 0x54B0($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(31, 0X54B0));
    // 0x0800209C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x080020A0: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x080020A4: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    // 0x080020A8: swc1        $f12, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f12.u32l;
    // 0x080020AC: lwc1        $f0, 0xE0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XE0);
    // 0x080020B0: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x080020B4: nop

    // 0x080020B8: bc1f        L_080020C4
    if (!c1cs) {
        // 0x080020BC: nop
    
            goto L_080020C4;
    }
    // 0x080020BC: nop

    // 0x080020C0: swc1        $f0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f0.u32l;
L_080020C4:
    // 0x080020C4: jr          $ra
    // 0x080020C8: nop

    TRACE_RETURN()
    return;
    // 0x080020C8: nop

;}
RECOMP_FUNC void func_08001304_6EA454(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001304: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001308: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800130C: lui         $t6, 0x8000
    ctx->r14 = S32(0X8000 << 16);
    // 0x08001310: ori         $t6, $t6, 0x20
    ctx->r14 = ctx->r14 | 0X20;
    // 0x08001314: addiu       $t7, $zero, 0x4000
    ctx->r15 = ADD32(0, 0X4000);
    // 0x08001318: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800131C: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x08001320: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08001324: sw          $t7, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r15;
    // 0x08001328: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x0800132C: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x08001330: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001334: jalr        $t9
    // 0x08001338: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001338: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x0800133C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x08001340: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x08001344: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x08001348: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x0800134C: sb          $zero, 0x6C($a2)
    MEM_B(0X6C, ctx->r6) = 0;
    // 0x08001350: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x08001354: swc1        $f0, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->f0.u32l;
    // 0x08001358: swc1        $f0, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->f0.u32l;
    // 0x0800135C: swc1        $f0, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->f0.u32l;
    // 0x08001360: lw          $t8, 0xD0($a2)
    ctx->r24 = MEM_W(ctx->r6, 0XD0);
    // 0x08001364: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x08001368: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x0800136C: lw          $t0, 0x18($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X18);
    // 0x08001370: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001374: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x08001378: lwc1        $f4, 0xC($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0XC);
    // 0x0800137C: addiu       $t2, $zero, 0x12C
    ctx->r10 = ADD32(0, 0X12C);
    // 0x08001380: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001384: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08001388: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(31, 0X13B8) << 16);
    // 0x0800138C: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x08001390: addiu       $a0, $a0, 0x13B8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0X13B8));
    // 0x08001394: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x08001398: swc1        $f16, 0xC($a3)
    MEM_W(0XC, ctx->r7) = ctx->f16.u32l;
    // 0x0800139C: sb          $t1, 0xE0($a2)
    MEM_B(0XE0, ctx->r6) = ctx->r9;
    // 0x080013A0: jalr        $t9
    // 0x080013A4: sh          $t2, 0x8A($a2)
    MEM_H(0X8A, ctx->r6) = ctx->r10;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080013A4: sh          $t2, 0x8A($a2)
    MEM_H(0X8A, ctx->r6) = ctx->r10;
    after_1:
    // 0x080013A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080013AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080013B0: jr          $ra
    // 0x080013B4: nop

    TRACE_RETURN()
    return;
    // 0x080013B4: nop

;}
RECOMP_FUNC void func_080041F4_6ED344(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080041F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080041F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080041FC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08004200: lui         $at, 0xC325
    ctx->r1 = S32(0XC325 << 16);
    // 0x08004204: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08004208: lwc1        $f0, 0x8($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X8);
    // 0x0800420C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x08004210: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x08004214: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x08004218: nop

    // 0x0800421C: bc1fl       L_08004258
    if (!c1cs) {
        // 0x08004220: lw          $t6, 0xD0($a3)
        ctx->r14 = MEM_W(ctx->r7, 0XD0);
            goto L_08004258;
    }
    goto skip_0;
    // 0x08004220: lw          $t6, 0xD0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0XD0);
    skip_0:
    // 0x08004224: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x08004228: lwc1        $f8, 0x10($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X10);
    // 0x0800422C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004230: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08004234: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x08004238: nop

    // 0x0800423C: bc1fl       L_08004258
    if (!c1cs) {
        // 0x08004240: lw          $t6, 0xD0($a3)
        ctx->r14 = MEM_W(ctx->r7, 0XD0);
            goto L_08004258;
    }
    goto skip_1;
    // 0x08004240: lw          $t6, 0xD0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0XD0);
    skip_1:
    // 0x08004244: jalr        $t9
    // 0x08004248: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004248: nop

    after_0:
    // 0x0800424C: b           L_080042E8
    // 0x08004250: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_080042E8;
    // 0x08004250: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08004254: lw          $t6, 0xD0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0XD0);
L_08004258:
    // 0x08004258: lwc1        $f18, 0x10($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X10);
    // 0x0800425C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004260: lwc1        $f10, 0xE4($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0XE4);
    // 0x08004264: addiu       $t9, $t9, -0x4BDC
    ctx->r25 = ADD32(ctx->r25, -0X4BDC);
    // 0x08004268: lhu         $a1, 0x16($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X16);
    // 0x0800426C: add.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x08004270: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x08004274: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x08004278: swc1        $f16, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f16.u32l;
    // 0x0800427C: lw          $t7, 0xD0($a3)
    ctx->r15 = MEM_W(ctx->r7, 0XD0);
    // 0x08004280: lwc1        $f4, 0xE8($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0XE8);
    // 0x08004284: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x08004288: swc1        $f6, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f6.u32l;
    // 0x0800428C: jalr        $t9
    // 0x08004290: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004290: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_1:
    // 0x08004294: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x08004298: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0800429C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(31, 0X42F8) << 16);
    // 0x080042A0: lhu         $v0, 0x8A($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X8A);
    // 0x080042A4: addiu       $a0, $a0, 0x42F8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0X42F8));
    // 0x080042A8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080042AC: slti        $v1, $v0, 0xA
    ctx->r3 = SIGNED(ctx->r2) < 0XA ? 1 : 0;
    // 0x080042B0: addiu       $t8, $v0, 0x1
    ctx->r24 = ADD32(ctx->r2, 0X1);
    // 0x080042B4: bne         $v1, $zero, L_080042E4
    if (ctx->r3 != 0) {
        // 0x080042B8: sh          $t8, 0x8A($a3)
        MEM_H(0X8A, ctx->r7) = ctx->r24;
            goto L_080042E4;
    }
    // 0x080042B8: sh          $t8, 0x8A($a3)
    MEM_H(0X8A, ctx->r7) = ctx->r24;
    // 0x080042BC: lhu         $t0, 0x16($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X16);
    // 0x080042C0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080042C4: sh          $zero, 0x8A($a3)
    MEM_H(0X8A, ctx->r7) = 0;
    // 0x080042C8: addiu       $t1, $t0, 0x200
    ctx->r9 = ADD32(ctx->r8, 0X200);
    // 0x080042CC: andi        $t2, $t1, 0x3FF
    ctx->r10 = ctx->r9 & 0X3FF;
    // 0x080042D0: sh          $t2, 0xEC($a3)
    MEM_H(0XEC, ctx->r7) = ctx->r10;
    // 0x080042D4: swc1        $f0, 0x78($a3)
    MEM_W(0X78, ctx->r7) = ctx->f0.u32l;
    // 0x080042D8: swc1        $f0, 0x7C($a3)
    MEM_W(0X7C, ctx->r7) = ctx->f0.u32l;
    // 0x080042DC: jalr        $t9
    // 0x080042E0: swc1        $f0, 0x80($a3)
    MEM_W(0X80, ctx->r7) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080042E0: swc1        $f0, 0x80($a3)
    MEM_W(0X80, ctx->r7) = ctx->f0.u32l;
    after_2:
L_080042E4:
    // 0x080042E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080042E8:
    // 0x080042E8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080042EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080042F0: jr          $ra
    // 0x080042F4: nop

    TRACE_RETURN()
    return;
    // 0x080042F4: nop

;}
RECOMP_FUNC void func_08000210_6E9360(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000210: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08000214: jr          $ra
    // 0x08000218: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08000218: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08004408_6ED558(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004408: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800440C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08004410: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08004414: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x08004418: lui         $t6, 0x2E
    ctx->r14 = S32(0X2E << 16);
    // 0x0800441C: sb          $t9, 0x8E($a0)
    MEM_B(0X8E, ctx->r4) = ctx->r25;
    // 0x08004420: ori         $t6, $t6, 0xEE1
    ctx->r14 = ctx->r14 | 0XEE1;
    // 0x08004424: ori         $t7, $zero, 0x8000
    ctx->r15 = 0 | 0X8000;
    // 0x08004428: addiu       $t8, $zero, 0x139
    ctx->r24 = ADD32(0, 0X139);
    // 0x0800442C: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x08004430: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x08004434: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004438: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x0800443C: sw          $t7, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r15;
    // 0x08004440: sh          $t8, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r24;
    // 0x08004444: sb          $t0, 0x8F($a0)
    MEM_B(0X8F, ctx->r4) = ctx->r8;
    // 0x08004448: sb          $zero, 0x75($a0)
    MEM_B(0X75, ctx->r4) = 0;
    // 0x0800444C: sb          $t1, 0x4C($a0)
    MEM_B(0X4C, ctx->r4) = ctx->r9;
    // 0x08004450: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x08004454: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08004458: addiu       $a1, $zero, 0x2D
    ctx->r5 = ADD32(0, 0X2D);
    // 0x0800445C: addiu       $a2, $zero, 0x8C
    ctx->r6 = ADD32(0, 0X8C);
    // 0x08004460: jalr        $t9
    // 0x08004464: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004464: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08004468: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800446C: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08004470: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08004474: addiu       $a1, $zero, 0x190
    ctx->r5 = ADD32(0, 0X190);
    // 0x08004478: addiu       $a2, $zero, 0x46
    ctx->r6 = ADD32(0, 0X46);
    // 0x0800447C: jalr        $t9
    // 0x08004480: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004480: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x08004484: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08004488: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800448C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x08004490: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x08004494: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08004498: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x0800449C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x080044A0: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x080044A4: sb          $t2, 0x98($a0)
    MEM_B(0X98, ctx->r4) = ctx->r10;
    // 0x080044A8: sb          $v0, 0x99($a0)
    MEM_B(0X99, ctx->r4) = ctx->r2;
    // 0x080044AC: sb          $v0, 0x9A($a0)
    MEM_B(0X9A, ctx->r4) = ctx->r2;
    // 0x080044B0: jalr        $t9
    // 0x080044B4: sb          $zero, 0x9B($a0)
    MEM_B(0X9B, ctx->r4) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080044B4: sb          $zero, 0x9B($a0)
    MEM_B(0X9B, ctx->r4) = 0;
    after_2:
    // 0x080044B8: lui         $at, 0x3E00
    ctx->r1 = S32(0X3E00 << 16);
    // 0x080044BC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x080044C0: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x080044C4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080044C8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080044CC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(31, 0X44F4) << 16);
    // 0x080044D0: addiu       $a0, $a0, 0x44F4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0X44F4));
    // 0x080044D4: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x080044D8: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x080044DC: jalr        $t9
    // 0x080044E0: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080044E0: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    after_3:
    // 0x080044E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080044E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080044EC: jr          $ra
    // 0x080044F0: nop

    TRACE_RETURN()
    return;
    // 0x080044F0: nop

;}
RECOMP_FUNC void func_080046F8_6ED848(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080046F8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080046FC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08004700: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08004704: lui         $at, 0xC325
    ctx->r1 = S32(0XC325 << 16);
    // 0x08004708: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x0800470C: lwc1        $f0, 0x8($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X8);
    // 0x08004710: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x08004714: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x08004718: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x0800471C: nop

    // 0x08004720: bc1fl       L_0800475C
    if (!c1cs) {
        // 0x08004724: lw          $t6, 0xD0($a3)
        ctx->r14 = MEM_W(ctx->r7, 0XD0);
            goto L_0800475C;
    }
    goto skip_0;
    // 0x08004724: lw          $t6, 0xD0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0XD0);
    skip_0:
    // 0x08004728: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x0800472C: lwc1        $f8, 0x10($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X10);
    // 0x08004730: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004734: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08004738: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x0800473C: nop

    // 0x08004740: bc1fl       L_0800475C
    if (!c1cs) {
        // 0x08004744: lw          $t6, 0xD0($a3)
        ctx->r14 = MEM_W(ctx->r7, 0XD0);
            goto L_0800475C;
    }
    goto skip_1;
    // 0x08004744: lw          $t6, 0xD0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0XD0);
    skip_1:
    // 0x08004748: jalr        $t9
    // 0x0800474C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800474C: nop

    after_0:
    // 0x08004750: b           L_080047EC
    // 0x08004754: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_080047EC;
    // 0x08004754: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08004758: lw          $t6, 0xD0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0XD0);
L_0800475C:
    // 0x0800475C: lwc1        $f18, 0x10($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X10);
    // 0x08004760: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004764: lwc1        $f10, 0xE4($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0XE4);
    // 0x08004768: addiu       $t9, $t9, -0x4BDC
    ctx->r25 = ADD32(ctx->r25, -0X4BDC);
    // 0x0800476C: lhu         $a1, 0x16($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X16);
    // 0x08004770: add.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x08004774: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x08004778: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x0800477C: swc1        $f16, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f16.u32l;
    // 0x08004780: lw          $t7, 0xD0($a3)
    ctx->r15 = MEM_W(ctx->r7, 0XD0);
    // 0x08004784: lwc1        $f4, 0xE8($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0XE8);
    // 0x08004788: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x0800478C: swc1        $f6, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f6.u32l;
    // 0x08004790: jalr        $t9
    // 0x08004794: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004794: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_1:
    // 0x08004798: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x0800479C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x080047A0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(31, 0X47FC) << 16);
    // 0x080047A4: lhu         $v0, 0x8A($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X8A);
    // 0x080047A8: addiu       $a0, $a0, 0x47FC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0X47FC));
    // 0x080047AC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080047B0: slti        $v1, $v0, 0xA
    ctx->r3 = SIGNED(ctx->r2) < 0XA ? 1 : 0;
    // 0x080047B4: addiu       $t8, $v0, 0x1
    ctx->r24 = ADD32(ctx->r2, 0X1);
    // 0x080047B8: bne         $v1, $zero, L_080047E8
    if (ctx->r3 != 0) {
        // 0x080047BC: sh          $t8, 0x8A($a3)
        MEM_H(0X8A, ctx->r7) = ctx->r24;
            goto L_080047E8;
    }
    // 0x080047BC: sh          $t8, 0x8A($a3)
    MEM_H(0X8A, ctx->r7) = ctx->r24;
    // 0x080047C0: lhu         $t0, 0x16($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X16);
    // 0x080047C4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080047C8: sh          $zero, 0x8A($a3)
    MEM_H(0X8A, ctx->r7) = 0;
    // 0x080047CC: addiu       $t1, $t0, 0x200
    ctx->r9 = ADD32(ctx->r8, 0X200);
    // 0x080047D0: andi        $t2, $t1, 0x3FF
    ctx->r10 = ctx->r9 & 0X3FF;
    // 0x080047D4: sh          $t2, 0xEC($a3)
    MEM_H(0XEC, ctx->r7) = ctx->r10;
    // 0x080047D8: swc1        $f0, 0x78($a3)
    MEM_W(0X78, ctx->r7) = ctx->f0.u32l;
    // 0x080047DC: swc1        $f0, 0x7C($a3)
    MEM_W(0X7C, ctx->r7) = ctx->f0.u32l;
    // 0x080047E0: jalr        $t9
    // 0x080047E4: swc1        $f0, 0x80($a3)
    MEM_W(0X80, ctx->r7) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080047E4: swc1        $f0, 0x80($a3)
    MEM_W(0X80, ctx->r7) = ctx->f0.u32l;
    after_2:
L_080047E8:
    // 0x080047E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080047EC:
    // 0x080047EC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080047F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080047F4: jr          $ra
    // 0x080047F8: nop

    TRACE_RETURN()
    return;
    // 0x080047F8: nop

;}
RECOMP_FUNC void func_080012F8_6EA448(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080012F8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x080012FC: jr          $ra
    // 0x08001300: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08001300: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08004C18_6EDD68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004C18: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08004C1C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08004C20: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08004C24: lbu         $v0, 0xDC($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XDC);
    // 0x08004C28: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x08004C2C: bnel        $v0, $zero, L_08004C68
    if (ctx->r2 != 0) {
        // 0x08004C30: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_08004C68;
    }
    goto skip_0;
    // 0x08004C30: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    skip_0:
    // 0x08004C34: lw          $t6, -0x39FC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39FC);
    // 0x08004C38: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x08004C3C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x08004C40: lbu         $t7, 0x4C($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X4C);
    // 0x08004C44: bnel        $t7, $at, L_08004C68
    if (ctx->r15 != ctx->r1) {
        // 0x08004C48: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_08004C68;
    }
    goto skip_1;
    // 0x08004C48: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    skip_1:
    // 0x08004C4C: lw          $t8, 0x60($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X60);
    // 0x08004C50: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08004C54: sb          $t0, 0xDC($a0)
    MEM_B(0XDC, ctx->r4) = ctx->r8;
    // 0x08004C58: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x08004C5C: sw          $t9, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r25;
    // 0x08004C60: andi        $v0, $t0, 0xFF
    ctx->r2 = ctx->r8 & 0XFF;
    // 0x08004C64: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_08004C68:
    // 0x08004C68: bnel        $v0, $at, L_08004CD8
    if (ctx->r2 != ctx->r1) {
        // 0x08004C6C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_08004CD8;
    }
    goto skip_2;
    // 0x08004C6C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x08004C70: lbu         $v0, 0xDD($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XDD);
    // 0x08004C74: slti        $at, $v0, 0x80
    ctx->r1 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
    // 0x08004C78: beq         $at, $zero, L_08004CD4
    if (ctx->r1 == 0) {
        // 0x08004C7C: addiu       $v1, $v0, 0x8
        ctx->r3 = ADD32(ctx->r2, 0X8);
            goto L_08004CD4;
    }
    // 0x08004C7C: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x08004C80: slti        $at, $v1, 0x80
    ctx->r1 = SIGNED(ctx->r3) < 0X80 ? 1 : 0;
    // 0x08004C84: beq         $at, $zero, L_08004CB4
    if (ctx->r1 == 0) {
        // 0x08004C88: addiu       $t1, $zero, 0xA0
        ctx->r9 = ADD32(0, 0XA0);
            goto L_08004CB4;
    }
    // 0x08004C88: addiu       $t1, $zero, 0xA0
    ctx->r9 = ADD32(0, 0XA0);
    // 0x08004C8C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004C90: sb          $v1, 0xDD($a0)
    MEM_B(0XDD, ctx->r4) = ctx->r3;
    // 0x08004C94: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08004C98: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08004C9C: andi        $a1, $v1, 0xFF
    ctx->r5 = ctx->r3 & 0XFF;
    // 0x08004CA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08004CA4: jalr        $t9
    // 0x08004CA8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004CA8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08004CAC: b           L_08004CD8
    // 0x08004CB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08004CD8;
    // 0x08004CB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08004CB4:
    // 0x08004CB4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004CB8: sb          $t1, 0xDD($a0)
    MEM_B(0XDD, ctx->r4) = ctx->r9;
    // 0x08004CBC: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08004CC0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08004CC4: andi        $a1, $t1, 0xFF
    ctx->r5 = ctx->r9 & 0XFF;
    // 0x08004CC8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08004CCC: jalr        $t9
    // 0x08004CD0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004CD0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
L_08004CD4:
    // 0x08004CD4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08004CD8:
    // 0x08004CD8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08004CDC: jr          $ra
    // 0x08004CE0: nop

    TRACE_RETURN()
    return;
    // 0x08004CE0: nop

;}
RECOMP_FUNC void func_0800181C_6EA96C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800181C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001820: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001824: lui         $t6, 0x8000
    ctx->r14 = S32(0X8000 << 16);
    // 0x08001828: ori         $t6, $t6, 0x220
    ctx->r14 = ctx->r14 | 0X220;
    // 0x0800182C: addiu       $t7, $zero, 0x4000
    ctx->r15 = ADD32(0, 0X4000);
    // 0x08001830: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001834: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x08001838: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x0800183C: sw          $t7, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r15;
    // 0x08001840: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08001844: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x08001848: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x0800184C: jalr        $t9
    // 0x08001850: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001850: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x08001854: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08001858: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x0800185C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(31, 0X5420) << 16);
    // 0x08001860: lwc1        $f0, 0x5420($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(31, 0X5420));
    // 0x08001864: sb          $zero, 0x6C($a0)
    MEM_B(0X6C, ctx->r4) = 0;
    // 0x08001868: lwc1        $f4, 0x8($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X8);
    // 0x0800186C: swc1        $f0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f0.u32l;
    // 0x08001870: swc1        $f0, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f0.u32l;
    // 0x08001874: swc1        $f0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f0.u32l;
    // 0x08001878: lw          $v0, 0xD0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD0);
    // 0x0800187C: swc1        $f4, 0xDC($a0)
    MEM_W(0XDC, ctx->r4) = ctx->f4.u32l;
    // 0x08001880: lwc1        $f6, 0x10($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X10);
    // 0x08001884: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001888: beq         $v0, $zero, L_080018B8
    if (ctx->r2 == 0) {
        // 0x0800188C: swc1        $f6, 0xE0($a0)
        MEM_W(0XE0, ctx->r4) = ctx->f6.u32l;
            goto L_080018B8;
    }
    // 0x0800188C: swc1        $f6, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->f6.u32l;
    // 0x08001890: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08001894: beq         $v0, $at, L_080018C0
    if (ctx->r2 == ctx->r1) {
        // 0x08001898: addiu       $t8, $zero, 0x200
        ctx->r24 = ADD32(0, 0X200);
            goto L_080018C0;
    }
    // 0x08001898: addiu       $t8, $zero, 0x200
    ctx->r24 = ADD32(0, 0X200);
    // 0x0800189C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x080018A0: beq         $v0, $at, L_080018B8
    if (ctx->r2 == ctx->r1) {
        // 0x080018A4: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_080018B8;
    }
    // 0x080018A4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x080018A8: beql        $v0, $at, L_080018C4
    if (ctx->r2 == ctx->r1) {
        // 0x080018AC: sh          $t8, 0xE4($a0)
        MEM_H(0XE4, ctx->r4) = ctx->r24;
            goto L_080018C4;
    }
    goto skip_0;
    // 0x080018AC: sh          $t8, 0xE4($a0)
    MEM_H(0XE4, ctx->r4) = ctx->r24;
    skip_0:
    // 0x080018B0: b           L_080018C4
    // 0x080018B4: nop

        goto L_080018C4;
    // 0x080018B4: nop

L_080018B8:
    // 0x080018B8: b           L_080018C4
    // 0x080018BC: sh          $zero, 0xE4($a0)
    MEM_H(0XE4, ctx->r4) = 0;
        goto L_080018C4;
    // 0x080018BC: sh          $zero, 0xE4($a0)
    MEM_H(0XE4, ctx->r4) = 0;
L_080018C0:
    // 0x080018C0: sh          $t8, 0xE4($a0)
    MEM_H(0XE4, ctx->r4) = ctx->r24;
L_080018C4:
    // 0x080018C4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(31, 0X18E4) << 16);
    // 0x080018C8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080018CC: jalr        $t9
    // 0x080018D0: addiu       $a0, $a0, 0x18E4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0X18E4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080018D0: addiu       $a0, $a0, 0x18E4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0X18E4));
    after_1:
    // 0x080018D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080018D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080018DC: jr          $ra
    // 0x080018E0: nop

    TRACE_RETURN()
    return;
    // 0x080018E0: nop

;}
RECOMP_FUNC void func_08003628_6EC778(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003628: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800362C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003630: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x08003634: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(31, 0X57C8) << 16);
    // 0x08003638: ldc1        $f8, 0x57C8($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(31, 0X57C8));
    // 0x0800363C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08003640: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x08003644: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x08003648: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x0800364C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003650: addiu       $t6, $zero, 0x200
    ctx->r14 = ADD32(0, 0X200);
    // 0x08003654: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x08003658: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800365C: swc1        $f16, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f16.u32l;
    // 0x08003660: lwc1        $f18, 0x8($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X8);
    // 0x08003664: c.le.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl <= ctx->f18.fl;
    // 0x08003668: nop

    // 0x0800366C: bc1fl       L_08003688
    if (!c1cs) {
        // 0x08003670: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08003688;
    }
    goto skip_0;
    // 0x08003670: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08003674: sh          $t6, 0xEE($a0)
    MEM_H(0XEE, ctx->r4) = ctx->r14;
    // 0x08003678: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(31, 0X3694) << 16);
    // 0x0800367C: jalr        $t9
    // 0x08003680: addiu       $a0, $a0, 0x3694
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0X3694));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003680: addiu       $a0, $a0, 0x3694
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0X3694));
    after_0:
    // 0x08003684: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08003688:
    // 0x08003688: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800368C: jr          $ra
    // 0x08003690: nop

    TRACE_RETURN()
    return;
    // 0x08003690: nop

;}
RECOMP_FUNC void func_080042F8_6ED448(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080042F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080042FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08004300: lui         $at, 0xC325
    ctx->r1 = S32(0XC325 << 16);
    // 0x08004304: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08004308: lwc1        $f0, 0x8($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X8);
    // 0x0800430C: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x08004310: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x08004314: nop

    // 0x08004318: bc1fl       L_08004354
    if (!c1cs) {
        // 0x0800431C: lw          $t6, 0xD0($a0)
        ctx->r14 = MEM_W(ctx->r4, 0XD0);
            goto L_08004354;
    }
    goto skip_0;
    // 0x0800431C: lw          $t6, 0xD0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD0);
    skip_0:
    // 0x08004320: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x08004324: lwc1        $f8, 0x10($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X10);
    // 0x08004328: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800432C: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08004330: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x08004334: nop

    // 0x08004338: bc1fl       L_08004354
    if (!c1cs) {
        // 0x0800433C: lw          $t6, 0xD0($a0)
        ctx->r14 = MEM_W(ctx->r4, 0XD0);
            goto L_08004354;
    }
    goto skip_1;
    // 0x0800433C: lw          $t6, 0xD0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD0);
    skip_1:
    // 0x08004340: jalr        $t9
    // 0x08004344: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004344: nop

    after_0:
    // 0x08004348: b           L_080043FC
    // 0x0800434C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_080043FC;
    // 0x0800434C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08004350: lw          $t6, 0xD0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD0);
L_08004354:
    // 0x08004354: lwc1        $f18, 0x10($a3)
    ctx->f18.u32l = MEM_W(ctx->r7, 0X10);
    // 0x08004358: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800435C: lwc1        $f10, 0xE4($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0XE4);
    // 0x08004360: addiu       $t9, $t9, -0x2658
    ctx->r25 = ADD32(ctx->r25, -0X2658);
    // 0x08004364: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x08004368: add.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x0800436C: swc1        $f16, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f16.u32l;
    // 0x08004370: lw          $t7, 0xD0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XD0);
    // 0x08004374: lwc1        $f4, 0xE8($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0XE8);
    // 0x08004378: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x0800437C: swc1        $f6, 0x10($a3)
    MEM_W(0X10, ctx->r7) = ctx->f6.u32l;
    // 0x08004380: lhu         $a1, 0xEC($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0XEC);
    // 0x08004384: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x08004388: jalr        $t9
    // 0x0800438C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800438C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x08004390: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08004394: beq         $v0, $zero, L_080043F8
    if (ctx->r2 == 0) {
        // 0x08004398: lw          $a3, 0x1C($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X1C);
            goto L_080043F8;
    }
    // 0x08004398: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x0800439C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080043A0: addiu       $t9, $t9, -0x4BDC
    ctx->r25 = ADD32(ctx->r25, -0X4BDC);
    // 0x080043A4: lhu         $a1, 0x16($a3)
    ctx->r5 = MEM_HU(ctx->r7, 0X16);
    // 0x080043A8: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x080043AC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080043B0: jalr        $t9
    // 0x080043B4: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080043B4: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    after_2:
    // 0x080043B8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x080043BC: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x080043C0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x080043C4: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x080043C8: slti        $v1, $v0, 0x15
    ctx->r3 = SIGNED(ctx->r2) < 0X15 ? 1 : 0;
    // 0x080043CC: addiu       $t8, $v0, 0x1
    ctx->r24 = ADD32(ctx->r2, 0X1);
    // 0x080043D0: bne         $v1, $zero, L_080043F8
    if (ctx->r3 != 0) {
        // 0x080043D4: sh          $t8, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r24;
            goto L_080043F8;
    }
    // 0x080043D4: sh          $t8, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r24;
    // 0x080043D8: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    // 0x080043DC: swc1        $f0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f0.u32l;
    // 0x080043E0: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x080043E4: lhu         $t0, 0x16($a3)
    ctx->r8 = MEM_HU(ctx->r7, 0X16);
    // 0x080043E8: sh          $zero, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = 0;
    // 0x080043EC: addiu       $t1, $t0, 0x200
    ctx->r9 = ADD32(ctx->r8, 0X200);
    // 0x080043F0: andi        $t2, $t1, 0x3FF
    ctx->r10 = ctx->r9 & 0X3FF;
    // 0x080043F4: sh          $t2, 0xEC($a0)
    MEM_H(0XEC, ctx->r4) = ctx->r10;
L_080043F8:
    // 0x080043F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080043FC:
    // 0x080043FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08004400: jr          $ra
    // 0x08004404: nop

    TRACE_RETURN()
    return;
    // 0x08004404: nop

;}
RECOMP_FUNC void func_08003CF0_6ECE40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003CF0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08003CF4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08003CF8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08003CFC: lui         $at, 0xC325
    ctx->r1 = S32(0XC325 << 16);
    // 0x08003D00: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08003D04: lwc1        $f0, 0x8($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X8);
    // 0x08003D08: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x08003D0C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x08003D10: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x08003D14: nop

    // 0x08003D18: bc1fl       L_08003D54
    if (!c1cs) {
        // 0x08003D1C: lw          $t6, 0xD0($a3)
        ctx->r14 = MEM_W(ctx->r7, 0XD0);
            goto L_08003D54;
    }
    goto skip_0;
    // 0x08003D1C: lw          $t6, 0xD0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0XD0);
    skip_0:
    // 0x08003D20: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x08003D24: lwc1        $f8, 0x10($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X10);
    // 0x08003D28: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003D2C: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08003D30: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x08003D34: nop

    // 0x08003D38: bc1fl       L_08003D54
    if (!c1cs) {
        // 0x08003D3C: lw          $t6, 0xD0($a3)
        ctx->r14 = MEM_W(ctx->r7, 0XD0);
            goto L_08003D54;
    }
    goto skip_1;
    // 0x08003D3C: lw          $t6, 0xD0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0XD0);
    skip_1:
    // 0x08003D40: jalr        $t9
    // 0x08003D44: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003D44: nop

    after_0:
    // 0x08003D48: b           L_08003DE4
    // 0x08003D4C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08003DE4;
    // 0x08003D4C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08003D50: lw          $t6, 0xD0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0XD0);
L_08003D54:
    // 0x08003D54: lwc1        $f18, 0x10($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X10);
    // 0x08003D58: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003D5C: lwc1        $f10, 0xE4($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0XE4);
    // 0x08003D60: addiu       $t9, $t9, -0x4BDC
    ctx->r25 = ADD32(ctx->r25, -0X4BDC);
    // 0x08003D64: lhu         $a1, 0x16($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X16);
    // 0x08003D68: add.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x08003D6C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x08003D70: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x08003D74: swc1        $f16, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f16.u32l;
    // 0x08003D78: lw          $t7, 0xD0($a3)
    ctx->r15 = MEM_W(ctx->r7, 0XD0);
    // 0x08003D7C: lwc1        $f4, 0xE8($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0XE8);
    // 0x08003D80: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x08003D84: swc1        $f6, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f6.u32l;
    // 0x08003D88: jalr        $t9
    // 0x08003D8C: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003D8C: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_1:
    // 0x08003D90: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x08003D94: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08003D98: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(31, 0X3DF4) << 16);
    // 0x08003D9C: lhu         $v0, 0x8A($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X8A);
    // 0x08003DA0: addiu       $a0, $a0, 0x3DF4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0X3DF4));
    // 0x08003DA4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003DA8: slti        $v1, $v0, 0xA
    ctx->r3 = SIGNED(ctx->r2) < 0XA ? 1 : 0;
    // 0x08003DAC: addiu       $t8, $v0, 0x1
    ctx->r24 = ADD32(ctx->r2, 0X1);
    // 0x08003DB0: bne         $v1, $zero, L_08003DE0
    if (ctx->r3 != 0) {
        // 0x08003DB4: sh          $t8, 0x8A($a3)
        MEM_H(0X8A, ctx->r7) = ctx->r24;
            goto L_08003DE0;
    }
    // 0x08003DB4: sh          $t8, 0x8A($a3)
    MEM_H(0X8A, ctx->r7) = ctx->r24;
    // 0x08003DB8: lhu         $t0, 0x16($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X16);
    // 0x08003DBC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003DC0: sh          $zero, 0x8A($a3)
    MEM_H(0X8A, ctx->r7) = 0;
    // 0x08003DC4: addiu       $t1, $t0, 0x200
    ctx->r9 = ADD32(ctx->r8, 0X200);
    // 0x08003DC8: andi        $t2, $t1, 0x3FF
    ctx->r10 = ctx->r9 & 0X3FF;
    // 0x08003DCC: sh          $t2, 0xEC($a3)
    MEM_H(0XEC, ctx->r7) = ctx->r10;
    // 0x08003DD0: swc1        $f0, 0x78($a3)
    MEM_W(0X78, ctx->r7) = ctx->f0.u32l;
    // 0x08003DD4: swc1        $f0, 0x7C($a3)
    MEM_W(0X7C, ctx->r7) = ctx->f0.u32l;
    // 0x08003DD8: jalr        $t9
    // 0x08003DDC: swc1        $f0, 0x80($a3)
    MEM_W(0X80, ctx->r7) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003DDC: swc1        $f0, 0x80($a3)
    MEM_W(0X80, ctx->r7) = ctx->f0.u32l;
    after_2:
L_08003DE0:
    // 0x08003DE0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08003DE4:
    // 0x08003DE4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08003DE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08003DEC: jr          $ra
    // 0x08003DF0: nop

    TRACE_RETURN()
    return;
    // 0x08003DF0: nop

;}
RECOMP_FUNC void func_08001CFC_6EAE4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001CFC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x08001D00: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x08001D04: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x08001D08: lui         $s1, 0x8021
    ctx->r17 = S32(0X8021 << 16);
    // 0x08001D0C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08001D10: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x08001D14: addiu       $s1, $s1, 0x71A8
    ctx->r17 = ADD32(ctx->r17, 0X71A8);
    // 0x08001D18: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(31, 0X1ECC) << 16);
    // 0x08001D1C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08001D20: addiu       $a1, $a1, 0x1ECC
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(31, 0X1ECC));
    // 0x08001D24: jalr        $s1
    // 0x08001D28: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_0;
    // 0x08001D28: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_0:
    // 0x08001D2C: beq         $v0, $zero, L_08001D58
    if (ctx->r2 == 0) {
        // 0x08001D30: addiu       $t6, $zero, 0x28
        ctx->r14 = ADD32(0, 0X28);
            goto L_08001D58;
    }
    // 0x08001D30: addiu       $t6, $zero, 0x28
    ctx->r14 = ADD32(0, 0X28);
    // 0x08001D34: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001D38: sh          $t6, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r14;
    // 0x08001D3C: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08001D40: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x08001D44: jalr        $t9
    // 0x08001D48: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001D48: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    after_1:
    // 0x08001D4C: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x08001D50: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x08001D54: sw          $s0, 0xE8($v1)
    MEM_W(0XE8, ctx->r3) = ctx->r16;
L_08001D58:
    // 0x08001D58: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(31, 0X20CC) << 16);
    // 0x08001D5C: addiu       $a1, $a1, 0x20CC
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(31, 0X20CC));
    // 0x08001D60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001D64: jalr        $s1
    // 0x08001D68: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_2;
    // 0x08001D68: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_2:
    // 0x08001D6C: beq         $v0, $zero, L_08001D98
    if (ctx->r2 == 0) {
        // 0x08001D70: addiu       $t7, $zero, 0x28
        ctx->r15 = ADD32(0, 0X28);
            goto L_08001D98;
    }
    // 0x08001D70: addiu       $t7, $zero, 0x28
    ctx->r15 = ADD32(0, 0X28);
    // 0x08001D74: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001D78: sh          $t7, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r15;
    // 0x08001D7C: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08001D80: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x08001D84: jalr        $t9
    // 0x08001D88: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001D88: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    after_3:
    // 0x08001D8C: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x08001D90: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x08001D94: sw          $s0, 0xE8($v1)
    MEM_W(0XE8, ctx->r3) = ctx->r16;
L_08001D98:
    // 0x08001D98: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(31, 0X2328) << 16);
    // 0x08001D9C: addiu       $a1, $a1, 0x2328
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(31, 0X2328));
    // 0x08001DA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001DA4: jalr        $s1
    // 0x08001DA8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_4;
    // 0x08001DA8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_4:
    // 0x08001DAC: beq         $v0, $zero, L_08001DD8
    if (ctx->r2 == 0) {
        // 0x08001DB0: addiu       $t8, $zero, 0x28
        ctx->r24 = ADD32(0, 0X28);
            goto L_08001DD8;
    }
    // 0x08001DB0: addiu       $t8, $zero, 0x28
    ctx->r24 = ADD32(0, 0X28);
    // 0x08001DB4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001DB8: sh          $t8, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r24;
    // 0x08001DBC: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08001DC0: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x08001DC4: jalr        $t9
    // 0x08001DC8: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08001DC8: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    after_5:
    // 0x08001DCC: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x08001DD0: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x08001DD4: sw          $s0, 0xE8($v1)
    MEM_W(0XE8, ctx->r3) = ctx->r16;
L_08001DD8:
    // 0x08001DD8: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(31, 0X2564) << 16);
    // 0x08001DDC: addiu       $a1, $a1, 0x2564
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(31, 0X2564));
    // 0x08001DE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001DE4: jalr        $s1
    // 0x08001DE8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_6;
    // 0x08001DE8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_6:
    // 0x08001DEC: beq         $v0, $zero, L_08001E18
    if (ctx->r2 == 0) {
        // 0x08001DF0: addiu       $t0, $zero, 0x28
        ctx->r8 = ADD32(0, 0X28);
            goto L_08001E18;
    }
    // 0x08001DF0: addiu       $t0, $zero, 0x28
    ctx->r8 = ADD32(0, 0X28);
    // 0x08001DF4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001DF8: sh          $t0, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r8;
    // 0x08001DFC: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08001E00: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x08001E04: jalr        $t9
    // 0x08001E08: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08001E08: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    after_7:
    // 0x08001E0C: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x08001E10: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x08001E14: sw          $s0, 0xE8($v1)
    MEM_W(0XE8, ctx->r3) = ctx->r16;
L_08001E18:
    // 0x08001E18: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(31, 0X27A0) << 16);
    // 0x08001E1C: addiu       $a1, $a1, 0x27A0
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(31, 0X27A0));
    // 0x08001E20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001E24: jalr        $s1
    // 0x08001E28: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_8;
    // 0x08001E28: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_8:
    // 0x08001E2C: beq         $v0, $zero, L_08001E58
    if (ctx->r2 == 0) {
        // 0x08001E30: addiu       $t1, $zero, 0x28
        ctx->r9 = ADD32(0, 0X28);
            goto L_08001E58;
    }
    // 0x08001E30: addiu       $t1, $zero, 0x28
    ctx->r9 = ADD32(0, 0X28);
    // 0x08001E34: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001E38: sh          $t1, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r9;
    // 0x08001E3C: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08001E40: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x08001E44: jalr        $t9
    // 0x08001E48: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08001E48: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    after_9:
    // 0x08001E4C: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x08001E50: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x08001E54: sw          $s0, 0xE8($v1)
    MEM_W(0XE8, ctx->r3) = ctx->r16;
L_08001E58:
    // 0x08001E58: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(31, 0X29FC) << 16);
    // 0x08001E5C: addiu       $a1, $a1, 0x29FC
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(31, 0X29FC));
    // 0x08001E60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001E64: jalr        $s1
    // 0x08001E68: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_10;
    // 0x08001E68: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_10:
    // 0x08001E6C: beq         $v0, $zero, L_08001E98
    if (ctx->r2 == 0) {
        // 0x08001E70: addiu       $t2, $zero, 0x28
        ctx->r10 = ADD32(0, 0X28);
            goto L_08001E98;
    }
    // 0x08001E70: addiu       $t2, $zero, 0x28
    ctx->r10 = ADD32(0, 0X28);
    // 0x08001E74: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001E78: sh          $t2, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r10;
    // 0x08001E7C: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08001E80: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x08001E84: jalr        $t9
    // 0x08001E88: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08001E88: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    after_11:
    // 0x08001E8C: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x08001E90: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x08001E94: sw          $s0, 0xE8($v1)
    MEM_W(0XE8, ctx->r3) = ctx->r16;
L_08001E98:
    // 0x08001E98: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001E9C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001EA0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(31, 0X1EC0) << 16);
    // 0x08001EA4: jalr        $t9
    // 0x08001EA8: addiu       $a0, $a0, 0x1EC0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0X1EC0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x08001EA8: addiu       $a0, $a0, 0x1EC0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0X1EC0));
    after_12:
    // 0x08001EAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08001EB0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x08001EB4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x08001EB8: jr          $ra
    // 0x08001EBC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x08001EBC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_08001ECC_6EB01C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001ECC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001ED0: lui         $t6, 0x8000
    ctx->r14 = S32(0X8000 << 16);
    // 0x08001ED4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001ED8: ori         $t6, $t6, 0x20
    ctx->r14 = ctx->r14 | 0X20;
    // 0x08001EDC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001EE0: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x08001EE4: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08001EE8: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08001EEC: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x08001EF0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001EF4: jalr        $t9
    // 0x08001EF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001EF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x08001EFC: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x08001F00: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x08001F04: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08001F08: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08001F0C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x08001F10: sb          $zero, 0x6C($a2)
    MEM_B(0X6C, ctx->r6) = 0;
    // 0x08001F14: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08001F18: lwc1        $f4, 0xC($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0XC);
    // 0x08001F1C: swc1        $f0, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->f0.u32l;
    // 0x08001F20: swc1        $f0, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->f0.u32l;
    // 0x08001F24: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08001F28: swc1        $f0, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->f0.u32l;
    // 0x08001F2C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001F30: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001F34: swc1        $f8, 0xDC($a2)
    MEM_W(0XDC, ctx->r6) = ctx->f8.u32l;
    // 0x08001F38: lwc1        $f10, 0xC($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0XC);
    // 0x08001F3C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(31, 0X1F5C) << 16);
    // 0x08001F40: addiu       $a0, $a0, 0x1F5C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0X1F5C));
    // 0x08001F44: jalr        $t9
    // 0x08001F48: swc1        $f10, 0xE0($a2)
    MEM_W(0XE0, ctx->r6) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001F48: swc1        $f10, 0xE0($a2)
    MEM_W(0XE0, ctx->r6) = ctx->f10.u32l;
    after_1:
    // 0x08001F4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001F50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001F54: jr          $ra
    // 0x08001F58: nop

    TRACE_RETURN()
    return;
    // 0x08001F58: nop

;}
RECOMP_FUNC void func_08000C74_6E9DC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000C74: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x08000C78: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x08000C7C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08000C80: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x08000C84: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x08000C88: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x08000C8C: sb          $t6, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = ctx->r14;
    // 0x08000C90: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x08000C94: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x08000C98: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x08000C9C: sh          $v0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r2;
    // 0x08000CA0: sh          $v0, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r2;
    // 0x08000CA4: sh          $zero, 0x18($a1)
    MEM_H(0X18, ctx->r5) = 0;
    // 0x08000CA8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000CAC: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08000CB0: lbu         $a1, 0xD0($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XD0);
    // 0x08000CB4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08000CB8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000CBC: jalr        $t9
    // 0x08000CC0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000CC0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08000CC4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08000CC8: or          $t7, $v0, $at
    ctx->r15 = ctx->r2 | ctx->r1;
    // 0x08000CCC: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08000CD0: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x08000CD4: sw          $t8, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r24;
    // 0x08000CD8: lui         $t1, 0x2C0
    ctx->r9 = S32(0X2C0 << 16);
    // 0x08000CDC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000CE0: addiu       $t0, $zero, 0x7E
    ctx->r8 = ADD32(0, 0X7E);
    // 0x08000CE4: ori         $t1, $t1, 0x7E0
    ctx->r9 = ctx->r9 | 0X7E0;
    // 0x08000CE8: addiu       $t2, $zero, 0xF
    ctx->r10 = ADD32(0, 0XF);
    // 0x08000CEC: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08000CF0: sh          $t0, 0x5E($s1)
    MEM_H(0X5E, ctx->r17) = ctx->r8;
    // 0x08000CF4: sw          $t1, 0x60($s1)
    MEM_W(0X60, ctx->r17) = ctx->r9;
    // 0x08000CF8: sb          $t2, 0x75($s1)
    MEM_B(0X75, ctx->r17) = ctx->r10;
    // 0x08000CFC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000D00: jalr        $t9
    // 0x08000D04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000D04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x08000D08: lui         $s2, 0x8022
    ctx->r18 = S32(0X8022 << 16);
    // 0x08000D0C: addiu       $s2, $s2, -0x6D4C
    ctx->r18 = ADD32(ctx->r18, -0X6D4C);
    // 0x08000D10: jalr        $s2
    // 0x08000D14: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r18)(rdram, ctx);
        goto after_2;
    // 0x08000D14: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_2:
    // 0x08000D18: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x08000D1C: lwc1        $f0, 0x1C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x08000D20: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x08000D24: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08000D28: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x08000D2C: add.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x08000D30: jalr        $s2
    // 0x08000D34: swc1        $f10, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r18)(rdram, ctx);
        goto after_3;
    // 0x08000D34: swc1        $f10, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f10.u32l;
    after_3:
    // 0x08000D38: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x08000D3C: lwc1        $f16, 0x1C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x08000D40: lwc1        $f8, 0x20($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X20);
    // 0x08000D44: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x08000D48: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x08000D4C: mul.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x08000D50: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x08000D54: jalr        $s2
    // 0x08000D58: swc1        $f10, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r18)(rdram, ctx);
        goto after_4;
    // 0x08000D58: swc1        $f10, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f10.u32l;
    after_4:
    // 0x08000D5C: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x08000D60: lwc1        $f18, 0x1C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x08000D64: lwc1        $f6, 0x24($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X24);
    // 0x08000D68: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x08000D6C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x08000D70: mul.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x08000D74: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x08000D78: jalr        $s2
    // 0x08000D7C: swc1        $f10, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r18)(rdram, ctx);
        goto after_5;
    // 0x08000D7C: swc1        $f10, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f10.u32l;
    after_5:
    // 0x08000D80: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08000D84: jalr        $s2
    // 0x08000D88: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    LOOKUP_FUNC(ctx->r18)(rdram, ctx);
        goto after_6;
    // 0x08000D88: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    after_6:
    // 0x08000D8C: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x08000D90: jalr        $s2
    // 0x08000D94: addiu       $a0, $zero, 0x3FF
    ctx->r4 = ADD32(0, 0X3FF);
    LOOKUP_FUNC(ctx->r18)(rdram, ctx);
        goto after_7;
    // 0x08000D94: addiu       $a0, $zero, 0x3FF
    ctx->r4 = ADD32(0, 0X3FF);
    after_7:
    // 0x08000D98: mtc1        $s0, $f16
    ctx->f16.u32l = ctx->r16;
    // 0x08000D9C: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x08000DA0: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x08000DA4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x08000DA8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x08000DAC: lui         $at, 0x4008
    ctx->r1 = S32(0X4008 << 16);
    // 0x08000DB0: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x08000DB4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x08000DB8: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x08000DBC: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x08000DC0: addiu       $t4, $zero, 0x400
    ctx->r12 = ADD32(0, 0X400);
    // 0x08000DC4: div.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f4.d, ctx->f6.d);
    // 0x08000DC8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000DCC: subu        $a2, $t4, $t3
    ctx->r6 = SUB32(ctx->r12, ctx->r11);
    // 0x08000DD0: andi        $t5, $a2, 0xFFFF
    ctx->r13 = ctx->r6 & 0XFFFF;
    // 0x08000DD4: addiu       $t9, $t9, -0xEAC
    ctx->r25 = ADD32(ctx->r25, -0XEAC);
    // 0x08000DD8: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    // 0x08000DDC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000DE0: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
    // 0x08000DE4: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x08000DE8: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08000DEC: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x08000DF0: jalr        $t9
    // 0x08000DF4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08000DF4: nop

    after_8:
    // 0x08000DF8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000DFC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000E00: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(31, 0XE24) << 16);
    // 0x08000E04: jalr        $t9
    // 0x08000E08: addiu       $a0, $a0, 0xE24
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0XE24));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08000E08: addiu       $a0, $a0, 0xE24
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0XE24));
    after_9:
    // 0x08000E0C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x08000E10: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08000E14: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x08000E18: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x08000E1C: jr          $ra
    // 0x08000E20: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x08000E20: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_08003BE8_6ECD38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003BE8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08003BEC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08003BF0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08003BF4: lui         $at, 0xC325
    ctx->r1 = S32(0XC325 << 16);
    // 0x08003BF8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08003BFC: lwc1        $f2, 0x8($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X8);
    // 0x08003C00: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x08003C04: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x08003C08: nop

    // 0x08003C0C: bc1fl       L_08003C48
    if (!c1cs) {
        // 0x08003C10: lw          $t6, 0xD0($a0)
        ctx->r14 = MEM_W(ctx->r4, 0XD0);
            goto L_08003C48;
    }
    goto skip_0;
    // 0x08003C10: lw          $t6, 0xD0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD0);
    skip_0:
    // 0x08003C14: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x08003C18: lwc1        $f8, 0x10($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X10);
    // 0x08003C1C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003C20: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08003C24: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x08003C28: nop

    // 0x08003C2C: bc1fl       L_08003C48
    if (!c1cs) {
        // 0x08003C30: lw          $t6, 0xD0($a0)
        ctx->r14 = MEM_W(ctx->r4, 0XD0);
            goto L_08003C48;
    }
    goto skip_1;
    // 0x08003C30: lw          $t6, 0xD0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD0);
    skip_1:
    // 0x08003C34: jalr        $t9
    // 0x08003C38: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003C38: nop

    after_0:
    // 0x08003C3C: b           L_08003CE0
    // 0x08003C40: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08003CE0;
    // 0x08003C40: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08003C44: lw          $t6, 0xD0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD0);
L_08003C48:
    // 0x08003C48: lwc1        $f18, 0x10($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X10);
    // 0x08003C4C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x08003C50: lwc1        $f10, 0xE4($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0XE4);
    // 0x08003C54: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x08003C58: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(31, 0X57F0) << 16);
    // 0x08003C5C: add.s       $f16, $f2, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f2.fl + ctx->f10.fl;
    // 0x08003C60: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08003C64: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08003C68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08003C6C: swc1        $f16, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f16.u32l;
    // 0x08003C70: lw          $t7, 0xD0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XD0);
    // 0x08003C74: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x08003C78: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x08003C7C: lwc1        $f4, 0xE8($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0XE8);
    // 0x08003C80: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x08003C84: swc1        $f6, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f6.u32l;
    // 0x08003C88: lwc1        $f8, 0xE4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0XE4);
    // 0x08003C8C: ldc1        $f16, 0x57F0($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(31, 0X57F0));
    // 0x08003C90: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x08003C94: sub.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d - ctx->f16.d;
    // 0x08003C98: cvt.s.d     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f0.fl = CVT_S_D(ctx->f18.d);
    // 0x08003C9C: swc1        $f0, 0xE4($a0)
    MEM_W(0XE4, ctx->r4) = ctx->f0.u32l;
    // 0x08003CA0: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x08003CA4: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x08003CA8: swc1        $f6, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f6.u32l;
    // 0x08003CAC: lwc1        $f8, 0xC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC);
    // 0x08003CB0: c.lt.s      $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f8.fl < ctx->f12.fl;
    // 0x08003CB4: nop

    // 0x08003CB8: bc1fl       L_08003CE0
    if (!c1cs) {
        // 0x08003CBC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_08003CE0;
    }
    goto skip_2;
    // 0x08003CBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x08003CC0: jalr        $t9
    // 0x08003CC4: swc1        $f12, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f12.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003CC4: swc1        $f12, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f12.u32l;
    after_1:
    // 0x08003CC8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003CCC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003CD0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(31, 0X3CF0) << 16);
    // 0x08003CD4: jalr        $t9
    // 0x08003CD8: addiu       $a0, $a0, 0x3CF0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0X3CF0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003CD8: addiu       $a0, $a0, 0x3CF0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0X3CF0));
    after_2:
    // 0x08003CDC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08003CE0:
    // 0x08003CE0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08003CE4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08003CE8: jr          $ra
    // 0x08003CEC: nop

    TRACE_RETURN()
    return;
    // 0x08003CEC: nop

;}
RECOMP_FUNC void func_08003750_6EC8A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003750: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003754: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003758: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x0800375C: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x08003760: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(31, 0X57D0) << 16);
    // 0x08003764: ldc1        $f8, 0x57D0($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(31, 0X57D0));
    // 0x08003768: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x0800376C: lui         $at, 0xC32F
    ctx->r1 = S32(0XC32F << 16);
    // 0x08003770: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x08003774: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08003778: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800377C: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08003780: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x08003784: swc1        $f16, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f16.u32l;
    // 0x08003788: lwc1        $f18, 0x8($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X8);
    // 0x0800378C: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x08003790: nop

    // 0x08003794: bc1fl       L_080037A8
    if (!c1cs) {
        // 0x08003798: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_080037A8;
    }
    goto skip_0;
    // 0x08003798: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x0800379C: jalr        $t9
    // 0x080037A0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080037A0: nop

    after_0:
    // 0x080037A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080037A8:
    // 0x080037A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080037AC: jr          $ra
    // 0x080037B0: nop

    TRACE_RETURN()
    return;
    // 0x080037B0: nop

;}
RECOMP_FUNC void func_08002A90_6EBBE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002A90: lw          $t6, 0x84($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X84);
    // 0x08002A94: lwc1        $f2, 0x8($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X8);
    // 0x08002A98: lui         $at, 0x4320
    ctx->r1 = S32(0X4320 << 16);
    // 0x08002A9C: lwc1        $f0, 0x8($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X8);
    // 0x08002AA0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08002AA4: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x08002AA8: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x08002AAC: nop

    // 0x08002AB0: bc1fl       L_08002AC8
    if (!c1cs) {
        // 0x08002AB4: sub.s       $f12, $f0, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
            goto L_08002AC8;
    }
    goto skip_0;
    // 0x08002AB4: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    skip_0:
    // 0x08002AB8: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x08002ABC: b           L_08002AC8
    // 0x08002AC0: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
        goto L_08002AC8;
    // 0x08002AC0: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    // 0x08002AC4: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
L_08002AC8:
    // 0x08002AC8: c.lt.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl < ctx->f12.fl;
    // 0x08002ACC: nop

    // 0x08002AD0: bc1fl       L_08002AF4
    if (!c1cs) {
        // 0x08002AD4: lw          $t9, 0x60($a0)
        ctx->r25 = MEM_W(ctx->r4, 0X60);
            goto L_08002AF4;
    }
    goto skip_1;
    // 0x08002AD4: lw          $t9, 0x60($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X60);
    skip_1:
    // 0x08002AD8: lw          $t7, 0x60($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X60);
    // 0x08002ADC: lui         $at, 0x7FFF
    ctx->r1 = S32(0X7FFF << 16);
    // 0x08002AE0: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x08002AE4: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x08002AE8: b           L_08002B00
    // 0x08002AEC: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
        goto L_08002B00;
    // 0x08002AEC: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
    // 0x08002AF0: lw          $t9, 0x60($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X60);
L_08002AF4:
    // 0x08002AF4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08002AF8: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x08002AFC: sw          $t0, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r8;
L_08002B00:
    // 0x08002B00: lw          $t1, -0x39FC($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X39FC);
    // 0x08002B04: lw          $t2, 0xA0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0XA0);
    // 0x08002B08: bnel        $a1, $t2, L_08002B34
    if (ctx->r5 != ctx->r10) {
        // 0x08002B0C: lw          $v0, 0xE8($a0)
        ctx->r2 = MEM_W(ctx->r4, 0XE8);
            goto L_08002B34;
    }
    goto skip_2;
    // 0x08002B0C: lw          $v0, 0xE8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XE8);
    skip_2:
    // 0x08002B10: lw          $t4, 0xE8($a0)
    ctx->r12 = MEM_W(ctx->r4, 0XE8);
    // 0x08002B14: addiu       $t3, $zero, 0x20
    ctx->r11 = ADD32(0, 0X20);
    // 0x08002B18: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(31, 0X56F8) << 16);
    // 0x08002B1C: sb          $t3, 0xEC($t4)
    MEM_B(0XEC, ctx->r12) = ctx->r11;
    // 0x08002B20: lw          $t5, 0xE8($a0)
    ctx->r13 = MEM_W(ctx->r4, 0XE8);
    // 0x08002B24: lwc1        $f6, 0x56F8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(31, 0X56F8));
    // 0x08002B28: b           L_08002B40
    // 0x08002B2C: swc1        $f6, 0xD0($t5)
    MEM_W(0XD0, ctx->r13) = ctx->f6.u32l;
        goto L_08002B40;
    // 0x08002B2C: swc1        $f6, 0xD0($t5)
    MEM_W(0XD0, ctx->r13) = ctx->f6.u32l;
    // 0x08002B30: lw          $v0, 0xE8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XE8);
L_08002B34:
    // 0x08002B34: lbu         $t6, 0xEC($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0XEC);
    // 0x08002B38: andi        $t7, $t6, 0xFFDF
    ctx->r15 = ctx->r14 & 0XFFDF;
    // 0x08002B3C: sb          $t7, 0xEC($v0)
    MEM_B(0XEC, ctx->r2) = ctx->r15;
L_08002B40:
    // 0x08002B40: lw          $v0, 0xE8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XE8);
    // 0x08002B44: lbu         $t8, 0xEC($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0XEC);
    // 0x08002B48: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x08002B4C: sltiu       $at, $t9, 0x20
    ctx->r1 = ctx->r25 < 0X20 ? 1 : 0;
    // 0x08002B50: beq         $at, $zero, L_08002BC4
    if (ctx->r1 == 0) {
        // 0x08002B54: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_08002BC4;
    }
    // 0x08002B54: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x08002B58: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(31, 0X56FC) << 16);
    // 0x08002B5C: addu        $at, $at, $t9
    gpr jr_addend_08002B64 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x08002B60: lw          $t9, 0x56FC($at)
    ctx->r25 = ADD32(ctx->r1, (int16_t)RELOC_LO16(31, 0X56FC));
    // 0x08002B64: jr          $t9
    // 0x08002B68: nop

    switch (jr_addend_08002B64 >> 2) {
        case 0: goto L_08002B6C; break;
        case 1: goto L_08002B6C; break;
        case 2: goto L_08002BC4; break;
        case 3: goto L_08002B6C; break;
        case 4: goto L_08002BC4; break;
        case 5: goto L_08002BC4; break;
        case 6: goto L_08002BC4; break;
        case 7: goto L_08002B98; break;
        case 8: goto L_08002BC4; break;
        case 9: goto L_08002BC4; break;
        case 10: goto L_08002BC4; break;
        case 11: goto L_08002BC4; break;
        case 12: goto L_08002BC4; break;
        case 13: goto L_08002BC4; break;
        case 14: goto L_08002BC4; break;
        case 15: goto L_08002B98; break;
        case 16: goto L_08002BC4; break;
        case 17: goto L_08002BC4; break;
        case 18: goto L_08002BC4; break;
        case 19: goto L_08002BC4; break;
        case 20: goto L_08002BC4; break;
        case 21: goto L_08002BC4; break;
        case 22: goto L_08002BC4; break;
        case 23: goto L_08002BC4; break;
        case 24: goto L_08002BC4; break;
        case 25: goto L_08002BC4; break;
        case 26: goto L_08002BC4; break;
        case 27: goto L_08002BC4; break;
        case 28: goto L_08002BC4; break;
        case 29: goto L_08002BC4; break;
        case 30: goto L_08002BC4; break;
        case 31: goto L_08002B98; break;
        default: switch_error(__func__, 0x08002B64, 0x080056FC);
    }
    // 0x08002B68: nop

L_08002B6C:
    // 0x08002B6C: lwc1        $f8, 0xC($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0XC);
    // 0x08002B70: lwc1        $f10, 0xD0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XD0);
    // 0x08002B74: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x08002B78: swc1        $f12, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f12.u32l;
    // 0x08002B7C: lwc1        $f0, 0xDC($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XDC);
    // 0x08002B80: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x08002B84: nop

    // 0x08002B88: bc1f        L_08002BF8
    if (!c1cs) {
        // 0x08002B8C: nop
    
            goto L_08002BF8;
    }
    // 0x08002B8C: nop

    // 0x08002B90: jr          $ra
    // 0x08002B94: swc1        $f0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f0.u32l;
    TRACE_RETURN()
    return;
    // 0x08002B94: swc1        $f0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f0.u32l;
L_08002B98:
    // 0x08002B98: lwc1        $f16, 0xC($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0XC);
    // 0x08002B9C: lwc1        $f18, 0xD0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0XD0);
    // 0x08002BA0: sub.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x08002BA4: swc1        $f12, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f12.u32l;
    // 0x08002BA8: lwc1        $f0, 0xE0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XE0);
    // 0x08002BAC: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x08002BB0: nop

    // 0x08002BB4: bc1f        L_08002BF8
    if (!c1cs) {
        // 0x08002BB8: nop
    
            goto L_08002BF8;
    }
    // 0x08002BB8: nop

    // 0x08002BBC: jr          $ra
    // 0x08002BC0: swc1        $f0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f0.u32l;
    TRACE_RETURN()
    return;
    // 0x08002BC0: swc1        $f0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f0.u32l;
L_08002BC4:
    // 0x08002BC4: lwc1        $f4, 0xC($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0XC);
    // 0x08002BC8: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(31, 0X5780) << 16);
    // 0x08002BCC: ldc1        $f8, 0x5780($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(31, 0X5780));
    // 0x08002BD0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08002BD4: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x08002BD8: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    // 0x08002BDC: swc1        $f12, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f12.u32l;
    // 0x08002BE0: lwc1        $f0, 0xDC($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XDC);
    // 0x08002BE4: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x08002BE8: nop

    // 0x08002BEC: bc1f        L_08002BF8
    if (!c1cs) {
        // 0x08002BF0: nop
    
            goto L_08002BF8;
    }
    // 0x08002BF0: nop

    // 0x08002BF4: swc1        $f0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f0.u32l;
L_08002BF8:
    // 0x08002BF8: jr          $ra
    // 0x08002BFC: nop

    TRACE_RETURN()
    return;
    // 0x08002BFC: nop

;}
RECOMP_FUNC void func_080027A0_6EB8F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080027A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080027A4: lui         $t6, 0x8000
    ctx->r14 = S32(0X8000 << 16);
    // 0x080027A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080027AC: ori         $t6, $t6, 0x20
    ctx->r14 = ctx->r14 | 0X20;
    // 0x080027B0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080027B4: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x080027B8: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x080027BC: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x080027C0: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x080027C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080027C8: jalr        $t9
    // 0x080027CC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080027CC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x080027D0: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x080027D4: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x080027D8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x080027DC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x080027E0: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x080027E4: sb          $t7, 0x6C($a2)
    MEM_B(0X6C, ctx->r6) = ctx->r15;
    // 0x080027E8: lwc1        $f4, 0xC($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0XC);
    // 0x080027EC: swc1        $f0, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->f0.u32l;
    // 0x080027F0: swc1        $f0, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->f0.u32l;
    // 0x080027F4: swc1        $f0, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->f0.u32l;
    // 0x080027F8: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x080027FC: swc1        $f4, 0xDC($a2)
    MEM_W(0XDC, ctx->r6) = ctx->f4.u32l;
    // 0x08002800: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08002804: lwc1        $f6, 0xC($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0XC);
    // 0x08002808: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800280C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002810: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x08002814: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(31, 0X2834) << 16);
    // 0x08002818: addiu       $a0, $a0, 0x2834
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0X2834));
    // 0x0800281C: jalr        $t9
    // 0x08002820: swc1        $f10, 0xE0($a2)
    MEM_W(0XE0, ctx->r6) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002820: swc1        $f10, 0xE0($a2)
    MEM_W(0XE0, ctx->r6) = ctx->f10.u32l;
    after_1:
    // 0x08002824: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002828: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800282C: jr          $ra
    // 0x08002830: nop

    TRACE_RETURN()
    return;
    // 0x08002830: nop

;}
RECOMP_FUNC void func_08002834_6EB984(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002834: lw          $t6, 0x84($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X84);
    // 0x08002838: lwc1        $f2, 0x8($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X8);
    // 0x0800283C: lui         $at, 0x4320
    ctx->r1 = S32(0X4320 << 16);
    // 0x08002840: lwc1        $f0, 0x8($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X8);
    // 0x08002844: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08002848: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x0800284C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x08002850: nop

    // 0x08002854: bc1fl       L_0800286C
    if (!c1cs) {
        // 0x08002858: sub.s       $f12, $f0, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
            goto L_0800286C;
    }
    goto skip_0;
    // 0x08002858: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    skip_0:
    // 0x0800285C: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x08002860: b           L_0800286C
    // 0x08002864: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
        goto L_0800286C;
    // 0x08002864: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    // 0x08002868: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
L_0800286C:
    // 0x0800286C: c.lt.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl < ctx->f12.fl;
    // 0x08002870: nop

    // 0x08002874: bc1fl       L_08002898
    if (!c1cs) {
        // 0x08002878: lw          $t9, 0x60($a0)
        ctx->r25 = MEM_W(ctx->r4, 0X60);
            goto L_08002898;
    }
    goto skip_1;
    // 0x08002878: lw          $t9, 0x60($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X60);
    skip_1:
    // 0x0800287C: lw          $t7, 0x60($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X60);
    // 0x08002880: lui         $at, 0x7FFF
    ctx->r1 = S32(0X7FFF << 16);
    // 0x08002884: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x08002888: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x0800288C: b           L_080028A4
    // 0x08002890: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
        goto L_080028A4;
    // 0x08002890: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
    // 0x08002894: lw          $t9, 0x60($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X60);
L_08002898:
    // 0x08002898: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x0800289C: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x080028A0: sw          $t0, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r8;
L_080028A4:
    // 0x080028A4: lw          $t1, -0x39FC($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X39FC);
    // 0x080028A8: lw          $t2, 0xA0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0XA0);
    // 0x080028AC: bnel        $a1, $t2, L_080028D8
    if (ctx->r5 != ctx->r10) {
        // 0x080028B0: lw          $v0, 0xE8($a0)
        ctx->r2 = MEM_W(ctx->r4, 0XE8);
            goto L_080028D8;
    }
    goto skip_2;
    // 0x080028B0: lw          $v0, 0xE8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XE8);
    skip_2:
    // 0x080028B4: lw          $t4, 0xE8($a0)
    ctx->r12 = MEM_W(ctx->r4, 0XE8);
    // 0x080028B8: addiu       $t3, $zero, 0x10
    ctx->r11 = ADD32(0, 0X10);
    // 0x080028BC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(31, 0X5668) << 16);
    // 0x080028C0: sb          $t3, 0xEC($t4)
    MEM_B(0XEC, ctx->r12) = ctx->r11;
    // 0x080028C4: lw          $t5, 0xE8($a0)
    ctx->r13 = MEM_W(ctx->r4, 0XE8);
    // 0x080028C8: lwc1        $f6, 0x5668($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(31, 0X5668));
    // 0x080028CC: b           L_080028E4
    // 0x080028D0: swc1        $f6, 0xD0($t5)
    MEM_W(0XD0, ctx->r13) = ctx->f6.u32l;
        goto L_080028E4;
    // 0x080028D0: swc1        $f6, 0xD0($t5)
    MEM_W(0XD0, ctx->r13) = ctx->f6.u32l;
    // 0x080028D4: lw          $v0, 0xE8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XE8);
L_080028D8:
    // 0x080028D8: lbu         $t6, 0xEC($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0XEC);
    // 0x080028DC: andi        $t7, $t6, 0xFFEF
    ctx->r15 = ctx->r14 & 0XFFEF;
    // 0x080028E0: sb          $t7, 0xEC($v0)
    MEM_B(0XEC, ctx->r2) = ctx->r15;
L_080028E4:
    // 0x080028E4: lw          $v0, 0xE8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XE8);
    // 0x080028E8: lbu         $t8, 0xEC($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0XEC);
    // 0x080028EC: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x080028F0: sltiu       $at, $t9, 0x20
    ctx->r1 = ctx->r25 < 0X20 ? 1 : 0;
    // 0x080028F4: beq         $at, $zero, L_080029C0
    if (ctx->r1 == 0) {
        // 0x080028F8: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_080029C0;
    }
    // 0x080028F8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x080028FC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(31, 0X566C) << 16);
    // 0x08002900: addu        $at, $at, $t9
    gpr jr_addend_08002908 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x08002904: lw          $t9, 0x566C($at)
    ctx->r25 = ADD32(ctx->r1, (int16_t)RELOC_LO16(31, 0X566C));
    // 0x08002908: jr          $t9
    // 0x0800290C: nop

    switch (jr_addend_08002908 >> 2) {
        case 0: goto L_08002910; break;
        case 1: goto L_08002910; break;
        case 2: goto L_080029C0; break;
        case 3: goto L_08002910; break;
        case 4: goto L_080029C0; break;
        case 5: goto L_080029C0; break;
        case 6: goto L_080029C0; break;
        case 7: goto L_08002968; break;
        case 8: goto L_080029C0; break;
        case 9: goto L_080029C0; break;
        case 10: goto L_080029C0; break;
        case 11: goto L_080029C0; break;
        case 12: goto L_080029C0; break;
        case 13: goto L_080029C0; break;
        case 14: goto L_080029C0; break;
        case 15: goto L_08002968; break;
        case 16: goto L_080029C0; break;
        case 17: goto L_080029C0; break;
        case 18: goto L_080029C0; break;
        case 19: goto L_080029C0; break;
        case 20: goto L_080029C0; break;
        case 21: goto L_080029C0; break;
        case 22: goto L_080029C0; break;
        case 23: goto L_080029C0; break;
        case 24: goto L_080029C0; break;
        case 25: goto L_080029C0; break;
        case 26: goto L_080029C0; break;
        case 27: goto L_080029C0; break;
        case 28: goto L_080029C0; break;
        case 29: goto L_080029C0; break;
        case 30: goto L_080029C0; break;
        case 31: goto L_08002968; break;
        default: switch_error(__func__, 0x08002908, 0x0800566C);
    }
    // 0x0800290C: nop

L_08002910:
    // 0x08002910: lwc1        $f8, 0xD0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XD0);
    // 0x08002914: lui         $at, 0x4008
    ctx->r1 = S32(0X4008 << 16);
    // 0x08002918: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x0800291C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x08002920: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x08002924: lui         $at, 0x4014
    ctx->r1 = S32(0X4014 << 16);
    // 0x08002928: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x0800292C: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x08002930: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08002934: lwc1        $f8, 0xC($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0XC);
    // 0x08002938: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x0800293C: div.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = DIV_D(ctx->f18.d, ctx->f4.d);
    // 0x08002940: add.d       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f6.d); 
    ctx->f16.d = ctx->f10.d + ctx->f6.d;
    // 0x08002944: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    // 0x08002948: swc1        $f12, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f12.u32l;
    // 0x0800294C: lwc1        $f0, 0xDC($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XDC);
    // 0x08002950: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x08002954: nop

    // 0x08002958: bc1f        L_080029F4
    if (!c1cs) {
        // 0x0800295C: nop
    
            goto L_080029F4;
    }
    // 0x0800295C: nop

    // 0x08002960: jr          $ra
    // 0x08002964: swc1        $f0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f0.u32l;
    TRACE_RETURN()
    return;
    // 0x08002964: swc1        $f0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f0.u32l;
L_08002968:
    // 0x08002968: lwc1        $f18, 0xD0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0XD0);
    // 0x0800296C: lui         $at, 0x4008
    ctx->r1 = S32(0X4008 << 16);
    // 0x08002970: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x08002974: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x08002978: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x0800297C: lui         $at, 0x4014
    ctx->r1 = S32(0X4014 << 16);
    // 0x08002980: mul.d       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f4.d, ctx->f8.d);
    // 0x08002984: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x08002988: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x0800298C: lwc1        $f18, 0xC($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0XC);
    // 0x08002990: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x08002994: div.d       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f6.d); 
    ctx->f16.d = DIV_D(ctx->f10.d, ctx->f6.d);
    // 0x08002998: sub.d       $f8, $f4, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f16.d); 
    ctx->f8.d = ctx->f4.d - ctx->f16.d;
    // 0x0800299C: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    // 0x080029A0: swc1        $f12, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f12.u32l;
    // 0x080029A4: lwc1        $f0, 0xE0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XE0);
    // 0x080029A8: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x080029AC: nop

    // 0x080029B0: bc1f        L_080029F4
    if (!c1cs) {
        // 0x080029B4: nop
    
            goto L_080029F4;
    }
    // 0x080029B4: nop

    // 0x080029B8: jr          $ra
    // 0x080029BC: swc1        $f0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f0.u32l;
    TRACE_RETURN()
    return;
    // 0x080029BC: swc1        $f0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f0.u32l;
L_080029C0:
    // 0x080029C0: lwc1        $f10, 0xC($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0XC);
    // 0x080029C4: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(31, 0X56F0) << 16);
    // 0x080029C8: ldc1        $f18, 0x56F0($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(31, 0X56F0));
    // 0x080029CC: cvt.d.s     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f6.d = CVT_D_S(ctx->f10.fl);
    // 0x080029D0: add.d       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f6.d + ctx->f18.d;
    // 0x080029D4: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    // 0x080029D8: swc1        $f12, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f12.u32l;
    // 0x080029DC: lwc1        $f0, 0xDC($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XDC);
    // 0x080029E0: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x080029E4: nop

    // 0x080029E8: bc1f        L_080029F4
    if (!c1cs) {
        // 0x080029EC: nop
    
            goto L_080029F4;
    }
    // 0x080029EC: nop

    // 0x080029F0: swc1        $f0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f0.u32l;
L_080029F4:
    // 0x080029F4: jr          $ra
    // 0x080029F8: nop

    TRACE_RETURN()
    return;
    // 0x080029F8: nop

;}
RECOMP_FUNC void func_08004B34_6EDC84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004B34: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08004B38: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08004B3C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08004B40: lw          $v0, 0xD0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD0);
    // 0x08004B44: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x08004B48: addiu       $t7, $zero, 0x333
    ctx->r15 = ADD32(0, 0X333);
    // 0x08004B4C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08004B50: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08004B54: sh          $t7, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r15;
    // 0x08004B58: bne         $v0, $at, L_08004B80
    if (ctx->r2 != ctx->r1) {
        // 0x08004B5C: sb          $zero, 0xDD($a0)
        MEM_B(0XDD, ctx->r4) = 0;
            goto L_08004B80;
    }
    // 0x08004B5C: sb          $zero, 0xDD($a0)
    MEM_B(0XDD, ctx->r4) = 0;
    // 0x08004B60: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08004B64: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08004B68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08004B6C: jalr        $t9
    // 0x08004B70: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004B70: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x08004B74: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08004B78: b           L_08004BA8
    // 0x08004B7C: sb          $zero, 0x6C($a0)
    MEM_B(0X6C, ctx->r4) = 0;
        goto L_08004BA8;
    // 0x08004B7C: sb          $zero, 0x6C($a0)
    MEM_B(0X6C, ctx->r4) = 0;
L_08004B80:
    // 0x08004B80: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08004B84: bne         $v0, $at, L_08004BA8
    if (ctx->r2 != ctx->r1) {
        // 0x08004B88: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_08004BA8;
    }
    // 0x08004B88: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08004B8C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08004B90: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08004B94: jalr        $t9
    // 0x08004B98: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004B98: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_1:
    // 0x08004B9C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08004BA0: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x08004BA4: sb          $t8, 0x6C($a0)
    MEM_B(0X6C, ctx->r4) = ctx->r24;
L_08004BA8:
    // 0x08004BA8: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(31, 0X5808) << 16);
    // 0x08004BAC: lwc1        $f0, 0x5808($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(31, 0X5808));
    // 0x08004BB0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x08004BB4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004BB8: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08004BBC: swc1        $f0, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->f0.u32l;
    // 0x08004BC0: swc1        $f0, 0x20($t0)
    MEM_W(0X20, ctx->r8) = ctx->f0.u32l;
    // 0x08004BC4: swc1        $f0, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f0.u32l;
    // 0x08004BC8: lbu         $a1, 0xDD($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XDD);
    // 0x08004BCC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08004BD0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08004BD4: jalr        $t9
    // 0x08004BD8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08004BD8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x08004BDC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08004BE0: or          $t1, $v0, $at
    ctx->r9 = ctx->r2 | ctx->r1;
    // 0x08004BE4: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x08004BE8: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08004BEC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004BF0: or          $t2, $t1, $at
    ctx->r10 = ctx->r9 | ctx->r1;
    // 0x08004BF4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08004BF8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(31, 0X4C18) << 16);
    // 0x08004BFC: addiu       $a0, $a0, 0x4C18
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0X4C18));
    // 0x08004C00: jalr        $t9
    // 0x08004C04: sw          $t2, 0x30($t3)
    MEM_W(0X30, ctx->r11) = ctx->r10;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08004C04: sw          $t2, 0x30($t3)
    MEM_W(0X30, ctx->r11) = ctx->r10;
    after_3:
    // 0x08004C08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08004C0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08004C10: jr          $ra
    // 0x08004C14: nop

    TRACE_RETURN()
    return;
    // 0x08004C14: nop

;}
RECOMP_FUNC void func_0800021C_6E936C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800021C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08000220: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08000224: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000228: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x0800022C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08000230: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08000234: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x08000238: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0800023C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x08000240: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000244: jalr        $t9
    // 0x08000248: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000248: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x0800024C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08000250: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x08000254: or          $t6, $v0, $at
    ctx->r14 = ctx->r2 | ctx->r1;
    // 0x08000258: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x0800025C: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x08000260: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000264: sw          $t7, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r15;
    // 0x08000268: addiu       $t8, $zero, 0x7E
    ctx->r24 = ADD32(0, 0X7E);
    // 0x0800026C: addiu       $t0, $zero, 0x22
    ctx->r8 = ADD32(0, 0X22);
    // 0x08000270: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x08000274: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x08000278: sh          $t8, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r24;
    // 0x0800027C: jalr        $t9
    // 0x08000280: sw          $t0, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000280: sw          $t0, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r8;
    after_1:
    // 0x08000284: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000288: addiu       $t9, $t9, 0x4ABC
    ctx->r25 = ADD32(ctx->r25, 0X4ABC);
    // 0x0800028C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x08000290: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08000294: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x08000298: jalr        $t9
    // 0x0800029C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800029C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x080002A0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x080002A4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080002A8: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x080002AC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x080002B0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080002B4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x080002B8: ori         $t1, $zero, 0x8000
    ctx->r9 = 0 | 0X8000;
    // 0x080002BC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080002C0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(31, 0X2F0) << 16);
    // 0x080002C4: swc1        $f8, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f8.u32l;
    // 0x080002C8: sh          $t1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r9;
    // 0x080002CC: addiu       $a0, $a0, 0x2F0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0X2F0));
    // 0x080002D0: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x080002D4: jalr        $t9
    // 0x080002D8: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080002D8: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    after_3:
    // 0x080002DC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x080002E0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x080002E4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x080002E8: jr          $ra
    // 0x080002EC: nop

    TRACE_RETURN()
    return;
    // 0x080002EC: nop

;}
RECOMP_FUNC void func_080047FC_6ED94C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080047FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08004800: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08004804: lui         $at, 0xC325
    ctx->r1 = S32(0XC325 << 16);
    // 0x08004808: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x0800480C: lwc1        $f0, 0x8($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X8);
    // 0x08004810: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x08004814: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x08004818: nop

    // 0x0800481C: bc1fl       L_08004858
    if (!c1cs) {
        // 0x08004820: lw          $t6, 0xD0($a0)
        ctx->r14 = MEM_W(ctx->r4, 0XD0);
            goto L_08004858;
    }
    goto skip_0;
    // 0x08004820: lw          $t6, 0xD0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD0);
    skip_0:
    // 0x08004824: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x08004828: lwc1        $f8, 0x10($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X10);
    // 0x0800482C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004830: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08004834: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x08004838: nop

    // 0x0800483C: bc1fl       L_08004858
    if (!c1cs) {
        // 0x08004840: lw          $t6, 0xD0($a0)
        ctx->r14 = MEM_W(ctx->r4, 0XD0);
            goto L_08004858;
    }
    goto skip_1;
    // 0x08004840: lw          $t6, 0xD0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD0);
    skip_1:
    // 0x08004844: jalr        $t9
    // 0x08004848: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004848: nop

    after_0:
    // 0x0800484C: b           L_08004900
    // 0x08004850: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08004900;
    // 0x08004850: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08004854: lw          $t6, 0xD0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD0);
L_08004858:
    // 0x08004858: lwc1        $f18, 0x10($a3)
    ctx->f18.u32l = MEM_W(ctx->r7, 0X10);
    // 0x0800485C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004860: lwc1        $f10, 0xE4($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0XE4);
    // 0x08004864: addiu       $t9, $t9, -0x2658
    ctx->r25 = ADD32(ctx->r25, -0X2658);
    // 0x08004868: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x0800486C: add.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x08004870: swc1        $f16, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f16.u32l;
    // 0x08004874: lw          $t7, 0xD0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XD0);
    // 0x08004878: lwc1        $f4, 0xE8($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0XE8);
    // 0x0800487C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x08004880: swc1        $f6, 0x10($a3)
    MEM_W(0X10, ctx->r7) = ctx->f6.u32l;
    // 0x08004884: lhu         $a1, 0xEC($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0XEC);
    // 0x08004888: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x0800488C: jalr        $t9
    // 0x08004890: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004890: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x08004894: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08004898: beq         $v0, $zero, L_080048FC
    if (ctx->r2 == 0) {
        // 0x0800489C: lw          $a3, 0x1C($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X1C);
            goto L_080048FC;
    }
    // 0x0800489C: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x080048A0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080048A4: addiu       $t9, $t9, -0x4BDC
    ctx->r25 = ADD32(ctx->r25, -0X4BDC);
    // 0x080048A8: lhu         $a1, 0x16($a3)
    ctx->r5 = MEM_HU(ctx->r7, 0X16);
    // 0x080048AC: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x080048B0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080048B4: jalr        $t9
    // 0x080048B8: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080048B8: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    after_2:
    // 0x080048BC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x080048C0: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x080048C4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x080048C8: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x080048CC: slti        $v1, $v0, 0x15
    ctx->r3 = SIGNED(ctx->r2) < 0X15 ? 1 : 0;
    // 0x080048D0: addiu       $t8, $v0, 0x1
    ctx->r24 = ADD32(ctx->r2, 0X1);
    // 0x080048D4: bne         $v1, $zero, L_080048FC
    if (ctx->r3 != 0) {
        // 0x080048D8: sh          $t8, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r24;
            goto L_080048FC;
    }
    // 0x080048D8: sh          $t8, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r24;
    // 0x080048DC: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    // 0x080048E0: swc1        $f0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f0.u32l;
    // 0x080048E4: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x080048E8: lhu         $t0, 0x16($a3)
    ctx->r8 = MEM_HU(ctx->r7, 0X16);
    // 0x080048EC: sh          $zero, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = 0;
    // 0x080048F0: addiu       $t1, $t0, 0x200
    ctx->r9 = ADD32(ctx->r8, 0X200);
    // 0x080048F4: andi        $t2, $t1, 0x3FF
    ctx->r10 = ctx->r9 & 0X3FF;
    // 0x080048F8: sh          $t2, 0xEC($a0)
    MEM_H(0XEC, ctx->r4) = ctx->r10;
L_080048FC:
    // 0x080048FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08004900:
    // 0x08004900: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08004904: jr          $ra
    // 0x08004908: nop

    TRACE_RETURN()
    return;
    // 0x08004908: nop

;}
RECOMP_FUNC void func_0800042C_6E957C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800042C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08000430: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08000434: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08000438: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x0800043C: lw          $t7, 0x64($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X64);
    // 0x08000440: lui         $t6, 0x20
    ctx->r14 = S32(0X20 << 16);
    // 0x08000444: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x08000448: lui         $t0, 0x800
    ctx->r8 = S32(RELOC_HI16(31, 0X950) << 16);
    // 0x0800044C: ori         $t6, $t6, 0x6E1
    ctx->r14 = ctx->r14 | 0X6E1;
    // 0x08000450: sb          $t9, 0x8D($a0)
    MEM_B(0X8D, ctx->r4) = ctx->r25;
    // 0x08000454: addiu       $t0, $t0, 0x950
    ctx->r8 = ADD32(ctx->r8, (int16_t)RELOC_LO16(31, 0X950));
    // 0x08000458: ori         $t8, $t7, 0x8000
    ctx->r24 = ctx->r15 | 0X8000;
    // 0x0800045C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000460: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08000464: sw          $t8, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r24;
    // 0x08000468: sw          $t0, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r8;
    // 0x0800046C: sb          $zero, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = 0;
    // 0x08000470: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000474: addiu       $t9, $t9, -0x20A0
    ctx->r25 = ADD32(ctx->r25, -0X20A0);
    // 0x08000478: lbu         $a1, 0xD0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XD0);
    // 0x0800047C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08000480: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000484: jalr        $t9
    // 0x08000488: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000488: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x0800048C: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x08000490: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08000494: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000498: or          $t1, $v0, $at
    ctx->r9 = ctx->r2 | ctx->r1;
    // 0x0800049C: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x080004A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080004A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080004A8: jalr        $t9
    // 0x080004AC: sw          $t1, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080004AC: sw          $t1, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r9;
    after_1:
    // 0x080004B0: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(31, 0X540C) << 16);
    // 0x080004B4: lwc1        $f0, 0x540C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(31, 0X540C));
    // 0x080004B8: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x080004BC: addiu       $t2, $zero, 0x1E
    ctx->r10 = ADD32(0, 0X1E);
    // 0x080004C0: addiu       $t3, $zero, 0x3C
    ctx->r11 = ADD32(0, 0X3C);
    // 0x080004C4: sh          $t2, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r10;
    // 0x080004C8: sh          $t3, 0x3E($s0)
    MEM_H(0X3E, ctx->r16) = ctx->r11;
    // 0x080004CC: sh          $zero, 0x40($s0)
    MEM_H(0X40, ctx->r16) = 0;
    // 0x080004D0: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x080004D4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080004D8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080004DC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(31, 0X508) << 16);
    // 0x080004E0: addiu       $a0, $a0, 0x508
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0X508));
    // 0x080004E4: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    // 0x080004E8: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x080004EC: jalr        $t9
    // 0x080004F0: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080004F0: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    after_2:
    // 0x080004F4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x080004F8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x080004FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08000500: jr          $ra
    // 0x08000504: nop

    TRACE_RETURN()
    return;
    // 0x08000504: nop

;}
RECOMP_FUNC void func_08000984_6E9AD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000984: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08000988: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x0800098C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x08000990: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x08000994: sh          $zero, 0x14($a1)
    MEM_H(0X14, ctx->r5) = 0;
    // 0x08000998: sh          $zero, 0x16($a1)
    MEM_H(0X16, ctx->r5) = 0;
    // 0x0800099C: sh          $zero, 0x18($a1)
    MEM_H(0X18, ctx->r5) = 0;
    // 0x080009A0: lw          $v1, 0xE8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XE8);
    // 0x080009A4: lui         $t7, 0x40
    ctx->r15 = S32(0X40 << 16);
    // 0x080009A8: addiu       $t6, $zero, 0x7E
    ctx->r14 = ADD32(0, 0X7E);
    // 0x080009AC: ori         $t7, $t7, 0x6E0
    ctx->r15 = ctx->r15 | 0X6E0;
    // 0x080009B0: andi        $t8, $v1, 0x1
    ctx->r24 = ctx->r3 & 0X1;
    // 0x080009B4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080009B8: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x080009BC: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x080009C0: bne         $t8, $zero, L_080009D4
    if (ctx->r24 != 0) {
        // 0x080009C4: sw          $t7, 0x60($a0)
        MEM_W(0X60, ctx->r4) = ctx->r15;
            goto L_080009D4;
    }
    // 0x080009C4: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x080009C8: andi        $t9, $v1, 0x2
    ctx->r25 = ctx->r3 & 0X2;
    // 0x080009CC: beq         $t9, $zero, L_08000A0C
    if (ctx->r25 == 0) {
        // 0x080009D0: andi        $t2, $v1, 0x4
        ctx->r10 = ctx->r3 & 0X4;
            goto L_08000A0C;
    }
    // 0x080009D0: andi        $t2, $v1, 0x4
    ctx->r10 = ctx->r3 & 0X4;
L_080009D4:
    // 0x080009D4: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x080009D8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080009DC: sb          $t0, 0xD0($s0)
    MEM_B(0XD0, ctx->r16) = ctx->r8;
    // 0x080009E0: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x080009E4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x080009E8: andi        $a1, $t0, 0xFF
    ctx->r5 = ctx->r8 & 0XFF;
    // 0x080009EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080009F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080009F4: jalr        $t9
    // 0x080009F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080009F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x080009FC: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08000A00: or          $t1, $v0, $at
    ctx->r9 = ctx->r2 | ctx->r1;
    // 0x08000A04: b           L_08000A78
    // 0x08000A08: sw          $t1, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r9;
        goto L_08000A78;
    // 0x08000A08: sw          $t1, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r9;
L_08000A0C:
    // 0x08000A0C: bne         $t2, $zero, L_08000A18
    if (ctx->r10 != 0) {
        // 0x08000A10: andi        $t3, $v1, 0x8
        ctx->r11 = ctx->r3 & 0X8;
            goto L_08000A18;
    }
    // 0x08000A10: andi        $t3, $v1, 0x8
    ctx->r11 = ctx->r3 & 0X8;
    // 0x08000A14: beq         $t3, $zero, L_08000A78
    if (ctx->r11 == 0) {
        // 0x08000A18: addiu       $t4, $zero, 0x5A
        ctx->r12 = ADD32(0, 0X5A);
            goto L_08000A78;
    }
L_08000A18:
    // 0x08000A18: addiu       $t4, $zero, 0x5A
    ctx->r12 = ADD32(0, 0X5A);
    // 0x08000A1C: addiu       $t5, $zero, 0xC0
    ctx->r13 = ADD32(0, 0XC0);
    // 0x08000A20: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000A24: sh          $t4, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r12;
    // 0x08000A28: sb          $t5, 0xD0($s0)
    MEM_B(0XD0, ctx->r16) = ctx->r13;
    // 0x08000A2C: addiu       $t9, $t9, -0x22B4
    ctx->r25 = ADD32(ctx->r25, -0X22B4);
    // 0x08000A30: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08000A34: andi        $a1, $t5, 0xFF
    ctx->r5 = ctx->r13 & 0XFF;
    // 0x08000A38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000A3C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000A40: jalr        $t9
    // 0x08000A44: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000A44: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x08000A48: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08000A4C: or          $t6, $v0, $at
    ctx->r14 = ctx->r2 | ctx->r1;
    // 0x08000A50: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000A54: sw          $t6, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r14;
    // 0x08000A58: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x08000A5C: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08000A60: sb          $t7, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r15;
    // 0x08000A64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000A68: addiu       $a1, $zero, 0x384
    ctx->r5 = ADD32(0, 0X384);
    // 0x08000A6C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000A70: jalr        $t9
    // 0x08000A74: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000A74: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
L_08000A78:
    // 0x08000A78: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000A7C: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x08000A80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000A84: jalr        $t9
    // 0x08000A88: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000A88: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_3:
    // 0x08000A8C: lw          $v1, 0xE8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XE8);
    // 0x08000A90: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000A94: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000A98: andi        $t8, $v1, 0x2
    ctx->r24 = ctx->r3 & 0X2;
    // 0x08000A9C: bne         $t8, $zero, L_08000AAC
    if (ctx->r24 != 0) {
        // 0x08000AA0: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(31, 0XAD0) << 16);
            goto L_08000AAC;
    }
    // 0x08000AA0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(31, 0XAD0) << 16);
    // 0x08000AA4: andi        $t0, $v1, 0x8
    ctx->r8 = ctx->r3 & 0X8;
    // 0x08000AA8: beq         $t0, $zero, L_08000AB4
    if (ctx->r8 == 0) {
        // 0x08000AAC: addiu       $t1, $zero, 0x200
        ctx->r9 = ADD32(0, 0X200);
            goto L_08000AB4;
    }
L_08000AAC:
    // 0x08000AAC: addiu       $t1, $zero, 0x200
    ctx->r9 = ADD32(0, 0X200);
    // 0x08000AB0: sh          $t1, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r9;
L_08000AB4:
    // 0x08000AB4: jalr        $t9
    // 0x08000AB8: addiu       $a0, $a0, 0xAD0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0XAD0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000AB8: addiu       $a0, $a0, 0xAD0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0XAD0));
    after_4:
    // 0x08000ABC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08000AC0: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x08000AC4: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x08000AC8: jr          $ra
    // 0x08000ACC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x08000ACC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_08001CC4_6EAE14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001CC4: lw          $t6, 0xD0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD0);
    // 0x08001CC8: beql        $t6, $zero, L_08001CE8
    if (ctx->r14 == 0) {
        // 0x08001CCC: lhu         $t0, 0x16($a1)
        ctx->r8 = MEM_HU(ctx->r5, 0X16);
            goto L_08001CE8;
    }
    goto skip_0;
    // 0x08001CCC: lhu         $t0, 0x16($a1)
    ctx->r8 = MEM_HU(ctx->r5, 0X16);
    skip_0:
    // 0x08001CD0: lhu         $t7, 0x16($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X16);
    // 0x08001CD4: addiu       $t8, $t7, 0x2
    ctx->r24 = ADD32(ctx->r15, 0X2);
    // 0x08001CD8: andi        $t9, $t8, 0x3FF
    ctx->r25 = ctx->r24 & 0X3FF;
    // 0x08001CDC: jr          $ra
    // 0x08001CE0: sh          $t9, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r25;
    TRACE_RETURN()
    return;
    // 0x08001CE0: sh          $t9, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r25;
    // 0x08001CE4: lhu         $t0, 0x16($a1)
    ctx->r8 = MEM_HU(ctx->r5, 0X16);
L_08001CE8:
    // 0x08001CE8: addiu       $t1, $t0, -0x2
    ctx->r9 = ADD32(ctx->r8, -0X2);
    // 0x08001CEC: andi        $t2, $t1, 0x3FF
    ctx->r10 = ctx->r9 & 0X3FF;
    // 0x08001CF0: sh          $t2, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r10;
    // 0x08001CF4: jr          $ra
    // 0x08001CF8: nop

    TRACE_RETURN()
    return;
    // 0x08001CF8: nop

;}
RECOMP_FUNC void func_08002564_6EB6B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002564: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002568: lui         $t6, 0x8000
    ctx->r14 = S32(0X8000 << 16);
    // 0x0800256C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002570: ori         $t6, $t6, 0x20
    ctx->r14 = ctx->r14 | 0X20;
    // 0x08002574: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002578: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x0800257C: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08002580: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08002584: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x08002588: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x0800258C: jalr        $t9
    // 0x08002590: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002590: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x08002594: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x08002598: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x0800259C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x080025A0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x080025A4: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x080025A8: sb          $t7, 0x6C($a2)
    MEM_B(0X6C, ctx->r6) = ctx->r15;
    // 0x080025AC: lwc1        $f4, 0xC($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0XC);
    // 0x080025B0: swc1        $f0, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->f0.u32l;
    // 0x080025B4: swc1        $f0, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->f0.u32l;
    // 0x080025B8: swc1        $f0, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->f0.u32l;
    // 0x080025BC: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x080025C0: swc1        $f4, 0xDC($a2)
    MEM_W(0XDC, ctx->r6) = ctx->f4.u32l;
    // 0x080025C4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080025C8: lwc1        $f6, 0xC($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0XC);
    // 0x080025CC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080025D0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080025D4: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x080025D8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(31, 0X25F8) << 16);
    // 0x080025DC: addiu       $a0, $a0, 0x25F8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0X25F8));
    // 0x080025E0: jalr        $t9
    // 0x080025E4: swc1        $f10, 0xE0($a2)
    MEM_W(0XE0, ctx->r6) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080025E4: swc1        $f10, 0xE0($a2)
    MEM_W(0XE0, ctx->r6) = ctx->f10.u32l;
    after_1:
    // 0x080025E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080025EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080025F0: jr          $ra
    // 0x080025F4: nop

    TRACE_RETURN()
    return;
    // 0x080025F4: nop

;}
RECOMP_FUNC void func_08003DF4_6ECF44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003DF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003DF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003DFC: lui         $at, 0xC325
    ctx->r1 = S32(0XC325 << 16);
    // 0x08003E00: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08003E04: lwc1        $f0, 0x8($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X8);
    // 0x08003E08: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x08003E0C: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x08003E10: nop

    // 0x08003E14: bc1fl       L_08003E50
    if (!c1cs) {
        // 0x08003E18: lw          $t6, 0xD0($a0)
        ctx->r14 = MEM_W(ctx->r4, 0XD0);
            goto L_08003E50;
    }
    goto skip_0;
    // 0x08003E18: lw          $t6, 0xD0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD0);
    skip_0:
    // 0x08003E1C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x08003E20: lwc1        $f8, 0x10($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X10);
    // 0x08003E24: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003E28: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08003E2C: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x08003E30: nop

    // 0x08003E34: bc1fl       L_08003E50
    if (!c1cs) {
        // 0x08003E38: lw          $t6, 0xD0($a0)
        ctx->r14 = MEM_W(ctx->r4, 0XD0);
            goto L_08003E50;
    }
    goto skip_1;
    // 0x08003E38: lw          $t6, 0xD0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD0);
    skip_1:
    // 0x08003E3C: jalr        $t9
    // 0x08003E40: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003E40: nop

    after_0:
    // 0x08003E44: b           L_08003EF8
    // 0x08003E48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08003EF8;
    // 0x08003E48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08003E4C: lw          $t6, 0xD0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD0);
L_08003E50:
    // 0x08003E50: lwc1        $f18, 0x10($a3)
    ctx->f18.u32l = MEM_W(ctx->r7, 0X10);
    // 0x08003E54: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003E58: lwc1        $f10, 0xE4($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0XE4);
    // 0x08003E5C: addiu       $t9, $t9, -0x2658
    ctx->r25 = ADD32(ctx->r25, -0X2658);
    // 0x08003E60: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x08003E64: add.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x08003E68: swc1        $f16, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f16.u32l;
    // 0x08003E6C: lw          $t7, 0xD0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XD0);
    // 0x08003E70: lwc1        $f4, 0xE8($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0XE8);
    // 0x08003E74: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x08003E78: swc1        $f6, 0x10($a3)
    MEM_W(0X10, ctx->r7) = ctx->f6.u32l;
    // 0x08003E7C: lhu         $a1, 0xEC($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0XEC);
    // 0x08003E80: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x08003E84: jalr        $t9
    // 0x08003E88: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003E88: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x08003E8C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08003E90: beq         $v0, $zero, L_08003EF4
    if (ctx->r2 == 0) {
        // 0x08003E94: lw          $a3, 0x1C($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X1C);
            goto L_08003EF4;
    }
    // 0x08003E94: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x08003E98: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003E9C: addiu       $t9, $t9, -0x4BDC
    ctx->r25 = ADD32(ctx->r25, -0X4BDC);
    // 0x08003EA0: lhu         $a1, 0x16($a3)
    ctx->r5 = MEM_HU(ctx->r7, 0X16);
    // 0x08003EA4: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x08003EA8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08003EAC: jalr        $t9
    // 0x08003EB0: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003EB0: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    after_2:
    // 0x08003EB4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08003EB8: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x08003EBC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08003EC0: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08003EC4: slti        $v1, $v0, 0x15
    ctx->r3 = SIGNED(ctx->r2) < 0X15 ? 1 : 0;
    // 0x08003EC8: addiu       $t8, $v0, 0x1
    ctx->r24 = ADD32(ctx->r2, 0X1);
    // 0x08003ECC: bne         $v1, $zero, L_08003EF4
    if (ctx->r3 != 0) {
        // 0x08003ED0: sh          $t8, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r24;
            goto L_08003EF4;
    }
    // 0x08003ED0: sh          $t8, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r24;
    // 0x08003ED4: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    // 0x08003ED8: swc1        $f0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f0.u32l;
    // 0x08003EDC: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x08003EE0: lhu         $t0, 0x16($a3)
    ctx->r8 = MEM_HU(ctx->r7, 0X16);
    // 0x08003EE4: sh          $zero, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = 0;
    // 0x08003EE8: addiu       $t1, $t0, 0x200
    ctx->r9 = ADD32(ctx->r8, 0X200);
    // 0x08003EEC: andi        $t2, $t1, 0x3FF
    ctx->r10 = ctx->r9 & 0X3FF;
    // 0x08003EF0: sh          $t2, 0xEC($a0)
    MEM_H(0XEC, ctx->r4) = ctx->r10;
L_08003EF4:
    // 0x08003EF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08003EF8:
    // 0x08003EF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08003EFC: jr          $ra
    // 0x08003F00: nop

    TRACE_RETURN()
    return;
    // 0x08003F00: nop

;}
RECOMP_FUNC void func_0800490C_6EDA5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800490C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08004910: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08004914: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08004918: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x0800491C: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x08004920: addiu       $t7, $zero, 0x3C4
    ctx->r15 = ADD32(0, 0X3C4);
    // 0x08004924: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004928: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x0800492C: sh          $t7, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r15;
    // 0x08004930: addiu       $t9, $t9, -0x20A0
    ctx->r25 = ADD32(ctx->r25, -0X20A0);
    // 0x08004934: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x08004938: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x0800493C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x08004940: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08004944: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08004948: jalr        $t9
    // 0x0800494C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800494C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_0:
    // 0x08004950: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x08004954: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08004958: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800495C: or          $t0, $v0, $at
    ctx->r8 = ctx->r2 | ctx->r1;
    // 0x08004960: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08004964: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08004968: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800496C: jalr        $t9
    // 0x08004970: sw          $t0, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004970: sw          $t0, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r8;
    after_1:
    // 0x08004974: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08004978: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x0800497C: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x08004980: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004984: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08004988: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(31, 0X49BC) << 16);
    // 0x0800498C: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    // 0x08004990: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x08004994: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    // 0x08004998: sb          $zero, 0xDC($s0)
    MEM_B(0XDC, ctx->r16) = 0;
    // 0x0800499C: sb          $zero, 0xD0($s0)
    MEM_B(0XD0, ctx->r16) = 0;
    // 0x080049A0: jalr        $t9
    // 0x080049A4: addiu       $a0, $a0, 0x49BC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0X49BC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080049A4: addiu       $a0, $a0, 0x49BC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0X49BC));
    after_2:
    // 0x080049A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x080049AC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x080049B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x080049B4: jr          $ra
    // 0x080049B8: nop

    TRACE_RETURN()
    return;
    // 0x080049B8: nop

;}
RECOMP_FUNC void func_080013B8_6EA508(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080013B8: lbu         $v0, 0xE0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XE0);
    // 0x080013BC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x080013C0: beq         $v0, $at, L_080013E0
    if (ctx->r2 == ctx->r1) {
        // 0x080013C4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_080013E0;
    }
    // 0x080013C4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x080013C8: beq         $v0, $at, L_08001444
    if (ctx->r2 == ctx->r1) {
        // 0x080013CC: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_08001444;
    }
    // 0x080013CC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x080013D0: beq         $v0, $at, L_080014AC
    if (ctx->r2 == ctx->r1) {
        // 0x080013D4: nop
    
            goto L_080014AC;
    }
    // 0x080013D4: nop

    // 0x080013D8: jr          $ra
    // 0x080013DC: nop

    TRACE_RETURN()
    return;
    // 0x080013DC: nop

L_080013E0:
    // 0x080013E0: lhu         $t6, 0xE4($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XE4);
    // 0x080013E4: lhu         $t7, 0x16($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X16);
    // 0x080013E8: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x080013EC: andi        $t3, $t8, 0x3FF
    ctx->r11 = ctx->r24 & 0X3FF;
    // 0x080013F0: sh          $t3, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r11;
    // 0x080013F4: lw          $t0, 0xD0($a0)
    ctx->r8 = MEM_W(ctx->r4, 0XD0);
    // 0x080013F8: lw          $t1, 0x18($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X18);
    // 0x080013FC: lhu         $t2, 0x16($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X16);
    // 0x08001400: subu        $v0, $t2, $t3
    ctx->r2 = SUB32(ctx->r10, ctx->r11);
    // 0x08001404: andi        $t4, $v0, 0x3FF
    ctx->r12 = ctx->r2 & 0X3FF;
    // 0x08001408: slti        $at, $t4, 0x4C
    ctx->r1 = SIGNED(ctx->r12) < 0X4C ? 1 : 0;
    // 0x0800140C: bne         $at, $zero, L_080014AC
    if (ctx->r1 != 0) {
        // 0x08001410: slti        $at, $t4, 0x3B5
        ctx->r1 = SIGNED(ctx->r12) < 0X3B5 ? 1 : 0;
            goto L_080014AC;
    }
    // 0x08001410: slti        $at, $t4, 0x3B5
    ctx->r1 = SIGNED(ctx->r12) < 0X3B5 ? 1 : 0;
    // 0x08001414: beq         $at, $zero, L_080014AC
    if (ctx->r1 == 0) {
        // 0x08001418: nop
    
            goto L_080014AC;
    }
    // 0x08001418: nop

    // 0x0800141C: lbu         $t5, 0xE1($a0)
    ctx->r13 = MEM_BU(ctx->r4, 0XE1);
    // 0x08001420: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x08001424: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x08001428: bne         $t5, $at, L_0800143C
    if (ctx->r13 != ctx->r1) {
        // 0x0800142C: addiu       $t7, $zero, 0x3
        ctx->r15 = ADD32(0, 0X3);
            goto L_0800143C;
    }
    // 0x0800142C: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x08001430: sb          $t6, 0xE0($a0)
    MEM_B(0XE0, ctx->r4) = ctx->r14;
    // 0x08001434: jr          $ra
    // 0x08001438: sh          $zero, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = 0;
    TRACE_RETURN()
    return;
    // 0x08001438: sh          $zero, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = 0;
L_0800143C:
    // 0x0800143C: jr          $ra
    // 0x08001440: sb          $t7, 0xE0($a0)
    MEM_B(0XE0, ctx->r4) = ctx->r15;
    TRACE_RETURN()
    return;
    // 0x08001440: sb          $t7, 0xE0($a0)
    MEM_B(0XE0, ctx->r4) = ctx->r15;
L_08001444:
    // 0x08001444: lhu         $v1, 0x8A($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X8A);
    // 0x08001448: slti        $v0, $v1, 0x3C
    ctx->r2 = SIGNED(ctx->r3) < 0X3C ? 1 : 0;
    // 0x0800144C: addiu       $t8, $v1, 0x1
    ctx->r24 = ADD32(ctx->r3, 0X1);
    // 0x08001450: bne         $v0, $zero, L_080014AC
    if (ctx->r2 != 0) {
        // 0x08001454: sh          $t8, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r24;
            goto L_080014AC;
    }
    // 0x08001454: sh          $t8, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r24;
    // 0x08001458: lhu         $t9, 0x16($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0X16);
    // 0x0800145C: lhu         $t0, 0xE4($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0XE4);
    // 0x08001460: subu        $t1, $t9, $t0
    ctx->r9 = SUB32(ctx->r25, ctx->r8);
    // 0x08001464: andi        $t2, $t1, 0x3FF
    ctx->r10 = ctx->r9 & 0X3FF;
    // 0x08001468: sh          $t2, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r10;
    // 0x0800146C: lw          $v1, 0xD0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XD0);
    // 0x08001470: andi        $v0, $t2, 0xFFFF
    ctx->r2 = ctx->r10 & 0XFFFF;
    // 0x08001474: lw          $t3, 0x18($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X18);
    // 0x08001478: lhu         $t4, 0x16($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X16);
    // 0x0800147C: bne         $v0, $t4, L_080014AC
    if (ctx->r2 != ctx->r12) {
        // 0x08001480: nop
    
            goto L_080014AC;
    }
    // 0x08001480: nop

    // 0x08001484: lw          $t5, 0xE8($a0)
    ctx->r13 = MEM_W(ctx->r4, 0XE8);
    // 0x08001488: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x0800148C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x08001490: lw          $t6, 0x18($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X18);
    // 0x08001494: lhu         $t7, 0x16($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X16);
    // 0x08001498: beql        $v0, $t7, L_080014AC
    if (ctx->r2 == ctx->r15) {
        // 0x0800149C: sb          $t9, 0xE0($a0)
        MEM_B(0XE0, ctx->r4) = ctx->r25;
            goto L_080014AC;
    }
    goto skip_0;
    // 0x0800149C: sb          $t9, 0xE0($a0)
    MEM_B(0XE0, ctx->r4) = ctx->r25;
    skip_0:
    // 0x080014A0: jr          $ra
    // 0x080014A4: sb          $t8, 0xE0($v1)
    MEM_B(0XE0, ctx->r3) = ctx->r24;
    TRACE_RETURN()
    return;
    // 0x080014A4: sb          $t8, 0xE0($v1)
    MEM_B(0XE0, ctx->r3) = ctx->r24;
    // 0x080014A8: sb          $t9, 0xE0($a0)
    MEM_B(0XE0, ctx->r4) = ctx->r25;
L_080014AC:
    // 0x080014AC: jr          $ra
    // 0x080014B0: nop

    TRACE_RETURN()
    return;
    // 0x080014B0: nop

;}
RECOMP_FUNC void func_080006D4_6E9824(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080006D4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x080006D8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x080006DC: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x080006E0: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x080006E4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080006E8: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x080006EC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x080006F0: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x080006F4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x080006F8: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x080006FC: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x08000700: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x08000704: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x08000708: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x0800070C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x08000710: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000714: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08000718: addiu       $a0, $zero, 0x10C
    ctx->r4 = ADD32(0, 0X10C);
    // 0x0800071C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x08000720: jalr        $t9
    // 0x08000724: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000724: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_0:
    // 0x08000728: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(31, 0X984) << 16);
    // 0x0800072C: lui         $s5, 0x8021
    ctx->r21 = S32(0X8021 << 16);
    // 0x08000730: addiu       $s5, $s5, 0x71A8
    ctx->r21 = ADD32(ctx->r21, 0X71A8);
    // 0x08000734: addiu       $a1, $a1, 0x984
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(31, 0X984));
    // 0x08000738: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x0800073C: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x08000740: jalr        $s5
    // 0x08000744: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r21)(rdram, ctx);
        goto after_1;
    // 0x08000744: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x08000748: beq         $v0, $zero, L_08000798
    if (ctx->r2 == 0) {
        // 0x0800074C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08000798;
    }
    // 0x0800074C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08000750: lui         $fp, 0x8001
    ctx->r30 = S32(0X8001 << 16);
    // 0x08000754: addiu       $fp, $fp, 0x41C4
    ctx->r30 = ADD32(ctx->r30, 0X41C4);
    // 0x08000758: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x0800075C: jalr        $fp
    // 0x08000760: sh          $a0, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r4;
    LOOKUP_FUNC(ctx->r30)(rdram, ctx);
        goto after_2;
    // 0x08000760: sh          $a0, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r4;
    after_2:
    // 0x08000764: lw          $t6, 0xE8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XE8);
    // 0x08000768: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x0800076C: lw          $t8, 0x18($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X18);
    // 0x08000770: ori         $t7, $t6, 0x1
    ctx->r15 = ctx->r14 | 0X1;
    // 0x08000774: sw          $t7, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r15;
    // 0x08000778: lwc1        $f4, 0x1C($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X1C);
    // 0x0800077C: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x08000780: lw          $t0, 0x18($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X18);
    // 0x08000784: lwc1        $f6, 0x20($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X20);
    // 0x08000788: swc1        $f6, 0x20($t0)
    MEM_W(0X20, ctx->r8) = ctx->f6.u32l;
    // 0x0800078C: lw          $t1, 0x18($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X18);
    // 0x08000790: lwc1        $f8, 0x24($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X24);
    // 0x08000794: swc1        $f8, 0x24($t1)
    MEM_W(0X24, ctx->r9) = ctx->f8.u32l;
L_08000798:
    // 0x08000798: lui         $fp, 0x8001
    ctx->r30 = S32(0X8001 << 16);
    // 0x0800079C: addiu       $fp, $fp, 0x41C4
    ctx->r30 = ADD32(ctx->r30, 0X41C4);
    // 0x080007A0: addiu       $s7, $zero, 0x28
    ctx->r23 = ADD32(0, 0X28);
    // 0x080007A4: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x080007A8: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x080007AC: jalr        $s5
    // 0x080007B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r21)(rdram, ctx);
        goto after_3;
    // 0x080007B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x080007B4: beq         $v0, $zero, L_080007FC
    if (ctx->r2 == 0) {
        // 0x080007B8: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_080007FC;
    }
    // 0x080007B8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x080007BC: sh          $s7, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r23;
    // 0x080007C0: jalr        $fp
    // 0x080007C4: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    LOOKUP_FUNC(ctx->r30)(rdram, ctx);
        goto after_4;
    // 0x080007C4: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    after_4:
    // 0x080007C8: lw          $t2, 0xE8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XE8);
    // 0x080007CC: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x080007D0: lw          $t4, 0x18($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X18);
    // 0x080007D4: ori         $t3, $t2, 0x4
    ctx->r11 = ctx->r10 | 0X4;
    // 0x080007D8: sw          $t3, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r11;
    // 0x080007DC: lwc1        $f10, 0x1C($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X1C);
    // 0x080007E0: swc1        $f10, 0x1C($t4)
    MEM_W(0X1C, ctx->r12) = ctx->f10.u32l;
    // 0x080007E4: lw          $t5, 0x18($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X18);
    // 0x080007E8: lwc1        $f16, 0x20($s2)
    ctx->f16.u32l = MEM_W(ctx->r18, 0X20);
    // 0x080007EC: swc1        $f16, 0x20($t5)
    MEM_W(0X20, ctx->r13) = ctx->f16.u32l;
    // 0x080007F0: lw          $t9, 0x18($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X18);
    // 0x080007F4: lwc1        $f18, 0x24($s2)
    ctx->f18.u32l = MEM_W(ctx->r18, 0X24);
    // 0x080007F8: swc1        $f18, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->f18.u32l;
L_080007FC:
    // 0x080007FC: lui         $s4, 0x800
    ctx->r20 = S32(RELOC_HI16(31, 0XC74) << 16);
    // 0x08000800: addiu       $s4, $s4, 0xC74
    ctx->r20 = ADD32(ctx->r20, (int16_t)RELOC_LO16(31, 0XC74));
    // 0x08000804: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x08000808: addiu       $s3, $zero, 0x8
    ctx->r19 = ADD32(0, 0X8);
    // 0x0800080C: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
L_08000810:
    // 0x08000810: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x08000814: jalr        $s5
    // 0x08000818: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r21)(rdram, ctx);
        goto after_5;
    // 0x08000818: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x0800081C: beq         $v0, $zero, L_08000858
    if (ctx->r2 == 0) {
        // 0x08000820: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08000858;
    }
    // 0x08000820: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08000824: sh          $s7, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r23;
    // 0x08000828: jalr        $fp
    // 0x0800082C: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    LOOKUP_FUNC(ctx->r30)(rdram, ctx);
        goto after_6;
    // 0x0800082C: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    after_6:
    // 0x08000830: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x08000834: lwc1        $f4, 0x1C($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X1C);
    // 0x08000838: lw          $t6, 0x18($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X18);
    // 0x0800083C: swc1        $f4, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f4.u32l;
    // 0x08000840: lw          $t7, 0x18($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X18);
    // 0x08000844: lwc1        $f6, 0x20($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X20);
    // 0x08000848: swc1        $f6, 0x20($t7)
    MEM_W(0X20, ctx->r15) = ctx->f6.u32l;
    // 0x0800084C: lw          $t8, 0x18($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X18);
    // 0x08000850: lwc1        $f8, 0x24($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X24);
    // 0x08000854: swc1        $f8, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->f8.u32l;
L_08000858:
    // 0x08000858: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0800085C: bnel        $s1, $s3, L_08000810
    if (ctx->r17 != ctx->r19) {
        // 0x08000860: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_08000810;
    }
    goto skip_0;
    // 0x08000860: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    skip_0:
    // 0x08000864: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x08000868: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x0800086C: jalr        $s5
    // 0x08000870: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r21)(rdram, ctx);
        goto after_7;
    // 0x08000870: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_7:
    // 0x08000874: beq         $v0, $zero, L_080008BC
    if (ctx->r2 == 0) {
        // 0x08000878: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_080008BC;
    }
    // 0x08000878: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x0800087C: sh          $s7, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r23;
    // 0x08000880: jalr        $fp
    // 0x08000884: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    LOOKUP_FUNC(ctx->r30)(rdram, ctx);
        goto after_8;
    // 0x08000884: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    after_8:
    // 0x08000888: lw          $t0, 0xE8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XE8);
    // 0x0800088C: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x08000890: lw          $t2, 0x18($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X18);
    // 0x08000894: ori         $t1, $t0, 0x2
    ctx->r9 = ctx->r8 | 0X2;
    // 0x08000898: sw          $t1, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r9;
    // 0x0800089C: lwc1        $f10, 0x1C($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X1C);
    // 0x080008A0: swc1        $f10, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->f10.u32l;
    // 0x080008A4: lw          $t3, 0x18($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X18);
    // 0x080008A8: lwc1        $f16, 0x20($s2)
    ctx->f16.u32l = MEM_W(ctx->r18, 0X20);
    // 0x080008AC: swc1        $f16, 0x20($t3)
    MEM_W(0X20, ctx->r11) = ctx->f16.u32l;
    // 0x080008B0: lw          $t4, 0x18($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X18);
    // 0x080008B4: lwc1        $f18, 0x24($s2)
    ctx->f18.u32l = MEM_W(ctx->r18, 0X24);
    // 0x080008B8: swc1        $f18, 0x24($t4)
    MEM_W(0X24, ctx->r12) = ctx->f18.u32l;
L_080008BC:
    // 0x080008BC: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x080008C0: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x080008C4: jalr        $s5
    // 0x080008C8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r21)(rdram, ctx);
        goto after_9;
    // 0x080008C8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_9:
    // 0x080008CC: beq         $v0, $zero, L_08000914
    if (ctx->r2 == 0) {
        // 0x080008D0: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08000914;
    }
    // 0x080008D0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x080008D4: sh          $s7, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r23;
    // 0x080008D8: jalr        $fp
    // 0x080008DC: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    LOOKUP_FUNC(ctx->r30)(rdram, ctx);
        goto after_10;
    // 0x080008DC: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    after_10:
    // 0x080008E0: lw          $t5, 0xE8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XE8);
    // 0x080008E4: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x080008E8: lw          $t6, 0x18($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X18);
    // 0x080008EC: ori         $t9, $t5, 0x8
    ctx->r25 = ctx->r13 | 0X8;
    // 0x080008F0: sw          $t9, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r25;
    // 0x080008F4: lwc1        $f4, 0x1C($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X1C);
    // 0x080008F8: swc1        $f4, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f4.u32l;
    // 0x080008FC: lw          $t7, 0x18($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X18);
    // 0x08000900: lwc1        $f6, 0x20($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X20);
    // 0x08000904: swc1        $f6, 0x20($t7)
    MEM_W(0X20, ctx->r15) = ctx->f6.u32l;
    // 0x08000908: lw          $t8, 0x18($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X18);
    // 0x0800090C: lwc1        $f8, 0x24($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X24);
    // 0x08000910: swc1        $f8, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->f8.u32l;
L_08000914:
    // 0x08000914: lw          $t0, 0x68($s6)
    ctx->r8 = MEM_W(ctx->r22, 0X68);
    // 0x08000918: ori         $t1, $t0, 0x2
    ctx->r9 = ctx->r8 | 0X2;
    // 0x0800091C: sw          $t1, 0x68($s6)
    MEM_W(0X68, ctx->r22) = ctx->r9;
    // 0x08000920: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x08000924: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x08000928: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x0800092C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x08000930: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x08000934: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x08000938: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x0800093C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x08000940: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x08000944: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000948: jr          $ra
    // 0x0800094C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x0800094C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_080018E4_6EAA34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080018E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080018E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080018EC: lhu         $t6, 0x16($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X16);
    // 0x080018F0: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x080018F4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x080018F8: addiu       $t7, $t6, 0x4
    ctx->r15 = ADD32(ctx->r14, 0X4);
    // 0x080018FC: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x08001900: sh          $t8, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r24;
    // 0x08001904: lw          $v0, 0xD0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD0);
    // 0x08001908: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x0800190C: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x08001910: beql        $v0, $zero, L_08001940
    if (ctx->r2 == 0) {
        // 0x08001914: lhu         $a0, 0xE4($a2)
        ctx->r4 = MEM_HU(ctx->r6, 0XE4);
            goto L_08001940;
    }
    goto skip_0;
    // 0x08001914: lhu         $a0, 0xE4($a2)
    ctx->r4 = MEM_HU(ctx->r6, 0XE4);
    skip_0:
    // 0x08001918: beq         $v0, $at, L_0800193C
    if (ctx->r2 == ctx->r1) {
        // 0x0800191C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_0800193C;
    }
    // 0x0800191C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08001920: beq         $v0, $at, L_08001988
    if (ctx->r2 == ctx->r1) {
        // 0x08001924: lui         $t9, 0x8000
        ctx->r25 = S32(0X8000 << 16);
            goto L_08001988;
    }
    // 0x08001924: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08001928: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x0800192C: beql        $v0, $at, L_0800198C
    if (ctx->r2 == ctx->r1) {
        // 0x08001930: lhu         $a0, 0xE4($a2)
        ctx->r4 = MEM_HU(ctx->r6, 0XE4);
            goto L_0800198C;
    }
    goto skip_1;
    // 0x08001930: lhu         $a0, 0xE4($a2)
    ctx->r4 = MEM_HU(ctx->r6, 0XE4);
    skip_1:
    // 0x08001934: b           L_080019D8
    // 0x08001938: lw          $t2, 0xD8($a2)
    ctx->r10 = MEM_W(ctx->r6, 0XD8);
        goto L_080019D8;
    // 0x08001938: lw          $t2, 0xD8($a2)
    ctx->r10 = MEM_W(ctx->r6, 0XD8);
L_0800193C:
    // 0x0800193C: lhu         $a0, 0xE4($a2)
    ctx->r4 = MEM_HU(ctx->r6, 0XE4);
L_08001940:
    // 0x08001940: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x08001944: jalr        $t9
    // 0x08001948: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001948: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x0800194C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x08001950: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x08001954: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x08001958: lw          $t0, 0xD4($a2)
    ctx->r8 = MEM_W(ctx->r6, 0XD4);
    // 0x0800195C: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x08001960: bgez        $t0, L_08001974
    if (SIGNED(ctx->r8) >= 0) {
        // 0x08001964: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_08001974;
    }
    // 0x08001964: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08001968: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x0800196C: nop

    // 0x08001970: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_08001974:
    // 0x08001974: mul.s       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x08001978: lwc1        $f16, 0xDC($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0XDC);
    // 0x0800197C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x08001980: b           L_080019D4
    // 0x08001984: swc1        $f18, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f18.u32l;
        goto L_080019D4;
    // 0x08001984: swc1        $f18, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f18.u32l;
L_08001988:
    // 0x08001988: lhu         $a0, 0xE4($a2)
    ctx->r4 = MEM_HU(ctx->r6, 0XE4);
L_0800198C:
    // 0x0800198C: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x08001990: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x08001994: jalr        $t9
    // 0x08001998: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001998: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_1:
    // 0x0800199C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x080019A0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x080019A4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x080019A8: lw          $t1, 0xD4($a2)
    ctx->r9 = MEM_W(ctx->r6, 0XD4);
    // 0x080019AC: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x080019B0: bgez        $t1, L_080019C4
    if (SIGNED(ctx->r9) >= 0) {
        // 0x080019B4: cvt.s.w     $f8, $f4
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
            goto L_080019C4;
    }
    // 0x080019B4: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x080019B8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080019BC: nop

    // 0x080019C0: add.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f6.fl;
L_080019C4:
    // 0x080019C4: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x080019C8: lwc1        $f16, 0xE0($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0XE0);
    // 0x080019CC: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x080019D0: swc1        $f18, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f18.u32l;
L_080019D4:
    // 0x080019D4: lw          $t2, 0xD8($a2)
    ctx->r10 = MEM_W(ctx->r6, 0XD8);
L_080019D8:
    // 0x080019D8: lhu         $t3, 0xE4($a2)
    ctx->r11 = MEM_HU(ctx->r6, 0XE4);
    // 0x080019DC: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x080019E0: andi        $t5, $t4, 0x3FF
    ctx->r13 = ctx->r12 & 0X3FF;
    // 0x080019E4: sh          $t5, 0xE4($a2)
    MEM_H(0XE4, ctx->r6) = ctx->r13;
    // 0x080019E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080019EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080019F0: jr          $ra
    // 0x080019F4: nop

    TRACE_RETURN()
    return;
    // 0x080019F4: nop

;}
RECOMP_FUNC void func_08001114_6EA264(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001114: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08001118: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0800111C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08001120: lw          $t8, 0xD0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XD0);
    // 0x08001124: lui         $t6, 0x8000
    ctx->r14 = S32(0X8000 << 16);
    // 0x08001128: ori         $t6, $t6, 0x20
    ctx->r14 = ctx->r14 | 0X20;
    // 0x0800112C: addiu       $t7, $zero, 0x4000
    ctx->r15 = ADD32(0, 0X4000);
    // 0x08001130: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08001134: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x08001138: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x0800113C: beq         $t8, $zero, L_08001150
    if (ctx->r24 == 0) {
        // 0x08001140: sw          $t7, 0x64($a0)
        MEM_W(0X64, ctx->r4) = ctx->r15;
            goto L_08001150;
    }
    // 0x08001140: sw          $t7, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r15;
    // 0x08001144: ori         $t9, $zero, 0xFFFC
    ctx->r25 = 0 | 0XFFFC;
    // 0x08001148: b           L_08001158
    // 0x0800114C: sh          $t9, 0xE4($a0)
    MEM_H(0XE4, ctx->r4) = ctx->r25;
        goto L_08001158;
    // 0x0800114C: sh          $t9, 0xE4($a0)
    MEM_H(0XE4, ctx->r4) = ctx->r25;
L_08001150:
    // 0x08001150: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x08001154: sh          $t0, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r8;
L_08001158:
    // 0x08001158: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800115C: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08001160: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001164: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001168: jalr        $t9
    // 0x0800116C: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800116C: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    after_0:
    // 0x08001170: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x08001174: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08001178: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x0800117C: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(31, 0X1304) << 16);
    // 0x08001180: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x08001184: swc1        $f0, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->f0.u32l;
    // 0x08001188: swc1        $f0, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->f0.u32l;
    // 0x0800118C: swc1        $f0, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->f0.u32l;
    // 0x08001190: sb          $zero, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = 0;
    // 0x08001194: addiu       $v0, $v0, 0x71A8
    ctx->r2 = ADD32(ctx->r2, 0X71A8);
    // 0x08001198: addiu       $a1, $a1, 0x1304
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(31, 0X1304));
    // 0x0800119C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x080011A0: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x080011A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080011A8: jalr        $v0
    // 0x080011AC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x080011AC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
    // 0x080011B0: beq         $v0, $zero, L_08001200
    if (ctx->r2 == 0) {
        // 0x080011B4: sw          $v0, 0xD4($s0)
        MEM_W(0XD4, ctx->r16) = ctx->r2;
            goto L_08001200;
    }
    // 0x080011B4: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    // 0x080011B8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080011BC: addiu       $t1, $zero, 0x28
    ctx->r9 = ADD32(0, 0X28);
    // 0x080011C0: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080011C4: sh          $t1, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r9;
    // 0x080011C8: jalr        $t9
    // 0x080011CC: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080011CC: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    after_2:
    // 0x080011D0: lw          $t3, 0xD4($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XD4);
    // 0x080011D4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x080011D8: sw          $v0, 0x2C($t3)
    MEM_W(0X2C, ctx->r11) = ctx->r2;
    // 0x080011DC: lw          $t4, 0xD4($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XD4);
    // 0x080011E0: sw          $s0, 0xD0($t4)
    MEM_W(0XD0, ctx->r12) = ctx->r16;
    // 0x080011E4: lw          $t5, 0xD4($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XD4);
    // 0x080011E8: sw          $s0, 0xE8($t5)
    MEM_W(0XE8, ctx->r13) = ctx->r16;
    // 0x080011EC: lw          $t7, 0xD4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XD4);
    // 0x080011F0: sb          $t6, 0xE1($t7)
    MEM_B(0XE1, ctx->r15) = ctx->r14;
    // 0x080011F4: lw          $t0, 0xD4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XD4);
    // 0x080011F8: lhu         $t8, 0xE4($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0XE4);
    // 0x080011FC: sh          $t8, 0xE4($t0)
    MEM_H(0XE4, ctx->r8) = ctx->r24;
L_08001200:
    // 0x08001200: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x08001204: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001208: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x0800120C: jalr        $t9
    // 0x08001210: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001210: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_3:
    // 0x08001214: beq         $v0, $zero, L_08001268
    if (ctx->r2 == 0) {
        // 0x08001218: sw          $v0, 0xD8($s0)
        MEM_W(0XD8, ctx->r16) = ctx->r2;
            goto L_08001268;
    }
    // 0x08001218: sw          $v0, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = ctx->r2;
    // 0x0800121C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001220: addiu       $t1, $zero, 0x28
    ctx->r9 = ADD32(0, 0X28);
    // 0x08001224: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08001228: sh          $t1, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r9;
    // 0x0800122C: jalr        $t9
    // 0x08001230: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001230: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    after_4:
    // 0x08001234: lw          $t3, 0xD8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XD8);
    // 0x08001238: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x0800123C: sw          $v0, 0x2C($t3)
    MEM_W(0X2C, ctx->r11) = ctx->r2;
    // 0x08001240: lw          $t5, 0xD8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XD8);
    // 0x08001244: lw          $t4, 0xD4($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XD4);
    // 0x08001248: sw          $t4, 0xD0($t5)
    MEM_W(0XD0, ctx->r13) = ctx->r12;
    // 0x0800124C: lw          $t6, 0xD8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XD8);
    // 0x08001250: sw          $s0, 0xE8($t6)
    MEM_W(0XE8, ctx->r14) = ctx->r16;
    // 0x08001254: lw          $t8, 0xD8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XD8);
    // 0x08001258: sb          $t7, 0xE1($t8)
    MEM_B(0XE1, ctx->r24) = ctx->r15;
    // 0x0800125C: lw          $t1, 0xD8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XD8);
    // 0x08001260: lhu         $t0, 0xE4($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0XE4);
    // 0x08001264: sh          $t0, 0xE4($t1)
    MEM_H(0XE4, ctx->r9) = ctx->r8;
L_08001268:
    // 0x08001268: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x0800126C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001270: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x08001274: jalr        $t9
    // 0x08001278: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08001278: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_5:
    // 0x0800127C: beq         $v0, $zero, L_080012D0
    if (ctx->r2 == 0) {
        // 0x08001280: sw          $v0, 0xDC($s0)
        MEM_W(0XDC, ctx->r16) = ctx->r2;
            goto L_080012D0;
    }
    // 0x08001280: sw          $v0, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->r2;
    // 0x08001284: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001288: addiu       $t2, $zero, 0x28
    ctx->r10 = ADD32(0, 0X28);
    // 0x0800128C: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08001290: sh          $t2, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r10;
    // 0x08001294: jalr        $t9
    // 0x08001298: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08001298: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    after_6:
    // 0x0800129C: lw          $t4, 0xDC($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XDC);
    // 0x080012A0: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x080012A4: sw          $v0, 0x2C($t4)
    MEM_W(0X2C, ctx->r12) = ctx->r2;
    // 0x080012A8: lw          $t6, 0xDC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XDC);
    // 0x080012AC: lw          $t5, 0xD8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XD8);
    // 0x080012B0: sw          $t5, 0xD0($t6)
    MEM_W(0XD0, ctx->r14) = ctx->r13;
    // 0x080012B4: lw          $t7, 0xDC($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XDC);
    // 0x080012B8: sw          $s0, 0xE8($t7)
    MEM_W(0XE8, ctx->r15) = ctx->r16;
    // 0x080012BC: lw          $t0, 0xDC($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XDC);
    // 0x080012C0: sb          $t8, 0xE1($t0)
    MEM_B(0XE1, ctx->r8) = ctx->r24;
    // 0x080012C4: lw          $t2, 0xDC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XDC);
    // 0x080012C8: lhu         $t1, 0xE4($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0XE4);
    // 0x080012CC: sh          $t1, 0xE4($t2)
    MEM_H(0XE4, ctx->r10) = ctx->r9;
L_080012D0:
    // 0x080012D0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080012D4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080012D8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(31, 0X12F8) << 16);
    // 0x080012DC: jalr        $t9
    // 0x080012E0: addiu       $a0, $a0, 0x12F8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0X12F8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080012E0: addiu       $a0, $a0, 0x12F8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0X12F8));
    after_7:
    // 0x080012E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080012E8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080012EC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x080012F0: jr          $ra
    // 0x080012F4: nop

    TRACE_RETURN()
    return;
    // 0x080012F4: nop

;}
RECOMP_FUNC void func_08001C48_6EAD98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001C48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001C4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001C50: lui         $t6, 0x8000
    ctx->r14 = S32(0X8000 << 16);
    // 0x08001C54: ori         $t6, $t6, 0x20
    ctx->r14 = ctx->r14 | 0X20;
    // 0x08001C58: addiu       $t7, $zero, 0x4000
    ctx->r15 = ADD32(0, 0X4000);
    // 0x08001C5C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001C60: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x08001C64: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08001C68: sw          $t7, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r15;
    // 0x08001C6C: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08001C70: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x08001C74: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001C78: jalr        $t9
    // 0x08001C7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001C7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x08001C80: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(31, 0X5428) << 16);
    // 0x08001C84: lwc1        $f0, 0x5428($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(31, 0X5428));
    // 0x08001C88: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x08001C8C: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x08001C90: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001C94: sb          $zero, 0x6C($a2)
    MEM_B(0X6C, ctx->r6) = 0;
    // 0x08001C98: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001C9C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(31, 0X1CC4) << 16);
    // 0x08001CA0: addiu       $a0, $a0, 0x1CC4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0X1CC4));
    // 0x08001CA4: swc1        $f0, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->f0.u32l;
    // 0x08001CA8: swc1        $f0, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->f0.u32l;
    // 0x08001CAC: jalr        $t9
    // 0x08001CB0: swc1        $f0, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001CB0: swc1        $f0, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->f0.u32l;
    after_1:
    // 0x08001CB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001CB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001CBC: jr          $ra
    // 0x08001CC0: nop

    TRACE_RETURN()
    return;
    // 0x08001CC0: nop

;}
RECOMP_FUNC void func_08002160_6EB2B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002160: lw          $t6, 0x84($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X84);
    // 0x08002164: lwc1        $f2, 0x8($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X8);
    // 0x08002168: lui         $at, 0x4320
    ctx->r1 = S32(0X4320 << 16);
    // 0x0800216C: lwc1        $f0, 0x8($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X8);
    // 0x08002170: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08002174: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x08002178: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x0800217C: nop

    // 0x08002180: bc1fl       L_08002198
    if (!c1cs) {
        // 0x08002184: sub.s       $f12, $f0, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
            goto L_08002198;
    }
    goto skip_0;
    // 0x08002184: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    skip_0:
    // 0x08002188: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x0800218C: b           L_08002198
    // 0x08002190: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
        goto L_08002198;
    // 0x08002190: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    // 0x08002194: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
L_08002198:
    // 0x08002198: c.lt.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl < ctx->f12.fl;
    // 0x0800219C: nop

    // 0x080021A0: bc1fl       L_080021C4
    if (!c1cs) {
        // 0x080021A4: lw          $t9, 0x60($a0)
        ctx->r25 = MEM_W(ctx->r4, 0X60);
            goto L_080021C4;
    }
    goto skip_1;
    // 0x080021A4: lw          $t9, 0x60($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X60);
    skip_1:
    // 0x080021A8: lw          $t7, 0x60($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X60);
    // 0x080021AC: lui         $at, 0x7FFF
    ctx->r1 = S32(0X7FFF << 16);
    // 0x080021B0: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x080021B4: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x080021B8: b           L_080021D0
    // 0x080021BC: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
        goto L_080021D0;
    // 0x080021BC: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
    // 0x080021C0: lw          $t9, 0x60($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X60);
L_080021C4:
    // 0x080021C4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x080021C8: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x080021CC: sw          $t0, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r8;
L_080021D0:
    // 0x080021D0: lw          $t1, -0x39FC($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X39FC);
    // 0x080021D4: lw          $t2, 0xA0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0XA0);
    // 0x080021D8: bnel        $a1, $t2, L_08002204
    if (ctx->r5 != ctx->r10) {
        // 0x080021DC: lw          $v0, 0xE8($a0)
        ctx->r2 = MEM_W(ctx->r4, 0XE8);
            goto L_08002204;
    }
    goto skip_2;
    // 0x080021DC: lw          $v0, 0xE8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XE8);
    skip_2:
    // 0x080021E0: lw          $t4, 0xE8($a0)
    ctx->r12 = MEM_W(ctx->r4, 0XE8);
    // 0x080021E4: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x080021E8: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(31, 0X54B8) << 16);
    // 0x080021EC: sb          $t3, 0xEC($t4)
    MEM_B(0XEC, ctx->r12) = ctx->r11;
    // 0x080021F0: lw          $t5, 0xE8($a0)
    ctx->r13 = MEM_W(ctx->r4, 0XE8);
    // 0x080021F4: lwc1        $f6, 0x54B8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(31, 0X54B8));
    // 0x080021F8: b           L_08002210
    // 0x080021FC: swc1        $f6, 0xD0($t5)
    MEM_W(0XD0, ctx->r13) = ctx->f6.u32l;
        goto L_08002210;
    // 0x080021FC: swc1        $f6, 0xD0($t5)
    MEM_W(0XD0, ctx->r13) = ctx->f6.u32l;
    // 0x08002200: lw          $v0, 0xE8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XE8);
L_08002204:
    // 0x08002204: lbu         $t6, 0xEC($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0XEC);
    // 0x08002208: andi        $t7, $t6, 0xFFFD
    ctx->r15 = ctx->r14 & 0XFFFD;
    // 0x0800220C: sb          $t7, 0xEC($v0)
    MEM_B(0XEC, ctx->r2) = ctx->r15;
L_08002210:
    // 0x08002210: lw          $v0, 0xE8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XE8);
    // 0x08002214: lbu         $t8, 0xEC($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0XEC);
    // 0x08002218: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x0800221C: sltiu       $at, $t9, 0x20
    ctx->r1 = ctx->r25 < 0X20 ? 1 : 0;
    // 0x08002220: beq         $at, $zero, L_080022EC
    if (ctx->r1 == 0) {
        // 0x08002224: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_080022EC;
    }
    // 0x08002224: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x08002228: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(31, 0X54BC) << 16);
    // 0x0800222C: addu        $at, $at, $t9
    gpr jr_addend_08002234 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x08002230: lw          $t9, 0x54BC($at)
    ctx->r25 = ADD32(ctx->r1, (int16_t)RELOC_LO16(31, 0X54BC));
    // 0x08002234: jr          $t9
    // 0x08002238: nop

    switch (jr_addend_08002234 >> 2) {
        case 0: goto L_0800223C; break;
        case 1: goto L_0800223C; break;
        case 2: goto L_080022EC; break;
        case 3: goto L_0800223C; break;
        case 4: goto L_080022EC; break;
        case 5: goto L_080022EC; break;
        case 6: goto L_080022EC; break;
        case 7: goto L_08002294; break;
        case 8: goto L_080022EC; break;
        case 9: goto L_080022EC; break;
        case 10: goto L_080022EC; break;
        case 11: goto L_080022EC; break;
        case 12: goto L_080022EC; break;
        case 13: goto L_080022EC; break;
        case 14: goto L_080022EC; break;
        case 15: goto L_08002294; break;
        case 16: goto L_080022EC; break;
        case 17: goto L_080022EC; break;
        case 18: goto L_080022EC; break;
        case 19: goto L_080022EC; break;
        case 20: goto L_080022EC; break;
        case 21: goto L_080022EC; break;
        case 22: goto L_080022EC; break;
        case 23: goto L_080022EC; break;
        case 24: goto L_080022EC; break;
        case 25: goto L_080022EC; break;
        case 26: goto L_080022EC; break;
        case 27: goto L_080022EC; break;
        case 28: goto L_080022EC; break;
        case 29: goto L_080022EC; break;
        case 30: goto L_080022EC; break;
        case 31: goto L_08002294; break;
        default: switch_error(__func__, 0x08002234, 0x080054BC);
    }
    // 0x08002238: nop

L_0800223C:
    // 0x0800223C: lwc1        $f8, 0xD0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XD0);
    // 0x08002240: lui         $at, 0x4008
    ctx->r1 = S32(0X4008 << 16);
    // 0x08002244: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x08002248: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x0800224C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x08002250: lui         $at, 0x4014
    ctx->r1 = S32(0X4014 << 16);
    // 0x08002254: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x08002258: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x0800225C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08002260: lwc1        $f8, 0xC($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0XC);
    // 0x08002264: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x08002268: div.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = DIV_D(ctx->f18.d, ctx->f4.d);
    // 0x0800226C: sub.d       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f6.d); 
    ctx->f16.d = ctx->f10.d - ctx->f6.d;
    // 0x08002270: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    // 0x08002274: swc1        $f12, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f12.u32l;
    // 0x08002278: lwc1        $f0, 0xE0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XE0);
    // 0x0800227C: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x08002280: nop

    // 0x08002284: bc1f        L_08002320
    if (!c1cs) {
        // 0x08002288: nop
    
            goto L_08002320;
    }
    // 0x08002288: nop

    // 0x0800228C: jr          $ra
    // 0x08002290: swc1        $f0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f0.u32l;
    TRACE_RETURN()
    return;
    // 0x08002290: swc1        $f0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f0.u32l;
L_08002294:
    // 0x08002294: lwc1        $f18, 0xD0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0XD0);
    // 0x08002298: lui         $at, 0x4008
    ctx->r1 = S32(0X4008 << 16);
    // 0x0800229C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x080022A0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x080022A4: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x080022A8: lui         $at, 0x4014
    ctx->r1 = S32(0X4014 << 16);
    // 0x080022AC: mul.d       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f4.d, ctx->f8.d);
    // 0x080022B0: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x080022B4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x080022B8: lwc1        $f18, 0xC($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0XC);
    // 0x080022BC: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x080022C0: div.d       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f6.d); 
    ctx->f16.d = DIV_D(ctx->f10.d, ctx->f6.d);
    // 0x080022C4: add.d       $f8, $f4, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f16.d); 
    ctx->f8.d = ctx->f4.d + ctx->f16.d;
    // 0x080022C8: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    // 0x080022CC: swc1        $f12, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f12.u32l;
    // 0x080022D0: lwc1        $f0, 0xDC($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XDC);
    // 0x080022D4: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x080022D8: nop

    // 0x080022DC: bc1f        L_08002320
    if (!c1cs) {
        // 0x080022E0: nop
    
            goto L_08002320;
    }
    // 0x080022E0: nop

    // 0x080022E4: jr          $ra
    // 0x080022E8: swc1        $f0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f0.u32l;
    TRACE_RETURN()
    return;
    // 0x080022E8: swc1        $f0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f0.u32l;
L_080022EC:
    // 0x080022EC: lwc1        $f10, 0xC($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0XC);
    // 0x080022F0: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(31, 0X5540) << 16);
    // 0x080022F4: ldc1        $f18, 0x5540($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(31, 0X5540));
    // 0x080022F8: cvt.d.s     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f6.d = CVT_D_S(ctx->f10.fl);
    // 0x080022FC: sub.d       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f6.d - ctx->f18.d;
    // 0x08002300: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    // 0x08002304: swc1        $f12, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f12.u32l;
    // 0x08002308: lwc1        $f0, 0xE0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XE0);
    // 0x0800230C: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x08002310: nop

    // 0x08002314: bc1f        L_08002320
    if (!c1cs) {
        // 0x08002318: nop
    
            goto L_08002320;
    }
    // 0x08002318: nop

    // 0x0800231C: swc1        $f0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f0.u32l;
L_08002320:
    // 0x08002320: jr          $ra
    // 0x08002324: nop

    TRACE_RETURN()
    return;
    // 0x08002324: nop

;}
RECOMP_FUNC void func_08002C00_6EBD50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002C00: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x08002C04: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x08002C08: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(31, 0X5788) << 16);
    // 0x08002C0C: ldc1        $f22, 0x5788($at)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(31, 0X5788));
    // 0x08002C10: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(31, 0X5790) << 16);
    // 0x08002C14: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x08002C18: ldc1        $f24, 0x5790($at)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(31, 0X5790));
    // 0x08002C1C: mtc1        $zero, $f5
    ctx->f_odd[(5 - 1) * 2] = 0;
    // 0x08002C20: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08002C24: sdc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X30, ctx->r29);
    // 0x08002C28: lui         $at, 0xC024
    ctx->r1 = S32(0XC024 << 16);
    // 0x08002C2C: mul.d       $f6, $f4, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f24.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f24.d);
    // 0x08002C30: mtc1        $at, $f27
    ctx->f_odd[(27 - 1) * 2] = ctx->r1;
    // 0x08002C34: mtc1        $zero, $f26
    ctx->f26.u32l = 0;
    // 0x08002C38: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x08002C3C: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x08002C40: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x08002C44: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x08002C48: sw          $fp, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r30;
    // 0x08002C4C: add.d       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f22.d); 
    ctx->f8.d = ctx->f6.d + ctx->f22.d;
    // 0x08002C50: sw          $s7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r23;
    // 0x08002C54: sw          $s6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r22;
    // 0x08002C58: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x08002C5C: c.lt.d      $f8, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f8.d < ctx->f26.d;
    // 0x08002C60: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x08002C64: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x08002C68: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x08002C6C: sdc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X38, ctx->r29);
    // 0x08002C70: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x08002C74: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x08002C78: bc1f        L_08002D88
    if (!c1cs) {
        // 0x08002C7C: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_08002D88;
    }
    // 0x08002C7C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x08002C80: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x08002C84: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x08002C88: addiu       $fp, $zero, 0x1
    ctx->r30 = ADD32(0, 0X1);
    // 0x08002C8C: addiu       $s2, $zero, 0x2
    ctx->r18 = ADD32(0, 0X2);
    // 0x08002C90: addiu       $v1, $zero, 0x96
    ctx->r3 = ADD32(0, 0X96);
L_08002C94:
    // 0x08002C94: div         $zero, $s3, $v1
    lo = S32(S64(S32(ctx->r19)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r19)) % S64(S32(ctx->r3)));
    // 0x08002C98: mfhi        $t6
    ctx->r14 = hi;
    // 0x08002C9C: bne         $v1, $zero, L_08002CA8
    if (ctx->r3 != 0) {
        // 0x08002CA0: nop
    
            goto L_08002CA8;
    }
    // 0x08002CA0: nop

    // 0x08002CA4: break       7
    do_break(134229156);
L_08002CA8:
    // 0x08002CA8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x08002CAC: bne         $v1, $at, L_08002CC0
    if (ctx->r3 != ctx->r1) {
        // 0x08002CB0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_08002CC0;
    }
    // 0x08002CB0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08002CB4: bne         $s3, $at, L_08002CC0
    if (ctx->r19 != ctx->r1) {
        // 0x08002CB8: nop
    
            goto L_08002CC0;
    }
    // 0x08002CB8: nop

    // 0x08002CBC: break       6
    do_break(134229180);
L_08002CC0:
    // 0x08002CC0: bnel        $t6, $zero, L_08002D64
    if (ctx->r14 != 0) {
        // 0x08002CC4: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_08002D64;
    }
    goto skip_0;
    // 0x08002CC4: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_0:
    // 0x08002CC8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002CCC: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08002CD0: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(31, 0X3168) << 16);
    // 0x08002CD4: addiu       $a1, $a1, 0x3168
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(31, 0X3168));
    // 0x08002CD8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x08002CDC: jalr        $t9
    // 0x08002CE0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002CE0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_0:
    // 0x08002CE4: beq         $v0, $zero, L_08002D5C
    if (ctx->r2 == 0) {
        // 0x08002CE8: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_08002D5C;
    }
    // 0x08002CE8: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x08002CEC: mtc1        $s3, $f10
    ctx->f10.u32l = ctx->r19;
    // 0x08002CF0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002CF4: addiu       $t7, $zero, 0x28
    ctx->r15 = ADD32(0, 0X28);
    // 0x08002CF8: cvt.d.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.d = CVT_D_W(ctx->f10.u32l);
    // 0x08002CFC: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08002D00: sh          $t7, 0x28($s1)
    MEM_H(0X28, ctx->r17) = ctx->r15;
    // 0x08002D04: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x08002D08: mul.d       $f18, $f16, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f24.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f24.d);
    // 0x08002D0C: jalr        $t9
    // 0x08002D10: add.d       $f20, $f18, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f22.d); 
    ctx->f20.d = ctx->f18.d + ctx->f22.d;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002D10: add.d       $f20, $f18, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f22.d); 
    ctx->f20.d = ctx->f18.d + ctx->f22.d;
    after_1:
    // 0x08002D14: sw          $v0, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r2;
    // 0x08002D18: lbu         $t8, 0xEC($s4)
    ctx->r24 = MEM_BU(ctx->r20, 0XEC);
    // 0x08002D1C: cvt.s.d     $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.d); 
    ctx->f4.fl = CVT_S_D(ctx->f20.d);
    // 0x08002D20: addiu       $t0, $t8, 0x1
    ctx->r8 = ADD32(ctx->r24, 0X1);
    // 0x08002D24: andi        $v1, $t0, 0xFF
    ctx->r3 = ctx->r8 & 0XFF;
    // 0x08002D28: slti        $at, $v1, 0xA
    ctx->r1 = SIGNED(ctx->r3) < 0XA ? 1 : 0;
    // 0x08002D2C: bne         $at, $zero, L_08002D3C
    if (ctx->r1 != 0) {
        // 0x08002D30: sb          $t0, 0xEC($s4)
        MEM_B(0XEC, ctx->r20) = ctx->r8;
            goto L_08002D3C;
    }
    // 0x08002D30: sb          $t0, 0xEC($s4)
    MEM_B(0XEC, ctx->r20) = ctx->r8;
    // 0x08002D34: sb          $fp, 0xEC($s4)
    MEM_B(0XEC, ctx->r20) = ctx->r30;
    // 0x08002D38: andi        $v1, $fp, 0xFF
    ctx->r3 = ctx->r30 & 0XFF;
L_08002D3C:
    // 0x08002D3C: lw          $s0, 0x18($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X18);
    // 0x08002D40: lui         $at, 0x4296
    ctx->r1 = S32(0X4296 << 16);
    // 0x08002D44: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08002D48: sb          $v1, 0xEC($s1)
    MEM_B(0XEC, ctx->r17) = ctx->r3;
    // 0x08002D4C: sb          $s2, 0xED($s1)
    MEM_B(0XED, ctx->r17) = ctx->r18;
    // 0x08002D50: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
    // 0x08002D54: swc1        $f28, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f28.u32l;
    // 0x08002D58: swc1        $f6, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f6.u32l;
L_08002D5C:
    // 0x08002D5C: addiu       $v1, $zero, 0x96
    ctx->r3 = ADD32(0, 0X96);
    // 0x08002D60: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_08002D64:
    // 0x08002D64: mtc1        $s3, $f8
    ctx->f8.u32l = ctx->r19;
    // 0x08002D68: nop

    // 0x08002D6C: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x08002D70: mul.d       $f16, $f10, $f24
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f24.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f24.d);
    // 0x08002D74: add.d       $f18, $f16, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f22.d); 
    ctx->f18.d = ctx->f16.d + ctx->f22.d;
    // 0x08002D78: c.lt.d      $f18, $f26
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f18.d < ctx->f26.d;
    // 0x08002D7C: nop

    // 0x08002D80: bc1t        L_08002C94
    if (c1cs) {
        // 0x08002D84: nop
    
            goto L_08002C94;
    }
    // 0x08002D84: nop

L_08002D88:
    // 0x08002D88: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x08002D8C: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x08002D90: slti        $at, $s3, 0x96
    ctx->r1 = SIGNED(ctx->r19) < 0X96 ? 1 : 0;
    // 0x08002D94: addiu       $v1, $zero, 0x96
    ctx->r3 = ADD32(0, 0X96);
    // 0x08002D98: bne         $at, $zero, L_08002DB0
    if (ctx->r1 != 0) {
        // 0x08002D9C: addiu       $fp, $zero, 0x1
        ctx->r30 = ADD32(0, 0X1);
            goto L_08002DB0;
    }
    // 0x08002D9C: addiu       $fp, $zero, 0x1
    ctx->r30 = ADD32(0, 0X1);
    // 0x08002DA0: addiu       $s3, $s3, -0x96
    ctx->r19 = ADD32(ctx->r19, -0X96);
L_08002DA4:
    // 0x08002DA4: slti        $at, $s3, 0x96
    ctx->r1 = SIGNED(ctx->r19) < 0X96 ? 1 : 0;
    // 0x08002DA8: beql        $at, $zero, L_08002DA4
    if (ctx->r1 == 0) {
        // 0x08002DAC: addiu       $s3, $s3, -0x96
        ctx->r19 = ADD32(ctx->r19, -0X96);
            goto L_08002DA4;
    }
    goto skip_1;
    // 0x08002DAC: addiu       $s3, $s3, -0x96
    ctx->r19 = ADD32(ctx->r19, -0X96);
    skip_1:
L_08002DB0:
    // 0x08002DB0: subu        $v0, $v1, $s3
    ctx->r2 = SUB32(ctx->r3, ctx->r19);
    // 0x08002DB4: slti        $at, $v0, 0x201
    ctx->r1 = SIGNED(ctx->r2) < 0X201 ? 1 : 0;
    // 0x08002DB8: beq         $at, $zero, L_08002ED8
    if (ctx->r1 == 0) {
        // 0x08002DBC: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_08002ED8;
    }
    // 0x08002DBC: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x08002DC0: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x08002DC4: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x08002DC8: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x08002DCC: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x08002DD0: or          $s5, $v0, $zero
    ctx->r21 = ctx->r2 | 0;
L_08002DD4:
    // 0x08002DD4: div         $zero, $s3, $v1
    lo = S32(S64(S32(ctx->r19)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r19)) % S64(S32(ctx->r3)));
    // 0x08002DD8: mfhi        $t1
    ctx->r9 = hi;
    // 0x08002DDC: bne         $v1, $zero, L_08002DE8
    if (ctx->r3 != 0) {
        // 0x08002DE0: nop
    
            goto L_08002DE8;
    }
    // 0x08002DE0: nop

    // 0x08002DE4: break       7
    do_break(134229476);
L_08002DE8:
    // 0x08002DE8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x08002DEC: bne         $v1, $at, L_08002E00
    if (ctx->r3 != ctx->r1) {
        // 0x08002DF0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_08002E00;
    }
    // 0x08002DF0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08002DF4: bne         $s3, $at, L_08002E00
    if (ctx->r19 != ctx->r1) {
        // 0x08002DF8: nop
    
            goto L_08002E00;
    }
    // 0x08002DF8: nop

    // 0x08002DFC: break       6
    do_break(134229500);
L_08002E00:
    // 0x08002E00: bnel        $t1, $zero, L_08002ECC
    if (ctx->r9 != 0) {
        // 0x08002E04: addiu       $s5, $s5, 0x1
        ctx->r21 = ADD32(ctx->r21, 0X1);
            goto L_08002ECC;
    }
    goto skip_2;
    // 0x08002E04: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    skip_2:
    // 0x08002E08: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002E0C: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08002E10: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(31, 0X3168) << 16);
    // 0x08002E14: addiu       $a1, $a1, 0x3168
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(31, 0X3168));
    // 0x08002E18: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x08002E1C: jalr        $t9
    // 0x08002E20: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002E20: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_2:
    // 0x08002E24: beq         $v0, $zero, L_08002EC4
    if (ctx->r2 == 0) {
        // 0x08002E28: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_08002EC4;
    }
    // 0x08002E28: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x08002E2C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002E30: addiu       $t2, $zero, 0x28
    ctx->r10 = ADD32(0, 0X28);
    // 0x08002E34: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08002E38: lui         $s6, 0x8000
    ctx->r22 = S32(0X8000 << 16);
    // 0x08002E3C: lui         $s7, 0x8000
    ctx->r23 = S32(0X8000 << 16);
    // 0x08002E40: sh          $t2, 0x28($s1)
    MEM_H(0X28, ctx->r17) = ctx->r10;
    // 0x08002E44: addiu       $s7, $s7, 0x3EA0
    ctx->r23 = ADD32(ctx->r23, 0X3EA0);
    // 0x08002E48: addiu       $s6, $s6, 0x3E10
    ctx->r22 = ADD32(ctx->r22, 0X3E10);
    // 0x08002E4C: jalr        $t9
    // 0x08002E50: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002E50: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    after_3:
    // 0x08002E54: sw          $v0, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r2;
    // 0x08002E58: lbu         $t3, 0xEC($s4)
    ctx->r11 = MEM_BU(ctx->r20, 0XEC);
    // 0x08002E5C: andi        $s2, $s5, 0xFFFF
    ctx->r18 = ctx->r21 & 0XFFFF;
    // 0x08002E60: andi        $a0, $s2, 0xFFFF
    ctx->r4 = ctx->r18 & 0XFFFF;
    // 0x08002E64: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x08002E68: andi        $v1, $t4, 0xFF
    ctx->r3 = ctx->r12 & 0XFF;
    // 0x08002E6C: slti        $at, $v1, 0xA
    ctx->r1 = SIGNED(ctx->r3) < 0XA ? 1 : 0;
    // 0x08002E70: bne         $at, $zero, L_08002E80
    if (ctx->r1 != 0) {
        // 0x08002E74: sb          $t4, 0xEC($s4)
        MEM_B(0XEC, ctx->r20) = ctx->r12;
            goto L_08002E80;
    }
    // 0x08002E74: sb          $t4, 0xEC($s4)
    MEM_B(0XEC, ctx->r20) = ctx->r12;
    // 0x08002E78: sb          $fp, 0xEC($s4)
    MEM_B(0XEC, ctx->r20) = ctx->r30;
    // 0x08002E7C: andi        $v1, $fp, 0xFF
    ctx->r3 = ctx->r30 & 0XFF;
L_08002E80:
    // 0x08002E80: sb          $v1, 0xEC($s1)
    MEM_B(0XEC, ctx->r17) = ctx->r3;
    // 0x08002E84: sb          $fp, 0xED($s1)
    MEM_B(0XED, ctx->r17) = ctx->r30;
    // 0x08002E88: sh          $s5, 0xEE($s1)
    MEM_H(0XEE, ctx->r17) = ctx->r21;
    // 0x08002E8C: jalr        $s6
    // 0x08002E90: lw          $s0, 0x18($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X18);
    LOOKUP_FUNC(ctx->r22)(rdram, ctx);
        goto after_4;
    // 0x08002E90: lw          $s0, 0x18($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X18);
    after_4:
    // 0x08002E94: mul.s       $f4, $f0, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x08002E98: swc1        $f28, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f28.u32l;
    // 0x08002E9C: andi        $a0, $s2, 0xFFFF
    ctx->r4 = ctx->r18 & 0XFFFF;
    // 0x08002EA0: add.s       $f6, $f4, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f22.fl;
    // 0x08002EA4: jalr        $s7
    // 0x08002EA8: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r23)(rdram, ctx);
        goto after_5;
    // 0x08002EA8: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
    after_5:
    // 0x08002EAC: mul.s       $f8, $f0, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x08002EB0: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x08002EB4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08002EB8: nop

    // 0x08002EBC: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x08002EC0: swc1        $f16, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f16.u32l;
L_08002EC4:
    // 0x08002EC4: addiu       $v1, $zero, 0x96
    ctx->r3 = ADD32(0, 0X96);
    // 0x08002EC8: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
L_08002ECC:
    // 0x08002ECC: slti        $at, $s5, 0x201
    ctx->r1 = SIGNED(ctx->r21) < 0X201 ? 1 : 0;
    // 0x08002ED0: bne         $at, $zero, L_08002DD4
    if (ctx->r1 != 0) {
        // 0x08002ED4: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_08002DD4;
    }
    // 0x08002ED4: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_08002ED8:
    // 0x08002ED8: slti        $at, $s3, 0x96
    ctx->r1 = SIGNED(ctx->r19) < 0X96 ? 1 : 0;
    // 0x08002EDC: bnel        $at, $zero, L_08002EF8
    if (ctx->r1 != 0) {
        // 0x08002EE0: subu        $v0, $v1, $s3
        ctx->r2 = SUB32(ctx->r3, ctx->r19);
            goto L_08002EF8;
    }
    goto skip_3;
    // 0x08002EE0: subu        $v0, $v1, $s3
    ctx->r2 = SUB32(ctx->r3, ctx->r19);
    skip_3:
    // 0x08002EE4: addiu       $s3, $s3, -0x96
    ctx->r19 = ADD32(ctx->r19, -0X96);
L_08002EE8:
    // 0x08002EE8: slti        $at, $s3, 0x96
    ctx->r1 = SIGNED(ctx->r19) < 0X96 ? 1 : 0;
    // 0x08002EEC: beql        $at, $zero, L_08002EE8
    if (ctx->r1 == 0) {
        // 0x08002EF0: addiu       $s3, $s3, -0x96
        ctx->r19 = ADD32(ctx->r19, -0X96);
            goto L_08002EE8;
    }
    goto skip_4;
    // 0x08002EF0: addiu       $s3, $s3, -0x96
    ctx->r19 = ADD32(ctx->r19, -0X96);
    skip_4:
    // 0x08002EF4: subu        $v0, $v1, $s3
    ctx->r2 = SUB32(ctx->r3, ctx->r19);
L_08002EF8:
    // 0x08002EF8: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x08002EFC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(31, 0X5798) << 16);
    // 0x08002F00: ldc1        $f22, 0x5798($at)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(31, 0X5798));
    // 0x08002F04: cvt.d.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.d = CVT_D_W(ctx->f18.u32l);
    // 0x08002F08: or          $s5, $v0, $zero
    ctx->r21 = ctx->r2 | 0;
    // 0x08002F0C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x08002F10: mul.d       $f6, $f4, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f24.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f24.d);
    // 0x08002F14: sub.d       $f8, $f26, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f26.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f26.d - ctx->f6.d;
    // 0x08002F18: c.lt.d      $f22, $f8
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f22.d < ctx->f8.d;
    // 0x08002F1C: nop

    // 0x08002F20: bc1fl       L_0800301C
    if (!c1cs) {
        // 0x08002F24: slti        $at, $s3, 0x96
        ctx->r1 = SIGNED(ctx->r19) < 0X96 ? 1 : 0;
            goto L_0800301C;
    }
    goto skip_5;
    // 0x08002F24: slti        $at, $s3, 0x96
    ctx->r1 = SIGNED(ctx->r19) < 0X96 ? 1 : 0;
    skip_5:
L_08002F28:
    // 0x08002F28: div         $zero, $s3, $v1
    lo = S32(S64(S32(ctx->r19)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r19)) % S64(S32(ctx->r3)));
    // 0x08002F2C: mfhi        $t5
    ctx->r13 = hi;
    // 0x08002F30: bne         $v1, $zero, L_08002F3C
    if (ctx->r3 != 0) {
        // 0x08002F34: nop
    
            goto L_08002F3C;
    }
    // 0x08002F34: nop

    // 0x08002F38: break       7
    do_break(134229816);
L_08002F3C:
    // 0x08002F3C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x08002F40: bne         $v1, $at, L_08002F54
    if (ctx->r3 != ctx->r1) {
        // 0x08002F44: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_08002F54;
    }
    // 0x08002F44: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08002F48: bne         $s3, $at, L_08002F54
    if (ctx->r19 != ctx->r1) {
        // 0x08002F4C: nop
    
            goto L_08002F54;
    }
    // 0x08002F4C: nop

    // 0x08002F50: break       6
    do_break(134229840);
L_08002F54:
    // 0x08002F54: bnel        $t5, $zero, L_08002FF4
    if (ctx->r13 != 0) {
        // 0x08002F58: addiu       $s5, $s5, 0x1
        ctx->r21 = ADD32(ctx->r21, 0X1);
            goto L_08002FF4;
    }
    goto skip_6;
    // 0x08002F58: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    skip_6:
    // 0x08002F5C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002F60: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08002F64: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(31, 0X3168) << 16);
    // 0x08002F68: addiu       $a1, $a1, 0x3168
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(31, 0X3168));
    // 0x08002F6C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x08002F70: jalr        $t9
    // 0x08002F74: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08002F74: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_6:
    // 0x08002F78: beq         $v0, $zero, L_08002FEC
    if (ctx->r2 == 0) {
        // 0x08002F7C: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_08002FEC;
    }
    // 0x08002F7C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x08002F80: mtc1        $s5, $f10
    ctx->f10.u32l = ctx->r21;
    // 0x08002F84: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002F88: addiu       $t6, $zero, 0x28
    ctx->r14 = ADD32(0, 0X28);
    // 0x08002F8C: cvt.d.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.d = CVT_D_W(ctx->f10.u32l);
    // 0x08002F90: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08002F94: sh          $t6, 0x28($s1)
    MEM_H(0X28, ctx->r17) = ctx->r14;
    // 0x08002F98: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x08002F9C: mul.d       $f18, $f16, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f24.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f24.d);
    // 0x08002FA0: jalr        $t9
    // 0x08002FA4: sub.d       $f20, $f26, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f26.d); NAN_CHECK(ctx->f18.d); 
    ctx->f20.d = ctx->f26.d - ctx->f18.d;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08002FA4: sub.d       $f20, $f26, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f26.d); NAN_CHECK(ctx->f18.d); 
    ctx->f20.d = ctx->f26.d - ctx->f18.d;
    after_7:
    // 0x08002FA8: sw          $v0, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r2;
    // 0x08002FAC: lbu         $t7, 0xEC($s4)
    ctx->r15 = MEM_BU(ctx->r20, 0XEC);
    // 0x08002FB0: cvt.s.d     $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.d); 
    ctx->f4.fl = CVT_S_D(ctx->f20.d);
    // 0x08002FB4: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x08002FB8: andi        $v1, $t8, 0xFF
    ctx->r3 = ctx->r24 & 0XFF;
    // 0x08002FBC: slti        $at, $v1, 0xA
    ctx->r1 = SIGNED(ctx->r3) < 0XA ? 1 : 0;
    // 0x08002FC0: bne         $at, $zero, L_08002FD0
    if (ctx->r1 != 0) {
        // 0x08002FC4: sb          $t8, 0xEC($s4)
        MEM_B(0XEC, ctx->r20) = ctx->r24;
            goto L_08002FD0;
    }
    // 0x08002FC4: sb          $t8, 0xEC($s4)
    MEM_B(0XEC, ctx->r20) = ctx->r24;
    // 0x08002FC8: sb          $fp, 0xEC($s4)
    MEM_B(0XEC, ctx->r20) = ctx->r30;
    // 0x08002FCC: andi        $v1, $fp, 0xFF
    ctx->r3 = ctx->r30 & 0XFF;
L_08002FD0:
    // 0x08002FD0: lw          $s0, 0x18($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X18);
    // 0x08002FD4: lui         $at, 0xC282
    ctx->r1 = S32(0XC282 << 16);
    // 0x08002FD8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08002FDC: sb          $v1, 0xEC($s1)
    MEM_B(0XEC, ctx->r17) = ctx->r3;
    // 0x08002FE0: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
    // 0x08002FE4: swc1        $f28, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f28.u32l;
    // 0x08002FE8: swc1        $f6, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f6.u32l;
L_08002FEC:
    // 0x08002FEC: addiu       $v1, $zero, 0x96
    ctx->r3 = ADD32(0, 0X96);
    // 0x08002FF0: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
L_08002FF4:
    // 0x08002FF4: mtc1        $s5, $f8
    ctx->f8.u32l = ctx->r21;
    // 0x08002FF8: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x08002FFC: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x08003000: mul.d       $f16, $f10, $f24
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f24.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f24.d);
    // 0x08003004: sub.d       $f18, $f26, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f26.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f26.d - ctx->f16.d;
    // 0x08003008: c.lt.d      $f22, $f18
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f22.d < ctx->f18.d;
    // 0x0800300C: nop

    // 0x08003010: bc1t        L_08002F28
    if (c1cs) {
        // 0x08003014: nop
    
            goto L_08002F28;
    }
    // 0x08003014: nop

    // 0x08003018: slti        $at, $s3, 0x96
    ctx->r1 = SIGNED(ctx->r19) < 0X96 ? 1 : 0;
L_0800301C:
    // 0x0800301C: bne         $at, $zero, L_08003034
    if (ctx->r1 != 0) {
        // 0x08003020: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(31, 0X308C) << 16);
            goto L_08003034;
    }
    // 0x08003020: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(31, 0X308C) << 16);
    // 0x08003024: addiu       $s3, $s3, -0x96
    ctx->r19 = ADD32(ctx->r19, -0X96);
L_08003028:
    // 0x08003028: slti        $at, $s3, 0x96
    ctx->r1 = SIGNED(ctx->r19) < 0X96 ? 1 : 0;
    // 0x0800302C: beql        $at, $zero, L_08003028
    if (ctx->r1 == 0) {
        // 0x08003030: addiu       $s3, $s3, -0x96
        ctx->r19 = ADD32(ctx->r19, -0X96);
            goto L_08003028;
    }
    goto skip_7;
    // 0x08003030: addiu       $s3, $s3, -0x96
    ctx->r19 = ADD32(ctx->r19, -0X96);
    skip_7:
L_08003034:
    // 0x08003034: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003038: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800303C: sh          $s3, 0x8A($s4)
    MEM_H(0X8A, ctx->r20) = ctx->r19;
    // 0x08003040: jalr        $t9
    // 0x08003044: addiu       $a0, $a0, 0x308C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0X308C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08003044: addiu       $a0, $a0, 0x308C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0X308C));
    after_8:
    // 0x08003048: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x0800304C: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x08003050: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x08003054: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x08003058: ldc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X30);
    // 0x0800305C: ldc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X38);
    // 0x08003060: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x08003064: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x08003068: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x0800306C: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x08003070: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x08003074: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x08003078: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x0800307C: lw          $s7, 0x5C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X5C);
    // 0x08003080: lw          $fp, 0x60($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X60);
    // 0x08003084: jr          $ra
    // 0x08003088: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    TRACE_RETURN()
    return;
    // 0x08003088: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_080016A0_6EA7F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080016A0: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x080016A4: lhu         $t7, -0x33D0($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X33D0);
    // 0x080016A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080016AC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080016B0: lhu         $t6, 0x1A($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X1A);
    // 0x080016B4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x080016B8: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x080016BC: sll         $t8, $t8, 5
    ctx->r24 = S32(ctx->r24 << 5);
    // 0x080016C0: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x080016C4: andi        $a0, $t9, 0x3FF
    ctx->r4 = ctx->r25 & 0X3FF;
    // 0x080016C8: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x080016CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080016D0: addiu       $t9, $t9, 0x3EA0
    ctx->r25 = ADD32(ctx->r25, 0X3EA0);
    // 0x080016D4: jalr        $t9
    // 0x080016D8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080016D8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x080016DC: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x080016E0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080016E4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x080016E8: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x080016EC: lhu         $t5, 0x16($a1)
    ctx->r13 = MEM_HU(ctx->r5, 0X16);
    // 0x080016F0: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x080016F4: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x080016F8: nop

    // 0x080016FC: addiu       $t3, $t2, 0x400
    ctx->r11 = ADD32(ctx->r10, 0X400);
    // 0x08001700: andi        $t4, $t3, 0x3FF
    ctx->r12 = ctx->r11 & 0X3FF;
    // 0x08001704: sh          $t4, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r12;
    // 0x08001708: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x0800170C: lhu         $t6, 0xE4($t7)
    ctx->r14 = MEM_HU(ctx->r15, 0XE4);
    // 0x08001710: addu        $t8, $t5, $t6
    ctx->r24 = ADD32(ctx->r13, ctx->r14);
    // 0x08001714: sh          $t8, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r24;
    // 0x08001718: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800171C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001720: jr          $ra
    // 0x08001724: nop

    TRACE_RETURN()
    return;
    // 0x08001724: nop

;}
RECOMP_FUNC void func_08000560_6E96B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000560: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000564: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000568: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800056C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000570: addiu       $t9, $t9, -0x4854
    ctx->r25 = ADD32(ctx->r25, -0X4854);
    // 0x08000574: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08000578: jalr        $t9
    // 0x0800057C: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800057C: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    after_0:
    // 0x08000580: beq         $v0, $zero, L_08000598
    if (ctx->r2 == 0) {
        // 0x08000584: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(31, 0X6D4) << 16);
            goto L_08000598;
    }
    // 0x08000584: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(31, 0X6D4) << 16);
    // 0x08000588: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800058C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000590: jalr        $t9
    // 0x08000594: addiu       $a0, $a0, 0x6D4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0X6D4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000594: addiu       $a0, $a0, 0x6D4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0X6D4));
    after_1:
L_08000598:
    // 0x08000598: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x0800059C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x080005A0: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x080005A4: lw          $t7, 0x68($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X68);
    // 0x080005A8: addiu       $a0, $zero, 0x272
    ctx->r4 = ADD32(0, 0X272);
    // 0x080005AC: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x080005B0: andi        $t8, $t7, 0x20
    ctx->r24 = ctx->r15 & 0X20;
    // 0x080005B4: bne         $t8, $zero, L_080005E8
    if (ctx->r24 != 0) {
        // 0x080005B8: lui         $a3, 0x43C8
        ctx->r7 = S32(0X43C8 << 16);
            goto L_080005E8;
    }
    // 0x080005B8: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    // 0x080005BC: lui         $t0, 0x8003
    ctx->r8 = S32(0X8003 << 16);
    // 0x080005C0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080005C4: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x080005C8: addiu       $t0, $t0, 0x521C
    ctx->r8 = ADD32(ctx->r8, 0X521C);
    // 0x080005CC: jalr        $t9
    // 0x080005D0: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080005D0: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    after_2:
    // 0x080005D4: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x080005D8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(31, 0X5F8) << 16);
    // 0x080005DC: addiu       $a0, $a0, 0x5F8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0X5F8));
    // 0x080005E0: jalr        $t9
    // 0x080005E4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080005E4: nop

    after_3:
L_080005E8:
    // 0x080005E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080005EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080005F0: jr          $ra
    // 0x080005F4: nop

    TRACE_RETURN()
    return;
    // 0x080005F4: nop

;}
RECOMP_FUNC void func_08000AD0_6E9C20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000AD0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08000AD4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08000AD8: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x08000ADC: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x08000AE0: lw          $v0, 0xE8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XE8);
    // 0x08000AE4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000AE8: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x08000AEC: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x08000AF0: bne         $t6, $zero, L_08000B00
    if (ctx->r14 != 0) {
        // 0x08000AF4: andi        $t7, $v0, 0x2
        ctx->r15 = ctx->r2 & 0X2;
            goto L_08000B00;
    }
    // 0x08000AF4: andi        $t7, $v0, 0x2
    ctx->r15 = ctx->r2 & 0X2;
    // 0x08000AF8: beql        $t7, $zero, L_08000B94
    if (ctx->r15 == 0) {
        // 0x08000AFC: lw          $v0, 0xE8($s0)
        ctx->r2 = MEM_W(ctx->r16, 0XE8);
            goto L_08000B94;
    }
    goto skip_0;
    // 0x08000AFC: lw          $v0, 0xE8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XE8);
    skip_0:
L_08000B00:
    // 0x08000B00: lbu         $t8, 0xD0($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XD0);
    // 0x08000B04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000B08: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000B0C: addiu       $t9, $t8, -0x30
    ctx->r25 = ADD32(ctx->r24, -0X30);
    // 0x08000B10: sb          $t9, 0xD0($s0)
    MEM_B(0XD0, ctx->r16) = ctx->r25;
    // 0x08000B14: andi        $a1, $t9, 0xFF
    ctx->r5 = ctx->r25 & 0XFF;
    // 0x08000B18: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000B1C: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08000B20: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08000B24: jalr        $t9
    // 0x08000B28: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000B28: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08000B2C: lwc1        $f4, 0x1C($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x08000B30: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(31, 0X5410) << 16);
    // 0x08000B34: ldc1        $f0, 0x5410($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(31, 0X5410));
    // 0x08000B38: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08000B3C: lwc1        $f16, 0x20($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X20);
    // 0x08000B40: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x08000B44: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000B48: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x08000B4C: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08000B50: mul.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x08000B54: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08000B58: lwc1        $f8, 0x24($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X24);
    // 0x08000B5C: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08000B60: swc1        $f10, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f10.u32l;
    // 0x08000B64: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x08000B68: swc1        $f6, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f6.u32l;
    // 0x08000B6C: mul.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f0.d);
    // 0x08000B70: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08000B74: swc1        $f18, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f18.u32l;
    // 0x08000B78: lbu         $t0, 0xD0($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XD0);
    // 0x08000B7C: slti        $at, $t0, 0x30
    ctx->r1 = SIGNED(ctx->r8) < 0X30 ? 1 : 0;
    // 0x08000B80: beql        $at, $zero, L_08000B94
    if (ctx->r1 == 0) {
        // 0x08000B84: lw          $v0, 0xE8($s0)
        ctx->r2 = MEM_W(ctx->r16, 0XE8);
            goto L_08000B94;
    }
    goto skip_1;
    // 0x08000B84: lw          $v0, 0xE8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XE8);
    skip_1:
    // 0x08000B88: jalr        $t9
    // 0x08000B8C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000B8C: nop

    after_1:
    // 0x08000B90: lw          $v0, 0xE8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XE8);
L_08000B94:
    // 0x08000B94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000B98: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000B9C: andi        $t1, $v0, 0x4
    ctx->r9 = ctx->r2 & 0X4;
    // 0x08000BA0: bne         $t1, $zero, L_08000BB0
    if (ctx->r9 != 0) {
        // 0x08000BA4: andi        $t2, $v0, 0x8
        ctx->r10 = ctx->r2 & 0X8;
            goto L_08000BB0;
    }
    // 0x08000BA4: andi        $t2, $v0, 0x8
    ctx->r10 = ctx->r2 & 0X8;
    // 0x08000BA8: beql        $t2, $zero, L_08000C54
    if (ctx->r10 == 0) {
        // 0x08000BAC: lhu         $t7, 0x16($s1)
        ctx->r15 = MEM_HU(ctx->r17, 0X16);
            goto L_08000C54;
    }
    goto skip_2;
    // 0x08000BAC: lhu         $t7, 0x16($s1)
    ctx->r15 = MEM_HU(ctx->r17, 0X16);
    skip_2:
L_08000BB0:
    // 0x08000BB0: lbu         $t3, 0xD0($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0XD0);
    // 0x08000BB4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08000BB8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000BBC: addiu       $t4, $t3, -0x2
    ctx->r12 = ADD32(ctx->r11, -0X2);
    // 0x08000BC0: andi        $a1, $t4, 0xFF
    ctx->r5 = ctx->r12 & 0XFF;
    // 0x08000BC4: slti        $at, $a1, 0x2
    ctx->r1 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x08000BC8: beq         $at, $zero, L_08000BDC
    if (ctx->r1 == 0) {
        // 0x08000BCC: sb          $t4, 0xD0($s0)
        MEM_B(0XD0, ctx->r16) = ctx->r12;
            goto L_08000BDC;
    }
    // 0x08000BCC: sb          $t4, 0xD0($s0)
    MEM_B(0XD0, ctx->r16) = ctx->r12;
    // 0x08000BD0: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x08000BD4: sb          $t5, 0xD0($s0)
    MEM_B(0XD0, ctx->r16) = ctx->r13;
    // 0x08000BD8: andi        $a1, $t5, 0xFF
    ctx->r5 = ctx->r13 & 0XFF;
L_08000BDC:
    // 0x08000BDC: addiu       $t9, $t9, -0x22B4
    ctx->r25 = ADD32(ctx->r25, -0X22B4);
    // 0x08000BE0: jalr        $t9
    // 0x08000BE4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000BE4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x08000BE8: lwc1        $f4, 0x1C($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x08000BEC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(31, 0X5418) << 16);
    // 0x08000BF0: ldc1        $f0, 0x5418($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(31, 0X5418));
    // 0x08000BF4: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08000BF8: lwc1        $f16, 0x20($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X20);
    // 0x08000BFC: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x08000C00: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000C04: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x08000C08: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08000C0C: mul.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x08000C10: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08000C14: lwc1        $f8, 0x24($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X24);
    // 0x08000C18: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08000C1C: swc1        $f10, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f10.u32l;
    // 0x08000C20: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x08000C24: swc1        $f6, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f6.u32l;
    // 0x08000C28: mul.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f0.d);
    // 0x08000C2C: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08000C30: swc1        $f18, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f18.u32l;
    // 0x08000C34: lhu         $v0, 0x8A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8A);
    // 0x08000C38: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x08000C3C: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08000C40: beq         $v1, $zero, L_08000C50
    if (ctx->r3 == 0) {
        // 0x08000C44: sh          $t6, 0x8A($s0)
        MEM_H(0X8A, ctx->r16) = ctx->r14;
            goto L_08000C50;
    }
    // 0x08000C44: sh          $t6, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r14;
    // 0x08000C48: jalr        $t9
    // 0x08000C4C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000C4C: nop

    after_3:
L_08000C50:
    // 0x08000C50: lhu         $t7, 0x16($s1)
    ctx->r15 = MEM_HU(ctx->r17, 0X16);
L_08000C54:
    // 0x08000C54: addiu       $t8, $t7, 0x20
    ctx->r24 = ADD32(ctx->r15, 0X20);
    // 0x08000C58: andi        $t0, $t8, 0x3FF
    ctx->r8 = ctx->r24 & 0X3FF;
    // 0x08000C5C: sh          $t0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r8;
    // 0x08000C60: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08000C64: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x08000C68: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x08000C6C: jr          $ra
    // 0x08000C70: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x08000C70: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
