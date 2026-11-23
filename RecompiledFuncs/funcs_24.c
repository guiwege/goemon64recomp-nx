#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_801CB7D4_5876E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CB7D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CB7D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CB7DC: jal         0x801CC30C
    // 0x801CB7E0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801CC30C_58821C(rdram, ctx);
        goto after_0;
    // 0x801CB7E0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801CB7E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CB7E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CB7EC: jr          $ra
    // 0x801CB7F0: nop

    TRACE_RETURN()
    return;
    // 0x801CB7F0: nop

;}
RECOMP_FUNC void func_801E7398_5A32A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E7398: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801E739C: lbu         $t7, 0xD0($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0XD0);
    // 0x801E73A0: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x801E73A4: slt         $at, $t7, $t6
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x801E73A8: beq         $at, $zero, L_801E73B4
    if (ctx->r1 == 0) {
        // 0x801E73AC: nop
    
            goto L_801E73B4;
    }
    // 0x801E73AC: nop

    // 0x801E73B0: sb          $t6, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = ctx->r14;
L_801E73B4:
    // 0x801E73B4: jr          $ra
    // 0x801E73B8: nop

    TRACE_RETURN()
    return;
    // 0x801E73B8: nop

;}
RECOMP_FUNC void func_801DD114_599024(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DD114: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DD118: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DD11C: lbu         $v0, 0x60($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X60);
    // 0x801DD120: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801DD124: beql        $v0, $zero, L_801DD1A8
    if (ctx->r2 == 0) {
        // 0x801DD128: lw          $t0, 0x5C($a0)
        ctx->r8 = MEM_W(ctx->r4, 0X5C);
            goto L_801DD1A8;
    }
    goto skip_0;
    // 0x801DD128: lw          $t0, 0x5C($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X5C);
    skip_0:
    // 0x801DD12C: beq         $v0, $at, L_801DD14C
    if (ctx->r2 == ctx->r1) {
        // 0x801DD130: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_801DD14C;
    }
    // 0x801DD130: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801DD134: beq         $v0, $at, L_801DD1A4
    if (ctx->r2 == ctx->r1) {
        // 0x801DD138: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_801DD1A4;
    }
    // 0x801DD138: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801DD13C: beql        $v0, $at, L_801DD1EC
    if (ctx->r2 == ctx->r1) {
        // 0x801DD140: lw          $v0, 0x5C($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X5C);
            goto L_801DD1EC;
    }
    goto skip_1;
    // 0x801DD140: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
    skip_1:
    // 0x801DD144: b           L_801DD248
    // 0x801DD148: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801DD248;
    // 0x801DD148: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DD14C:
    // 0x801DD14C: jal         0x801E864C
    // 0x801DD150: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801E864C_5A455C(rdram, ctx);
        goto after_0;
    // 0x801DD150: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801DD154: bne         $v0, $zero, L_801DD16C
    if (ctx->r2 != 0) {
        // 0x801DD158: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_801DD16C;
    }
    // 0x801DD158: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801DD15C: jal         0x80038BC8
    // 0x801DD160: addiu       $a0, $zero, 0x3AC
    ctx->r4 = ADD32(0, 0X3AC);
    func_80038BC8_397C8(rdram, ctx);
        goto after_1;
    // 0x801DD160: addiu       $a0, $zero, 0x3AC
    ctx->r4 = ADD32(0, 0X3AC);
    after_1:
    // 0x801DD164: b           L_801DD244
    // 0x801DD168: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801DD244;
    // 0x801DD168: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801DD16C:
    // 0x801DD16C: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801DD170: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x801DD174: lhu         $t7, 0x86($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X86);
    // 0x801DD178: bnel        $t7, $at, L_801DD1A8
    if (ctx->r15 != ctx->r1) {
        // 0x801DD17C: lw          $t0, 0x5C($a0)
        ctx->r8 = MEM_W(ctx->r4, 0X5C);
            goto L_801DD1A8;
    }
    goto skip_2;
    // 0x801DD17C: lw          $t0, 0x5C($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X5C);
    skip_2:
    // 0x801DD180: lbu         $t8, 0xCC($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0XCC);
    // 0x801DD184: addiu       $at, $zero, 0x42
    ctx->r1 = ADD32(0, 0X42);
    // 0x801DD188: bnel        $t8, $at, L_801DD1A8
    if (ctx->r24 != ctx->r1) {
        // 0x801DD18C: lw          $t0, 0x5C($a0)
        ctx->r8 = MEM_W(ctx->r4, 0X5C);
            goto L_801DD1A8;
    }
    goto skip_3;
    // 0x801DD18C: lw          $t0, 0x5C($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X5C);
    skip_3:
    // 0x801DD190: lw          $t9, 0x38($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X38);
    // 0x801DD194: bnel        $t9, $zero, L_801DD1A8
    if (ctx->r25 != 0) {
        // 0x801DD198: lw          $t0, 0x5C($a0)
        ctx->r8 = MEM_W(ctx->r4, 0X5C);
            goto L_801DD1A8;
    }
    goto skip_4;
    // 0x801DD198: lw          $t0, 0x5C($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X5C);
    skip_4:
    // 0x801DD19C: b           L_801DD244
    // 0x801DD1A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801DD244;
    // 0x801DD1A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801DD1A4:
    // 0x801DD1A4: lw          $t0, 0x5C($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X5C);
L_801DD1A8:
    // 0x801DD1A8: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x801DD1AC: lhu         $t1, 0x86($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X86);
    // 0x801DD1B0: bne         $t1, $at, L_801DD1E0
    if (ctx->r9 != ctx->r1) {
        // 0x801DD1B4: nop
    
            goto L_801DD1E0;
    }
    // 0x801DD1B4: nop

    // 0x801DD1B8: lbu         $v0, 0xCC($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XCC);
    // 0x801DD1BC: bltz        $v0, L_801DD1E0
    if (SIGNED(ctx->r2) < 0) {
        // 0x801DD1C0: slti        $at, $v0, 0x4
        ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
            goto L_801DD1E0;
    }
    // 0x801DD1C0: slti        $at, $v0, 0x4
    ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x801DD1C4: beq         $at, $zero, L_801DD1E0
    if (ctx->r1 == 0) {
        // 0x801DD1C8: nop
    
            goto L_801DD1E0;
    }
    // 0x801DD1C8: nop

    // 0x801DD1CC: lw          $t2, 0x38($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X38);
    // 0x801DD1D0: bne         $t2, $zero, L_801DD1E0
    if (ctx->r10 != 0) {
        // 0x801DD1D4: nop
    
            goto L_801DD1E0;
    }
    // 0x801DD1D4: nop

    // 0x801DD1D8: b           L_801DD244
    // 0x801DD1DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801DD244;
    // 0x801DD1DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801DD1E0:
    // 0x801DD1E0: b           L_801DD244
    // 0x801DD1E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801DD244;
    // 0x801DD1E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801DD1E8: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
L_801DD1EC:
    // 0x801DD1EC: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x801DD1F0: lhu         $t3, 0x86($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X86);
    // 0x801DD1F4: beql        $t3, $at, L_801DD208
    if (ctx->r11 == ctx->r1) {
        // 0x801DD1F8: lbu         $t4, 0xCC($a0)
        ctx->r12 = MEM_BU(ctx->r4, 0XCC);
            goto L_801DD208;
    }
    goto skip_5;
    // 0x801DD1F8: lbu         $t4, 0xCC($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0XCC);
    skip_5:
    // 0x801DD1FC: b           L_801DD244
    // 0x801DD200: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801DD244;
    // 0x801DD200: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801DD204: lbu         $t4, 0xCC($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0XCC);
L_801DD208:
    // 0x801DD208: addiu       $at, $zero, 0xAE
    ctx->r1 = ADD32(0, 0XAE);
    // 0x801DD20C: bnel        $t4, $at, L_801DD244
    if (ctx->r12 != ctx->r1) {
        // 0x801DD210: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801DD244;
    }
    goto skip_6;
    // 0x801DD210: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_6:
    // 0x801DD214: lbu         $v1, 0x59($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X59);
    // 0x801DD218: andi        $t5, $v1, 0x80
    ctx->r13 = ctx->r3 & 0X80;
    // 0x801DD21C: bnel        $t5, $zero, L_801DD230
    if (ctx->r13 != 0) {
        // 0x801DD220: lw          $t6, 0x38($a0)
        ctx->r14 = MEM_W(ctx->r4, 0X38);
            goto L_801DD230;
    }
    goto skip_7;
    // 0x801DD220: lw          $t6, 0x38($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X38);
    skip_7:
    // 0x801DD224: bnel        $v1, $zero, L_801DD244
    if (ctx->r3 != 0) {
        // 0x801DD228: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801DD244;
    }
    goto skip_8;
    // 0x801DD228: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_8:
    // 0x801DD22C: lw          $t6, 0x38($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X38);
L_801DD230:
    // 0x801DD230: bnel        $t6, $zero, L_801DD244
    if (ctx->r14 != 0) {
        // 0x801DD234: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801DD244;
    }
    goto skip_9;
    // 0x801DD234: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_9:
    // 0x801DD238: b           L_801DD244
    // 0x801DD23C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801DD244;
    // 0x801DD23C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801DD240: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801DD244:
    // 0x801DD244: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DD248:
    // 0x801DD248: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DD24C: jr          $ra
    // 0x801DD250: nop

    TRACE_RETURN()
    return;
    // 0x801DD250: nop

;}
RECOMP_FUNC void func_801F5EB8_5B1DC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F5EB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F5EBC: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801F5EC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F5EC4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801F5EC8: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801F5ECC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F5ED0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x801F5ED4: jalr        $t9
    // 0x801F5ED8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x801F5ED8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x801F5EDC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801F5EE0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F5EE4: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x801F5EE8: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801F5EEC: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x801F5EF0: lwc1        $f4, 0x28($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X28);
    // 0x801F5EF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801F5EF8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x801F5EFC: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x801F5F00: nop

    // 0x801F5F04: bc1fl       L_801F5F20
    if (!c1cs) {
        // 0x801F5F08: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801F5F20;
    }
    goto skip_0;
    // 0x801F5F08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801F5F0C: lw          $t7, 0x5C($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X5C);
    // 0x801F5F10: sw          $zero, 0x48($a2)
    MEM_W(0X48, ctx->r6) = 0;
    // 0x801F5F14: jal         0x801DACDC
    // 0x801F5F18: sh          $zero, 0x0($t7)
    MEM_H(0X0, ctx->r15) = 0;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_1;
    // 0x801F5F18: sh          $zero, 0x0($t7)
    MEM_H(0X0, ctx->r15) = 0;
    after_1:
    // 0x801F5F1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F5F20:
    // 0x801F5F20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F5F24: jr          $ra
    // 0x801F5F28: nop

    TRACE_RETURN()
    return;
    // 0x801F5F28: nop

;}
RECOMP_FUNC void func_801F6C58_5B2B68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F6C58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F6C5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F6C60: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801F6C64: jal         0x801E7F50
    // 0x801F6C68: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801E7F50_5A3E60(rdram, ctx);
        goto after_0;
    // 0x801F6C68: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F6C6C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801F6C70: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801F6C74: jalr        $t9
    // 0x801F6C78: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x801F6C78: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x801F6C7C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801F6C80: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F6C84: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x801F6C88: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x801F6C8C: lwc1        $f4, 0x28($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X28);
    // 0x801F6C90: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x801F6C94: nop

    // 0x801F6C98: bc1fl       L_801F6CB8
    if (!c1cs) {
        // 0x801F6C9C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801F6CB8;
    }
    goto skip_0;
    // 0x801F6C9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801F6CA0: jal         0x801F70DC
    // 0x801F6CA4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801F70DC_5B2FEC(rdram, ctx);
        goto after_2;
    // 0x801F6CA4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x801F6CA8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801F6CAC: jal         0x801DACDC
    // 0x801F6CB0: addiu       $a1, $zero, 0xB3
    ctx->r5 = ADD32(0, 0XB3);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_3;
    // 0x801F6CB0: addiu       $a1, $zero, 0xB3
    ctx->r5 = ADD32(0, 0XB3);
    after_3:
    // 0x801F6CB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F6CB8:
    // 0x801F6CB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F6CBC: jr          $ra
    // 0x801F6CC0: nop

    TRACE_RETURN()
    return;
    // 0x801F6CC0: nop

;}
RECOMP_FUNC void func_801ED420_5A9330(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801ED420: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801ED424: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x801ED428: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x801ED42C: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x801ED430: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x801ED434: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x801ED438: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x801ED43C: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x801ED440: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x801ED444: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801ED448: lw          $s0, 0x18($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X18);
    // 0x801ED44C: lwc1        $f20, -0x4560($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X4560);
    // 0x801ED450: addiu       $s3, $s3, 0x4CA8
    ctx->r19 = ADD32(ctx->r19, 0X4CA8);
    // 0x801ED454: addiu       $s1, $a0, 0xA0
    ctx->r17 = ADD32(ctx->r4, 0XA0);
    // 0x801ED458: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x801ED45C: addiu       $s4, $zero, 0x4
    ctx->r20 = ADD32(0, 0X4);
L_801ED460:
    // 0x801ED460: lbu         $t6, 0x0($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X0);
    // 0x801ED464: beql        $t6, $zero, L_801ED4D0
    if (ctx->r14 == 0) {
        // 0x801ED468: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_801ED4D0;
    }
    goto skip_0;
    // 0x801ED468: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_0:
    // 0x801ED46C: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801ED470: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801ED474: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x801ED478: add.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f20.fl;
    // 0x801ED47C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801ED480: swc1        $f6, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f6.u32l;
    // 0x801ED484: lwc1        $f0, 0x1C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801ED488: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x801ED48C: jal         0x801EE330
    // 0x801ED490: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    func_801EE330_5AA240(rdram, ctx);
        goto after_0;
    // 0x801ED490: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    after_0:
    // 0x801ED494: addiu       $t7, $zero, 0xF5
    ctx->r15 = ADD32(0, 0XF5);
    // 0x801ED498: addiu       $t8, $zero, 0xD
    ctx->r24 = ADD32(0, 0XD);
    // 0x801ED49C: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x801ED4A0: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x801ED4A4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801ED4A8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801ED4AC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801ED4B0: lbu         $t9, 0x0($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X0);
    // 0x801ED4B4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801ED4B8: addiu       $a1, $s0, 0x80
    ctx->r5 = ADD32(ctx->r16, 0X80);
    // 0x801ED4BC: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x801ED4C0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801ED4C4: jal         0x801DC554
    // 0x801ED4C8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    func_801DC554_598464(rdram, ctx);
        goto after_1;
    // 0x801ED4C8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    after_1:
    // 0x801ED4CC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_801ED4D0:
    // 0x801ED4D0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x801ED4D4: bne         $s2, $s4, L_801ED460
    if (ctx->r18 != ctx->r20) {
        // 0x801ED4D8: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_801ED460;
    }
    // 0x801ED4D8: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x801ED4DC: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x801ED4E0: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x801ED4E4: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x801ED4E8: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x801ED4EC: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x801ED4F0: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x801ED4F4: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x801ED4F8: jr          $ra
    // 0x801ED4FC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x801ED4FC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_801F05F4_5AC504(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F05F4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801F05F8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x801F05FC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F0600: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801F0604: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x801F0608: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x801F060C: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x801F0610: lw          $a0, 0x18($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X18);
    // 0x801F0614: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801F0618: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x801F061C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F0620: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x801F0624: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x801F0628: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x801F062C: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    // 0x801F0630: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x801F0634: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x801F0638: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x801F063C: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x801F0640: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x801F0644: jal         0x801F07F8
    // 0x801F0648: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_801F07F8_5AC708(rdram, ctx);
        goto after_0;
    // 0x801F0648: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_0:
    // 0x801F064C: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x801F0650: addiu       $t9, $zero, 0x2D
    ctx->r25 = ADD32(0, 0X2D);
    // 0x801F0654: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x801F0658: swc1        $f6, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->f6.u32l;
    // 0x801F065C: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801F0660: addiu       $t1, $zero, 0x32
    ctx->r9 = ADD32(0, 0X32);
    // 0x801F0664: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F0668: swc1        $f8, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f8.u32l;
    // 0x801F066C: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x801F0670: sh          $t9, 0x62($s0)
    MEM_H(0X62, ctx->r16) = ctx->r25;
    // 0x801F0674: sh          $t0, 0x68($s0)
    MEM_H(0X68, ctx->r16) = ctx->r8;
    // 0x801F0678: swc1        $f10, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f10.u32l;
    // 0x801F067C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801F0680: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801F0684: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x801F0688: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801F068C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x801F0690: jal         0x801EE228
    // 0x801F0694: addiu       $a3, $zero, 0x1A
    ctx->r7 = ADD32(0, 0X1A);
    func_801EE228_5AA138(rdram, ctx);
        goto after_1;
    // 0x801F0694: addiu       $a3, $zero, 0x1A
    ctx->r7 = ADD32(0, 0X1A);
    after_1:
    // 0x801F0698: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x801F069C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x801F06A0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x801F06A4: jr          $ra
    // 0x801F06A8: nop

    TRACE_RETURN()
    return;
    // 0x801F06A8: nop

;}
RECOMP_FUNC void func_801CBAF8_587A08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CBAF8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801CBAFC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801CBB00: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801CBB04: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801CBB08: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801CBB0C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801CBB10: lbu         $t7, 0x69($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X69);
    // 0x801CBB14: bne         $t7, $zero, L_801CBB24
    if (ctx->r15 != 0) {
        // 0x801CBB18: nop
    
            goto L_801CBB24;
    }
    // 0x801CBB18: nop

    // 0x801CBB1C: jal         0x801DABDC
    // 0x801CBB20: nop

    func_801DABDC_596AEC(rdram, ctx);
        goto after_0;
    // 0x801CBB20: nop

    after_0:
