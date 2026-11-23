#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_801E5E14_6111F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E5E14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E5E18: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801E5E1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E5E20: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x801E5E24: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801E5E28: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    // 0x801E5E2C: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x801E5E30: jal         0x801D2F40
    // 0x801E5E34: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_801D2F40_5FE320(rdram, ctx);
        goto after_0;
    // 0x801E5E34: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x801E5E38: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801E5E3C: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E5E40: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801E5E44: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x801E5E48: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x801E5E4C: lui         $at, 0xC3AF
    ctx->r1 = S32(0XC3AF << 16);
    // 0x801E5E50: addiu       $t6, $zero, 0x1E
    ctx->r14 = ADD32(0, 0X1E);
    // 0x801E5E54: bc1f        L_801E5ED0
    if (!c1cs) {
        // 0x801E5E58: addiu       $a0, $a0, 0x5EE0
        ctx->r4 = ADD32(ctx->r4, 0X5EE0);
            goto L_801E5ED0;
    }
    // 0x801E5E58: addiu       $a0, $a0, 0x5EE0
    ctx->r4 = ADD32(ctx->r4, 0X5EE0);
    // 0x801E5E5C: lwc1        $f4, 0x10($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X10);
    // 0x801E5E60: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E5E64: lui         $at, 0xC080
    ctx->r1 = S32(0XC080 << 16);
    // 0x801E5E68: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x801E5E6C: nop

    // 0x801E5E70: bc1fl       L_801E5E8C
    if (!c1cs) {
        // 0x801E5E74: mtc1        $at, $f10
        ctx->f10.u32l = ctx->r1;
            goto L_801E5E8C;
    }
    goto skip_0;
    // 0x801E5E74: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    skip_0:
    // 0x801E5E78: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x801E5E7C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801E5E80: b           L_801E5E94
    // 0x801E5E84: swc1        $f8, 0x78($a2)
    MEM_W(0X78, ctx->r6) = ctx->f8.u32l;
        goto L_801E5E94;
    // 0x801E5E84: swc1        $f8, 0x78($a2)
    MEM_W(0X78, ctx->r6) = ctx->f8.u32l;
    // 0x801E5E88: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
L_801E5E8C:
    // 0x801E5E8C: nop

    // 0x801E5E90: swc1        $f10, 0x78($a2)
    MEM_W(0X78, ctx->r6) = ctx->f10.u32l;
L_801E5E94:
    // 0x801E5E94: lwc1        $f16, 0x8($a3)
    ctx->f16.u32l = MEM_W(ctx->r7, 0X8);
    // 0x801E5E98: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x801E5E9C: c.le.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl <= ctx->f16.fl;
    // 0x801E5EA0: nop

    // 0x801E5EA4: bc1fl       L_801E5EC0
    if (!c1cs) {
        // 0x801E5EA8: mtc1        $at, $f4
        ctx->f4.u32l = ctx->r1;
            goto L_801E5EC0;
    }
    goto skip_1;
    // 0x801E5EA8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    skip_1:
    // 0x801E5EAC: lui         $at, 0xC100
    ctx->r1 = S32(0XC100 << 16);
    // 0x801E5EB0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801E5EB4: b           L_801E5EC8
    // 0x801E5EB8: swc1        $f18, 0x70($a2)
    MEM_W(0X70, ctx->r6) = ctx->f18.u32l;
        goto L_801E5EC8;
    // 0x801E5EB8: swc1        $f18, 0x70($a2)
    MEM_W(0X70, ctx->r6) = ctx->f18.u32l;
    // 0x801E5EBC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
L_801E5EC0:
    // 0x801E5EC0: nop

    // 0x801E5EC4: swc1        $f4, 0x70($a2)
    MEM_W(0X70, ctx->r6) = ctx->f4.u32l;
L_801E5EC8:
    // 0x801E5EC8: jal         0x8003521C
    // 0x801E5ECC: sw          $t6, 0x7C($a2)
    MEM_W(0X7C, ctx->r6) = ctx->r14;
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x801E5ECC: sw          $t6, 0x7C($a2)
    MEM_W(0X7C, ctx->r6) = ctx->r14;
    after_1:
L_801E5ED0:
    // 0x801E5ED0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E5ED4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E5ED8: jr          $ra
    // 0x801E5EDC: nop

    TRACE_RETURN()
    return;
    // 0x801E5EDC: nop

;}
RECOMP_FUNC void func_801E4BF4_60FFD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E4BF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E4BF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E4BFC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801E4C00: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x801E4C04: sb          $t6, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r14;
    // 0x801E4C08: jal         0x801EEE54
    // 0x801E4C0C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801EEE54_61A234(rdram, ctx);
        goto after_0;
    // 0x801E4C0C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x801E4C10: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801E4C14: jal         0x801D31F0
    // 0x801E4C18: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    func_801D31F0_5FE5D0(rdram, ctx);
        goto after_1;
    // 0x801E4C18: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    after_1:
    // 0x801E4C1C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801E4C20: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801E4C24: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x801E4C28: nop

    // 0x801E4C2C: bc1fl       L_801E4C50
    if (!c1cs) {
        // 0x801E4C30: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E4C50;
    }
    goto skip_0;
    // 0x801E4C30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801E4C34: lw          $t7, -0x1130($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1130);
    // 0x801E4C38: lbu         $t8, 0x2C0($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X2C0);
    // 0x801E4C3C: bnel        $t8, $zero, L_801E4C50
    if (ctx->r24 != 0) {
        // 0x801E4C40: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E4C50;
    }
    goto skip_1;
    // 0x801E4C40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x801E4C44: jal         0x801E599C
    // 0x801E4C48: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801E599C_610D7C(rdram, ctx);
        goto after_2;
    // 0x801E4C48: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x801E4C4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E4C50:
    // 0x801E4C50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E4C54: jr          $ra
    // 0x801E4C58: nop

    TRACE_RETURN()
    return;
    // 0x801E4C58: nop

;}
RECOMP_FUNC void func_801E5144_610524(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E5144: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801E5148: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E514C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801E5150: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E5154: jal         0x801EEEC0
    // 0x801E5158: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_801EEEC0_61A2A0(rdram, ctx);
        goto after_0;
    // 0x801E5158: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x801E515C: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801E5160: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801E5164: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801E5168: lbu         $t7, 0x2C1($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X2C1);
    // 0x801E516C: bne         $t7, $at, L_801E51C8
    if (ctx->r15 != ctx->r1) {
        // 0x801E5170: nop
    
            goto L_801E51C8;
    }
    // 0x801E5170: nop

    // 0x801E5174: lw          $t8, 0x7C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X7C);
    // 0x801E5178: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x801E517C: bgtz        $t9, L_801E51C8
    if (SIGNED(ctx->r25) > 0) {
        // 0x801E5180: sw          $t9, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r25;
            goto L_801E51C8;
    }
    // 0x801E5180: sw          $t9, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r25;
    // 0x801E5184: beq         $v0, $zero, L_801E51C8
    if (ctx->r2 == 0) {
        // 0x801E5188: nop
    
            goto L_801E51C8;
    }
    // 0x801E5188: nop

    // 0x801E518C: jal         0x80038BC8
    // 0x801E5190: addiu       $a0, $zero, 0x12E
    ctx->r4 = ADD32(0, 0X12E);
    func_80038BC8_397C8(rdram, ctx);
        goto after_1;
    // 0x801E5190: addiu       $a0, $zero, 0x12E
    ctx->r4 = ADD32(0, 0X12E);
    after_1:
    // 0x801E5194: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E5198: addiu       $a1, $a1, -0x4E48
    ctx->r5 = ADD32(ctx->r5, -0X4E48);
    // 0x801E519C: jal         0x801D31CC
    // 0x801E51A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_2;
    // 0x801E51A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801E51A4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E51A8: addiu       $a1, $a1, -0x4F6C
    ctx->r5 = ADD32(ctx->r5, -0X4F6C);
    // 0x801E51AC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x801E51B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801E51B4: jal         0x801D34D0
    // 0x801E51B8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_801D34D0_5FE8B0(rdram, ctx);
        goto after_3;
    // 0x801E51B8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x801E51BC: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E51C0: jal         0x8003521C
    // 0x801E51C4: addiu       $a0, $a0, 0x51EC
    ctx->r4 = ADD32(ctx->r4, 0X51EC);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801E51C4: addiu       $a0, $a0, 0x51EC
    ctx->r4 = ADD32(ctx->r4, 0X51EC);
    after_4:
L_801E51C8:
    // 0x801E51C8: jal         0x801EEE54
    // 0x801E51CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801EEE54_61A234(rdram, ctx);
        goto after_5;
    // 0x801E51CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x801E51D0: jal         0x801EEEA0
    // 0x801E51D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801EEEA0_61A280(rdram, ctx);
        goto after_6;
    // 0x801E51D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x801E51D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801E51DC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801E51E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801E51E4: jr          $ra
    // 0x801E51E8: nop

    TRACE_RETURN()
    return;
    // 0x801E51E8: nop

;}
RECOMP_FUNC void func_801F2C24_61E004(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F2C24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F2C28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F2C2C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F2C30: lw          $t6, 0x7C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X7C);
    // 0x801F2C34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801F2C38: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x801F2C3C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x801F2C40: bgtz        $t7, L_801F2C60
    if (SIGNED(ctx->r15) > 0) {
        // 0x801F2C44: sw          $t7, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r15;
            goto L_801F2C60;
    }
    // 0x801F2C44: sw          $t7, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r15;
    // 0x801F2C48: jal         0x801D3E90
    // 0x801F2C4C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801D3E90_5FF270(rdram, ctx);
        goto after_0;
    // 0x801F2C4C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801F2C50: beq         $v0, $zero, L_801F2C60
    if (ctx->r2 == 0) {
        // 0x801F2C54: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_801F2C60;
    }
    // 0x801F2C54: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801F2C58: jal         0x801F0540
    // 0x801F2C5C: nop

    func_801F0540_61B920(rdram, ctx);
        goto after_1;
    // 0x801F2C5C: nop

    after_1:
L_801F2C60:
    // 0x801F2C60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F2C64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F2C68: jr          $ra
    // 0x801F2C6C: nop

    TRACE_RETURN()
    return;
    // 0x801F2C6C: nop

;}
RECOMP_FUNC void func_801F98E4_624CC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F98E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F98E8: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801F98EC: lw          $v1, -0x1130($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1130);
    // 0x801F98F0: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x801F98F4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801F98F8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F98FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F9900: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801F9904: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F9908: lui         $at, 0xC3EC
    ctx->r1 = S32(0XC3EC << 16);
    // 0x801F990C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F9910: addiu       $a1, $v1, 0x178
    ctx->r5 = ADD32(ctx->r3, 0X178);
    // 0x801F9914: lui         $at, 0xC190
    ctx->r1 = S32(0XC190 << 16);
    // 0x801F9918: addiu       $v0, $v1, 0xA0
    ctx->r2 = ADD32(ctx->r3, 0XA0);
    // 0x801F991C: swc1        $f0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f0.u32l;
    // 0x801F9920: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801F9924: lui         $at, 0xC3C8
    ctx->r1 = S32(0XC3C8 << 16);
    // 0x801F9928: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801F992C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801F9930: addiu       $a0, $a0, -0x6698
    ctx->r4 = ADD32(ctx->r4, -0X6698);
    // 0x801F9934: swc1        $f0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f0.u32l;
    // 0x801F9938: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x801F993C: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
    // 0x801F9940: swc1        $f6, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f6.u32l;
    // 0x801F9944: swc1        $f8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f8.u32l;
    // 0x801F9948: jal         0x8003521C
    // 0x801F994C: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x801F994C: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
    after_0:
    // 0x801F9950: jal         0x80038BC8
    // 0x801F9954: addiu       $a0, $zero, 0x27
    ctx->r4 = ADD32(0, 0X27);
    func_80038BC8_397C8(rdram, ctx);
        goto after_1;
    // 0x801F9954: addiu       $a0, $zero, 0x27
    ctx->r4 = ADD32(0, 0X27);
    after_1:
    // 0x801F9958: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F995C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F9960: jr          $ra
    // 0x801F9964: nop

    TRACE_RETURN()
    return;
    // 0x801F9964: nop

;}
RECOMP_FUNC void func_801D4D0C_6000EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D4D0C: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D4D10: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801D4D14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D4D18: sdc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X10, ctx->r29);
    // 0x801D4D1C: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x801D4D20: lwc1        $f0, 0xA0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XA0);
    // 0x801D4D24: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x801D4D28: mtc1        $a3, $f22
    ctx->f22.u32l = ctx->r7;
    // 0x801D4D2C: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x801D4D30: addiu       $v0, $v0, 0xA0
    ctx->r2 = ADD32(ctx->r2, 0XA0);
    // 0x801D4D34: bc1fl       L_801D4D64
    if (!c1cs) {
        // 0x801D4D38: c.lt.s      $f14, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
            goto L_801D4D64;
    }
    goto skip_0;
    // 0x801D4D38: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    skip_0:
    // 0x801D4D3C: add.s       $f4, $f0, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f12.fl;
    // 0x801D4D40: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x801D4D44: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x801D4D48: c.le.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl <= ctx->f0.fl;
    // 0x801D4D4C: nop

    // 0x801D4D50: bc1fl       L_801D4D64
    if (!c1cs) {
        // 0x801D4D54: c.lt.s      $f14, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
            goto L_801D4D64;
    }
    goto skip_1;
    // 0x801D4D54: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    skip_1:
    // 0x801D4D58: swc1        $f14, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f14.u32l;
    // 0x801D4D5C: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x801D4D60: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
L_801D4D64:
    // 0x801D4D64: nop

    // 0x801D4D68: bc1fl       L_801D4D94
    if (!c1cs) {
        // 0x801D4D6C: lwc1        $f0, 0x4($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
            goto L_801D4D94;
    }
    goto skip_2;
    // 0x801D4D6C: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    skip_2:
    // 0x801D4D70: sub.s       $f6, $f0, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x801D4D74: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
    // 0x801D4D78: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x801D4D7C: c.le.s      $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f8.fl <= ctx->f14.fl;
    // 0x801D4D80: nop

    // 0x801D4D84: bc1fl       L_801D4D94
    if (!c1cs) {
        // 0x801D4D88: lwc1        $f0, 0x4($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
            goto L_801D4D94;
    }
    goto skip_3;
    // 0x801D4D88: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    skip_3:
    // 0x801D4D8C: swc1        $f14, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f14.u32l;
    // 0x801D4D90: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
L_801D4D94:
    // 0x801D4D94: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x801D4D98: nop

    // 0x801D4D9C: bc1fl       L_801D4DCC
    if (!c1cs) {
        // 0x801D4DA0: c.lt.s      $f20, $f0
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
            goto L_801D4DCC;
    }
    goto skip_4;
    // 0x801D4DA0: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    skip_4:
    // 0x801D4DA4: add.s       $f10, $f0, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f12.fl;
    // 0x801D4DA8: swc1        $f10, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f10.u32l;
    // 0x801D4DAC: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x801D4DB0: c.le.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl <= ctx->f0.fl;
    // 0x801D4DB4: nop

    // 0x801D4DB8: bc1fl       L_801D4DCC
    if (!c1cs) {
        // 0x801D4DBC: c.lt.s      $f20, $f0
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
            goto L_801D4DCC;
    }
    goto skip_5;
    // 0x801D4DBC: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    skip_5:
    // 0x801D4DC0: swc1        $f20, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f20.u32l;
    // 0x801D4DC4: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x801D4DC8: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
L_801D4DCC:
    // 0x801D4DCC: nop

    // 0x801D4DD0: bc1fl       L_801D4DFC
    if (!c1cs) {
        // 0x801D4DD4: lwc1        $f0, 0x8($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
            goto L_801D4DFC;
    }
    goto skip_6;
    // 0x801D4DD4: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    skip_6:
    // 0x801D4DD8: sub.s       $f16, $f0, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x801D4DDC: swc1        $f16, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f16.u32l;
    // 0x801D4DE0: lwc1        $f18, 0x4($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X4);
    // 0x801D4DE4: c.le.s      $f18, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f18.fl <= ctx->f20.fl;
    // 0x801D4DE8: nop

    // 0x801D4DEC: bc1fl       L_801D4DFC
    if (!c1cs) {
        // 0x801D4DF0: lwc1        $f0, 0x8($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
            goto L_801D4DFC;
    }
    goto skip_7;
    // 0x801D4DF0: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    skip_7:
    // 0x801D4DF4: swc1        $f20, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f20.u32l;
    // 0x801D4DF8: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
L_801D4DFC:
    // 0x801D4DFC: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
    // 0x801D4E00: nop

    // 0x801D4E04: bc1fl       L_801D4E34
    if (!c1cs) {
        // 0x801D4E08: c.lt.s      $f22, $f0
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
            goto L_801D4E34;
    }
    goto skip_8;
    // 0x801D4E08: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
    skip_8:
    // 0x801D4E0C: add.s       $f4, $f0, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f12.fl;
    // 0x801D4E10: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x801D4E14: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801D4E18: c.le.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl <= ctx->f0.fl;
    // 0x801D4E1C: nop

    // 0x801D4E20: bc1fl       L_801D4E34
    if (!c1cs) {
        // 0x801D4E24: c.lt.s      $f22, $f0
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
            goto L_801D4E34;
    }
    goto skip_9;
    // 0x801D4E24: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
    skip_9:
    // 0x801D4E28: swc1        $f22, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f22.u32l;
    // 0x801D4E2C: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801D4E30: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
L_801D4E34:
    // 0x801D4E34: nop

    // 0x801D4E38: bc1fl       L_801D4E64
    if (!c1cs) {
        // 0x801D4E3C: lwc1        $f10, 0x0($v0)
        ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
            goto L_801D4E64;
    }
    goto skip_10;
    // 0x801D4E3C: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    skip_10:
    // 0x801D4E40: sub.s       $f6, $f0, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x801D4E44: swc1        $f6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f6.u32l;
    // 0x801D4E48: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801D4E4C: c.le.s      $f8, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f8.fl <= ctx->f22.fl;
    // 0x801D4E50: nop

    // 0x801D4E54: bc1fl       L_801D4E64
    if (!c1cs) {
        // 0x801D4E58: lwc1        $f10, 0x0($v0)
        ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
            goto L_801D4E64;
    }
    goto skip_11;
    // 0x801D4E58: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    skip_11:
    // 0x801D4E5C: swc1        $f22, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f22.u32l;
    // 0x801D4E60: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
L_801D4E64:
    // 0x801D4E64: c.eq.s      $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f14.fl == ctx->f10.fl;
    // 0x801D4E68: nop

    // 0x801D4E6C: bc1fl       L_801D4EA8
    if (!c1cs) {
        // 0x801D4E70: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801D4EA8;
    }
    goto skip_12;
    // 0x801D4E70: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_12:
    // 0x801D4E74: lwc1        $f16, 0x4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4);
    // 0x801D4E78: c.eq.s      $f20, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f20.fl == ctx->f16.fl;
    // 0x801D4E7C: nop

    // 0x801D4E80: bc1fl       L_801D4EA8
    if (!c1cs) {
        // 0x801D4E84: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801D4EA8;
    }
    goto skip_13;
    // 0x801D4E84: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_13:
    // 0x801D4E88: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801D4E8C: c.eq.s      $f22, $f18
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f22.fl == ctx->f18.fl;
    // 0x801D4E90: nop

    // 0x801D4E94: bc1fl       L_801D4EA8
    if (!c1cs) {
        // 0x801D4E98: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801D4EA8;
    }
    goto skip_14;
    // 0x801D4E98: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_14:
    // 0x801D4E9C: b           L_801D4EA8
    // 0x801D4EA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801D4EA8;
    // 0x801D4EA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801D4EA4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D4EA8:
    // 0x801D4EA8: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    // 0x801D4EAC: ldc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X10);
    // 0x801D4EB0: jr          $ra
    // 0x801D4EB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x801D4EB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80204FC4_6303A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80204FC4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80204FC8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80204FCC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80204FD0: lw          $t6, 0x7C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X7C);
    // 0x80204FD4: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80204FD8: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    // 0x80204FDC: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80204FE0: andi        $t9, $t7, 0x3
    ctx->r25 = ctx->r15 & 0X3;
    // 0x80204FE4: bne         $t9, $zero, L_80204FF8
    if (ctx->r25 != 0) {
        // 0x80204FE8: sw          $t7, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r15;
            goto L_80204FF8;
    }
    // 0x80204FE8: sw          $t7, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r15;
    // 0x80204FEC: jal         0x80205244
    // 0x80204FF0: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    func_80205244_630624(rdram, ctx);
        goto after_0;
    // 0x80204FF0: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    after_0:
    // 0x80204FF4: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
L_80204FF8:
    // 0x80204FF8: lw          $t0, 0x9C($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X9C);
    // 0x80204FFC: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80205000: addiu       $v0, $v0, -0x47A0
    ctx->r2 = ADD32(ctx->r2, -0X47A0);
    // 0x80205004: addiu       $v1, $t0, -0xA
    ctx->r3 = ADD32(ctx->r8, -0XA);
    // 0x80205008: bne         $v1, $zero, L_80205018
    if (ctx->r3 != 0) {
        // 0x8020500C: sw          $v1, 0x9C($a0)
        MEM_W(0X9C, ctx->r4) = ctx->r3;
            goto L_80205018;
    }
    // 0x8020500C: sw          $v1, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->r3;
    // 0x80205010: sw          $zero, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = 0;
    // 0x80205014: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80205018:
    // 0x80205018: lbu         $t2, 0xA($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0XA);
    // 0x8020501C: lbu         $t4, 0xB($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0XB);
    // 0x80205020: lbu         $t5, 0xC($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0XC);
    // 0x80205024: lbu         $t6, 0xD($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0XD);
    // 0x80205028: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x8020502C: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x80205030: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x80205034: addiu       $a1, $a1, -0x5238
    ctx->r5 = ADD32(ctx->r5, -0X5238);
    // 0x80205038: lbu         $a2, 0x8($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X8);
    // 0x8020503C: lbu         $a3, 0x9($v0)
    ctx->r7 = MEM_BU(ctx->r2, 0X9);
    // 0x80205040: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x80205044: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80205048: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8020504C: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x80205050: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x80205054: jal         0x8000E030
    // 0x80205058: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    func_8000E030_EC30(rdram, ctx);
        goto after_1;
    // 0x80205058: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    after_1:
    // 0x8020505C: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80205060: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80205064: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80205068: or          $t7, $v0, $at
    ctx->r15 = ctx->r2 | ctx->r1;
    // 0x8020506C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80205070: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x80205074: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x80205078: sw          $t8, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r24;
    // 0x8020507C: lwc1        $f6, 0xB0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XB0);
    // 0x80205080: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x80205084: lwc1        $f16, 0x20($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X20);
    // 0x80205088: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8020508C: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x80205090: lwc1        $f8, 0x24($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X24);
    // 0x80205094: swc1        $f10, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f10.u32l;
    // 0x80205098: lwc1        $f18, 0xB0($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0XB0);
    // 0x8020509C: mul.s       $f6, $f18, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x802050A0: sub.s       $f4, $f16, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f6.fl;
    // 0x802050A4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802050A8: swc1        $f4, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f4.u32l;
    // 0x802050AC: lwc1        $f10, 0xB0($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0XB0);
    // 0x802050B0: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x802050B4: mul.s       $f18, $f10, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x802050B8: c.le.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl <= ctx->f6.fl;
    // 0x802050BC: sub.s       $f16, $f8, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f18.fl;
    // 0x802050C0: bc1f        L_802050D0
    if (!c1cs) {
        // 0x802050C4: swc1        $f16, 0x24($s0)
        MEM_W(0X24, ctx->r16) = ctx->f16.u32l;
            goto L_802050D0;
    }
    // 0x802050C4: swc1        $f16, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f16.u32l;
    // 0x802050C8: jal         0x80035020
    // 0x802050CC: nop

    func_80035020_35C20(rdram, ctx);
        goto after_2;
    // 0x802050CC: nop

    after_2:
