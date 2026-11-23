#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_080000A8_734838(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080000A8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x080000AC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080000B0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x080000B4: lw          $t6, 0xD0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD0);
    // 0x080000B8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x080000BC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080000C0: addiu       $t9, $t9, 0x410
    ctx->r25 = ADD32(ctx->r25, 0X410);
    // 0x080000C4: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(65, 0X2BBC) << 16);
    // 0x080000C8: addiu       $a1, $a1, 0x2BBC
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(65, 0X2BBC));
    // 0x080000CC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x080000D0: lui         $a2, 0x43DC
    ctx->r6 = S32(0X43DC << 16);
    // 0x080000D4: lui         $a3, 0xC1A0
    ctx->r7 = S32(0XC1A0 << 16);
    // 0x080000D8: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x080000DC: jalr        $t9
    // 0x080000E0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080000E0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x080000E4: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x080000E8: addiu       $t7, $zero, 0x4A
    ctx->r15 = ADD32(0, 0X4A);
    // 0x080000EC: beq         $v0, $zero, L_08000114
    if (ctx->r2 == 0) {
        // 0x080000F0: sw          $v0, 0x48($v1)
        MEM_W(0X48, ctx->r3) = ctx->r2;
            goto L_08000114;
    }
    // 0x080000F0: sw          $v0, 0x48($v1)
    MEM_W(0X48, ctx->r3) = ctx->r2;
    // 0x080000F4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080000F8: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080000FC: sh          $t7, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r15;
    // 0x08000100: jalr        $t9
    // 0x08000104: addiu       $a0, $zero, 0x4A
    ctx->r4 = ADD32(0, 0X4A);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000104: addiu       $a0, $zero, 0x4A
    ctx->r4 = ADD32(0, 0X4A);
    after_1:
    // 0x08000108: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x0800010C: lw          $t1, 0x48($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X48);
    // 0x08000110: sw          $v0, 0x2C($t1)
    MEM_W(0X2C, ctx->r9) = ctx->r2;
L_08000114:
    // 0x08000114: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000118: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800011C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(65, 0X138) << 16);
    // 0x08000120: jalr        $t9
    // 0x08000124: addiu       $a0, $a0, 0x138
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(65, 0X138));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000124: addiu       $a0, $a0, 0x138
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(65, 0X138));
    after_2:
    // 0x08000128: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0800012C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08000130: jr          $ra
    // 0x08000134: nop

    TRACE_RETURN()
    return;
    // 0x08000134: nop

;}
RECOMP_FUNC void func_08003548_737CD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003548: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0800354C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08003550: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08003554: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08003558: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800355C: addiu       $t6, $zero, 0x201
    ctx->r14 = ADD32(0, 0X201);
    // 0x08003560: addiu       $t7, $zero, 0x352
    ctx->r15 = ADD32(0, 0X352);
    // 0x08003564: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x08003568: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x0800356C: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08003570: sh          $t7, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r15;
    // 0x08003574: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x08003578: jalr        $t9
    // 0x0800357C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800357C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x08003580: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003584: addiu       $t9, $t9, 0x5214
    ctx->r25 = ADD32(ctx->r25, 0X5214);
    // 0x08003588: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x0800358C: addiu       $a1, $a1, -0x6DA4
    ctx->r5 = ADD32(ctx->r5, -0X6DA4);
    // 0x08003590: jalr        $t9
    // 0x08003594: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003594: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x08003598: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800359C: addiu       $t9, $t9, 0x5244
    ctx->r25 = ADD32(ctx->r25, 0X5244);
    // 0x080035A0: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x080035A4: addiu       $a1, $a1, -0x70D0
    ctx->r5 = ADD32(ctx->r5, -0X70D0);
    // 0x080035A8: jalr        $t9
    // 0x080035AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080035AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x080035B0: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x080035B4: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x080035B8: lbu         $t8, 0xD8($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0XD8);
    // 0x080035BC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080035C0: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080035C4: sb          $t8, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r24;
    // 0x080035C8: lbu         $t0, 0xD8($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0XD8);
    // 0x080035CC: lui         $a2, 0x3ECC
    ctx->r6 = S32(0X3ECC << 16);
    // 0x080035D0: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x080035D4: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x080035D8: sb          $t1, 0xD8($v0)
    MEM_B(0XD8, ctx->r2) = ctx->r9;
    // 0x080035DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080035E0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x080035E4: jalr        $t9
    // 0x080035E8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080035E8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x080035EC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080035F0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080035F4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(65, 0X3614) << 16);
    // 0x080035F8: jalr        $t9
    // 0x080035FC: addiu       $a0, $a0, 0x3614
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(65, 0X3614));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080035FC: addiu       $a0, $a0, 0x3614
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(65, 0X3614));
    after_4:
    // 0x08003600: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08003604: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08003608: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x0800360C: jr          $ra
    // 0x08003610: nop

    TRACE_RETURN()
    return;
    // 0x08003610: nop

;}
RECOMP_FUNC void func_080030F8_737888(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080030F8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080030FC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08003100: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08003104: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x08003108: addiu       $t7, $zero, 0x367
    ctx->r15 = ADD32(0, 0X367);
    // 0x0800310C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08003110: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x08003114: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08003118: sh          $t7, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r15;
    // 0x0800311C: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08003120: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08003124: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    // 0x08003128: jalr        $t9
    // 0x0800312C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800312C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x08003130: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08003134: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08003138: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x0800313C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003140: addiu       $t9, $t9, 0x5214
    ctx->r25 = ADD32(ctx->r25, 0X5214);
    // 0x08003144: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x08003148: addiu       $a1, $a1, -0x6DA4
    ctx->r5 = ADD32(ctx->r5, -0X6DA4);
    // 0x0800314C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003150: swc1        $f0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f0.u32l;
    // 0x08003154: swc1        $f0, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f0.u32l;
    // 0x08003158: jalr        $t9
    // 0x0800315C: swc1        $f0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800315C: swc1        $f0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f0.u32l;
    after_1:
    // 0x08003160: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003164: addiu       $t9, $t9, 0x5244
    ctx->r25 = ADD32(ctx->r25, 0X5244);
    // 0x08003168: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x0800316C: addiu       $a1, $a1, -0x70D0
    ctx->r5 = ADD32(ctx->r5, -0X70D0);
    // 0x08003170: jalr        $t9
    // 0x08003174: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003174: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x08003178: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x0800317C: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x08003180: lbu         $t8, 0xD8($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0XD8);
    // 0x08003184: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003188: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800318C: sb          $t8, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r24;
    // 0x08003190: lbu         $t0, 0xD8($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0XD8);
    // 0x08003194: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(65, 0X31BC) << 16);
    // 0x08003198: addiu       $a0, $a0, 0x31BC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(65, 0X31BC));
    // 0x0800319C: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x080031A0: jalr        $t9
    // 0x080031A4: sb          $t1, 0xD8($v0)
    MEM_B(0XD8, ctx->r2) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080031A4: sb          $t1, 0xD8($v0)
    MEM_B(0XD8, ctx->r2) = ctx->r9;
    after_3:
    // 0x080031A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080031AC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080031B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080031B4: jr          $ra
    // 0x080031B8: nop

    TRACE_RETURN()
    return;
    // 0x080031B8: nop

;}
RECOMP_FUNC void func_08003028_7377B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003028: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0800302C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08003030: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08003034: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x08003038: addiu       $t7, $zero, 0x367
    ctx->r15 = ADD32(0, 0X367);
    // 0x0800303C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08003040: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x08003044: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08003048: sh          $t7, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r15;
    // 0x0800304C: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08003050: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08003054: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    // 0x08003058: jalr        $t9
    // 0x0800305C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800305C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x08003060: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08003064: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08003068: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x0800306C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003070: addiu       $t9, $t9, 0x5214
    ctx->r25 = ADD32(ctx->r25, 0X5214);
    // 0x08003074: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x08003078: addiu       $a1, $a1, -0x6DA4
    ctx->r5 = ADD32(ctx->r5, -0X6DA4);
    // 0x0800307C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003080: swc1        $f0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f0.u32l;
    // 0x08003084: swc1        $f0, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f0.u32l;
    // 0x08003088: jalr        $t9
    // 0x0800308C: swc1        $f0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800308C: swc1        $f0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f0.u32l;
    after_1:
    // 0x08003090: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003094: addiu       $t9, $t9, 0x5244
    ctx->r25 = ADD32(ctx->r25, 0X5244);
    // 0x08003098: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x0800309C: addiu       $a1, $a1, -0x70D0
    ctx->r5 = ADD32(ctx->r5, -0X70D0);
    // 0x080030A0: jalr        $t9
    // 0x080030A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080030A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x080030A8: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x080030AC: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x080030B0: lbu         $t8, 0xD8($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0XD8);
    // 0x080030B4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080030B8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080030BC: sb          $t8, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r24;
    // 0x080030C0: lbu         $t0, 0xD8($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0XD8);
    // 0x080030C4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(65, 0X30EC) << 16);
    // 0x080030C8: addiu       $a0, $a0, 0x30EC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(65, 0X30EC));
    // 0x080030CC: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x080030D0: jalr        $t9
    // 0x080030D4: sb          $t1, 0xD8($v0)
    MEM_B(0XD8, ctx->r2) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080030D4: sb          $t1, 0xD8($v0)
    MEM_B(0XD8, ctx->r2) = ctx->r9;
    after_3:
    // 0x080030D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080030DC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080030E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080030E4: jr          $ra
    // 0x080030E8: nop

    TRACE_RETURN()
    return;
    // 0x080030E8: nop

;}
RECOMP_FUNC void func_08003464_737BF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003464: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08003468: jr          $ra
    // 0x0800346C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x0800346C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_0800338C_737B1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800338C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08003390: jr          $ra
    // 0x08003394: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08003394: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08003614_737DA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003614: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08003618: jr          $ra
    // 0x0800361C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x0800361C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08002BBC_73734C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002BBC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08002BC0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08002BC4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08002BC8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08002BCC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002BD0: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x08002BD4: addiu       $t7, $zero, 0x359
    ctx->r15 = ADD32(0, 0X359);
    // 0x08002BD8: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08002BDC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08002BE0: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08002BE4: sh          $t7, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r15;
    // 0x08002BE8: jalr        $t9
    // 0x08002BEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002BEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x08002BF0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002BF4: addiu       $t9, $t9, 0x4ABC
    ctx->r25 = ADD32(ctx->r25, 0X4ABC);
    // 0x08002BF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002BFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002C00: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    // 0x08002C04: jalr        $t9
    // 0x08002C08: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002C08: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x08002C0C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08002C10: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08002C14: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x08002C18: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002C1C: addiu       $t9, $t9, 0x5214
    ctx->r25 = ADD32(ctx->r25, 0X5214);
    // 0x08002C20: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x08002C24: addiu       $a1, $a1, -0x6DA4
    ctx->r5 = ADD32(ctx->r5, -0X6DA4);
    // 0x08002C28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002C2C: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x08002C30: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x08002C34: jalr        $t9
    // 0x08002C38: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002C38: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    after_2:
    // 0x08002C3C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002C40: addiu       $t9, $t9, 0x5244
    ctx->r25 = ADD32(ctx->r25, 0X5244);
    // 0x08002C44: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x08002C48: addiu       $a1, $a1, -0x70D0
    ctx->r5 = ADD32(ctx->r5, -0X70D0);
    // 0x08002C4C: jalr        $t9
    // 0x08002C50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002C50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x08002C54: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08002C58: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x08002C5C: lbu         $t8, 0xD8($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0XD8);
    // 0x08002C60: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002C64: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002C68: sb          $t8, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r24;
    // 0x08002C6C: lbu         $t0, 0xD8($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0XD8);
    // 0x08002C70: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(65, 0X2C98) << 16);
    // 0x08002C74: addiu       $a0, $a0, 0x2C98
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(65, 0X2C98));
    // 0x08002C78: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x08002C7C: jalr        $t9
    // 0x08002C80: sb          $t1, 0xD8($v0)
    MEM_B(0XD8, ctx->r2) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08002C80: sb          $t1, 0xD8($v0)
    MEM_B(0XD8, ctx->r2) = ctx->r9;
    after_4:
    // 0x08002C84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08002C88: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08002C8C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08002C90: jr          $ra
    // 0x08002C94: nop

    TRACE_RETURN()
    return;
    // 0x08002C94: nop

;}
RECOMP_FUNC void func_0800382C_737FBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800382C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08003830: jr          $ra
    // 0x08003834: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08003834: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_080032B0_737A40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080032B0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x080032B4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080032B8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x080032BC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x080032C0: addiu       $t6, $zero, 0x201
    ctx->r14 = ADD32(0, 0X201);
    // 0x080032C4: addiu       $t7, $zero, 0x36A
    ctx->r15 = ADD32(0, 0X36A);
    // 0x080032C8: addiu       $t8, $zero, 0x1F
    ctx->r24 = ADD32(0, 0X1F);
    // 0x080032CC: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x080032D0: sh          $t7, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r15;
    // 0x080032D4: sh          $t8, 0x96($a0)
    MEM_H(0X96, ctx->r4) = ctx->r24;
    // 0x080032D8: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x080032DC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x080032E0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080032E4: addiu       $t9, $t9, -0x7270
    ctx->r25 = ADD32(ctx->r25, -0X7270);
    // 0x080032E8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080032EC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x080032F0: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x080032F4: jalr        $t9
    // 0x080032F8: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080032F8: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_0:
    // 0x080032FC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003300: addiu       $t9, $t9, 0x5214
    ctx->r25 = ADD32(ctx->r25, 0X5214);
    // 0x08003304: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x08003308: addiu       $a1, $a1, -0x6DA4
    ctx->r5 = ADD32(ctx->r5, -0X6DA4);
    // 0x0800330C: jalr        $t9
    // 0x08003310: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003310: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x08003314: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003318: addiu       $t9, $t9, 0x5244
    ctx->r25 = ADD32(ctx->r25, 0X5244);
    // 0x0800331C: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x08003320: addiu       $a1, $a1, -0x70D0
    ctx->r5 = ADD32(ctx->r5, -0X70D0);
    // 0x08003324: jalr        $t9
    // 0x08003328: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003328: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x0800332C: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08003330: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x08003334: lbu         $t0, 0xD8($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0XD8);
    // 0x08003338: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800333C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08003340: sb          $t0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r8;
    // 0x08003344: lbu         $t1, 0xD8($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0XD8);
    // 0x08003348: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800334C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08003350: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x08003354: sb          $t2, 0xD8($v0)
    MEM_B(0XD8, ctx->r2) = ctx->r10;
    // 0x08003358: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x0800335C: jalr        $t9
    // 0x08003360: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08003360: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x08003364: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003368: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800336C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(65, 0X338C) << 16);
    // 0x08003370: jalr        $t9
    // 0x08003374: addiu       $a0, $a0, 0x338C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(65, 0X338C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08003374: addiu       $a0, $a0, 0x338C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(65, 0X338C));
    after_4:
    // 0x08003378: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0800337C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08003380: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08003384: jr          $ra
    // 0x08003388: nop

    TRACE_RETURN()
    return;
    // 0x08003388: nop

;}
RECOMP_FUNC void func_080031BC_73794C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080031BC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x080031C0: jr          $ra
    // 0x080031C4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x080031C4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08003620_737DB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003620: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08003624: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08003628: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0800362C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08003630: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003634: addiu       $t6, $zero, 0x201
    ctx->r14 = ADD32(0, 0X201);
    // 0x08003638: addiu       $t7, $zero, 0x353
    ctx->r15 = ADD32(0, 0X353);
    // 0x0800363C: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x08003640: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08003644: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08003648: sh          $t7, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r15;
    // 0x0800364C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x08003650: jalr        $t9
    // 0x08003654: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003654: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x08003658: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800365C: addiu       $t9, $t9, 0x5214
    ctx->r25 = ADD32(ctx->r25, 0X5214);
    // 0x08003660: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x08003664: addiu       $a1, $a1, -0x6DA4
    ctx->r5 = ADD32(ctx->r5, -0X6DA4);
    // 0x08003668: jalr        $t9
    // 0x0800366C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800366C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x08003670: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003674: addiu       $t9, $t9, 0x5244
    ctx->r25 = ADD32(ctx->r25, 0X5244);
    // 0x08003678: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x0800367C: addiu       $a1, $a1, -0x70D0
    ctx->r5 = ADD32(ctx->r5, -0X70D0);
    // 0x08003680: jalr        $t9
    // 0x08003684: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003684: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x08003688: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x0800368C: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x08003690: lbu         $t8, 0xD8($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0XD8);
    // 0x08003694: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08003698: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x0800369C: sb          $t8, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r24;
    // 0x080036A0: lbu         $t0, 0xD8($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0XD8);
    // 0x080036A4: lui         $a2, 0x3ECC
    ctx->r6 = S32(0X3ECC << 16);
    // 0x080036A8: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x080036AC: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x080036B0: sb          $t1, 0xD8($v0)
    MEM_B(0XD8, ctx->r2) = ctx->r9;
    // 0x080036B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080036B8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x080036BC: jalr        $t9
    // 0x080036C0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080036C0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x080036C4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080036C8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080036CC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(65, 0X36EC) << 16);
    // 0x080036D0: jalr        $t9
    // 0x080036D4: addiu       $a0, $a0, 0x36EC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(65, 0X36EC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080036D4: addiu       $a0, $a0, 0x36EC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(65, 0X36EC));
    after_4:
    // 0x080036D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080036DC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080036E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080036E4: jr          $ra
    // 0x080036E8: nop

    TRACE_RETURN()
    return;
    // 0x080036E8: nop

;}
RECOMP_FUNC void func_08002F00_737690(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002F00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002F04: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(65, 0X3838) << 16);
    // 0x08002F08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002F0C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002F10: addiu       $t9, $t9, 0x3838
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(65, 0X3838));
    // 0x08002F14: jalr        $t9
    // 0x08002F18: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002F18: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_0:
    // 0x08002F1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002F20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002F24: jr          $ra
    // 0x08002F28: nop

    TRACE_RETURN()
    return;
    // 0x08002F28: nop

;}
RECOMP_FUNC void func_0800353C_737CCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800353C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08003540: jr          $ra
    // 0x08003544: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08003544: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08000AAC_73523C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000AAC: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x08000AB0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08000AB4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08000AB8: sw          $a0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r4;
    // 0x08000ABC: sw          $a1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r5;
    // 0x08000AC0: lw          $s0, 0xD0($a0)
    ctx->r16 = MEM_W(ctx->r4, 0XD0);
    // 0x08000AC4: lw          $t7, 0x4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4);
    // 0x08000AC8: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x08000ACC: lw          $t9, 0x18($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X18);
    // 0x08000AD0: sw          $t9, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r25;
    // 0x08000AD4: lw          $t6, 0x8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X8);
    // 0x08000AD8: lw          $t7, 0x18($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X18);
    // 0x08000ADC: sw          $t7, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r15;
    // 0x08000AE0: lw          $t2, 0x18($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X18);
    // 0x08000AE4: lw          $t1, 0xC($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC);
    // 0x08000AE8: lw          $t8, 0x10($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X10);
    // 0x08000AEC: lw          $t9, 0x18($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X18);
    // 0x08000AF0: lw          $v1, 0x18($t1)
    ctx->r3 = MEM_W(ctx->r9, 0X18);
    // 0x08000AF4: lw          $t0, 0x18($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X18);
    // 0x08000AF8: sw          $t9, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r25;
    // 0x08000AFC: lw          $t6, 0x14($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X14);
    // 0x08000B00: lw          $t7, 0x18($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X18);
    // 0x08000B04: sw          $t7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r15;
    // 0x08000B08: lw          $t6, 0x44($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X44);
    // 0x08000B0C: lw          $t8, 0x3C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X3C);
    // 0x08000B10: lw          $t9, 0x40($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X40);
    // 0x08000B14: lw          $t7, 0x18($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X18);
    // 0x08000B18: lw          $v0, 0x18($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X18);
    // 0x08000B1C: lw          $t3, 0x18($t9)
    ctx->r11 = MEM_W(ctx->r25, 0X18);
    // 0x08000B20: sw          $t7, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r15;
    // 0x08000B24: lw          $t8, 0x20($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X20);
    // 0x08000B28: lw          $t9, 0x24($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X24);
    // 0x08000B2C: lw          $t4, 0x1C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X1C);
    // 0x08000B30: lw          $ra, 0x18($t8)
    ctx->r31 = MEM_W(ctx->r24, 0X18);
    // 0x08000B34: lw          $t8, 0x30($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X30);
    // 0x08000B38: lw          $t6, 0x28($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X28);
    // 0x08000B3C: lw          $t7, 0x2C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X2C);
    // 0x08000B40: lw          $a1, 0x18($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X18);
    // 0x08000B44: lw          $t9, 0x18($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X18);
    // 0x08000B48: lw          $t5, 0x18($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X18);
    // 0x08000B4C: lw          $a2, 0x18($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X18);
    // 0x08000B50: lw          $a3, 0x18($t7)
    ctx->r7 = MEM_W(ctx->r15, 0X18);
    // 0x08000B54: sw          $t9, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r25;
    // 0x08000B58: lw          $t6, 0x54($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X54);
    // 0x08000B5C: lw          $t7, 0x18($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X18);
    // 0x08000B60: sw          $t7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r15;
    // 0x08000B64: lw          $t8, 0x58($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X58);
    // 0x08000B68: lw          $t9, 0x18($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X18);
    // 0x08000B6C: sw          $t9, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r25;
    // 0x08000B70: lbu         $t6, 0x0($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X0);
    // 0x08000B74: sltiu       $at, $t6, 0x13
    ctx->r1 = ctx->r14 < 0X13 ? 1 : 0;
    // 0x08000B78: beq         $at, $zero, L_08002B68
    if (ctx->r1 == 0) {
        // 0x08000B7C: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_08002B68;
    }
    // 0x08000B7C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x08000B80: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(65, 0X3E34) << 16);
    // 0x08000B84: addu        $at, $at, $t6
    gpr jr_addend_08000B8C = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x08000B88: lw          $t6, 0x3E34($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(65, 0X3E34));
    // 0x08000B8C: jr          $t6
    // 0x08000B90: nop

    switch (jr_addend_08000B8C >> 2) {
        case 0: goto L_08000B94; break;
        case 1: goto L_08000DAC; break;
        case 2: goto L_08000F3C; break;
        case 3: goto L_080010F0; break;
        case 4: goto L_080011C0; break;
        case 5: goto L_08001260; break;
        case 6: goto L_0800149C; break;
        case 7: goto L_08001730; break;
        case 8: goto L_08001968; break;
        case 9: goto L_08001A30; break;
        case 10: goto L_08001AF8; break;
        case 11: goto L_08001D50; break;
        case 12: goto L_08001E84; break;
        case 13: goto L_08002100; break;
        case 14: goto L_08002264; break;
        case 15: goto L_080023A0; break;
        case 16: goto L_08001CDC; break;
        case 17: goto L_08002448; break;
        case 18: goto L_0800288C; break;
        default: switch_error(__func__, 0x08000B8C, 0x08003E34);
    }
    // 0x08000B90: nop

L_08000B94:
    // 0x08000B94: lw          $t7, 0x80($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X80);
    // 0x08000B98: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000B9C: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x08000BA0: lhu         $t8, 0x8A($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X8A);
    // 0x08000BA4: addiu       $a0, $zero, 0x3A
    ctx->r4 = ADD32(0, 0X3A);
    // 0x08000BA8: bnel        $t8, $zero, L_08000CC0
    if (ctx->r24 != 0) {
        // 0x08000BAC: lw          $t7, 0x38($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X38);
            goto L_08000CC0;
    }
    goto skip_0;
    // 0x08000BAC: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    skip_0:
    // 0x08000BB0: sw          $v0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r2;
    // 0x08000BB4: jalr        $t9
    // 0x08000BB8: sw          $t3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r11;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000BB8: sw          $t3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r11;
    after_0:
    // 0x08000BBC: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000BC0: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x08000BC4: jalr        $t9
    // 0x08000BC8: addiu       $a0, $zero, 0x309
    ctx->r4 = ADD32(0, 0X309);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000BC8: addiu       $a0, $zero, 0x309
    ctx->r4 = ADD32(0, 0X309);
    after_1:
    // 0x08000BCC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000BD0: addiu       $t9, $t9, 0x2500
    ctx->r25 = ADD32(ctx->r25, 0X2500);
    // 0x08000BD4: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08000BD8: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    // 0x08000BDC: jalr        $t9
    // 0x08000BE0: addiu       $a1, $zero, 0xA00
    ctx->r5 = ADD32(0, 0XA00);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000BE0: addiu       $a1, $zero, 0xA00
    ctx->r5 = ADD32(0, 0XA00);
    after_2:
    // 0x08000BE4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000BE8: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x08000BEC: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08000BF0: lui         $a1, 0xC3BF
    ctx->r5 = S32(0XC3BF << 16);
    // 0x08000BF4: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x08000BF8: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    // 0x08000BFC: lui         $a2, 0xC2FC
    ctx->r6 = S32(0XC2FC << 16);
    // 0x08000C00: jalr        $t9
    // 0x08000C04: lui         $a3, 0xC338
    ctx->r7 = S32(0XC338 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000C04: lui         $a3, 0xC338
    ctx->r7 = S32(0XC338 << 16);
    after_3:
    // 0x08000C08: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000C0C: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x08000C10: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08000C14: lui         $a1, 0x43EB
    ctx->r5 = S32(0X43EB << 16);
    // 0x08000C18: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x08000C1C: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    // 0x08000C20: lui         $a2, 0xC210
    ctx->r6 = S32(0XC210 << 16);
    // 0x08000C24: jalr        $t9
    // 0x08000C28: lui         $a3, 0x4180
    ctx->r7 = S32(0X4180 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000C28: lui         $a3, 0x4180
    ctx->r7 = S32(0X4180 << 16);
    after_4:
    // 0x08000C2C: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x08000C30: addiu       $v0, $v0, 0x24A0
    ctx->r2 = ADD32(ctx->r2, 0X24A0);
    // 0x08000C34: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08000C38: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    // 0x08000C3C: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x08000C40: jalr        $v0
    // 0x08000C44: lui         $a1, 0x4352
    ctx->r5 = S32(0X4352 << 16);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x08000C44: lui         $a1, 0x4352
    ctx->r5 = S32(0X4352 << 16);
    after_5:
    // 0x08000C48: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000C4C: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x08000C50: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08000C54: lui         $a1, 0x43EB
    ctx->r5 = S32(0X43EB << 16);
    // 0x08000C58: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x08000C5C: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    // 0x08000C60: lui         $a2, 0xC170
    ctx->r6 = S32(0XC170 << 16);
    // 0x08000C64: jalr        $t9
    // 0x08000C68: lui         $a3, 0x4198
    ctx->r7 = S32(0X4198 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000C68: lui         $a3, 0x4198
    ctx->r7 = S32(0X4198 << 16);
    after_6:
    // 0x08000C6C: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08000C70: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08000C74: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    // 0x08000C78: jalr        $t9
    // 0x08000C7C: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08000C7C: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    after_7:
    // 0x08000C80: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08000C84: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x08000C88: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000C8C: addiu       $t9, $t9, 0x25F0
    ctx->r25 = ADD32(ctx->r25, 0X25F0);
    // 0x08000C90: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08000C94: lui         $a2, 0x800
    ctx->r6 = S32(RELOC_HI16(65, 0X39A0) << 16);
    // 0x08000C98: addiu       $t6, $zero, 0xD2
    ctx->r14 = ADD32(0, 0XD2);
    // 0x08000C9C: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x08000CA0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x08000CA4: addiu       $a2, $a2, 0x39A0
    ctx->r6 = ADD32(ctx->r6, (int16_t)RELOC_LO16(65, 0X39A0));
    // 0x08000CA8: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    // 0x08000CAC: jalr        $t9
    // 0x08000CB0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08000CB0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_8:
    // 0x08000CB4: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x08000CB8: lw          $v0, 0x60($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X60);
    // 0x08000CBC: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
L_08000CC0:
    // 0x08000CC0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08000CC4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x08000CC8: lui         $at, 0xC1A0
    ctx->r1 = S32(0XC1A0 << 16);
    // 0x08000CCC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000CD0: lwc1        $f0, 0xC($t7)
    ctx->f0.u32l = MEM_W(ctx->r15, 0XC);
    // 0x08000CD4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000CD8: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(65, 0X3E80) << 16);
    // 0x08000CDC: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x08000CE0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08000CE4: addiu       $t9, $t9, 0x2380
    ctx->r25 = ADD32(ctx->r25, 0X2380);
    // 0x08000CE8: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08000CEC: bc1fl       L_08000D0C
    if (!c1cs) {
        // 0x08000CF0: lwc1        $f18, 0x1C($v0)
        ctx->f18.u32l = MEM_W(ctx->r2, 0X1C);
            goto L_08000D0C;
    }
    goto skip_1;
    // 0x08000CF0: lwc1        $f18, 0x1C($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X1C);
    skip_1:
    // 0x08000CF4: ldc1        $f8, 0x3E80($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(65, 0X3E80));
    // 0x08000CF8: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x08000CFC: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x08000D00: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x08000D04: swc1        $f16, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->f16.u32l;
    // 0x08000D08: lwc1        $f18, 0x1C($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X1C);
L_08000D0C:
    // 0x08000D0C: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x08000D10: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x08000D14: cvt.d.s     $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f2.d = CVT_D_S(ctx->f18.fl);
    // 0x08000D18: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(65, 0X3E88) << 16);
    // 0x08000D1C: c.lt.d      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.d < ctx->f4.d;
    // 0x08000D20: nop

    // 0x08000D24: bc1fl       L_08000D80
    if (!c1cs) {
        // 0x08000D28: swc1        $f12, 0x1C($v0)
        MEM_W(0X1C, ctx->r2) = ctx->f12.u32l;
            goto L_08000D80;
    }
    goto skip_2;
    // 0x08000D28: swc1        $f12, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f12.u32l;
    skip_2:
    // 0x08000D2C: lwc1        $f10, 0x24($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X24);
    // 0x08000D30: ldc1        $f0, 0x3E88($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(65, 0X3E88));
    // 0x08000D34: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x08000D38: add.d       $f6, $f2, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = ctx->f2.d + ctx->f0.d;
    // 0x08000D3C: add.d       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = ctx->f16.d + ctx->f0.d;
    // 0x08000D40: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x08000D44: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x08000D48: swc1        $f8, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f8.u32l;
    // 0x08000D4C: swc1        $f4, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f4.u32l;
    // 0x08000D50: lwc1        $f6, 0x1C($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x08000D54: lwc1        $f18, 0x24($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X24);
    // 0x08000D58: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x08000D5C: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x08000D60: add.d       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = ctx->f8.d + ctx->f0.d;
    // 0x08000D64: add.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = ctx->f4.d + ctx->f0.d;
    // 0x08000D68: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x08000D6C: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x08000D70: swc1        $f16, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f16.u32l;
    // 0x08000D74: b           L_08000D8C
    // 0x08000D78: swc1        $f8, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->f8.u32l;
        goto L_08000D8C;
    // 0x08000D78: swc1        $f8, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->f8.u32l;
    // 0x08000D7C: swc1        $f12, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f12.u32l;
L_08000D80:
    // 0x08000D80: swc1        $f12, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f12.u32l;
    // 0x08000D84: swc1        $f12, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f12.u32l;
    // 0x08000D88: swc1        $f12, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->f12.u32l;
L_08000D8C:
    // 0x08000D8C: jalr        $t9
    // 0x08000D90: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08000D90: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    after_9:
    // 0x08000D94: bne         $v0, $zero, L_08002B68
    if (ctx->r2 != 0) {
        // 0x08000D98: lw          $t8, 0x80($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X80);
            goto L_08002B68;
    }
    // 0x08000D98: lw          $t8, 0x80($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X80);
    // 0x08000D9C: sh          $zero, 0x8A($t8)
    MEM_H(0X8A, ctx->r24) = 0;
    // 0x08000DA0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x08000DA4: b           L_08002B68
    // 0x08000DA8: sb          $t6, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r14;
        goto L_08002B68;
    // 0x08000DA8: sb          $t6, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r14;
L_08000DAC:
    // 0x08000DAC: lw          $t7, 0x80($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X80);
    // 0x08000DB0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000DB4: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x08000DB8: lhu         $t9, 0x8A($t7)
    ctx->r25 = MEM_HU(ctx->r15, 0X8A);
    // 0x08000DBC: bnel        $t9, $at, L_08000E8C
    if (ctx->r25 != ctx->r1) {
        // 0x08000DC0: lw          $v1, 0x78($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X78);
            goto L_08000E8C;
    }
    goto skip_3;
    // 0x08000DC0: lw          $v1, 0x78($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X78);
    skip_3:
    // 0x08000DC4: lw          $t8, 0x60($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X60);
    // 0x08000DC8: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08000DCC: lui         $a1, 0x43C8
    ctx->r5 = S32(0X43C8 << 16);
    // 0x08000DD0: ori         $t6, $t8, 0x20
    ctx->r14 = ctx->r24 | 0X20;
    // 0x08000DD4: sw          $t6, 0x60($t0)
    MEM_W(0X60, ctx->r8) = ctx->r14;
    // 0x08000DD8: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x08000DDC: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    // 0x08000DE0: lui         $a3, 0x4312
    ctx->r7 = S32(0X4312 << 16);
    // 0x08000DE4: lw          $t7, 0x60($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X60);
    // 0x08000DE8: ori         $t9, $t7, 0x20
    ctx->r25 = ctx->r15 | 0X20;
    // 0x08000DEC: sw          $t9, 0x60($v0)
    MEM_W(0X60, ctx->r2) = ctx->r25;
    // 0x08000DF0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000DF4: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x08000DF8: jalr        $t9
    // 0x08000DFC: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08000DFC: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    after_10:
    // 0x08000E00: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000E04: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x08000E08: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08000E0C: lui         $a1, 0x43E0
    ctx->r5 = S32(0X43E0 << 16);
    // 0x08000E10: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x08000E14: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    // 0x08000E18: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    // 0x08000E1C: jalr        $t9
    // 0x08000E20: lui         $a3, 0x4280
    ctx->r7 = S32(0X4280 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08000E20: lui         $a3, 0x4280
    ctx->r7 = S32(0X4280 << 16);
    after_11:
    // 0x08000E24: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000E28: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x08000E2C: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08000E30: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    // 0x08000E34: jalr        $t9
    // 0x08000E38: lui         $a1, 0x42D2
    ctx->r5 = S32(0X42D2 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x08000E38: lui         $a1, 0x42D2
    ctx->r5 = S32(0X42D2 << 16);
    after_12:
    // 0x08000E3C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000E40: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x08000E44: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08000E48: lui         $a1, 0x43D0
    ctx->r5 = S32(0X43D0 << 16);
    // 0x08000E4C: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x08000E50: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    // 0x08000E54: lui         $a2, 0x423C
    ctx->r6 = S32(0X423C << 16);
    // 0x08000E58: jalr        $t9
    // 0x08000E5C: lui         $a3, 0xC2D6
    ctx->r7 = S32(0XC2D6 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x08000E5C: lui         $a3, 0xC2D6
    ctx->r7 = S32(0XC2D6 << 16);
    after_13:
    // 0x08000E60: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08000E64: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000E68: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x08000E6C: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08000E70: lui         $a1, 0x43E4
    ctx->r5 = S32(0X43E4 << 16);
    // 0x08000E74: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x08000E78: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x08000E7C: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    // 0x08000E80: jalr        $t9
    // 0x08000E84: lui         $a3, 0xC200
    ctx->r7 = S32(0XC200 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x08000E84: lui         $a3, 0xC200
    ctx->r7 = S32(0XC200 << 16);
    after_14:
    // 0x08000E88: lw          $v1, 0x78($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X78);
L_08000E8C:
    // 0x08000E8C: lui         $at, 0xC1A8
    ctx->r1 = S32(0XC1A8 << 16);
    // 0x08000E90: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x08000E94: lwc1        $f2, 0xC($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0XC);
    // 0x08000E98: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(65, 0X3E90) << 16);
    // 0x08000E9C: c.le.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl <= ctx->f12.fl;
    // 0x08000EA0: nop

    // 0x08000EA4: bc1fl       L_08000EC4
    if (!c1cs) {
        // 0x08000EA8: lw          $t8, 0x74($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X74);
            goto L_08000EC4;
    }
    goto skip_4;
    // 0x08000EA8: lw          $t8, 0x74($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X74);
    skip_4:
    // 0x08000EAC: ldc1        $f0, 0x3E90($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(65, 0X3E90));
    // 0x08000EB0: cvt.d.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
    // 0x08000EB4: add.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = ctx->f10.d + ctx->f0.d;
    // 0x08000EB8: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08000EBC: swc1        $f18, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f18.u32l;
    // 0x08000EC0: lw          $t8, 0x74($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X74);
L_08000EC4:
    // 0x08000EC4: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(65, 0X3E98) << 16);
    // 0x08000EC8: ldc1        $f0, 0x3E98($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(65, 0X3E98));
    // 0x08000ECC: lwc1        $f2, 0xC($t8)
    ctx->f2.u32l = MEM_W(ctx->r24, 0XC);
    // 0x08000ED0: c.le.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl <= ctx->f12.fl;
    // 0x08000ED4: nop

    // 0x08000ED8: bc1fl       L_08000EF4
    if (!c1cs) {
        // 0x08000EDC: lw          $t6, 0x58($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X58);
            goto L_08000EF4;
    }
    goto skip_5;
    // 0x08000EDC: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    skip_5:
    // 0x08000EE0: cvt.d.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
    // 0x08000EE4: add.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = ctx->f4.d + ctx->f0.d;
    // 0x08000EE8: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x08000EEC: swc1        $f8, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->f8.u32l;
    // 0x08000EF0: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
L_08000EF4:
    // 0x08000EF4: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(65, 0X3EA0) << 16);
    // 0x08000EF8: ldc1        $f18, 0x3EA0($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(65, 0X3EA0));
    // 0x08000EFC: lwc1        $f10, 0xC($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0XC);
    // 0x08000F00: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000F04: addiu       $t9, $t9, 0x2380
    ctx->r25 = ADD32(ctx->r25, 0X2380);
    // 0x08000F08: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x08000F0C: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08000F10: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x08000F14: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08000F18: swc1        $f6, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f6.u32l;
    // 0x08000F1C: jalr        $t9
    // 0x08000F20: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x08000F20: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    after_15:
    // 0x08000F24: bne         $v0, $zero, L_08002B68
    if (ctx->r2 != 0) {
        // 0x08000F28: lw          $t7, 0x80($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X80);
            goto L_08002B68;
    }
    // 0x08000F28: lw          $t7, 0x80($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X80);
    // 0x08000F2C: sh          $zero, 0x8A($t7)
    MEM_H(0X8A, ctx->r15) = 0;
    // 0x08000F30: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x08000F34: b           L_08002B68
    // 0x08000F38: sb          $t8, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r24;
        goto L_08002B68;
    // 0x08000F38: sb          $t8, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r24;
L_08000F3C:
    // 0x08000F3C: lw          $t6, 0x80($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X80);
    // 0x08000F40: sw          $v0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r2;
    // 0x08000F44: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000F48: lhu         $t9, 0x8A($t6)
    ctx->r25 = MEM_HU(ctx->r14, 0X8A);
    // 0x08000F4C: lw          $t7, 0x78($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X78);
    // 0x08000F50: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08000F54: bne         $t9, $at, L_0800103C
    if (ctx->r25 != ctx->r1) {
        // 0x08000F58: lui         $a1, 0x43B8
        ctx->r5 = S32(0X43B8 << 16);
            goto L_0800103C;
    }
    // 0x08000F58: lui         $a1, 0x43B8
    ctx->r5 = S32(0X43B8 << 16);
    // 0x08000F5C: lui         $at, 0x43E9
    ctx->r1 = S32(0X43E9 << 16);
    // 0x08000F60: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x08000F64: lui         $at, 0x43E5
    ctx->r1 = S32(0X43E5 << 16);
    // 0x08000F68: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08000F6C: swc1        $f14, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f14.u32l;
    // 0x08000F70: lw          $t8, 0x74($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X74);
    // 0x08000F74: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(65, 0X3EA8) << 16);
    // 0x08000F78: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000F7C: swc1        $f8, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f8.u32l;
    // 0x08000F80: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x08000F84: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x08000F88: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x08000F8C: swc1        $f14, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f14.u32l;
    // 0x08000F90: lwc1        $f10, 0x3EA8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(65, 0X3EA8));
    // 0x08000F94: lui         $at, 0x4218
    ctx->r1 = S32(0X4218 << 16);
    // 0x08000F98: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08000F9C: lui         $at, 0x421C
    ctx->r1 = S32(0X421C << 16);
    // 0x08000FA0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08000FA4: swc1        $f10, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->f10.u32l;
    // 0x08000FA8: swc1        $f16, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->f16.u32l;
    // 0x08000FAC: swc1        $f18, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->f18.u32l;
    // 0x08000FB0: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    // 0x08000FB4: lui         $a2, 0xC1B0
    ctx->r6 = S32(0XC1B0 << 16);
    // 0x08000FB8: jalr        $t9
    // 0x08000FBC: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x08000FBC: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    after_16:
    // 0x08000FC0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000FC4: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x08000FC8: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08000FCC: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    // 0x08000FD0: lui         $a1, 0x43E7
    ctx->r5 = S32(0X43E7 << 16);
    // 0x08000FD4: lui         $a2, 0xC120
    ctx->r6 = S32(0XC120 << 16);
    // 0x08000FD8: jalr        $t9
    // 0x08000FDC: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x08000FDC: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    after_17:
    // 0x08000FE0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000FE4: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x08000FE8: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08000FEC: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    // 0x08000FF0: jalr        $t9
    // 0x08000FF4: lui         $a1, 0x431C
    ctx->r5 = S32(0X431C << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x08000FF4: lui         $a1, 0x431C
    ctx->r5 = S32(0X431C << 16);
    after_18:
    // 0x08000FF8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000FFC: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x08001000: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08001004: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    // 0x08001008: lui         $a1, 0x43B4
    ctx->r5 = S32(0X43B4 << 16);
    // 0x0800100C: lui         $a2, 0xC180
    ctx->r6 = S32(0XC180 << 16);
    // 0x08001010: jalr        $t9
    // 0x08001014: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_19;
    // 0x08001014: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    after_19:
    // 0x08001018: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800101C: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x08001020: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08001024: lui         $a1, 0x43EA
    ctx->r5 = S32(0X43EA << 16);
    // 0x08001028: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x0800102C: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    // 0x08001030: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    // 0x08001034: jalr        $t9
    // 0x08001038: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_20;
    // 0x08001038: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    after_20:
L_0800103C:
    // 0x0800103C: lw          $v1, 0x78($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X78);
    // 0x08001040: lui         $at, 0xC1A8
    ctx->r1 = S32(0XC1A8 << 16);
    // 0x08001044: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x08001048: lwc1        $f2, 0xC($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0XC);
    // 0x0800104C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001050: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(65, 0X3EB0) << 16);
    // 0x08001054: c.le.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl <= ctx->f12.fl;
    // 0x08001058: addiu       $t9, $t9, 0x2380
    ctx->r25 = ADD32(ctx->r25, 0X2380);
    // 0x0800105C: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08001060: bc1fl       L_08001080
    if (!c1cs) {
        // 0x08001064: lw          $t7, 0x74($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X74);
            goto L_08001080;
    }
    goto skip_6;
    // 0x08001064: lw          $t7, 0x74($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X74);
    skip_6:
    // 0x08001068: ldc1        $f6, 0x3EB0($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(65, 0X3EB0));
    // 0x0800106C: cvt.d.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
    // 0x08001070: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x08001074: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08001078: swc1        $f10, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f10.u32l;
    // 0x0800107C: lw          $t7, 0x74($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X74);
L_08001080:
    // 0x08001080: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(65, 0X3EB8) << 16);
    // 0x08001084: lwc1        $f2, 0xC($t7)
    ctx->f2.u32l = MEM_W(ctx->r15, 0XC);
    // 0x08001088: c.le.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl <= ctx->f12.fl;
    // 0x0800108C: nop

    // 0x08001090: bc1f        L_080010AC
    if (!c1cs) {
        // 0x08001094: nop
    
            goto L_080010AC;
    }
    // 0x08001094: nop

    // 0x08001098: ldc1        $f18, 0x3EB8($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(65, 0X3EB8));
    // 0x0800109C: cvt.d.s     $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f16.d = CVT_D_S(ctx->f2.fl);
    // 0x080010A0: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x080010A4: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x080010A8: swc1        $f6, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->f6.u32l;
L_080010AC:
    // 0x080010AC: jalr        $t9
    // 0x080010B0: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_21;
    // 0x080010B0: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    after_21:
    // 0x080010B4: bne         $v0, $zero, L_08002B68
    if (ctx->r2 != 0) {
        // 0x080010B8: lui         $v0, 0x8003
        ctx->r2 = S32(0X8003 << 16);
            goto L_08002B68;
    }
    // 0x080010B8: lui         $v0, 0x8003
    ctx->r2 = S32(0X8003 << 16);
    // 0x080010BC: addiu       $v0, $v0, 0x4EF8
    ctx->r2 = ADD32(ctx->r2, 0X4EF8);
    // 0x080010C0: lw          $a0, 0x3C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X3C);
    // 0x080010C4: jalr        $v0
    // 0x080010C8: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_22;
    // 0x080010C8: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    after_22:
    // 0x080010CC: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x080010D0: lw          $a0, 0x40($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X40);
    // 0x080010D4: jalr        $t9
    // 0x080010D8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_23;
    // 0x080010D8: nop

    after_23:
    // 0x080010DC: lw          $t8, 0x80($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X80);
    // 0x080010E0: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x080010E4: sh          $zero, 0x8A($t8)
    MEM_H(0X8A, ctx->r24) = 0;
    // 0x080010E8: b           L_08002B68
    // 0x080010EC: sb          $t6, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r14;
        goto L_08002B68;
    // 0x080010EC: sb          $t6, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r14;
L_080010F0:
    // 0x080010F0: lw          $t7, 0x80($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X80);
    // 0x080010F4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x080010F8: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x080010FC: lhu         $v0, 0x8A($t7)
    ctx->r2 = MEM_HU(ctx->r15, 0X8A);
    // 0x08001100: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x08001104: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x08001108: bne         $v0, $at, L_08001170
    if (ctx->r2 != ctx->r1) {
        // 0x0800110C: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_08001170;
    }
    // 0x0800110C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08001110: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001114: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08001118: jalr        $t9
    // 0x0800111C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_24;
    // 0x0800111C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_24:
    // 0x08001120: lui         $at, 0xC0A0
    ctx->r1 = S32(0XC0A0 << 16);
    // 0x08001124: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08001128: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800112C: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x08001130: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08001134: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x08001138: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x0800113C: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    // 0x08001140: jalr        $t9
    // 0x08001144: lui         $a1, 0x43D6
    ctx->r5 = S32(0X43D6 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_25;
    // 0x08001144: lui         $a1, 0x43D6
    ctx->r5 = S32(0X43D6 << 16);
    after_25:
    // 0x08001148: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800114C: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x08001150: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08001154: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    // 0x08001158: lui         $a1, 0x43F6
    ctx->r5 = S32(0X43F6 << 16);
    // 0x0800115C: lui         $a2, 0x41F8
    ctx->r6 = S32(0X41F8 << 16);
    // 0x08001160: jalr        $t9
    // 0x08001164: lui         $a3, 0x41C8
    ctx->r7 = S32(0X41C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_26;
    // 0x08001164: lui         $a3, 0x41C8
    ctx->r7 = S32(0X41C8 << 16);
    after_26:
    // 0x08001168: lw          $t8, 0x80($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X80);
    // 0x0800116C: lhu         $v0, 0x8A($t8)
    ctx->r2 = MEM_HU(ctx->r24, 0X8A);
L_08001170:
    // 0x08001170: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x08001174: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x08001178: bgez        $v0, L_08001194
    if (SIGNED(ctx->r2) >= 0) {
        // 0x0800117C: cvt.d.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
            goto L_08001194;
    }
    // 0x0800117C: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x08001180: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x08001184: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x08001188: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x0800118C: nop

    // 0x08001190: add.d       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f10.d = ctx->f10.d + ctx->f16.d;
L_08001194:
    // 0x08001194: lui         $at, 0x4058
    ctx->r1 = S32(0X4058 << 16);
    // 0x08001198: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x0800119C: lw          $t6, 0x80($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X80);
    // 0x080011A0: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x080011A4: c.le.d      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.d <= ctx->f10.d;
    // 0x080011A8: nop

    // 0x080011AC: bc1f        L_08002B68
    if (!c1cs) {
        // 0x080011B0: nop
    
            goto L_08002B68;
    }
    // 0x080011B0: nop

    // 0x080011B4: sh          $zero, 0x8A($t6)
    MEM_H(0X8A, ctx->r14) = 0;
    // 0x080011B8: b           L_08002B68
    // 0x080011BC: sb          $t7, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r15;
        goto L_08002B68;
    // 0x080011BC: sb          $t7, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r15;
L_080011C0:
    // 0x080011C0: lw          $t9, 0x80($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X80);
    // 0x080011C4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x080011C8: addiu       $t8, $zero, 0x20
    ctx->r24 = ADD32(0, 0X20);
    // 0x080011CC: lhu         $v1, 0x8A($t9)
    ctx->r3 = MEM_HU(ctx->r25, 0X8A);
    // 0x080011D0: lw          $t6, 0x74($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X74);
    // 0x080011D4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x080011D8: bne         $v1, $at, L_08001244
    if (ctx->r3 != ctx->r1) {
        // 0x080011DC: lui         $a2, 0x3DE1
        ctx->r6 = S32(0X3DE1 << 16);
            goto L_08001244;
    }
    // 0x080011DC: lui         $a2, 0x3DE1
    ctx->r6 = S32(0X3DE1 << 16);
    // 0x080011E0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080011E4: sh          $t8, 0x16($t6)
    MEM_H(0X16, ctx->r14) = ctx->r24;
    // 0x080011E8: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080011EC: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x080011F0: ori         $a2, $a2, 0x47AE
    ctx->r6 = ctx->r6 | 0X47AE;
    // 0x080011F4: jalr        $t9
    // 0x080011F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_27;
    // 0x080011F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_27:
    // 0x080011FC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001200: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x08001204: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08001208: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    // 0x0800120C: lui         $a1, 0x43D3
    ctx->r5 = S32(0X43D3 << 16);
    // 0x08001210: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    // 0x08001214: jalr        $t9
    // 0x08001218: lui         $a3, 0x4140
    ctx->r7 = S32(0X4140 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_28;
    // 0x08001218: lui         $a3, 0x4140
    ctx->r7 = S32(0X4140 << 16);
    after_28:
    // 0x0800121C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001220: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x08001224: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08001228: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    // 0x0800122C: lui         $a1, 0x4410
    ctx->r5 = S32(0X4410 << 16);
    // 0x08001230: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x08001234: jalr        $t9
    // 0x08001238: lui         $a3, 0xC218
    ctx->r7 = S32(0XC218 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_29;
    // 0x08001238: lui         $a3, 0xC218
    ctx->r7 = S32(0XC218 << 16);
    after_29:
    // 0x0800123C: lw          $t7, 0x80($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X80);
    // 0x08001240: lhu         $v1, 0x8A($t7)
    ctx->r3 = MEM_HU(ctx->r15, 0X8A);
L_08001244:
    // 0x08001244: slti        $at, $v1, 0x78
    ctx->r1 = SIGNED(ctx->r3) < 0X78 ? 1 : 0;
    // 0x08001248: bne         $at, $zero, L_08002B68
    if (ctx->r1 != 0) {
        // 0x0800124C: lw          $t8, 0x80($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X80);
            goto L_08002B68;
    }
    // 0x0800124C: lw          $t8, 0x80($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X80);
    // 0x08001250: sh          $zero, 0x8A($t8)
    MEM_H(0X8A, ctx->r24) = 0;
    // 0x08001254: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x08001258: b           L_08002B68
    // 0x0800125C: sb          $t6, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r14;
        goto L_08002B68;
    // 0x0800125C: sb          $t6, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r14;
L_08001260:
    // 0x08001260: lw          $t9, 0x80($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X80);
    // 0x08001264: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08001268: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x0800126C: lhu         $t7, 0x8A($t9)
    ctx->r15 = MEM_HU(ctx->r25, 0X8A);
    // 0x08001270: addiu       $t8, $zero, 0x208
    ctx->r24 = ADD32(0, 0X208);
    // 0x08001274: addiu       $t1, $t1, 0x664C
    ctx->r9 = ADD32(ctx->r9, 0X664C);
    // 0x08001278: bnel        $t7, $at, L_080013E8
    if (ctx->r15 != ctx->r1) {
        // 0x0800127C: lwc1        $f4, 0x10($t5)
        ctx->f4.u32l = MEM_W(ctx->r13, 0X10);
            goto L_080013E8;
    }
    goto skip_7;
    // 0x0800127C: lwc1        $f4, 0x10($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X10);
    skip_7:
    // 0x08001280: lw          $t6, 0x78($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X78);
    // 0x08001284: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x08001288: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x0800128C: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x08001290: sh          $t8, 0x16($t6)
    MEM_H(0X16, ctx->r14) = ctx->r24;
    // 0x08001294: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x08001298: sw          $ra, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r31;
    // 0x0800129C: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x080012A0: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x080012A4: sw          $t5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r13;
    // 0x080012A8: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x080012AC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x080012B0: jalr        $t1
    // 0x080012B4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
        goto after_30;
    // 0x080012B4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_30:
    // 0x080012B8: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x080012BC: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x080012C0: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x080012C4: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x080012C8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x080012CC: jalr        $t1
    // 0x080012D0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
        goto after_31;
    // 0x080012D0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_31:
    // 0x080012D4: lw          $t4, 0x1C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X1C);
    // 0x080012D8: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x080012DC: lui         $a1, 0x43CA
    ctx->r5 = S32(0X43CA << 16);
    // 0x080012E0: lw          $t9, 0x60($t4)
    ctx->r25 = MEM_W(ctx->r12, 0X60);
    // 0x080012E4: lui         $a2, 0xBF80
    ctx->r6 = S32(0XBF80 << 16);
    // 0x080012E8: lui         $a3, 0x40C0
    ctx->r7 = S32(0X40C0 << 16);
    // 0x080012EC: ori         $t7, $t9, 0x20
    ctx->r15 = ctx->r25 | 0X20;
    // 0x080012F0: sw          $t7, 0x60($t4)
    MEM_W(0X60, ctx->r12) = ctx->r15;
    // 0x080012F4: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x080012F8: lw          $t8, 0x60($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X60);
    // 0x080012FC: ori         $t6, $t8, 0x20
    ctx->r14 = ctx->r24 | 0X20;
    // 0x08001300: sw          $t6, 0x60($v1)
    MEM_W(0X60, ctx->r3) = ctx->r14;
    // 0x08001304: lw          $t0, 0x24($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X24);
    // 0x08001308: lw          $t9, 0x60($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X60);
    // 0x0800130C: ori         $t7, $t9, 0x20
    ctx->r15 = ctx->r25 | 0X20;
    // 0x08001310: sw          $t7, 0x60($t0)
    MEM_W(0X60, ctx->r8) = ctx->r15;
    // 0x08001314: lw          $t1, 0x28($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X28);
    // 0x08001318: lw          $t8, 0x60($t1)
    ctx->r24 = MEM_W(ctx->r9, 0X60);
    // 0x0800131C: ori         $t6, $t8, 0x20
    ctx->r14 = ctx->r24 | 0X20;
    // 0x08001320: sw          $t6, 0x60($t1)
    MEM_W(0X60, ctx->r9) = ctx->r14;
    // 0x08001324: lw          $t2, 0x2C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X2C);
    // 0x08001328: lw          $t9, 0x60($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X60);
    // 0x0800132C: ori         $t7, $t9, 0x20
    ctx->r15 = ctx->r25 | 0X20;
    // 0x08001330: sw          $t7, 0x60($t2)
    MEM_W(0X60, ctx->r10) = ctx->r15;
    // 0x08001334: lw          $t3, 0x30($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X30);
    // 0x08001338: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800133C: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x08001340: lw          $t8, 0x60($t3)
    ctx->r24 = MEM_W(ctx->r11, 0X60);
    // 0x08001344: ori         $t6, $t8, 0x20
    ctx->r14 = ctx->r24 | 0X20;
    // 0x08001348: sw          $t6, 0x60($t3)
    MEM_W(0X60, ctx->r11) = ctx->r14;
    // 0x0800134C: jalr        $t9
    // 0x08001350: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_32;
    // 0x08001350: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    after_32:
    // 0x08001354: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001358: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x0800135C: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08001360: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    // 0x08001364: lui         $a1, 0x43F9
    ctx->r5 = S32(0X43F9 << 16);
    // 0x08001368: lui         $a2, 0x4188
    ctx->r6 = S32(0X4188 << 16);
    // 0x0800136C: jalr        $t9
    // 0x08001370: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_33;
    // 0x08001370: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    after_33:
    // 0x08001374: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001378: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x0800137C: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08001380: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    // 0x08001384: jalr        $t9
    // 0x08001388: lui         $a1, 0x4316
    ctx->r5 = S32(0X4316 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_34;
    // 0x08001388: lui         $a1, 0x4316
    ctx->r5 = S32(0X4316 << 16);
    after_34:
    // 0x0800138C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001390: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x08001394: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08001398: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    // 0x0800139C: lui         $a1, 0x4389
    ctx->r5 = S32(0X4389 << 16);
    // 0x080013A0: lui         $a2, 0xC1D8
    ctx->r6 = S32(0XC1D8 << 16);
    // 0x080013A4: jalr        $t9
    // 0x080013A8: lui         $a3, 0x4130
    ctx->r7 = S32(0X4130 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_35;
    // 0x080013A8: lui         $a3, 0x4130
    ctx->r7 = S32(0X4130 << 16);
    after_35:
    // 0x080013AC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080013B0: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x080013B4: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x080013B8: lui         $a1, 0x43B7
    ctx->r5 = S32(0X43B7 << 16);
    // 0x080013BC: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x080013C0: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    // 0x080013C4: lui         $a2, 0xC110
    ctx->r6 = S32(0XC110 << 16);
    // 0x080013C8: jalr        $t9
    // 0x080013CC: lui         $a3, 0x40E0
    ctx->r7 = S32(0X40E0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_36;
    // 0x080013CC: lui         $a3, 0x40E0
    ctx->r7 = S32(0X40E0 << 16);
    after_36:
    // 0x080013D0: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x080013D4: lw          $ra, 0x50($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X50);
    // 0x080013D8: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x080013DC: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x080013E0: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x080013E4: lwc1        $f4, 0x10($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X10);
L_080013E8:
    // 0x080013E8: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(65, 0X3EC0) << 16);
    // 0x080013EC: ldc1        $f0, 0x3EC0($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(65, 0X3EC0));
    // 0x080013F0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x080013F4: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(65, 0X3EC8) << 16);
    // 0x080013F8: add.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = ctx->f6.d + ctx->f0.d;
    // 0x080013FC: ldc1        $f2, 0x3EC8($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(65, 0X3EC8));
    // 0x08001400: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001404: addiu       $t9, $t9, 0x2380
    ctx->r25 = ADD32(ctx->r25, 0X2380);
    // 0x08001408: cvt.s.d     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f16.fl = CVT_S_D(ctx->f8.d);
    // 0x0800140C: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08001410: swc1        $f16, 0x10($t5)
    MEM_W(0X10, ctx->r13) = ctx->f16.u32l;
    // 0x08001414: lwc1        $f10, 0x10($ra)
    ctx->f10.u32l = MEM_W(ctx->r31, 0X10);
    // 0x08001418: cvt.d.s     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f18.d = CVT_D_S(ctx->f10.fl);
    // 0x0800141C: add.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = ctx->f18.d + ctx->f0.d;
    // 0x08001420: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08001424: swc1        $f6, 0x10($ra)
    MEM_W(0X10, ctx->r31) = ctx->f6.u32l;
    // 0x08001428: lwc1        $f8, 0x10($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X10);
    // 0x0800142C: cvt.d.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f16.d = CVT_D_S(ctx->f8.fl);
    // 0x08001430: add.d       $f10, $f16, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = ctx->f16.d + ctx->f0.d;
    // 0x08001434: cvt.s.d     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f18.fl = CVT_S_D(ctx->f10.d);
    // 0x08001438: swc1        $f18, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f18.u32l;
    // 0x0800143C: lwc1        $f4, 0x10($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X10);
    // 0x08001440: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08001444: sub.d       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = ctx->f6.d - ctx->f2.d;
    // 0x08001448: cvt.s.d     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f16.fl = CVT_S_D(ctx->f8.d);
    // 0x0800144C: swc1        $f16, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f16.u32l;
    // 0x08001450: lwc1        $f10, 0x10($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X10);
    // 0x08001454: cvt.d.s     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f18.d = CVT_D_S(ctx->f10.fl);
    // 0x08001458: sub.d       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = ctx->f18.d - ctx->f2.d;
    // 0x0800145C: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08001460: swc1        $f6, 0x10($a3)
    MEM_W(0X10, ctx->r7) = ctx->f6.u32l;
    // 0x08001464: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x08001468: lwc1        $f8, 0x10($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X10);
    // 0x0800146C: cvt.d.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f16.d = CVT_D_S(ctx->f8.fl);
    // 0x08001470: sub.d       $f10, $f16, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f2.d); 
    ctx->f10.d = ctx->f16.d - ctx->f2.d;
    // 0x08001474: cvt.s.d     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f18.fl = CVT_S_D(ctx->f10.d);
    // 0x08001478: swc1        $f18, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->f18.u32l;
    // 0x0800147C: jalr        $t9
    // 0x08001480: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_37;
    // 0x08001480: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    after_37:
    // 0x08001484: bne         $v0, $zero, L_08002B68
    if (ctx->r2 != 0) {
        // 0x08001488: lw          $t8, 0x80($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X80);
            goto L_08002B68;
    }
    // 0x08001488: lw          $t8, 0x80($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X80);
    // 0x0800148C: sh          $zero, 0x8A($t8)
    MEM_H(0X8A, ctx->r24) = 0;
    // 0x08001490: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x08001494: b           L_08002B68
    // 0x08001498: sb          $t6, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r14;
        goto L_08002B68;
    // 0x08001498: sb          $t6, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r14;
L_0800149C:
    // 0x0800149C: lw          $t7, 0x80($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X80);
    // 0x080014A0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x080014A4: lhu         $t9, 0x8A($t7)
    ctx->r25 = MEM_HU(ctx->r15, 0X8A);
    // 0x080014A8: bne         $t9, $at, L_0800166C
    if (ctx->r25 != ctx->r1) {
        // 0x080014AC: lui         $at, 0xBF00
        ctx->r1 = S32(0XBF00 << 16);
            goto L_0800166C;
    }
    // 0x080014AC: lui         $at, 0xBF00
    ctx->r1 = S32(0XBF00 << 16);
    // 0x080014B0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x080014B4: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x080014B8: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x080014BC: swc1        $f0, 0x7C($t4)
    MEM_W(0X7C, ctx->r12) = ctx->f0.u32l;
    // 0x080014C0: lw          $t8, 0x20($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X20);
    // 0x080014C4: addiu       $v1, $zero, 0x19
    ctx->r3 = ADD32(0, 0X19);
    // 0x080014C8: lui         $at, 0x4230
    ctx->r1 = S32(0X4230 << 16);
    // 0x080014CC: swc1        $f0, 0x7C($t8)
    MEM_W(0X7C, ctx->r24) = ctx->f0.u32l;
    // 0x080014D0: lw          $t6, 0x24($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X24);
    // 0x080014D4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x080014D8: addiu       $a0, $zero, -0x21
    ctx->r4 = ADD32(0, -0X21);
    // 0x080014DC: swc1        $f0, 0x7C($t6)
    MEM_W(0X7C, ctx->r14) = ctx->f0.u32l;
    // 0x080014E0: lw          $t7, 0x28($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X28);
    // 0x080014E4: lui         $at, 0x43CB
    ctx->r1 = S32(0X43CB << 16);
    // 0x080014E8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080014EC: swc1        $f0, 0x7C($t7)
    MEM_W(0X7C, ctx->r15) = ctx->f0.u32l;
    // 0x080014F0: lw          $t9, 0x2C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X2C);
    // 0x080014F4: lui         $at, 0xC24C
    ctx->r1 = S32(0XC24C << 16);
    // 0x080014F8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080014FC: swc1        $f0, 0x7C($t9)
    MEM_W(0X7C, ctx->r25) = ctx->f0.u32l;
    // 0x08001500: lw          $t8, 0x1C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X1C);
    // 0x08001504: addiu       $v0, $zero, 0x300
    ctx->r2 = ADD32(0, 0X300);
    // 0x08001508: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(65, 0X3ED0) << 16);
    // 0x0800150C: sb          $v1, 0x75($t8)
    MEM_B(0X75, ctx->r24) = ctx->r3;
    // 0x08001510: lw          $t6, 0x20($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X20);
    // 0x08001514: lui         $a1, 0x43AD
    ctx->r5 = S32(0X43AD << 16);
    // 0x08001518: lui         $a2, 0xC21C
    ctx->r6 = S32(0XC21C << 16);
    // 0x0800151C: sb          $v1, 0x75($t6)
    MEM_B(0X75, ctx->r14) = ctx->r3;
    // 0x08001520: lw          $t7, 0x24($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X24);
    // 0x08001524: sb          $v1, 0x75($t7)
    MEM_B(0X75, ctx->r15) = ctx->r3;
    // 0x08001528: lw          $t9, 0x28($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X28);
    // 0x0800152C: sb          $v1, 0x75($t9)
    MEM_B(0X75, ctx->r25) = ctx->r3;
    // 0x08001530: lw          $t8, 0x2C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X2C);
    // 0x08001534: sb          $v1, 0x75($t8)
    MEM_B(0X75, ctx->r24) = ctx->r3;
    // 0x08001538: lw          $t3, 0x30($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X30);
    // 0x0800153C: lw          $t6, 0x60($t3)
    ctx->r14 = MEM_W(ctx->r11, 0X60);
    // 0x08001540: and         $t7, $t6, $a0
    ctx->r15 = ctx->r14 & ctx->r4;
    // 0x08001544: sw          $t7, 0x60($t3)
    MEM_W(0X60, ctx->r11) = ctx->r15;
    // 0x08001548: sh          $v0, 0x16($t5)
    MEM_H(0X16, ctx->r13) = ctx->r2;
    // 0x0800154C: swc1        $f2, 0x10($t5)
    MEM_W(0X10, ctx->r13) = ctx->f2.u32l;
    // 0x08001550: swc1        $f4, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->f4.u32l;
    // 0x08001554: swc1        $f6, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->f6.u32l;
    // 0x08001558: lwc1        $f8, 0x3ED0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(65, 0X3ED0));
    // 0x0800155C: lui         $at, 0xC218
    ctx->r1 = S32(0XC218 << 16);
    // 0x08001560: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08001564: lui         $at, 0xC198
    ctx->r1 = S32(0XC198 << 16);
    // 0x08001568: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x0800156C: lui         $at, 0x43E9
    ctx->r1 = S32(0X43E9 << 16);
    // 0x08001570: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x08001574: sh          $v0, 0x16($ra)
    MEM_H(0X16, ctx->r31) = ctx->r2;
    // 0x08001578: swc1        $f2, 0x10($ra)
    MEM_W(0X10, ctx->r31) = ctx->f2.u32l;
    // 0x0800157C: swc1        $f8, 0x8($ra)
    MEM_W(0X8, ctx->r31) = ctx->f8.u32l;
    // 0x08001580: swc1        $f16, 0xC($ra)
    MEM_W(0XC, ctx->r31) = ctx->f16.u32l;
    // 0x08001584: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x08001588: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(65, 0X3ED4) << 16);
    // 0x0800158C: lwc1        $f10, 0x3ED4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(65, 0X3ED4));
    // 0x08001590: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x08001594: lui         $at, 0xC1C8
    ctx->r1 = S32(0XC1C8 << 16);
    // 0x08001598: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x0800159C: lui         $at, 0x43E0
    ctx->r1 = S32(0X43E0 << 16);
    // 0x080015A0: sh          $v0, 0x16($t9)
    MEM_H(0X16, ctx->r25) = ctx->r2;
    // 0x080015A4: swc1        $f2, 0x10($t9)
    MEM_W(0X10, ctx->r25) = ctx->f2.u32l;
    // 0x080015A8: swc1        $f10, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->f10.u32l;
    // 0x080015AC: swc1        $f18, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->f18.u32l;
    // 0x080015B0: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x080015B4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080015B8: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x080015BC: lui         $a3, 0xC130
    ctx->r7 = S32(0XC130 << 16);
    // 0x080015C0: swc1        $f4, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f4.u32l;
    // 0x080015C4: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x080015C8: swc1        $f12, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f12.u32l;
    // 0x080015CC: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x080015D0: swc1        $f2, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->f2.u32l;
    // 0x080015D4: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x080015D8: sh          $v0, 0x16($t9)
    MEM_H(0X16, ctx->r25) = ctx->r2;
    // 0x080015DC: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x080015E0: swc1        $f14, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f14.u32l;
    // 0x080015E4: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x080015E8: swc1        $f12, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f12.u32l;
    // 0x080015EC: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x080015F0: swc1        $f2, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->f2.u32l;
    // 0x080015F4: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x080015F8: sh          $v0, 0x16($t9)
    MEM_H(0X16, ctx->r25) = ctx->r2;
    // 0x080015FC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001600: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x08001604: sw          $ra, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r31;
    // 0x08001608: sw          $t5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r13;
    // 0x0800160C: jalr        $t9
    // 0x08001610: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_38;
    // 0x08001610: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    after_38:
    // 0x08001614: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001618: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x0800161C: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08001620: lui         $a1, 0x43E0
    ctx->r5 = S32(0X43E0 << 16);
    // 0x08001624: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x08001628: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    // 0x0800162C: lui         $a2, 0xC1E0
    ctx->r6 = S32(0XC1E0 << 16);
    // 0x08001630: jalr        $t9
    // 0x08001634: lui         $a3, 0x4280
    ctx->r7 = S32(0X4280 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_39;
    // 0x08001634: lui         $a3, 0x4280
    ctx->r7 = S32(0X4280 << 16);
    after_39:
    // 0x08001638: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0800163C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001640: addiu       $t9, $t9, 0x33E0
    ctx->r25 = ADD32(ctx->r25, 0X33E0);
    // 0x08001644: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x08001648: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x0800164C: lw          $a0, 0x5C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X5C);
    // 0x08001650: jalr        $t9
    // 0x08001654: lui         $a1, 0xC2C8
    ctx->r5 = S32(0XC2C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_40;
    // 0x08001654: lui         $a1, 0xC2C8
    ctx->r5 = S32(0XC2C8 << 16);
    after_40:
    // 0x08001658: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x0800165C: lw          $ra, 0x50($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X50);
    // 0x08001660: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x08001664: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x08001668: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
L_0800166C:
    // 0x0800166C: lwc1        $f6, 0x8($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X8);
    // 0x08001670: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(65, 0X3ED8) << 16);
    // 0x08001674: ldc1        $f0, 0x3ED8($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(65, 0X3ED8));
    // 0x08001678: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x0800167C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x08001680: sub.d       $f16, $f8, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = ctx->f8.d - ctx->f0.d;
    // 0x08001684: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
    // 0x08001688: cvt.s.d     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f10.fl = CVT_S_D(ctx->f16.d);
    // 0x0800168C: swc1        $f10, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->f10.u32l;
    // 0x08001690: lwc1        $f18, 0x8($ra)
    ctx->f18.u32l = MEM_W(ctx->r31, 0X8);
    // 0x08001694: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x08001698: sub.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = ctx->f4.d - ctx->f0.d;
    // 0x0800169C: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x080016A0: swc1        $f8, 0x8($ra)
    MEM_W(0X8, ctx->r31) = ctx->f8.u32l;
    // 0x080016A4: lwc1        $f16, 0x8($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X8);
    // 0x080016A8: cvt.d.s     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f10.d = CVT_D_S(ctx->f16.fl);
    // 0x080016AC: sub.d       $f18, $f10, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = ctx->f10.d - ctx->f0.d;
    // 0x080016B0: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x080016B4: swc1        $f4, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f4.u32l;
    // 0x080016B8: lwc1        $f6, 0x8($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X8);
    // 0x080016BC: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x080016C0: sub.d       $f16, $f8, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = ctx->f8.d - ctx->f0.d;
    // 0x080016C4: cvt.s.d     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f10.fl = CVT_S_D(ctx->f16.d);
    // 0x080016C8: swc1        $f10, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f10.u32l;
    // 0x080016CC: lwc1        $f18, 0x8($a3)
    ctx->f18.u32l = MEM_W(ctx->r7, 0X8);
    // 0x080016D0: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x080016D4: sub.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = ctx->f4.d - ctx->f0.d;
    // 0x080016D8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x080016DC: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x080016E0: swc1        $f8, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f8.u32l;
    // 0x080016E4: lw          $t8, 0x80($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X80);
    // 0x080016E8: lhu         $t6, 0x8A($t8)
    ctx->r14 = MEM_HU(ctx->r24, 0X8A);
    // 0x080016EC: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x080016F0: bgez        $t6, L_08001708
    if (SIGNED(ctx->r14) >= 0) {
        // 0x080016F4: cvt.d.w     $f10, $f16
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.d = CVT_D_W(ctx->f16.u32l);
            goto L_08001708;
    }
    // 0x080016F4: cvt.d.w     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.d = CVT_D_W(ctx->f16.u32l);
    // 0x080016F8: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x080016FC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x08001700: nop

    // 0x08001704: add.d       $f10, $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f10.d = ctx->f10.d + ctx->f18.d;
L_08001708:
    // 0x08001708: lui         $at, 0x4045
    ctx->r1 = S32(0X4045 << 16);
    // 0x0800170C: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x08001710: nop

    // 0x08001714: c.le.d      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.d <= ctx->f10.d;
    // 0x08001718: nop

    // 0x0800171C: bc1f        L_08002B68
    if (!c1cs) {
        // 0x08001720: nop
    
            goto L_08002B68;
    }
    // 0x08001720: nop

    // 0x08001724: sh          $zero, 0x8A($t8)
    MEM_H(0X8A, ctx->r24) = 0;
    // 0x08001728: b           L_08002B68
    // 0x0800172C: sb          $t7, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r15;
        goto L_08002B68;
    // 0x0800172C: sb          $t7, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r15;
L_08001730:
    // 0x08001730: lw          $t9, 0x80($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X80);
    // 0x08001734: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08001738: addiu       $v0, $zero, 0x300
    ctx->r2 = ADD32(0, 0X300);
    // 0x0800173C: lhu         $t6, 0x8A($t9)
    ctx->r14 = MEM_HU(ctx->r25, 0X8A);
    // 0x08001740: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001744: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x08001748: bne         $t6, $at, L_0800184C
    if (ctx->r14 != ctx->r1) {
        // 0x0800174C: lui         $a0, 0x8016
        ctx->r4 = S32(0X8016 << 16);
            goto L_0800184C;
    }
    // 0x0800174C: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08001750: lui         $at, 0xC234
    ctx->r1 = S32(0XC234 << 16);
    // 0x08001754: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08001758: lui         $at, 0xC198
    ctx->r1 = S32(0XC198 << 16);
    // 0x0800175C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x08001760: lui         $at, 0x43E9
    ctx->r1 = S32(0X43E9 << 16);
    // 0x08001764: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x08001768: lui         $at, 0x43CB
    ctx->r1 = S32(0X43CB << 16);
    // 0x0800176C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08001770: lui         $at, 0xC24C
    ctx->r1 = S32(0XC24C << 16);
    // 0x08001774: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08001778: sh          $v0, 0x16($t5)
    MEM_H(0X16, ctx->r13) = ctx->r2;
    // 0x0800177C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(65, 0X3EE0) << 16);
    // 0x08001780: swc1        $f0, 0x10($t5)
    MEM_W(0X10, ctx->r13) = ctx->f0.u32l;
    // 0x08001784: swc1        $f6, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->f6.u32l;
    // 0x08001788: swc1        $f8, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->f8.u32l;
    // 0x0800178C: lwc1        $f16, 0x3EE0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(65, 0X3EE0));
    // 0x08001790: lui         $at, 0xC218
    ctx->r1 = S32(0XC218 << 16);
    // 0x08001794: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08001798: sh          $v0, 0x16($ra)
    MEM_H(0X16, ctx->r31) = ctx->r2;
    // 0x0800179C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(65, 0X3EE4) << 16);
    // 0x080017A0: swc1        $f0, 0x10($ra)
    MEM_W(0X10, ctx->r31) = ctx->f0.u32l;
    // 0x080017A4: swc1        $f16, 0x8($ra)
    MEM_W(0X8, ctx->r31) = ctx->f16.u32l;
    // 0x080017A8: swc1        $f18, 0xC($ra)
    MEM_W(0XC, ctx->r31) = ctx->f18.u32l;
    // 0x080017AC: lwc1        $f10, 0x3EE4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(65, 0X3EE4));
    // 0x080017B0: lui         $at, 0xC1C8
    ctx->r1 = S32(0XC1C8 << 16);
    // 0x080017B4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080017B8: sh          $v0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r2;
    // 0x080017BC: lui         $at, 0x43E0
    ctx->r1 = S32(0X43E0 << 16);
    // 0x080017C0: swc1        $f0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f0.u32l;
    // 0x080017C4: swc1        $f10, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f10.u32l;
    // 0x080017C8: swc1        $f4, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f4.u32l;
    // 0x080017CC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080017D0: sh          $v0, 0x16($a2)
    MEM_H(0X16, ctx->r6) = ctx->r2;
    // 0x080017D4: swc1        $f0, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f0.u32l;
    // 0x080017D8: swc1        $f12, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f12.u32l;
    // 0x080017DC: swc1        $f6, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f6.u32l;
    // 0x080017E0: sh          $v0, 0x16($a3)
    MEM_H(0X16, ctx->r7) = ctx->r2;
    // 0x080017E4: swc1        $f0, 0x10($a3)
    MEM_W(0X10, ctx->r7) = ctx->f0.u32l;
    // 0x080017E8: swc1        $f12, 0xC($a3)
    MEM_W(0XC, ctx->r7) = ctx->f12.u32l;
    // 0x080017EC: swc1        $f14, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f14.u32l;
    // 0x080017F0: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x080017F4: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x080017F8: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x080017FC: sw          $ra, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r31;
    // 0x08001800: lui         $a1, 0x43AD
    ctx->r5 = S32(0X43AD << 16);
    // 0x08001804: lui         $a2, 0xC220
    ctx->r6 = S32(0XC220 << 16);
    // 0x08001808: lui         $a3, 0x41A8
    ctx->r7 = S32(0X41A8 << 16);
    // 0x0800180C: sw          $t5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r13;
    // 0x08001810: jalr        $t9
    // 0x08001814: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_41;
    // 0x08001814: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    after_41:
    // 0x08001818: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800181C: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x08001820: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08001824: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    // 0x08001828: lui         $a1, 0x43CF
    ctx->r5 = S32(0X43CF << 16);
    // 0x0800182C: lui         $a2, 0xC1C0
    ctx->r6 = S32(0XC1C0 << 16);
    // 0x08001830: jalr        $t9
    // 0x08001834: lui         $a3, 0xC200
    ctx->r7 = S32(0XC200 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_42;
    // 0x08001834: lui         $a3, 0xC200
    ctx->r7 = S32(0XC200 << 16);
    after_42:
    // 0x08001838: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x0800183C: lw          $ra, 0x50($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X50);
    // 0x08001840: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x08001844: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x08001848: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
L_0800184C:
    // 0x0800184C: lwc1        $f8, 0x8($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X8);
    // 0x08001850: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(65, 0X3EE8) << 16);
    // 0x08001854: ldc1        $f0, 0x3EE8($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(65, 0X3EE8));
    // 0x08001858: cvt.d.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f16.d = CVT_D_S(ctx->f8.fl);
    // 0x0800185C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x08001860: sub.d       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = ctx->f16.d - ctx->f0.d;
    // 0x08001864: cvt.s.d     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f10.fl = CVT_S_D(ctx->f18.d);
    // 0x08001868: swc1        $f10, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->f10.u32l;
    // 0x0800186C: lwc1        $f4, 0x8($ra)
    ctx->f4.u32l = MEM_W(ctx->r31, 0X8);
    // 0x08001870: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08001874: sub.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = ctx->f6.d - ctx->f0.d;
    // 0x08001878: cvt.s.d     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f16.fl = CVT_S_D(ctx->f8.d);
    // 0x0800187C: swc1        $f16, 0x8($ra)
    MEM_W(0X8, ctx->r31) = ctx->f16.u32l;
    // 0x08001880: lwc1        $f18, 0x8($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X8);
    // 0x08001884: cvt.d.s     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f10.d = CVT_D_S(ctx->f18.fl);
    // 0x08001888: sub.d       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = ctx->f10.d - ctx->f0.d;
    // 0x0800188C: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08001890: swc1        $f6, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f6.u32l;
    // 0x08001894: lwc1        $f8, 0x8($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X8);
    // 0x08001898: cvt.d.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f16.d = CVT_D_S(ctx->f8.fl);
    // 0x0800189C: sub.d       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = ctx->f16.d - ctx->f0.d;
    // 0x080018A0: cvt.s.d     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f10.fl = CVT_S_D(ctx->f18.d);
    // 0x080018A4: swc1        $f10, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f10.u32l;
    // 0x080018A8: lwc1        $f4, 0x8($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X8);
    // 0x080018AC: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x080018B0: sub.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = ctx->f6.d - ctx->f0.d;
    // 0x080018B4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x080018B8: cvt.s.d     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f16.fl = CVT_S_D(ctx->f8.d);
    // 0x080018BC: swc1        $f16, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f16.u32l;
    // 0x080018C0: lw          $t8, 0x80($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X80);
    // 0x080018C4: lhu         $t7, 0x8A($t8)
    ctx->r15 = MEM_HU(ctx->r24, 0X8A);
    // 0x080018C8: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x080018CC: bgez        $t7, L_080018E4
    if (SIGNED(ctx->r15) >= 0) {
        // 0x080018D0: cvt.d.w     $f10, $f18
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    ctx->f10.d = CVT_D_W(ctx->f18.u32l);
            goto L_080018E4;
    }
    // 0x080018D0: cvt.d.w     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    ctx->f10.d = CVT_D_W(ctx->f18.u32l);
    // 0x080018D4: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x080018D8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x080018DC: nop

    // 0x080018E0: add.d       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f10.d = ctx->f10.d + ctx->f4.d;
L_080018E4:
    // 0x080018E4: lui         $at, 0x4048
    ctx->r1 = S32(0X4048 << 16);
    // 0x080018E8: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x080018EC: nop

    // 0x080018F0: c.le.d      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.d <= ctx->f10.d;
    // 0x080018F4: nop

    // 0x080018F8: bc1f        L_08002B68
    if (!c1cs) {
        // 0x080018FC: nop
    
            goto L_08002B68;
    }
    // 0x080018FC: nop

    // 0x08001900: lw          $t4, 0x1C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X1C);
    // 0x08001904: addiu       $a0, $zero, -0x21
    ctx->r4 = ADD32(0, -0X21);
    // 0x08001908: lw          $t6, 0x60($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X60);
    // 0x0800190C: and         $t9, $t6, $a0
    ctx->r25 = ctx->r14 & ctx->r4;
    // 0x08001910: sw          $t9, 0x60($t4)
    MEM_W(0X60, ctx->r12) = ctx->r25;
    // 0x08001914: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x08001918: lw          $t8, 0x60($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X60);
    // 0x0800191C: and         $t7, $t8, $a0
    ctx->r15 = ctx->r24 & ctx->r4;
    // 0x08001920: sw          $t7, 0x60($v1)
    MEM_W(0X60, ctx->r3) = ctx->r15;
    // 0x08001924: lw          $t0, 0x24($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X24);
    // 0x08001928: lw          $t6, 0x60($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X60);
    // 0x0800192C: and         $t9, $t6, $a0
    ctx->r25 = ctx->r14 & ctx->r4;
    // 0x08001930: sw          $t9, 0x60($t0)
    MEM_W(0X60, ctx->r8) = ctx->r25;
    // 0x08001934: lw          $t1, 0x28($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X28);
    // 0x08001938: lw          $t8, 0x60($t1)
    ctx->r24 = MEM_W(ctx->r9, 0X60);
    // 0x0800193C: and         $t7, $t8, $a0
    ctx->r15 = ctx->r24 & ctx->r4;
    // 0x08001940: sw          $t7, 0x60($t1)
    MEM_W(0X60, ctx->r9) = ctx->r15;
    // 0x08001944: lw          $t2, 0x2C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X2C);
    // 0x08001948: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x0800194C: lw          $t6, 0x60($t2)
    ctx->r14 = MEM_W(ctx->r10, 0X60);
    // 0x08001950: and         $t9, $t6, $a0
    ctx->r25 = ctx->r14 & ctx->r4;
    // 0x08001954: sw          $t9, 0x60($t2)
    MEM_W(0X60, ctx->r10) = ctx->r25;
    // 0x08001958: lw          $t8, 0x80($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X80);
    // 0x0800195C: sh          $zero, 0x8A($t8)
    MEM_H(0X8A, ctx->r24) = 0;
    // 0x08001960: b           L_08002B68
    // 0x08001964: sb          $t7, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r15;
        goto L_08002B68;
    // 0x08001964: sb          $t7, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r15;
L_08001968:
    // 0x08001968: lw          $t6, 0x80($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X80);
    // 0x0800196C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08001970: lhu         $v0, 0x8A($t6)
    ctx->r2 = MEM_HU(ctx->r14, 0X8A);
    // 0x08001974: bnel        $v0, $at, L_080019E4
    if (ctx->r2 != ctx->r1) {
        // 0x08001978: mtc1        $v0, $f8
        ctx->f8.u32l = ctx->r2;
            goto L_080019E4;
    }
    goto skip_8;
    // 0x08001978: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    skip_8:
    // 0x0800197C: lw          $t9, 0x60($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X60);
    // 0x08001980: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08001984: lui         $a1, 0x42DA
    ctx->r5 = S32(0X42DA << 16);
    // 0x08001988: ori         $t8, $t9, 0x20
    ctx->r24 = ctx->r25 | 0X20;
    // 0x0800198C: sw          $t8, 0x60($t1)
    MEM_W(0X60, ctx->r9) = ctx->r24;
    // 0x08001990: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x08001994: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001998: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x0800199C: lw          $t7, 0x60($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X60);
    // 0x080019A0: lui         $a2, 0xC30E
    ctx->r6 = S32(0XC30E << 16);
    // 0x080019A4: lui         $a3, 0xC2E0
    ctx->r7 = S32(0XC2E0 << 16);
    // 0x080019A8: ori         $t6, $t7, 0x20
    ctx->r14 = ctx->r15 | 0X20;
    // 0x080019AC: sw          $t6, 0x60($v0)
    MEM_W(0X60, ctx->r2) = ctx->r14;
    // 0x080019B0: jalr        $t9
    // 0x080019B4: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_43;
    // 0x080019B4: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    after_43:
    // 0x080019B8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080019BC: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x080019C0: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x080019C4: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    // 0x080019C8: lui         $a1, 0x433B
    ctx->r5 = S32(0X433B << 16);
    // 0x080019CC: lui         $a2, 0xC2F8
    ctx->r6 = S32(0XC2F8 << 16);
    // 0x080019D0: jalr        $t9
    // 0x080019D4: lui         $a3, 0xC316
    ctx->r7 = S32(0XC316 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_44;
    // 0x080019D4: lui         $a3, 0xC316
    ctx->r7 = S32(0XC316 << 16);
    after_44:
    // 0x080019D8: lw          $t8, 0x80($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X80);
    // 0x080019DC: lhu         $v0, 0x8A($t8)
    ctx->r2 = MEM_HU(ctx->r24, 0X8A);
    // 0x080019E0: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
L_080019E4:
    // 0x080019E4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x080019E8: bgez        $v0, L_08001A04
    if (SIGNED(ctx->r2) >= 0) {
        // 0x080019EC: cvt.d.w     $f16, $f8
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.d = CVT_D_W(ctx->f8.u32l);
            goto L_08001A04;
    }
    // 0x080019EC: cvt.d.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.d = CVT_D_W(ctx->f8.u32l);
    // 0x080019F0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x080019F4: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x080019F8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x080019FC: nop

    // 0x08001A00: add.d       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f16.d = ctx->f16.d + ctx->f18.d;
L_08001A04:
    // 0x08001A04: lui         $at, 0x404B
    ctx->r1 = S32(0X404B << 16);
    // 0x08001A08: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x08001A0C: lw          $t7, 0x80($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X80);
    // 0x08001A10: addiu       $t6, $zero, 0x9
    ctx->r14 = ADD32(0, 0X9);
    // 0x08001A14: c.le.d      $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.d <= ctx->f16.d;
    // 0x08001A18: nop

    // 0x08001A1C: bc1f        L_08002B68
    if (!c1cs) {
        // 0x08001A20: nop
    
            goto L_08002B68;
    }
    // 0x08001A20: nop

    // 0x08001A24: sh          $zero, 0x8A($t7)
    MEM_H(0X8A, ctx->r15) = 0;
    // 0x08001A28: b           L_08002B68
    // 0x08001A2C: sb          $t6, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r14;
        goto L_08002B68;
    // 0x08001A2C: sb          $t6, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r14;
L_08001A30:
    // 0x08001A30: lw          $t9, 0x80($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X80);
    // 0x08001A34: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08001A38: lhu         $v0, 0x8A($t9)
    ctx->r2 = MEM_HU(ctx->r25, 0X8A);
    // 0x08001A3C: bnel        $v0, $at, L_08001AAC
    if (ctx->r2 != ctx->r1) {
        // 0x08001A40: mtc1        $v0, $f10
        ctx->f10.u32l = ctx->r2;
            goto L_08001AAC;
    }
    goto skip_9;
    // 0x08001A40: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    skip_9:
    // 0x08001A44: lw          $t8, 0x60($t2)
    ctx->r24 = MEM_W(ctx->r10, 0X60);
    // 0x08001A48: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08001A4C: lui         $a1, 0x42FC
    ctx->r5 = S32(0X42FC << 16);
    // 0x08001A50: ori         $t7, $t8, 0x20
    ctx->r15 = ctx->r24 | 0X20;
    // 0x08001A54: sw          $t7, 0x60($t2)
    MEM_W(0X60, ctx->r10) = ctx->r15;
    // 0x08001A58: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x08001A5C: lui         $a2, 0xC30C
    ctx->r6 = S32(0XC30C << 16);
    // 0x08001A60: lui         $a3, 0x42D2
    ctx->r7 = S32(0X42D2 << 16);
    // 0x08001A64: lw          $t6, 0x60($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X60);
    // 0x08001A68: ori         $t9, $t6, 0x20
    ctx->r25 = ctx->r14 | 0X20;
    // 0x08001A6C: sw          $t9, 0x60($v0)
    MEM_W(0X60, ctx->r2) = ctx->r25;
    // 0x08001A70: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001A74: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x08001A78: jalr        $t9
    // 0x08001A7C: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_45;
    // 0x08001A7C: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    after_45:
    // 0x08001A80: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001A84: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x08001A88: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08001A8C: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    // 0x08001A90: lui         $a1, 0x434B
    ctx->r5 = S32(0X434B << 16);
    // 0x08001A94: lui         $a2, 0xC2FA
    ctx->r6 = S32(0XC2FA << 16);
    // 0x08001A98: jalr        $t9
    // 0x08001A9C: lui         $a3, 0x4313
    ctx->r7 = S32(0X4313 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_46;
    // 0x08001A9C: lui         $a3, 0x4313
    ctx->r7 = S32(0X4313 << 16);
    after_46:
    // 0x08001AA0: lw          $t8, 0x80($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X80);
    // 0x08001AA4: lhu         $v0, 0x8A($t8)
    ctx->r2 = MEM_HU(ctx->r24, 0X8A);
    // 0x08001AA8: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
L_08001AAC:
    // 0x08001AAC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x08001AB0: bgez        $v0, L_08001ACC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x08001AB4: cvt.d.w     $f6, $f10
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.d = CVT_D_W(ctx->f10.u32l);
            goto L_08001ACC;
    }
    // 0x08001AB4: cvt.d.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.d = CVT_D_W(ctx->f10.u32l);
    // 0x08001AB8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x08001ABC: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x08001AC0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x08001AC4: nop

    // 0x08001AC8: add.d       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = ctx->f6.d + ctx->f8.d;
L_08001ACC:
    // 0x08001ACC: lui         $at, 0x4048
    ctx->r1 = S32(0X4048 << 16);
    // 0x08001AD0: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x08001AD4: lw          $t7, 0x80($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X80);
    // 0x08001AD8: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x08001ADC: c.le.d      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.d <= ctx->f6.d;
    // 0x08001AE0: nop

    // 0x08001AE4: bc1f        L_08002B68
    if (!c1cs) {
        // 0x08001AE8: nop
    
            goto L_08002B68;
    }
    // 0x08001AE8: nop

    // 0x08001AEC: sh          $zero, 0x8A($t7)
    MEM_H(0X8A, ctx->r15) = 0;
    // 0x08001AF0: b           L_08002B68
    // 0x08001AF4: sb          $t6, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r14;
        goto L_08002B68;
    // 0x08001AF4: sb          $t6, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r14;
L_08001AF8:
    // 0x08001AF8: lw          $t9, 0x80($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X80);
    // 0x08001AFC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08001B00: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x08001B04: lhu         $t8, 0x8A($t9)
    ctx->r24 = MEM_HU(ctx->r25, 0X8A);
    // 0x08001B08: lw          $t3, 0x74($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X74);
    // 0x08001B0C: bne         $t8, $at, L_08001C78
    if (ctx->r24 != ctx->r1) {
        // 0x08001B10: lui         $at, 0x800
        ctx->r1 = S32(RELOC_HI16(65, 0X3EF0) << 16);
            goto L_08001C78;
    }
    // 0x08001B10: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(65, 0X3EF0) << 16);
    // 0x08001B14: lwc1        $f0, 0x3EF0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(65, 0X3EF0));
    // 0x08001B18: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(65, 0X3EF4) << 16);
    // 0x08001B1C: lwc1        $f2, 0x3EF4($at)
    ctx->f2.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(65, 0X3EF4));
    // 0x08001B20: swc1        $f0, 0x7C($t0)
    MEM_W(0X7C, ctx->r8) = ctx->f0.u32l;
    // 0x08001B24: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x08001B28: addiu       $v1, $zero, 0x19
    ctx->r3 = ADD32(0, 0X19);
    // 0x08001B2C: lui         $t2, 0x280
    ctx->r10 = S32(0X280 << 16);
    // 0x08001B30: swc1        $f0, 0x7C($t7)
    MEM_W(0X7C, ctx->r15) = ctx->f0.u32l;
    // 0x08001B34: lw          $t6, 0x4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X4);
    // 0x08001B38: ori         $t2, $t2, 0x100
    ctx->r10 = ctx->r10 | 0X100;
    // 0x08001B3C: lui         $at, 0x4150
    ctx->r1 = S32(0X4150 << 16);
    // 0x08001B40: sb          $v1, 0x75($t6)
    MEM_B(0X75, ctx->r14) = ctx->r3;
    // 0x08001B44: lw          $t9, 0x8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X8);
    // 0x08001B48: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08001B4C: lui         $at, 0xC0E0
    ctx->r1 = S32(0XC0E0 << 16);
    // 0x08001B50: sb          $v1, 0x75($t9)
    MEM_B(0X75, ctx->r25) = ctx->r3;
    // 0x08001B54: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
    // 0x08001B58: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08001B5C: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x08001B60: lw          $t8, 0x60($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X60);
    // 0x08001B64: addiu       $t1, $t1, 0x664C
    ctx->r9 = ADD32(ctx->r9, 0X664C);
    // 0x08001B68: lui         $a2, 0x3E2A
    ctx->r6 = S32(0X3E2A << 16);
    // 0x08001B6C: or          $t7, $t8, $t2
    ctx->r15 = ctx->r24 | ctx->r10;
    // 0x08001B70: sw          $t7, 0x60($t0)
    MEM_W(0X60, ctx->r8) = ctx->r15;
    // 0x08001B74: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x08001B78: addiu       $t7, $zero, 0x18
    ctx->r15 = ADD32(0, 0X18);
    // 0x08001B7C: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x08001B80: lw          $t6, 0x60($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X60);
    // 0x08001B84: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x08001B88: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x08001B8C: or          $t9, $t6, $t2
    ctx->r25 = ctx->r14 | ctx->r10;
    // 0x08001B90: sw          $t9, 0x60($v0)
    MEM_W(0X60, ctx->r2) = ctx->r25;
    // 0x08001B94: lw          $t8, 0x78($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X78);
    // 0x08001B98: addiu       $t6, $zero, 0x3FF
    ctx->r14 = ADD32(0, 0X3FF);
    // 0x08001B9C: swc1        $f2, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f2.u32l;
    // 0x08001BA0: swc1        $f16, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f16.u32l;
    // 0x08001BA4: sh          $t7, 0x16($t8)
    MEM_H(0X16, ctx->r24) = ctx->r15;
    // 0x08001BA8: sh          $t6, 0x16($t3)
    MEM_H(0X16, ctx->r11) = ctx->r14;
    // 0x08001BAC: swc1        $f2, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->f2.u32l;
    // 0x08001BB0: swc1        $f4, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->f4.u32l;
    // 0x08001BB4: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x08001BB8: jalr        $t1
    // 0x08001BBC: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
        goto after_47;
    // 0x08001BBC: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    after_47:
    // 0x08001BC0: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x08001BC4: lui         $a2, 0x3E2A
    ctx->r6 = S32(0X3E2A << 16);
    // 0x08001BC8: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x08001BCC: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x08001BD0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x08001BD4: jalr        $t1
    // 0x08001BD8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
        goto after_48;
    // 0x08001BD8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_48:
    // 0x08001BDC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001BE0: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x08001BE4: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08001BE8: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    // 0x08001BEC: lui         $a1, 0x43A4
    ctx->r5 = S32(0X43A4 << 16);
    // 0x08001BF0: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    // 0x08001BF4: jalr        $t9
    // 0x08001BF8: lui         $a3, 0x40C0
    ctx->r7 = S32(0X40C0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_49;
    // 0x08001BF8: lui         $a3, 0x40C0
    ctx->r7 = S32(0X40C0 << 16);
    after_49:
    // 0x08001BFC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001C00: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x08001C04: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08001C08: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    // 0x08001C0C: lui         $a1, 0x43D4
    ctx->r5 = S32(0X43D4 << 16);
    // 0x08001C10: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    // 0x08001C14: jalr        $t9
    // 0x08001C18: lui         $a3, 0x40C0
    ctx->r7 = S32(0X40C0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_50;
    // 0x08001C18: lui         $a3, 0x40C0
    ctx->r7 = S32(0X40C0 << 16);
    after_50:
    // 0x08001C1C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001C20: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x08001C24: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08001C28: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    // 0x08001C2C: jalr        $t9
    // 0x08001C30: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_51;
    // 0x08001C30: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    after_51:
    // 0x08001C34: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001C38: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x08001C3C: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08001C40: lui         $a1, 0x439D
    ctx->r5 = S32(0X439D << 16);
    // 0x08001C44: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x08001C48: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    // 0x08001C4C: lui         $a2, 0xC208
    ctx->r6 = S32(0XC208 << 16);
    // 0x08001C50: jalr        $t9
    // 0x08001C54: lui         $a3, 0x40C0
    ctx->r7 = S32(0X40C0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_52;
    // 0x08001C54: lui         $a3, 0x40C0
    ctx->r7 = S32(0X40C0 << 16);
    after_52:
    // 0x08001C58: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001C5C: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x08001C60: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08001C64: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    // 0x08001C68: lui         $a1, 0x43CC
    ctx->r5 = S32(0X43CC << 16);
    // 0x08001C6C: lui         $a2, 0xC170
    ctx->r6 = S32(0XC170 << 16);
    // 0x08001C70: jalr        $t9
    // 0x08001C74: lui         $a3, 0x40C0
    ctx->r7 = S32(0X40C0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_53;
    // 0x08001C74: lui         $a3, 0x40C0
    ctx->r7 = S32(0X40C0 << 16);
    after_53:
L_08001C78:
    // 0x08001C78: lw          $v1, 0x78($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X78);
    // 0x08001C7C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(65, 0X3EF8) << 16);
    // 0x08001C80: ldc1        $f0, 0x3EF8($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(65, 0X3EF8));
    // 0x08001C84: lwc1        $f10, 0x8($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X8);
    // 0x08001C88: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001C8C: addiu       $t9, $t9, 0x2380
    ctx->r25 = ADD32(ctx->r25, 0X2380);
    // 0x08001C90: cvt.d.s     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f8.d = CVT_D_S(ctx->f10.fl);
    // 0x08001C94: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08001C98: sub.d       $f6, $f8, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = ctx->f8.d - ctx->f0.d;
    // 0x08001C9C: cvt.s.d     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f18.fl = CVT_S_D(ctx->f6.d);
    // 0x08001CA0: swc1        $f18, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f18.u32l;
    // 0x08001CA4: lw          $t7, 0x74($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X74);
    // 0x08001CA8: lwc1        $f16, 0x8($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X8);
    // 0x08001CAC: cvt.d.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.d = CVT_D_S(ctx->f16.fl);
    // 0x08001CB0: sub.d       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = ctx->f4.d - ctx->f0.d;
    // 0x08001CB4: cvt.s.d     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f8.fl = CVT_S_D(ctx->f10.d);
    // 0x08001CB8: swc1        $f8, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f8.u32l;
    // 0x08001CBC: jalr        $t9
    // 0x08001CC0: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_54;
    // 0x08001CC0: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    after_54:
    // 0x08001CC4: bne         $v0, $zero, L_08002B68
    if (ctx->r2 != 0) {
        // 0x08001CC8: lw          $t8, 0x80($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X80);
            goto L_08002B68;
    }
    // 0x08001CC8: lw          $t8, 0x80($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X80);
    // 0x08001CCC: sh          $zero, 0x8A($t8)
    MEM_H(0X8A, ctx->r24) = 0;
    // 0x08001CD0: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x08001CD4: b           L_08002B68
    // 0x08001CD8: sb          $t6, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r14;
        goto L_08002B68;
    // 0x08001CD8: sb          $t6, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r14;
L_08001CDC:
    // 0x08001CDC: lw          $t7, 0x80($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X80);
    // 0x08001CE0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08001CE4: lui         $a2, 0x3E4C
    ctx->r6 = S32(0X3E4C << 16);
    // 0x08001CE8: lhu         $v1, 0x8A($t7)
    ctx->r3 = MEM_HU(ctx->r15, 0X8A);
    // 0x08001CEC: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x08001CF0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x08001CF4: bne         $v1, $at, L_08001D34
    if (ctx->r3 != ctx->r1) {
        // 0x08001CF8: addiu       $a1, $zero, 0x8
        ctx->r5 = ADD32(0, 0X8);
            goto L_08001D34;
    }
    // 0x08001CF8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x08001CFC: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x08001D00: addiu       $t1, $t1, 0x664C
    ctx->r9 = ADD32(ctx->r9, 0X664C);
    // 0x08001D04: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x08001D08: jalr        $t1
    // 0x08001D0C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
        goto after_55;
    // 0x08001D0C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_55:
    // 0x08001D10: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x08001D14: lui         $a2, 0x3E4C
    ctx->r6 = S32(0X3E4C << 16);
    // 0x08001D18: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x08001D1C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x08001D20: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x08001D24: jalr        $t1
    // 0x08001D28: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
        goto after_56;
    // 0x08001D28: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_56:
    // 0x08001D2C: lw          $t9, 0x80($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X80);
    // 0x08001D30: lhu         $v1, 0x8A($t9)
    ctx->r3 = MEM_HU(ctx->r25, 0X8A);
L_08001D34:
    // 0x08001D34: addiu       $at, $zero, 0x96
    ctx->r1 = ADD32(0, 0X96);
    // 0x08001D38: bne         $v1, $at, L_08002B68
    if (ctx->r3 != ctx->r1) {
        // 0x08001D3C: lw          $t8, 0x80($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X80);
            goto L_08002B68;
    }
    // 0x08001D3C: lw          $t8, 0x80($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X80);
    // 0x08001D40: sh          $zero, 0x8A($t8)
    MEM_H(0X8A, ctx->r24) = 0;
    // 0x08001D44: addiu       $t6, $zero, 0xB
    ctx->r14 = ADD32(0, 0XB);
    // 0x08001D48: b           L_08002B68
    // 0x08001D4C: sb          $t6, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r14;
        goto L_08002B68;
    // 0x08001D4C: sb          $t6, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r14;
L_08001D50:
    // 0x08001D50: lw          $t7, 0x80($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X80);
    // 0x08001D54: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08001D58: addiu       $t9, $zero, 0x3F8
    ctx->r25 = ADD32(0, 0X3F8);
    // 0x08001D5C: lhu         $v0, 0x8A($t7)
    ctx->r2 = MEM_HU(ctx->r15, 0X8A);
    // 0x08001D60: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x08001D64: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x08001D68: bne         $v0, $at, L_08001E38
    if (ctx->r2 != ctx->r1) {
        // 0x08001D6C: lui         $a2, 0x3EAA
        ctx->r6 = S32(0X3EAA << 16);
            goto L_08001E38;
    }
    // 0x08001D6C: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x08001D70: lui         $at, 0xC310
    ctx->r1 = S32(0XC310 << 16);
    // 0x08001D74: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x08001D78: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(65, 0X3F00) << 16);
    // 0x08001D7C: lwc1        $f6, 0x3F00($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(65, 0X3F00));
    // 0x08001D80: lui         $at, 0xC32A
    ctx->r1 = S32(0XC32A << 16);
    // 0x08001D84: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08001D88: sh          $t9, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r25;
    // 0x08001D8C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(65, 0X3F04) << 16);
    // 0x08001D90: swc1        $f2, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f2.u32l;
    // 0x08001D94: swc1        $f6, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f6.u32l;
    // 0x08001D98: swc1        $f18, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f18.u32l;
    // 0x08001D9C: lwc1        $f16, 0x3F04($at)
    ctx->f16.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(65, 0X3F04));
    // 0x08001DA0: lui         $at, 0xC325
    ctx->r1 = S32(0XC325 << 16);
    // 0x08001DA4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08001DA8: sh          $t8, 0x16($t0)
    MEM_H(0X16, ctx->r8) = ctx->r24;
    // 0x08001DAC: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x08001DB0: swc1        $f2, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->f2.u32l;
    // 0x08001DB4: swc1        $f16, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f16.u32l;
    // 0x08001DB8: swc1        $f4, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->f4.u32l;
    // 0x08001DBC: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x08001DC0: addiu       $t1, $t1, 0x664C
    ctx->r9 = ADD32(ctx->r9, 0X664C);
    // 0x08001DC4: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x08001DC8: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x08001DCC: jalr        $t1
    // 0x08001DD0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
        goto after_57;
    // 0x08001DD0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_57:
    // 0x08001DD4: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x08001DD8: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x08001DDC: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x08001DE0: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08001DE4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x08001DE8: jalr        $t1
    // 0x08001DEC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
        goto after_58;
    // 0x08001DEC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_58:
    // 0x08001DF0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001DF4: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x08001DF8: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08001DFC: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    // 0x08001E00: lui         $a1, 0x4376
    ctx->r5 = S32(0X4376 << 16);
    // 0x08001E04: lui         $a2, 0xC305
    ctx->r6 = S32(0XC305 << 16);
    // 0x08001E08: jalr        $t9
    // 0x08001E0C: lui         $a3, 0xC2FE
    ctx->r7 = S32(0XC2FE << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_59;
    // 0x08001E0C: lui         $a3, 0xC2FE
    ctx->r7 = S32(0XC2FE << 16);
    after_59:
    // 0x08001E10: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001E14: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x08001E18: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08001E1C: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    // 0x08001E20: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    // 0x08001E24: lui         $a2, 0xC2E0
    ctx->r6 = S32(0XC2E0 << 16);
    // 0x08001E28: jalr        $t9
    // 0x08001E2C: lui         $a3, 0xC34B
    ctx->r7 = S32(0XC34B << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_60;
    // 0x08001E2C: lui         $a3, 0xC34B
    ctx->r7 = S32(0XC34B << 16);
    after_60:
    // 0x08001E30: lw          $t6, 0x80($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X80);
    // 0x08001E34: lhu         $v0, 0x8A($t6)
    ctx->r2 = MEM_HU(ctx->r14, 0X8A);
L_08001E38:
    // 0x08001E38: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x08001E3C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x08001E40: bgez        $v0, L_08001E58
    if (SIGNED(ctx->r2) >= 0) {
        // 0x08001E44: cvt.d.w     $f8, $f10
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.d = CVT_D_W(ctx->f10.u32l);
            goto L_08001E58;
    }
    // 0x08001E44: cvt.d.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.d = CVT_D_W(ctx->f10.u32l);
    // 0x08001E48: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x08001E4C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x08001E50: nop

    // 0x08001E54: add.d       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f8.d + ctx->f6.d;
L_08001E58:
    // 0x08001E58: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(65, 0X3F08) << 16);
    // 0x08001E5C: ldc1        $f18, 0x3F08($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(65, 0X3F08));
    // 0x08001E60: lw          $t7, 0x80($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X80);
    // 0x08001E64: addiu       $t8, $zero, 0xC
    ctx->r24 = ADD32(0, 0XC);
    // 0x08001E68: c.le.d      $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f18.d <= ctx->f8.d;
    // 0x08001E6C: nop

    // 0x08001E70: bc1f        L_08002B68
    if (!c1cs) {
        // 0x08001E74: nop
    
            goto L_08002B68;
    }
    // 0x08001E74: nop

    // 0x08001E78: sh          $zero, 0x8A($t7)
    MEM_H(0X8A, ctx->r15) = 0;
    // 0x08001E7C: b           L_08002B68
    // 0x08001E80: sb          $t8, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r24;
        goto L_08002B68;
    // 0x08001E80: sb          $t8, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r24;
L_08001E84:
    // 0x08001E84: lw          $t9, 0x80($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X80);
    // 0x08001E88: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08001E8C: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x08001E90: lhu         $t6, 0x8A($t9)
    ctx->r14 = MEM_HU(ctx->r25, 0X8A);
    // 0x08001E94: addiu       $v0, $v0, -0x4FB4
    ctx->r2 = ADD32(ctx->r2, -0X4FB4);
    // 0x08001E98: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x08001E9C: bnel        $t6, $at, L_08002014
    if (ctx->r14 != ctx->r1) {
        // 0x08001EA0: lw          $v1, 0x78($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X78);
            goto L_08002014;
    }
    goto skip_10;
    // 0x08001EA0: lw          $v1, 0x78($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X78);
    skip_10:
    // 0x08001EA4: jalr        $v0
    // 0x08001EA8: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_61;
    // 0x08001EA8: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_61:
    // 0x08001EAC: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x08001EB0: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x08001EB4: jalr        $v0
    // 0x08001EB8: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_62;
    // 0x08001EB8: nop

    after_62:
    // 0x08001EBC: lw          $t7, 0x4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4);
    // 0x08001EC0: lw          $t0, 0x74($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X74);
    // 0x08001EC4: lw          $t3, 0x78($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X78);
    // 0x08001EC8: sb          $zero, 0x75($t7)
    MEM_B(0X75, ctx->r15) = 0;
    // 0x08001ECC: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
    // 0x08001ED0: lui         $v1, 0xFD7F
    ctx->r3 = S32(0XFD7F << 16);
    // 0x08001ED4: ori         $v1, $v1, 0xFEFF
    ctx->r3 = ctx->r3 | 0XFEFF;
    // 0x08001ED8: sb          $zero, 0x75($t8)
    MEM_B(0X75, ctx->r24) = 0;
    // 0x08001EDC: lw          $t2, 0x4($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X4);
    // 0x08001EE0: lui         $at, 0x43A6
    ctx->r1 = S32(0X43A6 << 16);
    // 0x08001EE4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08001EE8: lw          $t9, 0x60($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X60);
    // 0x08001EEC: lui         $at, 0xC2F2
    ctx->r1 = S32(0XC2F2 << 16);
    // 0x08001EF0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x08001EF4: and         $t6, $t9, $v1
    ctx->r14 = ctx->r25 & ctx->r3;
    // 0x08001EF8: sw          $t6, 0x60($t2)
    MEM_W(0X60, ctx->r10) = ctx->r14;
    // 0x08001EFC: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x08001F00: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x08001F04: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08001F08: lw          $t7, 0x60($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X60);
    // 0x08001F0C: lui         $at, 0xC150
    ctx->r1 = S32(0XC150 << 16);
    // 0x08001F10: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08001F14: and         $t8, $t7, $v1
    ctx->r24 = ctx->r15 & ctx->r3;
    // 0x08001F18: sw          $t8, 0x60($v0)
    MEM_W(0X60, ctx->r2) = ctx->r24;
    // 0x08001F1C: swc1        $f0, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->f0.u32l;
    // 0x08001F20: swc1        $f2, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->f2.u32l;
    // 0x08001F24: swc1        $f16, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->f16.u32l;
    // 0x08001F28: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x08001F2C: swc1        $f0, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f0.u32l;
    // 0x08001F30: swc1        $f2, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->f2.u32l;
    // 0x08001F34: swc1        $f4, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->f4.u32l;
    // 0x08001F38: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x08001F3C: addiu       $t1, $t1, 0x664C
    ctx->r9 = ADD32(ctx->r9, 0X664C);
    // 0x08001F40: lui         $a2, 0x3E2A
    ctx->r6 = S32(0X3E2A << 16);
    // 0x08001F44: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x08001F48: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x08001F4C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x08001F50: jalr        $t1
    // 0x08001F54: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
        goto after_63;
    // 0x08001F54: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_63:
    // 0x08001F58: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x08001F5C: lui         $a2, 0x3E2A
    ctx->r6 = S32(0X3E2A << 16);
    // 0x08001F60: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x08001F64: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x08001F68: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x08001F6C: jalr        $t1
    // 0x08001F70: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
        goto after_64;
    // 0x08001F70: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_64:
    // 0x08001F74: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001F78: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x08001F7C: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08001F80: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    // 0x08001F84: lui         $a1, 0x4379
    ctx->r5 = S32(0X4379 << 16);
    // 0x08001F88: lui         $a2, 0xC2D4
    ctx->r6 = S32(0XC2D4 << 16);
    // 0x08001F8C: jalr        $t9
    // 0x08001F90: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_65;
    // 0x08001F90: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    after_65:
    // 0x08001F94: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001F98: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x08001F9C: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08001FA0: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    // 0x08001FA4: lui         $a1, 0x43AC
    ctx->r5 = S32(0X43AC << 16);
    // 0x08001FA8: lui         $a2, 0xC2B4
    ctx->r6 = S32(0XC2B4 << 16);
    // 0x08001FAC: jalr        $t9
    // 0x08001FB0: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_66;
    // 0x08001FB0: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    after_66:
    // 0x08001FB4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001FB8: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x08001FBC: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08001FC0: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    // 0x08001FC4: jalr        $t9
    // 0x08001FC8: lui         $a1, 0x4352
    ctx->r5 = S32(0X4352 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_67;
    // 0x08001FC8: lui         $a1, 0x4352
    ctx->r5 = S32(0X4352 << 16);
    after_67:
    // 0x08001FCC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001FD0: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x08001FD4: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08001FD8: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    // 0x08001FDC: lui         $a1, 0x4327
    ctx->r5 = S32(0X4327 << 16);
    // 0x08001FE0: lui         $a2, 0xC30A
    ctx->r6 = S32(0XC30A << 16);
    // 0x08001FE4: jalr        $t9
    // 0x08001FE8: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_68;
    // 0x08001FE8: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    after_68:
    // 0x08001FEC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001FF0: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x08001FF4: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08001FF8: lui         $a1, 0x4380
    ctx->r5 = S32(0X4380 << 16);
    // 0x08001FFC: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x08002000: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    // 0x08002004: lui         $a2, 0xC2F2
    ctx->r6 = S32(0XC2F2 << 16);
    // 0x08002008: jalr        $t9
    // 0x0800200C: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_69;
    // 0x0800200C: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    after_69:
    // 0x08002010: lw          $v1, 0x78($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X78);
L_08002014:
    // 0x08002014: lui         $at, 0xC30C
    ctx->r1 = S32(0XC30C << 16);
    // 0x08002018: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x0800201C: lwc1        $f2, 0xC($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0XC);
    // 0x08002020: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002024: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(65, 0X3F10) << 16);
    // 0x08002028: c.lt.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl < ctx->f2.fl;
    // 0x0800202C: addiu       $t9, $t9, 0x2380
    ctx->r25 = ADD32(ctx->r25, 0X2380);
    // 0x08002030: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08002034: bc1fl       L_0800206C
    if (!c1cs) {
        // 0x08002038: lwc1        $f8, 0x8($v1)
        ctx->f8.u32l = MEM_W(ctx->r3, 0X8);
            goto L_0800206C;
    }
    goto skip_11;
    // 0x08002038: lwc1        $f8, 0x8($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X8);
    skip_11:
    // 0x0800203C: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x08002040: ldc1        $f0, 0x3F10($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(65, 0X3F10));
    // 0x08002044: cvt.d.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
    // 0x08002048: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x0800204C: sub.d       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = ctx->f4.d - ctx->f0.d;
    // 0x08002050: sub.d       $f18, $f8, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = ctx->f8.d - ctx->f0.d;
    // 0x08002054: cvt.s.d     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f6.fl = CVT_S_D(ctx->f10.d);
    // 0x08002058: cvt.s.d     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f16.fl = CVT_S_D(ctx->f18.d);
    // 0x0800205C: swc1        $f6, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f6.u32l;
    // 0x08002060: b           L_08002084
    // 0x08002064: swc1        $f16, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f16.u32l;
        goto L_08002084;
    // 0x08002064: swc1        $f16, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f16.u32l;
    // 0x08002068: lwc1        $f8, 0x8($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X8);
L_0800206C:
    // 0x0800206C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(65, 0X3F18) << 16);
    // 0x08002070: ldc1        $f0, 0x3F18($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(65, 0X3F18));
    // 0x08002074: cvt.d.s     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f18.d = CVT_D_S(ctx->f8.fl);
    // 0x08002078: sub.d       $f16, $f18, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = ctx->f18.d - ctx->f0.d;
    // 0x0800207C: cvt.s.d     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f4.fl = CVT_S_D(ctx->f16.d);
    // 0x08002080: swc1        $f4, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f4.u32l;
L_08002084:
    // 0x08002084: lw          $v0, 0x74($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X74);
    // 0x08002088: lui         $at, 0xC30C
    ctx->r1 = S32(0XC30C << 16);
    // 0x0800208C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08002090: lwc1        $f2, 0xC($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08002094: c.lt.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl < ctx->f2.fl;
    // 0x08002098: nop

    // 0x0800209C: bc1fl       L_080020D0
    if (!c1cs) {
        // 0x080020A0: lwc1        $f8, 0x8($v0)
        ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
            goto L_080020D0;
    }
    goto skip_12;
    // 0x080020A0: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    skip_12:
    // 0x080020A4: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x080020A8: cvt.d.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
    // 0x080020AC: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x080020B0: sub.d       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = ctx->f4.d - ctx->f0.d;
    // 0x080020B4: sub.d       $f18, $f8, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = ctx->f8.d - ctx->f0.d;
    // 0x080020B8: cvt.s.d     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f6.fl = CVT_S_D(ctx->f10.d);
    // 0x080020BC: cvt.s.d     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f16.fl = CVT_S_D(ctx->f18.d);
    // 0x080020C0: swc1        $f6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f6.u32l;
    // 0x080020C4: b           L_080020E0
    // 0x080020C8: swc1        $f16, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f16.u32l;
        goto L_080020E0;
    // 0x080020C8: swc1        $f16, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f16.u32l;
    // 0x080020CC: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
L_080020D0:
    // 0x080020D0: cvt.d.s     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f18.d = CVT_D_S(ctx->f8.fl);
    // 0x080020D4: sub.d       $f16, $f18, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = ctx->f18.d - ctx->f0.d;
    // 0x080020D8: cvt.s.d     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f4.fl = CVT_S_D(ctx->f16.d);
    // 0x080020DC: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
L_080020E0:
    // 0x080020E0: jalr        $t9
    // 0x080020E4: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_70;
    // 0x080020E4: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    after_70:
    // 0x080020E8: bne         $v0, $zero, L_08002B68
    if (ctx->r2 != 0) {
        // 0x080020EC: lw          $t6, 0x80($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X80);
            goto L_08002B68;
    }
    // 0x080020EC: lw          $t6, 0x80($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X80);
    // 0x080020F0: sh          $zero, 0x8A($t6)
    MEM_H(0X8A, ctx->r14) = 0;
    // 0x080020F4: addiu       $t7, $zero, 0xD
    ctx->r15 = ADD32(0, 0XD);
    // 0x080020F8: b           L_08002B68
    // 0x080020FC: sb          $t7, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r15;
        goto L_08002B68;
    // 0x080020FC: sb          $t7, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r15;
L_08002100:
    // 0x08002100: lw          $t8, 0x80($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X80);
    // 0x08002104: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08002108: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x0800210C: lhu         $v0, 0x8A($t8)
    ctx->r2 = MEM_HU(ctx->r24, 0X8A);
    // 0x08002110: lui         $a3, 0x424C
    ctx->r7 = S32(0X424C << 16);
    // 0x08002114: bnel        $v0, $at, L_08002218
    if (ctx->r2 != ctx->r1) {
        // 0x08002118: mtc1        $v0, $f16
        ctx->f16.u32l = ctx->r2;
            goto L_08002218;
    }
    goto skip_13;
    // 0x08002118: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    skip_13:
    // 0x0800211C: lw          $t9, 0x60($t4)
    ctx->r25 = MEM_W(ctx->r12, 0X60);
    // 0x08002120: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(65, 0X3F20) << 16);
    // 0x08002124: lwc1        $f0, 0x3F20($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(65, 0X3F20));
    // 0x08002128: ori         $t6, $t9, 0x20
    ctx->r14 = ctx->r25 | 0X20;
    // 0x0800212C: sw          $t6, 0x60($t4)
    MEM_W(0X60, ctx->r12) = ctx->r14;
    // 0x08002130: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x08002134: lui         $at, 0xC30B
    ctx->r1 = S32(0XC30B << 16);
    // 0x08002138: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x0800213C: lw          $t7, 0x60($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X60);
    // 0x08002140: lui         $at, 0x430C
    ctx->r1 = S32(0X430C << 16);
    // 0x08002144: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08002148: ori         $t8, $t7, 0x20
    ctx->r24 = ctx->r15 | 0X20;
    // 0x0800214C: sw          $t8, 0x60($v1)
    MEM_W(0X60, ctx->r3) = ctx->r24;
    // 0x08002150: lw          $t0, 0x24($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X24);
    // 0x08002154: addiu       $v0, $zero, 0x300
    ctx->r2 = ADD32(0, 0X300);
    // 0x08002158: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x0800215C: lw          $t9, 0x60($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X60);
    // 0x08002160: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08002164: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x08002168: ori         $t6, $t9, 0x20
    ctx->r14 = ctx->r25 | 0X20;
    // 0x0800216C: sw          $t6, 0x60($t0)
    MEM_W(0X60, ctx->r8) = ctx->r14;
    // 0x08002170: lw          $t1, 0x28($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X28);
    // 0x08002174: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08002178: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x0800217C: lw          $t7, 0x60($t1)
    ctx->r15 = MEM_W(ctx->r9, 0X60);
    // 0x08002180: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08002184: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002188: ori         $t8, $t7, 0x20
    ctx->r24 = ctx->r15 | 0X20;
    // 0x0800218C: sw          $t8, 0x60($t1)
    MEM_W(0X60, ctx->r9) = ctx->r24;
    // 0x08002190: sh          $v0, 0x16($t5)
    MEM_H(0X16, ctx->r13) = ctx->r2;
    // 0x08002194: swc1        $f0, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->f0.u32l;
    // 0x08002198: swc1        $f2, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->f2.u32l;
    // 0x0800219C: swc1        $f10, 0x10($t5)
    MEM_W(0X10, ctx->r13) = ctx->f10.u32l;
    // 0x080021A0: sh          $v0, 0x16($ra)
    MEM_H(0X16, ctx->r31) = ctx->r2;
    // 0x080021A4: swc1        $f0, 0x8($ra)
    MEM_W(0X8, ctx->r31) = ctx->f0.u32l;
    // 0x080021A8: swc1        $f2, 0xC($ra)
    MEM_W(0XC, ctx->r31) = ctx->f2.u32l;
    // 0x080021AC: swc1        $f6, 0x10($ra)
    MEM_W(0X10, ctx->r31) = ctx->f6.u32l;
    // 0x080021B0: sh          $v0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r2;
    // 0x080021B4: swc1        $f0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f0.u32l;
    // 0x080021B8: swc1        $f2, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f2.u32l;
    // 0x080021BC: swc1        $f8, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f8.u32l;
    // 0x080021C0: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x080021C4: sh          $v0, 0x16($a2)
    MEM_H(0X16, ctx->r6) = ctx->r2;
    // 0x080021C8: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x080021CC: swc1        $f0, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f0.u32l;
    // 0x080021D0: swc1        $f2, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f2.u32l;
    // 0x080021D4: swc1        $f18, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f18.u32l;
    // 0x080021D8: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    // 0x080021DC: lui         $a2, 0xC30A
    ctx->r6 = S32(0XC30A << 16);
    // 0x080021E0: jalr        $t9
    // 0x080021E4: lui         $a1, 0x434C
    ctx->r5 = S32(0X434C << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_71;
    // 0x080021E4: lui         $a1, 0x434C
    ctx->r5 = S32(0X434C << 16);
    after_71:
    // 0x080021E8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080021EC: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x080021F0: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x080021F4: lui         $a1, 0x438A
    ctx->r5 = S32(0X438A << 16);
    // 0x080021F8: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x080021FC: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    // 0x08002200: lui         $a2, 0xC2F8
    ctx->r6 = S32(0XC2F8 << 16);
    // 0x08002204: jalr        $t9
    // 0x08002208: lui         $a3, 0x42DC
    ctx->r7 = S32(0X42DC << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_72;
    // 0x08002208: lui         $a3, 0x42DC
    ctx->r7 = S32(0X42DC << 16);
    after_72:
    // 0x0800220C: lw          $t6, 0x80($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X80);
    // 0x08002210: lhu         $v0, 0x8A($t6)
    ctx->r2 = MEM_HU(ctx->r14, 0X8A);
    // 0x08002214: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
L_08002218:
    // 0x08002218: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x0800221C: bgez        $v0, L_08002238
    if (SIGNED(ctx->r2) >= 0) {
        // 0x08002220: cvt.d.w     $f4, $f16
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.d = CVT_D_W(ctx->f16.u32l);
            goto L_08002238;
    }
    // 0x08002220: cvt.d.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.d = CVT_D_W(ctx->f16.u32l);
    // 0x08002224: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x08002228: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x0800222C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x08002230: nop

    // 0x08002234: add.d       $f4, $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = ctx->f4.d + ctx->f10.d;
L_08002238:
    // 0x08002238: lui         $at, 0x4038
    ctx->r1 = S32(0X4038 << 16);
    // 0x0800223C: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x08002240: lw          $t7, 0x80($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X80);
    // 0x08002244: addiu       $t8, $zero, 0xE
    ctx->r24 = ADD32(0, 0XE);
    // 0x08002248: c.le.d      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.d <= ctx->f4.d;
    // 0x0800224C: nop

    // 0x08002250: bc1f        L_08002B68
    if (!c1cs) {
        // 0x08002254: nop
    
            goto L_08002B68;
    }
    // 0x08002254: nop

    // 0x08002258: sh          $zero, 0x8A($t7)
    MEM_H(0X8A, ctx->r15) = 0;
    // 0x0800225C: b           L_08002B68
    // 0x08002260: sb          $t8, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r24;
        goto L_08002B68;
    // 0x08002260: sb          $t8, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r24;
L_08002264:
    // 0x08002264: lw          $t9, 0x80($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X80);
    // 0x08002268: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x0800226C: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x08002270: lhu         $v0, 0x8A($t9)
    ctx->r2 = MEM_HU(ctx->r25, 0X8A);
    // 0x08002274: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x08002278: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x0800227C: bne         $v0, $at, L_08002350
    if (ctx->r2 != ctx->r1) {
        // 0x08002280: addiu       $a3, $zero, 0x1
        ctx->r7 = ADD32(0, 0X1);
            goto L_08002350;
    }
    // 0x08002280: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x08002284: lui         $at, 0x4333
    ctx->r1 = S32(0X4333 << 16);
    // 0x08002288: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x0800228C: lui         $at, 0xC30C
    ctx->r1 = S32(0XC30C << 16);
    // 0x08002290: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08002294: lui         $at, 0xC31A
    ctx->r1 = S32(0XC31A << 16);
    // 0x08002298: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x0800229C: lui         $at, 0x4341
    ctx->r1 = S32(0X4341 << 16);
    // 0x080022A0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x080022A4: lui         $at, 0xC30C
    ctx->r1 = S32(0XC30C << 16);
    // 0x080022A8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080022AC: addiu       $v0, $zero, 0x3B0
    ctx->r2 = ADD32(0, 0X3B0);
    // 0x080022B0: sh          $v0, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r2;
    // 0x080022B4: lui         $at, 0xC30D
    ctx->r1 = S32(0XC30D << 16);
    // 0x080022B8: swc1        $f8, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f8.u32l;
    // 0x080022BC: swc1        $f18, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f18.u32l;
    // 0x080022C0: swc1        $f16, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f16.u32l;
    // 0x080022C4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080022C8: sh          $v0, 0x16($t0)
    MEM_H(0X16, ctx->r8) = ctx->r2;
    // 0x080022CC: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x080022D0: swc1        $f10, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f10.u32l;
    // 0x080022D4: swc1        $f4, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->f4.u32l;
    // 0x080022D8: swc1        $f6, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->f6.u32l;
    // 0x080022DC: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x080022E0: addiu       $t1, $t1, 0x664C
    ctx->r9 = ADD32(ctx->r9, 0X664C);
    // 0x080022E4: jalr        $t1
    // 0x080022E8: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
        goto after_73;
    // 0x080022E8: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    after_73:
    // 0x080022EC: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x080022F0: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x080022F4: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x080022F8: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x080022FC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08002300: jalr        $t1
    // 0x08002304: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
        goto after_74;
    // 0x08002304: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_74:
    // 0x08002308: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800230C: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x08002310: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08002314: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    // 0x08002318: lui         $a1, 0x42DA
    ctx->r5 = S32(0X42DA << 16);
    // 0x0800231C: lui         $a2, 0xC30E
    ctx->r6 = S32(0XC30E << 16);
    // 0x08002320: jalr        $t9
    // 0x08002324: lui         $a3, 0xC2E0
    ctx->r7 = S32(0XC2E0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_75;
    // 0x08002324: lui         $a3, 0xC2E0
    ctx->r7 = S32(0XC2E0 << 16);
    after_75:
    // 0x08002328: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800232C: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x08002330: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08002334: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    // 0x08002338: lui         $a1, 0x433B
    ctx->r5 = S32(0X433B << 16);
    // 0x0800233C: lui         $a2, 0xC2F8
    ctx->r6 = S32(0XC2F8 << 16);
    // 0x08002340: jalr        $t9
    // 0x08002344: lui         $a3, 0xC316
    ctx->r7 = S32(0XC316 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_76;
    // 0x08002344: lui         $a3, 0xC316
    ctx->r7 = S32(0XC316 << 16);
    after_76:
    // 0x08002348: lw          $t6, 0x80($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X80);
    // 0x0800234C: lhu         $v0, 0x8A($t6)
    ctx->r2 = MEM_HU(ctx->r14, 0X8A);
L_08002350:
    // 0x08002350: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x08002354: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x08002358: bgez        $v0, L_08002374
    if (SIGNED(ctx->r2) >= 0) {
        // 0x0800235C: cvt.d.w     $f18, $f8
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.d = CVT_D_W(ctx->f8.u32l);
            goto L_08002374;
    }
    // 0x0800235C: cvt.d.w     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.d = CVT_D_W(ctx->f8.u32l);
    // 0x08002360: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x08002364: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x08002368: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x0800236C: nop

    // 0x08002370: add.d       $f18, $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f18.d + ctx->f16.d;
L_08002374:
    // 0x08002374: lui         $at, 0x4038
    ctx->r1 = S32(0X4038 << 16);
    // 0x08002378: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x0800237C: lw          $t7, 0x80($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X80);
    // 0x08002380: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x08002384: c.le.d      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.d <= ctx->f18.d;
    // 0x08002388: nop

    // 0x0800238C: bc1f        L_08002B68
    if (!c1cs) {
        // 0x08002390: nop
    
            goto L_08002B68;
    }
    // 0x08002390: nop

    // 0x08002394: sh          $zero, 0x8A($t7)
    MEM_H(0X8A, ctx->r15) = 0;
    // 0x08002398: b           L_08002B68
    // 0x0800239C: sb          $t8, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r24;
        goto L_08002B68;
    // 0x0800239C: sb          $t8, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r24;
L_080023A0:
    // 0x080023A0: lw          $t9, 0x80($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X80);
    // 0x080023A4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x080023A8: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x080023AC: lhu         $v0, 0x8A($t9)
    ctx->r2 = MEM_HU(ctx->r25, 0X8A);
    // 0x080023B0: lui         $a1, 0x42FC
    ctx->r5 = S32(0X42FC << 16);
    // 0x080023B4: lui         $a2, 0xC30C
    ctx->r6 = S32(0XC30C << 16);
    // 0x080023B8: bne         $v0, $at, L_080023F8
    if (ctx->r2 != ctx->r1) {
        // 0x080023BC: lui         $a3, 0x42D2
        ctx->r7 = S32(0X42D2 << 16);
            goto L_080023F8;
    }
    // 0x080023BC: lui         $a3, 0x42D2
    ctx->r7 = S32(0X42D2 << 16);
    // 0x080023C0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080023C4: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x080023C8: jalr        $t9
    // 0x080023CC: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_77;
    // 0x080023CC: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    after_77:
    // 0x080023D0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080023D4: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x080023D8: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x080023DC: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    // 0x080023E0: lui         $a1, 0x434B
    ctx->r5 = S32(0X434B << 16);
    // 0x080023E4: lui         $a2, 0xC2FA
    ctx->r6 = S32(0XC2FA << 16);
    // 0x080023E8: jalr        $t9
    // 0x080023EC: lui         $a3, 0x4313
    ctx->r7 = S32(0X4313 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_78;
    // 0x080023EC: lui         $a3, 0x4313
    ctx->r7 = S32(0X4313 << 16);
    after_78:
    // 0x080023F0: lw          $t6, 0x80($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X80);
    // 0x080023F4: lhu         $v0, 0x8A($t6)
    ctx->r2 = MEM_HU(ctx->r14, 0X8A);
L_080023F8:
    // 0x080023F8: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x080023FC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x08002400: bgez        $v0, L_0800241C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x08002404: cvt.d.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
            goto L_0800241C;
    }
    // 0x08002404: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x08002408: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x0800240C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x08002410: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x08002414: nop

    // 0x08002418: add.d       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = ctx->f6.d + ctx->f8.d;
L_0800241C:
    // 0x0800241C: lui         $at, 0x4032
    ctx->r1 = S32(0X4032 << 16);
    // 0x08002420: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x08002424: lw          $t7, 0x80($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X80);
    // 0x08002428: addiu       $t8, $zero, 0x11
    ctx->r24 = ADD32(0, 0X11);
    // 0x0800242C: c.le.d      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.d <= ctx->f6.d;
    // 0x08002430: nop

    // 0x08002434: bc1f        L_08002B68
    if (!c1cs) {
        // 0x08002438: nop
    
            goto L_08002B68;
    }
    // 0x08002438: nop

    // 0x0800243C: sh          $zero, 0x8A($t7)
    MEM_H(0X8A, ctx->r15) = 0;
    // 0x08002440: b           L_08002B68
    // 0x08002444: sb          $t8, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r24;
        goto L_08002B68;
    // 0x08002444: sb          $t8, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r24;
L_08002448:
    // 0x08002448: lw          $t9, 0x80($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X80);
    // 0x0800244C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08002450: lw          $t3, 0x74($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X74);
    // 0x08002454: lhu         $v0, 0x8A($t9)
    ctx->r2 = MEM_HU(ctx->r25, 0X8A);
    // 0x08002458: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x0800245C: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x08002460: bne         $v0, $at, L_0800274C
    if (ctx->r2 != ctx->r1) {
        // 0x08002464: sw          $a1, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->r5;
            goto L_0800274C;
    }
    // 0x08002464: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x08002468: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(65, 0X3F24) << 16);
    // 0x0800246C: lwc1        $f0, 0x3F24($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(65, 0X3F24));
    // 0x08002470: lui         $at, 0xC30C
    ctx->r1 = S32(0XC30C << 16);
    // 0x08002474: lw          $t4, 0x78($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X78);
    // 0x08002478: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x0800247C: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x08002480: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08002484: lui         $at, 0xC30A
    ctx->r1 = S32(0XC30A << 16);
    // 0x08002488: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x0800248C: addiu       $t6, $zero, 0x200
    ctx->r14 = ADD32(0, 0X200);
    // 0x08002490: lui         $at, 0xC140
    ctx->r1 = S32(0XC140 << 16);
    // 0x08002494: sh          $t6, 0x16($t4)
    MEM_H(0X16, ctx->r12) = ctx->r14;
    // 0x08002498: swc1        $f0, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->f0.u32l;
    // 0x0800249C: swc1        $f18, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->f18.u32l;
    // 0x080024A0: swc1        $f10, 0x10($t4)
    MEM_W(0X10, ctx->r12) = ctx->f10.u32l;
    // 0x080024A4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080024A8: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x080024AC: sh          $t7, 0x16($t3)
    MEM_H(0X16, ctx->r11) = ctx->r15;
    // 0x080024B0: swc1        $f0, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->f0.u32l;
    // 0x080024B4: swc1        $f4, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->f4.u32l;
    // 0x080024B8: swc1        $f8, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->f8.u32l;
    // 0x080024BC: lw          $t2, 0x4($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X4);
    // 0x080024C0: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x080024C4: addiu       $t1, $t1, 0x664C
    ctx->r9 = ADD32(ctx->r9, 0X664C);
    // 0x080024C8: lw          $t8, 0x60($t2)
    ctx->r24 = MEM_W(ctx->r10, 0X60);
    // 0x080024CC: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x080024D0: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x080024D4: ori         $t9, $t8, 0x1
    ctx->r25 = ctx->r24 | 0X1;
    // 0x080024D8: sw          $t9, 0x60($t2)
    MEM_W(0X60, ctx->r10) = ctx->r25;
    // 0x080024DC: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x080024E0: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x080024E4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x080024E8: lw          $t6, 0x60($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X60);
    // 0x080024EC: ori         $t7, $t6, 0x1
    ctx->r15 = ctx->r14 | 0X1;
    // 0x080024F0: sw          $t7, 0x60($v0)
    MEM_W(0X60, ctx->r2) = ctx->r15;
    // 0x080024F4: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x080024F8: sw          $ra, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r31;
    // 0x080024FC: sw          $t5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r13;
    // 0x08002500: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x08002504: sw          $t0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r8;
    // 0x08002508: jalr        $t1
    // 0x0800250C: sw          $v1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
        goto after_79;
    // 0x0800250C: sw          $v1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r3;
    after_79:
    // 0x08002510: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x08002514: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x08002518: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x0800251C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x08002520: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x08002524: jalr        $t1
    // 0x08002528: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
        goto after_80;
    // 0x08002528: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_80:
    // 0x0800252C: lui         $at, 0x4388
    ctx->r1 = S32(0X4388 << 16);
    // 0x08002530: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08002534: lui         $at, 0xC310
    ctx->r1 = S32(0XC310 << 16);
    // 0x08002538: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x0800253C: lw          $v1, 0x70($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X70);
    // 0x08002540: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x08002544: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    // 0x08002548: lw          $t0, 0x6C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X6C);
    // 0x0800254C: lui         $at, 0xC30C
    ctx->r1 = S32(0XC30C << 16);
    // 0x08002550: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x08002554: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x08002558: lw          $ra, 0x50($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X50);
    // 0x0800255C: lui         $at, 0xC324
    ctx->r1 = S32(0XC324 << 16);
    // 0x08002560: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08002564: addiu       $v0, $zero, 0x300
    ctx->r2 = ADD32(0, 0X300);
    // 0x08002568: sh          $v0, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r2;
    // 0x0800256C: swc1        $f0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f0.u32l;
    // 0x08002570: swc1        $f12, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f12.u32l;
    // 0x08002574: swc1        $f6, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f6.u32l;
    // 0x08002578: lui         $at, 0x432A
    ctx->r1 = S32(0X432A << 16);
    // 0x0800257C: sh          $v0, 0x16($t0)
    MEM_H(0X16, ctx->r8) = ctx->r2;
    // 0x08002580: swc1        $f2, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->f2.u32l;
    // 0x08002584: swc1        $f0, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f0.u32l;
    // 0x08002588: swc1        $f12, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->f12.u32l;
    // 0x0800258C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08002590: lui         $at, 0x431B
    ctx->r1 = S32(0X431B << 16);
    // 0x08002594: sh          $v0, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r2;
    // 0x08002598: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    // 0x0800259C: swc1        $f12, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f12.u32l;
    // 0x080025A0: swc1        $f16, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f16.u32l;
    // 0x080025A4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x080025A8: sh          $v0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r2;
    // 0x080025AC: swc1        $f0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f0.u32l;
    // 0x080025B0: swc1        $f12, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f12.u32l;
    // 0x080025B4: swc1        $f18, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f18.u32l;
    // 0x080025B8: lw          $t2, 0x2C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X2C);
    // 0x080025BC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(65, 0X3F28) << 16);
    // 0x080025C0: lui         $a3, 0xC040
    ctx->r7 = S32(0XC040 << 16);
    // 0x080025C4: lw          $t8, 0x60($t2)
    ctx->r24 = MEM_W(ctx->r10, 0X60);
    // 0x080025C8: ori         $t9, $t8, 0x20
    ctx->r25 = ctx->r24 | 0X20;
    // 0x080025CC: sw          $t9, 0x60($t2)
    MEM_W(0X60, ctx->r10) = ctx->r25;
    // 0x080025D0: lw          $t3, 0x30($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X30);
    // 0x080025D4: lw          $t6, 0x60($t3)
    ctx->r14 = MEM_W(ctx->r11, 0X60);
    // 0x080025D8: ori         $t7, $t6, 0x20
    ctx->r15 = ctx->r14 | 0X20;
    // 0x080025DC: sw          $t7, 0x60($t3)
    MEM_W(0X60, ctx->r11) = ctx->r15;
    // 0x080025E0: lw          $v1, 0x34($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X34);
    // 0x080025E4: lwc1        $f0, 0x3F28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(65, 0X3F28));
    // 0x080025E8: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    // 0x080025EC: lw          $t8, 0x60($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X60);
    // 0x080025F0: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x080025F4: lui         $at, 0xC30B
    ctx->r1 = S32(0XC30B << 16);
    // 0x080025F8: ori         $t9, $t8, 0x20
    ctx->r25 = ctx->r24 | 0X20;
    // 0x080025FC: sw          $t9, 0x60($v1)
    MEM_W(0X60, ctx->r3) = ctx->r25;
    // 0x08002600: lw          $a0, 0x38($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X38);
    // 0x08002604: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x08002608: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x0800260C: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x08002610: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08002614: lui         $at, 0x4296
    ctx->r1 = S32(0X4296 << 16);
    // 0x08002618: ori         $t7, $t6, 0x20
    ctx->r15 = ctx->r14 | 0X20;
    // 0x0800261C: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x08002620: sh          $v0, 0x16($t5)
    MEM_H(0X16, ctx->r13) = ctx->r2;
    // 0x08002624: swc1        $f0, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->f0.u32l;
    // 0x08002628: swc1        $f2, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->f2.u32l;
    // 0x0800262C: swc1        $f10, 0x10($t5)
    MEM_W(0X10, ctx->r13) = ctx->f10.u32l;
    // 0x08002630: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08002634: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x08002638: sh          $v0, 0x16($ra)
    MEM_H(0X16, ctx->r31) = ctx->r2;
    // 0x0800263C: swc1        $f0, 0x8($ra)
    MEM_W(0X8, ctx->r31) = ctx->f0.u32l;
    // 0x08002640: swc1        $f2, 0xC($ra)
    MEM_W(0XC, ctx->r31) = ctx->f2.u32l;
    // 0x08002644: swc1        $f4, 0x10($ra)
    MEM_W(0X10, ctx->r31) = ctx->f4.u32l;
    // 0x08002648: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x0800264C: lui         $at, 0xC248
    ctx->r1 = S32(0XC248 << 16);
    // 0x08002650: sh          $v0, 0x16($a2)
    MEM_H(0X16, ctx->r6) = ctx->r2;
    // 0x08002654: swc1        $f0, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f0.u32l;
    // 0x08002658: swc1        $f2, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f2.u32l;
    // 0x0800265C: swc1        $f8, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f8.u32l;
    // 0x08002660: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08002664: sh          $v0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r2;
    // 0x08002668: swc1        $f0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f0.u32l;
    // 0x0800266C: swc1        $f2, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f2.u32l;
    // 0x08002670: swc1        $f6, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f6.u32l;
    // 0x08002674: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x08002678: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x0800267C: lui         $at, 0xC294
    ctx->r1 = S32(0XC294 << 16);
    // 0x08002680: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08002684: lui         $at, 0xC2C4
    ctx->r1 = S32(0XC2C4 << 16);
    // 0x08002688: swc1        $f0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f0.u32l;
    // 0x0800268C: swc1        $f2, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f2.u32l;
    // 0x08002690: sh          $v0, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r2;
    // 0x08002694: swc1        $f16, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f16.u32l;
    // 0x08002698: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x0800269C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080026A0: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x080026A4: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x080026A8: sh          $v0, 0x16($t0)
    MEM_H(0X16, ctx->r8) = ctx->r2;
    // 0x080026AC: swc1        $f2, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->f2.u32l;
    // 0x080026B0: swc1        $f0, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f0.u32l;
    // 0x080026B4: swc1        $f18, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->f18.u32l;
    // 0x080026B8: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    // 0x080026BC: lui         $a1, 0x4377
    ctx->r5 = S32(0X4377 << 16);
    // 0x080026C0: jalr        $t9
    // 0x080026C4: lui         $a2, 0xC2E8
    ctx->r6 = S32(0XC2E8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_81;
    // 0x080026C4: lui         $a2, 0xC2E8
    ctx->r6 = S32(0XC2E8 << 16);
    after_81:
    // 0x080026C8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080026CC: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x080026D0: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x080026D4: lui         $a1, 0x43AC
    ctx->r5 = S32(0X43AC << 16);
    // 0x080026D8: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x080026DC: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    // 0x080026E0: lui         $a2, 0xC2D0
    ctx->r6 = S32(0XC2D0 << 16);
    // 0x080026E4: jalr        $t9
    // 0x080026E8: lui         $a3, 0xC040
    ctx->r7 = S32(0XC040 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_82;
    // 0x080026E8: lui         $a3, 0xC040
    ctx->r7 = S32(0XC040 << 16);
    after_82:
    // 0x080026EC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080026F0: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x080026F4: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x080026F8: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    // 0x080026FC: jalr        $t9
    // 0x08002700: lui         $a1, 0x4210
    ctx->r5 = S32(0X4210 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_83;
    // 0x08002700: lui         $a1, 0x4210
    ctx->r5 = S32(0X4210 << 16);
    after_83:
    // 0x08002704: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002708: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x0800270C: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08002710: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    // 0x08002714: lui         $a1, 0x433B
    ctx->r5 = S32(0X433B << 16);
    // 0x08002718: lui         $a2, 0xC2E2
    ctx->r6 = S32(0XC2E2 << 16);
    // 0x0800271C: jalr        $t9
    // 0x08002720: lui         $a3, 0xC040
    ctx->r7 = S32(0XC040 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_84;
    // 0x08002720: lui         $a3, 0xC040
    ctx->r7 = S32(0XC040 << 16);
    after_84:
    // 0x08002724: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002728: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x0800272C: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08002730: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    // 0x08002734: lui         $a1, 0x438F
    ctx->r5 = S32(0X438F << 16);
    // 0x08002738: lui         $a2, 0xC2E2
    ctx->r6 = S32(0XC2E2 << 16);
    // 0x0800273C: jalr        $t9
    // 0x08002740: lui         $a3, 0xC040
    ctx->r7 = S32(0XC040 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_85;
    // 0x08002740: lui         $a3, 0xC040
    ctx->r7 = S32(0XC040 << 16);
    after_85:
    // 0x08002744: lw          $t8, 0x80($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X80);
    // 0x08002748: lhu         $v0, 0x8A($t8)
    ctx->r2 = MEM_HU(ctx->r24, 0X8A);
L_0800274C:
    // 0x0800274C: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x08002750: lui         $at, 0x4042
    ctx->r1 = S32(0X4042 << 16);
    // 0x08002754: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x08002758: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x0800275C: bgez        $v0, L_08002778
    if (SIGNED(ctx->r2) >= 0) {
        // 0x08002760: cvt.d.w     $f8, $f4
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.d = CVT_D_W(ctx->f4.u32l);
            goto L_08002778;
    }
    // 0x08002760: cvt.d.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.d = CVT_D_W(ctx->f4.u32l);
    // 0x08002764: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x08002768: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x0800276C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x08002770: nop

    // 0x08002774: add.d       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f8.d + ctx->f6.d;
L_08002778:
    // 0x08002778: c.eq.d      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.d == ctx->f8.d;
    // 0x0800277C: lui         $t6, 0x8001
    ctx->r14 = S32(0X8001 << 16);
    // 0x08002780: addiu       $t6, $t6, 0x2628
    ctx->r14 = ADD32(ctx->r14, 0X2628);
    // 0x08002784: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08002788: bc1f        L_0800280C
    if (!c1cs) {
        // 0x0800278C: lui         $a1, 0x4370
        ctx->r5 = S32(0X4370 << 16);
            goto L_0800280C;
    }
    // 0x0800278C: lui         $a1, 0x4370
    ctx->r5 = S32(0X4370 << 16);
    // 0x08002790: lui         $t7, 0x8001
    ctx->r15 = S32(0X8001 << 16);
    // 0x08002794: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002798: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x0800279C: addiu       $t7, $t7, 0x2518
    ctx->r15 = ADD32(ctx->r15, 0X2518);
    // 0x080027A0: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x080027A4: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    // 0x080027A8: jalr        $t9
    // 0x080027AC: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_86;
    // 0x080027AC: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    after_86:
    // 0x080027B0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080027B4: addiu       $t9, $t9, 0x24AC
    ctx->r25 = ADD32(ctx->r25, 0X24AC);
    // 0x080027B8: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x080027BC: lui         $a1, 0x4569
    ctx->r5 = S32(0X4569 << 16);
    // 0x080027C0: ori         $a1, $a1, 0x2000
    ctx->r5 = ctx->r5 | 0X2000;
    // 0x080027C4: jalr        $t9
    // 0x080027C8: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_87;
    // 0x080027C8: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    after_87:
    // 0x080027CC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x080027D0: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x080027D4: lui         $a1, 0xC3BD
    ctx->r5 = S32(0XC3BD << 16);
    // 0x080027D8: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x080027DC: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    // 0x080027E0: lui         $a2, 0xC306
    ctx->r6 = S32(0XC306 << 16);
    // 0x080027E4: jalr        $t9
    // 0x080027E8: lui         $a3, 0xC040
    ctx->r7 = S32(0XC040 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_88;
    // 0x080027E8: lui         $a3, 0xC040
    ctx->r7 = S32(0XC040 << 16);
    after_88:
    // 0x080027EC: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x080027F0: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x080027F4: lui         $a1, 0xC38C
    ctx->r5 = S32(0XC38C << 16);
    // 0x080027F8: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x080027FC: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    // 0x08002800: lui         $a2, 0xC2F0
    ctx->r6 = S32(0XC2F0 << 16);
    // 0x08002804: jalr        $t9
    // 0x08002808: lui         $a3, 0xC040
    ctx->r7 = S32(0XC040 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_89;
    // 0x08002808: lui         $a3, 0xC040
    ctx->r7 = S32(0XC040 << 16);
    after_89:
L_0800280C:
    // 0x0800280C: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x08002810: lui         $at, 0xC30C
    ctx->r1 = S32(0XC30C << 16);
    // 0x08002814: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08002818: lwc1        $f0, 0xC($t8)
    ctx->f0.u32l = MEM_W(ctx->r24, 0XC);
    // 0x0800281C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002820: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(65, 0X3F30) << 16);
    // 0x08002824: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x08002828: addiu       $t9, $t9, 0x2380
    ctx->r25 = ADD32(ctx->r25, 0X2380);
    // 0x0800282C: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08002830: bc1f        L_0800284C
    if (!c1cs) {
        // 0x08002834: nop
    
            goto L_0800284C;
    }
    // 0x08002834: nop

    // 0x08002838: ldc1        $f4, 0x3F30($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(65, 0X3F30));
    // 0x0800283C: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x08002840: sub.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d - ctx->f4.d;
    // 0x08002844: cvt.s.d     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f10.fl = CVT_S_D(ctx->f6.d);
    // 0x08002848: swc1        $f10, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->f10.u32l;
L_0800284C:
    // 0x0800284C: jalr        $t9
    // 0x08002850: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_90;
    // 0x08002850: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    after_90:
    // 0x08002854: bne         $v0, $zero, L_08002B68
    if (ctx->r2 != 0) {
        // 0x08002858: lw          $t6, 0x3C($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X3C);
            goto L_08002B68;
    }
    // 0x08002858: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x0800285C: lui         $at, 0xC30C
    ctx->r1 = S32(0XC30C << 16);
    // 0x08002860: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08002864: lwc1        $f8, 0xC($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0XC);
    // 0x08002868: lw          $t7, 0x80($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X80);
    // 0x0800286C: addiu       $t8, $zero, 0x12
    ctx->r24 = ADD32(0, 0X12);
    // 0x08002870: c.lt.s      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.fl < ctx->f16.fl;
    // 0x08002874: nop

    // 0x08002878: bc1f        L_08002B68
    if (!c1cs) {
        // 0x0800287C: nop
    
            goto L_08002B68;
    }
    // 0x0800287C: nop

    // 0x08002880: sh          $zero, 0x8A($t7)
    MEM_H(0X8A, ctx->r15) = 0;
    // 0x08002884: b           L_08002B68
    // 0x08002888: sb          $t8, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r24;
        goto L_08002B68;
    // 0x08002888: sb          $t8, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r24;
L_0800288C:
    // 0x0800288C: lw          $t9, 0x80($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X80);
    // 0x08002890: lui         $at, 0x402E
    ctx->r1 = S32(0X402E << 16);
    // 0x08002894: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x08002898: lhu         $v0, 0x8A($t9)
    ctx->r2 = MEM_HU(ctx->r25, 0X8A);
    // 0x0800289C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x080028A0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x080028A4: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x080028A8: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080028AC: bgez        $v0, L_080028C4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x080028B0: cvt.d.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
            goto L_080028C4;
    }
    // 0x080028B0: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x080028B4: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x080028B8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x080028BC: nop

    // 0x080028C0: add.d       $f6, $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f6.d = ctx->f6.d + ctx->f10.d;
L_080028C4:
    // 0x080028C4: c.eq.d      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.d == ctx->f6.d;
    // 0x080028C8: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x080028CC: bc1fl       L_080028E8
    if (!c1cs) {
        // 0x080028D0: addiu       $at, $zero, 0x77
        ctx->r1 = ADD32(0, 0X77);
            goto L_080028E8;
    }
    goto skip_14;
    // 0x080028D0: addiu       $at, $zero, 0x77
    ctx->r1 = ADD32(0, 0X77);
    skip_14:
    // 0x080028D4: jalr        $t9
    // 0x080028D8: addiu       $a0, $zero, 0x144
    ctx->r4 = ADD32(0, 0X144);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_91;
    // 0x080028D8: addiu       $a0, $zero, 0x144
    ctx->r4 = ADD32(0, 0X144);
    after_91:
    // 0x080028DC: lw          $t6, 0x80($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X80);
    // 0x080028E0: lhu         $v0, 0x8A($t6)
    ctx->r2 = MEM_HU(ctx->r14, 0X8A);
    // 0x080028E4: addiu       $at, $zero, 0x77
    ctx->r1 = ADD32(0, 0X77);
L_080028E8:
    // 0x080028E8: bne         $v0, $at, L_08002904
    if (ctx->r2 != ctx->r1) {
        // 0x080028EC: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_08002904;
    }
    // 0x080028EC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x080028F0: lw          $t8, 0x80($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X80);
    // 0x080028F4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x080028F8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x080028FC: sh          $t7, 0x7A76($at)
    MEM_H(0X7A76, ctx->r1) = ctx->r15;
    // 0x08002900: lhu         $v1, 0x8A($t8)
    ctx->r3 = MEM_HU(ctx->r24, 0X8A);
L_08002904:
    // 0x08002904: addiu       $at, $zero, 0x78
    ctx->r1 = ADD32(0, 0X78);
    // 0x08002908: bne         $v1, $at, L_08002B68
    if (ctx->r3 != ctx->r1) {
        // 0x0800290C: lui         $v0, 0x8003
        ctx->r2 = S32(0X8003 << 16);
            goto L_08002B68;
    }
    // 0x0800290C: lui         $v0, 0x8003
    ctx->r2 = S32(0X8003 << 16);
    // 0x08002910: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x08002914: addiu       $v0, $v0, 0x4EF8
    ctx->r2 = ADD32(ctx->r2, 0X4EF8);
    // 0x08002918: jalr        $v0
    // 0x0800291C: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_92;
    // 0x0800291C: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    after_92:
    // 0x08002920: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08002924: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x08002928: jalr        $t9
    // 0x0800292C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_93;
    // 0x0800292C: nop

    after_93:
    // 0x08002930: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08002934: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x08002938: jalr        $t9
    // 0x0800293C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_94;
    // 0x0800293C: nop

    after_94:
    // 0x08002940: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08002944: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08002948: jalr        $t9
    // 0x0800294C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_95;
    // 0x0800294C: nop

    after_95:
    // 0x08002950: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08002954: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x08002958: jalr        $t9
    // 0x0800295C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_96;
    // 0x0800295C: nop

    after_96:
    // 0x08002960: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08002964: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x08002968: jalr        $t9
    // 0x0800296C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_97;
    // 0x0800296C: nop

    after_97:
    // 0x08002970: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08002974: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x08002978: jalr        $t9
    // 0x0800297C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_98;
    // 0x0800297C: nop

    after_98:
    // 0x08002980: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08002984: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    // 0x08002988: jalr        $t9
    // 0x0800298C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_99;
    // 0x0800298C: nop

    after_99:
    // 0x08002990: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08002994: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    // 0x08002998: jalr        $t9
    // 0x0800299C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_100;
    // 0x0800299C: nop

    after_100:
    // 0x080029A0: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x080029A4: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    // 0x080029A8: jalr        $t9
    // 0x080029AC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_101;
    // 0x080029AC: nop

    after_101:
    // 0x080029B0: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x080029B4: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    // 0x080029B8: jalr        $t9
    // 0x080029BC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_102;
    // 0x080029BC: nop

    after_102:
    // 0x080029C0: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x080029C4: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    // 0x080029C8: jalr        $t9
    // 0x080029CC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_103;
    // 0x080029CC: nop

    after_103:
    // 0x080029D0: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x080029D4: lw          $a0, 0x34($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X34);
    // 0x080029D8: jalr        $t9
    // 0x080029DC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_104;
    // 0x080029DC: nop

    after_104:
    // 0x080029E0: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x080029E4: lw          $a0, 0x38($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X38);
    // 0x080029E8: jalr        $t9
    // 0x080029EC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_105;
    // 0x080029EC: nop

    after_105:
    // 0x080029F0: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x080029F4: lw          $a0, 0x44($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X44);
    // 0x080029F8: jalr        $t9
    // 0x080029FC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_106;
    // 0x080029FC: nop

    after_106:
    // 0x08002A00: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08002A04: lw          $a0, 0x48($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X48);
    // 0x08002A08: jalr        $t9
    // 0x08002A0C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_107;
    // 0x08002A0C: nop

    after_107:
    // 0x08002A10: lw          $a0, 0x4C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4C);
    // 0x08002A14: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x08002A18: addiu       $v1, $v1, 0xE90
    ctx->r3 = ADD32(ctx->r3, 0XE90);
    // 0x08002A1C: lw          $a1, 0xD8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XD8);
    // 0x08002A20: jalr        $v1
    // 0x08002A24: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_108;
    // 0x08002A24: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    after_108:
    // 0x08002A28: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x08002A2C: lw          $a0, 0x50($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X50);
    // 0x08002A30: jalr        $v1
    // 0x08002A34: lw          $a1, 0xD8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XD8);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_109;
    // 0x08002A34: lw          $a1, 0xD8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XD8);
    after_109:
    // 0x08002A38: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08002A3C: lw          $a0, 0x4C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4C);
    // 0x08002A40: jalr        $t9
    // 0x08002A44: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_110;
    // 0x08002A44: nop

    after_110:
    // 0x08002A48: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08002A4C: lw          $a0, 0x50($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X50);
    // 0x08002A50: jalr        $t9
    // 0x08002A54: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_111;
    // 0x08002A54: nop

    after_111:
    // 0x08002A58: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08002A5C: lw          $a0, 0x54($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X54);
    // 0x08002A60: jalr        $t9
    // 0x08002A64: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_112;
    // 0x08002A64: nop

    after_112:
    // 0x08002A68: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08002A6C: lw          $a0, 0x58($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X58);
    // 0x08002A70: jalr        $t9
    // 0x08002A74: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_113;
    // 0x08002A74: nop

    after_113:
    // 0x08002A78: jal         0x0800396C
    // 0x08002A7C: nop

    func_0800396C_7380FC(rdram, ctx);
        goto after_114;
    // 0x08002A7C: nop

    after_114:
    // 0x08002A80: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08002A84: lw          $a0, 0x5C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X5C);
    // 0x08002A88: jalr        $t9
    // 0x08002A8C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_115;
    // 0x08002A8C: nop

    after_115:
    // 0x08002A90: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x08002A94: addiu       $v0, $v0, 0x2938
    ctx->r2 = ADD32(ctx->r2, 0X2938);
    // 0x08002A98: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08002A9C: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    // 0x08002AA0: jalr        $v0
    // 0x08002AA4: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_116;
    // 0x08002AA4: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    after_116:
    // 0x08002AA8: sh          $zero, 0x48($v0)
    MEM_H(0X48, ctx->r2) = 0;
    // 0x08002AAC: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08002AB0: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08002AB4: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    // 0x08002AB8: jalr        $t9
    // 0x08002ABC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_117;
    // 0x08002ABC: nop

    after_117:
    // 0x08002AC0: sh          $zero, 0x4A($v0)
    MEM_H(0X4A, ctx->r2) = 0;
    // 0x08002AC4: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08002AC8: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08002ACC: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    // 0x08002AD0: jalr        $t9
    // 0x08002AD4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_118;
    // 0x08002AD4: nop

    after_118:
    // 0x08002AD8: addiu       $t6, $zero, 0x140
    ctx->r14 = ADD32(0, 0X140);
    // 0x08002ADC: sh          $t6, 0x4C($v0)
    MEM_H(0X4C, ctx->r2) = ctx->r14;
    // 0x08002AE0: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08002AE4: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08002AE8: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    // 0x08002AEC: jalr        $t9
    // 0x08002AF0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_119;
    // 0x08002AF0: nop

    after_119:
    // 0x08002AF4: addiu       $t7, $zero, 0xF0
    ctx->r15 = ADD32(0, 0XF0);
    // 0x08002AF8: sh          $t7, 0x4E($v0)
    MEM_H(0X4E, ctx->r2) = ctx->r15;
    // 0x08002AFC: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08002B00: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08002B04: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    // 0x08002B08: jalr        $t9
    // 0x08002B0C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_120;
    // 0x08002B0C: nop

    after_120:
    // 0x08002B10: lw          $t8, 0x64($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X64);
    // 0x08002B14: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08002B18: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x08002B1C: sw          $t8, 0x40($v0)
    MEM_W(0X40, ctx->r2) = ctx->r24;
    // 0x08002B20: lw          $t6, 0x80($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X80);
    // 0x08002B24: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x08002B28: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002B2C: addiu       $t9, $t9, 0x4B74
    ctx->r25 = ADD32(ctx->r25, 0X4B74);
    // 0x08002B30: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x08002B34: lw          $a1, 0xD0($t6)
    ctx->r5 = MEM_W(ctx->r14, 0XD0);
    // 0x08002B38: jalr        $t9
    // 0x08002B3C: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_121;
    // 0x08002B3C: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_121:
    // 0x08002B40: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08002B44: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x08002B48: jalr        $t9
    // 0x08002B4C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_122;
    // 0x08002B4C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_122:
    // 0x08002B50: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002B54: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08002B58: jalr        $t9
    // 0x08002B5C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_123;
    // 0x08002B5C: nop

    after_123:
    // 0x08002B60: b           L_08002BAC
    // 0x08002B64: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_08002BAC;
    // 0x08002B64: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08002B68:
    // 0x08002B68: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x08002B6C: lw          $t7, -0x39D8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X39D8);
    // 0x08002B70: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08002B74: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002B78: lbu         $t8, 0x64($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X64);
    // 0x08002B7C: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x08002B80: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08002B84: bnel        $t8, $at, L_08002B9C
    if (ctx->r24 != ctx->r1) {
        // 0x08002B88: lw          $t6, 0x80($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X80);
            goto L_08002B9C;
    }
    goto skip_15;
    // 0x08002B88: lw          $t6, 0x80($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X80);
    skip_15:
    // 0x08002B8C: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    // 0x08002B90: jalr        $t9
    // 0x08002B94: lw          $a1, 0x60($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X60);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_124;
    // 0x08002B94: lw          $a1, 0x60($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X60);
    after_124:
    // 0x08002B98: lw          $t6, 0x80($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X80);
L_08002B9C:
    // 0x08002B9C: lhu         $t7, 0x8A($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X8A);
    // 0x08002BA0: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x08002BA4: sh          $t8, 0x8A($t6)
    MEM_H(0X8A, ctx->r14) = ctx->r24;
    // 0x08002BA8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08002BAC:
    // 0x08002BAC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08002BB0: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    // 0x08002BB4: jr          $ra
    // 0x08002BB8: nop

    TRACE_RETURN()
    return;
    // 0x08002BB8: nop

;}
RECOMP_FUNC void func_080036F8_737E88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080036F8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x080036FC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08003700: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08003704: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x08003708: lui         $t6, 0x280
    ctx->r14 = S32(0X280 << 16);
    // 0x0800370C: ori         $t6, $t6, 0x301
    ctx->r14 = ctx->r14 | 0X301;
    // 0x08003710: addiu       $t7, $zero, 0xFB
    ctx->r15 = ADD32(0, 0XFB);
    // 0x08003714: addiu       $t8, $zero, 0x1F
    ctx->r24 = ADD32(0, 0X1F);
    // 0x08003718: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x0800371C: sh          $t7, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r15;
    // 0x08003720: sh          $t8, 0x96($a0)
    MEM_H(0X96, ctx->r4) = ctx->r24;
    // 0x08003724: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x08003728: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x0800372C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003730: addiu       $t9, $t9, -0x7270
    ctx->r25 = ADD32(ctx->r25, -0X7270);
    // 0x08003734: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08003738: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x0800373C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x08003740: jalr        $t9
    // 0x08003744: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003744: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_0:
    // 0x08003748: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800374C: addiu       $t9, $t9, 0x5214
    ctx->r25 = ADD32(ctx->r25, 0X5214);
    // 0x08003750: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x08003754: addiu       $a1, $a1, -0x6DA4
    ctx->r5 = ADD32(ctx->r5, -0X6DA4);
    // 0x08003758: jalr        $t9
    // 0x0800375C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800375C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x08003760: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003764: addiu       $t9, $t9, 0x5244
    ctx->r25 = ADD32(ctx->r25, 0X5244);
    // 0x08003768: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x0800376C: addiu       $a1, $a1, -0x70D0
    ctx->r5 = ADD32(ctx->r5, -0X70D0);
    // 0x08003770: jalr        $t9
    // 0x08003774: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003774: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x08003778: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x0800377C: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x08003780: lbu         $t0, 0xD8($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0XD8);
    // 0x08003784: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003788: addiu       $t9, $t9, -0x39AC
    ctx->r25 = ADD32(ctx->r25, -0X39AC);
    // 0x0800378C: sb          $t0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r8;
    // 0x08003790: lbu         $t1, 0xD8($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0XD8);
    // 0x08003794: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003798: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x0800379C: jalr        $t9
    // 0x080037A0: sb          $t2, 0xD8($v0)
    MEM_B(0XD8, ctx->r2) = ctx->r10;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080037A0: sb          $t2, 0xD8($v0)
    MEM_B(0XD8, ctx->r2) = ctx->r10;
    after_3:
    // 0x080037A4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080037A8: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080037AC: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x080037B0: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x080037B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080037B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080037BC: jalr        $t9
    // 0x080037C0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080037C0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_4:
    // 0x080037C4: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x080037C8: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x080037CC: addiu       $v0, $v0, -0x589C
    ctx->r2 = ADD32(ctx->r2, -0X589C);
    // 0x080037D0: addiu       $a1, $a1, 0x3B10
    ctx->r5 = ADD32(ctx->r5, 0X3B10);
    // 0x080037D4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x080037D8: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x080037DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080037E0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x080037E4: jalr        $v0
    // 0x080037E8: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x080037E8: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_5:
    // 0x080037EC: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x080037F0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x080037F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080037F8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x080037FC: jalr        $v0
    // 0x08003800: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_6;
    // 0x08003800: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_6:
    // 0x08003804: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003808: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800380C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(65, 0X382C) << 16);
    // 0x08003810: jalr        $t9
    // 0x08003814: addiu       $a0, $a0, 0x382C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(65, 0X382C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08003814: addiu       $a0, $a0, 0x382C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(65, 0X382C));
    after_7:
    // 0x08003818: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0800381C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08003820: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x08003824: jr          $ra
    // 0x08003828: nop

    TRACE_RETURN()
    return;
    // 0x08003828: nop

;}
RECOMP_FUNC void func_080032A4_737A34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080032A4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x080032A8: jr          $ra
    // 0x080032AC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x080032AC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08000000_734790(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x08000028: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    // 0x0800002C: jalr        $t9
    // 0x08000030: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000030: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_0:
    // 0x08000034: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x08000038: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800003C: bne         $v0, $zero, L_08000058
    if (ctx->r2 != 0) {
        // 0x08000040: sw          $v0, 0xD0($v1)
        MEM_W(0XD0, ctx->r3) = ctx->r2;
            goto L_08000058;
    }
    // 0x08000040: sw          $v0, 0xD0($v1)
    MEM_W(0XD0, ctx->r3) = ctx->r2;
    // 0x08000044: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08000048: jalr        $t9
    // 0x0800004C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800004C: nop

    after_1:
    // 0x08000050: b           L_0800009C
    // 0x08000054: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_0800009C;
    // 0x08000054: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000058:
    // 0x08000058: lw          $t6, 0xD0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0XD0);
    // 0x0800005C: jal         0x08003920
    // 0x08000060: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    func_08003920_7380B0(rdram, ctx);
        goto after_2;
    // 0x08000060: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    after_2:
    // 0x08000064: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x08000068: lw          $t7, -0x39D8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X39D8);
    // 0x0800006C: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x08000070: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x08000074: lw          $t8, 0x2C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X2C);
    // 0x08000078: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x0800007C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000080: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000084: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(65, 0XA8) << 16);
    // 0x08000088: and         $t0, $t8, $at
    ctx->r8 = ctx->r24 & ctx->r1;
    // 0x0800008C: addiu       $a0, $a0, 0xA8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(65, 0XA8));
    // 0x08000090: jalr        $t9
    // 0x08000094: sw          $t0, 0x60($t1)
    MEM_W(0X60, ctx->r9) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000094: sw          $t0, 0x60($t1)
    MEM_W(0X60, ctx->r9) = ctx->r8;
    after_3:
    // 0x08000098: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_0800009C:
    // 0x0800009C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080000A0: jr          $ra
    // 0x080000A4: nop

    TRACE_RETURN()
    return;
    // 0x080000A4: nop

;}
RECOMP_FUNC void func_080031C8_737958(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080031C8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x080031CC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080031D0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x080031D4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x080031D8: addiu       $t6, $zero, 0x201
    ctx->r14 = ADD32(0, 0X201);
    // 0x080031DC: addiu       $t7, $zero, 0x36A
    ctx->r15 = ADD32(0, 0X36A);
    // 0x080031E0: addiu       $t8, $zero, 0x1F
    ctx->r24 = ADD32(0, 0X1F);
    // 0x080031E4: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x080031E8: sh          $t7, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r15;
    // 0x080031EC: sh          $t8, 0x96($a0)
    MEM_H(0X96, ctx->r4) = ctx->r24;
    // 0x080031F0: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x080031F4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x080031F8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080031FC: addiu       $t9, $t9, -0x7270
    ctx->r25 = ADD32(ctx->r25, -0X7270);
    // 0x08003200: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08003204: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x08003208: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x0800320C: jalr        $t9
    // 0x08003210: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003210: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_0:
    // 0x08003214: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003218: addiu       $t9, $t9, 0x5214
    ctx->r25 = ADD32(ctx->r25, 0X5214);
    // 0x0800321C: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x08003220: addiu       $a1, $a1, -0x6DA4
    ctx->r5 = ADD32(ctx->r5, -0X6DA4);
    // 0x08003224: jalr        $t9
    // 0x08003228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x0800322C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003230: addiu       $t9, $t9, 0x5244
    ctx->r25 = ADD32(ctx->r25, 0X5244);
    // 0x08003234: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x08003238: addiu       $a1, $a1, -0x70D0
    ctx->r5 = ADD32(ctx->r5, -0X70D0);
    // 0x0800323C: jalr        $t9
    // 0x08003240: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003240: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x08003244: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08003248: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x0800324C: lbu         $t0, 0xD8($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0XD8);
    // 0x08003250: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08003254: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08003258: sb          $t0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r8;
    // 0x0800325C: lbu         $t1, 0xD8($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0XD8);
    // 0x08003260: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003264: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08003268: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x0800326C: sb          $t2, 0xD8($v0)
    MEM_B(0XD8, ctx->r2) = ctx->r10;
    // 0x08003270: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08003274: jalr        $t9
    // 0x08003278: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08003278: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x0800327C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003280: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003284: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(65, 0X32A4) << 16);
    // 0x08003288: jalr        $t9
    // 0x0800328C: addiu       $a0, $a0, 0x32A4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(65, 0X32A4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x0800328C: addiu       $a0, $a0, 0x32A4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(65, 0X32A4));
    after_4:
    // 0x08003290: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08003294: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08003298: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x0800329C: jr          $ra
    // 0x080032A0: nop

    TRACE_RETURN()
    return;
    // 0x080032A0: nop

;}
RECOMP_FUNC void func_08002E04_737594(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002E04: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08002E08: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08002E0C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08002E10: lbu         $v0, 0xD0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD0);
    // 0x08002E14: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x08002E18: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08002E1C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x08002E20: bne         $v0, $zero, L_08002E4C
    if (ctx->r2 != 0) {
        // 0x08002E24: sw          $t6, 0x60($a0)
        MEM_W(0X60, ctx->r4) = ctx->r14;
            goto L_08002E4C;
    }
    // 0x08002E24: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08002E28: addiu       $t7, $zero, 0x35A
    ctx->r15 = ADD32(0, 0X35A);
    // 0x08002E2C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002E30: sh          $t7, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r15;
    // 0x08002E34: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08002E38: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    // 0x08002E3C: jalr        $t9
    // 0x08002E40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002E40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x08002E44: b           L_08002E78
    // 0x08002E48: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
        goto L_08002E78;
    // 0x08002E48: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
L_08002E4C:
    // 0x08002E4C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08002E50: bne         $v0, $at, L_08002E78
    if (ctx->r2 != ctx->r1) {
        // 0x08002E54: addiu       $t8, $zero, 0x35B
        ctx->r24 = ADD32(0, 0X35B);
            goto L_08002E78;
    }
    // 0x08002E54: addiu       $t8, $zero, 0x35B
    ctx->r24 = ADD32(0, 0X35B);
    // 0x08002E58: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002E5C: sh          $t8, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r24;
    // 0x08002E60: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08002E64: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    // 0x08002E68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002E6C: jalr        $t9
    // 0x08002E70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002E70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x08002E74: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
L_08002E78:
    // 0x08002E78: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08002E7C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08002E80: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002E84: addiu       $t9, $t9, 0x9F0
    ctx->r25 = ADD32(ctx->r25, 0X9F0);
    // 0x08002E88: swc1        $f0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f0.u32l;
    // 0x08002E8C: swc1        $f0, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f0.u32l;
    // 0x08002E90: swc1        $f0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f0.u32l;
    // 0x08002E94: jalr        $t9
    // 0x08002E98: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002E98: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    after_2:
    // 0x08002E9C: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x08002EA0: bne         $v0, $zero, L_08002EC0
    if (ctx->r2 != 0) {
        // 0x08002EA4: sw          $v0, 0xD8($s0)
        MEM_W(0XD8, ctx->r16) = ctx->r2;
            goto L_08002EC0;
    }
    // 0x08002EA4: sw          $v0, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = ctx->r2;
    // 0x08002EA8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002EAC: addiu       $t9, $t9, 0x5020
    ctx->r25 = ADD32(ctx->r25, 0X5020);
    // 0x08002EB0: jalr        $t9
    // 0x08002EB4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002EB4: nop

    after_3:
    // 0x08002EB8: b           L_08002EF0
    // 0x08002EBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08002EF0;
    // 0x08002EBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08002EC0:
    // 0x08002EC0: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x08002EC4: sb          $t0, 0x5($a2)
    MEM_B(0X5, ctx->r6) = ctx->r8;
    // 0x08002EC8: lw          $t1, 0xD8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XD8);
    // 0x08002ECC: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08002ED0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002ED4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002ED8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(65, 0X2F00) << 16);
    // 0x08002EDC: or          $t2, $t1, $at
    ctx->r10 = ctx->r9 | ctx->r1;
    // 0x08002EE0: sw          $t2, 0x30($a2)
    MEM_W(0X30, ctx->r6) = ctx->r10;
    // 0x08002EE4: jalr        $t9
    // 0x08002EE8: addiu       $a0, $a0, 0x2F00
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(65, 0X2F00));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08002EE8: addiu       $a0, $a0, 0x2F00
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(65, 0X2F00));
    after_4:
    // 0x08002EEC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08002EF0:
    // 0x08002EF0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08002EF4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08002EF8: jr          $ra
    // 0x08002EFC: nop

    TRACE_RETURN()
    return;
    // 0x08002EFC: nop

;}
RECOMP_FUNC void func_080001BC_73494C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080001BC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x080001C0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080001C4: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x080001C8: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x080001CC: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x080001D0: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(65, 0X3E30) << 16);
    // 0x080001D4: lwc1        $f4, 0x3E30($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(65, 0X3E30));
    // 0x080001D8: lw          $t6, 0x84($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X84);
    // 0x080001DC: lw          $s0, 0xD0($a0)
    ctx->r16 = MEM_W(ctx->r4, 0XD0);
    // 0x080001E0: lui         $at, 0xC320
    ctx->r1 = S32(0XC320 << 16);
    // 0x080001E4: swc1        $f4, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f4.u32l;
    // 0x080001E8: lw          $t7, 0x84($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X84);
    // 0x080001EC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080001F0: lui         $at, 0xC1D8
    ctx->r1 = S32(0XC1D8 << 16);
    // 0x080001F4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080001F8: swc1        $f6, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->f6.u32l;
    // 0x080001FC: lw          $t8, 0x84($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X84);
    // 0x08000200: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x08000204: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08000208: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x0800020C: swc1        $f8, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f8.u32l;
    // 0x08000210: addiu       $v0, $v0, 0x410
    ctx->r2 = ADD32(ctx->r2, 0X410);
    // 0x08000214: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(65, 0X31C8) << 16);
    // 0x08000218: addiu       $t9, $zero, 0x3F0
    ctx->r25 = ADD32(0, 0X3F0);
    // 0x0800021C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x08000220: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x08000224: addiu       $a1, $a1, 0x31C8
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(65, 0X31C8));
    // 0x08000228: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x0800022C: lui         $a2, 0x43F0
    ctx->r6 = S32(0X43F0 << 16);
    // 0x08000230: lui         $a3, 0xC268
    ctx->r7 = S32(0XC268 << 16);
    // 0x08000234: jalr        $v0
    // 0x08000238: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x08000238: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x0800023C: beq         $v0, $zero, L_08000264
    if (ctx->r2 == 0) {
        // 0x08000240: sw          $v0, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r2;
            goto L_08000264;
    }
    // 0x08000240: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x08000244: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000248: addiu       $t0, $zero, 0x4A
    ctx->r8 = ADD32(0, 0X4A);
    // 0x0800024C: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000250: sh          $t0, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r8;
    // 0x08000254: jalr        $t9
    // 0x08000258: addiu       $a0, $zero, 0x4A
    ctx->r4 = ADD32(0, 0X4A);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000258: addiu       $a0, $zero, 0x4A
    ctx->r4 = ADD32(0, 0X4A);
    after_1:
    // 0x0800025C: lw          $t2, 0x4($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X4);
    // 0x08000260: sw          $v0, 0x2C($t2)
    MEM_W(0X2C, ctx->r10) = ctx->r2;
L_08000264:
    // 0x08000264: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08000268: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x0800026C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08000270: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(65, 0X32B0) << 16);
    // 0x08000274: addiu       $t3, $zero, 0x58
    ctx->r11 = ADD32(0, 0X58);
    // 0x08000278: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x0800027C: addiu       $a1, $a1, 0x32B0
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(65, 0X32B0));
    // 0x08000280: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000284: lui         $a2, 0x43EC
    ctx->r6 = S32(0X43EC << 16);
    // 0x08000288: lui         $a3, 0xC268
    ctx->r7 = S32(0XC268 << 16);
    // 0x0800028C: jalr        $t9
    // 0x08000290: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000290: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x08000294: beq         $v0, $zero, L_080002BC
    if (ctx->r2 == 0) {
        // 0x08000298: sw          $v0, 0x8($s0)
        MEM_W(0X8, ctx->r16) = ctx->r2;
            goto L_080002BC;
    }
    // 0x08000298: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x0800029C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080002A0: addiu       $t4, $zero, 0x4A
    ctx->r12 = ADD32(0, 0X4A);
    // 0x080002A4: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080002A8: sh          $t4, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r12;
    // 0x080002AC: jalr        $t9
    // 0x080002B0: addiu       $a0, $zero, 0x4A
    ctx->r4 = ADD32(0, 0X4A);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080002B0: addiu       $a0, $zero, 0x4A
    ctx->r4 = ADD32(0, 0X4A);
    after_3:
    // 0x080002B4: lw          $t6, 0x8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X8);
    // 0x080002B8: sw          $v0, 0x2C($t6)
    MEM_W(0X2C, ctx->r14) = ctx->r2;
L_080002BC:
    // 0x080002BC: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x080002C0: lui         $at, 0xC31A
    ctx->r1 = S32(0XC31A << 16);
    // 0x080002C4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x080002C8: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(65, 0X3398) << 16);
    // 0x080002CC: addiu       $t7, $zero, 0x3B0
    ctx->r15 = ADD32(0, 0X3B0);
    // 0x080002D0: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x080002D4: addiu       $a1, $a1, 0x3398
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(65, 0X3398));
    // 0x080002D8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080002DC: lui         $a2, 0x4333
    ctx->r6 = S32(0X4333 << 16);
    // 0x080002E0: lui         $a3, 0xC30C
    ctx->r7 = S32(0XC30C << 16);
    // 0x080002E4: jalr        $t9
    // 0x080002E8: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080002E8: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_4:
    // 0x080002EC: beq         $v0, $zero, L_08000314
    if (ctx->r2 == 0) {
        // 0x080002F0: sw          $v0, 0xC($s0)
        MEM_W(0XC, ctx->r16) = ctx->r2;
            goto L_08000314;
    }
    // 0x080002F0: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x080002F4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080002F8: addiu       $t8, $zero, 0x4A
    ctx->r24 = ADD32(0, 0X4A);
    // 0x080002FC: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000300: sh          $t8, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r24;
    // 0x08000304: jalr        $t9
    // 0x08000308: addiu       $a0, $zero, 0x4A
    ctx->r4 = ADD32(0, 0X4A);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000308: addiu       $a0, $zero, 0x4A
    ctx->r4 = ADD32(0, 0X4A);
    after_5:
    // 0x0800030C: lw          $t1, 0xC($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC);
    // 0x08000310: sw          $v0, 0x2C($t1)
    MEM_W(0X2C, ctx->r9) = ctx->r2;
L_08000314:
    // 0x08000314: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08000318: lui         $at, 0xC30D
    ctx->r1 = S32(0XC30D << 16);
    // 0x0800031C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000320: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(65, 0X3470) << 16);
    // 0x08000324: addiu       $t2, $zero, 0x3B0
    ctx->r10 = ADD32(0, 0X3B0);
    // 0x08000328: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x0800032C: addiu       $a1, $a1, 0x3470
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(65, 0X3470));
    // 0x08000330: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000334: lui         $a2, 0x4341
    ctx->r6 = S32(0X4341 << 16);
    // 0x08000338: lui         $a3, 0xC30C
    ctx->r7 = S32(0XC30C << 16);
    // 0x0800033C: jalr        $t9
    // 0x08000340: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000340: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_6:
    // 0x08000344: beq         $v0, $zero, L_0800036C
    if (ctx->r2 == 0) {
        // 0x08000348: sw          $v0, 0x10($s0)
        MEM_W(0X10, ctx->r16) = ctx->r2;
            goto L_0800036C;
    }
    // 0x08000348: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x0800034C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000350: addiu       $t3, $zero, 0x4A
    ctx->r11 = ADD32(0, 0X4A);
    // 0x08000354: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000358: sh          $t3, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r11;
    // 0x0800035C: jalr        $t9
    // 0x08000360: addiu       $a0, $zero, 0x4A
    ctx->r4 = ADD32(0, 0X4A);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08000360: addiu       $a0, $zero, 0x4A
    ctx->r4 = ADD32(0, 0X4A);
    after_7:
    // 0x08000364: lw          $t5, 0x10($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X10);
    // 0x08000368: sw          $v0, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->r2;
L_0800036C:
    // 0x0800036C: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08000370: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x08000374: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000378: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(65, 0X3620) << 16);
    // 0x0800037C: addiu       $t6, $zero, 0x258
    ctx->r14 = ADD32(0, 0X258);
    // 0x08000380: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x08000384: addiu       $a1, $a1, 0x3620
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(65, 0X3620));
    // 0x08000388: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x0800038C: lui         $a2, 0x433E
    ctx->r6 = S32(0X433E << 16);
    // 0x08000390: lui         $a3, 0xC30C
    ctx->r7 = S32(0XC30C << 16);
    // 0x08000394: jalr        $t9
    // 0x08000398: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08000398: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_8:
    // 0x0800039C: beq         $v0, $zero, L_080003C4
    if (ctx->r2 == 0) {
        // 0x080003A0: sw          $v0, 0x18($s0)
        MEM_W(0X18, ctx->r16) = ctx->r2;
            goto L_080003C4;
    }
    // 0x080003A0: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x080003A4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080003A8: addiu       $t7, $zero, 0x4A
    ctx->r15 = ADD32(0, 0X4A);
    // 0x080003AC: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080003B0: sh          $t7, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r15;
    // 0x080003B4: jalr        $t9
    // 0x080003B8: addiu       $a0, $zero, 0x4A
    ctx->r4 = ADD32(0, 0X4A);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x080003B8: addiu       $a0, $zero, 0x4A
    ctx->r4 = ADD32(0, 0X4A);
    after_9:
    // 0x080003BC: lw          $t0, 0x18($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X18);
    // 0x080003C0: sw          $v0, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->r2;
L_080003C4:
    // 0x080003C4: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x080003C8: lui         $at, 0x430A
    ctx->r1 = S32(0X430A << 16);
    // 0x080003CC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080003D0: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(65, 0X3548) << 16);
    // 0x080003D4: addiu       $t1, $zero, 0x258
    ctx->r9 = ADD32(0, 0X258);
    // 0x080003D8: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x080003DC: addiu       $a1, $a1, 0x3548
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(65, 0X3548));
    // 0x080003E0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080003E4: lui         $a2, 0x4353
    ctx->r6 = S32(0X4353 << 16);
    // 0x080003E8: lui         $a3, 0xC30C
    ctx->r7 = S32(0XC30C << 16);
    // 0x080003EC: jalr        $t9
    // 0x080003F0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x080003F0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_10:
    // 0x080003F4: beq         $v0, $zero, L_0800041C
    if (ctx->r2 == 0) {
        // 0x080003F8: sw          $v0, 0x14($s0)
        MEM_W(0X14, ctx->r16) = ctx->r2;
            goto L_0800041C;
    }
    // 0x080003F8: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x080003FC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000400: addiu       $t2, $zero, 0x4A
    ctx->r10 = ADD32(0, 0X4A);
    // 0x08000404: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000408: sh          $t2, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r10;
    // 0x0800040C: jalr        $t9
    // 0x08000410: addiu       $a0, $zero, 0x4A
    ctx->r4 = ADD32(0, 0X4A);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08000410: addiu       $a0, $zero, 0x4A
    ctx->r4 = ADD32(0, 0X4A);
    after_11:
    // 0x08000414: lw          $t4, 0x14($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X14);
    // 0x08000418: sw          $v0, 0x2C($t4)
    MEM_W(0X2C, ctx->r12) = ctx->r2;
L_0800041C:
    // 0x0800041C: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08000420: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    // 0x08000424: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08000428: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(65, 0X36F8) << 16);
    // 0x0800042C: addiu       $a1, $a1, 0x36F8
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(65, 0X36F8));
    // 0x08000430: lui         $a2, 0x43EC
    ctx->r6 = S32(0X43EC << 16);
    // 0x08000434: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x08000438: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x0800043C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000440: lui         $a3, 0xC1A0
    ctx->r7 = S32(0XC1A0 << 16);
    // 0x08000444: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x08000448: jalr        $t9
    // 0x0800044C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x0800044C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_12:
    // 0x08000450: beq         $v0, $zero, L_08000478
    if (ctx->r2 == 0) {
        // 0x08000454: sw          $v0, 0x1C($s0)
        MEM_W(0X1C, ctx->r16) = ctx->r2;
            goto L_08000478;
    }
    // 0x08000454: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x08000458: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800045C: addiu       $t5, $zero, 0x4A
    ctx->r13 = ADD32(0, 0X4A);
    // 0x08000460: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000464: sh          $t5, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r13;
    // 0x08000468: jalr        $t9
    // 0x0800046C: addiu       $a0, $zero, 0x4A
    ctx->r4 = ADD32(0, 0X4A);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x0800046C: addiu       $a0, $zero, 0x4A
    ctx->r4 = ADD32(0, 0X4A);
    after_13:
    // 0x08000470: lw          $t7, 0x1C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X1C);
    // 0x08000474: sw          $v0, 0x2C($t7)
    MEM_W(0X2C, ctx->r15) = ctx->r2;
L_08000478:
    // 0x08000478: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x0800047C: lui         $at, 0xC2F0
    ctx->r1 = S32(0XC2F0 << 16);
    // 0x08000480: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08000484: lui         $a2, 0x43EC
    ctx->r6 = S32(0X43EC << 16);
    // 0x08000488: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x0800048C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000490: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x08000494: lui         $a3, 0xC1A0
    ctx->r7 = S32(0XC1A0 << 16);
    // 0x08000498: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0800049C: jalr        $t9
    // 0x080004A0: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x080004A0: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_14:
    // 0x080004A4: beq         $v0, $zero, L_080004CC
    if (ctx->r2 == 0) {
        // 0x080004A8: sw          $v0, 0x20($s0)
        MEM_W(0X20, ctx->r16) = ctx->r2;
            goto L_080004CC;
    }
    // 0x080004A8: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x080004AC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080004B0: addiu       $t8, $zero, 0x4A
    ctx->r24 = ADD32(0, 0X4A);
    // 0x080004B4: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080004B8: sh          $t8, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r24;
    // 0x080004BC: jalr        $t9
    // 0x080004C0: addiu       $a0, $zero, 0x4A
    ctx->r4 = ADD32(0, 0X4A);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x080004C0: addiu       $a0, $zero, 0x4A
    ctx->r4 = ADD32(0, 0X4A);
    after_15:
    // 0x080004C4: lw          $t1, 0x20($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X20);
    // 0x080004C8: sw          $v0, 0x2C($t1)
    MEM_W(0X2C, ctx->r9) = ctx->r2;
L_080004CC:
    // 0x080004CC: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x080004D0: lui         $at, 0xC30C
    ctx->r1 = S32(0XC30C << 16);
    // 0x080004D4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x080004D8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080004DC: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x080004E0: lui         $a2, 0x43EC
    ctx->r6 = S32(0X43EC << 16);
    // 0x080004E4: lui         $a3, 0xC1A0
    ctx->r7 = S32(0XC1A0 << 16);
    // 0x080004E8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x080004EC: jalr        $t9
    // 0x080004F0: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x080004F0: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_16:
    // 0x080004F4: beq         $v0, $zero, L_0800051C
    if (ctx->r2 == 0) {
        // 0x080004F8: sw          $v0, 0x24($s0)
        MEM_W(0X24, ctx->r16) = ctx->r2;
            goto L_0800051C;
    }
    // 0x080004F8: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x080004FC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000500: addiu       $t2, $zero, 0x4A
    ctx->r10 = ADD32(0, 0X4A);
    // 0x08000504: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000508: sh          $t2, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r10;
    // 0x0800050C: jalr        $t9
    // 0x08000510: addiu       $a0, $zero, 0x4A
    ctx->r4 = ADD32(0, 0X4A);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x08000510: addiu       $a0, $zero, 0x4A
    ctx->r4 = ADD32(0, 0X4A);
    after_17:
    // 0x08000514: lw          $t4, 0x24($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X24);
    // 0x08000518: sw          $v0, 0x2C($t4)
    MEM_W(0X2C, ctx->r12) = ctx->r2;
L_0800051C:
    // 0x0800051C: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08000520: lui         $at, 0x42D0
    ctx->r1 = S32(0X42D0 << 16);
    // 0x08000524: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000528: lui         $a2, 0x43F0
    ctx->r6 = S32(0X43F0 << 16);
    // 0x0800052C: addiu       $t5, $zero, 0x200
    ctx->r13 = ADD32(0, 0X200);
    // 0x08000530: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x08000534: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x08000538: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x0800053C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x08000540: lui         $a3, 0xC1A0
    ctx->r7 = S32(0XC1A0 << 16);
    // 0x08000544: jalr        $t9
    // 0x08000548: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x08000548: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_18:
    // 0x0800054C: beq         $v0, $zero, L_08000574
    if (ctx->r2 == 0) {
        // 0x08000550: sw          $v0, 0x28($s0)
        MEM_W(0X28, ctx->r16) = ctx->r2;
            goto L_08000574;
    }
    // 0x08000550: sw          $v0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r2;
    // 0x08000554: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000558: addiu       $t6, $zero, 0x4A
    ctx->r14 = ADD32(0, 0X4A);
    // 0x0800055C: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000560: sh          $t6, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r14;
    // 0x08000564: jalr        $t9
    // 0x08000568: addiu       $a0, $zero, 0x4A
    ctx->r4 = ADD32(0, 0X4A);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_19;
    // 0x08000568: addiu       $a0, $zero, 0x4A
    ctx->r4 = ADD32(0, 0X4A);
    after_19:
    // 0x0800056C: lw          $t8, 0x28($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X28);
    // 0x08000570: sw          $v0, 0x2C($t8)
    MEM_W(0X2C, ctx->r24) = ctx->r2;
L_08000574:
    // 0x08000574: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08000578: lui         $at, 0x42FC
    ctx->r1 = S32(0X42FC << 16);
    // 0x0800057C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000580: addiu       $t0, $zero, 0x200
    ctx->r8 = ADD32(0, 0X200);
    // 0x08000584: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x08000588: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x0800058C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x08000590: lui         $a2, 0x43F1
    ctx->r6 = S32(0X43F1 << 16);
    // 0x08000594: lui         $a3, 0xC1A0
    ctx->r7 = S32(0XC1A0 << 16);
    // 0x08000598: jalr        $t9
    // 0x0800059C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_20;
    // 0x0800059C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_20:
    // 0x080005A0: beq         $v0, $zero, L_080005C8
    if (ctx->r2 == 0) {
        // 0x080005A4: sw          $v0, 0x2C($s0)
        MEM_W(0X2C, ctx->r16) = ctx->r2;
            goto L_080005C8;
    }
    // 0x080005A4: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x080005A8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080005AC: addiu       $t1, $zero, 0x4A
    ctx->r9 = ADD32(0, 0X4A);
    // 0x080005B0: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080005B4: sh          $t1, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r9;
    // 0x080005B8: jalr        $t9
    // 0x080005BC: addiu       $a0, $zero, 0x4A
    ctx->r4 = ADD32(0, 0X4A);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_21;
    // 0x080005BC: addiu       $a0, $zero, 0x4A
    ctx->r4 = ADD32(0, 0X4A);
    after_21:
    // 0x080005C0: lw          $t3, 0x2C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X2C);
    // 0x080005C4: sw          $v0, 0x2C($t3)
    MEM_W(0X2C, ctx->r11) = ctx->r2;
L_080005C8:
    // 0x080005C8: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x080005CC: lui         $at, 0x4315
    ctx->r1 = S32(0X4315 << 16);
    // 0x080005D0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080005D4: addiu       $t4, $zero, 0x200
    ctx->r12 = ADD32(0, 0X200);
    // 0x080005D8: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x080005DC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080005E0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x080005E4: lui         $a2, 0x43F1
    ctx->r6 = S32(0X43F1 << 16);
    // 0x080005E8: lui         $a3, 0xC1A0
    ctx->r7 = S32(0XC1A0 << 16);
    // 0x080005EC: jalr        $t9
    // 0x080005F0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_22;
    // 0x080005F0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_22:
    // 0x080005F4: beq         $v0, $zero, L_0800061C
    if (ctx->r2 == 0) {
        // 0x080005F8: sw          $v0, 0x30($s0)
        MEM_W(0X30, ctx->r16) = ctx->r2;
            goto L_0800061C;
    }
    // 0x080005F8: sw          $v0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r2;
    // 0x080005FC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000600: addiu       $t5, $zero, 0x4A
    ctx->r13 = ADD32(0, 0X4A);
    // 0x08000604: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000608: sh          $t5, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r13;
    // 0x0800060C: jalr        $t9
    // 0x08000610: addiu       $a0, $zero, 0x4A
    ctx->r4 = ADD32(0, 0X4A);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_23;
    // 0x08000610: addiu       $a0, $zero, 0x4A
    ctx->r4 = ADD32(0, 0X4A);
    after_23:
    // 0x08000614: lw          $t7, 0x30($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X30);
    // 0x08000618: sw          $v0, 0x2C($t7)
    MEM_W(0X2C, ctx->r15) = ctx->r2;
L_0800061C:
    // 0x0800061C: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08000620: lui         $at, 0xC2F6
    ctx->r1 = S32(0XC2F6 << 16);
    // 0x08000624: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08000628: lui         $a2, 0x4387
    ctx->r6 = S32(0X4387 << 16);
    // 0x0800062C: addiu       $t8, $zero, 0x300
    ctx->r24 = ADD32(0, 0X300);
    // 0x08000630: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x08000634: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x08000638: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x0800063C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x08000640: lui         $a3, 0xC30B
    ctx->r7 = S32(0XC30B << 16);
    // 0x08000644: jalr        $t9
    // 0x08000648: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_24;
    // 0x08000648: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_24:
    // 0x0800064C: beq         $v0, $zero, L_08000674
    if (ctx->r2 == 0) {
        // 0x08000650: sw          $v0, 0x34($s0)
        MEM_W(0X34, ctx->r16) = ctx->r2;
            goto L_08000674;
    }
    // 0x08000650: sw          $v0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r2;
    // 0x08000654: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000658: addiu       $t0, $zero, 0x4A
    ctx->r8 = ADD32(0, 0X4A);
    // 0x0800065C: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000660: sh          $t0, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r8;
    // 0x08000664: jalr        $t9
    // 0x08000668: addiu       $a0, $zero, 0x4A
    ctx->r4 = ADD32(0, 0X4A);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_25;
    // 0x08000668: addiu       $a0, $zero, 0x4A
    ctx->r4 = ADD32(0, 0X4A);
    after_25:
    // 0x0800066C: lw          $t2, 0x34($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X34);
    // 0x08000670: sw          $v0, 0x2C($t2)
    MEM_W(0X2C, ctx->r10) = ctx->r2;
L_08000674:
    // 0x08000674: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08000678: lui         $at, 0x4302
    ctx->r1 = S32(0X4302 << 16);
    // 0x0800067C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08000680: lui         $a2, 0x4387
    ctx->r6 = S32(0X4387 << 16);
    // 0x08000684: addiu       $t3, $zero, 0x300
    ctx->r11 = ADD32(0, 0X300);
    // 0x08000688: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x0800068C: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x08000690: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000694: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x08000698: lui         $a3, 0xC30B
    ctx->r7 = S32(0XC30B << 16);
    // 0x0800069C: jalr        $t9
    // 0x080006A0: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_26;
    // 0x080006A0: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_26:
    // 0x080006A4: beq         $v0, $zero, L_080006D0
    if (ctx->r2 == 0) {
        // 0x080006A8: sw          $v0, 0x38($s0)
        MEM_W(0X38, ctx->r16) = ctx->r2;
            goto L_080006D0;
    }
    // 0x080006A8: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
    // 0x080006AC: lw          $t5, 0x30($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X30);
    // 0x080006B0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080006B4: addiu       $t4, $zero, 0x4A
    ctx->r12 = ADD32(0, 0X4A);
    // 0x080006B8: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080006BC: addiu       $a0, $zero, 0x4A
    ctx->r4 = ADD32(0, 0X4A);
    // 0x080006C0: jalr        $t9
    // 0x080006C4: sh          $t4, 0x28($t5)
    MEM_H(0X28, ctx->r13) = ctx->r12;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_27;
    // 0x080006C4: sh          $t4, 0x28($t5)
    MEM_H(0X28, ctx->r13) = ctx->r12;
    after_27:
    // 0x080006C8: lw          $t6, 0x30($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X30);
    // 0x080006CC: sw          $v0, 0x2C($t6)
    MEM_W(0X2C, ctx->r14) = ctx->r2;
L_080006D0:
    // 0x080006D0: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x080006D4: lui         $at, 0xC218
    ctx->r1 = S32(0XC218 << 16);
    // 0x080006D8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x080006DC: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(65, 0X2CDC) << 16);
    // 0x080006E0: addiu       $a1, $a1, 0x2CDC
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(65, 0X2CDC));
    // 0x080006E4: lui         $a2, 0x43F1
    ctx->r6 = S32(0X43F1 << 16);
    // 0x080006E8: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x080006EC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x080006F0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080006F4: lui         $a3, 0x4240
    ctx->r7 = S32(0X4240 << 16);
    // 0x080006F8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x080006FC: jalr        $t9
    // 0x08000700: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_28;
    // 0x08000700: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_28:
    // 0x08000704: beq         $v0, $zero, L_08000734
    if (ctx->r2 == 0) {
        // 0x08000708: sw          $v0, 0x3C($s0)
        MEM_W(0X3C, ctx->r16) = ctx->r2;
            goto L_08000734;
    }
    // 0x08000708: sw          $v0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r2;
    // 0x0800070C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000710: addiu       $t7, $zero, 0x4A
    ctx->r15 = ADD32(0, 0X4A);
    // 0x08000714: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000718: sh          $t7, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r15;
    // 0x0800071C: jalr        $t9
    // 0x08000720: addiu       $a0, $zero, 0x4A
    ctx->r4 = ADD32(0, 0X4A);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_29;
    // 0x08000720: addiu       $a0, $zero, 0x4A
    ctx->r4 = ADD32(0, 0X4A);
    after_29:
    // 0x08000724: lw          $t0, 0x3C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X3C);
    // 0x08000728: sw          $v0, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->r2;
    // 0x0800072C: lw          $t1, 0x3C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X3C);
    // 0x08000730: sb          $zero, 0xD8($t1)
    MEM_B(0XD8, ctx->r9) = 0;
L_08000734:
    // 0x08000734: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08000738: lui         $at, 0x41B0
    ctx->r1 = S32(0X41B0 << 16);
    // 0x0800073C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000740: lui         $a2, 0x43F1
    ctx->r6 = S32(0X43F1 << 16);
    // 0x08000744: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x08000748: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x0800074C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x08000750: lui         $a3, 0x4218
    ctx->r7 = S32(0X4218 << 16);
    // 0x08000754: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x08000758: jalr        $t9
    // 0x0800075C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_30;
    // 0x0800075C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_30:
    // 0x08000760: beq         $v0, $zero, L_08000794
    if (ctx->r2 == 0) {
        // 0x08000764: sw          $v0, 0x40($s0)
        MEM_W(0X40, ctx->r16) = ctx->r2;
            goto L_08000794;
    }
    // 0x08000764: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    // 0x08000768: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800076C: addiu       $t2, $zero, 0x4A
    ctx->r10 = ADD32(0, 0X4A);
    // 0x08000770: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000774: sh          $t2, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r10;
    // 0x08000778: jalr        $t9
    // 0x0800077C: addiu       $a0, $zero, 0x4A
    ctx->r4 = ADD32(0, 0X4A);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_31;
    // 0x0800077C: addiu       $a0, $zero, 0x4A
    ctx->r4 = ADD32(0, 0X4A);
    after_31:
    // 0x08000780: lw          $t4, 0x40($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X40);
    // 0x08000784: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x08000788: sw          $v0, 0x2C($t4)
    MEM_W(0X2C, ctx->r12) = ctx->r2;
    // 0x0800078C: lw          $t6, 0x40($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X40);
    // 0x08000790: sb          $t5, 0xD8($t6)
    MEM_B(0XD8, ctx->r14) = ctx->r13;
L_08000794:
    // 0x08000794: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08000798: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x0800079C: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(65, 0X2F2C) << 16);
    // 0x080007A0: lui         $a2, 0x43F0
    ctx->r6 = S32(0X43F0 << 16);
    // 0x080007A4: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x080007A8: addiu       $a1, $a1, 0x2F2C
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(65, 0X2F2C));
    // 0x080007AC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080007B0: lui         $a3, 0xC200
    ctx->r7 = S32(0XC200 << 16);
    // 0x080007B4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x080007B8: jalr        $t9
    // 0x080007BC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_32;
    // 0x080007BC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_32:
    // 0x080007C0: beq         $v0, $zero, L_080007E8
    if (ctx->r2 == 0) {
        // 0x080007C4: sw          $v0, 0x44($s0)
        MEM_W(0X44, ctx->r16) = ctx->r2;
            goto L_080007E8;
    }
    // 0x080007C4: sw          $v0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r2;
    // 0x080007C8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080007CC: addiu       $t7, $zero, 0x4A
    ctx->r15 = ADD32(0, 0X4A);
    // 0x080007D0: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080007D4: sh          $t7, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r15;
    // 0x080007D8: jalr        $t9
    // 0x080007DC: addiu       $a0, $zero, 0x4A
    ctx->r4 = ADD32(0, 0X4A);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_33;
    // 0x080007DC: addiu       $a0, $zero, 0x4A
    ctx->r4 = ADD32(0, 0X4A);
    after_33:
    // 0x080007E0: lw          $t0, 0x44($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X44);
    // 0x080007E4: sw          $v0, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->r2;
L_080007E8:
    // 0x080007E8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x080007EC: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x080007F0: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(65, 0X2E04) << 16);
    // 0x080007F4: addiu       $a1, $a1, 0x2E04
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(65, 0X2E04));
    // 0x080007F8: lui         $a2, 0x43CF
    ctx->r6 = S32(0X43CF << 16);
    // 0x080007FC: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x08000800: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x08000804: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08000808: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x0800080C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x08000810: jalr        $t9
    // 0x08000814: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_34;
    // 0x08000814: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_34:
    // 0x08000818: beq         $v0, $zero, L_08000848
    if (ctx->r2 == 0) {
        // 0x0800081C: sw          $v0, 0x4C($s0)
        MEM_W(0X4C, ctx->r16) = ctx->r2;
            goto L_08000848;
    }
    // 0x0800081C: sw          $v0, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r2;
    // 0x08000820: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000824: addiu       $t1, $zero, 0x4A
    ctx->r9 = ADD32(0, 0X4A);
    // 0x08000828: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x0800082C: sh          $t1, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r9;
    // 0x08000830: jalr        $t9
    // 0x08000834: addiu       $a0, $zero, 0x4A
    ctx->r4 = ADD32(0, 0X4A);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_35;
    // 0x08000834: addiu       $a0, $zero, 0x4A
    ctx->r4 = ADD32(0, 0X4A);
    after_35:
    // 0x08000838: lw          $t3, 0x4C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X4C);
    // 0x0800083C: sw          $v0, 0x2C($t3)
    MEM_W(0X2C, ctx->r11) = ctx->r2;
    // 0x08000840: lw          $t4, 0x4C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X4C);
    // 0x08000844: sb          $zero, 0xD0($t4)
    MEM_B(0XD0, ctx->r12) = 0;
L_08000848:
    // 0x08000848: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0800084C: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08000850: lui         $a2, 0x43CF
    ctx->r6 = S32(0X43CF << 16);
    // 0x08000854: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x08000858: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x0800085C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000860: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x08000864: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x08000868: jalr        $t9
    // 0x0800086C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_36;
    // 0x0800086C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_36:
    // 0x08000870: beq         $v0, $zero, L_080008A4
    if (ctx->r2 == 0) {
        // 0x08000874: sw          $v0, 0x50($s0)
        MEM_W(0X50, ctx->r16) = ctx->r2;
            goto L_080008A4;
    }
    // 0x08000874: sw          $v0, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->r2;
    // 0x08000878: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800087C: addiu       $t5, $zero, 0x4A
    ctx->r13 = ADD32(0, 0X4A);
    // 0x08000880: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000884: sh          $t5, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r13;
    // 0x08000888: jalr        $t9
    // 0x0800088C: addiu       $a0, $zero, 0x4A
    ctx->r4 = ADD32(0, 0X4A);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_37;
    // 0x0800088C: addiu       $a0, $zero, 0x4A
    ctx->r4 = ADD32(0, 0X4A);
    after_37:
    // 0x08000890: lw          $t7, 0x50($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X50);
    // 0x08000894: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x08000898: sw          $v0, 0x2C($t7)
    MEM_W(0X2C, ctx->r15) = ctx->r2;
    // 0x0800089C: lw          $t0, 0x50($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X50);
    // 0x080008A0: sb          $t8, 0xD0($t0)
    MEM_B(0XD0, ctx->r8) = ctx->r24;
L_080008A4:
    // 0x080008A4: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x080008A8: lui         $at, 0xC0A0
    ctx->r1 = S32(0XC0A0 << 16);
    // 0x080008AC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080008B0: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(65, 0X3028) << 16);
    // 0x080008B4: addiu       $t1, $zero, 0x300
    ctx->r9 = ADD32(0, 0X300);
    // 0x080008B8: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x080008BC: addiu       $a1, $a1, 0x3028
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(65, 0X3028));
    // 0x080008C0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080008C4: lui         $a2, 0x4369
    ctx->r6 = S32(0X4369 << 16);
    // 0x080008C8: lui         $a3, 0x42DC
    ctx->r7 = S32(0X42DC << 16);
    // 0x080008CC: jalr        $t9
    // 0x080008D0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_38;
    // 0x080008D0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_38:
    // 0x080008D4: beq         $v0, $zero, L_080008FC
    if (ctx->r2 == 0) {
        // 0x080008D8: sw          $v0, 0x54($s0)
        MEM_W(0X54, ctx->r16) = ctx->r2;
            goto L_080008FC;
    }
    // 0x080008D8: sw          $v0, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r2;
    // 0x080008DC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080008E0: addiu       $t2, $zero, 0x4A
    ctx->r10 = ADD32(0, 0X4A);
    // 0x080008E4: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080008E8: sh          $t2, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r10;
    // 0x080008EC: jalr        $t9
    // 0x080008F0: addiu       $a0, $zero, 0x4A
    ctx->r4 = ADD32(0, 0X4A);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_39;
    // 0x080008F0: addiu       $a0, $zero, 0x4A
    ctx->r4 = ADD32(0, 0X4A);
    after_39:
    // 0x080008F4: lw          $t4, 0x54($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X54);
    // 0x080008F8: sw          $v0, 0x2C($t4)
    MEM_W(0X2C, ctx->r12) = ctx->r2;
L_080008FC:
    // 0x080008FC: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08000900: lui         $at, 0xC130
    ctx->r1 = S32(0XC130 << 16);
    // 0x08000904: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08000908: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(65, 0X30F8) << 16);
    // 0x0800090C: addiu       $a1, $a1, 0x30F8
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(65, 0X30F8));
    // 0x08000910: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000914: lui         $a2, 0x43FD
    ctx->r6 = S32(0X43FD << 16);
    // 0x08000918: lui         $a3, 0x4304
    ctx->r7 = S32(0X4304 << 16);
    // 0x0800091C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x08000920: jalr        $t9
    // 0x08000924: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_40;
    // 0x08000924: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_40:
    // 0x08000928: beq         $v0, $zero, L_08000950
    if (ctx->r2 == 0) {
        // 0x0800092C: sw          $v0, 0x58($s0)
        MEM_W(0X58, ctx->r16) = ctx->r2;
            goto L_08000950;
    }
    // 0x0800092C: sw          $v0, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->r2;
    // 0x08000930: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000934: addiu       $t5, $zero, 0x4A
    ctx->r13 = ADD32(0, 0X4A);
    // 0x08000938: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x0800093C: sh          $t5, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r13;
    // 0x08000940: jalr        $t9
    // 0x08000944: addiu       $a0, $zero, 0x4A
    ctx->r4 = ADD32(0, 0X4A);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_41;
    // 0x08000944: addiu       $a0, $zero, 0x4A
    ctx->r4 = ADD32(0, 0X4A);
    after_41:
    // 0x08000948: lw          $t7, 0x58($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X58);
    // 0x0800094C: sw          $v0, 0x2C($t7)
    MEM_W(0X2C, ctx->r15) = ctx->r2;
L_08000950:
    // 0x08000950: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000954: addiu       $t9, $t9, 0x381C
    ctx->r25 = ADD32(ctx->r25, 0X381C);
    // 0x08000958: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x0800095C: jalr        $t9
    // 0x08000960: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_42;
    // 0x08000960: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_42:
    // 0x08000964: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000968: sw          $v0, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->r2;
    // 0x0800096C: addiu       $t9, $t9, 0x2500
    ctx->r25 = ADD32(ctx->r25, 0X2500);
    // 0x08000970: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08000974: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    // 0x08000978: jalr        $t9
    // 0x0800097C: addiu       $a1, $zero, 0xA00
    ctx->r5 = ADD32(0, 0XA00);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_43;
    // 0x0800097C: addiu       $a1, $zero, 0xA00
    ctx->r5 = ADD32(0, 0XA00);
    after_43:
    // 0x08000980: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000984: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x08000988: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x0800098C: lui         $a1, 0xC3BF
    ctx->r5 = S32(0XC3BF << 16);
    // 0x08000990: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x08000994: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    // 0x08000998: lui         $a2, 0xC2FC
    ctx->r6 = S32(0XC2FC << 16);
    // 0x0800099C: jalr        $t9
    // 0x080009A0: lui         $a3, 0xC338
    ctx->r7 = S32(0XC338 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_44;
    // 0x080009A0: lui         $a3, 0xC338
    ctx->r7 = S32(0XC338 << 16);
    after_44:
    // 0x080009A4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080009A8: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x080009AC: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x080009B0: lui         $a1, 0x43EB
    ctx->r5 = S32(0X43EB << 16);
    // 0x080009B4: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x080009B8: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    // 0x080009BC: lui         $a2, 0xC210
    ctx->r6 = S32(0XC210 << 16);
    // 0x080009C0: jalr        $t9
    // 0x080009C4: lui         $a3, 0x4180
    ctx->r7 = S32(0X4180 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_45;
    // 0x080009C4: lui         $a3, 0x4180
    ctx->r7 = S32(0X4180 << 16);
    after_45:
    // 0x080009C8: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    // 0x080009CC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x080009D0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080009D4: addiu       $t9, $t9, 0x33E0
    ctx->r25 = ADD32(ctx->r25, 0X33E0);
    // 0x080009D8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x080009DC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x080009E0: lw          $a0, 0x5C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X5C);
    // 0x080009E4: jalr        $t9
    // 0x080009E8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_46;
    // 0x080009E8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_46:
    // 0x080009EC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080009F0: addiu       $t9, $t9, 0x3400
    ctx->r25 = ADD32(ctx->r25, 0X3400);
    // 0x080009F4: lw          $a0, 0x5C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X5C);
    // 0x080009F8: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x080009FC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08000A00: jalr        $t9
    // 0x08000A04: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_47;
    // 0x08000A04: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_47:
    // 0x08000A08: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000A0C: addiu       $t9, $t9, 0x3484
    ctx->r25 = ADD32(ctx->r25, 0X3484);
    // 0x08000A10: lw          $a0, 0x5C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X5C);
    // 0x08000A14: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    // 0x08000A18: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    // 0x08000A1C: jalr        $t9
    // 0x08000A20: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_48;
    // 0x08000A20: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    after_48:
    // 0x08000A24: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000A28: addiu       $t9, $t9, 0x2938
    ctx->r25 = ADD32(ctx->r25, 0X2938);
    // 0x08000A2C: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08000A30: jalr        $t9
    // 0x08000A34: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_49;
    // 0x08000A34: lw          $a0, -0x3248($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3248);
    after_49:
    // 0x08000A38: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x08000A3C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08000A40: lw          $t2, 0x40($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X40);
    // 0x08000A44: addiu       $t8, $zero, 0x26
    ctx->r24 = ADD32(0, 0X26);
    // 0x08000A48: addiu       $t0, $zero, 0x140
    ctx->r8 = ADD32(0, 0X140);
    // 0x08000A4C: addiu       $t1, $zero, 0xBE
    ctx->r9 = ADD32(0, 0XBE);
    // 0x08000A50: sh          $zero, 0x48($v0)
    MEM_H(0X48, ctx->r2) = 0;
    // 0x08000A54: sh          $t8, 0x4A($v0)
    MEM_H(0X4A, ctx->r2) = ctx->r24;
    // 0x08000A58: sh          $t0, 0x4C($v0)
    MEM_H(0X4C, ctx->r2) = ctx->r8;
    // 0x08000A5C: sh          $t1, 0x4E($v0)
    MEM_H(0X4E, ctx->r2) = ctx->r9;
    // 0x08000A60: lui         $t3, 0x8007
    ctx->r11 = S32(0X8007 << 16);
    // 0x08000A64: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08000A68: swc1        $f16, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f16.u32l;
    // 0x08000A6C: addiu       $t3, $t3, -0x49D0
    ctx->r11 = ADD32(ctx->r11, -0X49D0);
    // 0x08000A70: addiu       $t9, $t9, -0x3A40
    ctx->r25 = ADD32(ctx->r25, -0X3A40);
    // 0x08000A74: sw          $t2, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r10;
    // 0x08000A78: jalr        $t9
    // 0x08000A7C: sw          $t3, 0x40($v0)
    MEM_W(0X40, ctx->r2) = ctx->r11;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_50;
    // 0x08000A7C: sw          $t3, 0x40($v0)
    MEM_W(0X40, ctx->r2) = ctx->r11;
    after_50:
    // 0x08000A80: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000A84: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000A88: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(65, 0XAAC) << 16);
    // 0x08000A8C: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08000A90: jalr        $t9
    // 0x08000A94: addiu       $a0, $a0, 0xAAC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(65, 0XAAC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_51;
    // 0x08000A94: addiu       $a0, $a0, 0xAAC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(65, 0XAAC));
    after_51:
    // 0x08000A98: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08000A9C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x08000AA0: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x08000AA4: jr          $ra
    // 0x08000AA8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x08000AA8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_080036EC_737E7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080036EC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x080036F0: jr          $ra
    // 0x080036F4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x080036F4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_0800396C_7380FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800396C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003970: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08003974: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003978: addiu       $t9, $t9, 0x3A24
    ctx->r25 = ADD32(ctx->r25, 0X3A24);
    // 0x0800397C: jalr        $t9
    // 0x08003980: addiu       $a0, $zero, 0x23D
    ctx->r4 = ADD32(0, 0X23D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003980: addiu       $a0, $zero, 0x23D
    ctx->r4 = ADD32(0, 0X23D);
    after_0:
    // 0x08003984: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08003988: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800398C: jr          $ra
    // 0x08003990: nop

    TRACE_RETURN()
    return;
    // 0x08003990: nop

;}
RECOMP_FUNC void func_08002C98_737428(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002C98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002C9C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08002CA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002CA4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08002CA8: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x08002CAC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002CB0: jalr        $t9
    // 0x08002CB4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002CB4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x08002CB8: beq         $v0, $zero, L_08002CCC
    if (ctx->r2 == 0) {
        // 0x08002CBC: lw          $v1, 0x18($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X18);
            goto L_08002CCC;
    }
    // 0x08002CBC: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x08002CC0: lw          $t6, 0x60($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X60);
    // 0x08002CC4: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x08002CC8: sw          $t7, 0x60($v1)
    MEM_W(0X60, ctx->r3) = ctx->r15;
L_08002CCC:
    // 0x08002CCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002CD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002CD4: jr          $ra
    // 0x08002CD8: nop

    TRACE_RETURN()
    return;
    // 0x08002CD8: nop

;}
RECOMP_FUNC void func_08002CDC_73746C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002CDC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08002CE0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08002CE4: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x08002CE8: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x08002CEC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002CF0: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x08002CF4: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x08002CF8: addiu       $t7, $zero, 0x367
    ctx->r15 = ADD32(0, 0X367);
    // 0x08002CFC: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08002D00: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08002D04: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08002D08: sh          $t7, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r15;
    // 0x08002D0C: jalr        $t9
    // 0x08002D10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002D10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x08002D14: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x08002D18: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002D1C: sb          $t8, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r24;
    // 0x08002D20: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08002D24: addiu       $t0, $zero, 0x20
    ctx->r8 = ADD32(0, 0X20);
    // 0x08002D28: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x08002D2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002D30: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    // 0x08002D34: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08002D38: jalr        $t9
    // 0x08002D3C: addiu       $a3, $zero, 0xA0
    ctx->r7 = ADD32(0, 0XA0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002D3C: addiu       $a3, $zero, 0xA0
    ctx->r7 = ADD32(0, 0XA0);
    after_1:
    // 0x08002D40: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08002D44: or          $t1, $v0, $at
    ctx->r9 = ctx->r2 | ctx->r1;
    // 0x08002D48: sw          $t1, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r9;
    // 0x08002D4C: lbu         $t2, 0xD8($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0XD8);
    // 0x08002D50: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(65, 0X3F38) << 16);
    // 0x08002D54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002D58: bne         $t2, $zero, L_08002D6C
    if (ctx->r10 != 0) {
        // 0x08002D5C: lui         $a1, 0x8022
        ctx->r5 = S32(0X8022 << 16);
            goto L_08002D6C;
    }
    // 0x08002D5C: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x08002D60: addiu       $t3, $zero, 0x3CE
    ctx->r11 = ADD32(0, 0X3CE);
    // 0x08002D64: b           L_08002D74
    // 0x08002D68: sh          $t3, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r11;
        goto L_08002D74;
    // 0x08002D68: sh          $t3, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r11;
L_08002D6C:
    // 0x08002D6C: addiu       $t4, $zero, 0x37
    ctx->r12 = ADD32(0, 0X37);
    // 0x08002D70: sh          $t4, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r12;
L_08002D74:
    // 0x08002D74: lwc1        $f0, 0x3F38($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(65, 0X3F38));
    // 0x08002D78: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08002D7C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08002D80: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002D84: addiu       $t9, $t9, 0x5214
    ctx->r25 = ADD32(ctx->r25, 0X5214);
    // 0x08002D88: addiu       $a1, $a1, -0x6DA4
    ctx->r5 = ADD32(ctx->r5, -0X6DA4);
    // 0x08002D8C: swc1        $f0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f0.u32l;
    // 0x08002D90: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
    // 0x08002D94: jalr        $t9
    // 0x08002D98: swc1        $f4, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002D98: swc1        $f4, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f4.u32l;
    after_2:
    // 0x08002D9C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002DA0: addiu       $t9, $t9, 0x5244
    ctx->r25 = ADD32(ctx->r25, 0X5244);
    // 0x08002DA4: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x08002DA8: addiu       $a1, $a1, -0x70D0
    ctx->r5 = ADD32(ctx->r5, -0X70D0);
    // 0x08002DAC: jalr        $t9
    // 0x08002DB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002DB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x08002DB4: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08002DB8: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x08002DBC: lbu         $t5, 0xD8($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0XD8);
    // 0x08002DC0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002DC4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002DC8: sb          $t5, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r13;
    // 0x08002DCC: lbu         $t6, 0xD8($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0XD8);
    // 0x08002DD0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(65, 0X2DF8) << 16);
    // 0x08002DD4: addiu       $a0, $a0, 0x2DF8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(65, 0X2DF8));
    // 0x08002DD8: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x08002DDC: jalr        $t9
    // 0x08002DE0: sb          $t7, 0xD8($v0)
    MEM_B(0XD8, ctx->r2) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08002DE0: sb          $t7, 0xD8($v0)
    MEM_B(0XD8, ctx->r2) = ctx->r15;
    after_4:
    // 0x08002DE4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08002DE8: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x08002DEC: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x08002DF0: jr          $ra
    // 0x08002DF4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x08002DF4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_08003920_7380B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003920: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003924: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08003928: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800392C: addiu       $t9, $t9, -0xB0
    ctx->r25 = ADD32(ctx->r25, -0XB0);
    // 0x08003930: jalr        $t9
    // 0x08003934: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003934: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    after_0:
    // 0x08003938: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800393C: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x08003940: jalr        $t9
    // 0x08003944: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003944: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x08003948: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800394C: addiu       $t9, $t9, 0x3AC4
    ctx->r25 = ADD32(ctx->r25, 0X3AC4);
    // 0x08003950: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(65, 0X39D0) << 16);
    // 0x08003954: jalr        $t9
    // 0x08003958: addiu       $a0, $a0, 0x39D0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(65, 0X39D0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003958: addiu       $a0, $a0, 0x39D0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(65, 0X39D0));
    after_2:
    // 0x0800395C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08003960: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08003964: jr          $ra
    // 0x08003968: nop

    TRACE_RETURN()
    return;
    // 0x08003968: nop

;}
RECOMP_FUNC void func_08002DF8_737588(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002DF8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08002DFC: jr          $ra
    // 0x08002E00: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08002E00: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_080030EC_73787C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080030EC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x080030F0: jr          $ra
    // 0x080030F4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x080030F4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08003470_737C00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003470: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08003474: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08003478: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0800347C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08003480: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003484: addiu       $t6, $zero, 0x201
    ctx->r14 = ADD32(0, 0X201);
    // 0x08003488: addiu       $t7, $zero, 0x318
    ctx->r15 = ADD32(0, 0X318);
    // 0x0800348C: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x08003490: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08003494: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08003498: sh          $t7, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r15;
    // 0x0800349C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x080034A0: jalr        $t9
    // 0x080034A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080034A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x080034A8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080034AC: addiu       $t9, $t9, 0x5214
    ctx->r25 = ADD32(ctx->r25, 0X5214);
    // 0x080034B0: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x080034B4: addiu       $a1, $a1, -0x6DA4
    ctx->r5 = ADD32(ctx->r5, -0X6DA4);
    // 0x080034B8: jalr        $t9
    // 0x080034BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080034BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x080034C0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080034C4: addiu       $t9, $t9, 0x5244
    ctx->r25 = ADD32(ctx->r25, 0X5244);
    // 0x080034C8: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x080034CC: addiu       $a1, $a1, -0x70D0
    ctx->r5 = ADD32(ctx->r5, -0X70D0);
    // 0x080034D0: jalr        $t9
    // 0x080034D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080034D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x080034D8: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x080034DC: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x080034E0: lbu         $t8, 0xD8($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0XD8);
    // 0x080034E4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080034E8: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080034EC: sb          $t8, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r24;
    // 0x080034F0: lbu         $t0, 0xD8($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0XD8);
    // 0x080034F4: lui         $a2, 0x3ECC
    ctx->r6 = S32(0X3ECC << 16);
    // 0x080034F8: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x080034FC: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x08003500: sb          $t1, 0xD8($v0)
    MEM_B(0XD8, ctx->r2) = ctx->r9;
    // 0x08003504: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003508: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x0800350C: jalr        $t9
    // 0x08003510: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08003510: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x08003514: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003518: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800351C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(65, 0X353C) << 16);
    // 0x08003520: jalr        $t9
    // 0x08003524: addiu       $a0, $a0, 0x353C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(65, 0X353C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08003524: addiu       $a0, $a0, 0x353C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(65, 0X353C));
    after_4:
    // 0x08003528: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0800352C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08003530: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08003534: jr          $ra
    // 0x08003538: nop

    TRACE_RETURN()
    return;
    // 0x08003538: nop

;}
RECOMP_FUNC void func_08000138_7348C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000138: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800013C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000140: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000144: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000148: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x0800014C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000150: jalr        $t9
    // 0x08000154: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000154: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x08000158: beq         $v0, $zero, L_080001AC
    if (ctx->r2 == 0) {
        // 0x0800015C: lui         $t6, 0x8020
        ctx->r14 = S32(0X8020 << 16);
            goto L_080001AC;
    }
    // 0x0800015C: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x08000160: lw          $t6, -0x39DC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39DC);
    // 0x08000164: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000168: addiu       $t9, $t9, 0x1F70
    ctx->r25 = ADD32(ctx->r25, 0X1F70);
    // 0x0800016C: lbu         $t7, 0x61($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X61);
    // 0x08000170: beq         $t7, $zero, L_08000190
    if (ctx->r15 == 0) {
        // 0x08000174: nop
    
            goto L_08000190;
    }
    // 0x08000174: nop

    // 0x08000178: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800017C: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08000180: jalr        $t9
    // 0x08000184: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000184: nop

    after_1:
    // 0x08000188: b           L_080001B0
    // 0x0800018C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_080001B0;
    // 0x0800018C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000190:
    // 0x08000190: jalr        $t9
    // 0x08000194: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000194: nop

    after_2:
    // 0x08000198: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800019C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080001A0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(65, 0X1BC) << 16);
    // 0x080001A4: jalr        $t9
    // 0x080001A8: addiu       $a0, $a0, 0x1BC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(65, 0X1BC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080001A8: addiu       $a0, $a0, 0x1BC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(65, 0X1BC));
    after_3:
L_080001AC:
    // 0x080001AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080001B0:
    // 0x080001B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080001B4: jr          $ra
    // 0x080001B8: nop

    TRACE_RETURN()
    return;
    // 0x080001B8: nop

;}
RECOMP_FUNC void func_08003398_737B28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003398: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0800339C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080033A0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080033A4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x080033A8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080033AC: addiu       $t6, $zero, 0x201
    ctx->r14 = ADD32(0, 0X201);
    // 0x080033B0: addiu       $t7, $zero, 0x351
    ctx->r15 = ADD32(0, 0X351);
    // 0x080033B4: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x080033B8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080033BC: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x080033C0: sh          $t7, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r15;
    // 0x080033C4: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x080033C8: jalr        $t9
    // 0x080033CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080033CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x080033D0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080033D4: addiu       $t9, $t9, 0x5214
    ctx->r25 = ADD32(ctx->r25, 0X5214);
    // 0x080033D8: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x080033DC: addiu       $a1, $a1, -0x6DA4
    ctx->r5 = ADD32(ctx->r5, -0X6DA4);
    // 0x080033E0: jalr        $t9
    // 0x080033E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080033E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x080033E8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080033EC: addiu       $t9, $t9, 0x5244
    ctx->r25 = ADD32(ctx->r25, 0X5244);
    // 0x080033F0: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x080033F4: addiu       $a1, $a1, -0x70D0
    ctx->r5 = ADD32(ctx->r5, -0X70D0);
    // 0x080033F8: jalr        $t9
    // 0x080033FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080033FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x08003400: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08003404: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x08003408: lbu         $t8, 0xD8($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0XD8);
    // 0x0800340C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08003410: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08003414: sb          $t8, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r24;
    // 0x08003418: lbu         $t0, 0xD8($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0XD8);
    // 0x0800341C: lui         $a2, 0x3ECC
    ctx->r6 = S32(0X3ECC << 16);
    // 0x08003420: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x08003424: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x08003428: sb          $t1, 0xD8($v0)
    MEM_B(0XD8, ctx->r2) = ctx->r9;
    // 0x0800342C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003430: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x08003434: jalr        $t9
    // 0x08003438: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08003438: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x0800343C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003440: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003444: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(65, 0X3464) << 16);
    // 0x08003448: jalr        $t9
    // 0x0800344C: addiu       $a0, $a0, 0x3464
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(65, 0X3464));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x0800344C: addiu       $a0, $a0, 0x3464
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(65, 0X3464));
    after_4:
    // 0x08003450: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08003454: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08003458: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x0800345C: jr          $ra
    // 0x08003460: nop

    TRACE_RETURN()
    return;
    // 0x08003460: nop

;}
RECOMP_FUNC void func_08003838_737FC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003838: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x0800383C: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x08003840: sw          $s0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r16;
    // 0x08003844: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x08003848: lbu         $t6, 0xDD($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XDD);
    // 0x0800384C: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x08003850: lui         $t1, 0x8024
    ctx->r9 = S32(0X8024 << 16);
    // 0x08003854: addu        $t9, $t6, $a1
    ctx->r25 = ADD32(ctx->r14, ctx->r5);
    // 0x08003858: sb          $t9, 0xDD($a0)
    MEM_B(0XDD, ctx->r4) = ctx->r25;
    // 0x0800385C: addiu       $t1, $t1, -0x7798
    ctx->r9 = ADD32(ctx->r9, -0X7798);
    // 0x08003860: addiu       $t0, $zero, 0x60
    ctx->r8 = ADD32(0, 0X60);
    // 0x08003864: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08003868: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x0800386C: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x08003870: lw          $t2, 0xD8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XD8);
    // 0x08003874: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x08003878: lui         $at, 0xF700
    ctx->r1 = S32(0XF700 << 16);
    // 0x0800387C: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x08003880: lw          $t3, 0x40($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X40);
    // 0x08003884: lui         $t5, 0x900
    ctx->r13 = S32(0X900 << 16);
    // 0x08003888: addiu       $t5, $t5, 0x0
    ctx->r13 = ADD32(ctx->r13, 0X0);
    // 0x0800388C: addu        $t4, $t3, $at
    ctx->r12 = ADD32(ctx->r11, ctx->r1);
    // 0x08003890: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x08003894: addiu       $t9, $zero, 0x40
    ctx->r25 = ADD32(0, 0X40);
    // 0x08003898: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x0800389C: addiu       $t8, $zero, 0x20
    ctx->r24 = ADD32(0, 0X20);
    // 0x080038A0: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x080038A4: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x080038A8: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x080038AC: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x080038B0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x080038B4: lbu         $t0, 0xDC($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XDC);
    // 0x080038B8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080038BC: addiu       $t9, $t9, 0xA60
    ctx->r25 = ADD32(ctx->r25, 0XA60);
    // 0x080038C0: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x080038C4: lbu         $t1, 0xDD($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XDD);
    // 0x080038C8: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x080038CC: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x080038D0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x080038D4: sw          $t2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r10;
    // 0x080038D8: sw          $t3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r11;
    // 0x080038DC: sw          $t4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r12;
    // 0x080038E0: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x080038E4: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x080038E8: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    // 0x080038EC: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x080038F0: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x080038F4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x080038F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080038FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08003900: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08003904: jalr        $t9
    // 0x08003908: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003908: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    after_0:
    // 0x0800390C: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x08003910: lw          $s0, 0x68($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X68);
    // 0x08003914: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x08003918: jr          $ra
    // 0x0800391C: nop

    TRACE_RETURN()
    return;
    // 0x0800391C: nop

;}
RECOMP_FUNC void func_08002F2C_7376BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002F2C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08002F30: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08002F34: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x08002F38: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x08002F3C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002F40: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x08002F44: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x08002F48: addiu       $t7, $zero, 0x367
    ctx->r15 = ADD32(0, 0X367);
    // 0x08002F4C: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08002F50: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08002F54: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08002F58: sh          $t7, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r15;
    // 0x08002F5C: jalr        $t9
    // 0x08002F60: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002F60: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x08002F64: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x08002F68: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002F6C: sb          $t8, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r24;
    // 0x08002F70: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08002F74: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08002F78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002F7C: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    // 0x08002F80: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08002F84: jalr        $t9
    // 0x08002F88: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002F88: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_1:
    // 0x08002F8C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08002F90: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08002F94: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08002F98: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002F9C: or          $t0, $v0, $at
    ctx->r8 = ctx->r2 | ctx->r1;
    // 0x08002FA0: addiu       $t9, $t9, 0x5214
    ctx->r25 = ADD32(ctx->r25, 0X5214);
    // 0x08002FA4: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x08002FA8: sw          $t0, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r8;
    // 0x08002FAC: addiu       $a1, $a1, -0x6DA4
    ctx->r5 = ADD32(ctx->r5, -0X6DA4);
    // 0x08002FB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002FB4: swc1        $f0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f0.u32l;
    // 0x08002FB8: swc1        $f0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f0.u32l;
    // 0x08002FBC: jalr        $t9
    // 0x08002FC0: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002FC0: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
    after_2:
    // 0x08002FC4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002FC8: addiu       $t9, $t9, 0x5244
    ctx->r25 = ADD32(ctx->r25, 0X5244);
    // 0x08002FCC: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x08002FD0: addiu       $a1, $a1, -0x70D0
    ctx->r5 = ADD32(ctx->r5, -0X70D0);
    // 0x08002FD4: jalr        $t9
    // 0x08002FD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002FD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x08002FDC: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08002FE0: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x08002FE4: lbu         $t1, 0xD8($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0XD8);
    // 0x08002FE8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002FEC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002FF0: sb          $t1, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r9;
    // 0x08002FF4: lbu         $t2, 0xD8($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0XD8);
    // 0x08002FF8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(65, 0X2C98) << 16);
    // 0x08002FFC: addiu       $a0, $a0, 0x2C98
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(65, 0X2C98));
    // 0x08003000: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x08003004: jalr        $t9
    // 0x08003008: sb          $t3, 0xD8($v0)
    MEM_B(0XD8, ctx->r2) = ctx->r11;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08003008: sb          $t3, 0xD8($v0)
    MEM_B(0XD8, ctx->r2) = ctx->r11;
    after_4:
    // 0x0800300C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08003010: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x08003014: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x08003018: jr          $ra
    // 0x0800301C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x0800301C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_08001168_739838(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001168: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x0800116C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x08001170: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x08001174: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x08001178: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
    // 0x0800117C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08001180: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001184: beq         $v0, $zero, L_080011AC
    if (ctx->r2 == 0) {
        // 0x08001188: addiu       $a1, $zero, 0xFF
        ctx->r5 = ADD32(0, 0XFF);
            goto L_080011AC;
    }
    // 0x08001188: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x0800118C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08001190: beq         $v0, $at, L_080011F0
    if (ctx->r2 == ctx->r1) {
        // 0x08001194: addiu       $v1, $s0, 0x5C
        ctx->r3 = ADD32(ctx->r16, 0X5C);
            goto L_080011F0;
    }
    // 0x08001194: addiu       $v1, $s0, 0x5C
    ctx->r3 = ADD32(ctx->r16, 0X5C);
    // 0x08001198: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x0800119C: beq         $v0, $at, L_0800121C
    if (ctx->r2 == ctx->r1) {
        // 0x080011A0: addiu       $v1, $s0, 0x5C
        ctx->r3 = ADD32(ctx->r16, 0X5C);
            goto L_0800121C;
    }
    // 0x080011A0: addiu       $v1, $s0, 0x5C
    ctx->r3 = ADD32(ctx->r16, 0X5C);
    // 0x080011A4: b           L_0800123C
    // 0x080011A8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_0800123C;
    // 0x080011A8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_080011AC:
    // 0x080011AC: addiu       $t6, $zero, 0x96
    ctx->r14 = ADD32(0, 0X96);
    // 0x080011B0: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x080011B4: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x080011B8: addiu       $t9, $zero, 0xF
    ctx->r25 = ADD32(0, 0XF);
    // 0x080011BC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x080011C0: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x080011C4: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x080011C8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x080011CC: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    // 0x080011D0: jal         0x08001490
    // 0x080011D4: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    func_08001490_739B60(rdram, ctx);
        goto after_0;
    // 0x080011D4: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    after_0:
    // 0x080011D8: addiu       $v1, $s0, 0x5C
    ctx->r3 = ADD32(ctx->r16, 0X5C);
    // 0x080011DC: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x080011E0: sw          $v0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r2;
    // 0x080011E4: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x080011E8: b           L_08001238
    // 0x080011EC: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
        goto L_08001238;
    // 0x080011EC: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
L_080011F0:
    // 0x080011F0: lw          $a0, 0x8($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X8);
    // 0x080011F4: jal         0x080015B0
    // 0x080011F8: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    func_080015B0_739C80(rdram, ctx);
        goto after_1;
    // 0x080011F8: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    after_1:
    // 0x080011FC: bne         $v0, $zero, L_08001238
    if (ctx->r2 != 0) {
        // 0x08001200: lw          $v1, 0x34($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X34);
            goto L_08001238;
    }
    // 0x08001200: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x08001204: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x08001208: addiu       $t2, $zero, 0x14
    ctx->r10 = ADD32(0, 0X14);
    // 0x0800120C: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x08001210: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x08001214: b           L_08001238
    // 0x08001218: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
        goto L_08001238;
    // 0x08001218: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
L_0800121C:
    // 0x0800121C: lw          $a0, 0x4($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X4);
    // 0x08001220: addiu       $t5, $a0, -0x1
    ctx->r13 = ADD32(ctx->r4, -0X1);
    // 0x08001224: bne         $a0, $zero, L_08001238
    if (ctx->r4 != 0) {
        // 0x08001228: sw          $t5, 0x4($v1)
        MEM_W(0X4, ctx->r3) = ctx->r13;
            goto L_08001238;
    }
    // 0x08001228: sw          $t5, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r13;
    // 0x0800122C: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x08001230: jal         0x080015B8
    // 0x08001234: lw          $a0, 0x8($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X8);
    func_080015B8_739C88(rdram, ctx);
        goto after_2;
    // 0x08001234: lw          $a0, 0x8($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X8);
    after_2:
L_08001238:
    // 0x08001238: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_0800123C:
    // 0x0800123C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x08001240: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x08001244: jr          $ra
    // 0x08001248: nop

    TRACE_RETURN()
    return;
    // 0x08001248: nop

;}
RECOMP_FUNC void func_0800129C_73996C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800129C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x080012A0: lw          $v1, 0x5C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X5C);
    // 0x080012A4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x080012A8: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x080012AC: beql        $v1, $zero, L_080012D8
    if (ctx->r3 == 0) {
        // 0x080012B0: lw          $t6, 0x18($v0)
        ctx->r14 = MEM_W(ctx->r2, 0X18);
            goto L_080012D8;
    }
    goto skip_0;
    // 0x080012B0: lw          $t6, 0x18($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X18);
    skip_0:
    // 0x080012B4: beq         $v1, $at, L_0800131C
    if (ctx->r3 == ctx->r1) {
        // 0x080012B8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_0800131C;
    }
    // 0x080012B8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x080012BC: beq         $v1, $at, L_080013AC
    if (ctx->r3 == ctx->r1) {
        // 0x080012C0: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_080013AC;
    }
    // 0x080012C0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x080012C4: beql        $v1, $at, L_080013EC
    if (ctx->r3 == ctx->r1) {
        // 0x080012C8: addiu       $v0, $a0, 0x5C
        ctx->r2 = ADD32(ctx->r4, 0X5C);
            goto L_080013EC;
    }
    goto skip_1;
    // 0x080012C8: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    skip_1:
    // 0x080012CC: b           L_080013F4
    // 0x080012D0: lwc1        $f2, 0x78($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X78);
        goto L_080013F4;
    // 0x080012D0: lwc1        $f2, 0x78($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X78);
    // 0x080012D4: lw          $t6, 0x18($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X18);
L_080012D8:
    // 0x080012D8: lwc1        $f4, 0x1C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x080012DC: lwc1        $f6, 0x20($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X20);
    // 0x080012E0: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x080012E4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x080012E8: cvt.s.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
    // 0x080012EC: swc1        $f8, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f8.u32l;
    // 0x080012F0: lwc1        $f2, 0x1C($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x080012F4: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x080012F8: nop

    // 0x080012FC: bc1fl       L_080013F8
    if (!c1cs) {
        // 0x08001300: cfc1        $t9, $FpcCsr
        ctx->r25 = get_cop1_cs();
            goto L_080013F8;
    }
    goto skip_2;
    // 0x08001300: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    skip_2:
    // 0x08001304: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x08001308: lw          $t7, 0x8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X8);
    // 0x0800130C: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x08001310: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x08001314: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x08001318: sw          $t7, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r15;
L_0800131C:
    // 0x0800131C: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x08001320: lw          $t0, 0x18($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X18);
    // 0x08001324: lw          $a1, 0x10($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X10);
    // 0x08001328: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x0800132C: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x08001330: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x08001334: sltiu       $v1, $a1, 0x1
    ctx->r3 = ctx->r5 < 0X1 ? 1 : 0;
    // 0x08001338: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x0800133C: addiu       $t2, $a1, -0x1
    ctx->r10 = ADD32(ctx->r5, -0X1);
    // 0x08001340: bne         $a1, $at, L_08001350
    if (ctx->r5 != ctx->r1) {
        // 0x08001344: swc1        $f18, 0x1C($v0)
        MEM_W(0X1C, ctx->r2) = ctx->f18.u32l;
            goto L_08001350;
    }
    // 0x08001344: swc1        $f18, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f18.u32l;
    // 0x08001348: b           L_080013AC
    // 0x0800134C: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
        goto L_080013AC;
    // 0x0800134C: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
L_08001350:
    // 0x08001350: beq         $v1, $zero, L_080013A4
    if (ctx->r3 == 0) {
        // 0x08001354: sw          $t2, 0x10($v0)
        MEM_W(0X10, ctx->r2) = ctx->r10;
            goto L_080013A4;
    }
    // 0x08001354: sw          $t2, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r10;
    // 0x08001358: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x0800135C: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x08001360: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x08001364: beq         $v1, $zero, L_0800138C
    if (ctx->r3 == 0) {
        // 0x08001368: sw          $t4, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r12;
            goto L_0800138C;
    }
    // 0x08001368: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x0800136C: lw          $t5, 0x18($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X18);
    // 0x08001370: mtc1        $v1, $f8
    ctx->f8.u32l = ctx->r3;
    // 0x08001374: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x08001378: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x0800137C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08001380: div.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x08001384: b           L_080013AC
    // 0x08001388: swc1        $f16, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f16.u32l;
        goto L_080013AC;
    // 0x08001388: swc1        $f16, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f16.u32l;
L_0800138C:
    // 0x0800138C: lw          $t6, 0x18($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X18);
    // 0x08001390: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x08001394: nop

    // 0x08001398: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x0800139C: b           L_080013AC
    // 0x080013A0: swc1        $f4, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f4.u32l;
        goto L_080013AC;
    // 0x080013A0: swc1        $f4, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f4.u32l;
L_080013A4:
    // 0x080013A4: b           L_080013F4
    // 0x080013A8: lwc1        $f2, 0x1C($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X1C);
        goto L_080013F4;
    // 0x080013A8: lwc1        $f2, 0x1C($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X1C);
L_080013AC:
    // 0x080013AC: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x080013B0: lwc1        $f8, 0x1C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x080013B4: lwc1        $f6, 0x20($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X20);
    // 0x080013B8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x080013BC: sub.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x080013C0: swc1        $f10, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f10.u32l;
    // 0x080013C4: lwc1        $f2, 0x1C($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x080013C8: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x080013CC: nop

    // 0x080013D0: bc1fl       L_080013F8
    if (!c1cs) {
        // 0x080013D4: cfc1        $t9, $FpcCsr
        ctx->r25 = get_cop1_cs();
            goto L_080013F8;
    }
    goto skip_3;
    // 0x080013D4: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    skip_3:
    // 0x080013D8: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x080013DC: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x080013E0: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x080013E4: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x080013E8: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
L_080013EC:
    // 0x080013EC: sw          $zero, 0x14($v0)
    MEM_W(0X14, ctx->r2) = 0;
    // 0x080013F0: lwc1        $f2, 0x1C($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X1C);
L_080013F4:
    // 0x080013F4: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
L_080013F8:
    // 0x080013F8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x080013FC: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x08001400: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x08001404: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x08001408: cvt.w.s     $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    ctx->f16.u32l = CVT_W_S(ctx->f2.fl);
    // 0x0800140C: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x08001410: nop

    // 0x08001414: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x08001418: beql        $t0, $zero, L_08001468
    if (ctx->r8 == 0) {
        // 0x0800141C: mfc1        $t0, $f16
        ctx->r8 = (int32_t)ctx->f16.u32l;
            goto L_08001468;
    }
    goto skip_4;
    // 0x0800141C: mfc1        $t0, $f16
    ctx->r8 = (int32_t)ctx->f16.u32l;
    skip_4:
    // 0x08001420: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08001424: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x08001428: sub.s       $f16, $f2, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f2.fl - ctx->f16.fl;
    // 0x0800142C: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x08001430: nop

    // 0x08001434: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x08001438: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x0800143C: nop

    // 0x08001440: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x08001444: bne         $t0, $zero, L_0800145C
    if (ctx->r8 != 0) {
        // 0x08001448: nop
    
            goto L_0800145C;
    }
    // 0x08001448: nop

    // 0x0800144C: mfc1        $t0, $f16
    ctx->r8 = (int32_t)ctx->f16.u32l;
    // 0x08001450: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08001454: b           L_08001474
    // 0x08001458: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
        goto L_08001474;
    // 0x08001458: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
L_0800145C:
    // 0x0800145C: b           L_08001474
    // 0x08001460: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
        goto L_08001474;
    // 0x08001460: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x08001464: mfc1        $t0, $f16
    ctx->r8 = (int32_t)ctx->f16.u32l;
L_08001468:
    // 0x08001468: nop

    // 0x0800146C: bltz        $t0, L_0800145C
    if (SIGNED(ctx->r8) < 0) {
        // 0x08001470: nop
    
            goto L_0800145C;
    }
    // 0x08001470: nop

L_08001474:
    // 0x08001474: lw          $t1, -0x3A38($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X3A38);
    // 0x08001478: lui         $t2, 0x4
    ctx->r10 = S32(0X4 << 16);
    // 0x0800147C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x08001480: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x08001484: lw          $t2, -0x4FE8($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X4FE8);
    // 0x08001488: jr          $ra
    // 0x0800148C: sb          $t0, 0x10($t2)
    MEM_B(0X10, ctx->r10) = ctx->r8;
    TRACE_RETURN()
    return;
    // 0x0800148C: sb          $t0, 0x10($t2)
    MEM_B(0X10, ctx->r10) = ctx->r8;
;}
RECOMP_FUNC void func_080015B8_739C88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080015B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080015BC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080015C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080015C4: addiu       $t9, $t9, 0x4EF8
    ctx->r25 = ADD32(ctx->r25, 0X4EF8);
    // 0x080015C8: jalr        $t9
    // 0x080015CC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080015CC: nop

    after_0:
    // 0x080015D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080015D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080015D8: jr          $ra
    // 0x080015DC: nop

    TRACE_RETURN()
    return;
    // 0x080015DC: nop

;}
RECOMP_FUNC void func_08000B9C_73926C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000B9C: lw          $v0, 0xD0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD0);
    // 0x08000BA0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x08000BA4: lw          $t6, 0x28($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X28);
    // 0x08000BA8: beq         $t6, $zero, L_08000CA0
    if (ctx->r14 == 0) {
        // 0x08000BAC: nop
    
            goto L_08000CA0;
    }
    // 0x08000BAC: nop

    // 0x08000BB0: lwc1        $f4, 0x24($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X24);
    // 0x08000BB4: lwc1        $f6, 0x20($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X20);
    // 0x08000BB8: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
    // 0x08000BBC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x08000BC0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08000BC4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x08000BC8: swc1        $f8, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f8.u32l;
    // 0x08000BCC: lwc1        $f0, 0x24($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X24);
    // 0x08000BD0: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x08000BD4: nop

    // 0x08000BD8: bc1fl       L_08000BF4
    if (!c1cs) {
        // 0x08000BDC: mtc1        $zero, $f16
        ctx->f16.u32l = 0;
            goto L_08000BF4;
    }
    goto skip_0;
    // 0x08000BDC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    skip_0:
    // 0x08000BE0: sub.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x08000BE4: swc1        $f10, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f10.u32l;
    // 0x08000BE8: b           L_08000C14
    // 0x08000BEC: lwc1        $f0, 0x24($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X24);
        goto L_08000C14;
    // 0x08000BEC: lwc1        $f0, 0x24($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X24);
    // 0x08000BF0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
L_08000BF4:
    // 0x08000BF4: nop

    // 0x08000BF8: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x08000BFC: nop

    // 0x08000C00: bc1fl       L_08000C18
    if (!c1cs) {
        // 0x08000C04: cfc1        $t9, $FpcCsr
        ctx->r25 = get_cop1_cs();
            goto L_08000C18;
    }
    goto skip_1;
    // 0x08000C04: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    skip_1:
    // 0x08000C08: add.s       $f18, $f0, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x08000C0C: swc1        $f18, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f18.u32l;
    // 0x08000C10: lwc1        $f0, 0x24($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X24);
L_08000C14:
    // 0x08000C14: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
L_08000C18:
    // 0x08000C18: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x08000C1C: lw          $t7, 0x28($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X28);
    // 0x08000C20: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x08000C24: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x08000C28: sw          $t8, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r24;
    // 0x08000C2C: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x08000C30: nop

    // 0x08000C34: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x08000C38: beql        $t0, $zero, L_08000C88
    if (ctx->r8 == 0) {
        // 0x08000C3C: mfc1        $t0, $f4
        ctx->r8 = (int32_t)ctx->f4.u32l;
            goto L_08000C88;
    }
    goto skip_2;
    // 0x08000C3C: mfc1        $t0, $f4
    ctx->r8 = (int32_t)ctx->f4.u32l;
    skip_2:
    // 0x08000C40: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000C44: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x08000C48: sub.s       $f4, $f0, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x08000C4C: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x08000C50: nop

    // 0x08000C54: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x08000C58: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x08000C5C: nop

    // 0x08000C60: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x08000C64: bne         $t0, $zero, L_08000C7C
    if (ctx->r8 != 0) {
        // 0x08000C68: nop
    
            goto L_08000C7C;
    }
    // 0x08000C68: nop

    // 0x08000C6C: mfc1        $t0, $f4
    ctx->r8 = (int32_t)ctx->f4.u32l;
    // 0x08000C70: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08000C74: b           L_08000C94
    // 0x08000C78: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
        goto L_08000C94;
    // 0x08000C78: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
L_08000C7C:
    // 0x08000C7C: b           L_08000C94
    // 0x08000C80: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
        goto L_08000C94;
    // 0x08000C80: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x08000C84: mfc1        $t0, $f4
    ctx->r8 = (int32_t)ctx->f4.u32l;
L_08000C88:
    // 0x08000C88: nop

    // 0x08000C8C: bltz        $t0, L_08000C7C
    if (SIGNED(ctx->r8) < 0) {
        // 0x08000C90: nop
    
            goto L_08000C7C;
    }
    // 0x08000C90: nop

L_08000C94:
    // 0x08000C94: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x08000C98: sh          $t0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r8;
    // 0x08000C9C: nop

L_08000CA0:
    // 0x08000CA0: jr          $ra
    // 0x08000CA4: nop

    TRACE_RETURN()
    return;
    // 0x08000CA4: nop

;}
RECOMP_FUNC void func_08000AA8_739178(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000AA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000AAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000AB0: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x08000AB4: sb          $zero, 0x74($a0)
    MEM_B(0X74, ctx->r4) = 0;
    // 0x08000AB8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000ABC: addiu       $t9, $t9, 0x3E9C
    ctx->r25 = ADD32(ctx->r25, 0X3E9C);
    // 0x08000AC0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x08000AC4: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x08000AC8: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x08000ACC: jalr        $t9
    // 0x08000AD0: addiu       $a2, $a3, 0x74
    ctx->r6 = ADD32(ctx->r7, 0X74);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000AD0: addiu       $a2, $a3, 0x74
    ctx->r6 = ADD32(ctx->r7, 0X74);
    after_0:
    // 0x08000AD4: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x08000AD8: sw          $v0, 0x70($a3)
    MEM_W(0X70, ctx->r7) = ctx->r2;
    // 0x08000ADC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000AE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000AE4: jr          $ra
    // 0x08000AE8: nop

    TRACE_RETURN()
    return;
    // 0x08000AE8: nop

;}
RECOMP_FUNC void func_08000000_7386D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000004: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
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
    // 0x0800001C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000020: addiu       $t9, $t9, 0x48F0
    ctx->r25 = ADD32(ctx->r25, 0X48F0);
    // 0x08000024: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x08000028: addiu       $a1, $zero, 0x38
    ctx->r5 = ADD32(0, 0X38);
    // 0x0800002C: jalr        $t9
    // 0x08000030: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000030: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_0:
    // 0x08000034: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x08000038: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800003C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000040: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(66, 0X64) << 16);
    // 0x08000044: sw          $v0, 0xD0($t6)
    MEM_W(0XD0, ctx->r14) = ctx->r2;
    // 0x08000048: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x0800004C: jalr        $t9
    // 0x08000050: addiu       $a0, $a0, 0x64
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(66, 0X64));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000050: addiu       $a0, $a0, 0x64
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(66, 0X64));
    after_1:
    // 0x08000054: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000058: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800005C: jr          $ra
    // 0x08000060: nop

    TRACE_RETURN()
    return;
    // 0x08000060: nop

;}
RECOMP_FUNC void func_08000A6C_73913C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000A6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000A70: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000A74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000A78: addiu       $t9, $t9, 0x4EF8
    ctx->r25 = ADD32(ctx->r25, 0X4EF8);
    // 0x08000A7C: jalr        $t9
    // 0x08000A80: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000A80: nop

    after_0:
    // 0x08000A84: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x08000A88: addiu       $v0, $v0, -0x3340
    ctx->r2 = ADD32(ctx->r2, -0X3340);
    // 0x08000A8C: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x08000A90: sb          $zero, 0x2E23($at)
    MEM_B(0X2E23, ctx->r1) = 0;
    // 0x08000A94: sb          $zero, 0x2E21($at)
    MEM_B(0X2E21, ctx->r1) = 0;
    // 0x08000A98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000A9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000AA0: jr          $ra
    // 0x08000AA4: nop

    TRACE_RETURN()
    return;
    // 0x08000AA4: nop

;}
RECOMP_FUNC void func_08001490_739B60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001490: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08001494: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08001498: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800149C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080014A0: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x080014A4: addiu       $t9, $t9, 0x4E08
    ctx->r25 = ADD32(ctx->r25, 0X4E08);
    // 0x080014A8: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(66, 0X129C) << 16);
    // 0x080014AC: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x080014B0: addiu       $a1, $a1, 0x129C
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(66, 0X129C));
    // 0x080014B4: jalr        $t9
    // 0x080014B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080014B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x080014BC: bne         $v0, $zero, L_080014CC
    if (ctx->r2 != 0) {
        // 0x080014C0: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_080014CC;
    }
    // 0x080014C0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x080014C4: b           L_080015A0
    // 0x080014C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_080015A0;
    // 0x080014C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_080014CC:
    // 0x080014CC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080014D0: addiu       $t9, $t9, 0x6B7C
    ctx->r25 = ADD32(ctx->r25, 0X6B7C);
    // 0x080014D4: jalr        $t9
    // 0x080014D8: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080014D8: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_1:
    // 0x080014DC: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x080014E0: addiu       $v0, $v0, -0x3A38
    ctx->r2 = ADD32(ctx->r2, -0X3A38);
    // 0x080014E4: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x080014E8: lui         $v1, 0x3
    ctx->r3 = S32(0X3 << 16);
    // 0x080014EC: ori         $v1, $v1, 0x8000
    ctx->r3 = ctx->r3 | 0X8000;
    // 0x080014F0: addu        $t8, $t7, $v1
    ctx->r24 = ADD32(ctx->r15, ctx->r3);
    // 0x080014F4: lw          $t0, 0x3018($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X3018);
    // 0x080014F8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x080014FC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x08001500: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x08001504: sb          $t6, 0xD($t0)
    MEM_B(0XD, ctx->r8) = ctx->r14;
    // 0x08001508: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x0800150C: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x08001510: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x08001514: addu        $t3, $t2, $v1
    ctx->r11 = ADD32(ctx->r10, ctx->r3);
    // 0x08001518: lw          $t4, 0x3018($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X3018);
    // 0x0800151C: sb          $t1, 0xE($t4)
    MEM_B(0XE, ctx->r12) = ctx->r9;
    // 0x08001520: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x08001524: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x08001528: addu        $t7, $t9, $v1
    ctx->r15 = ADD32(ctx->r25, ctx->r3);
    // 0x0800152C: lw          $t8, 0x3018($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X3018);
    // 0x08001530: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x08001534: sb          $t5, 0xF($t8)
    MEM_B(0XF, ctx->r24) = ctx->r13;
    // 0x08001538: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x0800153C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x08001540: addu        $t0, $t6, $v1
    ctx->r8 = ADD32(ctx->r14, ctx->r3);
    // 0x08001544: lw          $t2, 0x3018($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X3018);
    // 0x08001548: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x0800154C: sb          $zero, 0x10($t2)
    MEM_B(0X10, ctx->r10) = 0;
    // 0x08001550: sw          $a1, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r5;
    // 0x08001554: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x08001558: sw          $t3, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r11;
    // 0x0800155C: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x08001560: sw          $t1, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r9;
    // 0x08001564: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x08001568: beq         $a1, $zero, L_08001590
    if (ctx->r5 == 0) {
        // 0x0800156C: sw          $t4, 0x74($a0)
        MEM_W(0X74, ctx->r4) = ctx->r12;
            goto L_08001590;
    }
    // 0x0800156C: sw          $t4, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->r12;
    // 0x08001570: lw          $t9, 0x18($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X18);
    // 0x08001574: mtc1        $a1, $f8
    ctx->f8.u32l = ctx->r5;
    // 0x08001578: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x0800157C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x08001580: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08001584: div.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x08001588: b           L_0800159C
    // 0x0800158C: swc1        $f16, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f16.u32l;
        goto L_0800159C;
    // 0x0800158C: swc1        $f16, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f16.u32l;
L_08001590:
    // 0x08001590: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08001594: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x08001598: swc1        $f18, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f18.u32l;
L_0800159C:
    // 0x0800159C: sw          $t7, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r15;
L_080015A0:
    // 0x080015A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080015A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080015A8: jr          $ra
    // 0x080015AC: nop

    TRACE_RETURN()
    return;
    // 0x080015AC: nop

;}
RECOMP_FUNC void func_08000AFC_7391CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000AFC: jr          $ra
    // 0x08000B00: nop

    TRACE_RETURN()
    return;
    // 0x08000B00: nop

;}
RECOMP_FUNC void func_0800124C_73991C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800124C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001250: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001254: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001258: addiu       $t9, $t9, 0x4E08
    ctx->r25 = ADD32(ctx->r25, 0X4E08);
    // 0x0800125C: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(66, 0X1168) << 16);
    // 0x08001260: addiu       $a1, $a1, 0x1168
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(66, 0X1168));
    // 0x08001264: jalr        $t9
    // 0x08001268: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001268: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x0800126C: bne         $v0, $zero, L_0800127C
    if (ctx->r2 != 0) {
        // 0x08001270: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_0800127C;
    }
    // 0x08001270: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x08001274: b           L_0800128C
    // 0x08001278: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_0800128C;
    // 0x08001278: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_0800127C:
    // 0x0800127C: sw          $zero, 0x64($v1)
    MEM_W(0X64, ctx->r3) = 0;
    // 0x08001280: sw          $zero, 0x5C($v1)
    MEM_W(0X5C, ctx->r3) = 0;
    // 0x08001284: sw          $zero, 0x60($v1)
    MEM_W(0X60, ctx->r3) = 0;
    // 0x08001288: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_0800128C:
    // 0x0800128C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001290: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001294: jr          $ra
    // 0x08001298: nop

    TRACE_RETURN()
    return;
    // 0x08001298: nop

;}
RECOMP_FUNC void func_08000E08_7394D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000E08: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x08000E0C: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x08000E10: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x08000E14: lw          $v0, 0xD0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD0);
    // 0x08000E18: lhu         $t7, 0x16($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X16);
    // 0x08000E1C: addiu       $t8, $zero, 0x400
    ctx->r24 = ADD32(0, 0X400);
    // 0x08000E20: subu        $a2, $t7, $t6
    ctx->r6 = SUB32(ctx->r15, ctx->r14);
    // 0x08000E24: bgezl       $a2, L_08000E34
    if (SIGNED(ctx->r6) >= 0) {
        // 0x08000E28: slti        $at, $a2, 0x201
        ctx->r1 = SIGNED(ctx->r6) < 0X201 ? 1 : 0;
            goto L_08000E34;
    }
    goto skip_0;
    // 0x08000E28: slti        $at, $a2, 0x201
    ctx->r1 = SIGNED(ctx->r6) < 0X201 ? 1 : 0;
    skip_0:
    // 0x08000E2C: addiu       $a2, $a2, 0x400
    ctx->r6 = ADD32(ctx->r6, 0X400);
    // 0x08000E30: slti        $at, $a2, 0x201
    ctx->r1 = SIGNED(ctx->r6) < 0X201 ? 1 : 0;
L_08000E34:
    // 0x08000E34: bne         $at, $zero, L_08000E5C
    if (ctx->r1 != 0) {
        // 0x08000E38: subu        $t9, $t8, $a2
        ctx->r25 = SUB32(ctx->r24, ctx->r6);
            goto L_08000E5C;
    }
    // 0x08000E38: subu        $t9, $t8, $a2
    ctx->r25 = SUB32(ctx->r24, ctx->r6);
    // 0x08000E3C: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x08000E40: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x08000E44: mtc1        $a0, $f8
    ctx->f8.u32l = ctx->r4;
    // 0x08000E48: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08000E4C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x08000E50: div.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x08000E54: b           L_08000E7C
    // 0x08000E58: swc1        $f16, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f16.u32l;
        goto L_08000E7C;
    // 0x08000E58: swc1        $f16, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f16.u32l;
L_08000E5C:
    // 0x08000E5C: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x08000E60: mtc1        $a2, $f18
    ctx->f18.u32l = ctx->r6;
    // 0x08000E64: mtc1        $a0, $f6
    ctx->f6.u32l = ctx->r4;
    // 0x08000E68: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x08000E6C: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x08000E70: neg.s       $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = -ctx->f4.fl;
    // 0x08000E74: div.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x08000E78: swc1        $f16, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f16.u32l;
L_08000E7C:
    // 0x08000E7C: sw          $a0, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r4;
    // 0x08000E80: lhu         $t0, 0x16($v1)
    ctx->r8 = MEM_HU(ctx->r3, 0X16);
    // 0x08000E84: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x08000E88: mtc1        $t0, $f18
    ctx->f18.u32l = ctx->r8;
    // 0x08000E8C: bgez        $t0, L_08000EA0
    if (SIGNED(ctx->r8) >= 0) {
        // 0x08000E90: cvt.s.w     $f4, $f18
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
            goto L_08000EA0;
    }
    // 0x08000E90: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x08000E94: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000E98: nop

    // 0x08000E9C: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_08000EA0:
    // 0x08000EA0: jr          $ra
    // 0x08000EA4: swc1        $f4, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x08000EA4: swc1        $f4, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_08001140_739810(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001140: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x08001144: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x08001148: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x0800114C: swc1        $f12, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f12.u32l;
    // 0x08001150: swc1        $f14, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f14.u32l;
    // 0x08001154: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x08001158: jr          $ra
    // 0x0800115C: swc1        $f4, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x0800115C: swc1        $f4, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_080010C4_739794(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080010C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080010C8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080010CC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080010D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080010D4: addiu       $t9, $t9, 0x4E08
    ctx->r25 = ADD32(ctx->r25, 0X4E08);
    // 0x080010D8: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(66, 0XF10) << 16);
    // 0x080010DC: addiu       $a1, $a1, 0xF10
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(66, 0XF10));
    // 0x080010E0: jalr        $t9
    // 0x080010E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080010E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x080010E8: bne         $v0, $zero, L_080010F8
    if (ctx->r2 != 0) {
        // 0x080010EC: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_080010F8;
    }
    // 0x080010EC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x080010F0: b           L_08001120
    // 0x080010F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_08001120;
    // 0x080010F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_080010F8:
    // 0x080010F8: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x080010FC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08001100: sw          $zero, 0x60($v1)
    MEM_W(0X60, ctx->r3) = 0;
    // 0x08001104: sw          $zero, 0x78($v1)
    MEM_W(0X78, ctx->r3) = 0;
    // 0x08001108: sw          $zero, 0x74($v1)
    MEM_W(0X74, ctx->r3) = 0;
    // 0x0800110C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x08001110: sw          $t6, 0x64($v1)
    MEM_W(0X64, ctx->r3) = ctx->r14;
    // 0x08001114: swc1        $f0, 0x70($v1)
    MEM_W(0X70, ctx->r3) = ctx->f0.u32l;
    // 0x08001118: swc1        $f0, 0x6C($v1)
    MEM_W(0X6C, ctx->r3) = ctx->f0.u32l;
    // 0x0800111C: swc1        $f0, 0x68($v1)
    MEM_W(0X68, ctx->r3) = ctx->f0.u32l;
L_08001120:
    // 0x08001120: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001124: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001128: jr          $ra
    // 0x0800112C: nop

    TRACE_RETURN()
    return;
    // 0x0800112C: nop

    // 0x08001130: jr          $ra
    // 0x08001134: nop

    TRACE_RETURN()
    return;
    // 0x08001134: nop

    // 0x08001138: jr          $ra
    // 0x0800113C: nop

    TRACE_RETURN()
    return;
    // 0x0800113C: nop

;}
RECOMP_FUNC void func_08000064_738734(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000064: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x08000068: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x0800006C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08000070: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x08000074: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x08000078: lw          $s0, 0xD0($a0)
    ctx->r16 = MEM_W(ctx->r4, 0XD0);
    // 0x0800007C: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x08000080: sltiu       $at, $t7, 0x14
    ctx->r1 = ctx->r15 < 0X14 ? 1 : 0;
    // 0x08000084: beq         $at, $zero, L_0800089C
    if (ctx->r1 == 0) {
        // 0x08000088: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_0800089C;
    }
    // 0x08000088: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x0800008C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(66, 0X171C) << 16);
    // 0x08000090: addu        $at, $at, $t7
    gpr jr_addend_08000098 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x08000094: lw          $t7, 0x171C($at)
    ctx->r15 = ADD32(ctx->r1, (int16_t)RELOC_LO16(66, 0X171C));
    // 0x08000098: jr          $t7
    // 0x0800009C: nop

    switch (jr_addend_08000098 >> 2) {
        case 0: goto L_080000A0; break;
        case 1: goto L_08000260; break;
        case 2: goto L_0800034C; break;
        case 3: goto L_0800037C; break;
        case 4: goto L_080003C8; break;
        case 5: goto L_080003F0; break;
        case 6: goto L_0800041C; break;
        case 7: goto L_08000598; break;
        case 8: goto L_080005B8; break;
        case 9: goto L_08000624; break;
        case 10: goto L_08000654; break;
        case 11: goto L_08000708; break;
        case 12: goto L_0800077C; break;
        case 13: goto L_080007B0; break;
        case 14: goto L_080007E0; break;
        case 15: goto L_08000814; break;
        case 16: goto L_08000844; break;
        case 17: goto L_0800087C; break;
        case 18: goto L_0800089C; break;
        case 19: goto L_0800089C; break;
        default: switch_error(__func__, 0x08000098, 0x0800171C);
    }
    // 0x0800009C: nop

L_080000A0:
    // 0x080000A0: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x080000A4: addiu       $v1, $v1, -0x39F4
    ctx->r3 = ADD32(ctx->r3, -0X39F4);
    // 0x080000A8: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x080000AC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(66, 0X176C) << 16);
    // 0x080000B0: lwc1        $f6, 0x176C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(66, 0X176C));
    // 0x080000B4: lwc1        $f4, 0x8($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X8);
    // 0x080000B8: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x080000BC: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x080000C0: nop

    // 0x080000C4: bc1fl       L_080008A0
    if (!c1cs) {
        // 0x080000C8: lw          $a0, 0x20($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X20);
            goto L_080008A0;
    }
    goto skip_0;
    // 0x080000C8: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    skip_0:
    // 0x080000CC: lw          $t9, -0x39FC($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X39FC);
    // 0x080000D0: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x080000D4: lhu         $t0, 0x98($t9)
    ctx->r8 = MEM_HU(ctx->r25, 0X98);
    // 0x080000D8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080000DC: addiu       $t9, $t9, 0x2940
    ctx->r25 = ADD32(ctx->r25, 0X2940);
    // 0x080000E0: beql        $t0, $zero, L_080008A0
    if (ctx->r8 == 0) {
        // 0x080000E4: lw          $a0, 0x20($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X20);
            goto L_080008A0;
    }
    goto skip_1;
    // 0x080000E4: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    skip_1:
    // 0x080000E8: jalr        $t9
    // 0x080000EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080000EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x080000F0: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x080000F4: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x080000F8: lw          $t1, -0x39D8($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X39D8);
    // 0x080000FC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x08000100: sw          $v0, -0x3248($at)
    MEM_W(-0X3248, ctx->r1) = ctx->r2;
    // 0x08000104: lw          $t2, 0x2C($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X2C);
    // 0x08000108: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x0800010C: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x08000110: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000114: addiu       $t9, $t9, 0x2878
    ctx->r25 = ADD32(ctx->r25, 0X2878);
    // 0x08000118: and         $a1, $t2, $at
    ctx->r5 = ctx->r10 & ctx->r1;
    // 0x0800011C: sw          $a1, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r5;
    // 0x08000120: jalr        $t9
    // 0x08000124: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000124: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    after_1:
    // 0x08000128: lui         $t5, 0x8020
    ctx->r13 = S32(0X8020 << 16);
    // 0x0800012C: lw          $t5, -0x39D8($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X39D8);
    // 0x08000130: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x08000134: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x08000138: addiu       $t9, $t9, 0x7DE8
    ctx->r25 = ADD32(ctx->r25, 0X7DE8);
    // 0x0800013C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x08000140: sb          $t4, 0x64($t5)
    MEM_B(0X64, ctx->r13) = ctx->r12;
    // 0x08000144: jalr        $t9
    // 0x08000148: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000148: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    after_2:
    // 0x0800014C: bne         $v0, $zero, L_080001C4
    if (ctx->r2 != 0) {
        // 0x08000150: lui         $a1, 0x4361
        ctx->r5 = S32(0X4361 << 16);
            goto L_080001C4;
    }
    // 0x08000150: lui         $a1, 0x4361
    ctx->r5 = S32(0X4361 << 16);
    // 0x08000154: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x08000158: addiu       $v0, $v0, 0x24A0
    ctx->r2 = ADD32(ctx->r2, 0X24A0);
    // 0x0800015C: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    // 0x08000160: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x08000164: jalr        $v0
    // 0x08000168: lui         $a1, 0x42B4
    ctx->r5 = S32(0X42B4 << 16);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x08000168: lui         $a1, 0x42B4
    ctx->r5 = S32(0X42B4 << 16);
    after_3:
    // 0x0800016C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000170: addiu       $t9, $t9, 0x24AC
    ctx->r25 = ADD32(ctx->r25, 0X24AC);
    // 0x08000174: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    // 0x08000178: jalr        $t9
    // 0x0800017C: lui         $a1, 0x4520
    ctx->r5 = S32(0X4520 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x0800017C: lui         $a1, 0x4520
    ctx->r5 = S32(0X4520 << 16);
    after_4:
    // 0x08000180: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x08000184: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    // 0x08000188: lui         $a1, 0x4316
    ctx->r5 = S32(0X4316 << 16);
    // 0x0800018C: jalr        $t9
    // 0x08000190: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000190: nop

    after_5:
    // 0x08000194: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08000198: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800019C: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x080001A0: lui         $a1, 0xC2E0
    ctx->r5 = S32(0XC2E0 << 16);
    // 0x080001A4: lui         $a2, 0xC2FD
    ctx->r6 = S32(0XC2FD << 16);
    // 0x080001A8: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x080001AC: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x080001B0: ori         $a1, $a1, 0x3333
    ctx->r5 = ctx->r5 | 0X3333;
    // 0x080001B4: jalr        $t9
    // 0x080001B8: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080001B8: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    after_6:
    // 0x080001BC: b           L_08000228
    // 0x080001C0: nop

        goto L_08000228;
    // 0x080001C0: nop

L_080001C4:
    // 0x080001C4: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x080001C8: addiu       $v0, $v0, 0x24A0
    ctx->r2 = ADD32(ctx->r2, 0X24A0);
    // 0x080001CC: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    // 0x080001D0: jalr        $v0
    // 0x080001D4: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_7;
    // 0x080001D4: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_7:
    // 0x080001D8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080001DC: addiu       $t9, $t9, 0x24AC
    ctx->r25 = ADD32(ctx->r25, 0X24AC);
    // 0x080001E0: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    // 0x080001E4: jalr        $t9
    // 0x080001E8: lui         $a1, 0x4520
    ctx->r5 = S32(0X4520 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x080001E8: lui         $a1, 0x4520
    ctx->r5 = S32(0X4520 << 16);
    after_8:
    // 0x080001EC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x080001F0: lui         $a1, 0x43BB
    ctx->r5 = S32(0X43BB << 16);
    // 0x080001F4: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x080001F8: jalr        $t9
    // 0x080001FC: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x080001FC: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    after_9:
    // 0x08000200: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08000204: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000208: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x0800020C: lui         $a1, 0xC2E0
    ctx->r5 = S32(0XC2E0 << 16);
    // 0x08000210: lui         $a2, 0xC2FD
    ctx->r6 = S32(0XC2FD << 16);
    // 0x08000214: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x08000218: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x0800021C: ori         $a1, $a1, 0x3333
    ctx->r5 = ctx->r5 | 0X3333;
    // 0x08000220: jalr        $t9
    // 0x08000224: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08000224: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    after_10:
L_08000228:
    // 0x08000228: jal         0x080009E8
    // 0x0800022C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    func_080009E8_7390B8(rdram, ctx);
        goto after_11;
    // 0x0800022C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_11:
    // 0x08000230: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x08000234: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08000238: jal         0x08000AA8
    // 0x0800023C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_08000AA8_739178(rdram, ctx);
        goto after_12;
    // 0x0800023C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_12:
    // 0x08000240: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08000244: addiu       $t9, $t9, -0x3A40
    ctx->r25 = ADD32(ctx->r25, -0X3A40);
    // 0x08000248: jalr        $t9
    // 0x0800024C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x0800024C: nop

    after_13:
    // 0x08000250: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x08000254: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x08000258: b           L_0800089C
    // 0x0800025C: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
        goto L_0800089C;
    // 0x0800025C: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
L_08000260:
    // 0x08000260: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x08000264: addiu       $v1, $v1, -0x39F4
    ctx->r3 = ADD32(ctx->r3, -0X39F4);
    // 0x08000268: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x0800026C: lui         $at, 0xC32A
    ctx->r1 = S32(0XC32A << 16);
    // 0x08000270: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08000274: lwc1        $f8, 0xC($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0XC);
    // 0x08000278: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800027C: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x08000280: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x08000284: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x08000288: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    // 0x0800028C: bc1f        L_080002E0
    if (!c1cs) {
        // 0x08000290: nop
    
            goto L_080002E0;
    }
    // 0x08000290: nop

    // 0x08000294: lw          $t0, -0x39D8($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X39D8);
    // 0x08000298: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800029C: addiu       $t9, $t9, 0x2304
    ctx->r25 = ADD32(ctx->r25, 0X2304);
    // 0x080002A0: sb          $zero, 0x64($t0)
    MEM_B(0X64, ctx->r8) = 0;
    // 0x080002A4: jalr        $t9
    // 0x080002A8: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x080002A8: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    after_14:
    // 0x080002AC: jal         0x08000A6C
    // 0x080002B0: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    func_08000A6C_73913C(rdram, ctx);
        goto after_15;
    // 0x080002B0: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    after_15:
    // 0x080002B4: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x080002B8: addiu       $t9, $t9, -0x3A70
    ctx->r25 = ADD32(ctx->r25, -0X3A70);
    // 0x080002BC: jalr        $t9
    // 0x080002C0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x080002C0: nop

    after_16:
    // 0x080002C4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080002C8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080002CC: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x080002D0: jalr        $t9
    // 0x080002D4: addiu       $a0, $a0, 0x54B4
    ctx->r4 = ADD32(ctx->r4, 0X54B4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x080002D4: addiu       $a0, $a0, 0x54B4
    ctx->r4 = ADD32(ctx->r4, 0X54B4);
    after_17:
    // 0x080002D8: b           L_080008BC
    // 0x080002DC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_080008BC;
    // 0x080002DC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_080002E0:
    // 0x080002E0: jalr        $t9
    // 0x080002E4: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x080002E4: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    after_18:
    // 0x080002E8: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x080002EC: addiu       $v1, $v1, -0x39F4
    ctx->r3 = ADD32(ctx->r3, -0X39F4);
    // 0x080002F0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x080002F4: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x080002F8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x080002FC: lwc1        $f16, 0xC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08000300: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000304: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x08000308: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x0800030C: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    // 0x08000310: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x08000314: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x08000318: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x0800031C: jalr        $t9
    // 0x08000320: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_19;
    // 0x08000320: nop

    after_19:
    // 0x08000324: jal         0x08000AEC
    // 0x08000328: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    func_08000AEC_7391BC(rdram, ctx);
        goto after_20;
    // 0x08000328: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    after_20:
    // 0x0800032C: bnel        $v0, $zero, L_080008A0
    if (ctx->r2 != 0) {
        // 0x08000330: lw          $a0, 0x20($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X20);
            goto L_080008A0;
    }
    goto skip_2;
    // 0x08000330: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    skip_2:
    // 0x08000334: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x08000338: addiu       $t1, $zero, 0x2D
    ctx->r9 = ADD32(0, 0X2D);
    // 0x0800033C: sw          $t1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r9;
    // 0x08000340: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x08000344: b           L_0800089C
    // 0x08000348: sw          $t3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r11;
        goto L_0800089C;
    // 0x08000348: sw          $t3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r11;
L_0800034C:
    // 0x0800034C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x08000350: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000354: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x08000358: addiu       $t4, $v0, -0x1
    ctx->r12 = ADD32(ctx->r2, -0X1);
    // 0x0800035C: bne         $v0, $zero, L_0800089C
    if (ctx->r2 != 0) {
        // 0x08000360: sw          $t4, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r12;
            goto L_0800089C;
    }
    // 0x08000360: sw          $t4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r12;
    // 0x08000364: jalr        $t9
    // 0x08000368: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_21;
    // 0x08000368: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    after_21:
    // 0x0800036C: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    // 0x08000370: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x08000374: b           L_0800089C
    // 0x08000378: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
        goto L_0800089C;
    // 0x08000378: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
L_0800037C:
    // 0x0800037C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000380: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x08000384: jalr        $t9
    // 0x08000388: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_22;
    // 0x08000388: nop

    after_22:
    // 0x0800038C: bne         $v0, $zero, L_0800089C
    if (ctx->r2 != 0) {
        // 0x08000390: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_0800089C;
    }
    // 0x08000390: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000394: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x08000398: jalr        $t9
    // 0x0800039C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_23;
    // 0x0800039C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_23:
    // 0x080003A0: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x080003A4: addiu       $t9, $t9, -0x2B28
    ctx->r25 = ADD32(ctx->r25, -0X2B28);
    // 0x080003A8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x080003AC: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x080003B0: jalr        $t9
    // 0x080003B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_24;
    // 0x080003B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_24:
    // 0x080003B8: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x080003BC: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x080003C0: b           L_0800089C
    // 0x080003C4: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
        goto L_0800089C;
    // 0x080003C4: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
L_080003C8:
    // 0x080003C8: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080003CC: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x080003D0: jalr        $t9
    // 0x080003D4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_25;
    // 0x080003D4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_25:
    // 0x080003D8: beql        $v0, $zero, L_080008A0
    if (ctx->r2 == 0) {
        // 0x080003DC: lw          $a0, 0x20($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X20);
            goto L_080008A0;
    }
    goto skip_3;
    // 0x080003DC: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    skip_3:
    // 0x080003E0: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x080003E4: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x080003E8: b           L_0800089C
    // 0x080003EC: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
        goto L_0800089C;
    // 0x080003EC: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
L_080003F0:
    // 0x080003F0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080003F4: addiu       $t9, $t9, 0x3C70
    ctx->r25 = ADD32(ctx->r25, 0X3C70);
    // 0x080003F8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(66, 0X15E0) << 16);
    // 0x080003FC: jalr        $t9
    // 0x08000400: addiu       $a0, $a0, 0x15E0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(66, 0X15E0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_26;
    // 0x08000400: addiu       $a0, $a0, 0x15E0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(66, 0X15E0));
    after_26:
    // 0x08000404: beql        $v0, $zero, L_080008A0
    if (ctx->r2 == 0) {
        // 0x08000408: lw          $a0, 0x20($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X20);
            goto L_080008A0;
    }
    goto skip_4;
    // 0x08000408: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    skip_4:
    // 0x0800040C: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x08000410: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x08000414: b           L_0800089C
    // 0x08000418: sw          $t3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r11;
        goto L_0800089C;
    // 0x08000418: sw          $t3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r11;
L_0800041C:
    // 0x0800041C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x08000420: addiu       $v0, $v0, -0x3340
    ctx->r2 = ADD32(ctx->r2, -0X3340);
    // 0x08000424: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x08000428: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x0800042C: sh          $zero, 0x2DB7($at)
    MEM_H(0X2DB7, ctx->r1) = 0;
    // 0x08000430: sb          $t4, 0x2E21($at)
    MEM_B(0X2E21, ctx->r1) = ctx->r12;
    // 0x08000434: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x08000438: lui         $a1, 0xC170
    ctx->r5 = S32(0XC170 << 16);
    // 0x0800043C: lui         $a2, 0xC30C
    ctx->r6 = S32(0XC30C << 16);
    // 0x08000440: jal         0x08000B04
    // 0x08000444: lui         $a3, 0x4120
    ctx->r7 = S32(0X4120 << 16);
    func_08000B04_7391D4(rdram, ctx);
        goto after_27;
    // 0x08000444: lui         $a3, 0x4120
    ctx->r7 = S32(0X4120 << 16);
    after_27:
    // 0x08000448: lui         $t5, 0x8020
    ctx->r13 = S32(0X8020 << 16);
    // 0x0800044C: lw          $t5, -0x39FC($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X39FC);
    // 0x08000450: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(66, 0X1770) << 16);
    // 0x08000454: lwc1        $f0, 0x1770($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(66, 0X1770));
    // 0x08000458: lw          $t6, 0x5C($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X5C);
    // 0x0800045C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x08000460: addiu       $v1, $v1, -0x39F4
    ctx->r3 = ADD32(ctx->r3, -0X39F4);
    // 0x08000464: sh          $zero, 0x86($t6)
    MEM_H(0X86, ctx->r14) = 0;
    // 0x08000468: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x0800046C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x08000470: addiu       $v0, $v0, -0x39E4
    ctx->r2 = ADD32(ctx->r2, -0X39E4);
    // 0x08000474: swc1        $f0, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f0.u32l;
    // 0x08000478: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x0800047C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08000480: swc1        $f0, 0x20($t8)
    MEM_W(0X20, ctx->r24) = ctx->f0.u32l;
    // 0x08000484: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x08000488: swc1        $f0, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->f0.u32l;
    // 0x0800048C: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x08000490: swc1        $f0, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f0.u32l;
    // 0x08000494: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x08000498: swc1        $f0, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->f0.u32l;
    // 0x0800049C: jal         0x08000CA8
    // 0x080004A0: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    func_08000CA8_739378(rdram, ctx);
        goto after_28;
    // 0x080004A0: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_28:
    // 0x080004A4: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x080004A8: addiu       $t2, $zero, 0x100
    ctx->r10 = ADD32(0, 0X100);
    // 0x080004AC: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x080004B0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x080004B4: lui         $a1, 0xC100
    ctx->r5 = S32(0XC100 << 16);
    // 0x080004B8: lui         $a2, 0xC30C
    ctx->r6 = S32(0XC30C << 16);
    // 0x080004BC: jal         0x08000DDC
    // 0x080004C0: lui         $a3, 0xC0E0
    ctx->r7 = S32(0XC0E0 << 16);
    func_08000DDC_7394AC(rdram, ctx);
        goto after_29;
    // 0x080004C0: lui         $a3, 0xC0E0
    ctx->r7 = S32(0XC0E0 << 16);
    after_29:
    // 0x080004C4: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x080004C8: jal         0x08000CA8
    // 0x080004CC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_08000CA8_739378(rdram, ctx);
        goto after_30;
    // 0x080004CC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_30:
    // 0x080004D0: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x080004D4: addiu       $t3, $zero, 0x120
    ctx->r11 = ADD32(0, 0X120);
    // 0x080004D8: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x080004DC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x080004E0: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    // 0x080004E4: lui         $a2, 0xC30C
    ctx->r6 = S32(0XC30C << 16);
    // 0x080004E8: jal         0x08000DDC
    // 0x080004EC: lui         $a3, 0x4200
    ctx->r7 = S32(0X4200 << 16);
    func_08000DDC_7394AC(rdram, ctx);
        goto after_31;
    // 0x080004EC: lui         $a3, 0x4200
    ctx->r7 = S32(0X4200 << 16);
    after_31:
    // 0x080004F0: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x080004F4: jal         0x08000CA8
    // 0x080004F8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_08000CA8_739378(rdram, ctx);
        goto after_32;
    // 0x080004F8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_32:
    // 0x080004FC: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x08000500: addiu       $t4, $zero, 0xB0
    ctx->r12 = ADD32(0, 0XB0);
    // 0x08000504: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x08000508: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x0800050C: lui         $a1, 0x4110
    ctx->r5 = S32(0X4110 << 16);
    // 0x08000510: lui         $a2, 0xC30C
    ctx->r6 = S32(0XC30C << 16);
    // 0x08000514: jal         0x08000DDC
    // 0x08000518: lui         $a3, 0xC1C8
    ctx->r7 = S32(0XC1C8 << 16);
    func_08000DDC_7394AC(rdram, ctx);
        goto after_33;
    // 0x08000518: lui         $a3, 0xC1C8
    ctx->r7 = S32(0XC1C8 << 16);
    after_33:
    // 0x0800051C: lui         $t5, 0x8020
    ctx->r13 = S32(0X8020 << 16);
    // 0x08000520: lw          $t5, -0x39D8($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X39D8);
    // 0x08000524: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x08000528: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x0800052C: lw          $t6, 0x2C($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X2C);
    // 0x08000530: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000534: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x08000538: lui         $a1, 0x430F
    ctx->r5 = S32(0X430F << 16);
    // 0x0800053C: lui         $a3, 0x42C6
    ctx->r7 = S32(0X42C6 << 16);
    // 0x08000540: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x08000544: sw          $t7, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r15;
    // 0x08000548: ori         $a3, $a3, 0x999A
    ctx->r7 = ctx->r7 | 0X999A;
    // 0x0800054C: ori         $a1, $a1, 0x4CCD
    ctx->r5 = ctx->r5 | 0X4CCD;
    // 0x08000550: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    // 0x08000554: jalr        $t9
    // 0x08000558: lui         $a2, 0xC286
    ctx->r6 = S32(0XC286 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_34;
    // 0x08000558: lui         $a2, 0xC286
    ctx->r6 = S32(0XC286 << 16);
    after_34:
    // 0x0800055C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000560: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x08000564: lui         $a1, 0xC12E
    ctx->r5 = S32(0XC12E << 16);
    // 0x08000568: lui         $a2, 0xC2EA
    ctx->r6 = S32(0XC2EA << 16);
    // 0x0800056C: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x08000570: ori         $a1, $a1, 0x6666
    ctx->r5 = ctx->r5 | 0X6666;
    // 0x08000574: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    // 0x08000578: jalr        $t9
    // 0x0800057C: lui         $a3, 0x3FC0
    ctx->r7 = S32(0X3FC0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_35;
    // 0x0800057C: lui         $a3, 0x3FC0
    ctx->r7 = S32(0X3FC0 << 16);
    after_35:
    // 0x08000580: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x08000584: addiu       $t8, $zero, 0x3C
    ctx->r24 = ADD32(0, 0X3C);
    // 0x08000588: sw          $t8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r24;
    // 0x0800058C: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x08000590: b           L_0800089C
    // 0x08000594: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
        goto L_0800089C;
    // 0x08000594: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
L_08000598:
    // 0x08000598: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800059C: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x080005A0: jalr        $t9
    // 0x080005A4: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_36;
    // 0x080005A4: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    after_36:
    // 0x080005A8: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x080005AC: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x080005B0: b           L_0800089C
    // 0x080005B4: sw          $t3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r11;
        goto L_0800089C;
    // 0x080005B4: sw          $t3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r11;
L_080005B8:
    // 0x080005B8: lui         $v0, 0x8002
    ctx->r2 = S32(0X8002 << 16);
    // 0x080005BC: addiu       $v0, $v0, 0x40DC
    ctx->r2 = ADD32(ctx->r2, 0X40DC);
    // 0x080005C0: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x080005C4: jalr        $v0
    // 0x080005C8: addiu       $a0, $zero, 0x76
    ctx->r4 = ADD32(0, 0X76);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_37;
    // 0x080005C8: addiu       $a0, $zero, 0x76
    ctx->r4 = ADD32(0, 0X76);
    after_37:
    // 0x080005CC: beq         $v0, $zero, L_080005E8
    if (ctx->r2 == 0) {
        // 0x080005D0: addiu       $a1, $zero, 0x1E
        ctx->r5 = ADD32(0, 0X1E);
            goto L_080005E8;
    }
    // 0x080005D0: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x080005D4: jal         0x08000EB0
    // 0x080005D8: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    func_08000EB0_739580(rdram, ctx);
        goto after_38;
    // 0x080005D8: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_38:
    // 0x080005DC: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x080005E0: jal         0x08000E08
    // 0x080005E4: addiu       $a1, $zero, 0x3C0
    ctx->r5 = ADD32(0, 0X3C0);
    func_08000E08_7394D8(rdram, ctx);
        goto after_39;
    // 0x080005E4: addiu       $a1, $zero, 0x3C0
    ctx->r5 = ADD32(0, 0X3C0);
    after_39:
L_080005E8:
    // 0x080005E8: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x080005EC: addiu       $a0, $zero, 0x75
    ctx->r4 = ADD32(0, 0X75);
    // 0x080005F0: jalr        $t9
    // 0x080005F4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_40;
    // 0x080005F4: nop

    after_40:
    // 0x080005F8: beq         $v0, $zero, L_0800089C
    if (ctx->r2 == 0) {
        // 0x080005FC: addiu       $a1, $zero, 0x1E
        ctx->r5 = ADD32(0, 0X1E);
            goto L_0800089C;
    }
    // 0x080005FC: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x08000600: jal         0x08000EB0
    // 0x08000604: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    func_08000EB0_739580(rdram, ctx);
        goto after_41;
    // 0x08000604: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    after_41:
    // 0x08000608: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x0800060C: jal         0x08000E08
    // 0x08000610: addiu       $a1, $zero, 0x240
    ctx->r5 = ADD32(0, 0X240);
    func_08000E08_7394D8(rdram, ctx);
        goto after_42;
    // 0x08000610: addiu       $a1, $zero, 0x240
    ctx->r5 = ADD32(0, 0X240);
    after_42:
    // 0x08000614: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x08000618: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x0800061C: b           L_0800089C
    // 0x08000620: sw          $t5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r13;
        goto L_0800089C;
    // 0x08000620: sw          $t5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r13;
L_08000624:
    // 0x08000624: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000628: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x0800062C: jalr        $t9
    // 0x08000630: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_43;
    // 0x08000630: nop

    after_43:
    // 0x08000634: bnel        $v0, $zero, L_080008A0
    if (ctx->r2 != 0) {
        // 0x08000638: lw          $a0, 0x20($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X20);
            goto L_080008A0;
    }
    goto skip_5;
    // 0x08000638: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    skip_5:
    // 0x0800063C: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x08000640: addiu       $t6, $zero, 0x1E
    ctx->r14 = ADD32(0, 0X1E);
    // 0x08000644: sw          $t6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r14;
    // 0x08000648: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x0800064C: b           L_0800089C
    // 0x08000650: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
        goto L_0800089C;
    // 0x08000650: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
L_08000654:
    // 0x08000654: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x08000658: addiu       $t0, $v0, -0x1
    ctx->r8 = ADD32(ctx->r2, -0X1);
    // 0x0800065C: bne         $v0, $zero, L_0800089C
    if (ctx->r2 != 0) {
        // 0x08000660: sw          $t0, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r8;
            goto L_0800089C;
    }
    // 0x08000660: sw          $t0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r8;
    // 0x08000664: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x08000668: jal         0x080010C4
    // 0x0800066C: lw          $a1, 0x20($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X20);
    func_080010C4_739794(rdram, ctx);
        goto after_44;
    // 0x0800066C: lw          $a1, 0x20($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X20);
    after_44:
    // 0x08000670: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08000674: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x08000678: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x0800067C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x08000680: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x08000684: jal         0x08001140
    // 0x08000688: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_08001140_739810(rdram, ctx);
        goto after_45;
    // 0x08000688: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_45:
    // 0x0800068C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000690: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08000694: jalr        $t9
    // 0x08000698: addiu       $a0, $zero, 0x251
    ctx->r4 = ADD32(0, 0X251);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_46;
    // 0x08000698: addiu       $a0, $zero, 0x251
    ctx->r4 = ADD32(0, 0X251);
    after_46:
    // 0x0800069C: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x080006A0: addiu       $t9, $t9, -0x5324
    ctx->r25 = ADD32(ctx->r25, -0X5324);
    // 0x080006A4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x080006A8: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x080006AC: jalr        $t9
    // 0x080006B0: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_47;
    // 0x080006B0: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    after_47:
    // 0x080006B4: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x080006B8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x080006BC: lui         $a2, 0x3E00
    ctx->r6 = S32(0X3E00 << 16);
    // 0x080006C0: jal         0x08000EBC
    // 0x080006C4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_08000EBC_73958C(rdram, ctx);
        goto after_48;
    // 0x080006C4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_48:
    // 0x080006C8: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x080006CC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x080006D0: lui         $a2, 0x3E00
    ctx->r6 = S32(0X3E00 << 16);
    // 0x080006D4: jal         0x08000EBC
    // 0x080006D8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_08000EBC_73958C(rdram, ctx);
        goto after_49;
    // 0x080006D8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_49:
    // 0x080006DC: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x080006E0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x080006E4: lui         $a2, 0x3E00
    ctx->r6 = S32(0X3E00 << 16);
    // 0x080006E8: jal         0x08000EBC
    // 0x080006EC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_08000EBC_73958C(rdram, ctx);
        goto after_50;
    // 0x080006EC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_50:
    // 0x080006F0: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x080006F4: addiu       $t1, $zero, 0x78
    ctx->r9 = ADD32(0, 0X78);
    // 0x080006F8: sw          $t1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r9;
    // 0x080006FC: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x08000700: b           L_0800089C
    // 0x08000704: sw          $t3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r11;
        goto L_0800089C;
    // 0x08000704: sw          $t3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r11;
L_08000708:
    // 0x08000708: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0800070C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x08000710: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000714: addiu       $t4, $v0, -0x1
    ctx->r12 = ADD32(ctx->r2, -0X1);
    // 0x08000718: bne         $v0, $zero, L_0800089C
    if (ctx->r2 != 0) {
        // 0x0800071C: sw          $t4, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r12;
            goto L_0800089C;
    }
    // 0x0800071C: sw          $t4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r12;
    // 0x08000720: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x08000724: addiu       $t9, $t9, -0x5324
    ctx->r25 = ADD32(ctx->r25, -0X5324);
    // 0x08000728: jalr        $t9
    // 0x0800072C: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_51;
    // 0x0800072C: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    after_51:
    // 0x08000730: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x08000734: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000738: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x0800073C: jal         0x08000EBC
    // 0x08000740: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_08000EBC_73958C(rdram, ctx);
        goto after_52;
    // 0x08000740: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_52:
    // 0x08000744: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08000748: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800074C: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08000750: jal         0x08000EBC
    // 0x08000754: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_08000EBC_73958C(rdram, ctx);
        goto after_53;
    // 0x08000754: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_53:
    // 0x08000758: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x0800075C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000760: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08000764: jal         0x08000EBC
    // 0x08000768: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_08000EBC_73958C(rdram, ctx);
        goto after_54;
    // 0x08000768: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_54:
    // 0x0800076C: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    // 0x08000770: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x08000774: b           L_0800089C
    // 0x08000778: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
        goto L_0800089C;
    // 0x08000778: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
L_0800077C:
    // 0x0800077C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000780: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08000784: jalr        $t9
    // 0x08000788: addiu       $a0, $zero, 0x6D
    ctx->r4 = ADD32(0, 0X6D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_55;
    // 0x08000788: addiu       $a0, $zero, 0x6D
    ctx->r4 = ADD32(0, 0X6D);
    after_55:
    // 0x0800078C: jal         0x0800124C
    // 0x08000790: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    func_0800124C_73991C(rdram, ctx);
        goto after_56;
    // 0x08000790: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_56:
    // 0x08000794: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x08000798: addiu       $t7, $zero, 0xF
    ctx->r15 = ADD32(0, 0XF);
    // 0x0800079C: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x080007A0: addiu       $t0, $t8, 0x1
    ctx->r8 = ADD32(ctx->r24, 0X1);
    // 0x080007A4: sw          $t7, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r15;
    // 0x080007A8: b           L_0800089C
    // 0x080007AC: sw          $t0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r8;
        goto L_0800089C;
    // 0x080007AC: sw          $t0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r8;
L_080007B0:
    // 0x080007B0: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x080007B4: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080007B8: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x080007BC: addiu       $t1, $v0, -0x1
    ctx->r9 = ADD32(ctx->r2, -0X1);
    // 0x080007C0: bne         $v0, $zero, L_0800089C
    if (ctx->r2 != 0) {
        // 0x080007C4: sw          $t1, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r9;
            goto L_0800089C;
    }
    // 0x080007C4: sw          $t1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r9;
    // 0x080007C8: jalr        $t9
    // 0x080007CC: addiu       $a0, $zero, 0x107
    ctx->r4 = ADD32(0, 0X107);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_57;
    // 0x080007CC: addiu       $a0, $zero, 0x107
    ctx->r4 = ADD32(0, 0X107);
    after_57:
    // 0x080007D0: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x080007D4: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x080007D8: b           L_0800089C
    // 0x080007DC: sw          $t3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r11;
        goto L_0800089C;
    // 0x080007DC: sw          $t3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r11;
L_080007E0:
    // 0x080007E0: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080007E4: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x080007E8: jalr        $t9
    // 0x080007EC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_58;
    // 0x080007EC: nop

    after_58:
    // 0x080007F0: bne         $v0, $zero, L_0800089C
    if (ctx->r2 != 0) {
        // 0x080007F4: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_0800089C;
    }
    // 0x080007F4: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080007F8: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x080007FC: jalr        $t9
    // 0x08000800: addiu       $a0, $zero, 0x1D1
    ctx->r4 = ADD32(0, 0X1D1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_59;
    // 0x08000800: addiu       $a0, $zero, 0x1D1
    ctx->r4 = ADD32(0, 0X1D1);
    after_59:
    // 0x08000804: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x08000808: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x0800080C: b           L_0800089C
    // 0x08000810: sw          $t5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r13;
        goto L_0800089C;
    // 0x08000810: sw          $t5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r13;
L_08000814:
    // 0x08000814: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000818: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x0800081C: jalr        $t9
    // 0x08000820: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_60;
    // 0x08000820: nop

    after_60:
    // 0x08000824: bnel        $v0, $zero, L_080008A0
    if (ctx->r2 != 0) {
        // 0x08000828: lw          $a0, 0x20($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X20);
            goto L_080008A0;
    }
    goto skip_6;
    // 0x08000828: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    skip_6:
    // 0x0800082C: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x08000830: addiu       $t6, $zero, 0x1E
    ctx->r14 = ADD32(0, 0X1E);
    // 0x08000834: sw          $t6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r14;
    // 0x08000838: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x0800083C: b           L_0800089C
    // 0x08000840: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
        goto L_0800089C;
    // 0x08000840: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
L_08000844:
    // 0x08000844: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x08000848: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800084C: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08000850: addiu       $t0, $v0, -0x1
    ctx->r8 = ADD32(ctx->r2, -0X1);
    // 0x08000854: bne         $v0, $zero, L_0800089C
    if (ctx->r2 != 0) {
        // 0x08000858: sw          $t0, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r8;
            goto L_0800089C;
    }
    // 0x08000858: sw          $t0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r8;
    // 0x0800085C: jalr        $t9
    // 0x08000860: ori         $a0, $zero, 0x8251
    ctx->r4 = 0 | 0X8251;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_61;
    // 0x08000860: ori         $a0, $zero, 0x8251
    ctx->r4 = 0 | 0X8251;
    after_61:
    // 0x08000864: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x08000868: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x0800086C: sw          $t1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r9;
    // 0x08000870: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x08000874: b           L_0800089C
    // 0x08000878: sw          $t3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r11;
        goto L_0800089C;
    // 0x08000878: sw          $t3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r11;
L_0800087C:
    // 0x0800087C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x08000880: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000884: addiu       $t9, $t9, 0x7470
    ctx->r25 = ADD32(ctx->r25, 0X7470);
    // 0x08000888: addiu       $t4, $v0, -0x1
    ctx->r12 = ADD32(ctx->r2, -0X1);
    // 0x0800088C: bne         $v0, $zero, L_0800089C
    if (ctx->r2 != 0) {
        // 0x08000890: sw          $t4, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r12;
            goto L_0800089C;
    }
    // 0x08000890: sw          $t4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r12;
    // 0x08000894: jalr        $t9
    // 0x08000898: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_62;
    // 0x08000898: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_62:
L_0800089C:
    // 0x0800089C: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
L_080008A0:
    // 0x080008A0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080008A4: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x080008A8: beql        $a0, $zero, L_080008BC
    if (ctx->r4 == 0) {
        // 0x080008AC: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_080008BC;
    }
    goto skip_7;
    // 0x080008AC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_7:
    // 0x080008B0: jalr        $t9
    // 0x080008B4: lw          $a1, 0x28($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X28);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_63;
    // 0x080008B4: lw          $a1, 0x28($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X28);
    after_63:
    // 0x080008B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_080008BC:
    // 0x080008BC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x080008C0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x080008C4: jr          $ra
    // 0x080008C8: nop

    TRACE_RETURN()
    return;
    // 0x080008C8: nop

;}
RECOMP_FUNC void func_08000F10_7395E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000F10: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x08000F14: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000F18: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000F1C: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x08000F20: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x08000F24: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x08000F28: lwc1        $f4, 0x68($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X68);
    // 0x08000F2C: addiu       $s0, $a0, 0x5C
    ctx->r16 = ADD32(ctx->r4, 0X5C);
    // 0x08000F30: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x08000F34: c.eq.s      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.fl == ctx->f4.fl;
    // 0x08000F38: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    // 0x08000F3C: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    // 0x08000F40: bc1fl       L_08000F74
    if (!c1cs) {
        // 0x08000F44: lw          $s0, 0x48($sp)
        ctx->r16 = MEM_W(ctx->r29, 0X48);
            goto L_08000F74;
    }
    goto skip_0;
    // 0x08000F44: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    skip_0:
    // 0x08000F48: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x08000F4C: c.eq.s      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.fl == ctx->f6.fl;
    // 0x08000F50: nop

    // 0x08000F54: bc1fl       L_08000F74
    if (!c1cs) {
        // 0x08000F58: lw          $s0, 0x48($sp)
        ctx->r16 = MEM_W(ctx->r29, 0X48);
            goto L_08000F74;
    }
    goto skip_1;
    // 0x08000F58: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    skip_1:
    // 0x08000F5C: lwc1        $f8, 0x14($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X14);
    // 0x08000F60: c.eq.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl == ctx->f8.fl;
    // 0x08000F64: nop

    // 0x08000F68: bc1tl       L_080010B4
    if (c1cs) {
        // 0x08000F6C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_080010B4;
    }
    goto skip_2;
    // 0x08000F6C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x08000F70: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
L_08000F74:
    // 0x08000F74: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000F78: addiu       $t9, $t9, 0x27FC
    ctx->r25 = ADD32(ctx->r25, 0X27FC);
    // 0x08000F7C: addiu       $s0, $s0, 0x5C
    ctx->r16 = ADD32(ctx->r16, 0X5C);
    // 0x08000F80: jalr        $t9
    // 0x08000F84: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000F84: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    after_0:
    // 0x08000F88: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000F8C: addiu       $t9, $t9, 0x285C
    ctx->r25 = ADD32(ctx->r25, 0X285C);
    // 0x08000F90: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x08000F94: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x08000F98: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x08000F9C: jalr        $t9
    // 0x08000FA0: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000FA0: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    after_1:
    // 0x08000FA4: lwc1        $f10, 0xC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC);
    // 0x08000FA8: lwc1        $f18, 0x40($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X40);
    // 0x08000FAC: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x08000FB0: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x08000FB4: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x08000FB8: lwc1        $f18, 0x14($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X14);
    // 0x08000FBC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000FC0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x08000FC4: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x08000FC8: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x08000FCC: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x08000FD0: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x08000FD4: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x08000FD8: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x08000FDC: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x08000FE0: jalr        $t9
    // 0x08000FE4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000FE4: nop

    after_2:
    // 0x08000FE8: lwc1        $f8, 0xC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC);
    // 0x08000FEC: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x08000FF0: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x08000FF4: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x08000FF8: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x08000FFC: lwc1        $f10, 0x14($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X14);
    // 0x08001000: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001004: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08001008: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x0800100C: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x08001010: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x08001014: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x08001018: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x0800101C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x08001020: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x08001024: jalr        $t9
    // 0x08001028: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001028: nop

    after_3:
    // 0x0800102C: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x08001030: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x08001034: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x08001038: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x0800103C: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x08001040: neg.s       $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = -ctx->f10.fl;
    // 0x08001044: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x08001048: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x0800104C: swc1        $f8, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f8.u32l;
    // 0x08001050: swc1        $f18, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f18.u32l;
    // 0x08001054: beq         $v0, $zero, L_080010B0
    if (ctx->r2 == 0) {
        // 0x08001058: swc1        $f6, 0x14($s0)
        MEM_W(0X14, ctx->r16) = ctx->f6.u32l;
            goto L_080010B0;
    }
    // 0x08001058: swc1        $f6, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f6.u32l;
    // 0x0800105C: lw          $t7, 0x1C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X1C);
    // 0x08001060: lwc1        $f2, 0xC($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XC);
    // 0x08001064: lwc1        $f12, 0x10($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X10);
    // 0x08001068: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x0800106C: lwc1        $f14, 0x14($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X14);
    // 0x08001070: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
    // 0x08001074: cvt.s.w     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
    // 0x08001078: sw          $t8, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r24;
    // 0x0800107C: div.s       $f10, $f2, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
    // 0x08001080: div.s       $f4, $f12, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f12.fl, ctx->f0.fl);
    // 0x08001084: sub.s       $f18, $f2, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f2.fl - ctx->f10.fl;
    // 0x08001088: swc1        $f18, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f18.u32l;
    // 0x0800108C: div.s       $f8, $f14, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f14.fl, ctx->f0.fl);
    // 0x08001090: sub.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f4.fl;
    // 0x08001094: swc1        $f6, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f6.u32l;
    // 0x08001098: sub.s       $f10, $f14, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f14.fl - ctx->f8.fl;
    // 0x0800109C: bne         $t8, $zero, L_080010B0
    if (ctx->r24 != 0) {
        // 0x080010A0: swc1        $f10, 0x14($s0)
        MEM_W(0X14, ctx->r16) = ctx->f10.u32l;
            goto L_080010B0;
    }
    // 0x080010A0: swc1        $f10, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f10.u32l;
    // 0x080010A4: swc1        $f16, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f16.u32l;
    // 0x080010A8: swc1        $f16, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f16.u32l;
    // 0x080010AC: swc1        $f16, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f16.u32l;
L_080010B0:
    // 0x080010B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080010B4:
    // 0x080010B4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080010B8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x080010BC: jr          $ra
    // 0x080010C0: nop

    TRACE_RETURN()
    return;
    // 0x080010C0: nop

;}
RECOMP_FUNC void func_08000B04_7391D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000B04: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x08000B08: addiu       $v0, $v0, -0x39F4
    ctx->r2 = ADD32(ctx->r2, -0X39F4);
    // 0x08000B0C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x08000B10: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x08000B14: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08000B18: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x08000B1C: swc1        $f12, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f12.u32l;
    // 0x08000B20: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x08000B24: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x08000B28: addiu       $v1, $v1, -0x39EC
    ctx->r3 = ADD32(ctx->r3, -0X39EC);
    // 0x08000B2C: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x08000B30: lwc1        $f0, 0x8($t7)
    ctx->f0.u32l = MEM_W(ctx->r15, 0X8);
    // 0x08000B34: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x08000B38: addiu       $a0, $a0, -0x39E4
    ctx->r4 = ADD32(ctx->r4, -0X39E4);
    // 0x08000B3C: swc1        $f0, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f0.u32l;
    // 0x08000B40: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x08000B44: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x08000B48: swc1        $f0, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->f0.u32l;
    // 0x08000B4C: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x08000B50: swc1        $f14, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->f14.u32l;
    // 0x08000B54: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x08000B58: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x08000B5C: lwc1        $f0, 0xC($t1)
    ctx->f0.u32l = MEM_W(ctx->r9, 0XC);
    // 0x08000B60: swc1        $f0, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->f0.u32l;
    // 0x08000B64: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x08000B68: swc1        $f0, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->f0.u32l;
    // 0x08000B6C: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x08000B70: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x08000B74: swc1        $f4, 0x10($t4)
    MEM_W(0X10, ctx->r12) = ctx->f4.u32l;
    // 0x08000B78: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x08000B7C: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x08000B80: lwc1        $f0, 0x10($t5)
    ctx->f0.u32l = MEM_W(ctx->r13, 0X10);
    // 0x08000B84: swc1        $f0, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->f0.u32l;
    // 0x08000B88: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x08000B8C: jr          $ra
    // 0x08000B90: swc1        $f0, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->f0.u32l;
    TRACE_RETURN()
    return;
    // 0x08000B90: swc1        $f0, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_08000AEC_7391BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000AEC: lbu         $v0, 0x74($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X74);
    // 0x08000AF0: sltiu       $t6, $v0, 0x1
    ctx->r14 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x08000AF4: jr          $ra
    // 0x08000AF8: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    TRACE_RETURN()
    return;
    // 0x08000AF8: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
;}