L_801CBB24:
    // 0x801CBB24: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x801CBB28: lbu         $t8, 0x7AE0($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X7AE0);
    // 0x801CBB2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801CBB30: andi        $t9, $t8, 0x3
    ctx->r25 = ctx->r24 & 0X3;
    // 0x801CBB34: bne         $t9, $zero, L_801CBB6C
    if (ctx->r25 != 0) {
        // 0x801CBB38: nop
    
            goto L_801CBB6C;
    }
    // 0x801CBB38: nop

    // 0x801CBB3C: lw          $a1, 0xE4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XE4);
    // 0x801CBB40: jal         0x801CC4C0
    // 0x801CBB44: lw          $a2, 0xE8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XE8);
    func_801CC4C0_5883D0(rdram, ctx);
        goto after_1;
    // 0x801CBB44: lw          $a2, 0xE8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XE8);
    after_1:
    // 0x801CBB48: lhu         $v0, 0xCE($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XCE);
    // 0x801CBB4C: andi        $t0, $v0, 0x8000
    ctx->r8 = ctx->r2 & 0X8000;
    // 0x801CBB50: beq         $t0, $zero, L_801CBB5C
    if (ctx->r8 == 0) {
        // 0x801CBB54: andi        $t1, $v0, 0x3FF
        ctx->r9 = ctx->r2 & 0X3FF;
            goto L_801CBB5C;
    }
    // 0x801CBB54: andi        $t1, $v0, 0x3FF
    ctx->r9 = ctx->r2 & 0X3FF;
    // 0x801CBB58: sh          $t1, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r9;
L_801CBB5C:
    // 0x801CBB5C: jal         0x801CD084
    // 0x801CBB60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801CD084_588F94(rdram, ctx);
        goto after_2;
    // 0x801CBB60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801CBB64: jal         0x801CBBE8
    // 0x801CBB68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801CBBE8_587AF8(rdram, ctx);
        goto after_3;
    // 0x801CBB68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
L_801CBB6C:
    // 0x801CBB6C: jal         0x801D9C54
    // 0x801CBB70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D9C54_595B64(rdram, ctx);
        goto after_4;
    // 0x801CBB70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x801CBB74: lw          $t2, 0x5C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X5C);
    // 0x801CBB78: lhu         $a0, 0x96($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X96);
    // 0x801CBB7C: jal         0x801FB1C0
    // 0x801CBB80: lw          $a1, 0x7C($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X7C);
    func_801FB1C0_5B70D0(rdram, ctx);
        goto after_5;
    // 0x801CBB80: lw          $a1, 0x7C($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X7C);
    after_5:
    // 0x801CBB84: lhu         $t3, 0x94($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X94);
    // 0x801CBB88: lw          $t4, 0x5C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X5C);
    // 0x801CBB8C: sw          $zero, 0x38($s0)
    MEM_W(0X38, ctx->r16) = 0;
    // 0x801CBB90: sw          $zero, 0x34($s0)
    MEM_W(0X34, ctx->r16) = 0;
    // 0x801CBB94: sh          $t3, 0x1A($t4)
    MEM_H(0X1A, ctx->r12) = ctx->r11;
    // 0x801CBB98: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
    // 0x801CBB9C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x801CBBA0: lwc1        $f4, 0x24($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X24);
    // 0x801CBBA4: swc1        $f4, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f4.u32l;
    // 0x801CBBA8: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
    // 0x801CBBAC: lwc1        $f6, 0x20($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X20);
    // 0x801CBBB0: swc1        $f6, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f6.u32l;
    // 0x801CBBB4: lbu         $t5, 0x90($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X90);
    // 0x801CBBB8: lw          $t7, 0x5C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X5C);
    // 0x801CBBBC: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x801CBBC0: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x801CBBC4: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x801CBBC8: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x801CBBCC: lwc1        $f8, 0x7DBC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X7DBC);
    // 0x801CBBD0: swc1        $f8, 0x20($t7)
    MEM_W(0X20, ctx->r15) = ctx->f8.u32l;
    // 0x801CBBD4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801CBBD8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801CBBDC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801CBBE0: jr          $ra
    // 0x801CBBE4: nop

    TRACE_RETURN()
    return;
    // 0x801CBBE4: nop

;}
RECOMP_FUNC void func_801F63E0_5B22F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F63E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F63E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F63E8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F63EC: jal         0x801F64E8
    // 0x801F63F0: addiu       $a1, $zero, 0xA1
    ctx->r5 = ADD32(0, 0XA1);
    func_801F64E8_5B23F8(rdram, ctx);
        goto after_0;
    // 0x801F63F0: addiu       $a1, $zero, 0xA1
    ctx->r5 = ADD32(0, 0XA1);
    after_0:
    // 0x801F63F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F63F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F63FC: jr          $ra
    // 0x801F6400: nop

    TRACE_RETURN()
    return;
    // 0x801F6400: nop

;}
RECOMP_FUNC void func_801EB128_5A7038(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EB128: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801EB12C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801EB130: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801EB134: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x801EB138: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801EB13C: jal         0x801EB180
    // 0x801EB140: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_801EB180_5A7090(rdram, ctx);
        goto after_0;
    // 0x801EB140: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
    // 0x801EB144: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801EB148: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801EB14C: jr          $ra
    // 0x801EB150: nop

    TRACE_RETURN()
    return;
    // 0x801EB150: nop

;}
RECOMP_FUNC void func_801F66EC_5B25FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F66EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F66F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F66F4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F66F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801F66FC: lui         $a2, 0x4110
    ctx->r6 = S32(0X4110 << 16);
    // 0x801F6700: jal         0x801F6770
    // 0x801F6704: addiu       $a3, $zero, 0x1D
    ctx->r7 = ADD32(0, 0X1D);
    func_801F6770_5B2680(rdram, ctx);
        goto after_0;
    // 0x801F6704: addiu       $a3, $zero, 0x1D
    ctx->r7 = ADD32(0, 0X1D);
    after_0:
    // 0x801F6708: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F670C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F6710: jr          $ra
    // 0x801F6714: nop

    TRACE_RETURN()
    return;
    // 0x801F6714: nop

;}
RECOMP_FUNC void func_801F6424_5B2334(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F6424: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801F6428: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801F642C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F6430: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F6434: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801F6438: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x801F643C: lw          $t7, 0x5C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X5C);
    // 0x801F6440: lw          $a0, 0x18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X18);
    // 0x801F6444: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801F6448: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801F644C: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801F6450: sh          $t6, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r14;
    // 0x801F6454: jalr        $t9
    // 0x801F6458: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x801F6458: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    after_0:
    // 0x801F645C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801F6460: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F6464: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x801F6468: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x801F646C: lwc1        $f4, 0x28($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X28);
    // 0x801F6470: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F6474: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x801F6478: nop

    // 0x801F647C: bc1fl       L_801F649C
    if (!c1cs) {
        // 0x801F6480: lbu         $v0, 0x60($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X60);
            goto L_801F649C;
    }
    goto skip_0;
    // 0x801F6480: lbu         $v0, 0x60($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X60);
    skip_0:
    // 0x801F6484: jal         0x801DACDC
    // 0x801F6488: lbu         $a1, 0x2F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2F);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_1;
    // 0x801F6488: lbu         $a1, 0x2F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2F);
    after_1:
    // 0x801F648C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F6490: jal         0x801E8964
    // 0x801F6494: lbu         $a1, 0x33($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X33);
    func_801E8964_5A4874(rdram, ctx);
        goto after_2;
    // 0x801F6494: lbu         $a1, 0x33($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X33);
    after_2:
    // 0x801F6498: lbu         $v0, 0x60($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X60);
L_801F649C:
    // 0x801F649C: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x801F64A0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801F64A4: sll         $t0, $v0, 2
    ctx->r8 = S32(ctx->r2 << 2);
    // 0x801F64A8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x801F64AC: lw          $t1, -0x3954($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X3954);
    // 0x801F64B0: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x801F64B4: subu        $t8, $t8, $v0
    ctx->r24 = SUB32(ctx->r24, ctx->r2);
    // 0x801F64B8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x801F64BC: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x801F64C0: addu        $t3, $t8, $t2
    ctx->r11 = ADD32(ctx->r24, ctx->r10);
    // 0x801F64C4: addu        $a1, $a1, $t3
    ctx->r5 = ADD32(ctx->r5, ctx->r11);
    // 0x801F64C8: lw          $a1, 0x448C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X448C);
    // 0x801F64CC: jal         0x801E8078
    // 0x801F64D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E8078_5A3F88(rdram, ctx);
        goto after_3;
    // 0x801F64D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801F64D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801F64D8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801F64DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801F64E0: jr          $ra
    // 0x801F64E4: nop

    TRACE_RETURN()
    return;
    // 0x801F64E4: nop

;}
RECOMP_FUNC void func_801E150C_59D41C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E150C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801E1510: jr          $ra
    // 0x801E1514: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801E1514: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801E7CC4_5A3BD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E7CC4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801E7CC8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E7CCC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801E7CD0: jal         0x801D9AB0
    // 0x801E7CD4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_801D9AB0_5959C0(rdram, ctx);
        goto after_0;
    // 0x801E7CD4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x801E7CD8: lhu         $t6, 0x98($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X98);
    // 0x801E7CDC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E7CE0: lwc1        $f4, -0x4A20($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4A20);
    // 0x801E7CE4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801E7CE8: andi        $v1, $v0, 0xFFFF
    ctx->r3 = ctx->r2 & 0XFFFF;
    // 0x801E7CEC: swc1        $f4, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->f4.u32l;
    // 0x801E7CF0: bne         $t6, $zero, L_801E7D1C
    if (ctx->r14 != 0) {
        // 0x801E7CF4: swc1        $f6, 0xE8($s0)
        MEM_W(0XE8, ctx->r16) = ctx->f6.u32l;
            goto L_801E7D1C;
    }
    // 0x801E7CF4: swc1        $f6, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->f6.u32l;
    // 0x801E7CF8: jal         0x801E3324
    // 0x801E7CFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E3324_59F234(rdram, ctx);
        goto after_1;
    // 0x801E7CFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801E7D00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E7D04: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x801E7D08: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x801E7D0C: jal         0x801DAC7C
    // 0x801E7D10: lbu         $a3, 0xDB($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XDB);
    func_801DAC7C_596B8C(rdram, ctx);
        goto after_2;
    // 0x801E7D10: lbu         $a3, 0xDB($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XDB);
    after_2:
    // 0x801E7D14: b           L_801E7D68
    // 0x801E7D18: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E7D68;
    // 0x801E7D18: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E7D1C:
    // 0x801E7D1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E7D20: jal         0x801E8390
    // 0x801E7D24: sh          $v1, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r3;
    func_801E8390_5A42A0(rdram, ctx);
        goto after_3;
    // 0x801E7D24: sh          $v1, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r3;
    after_3:
    // 0x801E7D28: bne         $v0, $zero, L_801E7D64
    if (ctx->r2 != 0) {
        // 0x801E7D2C: lhu         $v1, 0x26($sp)
        ctx->r3 = MEM_HU(ctx->r29, 0X26);
            goto L_801E7D64;
    }
    // 0x801E7D2C: lhu         $v1, 0x26($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X26);
    // 0x801E7D30: beq         $v1, $zero, L_801E7D5C
    if (ctx->r3 == 0) {
        // 0x801E7D34: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801E7D5C;
    }
    // 0x801E7D34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E7D38: lw          $t7, 0x5C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X5C);
    // 0x801E7D3C: andi        $t8, $v1, 0xFF
    ctx->r24 = ctx->r3 & 0XFF;
    // 0x801E7D40: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801E7D44: addu        $a1, $a1, $t8
    ctx->r5 = ADD32(ctx->r5, ctx->r24);
    // 0x801E7D48: sh          $zero, 0x30($t7)
    MEM_H(0X30, ctx->r15) = 0;
    // 0x801E7D4C: jal         0x801DACDC
    // 0x801E7D50: lbu         $a1, 0x43AF($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X43AF);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_4;
    // 0x801E7D50: lbu         $a1, 0x43AF($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X43AF);
    after_4:
    // 0x801E7D54: b           L_801E7D68
    // 0x801E7D58: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E7D68;
    // 0x801E7D58: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E7D5C:
    // 0x801E7D5C: jal         0x801E1928
    // 0x801E7D60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E1928_59D838(rdram, ctx);
        goto after_5;
    // 0x801E7D60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
L_801E7D64:
    // 0x801E7D64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E7D68:
    // 0x801E7D68: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801E7D6C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801E7D70: jr          $ra
    // 0x801E7D74: nop

    TRACE_RETURN()
    return;
    // 0x801E7D74: nop

;}
RECOMP_FUNC void func_801F2CB4_5AEBC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F2CB4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801F2CB8: jr          $ra
    // 0x801F2CBC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801F2CBC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801F459C_5B04AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F459C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F45A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F45A4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F45A8: jal         0x801F4E38
    // 0x801F45AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_801F4E38_5B0D48(rdram, ctx);
        goto after_0;
    // 0x801F45AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x801F45B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F45B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F45B8: jr          $ra
    // 0x801F45BC: nop

    TRACE_RETURN()
    return;
    // 0x801F45BC: nop

;}
RECOMP_FUNC void func_801F3494_5AF3A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F3494: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801F3498: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F349C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801F34A0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801F34A4: jal         0x801E8C44
    // 0x801F34A8: lbu         $a1, 0x27($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X27);
    func_801E8C44_5A4B54(rdram, ctx);
        goto after_0;
    // 0x801F34A8: lbu         $a1, 0x27($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X27);
    after_0:
    // 0x801F34AC: bne         $v0, $zero, L_801F3500
    if (ctx->r2 != 0) {
        // 0x801F34B0: lui         $t6, 0x8021
        ctx->r14 = S32(0X8021 << 16);
            goto L_801F3500;
    }
    // 0x801F34B0: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801F34B4: lbu         $t6, -0x3594($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X3594);
    // 0x801F34B8: lbu         $t7, 0x27($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X27);
    // 0x801F34BC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801F34C0: bne         $t6, $zero, L_801F3500
    if (ctx->r14 != 0) {
        // 0x801F34C4: sll         $t8, $t7, 2
        ctx->r24 = S32(ctx->r15 << 2);
            goto L_801F3500;
    }
    // 0x801F34C4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x801F34C8: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801F34CC: addu        $a1, $a1, $t8
    ctx->r5 = ADD32(ctx->r5, ctx->r24);
    // 0x801F34D0: lw          $a1, 0x4868($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4868);
    // 0x801F34D4: jal         0x80034E08
    // 0x801F34D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_1;
    // 0x801F34D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x801F34DC: beq         $v0, $zero, L_801F3500
    if (ctx->r2 == 0) {
        // 0x801F34E0: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_801F3500;
    }
    // 0x801F34E0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801F34E4: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x801F34E8: lbu         $a2, 0x27($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X27);
    // 0x801F34EC: jal         0x801EE4AC
    // 0x801F34F0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_801EE4AC_5AA3BC(rdram, ctx);
        goto after_2;
    // 0x801F34F0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_2:
    // 0x801F34F4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x801F34F8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801F34FC: sh          $t9, 0x68($a0)
    MEM_H(0X68, ctx->r4) = ctx->r25;