L_802050D0:
    // 0x802050D0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802050D4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x802050D8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x802050DC: jr          $ra
    // 0x802050E0: nop

    TRACE_RETURN()
    return;
    // 0x802050E0: nop

;}
RECOMP_FUNC void func_801E2AD8_60DEB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E2AD8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E2ADC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E2AE0: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x801E2AE4: bne         $a1, $zero, L_801E2AFC
    if (ctx->r5 != 0) {
        // 0x801E2AE8: or          $a2, $a1, $zero
        ctx->r6 = ctx->r5 | 0;
            goto L_801E2AFC;
    }
    // 0x801E2AE8: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x801E2AEC: jal         0x80034ED4
    // 0x801E2AF0: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_0;
    // 0x801E2AF0: nop

    after_0:
    // 0x801E2AF4: b           L_801E2B6C
    // 0x801E2AF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E2B6C;
    // 0x801E2AF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E2AFC:
    // 0x801E2AFC: lw          $t6, 0xA0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0XA0);
    // 0x801E2B00: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x801E2B04: sb          $t6, 0x5($a2)
    MEM_B(0X5, ctx->r6) = ctx->r14;
    // 0x801E2B08: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x801E2B0C: jal         0x801D614C
    // 0x801E2B10: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    func_801D614C_60152C(rdram, ctx);
        goto after_1;
    // 0x801E2B10: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_1:
    // 0x801E2B14: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x801E2B18: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x801E2B1C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801E2B20: lw          $t7, 0xA4($a3)
    ctx->r15 = MEM_W(ctx->r7, 0XA4);
    // 0x801E2B24: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x801E2B28: bgez        $t7, L_801E2B3C
    if (SIGNED(ctx->r15) >= 0) {
        // 0x801E2B2C: cvt.s.w     $f4, $f4
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
            goto L_801E2B3C;
    }
    // 0x801E2B2C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801E2B30: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E2B34: nop

    // 0x801E2B38: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_801E2B3C:
    // 0x801E2B3C: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x801E2B40: jal         0x801D2F40
    // 0x801E2B44: nop

    func_801D2F40_5FE320(rdram, ctx);
        goto after_2;
    // 0x801E2B44: nop

    after_2:
    // 0x801E2B48: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801E2B4C: nop

    // 0x801E2B50: c.eq.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl == ctx->f8.fl;
    // 0x801E2B54: nop

    // 0x801E2B58: bc1fl       L_801E2B6C
    if (!c1cs) {
        // 0x801E2B5C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E2B6C;
    }
    goto skip_0;
    // 0x801E2B5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801E2B60: jal         0x80034ED4
    // 0x801E2B64: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_3;
    // 0x801E2B64: nop

    after_3:
    // 0x801E2B68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E2B6C:
    // 0x801E2B6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E2B70: jr          $ra
    // 0x801E2B74: nop

    TRACE_RETURN()
    return;
    // 0x801E2B74: nop

;}
RECOMP_FUNC void func_801E47BC_60FB9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E47BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E47C0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E47C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E47C8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E47CC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801E47D0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801E47D4: addiu       $a1, $zero, 0x77
    ctx->r5 = ADD32(0, 0X77);
    // 0x801E47D8: jal         0x801D5064
    // 0x801E47DC: addiu       $a2, $zero, 0x77
    ctx->r6 = ADD32(0, 0X77);
    func_801D5064_600444(rdram, ctx);
        goto after_0;
    // 0x801E47DC: addiu       $a2, $zero, 0x77
    ctx->r6 = ADD32(0, 0X77);
    after_0:
    // 0x801E47E0: beql        $v0, $zero, L_801E47F4
    if (ctx->r2 == 0) {
        // 0x801E47E4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E47F4;
    }
    goto skip_0;
    // 0x801E47E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801E47E8: jal         0x80037090
    // 0x801E47EC: nop

    func_80037090_37C90(rdram, ctx);
        goto after_1;
    // 0x801E47EC: nop

    after_1:
    // 0x801E47F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E47F4:
    // 0x801E47F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E47F8: jr          $ra
    // 0x801E47FC: nop

    TRACE_RETURN()
    return;
    // 0x801E47FC: nop

;}
RECOMP_FUNC void func_801E24FC_60D8DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E24FC: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801E2500: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801E2504: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x801E2508: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x801E250C: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801E2510: lwc1        $f6, 0x60($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801E2514: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801E2518: lui         $a3, 0x8021
    ctx->r7 = S32(0X8021 << 16);
    // 0x801E251C: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x801E2520: ori         $t6, $zero, 0x8000
    ctx->r14 = 0 | 0X8000;
    // 0x801E2524: ori         $t7, $zero, 0x8000
    ctx->r15 = 0 | 0X8000;
    // 0x801E2528: ori         $t8, $zero, 0x8000
    ctx->r24 = 0 | 0X8000;
    // 0x801E252C: addiu       $t9, $zero, 0x4A8
    ctx->r25 = ADD32(0, 0X4A8);
    // 0x801E2530: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x801E2534: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x801E2538: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x801E253C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x801E2540: addiu       $a1, $a1, 0x2AD8
    ctx->r5 = ADD32(ctx->r5, 0X2AD8);
    // 0x801E2544: addiu       $a3, $a3, -0x5830
    ctx->r7 = ADD32(ctx->r7, -0X5830);
    // 0x801E2548: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801E254C: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x801E2550: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    // 0x801E2554: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    // 0x801E2558: swc1        $f12, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f12.u32l;
    // 0x801E255C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x801E2560: swc1        $f14, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f14.u32l;
    // 0x801E2564: jal         0x800358E8
    // 0x801E2568: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    func_800358E8_364E8(rdram, ctx);
        goto after_0;
    // 0x801E2568: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x801E256C: beq         $v0, $zero, L_801E25B0
    if (ctx->r2 == 0) {
        // 0x801E2570: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_801E25B0;
    }
    // 0x801E2570: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801E2574: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801E2578: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x801E257C: addiu       $t1, $zero, 0x19
    ctx->r9 = ADD32(0, 0X19);
    // 0x801E2580: swc1        $f8, 0x70($v0)
    MEM_W(0X70, ctx->r2) = ctx->f8.u32l;
    // 0x801E2584: lwc1        $f10, 0x68($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801E2588: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E258C: addiu       $a1, $a1, -0x5DF0
    ctx->r5 = ADD32(ctx->r5, -0X5DF0);
    // 0x801E2590: swc1        $f10, 0x74($v0)
    MEM_W(0X74, ctx->r2) = ctx->f10.u32l;
    // 0x801E2594: lwc1        $f16, 0x6C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801E2598: sw          $t0, 0xA0($v0)
    MEM_W(0XA0, ctx->r2) = ctx->r8;
    // 0x801E259C: sw          $t1, 0xA4($v0)
    MEM_W(0XA4, ctx->r2) = ctx->r9;
    // 0x801E25A0: swc1        $f16, 0x78($v0)
    MEM_W(0X78, ctx->r2) = ctx->f16.u32l;
    // 0x801E25A4: jal         0x801D31CC
    // 0x801E25A8: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_1;
    // 0x801E25A8: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    after_1:
    // 0x801E25AC: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
L_801E25B0:
    // 0x801E25B0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801E25B4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x801E25B8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x801E25BC: jr          $ra
    // 0x801E25C0: nop

    TRACE_RETURN()
    return;
    // 0x801E25C0: nop

;}
RECOMP_FUNC void func_801D4188_5FF568(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D4188: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x801D418C: lw          $t6, -0x70A0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X70A0);
    // 0x801D4190: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801D4194: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x801D4198: bne         $t6, $zero, L_801D41A8
    if (ctx->r14 != 0) {
        // 0x801D419C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_801D41A8;
    }
    // 0x801D419C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D41A0: b           L_801D4268
    // 0x801D41A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801D4268;
    // 0x801D41A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D41A8:
    // 0x801D41A8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x801D41AC: lw          $t7, -0x709C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X709C);
    // 0x801D41B0: bne         $t7, $zero, L_801D41C0
    if (ctx->r15 != 0) {
        // 0x801D41B4: nop
    
            goto L_801D41C0;
    }
    // 0x801D41B4: nop

    // 0x801D41B8: b           L_801D4268
    // 0x801D41BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801D4268;
    // 0x801D41BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D41C0:
    // 0x801D41C0: bne         $a2, $zero, L_801D41D0
    if (ctx->r6 != 0) {
        // 0x801D41C4: nop
    
            goto L_801D41D0;
    }
    // 0x801D41C4: nop

    // 0x801D41C8: b           L_801D4268
    // 0x801D41CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801D4268;
    // 0x801D41CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D41D0:
    // 0x801D41D0: bne         $a1, $zero, L_801D41E0
    if (ctx->r5 != 0) {
        // 0x801D41D4: nop
    
            goto L_801D41E0;
    }
    // 0x801D41D4: nop

    // 0x801D41D8: b           L_801D4268
    // 0x801D41DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801D4268;
    // 0x801D41DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D41E0:
    // 0x801D41E0: bnel        $a0, $zero, L_801D41F4
    if (ctx->r4 != 0) {
        // 0x801D41E4: lw          $v1, 0x18($a2)
        ctx->r3 = MEM_W(ctx->r6, 0X18);
            goto L_801D41F4;
    }
    goto skip_0;
    // 0x801D41E4: lw          $v1, 0x18($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X18);
    skip_0:
    // 0x801D41E8: b           L_801D4268
    // 0x801D41EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801D4268;
    // 0x801D41EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801D41F0: lw          $v1, 0x18($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X18);
L_801D41F4:
    // 0x801D41F4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D41F8: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x801D41FC: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801D4200: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801D4204: swc1        $f4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f4.u32l;
    // 0x801D4208: lwc1        $f6, 0xC($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0XC);
    // 0x801D420C: add.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f12.fl;
    // 0x801D4210: swc1        $f8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f8.u32l;
    // 0x801D4214: lwc1        $f10, 0x10($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X10);
    // 0x801D4218: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    // 0x801D421C: swc1        $f0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f0.u32l;
    // 0x801D4220: swc1        $f16, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f16.u32l;
    // 0x801D4224: swc1        $f10, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f10.u32l;
    // 0x801D4228: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801D422C: jal         0x8002A7BC
    // 0x801D4230: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_8002A7BC_2B3BC(rdram, ctx);
        goto after_0;
    // 0x801D4230: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x801D4234: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801D4238: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x801D423C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x801D4240: lh          $t8, 0x38($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X38);
    // 0x801D4244: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801D4248: bne         $t8, $at, L_801D4268
    if (ctx->r24 != ctx->r1) {
        // 0x801D424C: nop
    
            goto L_801D4268;
    }
    // 0x801D424C: nop

    // 0x801D4250: lwc1        $f18, 0xC($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XC);
    // 0x801D4254: lwc1        $f4, 0x1C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x801D4258: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801D425C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801D4260: b           L_801D4268
    // 0x801D4264: swc1        $f6, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f6.u32l;
        goto L_801D4268;
    // 0x801D4264: swc1        $f6, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f6.u32l;
L_801D4268:
    // 0x801D4268: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D426C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801D4270: jr          $ra
    // 0x801D4274: nop

    TRACE_RETURN()
    return;
    // 0x801D4274: nop

;}
RECOMP_FUNC void func_802017C8_62CBA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802017C8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802017CC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802017D0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802017D4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802017D8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802017DC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802017E0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802017E4: lui         $a1, 0xC3FA
    ctx->r5 = S32(0XC3FA << 16);
    // 0x802017E8: swc1        $f0, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f0.u32l;
    // 0x802017EC: swc1        $f0, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f0.u32l;
    // 0x802017F0: jal         0x801D6244
    // 0x802017F4: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    func_801D6244_601624(rdram, ctx);
        goto after_0;
    // 0x802017F4: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    after_0:
    // 0x802017F8: sb          $v0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r2;
    // 0x802017FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80201800: jal         0x801D6330
    // 0x80201804: lui         $a1, 0x42A2
    ctx->r5 = S32(0X42A2 << 16);
    func_801D6330_601710(rdram, ctx);
        goto after_1;
    // 0x80201804: lui         $a1, 0x42A2
    ctx->r5 = S32(0X42A2 << 16);
    after_1:
    // 0x80201808: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8020180C: lui         $a1, 0xC3C8
    ctx->r5 = S32(0XC3C8 << 16);
    // 0x80201810: jal         0x801D641C
    // 0x80201814: sb          $v0, 0x26($sp)
    MEM_B(0X26, ctx->r29) = ctx->r2;
    func_801D641C_6017FC(rdram, ctx);
        goto after_2;
    // 0x80201814: sb          $v0, 0x26($sp)
    MEM_B(0X26, ctx->r29) = ctx->r2;
    after_2:
    // 0x80201818: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8020181C: lw          $v1, -0x10C0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X10C0);
    // 0x80201820: lbu         $a2, 0x26($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X26);
    // 0x80201824: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    // 0x80201828: lbu         $t6, 0xC($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0XC);
    // 0x8020182C: beq         $t6, $zero, L_8020184C
    if (ctx->r14 == 0) {
        // 0x80201830: nop
    
            goto L_8020184C;
    }
    // 0x80201830: nop

    // 0x80201834: jal         0x80200684
    // 0x80201838: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80200684_62BA64(rdram, ctx);
        goto after_3;
    // 0x80201838: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8020183C: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x80201840: lw          $t7, -0x10C0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X10C0);
    // 0x80201844: b           L_802018A0
    // 0x80201848: sb          $zero, 0xB($t7)
    MEM_B(0XB, ctx->r15) = 0;
        goto L_802018A0;
    // 0x80201848: sb          $zero, 0xB($t7)
    MEM_B(0XB, ctx->r15) = 0;
L_8020184C:
    // 0x8020184C: beq         $a2, $zero, L_80201858
    if (ctx->r6 == 0) {
        // 0x80201850: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_80201858;
    }
    // 0x80201850: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80201854: sb          $t8, 0xB($v1)
    MEM_B(0XB, ctx->r3) = ctx->r24;
L_80201858:
    // 0x80201858: lbu         $t9, 0x27($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X27);
    // 0x8020185C: beq         $t9, $zero, L_80201898
    if (ctx->r25 == 0) {
        // 0x80201860: nop
    
            goto L_80201898;
    }
    // 0x80201860: nop

    // 0x80201864: beq         $a2, $zero, L_80201898
    if (ctx->r6 == 0) {
        // 0x80201868: nop
    
            goto L_80201898;
    }
    // 0x80201868: nop

    // 0x8020186C: beq         $a0, $zero, L_80201898
    if (ctx->r4 == 0) {
        // 0x80201870: nop
    
            goto L_80201898;
    }
    // 0x80201870: nop

    // 0x80201874: lw          $t0, 0x7C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X7C);
    // 0x80201878: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x8020187C: bne         $t1, $zero, L_80201898
    if (ctx->r9 != 0) {
        // 0x80201880: sw          $t1, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r9;
            goto L_80201898;
    }
    // 0x80201880: sw          $t1, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r9;
    // 0x80201884: jal         0x80200684
    // 0x80201888: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80200684_62BA64(rdram, ctx);
        goto after_4;
    // 0x80201888: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8020188C: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x80201890: lw          $t3, -0x10C0($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X10C0);
    // 0x80201894: sb          $zero, 0xB($t3)
    MEM_B(0XB, ctx->r11) = 0;
L_80201898:
    // 0x80201898: jal         0x8020407C
    // 0x8020189C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8020407C_62F45C(rdram, ctx);
        goto after_5;
    // 0x8020189C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
L_802018A0:
    // 0x802018A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802018A4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802018A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802018AC: jr          $ra
    // 0x802018B0: nop

    TRACE_RETURN()
    return;
    // 0x802018B0: nop

;}
RECOMP_FUNC void func_801EC2F0_6176D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EC2F0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801EC2F4: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801EC2F8: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801EC2FC: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801EC300: sw          $s1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r17;
    // 0x801EC304: sw          $s0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r16;
    // 0x801EC308: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x801EC30C: lw          $t7, 0x1D8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X1D8);
    // 0x801EC310: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    // 0x801EC314: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801EC318: lw          $v0, 0x18($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X18);
    // 0x801EC31C: lui         $at, 0xC396
    ctx->r1 = S32(0XC396 << 16);
    // 0x801EC320: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801EC324: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801EC328: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801EC32C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801EC330: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801EC334: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801EC338: lwc1        $f8, 0x1C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x801EC33C: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801EC340: addiu       $t8, $zero, 0x4B0
    ctx->r24 = ADD32(0, 0X4B0);
    // 0x801EC344: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x801EC348: lwc1        $f10, 0x20($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X20);
    // 0x801EC34C: addiu       $a0, $a0, -0x3B78
    ctx->r4 = ADD32(ctx->r4, -0X3B78);
    // 0x801EC350: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801EC354: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x801EC358: lwc1        $f16, 0x24($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X24);
    // 0x801EC35C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801EC360: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x801EC364: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801EC368: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x801EC36C: jal         0x80035854
    // 0x801EC370: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    func_80035854_36454(rdram, ctx);
        goto after_0;
    // 0x801EC370: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x801EC374: beq         $v0, $zero, L_801EC470
    if (ctx->r2 == 0) {
        // 0x801EC378: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_801EC470;
    }
    // 0x801EC378: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x801EC37C: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x801EC380: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801EC384: lw          $s1, 0x18($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X18);
    // 0x801EC388: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801EC38C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801EC390: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801EC394: lui         $t1, 0x800
    ctx->r9 = S32(0X800 << 16);
    // 0x801EC398: addiu       $t9, $zero, 0x51
    ctx->r25 = ADD32(0, 0X51);
    // 0x801EC39C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x801EC3A0: addiu       $t1, $t1, 0x6590
    ctx->r9 = ADD32(ctx->r9, 0X6590);
    // 0x801EC3A4: addiu       $t2, $zero, 0x3C
    ctx->r10 = ADD32(0, 0X3C);
    // 0x801EC3A8: addiu       $t3, $zero, 0xC8
    ctx->r11 = ADD32(0, 0XC8);
    // 0x801EC3AC: addiu       $t4, $zero, 0x1F4
    ctx->r12 = ADD32(0, 0X1F4);
    // 0x801EC3B0: addiu       $t5, $zero, 0x600
    ctx->r13 = ADD32(0, 0X600);
    // 0x801EC3B4: addiu       $t6, $zero, 0x300
    ctx->r14 = ADD32(0, 0X300);
    // 0x801EC3B8: addiu       $t7, $zero, 0x50
    ctx->r15 = ADD32(0, 0X50);
    // 0x801EC3BC: addiu       $t8, $zero, 0x28
    ctx->r24 = ADD32(0, 0X28);
    // 0x801EC3C0: sh          $t9, 0x5C($v0)
    MEM_H(0X5C, ctx->r2) = ctx->r25;
    // 0x801EC3C4: sb          $t0, 0x30($v0)
    MEM_B(0X30, ctx->r2) = ctx->r8;
    // 0x801EC3C8: sw          $t1, 0x48($v0)
    MEM_W(0X48, ctx->r2) = ctx->r9;
    // 0x801EC3CC: sb          $t2, 0x4C($v0)
    MEM_B(0X4C, ctx->r2) = ctx->r10;
    // 0x801EC3D0: sh          $t3, 0x3C($v0)
    MEM_H(0X3C, ctx->r2) = ctx->r11;
    // 0x801EC3D4: sh          $t4, 0x3E($v0)
    MEM_H(0X3E, ctx->r2) = ctx->r12;
    // 0x801EC3D8: sh          $zero, 0x40($v0)
    MEM_H(0X40, ctx->r2) = 0;
    // 0x801EC3DC: sw          $t5, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r13;
    // 0x801EC3E0: sw          $t6, 0x94($v0)
    MEM_W(0X94, ctx->r2) = ctx->r14;
    // 0x801EC3E4: sw          $zero, 0xA4($v0)
    MEM_W(0XA4, ctx->r2) = 0;
    // 0x801EC3E8: sw          $zero, 0xAC($v0)
    MEM_W(0XAC, ctx->r2) = 0;
    // 0x801EC3EC: sw          $zero, 0xB0($v0)
    MEM_W(0XB0, ctx->r2) = 0;
    // 0x801EC3F0: sw          $zero, 0xB4($v0)
    MEM_W(0XB4, ctx->r2) = 0;
    // 0x801EC3F4: sw          $t7, 0x7C($v0)
    MEM_W(0X7C, ctx->r2) = ctx->r15;
    // 0x801EC3F8: sw          $t8, 0x80($v0)
    MEM_W(0X80, ctx->r2) = ctx->r24;
    // 0x801EC3FC: addiu       $a1, $zero, 0x300
    ctx->r5 = ADD32(0, 0X300);
    // 0x801EC400: swc1        $f12, 0x90($v0)
    MEM_W(0X90, ctx->r2) = ctx->f12.u32l;
    // 0x801EC404: addiu       $a2, $s1, 0x8
    ctx->r6 = ADD32(ctx->r17, 0X8);
    // 0x801EC408: addiu       $a3, $s1, 0x10
    ctx->r7 = ADD32(ctx->r17, 0X10);
    // 0x801EC40C: swc1        $f18, 0xA0($v0)
    MEM_W(0XA0, ctx->r2) = ctx->f18.u32l;
    // 0x801EC410: jal         0x8000E630
    // 0x801EC414: swc1        $f4, 0xA8($v0)
    MEM_W(0XA8, ctx->r2) = ctx->f4.u32l;
    func_8000E630_F230(rdram, ctx);
        goto after_1;
    // 0x801EC414: swc1        $f4, 0xA8($v0)
    MEM_W(0XA8, ctx->r2) = ctx->f4.u32l;
    after_1:
    // 0x801EC418: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801EC41C: addiu       $a1, $a1, -0x4E58
    ctx->r5 = ADD32(ctx->r5, -0X4E58);
    // 0x801EC420: jal         0x801D2EE4
    // 0x801EC424: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_2;
    // 0x801EC424: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x801EC428: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801EC42C: lwc1        $f6, 0xA0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x801EC430: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801EC434: addiu       $a1, $a1, -0x5288
    ctx->r5 = ADD32(ctx->r5, -0X5288);
    // 0x801EC438: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x801EC43C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EC440: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801EC444: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801EC448: mfc1        $t0, $f8
    ctx->r8 = (int32_t)ctx->f8.u32l;
    // 0x801EC44C: jal         0x8000DF10
    // 0x801EC450: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    func_8000DF10_EB10(rdram, ctx);
        goto after_3;
    // 0x801EC450: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_3:
    // 0x801EC454: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801EC458: or          $t1, $v0, $at
    ctx->r9 = ctx->r2 | ctx->r1;
    // 0x801EC45C: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801EC460: or          $t2, $t1, $at
    ctx->r10 = ctx->r9 | ctx->r1;
    // 0x801EC464: addiu       $t3, $zero, 0x6
    ctx->r11 = ADD32(0, 0X6);
    // 0x801EC468: sw          $t2, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r10;
    // 0x801EC46C: sb          $t3, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r11;
L_801EC470:
    // 0x801EC470: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801EC474: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x801EC478: lw          $s0, 0x3C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X3C);
    // 0x801EC47C: lw          $s1, 0x40($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X40);
    // 0x801EC480: jr          $ra
    // 0x801EC484: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x801EC484: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_801ECE48_618228(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801ECE48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801ECE4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801ECE50: lw          $v0, 0x38($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X38);
    // 0x801ECE54: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801ECE58: beq         $v0, $zero, L_801ECEC4
    if (ctx->r2 == 0) {
        // 0x801ECE5C: nop
    
            goto L_801ECEC4;
    }
    // 0x801ECE5C: nop

    // 0x801ECE60: lbu         $t6, 0x4C($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X4C);
    // 0x801ECE64: addiu       $t7, $t6, -0x3C
    ctx->r15 = ADD32(ctx->r14, -0X3C);
    // 0x801ECE68: sltiu       $at, $t7, 0x20
    ctx->r1 = ctx->r15 < 0X20 ? 1 : 0;
    // 0x801ECE6C: beq         $at, $zero, L_801ECEB4
    if (ctx->r1 == 0) {
        // 0x801ECE70: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_801ECEB4;
    }
    // 0x801ECE70: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x801ECE74: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801ECE78: addu        $at, $at, $t7
    gpr jr_addend_801ECE80 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x801ECE7C: lw          $t7, -0x1E6C($at)
    ctx->r15 = ADD32(ctx->r1, -0X1E6C);
    // 0x801ECE80: jr          $t7
    // 0x801ECE84: nop

    switch (jr_addend_801ECE80 >> 2) {
        case 0: goto L_801ECE88; break;
        case 1: goto L_801ECE88; break;
        case 2: goto L_801ECE88; break;
        case 3: goto L_801ECEB4; break;
        case 4: goto L_801ECEB4; break;
        case 5: goto L_801ECEB4; break;
        case 6: goto L_801ECEB4; break;
        case 7: goto L_801ECEB4; break;
        case 8: goto L_801ECEB4; break;
        case 9: goto L_801ECEB4; break;
        case 10: goto L_801ECE88; break;
        case 11: goto L_801ECEB4; break;
        case 12: goto L_801ECEB4; break;
        case 13: goto L_801ECEB4; break;
        case 14: goto L_801ECEB4; break;
        case 15: goto L_801ECEB4; break;
        case 16: goto L_801ECEB4; break;
        case 17: goto L_801ECEB4; break;
        case 18: goto L_801ECEB4; break;
        case 19: goto L_801ECEB4; break;
        case 20: goto L_801ECE88; break;
        case 21: goto L_801ECEB4; break;
        case 22: goto L_801ECEB4; break;
        case 23: goto L_801ECEB4; break;
        case 24: goto L_801ECEB4; break;
        case 25: goto L_801ECEB4; break;
        case 26: goto L_801ECEB4; break;
        case 27: goto L_801ECEB4; break;
        case 28: goto L_801ECEB4; break;
        case 29: goto L_801ECEB4; break;
        case 30: goto L_801ECE88; break;
        case 31: goto L_801ECE88; break;
        default: switch_error(__func__, 0x801ECE80, 0x8020E194);
    }
    // 0x801ECE84: nop

L_801ECE88:
    // 0x801ECE88: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x801ECE8C: jal         0x801CEE80
    // 0x801ECE90: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_801CEE80_5FA260(rdram, ctx);
        goto after_0;
    // 0x801ECE90: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x801ECE94: jal         0x801D3894
    // 0x801ECE98: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801D3894_5FEC74(rdram, ctx);
        goto after_1;
    // 0x801ECE98: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x801ECE9C: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801ECEA0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801ECEA4: jal         0x8003522C
    // 0x801ECEA8: addiu       $a1, $a1, -0x3440
    ctx->r5 = ADD32(ctx->r5, -0X3440);
    func_8003522C_35E2C(rdram, ctx);
        goto after_2;
    // 0x801ECEA8: addiu       $a1, $a1, -0x3440
    ctx->r5 = ADD32(ctx->r5, -0X3440);
    after_2:
    // 0x801ECEAC: b           L_801ECECC
    // 0x801ECEB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801ECECC;
    // 0x801ECEB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801ECEB4:
    // 0x801ECEB4: jal         0x801D3894
    // 0x801ECEB8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_801D3894_5FEC74(rdram, ctx);
        goto after_3;
    // 0x801ECEB8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_3:
    // 0x801ECEBC: b           L_801ECECC
    // 0x801ECEC0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801ECECC;
    // 0x801ECEC0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801ECEC4:
    // 0x801ECEC4: jal         0x801D3894
    // 0x801ECEC8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_801D3894_5FEC74(rdram, ctx);
        goto after_4;
    // 0x801ECEC8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_4:
L_801ECECC:
    // 0x801ECECC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801ECED0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801ECED4: jr          $ra
    // 0x801ECED8: nop

    TRACE_RETURN()
    return;
    // 0x801ECED8: nop

;}
RECOMP_FUNC void func_801E6D00_6120E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E6D00: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801E6D04: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x801E6D08: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x801E6D0C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E6D10: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x801E6D14: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E6D18: jal         0x801D31F0
    // 0x801E6D1C: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    func_801D31F0_5FE5D0(rdram, ctx);
        goto after_0;
    // 0x801E6D1C: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    after_0:
    // 0x801E6D20: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E6D24: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x801E6D28: jal         0x801D3118
    // 0x801E6D2C: lui         $a2, 0x41A8
    ctx->r6 = S32(0X41A8 << 16);
    func_801D3118_5FE4F8(rdram, ctx);
        goto after_1;
    // 0x801E6D2C: lui         $a2, 0x41A8
    ctx->r6 = S32(0X41A8 << 16);
    after_1:
    // 0x801E6D30: beq         $v0, $zero, L_801E6D40
    if (ctx->r2 == 0) {
        // 0x801E6D34: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801E6D40;
    }
    // 0x801E6D34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E6D38: jal         0x801EB220
    // 0x801E6D3C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_801EB220_616600(rdram, ctx);
        goto after_2;
    // 0x801E6D3C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
L_801E6D40:
    // 0x801E6D40: lwc1        $f4, 0x28($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X28);
    // 0x801E6D44: lui         $at, 0x4036
    ctx->r1 = S32(0X4036 << 16);
    // 0x801E6D48: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801E6D4C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801E6D50: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801E6D54: lui         $at, 0x41B0
    ctx->r1 = S32(0X41B0 << 16);
    // 0x801E6D58: c.le.d      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.d <= ctx->f6.d;
    // 0x801E6D5C: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x801E6D60: bc1fl       L_801E6D84
    if (!c1cs) {
        // 0x801E6D64: lw          $t7, 0x94($s0)
        ctx->r15 = MEM_W(ctx->r16, 0X94);
            goto L_801E6D84;
    }
    goto skip_0;
    // 0x801E6D64: lw          $t7, 0x94($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X94);
    skip_0:
    // 0x801E6D68: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801E6D6C: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E6D70: addiu       $a0, $a0, 0x6DE0
    ctx->r4 = ADD32(ctx->r4, 0X6DE0);
    // 0x801E6D74: swc1        $f10, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->f10.u32l;
    // 0x801E6D78: jal         0x8003521C
    // 0x801E6D7C: sw          $t6, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r14;
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801E6D7C: sw          $t6, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r14;
    after_3:
    // 0x801E6D80: lw          $t7, 0x94($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X94);
L_801E6D84:
    // 0x801E6D84: addiu       $v0, $t7, -0x4
    ctx->r2 = ADD32(ctx->r15, -0X4);
    // 0x801E6D88: bgez        $v0, L_801E6D98
    if (SIGNED(ctx->r2) >= 0) {
        // 0x801E6D8C: sw          $v0, 0x94($s0)
        MEM_W(0X94, ctx->r16) = ctx->r2;
            goto L_801E6D98;
    }
    // 0x801E6D8C: sw          $v0, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r2;
    // 0x801E6D90: sw          $zero, 0x94($s0)
    MEM_W(0X94, ctx->r16) = 0;
    // 0x801E6D94: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801E6D98:
    // 0x801E6D98: lw          $t9, 0x90($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X90);
    // 0x801E6D9C: addu        $t0, $v0, $t9
    ctx->r8 = ADD32(ctx->r2, ctx->r25);
    // 0x801E6DA0: sh          $t0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r8;
    // 0x801E6DA4: lw          $t1, 0x9C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X9C);
    // 0x801E6DA8: addiu       $v1, $t1, 0x4
    ctx->r3 = ADD32(ctx->r9, 0X4);
    // 0x801E6DAC: slti        $at, $v1, 0x28
    ctx->r1 = SIGNED(ctx->r3) < 0X28 ? 1 : 0;
    // 0x801E6DB0: bne         $at, $zero, L_801E6DC0
    if (ctx->r1 != 0) {
        // 0x801E6DB4: sw          $v1, 0x9C($s0)
        MEM_W(0X9C, ctx->r16) = ctx->r3;
            goto L_801E6DC0;
    }
    // 0x801E6DB4: sw          $v1, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->r3;
    // 0x801E6DB8: addiu       $v1, $zero, 0x28
    ctx->r3 = ADD32(0, 0X28);
    // 0x801E6DBC: sw          $v1, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->r3;
L_801E6DC0:
    // 0x801E6DC0: lw          $t4, 0x98($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X98);
    // 0x801E6DC4: addu        $t5, $v1, $t4
    ctx->r13 = ADD32(ctx->r3, ctx->r12);
    // 0x801E6DC8: sh          $t5, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r13;
    // 0x801E6DCC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801E6DD0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x801E6DD4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x801E6DD8: jr          $ra
    // 0x801E6DDC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x801E6DDC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_801FDA20_628E00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FDA20: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801FDA24: lw          $t6, -0x10C0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X10C0);
    // 0x801FDA28: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801FDA2C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801FDA30: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801FDA34: lui         $at, 0xC4FA
    ctx->r1 = S32(0XC4FA << 16);
    // 0x801FDA38: sb          $zero, 0x815($t6)
    MEM_B(0X815, ctx->r14) = 0;
    // 0x801FDA3C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801FDA40: lwc1        $f4, 0x10($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X10);
    // 0x801FDA44: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801FDA48: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x801FDA4C: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x801FDA50: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801FDA54: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x801FDA58: bc1fl       L_801FDAC4
    if (!c1cs) {
        // 0x801FDA5C: mtc1        $zero, $f12
        ctx->f12.u32l = 0;
            goto L_801FDAC4;
    }
    goto skip_0;
    // 0x801FDA5C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    skip_0:
    // 0x801FDA60: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801FDA64: jal         0x801D3018
    // 0x801FDA68: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    func_801D3018_5FE3F8(rdram, ctx);
        goto after_0;
    // 0x801FDA68: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    after_0:
    // 0x801FDA6C: lui         $at, 0xC4FA
    ctx->r1 = S32(0XC4FA << 16);
    // 0x801FDA70: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801FDA74: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x801FDA78: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x801FDA7C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x801FDA80: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x801FDA84: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x801FDA88: jal         0x801D46B8
    // 0x801FDA8C: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    func_801D46B8_5FFA98(rdram, ctx);
        goto after_1;
    // 0x801FDA8C: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    after_1:
    // 0x801FDA90: jal         0x801D619C
    // 0x801FDA94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D619C_60157C(rdram, ctx);
        goto after_2;
    // 0x801FDA94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801FDA98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801FDA9C: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x801FDAA0: jal         0x801D3B18
    // 0x801FDAA4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_801D3B18_5FEEF8(rdram, ctx);
        goto after_3;
    // 0x801FDAA4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_3:
    // 0x801FDAA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801FDAAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801FDAB0: jal         0x801D3F00
    // 0x801FDAB4: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_801D3F00_5FF2E0(rdram, ctx);
        goto after_4;
    // 0x801FDAB4: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_4:
    // 0x801FDAB8: b           L_801FDB54
    // 0x801FDABC: nop

        goto L_801FDB54;
    // 0x801FDABC: nop

    // 0x801FDAC0: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
L_801FDAC4:
    // 0x801FDAC4: swc1        $f0, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f0.u32l;
    // 0x801FDAC8: sh          $zero, 0x18($a2)
    MEM_H(0X18, ctx->r6) = 0;
    // 0x801FDACC: sh          $v0, 0x16($a2)
    MEM_H(0X16, ctx->r6) = ctx->r2;
    // 0x801FDAD0: sh          $v0, 0x14($a2)
    MEM_H(0X14, ctx->r6) = ctx->r2;
    // 0x801FDAD4: swc1        $f12, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f12.u32l;
    // 0x801FDAD8: swc1        $f12, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f12.u32l;
    // 0x801FDADC: jal         0x8000DD58
    // 0x801FDAE0: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    func_8000DD58_E958(rdram, ctx);
        goto after_5;
    // 0x801FDAE0: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    after_5:
    // 0x801FDAE4: addiu       $t8, $v0, 0x23
    ctx->r24 = ADD32(ctx->r2, 0X23);
    // 0x801FDAE8: addiu       $t9, $zero, 0x100
    ctx->r25 = ADD32(0, 0X100);
    // 0x801FDAEC: sw          $t8, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r24;
    // 0x801FDAF0: jal         0x8000DDC0
    // 0x801FDAF4: sw          $t9, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r25;
    func_8000DDC0_E9C0(rdram, ctx);
        goto after_6;
    // 0x801FDAF4: sw          $t9, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r25;
    after_6:
    // 0x801FDAF8: beq         $v0, $zero, L_801FDB0C
    if (ctx->r2 == 0) {
        // 0x801FDAFC: lw          $a2, 0x2C($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X2C);
            goto L_801FDB0C;
    }
    // 0x801FDAFC: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x801FDB00: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x801FDB04: b           L_801FDB14
    // 0x801FDB08: sw          $t0, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r8;
        goto L_801FDB14;
    // 0x801FDB08: sw          $t0, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r8;
L_801FDB0C:
    // 0x801FDB0C: addiu       $t1, $zero, 0x3FF
    ctx->r9 = ADD32(0, 0X3FF);
    // 0x801FDB10: sw          $t1, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r9;
L_801FDB14:
    // 0x801FDB14: jal         0x801FFE14
    // 0x801FDB18: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    func_801FFE14_62B1F4(rdram, ctx);
        goto after_7;
    // 0x801FDB18: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    after_7:
    // 0x801FDB1C: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x801FDB20: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801FDB24: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x801FDB28: addiu       $v0, $v0, -0x10C0
    ctx->r2 = ADD32(ctx->r2, -0X10C0);
    // 0x801FDB2C: sb          $t2, 0x64($a2)
    MEM_B(0X64, ctx->r6) = ctx->r10;
    // 0x801FDB30: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x801FDB34: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FDB38: addiu       $a0, $a0, -0x2490
    ctx->r4 = ADD32(ctx->r4, -0X2490);
    // 0x801FDB3C: sb          $zero, 0x815($t3)
    MEM_B(0X815, ctx->r11) = 0;
    // 0x801FDB40: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x801FDB44: jal         0x8003521C
    // 0x801FDB48: sb          $zero, 0x816($t4)
    MEM_B(0X816, ctx->r12) = 0;
    func_8003521C_35E1C(rdram, ctx);
        goto after_8;
    // 0x801FDB48: sb          $zero, 0x816($t4)
    MEM_B(0X816, ctx->r12) = 0;
    after_8:
    // 0x801FDB4C: b           L_801FDB60
    // 0x801FDB50: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801FDB60;
    // 0x801FDB50: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801FDB54:
    // 0x801FDB54: jal         0x801FDF50
    // 0x801FDB58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801FDF50_629330(rdram, ctx);
        goto after_9;
    // 0x801FDB58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x801FDB5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801FDB60:
    // 0x801FDB60: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801FDB64: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801FDB68: jr          $ra
    // 0x801FDB6C: nop

    TRACE_RETURN()
    return;
    // 0x801FDB6C: nop

;}
RECOMP_FUNC void func_80200BA4_62BF84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80200BA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80200BA8: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x80200BAC: lw          $t7, -0x10C0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X10C0);
    // 0x80200BB0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80200BB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80200BB8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80200BBC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80200BC0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80200BC4: addiu       $a0, $a0, 0xBE8
    ctx->r4 = ADD32(ctx->r4, 0XBE8);
    // 0x80200BC8: jal         0x8003521C
    // 0x80200BCC: sb          $t6, 0x5($t7)
    MEM_B(0X5, ctx->r15) = ctx->r14;
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x80200BCC: sb          $t6, 0x5($t7)
    MEM_B(0X5, ctx->r15) = ctx->r14;
    after_0:
    // 0x80200BD0: jal         0x8020407C
    // 0x80200BD4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8020407C_62F45C(rdram, ctx);
        goto after_1;
    // 0x80200BD4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80200BD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80200BDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80200BE0: jr          $ra
    // 0x80200BE4: nop

    TRACE_RETURN()
    return;
    // 0x80200BE4: nop

;}
RECOMP_FUNC void func_801F060C_61B9EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F060C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801F0610: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F0614: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801F0618: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801F061C: lwc1        $f4, 0x74($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X74);
    // 0x801F0620: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F0624: ldc1        $f8, -0x1AC0($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X1AC0);
    // 0x801F0628: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801F062C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F0630: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x801F0634: addiu       $a0, $a0, 0x74
    ctx->r4 = ADD32(ctx->r4, 0X74);
    // 0x801F0638: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x801F063C: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801F0640: jal         0x801D725C
    // 0x801F0644: swc1        $f16, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f16.u32l;
    func_801D725C_60263C(rdram, ctx);
        goto after_0;
    // 0x801F0644: swc1        $f16, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f16.u32l;
    after_0:
    // 0x801F0648: jal         0x801D603C
    // 0x801F064C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D603C_60141C(rdram, ctx);
        goto after_1;
    // 0x801F064C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801F0650: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x801F0654: jal         0x801D2F40
    // 0x801F0658: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    func_801D2F40_5FE320(rdram, ctx);
        goto after_2;
    // 0x801F0658: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    after_2:
    // 0x801F065C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801F0660: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F0664: c.eq.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl == ctx->f18.fl;
    // 0x801F0668: nop

    // 0x801F066C: bc1fl       L_801F0680
    if (!c1cs) {
        // 0x801F0670: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801F0680;
    }
    goto skip_0;
    // 0x801F0670: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801F0674: jal         0x801F0690
    // 0x801F0678: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    func_801F0690_61BA70(rdram, ctx);
        goto after_3;
    // 0x801F0678: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    after_3:
    // 0x801F067C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801F0680:
    // 0x801F0680: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801F0684: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801F0688: jr          $ra
    // 0x801F068C: nop

    TRACE_RETURN()
    return;
    // 0x801F068C: nop

;}
RECOMP_FUNC void func_801EFBC4_61AFA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EFBC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801EFBC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801EFBCC: lui         $at, 0xC308
    ctx->r1 = S32(0XC308 << 16);
    // 0x801EFBD0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801EFBD4: lui         $at, 0xC3FA
    ctx->r1 = S32(0XC3FA << 16);
    // 0x801EFBD8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801EFBDC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801EFBE0: sh          $zero, 0x14($a1)
    MEM_H(0X14, ctx->r5) = 0;
    // 0x801EFBE4: sh          $zero, 0x16($a1)
    MEM_H(0X16, ctx->r5) = 0;
    // 0x801EFBE8: sh          $zero, 0x18($a1)
    MEM_H(0X18, ctx->r5) = 0;
    // 0x801EFBEC: swc1        $f4, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f4.u32l;
    // 0x801EFBF0: swc1        $f0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f0.u32l;
    // 0x801EFBF4: swc1        $f6, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f6.u32l;
    // 0x801EFBF8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EFBFC: swc1        $f0, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f0.u32l;
    // 0x801EFC00: lwc1        $f8, -0x1AD0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1AD0);
    // 0x801EFC04: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801EFC08: addiu       $a1, $a1, -0x4D28
    ctx->r5 = ADD32(ctx->r5, -0X4D28);
    // 0x801EFC0C: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x801EFC10: jal         0x801D31CC
    // 0x801EFC14: swc1        $f8, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f8.u32l;
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_0;
    // 0x801EFC14: swc1        $f8, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f8.u32l;
    after_0:
    // 0x801EFC18: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801EFC1C: jal         0x8003521C
    // 0x801EFC20: addiu       $a0, $a0, -0x3CC
    ctx->r4 = ADD32(ctx->r4, -0X3CC);
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x801EFC20: addiu       $a0, $a0, -0x3CC
    ctx->r4 = ADD32(ctx->r4, -0X3CC);
    after_1:
    // 0x801EFC24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801EFC28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801EFC2C: jr          $ra
    // 0x801EFC30: nop

    TRACE_RETURN()
    return;
    // 0x801EFC30: nop

;}
RECOMP_FUNC void func_801D1D50_5FD130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D1D50: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801D1D54: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801D1D58: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801D1D5C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801D1D60: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x801D1D64: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x801D1D68: lbu         $v0, 0x2C1($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X2C1);
    // 0x801D1D6C: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x801D1D70: bne         $v0, $at, L_801D1D88
    if (ctx->r2 != ctx->r1) {
        // 0x801D1D74: nop
    
            goto L_801D1D88;
    }
    // 0x801D1D74: nop

    // 0x801D1D78: jal         0x80034ED4
    // 0x801D1D7C: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_0;
    // 0x801D1D7C: nop

    after_0:
    // 0x801D1D80: b           L_801D1E34
    // 0x801D1D84: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_801D1E34;
    // 0x801D1D84: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_801D1D88:
    // 0x801D1D88: beq         $v0, $zero, L_801D1D98
    if (ctx->r2 == 0) {
        // 0x801D1D8C: lw          $a0, 0x34($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X34);
            goto L_801D1D98;
    }
    // 0x801D1D8C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x801D1D90: jal         0x801D2F40
    // 0x801D1D94: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    func_801D2F40_5FE320(rdram, ctx);
        goto after_1;
    // 0x801D1D94: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    after_1:
L_801D1D98:
    // 0x801D1D98: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x801D1D9C: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x801D1DA0: lui         $t8, 0x4
    ctx->r24 = S32(0X4 << 16);
    // 0x801D1DA4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801D1DA8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x801D1DAC: lhu         $t8, -0x520C($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X520C);
    // 0x801D1DB0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x801D1DB4: bnel        $t8, $at, L_801D1E34
    if (ctx->r24 != ctx->r1) {
        // 0x801D1DB8: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_801D1E34;
    }
    goto skip_0;
    // 0x801D1DB8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x801D1DBC: lw          $t9, -0x1130($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1130);
    // 0x801D1DC0: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x801D1DC4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x801D1DC8: lw          $t0, 0x2C8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X2C8);
    // 0x801D1DCC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x801D1DD0: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x801D1DD4: andi        $t1, $t0, 0x3
    ctx->r9 = ctx->r8 & 0X3;
    // 0x801D1DD8: bnel        $t1, $zero, L_801D1E34
    if (ctx->r9 != 0) {
        // 0x801D1DDC: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_801D1E34;
    }
    goto skip_1;
    // 0x801D1DDC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_1:
    // 0x801D1DE0: lwc1        $f4, 0x8($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X8);
    // 0x801D1DE4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801D1DE8: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x801D1DEC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801D1DF0: lwc1        $f6, 0xC($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0XC);
    // 0x801D1DF4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D1DF8: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x801D1DFC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801D1E00: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801D1E04: lui         $a2, 0x3ECC
    ctx->r6 = S32(0X3ECC << 16);
    // 0x801D1E08: lui         $a3, 0x3DCC
    ctx->r7 = S32(0X3DCC << 16);
    // 0x801D1E0C: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x801D1E10: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x801D1E14: lwc1        $f16, 0x10($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X10);
    // 0x801D1E18: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x801D1E1C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801D1E20: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801D1E24: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    // 0x801D1E28: jal         0x801DFB90
    // 0x801D1E2C: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    func_801DFB90_60AF70(rdram, ctx);
        goto after_2;
    // 0x801D1E2C: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x801D1E30: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_801D1E34:
    // 0x801D1E34: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801D1E38: jr          $ra
    // 0x801D1E3C: nop

    TRACE_RETURN()
    return;
    // 0x801D1E3C: nop