L_801F3500:
    // 0x801F3500: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F3504: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801F3508: jr          $ra
    // 0x801F350C: nop

    TRACE_RETURN()
    return;
    // 0x801F350C: nop

;}
RECOMP_FUNC void func_801EB154_5A7064(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EB154: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801EB158: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801EB15C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801EB160: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x801EB164: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801EB168: jal         0x801EB180
    // 0x801EB16C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_801EB180_5A7090(rdram, ctx);
        goto after_0;
    // 0x801EB16C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_0:
    // 0x801EB170: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801EB174: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801EB178: jr          $ra
    // 0x801EB17C: nop

    TRACE_RETURN()
    return;
    // 0x801EB17C: nop

;}
RECOMP_FUNC void func_801E26AC_59E5BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E26AC: lbu         $t6, 0x90($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X90);
    // 0x801E26B0: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
    // 0x801E26B4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x801E26B8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x801E26BC: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x801E26C0: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x801E26C4: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x801E26C8: lwc1        $f2, 0x7DBC($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X7DBC);
    // 0x801E26CC: lbu         $t8, 0x85($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X85);
    // 0x801E26D0: lwc1        $f4, 0x28($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X28);
    // 0x801E26D4: lwc1        $f6, 0x24($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X24);
    // 0x801E26D8: lwc1        $f8, 0x20($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X20);
    // 0x801E26DC: slti        $at, $t8, 0x9
    ctx->r1 = SIGNED(ctx->r24) < 0X9 ? 1 : 0;
    // 0x801E26E0: sub.s       $f0, $f4, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f2.fl;
    // 0x801E26E4: sub.s       $f12, $f6, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f2.fl;
    // 0x801E26E8: beq         $at, $zero, L_801E26F8
    if (ctx->r1 == 0) {
        // 0x801E26EC: sub.s       $f14, $f8, $f2
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f2.fl;
            goto L_801E26F8;
    }
    // 0x801E26EC: sub.s       $f14, $f8, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x801E26F0: jr          $ra
    // 0x801E26F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x801E26F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801E26F8:
    // 0x801E26F8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E26FC: lwc1        $f2, -0x4CBC($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X4CBC);
    // 0x801E2700: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x801E2704: nop

    // 0x801E2708: bc1t        L_801E2730
    if (c1cs) {
        // 0x801E270C: nop
    
            goto L_801E2730;
    }
    // 0x801E270C: nop

    // 0x801E2710: c.le.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl <= ctx->f12.fl;
    // 0x801E2714: nop

    // 0x801E2718: bc1t        L_801E2730
    if (c1cs) {
        // 0x801E271C: nop
    
            goto L_801E2730;
    }
    // 0x801E271C: nop

    // 0x801E2720: c.le.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl <= ctx->f14.fl;
    // 0x801E2724: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801E2728: bc1f        L_801E2738
    if (!c1cs) {
        // 0x801E272C: nop
    
            goto L_801E2738;
    }
    // 0x801E272C: nop

L_801E2730:
    // 0x801E2730: jr          $ra
    // 0x801E2734: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    TRACE_RETURN()
    return;
    // 0x801E2734: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
L_801E2738:
    // 0x801E2738: jr          $ra
    // 0x801E273C: nop

    TRACE_RETURN()
    return;
    // 0x801E273C: nop

;}
RECOMP_FUNC void func_801DDD9C_599CAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DDD9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DDDA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DDDA4: jal         0x801E3400
    // 0x801DDDA8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801E3400_59F310(rdram, ctx);
        goto after_0;
    // 0x801DDDA8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801DDDAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DDDB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DDDB4: jr          $ra
    // 0x801DDDB8: nop

    TRACE_RETURN()
    return;
    // 0x801DDDB8: nop

;}
RECOMP_FUNC void func_801E0664_59C574(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E0664: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E0668: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E066C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E0670: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x801E0674: sw          $zero, -0x383C($at)
    MEM_W(-0X383C, ctx->r1) = 0;
    // 0x801E0678: jal         0x801E708C
    // 0x801E067C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_801E708C_5A2F9C(rdram, ctx);
        goto after_0;
    // 0x801E067C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x801E0680: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E0684: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E0688: jr          $ra
    // 0x801E068C: nop

    TRACE_RETURN()
    return;
    // 0x801E068C: nop

;}
RECOMP_FUNC void func_801F3AD0_5AF9E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F3AD0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801F3AD4: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x801F3AD8: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x801F3ADC: swc1        $f12, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f12.u32l;
    // 0x801F3AE0: swc1        $f14, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f14.u32l;
    // 0x801F3AE4: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x801F3AE8: jr          $ra
    // 0x801F3AEC: swc1        $f4, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x801F3AEC: swc1        $f4, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_801CB824_587734(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CB824: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801CB828: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801CB82C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801CB830: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
    // 0x801CB834: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801CB838: lbu         $t6, 0x69($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X69);
    // 0x801CB83C: bnel        $t6, $zero, L_801CBABC
    if (ctx->r14 != 0) {
        // 0x801CB840: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801CBABC;
    }
    goto skip_0;
    // 0x801CB840: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801CB844: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801CB848: lwc1        $f6, 0x70($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X70);
    // 0x801CB84C: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x801CB850: nop

    // 0x801CB854: bc1f        L_801CB960
    if (!c1cs) {
        // 0x801CB858: nop
    
            goto L_801CB960;
    }
    // 0x801CB858: nop

    // 0x801CB85C: lbu         $t7, 0xDB($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0XDB);
    // 0x801CB860: addiu       $at, $zero, 0x80
    ctx->r1 = ADD32(0, 0X80);
    // 0x801CB864: andi        $t8, $t7, 0x80
    ctx->r24 = ctx->r15 & 0X80;
    // 0x801CB868: beq         $t8, $at, L_801CB960
    if (ctx->r24 == ctx->r1) {
        // 0x801CB86C: nop
    
            goto L_801CB960;
    }
    // 0x801CB86C: nop

    // 0x801CB870: lwc1        $f8, 0xD0($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0XD0);
    // 0x801CB874: lwc1        $f10, 0x1C($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x801CB878: lwc1        $f18, 0x28($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X28);
    // 0x801CB87C: lui         $v0, 0x8002
    ctx->r2 = S32(0X8002 << 16);
    // 0x801CB880: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801CB884: addiu       $v0, $v0, -0x4A54
    ctx->r2 = ADD32(ctx->r2, -0X4A54);
    // 0x801CB888: add.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x801CB88C: swc1        $f4, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f4.u32l;
    // 0x801CB890: lbu         $t9, 0xDB($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0XDB);
    // 0x801CB894: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801CB898: beql        $t9, $zero, L_801CB908
    if (ctx->r25 == 0) {
        // 0x801CB89C: sw          $v0, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r2;
            goto L_801CB908;
    }
    goto skip_1;
    // 0x801CB89C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    skip_1:
    // 0x801CB8A0: lui         $v0, 0x8002
    ctx->r2 = S32(0X8002 << 16);
    // 0x801CB8A4: addiu       $v0, $v0, -0x4A54
    ctx->r2 = ADD32(ctx->r2, -0X4A54);
    // 0x801CB8A8: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x801CB8AC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801CB8B0: jalr        $v0
    // 0x801CB8B4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x801CB8B4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_0:
    // 0x801CB8B8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801CB8BC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801CB8C0: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x801CB8C4: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x801CB8C8: sub.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x801CB8CC: lwc1        $f6, 0x28($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X28);
    // 0x801CB8D0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801CB8D4: c.le.s      $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.fl <= ctx->f6.fl;
    // 0x801CB8D8: nop

    // 0x801CB8DC: bc1f        L_801CB960
    if (!c1cs) {
        // 0x801CB8E0: nop
    
            goto L_801CB960;
    }
    // 0x801CB8E0: nop

    // 0x801CB8E4: jalr        $v0
    // 0x801CB8E8: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x801CB8E8: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_1:
    // 0x801CB8EC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801CB8F0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801CB8F4: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x801CB8F8: sub.s       $f16, $f0, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f18.fl;
    // 0x801CB8FC: b           L_801CB960
    // 0x801CB900: swc1        $f16, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f16.u32l;
        goto L_801CB960;
    // 0x801CB900: swc1        $f16, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f16.u32l;
    // 0x801CB904: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
L_801CB908:
    // 0x801CB908: jalr        $v0
    // 0x801CB90C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x801CB90C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_2:
    // 0x801CB910: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801CB914: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801CB918: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x801CB91C: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x801CB920: sub.s       $f6, $f0, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x801CB924: lwc1        $f4, 0x28($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X28);
    // 0x801CB928: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801CB92C: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x801CB930: nop

    // 0x801CB934: bc1f        L_801CB960
    if (!c1cs) {
        // 0x801CB938: nop
    
            goto L_801CB960;
    }
    // 0x801CB938: nop

    // 0x801CB93C: jalr        $v0
    // 0x801CB940: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x801CB940: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_3:
    // 0x801CB944: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801CB948: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801CB94C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x801CB950: sub.s       $f16, $f0, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f18.fl;
    // 0x801CB954: lwc1        $f10, 0x28($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X28);
    // 0x801CB958: sub.s       $f8, $f10, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x801CB95C: swc1        $f8, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f8.u32l;
L_801CB960:
    // 0x801CB960: jal         0x801DC27C
    // 0x801CB964: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801DC27C_59818C(rdram, ctx);
        goto after_4;
    // 0x801CB964: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x801CB968: lw          $t0, 0x5C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X5C);
    // 0x801CB96C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x801CB970: sb          $v0, 0x68($t0)
    MEM_B(0X68, ctx->r8) = ctx->r2;
    // 0x801CB974: lbu         $v1, 0x7AE0($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X7AE0);
    // 0x801CB978: andi        $t1, $v1, 0x1
    ctx->r9 = ctx->r3 & 0X1;
    // 0x801CB97C: bne         $t1, $zero, L_801CBAB8
    if (ctx->r9 != 0) {
        // 0x801CB980: andi        $t2, $v1, 0x2
        ctx->r10 = ctx->r3 & 0X2;
            goto L_801CBAB8;
    }
    // 0x801CB980: andi        $t2, $v1, 0x2
    ctx->r10 = ctx->r3 & 0X2;
    // 0x801CB984: bnel        $t2, $zero, L_801CBABC
    if (ctx->r10 != 0) {
        // 0x801CB988: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801CBABC;
    }
    goto skip_2;
    // 0x801CB988: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x801CB98C: jal         0x801DCE10
    // 0x801CB990: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801DCE10_598D20(rdram, ctx);
        goto after_5;
    // 0x801CB990: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x801CB994: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x801CB998: bne         $v0, $at, L_801CB9B0
    if (ctx->r2 != ctx->r1) {
        // 0x801CB99C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801CB9B0;
    }
    // 0x801CB99C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801CB9A0: jal         0x801E8D90
    // 0x801CB9A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_801E8D90_5A4CA0(rdram, ctx);
        goto after_6;
    // 0x801CB9A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x801CB9A8: b           L_801CBABC
    // 0x801CB9AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801CBABC;
    // 0x801CB9AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801CB9B0:
    // 0x801CB9B0: lw          $t3, 0x5C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X5C);
    // 0x801CB9B4: lbu         $t4, 0x69($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X69);
    // 0x801CB9B8: bnel        $t4, $zero, L_801CBABC
    if (ctx->r12 != 0) {
        // 0x801CB9BC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801CBABC;
    }
    goto skip_3;
    // 0x801CB9BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_3:
    // 0x801CB9C0: jal         0x801D9CE8
    // 0x801CB9C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D9CE8_595BF8(rdram, ctx);
        goto after_7;
    // 0x801CB9C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x801CB9C8: jal         0x801E78DC
    // 0x801CB9CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E78DC_5A37EC(rdram, ctx);
        goto after_8;
    // 0x801CB9CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x801CB9D0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x801CB9D4: addiu       $v0, $v0, -0x3340
    ctx->r2 = ADD32(ctx->r2, -0X3340);
    // 0x801CB9D8: addiu       $t5, $v0, 0x7FFF
    ctx->r13 = ADD32(ctx->r2, 0X7FFF);
    // 0x801CB9DC: lbu         $t5, 0x2E24($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X2E24);
    // 0x801CB9E0: bne         $t5, $zero, L_801CBA28
    if (ctx->r13 != 0) {
        // 0x801CB9E4: addiu       $t6, $v0, 0x7FFF
        ctx->r14 = ADD32(ctx->r2, 0X7FFF);
            goto L_801CBA28;
    }
    // 0x801CB9E4: addiu       $t6, $v0, 0x7FFF
    ctx->r14 = ADD32(ctx->r2, 0X7FFF);
    // 0x801CB9E8: lbu         $t6, 0x2E23($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X2E23);
    // 0x801CB9EC: addiu       $v1, $v0, 0x7FFF
    ctx->r3 = ADD32(ctx->r2, 0X7FFF);
    // 0x801CB9F0: bne         $t6, $zero, L_801CBA28
    if (ctx->r14 != 0) {
        // 0x801CB9F4: nop
    
            goto L_801CBA28;
    }
    // 0x801CB9F4: nop

    // 0x801CB9F8: lbu         $v1, 0x2E21($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X2E21);
    // 0x801CB9FC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x801CBA00: beq         $v1, $zero, L_801CBA10
    if (ctx->r3 == 0) {
        // 0x801CBA04: nop
    
            goto L_801CBA10;
    }
    // 0x801CBA04: nop

    // 0x801CBA08: bne         $v1, $at, L_801CBA28
    if (ctx->r3 != ctx->r1) {
        // 0x801CBA0C: nop
    
            goto L_801CBA28;
    }
    // 0x801CBA0C: nop

L_801CBA10:
    // 0x801CBA10: jal         0x801D9E9C
    // 0x801CBA14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D9E9C_595DAC(rdram, ctx);
        goto after_9;
    // 0x801CBA14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x801CBA18: beq         $v0, $zero, L_801CBA28
    if (ctx->r2 == 0) {
        // 0x801CBA1C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801CBA28;
    }
    // 0x801CBA1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801CBA20: jal         0x801E8E24
    // 0x801CBA24: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_801E8E24_5A4D34(rdram, ctx);
        goto after_10;
    // 0x801CBA24: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_10:
L_801CBA28:
    // 0x801CBA28: jal         0x801DC120
    // 0x801CBA2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801DC120_598030(rdram, ctx);
        goto after_11;
    // 0x801CBA2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x801CBA30: beq         $v0, $zero, L_801CBA40
    if (ctx->r2 == 0) {
        // 0x801CBA34: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801CBA40;
    }
    // 0x801CBA34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801CBA38: jal         0x801E8E24
    // 0x801CBA3C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_801E8E24_5A4D34(rdram, ctx);
        goto after_12;
    // 0x801CBA3C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_12:
L_801CBA40:
    // 0x801CBA40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801CBA44: jal         0x801E630C
    // 0x801CBA48: addiu       $a1, $zero, 0x322
    ctx->r5 = ADD32(0, 0X322);
    func_801E630C_5A221C(rdram, ctx);
        goto after_13;
    // 0x801CBA48: addiu       $a1, $zero, 0x322
    ctx->r5 = ADD32(0, 0X322);
    after_13:
    // 0x801CBA4C: beq         $v0, $zero, L_801CBA5C
    if (ctx->r2 == 0) {
        // 0x801CBA50: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801CBA5C;
    }
    // 0x801CBA50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801CBA54: jal         0x801E8E24
    // 0x801CBA58: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_801E8E24_5A4D34(rdram, ctx);
        goto after_14;
    // 0x801CBA58: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_14:
L_801CBA5C:
    // 0x801CBA5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801CBA60: jal         0x801E630C
    // 0x801CBA64: addiu       $a1, $zero, 0x33B
    ctx->r5 = ADD32(0, 0X33B);
    func_801E630C_5A221C(rdram, ctx);
        goto after_15;
    // 0x801CBA64: addiu       $a1, $zero, 0x33B
    ctx->r5 = ADD32(0, 0X33B);
    after_15:
    // 0x801CBA68: beq         $v0, $zero, L_801CBA78
    if (ctx->r2 == 0) {
        // 0x801CBA6C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801CBA78;
    }
    // 0x801CBA6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801CBA70: jal         0x801E8E24
    // 0x801CBA74: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_801E8E24_5A4D34(rdram, ctx);
        goto after_16;
    // 0x801CBA74: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_16:
L_801CBA78:
    // 0x801CBA78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801CBA7C: jal         0x801E630C
    // 0x801CBA80: addiu       $a1, $zero, 0x33C
    ctx->r5 = ADD32(0, 0X33C);
    func_801E630C_5A221C(rdram, ctx);
        goto after_17;
    // 0x801CBA80: addiu       $a1, $zero, 0x33C
    ctx->r5 = ADD32(0, 0X33C);
    after_17:
    // 0x801CBA84: beq         $v0, $zero, L_801CBA94
    if (ctx->r2 == 0) {
        // 0x801CBA88: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801CBA94;
    }
    // 0x801CBA88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801CBA8C: jal         0x801E8E24
    // 0x801CBA90: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_801E8E24_5A4D34(rdram, ctx);
        goto after_18;
    // 0x801CBA90: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_18:
L_801CBA94:
    // 0x801CBA94: jal         0x801E73BC
    // 0x801CBA98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E73BC_5A32CC(rdram, ctx);
        goto after_19;
    // 0x801CBA98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x801CBA9C: beq         $v0, $zero, L_801CBAAC
    if (ctx->r2 == 0) {
        // 0x801CBAA0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801CBAAC;
    }
    // 0x801CBAA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801CBAA4: jal         0x801E8E24
    // 0x801CBAA8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_801E8E24_5A4D34(rdram, ctx);
        goto after_20;
    // 0x801CBAA8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_20:
L_801CBAAC:
    // 0x801CBAAC: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x801CBAB0: lw          $t7, -0x39E4($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X39E4);
    // 0x801CBAB4: sb          $zero, 0x64($t7)
    MEM_B(0X64, ctx->r15) = 0;
L_801CBAB8:
    // 0x801CBAB8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801CBABC:
    // 0x801CBABC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801CBAC0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801CBAC4: jr          $ra
    // 0x801CBAC8: nop

    TRACE_RETURN()
    return;
    // 0x801CBAC8: nop

;}
RECOMP_FUNC void func_801F58F8_5B1808(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F58F8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801F58FC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F5900: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801F5904: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801F5908: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x801F590C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801F5910: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801F5914: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x801F5918: addiu       $a2, $zero, 0x62
    ctx->r6 = ADD32(0, 0X62);
    // 0x801F591C: jal         0x801F5B04
    // 0x801F5920: addiu       $a3, $zero, 0x64
    ctx->r7 = ADD32(0, 0X64);
    func_801F5B04_5B1A14(rdram, ctx);
        goto after_0;
    // 0x801F5920: addiu       $a3, $zero, 0x64
    ctx->r7 = ADD32(0, 0X64);
    after_0:
    // 0x801F5924: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801F5928: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801F592C: jr          $ra
    // 0x801F5930: nop

    TRACE_RETURN()
    return;
    // 0x801F5930: nop

;}
RECOMP_FUNC void func_801F5024_5B0F34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F5024: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F5028: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F502C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F5030: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x801F5034: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801F5038: jal         0x801F50A4
    // 0x801F503C: lui         $a3, 0x4090
    ctx->r7 = S32(0X4090 << 16);
    func_801F50A4_5B0FB4(rdram, ctx);
        goto after_0;
    // 0x801F503C: lui         $a3, 0x4090
    ctx->r7 = S32(0X4090 << 16);
    after_0:
    // 0x801F5040: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F5044: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F5048: jr          $ra
    // 0x801F504C: nop

    TRACE_RETURN()
    return;
    // 0x801F504C: nop

;}
RECOMP_FUNC void func_801EDCE0_5A9BF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EDCE0: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x801EDCE4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801EDCE8: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x801EDCEC: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x801EDCF0: lw          $v1, 0x5C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X5C);
    // 0x801EDCF4: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x801EDCF8: addiu       $t8, $t8, 0x4D50
    ctx->r24 = ADD32(ctx->r24, 0X4D50);
    // 0x801EDCFC: lw          $t6, 0x18($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X18);
    // 0x801EDD00: addiu       $t7, $sp, 0x4C
    ctx->r15 = ADD32(ctx->r29, 0X4C);
    // 0x801EDD04: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801EDD08: sw          $t6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r14;
    // 0x801EDD0C: lw          $t1, 0x4($t8)
    ctx->r9 = MEM_W(ctx->r24, 0X4);
    // 0x801EDD10: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x801EDD14: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801EDD18: sw          $t1, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r9;
    // 0x801EDD1C: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x801EDD20: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x801EDD24: lw          $t1, 0xC($t8)
    ctx->r9 = MEM_W(ctx->r24, 0XC);
    // 0x801EDD28: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x801EDD2C: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    // 0x801EDD30: sw          $t1, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->r9;
    // 0x801EDD34: lw          $t1, 0x14($t8)
    ctx->r9 = MEM_W(ctx->r24, 0X14);
    // 0x801EDD38: lw          $at, 0x10($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X10);
    // 0x801EDD3C: sw          $t1, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->r9;
    // 0x801EDD40: sw          $at, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->r1;
    // 0x801EDD44: lbu         $v0, 0x60($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X60);
    // 0x801EDD48: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801EDD4C: beq         $v0, $zero, L_801EDD6C
    if (ctx->r2 == 0) {
        // 0x801EDD50: nop
    
            goto L_801EDD6C;
    }
    // 0x801EDD50: nop

    // 0x801EDD54: beq         $v0, $at, L_801EDD74
    if (ctx->r2 == ctx->r1) {
        // 0x801EDD58: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_801EDD74;
    }
    // 0x801EDD58: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801EDD5C: beql        $v0, $at, L_801EDEF8
    if (ctx->r2 == ctx->r1) {
        // 0x801EDD60: lui         $at, 0xC000
        ctx->r1 = S32(0XC000 << 16);
            goto L_801EDEF8;
    }
    goto skip_0;
    // 0x801EDD60: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    skip_0:
    // 0x801EDD64: b           L_801EDF1C
    // 0x801EDD68: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_801EDF1C;
    // 0x801EDD68: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_801EDD6C:
    // 0x801EDD6C: b           L_801EDF18
    // 0x801EDD70: sb          $t2, 0x60($s1)
    MEM_B(0X60, ctx->r17) = ctx->r10;
        goto L_801EDF18;
    // 0x801EDD70: sb          $t2, 0x60($s1)
    MEM_B(0X60, ctx->r17) = ctx->r10;
L_801EDD74:
    // 0x801EDD74: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EDD78: lwc1        $f4, -0x455C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X455C);
    // 0x801EDD7C: lwc1        $f6, 0xA4($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0XA4);
    // 0x801EDD80: lui         $at, 0xBF00
    ctx->r1 = S32(0XBF00 << 16);
    // 0x801EDD84: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801EDD88: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801EDD8C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801EDD90: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x801EDD94: swc1        $f16, 0x70($s1)
    MEM_W(0X70, ctx->r17) = ctx->f16.u32l;
    // 0x801EDD98: jal         0x801EDF2C
    // 0x801EDD9C: sw          $v1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r3;
    func_801EDF2C_5A9E3C(rdram, ctx);
        goto after_0;
    // 0x801EDD9C: sw          $v1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r3;
    after_0:
    // 0x801EDDA0: lw          $v1, 0x74($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X74);
    // 0x801EDDA4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801EDDA8: lwc1        $f18, 0xA4($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XA4);
    // 0x801EDDAC: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x801EDDB0: nop

    // 0x801EDDB4: bc1tl       L_801EDDD4
    if (c1cs) {
        // 0x801EDDB8: lw          $t4, 0x5C($v1)
        ctx->r12 = MEM_W(ctx->r3, 0X5C);
            goto L_801EDDD4;
    }
    goto skip_1;
    // 0x801EDDB8: lw          $t4, 0x5C($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X5C);
    skip_1:
    // 0x801EDDBC: lbu         $t3, 0xCC($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0XCC);
    // 0x801EDDC0: addiu       $at, $zero, 0x9B
    ctx->r1 = ADD32(0, 0X9B);
    // 0x801EDDC4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801EDDC8: beq         $t3, $at, L_801EDDEC
    if (ctx->r11 == ctx->r1) {
        // 0x801EDDCC: addiu       $a0, $zero, 0x7
        ctx->r4 = ADD32(0, 0X7);
            goto L_801EDDEC;
    }
    // 0x801EDDCC: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x801EDDD0: lw          $t4, 0x5C($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X5C);
L_801EDDD4:
    // 0x801EDDD4: ori         $a0, $zero, 0x814F
    ctx->r4 = 0 | 0X814F;
    // 0x801EDDD8: jal         0x80038BC8
    // 0x801EDDDC: sh          $zero, 0x86($t4)
    MEM_H(0X86, ctx->r12) = 0;
    func_80038BC8_397C8(rdram, ctx);
        goto after_1;
    // 0x801EDDDC: sh          $zero, 0x86($t4)
    MEM_H(0X86, ctx->r12) = 0;
    after_1:
    // 0x801EDDE0: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x801EDDE4: b           L_801EDF18
    // 0x801EDDE8: sb          $t5, 0x60($s1)
    MEM_B(0X60, ctx->r17) = ctx->r13;
        goto L_801EDF18;
    // 0x801EDDE8: sb          $t5, 0x60($s1)
    MEM_B(0X60, ctx->r17) = ctx->r13;
L_801EDDEC:
    // 0x801EDDEC: addiu       $v1, $s1, 0x9C
    ctx->r3 = ADD32(ctx->r17, 0X9C);
L_801EDDF0:
    // 0x801EDDF0: lbu         $t6, 0x0($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X0);
    // 0x801EDDF4: blez        $t6, L_801EDE0C
    if (SIGNED(ctx->r14) <= 0) {
        // 0x801EDDF8: nop
    
            goto L_801EDE0C;
    }
    // 0x801EDDF8: nop

    // 0x801EDDFC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x801EDE00: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x801EDE04: bne         $v0, $a0, L_801EDDF0
    if (ctx->r2 != ctx->r4) {
        // 0x801EDE08: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_801EDDF0;
    }
    // 0x801EDE08: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_801EDE0C:
    // 0x801EDE0C: beql        $s0, $zero, L_801EDF1C
    if (ctx->r16 == 0) {
        // 0x801EDE10: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_801EDF1C;
    }
    goto skip_2;
    // 0x801EDE10: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_2:
    // 0x801EDE14: lhu         $t0, 0x62($s1)
    ctx->r8 = MEM_HU(ctx->r17, 0X62);
    // 0x801EDE18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EDE1C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801EDE20: addiu       $t9, $t0, 0x1
    ctx->r25 = ADD32(ctx->r8, 0X1);
    // 0x801EDE24: andi        $t7, $t9, 0xFFFF
    ctx->r15 = ctx->r25 & 0XFFFF;
    // 0x801EDE28: slti        $at, $t7, 0x2
    ctx->r1 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
    // 0x801EDE2C: bne         $at, $zero, L_801EDF18
    if (ctx->r1 != 0) {
        // 0x801EDE30: sh          $t9, 0x62($s1)
        MEM_H(0X62, ctx->r17) = ctx->r25;
            goto L_801EDF18;
    }
    // 0x801EDE30: sh          $t9, 0x62($s1)
    MEM_H(0X62, ctx->r17) = ctx->r25;
    // 0x801EDE34: sh          $zero, 0x62($s1)
    MEM_H(0X62, ctx->r17) = 0;
    // 0x801EDE38: addiu       $a3, $s0, 0x80
    ctx->r7 = ADD32(ctx->r16, 0X80);
    // 0x801EDE3C: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x801EDE40: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    // 0x801EDE44: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x801EDE48: addiu       $a1, $a1, 0x4BF8
    ctx->r5 = ADD32(ctx->r5, 0X4BF8);
    // 0x801EDE4C: jal         0x801EE750
    // 0x801EDE50: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_801EE750_5AA660(rdram, ctx);
        goto after_2;
    // 0x801EDE50: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_2:
    // 0x801EDE54: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
    // 0x801EDE58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EDE5C: sll         $t8, $v0, 3
    ctx->r24 = S32(ctx->r2 << 3);
    // 0x801EDE60: addu        $a1, $s1, $t8
    ctx->r5 = ADD32(ctx->r17, ctx->r24);
    // 0x801EDE64: jal         0x801EE05C
    // 0x801EDE68: addiu       $a1, $a1, 0xA4
    ctx->r5 = ADD32(ctx->r5, 0XA4);
    func_801EE05C_5A9F6C(rdram, ctx);
        goto after_3;
    // 0x801EDE68: addiu       $a1, $a1, 0xA4
    ctx->r5 = ADD32(ctx->r5, 0XA4);
    after_3:
    // 0x801EDE6C: lbu         $t1, 0x61($s1)
    ctx->r9 = MEM_BU(ctx->r17, 0X61);
    // 0x801EDE70: addiu       $t3, $sp, 0x4C
    ctx->r11 = ADD32(ctx->r29, 0X4C);
    // 0x801EDE74: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x801EDE78: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x801EDE7C: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x801EDE80: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x801EDE84: addu        $v0, $t2, $t3
    ctx->r2 = ADD32(ctx->r10, ctx->r11);
    // 0x801EDE88: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801EDE8C: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x801EDE90: lw          $a3, 0x4($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X4);
    // 0x801EDE94: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x801EDE98: jal         0x801EE530
    // 0x801EDE9C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_801EE530_5AA440(rdram, ctx);
        goto after_4;
    // 0x801EDE9C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x801EDEA0: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x801EDEA4: addiu       $t4, $zero, 0xE8
    ctx->r12 = ADD32(0, 0XE8);
    // 0x801EDEA8: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x801EDEAC: sb          $t4, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r12;
    // 0x801EDEB0: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x801EDEB4: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x801EDEB8: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x801EDEBC: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x801EDEC0: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x801EDEC4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801EDEC8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801EDECC: lbu         $t9, 0x0($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X0);
    // 0x801EDED0: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801EDED4: addiu       $a2, $a2, 0x49C0
    ctx->r6 = ADD32(ctx->r6, 0X49C0);
    // 0x801EDED8: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x801EDEDC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801EDEE0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801EDEE4: jal         0x801DC554
    // 0x801EDEE8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    func_801DC554_598464(rdram, ctx);
        goto after_5;
    // 0x801EDEE8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    after_5:
    // 0x801EDEEC: b           L_801EDF1C
    // 0x801EDEF0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_801EDF1C;
    // 0x801EDEF0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x801EDEF4: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
L_801EDEF8:
    // 0x801EDEF8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801EDEFC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801EDF00: jal         0x801EDF2C
    // 0x801EDF04: swc1        $f8, 0x70($s1)
    MEM_W(0X70, ctx->r17) = ctx->f8.u32l;
    func_801EDF2C_5A9E3C(rdram, ctx);
        goto after_6;
    // 0x801EDF04: swc1        $f8, 0x70($s1)
    MEM_W(0X70, ctx->r17) = ctx->f8.u32l;
    after_6:
    // 0x801EDF08: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x801EDF0C: bne         $v0, $a0, L_801EDF18
    if (ctx->r2 != ctx->r4) {
        // 0x801EDF10: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_801EDF18;
    }
    // 0x801EDF10: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801EDF14: sb          $t7, 0x65($s1)
    MEM_B(0X65, ctx->r17) = ctx->r15;
L_801EDF18:
    // 0x801EDF18: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_801EDF1C:
    // 0x801EDF1C: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x801EDF20: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x801EDF24: jr          $ra
    // 0x801EDF28: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    TRACE_RETURN()
    return;
    // 0x801EDF28: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_801F5624_5B1534(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F5624: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801F5628: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F562C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801F5630: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801F5634: lbu         $t6, 0x30($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X30);
    // 0x801F5638: lw          $a0, 0x18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X18);
    // 0x801F563C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801F5640: andi        $t7, $t6, 0xFFFE
    ctx->r15 = ctx->r14 & 0XFFFE;
    // 0x801F5644: sb          $t7, 0x30($a2)
    MEM_B(0X30, ctx->r6) = ctx->r15;
    // 0x801F5648: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801F564C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x801F5650: jalr        $t9
    // 0x801F5654: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x801F5654: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x801F5658: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801F565C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F5660: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x801F5664: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x801F5668: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x801F566C: lwc1        $f4, 0x28($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X28);
    // 0x801F5670: addiu       $t2, $zero, 0x14
    ctx->r10 = ADD32(0, 0X14);
    // 0x801F5674: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x801F5678: nop

    // 0x801F567C: bc1fl       L_801F56AC
    if (!c1cs) {
        // 0x801F5680: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801F56AC;
    }
    goto skip_0;
    // 0x801F5680: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801F5684: lbu         $t8, 0x30($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0X30);
    // 0x801F5688: lw          $t1, 0x5C($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X5C);
    // 0x801F568C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x801F5690: ori         $t0, $t8, 0x1
    ctx->r8 = ctx->r24 | 0X1;
    // 0x801F5694: sb          $t0, 0x30($a2)
    MEM_B(0X30, ctx->r6) = ctx->r8;
    // 0x801F5698: sh          $zero, 0x0($t1)
    MEM_H(0X0, ctx->r9) = 0;
    // 0x801F569C: sb          $t2, 0x4C($a2)
    MEM_B(0X4C, ctx->r6) = ctx->r10;
    // 0x801F56A0: jal         0x801DACDC
    // 0x801F56A4: lbu         $a1, 0x27($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X27);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_1;
    // 0x801F56A4: lbu         $a1, 0x27($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X27);
    after_1:
    // 0x801F56A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F56AC:
    // 0x801F56AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801F56B0: jr          $ra
    // 0x801F56B4: nop

    TRACE_RETURN()
    return;
    // 0x801F56B4: nop