;}
RECOMP_FUNC void func_801D60B4_601494(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D60B4: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x801D60B8: lwc1        $f6, 0x74($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X74);
    // 0x801D60BC: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801D60C0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801D60C4: jr          $ra
    // 0x801D60C8: swc1        $f8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x801D60C8: swc1        $f8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_801FBAD8_626EB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FBAD8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801FBADC: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801FBAE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801FBAE4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801FBAE8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801FBAEC: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    // 0x801FBAF0: jal         0x801D2F40
    // 0x801FBAF4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_801D2F40_5FE320(rdram, ctx);
        goto after_0;
    // 0x801FBAF4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x801FBAF8: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801FBAFC: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x801FBB00: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x801FBB04: lw          $t6, 0x7C($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X7C);
    // 0x801FBB08: lui         $a1, 0x3E4C
    ctx->r5 = S32(0X3E4C << 16);
    // 0x801FBB0C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x801FBB10: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x801FBB14: bne         $t7, $zero, L_801FBB38
    if (ctx->r15 != 0) {
        // 0x801FBB18: sw          $t7, 0x7C($a2)
        MEM_W(0X7C, ctx->r6) = ctx->r15;
            goto L_801FBB38;
    }
    // 0x801FBB18: sw          $t7, 0x7C($a2)
    MEM_W(0X7C, ctx->r6) = ctx->r15;
    // 0x801FBB1C: lw          $t0, -0x1130($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1130);
    // 0x801FBB20: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FBB24: addiu       $a0, $a0, -0x448C
    ctx->r4 = ADD32(ctx->r4, -0X448C);
    // 0x801FBB28: jal         0x8003521C
    // 0x801FBB2C: sb          $t9, 0x2C1($t0)
    MEM_B(0X2C1, ctx->r8) = ctx->r25;
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x801FBB2C: sb          $t9, 0x2C1($t0)
    MEM_B(0X2C1, ctx->r8) = ctx->r25;
    after_1:
    // 0x801FBB30: b           L_801FBB68
    // 0x801FBB34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801FBB68;
    // 0x801FBB34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FBB38:
    // 0x801FBB38: jal         0x801D6B8C
    // 0x801FBB3C: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    func_801D6B8C_601F6C(rdram, ctx);
        goto after_2;
    // 0x801FBB3C: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    after_2:
    // 0x801FBB40: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x801FBB44: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x801FBB48: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801FBB4C: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801FBB50: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801FBB54: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801FBB58: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x801FBB5C: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801FBB60: swc1        $f16, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f16.u32l;
    // 0x801FBB64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FBB68:
    // 0x801FBB68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801FBB6C: jr          $ra
    // 0x801FBB70: nop

    TRACE_RETURN()
    return;
    // 0x801FBB70: nop

;}
RECOMP_FUNC void func_801DA3CC_6057AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DA3CC: addiu       $sp, $sp, -0x110
    ctx->r29 = ADD32(ctx->r29, -0X110);
    // 0x801DA3D0: sdc1        $f28, 0x60($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X60, ctx->r29);
    // 0x801DA3D4: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x801DA3D8: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x801DA3DC: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x801DA3E0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801DA3E4: sdc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X40, ctx->r29);
    // 0x801DA3E8: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801DA3EC: mul.s       $f20, $f28, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = MUL_S(ctx->f28.fl, ctx->f4.fl);
    // 0x801DA3F0: sw          $fp, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r30;
    // 0x801DA3F4: sw          $s2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r18;
    // 0x801DA3F8: sdc1        $f24, 0x50($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X50, ctx->r29);
    // 0x801DA3FC: addiu       $t7, $t7, -0x6310
    ctx->r15 = ADD32(ctx->r15, -0X6310);
    // 0x801DA400: or          $fp, $a0, $zero
    ctx->r30 = ctx->r4 | 0;
    // 0x801DA404: sw          $ra, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r31;
    // 0x801DA408: sw          $s7, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r23;
    // 0x801DA40C: sw          $s6, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r22;
    // 0x801DA410: sw          $s5, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r21;
    // 0x801DA414: sw          $s4, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r20;
    // 0x801DA418: sw          $s3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r19;
    // 0x801DA41C: sw          $s1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r17;
    // 0x801DA420: sw          $s0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r16;
    // 0x801DA424: sdc1        $f26, 0x58($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X58, ctx->r29);
    // 0x801DA428: sdc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X48, ctx->r29);
    // 0x801DA42C: mov.s       $f24, $f20
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    ctx->f24.fl = ctx->f20.fl;
    // 0x801DA430: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x801DA434: addiu       $t0, $t7, 0x24
    ctx->r8 = ADD32(ctx->r15, 0X24);
    // 0x801DA438: addiu       $t6, $sp, 0x98
    ctx->r14 = ADD32(ctx->r29, 0X98);
L_801DA43C:
    // 0x801DA43C: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x801DA440: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x801DA444: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x801DA448: sw          $at, -0xC($t6)
    MEM_W(-0XC, ctx->r14) = ctx->r1;
    // 0x801DA44C: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x801DA450: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x801DA454: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x801DA458: bne         $t7, $t0, L_801DA43C
    if (ctx->r15 != ctx->r8) {
        // 0x801DA45C: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_801DA43C;
    }
    // 0x801DA45C: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x801DA460: lw          $s0, 0x18($fp)
    ctx->r16 = MEM_W(ctx->r30, 0X18);
    // 0x801DA464: lw          $s1, 0x18($a1)
    ctx->r17 = MEM_W(ctx->r5, 0X18);
    // 0x801DA468: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x801DA46C: lw          $a3, 0x0($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X0);
    // 0x801DA470: beq         $a3, $zero, L_801DA480
    if (ctx->r7 == 0) {
        // 0x801DA474: or          $a1, $a3, $zero
        ctx->r5 = ctx->r7 | 0;
            goto L_801DA480;
    }
    // 0x801DA474: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x801DA478: jal         0x80036158
    // 0x801DA47C: addiu       $a2, $zero, 0x7F
    ctx->r6 = ADD32(0, 0X7F);
    func_80036158_36D58(rdram, ctx);
        goto after_0;
    // 0x801DA47C: addiu       $a2, $zero, 0x7F
    ctx->r6 = ADD32(0, 0X7F);
    after_0:
L_801DA480:
    // 0x801DA480: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x801DA484: lui         $at, 0x4475
    ctx->r1 = S32(0X4475 << 16);
    // 0x801DA488: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801DA48C: swc1        $f22, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f22.u32l;
    // 0x801DA490: swc1        $f22, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f22.u32l;
    // 0x801DA494: lwc1        $f6, 0x24($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X24);
    // 0x801DA498: addiu       $t1, $sp, 0xE0
    ctx->r9 = ADD32(ctx->r29, 0XE0);
    // 0x801DA49C: addiu       $t2, $sp, 0xDC
    ctx->r10 = ADD32(ctx->r29, 0XDC);
    // 0x801DA4A0: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801DA4A4: addiu       $a3, $sp, 0xE4
    ctx->r7 = ADD32(ctx->r29, 0XE4);
    // 0x801DA4A8: swc1        $f10, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f10.u32l;
    // 0x801DA4AC: lhu         $a2, 0x18($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X18);
    // 0x801DA4B0: lhu         $a1, 0x16($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X16);
    // 0x801DA4B4: lhu         $a0, 0x14($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X14);
    // 0x801DA4B8: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x801DA4BC: jal         0x8000E808
    // 0x801DA4C0: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    func_8000E808_F408(rdram, ctx);
        goto after_1;
    // 0x801DA4C0: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_1:
    // 0x801DA4C4: lwc1        $f6, 0xC($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0XC);
    // 0x801DA4C8: lwc1        $f8, 0xE0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x801DA4CC: lwc1        $f16, 0x8($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801DA4D0: lwc1        $f18, 0xE4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x801DA4D4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801DA4D8: lwc1        $f12, 0x8($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801DA4DC: lwc1        $f14, 0xC($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801DA4E0: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801DA4E4: lw          $a2, 0x10($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X10);
    // 0x801DA4E8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x801DA4EC: lwc1        $f16, 0x10($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801DA4F0: lwc1        $f18, 0xDC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x801DA4F4: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x801DA4F8: addiu       $t3, $sp, 0xC2
    ctx->r11 = ADD32(ctx->r29, 0XC2);
    // 0x801DA4FC: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801DA500: addiu       $t4, $sp, 0xC0
    ctx->r12 = ADD32(ctx->r29, 0XC0);
    // 0x801DA504: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x801DA508: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x801DA50C: jal         0x8000EC04
    // 0x801DA510: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_8000EC04_F804(rdram, ctx);
        goto after_2;
    // 0x801DA510: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x801DA514: lhu         $t5, 0xC2($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0XC2);
    // 0x801DA518: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801DA51C: lwc1        $f16, 0xC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801DA520: sh          $t5, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r13;
    // 0x801DA524: lhu         $t9, 0xC0($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0XC0);
    // 0x801DA528: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x801DA52C: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801DA530: sh          $t9, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r25;
    // 0x801DA534: lwc1        $f6, 0xE4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x801DA538: lwc1        $f10, 0xE0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x801DA53C: lwc1        $f18, 0xDC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x801DA540: sub.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x801DA544: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DA548: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x801DA54C: sub.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x801DA550: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x801DA554: sub.s       $f14, $f18, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x801DA558: mul.s       $f8, $f12, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x801DA55C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801DA560: mul.s       $f16, $f14, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x801DA564: add.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801DA568: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x801DA56C: div.s       $f18, $f0, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = DIV_S(ctx->f0.fl, ctx->f20.fl);
    // 0x801DA570: mov.s       $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    ctx->f26.fl = ctx->f0.fl;
    // 0x801DA574: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x801DA578: mfc1        $s7, $f4
    ctx->r23 = (int32_t)ctx->f4.u32l;
    // 0x801DA57C: jal         0x8000ED5C
    // 0x801DA580: nop

    func_8000ED5C_F95C(rdram, ctx);
        goto after_3;
    // 0x801DA580: nop

    after_3:
    // 0x801DA584: lui         $at, 0x4475
    ctx->r1 = S32(0X4475 << 16);
    // 0x801DA588: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DA58C: lwc1        $f8, 0x24($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X24);
    // 0x801DA590: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x801DA594: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801DA598: sub.s       $f2, $f0, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x801DA59C: c.lt.s      $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f22.fl < ctx->f2.fl;
    // 0x801DA5A0: nop

    // 0x801DA5A4: bc1fl       L_801DA6D8
    if (!c1cs) {
        // 0x801DA5A8: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_801DA6D8;
    }
    goto skip_0;
    // 0x801DA5A8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_0:
    // 0x801DA5AC: bltz        $s7, L_801DA6CC
    if (SIGNED(ctx->r23) < 0) {
        // 0x801DA5B0: lui         $s6, 0x8021
        ctx->r22 = S32(0X8021 << 16);
            goto L_801DA6CC;
    }
    // 0x801DA5B0: lui         $s6, 0x8021
    ctx->r22 = S32(0X8021 << 16);
    // 0x801DA5B4: addiu       $s6, $s6, -0x5AA0
    ctx->r22 = ADD32(ctx->r22, -0X5AA0);
    // 0x801DA5B8: addiu       $s5, $sp, 0xD0
    ctx->r21 = ADD32(ctx->r29, 0XD0);
    // 0x801DA5BC: addiu       $s4, $sp, 0xD4
    ctx->r20 = ADD32(ctx->r29, 0XD4);
    // 0x801DA5C0: addiu       $s3, $sp, 0xD8
    ctx->r19 = ADD32(ctx->r29, 0XD8);
    // 0x801DA5C4: mtc1        $s2, $f16
    ctx->f16.u32l = ctx->r18;
L_801DA5C8:
    // 0x801DA5C8: swc1        $f22, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f22.u32l;
    // 0x801DA5CC: swc1        $f22, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f22.u32l;
    // 0x801DA5D0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x801DA5D4: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    // 0x801DA5D8: mul.s       $f20, $f18, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f20.fl = MUL_S(ctx->f18.fl, ctx->f24.fl);
    // 0x801DA5DC: swc1        $f20, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f20.u32l;
    // 0x801DA5E0: lhu         $a2, 0x18($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X18);
    // 0x801DA5E4: lhu         $a1, 0x16($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X16);
    // 0x801DA5E8: lhu         $a0, 0x14($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X14);
    // 0x801DA5EC: sw          $s5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r21;
    // 0x801DA5F0: jal         0x8000E808
    // 0x801DA5F4: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    func_8000E808_F408(rdram, ctx);
        goto after_4;
    // 0x801DA5F4: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    after_4:
    // 0x801DA5F8: sub.s       $f0, $f26, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f26.fl - ctx->f20.fl;
    // 0x801DA5FC: lwc1        $f8, 0xE4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x801DA600: lwc1        $f10, 0xD8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x801DA604: c.le.s      $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f24.fl <= ctx->f0.fl;
    // 0x801DA608: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801DA60C: bc1fl       L_801DA620
    if (!c1cs) {
        // 0x801DA610: div.s       $f4, $f0, $f28
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f28.fl);
            goto L_801DA620;
    }
    goto skip_1;
    // 0x801DA610: div.s       $f4, $f0, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f28.fl);
    skip_1:
    // 0x801DA614: b           L_801DA62C
    // 0x801DA618: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_801DA62C;
    // 0x801DA618: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x801DA61C: div.s       $f4, $f0, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f28.fl);
L_801DA620:
    // 0x801DA620: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x801DA624: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x801DA628: nop

L_801DA62C:
    // 0x801DA62C: lwc1        $f18, 0x8($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801DA630: lwc1        $f6, 0xE0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x801DA634: lwc1        $f8, 0xD4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x801DA638: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801DA63C: lwc1        $f16, 0xC($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0XC);
    // 0x801DA640: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x801DA644: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801DA648: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x801DA64C: lwc1        $f4, 0xDC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x801DA650: lwc1        $f6, 0xD0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x801DA654: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801DA658: addu        $a1, $sp, $t7
    ctx->r5 = ADD32(ctx->r29, ctx->r15);
    // 0x801DA65C: lw          $a1, 0x98($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X98);
    // 0x801DA660: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801DA664: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x801DA668: lwc1        $f10, 0x10($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801DA66C: addiu       $t3, $zero, 0x4A8
    ctx->r11 = ADD32(0, 0X4A8);
    // 0x801DA670: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x801DA674: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801DA678: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x801DA67C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x801DA680: lhu         $t6, 0x14($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X14);
    // 0x801DA684: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x801DA688: lhu         $t1, 0x16($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X16);
    // 0x801DA68C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x801DA690: lhu         $t2, 0x18($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X18);
    // 0x801DA694: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x801DA698: lwc1        $f18, 0x1C($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x801DA69C: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    // 0x801DA6A0: lwc1        $f4, 0x20($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X20);
    // 0x801DA6A4: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x801DA6A8: lwc1        $f6, 0x24($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X24);
    // 0x801DA6AC: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801DA6B0: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x801DA6B4: jal         0x8000DBF0
    // 0x801DA6B8: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_5;
    // 0x801DA6B8: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    after_5:
    // 0x801DA6BC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x801DA6C0: slt         $at, $s7, $s2
    ctx->r1 = SIGNED(ctx->r23) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x801DA6C4: beql        $at, $zero, L_801DA5C8
    if (ctx->r1 == 0) {
        // 0x801DA6C8: mtc1        $s2, $f16
        ctx->f16.u32l = ctx->r18;
            goto L_801DA5C8;
    }
    goto skip_2;
    // 0x801DA6C8: mtc1        $s2, $f16
    ctx->f16.u32l = ctx->r18;
    skip_2:
L_801DA6CC:
    // 0x801DA6CC: b           L_801DA6DC
    // 0x801DA6D0: mov.s       $f0, $f26
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    ctx->f0.fl = ctx->f26.fl;
        goto L_801DA6DC;
    // 0x801DA6D0: mov.s       $f0, $f26
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    ctx->f0.fl = ctx->f26.fl;
    // 0x801DA6D4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
L_801DA6D8:
    // 0x801DA6D8: nop

L_801DA6DC:
    // 0x801DA6DC: lw          $ra, 0x8C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X8C);
    // 0x801DA6E0: ldc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X40);
    // 0x801DA6E4: ldc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X48);
    // 0x801DA6E8: ldc1        $f24, 0x50($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X50);
    // 0x801DA6EC: ldc1        $f26, 0x58($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X58);
    // 0x801DA6F0: ldc1        $f28, 0x60($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X60);
    // 0x801DA6F4: lw          $s0, 0x68($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X68);
    // 0x801DA6F8: lw          $s1, 0x6C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X6C);
    // 0x801DA6FC: lw          $s2, 0x70($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X70);
    // 0x801DA700: lw          $s3, 0x74($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X74);
    // 0x801DA704: lw          $s4, 0x78($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X78);
    // 0x801DA708: lw          $s5, 0x7C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X7C);
    // 0x801DA70C: lw          $s6, 0x80($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X80);
    // 0x801DA710: lw          $s7, 0x84($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X84);
    // 0x801DA714: lw          $fp, 0x88($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X88);
    // 0x801DA718: jr          $ra
    // 0x801DA71C: addiu       $sp, $sp, 0x110
    ctx->r29 = ADD32(ctx->r29, 0X110);
    TRACE_RETURN()
    return;
    // 0x801DA71C: addiu       $sp, $sp, 0x110
    ctx->r29 = ADD32(ctx->r29, 0X110);
;}
RECOMP_FUNC void func_801F6BCC_621FAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F6BCC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801F6BD0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F6BD4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801F6BD8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F6BDC: jal         0x801F732C
    // 0x801F6BE0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_801F732C_62270C(rdram, ctx);
        goto after_0;
    // 0x801F6BE0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F6BE4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x801F6BE8: jal         0x801D2F40
    // 0x801F6BEC: lui         $a1, 0xC1A0
    ctx->r5 = S32(0XC1A0 << 16);
    func_801D2F40_5FE320(rdram, ctx);
        goto after_1;
    // 0x801F6BEC: lui         $a1, 0xC1A0
    ctx->r5 = S32(0XC1A0 << 16);
    after_1:
    // 0x801F6BF0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801F6BF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F6BF8: lui         $a1, 0x3E4C
    ctx->r5 = S32(0X3E4C << 16);
    // 0x801F6BFC: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x801F6C00: nop

    // 0x801F6C04: bc1fl       L_801F6C3C
    if (!c1cs) {
        // 0x801F6C08: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801F6C3C;
    }
    goto skip_0;
    // 0x801F6C08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801F6C0C: jal         0x801D6C4C
    // 0x801F6C10: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    func_801D6C4C_60202C(rdram, ctx);
        goto after_2;
    // 0x801F6C10: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    after_2:
    // 0x801F6C14: beql        $v0, $zero, L_801F6C3C
    if (ctx->r2 == 0) {
        // 0x801F6C18: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801F6C3C;
    }
    goto skip_1;
    // 0x801F6C18: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x801F6C1C: lw          $t6, 0xEC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XEC);
    // 0x801F6C20: blez        $t6, L_801F6C30
    if (SIGNED(ctx->r14) <= 0) {
        // 0x801F6C24: nop
    
            goto L_801F6C30;
    }
    // 0x801F6C24: nop

    // 0x801F6C28: sw          $zero, 0xEC($s0)
    MEM_W(0XEC, ctx->r16) = 0;
    // 0x801F6C2C: sw          $zero, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = 0;
L_801F6C30:
    // 0x801F6C30: jal         0x801F0540
    // 0x801F6C34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801F0540_61B920(rdram, ctx);
        goto after_3;
    // 0x801F6C34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801F6C38: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801F6C3C:
    // 0x801F6C3C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801F6C40: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801F6C44: jr          $ra
    // 0x801F6C48: nop

    TRACE_RETURN()
    return;
    // 0x801F6C48: nop

;}
RECOMP_FUNC void func_801E51EC_6105CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E51EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E51F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E51F4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E51F8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801E51FC: jal         0x801D31F0
    // 0x801E5200: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    func_801D31F0_5FE5D0(rdram, ctx);
        goto after_0;
    // 0x801E5200: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    after_0:
    // 0x801E5204: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801E5208: nop

    // 0x801E520C: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x801E5210: nop

    // 0x801E5214: bc1fl       L_801E5268
    if (!c1cs) {
        // 0x801E5218: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E5268;
    }
    goto skip_0;
    // 0x801E5218: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801E521C: jal         0x80038BC8
    // 0x801E5220: addiu       $a0, $zero, 0x235
    ctx->r4 = ADD32(0, 0X235);
    func_80038BC8_397C8(rdram, ctx);
        goto after_1;
    // 0x801E5220: addiu       $a0, $zero, 0x235
    ctx->r4 = ADD32(0, 0X235);
    after_1:
    // 0x801E5224: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E5228: addiu       $a1, $a1, -0x4E40
    ctx->r5 = ADD32(ctx->r5, -0X4E40);
    // 0x801E522C: jal         0x801D31CC
    // 0x801E5230: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_2;
    // 0x801E5230: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x801E5234: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E5238: addiu       $a1, $a1, -0x4F6C
    ctx->r5 = ADD32(ctx->r5, -0X4F6C);
    // 0x801E523C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x801E5240: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801E5244: jal         0x801D34D0
    // 0x801E5248: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_801D34D0_5FE8B0(rdram, ctx);
        goto after_3;
    // 0x801E5248: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x801E524C: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E5250: jal         0x8003521C
    // 0x801E5254: addiu       $a0, $a0, 0x5274
    ctx->r4 = ADD32(ctx->r4, 0X5274);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801E5254: addiu       $a0, $a0, 0x5274
    ctx->r4 = ADD32(ctx->r4, 0X5274);
    after_4:
    // 0x801E5258: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x801E525C: addiu       $t6, $zero, 0x96
    ctx->r14 = ADD32(0, 0X96);
    // 0x801E5260: sw          $t6, 0x7C($t7)
    MEM_W(0X7C, ctx->r15) = ctx->r14;
    // 0x801E5264: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E5268:
    // 0x801E5268: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E526C: jr          $ra
    // 0x801E5270: nop

    TRACE_RETURN()
    return;
    // 0x801E5270: nop

;}
RECOMP_FUNC void func_801DD134_608514(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DD134: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801DD138: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DD13C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801DD140: lw          $t6, 0x7C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X7C);
    // 0x801DD144: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x801DD148: beql        $t6, $zero, L_801DD198
    if (ctx->r14 == 0) {
        // 0x801DD14C: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_801DD198;
    }
    goto skip_0;
    // 0x801DD14C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_0:
    // 0x801DD150: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x801DD154: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801DD158: lwc1        $f4, 0x9C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X9C);
    // 0x801DD15C: lw          $t7, 0x94($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X94);
    // 0x801DD160: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x801DD164: bne         $t7, $zero, L_801DD17C
    if (ctx->r15 != 0) {
        // 0x801DD168: swc1        $f6, 0x9C($a0)
        MEM_W(0X9C, ctx->r4) = ctx->f6.u32l;
            goto L_801DD17C;
    }
    // 0x801DD168: swc1        $f6, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->f6.u32l;
    // 0x801DD16C: lwc1        $f8, 0x98($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X98);
    // 0x801DD170: sub.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x801DD174: b           L_801DD188
    // 0x801DD178: swc1        $f10, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->f10.u32l;
        goto L_801DD188;
    // 0x801DD178: swc1        $f10, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->f10.u32l;
L_801DD17C:
    // 0x801DD17C: lwc1        $f16, 0x98($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X98);
    // 0x801DD180: add.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x801DD184: swc1        $f18, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->f18.u32l;
L_801DD188:
    // 0x801DD188: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x801DD18C: b           L_801DD1C8
    // 0x801DD190: sb          $zero, 0x3($v0)
    MEM_B(0X3, ctx->r2) = 0;
        goto L_801DD1C8;
    // 0x801DD190: sb          $zero, 0x3($v0)
    MEM_B(0X3, ctx->r2) = 0;
    // 0x801DD194: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
L_801DD198:
    // 0x801DD198: lwc1        $f4, 0x9C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X9C);
    // 0x801DD19C: lw          $t8, 0x94($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X94);
    // 0x801DD1A0: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x801DD1A4: bne         $t8, $zero, L_801DD1BC
    if (ctx->r24 != 0) {
        // 0x801DD1A8: swc1        $f6, 0x9C($a0)
        MEM_W(0X9C, ctx->r4) = ctx->f6.u32l;
            goto L_801DD1BC;
    }
    // 0x801DD1A8: swc1        $f6, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->f6.u32l;
    // 0x801DD1AC: lwc1        $f8, 0x98($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X98);
    // 0x801DD1B0: sub.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x801DD1B4: b           L_801DD1C8
    // 0x801DD1B8: swc1        $f10, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->f10.u32l;
        goto L_801DD1C8;
    // 0x801DD1B8: swc1        $f10, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->f10.u32l;
L_801DD1BC:
    // 0x801DD1BC: lwc1        $f16, 0x98($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X98);
    // 0x801DD1C0: add.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x801DD1C4: swc1        $f18, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->f18.u32l;
L_801DD1C8:
    // 0x801DD1C8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801DD1CC: lwc1        $f6, 0x9C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X9C);
    // 0x801DD1D0: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801DD1D4: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x801DD1D8: nop

    // 0x801DD1DC: bc1f        L_801DD200
    if (!c1cs) {
        // 0x801DD1E0: nop
    
            goto L_801DD200;
    }
    // 0x801DD1E0: nop

    // 0x801DD1E4: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801DD1E8: addiu       $v0, $v0, 0x140
    ctx->r2 = ADD32(ctx->r2, 0X140);
    // 0x801DD1EC: sb          $zero, 0xC($v0)
    MEM_B(0XC, ctx->r2) = 0;
    // 0x801DD1F0: jal         0x80034ED4
    // 0x801DD1F4: sb          $zero, 0xD($v0)
    MEM_B(0XD, ctx->r2) = 0;
    func_80034ED4_35AD4(rdram, ctx);
        goto after_0;
    // 0x801DD1F4: sb          $zero, 0xD($v0)
    MEM_B(0XD, ctx->r2) = 0;
    after_0:
    // 0x801DD1F8: b           L_801DD20C
    // 0x801DD1FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801DD20C;
    // 0x801DD1FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DD200:
    // 0x801DD200: jal         0x801DD3DC
    // 0x801DD204: nop

    func_801DD3DC_6087BC(rdram, ctx);
        goto after_1;
    // 0x801DD204: nop

    after_1:
    // 0x801DD208: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DD20C:
    // 0x801DD20C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801DD210: jr          $ra
    // 0x801DD214: nop

    TRACE_RETURN()
    return;
    // 0x801DD214: nop

;}
RECOMP_FUNC void func_801DEEB8_60A298(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DEEB8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801DEEBC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801DEEC0: lw          $t1, 0x18($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X18);
    // 0x801DEEC4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801DEEC8: lui         $at, 0x4069
    ctx->r1 = S32(0X4069 << 16);
    // 0x801DEECC: lwc1        $f4, 0x1C($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x801DEED0: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x801DEED4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801DEED8: div.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f12.fl);
    // 0x801DEEDC: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x801DEEE0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801DEEE4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801DEEE8: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x801DEEEC: addiu       $a1, $a1, -0x54E0
    ctx->r5 = ADD32(ctx->r5, -0X54E0);
    // 0x801DEEF0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801DEEF4: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801DEEF8: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x801DEEFC: cvt.s.d     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f0.fl = CVT_S_D(ctx->f16.d);
    // 0x801DEF00: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x801DEF04: nop

    // 0x801DEF08: bc1fl       L_801DEF1C
    if (!c1cs) {
        // 0x801DEF0C: lui         $at, 0x41F0
        ctx->r1 = S32(0X41F0 << 16);
            goto L_801DEF1C;
    }
    goto skip_0;
    // 0x801DEF0C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    skip_0:
    // 0x801DEF10: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801DEF14: nop

    // 0x801DEF18: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
L_801DEF1C:
    // 0x801DEF1C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801DEF20: nop

    // 0x801DEF24: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x801DEF28: nop

    // 0x801DEF2C: bc1fl       L_801DEF3C
    if (!c1cs) {
        // 0x801DEF30: trunc.w.s   $f4, $f0
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
            goto L_801DEF3C;
    }
    goto skip_1;
    // 0x801DEF30: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    skip_1:
    // 0x801DEF34: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x801DEF38: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
L_801DEF3C:
    // 0x801DEF3C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801DEF40: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801DEF44: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x801DEF48: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x801DEF4C: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x801DEF50: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801DEF54: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    // 0x801DEF58: jal         0x8000DF10
    // 0x801DEF5C: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_8000DF10_EB10(rdram, ctx);
        goto after_0;
    // 0x801DEF5C: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_0:
    // 0x801DEF60: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x801DEF64: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801DEF68: or          $t7, $v0, $at
    ctx->r15 = ctx->r2 | ctx->r1;
    // 0x801DEF6C: lw          $t0, 0x0($t1)
    ctx->r8 = MEM_W(ctx->r9, 0X0);
    // 0x801DEF70: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801DEF74: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x801DEF78: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x801DEF7C: lwc1        $f0, 0x28($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X28);
    // 0x801DEF80: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x801DEF84: beq         $t0, $zero, L_801DEFCC
    if (ctx->r8 == 0) {
        // 0x801DEF88: sw          $t8, 0x30($t1)
        MEM_W(0X30, ctx->r9) = ctx->r24;
            goto L_801DEFCC;
    }
    // 0x801DEF88: sw          $t8, 0x30($t1)
    MEM_W(0X30, ctx->r9) = ctx->r24;
    // 0x801DEF8C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801DEF90: addiu       $a1, $a1, -0x5288
    ctx->r5 = ADD32(ctx->r5, -0X5288);
    // 0x801DEF94: addiu       $a2, $zero, 0x7F
    ctx->r6 = ADD32(0, 0X7F);
    // 0x801DEF98: addiu       $a3, $zero, 0x7F
    ctx->r7 = ADD32(0, 0X7F);
    // 0x801DEF9C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801DEFA0: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    // 0x801DEFA4: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x801DEFA8: jal         0x8000DFA0
    // 0x801DEFAC: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    func_8000DFA0_EBA0(rdram, ctx);
        goto after_1;
    // 0x801DEFAC: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x801DEFB0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801DEFB4: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x801DEFB8: or          $t9, $v0, $at
    ctx->r25 = ctx->r2 | ctx->r1;
    // 0x801DEFBC: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801DEFC0: lwc1        $f0, 0x28($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X28);
    // 0x801DEFC4: or          $t2, $t9, $at
    ctx->r10 = ctx->r25 | ctx->r1;
    // 0x801DEFC8: sw          $t2, 0x30($t0)
    MEM_W(0X30, ctx->r8) = ctx->r10;
L_801DEFCC:
    // 0x801DEFCC: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x801DEFD0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801DEFD4: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x801DEFD8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801DEFDC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x801DEFE0: cvt.w.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_S(ctx->f0.fl);
    // 0x801DEFE4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801DEFE8: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x801DEFEC: nop

    // 0x801DEFF0: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x801DEFF4: beql        $v0, $zero, L_801DF044
    if (ctx->r2 == 0) {
        // 0x801DEFF8: mfc1        $v0, $f6
        ctx->r2 = (int32_t)ctx->f6.u32l;
            goto L_801DF044;
    }
    goto skip_2;
    // 0x801DEFF8: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    skip_2:
    // 0x801DEFFC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DF000: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801DF004: sub.s       $f6, $f0, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x801DF008: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x801DF00C: nop

    // 0x801DF010: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x801DF014: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x801DF018: nop

    // 0x801DF01C: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x801DF020: bne         $v0, $zero, L_801DF038
    if (ctx->r2 != 0) {
        // 0x801DF024: nop
    
            goto L_801DF038;
    }
    // 0x801DF024: nop

    // 0x801DF028: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x801DF02C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801DF030: b           L_801DF050
    // 0x801DF034: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
        goto L_801DF050;
    // 0x801DF034: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
L_801DF038:
    // 0x801DF038: b           L_801DF050
    // 0x801DF03C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_801DF050;
    // 0x801DF03C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x801DF040: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
L_801DF044:
    // 0x801DF044: nop

    // 0x801DF048: bltz        $v0, L_801DF038
    if (SIGNED(ctx->r2) < 0) {
        // 0x801DF04C: nop
    
            goto L_801DF038;
    }
    // 0x801DF04C: nop

L_801DF050:
    // 0x801DF050: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x801DF054: andi        $t4, $v0, 0xFFFF
    ctx->r12 = ctx->r2 & 0XFFFF;
    // 0x801DF058: jr          $ra
    // 0x801DF05C: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
    TRACE_RETURN()
    return;
    // 0x801DF05C: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
;}
RECOMP_FUNC void func_801E2CC8_60E0A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E2CC8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801E2CCC: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x801E2CD0: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x801E2CD4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E2CD8: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x801E2CDC: bne         $a1, $zero, L_801E2CF4
    if (ctx->r5 != 0) {
        // 0x801E2CE0: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_801E2CF4;
    }
    // 0x801E2CE0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801E2CE4: jal         0x80034ED4
    // 0x801E2CE8: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_0;
    // 0x801E2CE8: nop

    after_0:
    // 0x801E2CEC: b           L_801E2DC8
    // 0x801E2CF0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801E2DC8;
    // 0x801E2CF0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801E2CF4:
    // 0x801E2CF4: lui         $at, 0x4382
    ctx->r1 = S32(0X4382 << 16);
    // 0x801E2CF8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801E2CFC: lwc1        $f6, 0x94($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X94);
    // 0x801E2D00: lwc1        $f10, 0x28($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X28);
    // 0x801E2D04: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x801E2D08: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801E2D0C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801E2D10: lw          $t6, 0xA0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XA0);
    // 0x801E2D14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E2D18: sb          $t6, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r14;
    // 0x801E2D1C: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x801E2D20: sub.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x801E2D24: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x801E2D28: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x801E2D2C: nop

    // 0x801E2D30: bgezl       $v0, L_801E2D40
    if (SIGNED(ctx->r2) >= 0) {
        // 0x801E2D34: lw          $t8, 0x98($s0)
        ctx->r24 = MEM_W(ctx->r16, 0X98);
            goto L_801E2D40;
    }
    goto skip_0;
    // 0x801E2D34: lw          $t8, 0x98($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X98);
    skip_0:
    // 0x801E2D38: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801E2D3C: lw          $t8, 0x98($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X98);
L_801E2D40:
    // 0x801E2D40: lw          $a1, 0xA8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XA8);
    // 0x801E2D44: lw          $a2, 0x90($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X90);
    // 0x801E2D48: lw          $a3, 0x94($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X94);
    // 0x801E2D4C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x801E2D50: jal         0x8000DF10
    // 0x801E2D54: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_8000DF10_EB10(rdram, ctx);
        goto after_1;
    // 0x801E2D54: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_1:
    // 0x801E2D58: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E2D5C: or          $t9, $v0, $at
    ctx->r25 = ctx->r2 | ctx->r1;
    // 0x801E2D60: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801E2D64: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x801E2D68: sw          $t0, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r8;
    // 0x801E2D6C: jal         0x801D614C
    // 0x801E2D70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D614C_60152C(rdram, ctx);
        goto after_2;
    // 0x801E2D70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801E2D74: lw          $t1, 0xA4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XA4);
    // 0x801E2D78: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E2D7C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801E2D80: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x801E2D84: bgez        $t1, L_801E2D98
    if (SIGNED(ctx->r9) >= 0) {
        // 0x801E2D88: cvt.s.w     $f8, $f8
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
            goto L_801E2D98;
    }
    // 0x801E2D88: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x801E2D8C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801E2D90: nop

    // 0x801E2D94: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_801E2D98:
    // 0x801E2D98: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x801E2D9C: jal         0x801D2F40
    // 0x801E2DA0: nop

    func_801D2F40_5FE320(rdram, ctx);
        goto after_3;
    // 0x801E2DA0: nop

    after_3:
    // 0x801E2DA4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801E2DA8: nop

    // 0x801E2DAC: c.eq.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl == ctx->f18.fl;
    // 0x801E2DB0: nop

    // 0x801E2DB4: bc1fl       L_801E2DC8
    if (!c1cs) {
        // 0x801E2DB8: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_801E2DC8;
    }
    goto skip_1;
    // 0x801E2DB8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x801E2DBC: jal         0x80034ED4
    // 0x801E2DC0: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_4;
    // 0x801E2DC0: nop

    after_4:
    // 0x801E2DC4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801E2DC8:
    // 0x801E2DC8: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x801E2DCC: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x801E2DD0: jr          $ra
    // 0x801E2DD4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x801E2DD4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_801F0690_61BA70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F0690: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801F0694: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F0698: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801F069C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F06A0: jal         0x801F7004
    // 0x801F06A4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_801F7004_6223E4(rdram, ctx);
        goto after_0;
    // 0x801F06A4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F06A8: jal         0x801F7074
    // 0x801F06AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801F7074_622454(rdram, ctx);
        goto after_1;
    // 0x801F06AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801F06B0: lw          $t6, 0x18($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X18);
    // 0x801F06B4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F06B8: addiu       $a1, $a1, -0x4D88
    ctx->r5 = ADD32(ctx->r5, -0X4D88);
    // 0x801F06BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F06C0: jal         0x801D31CC
    // 0x801F06C4: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_2;
    // 0x801F06C4: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    after_2:
    // 0x801F06C8: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x801F06CC: jal         0x80003E10
    // 0x801F06D0: lhu         $a0, 0x16($t7)
    ctx->r4 = MEM_HU(ctx->r15, 0X16);
    func_80003E10_4A10(rdram, ctx);
        goto after_3;
    // 0x801F06D0: lhu         $a0, 0x16($t7)
    ctx->r4 = MEM_HU(ctx->r15, 0X16);
    after_3:
    // 0x801F06D4: lui         $at, 0x4014
    ctx->r1 = S32(0X4014 << 16);
    // 0x801F06D8: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x801F06DC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801F06E0: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x801F06E4: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x801F06E8: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801F06EC: swc1        $f10, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f10.u32l;
    // 0x801F06F0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x801F06F4: jal         0x80003EA0
    // 0x801F06F8: lhu         $a0, 0x16($t8)
    ctx->r4 = MEM_HU(ctx->r24, 0X16);
    func_80003EA0_4AA0(rdram, ctx);
        goto after_4;
    // 0x801F06F8: lhu         $a0, 0x16($t8)
    ctx->r4 = MEM_HU(ctx->r24, 0X16);
    after_4:
    // 0x801F06FC: lui         $at, 0x4014
    ctx->r1 = S32(0X4014 << 16);
    // 0x801F0700: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x801F0704: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801F0708: cvt.d.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.d = CVT_D_S(ctx->f0.fl);
    // 0x801F070C: lui         $at, 0x43E1
    ctx->r1 = S32(0X43E1 << 16);
    // 0x801F0710: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x801F0714: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801F0718: lui         $at, 0xC3E1
    ctx->r1 = S32(0XC3E1 << 16);
    // 0x801F071C: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801F0720: swc1        $f6, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f6.u32l;
    // 0x801F0724: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x801F0728: lwc1        $f2, 0x8($t9)
    ctx->f2.u32l = MEM_W(ctx->r25, 0X8);
    // 0x801F072C: c.le.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl <= ctx->f2.fl;
    // 0x801F0730: nop

    // 0x801F0734: bc1fl       L_801F0750
    if (!c1cs) {
        // 0x801F0738: mtc1        $at, $f16
        ctx->f16.u32l = ctx->r1;
            goto L_801F0750;
    }
    goto skip_0;
    // 0x801F0738: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    skip_0:
    // 0x801F073C: lui         $at, 0xC3FA
    ctx->r1 = S32(0XC3FA << 16);
    // 0x801F0740: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801F0744: b           L_801F07A0
    // 0x801F0748: swc1        $f10, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->f10.u32l;
        goto L_801F07A0;
    // 0x801F0748: swc1        $f10, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->f10.u32l;
    // 0x801F074C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
L_801F0750:
    // 0x801F0750: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x801F0754: c.le.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl <= ctx->f16.fl;
    // 0x801F0758: nop

    // 0x801F075C: bc1f        L_801F0770
    if (!c1cs) {
        // 0x801F0760: nop
    
            goto L_801F0770;
    }
    // 0x801F0760: nop

    // 0x801F0764: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801F0768: b           L_801F07A0
    // 0x801F076C: swc1        $f18, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->f18.u32l;
        goto L_801F07A0;
    // 0x801F076C: swc1        $f18, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->f18.u32l;
L_801F0770:
    // 0x801F0770: jal         0x8000DD58
    // 0x801F0774: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    func_8000DD58_E958(rdram, ctx);
        goto after_5;
    // 0x801F0774: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_5:
    // 0x801F0778: slti        $at, $v0, 0x33
    ctx->r1 = SIGNED(ctx->r2) < 0X33 ? 1 : 0;
    // 0x801F077C: beq         $at, $zero, L_801F0790
    if (ctx->r1 == 0) {
        // 0x801F0780: lui         $at, 0x43FA
        ctx->r1 = S32(0X43FA << 16);
            goto L_801F0790;
    }
    // 0x801F0780: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x801F0784: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F0788: b           L_801F07A0
    // 0x801F078C: swc1        $f4, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->f4.u32l;
        goto L_801F07A0;
    // 0x801F078C: swc1        $f4, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->f4.u32l;
L_801F0790:
    // 0x801F0790: lui         $at, 0xC3FA
    ctx->r1 = S32(0XC3FA << 16);
    // 0x801F0794: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F0798: nop

    // 0x801F079C: swc1        $f6, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->f6.u32l;
L_801F07A0:
    // 0x801F07A0: jal         0x8000DD58
    // 0x801F07A4: addiu       $a0, $zero, 0xC8
    ctx->r4 = ADD32(0, 0XC8);
    func_8000DD58_E958(rdram, ctx);
        goto after_6;
    // 0x801F07A4: addiu       $a0, $zero, 0xC8
    ctx->r4 = ADD32(0, 0XC8);
    after_6:
    // 0x801F07A8: addiu       $t0, $v0, -0x258
    ctx->r8 = ADD32(ctx->r2, -0X258);
    // 0x801F07AC: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x801F07B0: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801F07B4: addiu       $a1, $a1, 0x7E4
    ctx->r5 = ADD32(ctx->r5, 0X7E4);
    // 0x801F07B8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x801F07BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F07C0: swc1        $f10, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f10.u32l;
    // 0x801F07C4: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x801F07C8: jal         0x8003522C
    // 0x801F07CC: sw          $t1, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r9;
    func_8003522C_35E2C(rdram, ctx);
        goto after_7;
    // 0x801F07CC: sw          $t1, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r9;
    after_7:
    // 0x801F07D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801F07D4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801F07D8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801F07DC: jr          $ra
    // 0x801F07E0: nop

    TRACE_RETURN()
    return;
    // 0x801F07E0: nop

;}
RECOMP_FUNC void func_801F1788_61CB68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F1788: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801F178C: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801F1790: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801F1794: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801F1798: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x801F179C: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x801F17A0: addiu       $t7, $t6, 0x178
    ctx->r15 = ADD32(ctx->r14, 0X178);
    // 0x801F17A4: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801F17A8: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801F17AC: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x801F17B0: jal         0x801F7168
    // 0x801F17B4: sw          $t7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r15;
    func_801F7168_622548(rdram, ctx);
        goto after_0;
    // 0x801F17B4: sw          $t7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r15;
    after_0:
    // 0x801F17B8: lui         $at, 0xC4FA
    ctx->r1 = S32(0XC4FA << 16);
    // 0x801F17BC: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    // 0x801F17C0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801F17C4: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801F17C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F17CC: lui         $at, 0xC3C8
    ctx->r1 = S32(0XC3C8 << 16);
    // 0x801F17D0: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x801F17D4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801F17D8: bc1fl       L_801F185C
    if (!c1cs) {
        // 0x801F17DC: mtc1        $at, $f10
        ctx->f10.u32l = ctx->r1;
            goto L_801F185C;
    }
    goto skip_0;
    // 0x801F17DC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    skip_0:
    // 0x801F17E0: jal         0x801D3018
    // 0x801F17E4: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    func_801D3018_5FE3F8(rdram, ctx);
        goto after_1;
    // 0x801F17E4: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_1:
    // 0x801F17E8: jal         0x801F76D0
    // 0x801F17EC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801F76D0_622AB0(rdram, ctx);
        goto after_2;
    // 0x801F17EC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x801F17F0: lui         $at, 0xC3C8
    ctx->r1 = S32(0XC3C8 << 16);
    // 0x801F17F4: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x801F17F8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F17FC: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801F1800: addiu       $t8, $zero, 0x20
    ctx->r24 = ADD32(0, 0X20);
    // 0x801F1804: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801F1808: lui         $a2, 0xC4FA
    ctx->r6 = S32(0XC4FA << 16);
    // 0x801F180C: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    // 0x801F1810: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x801F1814: jal         0x801D46B8
    // 0x801F1818: add.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl + ctx->f8.fl;
    func_801D46B8_5FFA98(rdram, ctx);
        goto after_3;
    // 0x801F1818: add.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl + ctx->f8.fl;
    after_3:
    // 0x801F181C: jal         0x801D619C
    // 0x801F1820: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801D619C_60157C(rdram, ctx);
        goto after_4;
    // 0x801F1820: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x801F1824: lwc1        $f12, 0x70($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X70);
    // 0x801F1828: lwc1        $f14, 0x74($s1)
    ctx->f14.u32l = MEM_W(ctx->r17, 0X74);
    // 0x801F182C: lw          $a2, 0x78($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X78);
    // 0x801F1830: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x801F1834: addiu       $t9, $s0, 0x14
    ctx->r25 = ADD32(ctx->r16, 0X14);
    // 0x801F1838: addiu       $t0, $s0, 0x16
    ctx->r8 = ADD32(ctx->r16, 0X16);
    // 0x801F183C: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x801F1840: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x801F1844: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x801F1848: jal         0x8000EC04
    // 0x801F184C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    func_8000EC04_F804(rdram, ctx);
        goto after_5;
    // 0x801F184C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_5:
    // 0x801F1850: b           L_801F1880
    // 0x801F1854: nop

        goto L_801F1880;
    // 0x801F1854: nop

    // 0x801F1858: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
L_801F185C:
    // 0x801F185C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x801F1860: swc1        $f2, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f2.u32l;
    // 0x801F1864: add.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x801F1868: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x801F186C: sh          $zero, 0x16($s0)
    MEM_H(0X16, ctx->r16) = 0;
    // 0x801F1870: sh          $zero, 0x14($s0)
    MEM_H(0X14, ctx->r16) = 0;
    // 0x801F1874: swc1        $f16, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f16.u32l;
    // 0x801F1878: sb          $t1, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r9;
    // 0x801F187C: swc1        $f20, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f20.u32l;