;}
RECOMP_FUNC void func_801F61A0_5B20B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F61A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F61A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F61A8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F61AC: lbu         $t6, 0x30($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X30);
    // 0x801F61B0: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801F61B4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801F61B8: andi        $t7, $t6, 0xFFFE
    ctx->r15 = ctx->r14 & 0XFFFE;
    // 0x801F61BC: sb          $t7, 0x30($a0)
    MEM_B(0X30, ctx->r4) = ctx->r15;
    // 0x801F61C0: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801F61C4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x801F61C8: jalr        $t9
    // 0x801F61CC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x801F61CC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_0:
    // 0x801F61D0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801F61D4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F61D8: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x801F61DC: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801F61E0: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x801F61E4: lwc1        $f4, 0x28($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X28);
    // 0x801F61E8: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x801F61EC: nop

    // 0x801F61F0: bc1fl       L_801F62A8
    if (!c1cs) {
        // 0x801F61F4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801F62A8;
    }
    goto skip_0;
    // 0x801F61F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801F61F8: lw          $v0, 0x5C($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X5C);
    // 0x801F61FC: lhu         $v1, 0x30($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X30);
    // 0x801F6200: sltiu       $a0, $v1, 0x1
    ctx->r4 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x801F6204: addiu       $t0, $v1, 0x1
    ctx->r8 = ADD32(ctx->r3, 0X1);
    // 0x801F6208: beq         $a0, $zero, L_801F6228
    if (ctx->r4 == 0) {
        // 0x801F620C: sh          $t0, 0x30($v0)
        MEM_H(0X30, ctx->r2) = ctx->r8;
            goto L_801F6228;
    }
    // 0x801F620C: sh          $t0, 0x30($v0)
    MEM_H(0X30, ctx->r2) = ctx->r8;
    // 0x801F6210: jal         0x80038BC8
    // 0x801F6214: addiu       $a0, $zero, 0x170
    ctx->r4 = ADD32(0, 0X170);
    func_80038BC8_397C8(rdram, ctx);
        goto after_1;
    // 0x801F6214: addiu       $a0, $zero, 0x170
    ctx->r4 = ADD32(0, 0X170);
    after_1:
    // 0x801F6218: jal         0x80038BC8
    // 0x801F621C: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    func_80038BC8_397C8(rdram, ctx);
        goto after_2;
    // 0x801F621C: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    after_2:
    // 0x801F6220: b           L_801F62A8
    // 0x801F6224: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F62A8;
    // 0x801F6224: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F6228:
    // 0x801F6228: lw          $t1, 0x5C($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X5C);
    // 0x801F622C: lhu         $v0, 0x30($t1)
    ctx->r2 = MEM_HU(ctx->r9, 0X30);
    // 0x801F6230: slti        $at, $v0, 0x97
    ctx->r1 = SIGNED(ctx->r2) < 0X97 ? 1 : 0;
    // 0x801F6234: beql        $at, $zero, L_801F628C
    if (ctx->r1 == 0) {
        // 0x801F6238: slti        $at, $v0, 0x96
        ctx->r1 = SIGNED(ctx->r2) < 0X96 ? 1 : 0;
            goto L_801F628C;
    }
    goto skip_1;
    // 0x801F6238: slti        $at, $v0, 0x96
    ctx->r1 = SIGNED(ctx->r2) < 0X96 ? 1 : 0;
    skip_1:
    // 0x801F623C: lbu         $t2, 0x90($a2)
    ctx->r10 = MEM_BU(ctx->r6, 0X90);
    // 0x801F6240: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x801F6244: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x801F6248: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x801F624C: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x801F6250: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x801F6254: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x801F6258: lhu         $t4, 0x7DB4($t4)
    ctx->r12 = MEM_HU(ctx->r12, 0X7DB4);
    // 0x801F625C: andi        $t5, $t4, 0x4000
    ctx->r13 = ctx->r12 & 0X4000;
    // 0x801F6260: beql        $t5, $zero, L_801F628C
    if (ctx->r13 == 0) {
        // 0x801F6264: slti        $at, $v0, 0x96
        ctx->r1 = SIGNED(ctx->r2) < 0X96 ? 1 : 0;
            goto L_801F628C;
    }
    goto skip_2;
    // 0x801F6264: slti        $at, $v0, 0x96
    ctx->r1 = SIGNED(ctx->r2) < 0X96 ? 1 : 0;
    skip_2:
    // 0x801F6268: jal         0x801DACDC
    // 0x801F626C: addiu       $a1, $zero, 0xA3
    ctx->r5 = ADD32(0, 0XA3);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_3;
    // 0x801F626C: addiu       $a1, $zero, 0xA3
    ctx->r5 = ADD32(0, 0XA3);
    after_3:
    // 0x801F6270: jal         0x80038BC8
    // 0x801F6274: ori         $a0, $zero, 0x8170
    ctx->r4 = 0 | 0X8170;
    func_80038BC8_397C8(rdram, ctx);
        goto after_4;
    // 0x801F6274: ori         $a0, $zero, 0x8170
    ctx->r4 = 0 | 0X8170;
    after_4:
    // 0x801F6278: jal         0x80038BC8
    // 0x801F627C: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    func_80038BC8_397C8(rdram, ctx);
        goto after_5;
    // 0x801F627C: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    after_5:
    // 0x801F6280: b           L_801F62A8
    // 0x801F6284: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F62A8;
    // 0x801F6284: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F6288: slti        $at, $v0, 0x96
    ctx->r1 = SIGNED(ctx->r2) < 0X96 ? 1 : 0;
L_801F628C:
    // 0x801F628C: bne         $at, $zero, L_801F62A4
    if (ctx->r1 != 0) {
        // 0x801F6290: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_801F62A4;
    }
    // 0x801F6290: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x801F6294: jal         0x801DACDC
    // 0x801F6298: addiu       $a1, $zero, 0xA3
    ctx->r5 = ADD32(0, 0XA3);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_6;
    // 0x801F6298: addiu       $a1, $zero, 0xA3
    ctx->r5 = ADD32(0, 0XA3);
    after_6:
    // 0x801F629C: jal         0x80037284
    // 0x801F62A0: nop

    func_80037284_37E84(rdram, ctx);
        goto after_7;
    // 0x801F62A0: nop

    after_7:
L_801F62A4:
    // 0x801F62A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F62A8:
    // 0x801F62A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F62AC: jr          $ra
    // 0x801F62B0: nop

    TRACE_RETURN()
    return;
    // 0x801F62B0: nop

;}
RECOMP_FUNC void func_801E1458_59D368(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E1458: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E145C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E1460: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E1464: jal         0x801DD720
    // 0x801E1468: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_801DD720_599630(rdram, ctx);
        goto after_0;
    // 0x801E1468: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x801E146C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E1470: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E1474: jr          $ra
    // 0x801E1478: nop

    TRACE_RETURN()
    return;
    // 0x801E1478: nop

;}
RECOMP_FUNC void func_801DBA00_597910(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DBA00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DBA04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DBA08: lwc1        $f12, 0x0($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X0);
    // 0x801DBA0C: lwc1        $f2, 0x4($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X4);
    // 0x801DBA10: lwc1        $f14, 0x8($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X8);
    // 0x801DBA14: mul.s       $f4, $f12, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x801DBA18: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x801DBA1C: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x801DBA20: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801DBA24: mul.s       $f10, $f14, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x801DBA28: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801DBA2C: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x801DBA30: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801DBA34: div.s       $f0, $f2, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = DIV_S(ctx->f2.fl, ctx->f16.fl);
    // 0x801DBA38: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x801DBA3C: mul.s       $f18, $f12, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x801DBA40: swc1        $f18, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f18.u32l;
    // 0x801DBA44: lwc1        $f4, 0x4($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X4);
    // 0x801DBA48: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x801DBA4C: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x801DBA50: add.d       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = ctx->f10.d + ctx->f8.d;
    // 0x801DBA54: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801DBA58: swc1        $f18, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f18.u32l;
    // 0x801DBA5C: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x801DBA60: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801DBA64: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x801DBA68: jal         0x8001D394
    // 0x801DBA6C: swc1        $f6, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f6.u32l;
    func_8001D394_1DF94(rdram, ctx);
        goto after_0;
    // 0x801DBA6C: swc1        $f6, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f6.u32l;
    after_0:
    // 0x801DBA70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DBA74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DBA78: jr          $ra
    // 0x801DBA7C: nop

    TRACE_RETURN()
    return;
    // 0x801DBA7C: nop

;}
RECOMP_FUNC void func_801E2180_59E090(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E2180: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801E2184: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E2188: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801E218C: jal         0x801E7DE8
    // 0x801E2190: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_801E7DE8_5A3CF8(rdram, ctx);
        goto after_0;
    // 0x801E2190: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x801E2194: beq         $v0, $zero, L_801E21A8
    if (ctx->r2 == 0) {
        // 0x801E2198: lui         $at, 0x8021
        ctx->r1 = S32(0X8021 << 16);
            goto L_801E21A8;
    }
    // 0x801E2198: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E219C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E21A0: b           L_801E21AC
    // 0x801E21A4: lwc1        $f2, -0x4CF4($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X4CF4);
        goto L_801E21AC;
    // 0x801E21A4: lwc1        $f2, -0x4CF4($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X4CF4);
L_801E21A8:
    // 0x801E21A8: lwc1        $f2, -0x4CF0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X4CF0);
L_801E21AC:
    // 0x801E21AC: sqrt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = sqrtf(ctx->f2.fl);
    // 0x801E21B0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E21B4: lwc1        $f4, -0x4CEC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4CEC);
    // 0x801E21B8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801E21BC: lw          $t6, 0x5C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X5C);
    // 0x801E21C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E21C4: swc1        $f8, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->f8.u32l;
    // 0x801E21C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801E21CC: add.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x801E21D0: swc1        $f6, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->f6.u32l;
    // 0x801E21D4: sh          $zero, 0x30($t6)
    MEM_H(0X30, ctx->r14) = 0;
    // 0x801E21D8: lw          $t7, 0x5C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X5C);
    // 0x801E21DC: jal         0x801DD830
    // 0x801E21E0: sb          $zero, 0x2E($t7)
    MEM_B(0X2E, ctx->r15) = 0;
    func_801DD830_599740(rdram, ctx);
        goto after_1;
    // 0x801E21E0: sb          $zero, 0x2E($t7)
    MEM_B(0X2E, ctx->r15) = 0;
    after_1:
    // 0x801E21E4: jal         0x801E7DE8
    // 0x801E21E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E7DE8_5A3CF8(rdram, ctx);
        goto after_2;
    // 0x801E21E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801E21EC: beq         $v0, $zero, L_801E2204
    if (ctx->r2 == 0) {
        // 0x801E21F0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801E2204;
    }
    // 0x801E21F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E21F4: jal         0x80038BC8
    // 0x801E21F8: addiu       $a0, $zero, 0x2B5
    ctx->r4 = ADD32(0, 0X2B5);
    func_80038BC8_397C8(rdram, ctx);
        goto after_3;
    // 0x801E21F8: addiu       $a0, $zero, 0x2B5
    ctx->r4 = ADD32(0, 0X2B5);
    after_3:
    // 0x801E21FC: b           L_801E2210
    // 0x801E2200: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E2210;
    // 0x801E2200: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E2204:
    // 0x801E2204: jal         0x801DD6E0
    // 0x801E2208: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    func_801DD6E0_5995F0(rdram, ctx);
        goto after_4;
    // 0x801E2208: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    after_4:
    // 0x801E220C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E2210:
    // 0x801E2210: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801E2214: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801E2218: jr          $ra
    // 0x801E221C: nop

    TRACE_RETURN()
    return;
    // 0x801E221C: nop

;}
RECOMP_FUNC void func_801F3B30_5AFA40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F3B30: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801F3B34: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x801F3B38: lw          $t6, -0x39FC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39FC);
    // 0x801F3B3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F3B40: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801F3B44: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801F3B48: lw          $t7, 0x5C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X5C);
    // 0x801F3B4C: lbu         $t9, 0x27($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X27);
    // 0x801F3B50: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801F3B54: lw          $t8, 0xB4($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XB4);
    // 0x801F3B58: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x801F3B5C: addu        $a1, $a1, $t0
    ctx->r5 = ADD32(ctx->r5, ctx->r8);
    // 0x801F3B60: bne         $t8, $zero, L_801F3C00
    if (ctx->r24 != 0) {
        // 0x801F3B64: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_801F3C00;
    }
    // 0x801F3B64: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801F3B68: jal         0x80034E08
    // 0x801F3B6C: lw          $a1, 0x4868($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4868);
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x801F3B6C: lw          $a1, 0x4868($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4868);
    after_0:
    // 0x801F3B70: beq         $v0, $zero, L_801F3C00
    if (ctx->r2 == 0) {
        // 0x801F3B74: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_801F3C00;
    }
    // 0x801F3B74: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801F3B78: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x801F3B7C: lbu         $a2, 0x27($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X27);
    // 0x801F3B80: jal         0x801EE4AC
    // 0x801F3B84: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_801EE4AC_5AA3BC(rdram, ctx);
        goto after_1;
    // 0x801F3B84: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x801F3B88: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x801F3B8C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801F3B90: jal         0x80035EEC
    // 0x801F3B94: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80035EEC_36AEC(rdram, ctx);
        goto after_2;
    // 0x801F3B94: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_2:
    // 0x801F3B98: bne         $v0, $zero, L_801F3BAC
    if (ctx->r2 != 0) {
        // 0x801F3B9C: lw          $a3, 0x1C($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X1C);
            goto L_801F3BAC;
    }
    // 0x801F3B9C: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x801F3BA0: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801F3BA4: b           L_801F3C00
    // 0x801F3BA8: sb          $t1, 0x65($a3)
    MEM_B(0X65, ctx->r7) = ctx->r9;
        goto L_801F3C00;
    // 0x801F3BA8: sb          $t1, 0x65($a3)
    MEM_B(0X65, ctx->r7) = ctx->r9;
L_801F3BAC:
    // 0x801F3BAC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801F3BB0: addiu       $a1, $a1, -0x39F4
    ctx->r5 = ADD32(ctx->r5, -0X39F4);
    // 0x801F3BB4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_801F3BB8:
    // 0x801F3BB8: lw          $t3, 0x0($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X0);
    // 0x801F3BBC: sll         $v1, $a0, 3
    ctx->r3 = S32(ctx->r4 << 3);
    // 0x801F3BC0: addu        $t2, $v0, $v1
    ctx->r10 = ADD32(ctx->r2, ctx->r3);
    // 0x801F3BC4: addu        $t4, $t3, $v1
    ctx->r12 = ADD32(ctx->r11, ctx->r3);
    // 0x801F3BC8: lw          $at, 0x34($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X34);
    // 0x801F3BCC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x801F3BD0: andi        $t7, $a0, 0xFF
    ctx->r15 = ctx->r4 & 0XFF;
    // 0x801F3BD4: sw          $at, 0x34($t2)
    MEM_W(0X34, ctx->r10) = ctx->r1;
    // 0x801F3BD8: lw          $t6, 0x38($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X38);
    // 0x801F3BDC: slti        $at, $t7, 0x6
    ctx->r1 = SIGNED(ctx->r15) < 0X6 ? 1 : 0;
    // 0x801F3BE0: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x801F3BE4: bne         $at, $zero, L_801F3BB8
    if (ctx->r1 != 0) {
        // 0x801F3BE8: sw          $t6, 0x38($t2)
        MEM_W(0X38, ctx->r10) = ctx->r14;
            goto L_801F3BB8;
    }
    // 0x801F3BE8: sw          $t6, 0x38($t2)
    MEM_W(0X38, ctx->r10) = ctx->r14;
    // 0x801F3BEC: sw          $zero, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = 0;
    // 0x801F3BF0: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x801F3BF4: lw          $t8, -0x39FC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X39FC);
    // 0x801F3BF8: lw          $t9, 0x5C($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X5C);
    // 0x801F3BFC: sw          $a3, 0xB4($t9)
    MEM_W(0XB4, ctx->r25) = ctx->r7;
L_801F3C00:
    // 0x801F3C00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F3C04: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801F3C08: jr          $ra
    // 0x801F3C0C: nop

    TRACE_RETURN()
    return;
    // 0x801F3C0C: nop

;}
RECOMP_FUNC void func_801F553C_5B144C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F553C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F5540: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F5544: jal         0x801E3AC0
    // 0x801F5548: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801E3AC0_59F9D0(rdram, ctx);
        goto after_0;
    // 0x801F5548: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F554C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F5550: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F5554: jr          $ra
    // 0x801F5558: nop

    TRACE_RETURN()
    return;
    // 0x801F5558: nop

;}
RECOMP_FUNC void func_801E8560_5A4470(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E8560: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x801E8564: swc1        $f14, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f14.u32l;
    // 0x801E8568: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x801E856C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E8570: lwc1        $f4, 0x74($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X74);
    // 0x801E8574: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E8578: swc1        $f12, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f12.u32l;
    // 0x801E857C: add.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801E8580: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    // 0x801E8584: lwc1        $f12, 0x70($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X70);
    // 0x801E8588: jal         0x80029E08
    // 0x801E858C: swc1        $f14, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f14.u32l;
    func_80029E08_2AA08(rdram, ctx);
        goto after_0;
    // 0x801E858C: swc1        $f14, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f14.u32l;
    after_0:
    // 0x801E8590: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x801E8594: bne         $v0, $at, L_801E85A4
    if (ctx->r2 != ctx->r1) {
        // 0x801E8598: lwc1        $f8, 0x74($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X74);
            goto L_801E85A4;
    }
    // 0x801E8598: lwc1        $f8, 0x74($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X74);
    // 0x801E859C: b           L_801E863C
    // 0x801E85A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801E863C;
    // 0x801E85A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801E85A4:
    // 0x801E85A4: lui         $at, 0x4194
    ctx->r1 = S32(0X4194 << 16);
    // 0x801E85A8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801E85AC: lwc1        $f12, 0x70($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X70);
    // 0x801E85B0: lw          $a2, 0x78($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X78);
    // 0x801E85B4: add.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801E85B8: jal         0x80029E08
    // 0x801E85BC: swc1        $f14, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f14.u32l;
    func_80029E08_2AA08(rdram, ctx);
        goto after_1;
    // 0x801E85BC: swc1        $f14, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f14.u32l;
    after_1:
    // 0x801E85C0: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x801E85C4: bne         $v0, $at, L_801E85D4
    if (ctx->r2 != ctx->r1) {
        // 0x801E85C8: addiu       $a0, $sp, 0x28
        ctx->r4 = ADD32(ctx->r29, 0X28);
            goto L_801E85D4;
    }
    // 0x801E85C8: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x801E85CC: b           L_801E863C
    // 0x801E85D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801E863C;
    // 0x801E85D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801E85D4:
    // 0x801E85D4: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x801E85D8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801E85DC: lwc1        $f16, 0x78($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X78);
    // 0x801E85E0: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
    // 0x801E85E4: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x801E85E8: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x801E85EC: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x801E85F0: jal         0x8002EB10
    // 0x801E85F4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_8002EB10_2F710(rdram, ctx);
        goto after_2;
    // 0x801E85F4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_2:
    // 0x801E85F8: lh          $v1, 0x60($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X60);
    // 0x801E85FC: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x801E8600: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x801E8604: bne         $v1, $at, L_801E8614
    if (ctx->r3 != ctx->r1) {
        // 0x801E8608: lw          $a1, 0x70($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X70);
            goto L_801E8614;
    }
    // 0x801E8608: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
    // 0x801E860C: b           L_801E863C
    // 0x801E8610: sltiu       $v0, $v1, 0x1
    ctx->r2 = ctx->r3 < 0X1 ? 1 : 0;
        goto L_801E863C;
    // 0x801E8610: sltiu       $v0, $v1, 0x1
    ctx->r2 = ctx->r3 < 0X1 ? 1 : 0;
L_801E8614:
    // 0x801E8614: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x801E8618: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E861C: lwc1        $f4, 0x78($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X78);
    // 0x801E8620: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x801E8624: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x801E8628: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801E862C: jal         0x80030730
    // 0x801E8630: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80030730_31330(rdram, ctx);
        goto after_3;
    // 0x801E8630: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x801E8634: lh          $v1, 0x60($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X60);
    // 0x801E8638: sltiu       $v0, $v1, 0x1
    ctx->r2 = ctx->r3 < 0X1 ? 1 : 0;
L_801E863C:
    // 0x801E863C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801E8640: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x801E8644: jr          $ra
    // 0x801E8648: nop

    TRACE_RETURN()
    return;
    // 0x801E8648: nop

;}
RECOMP_FUNC void func_801DE1F4_59A104(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DE1F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DE1F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DE1FC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801DE200: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801DE204: addiu       $a2, $zero, 0x59
    ctx->r6 = ADD32(0, 0X59);
    // 0x801DE208: jal         0x801E4078
    // 0x801DE20C: addiu       $a3, $zero, 0x5B
    ctx->r7 = ADD32(0, 0X5B);
    func_801E4078_59FF88(rdram, ctx);
        goto after_0;
    // 0x801DE20C: addiu       $a3, $zero, 0x5B
    ctx->r7 = ADD32(0, 0X5B);
    after_0:
    // 0x801DE210: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DE214: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DE218: jr          $ra
    // 0x801DE21C: nop

    TRACE_RETURN()
    return;
    // 0x801DE21C: nop

;}
RECOMP_FUNC void func_801DE270_59A180(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DE270: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801DE274: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801DE278: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801DE27C: lbu         $t6, 0x60($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X60);
    // 0x801DE280: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801DE284: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x801DE288: bne         $t6, $at, L_801DE2B4
    if (ctx->r14 != ctx->r1) {
        // 0x801DE28C: addiu       $a2, $zero, 0x61
        ctx->r6 = ADD32(0, 0X61);
            goto L_801DE2B4;
    }
    // 0x801DE28C: addiu       $a2, $zero, 0x61
    ctx->r6 = ADD32(0, 0X61);
    // 0x801DE290: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x801DE294: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801DE298: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x801DE29C: addiu       $a2, $zero, 0x61
    ctx->r6 = ADD32(0, 0X61);
    // 0x801DE2A0: addiu       $a3, $zero, 0x63
    ctx->r7 = ADD32(0, 0X63);
    // 0x801DE2A4: jal         0x801F5B04
    // 0x801DE2A8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_801F5B04_5B1A14(rdram, ctx);
        goto after_0;
    // 0x801DE2A8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x801DE2AC: b           L_801DE2C0
    // 0x801DE2B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801DE2C0;
    // 0x801DE2B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801DE2B4:
    // 0x801DE2B4: jal         0x801E4078
    // 0x801DE2B8: addiu       $a3, $zero, 0x63
    ctx->r7 = ADD32(0, 0X63);
    func_801E4078_59FF88(rdram, ctx);
        goto after_1;
    // 0x801DE2B8: addiu       $a3, $zero, 0x63
    ctx->r7 = ADD32(0, 0X63);
    after_1:
    // 0x801DE2BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801DE2C0:
    // 0x801DE2C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801DE2C4: jr          $ra
    // 0x801DE2C8: nop

    TRACE_RETURN()
    return;
    // 0x801DE2C8: nop

;}
RECOMP_FUNC void func_801DE600_59A510(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DE600: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DE604: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DE608: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801DE60C: lbu         $t6, 0x60($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X60);
    // 0x801DE610: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801DE614: bne         $t6, $at, L_801DE62C
    if (ctx->r14 != ctx->r1) {
        // 0x801DE618: nop
    
            goto L_801DE62C;
    }
    // 0x801DE618: nop

    // 0x801DE61C: jal         0x801F5BF0
    // 0x801DE620: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_801F5BF0_5B1B00(rdram, ctx);
        goto after_0;
    // 0x801DE620: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_0:
    // 0x801DE624: b           L_801DE638
    // 0x801DE628: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801DE638;
    // 0x801DE628: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DE62C:
    // 0x801DE62C: jal         0x801E43B0
    // 0x801DE630: nop

    func_801E43B0_5A02C0(rdram, ctx);
        goto after_1;
    // 0x801DE630: nop

    after_1:
    // 0x801DE634: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DE638:
    // 0x801DE638: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DE63C: jr          $ra
    // 0x801DE640: nop

    TRACE_RETURN()
    return;
    // 0x801DE640: nop

;}
RECOMP_FUNC void func_801E1078_59CF88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E1078: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E107C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E1080: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E1084: jal         0x801E1150
    // 0x801E1088: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801E1150_59D060(rdram, ctx);
        goto after_0;
    // 0x801E1088: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801E108C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801E1090: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801E1094: lbu         $v0, 0x60($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X60);
    // 0x801E1098: beq         $v0, $at, L_801E10A8
    if (ctx->r2 == ctx->r1) {
        // 0x801E109C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_801E10A8;
    }
    // 0x801E109C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801E10A0: bnel        $v0, $at, L_801E10B4
    if (ctx->r2 != ctx->r1) {
        // 0x801E10A4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E10B4;
    }
    goto skip_0;
    // 0x801E10A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
L_801E10A8:
    // 0x801E10A8: jal         0x801E84A4
    // 0x801E10AC: nop

    func_801E84A4_5A43B4(rdram, ctx);
        goto after_1;
    // 0x801E10AC: nop

    after_1:
    // 0x801E10B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E10B4:
    // 0x801E10B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E10B8: jr          $ra
    // 0x801E10BC: nop

    TRACE_RETURN()
    return;
    // 0x801E10BC: nop