L_801F1880:
    // 0x801F1880: jal         0x801FADC0
    // 0x801F1884: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    func_801FADC0_6261A0(rdram, ctx);
        goto after_6;
    // 0x801F1884: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    after_6:
    // 0x801F1888: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
    // 0x801F188C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801F1890: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801F1894: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801F1898: lui         $at, 0x4079
    ctx->r1 = S32(0X4079 << 16);
    // 0x801F189C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801F18A0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801F18A4: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801F18A8: addiu       $a0, $zero, 0x131
    ctx->r4 = ADD32(0, 0X131);
    // 0x801F18AC: c.le.d      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.d <= ctx->f6.d;
    // 0x801F18B0: addiu       $t2, $s0, 0x14
    ctx->r10 = ADD32(ctx->r16, 0X14);
    // 0x801F18B4: addiu       $t3, $s0, 0x16
    ctx->r11 = ADD32(ctx->r16, 0X16);
    // 0x801F18B8: swc1        $f18, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f18.u32l;
    // 0x801F18BC: bc1fl       L_801F1AD8
    if (!c1cs) {
        // 0x801F18C0: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_801F1AD8;
    }
    goto skip_1;
    // 0x801F18C0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_1:
    // 0x801F18C4: sw          $t2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r10;
    // 0x801F18C8: jal         0x80038BC8
    // 0x801F18CC: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
    func_80038BC8_397C8(rdram, ctx);
        goto after_7;
    // 0x801F18CC: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
    after_7:
    // 0x801F18D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801F18D4: jal         0x80037C9C
    // 0x801F18D8: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    func_80037C9C_3889C(rdram, ctx);
        goto after_8;
    // 0x801F18D8: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    after_8:
    // 0x801F18DC: lui         $a2, 0xA0A0
    ctx->r6 = S32(0XA0A0 << 16);
    // 0x801F18E0: ori         $a2, $a2, 0xA0A0
    ctx->r6 = ctx->r6 | 0XA0A0;
    // 0x801F18E4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801F18E8: jal         0x80037C20
    // 0x801F18EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80037C20_38820(rdram, ctx);
        goto after_9;
    // 0x801F18EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
    // 0x801F18F0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x801F18F4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801F18F8: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x801F18FC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801F1900: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x801F1904: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801F1908: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x801F190C: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x801F1910: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801F1914: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801F1918: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    // 0x801F191C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x801F1920: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x801F1924: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x801F1928: jal         0x801E006C
    // 0x801F192C: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_10;
    // 0x801F192C: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    after_10:
    // 0x801F1930: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x801F1934: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F1938: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801F193C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F1940: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x801F1944: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801F1948: lui         $at, 0xC1C8
    ctx->r1 = S32(0XC1C8 << 16);
    // 0x801F194C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801F1950: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x801F1954: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x801F1958: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801F195C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801F1960: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    // 0x801F1964: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801F1968: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801F196C: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x801F1970: jal         0x801E006C
    // 0x801F1974: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_11;
    // 0x801F1974: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    after_11:
    // 0x801F1978: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x801F197C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801F1980: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x801F1984: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801F1988: lui         $at, 0xC1C8
    ctx->r1 = S32(0XC1C8 << 16);
    // 0x801F198C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801F1990: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x801F1994: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x801F1998: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801F199C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801F19A0: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    // 0x801F19A4: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801F19A8: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x801F19AC: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x801F19B0: jal         0x801E006C
    // 0x801F19B4: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_12;
    // 0x801F19B4: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    after_12:
    // 0x801F19B8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x801F19BC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F19C0: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x801F19C4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F19C8: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x801F19CC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801F19D0: lui         $at, 0xC1A0
    ctx->r1 = S32(0XC1A0 << 16);
    // 0x801F19D4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801F19D8: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x801F19DC: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x801F19E0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801F19E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801F19E8: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    // 0x801F19EC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801F19F0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801F19F4: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x801F19F8: jal         0x801E006C
    // 0x801F19FC: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_13;
    // 0x801F19FC: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    after_13:
    // 0x801F1A00: lui         $at, 0xC1A0
    ctx->r1 = S32(0XC1A0 << 16);
    // 0x801F1A04: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801F1A08: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x801F1A0C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801F1A10: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x801F1A14: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801F1A18: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x801F1A1C: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x801F1A20: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801F1A24: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801F1A28: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    // 0x801F1A2C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801F1A30: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801F1A34: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x801F1A38: jal         0x801E006C
    // 0x801F1A3C: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_14;
    // 0x801F1A3C: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    after_14:
    // 0x801F1A40: lui         $t4, 0x8021
    ctx->r12 = S32(0X8021 << 16);
    // 0x801F1A44: lw          $t4, -0x1130($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1130);
    // 0x801F1A48: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x801F1A4C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801F1A50: sb          $zero, 0x2C5($t4)
    MEM_B(0X2C5, ctx->r12) = 0;
    // 0x801F1A54: lwc1        $f4, 0x20($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X20);
    // 0x801F1A58: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F1A5C: ldc1        $f8, -0x1AA0($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X1AA0);
    // 0x801F1A60: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801F1A64: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x801F1A68: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x801F1A6C: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x801F1A70: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    // 0x801F1A74: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801F1A78: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x801F1A7C: jal         0x8000E39C
    // 0x801F1A80: nop

    func_8000E39C_EF9C(rdram, ctx);
        goto after_15;
    // 0x801F1A80: nop

    after_15:
    // 0x801F1A84: lwc1        $f12, 0x70($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X70);
    // 0x801F1A88: lwc1        $f14, 0x74($s1)
    ctx->f14.u32l = MEM_W(ctx->r17, 0X74);
    // 0x801F1A8C: lw          $a2, 0x78($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X78);
    // 0x801F1A90: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x801F1A94: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x801F1A98: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x801F1A9C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x801F1AA0: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x801F1AA4: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x801F1AA8: jal         0x8000EC04
    // 0x801F1AAC: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    func_8000EC04_F804(rdram, ctx);
        goto after_16;
    // 0x801F1AAC: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    after_16:
    // 0x801F1AB0: jal         0x801F703C
    // 0x801F1AB4: sb          $zero, 0x64($s0)
    MEM_B(0X64, ctx->r16) = 0;
    func_801F703C_62241C(rdram, ctx);
        goto after_17;
    // 0x801F1AB4: sb          $zero, 0x64($s0)
    MEM_B(0X64, ctx->r16) = 0;
    after_17:
    // 0x801F1AB8: jal         0x801F7958
    // 0x801F1ABC: nop

    func_801F7958_622D38(rdram, ctx);
        goto after_18;
    // 0x801F1ABC: nop

    after_18:
    // 0x801F1AC0: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x801F1AC4: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F1AC8: sw          $t7, 0xD8($s1)
    MEM_W(0XD8, ctx->r17) = ctx->r15;
    // 0x801F1ACC: jal         0x8003521C
    // 0x801F1AD0: addiu       $a0, $a0, 0x2ED8
    ctx->r4 = ADD32(ctx->r4, 0X2ED8);
    func_8003521C_35E1C(rdram, ctx);
        goto after_19;
    // 0x801F1AD0: addiu       $a0, $a0, 0x2ED8
    ctx->r4 = ADD32(ctx->r4, 0X2ED8);
    after_19:
    // 0x801F1AD4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_801F1AD8:
    // 0x801F1AD8: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x801F1ADC: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x801F1AE0: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x801F1AE4: jr          $ra
    // 0x801F1AE8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x801F1AE8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_801D6A30_601E10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D6A30: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801D6A34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D6A38: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801D6A3C: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x801D6A40: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x801D6A44: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801D6A48: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x801D6A4C: bne         $v0, $zero, L_801D6A5C
    if (ctx->r2 != 0) {
        // 0x801D6A50: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_801D6A5C;
    }
    // 0x801D6A50: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801D6A54: b           L_801D6B04
    // 0x801D6A58: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801D6B04;
    // 0x801D6A58: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D6A5C:
    // 0x801D6A5C: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801D6A60: addiu       $a0, $a2, 0x74
    ctx->r4 = ADD32(ctx->r6, 0X74);
    // 0x801D6A64: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x801D6A68: nop

    // 0x801D6A6C: bc1fl       L_801D6A90
    if (!c1cs) {
        // 0x801D6A70: c.lt.s      $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
            goto L_801D6A90;
    }
    goto skip_0;
    // 0x801D6A70: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    skip_0:
    // 0x801D6A74: lwc1        $f4, 0x74($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X74);
    // 0x801D6A78: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801D6A7C: sub.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f14.fl;
    // 0x801D6A80: swc1        $f6, 0x74($a2)
    MEM_W(0X74, ctx->r6) = ctx->f6.u32l;
    // 0x801D6A84: b           L_801D6AEC
    // 0x801D6A88: sb          $t6, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r14;
        goto L_801D6AEC;
    // 0x801D6A88: sb          $t6, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r14;
    // 0x801D6A8C: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
L_801D6A90:
    // 0x801D6A90: nop

    // 0x801D6A94: bc1fl       L_801D6AB4
    if (!c1cs) {
        // 0x801D6A98: lwc1        $f16, 0x74($a2)
        ctx->f16.u32l = MEM_W(ctx->r6, 0X74);
            goto L_801D6AB4;
    }
    goto skip_1;
    // 0x801D6A98: lwc1        $f16, 0x74($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X74);
    skip_1:
    // 0x801D6A9C: lwc1        $f8, 0x74($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X74);
    // 0x801D6AA0: add.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f14.fl;
    // 0x801D6AA4: swc1        $f10, 0x74($a2)
    MEM_W(0X74, ctx->r6) = ctx->f10.u32l;
    // 0x801D6AA8: b           L_801D6AEC
    // 0x801D6AAC: sb          $zero, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = 0;
        goto L_801D6AEC;
    // 0x801D6AAC: sb          $zero, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = 0;
    // 0x801D6AB0: lwc1        $f16, 0x74($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X74);
L_801D6AB4:
    // 0x801D6AB4: lui         $t7, 0x8001
    ctx->r15 = S32(0X8001 << 16);
    // 0x801D6AB8: addiu       $t7, $t7, -0x2240
    ctx->r15 = ADD32(ctx->r15, -0X2240);
    // 0x801D6ABC: c.lt.s      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl < ctx->f14.fl;
    // 0x801D6AC0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801D6AC4: bc1fl       L_801D6AF0
    if (!c1cs) {
        // 0x801D6AC8: lw          $a1, 0x2C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X2C);
            goto L_801D6AF0;
    }
    goto skip_2;
    // 0x801D6AC8: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    skip_2:
    // 0x801D6ACC: beq         $t7, $zero, L_801D6AE0
    if (ctx->r15 == 0) {
        // 0x801D6AD0: lwc1        $f4, 0x2C($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
            goto L_801D6AE0;
    }
    // 0x801D6AD0: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x801D6AD4: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x801D6AD8: b           L_801D6AE8
    // 0x801D6ADC: swc1        $f18, 0x74($a2)
    MEM_W(0X74, ctx->r6) = ctx->f18.u32l;
        goto L_801D6AE8;
    // 0x801D6ADC: swc1        $f18, 0x74($a2)
    MEM_W(0X74, ctx->r6) = ctx->f18.u32l;
L_801D6AE0:
    // 0x801D6AE0: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x801D6AE4: swc1        $f6, 0x74($a2)
    MEM_W(0X74, ctx->r6) = ctx->f6.u32l;
L_801D6AE8:
    // 0x801D6AE8: sb          $t8, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r24;
L_801D6AEC:
    // 0x801D6AEC: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
L_801D6AF0:
    // 0x801D6AF0: jal         0x801D725C
    // 0x801D6AF4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_801D725C_60263C(rdram, ctx);
        goto after_0;
    // 0x801D6AF4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x801D6AF8: jal         0x801D60B4
    // 0x801D6AFC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_801D60B4_601494(rdram, ctx);
        goto after_1;
    // 0x801D6AFC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x801D6B00: lbu         $v0, 0x1F($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X1F);
L_801D6B04:
    // 0x801D6B04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D6B08: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801D6B0C: jr          $ra
    // 0x801D6B10: nop

    TRACE_RETURN()
    return;
    // 0x801D6B10: nop

;}
RECOMP_FUNC void func_801F4780_61FB60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F4780: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F4784: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F4788: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801F478C: jal         0x801F7074
    // 0x801F4790: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801F7074_622454(rdram, ctx);
        goto after_0;
    // 0x801F4790: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F4794: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x801F4798: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F479C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x801F47A0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F47A4: addiu       $a1, $a1, -0x4D30
    ctx->r5 = ADD32(ctx->r5, -0X4D30);
    // 0x801F47A8: swc1        $f4, 0x74($t6)
    MEM_W(0X74, ctx->r14) = ctx->f4.u32l;
    // 0x801F47AC: jal         0x801D2EE4
    // 0x801F47B0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_1;
    // 0x801F47B0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x801F47B4: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x801F47B8: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F47BC: addiu       $a0, $a0, 0x4860
    ctx->r4 = ADD32(ctx->r4, 0X4860);
    // 0x801F47C0: lw          $t7, 0xE8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XE8);
    // 0x801F47C4: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x801F47C8: jal         0x8003521C
    // 0x801F47CC: sw          $t8, 0xE8($v0)
    MEM_W(0XE8, ctx->r2) = ctx->r24;
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801F47CC: sw          $t8, 0xE8($v0)
    MEM_W(0XE8, ctx->r2) = ctx->r24;
    after_2:
    // 0x801F47D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F47D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F47D8: jr          $ra
    // 0x801F47DC: nop

    TRACE_RETURN()
    return;
    // 0x801F47DC: nop

;}
RECOMP_FUNC void func_801ED73C_618B1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801ED73C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801ED740: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801ED744: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801ED748: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801ED74C: lw          $v1, 0x7C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X7C);
    // 0x801ED750: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801ED754: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801ED758: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x801ED75C: beq         $v1, $zero, L_801ED7AC
    if (ctx->r3 == 0) {
        // 0x801ED760: addiu       $v0, $v0, 0xA0
        ctx->r2 = ADD32(ctx->r2, 0XA0);
            goto L_801ED7AC;
    }
    // 0x801ED760: addiu       $v0, $v0, 0xA0
    ctx->r2 = ADD32(ctx->r2, 0XA0);
    // 0x801ED764: addiu       $t6, $v1, -0x1
    ctx->r14 = ADD32(ctx->r3, -0X1);
    // 0x801ED768: sw          $t6, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r14;
    // 0x801ED76C: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x801ED770: lwc1        $f6, 0x90($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X90);
    // 0x801ED774: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801ED778: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x801ED77C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801ED780: swc1        $f8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f8.u32l;
    // 0x801ED784: lwc1        $f16, 0x94($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X94);
    // 0x801ED788: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801ED78C: swc1        $f18, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f18.u32l;
    // 0x801ED790: lw          $t7, 0x7C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X7C);
    // 0x801ED794: bnel        $t7, $at, L_801ED7F4
    if (ctx->r15 != ctx->r1) {
        // 0x801ED798: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801ED7F4;
    }
    goto skip_0;
    // 0x801ED798: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801ED79C: jal         0x8003D310
    // 0x801ED7A0: addiu       $a0, $zero, 0x299
    ctx->r4 = ADD32(0, 0X299);
    func_8003D310_3DF10(rdram, ctx);
        goto after_0;
    // 0x801ED7A0: addiu       $a0, $zero, 0x299
    ctx->r4 = ADD32(0, 0X299);
    after_0:
    // 0x801ED7A4: b           L_801ED7F4
    // 0x801ED7A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801ED7F4;
    // 0x801ED7A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801ED7AC:
    // 0x801ED7AC: lw          $v0, 0x80($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X80);
    // 0x801ED7B0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801ED7B4: addiu       $t9, $zero, 0x8C
    ctx->r25 = ADD32(0, 0X8C);
    // 0x801ED7B8: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
    // 0x801ED7BC: bgtz        $v0, L_801ED7F0
    if (SIGNED(ctx->r2) > 0) {
        // 0x801ED7C0: sw          $t8, 0x80($a1)
        MEM_W(0X80, ctx->r5) = ctx->r24;
            goto L_801ED7F0;
    }
    // 0x801ED7C0: sw          $t8, 0x80($a1)
    MEM_W(0X80, ctx->r5) = ctx->r24;
    // 0x801ED7C4: lwc1        $f4, -0x1DE8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1DE8);
    // 0x801ED7C8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801ED7CC: addiu       $t0, $zero, 0x32
    ctx->r8 = ADD32(0, 0X32);
    // 0x801ED7D0: swc1        $f4, 0x90($a1)
    MEM_W(0X90, ctx->r5) = ctx->f4.u32l;
    // 0x801ED7D4: lwc1        $f6, -0x1DE4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1DE4);
    // 0x801ED7D8: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801ED7DC: sw          $t9, 0x7C($a1)
    MEM_W(0X7C, ctx->r5) = ctx->r25;
    // 0x801ED7E0: sw          $t0, 0x80($a1)
    MEM_W(0X80, ctx->r5) = ctx->r8;
    // 0x801ED7E4: addiu       $a0, $a0, -0x2800
    ctx->r4 = ADD32(ctx->r4, -0X2800);
    // 0x801ED7E8: jal         0x8003521C
    // 0x801ED7EC: swc1        $f6, 0x94($a1)
    MEM_W(0X94, ctx->r5) = ctx->f6.u32l;
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x801ED7EC: swc1        $f6, 0x94($a1)
    MEM_W(0X94, ctx->r5) = ctx->f6.u32l;
    after_1:
L_801ED7F0:
    // 0x801ED7F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801ED7F4:
    // 0x801ED7F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801ED7F8: jr          $ra
    // 0x801ED7FC: nop

    TRACE_RETURN()
    return;
    // 0x801ED7FC: nop

;}
RECOMP_FUNC void func_801F6500_6218E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F6500: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801F6504: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801F6508: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801F650C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F6510: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x801F6514: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x801F6518: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x801F651C: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x801F6520: lwc1        $f12, 0x90($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X90);
    // 0x801F6524: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F6528: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x801F652C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F6530: c.le.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl <= ctx->f12.fl;
    // 0x801F6534: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x801F6538: addiu       $a2, $s1, 0x8
    ctx->r6 = ADD32(ctx->r17, 0X8);
    // 0x801F653C: addiu       $a3, $s1, 0x10
    ctx->r7 = ADD32(ctx->r17, 0X10);
    // 0x801F6540: bc1f        L_801F655C
    if (!c1cs) {
        // 0x801F6544: nop
    
            goto L_801F655C;
    }
    // 0x801F6544: nop

    // 0x801F6548: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F654C: nop

    // 0x801F6550: sub.s       $f8, $f12, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f12.fl - ctx->f6.fl;
    // 0x801F6554: swc1        $f8, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->f8.u32l;
    // 0x801F6558: lwc1        $f12, 0x90($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X90);
L_801F655C:
    // 0x801F655C: jal         0x8000E630
    // 0x801F6560: lhu         $a1, 0x96($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X96);
    func_8000E630_F230(rdram, ctx);
        goto after_0;
    // 0x801F6560: lhu         $a1, 0x96($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X96);
    after_0:
    // 0x801F6564: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x801F6568: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x801F656C: jal         0x8000E9F4
    // 0x801F6570: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    func_8000E9F4_F5F4(rdram, ctx);
        goto after_1;
    // 0x801F6570: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    after_1:
    // 0x801F6574: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x801F6578: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801F657C: jal         0x801D3018
    // 0x801F6580: lui         $a1, 0x42F0
    ctx->r5 = S32(0X42F0 << 16);
    func_801D3018_5FE3F8(rdram, ctx);
        goto after_2;
    // 0x801F6580: lui         $a1, 0x42F0
    ctx->r5 = S32(0X42F0 << 16);
    after_2:
    // 0x801F6584: lw          $t7, 0x7C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X7C);
    // 0x801F6588: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x801F658C: bne         $t8, $zero, L_801F65A4
    if (ctx->r24 != 0) {
        // 0x801F6590: sw          $t8, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r24;
            goto L_801F65A4;
    }
    // 0x801F6590: sw          $t8, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r24;
    // 0x801F6594: jal         0x801F0540
    // 0x801F6598: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801F0540_61B920(rdram, ctx);
        goto after_3;
    // 0x801F6598: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801F659C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x801F65A0: sw          $zero, 0x70($t0)
    MEM_W(0X70, ctx->r8) = 0;
L_801F65A4:
    // 0x801F65A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801F65A8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x801F65AC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x801F65B0: jr          $ra
    // 0x801F65B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x801F65B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_801E4A9C_60FE7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E4A9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E4AA0: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801E4AA4: lw          $t7, -0x1130($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1130);
    // 0x801E4AA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E4AAC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801E4AB0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E4AB4: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x801E4AB8: sb          $t6, 0x2C1($t7)
    MEM_B(0X2C1, ctx->r15) = ctx->r14;
    // 0x801E4ABC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801E4AC0: jal         0x801D31F0
    // 0x801E4AC4: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    func_801D31F0_5FE5D0(rdram, ctx);
        goto after_0;
    // 0x801E4AC4: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    after_0:
    // 0x801E4AC8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801E4ACC: nop

    // 0x801E4AD0: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x801E4AD4: nop

    // 0x801E4AD8: bc1fl       L_801E4B2C
    if (!c1cs) {
        // 0x801E4ADC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E4B2C;
    }
    goto skip_0;
    // 0x801E4ADC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801E4AE0: jal         0x80038BC8
    // 0x801E4AE4: addiu       $a0, $zero, 0x235
    ctx->r4 = ADD32(0, 0X235);
    func_80038BC8_397C8(rdram, ctx);
        goto after_1;
    // 0x801E4AE4: addiu       $a0, $zero, 0x235
    ctx->r4 = ADD32(0, 0X235);
    after_1:
    // 0x801E4AE8: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E4AEC: addiu       $a1, $a1, -0x4E40
    ctx->r5 = ADD32(ctx->r5, -0X4E40);
    // 0x801E4AF0: jal         0x801D31CC
    // 0x801E4AF4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_2;
    // 0x801E4AF4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x801E4AF8: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E4AFC: addiu       $a1, $a1, -0x4F6C
    ctx->r5 = ADD32(ctx->r5, -0X4F6C);
    // 0x801E4B00: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x801E4B04: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801E4B08: jal         0x801D34D0
    // 0x801E4B0C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_801D34D0_5FE8B0(rdram, ctx);
        goto after_3;
    // 0x801E4B0C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x801E4B10: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E4B14: jal         0x8003521C
    // 0x801E4B18: addiu       $a0, $a0, 0x4B38
    ctx->r4 = ADD32(ctx->r4, 0X4B38);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801E4B18: addiu       $a0, $a0, 0x4B38
    ctx->r4 = ADD32(ctx->r4, 0X4B38);
    after_4:
    // 0x801E4B1C: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x801E4B20: addiu       $t8, $zero, 0x96
    ctx->r24 = ADD32(0, 0X96);
    // 0x801E4B24: sw          $t8, 0x7C($t9)
    MEM_W(0X7C, ctx->r25) = ctx->r24;
    // 0x801E4B28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E4B2C:
    // 0x801E4B2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E4B30: jr          $ra
    // 0x801E4B34: nop

    TRACE_RETURN()
    return;
    // 0x801E4B34: nop

;}
RECOMP_FUNC void func_801F1218_61C5F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F1218: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801F121C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F1220: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801F1224: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F1228: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801F122C: jal         0x801F76D0
    // 0x801F1230: sb          $zero, 0x27($sp)
    MEM_B(0X27, ctx->r29) = 0;
    func_801F76D0_622AB0(rdram, ctx);
        goto after_0;
    // 0x801F1230: sb          $zero, 0x27($sp)
    MEM_B(0X27, ctx->r29) = 0;
    after_0:
    // 0x801F1234: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x801F1238: jal         0x801D2F40
    // 0x801F123C: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    func_801D2F40_5FE320(rdram, ctx);
        goto after_1;
    // 0x801F123C: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    after_1:
    // 0x801F1240: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x801F1244: lui         $at, 0x4032
    ctx->r1 = S32(0X4032 << 16);
    // 0x801F1248: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801F124C: lwc1        $f4, 0x28($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X28);
    // 0x801F1250: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801F1254: lbu         $v0, 0x27($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X27);
    // 0x801F1258: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801F125C: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x801F1260: c.le.d      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.d <= ctx->f6.d;
    // 0x801F1264: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F1268: bc1fl       L_801F1280
    if (!c1cs) {
        // 0x801F126C: lwc1        $f16, 0x74($s0)
        ctx->f16.u32l = MEM_W(ctx->r16, 0X74);
            goto L_801F1280;
    }
    goto skip_0;
    // 0x801F126C: lwc1        $f16, 0x74($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X74);
    skip_0:
    // 0x801F1270: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801F1274: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801F1278: swc1        $f10, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f10.u32l;
    // 0x801F127C: lwc1        $f16, 0x74($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X74);