;}
RECOMP_FUNC void func_801CE870_58A780(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CE870: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x801CE874: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CE878: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    // 0x801CE87C: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x801CE880: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    // 0x801CE884: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    // 0x801CE888: jal         0x8001D394
    // 0x801CE88C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_8001D394_1DF94(rdram, ctx);
        goto after_0;
    // 0x801CE88C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x801CE890: lwc1        $f12, 0x84($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X84);
    // 0x801CE894: lwc1        $f14, 0x88($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X88);
    // 0x801CE898: jal         0x800040A8
    // 0x801CE89C: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    func_800040A8_4CA8(rdram, ctx);
        goto after_1;
    // 0x801CE89C: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    after_1:
    // 0x801CE8A0: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x801CE8A4: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x801CE8A8: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    // 0x801CE8AC: jal         0x8001D898
    // 0x801CE8B0: lw          $a2, 0x78($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X78);
    func_8001D898_1E498(rdram, ctx);
        goto after_2;
    // 0x801CE8B0: lw          $a2, 0x78($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X78);
    after_2:
    // 0x801CE8B4: lwc1        $f14, 0x6C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801CE8B8: lwc1        $f16, 0x64($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801CE8BC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801CE8C0: mul.s       $f4, $f14, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x801CE8C4: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x801CE8C8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CE8CC: mul.s       $f6, $f16, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x801CE8D0: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    // 0x801CE8D4: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801CE8D8: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x801CE8DC: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x801CE8E0: nop

    // 0x801CE8E4: bc1fl       L_801CE8F8
    if (!c1cs) {
        // 0x801CE8E8: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_801CE8F8;
    }
    goto skip_0;
    // 0x801CE8E8: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_0:
    // 0x801CE8EC: b           L_801CE8F8
    // 0x801CE8F0: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_801CE8F8;
    // 0x801CE8F0: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    // 0x801CE8F4: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_801CE8F8:
    // 0x801CE8F8: ldc1        $f18, -0x5680($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0X5680);
    // 0x801CE8FC: cvt.d.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
    // 0x801CE900: c.lt.d      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.d < ctx->f18.d;
    // 0x801CE904: nop

    // 0x801CE908: bc1t        L_801CE9C8
    if (c1cs) {
        // 0x801CE90C: nop
    
            goto L_801CE9C8;
    }
    // 0x801CE90C: nop

    // 0x801CE910: jal         0x800040A8
    // 0x801CE914: neg.s       $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = -ctx->f16.fl;
    func_800040A8_4CA8(rdram, ctx);
        goto after_3;
    // 0x801CE914: neg.s       $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = -ctx->f16.fl;
    after_3:
    // 0x801CE918: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x801CE91C: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x801CE920: lw          $a2, 0x7C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X7C);
    // 0x801CE924: jal         0x8001D460
    // 0x801CE928: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    func_8001D460_1E060(rdram, ctx);
        goto after_4;
    // 0x801CE928: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    after_4:
    // 0x801CE92C: beq         $v0, $zero, L_801CE9B8
    if (ctx->r2 == 0) {
        // 0x801CE930: lw          $a3, 0x34($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X34);
            goto L_801CE9B8;
    }
    // 0x801CE930: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x801CE934: lwc1        $f14, 0x50($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X50);
    // 0x801CE938: lwc1        $f12, 0x4C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801CE93C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801CE940: mul.s       $f4, $f14, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x801CE944: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x801CE948: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CE94C: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x801CE950: addu        $v1, $t8, $a3
    ctx->r3 = ADD32(ctx->r24, ctx->r7);
    // 0x801CE954: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801CE958: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x801CE95C: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x801CE960: nop

    // 0x801CE964: bc1fl       L_801CE978
    if (!c1cs) {
        // 0x801CE968: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_801CE978;
    }
    goto skip_1;
    // 0x801CE968: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_1:
    // 0x801CE96C: b           L_801CE978
    // 0x801CE970: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_801CE978;
    // 0x801CE970: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    // 0x801CE974: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_801CE978:
    // 0x801CE978: ldc1        $f18, -0x5678($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0X5678);
    // 0x801CE97C: cvt.d.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
    // 0x801CE980: c.lt.d      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.d < ctx->f18.d;
    // 0x801CE984: nop

    // 0x801CE988: bc1t        L_801CE9B0
    if (c1cs) {
        // 0x801CE98C: nop
    
            goto L_801CE9B0;
    }
    // 0x801CE98C: nop

    // 0x801CE990: jal         0x800040A8
    // 0x801CE994: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    func_800040A8_4CA8(rdram, ctx);
        goto after_5;
    // 0x801CE994: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    after_5:
    // 0x801CE998: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x801CE99C: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x801CE9A0: addu        $t7, $t6, $a3
    ctx->r15 = ADD32(ctx->r14, ctx->r7);
    // 0x801CE9A4: subu        $v1, $t7, $v0
    ctx->r3 = SUB32(ctx->r15, ctx->r2);
    // 0x801CE9A8: b           L_801CE9C8
    // 0x801CE9AC: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
        goto L_801CE9C8;
    // 0x801CE9AC: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
L_801CE9B0:
    // 0x801CE9B0: b           L_801CE9C8
    // 0x801CE9B4: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
        goto L_801CE9C8;
    // 0x801CE9B4: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
L_801CE9B8:
    // 0x801CE9B8: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x801CE9BC: addu        $v1, $t9, $a3
    ctx->r3 = ADD32(ctx->r25, ctx->r7);
    // 0x801CE9C0: b           L_801CE9C8
    // 0x801CE9C4: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
        goto L_801CE9C8;
    // 0x801CE9C4: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
L_801CE9C8:
    // 0x801CE9C8: andi        $t0, $v1, 0x3FF
    ctx->r8 = ctx->r3 & 0X3FF;
    // 0x801CE9CC: andi        $a0, $t0, 0xFFFF
    ctx->r4 = ctx->r8 & 0XFFFF;
    // 0x801CE9D0: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x801CE9D4: jal         0x80003F30
    // 0x801CE9D8: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    func_80003F30_4B30(rdram, ctx);
        goto after_6;
    // 0x801CE9D8: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_6:
    // 0x801CE9DC: lwc1        $f2, 0x8C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x801CE9E0: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801CE9E4: lwc1        $f18, 0x84($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X84);
    // 0x801CE9E8: mul.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x801CE9EC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801CE9F0: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x801CE9F4: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x801CE9F8: lwc1        $f6, 0x88($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X88);
    // 0x801CE9FC: lw          $a2, 0x70($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X70);
    // 0x801CEA00: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x801CEA04: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
    // 0x801CEA08: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801CEA0C: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
    // 0x801CEA10: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    // 0x801CEA14: c.eq.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl == ctx->f4.fl;
    // 0x801CEA18: nop

    // 0x801CEA1C: bc1fl       L_801CEA44
    if (!c1cs) {
        // 0x801CEA20: lw          $t1, 0x5C($a2)
        ctx->r9 = MEM_W(ctx->r6, 0X5C);
            goto L_801CEA44;
    }
    goto skip_2;
    // 0x801CEA20: lw          $t1, 0x5C($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X5C);
    skip_2:
    // 0x801CEA24: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801CEA28: nop

    // 0x801CEA2C: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x801CEA30: nop

    // 0x801CEA34: bc1fl       L_801CEA44
    if (!c1cs) {
        // 0x801CEA38: lw          $t1, 0x5C($a2)
        ctx->r9 = MEM_W(ctx->r6, 0X5C);
            goto L_801CEA44;
    }
    goto skip_3;
    // 0x801CEA38: lw          $t1, 0x5C($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X5C);
    skip_3:
    // 0x801CEA3C: addiu       $v1, $zero, 0x400
    ctx->r3 = ADD32(0, 0X400);
    // 0x801CEA40: lw          $t1, 0x5C($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X5C);
L_801CEA44:
    // 0x801CEA44: sh          $v1, 0x8($t1)
    MEM_H(0X8, ctx->r9) = ctx->r3;
    // 0x801CEA48: lw          $v0, 0x5C($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X5C);
    // 0x801CEA4C: lhu         $t2, 0x0($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X0);
    // 0x801CEA50: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x801CEA54: beql        $t3, $zero, L_801CEAAC
    if (ctx->r11 == 0) {
        // 0x801CEA58: andi        $t8, $v1, 0xFFFF
        ctx->r24 = ctx->r3 & 0XFFFF;
            goto L_801CEAAC;
    }
    goto skip_4;
    // 0x801CEA58: andi        $t8, $v1, 0xFFFF
    ctx->r24 = ctx->r3 & 0XFFFF;
    skip_4:
    // 0x801CEA5C: jal         0x80003F30
    // 0x801CEA60: lhu         $a0, 0x2($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X2);
    func_80003F30_4B30(rdram, ctx);
        goto after_7;
    // 0x801CEA60: lhu         $a0, 0x2($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X2);
    after_7:
    // 0x801CEA64: lw          $v1, 0x70($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X70);
    // 0x801CEA68: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801CEA6C: lw          $t4, 0x5C($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X5C);
    // 0x801CEA70: lwc1        $f10, 0x4($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X4);
    // 0x801CEA74: mul.s       $f18, $f10, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x801CEA78: swc1        $f18, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f18.u32l;
    // 0x801CEA7C: lw          $t5, 0x5C($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X5C);
    // 0x801CEA80: lwc1        $f4, 0x4($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X4);
    // 0x801CEA84: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801CEA88: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    // 0x801CEA8C: lw          $t6, 0x5C($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X5C);
    // 0x801CEA90: lhu         $v0, 0x2($t6)
    ctx->r2 = MEM_HU(ctx->r14, 0X2);
    // 0x801CEA94: andi        $t7, $v0, 0x400
    ctx->r15 = ctx->r2 & 0X400;
    // 0x801CEA98: beq         $t7, $zero, L_801CEAA8
    if (ctx->r15 == 0) {
        // 0x801CEA9C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_801CEAA8;
    }
    // 0x801CEA9C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x801CEAA0: b           L_801CEAA8
    // 0x801CEAA4: addiu       $v1, $zero, 0x400
    ctx->r3 = ADD32(0, 0X400);
        goto L_801CEAA8;
    // 0x801CEAA4: addiu       $v1, $zero, 0x400
    ctx->r3 = ADD32(0, 0X400);
L_801CEAA8:
    // 0x801CEAA8: andi        $t8, $v1, 0xFFFF
    ctx->r24 = ctx->r3 & 0XFFFF;
L_801CEAAC:
    // 0x801CEAAC: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x801CEAB0: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x801CEAB4: lw          $a1, 0x74($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X74);
    // 0x801CEAB8: jal         0x8001D718
    // 0x801CEABC: lw          $a2, 0x78($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X78);
    func_8001D718_1E318(rdram, ctx);
        goto after_8;
    // 0x801CEABC: lw          $a2, 0x78($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X78);
    after_8:
    // 0x801CEAC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CEAC4: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x801CEAC8: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x801CEACC: jr          $ra
    // 0x801CEAD0: nop

    TRACE_RETURN()
    return;
    // 0x801CEAD0: nop

;}
RECOMP_FUNC void func_801F2ED0_5AEDE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F2ED0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801F2ED4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801F2ED8: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x801F2EDC: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x801F2EE0: lwc1        $f4, 0x8C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8C);
    // 0x801F2EE4: lwc1        $f6, 0x88($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X88);
    // 0x801F2EE8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801F2EEC: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801F2EF0: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801F2EF4: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801F2EF8: swc1        $f8, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->f8.u32l;
    // 0x801F2EFC: lwc1        $f10, 0x8C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X8C);
    // 0x801F2F00: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801F2F04: c.le.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl <= ctx->f0.fl;
    // 0x801F2F08: nop

    // 0x801F2F0C: bc1f        L_801F2F24
    if (!c1cs) {
        // 0x801F2F10: nop
    
            goto L_801F2F24;
    }
    // 0x801F2F10: nop

    // 0x801F2F14: jal         0x80034ED4
    // 0x801F2F18: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_0;
    // 0x801F2F18: nop

    after_0:
    // 0x801F2F1C: b           L_801F308C
    // 0x801F2F20: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_801F308C;
    // 0x801F2F20: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_801F2F24:
    // 0x801F2F24: jal         0x801F3A9C
    // 0x801F2F28: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_801F3A9C_5AF9AC(rdram, ctx);
        goto after_1;
    // 0x801F2F28: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x801F2F2C: addiu       $v0, $s1, 0x94
    ctx->r2 = ADD32(ctx->r17, 0X94);
    // 0x801F2F30: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x801F2F34: addiu       $t6, $v0, 0x6
    ctx->r14 = ADD32(ctx->r2, 0X6);
    // 0x801F2F38: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801F2F3C: addiu       $a3, $v0, 0x4
    ctx->r7 = ADD32(ctx->r2, 0X4);
    // 0x801F2F40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F2F44: jal         0x801E8890
    // 0x801F2F48: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_801E8890_5A47A0(rdram, ctx);
        goto after_2;
    // 0x801F2F48: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_2:
    // 0x801F2F4C: addiu       $t7, $zero, 0xE0
    ctx->r15 = ADD32(0, 0XE0);
    // 0x801F2F50: addiu       $t8, $zero, 0xD0
    ctx->r24 = ADD32(0, 0XD0);
    // 0x801F2F54: addiu       $t9, $zero, 0xB0
    ctx->r25 = ADD32(0, 0XB0);
    // 0x801F2F58: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x801F2F5C: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x801F2F60: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x801F2F64: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801F2F68: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801F2F6C: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x801F2F70: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801F2F74: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x801F2F78: lwc1        $f16, 0x8C($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X8C);
    // 0x801F2F7C: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801F2F80: addiu       $a2, $a2, 0x49C0
    ctx->r6 = ADD32(ctx->r6, 0X49C0);
    // 0x801F2F84: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x801F2F88: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801F2F8C: addiu       $a1, $s0, 0x80
    ctx->r5 = ADD32(ctx->r16, 0X80);
    // 0x801F2F90: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801F2F94: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x801F2F98: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801F2F9C: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x801F2FA0: beql        $t1, $zero, L_801F2FF0
    if (ctx->r9 == 0) {
        // 0x801F2FA4: mfc1        $t1, $f18
        ctx->r9 = (int32_t)ctx->f18.u32l;
            goto L_801F2FF0;
    }
    goto skip_0;
    // 0x801F2FA4: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    skip_0:
    // 0x801F2FA8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801F2FAC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801F2FB0: sub.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x801F2FB4: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x801F2FB8: nop

    // 0x801F2FBC: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x801F2FC0: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x801F2FC4: nop

    // 0x801F2FC8: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x801F2FCC: bne         $t1, $zero, L_801F2FE4
    if (ctx->r9 != 0) {
        // 0x801F2FD0: nop
    
            goto L_801F2FE4;
    }
    // 0x801F2FD0: nop

    // 0x801F2FD4: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x801F2FD8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801F2FDC: b           L_801F2FFC
    // 0x801F2FE0: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
        goto L_801F2FFC;
    // 0x801F2FE0: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
L_801F2FE4:
    // 0x801F2FE4: b           L_801F2FFC
    // 0x801F2FE8: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
        goto L_801F2FFC;
    // 0x801F2FE8: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x801F2FEC: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
L_801F2FF0:
    // 0x801F2FF0: nop

    // 0x801F2FF4: bltz        $t1, L_801F2FE4
    if (SIGNED(ctx->r9) < 0) {
        // 0x801F2FF8: nop
    
            goto L_801F2FE4;
    }
    // 0x801F2FF8: nop

L_801F2FFC:
    // 0x801F2FFC: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x801F3000: andi        $t2, $t1, 0xFF
    ctx->r10 = ctx->r9 & 0XFF;
    // 0x801F3004: jal         0x801DC554
    // 0x801F3008: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    func_801DC554_598464(rdram, ctx);
        goto after_3;
    // 0x801F3008: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    after_3:
    // 0x801F300C: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801F3010: lwc1        $f6, 0x90($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X90);
    // 0x801F3014: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801F3018: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801F301C: swc1        $f8, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f8.u32l;
    // 0x801F3020: lwc1        $f10, 0x1C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801F3024: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x801F3028: nop

    // 0x801F302C: bc1fl       L_801F303C
    if (!c1cs) {
        // 0x801F3030: lwc1        $f16, 0x20($s0)
        ctx->f16.u32l = MEM_W(ctx->r16, 0X20);
            goto L_801F303C;
    }
    goto skip_1;
    // 0x801F3030: lwc1        $f16, 0x20($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X20);
    skip_1:
    // 0x801F3034: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x801F3038: lwc1        $f16, 0x20($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X20);
L_801F303C:
    // 0x801F303C: lwc1        $f18, 0x90($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X90);
    // 0x801F3040: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801F3044: swc1        $f4, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f4.u32l;
    // 0x801F3048: lwc1        $f6, 0x20($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X20);
    // 0x801F304C: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x801F3050: nop

    // 0x801F3054: bc1fl       L_801F3064
    if (!c1cs) {
        // 0x801F3058: lwc1        $f8, 0x24($s0)
        ctx->f8.u32l = MEM_W(ctx->r16, 0X24);
            goto L_801F3064;
    }
    goto skip_2;
    // 0x801F3058: lwc1        $f8, 0x24($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X24);
    skip_2:
    // 0x801F305C: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x801F3060: lwc1        $f8, 0x24($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X24);
L_801F3064:
    // 0x801F3064: lwc1        $f10, 0x90($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X90);
    // 0x801F3068: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801F306C: swc1        $f16, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f16.u32l;
    // 0x801F3070: lwc1        $f18, 0x24($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X24);
    // 0x801F3074: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x801F3078: nop

    // 0x801F307C: bc1fl       L_801F308C
    if (!c1cs) {
        // 0x801F3080: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_801F308C;
    }
    goto skip_3;
    // 0x801F3080: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_3:
    // 0x801F3084: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x801F3088: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_801F308C:
    // 0x801F308C: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x801F3090: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x801F3094: jr          $ra
    // 0x801F3098: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x801F3098: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_801E8E24_5A4D34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E8E24: lw          $v0, 0xDC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XDC);
    // 0x801E8E28: lhu         $v1, 0x20($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X20);
    // 0x801E8E2C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801E8E30: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x801E8E34: addiu       $a0, $a0, 0x4914
    ctx->r4 = ADD32(ctx->r4, 0X4914);
    // 0x801E8E38: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801E8E3C: beq         $a2, $zero, L_801E8E84
    if (ctx->r6 == 0) {
        // 0x801E8E40: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_801E8E84;
    }
    // 0x801E8E40: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x801E8E44: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x801E8E48: lhu         $t6, 0x20($a2)
    ctx->r14 = MEM_HU(ctx->r6, 0X20);
L_801E8E4C:
    // 0x801E8E4C: slt         $at, $v0, $t6
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x801E8E50: beq         $at, $zero, L_801E8E84
    if (ctx->r1 == 0) {
        // 0x801E8E54: nop
    
            goto L_801E8E84;
    }
    // 0x801E8E54: nop

    // 0x801E8E58: lbu         $t7, 0x64($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0X64);
    // 0x801E8E5C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x801E8E60: addu        $t9, $a0, $t8
    ctx->r25 = ADD32(ctx->r4, ctx->r24);
    // 0x801E8E64: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x801E8E68: bnel        $v1, $t0, L_801E8E7C
    if (ctx->r3 != ctx->r8) {
        // 0x801E8E6C: lw          $a2, 0x0($a2)
        ctx->r6 = MEM_W(ctx->r6, 0X0);
            goto L_801E8E7C;
    }
    goto skip_0;
    // 0x801E8E6C: lw          $a2, 0x0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X0);
    skip_0:
    // 0x801E8E70: sb          $a3, 0x65($a2)
    MEM_B(0X65, ctx->r6) = ctx->r7;
    // 0x801E8E74: sb          $a1, 0x66($a2)
    MEM_B(0X66, ctx->r6) = ctx->r5;
    // 0x801E8E78: lw          $a2, 0x0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X0);
L_801E8E7C:
    // 0x801E8E7C: bnel        $a2, $zero, L_801E8E4C
    if (ctx->r6 != 0) {
        // 0x801E8E80: lhu         $t6, 0x20($a2)
        ctx->r14 = MEM_HU(ctx->r6, 0X20);
            goto L_801E8E4C;
    }
    goto skip_1;
    // 0x801E8E80: lhu         $t6, 0x20($a2)
    ctx->r14 = MEM_HU(ctx->r6, 0X20);
    skip_1:
L_801E8E84:
    // 0x801E8E84: jr          $ra
    // 0x801E8E88: nop

    TRACE_RETURN()
    return;
    // 0x801E8E88: nop

;}
RECOMP_FUNC void func_801E0E60_59CD70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E0E60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E0E64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E0E68: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E0E6C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x801E0E70: jal         0x801DD720
    // 0x801E0E74: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801DD720_599630(rdram, ctx);
        goto after_0;
    // 0x801E0E74: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801E0E78: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801E0E7C: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801E0E80: jalr        $t9
    // 0x801E0E84: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x801E0E84: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x801E0E88: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E0E8C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E0E90: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x801E0E94: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801E0E98: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x801E0E9C: lwc1        $f4, 0x28($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X28);
    // 0x801E0EA0: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x801E0EA4: nop

    // 0x801E0EA8: bc1fl       L_801E0ECC
    if (!c1cs) {
        // 0x801E0EAC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E0ECC;
    }
    goto skip_0;
    // 0x801E0EAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801E0EB0: lbu         $t7, 0x30($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0X30);
    // 0x801E0EB4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x801E0EB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801E0EBC: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x801E0EC0: jal         0x801DACDC
    // 0x801E0EC4: sb          $t8, 0x30($a2)
    MEM_B(0X30, ctx->r6) = ctx->r24;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_2;
    // 0x801E0EC4: sb          $t8, 0x30($a2)
    MEM_B(0X30, ctx->r6) = ctx->r24;
    after_2:
    // 0x801E0EC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E0ECC:
    // 0x801E0ECC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E0ED0: jr          $ra
    // 0x801E0ED4: nop

    TRACE_RETURN()
    return;
    // 0x801E0ED4: nop

;}
RECOMP_FUNC void func_801FA4A4_5B63B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FA4A4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801FA4A8: lhu         $t3, 0x32($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X32);
    // 0x801FA4AC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801FA4B0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801FA4B4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801FA4B8: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x801FA4BC: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x801FA4C0: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x801FA4C4: sll         $t7, $a1, 16
    ctx->r15 = S32(ctx->r5 << 16);
    // 0x801FA4C8: sll         $t9, $a2, 16
    ctx->r25 = S32(ctx->r6 << 16);
    // 0x801FA4CC: sll         $t1, $a3, 16
    ctx->r9 = S32(ctx->r7 << 16);
    // 0x801FA4D0: sra         $a3, $t1, 16
    ctx->r7 = S32(SIGNED(ctx->r9) >> 16);
    // 0x801FA4D4: sra         $a2, $t9, 16
    ctx->r6 = S32(SIGNED(ctx->r25) >> 16);
    // 0x801FA4D8: sra         $a1, $t7, 16
    ctx->r5 = S32(SIGNED(ctx->r15) >> 16);
    // 0x801FA4DC: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x801FA4E0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801FA4E4: jal         0x801FA4FC
    // 0x801FA4E8: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    func_801FA4FC_5B640C(rdram, ctx);
        goto after_0;
    // 0x801FA4E8: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_0:
    // 0x801FA4EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801FA4F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801FA4F4: jr          $ra
    // 0x801FA4F8: nop

    TRACE_RETURN()
    return;
    // 0x801FA4F8: nop

;}
RECOMP_FUNC void func_801E84A4_5A43B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E84A4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801E84A8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801E84AC: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801E84B0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E84B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E84B8: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801E84BC: jalr        $t9
    // 0x801E84C0: lw          $a0, 0x18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x801E84C0: lw          $a0, 0x18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X18);
    after_0:
    // 0x801E84C4: lbu         $v0, 0x60($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X60);
    // 0x801E84C8: lw          $t7, 0x5C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X5C);
    // 0x801E84CC: lwc1        $f6, 0xD0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XD0);
    // 0x801E84D0: sll         $t6, $v0, 1
    ctx->r14 = S32(ctx->r2 << 1);
    // 0x801E84D4: lwc1        $f16, 0x1C($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x801E84D8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E84DC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x801E84E0: add.s       $f16, $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x801E84E4: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x801E84E8: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x801E84EC: sub.s       $f14, $f0, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = ctx->f0.fl - ctx->f14.fl;
    // 0x801E84F0: lhu         $t8, -0x3988($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X3988);
    // 0x801E84F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E84F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801E84FC: div.s       $f18, $f14, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f14.fl, ctx->f16.fl);
    // 0x801E8500: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x801E8504: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x801E8508: bgez        $t8, L_801E8520
    if (SIGNED(ctx->r24) >= 0) {
        // 0x801E850C: cvt.s.w     $f6, $f16
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    ctx->f6.fl = CVT_S_W(ctx->f16.u32l);
            goto L_801E8520;
    }
    // 0x801E850C: cvt.s.w     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    ctx->f6.fl = CVT_S_W(ctx->f16.u32l);
    // 0x801E8510: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801E8514: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801E8518: nop

    // 0x801E851C: add.s       $f6, $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f10.fl;
L_801E8520:
    // 0x801E8520: div.s       $f16, $f6, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = DIV_S(ctx->f6.fl, ctx->f18.fl);
    // 0x801E8524: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x801E8528: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x801E852C: lh          $a3, -0x3998($a3)
    ctx->r7 = MEM_H(ctx->r7, -0X3998);
    // 0x801E8530: trunc.w.s   $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    ctx->f8.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x801E8534: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x801E8538: nop

    // 0x801E853C: addiu       $a2, $t2, 0x1
    ctx->r6 = ADD32(ctx->r10, 0X1);
    // 0x801E8540: sll         $t3, $a2, 16
    ctx->r11 = S32(ctx->r6 << 16);
    // 0x801E8544: jal         0x8003454C
    // 0x801E8548: sra         $a2, $t3, 16
    ctx->r6 = S32(SIGNED(ctx->r11) >> 16);
    func_8003454C_3514C(rdram, ctx);
        goto after_1;
    // 0x801E8548: sra         $a2, $t3, 16
    ctx->r6 = S32(SIGNED(ctx->r11) >> 16);
    after_1:
    // 0x801E854C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801E8550: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801E8554: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801E8558: jr          $ra
    // 0x801E855C: nop

    TRACE_RETURN()
    return;
    // 0x801E855C: nop

;}
RECOMP_FUNC void func_801E13D0_59D2E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E13D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E13D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E13D8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E13DC: lbu         $v0, 0x60($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X60);
    // 0x801E13E0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801E13E4: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801E13E8: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x801E13EC: addu        $a1, $a1, $t6
    ctx->r5 = ADD32(ctx->r5, ctx->r14);
    // 0x801E13F0: addu        $a2, $a2, $t6
    ctx->r6 = ADD32(ctx->r6, ctx->r14);
    // 0x801E13F4: lw          $a2, 0x4350($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X4350);
    // 0x801E13F8: lw          $a1, 0x4340($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4340);
    // 0x801E13FC: jal         0x801E54E0
    // 0x801E1400: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    func_801E54E0_5A13F0(rdram, ctx);
        goto after_0;
    // 0x801E1400: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    after_0:
    // 0x801E1404: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E1408: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E140C: jr          $ra
    // 0x801E1410: nop

    TRACE_RETURN()
    return;
    // 0x801E1410: nop

;}
RECOMP_FUNC void func_801E11C8_59D0D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E11C8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801E11CC: jr          $ra
    // 0x801E11D0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801E11D0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801F10E8_5ACFF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F10E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F10EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F10F0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F10F4: jal         0x801EEDF8
    // 0x801F10F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_801EEDF8_5AAD08(rdram, ctx);
        goto after_0;
    // 0x801F10F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x801F10FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F1100: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F1104: jr          $ra
    // 0x801F1108: nop

    TRACE_RETURN()
    return;
    // 0x801F1108: nop

;}
RECOMP_FUNC void func_801F9230_5B5140(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F9230: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801F9234: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x801F9238: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x801F923C: lui         $s1, 0x8015
    ctx->r17 = S32(0X8015 << 16);
    // 0x801F9240: addiu       $t6, $zero, 0x42
    ctx->r14 = ADD32(0, 0X42);
    // 0x801F9244: lui         $at, 0x8007
    ctx->r1 = S32(0X8007 << 16);
    // 0x801F9248: lui         $s2, 0x8002
    ctx->r18 = S32(0X8002 << 16);
    // 0x801F924C: addiu       $s1, $s1, 0x4CC0
    ctx->r17 = ADD32(ctx->r17, 0X4CC0);
    // 0x801F9250: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801F9254: sh          $t6, -0x2CDC($at)
    MEM_H(-0X2CDC, ctx->r1) = ctx->r14;
    // 0x801F9258: addiu       $s2, $s2, 0x724
    ctx->r18 = ADD32(ctx->r18, 0X724);
    // 0x801F925C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801F9260: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x801F9264: lw          $a0, 0x78B8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X78B8);
    // 0x801F9268: jal         0x80034E08
    // 0x801F926C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x801F926C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x801F9270: sw          $v0, 0x78BC($s1)
    MEM_W(0X78BC, ctx->r17) = ctx->r2;
    // 0x801F9274: lw          $a0, 0x78B8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X78B8);
    // 0x801F9278: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x801F927C: jal         0x80034E08
    // 0x801F9280: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_1;
    // 0x801F9280: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x801F9284: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    // 0x801F9288: sw          $v0, 0x78C0($s1)
    MEM_W(0X78C0, ctx->r17) = ctx->r2;
    // 0x801F928C: beq         $a0, $zero, L_801F92CC
    if (ctx->r4 == 0) {
        // 0x801F9290: addiu       $s0, $zero, 0x19
        ctx->r16 = ADD32(0, 0X19);
            goto L_801F92CC;
    }
    // 0x801F9290: addiu       $s0, $zero, 0x19
    ctx->r16 = ADD32(0, 0X19);
L_801F9294:
    // 0x801F9294: lw          $a0, 0x78C0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X78C0);
    // 0x801F9298: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801F929C: jal         0x80035EEC
    // 0x801F92A0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80035EEC_36AEC(rdram, ctx);
        goto after_2;
    // 0x801F92A0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x801F92A4: lw          $t7, 0x78C0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X78C0);
    // 0x801F92A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F92AC: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x801F92B0: lw          $v1, 0x1C($t7)
    ctx->r3 = MEM_W(ctx->r15, 0X1C);
    // 0x801F92B4: andi        $t0, $s0, 0xFF
    ctx->r8 = ctx->r16 & 0XFF;
    // 0x801F92B8: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
    // 0x801F92BC: lbu         $t8, 0x4($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X4);
    // 0x801F92C0: ori         $t9, $t8, 0x80
    ctx->r25 = ctx->r24 | 0X80;
    // 0x801F92C4: bne         $a0, $zero, L_801F9294
    if (ctx->r4 != 0) {
        // 0x801F92C8: sb          $t9, 0x4($v1)
        MEM_B(0X4, ctx->r3) = ctx->r25;
            goto L_801F9294;
    }
    // 0x801F92C8: sb          $t9, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r25;
L_801F92CC:
    // 0x801F92CC: lw          $a0, 0x78B8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X78B8);
    // 0x801F92D0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x801F92D4: jal         0x80034E08
    // 0x801F92D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_3;
    // 0x801F92D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x801F92DC: sw          $v0, 0x78C4($s1)
    MEM_W(0X78C4, ctx->r17) = ctx->r2;
    // 0x801F92E0: lw          $a0, 0x78B8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X78B8);
    // 0x801F92E4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x801F92E8: jal         0x80034E08
    // 0x801F92EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_4;
    // 0x801F92EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x801F92F0: sw          $v0, 0x78C8($s1)
    MEM_W(0X78C8, ctx->r17) = ctx->r2;
    // 0x801F92F4: lw          $a0, 0x78B8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X78B8);
    // 0x801F92F8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x801F92FC: jal         0x80034E08
    // 0x801F9300: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_5;
    // 0x801F9300: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x801F9304: sw          $v0, 0x78CC($s1)
    MEM_W(0X78CC, ctx->r17) = ctx->r2;
    // 0x801F9308: lw          $a0, 0x78B8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X78B8);
    // 0x801F930C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x801F9310: jal         0x80034E08
    // 0x801F9314: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_6;
    // 0x801F9314: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x801F9318: sw          $v0, 0x78D0($s1)
    MEM_W(0X78D0, ctx->r17) = ctx->r2;
    // 0x801F931C: lw          $a0, 0x78B8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X78B8);
    // 0x801F9320: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x801F9324: jal         0x80034E08
    // 0x801F9328: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_7;
    // 0x801F9328: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x801F932C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801F9330: sw          $v0, 0x78D4($s1)
    MEM_W(0X78D4, ctx->r17) = ctx->r2;
    // 0x801F9334: addiu       $t1, $zero, 0x81
    ctx->r9 = ADD32(0, 0X81);
    // 0x801F9338: lui         $at, 0x8007
    ctx->r1 = S32(0X8007 << 16);
    // 0x801F933C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x801F9340: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801F9344: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x801F9348: sh          $t1, -0x2CDC($at)
    MEM_H(-0X2CDC, ctx->r1) = ctx->r9;
    // 0x801F934C: jr          $ra
    // 0x801F9350: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x801F9350: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_801DA758_596668(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DA758: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DA75C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DA760: lbu         $t6, 0x60($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X60);
    // 0x801DA764: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801DA768: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x801DA76C: bne         $t6, $zero, L_801DA798
    if (ctx->r14 != 0) {
        // 0x801DA770: nop
    
            goto L_801DA798;
    }
    // 0x801DA770: nop

    // 0x801DA774: lw          $t7, 0x5C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X5C);
    // 0x801DA778: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x801DA77C: lhu         $v0, 0x86($t7)
    ctx->r2 = MEM_HU(ctx->r15, 0X86);
    // 0x801DA780: beq         $v0, $zero, L_801DA798
    if (ctx->r2 == 0) {
        // 0x801DA784: nop
    
            goto L_801DA798;
    }
    // 0x801DA784: nop

    // 0x801DA788: beq         $v0, $at, L_801DA798
    if (ctx->r2 == ctx->r1) {
        // 0x801DA78C: nop
    
            goto L_801DA798;
    }
    // 0x801DA78C: nop

    // 0x801DA790: b           L_801DA798
    // 0x801DA794: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
        goto L_801DA798;
    // 0x801DA794: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
L_801DA798:
    // 0x801DA798: bnel        $a1, $zero, L_801DA7AC
    if (ctx->r5 != 0) {
        // 0x801DA79C: lbu         $t8, 0x6D($a1)
        ctx->r24 = MEM_BU(ctx->r5, 0X6D);
            goto L_801DA7AC;
    }
    goto skip_0;
    // 0x801DA79C: lbu         $t8, 0x6D($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X6D);
    skip_0:
    // 0x801DA7A0: b           L_801DA7E4
    // 0x801DA7A4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_801DA7E4;
    // 0x801DA7A4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x801DA7A8: lbu         $t8, 0x6D($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X6D);
L_801DA7AC:
    // 0x801DA7AC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801DA7B0: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x801DA7B4: bgez        $t8, L_801DA7C8
    if (SIGNED(ctx->r24) >= 0) {
        // 0x801DA7B8: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_801DA7C8;
    }
    // 0x801DA7B8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801DA7BC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801DA7C0: nop

    // 0x801DA7C4: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_801DA7C8:
    // 0x801DA7C8: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x801DA7CC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801DA7D0: nop

    // 0x801DA7D4: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x801DA7D8: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x801DA7DC: mfc1        $v0, $f18
    ctx->r2 = (int32_t)ctx->f18.u32l;
    // 0x801DA7E0: nop

L_801DA7E4:
    // 0x801DA7E4: bne         $v0, $zero, L_801DA7F0
    if (ctx->r2 != 0) {
        // 0x801DA7E8: nop
    
            goto L_801DA7F0;
    }
    // 0x801DA7E8: nop

    // 0x801DA7EC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_801DA7F0:
    // 0x801DA7F0: multu       $v0, $v1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801DA7F4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x801DA7F8: mflo        $a0
    ctx->r4 = lo;
    // 0x801DA7FC: sll         $t0, $a0, 24
    ctx->r8 = S32(ctx->r4 << 24);
    // 0x801DA800: jal         0x801DCD48
    // 0x801DA804: sra         $a0, $t0, 24
    ctx->r4 = S32(SIGNED(ctx->r8) >> 24);
    func_801DCD48_598C58(rdram, ctx);
        goto after_0;
    // 0x801DA804: sra         $a0, $t0, 24
    ctx->r4 = S32(SIGNED(ctx->r8) >> 24);
    after_0:
    // 0x801DA808: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801DA80C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801DA810: lbu         $t2, 0x30($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X30);
    // 0x801DA814: lw          $t4, 0x5C($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X5C);
    // 0x801DA818: sw          $zero, 0x48($a0)
    MEM_W(0X48, ctx->r4) = 0;
    // 0x801DA81C: andi        $t3, $t2, 0xFFFE
    ctx->r11 = ctx->r10 & 0XFFFE;
    // 0x801DA820: sb          $t3, 0x30($a0)
    MEM_B(0X30, ctx->r4) = ctx->r11;
    // 0x801DA824: sh          $zero, 0x36($t4)
    MEM_H(0X36, ctx->r12) = 0;
    // 0x801DA828: lw          $t5, 0x5C($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X5C);
    // 0x801DA82C: sb          $zero, 0x68($t5)
    MEM_B(0X68, ctx->r13) = 0;
    // 0x801DA830: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801DA834: jal         0x801DD830
    // 0x801DA838: sb          $zero, 0x18($t6)
    MEM_B(0X18, ctx->r14) = 0;
    func_801DD830_599740(rdram, ctx);
        goto after_1;
    // 0x801DA838: sb          $zero, 0x18($t6)
    MEM_B(0X18, ctx->r14) = 0;
    after_1:
    // 0x801DA83C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DA840: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DA844: jr          $ra
    // 0x801DA848: nop

    TRACE_RETURN()
    return;
    // 0x801DA848: nop

;}
RECOMP_FUNC void func_801CBFCC_587EDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CBFCC: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x801CBFD0: addiu       $t6, $t6, -0x3844
    ctx->r14 = ADD32(ctx->r14, -0X3844);
    // 0x801CBFD4: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x801CBFD8: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x801CBFDC: addiu       $v0, $sp, 0x4
    ctx->r2 = ADD32(ctx->r29, 0X4);
    // 0x801CBFE0: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x801CBFE4: lbu         $t0, 0x60($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X60);
    // 0x801CBFE8: lw          $t3, 0x5C($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X5C);
    // 0x801CBFEC: addu        $t1, $v0, $t0
    ctx->r9 = ADD32(ctx->r2, ctx->r8);
    // 0x801CBFF0: lbu         $t2, 0x0($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X0);
    // 0x801CBFF4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x801CBFF8: jr          $ra
    // 0x801CBFFC: sb          $t2, 0x58($t3)
    MEM_B(0X58, ctx->r11) = ctx->r10;
    TRACE_RETURN()
    return;
    // 0x801CBFFC: sb          $t2, 0x58($t3)
    MEM_B(0X58, ctx->r11) = ctx->r10;
;}