L_801F1280:
    // 0x801F1280: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F1284: ldc1        $f4, -0x1AA8($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X1AA8);
    // 0x801F1288: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801F128C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801F1290: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x801F1294: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x801F1298: swc1        $f8, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f8.u32l;
    // 0x801F129C: lwc1        $f10, 0x74($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X74);
    // 0x801F12A0: c.le.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl <= ctx->f10.fl;
    // 0x801F12A4: nop

    // 0x801F12A8: bc1f        L_801F12C0
    if (!c1cs) {
        // 0x801F12AC: nop
    
            goto L_801F12C0;
    }
    // 0x801F12AC: nop

    // 0x801F12B0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x801F12B4: andi        $t6, $v0, 0xFF
    ctx->r14 = ctx->r2 & 0XFF;
    // 0x801F12B8: swc1        $f0, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f0.u32l;
    // 0x801F12BC: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
L_801F12C0:
    // 0x801F12C0: jal         0x801D619C
    // 0x801F12C4: sb          $v0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r2;
    func_801D619C_60157C(rdram, ctx);
        goto after_2;
    // 0x801F12C4: sb          $v0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r2;
    after_2:
    // 0x801F12C8: lbu         $v0, 0x27($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X27);
    // 0x801F12CC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801F12D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F12D4: bnel        $v0, $at, L_801F12E8
    if (ctx->r2 != ctx->r1) {
        // 0x801F12D8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801F12E8;
    }
    goto skip_1;
    // 0x801F12D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x801F12DC: jal         0x801F0690
    // 0x801F12E0: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    func_801F0690_61BA70(rdram, ctx);
        goto after_3;
    // 0x801F12E0: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    after_3:
    // 0x801F12E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801F12E8:
    // 0x801F12E8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801F12EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801F12F0: jr          $ra
    // 0x801F12F4: nop

    TRACE_RETURN()
    return;
    // 0x801F12F4: nop

;}
RECOMP_FUNC void func_801EF2B0_61A690(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EF2B0: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801EF2B4: lw          $t7, -0x1130($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1130);
    // 0x801EF2B8: addiu       $t6, $zero, 0x5B
    ctx->r14 = ADD32(0, 0X5B);
    // 0x801EF2BC: lw          $t8, 0x1D8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X1D8);
    // 0x801EF2C0: jr          $ra
    // 0x801EF2C4: sw          $t6, 0x64($t8)
    MEM_W(0X64, ctx->r24) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x801EF2C4: sw          $t6, 0x64($t8)
    MEM_W(0X64, ctx->r24) = ctx->r14;
;}
RECOMP_FUNC void func_801D4EB8_600298(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D4EB8: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D4EBC: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801D4EC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D4EC4: sdc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X10, ctx->r29);
    // 0x801D4EC8: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x801D4ECC: lwc1        $f0, 0xAC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XAC);
    // 0x801D4ED0: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x801D4ED4: mtc1        $a3, $f22
    ctx->f22.u32l = ctx->r7;
    // 0x801D4ED8: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x801D4EDC: addiu       $v0, $v0, 0xA0
    ctx->r2 = ADD32(ctx->r2, 0XA0);
    // 0x801D4EE0: bc1fl       L_801D4F10
    if (!c1cs) {
        // 0x801D4EE4: c.lt.s      $f14, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
            goto L_801D4F10;
    }
    goto skip_0;
    // 0x801D4EE4: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    skip_0:
    // 0x801D4EE8: add.s       $f4, $f0, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f12.fl;
    // 0x801D4EEC: swc1        $f4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f4.u32l;
    // 0x801D4EF0: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801D4EF4: c.le.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl <= ctx->f0.fl;
    // 0x801D4EF8: nop

    // 0x801D4EFC: bc1fl       L_801D4F10
    if (!c1cs) {
        // 0x801D4F00: c.lt.s      $f14, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
            goto L_801D4F10;
    }
    goto skip_1;
    // 0x801D4F00: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    skip_1:
    // 0x801D4F04: swc1        $f14, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f14.u32l;
    // 0x801D4F08: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801D4F0C: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
L_801D4F10:
    // 0x801D4F10: nop

    // 0x801D4F14: bc1fl       L_801D4F40
    if (!c1cs) {
        // 0x801D4F18: lwc1        $f0, 0x10($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
            goto L_801D4F40;
    }
    goto skip_2;
    // 0x801D4F18: lwc1        $f0, 0x10($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
    skip_2:
    // 0x801D4F1C: sub.s       $f6, $f0, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x801D4F20: swc1        $f6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f6.u32l;
    // 0x801D4F24: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801D4F28: c.le.s      $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f8.fl <= ctx->f14.fl;
    // 0x801D4F2C: nop

    // 0x801D4F30: bc1fl       L_801D4F40
    if (!c1cs) {
        // 0x801D4F34: lwc1        $f0, 0x10($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
            goto L_801D4F40;
    }
    goto skip_3;
    // 0x801D4F34: lwc1        $f0, 0x10($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
    skip_3:
    // 0x801D4F38: swc1        $f14, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f14.u32l;
    // 0x801D4F3C: lwc1        $f0, 0x10($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
L_801D4F40:
    // 0x801D4F40: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x801D4F44: nop

    // 0x801D4F48: bc1fl       L_801D4F78
    if (!c1cs) {
        // 0x801D4F4C: c.lt.s      $f20, $f0
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
            goto L_801D4F78;
    }
    goto skip_4;
    // 0x801D4F4C: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    skip_4:
    // 0x801D4F50: add.s       $f10, $f0, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f12.fl;
    // 0x801D4F54: swc1        $f10, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f10.u32l;
    // 0x801D4F58: lwc1        $f0, 0x10($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801D4F5C: c.le.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl <= ctx->f0.fl;
    // 0x801D4F60: nop

    // 0x801D4F64: bc1fl       L_801D4F78
    if (!c1cs) {
        // 0x801D4F68: c.lt.s      $f20, $f0
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
            goto L_801D4F78;
    }
    goto skip_5;
    // 0x801D4F68: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    skip_5:
    // 0x801D4F6C: swc1        $f20, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f20.u32l;
    // 0x801D4F70: lwc1        $f0, 0x10($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801D4F74: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
L_801D4F78:
    // 0x801D4F78: nop

    // 0x801D4F7C: bc1fl       L_801D4FA8
    if (!c1cs) {
        // 0x801D4F80: lwc1        $f0, 0x14($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
            goto L_801D4FA8;
    }
    goto skip_6;
    // 0x801D4F80: lwc1        $f0, 0x14($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
    skip_6:
    // 0x801D4F84: sub.s       $f16, $f0, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x801D4F88: swc1        $f16, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f16.u32l;
    // 0x801D4F8C: lwc1        $f18, 0x10($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801D4F90: c.le.s      $f18, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f18.fl <= ctx->f20.fl;
    // 0x801D4F94: nop

    // 0x801D4F98: bc1fl       L_801D4FA8
    if (!c1cs) {
        // 0x801D4F9C: lwc1        $f0, 0x14($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
            goto L_801D4FA8;
    }
    goto skip_7;
    // 0x801D4F9C: lwc1        $f0, 0x14($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
    skip_7:
    // 0x801D4FA0: swc1        $f20, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f20.u32l;
    // 0x801D4FA4: lwc1        $f0, 0x14($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
L_801D4FA8:
    // 0x801D4FA8: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
    // 0x801D4FAC: nop

    // 0x801D4FB0: bc1fl       L_801D4FE0
    if (!c1cs) {
        // 0x801D4FB4: c.lt.s      $f22, $f0
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
            goto L_801D4FE0;
    }
    goto skip_8;
    // 0x801D4FB4: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
    skip_8:
    // 0x801D4FB8: add.s       $f4, $f0, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f12.fl;
    // 0x801D4FBC: swc1        $f4, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f4.u32l;
    // 0x801D4FC0: lwc1        $f0, 0x14($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
    // 0x801D4FC4: c.le.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl <= ctx->f0.fl;
    // 0x801D4FC8: nop

    // 0x801D4FCC: bc1fl       L_801D4FE0
    if (!c1cs) {
        // 0x801D4FD0: c.lt.s      $f22, $f0
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
            goto L_801D4FE0;
    }
    goto skip_9;
    // 0x801D4FD0: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
    skip_9:
    // 0x801D4FD4: swc1        $f22, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f22.u32l;
    // 0x801D4FD8: lwc1        $f0, 0x14($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
    // 0x801D4FDC: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
L_801D4FE0:
    // 0x801D4FE0: nop

    // 0x801D4FE4: bc1fl       L_801D5010
    if (!c1cs) {
        // 0x801D4FE8: lwc1        $f10, 0xC($v0)
        ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
            goto L_801D5010;
    }
    goto skip_10;
    // 0x801D4FE8: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    skip_10:
    // 0x801D4FEC: sub.s       $f6, $f0, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x801D4FF0: swc1        $f6, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f6.u32l;
    // 0x801D4FF4: lwc1        $f8, 0x14($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X14);
    // 0x801D4FF8: c.le.s      $f8, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f8.fl <= ctx->f22.fl;
    // 0x801D4FFC: nop

    // 0x801D5000: bc1fl       L_801D5010
    if (!c1cs) {
        // 0x801D5004: lwc1        $f10, 0xC($v0)
        ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
            goto L_801D5010;
    }
    goto skip_11;
    // 0x801D5004: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    skip_11:
    // 0x801D5008: swc1        $f22, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f22.u32l;
    // 0x801D500C: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
L_801D5010:
    // 0x801D5010: c.eq.s      $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f14.fl == ctx->f10.fl;
    // 0x801D5014: nop

    // 0x801D5018: bc1fl       L_801D5054
    if (!c1cs) {
        // 0x801D501C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801D5054;
    }
    goto skip_12;
    // 0x801D501C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_12:
    // 0x801D5020: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801D5024: c.eq.s      $f20, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f20.fl == ctx->f16.fl;
    // 0x801D5028: nop

    // 0x801D502C: bc1fl       L_801D5054
    if (!c1cs) {
        // 0x801D5030: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801D5054;
    }
    goto skip_13;
    // 0x801D5030: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_13:
    // 0x801D5034: lwc1        $f18, 0x14($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X14);
    // 0x801D5038: c.eq.s      $f22, $f18
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f22.fl == ctx->f18.fl;
    // 0x801D503C: nop

    // 0x801D5040: bc1fl       L_801D5054
    if (!c1cs) {
        // 0x801D5044: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801D5054;
    }
    goto skip_14;
    // 0x801D5044: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_14:
    // 0x801D5048: b           L_801D5054
    // 0x801D504C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801D5054;
    // 0x801D504C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801D5050: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D5054:
    // 0x801D5054: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    // 0x801D5058: ldc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X10);
    // 0x801D505C: jr          $ra
    // 0x801D5060: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x801D5060: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802097EC_634BCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802097EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802097F0: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x802097F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802097F8: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x802097FC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80209800: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    // 0x80209804: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x80209808: jal         0x801D3018
    // 0x8020980C: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_801D3018_5FE3F8(rdram, ctx);
        goto after_0;
    // 0x8020980C: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_0:
    // 0x80209810: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x80209814: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80209818: addiu       $at, $zero, 0x400
    ctx->r1 = ADD32(0, 0X400);
    // 0x8020981C: lhu         $t6, 0x16($a2)
    ctx->r14 = MEM_HU(ctx->r6, 0X16);
    // 0x80209820: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80209824: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x80209828: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8020982C: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x80209830: bne         $t8, $at, L_80209860
    if (ctx->r24 != ctx->r1) {
        // 0x80209834: sh          $t7, 0x16($a2)
        MEM_H(0X16, ctx->r6) = ctx->r15;
            goto L_80209860;
    }
    // 0x80209834: sh          $t7, 0x16($a2)
    MEM_H(0X16, ctx->r6) = ctx->r15;
    // 0x80209838: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8020983C: sw          $zero, 0x90($a3)
    MEM_W(0X90, ctx->r7) = 0;
    // 0x80209840: addiu       $a1, $a1, -0x4718
    ctx->r5 = ADD32(ctx->r5, -0X4718);
    // 0x80209844: swc1        $f0, 0x70($a3)
    MEM_W(0X70, ctx->r7) = ctx->f0.u32l;
    // 0x80209848: swc1        $f0, 0x74($a3)
    MEM_W(0X74, ctx->r7) = ctx->f0.u32l;
    // 0x8020984C: jal         0x801D2EE4
    // 0x80209850: swc1        $f0, 0x78($a3)
    MEM_W(0X78, ctx->r7) = ctx->f0.u32l;
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_1;
    // 0x80209850: swc1        $f0, 0x78($a3)
    MEM_W(0X78, ctx->r7) = ctx->f0.u32l;
    after_1:
    // 0x80209854: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80209858: jal         0x8003521C
    // 0x8020985C: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x8020985C: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    after_2:
L_80209860:
    // 0x80209860: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80209864: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80209868: jr          $ra
    // 0x8020986C: nop

    TRACE_RETURN()
    return;
    // 0x8020986C: nop

;}
RECOMP_FUNC void func_801F03C4_61B7A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F03C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F03C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F03CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801F03D0: jal         0x801F7074
    // 0x801F03D4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801F7074_622454(rdram, ctx);
        goto after_0;
    // 0x801F03D4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F03D8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x801F03DC: jal         0x801D3018
    // 0x801F03E0: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    func_801D3018_5FE3F8(rdram, ctx);
        goto after_1;
    // 0x801F03E0: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_1:
    // 0x801F03E4: jal         0x801F732C
    // 0x801F03E8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801F732C_62270C(rdram, ctx);
        goto after_2;
    // 0x801F03E8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x801F03EC: beq         $v0, $zero, L_801F0404
    if (ctx->r2 == 0) {
        // 0x801F03F0: lw          $t6, 0x18($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X18);
            goto L_801F0404;
    }
    // 0x801F03F0: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x801F03F4: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F03F8: sw          $zero, 0x7C($t6)
    MEM_W(0X7C, ctx->r14) = 0;
    // 0x801F03FC: jal         0x8003521C
    // 0x801F0400: addiu       $a0, $a0, 0x414
    ctx->r4 = ADD32(ctx->r4, 0X414);
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801F0400: addiu       $a0, $a0, 0x414
    ctx->r4 = ADD32(ctx->r4, 0X414);
    after_3:
L_801F0404:
    // 0x801F0404: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F0408: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F040C: jr          $ra
    // 0x801F0410: nop

    TRACE_RETURN()
    return;
    // 0x801F0410: nop

;}
RECOMP_FUNC void func_801D1310_5FC6F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D1310: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801D1314: jr          $ra
    // 0x801D1318: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801D1318: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801F9350_624730(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F9350: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801F9354: lw          $v1, -0x1130($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1130);
    // 0x801F9358: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801F935C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F9360: addiu       $t6, $v1, 0x140
    ctx->r14 = ADD32(ctx->r3, 0X140);
    // 0x801F9364: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801F9368: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801F936C: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x801F9370: lw          $t7, 0x1D8($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X1D8);
    // 0x801F9374: addiu       $at, $zero, 0x16
    ctx->r1 = ADD32(0, 0X16);
    // 0x801F9378: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F937C: lw          $t8, 0xD8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XD8);
    // 0x801F9380: beq         $t8, $at, L_801F9398
    if (ctx->r24 == ctx->r1) {
        // 0x801F9384: nop
    
            goto L_801F9398;
    }
    // 0x801F9384: nop

    // 0x801F9388: jal         0x80034ED4
    // 0x801F938C: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_0;
    // 0x801F938C: nop

    after_0:
    // 0x801F9390: b           L_801F9454
    // 0x801F9394: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801F9454;
    // 0x801F9394: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801F9398:
    // 0x801F9398: jal         0x801D614C
    // 0x801F939C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D614C_60152C(rdram, ctx);
        goto after_1;
    // 0x801F939C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801F93A0: lw          $t9, 0x7C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X7C);
    // 0x801F93A4: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x801F93A8: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x801F93AC: bne         $t0, $zero, L_801F93E4
    if (ctx->r8 != 0) {
        // 0x801F93B0: sw          $t0, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r8;
            goto L_801F93E4;
    }
    // 0x801F93B0: sw          $t0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r8;
    // 0x801F93B4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801F93B8: lwc1        $f4, 0x70($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X70);
    // 0x801F93BC: lwc1        $f8, 0x74($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X74);
    // 0x801F93C0: lwc1        $f16, 0x78($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X78);
    // 0x801F93C4: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x801F93C8: nop

    // 0x801F93CC: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x801F93D0: nop

    // 0x801F93D4: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x801F93D8: swc1        $f6, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f6.u32l;
    // 0x801F93DC: swc1        $f10, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f10.u32l;
    // 0x801F93E0: swc1        $f18, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f18.u32l;
L_801F93E4:
    // 0x801F93E4: jal         0x801D365C
    // 0x801F93E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D365C_5FEA3C(rdram, ctx);
        goto after_2;
    // 0x801F93E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801F93EC: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801F93F0: lw          $v1, -0x1130($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1130);
    // 0x801F93F4: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x801F93F8: lw          $t2, 0x1CC($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X1CC);
    // 0x801F93FC: bne         $v0, $t2, L_801F9428
    if (ctx->r2 != ctx->r10) {
        // 0x801F9400: nop
    
            goto L_801F9428;
    }
    // 0x801F9400: nop

    // 0x801F9404: lbu         $t4, 0xE($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0XE);
    // 0x801F9408: bne         $t4, $zero, L_801F9428
    if (ctx->r12 != 0) {
        // 0x801F940C: nop
    
            goto L_801F9428;
    }
    // 0x801F940C: nop

    // 0x801F9410: lbu         $t5, 0x2C5($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X2C5);
    // 0x801F9414: addiu       $a0, $zero, 0x24A
    ctx->r4 = ADD32(0, 0X24A);
    // 0x801F9418: bne         $t5, $zero, L_801F9428
    if (ctx->r13 != 0) {
        // 0x801F941C: nop
    
            goto L_801F9428;
    }
    // 0x801F941C: nop

    // 0x801F9420: jal         0x80038BC8
    // 0x801F9424: sb          $zero, 0x30($s0)
    MEM_B(0X30, ctx->r16) = 0;
    func_80038BC8_397C8(rdram, ctx);
        goto after_3;
    // 0x801F9424: sb          $zero, 0x30($s0)
    MEM_B(0X30, ctx->r16) = 0;
    after_3:
L_801F9428:
    // 0x801F9428: jal         0x801D36C4
    // 0x801F942C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D36C4_5FEAA4(rdram, ctx);
        goto after_4;
    // 0x801F942C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x801F9430: lw          $t6, 0x7C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X7C);
    // 0x801F9434: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
    // 0x801F9438: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x801F943C: bne         $t6, $at, L_801F9450
    if (ctx->r14 != ctx->r1) {
        // 0x801F9440: lui         $a0, 0x8020
        ctx->r4 = S32(0X8020 << 16);
            goto L_801F9450;
    }
    // 0x801F9440: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801F9444: sw          $t7, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r15;
    // 0x801F9448: jal         0x8003521C
    // 0x801F944C: addiu       $a0, $a0, -0x6B9C
    ctx->r4 = ADD32(ctx->r4, -0X6B9C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x801F944C: addiu       $a0, $a0, -0x6B9C
    ctx->r4 = ADD32(ctx->r4, -0X6B9C);
    after_5:
L_801F9450:
    // 0x801F9450: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801F9454:
    // 0x801F9454: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801F9458: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801F945C: jr          $ra
    // 0x801F9460: nop

    TRACE_RETURN()
    return;
    // 0x801F9460: nop

;}
RECOMP_FUNC void func_80204EF4_6302D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80204EF4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80204EF8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80204EFC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80204F00: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80204F04: jal         0x801D614C
    // 0x80204F08: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_801D614C_60152C(rdram, ctx);
        goto after_0;
    // 0x80204F08: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x80204F0C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80204F10: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80204F14: lwc1        $f4, 0x10($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X10);
    // 0x80204F18: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x80204F1C: nop

    // 0x80204F20: bc1f        L_80204F30
    if (!c1cs) {
        // 0x80204F24: nop
    
            goto L_80204F30;
    }
    // 0x80204F24: nop

    // 0x80204F28: jal         0x80034ED4
    // 0x80204F2C: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_1;
    // 0x80204F2C: nop

    after_1:
L_80204F30:
    // 0x80204F30: jal         0x801D365C
    // 0x80204F34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D365C_5FEA3C(rdram, ctx);
        goto after_2;
    // 0x80204F34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80204F38: bne         $v0, $zero, L_80204F4C
    if (ctx->r2 != 0) {
        // 0x80204F3C: nop
    
            goto L_80204F4C;
    }
    // 0x80204F3C: nop

    // 0x80204F40: jal         0x801D36CC
    // 0x80204F44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D36CC_5FEAAC(rdram, ctx);
        goto after_3;
    // 0x80204F44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80204F48: beq         $v0, $zero, L_80204FB0
    if (ctx->r2 == 0) {
        // 0x80204F4C: lui         $a1, 0x8021
        ctx->r5 = S32(0X8021 << 16);
            goto L_80204FB0;
    }
L_80204F4C:
    // 0x80204F4C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80204F50: lw          $a1, -0x1130($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1130);
    // 0x80204F54: lui         $a3, 0x44BB
    ctx->r7 = S32(0X44BB << 16);
    // 0x80204F58: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x80204F5C: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    // 0x80204F60: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80204F64: jal         0x8000F3D8
    // 0x80204F68: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    func_8000F3D8_FFD8(rdram, ctx);
        goto after_4;
    // 0x80204F68: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    after_4:
    // 0x80204F6C: jal         0x801CEE80
    // 0x80204F70: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_801CEE80_5FA260(rdram, ctx);
        goto after_5;
    // 0x80204F70: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_5:
    // 0x80204F74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80204F78: jal         0x80205244
    // 0x80204F7C: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_80205244_630624(rdram, ctx);
        goto after_6;
    // 0x80204F7C: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_6:
    // 0x80204F80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80204F84: jal         0x80205244
    // 0x80204F88: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_80205244_630624(rdram, ctx);
        goto after_7;
    // 0x80204F88: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_7:
    // 0x80204F8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80204F90: jal         0x80205244
    // 0x80204F94: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_80205244_630624(rdram, ctx);
        goto after_8;
    // 0x80204F94: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_8:
    // 0x80204F98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80204F9C: jal         0x80205244
    // 0x80204FA0: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_80205244_630624(rdram, ctx);
        goto after_9;
    // 0x80204FA0: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_9:
    // 0x80204FA4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80204FA8: jal         0x8003521C
    // 0x80204FAC: addiu       $a0, $a0, 0x4FC4
    ctx->r4 = ADD32(ctx->r4, 0X4FC4);
    func_8003521C_35E1C(rdram, ctx);
        goto after_10;
    // 0x80204FAC: addiu       $a0, $a0, 0x4FC4
    ctx->r4 = ADD32(ctx->r4, 0X4FC4);
    after_10:
L_80204FB0:
    // 0x80204FB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80204FB4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80204FB8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80204FBC: jr          $ra
    // 0x80204FC0: nop

    TRACE_RETURN()
    return;
    // 0x80204FC0: nop

;}
RECOMP_FUNC void func_801D600C_6013EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D600C: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x801D6010: beq         $v0, $zero, L_801D6034
    if (ctx->r2 == 0) {
        // 0x801D6014: nop
    
            goto L_801D6034;
    }
    // 0x801D6014: nop

    // 0x801D6018: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
L_801D601C:
    // 0x801D601C: lwc1        $f6, 0x70($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X70);
    // 0x801D6020: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801D6024: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
    // 0x801D6028: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x801D602C: bnel        $v0, $zero, L_801D601C
    if (ctx->r2 != 0) {
        // 0x801D6030: lwc1        $f4, 0x8($v0)
        ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
            goto L_801D601C;
    }
    goto skip_0;
    // 0x801D6030: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    skip_0:
L_801D6034:
    // 0x801D6034: jr          $ra
    // 0x801D6038: nop

    TRACE_RETURN()
    return;
    // 0x801D6038: nop

;}
RECOMP_FUNC void func_80207838_632C18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80207838: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8020783C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80207840: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80207844: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x80207848: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8020784C: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80207850: lui         $a2, 0x800
    ctx->r6 = S32(0X800 << 16);
    // 0x80207854: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80207858: addiu       $a2, $a2, 0x5C0
    ctx->r6 = ADD32(ctx->r6, 0X5C0);
    // 0x8020785C: lui         $a3, 0x8021
    ctx->r7 = S32(0X8021 << 16);
    // 0x80207860: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80207864: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80207868: ori         $t6, $zero, 0x8000
    ctx->r14 = 0 | 0X8000;
    // 0x8020786C: ori         $t7, $zero, 0x8000
    ctx->r15 = 0 | 0X8000;
    // 0x80207870: ori         $t8, $zero, 0x8000
    ctx->r24 = 0 | 0X8000;
    // 0x80207874: addiu       $t9, $zero, 0x4B6
    ctx->r25 = ADD32(0, 0X4B6);
    // 0x80207878: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x8020787C: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x80207880: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x80207884: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80207888: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
    // 0x8020788C: addiu       $a1, $a1, 0x78E0
    ctx->r5 = ADD32(ctx->r5, 0X78E0);
    // 0x80207890: addiu       $a3, $a3, -0x5830
    ctx->r7 = ADD32(ctx->r7, -0X5830);
    // 0x80207894: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x80207898: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    // 0x8020789C: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    // 0x802078A0: swc1        $f12, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f12.u32l;
    // 0x802078A4: swc1        $f14, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f14.u32l;
    // 0x802078A8: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x802078AC: jal         0x800358E8
    // 0x802078B0: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    func_800358E8_364E8(rdram, ctx);
        goto after_0;
    // 0x802078B0: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x802078B4: beq         $v0, $zero, L_802078D0
    if (ctx->r2 == 0) {
        // 0x802078B8: lwc1        $f8, 0x5C($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
            goto L_802078D0;
    }
    // 0x802078B8: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x802078BC: swc1        $f8, 0x70($v0)
    MEM_W(0X70, ctx->r2) = ctx->f8.u32l;
    // 0x802078C0: lwc1        $f10, 0x60($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X60);
    // 0x802078C4: swc1        $f10, 0x74($v0)
    MEM_W(0X74, ctx->r2) = ctx->f10.u32l;
    // 0x802078C8: lwc1        $f16, 0x64($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X64);
    // 0x802078CC: swc1        $f16, 0x78($v0)
    MEM_W(0X78, ctx->r2) = ctx->f16.u32l;
L_802078D0:
    // 0x802078D0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x802078D4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x802078D8: jr          $ra
    // 0x802078DC: nop

    TRACE_RETURN()
    return;
    // 0x802078DC: nop

;}
RECOMP_FUNC void func_801D31F0_5FE5D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D31F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D31F4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801D31F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D31FC: bne         $a0, $zero, L_801D3210
    if (ctx->r4 != 0) {
        // 0x801D3200: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_801D3210;
    }
    // 0x801D3200: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801D3204: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D3208: b           L_801D3220
    // 0x801D320C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801D3220;
    // 0x801D320C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801D3210:
    // 0x801D3210: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x801D3214: jal         0x801D2F40
    // 0x801D3218: lw          $a0, 0x18($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X18);
    func_801D2F40_5FE320(rdram, ctx);
        goto after_0;
    // 0x801D3218: lw          $a0, 0x18($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X18);
    after_0:
    // 0x801D321C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801D3220:
    // 0x801D3220: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D3224: jr          $ra
    // 0x801D3228: nop

    TRACE_RETURN()
    return;
    // 0x801D3228: nop

;}
RECOMP_FUNC void func_801E16D0_60CAB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E16D0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801E16D4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801E16D8: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x801E16DC: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x801E16E0: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801E16E4: lwc1        $f6, 0x60($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801E16E8: lui         $a2, 0x800
    ctx->r6 = S32(0X800 << 16);
    // 0x801E16EC: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801E16F0: addiu       $a2, $a2, 0x100
    ctx->r6 = ADD32(ctx->r6, 0X100);
    // 0x801E16F4: lui         $a3, 0x8021
    ctx->r7 = S32(0X8021 << 16);
    // 0x801E16F8: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x801E16FC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E1700: addiu       $t6, $zero, 0x4BE
    ctx->r14 = ADD32(0, 0X4BE);
    // 0x801E1704: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x801E1708: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
    // 0x801E170C: addiu       $a1, $a1, 0x17F4
    ctx->r5 = ADD32(ctx->r5, 0X17F4);
    // 0x801E1710: addiu       $a3, $a3, -0x5778
    ctx->r7 = ADD32(ctx->r7, -0X5778);
    // 0x801E1714: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801E1718: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801E171C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x801E1720: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x801E1724: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    // 0x801E1728: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    // 0x801E172C: swc1        $f12, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f12.u32l;
    // 0x801E1730: swc1        $f14, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f14.u32l;
    // 0x801E1734: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x801E1738: jal         0x800358E8
    // 0x801E173C: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    func_800358E8_364E8(rdram, ctx);
        goto after_0;
    // 0x801E173C: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x801E1740: beq         $v0, $zero, L_801E17E0
    if (ctx->r2 == 0) {
        // 0x801E1744: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_801E17E0;
    }
    // 0x801E1744: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x801E1748: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801E174C: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x801E1750: swc1        $f8, 0x70($v0)
    MEM_W(0X70, ctx->r2) = ctx->f8.u32l;
    // 0x801E1754: jal         0x8000DD58
    // 0x801E1758: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    func_8000DD58_E958(rdram, ctx);
        goto after_1;
    // 0x801E1758: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    after_1:
    // 0x801E175C: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x801E1760: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x801E1764: mflo        $t7
    ctx->r15 = lo;
    // 0x801E1768: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x801E176C: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x801E1770: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
    // 0x801E1774: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x801E1778: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x801E177C: jal         0x8000DD58
    // 0x801E1780: swc1        $f16, 0x74($v1)
    MEM_W(0X74, ctx->r3) = ctx->f16.u32l;
    func_8000DD58_E958(rdram, ctx);
        goto after_2;
    // 0x801E1780: swc1        $f16, 0x74($v1)
    MEM_W(0X74, ctx->r3) = ctx->f16.u32l;
    after_2:
    // 0x801E1784: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x801E1788: div         $zero, $v0, $a0
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r4)));
    // 0x801E178C: mflo        $t9
    ctx->r25 = lo;
    // 0x801E1790: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x801E1794: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
    // 0x801E1798: bne         $a0, $zero, L_801E17A4
    if (ctx->r4 != 0) {
        // 0x801E179C: nop
    
            goto L_801E17A4;
    }
    // 0x801E179C: nop

    // 0x801E17A0: break       7
    do_break(2149455776);
L_801E17A4:
    // 0x801E17A4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x801E17A8: bne         $a0, $at, L_801E17BC
    if (ctx->r4 != ctx->r1) {
        // 0x801E17AC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_801E17BC;
    }
    // 0x801E17AC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E17B0: bne         $v0, $at, L_801E17BC
    if (ctx->r2 != ctx->r1) {
        // 0x801E17B4: nop
    
            goto L_801E17BC;
    }
    // 0x801E17B4: nop

    // 0x801E17B8: break       6
    do_break(2149455800);
L_801E17BC:
    // 0x801E17BC: cvt.d.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.d = CVT_D_W(ctx->f18.u32l);
    // 0x801E17C0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E17C4: ldc1        $f6, -0x2388($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X2388);
    // 0x801E17C8: addiu       $t0, $zero, 0x1E
    ctx->r8 = ADD32(0, 0X1E);
    // 0x801E17CC: sw          $a0, 0x7C($v1)
    MEM_W(0X7C, ctx->r3) = ctx->r4;
    // 0x801E17D0: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x801E17D4: sw          $t0, 0x80($v1)
    MEM_W(0X80, ctx->r3) = ctx->r8;
    // 0x801E17D8: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801E17DC: swc1        $f10, 0x78($v1)
    MEM_W(0X78, ctx->r3) = ctx->f10.u32l;
L_801E17E0:
    // 0x801E17E0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801E17E4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x801E17E8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x801E17EC: jr          $ra
    // 0x801E17F0: nop

    TRACE_RETURN()
    return;
    // 0x801E17F0: nop

;}
RECOMP_FUNC void func_801E60CC_6114AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E60CC: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801E60D0: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801E60D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E60D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E60DC: lbu         $t6, 0x14E($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X14E);
    // 0x801E60E0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801E60E4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801E60E8: bne         $t6, $at, L_801E6138
    if (ctx->r14 != ctx->r1) {
        // 0x801E60EC: addiu       $v0, $v0, 0x140
        ctx->r2 = ADD32(ctx->r2, 0X140);
            goto L_801E6138;
    }
    // 0x801E60EC: addiu       $v0, $v0, 0x140
    ctx->r2 = ADD32(ctx->r2, 0X140);
    // 0x801E60F0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801E60F4: lui         $a1, 0xC1A0
    ctx->r5 = S32(0XC1A0 << 16);
    // 0x801E60F8: jal         0x801D2F40
    // 0x801E60FC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_801D2F40_5FE320(rdram, ctx);
        goto after_0;
    // 0x801E60FC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x801E6100: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801E6104: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801E6108: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x801E610C: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x801E6110: addiu       $t7, $zero, 0x28
    ctx->r15 = ADD32(0, 0X28);
    // 0x801E6114: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801E6118: addiu       $a1, $a1, 0x6150
    ctx->r5 = ADD32(ctx->r5, 0X6150);
    // 0x801E611C: bc1f        L_801E6138
    if (!c1cs) {
        // 0x801E6120: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_801E6138;
    }
    // 0x801E6120: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x801E6124: sw          $t7, 0xD4($a2)
    MEM_W(0XD4, ctx->r6) = ctx->r15;
    // 0x801E6128: sw          $t8, 0xD8($a2)
    MEM_W(0XD8, ctx->r6) = ctx->r24;
    // 0x801E612C: jal         0x8003522C
    // 0x801E6130: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_8003522C_35E2C(rdram, ctx);
        goto after_1;
    // 0x801E6130: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x801E6134: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
L_801E6138:
    // 0x801E6138: jal         0x801EEEC0
    // 0x801E613C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_801EEEC0_61A2A0(rdram, ctx);
        goto after_2;
    // 0x801E613C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_2:
    // 0x801E6140: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E6144: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E6148: jr          $ra
    // 0x801E614C: nop

    TRACE_RETURN()
    return;
    // 0x801E614C: nop

;}
RECOMP_FUNC void func_801F214C_61D52C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F214C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801F2150: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x801F2154: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F2158: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x801F215C: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x801F2160: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F2164: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801F2168: jal         0x801D3018
    // 0x801F216C: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    func_801D3018_5FE3F8(rdram, ctx);
        goto after_0;
    // 0x801F216C: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_0:
    // 0x801F2170: jal         0x801F76D0
    // 0x801F2174: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801F76D0_622AB0(rdram, ctx);
        goto after_1;
    // 0x801F2174: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801F2178: jal         0x801D619C
    // 0x801F217C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D619C_60157C(rdram, ctx);
        goto after_2;
    // 0x801F217C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801F2180: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801F2184: lwc1        $f2, 0x10($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801F2188: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x801F218C: nop

    // 0x801F2190: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x801F2194: jal         0x800417E0
    // 0x801F2198: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    _nsqrtf(rdram, ctx);
        goto after_3;
    // 0x801F2198: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_3:
    // 0x801F219C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x801F21A0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801F21A4: nop

    // 0x801F21A8: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x801F21AC: nop

    // 0x801F21B0: bc1fl       L_801F222C
    if (!c1cs) {
        // 0x801F21B4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801F222C;
    }
    goto skip_0;
    // 0x801F21B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801F21B8: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x801F21BC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x801F21C0: jal         0x8000E9F4
    // 0x801F21C4: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    func_8000E9F4_F5F4(rdram, ctx);
        goto after_4;
    // 0x801F21C4: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    after_4:
    // 0x801F21C8: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F21CC: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x801F21D0: sh          $zero, 0x18($s1)
    MEM_H(0X18, ctx->r17) = 0;
    // 0x801F21D4: sh          $zero, 0x14($s1)
    MEM_H(0X14, ctx->r17) = 0;
    // 0x801F21D8: addiu       $a1, $a1, -0x4D70
    ctx->r5 = ADD32(ctx->r5, -0X4D70);
    // 0x801F21DC: jal         0x801D31CC
    // 0x801F21E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_5;
    // 0x801F21E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x801F21E4: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x801F21E8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801F21EC: lui         $t9, 0x801
    ctx->r25 = S32(0X801 << 16);
    // 0x801F21F0: addiu       $t7, $zero, 0x1E
    ctx->r15 = ADD32(0, 0X1E);
    // 0x801F21F4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801F21F8: addiu       $t9, $t9, -0x7A28
    ctx->r25 = ADD32(ctx->r25, -0X7A28);
    // 0x801F21FC: addiu       $t0, $zero, 0x51
    ctx->r8 = ADD32(0, 0X51);
    // 0x801F2200: sw          $zero, 0x90($s0)
    MEM_W(0X90, ctx->r16) = 0;
    // 0x801F2204: sw          $t7, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r15;
    // 0x801F2208: sb          $t8, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r24;
    // 0x801F220C: sw          $t9, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r25;
    // 0x801F2210: sb          $t0, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r8;
    // 0x801F2214: jal         0x801F703C
    // 0x801F2218: swc1        $f10, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f10.u32l;
    func_801F703C_62241C(rdram, ctx);
        goto after_6;
    // 0x801F2218: swc1        $f10, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f10.u32l;
    after_6:
    // 0x801F221C: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F2220: jal         0x8003521C
    // 0x801F2224: addiu       $a0, $a0, 0x223C
    ctx->r4 = ADD32(ctx->r4, 0X223C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_7;
    // 0x801F2224: addiu       $a0, $a0, 0x223C
    ctx->r4 = ADD32(ctx->r4, 0X223C);
    after_7:
    // 0x801F2228: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801F222C:
    // 0x801F222C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x801F2230: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x801F2234: jr          $ra
    // 0x801F2238: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x801F2238: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_801FE66C_629A4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FE66C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801FE670: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801FE674: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801FE678: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801FE67C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801FE680: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801FE684: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x801FE688: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x801FE68C: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x801FE690: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
    // 0x801FE694: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801FE698: div.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f14.fl);
    // 0x801FE69C: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801FE6A0: addiu       $t5, $zero, 0x400
    ctx->r13 = ADD32(0, 0X400);
    // 0x801FE6A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801FE6A8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801FE6AC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801FE6B0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801FE6B4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801FE6B8: addiu       $a3, $s0, 0x70
    ctx->r7 = ADD32(ctx->r16, 0X70);
    // 0x801FE6BC: addiu       $t1, $s0, 0x74
    ctx->r9 = ADD32(ctx->r16, 0X74);
    // 0x801FE6C0: mul.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x801FE6C4: div.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f14.fl);
    // 0x801FE6C8: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x801FE6CC: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x801FE6D0: nop

    // 0x801FE6D4: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x801FE6D8: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x801FE6DC: addiu       $t0, $t9, 0x100
    ctx->r8 = ADD32(ctx->r25, 0X100);
    // 0x801FE6E0: mtc1        $t0, $f18
    ctx->f18.u32l = ctx->r8;
    // 0x801FE6E4: nop

    // 0x801FE6E8: cvt.s.w     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = CVT_S_W(ctx->f18.u32l);
    // 0x801FE6EC: mul.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x801FE6F0: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x801FE6F4: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x801FE6F8: nop

    // 0x801FE6FC: sll         $t3, $t2, 16
    ctx->r11 = S32(ctx->r10 << 16);
    // 0x801FE700: sra         $t4, $t3, 16
    ctx->r12 = S32(SIGNED(ctx->r11) >> 16);
    // 0x801FE704: subu        $t6, $t5, $t4
    ctx->r14 = SUB32(ctx->r13, ctx->r12);
    // 0x801FE708: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x801FE70C: addiu       $t2, $s0, 0x78
    ctx->r10 = ADD32(ctx->r16, 0X78);
    // 0x801FE710: cvt.s.w     $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    ctx->f2.fl = CVT_S_W(ctx->f18.u32l);
    // 0x801FE714: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x801FE718: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x801FE71C: nop

    // 0x801FE720: cvt.w.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    ctx->f4.u32l = CVT_W_S(ctx->f2.fl);
    // 0x801FE724: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x801FE728: nop

    // 0x801FE72C: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x801FE730: beql        $a1, $zero, L_801FE780
    if (ctx->r5 == 0) {
        // 0x801FE734: mfc1        $a1, $f4
        ctx->r5 = (int32_t)ctx->f4.u32l;
            goto L_801FE780;
    }
    goto skip_0;
    // 0x801FE734: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    skip_0:
    // 0x801FE738: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801FE73C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801FE740: sub.s       $f4, $f2, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f4.fl;
    // 0x801FE744: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x801FE748: nop

    // 0x801FE74C: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x801FE750: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x801FE754: nop

    // 0x801FE758: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x801FE75C: bne         $a1, $zero, L_801FE774
    if (ctx->r5 != 0) {
        // 0x801FE760: nop
    
            goto L_801FE774;
    }
    // 0x801FE760: nop

    // 0x801FE764: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x801FE768: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801FE76C: b           L_801FE78C
    // 0x801FE770: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
        goto L_801FE78C;
    // 0x801FE770: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
L_801FE774:
    // 0x801FE774: b           L_801FE78C
    // 0x801FE778: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
        goto L_801FE78C;
    // 0x801FE778: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x801FE77C: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
L_801FE780:
    // 0x801FE780: nop

    // 0x801FE784: bltz        $a1, L_801FE774
    if (SIGNED(ctx->r5) < 0) {
        // 0x801FE788: nop
    
            goto L_801FE774;
    }
    // 0x801FE788: nop

L_801FE78C:
    // 0x801FE78C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x801FE790: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801FE794: andi        $t8, $a1, 0xFFFF
    ctx->r24 = ctx->r5 & 0XFFFF;
    // 0x801FE798: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x801FE79C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x801FE7A0: ctc1        $a2, $FpcCsr
    set_cop1_cs(ctx->r6);
    // 0x801FE7A4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801FE7A8: cvt.w.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_S(ctx->f0.fl);
    // 0x801FE7AC: cfc1        $a2, $FpcCsr
    ctx->r6 = get_cop1_cs();
    // 0x801FE7B0: nop

    // 0x801FE7B4: andi        $a2, $a2, 0x78
    ctx->r6 = ctx->r6 & 0X78;
    // 0x801FE7B8: beql        $a2, $zero, L_801FE808
    if (ctx->r6 == 0) {
        // 0x801FE7BC: mfc1        $a2, $f6
        ctx->r6 = (int32_t)ctx->f6.u32l;
            goto L_801FE808;
    }
    goto skip_1;
    // 0x801FE7BC: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    skip_1:
    // 0x801FE7C0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801FE7C4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801FE7C8: sub.s       $f6, $f0, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x801FE7CC: ctc1        $a2, $FpcCsr
    set_cop1_cs(ctx->r6);
    // 0x801FE7D0: nop

    // 0x801FE7D4: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x801FE7D8: cfc1        $a2, $FpcCsr
    ctx->r6 = get_cop1_cs();
    // 0x801FE7DC: nop

    // 0x801FE7E0: andi        $a2, $a2, 0x78
    ctx->r6 = ctx->r6 & 0X78;
    // 0x801FE7E4: bne         $a2, $zero, L_801FE7FC
    if (ctx->r6 != 0) {
        // 0x801FE7E8: nop
    
            goto L_801FE7FC;
    }
    // 0x801FE7E8: nop

    // 0x801FE7EC: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x801FE7F0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801FE7F4: b           L_801FE814
    // 0x801FE7F8: or          $a2, $a2, $at
    ctx->r6 = ctx->r6 | ctx->r1;
        goto L_801FE814;
    // 0x801FE7F8: or          $a2, $a2, $at
    ctx->r6 = ctx->r6 | ctx->r1;
L_801FE7FC:
    // 0x801FE7FC: b           L_801FE814
    // 0x801FE800: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
        goto L_801FE814;
    // 0x801FE800: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x801FE804: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
L_801FE808:
    // 0x801FE808: nop

    // 0x801FE80C: bltz        $a2, L_801FE7FC
    if (SIGNED(ctx->r6) < 0) {
        // 0x801FE810: nop
    
            goto L_801FE7FC;
    }
    // 0x801FE810: nop

L_801FE814:
    // 0x801FE814: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x801FE818: andi        $t0, $a2, 0xFFFF
    ctx->r8 = ctx->r6 & 0XFFFF;
    // 0x801FE81C: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    // 0x801FE820: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x801FE824: jal         0x8000E68C
    // 0x801FE828: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    func_8000E68C_F28C(rdram, ctx);
        goto after_0;
    // 0x801FE828: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    after_0:
    // 0x801FE82C: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x801FE830: lw          $t3, -0x10C0($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X10C0);
    // 0x801FE834: lui         $at, 0x3FF8
    ctx->r1 = S32(0X3FF8 << 16);
    // 0x801FE838: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x801FE83C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801FE840: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801FE844: sb          $zero, 0x815($t3)
    MEM_B(0X815, ctx->r11) = 0;
    // 0x801FE848: lwc1        $f10, 0x70($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X70);
    // 0x801FE84C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801FE850: swc1        $f8, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f8.u32l;
    // 0x801FE854: lwc1        $f8, 0x78($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X78);
    // 0x801FE858: cvt.d.s     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f18.d = CVT_D_S(ctx->f10.fl);
    // 0x801FE85C: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x801FE860: mul.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x801FE864: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801FE868: sw          $v0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r2;
    // 0x801FE86C: sw          $v0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r2;
    // 0x801FE870: mul.d       $f18, $f10, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f0.d);
    // 0x801FE874: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801FE878: addiu       $a1, $a1, -0x4BC8
    ctx->r5 = ADD32(ctx->r5, -0X4BC8);
    // 0x801FE87C: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801FE880: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x801FE884: swc1        $f6, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f6.u32l;
    // 0x801FE888: swc1        $f4, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f4.u32l;
    // 0x801FE88C: jal         0x801D2EE4
    // 0x801FE890: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_1;
    // 0x801FE890: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_1:
    // 0x801FE894: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FE898: jal         0x8003521C
    // 0x801FE89C: addiu       $a0, $a0, -0x1CF8
    ctx->r4 = ADD32(ctx->r4, -0X1CF8);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801FE89C: addiu       $a0, $a0, -0x1CF8
    ctx->r4 = ADD32(ctx->r4, -0X1CF8);
    after_2:
    // 0x801FE8A0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801FE8A4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801FE8A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801FE8AC: jr          $ra
    // 0x801FE8B0: nop

    TRACE_RETURN()
    return;
    // 0x801FE8B0: nop

;}
