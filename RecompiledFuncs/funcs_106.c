#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_080048E0_6B7B80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080048E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080048E4: lui         $t9, 0x801
    ctx->r25 = S32(RELOC_HI16(20, 0X969C) << 16);
    // 0x080048E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080048EC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x080048F0: addiu       $t9, $t9, -0x6964
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(20, 0X969C));
    // 0x080048F4: lui         $a1, 0xC37A
    ctx->r5 = S32(0XC37A << 16);
    // 0x080048F8: jalr        $t9
    // 0x080048FC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080048FC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x08004900: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08004904: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004908: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x0800490C: lbu         $v0, 0xD1($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD1);
    // 0x08004910: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    // 0x08004914: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    // 0x08004918: slti        $at, $v0, 0x5
    ctx->r1 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x0800491C: beq         $at, $zero, L_08004930
    if (ctx->r1 == 0) {
        // 0x08004920: addiu       $t8, $zero, 0xC8
        ctx->r24 = ADD32(0, 0XC8);
            goto L_08004930;
    }
    // 0x08004920: addiu       $t8, $zero, 0xC8
    ctx->r24 = ADD32(0, 0XC8);
    // 0x08004924: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x08004928: sb          $t6, 0xD1($a0)
    MEM_B(0XD1, ctx->r4) = ctx->r14;
    // 0x0800492C: andi        $v0, $t6, 0xFF
    ctx->r2 = ctx->r14 & 0XFF;
L_08004930:
    // 0x08004930: addiu       $t7, $v0, -0x2
    ctx->r15 = ADD32(ctx->r2, -0X2);
    // 0x08004934: sb          $t7, 0xD1($a0)
    MEM_B(0XD1, ctx->r4) = ctx->r15;
    // 0x08004938: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x0800493C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x08004940: jalr        $t9
    // 0x08004944: andi        $a1, $t7, 0xFF
    ctx->r5 = ctx->r15 & 0XFF;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004944: andi        $a1, $t7, 0xFF
    ctx->r5 = ctx->r15 & 0XFF;
    after_1:
    // 0x08004948: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x0800494C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004950: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08004954: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08004958: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x0800495C: addiu       $t0, $v0, -0x1
    ctx->r8 = ADD32(ctx->r2, -0X1);
    // 0x08004960: bne         $v1, $zero, L_0800498C
    if (ctx->r3 != 0) {
        // 0x08004964: sh          $t0, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r8;
            goto L_0800498C;
    }
    // 0x08004964: sh          $t0, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r8;
    // 0x08004968: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x0800496C: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC3B8) << 16);
    // 0x08004970: ldc1        $f8, -0x3C48($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(20, 0XC3B8));
    // 0x08004974: lwc1        $f4, 0xC($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0XC);
    // 0x08004978: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x0800497C: c.lt.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d < ctx->f8.d;
    // 0x08004980: nop

    // 0x08004984: bc1fl       L_08004998
    if (!c1cs) {
        // 0x08004988: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_08004998;
    }
    goto skip_0;
    // 0x08004988: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
L_0800498C:
    // 0x0800498C: jalr        $t9
    // 0x08004990: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08004990: nop

    after_2:
    // 0x08004994: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08004998:
    // 0x08004998: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x0800499C: jr          $ra
    // 0x080049A0: nop

    TRACE_RETURN()
    return;
    // 0x080049A0: nop

;}
RECOMP_FUNC void func_08006D0C_6B9FAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08006D0C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x08006D10: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08006D14: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08006D18: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x08006D1C: lw          $t0, 0xDC($a0)
    ctx->r8 = MEM_W(ctx->r4, 0XDC);
    // 0x08006D20: lui         $t9, 0x801
    ctx->r25 = S32(RELOC_HI16(20, 0XA854) << 16);
    // 0x08006D24: addiu       $t9, $t9, -0x57AC
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(20, 0XA854));
    // 0x08006D28: lw          $t6, 0x18($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X18);
    // 0x08006D2C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08006D30: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x08006D34: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x08006D38: jalr        $t9
    // 0x08006D3C: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08006D3C: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    after_0:
    // 0x08006D40: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x08006D44: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x08006D48: lui         $v0, 0x8002
    ctx->r2 = S32(0X8002 << 16);
    // 0x08006D4C: lhu         $t8, 0x16($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X16);
    // 0x08006D50: addiu       $v0, $v0, 0x3E94
    ctx->r2 = ADD32(ctx->r2, 0X3E94);
    // 0x08006D54: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x08006D58: sh          $t8, 0x16($t1)
    MEM_H(0X16, ctx->r9) = ctx->r24;
    // 0x08006D5C: jalr        $v0
    // 0x08006D60: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x08006D60: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    after_1:
    // 0x08006D64: beq         $v0, $zero, L_08006D78
    if (ctx->r2 == 0) {
        // 0x08006D68: lw          $t0, 0x38($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X38);
            goto L_08006D78;
    }
    // 0x08006D68: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x08006D6C: lw          $t2, 0x60($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X60);
    // 0x08006D70: ori         $t3, $t2, 0x1
    ctx->r11 = ctx->r10 | 0X1;
    // 0x08006D74: sw          $t3, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r11;
L_08006D78:
    // 0x08006D78: lw          $t4, 0x68($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X68);
    // 0x08006D7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08006D80: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08006D84: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x08006D88: beq         $t5, $zero, L_08006E48
    if (ctx->r13 == 0) {
        // 0x08006D8C: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_08006E48;
    }
    // 0x08006D8C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08006D90: lbu         $v1, 0x8C($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0X8C);
    // 0x08006D94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08006D98: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x08006D9C: bgez        $v1, L_08006DB0
    if (SIGNED(ctx->r3) >= 0) {
        // 0x08006DA0: andi        $t6, $v1, 0x3
        ctx->r14 = ctx->r3 & 0X3;
            goto L_08006DB0;
    }
    // 0x08006DA0: andi        $t6, $v1, 0x3
    ctx->r14 = ctx->r3 & 0X3;
    // 0x08006DA4: beq         $t6, $zero, L_08006DB0
    if (ctx->r14 == 0) {
        // 0x08006DA8: nop
    
            goto L_08006DB0;
    }
    // 0x08006DA8: nop

    // 0x08006DAC: addiu       $t6, $t6, -0x4
    ctx->r14 = ADD32(ctx->r14, -0X4);
L_08006DB0:
    // 0x08006DB0: bne         $t6, $zero, L_08006DF8
    if (ctx->r14 != 0) {
        // 0x08006DB4: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_08006DF8;
    }
    // 0x08006DB4: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x08006DB8: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x08006DBC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x08006DC0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08006DC4: addiu       $t9, $t9, -0x20A0
    ctx->r25 = ADD32(ctx->r25, -0X20A0);
    // 0x08006DC8: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08006DCC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x08006DD0: jalr        $t9
    // 0x08006DD4: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08006DD4: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    after_2:
    // 0x08006DD8: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x08006DDC: lbu         $v1, 0x8C($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0X8C);
    // 0x08006DE0: bgez        $v1, L_08006DF4
    if (SIGNED(ctx->r3) >= 0) {
        // 0x08006DE4: andi        $t7, $v1, 0x3
        ctx->r15 = ctx->r3 & 0X3;
            goto L_08006DF4;
    }
    // 0x08006DE4: andi        $t7, $v1, 0x3
    ctx->r15 = ctx->r3 & 0X3;
    // 0x08006DE8: beq         $t7, $zero, L_08006DF4
    if (ctx->r15 == 0) {
        // 0x08006DEC: nop
    
            goto L_08006DF4;
    }
    // 0x08006DEC: nop

    // 0x08006DF0: addiu       $t7, $t7, -0x4
    ctx->r15 = ADD32(ctx->r15, -0X4);
L_08006DF4:
    // 0x08006DF4: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
L_08006DF8:
    // 0x08006DF8: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x08006DFC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08006E00: bne         $v1, $at, L_08006E28
    if (ctx->r3 != ctx->r1) {
        // 0x08006E04: addiu       $v0, $v0, -0x20A0
        ctx->r2 = ADD32(ctx->r2, -0X20A0);
            goto L_08006E28;
    }
    // 0x08006E04: addiu       $v0, $v0, -0x20A0
    ctx->r2 = ADD32(ctx->r2, -0X20A0);
    // 0x08006E08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08006E0C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x08006E10: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08006E14: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08006E18: jalr        $v0
    // 0x08006E1C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x08006E1C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x08006E20: b           L_08006E60
    // 0x08006E24: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
        goto L_08006E60;
    // 0x08006E24: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
L_08006E28:
    // 0x08006E28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08006E2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08006E30: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08006E34: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08006E38: jalr        $v0
    // 0x08006E3C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x08006E3C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
    // 0x08006E40: b           L_08006E60
    // 0x08006E44: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
        goto L_08006E60;
    // 0x08006E44: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
L_08006E48:
    // 0x08006E48: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08006E4C: addiu       $t9, $t9, -0x20A0
    ctx->r25 = ADD32(ctx->r25, -0X20A0);
    // 0x08006E50: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08006E54: jalr        $t9
    // 0x08006E58: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08006E58: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
    // 0x08006E5C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
L_08006E60:
    // 0x08006E60: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x08006E64: jalr        $t9
    // 0x08006E68: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08006E68: nop

    after_6:
    // 0x08006E6C: beq         $v0, $zero, L_08006EBC
    if (ctx->r2 == 0) {
        // 0x08006E70: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08006EBC;
    }
    // 0x08006E70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08006E74: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08006E78: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08006E7C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08006E80: addiu       $a1, $a1, 0x183C
    ctx->r5 = ADD32(ctx->r5, 0X183C);
    // 0x08006E84: jalr        $t9
    // 0x08006E88: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08006E88: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_7:
    // 0x08006E8C: beq         $v0, $zero, L_08006EAC
    if (ctx->r2 == 0) {
        // 0x08006E90: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(20, 0X72E0) << 16);
            goto L_08006EAC;
    }
    // 0x08006E90: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X72E0) << 16);
    // 0x08006E94: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08006E98: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08006E9C: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x08006EA0: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    // 0x08006EA4: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x08006EA8: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
L_08006EAC:
    // 0x08006EAC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08006EB0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08006EB4: jalr        $t9
    // 0x08006EB8: addiu       $a0, $a0, 0x72E0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X72E0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08006EB8: addiu       $a0, $a0, 0x72E0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X72E0));
    after_8:
L_08006EBC:
    // 0x08006EBC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08006EC0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08006EC4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x08006EC8: jr          $ra
    // 0x08006ECC: nop

    TRACE_RETURN()
    return;
    // 0x08006ECC: nop

;}
RECOMP_FUNC void func_08002190_6B5430(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002190: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x08002194: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x08002198: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x0800219C: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x080021A0: lbu         $t6, 0x7C($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X7C);
    // 0x080021A4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x080021A8: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x080021AC: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x080021B0: beq         $t7, $zero, L_080023CC
    if (ctx->r15 == 0) {
        // 0x080021B4: addiu       $a0, $zero, 0x261
        ctx->r4 = ADD32(0, 0X261);
            goto L_080023CC;
    }
    // 0x080021B4: addiu       $a0, $zero, 0x261
    ctx->r4 = ADD32(0, 0X261);
    // 0x080021B8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080021BC: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x080021C0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x080021C4: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x080021C8: jalr        $t9
    // 0x080021CC: lui         $a3, 0x43A5
    ctx->r7 = S32(0X43A5 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080021CC: lui         $a3, 0x43A5
    ctx->r7 = S32(0X43A5 << 16);
    after_0:
    // 0x080021D0: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x080021D4: lbu         $t8, -0x324A($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X324A);
    // 0x080021D8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x080021DC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080021E0: bne         $t8, $at, L_080022CC
    if (ctx->r24 != ctx->r1) {
        // 0x080021E4: lui         $a1, 0x800
        ctx->r5 = S32(RELOC_HI16(20, 0X49A4) << 16);
            goto L_080022CC;
    }
    // 0x080021E4: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(20, 0X49A4) << 16);
    // 0x080021E8: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x080021EC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080021F0: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x080021F4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080021F8: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(20, 0X49A4) << 16);
    // 0x080021FC: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x08002200: addiu       $v0, $v0, -0x2218
    ctx->r2 = ADD32(ctx->r2, -0X2218);
    // 0x08002204: addiu       $a1, $a1, 0x49A4
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(20, 0X49A4));
    // 0x08002208: sw          $a1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r5;
    // 0x0800220C: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x08002210: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08002214: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x08002218: lui         $a3, 0xC1F0
    ctx->r7 = S32(0XC1F0 << 16);
    // 0x0800221C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x08002220: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x08002224: jalr        $v0
    // 0x08002228: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x08002228: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x0800222C: beq         $v0, $zero, L_08002260
    if (ctx->r2 == 0) {
        // 0x08002230: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08002260;
    }
    // 0x08002230: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08002234: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002238: addiu       $t0, $zero, 0x1D
    ctx->r8 = ADD32(0, 0X1D);
    // 0x0800223C: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08002240: sh          $t0, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r8;
    // 0x08002244: jalr        $t9
    // 0x08002248: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002248: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    after_2:
    // 0x0800224C: lw          $t1, 0xE8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XE8);
    // 0x08002250: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x08002254: sw          $s1, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r17;
    // 0x08002258: ori         $t2, $t1, 0x1
    ctx->r10 = ctx->r9 | 0X1;
    // 0x0800225C: sw          $t2, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r10;
L_08002260:
    // 0x08002260: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x08002264: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08002268: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x0800226C: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x08002270: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08002274: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08002278: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x0800227C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x08002280: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    // 0x08002284: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x08002288: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x0800228C: jalr        $t9
    // 0x08002290: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002290: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x08002294: beq         $v0, $zero, L_0800239C
    if (ctx->r2 == 0) {
        // 0x08002298: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_0800239C;
    }
    // 0x08002298: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x0800229C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080022A0: addiu       $t3, $zero, 0x1D
    ctx->r11 = ADD32(0, 0X1D);
    // 0x080022A4: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080022A8: sh          $t3, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r11;
    // 0x080022AC: jalr        $t9
    // 0x080022B0: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080022B0: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    after_4:
    // 0x080022B4: lw          $t4, 0xE8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XE8);
    // 0x080022B8: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x080022BC: sw          $s1, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r17;
    // 0x080022C0: ori         $t5, $t4, 0x41
    ctx->r13 = ctx->r12 | 0X41;
    // 0x080022C4: b           L_0800239C
    // 0x080022C8: sw          $t5, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r13;
        goto L_0800239C;
    // 0x080022C8: sw          $t5, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r13;
L_080022CC:
    // 0x080022CC: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x080022D0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x080022D4: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x080022D8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x080022DC: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x080022E0: addiu       $v0, $v0, -0x2218
    ctx->r2 = ADD32(ctx->r2, -0X2218);
    // 0x080022E4: addiu       $a1, $a1, 0x49A4
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(20, 0X49A4));
    // 0x080022E8: sw          $a1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r5;
    // 0x080022EC: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x080022F0: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x080022F4: lui         $a3, 0xC1F0
    ctx->r7 = S32(0XC1F0 << 16);
    // 0x080022F8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x080022FC: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x08002300: jalr        $v0
    // 0x08002304: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x08002304: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_5:
    // 0x08002308: beq         $v0, $zero, L_08002338
    if (ctx->r2 == 0) {
        // 0x0800230C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08002338;
    }
    // 0x0800230C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08002310: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002314: addiu       $t6, $zero, 0x1D
    ctx->r14 = ADD32(0, 0X1D);
    // 0x08002318: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x0800231C: sh          $t6, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r14;
    // 0x08002320: jalr        $t9
    // 0x08002324: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08002324: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    after_6:
    // 0x08002328: lw          $t7, 0xE8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XE8);
    // 0x0800232C: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x08002330: ori         $t8, $t7, 0x2
    ctx->r24 = ctx->r15 | 0X2;
    // 0x08002334: sw          $t8, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r24;
L_08002338:
    // 0x08002338: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x0800233C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08002340: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x08002344: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x08002348: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x0800234C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08002350: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x08002354: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x08002358: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    // 0x0800235C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x08002360: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x08002364: jalr        $t9
    // 0x08002368: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08002368: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_7:
    // 0x0800236C: beq         $v0, $zero, L_0800239C
    if (ctx->r2 == 0) {
        // 0x08002370: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_0800239C;
    }
    // 0x08002370: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08002374: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002378: addiu       $t0, $zero, 0x1D
    ctx->r8 = ADD32(0, 0X1D);
    // 0x0800237C: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08002380: sh          $t0, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r8;
    // 0x08002384: jalr        $t9
    // 0x08002388: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08002388: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    after_8:
    // 0x0800238C: lw          $t1, 0xE8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XE8);
    // 0x08002390: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x08002394: ori         $t2, $t1, 0x42
    ctx->r10 = ctx->r9 | 0X42;
    // 0x08002398: sw          $t2, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r10;
L_0800239C:
    // 0x0800239C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080023A0: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080023A4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080023A8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x080023AC: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x080023B0: jalr        $t9
    // 0x080023B4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x080023B4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_9:
    // 0x080023B8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080023BC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080023C0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X23E0) << 16);
    // 0x080023C4: jalr        $t9
    // 0x080023C8: addiu       $a0, $a0, 0x23E0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X23E0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x080023C8: addiu       $a0, $a0, 0x23E0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X23E0));
    after_10:
L_080023CC:
    // 0x080023CC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x080023D0: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x080023D4: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x080023D8: jr          $ra
    // 0x080023DC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x080023DC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_08001D0C_6B4FAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001D0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001D10: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001D14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001D18: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001D1C: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08001D20: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001D24: jalr        $t9
    // 0x08001D28: addiu       $a0, $zero, 0x177
    ctx->r4 = ADD32(0, 0X177);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001D28: addiu       $a0, $zero, 0x177
    ctx->r4 = ADD32(0, 0X177);
    after_0:
    // 0x08001D2C: beq         $v0, $zero, L_08001D44
    if (ctx->r2 == 0) {
        // 0x08001D30: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(20, 0X1D54) << 16);
            goto L_08001D44;
    }
    // 0x08001D30: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X1D54) << 16);
    // 0x08001D34: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001D38: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001D3C: jalr        $t9
    // 0x08001D40: addiu       $a0, $a0, 0x1D54
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X1D54));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001D40: addiu       $a0, $a0, 0x1D54
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X1D54));
    after_1:
L_08001D44:
    // 0x08001D44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001D48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001D4C: jr          $ra
    // 0x08001D50: nop

    TRACE_RETURN()
    return;
    // 0x08001D50: nop

;}
RECOMP_FUNC void func_080068FC_6B9B9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080068FC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x08006900: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08006904: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08006908: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x0800690C: lw          $t0, 0xDC($a0)
    ctx->r8 = MEM_W(ctx->r4, 0XDC);
    // 0x08006910: lui         $t9, 0x801
    ctx->r25 = S32(RELOC_HI16(20, 0XA854) << 16);
    // 0x08006914: addiu       $t9, $t9, -0x57AC
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(20, 0XA854));
    // 0x08006918: lw          $t6, 0x18($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X18);
    // 0x0800691C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08006920: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08006924: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x08006928: jalr        $t9
    // 0x0800692C: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800692C: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    after_0:
    // 0x08006930: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x08006934: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x08006938: lui         $v0, 0x8002
    ctx->r2 = S32(0X8002 << 16);
    // 0x0800693C: lhu         $t8, 0x16($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X16);
    // 0x08006940: addiu       $v0, $v0, 0x3E94
    ctx->r2 = ADD32(ctx->r2, 0X3E94);
    // 0x08006944: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x08006948: sh          $t8, 0x16($t1)
    MEM_H(0X16, ctx->r9) = ctx->r24;
    // 0x0800694C: jalr        $v0
    // 0x08006950: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x08006950: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    after_1:
    // 0x08006954: beq         $v0, $zero, L_08006968
    if (ctx->r2 == 0) {
        // 0x08006958: lw          $t0, 0x38($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X38);
            goto L_08006968;
    }
    // 0x08006958: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x0800695C: lw          $t2, 0x60($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X60);
    // 0x08006960: ori         $t3, $t2, 0x1
    ctx->r11 = ctx->r10 | 0X1;
    // 0x08006964: sw          $t3, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r11;
L_08006968:
    // 0x08006968: lw          $t4, 0x68($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X68);
    // 0x0800696C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08006970: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08006974: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x08006978: beq         $t5, $zero, L_08006A38
    if (ctx->r13 == 0) {
        // 0x0800697C: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_08006A38;
    }
    // 0x0800697C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08006980: lbu         $v1, 0x8C($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0X8C);
    // 0x08006984: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08006988: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x0800698C: bgez        $v1, L_080069A0
    if (SIGNED(ctx->r3) >= 0) {
        // 0x08006990: andi        $t6, $v1, 0x3
        ctx->r14 = ctx->r3 & 0X3;
            goto L_080069A0;
    }
    // 0x08006990: andi        $t6, $v1, 0x3
    ctx->r14 = ctx->r3 & 0X3;
    // 0x08006994: beq         $t6, $zero, L_080069A0
    if (ctx->r14 == 0) {
        // 0x08006998: nop
    
            goto L_080069A0;
    }
    // 0x08006998: nop

    // 0x0800699C: addiu       $t6, $t6, -0x4
    ctx->r14 = ADD32(ctx->r14, -0X4);
L_080069A0:
    // 0x080069A0: bne         $t6, $zero, L_080069E8
    if (ctx->r14 != 0) {
        // 0x080069A4: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_080069E8;
    }
    // 0x080069A4: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x080069A8: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x080069AC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x080069B0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080069B4: addiu       $t9, $t9, -0x20A0
    ctx->r25 = ADD32(ctx->r25, -0X20A0);
    // 0x080069B8: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x080069BC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x080069C0: jalr        $t9
    // 0x080069C4: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080069C4: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    after_2:
    // 0x080069C8: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x080069CC: lbu         $v1, 0x8C($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0X8C);
    // 0x080069D0: bgez        $v1, L_080069E4
    if (SIGNED(ctx->r3) >= 0) {
        // 0x080069D4: andi        $t7, $v1, 0x3
        ctx->r15 = ctx->r3 & 0X3;
            goto L_080069E4;
    }
    // 0x080069D4: andi        $t7, $v1, 0x3
    ctx->r15 = ctx->r3 & 0X3;
    // 0x080069D8: beq         $t7, $zero, L_080069E4
    if (ctx->r15 == 0) {
        // 0x080069DC: nop
    
            goto L_080069E4;
    }
    // 0x080069DC: nop

    // 0x080069E0: addiu       $t7, $t7, -0x4
    ctx->r15 = ADD32(ctx->r15, -0X4);
L_080069E4:
    // 0x080069E4: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
L_080069E8:
    // 0x080069E8: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x080069EC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x080069F0: bne         $v1, $at, L_08006A18
    if (ctx->r3 != ctx->r1) {
        // 0x080069F4: addiu       $v0, $v0, -0x20A0
        ctx->r2 = ADD32(ctx->r2, -0X20A0);
            goto L_08006A18;
    }
    // 0x080069F4: addiu       $v0, $v0, -0x20A0
    ctx->r2 = ADD32(ctx->r2, -0X20A0);
    // 0x080069F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080069FC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x08006A00: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08006A04: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08006A08: jalr        $v0
    // 0x08006A0C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x08006A0C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x08006A10: b           L_08006A50
    // 0x08006A14: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
        goto L_08006A50;
    // 0x08006A14: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
L_08006A18:
    // 0x08006A18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08006A1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08006A20: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08006A24: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08006A28: jalr        $v0
    // 0x08006A2C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x08006A2C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
    // 0x08006A30: b           L_08006A50
    // 0x08006A34: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
        goto L_08006A50;
    // 0x08006A34: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
L_08006A38:
    // 0x08006A38: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08006A3C: addiu       $t9, $t9, -0x20A0
    ctx->r25 = ADD32(ctx->r25, -0X20A0);
    // 0x08006A40: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08006A44: jalr        $t9
    // 0x08006A48: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08006A48: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
    // 0x08006A4C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
L_08006A50:
    // 0x08006A50: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x08006A54: jalr        $t9
    // 0x08006A58: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08006A58: nop

    after_6:
    // 0x08006A5C: beq         $v0, $zero, L_08006AAC
    if (ctx->r2 == 0) {
        // 0x08006A60: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08006AAC;
    }
    // 0x08006A60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08006A64: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08006A68: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08006A6C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08006A70: addiu       $a1, $a1, 0x183C
    ctx->r5 = ADD32(ctx->r5, 0X183C);
    // 0x08006A74: jalr        $t9
    // 0x08006A78: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08006A78: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_7:
    // 0x08006A7C: beq         $v0, $zero, L_08006A9C
    if (ctx->r2 == 0) {
        // 0x08006A80: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(20, 0X72E0) << 16);
            goto L_08006A9C;
    }
    // 0x08006A80: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X72E0) << 16);
    // 0x08006A84: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08006A88: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08006A8C: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x08006A90: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    // 0x08006A94: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x08006A98: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
L_08006A9C:
    // 0x08006A9C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08006AA0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08006AA4: jalr        $t9
    // 0x08006AA8: addiu       $a0, $a0, 0x72E0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X72E0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08006AA8: addiu       $a0, $a0, 0x72E0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X72E0));
    after_8:
L_08006AAC:
    // 0x08006AAC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08006AB0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08006AB4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x08006AB8: jr          $ra
    // 0x08006ABC: nop

    TRACE_RETURN()
    return;
    // 0x08006ABC: nop

;}
RECOMP_FUNC void func_0800B3FC_6BE69C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800B3FC: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x0800B400: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x0800B404: lw          $t6, -0x39DC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39DC);
    // 0x0800B408: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0800B40C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0800B410: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x0800B414: lbu         $t7, 0x61($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X61);
    // 0x0800B418: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x0800B41C: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x0800B420: bnel        $t7, $zero, L_0800B9A8
    if (ctx->r15 != 0) {
        // 0x0800B424: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_0800B9A8;
    }
    goto skip_0;
    // 0x0800B424: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x0800B428: lw          $t8, -0x39D8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X39D8);
    // 0x0800B42C: addiu       $v1, $v1, -0x39F4
    ctx->r3 = ADD32(ctx->r3, -0X39F4);
    // 0x0800B430: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x0800B434: lw          $t9, 0x2C($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X2C);
    // 0x0800B438: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x0800B43C: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x0800B440: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x0800B444: sw          $t0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r8;
    // 0x0800B448: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x0800B44C: addiu       $s0, $a0, 0xD0
    ctx->r16 = ADD32(ctx->r4, 0XD0);
    // 0x0800B450: swc1        $f4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f4.u32l;
    // 0x0800B454: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x0800B458: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x0800B45C: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    // 0x0800B460: lbu         $t1, 0x0($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X0);
    // 0x0800B464: sltiu       $at, $t1, 0x9
    ctx->r1 = ctx->r9 < 0X9 ? 1 : 0;
    // 0x0800B468: beq         $at, $zero, L_0800B980
    if (ctx->r1 == 0) {
        // 0x0800B46C: sll         $t1, $t1, 2
        ctx->r9 = S32(ctx->r9 << 2);
            goto L_0800B980;
    }
    // 0x0800B46C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x0800B470: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC480) << 16);
    // 0x0800B474: addu        $at, $at, $t1
    gpr jr_addend_0800B47C = ctx->r9;
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x0800B478: lw          $t1, -0x3B80($at)
    ctx->r9 = ADD32(ctx->r1, (int16_t)RELOC_LO16(20, 0XC480));
    // 0x0800B47C: jr          $t1
    // 0x0800B480: nop

    switch (jr_addend_0800B47C >> 2) {
        case 0: goto L_0800B484; break;
        case 1: goto L_0800B4BC; break;
        case 2: goto L_0800B50C; break;
        case 3: goto L_0800B544; break;
        case 4: goto L_0800B980; break;
        case 5: goto L_0800B6E4; break;
        case 6: goto L_0800B7C8; break;
        case 7: goto L_0800B7EC; break;
        case 8: goto L_0800B914; break;
        default: switch_error(__func__, 0x0800B47C, 0x0800C480);
    }
    // 0x0800B480: nop

L_0800B484:
    // 0x0800B484: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800B488: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x0800B48C: jalr        $t9
    // 0x0800B490: addiu       $a0, $zero, 0x136
    ctx->r4 = ADD32(0, 0X136);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800B490: addiu       $a0, $zero, 0x136
    ctx->r4 = ADD32(0, 0X136);
    after_0:
    // 0x0800B494: bnel        $v0, $zero, L_0800B9A8
    if (ctx->r2 != 0) {
        // 0x0800B498: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_0800B9A8;
    }
    goto skip_1;
    // 0x0800B498: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x0800B49C: lh          $t2, 0x2($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X2);
    // 0x0800B4A0: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x0800B4A4: slti        $at, $t2, 0x3
    ctx->r1 = SIGNED(ctx->r10) < 0X3 ? 1 : 0;
    // 0x0800B4A8: bnel        $at, $zero, L_0800B984
    if (ctx->r1 != 0) {
        // 0x0800B4AC: lw          $a0, 0x8($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X8);
            goto L_0800B984;
    }
    goto skip_2;
    // 0x0800B4AC: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    skip_2:
    // 0x0800B4B0: sh          $zero, 0x2($s0)
    MEM_H(0X2, ctx->r16) = 0;
    // 0x0800B4B4: b           L_0800B980
    // 0x0800B4B8: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
        goto L_0800B980;
    // 0x0800B4B8: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
L_0800B4BC:
    // 0x0800B4BC: lui         $t5, 0x8020
    ctx->r13 = S32(0X8020 << 16);
    // 0x0800B4C0: lw          $t5, -0x39FC($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X39FC);
    // 0x0800B4C4: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x0800B4C8: lw          $t4, -0x325C($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X325C);
    // 0x0800B4CC: lw          $t6, 0xA0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0XA0);
    // 0x0800B4D0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800B4D4: addiu       $t9, $t9, 0x1F70
    ctx->r25 = ADD32(ctx->r25, 0X1F70);
    // 0x0800B4D8: bnel        $t4, $t6, L_0800B984
    if (ctx->r12 != ctx->r14) {
        // 0x0800B4DC: lw          $a0, 0x8($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X8);
            goto L_0800B984;
    }
    goto skip_3;
    // 0x0800B4DC: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    skip_3:
    // 0x0800B4E0: jalr        $t9
    // 0x0800B4E4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800B4E4: nop

    after_1:
    // 0x0800B4E8: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x0800B4EC: addiu       $t9, $t9, 0x307C
    ctx->r25 = ADD32(ctx->r25, 0X307C);
    // 0x0800B4F0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x0800B4F4: jalr        $t9
    // 0x0800B4F8: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800B4F8: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    after_2:
    // 0x0800B4FC: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x0800B500: sh          $zero, 0x2($s0)
    MEM_H(0X2, ctx->r16) = 0;
    // 0x0800B504: b           L_0800B980
    // 0x0800B508: sb          $t7, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r15;
        goto L_0800B980;
    // 0x0800B508: sb          $t7, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r15;
L_0800B50C:
    // 0x0800B50C: lui         $at, 0xC316
    ctx->r1 = S32(0XC316 << 16);
    // 0x0800B510: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x0800B514: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800B518: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x0800B51C: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x0800B520: nop

    // 0x0800B524: bc1fl       L_0800B984
    if (!c1cs) {
        // 0x0800B528: lw          $a0, 0x8($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X8);
            goto L_0800B984;
    }
    goto skip_4;
    // 0x0800B528: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    skip_4:
    // 0x0800B52C: jalr        $t9
    // 0x0800B530: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800B530: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_3:
    // 0x0800B534: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x0800B538: sh          $zero, 0x2($s0)
    MEM_H(0X2, ctx->r16) = 0;
    // 0x0800B53C: b           L_0800B980
    // 0x0800B540: sb          $t8, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r24;
        goto L_0800B980;
    // 0x0800B540: sb          $t8, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r24;
L_0800B544:
    // 0x0800B544: lui         $at, 0xC296
    ctx->r1 = S32(0XC296 << 16);
    // 0x0800B548: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x0800B54C: lui         $a1, 0x801
    ctx->r5 = S32(RELOC_HI16(20, 0XB29C) << 16);
    // 0x0800B550: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800B554: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x0800B558: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x0800B55C: addiu       $a1, $a1, -0x4D64
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(20, 0XB29C));
    // 0x0800B560: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x0800B564: bc1tl       L_0800B9A8
    if (c1cs) {
        // 0x0800B568: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_0800B9A8;
    }
    goto skip_5;
    // 0x0800B568: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_5:
    // 0x0800B56C: jalr        $t9
    // 0x0800B570: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x0800B570: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    after_4:
    // 0x0800B574: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x0800B578: addiu       $v1, $v1, -0x39F4
    ctx->r3 = ADD32(ctx->r3, -0X39F4);
    // 0x0800B57C: beq         $v0, $zero, L_0800B5D4
    if (ctx->r2 == 0) {
        // 0x0800B580: sw          $v0, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r2;
            goto L_0800B5D4;
    }
    // 0x0800B580: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x0800B584: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800B588: addiu       $t0, $zero, 0x1D
    ctx->r8 = ADD32(0, 0X1D);
    // 0x0800B58C: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x0800B590: sh          $t0, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r8;
    // 0x0800B594: jalr        $t9
    // 0x0800B598: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x0800B598: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    after_5:
    // 0x0800B59C: lw          $t2, 0x4($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X4);
    // 0x0800B5A0: lui         $t9, 0x801
    ctx->r25 = S32(RELOC_HI16(20, 0XB38C) << 16);
    // 0x0800B5A4: addiu       $t9, $t9, -0x4C74
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(20, 0XB38C));
    // 0x0800B5A8: sw          $v0, 0x2C($t2)
    MEM_W(0X2C, ctx->r10) = ctx->r2;
    // 0x0800B5AC: lw          $t5, 0x4($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X4);
    // 0x0800B5B0: lw          $t3, 0x58($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X58);
    // 0x0800B5B4: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x0800B5B8: lui         $a2, 0xC296
    ctx->r6 = S32(0XC296 << 16);
    // 0x0800B5BC: sw          $t3, 0xDC($t5)
    MEM_W(0XDC, ctx->r13) = ctx->r11;
    // 0x0800B5C0: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x0800B5C4: jalr        $t9
    // 0x0800B5C8: lui         $a3, 0x4382
    ctx->r7 = S32(0X4382 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x0800B5C8: lui         $a3, 0x4382
    ctx->r7 = S32(0X4382 << 16);
    after_6:
    // 0x0800B5CC: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x0800B5D0: addiu       $v1, $v1, -0x39F4
    ctx->r3 = ADD32(ctx->r3, -0X39F4);
L_0800B5D4:
    // 0x0800B5D4: lui         $t4, 0x8020
    ctx->r12 = S32(0X8020 << 16);
    // 0x0800B5D8: lw          $t4, -0x39FC($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X39FC);
    // 0x0800B5DC: addiu       $a2, $zero, 0x100
    ctx->r6 = ADD32(0, 0X100);
    // 0x0800B5E0: lui         $at, 0xC248
    ctx->r1 = S32(0XC248 << 16);
    // 0x0800B5E4: sh          $a2, 0x94($t4)
    MEM_H(0X94, ctx->r12) = ctx->r6;
    // 0x0800B5E8: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x0800B5EC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x0800B5F0: lui         $at, 0xC296
    ctx->r1 = S32(0XC296 << 16);
    // 0x0800B5F4: sh          $a2, 0x16($t6)
    MEM_H(0X16, ctx->r14) = ctx->r6;
    // 0x0800B5F8: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x0800B5FC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x0800B600: lui         $at, 0x438C
    ctx->r1 = S32(0X438C << 16);
    // 0x0800B604: swc1        $f16, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f16.u32l;
    // 0x0800B608: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x0800B60C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x0800B610: lui         $t2, 0x8020
    ctx->r10 = S32(0X8020 << 16);
    // 0x0800B614: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x0800B618: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x0800B61C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800B620: swc1        $f18, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f18.u32l;
    // 0x0800B624: swc1        $f4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f4.u32l;
    // 0x0800B628: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x0800B62C: addiu       $t9, $t9, 0x2940
    ctx->r25 = ADD32(ctx->r25, 0X2940);
    // 0x0800B630: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800B634: swc1        $f6, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f6.u32l;
    // 0x0800B638: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x0800B63C: lw          $t2, -0x39D8($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X39D8);
    // 0x0800B640: lwc1        $f8, 0x10($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X10);
    // 0x0800B644: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    // 0x0800B648: sb          $t1, 0x64($t2)
    MEM_B(0X64, ctx->r10) = ctx->r9;
    // 0x0800B64C: jalr        $t9
    // 0x0800B650: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x0800B650: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    after_7:
    // 0x0800B654: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800B658: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x0800B65C: addiu       $t9, $t9, 0x2878
    ctx->r25 = ADD32(ctx->r25, 0X2878);
    // 0x0800B660: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x0800B664: jalr        $t9
    // 0x0800B668: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x0800B668: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_8:
    // 0x0800B66C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800B670: addiu       $t9, $t9, 0x2500
    ctx->r25 = ADD32(ctx->r25, 0X2500);
    // 0x0800B674: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x0800B678: jalr        $t9
    // 0x0800B67C: addiu       $a1, $zero, 0xF00
    ctx->r5 = ADD32(0, 0XF00);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x0800B67C: addiu       $a1, $zero, 0xF00
    ctx->r5 = ADD32(0, 0XF00);
    after_9:
    // 0x0800B680: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800B684: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x0800B688: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x0800B68C: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x0800B690: lui         $a2, 0xC296
    ctx->r6 = S32(0XC296 << 16);
    // 0x0800B694: jalr        $t9
    // 0x0800B698: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x0800B698: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    after_10:
    // 0x0800B69C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x0800B6A0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x0800B6A4: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x0800B6A8: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x0800B6AC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800B6B0: add.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x0800B6B4: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x0800B6B8: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x0800B6BC: add.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f0.fl;
    // 0x0800B6C0: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x0800B6C4: lui         $a2, 0xC1C8
    ctx->r6 = S32(0XC1C8 << 16);
    // 0x0800B6C8: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x0800B6CC: jalr        $t9
    // 0x0800B6D0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x0800B6D0: nop

    after_11:
    // 0x0800B6D4: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x0800B6D8: sh          $zero, 0x2($s0)
    MEM_H(0X2, ctx->r16) = 0;
    // 0x0800B6DC: b           L_0800B980
    // 0x0800B6E0: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
        goto L_0800B980;
    // 0x0800B6E0: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
L_0800B6E4:
    // 0x0800B6E4: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800B6E8: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x0800B6EC: addiu       $a0, $zero, 0x69
    ctx->r4 = ADD32(0, 0X69);
    // 0x0800B6F0: jalr        $t9
    // 0x0800B6F4: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x0800B6F4: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    after_12:
    // 0x0800B6F8: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800B6FC: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x0800B700: jalr        $t9
    // 0x0800B704: addiu       $a0, $zero, 0xC8
    ctx->r4 = ADD32(0, 0XC8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x0800B704: addiu       $a0, $zero, 0xC8
    ctx->r4 = ADD32(0, 0XC8);
    after_13:
    // 0x0800B708: lui         $t9, 0x801
    ctx->r25 = S32(RELOC_HI16(20, 0XB36C) << 16);
    // 0x0800B70C: addiu       $t9, $t9, -0x4C94
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(20, 0XB36C));
    // 0x0800B710: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x0800B714: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x0800B718: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x0800B71C: jalr        $t9
    // 0x0800B720: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x0800B720: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    after_14:
    // 0x0800B724: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800B728: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x0800B72C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x0800B730: jalr        $t9
    // 0x0800B734: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x0800B734: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    after_15:
    // 0x0800B738: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800B73C: addiu       $t9, $t9, 0x24AC
    ctx->r25 = ADD32(ctx->r25, 0X24AC);
    // 0x0800B740: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x0800B744: jalr        $t9
    // 0x0800B748: lui         $a1, 0x4534
    ctx->r5 = S32(0X4534 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x0800B748: lui         $a1, 0x4534
    ctx->r5 = S32(0X4534 << 16);
    after_16:
    // 0x0800B74C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x0800B750: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x0800B754: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x0800B758: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800B75C: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x0800B760: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x0800B764: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x0800B768: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x0800B76C: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x0800B770: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x0800B774: jalr        $t9
    // 0x0800B778: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x0800B778: nop

    after_17:
    // 0x0800B77C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x0800B780: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x0800B784: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x0800B788: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x0800B78C: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x0800B790: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x0800B794: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800B798: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x0800B79C: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x0800B7A0: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x0800B7A4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x0800B7A8: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x0800B7AC: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x0800B7B0: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x0800B7B4: jalr        $t9
    // 0x0800B7B8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x0800B7B8: nop

    after_18:
    // 0x0800B7BC: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x0800B7C0: b           L_0800B980
    // 0x0800B7C4: sb          $t5, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r13;
        goto L_0800B980;
    // 0x0800B7C4: sb          $t5, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r13;
L_0800B7C8:
    // 0x0800B7C8: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800B7CC: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x0800B7D0: jalr        $t9
    // 0x0800B7D4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_19;
    // 0x0800B7D4: nop

    after_19:
    // 0x0800B7D8: bne         $v0, $zero, L_0800B980
    if (ctx->r2 != 0) {
        // 0x0800B7DC: addiu       $t4, $zero, 0x7
        ctx->r12 = ADD32(0, 0X7);
            goto L_0800B980;
    }
    // 0x0800B7DC: addiu       $t4, $zero, 0x7
    ctx->r12 = ADD32(0, 0X7);
    // 0x0800B7E0: sh          $zero, 0x2($s0)
    MEM_H(0X2, ctx->r16) = 0;
    // 0x0800B7E4: b           L_0800B980
    // 0x0800B7E8: sb          $t4, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r12;
        goto L_0800B980;
    // 0x0800B7E8: sb          $t4, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r12;
L_0800B7EC:
    // 0x0800B7EC: lh          $v0, 0x2($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X2);
    // 0x0800B7F0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x0800B7F4: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x0800B7F8: bnel        $v0, $at, L_0800B83C
    if (ctx->r2 != ctx->r1) {
        // 0x0800B7FC: addiu       $at, $zero, 0x28
        ctx->r1 = ADD32(0, 0X28);
            goto L_0800B83C;
    }
    goto skip_6;
    // 0x0800B7FC: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    skip_6:
    // 0x0800B800: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x0800B804: addiu       $v0, $v0, -0x7468
    ctx->r2 = ADD32(ctx->r2, -0X7468);
    // 0x0800B808: jalr        $v0
    // 0x0800B80C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_20;
    // 0x0800B80C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_20:
    // 0x0800B810: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x0800B814: addiu       $a0, $zero, 0x17D
    ctx->r4 = ADD32(0, 0X17D);
    // 0x0800B818: jalr        $v0
    // 0x0800B81C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_21;
    // 0x0800B81C: nop

    after_21:
    // 0x0800B820: lui         $t9, 0x801
    ctx->r25 = S32(RELOC_HI16(20, 0XB3B0) << 16);
    // 0x0800B824: addiu       $t9, $t9, -0x4C50
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(20, 0XB3B0));
    // 0x0800B828: jalr        $t9
    // 0x0800B82C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_22;
    // 0x0800B82C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_22:
    // 0x0800B830: b           L_0800B88C
    // 0x0800B834: lh          $v0, 0x2($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X2);
        goto L_0800B88C;
    // 0x0800B834: lh          $v0, 0x2($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X2);
    // 0x0800B838: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
L_0800B83C:
    // 0x0800B83C: bne         $v0, $at, L_0800B858
    if (ctx->r2 != ctx->r1) {
        // 0x0800B840: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_0800B858;
    }
    // 0x0800B840: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800B844: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x0800B848: jalr        $t9
    // 0x0800B84C: addiu       $a0, $zero, 0x124
    ctx->r4 = ADD32(0, 0X124);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_23;
    // 0x0800B84C: addiu       $a0, $zero, 0x124
    ctx->r4 = ADD32(0, 0X124);
    after_23:
    // 0x0800B850: b           L_0800B88C
    // 0x0800B854: lh          $v0, 0x2($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X2);
        goto L_0800B88C;
    // 0x0800B854: lh          $v0, 0x2($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X2);
L_0800B858:
    // 0x0800B858: addiu       $at, $zero, 0x50
    ctx->r1 = ADD32(0, 0X50);
    // 0x0800B85C: bne         $v0, $at, L_0800B878
    if (ctx->r2 != ctx->r1) {
        // 0x0800B860: lui         $t9, 0x8001
        ctx->r25 = S32(0X8001 << 16);
            goto L_0800B878;
    }
    // 0x0800B860: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800B864: addiu       $t9, $t9, 0x2470
    ctx->r25 = ADD32(ctx->r25, 0X2470);
    // 0x0800B868: jalr        $t9
    // 0x0800B86C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_24;
    // 0x0800B86C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    after_24:
    // 0x0800B870: b           L_0800B88C
    // 0x0800B874: lh          $v0, 0x2($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X2);
        goto L_0800B88C;
    // 0x0800B874: lh          $v0, 0x2($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X2);
L_0800B878:
    // 0x0800B878: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x0800B87C: bne         $v0, $at, L_0800B88C
    if (ctx->r2 != ctx->r1) {
        // 0x0800B880: addiu       $t6, $zero, 0x8
        ctx->r14 = ADD32(0, 0X8);
            goto L_0800B88C;
    }
    // 0x0800B880: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x0800B884: sb          $t6, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r14;
    // 0x0800B888: lh          $v0, 0x2($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X2);
L_0800B88C:
    // 0x0800B88C: slti        $at, $v0, 0x29
    ctx->r1 = SIGNED(ctx->r2) < 0X29 ? 1 : 0;
    // 0x0800B890: bne         $at, $zero, L_0800B980
    if (ctx->r1 != 0) {
        // 0x0800B894: slti        $at, $v0, 0x50
        ctx->r1 = SIGNED(ctx->r2) < 0X50 ? 1 : 0;
            goto L_0800B980;
    }
    // 0x0800B894: slti        $at, $v0, 0x50
    ctx->r1 = SIGNED(ctx->r2) < 0X50 ? 1 : 0;
    // 0x0800B898: beq         $at, $zero, L_0800B980
    if (ctx->r1 == 0) {
        // 0x0800B89C: addiu       $a1, $sp, 0x38
        ctx->r5 = ADD32(ctx->r29, 0X38);
            goto L_0800B980;
    }
    // 0x0800B89C: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x0800B8A0: lui         $t9, 0x801
    ctx->r25 = S32(RELOC_HI16(20, 0XB36C) << 16);
    // 0x0800B8A4: addiu       $t9, $t9, -0x4C94
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(20, 0XB36C));
    // 0x0800B8A8: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x0800B8AC: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x0800B8B0: jalr        $t9
    // 0x0800B8B4: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_25;
    // 0x0800B8B4: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    after_25:
    // 0x0800B8B8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800B8BC: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x0800B8C0: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x0800B8C4: jalr        $t9
    // 0x0800B8C8: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_26;
    // 0x0800B8C8: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    after_26:
    // 0x0800B8CC: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x0800B8D0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x0800B8D4: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x0800B8D8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x0800B8DC: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x0800B8E0: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x0800B8E4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800B8E8: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x0800B8EC: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x0800B8F0: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x0800B8F4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x0800B8F8: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x0800B8FC: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x0800B900: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x0800B904: jalr        $t9
    // 0x0800B908: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_27;
    // 0x0800B908: nop

    after_27:
    // 0x0800B90C: b           L_0800B984
    // 0x0800B910: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
        goto L_0800B984;
    // 0x0800B910: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
L_0800B914:
    // 0x0800B914: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800B918: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x0800B91C: jalr        $t9
    // 0x0800B920: addiu       $a0, $zero, 0x136
    ctx->r4 = ADD32(0, 0X136);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_28;
    // 0x0800B920: addiu       $a0, $zero, 0x136
    ctx->r4 = ADD32(0, 0X136);
    after_28:
    // 0x0800B924: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800B928: addiu       $t9, $t9, 0x1FB0
    ctx->r25 = ADD32(ctx->r25, 0X1FB0);
    // 0x0800B92C: jalr        $t9
    // 0x0800B930: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_29;
    // 0x0800B930: nop

    after_29:
    // 0x0800B934: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x0800B938: lw          $t7, -0x39D8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X39D8);
    // 0x0800B93C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800B940: addiu       $t9, $t9, 0x4EF8
    ctx->r25 = ADD32(ctx->r25, 0X4EF8);
    // 0x0800B944: sb          $zero, 0x64($t7)
    MEM_B(0X64, ctx->r15) = 0;
    // 0x0800B948: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x0800B94C: beql        $a0, $zero, L_0800B964
    if (ctx->r4 == 0) {
        // 0x0800B950: lw          $a0, 0x8($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X8);
            goto L_0800B964;
    }
    goto skip_7;
    // 0x0800B950: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    skip_7:
    // 0x0800B954: jalr        $t9
    // 0x0800B958: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_30;
    // 0x0800B958: nop

    after_30:
    // 0x0800B95C: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x0800B960: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
L_0800B964:
    // 0x0800B964: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800B968: addiu       $t9, $t9, 0x4EF8
    ctx->r25 = ADD32(ctx->r25, 0X4EF8);
    // 0x0800B96C: beql        $a0, $zero, L_0800B984
    if (ctx->r4 == 0) {
        // 0x0800B970: lw          $a0, 0x8($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X8);
            goto L_0800B984;
    }
    goto skip_8;
    // 0x0800B970: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    skip_8:
    // 0x0800B974: jalr        $t9
    // 0x0800B978: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_31;
    // 0x0800B978: nop

    after_31:
    // 0x0800B97C: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
L_0800B980:
    // 0x0800B980: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
L_0800B984:
    // 0x0800B984: beq         $a0, $zero, L_0800B998
    if (ctx->r4 == 0) {
        // 0x0800B988: lui         $t9, 0x8001
        ctx->r25 = S32(0X8001 << 16);
            goto L_0800B998;
    }
    // 0x0800B988: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800B98C: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x0800B990: jalr        $t9
    // 0x0800B994: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_32;
    // 0x0800B994: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    after_32:
L_0800B998:
    // 0x0800B998: lh          $t8, 0x2($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X2);
    // 0x0800B99C: addiu       $t0, $t8, 0x1
    ctx->r8 = ADD32(ctx->r24, 0X1);
    // 0x0800B9A0: sh          $t0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r8;
    // 0x0800B9A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_0800B9A8:
    // 0x0800B9A8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0800B9AC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x0800B9B0: jr          $ra
    // 0x0800B9B4: nop

    TRACE_RETURN()
    return;
    // 0x0800B9B4: nop

;}
RECOMP_FUNC void func_0800A854_6BDAF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800A854: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0800A858: lui         $v0, 0x8002
    ctx->r2 = S32(0X8002 << 16);
    // 0x0800A85C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800A860: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x0800A864: addiu       $v0, $v0, 0x3E94
    ctx->r2 = ADD32(ctx->r2, 0X3E94);
    // 0x0800A868: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x0800A86C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x0800A870: jalr        $v0
    // 0x0800A874: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x0800A874: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_0:
    // 0x0800A878: beq         $v0, $zero, L_0800A8A8
    if (ctx->r2 == 0) {
        // 0x0800A87C: lw          $t9, 0x1C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X1C);
            goto L_0800A8A8;
    }
    // 0x0800A87C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x0800A880: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800A884: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x0800A888: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x0800A88C: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x0800A890: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x0800A894: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x0800A898: jalr        $t9
    // 0x0800A89C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800A89C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x0800A8A0: b           L_0800A918
    // 0x0800A8A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_0800A918;
    // 0x0800A8A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_0800A8A8:
    // 0x0800A8A8: jalr        $t9
    // 0x0800A8AC: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800A8AC: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_2:
    // 0x0800A8B0: beq         $v0, $zero, L_0800A8E4
    if (ctx->r2 == 0) {
        // 0x0800A8B4: lw          $t9, 0x1C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X1C);
            goto L_0800A8E4;
    }
    // 0x0800A8B4: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x0800A8B8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x0800A8BC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800A8C0: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x0800A8C4: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x0800A8C8: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x0800A8CC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x0800A8D0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x0800A8D4: jalr        $t9
    // 0x0800A8D8: addiu       $a1, $a1, 0x6
    ctx->r5 = ADD32(ctx->r5, 0X6);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800A8D8: addiu       $a1, $a1, 0x6
    ctx->r5 = ADD32(ctx->r5, 0X6);
    after_3:
    // 0x0800A8DC: b           L_0800A918
    // 0x0800A8E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_0800A918;
    // 0x0800A8E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_0800A8E4:
    // 0x0800A8E4: jalr        $t9
    // 0x0800A8E8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x0800A8E8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_4:
    // 0x0800A8EC: beq         $v0, $zero, L_0800A914
    if (ctx->r2 == 0) {
        // 0x0800A8F0: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_0800A914;
    }
    // 0x0800A8F0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x0800A8F4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x0800A8F8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800A8FC: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x0800A900: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x0800A904: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x0800A908: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x0800A90C: jalr        $t9
    // 0x0800A910: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x0800A910: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    after_5:
L_0800A914:
    // 0x0800A914: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_0800A918:
    // 0x0800A918: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x0800A91C: jr          $ra
    // 0x0800A920: nop

    TRACE_RETURN()
    return;
    // 0x0800A920: nop

;}
RECOMP_FUNC void func_080033DC_6B667C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080033DC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x080033E0: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x080033E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080033E8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x080033EC: addiu       $v0, $v0, -0x6D4C
    ctx->r2 = ADD32(ctx->r2, -0X6D4C);
    // 0x080033F0: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x080033F4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x080033F8: jalr        $v0
    // 0x080033FC: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x080033FC: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_0:
    // 0x08003400: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x08003404: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x08003408: lui         $t7, 0x4
    ctx->r15 = S32(0X4 << 16);
    // 0x0800340C: addiu       $t8, $v0, 0xA
    ctx->r24 = ADD32(ctx->r2, 0XA);
    // 0x08003410: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x08003414: lhu         $t7, -0x5232($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X5232);
    // 0x08003418: div         $zero, $t7, $t8
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r24))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r24)));
    // 0x0800341C: mfhi        $t9
    ctx->r25 = hi;
    // 0x08003420: bne         $t8, $zero, L_0800342C
    if (ctx->r24 != 0) {
        // 0x08003424: nop
    
            goto L_0800342C;
    }
    // 0x08003424: nop

    // 0x08003428: break       7
    do_break(134231080);
L_0800342C:
    // 0x0800342C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x08003430: bne         $t8, $at, L_08003444
    if (ctx->r24 != ctx->r1) {
        // 0x08003434: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_08003444;
    }
    // 0x08003434: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08003438: bne         $t7, $at, L_08003444
    if (ctx->r15 != ctx->r1) {
        // 0x0800343C: nop
    
            goto L_08003444;
    }
    // 0x0800343C: nop

    // 0x08003440: break       6
    do_break(134231104);
L_08003444:
    // 0x08003444: bnel        $t9, $zero, L_080034FC
    if (ctx->r25 != 0) {
        // 0x08003448: lw          $t9, 0x1C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X1C);
            goto L_080034FC;
    }
    goto skip_0;
    // 0x08003448: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x0800344C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x08003450: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    // 0x08003454: jalr        $t9
    // 0x08003458: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003458: nop

    after_1:
    // 0x0800345C: slti        $at, $v0, 0x33
    ctx->r1 = SIGNED(ctx->r2) < 0X33 ? 1 : 0;
    // 0x08003460: bne         $at, $zero, L_080034B4
    if (ctx->r1 != 0) {
        // 0x08003464: lw          $a0, 0x30($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X30);
            goto L_080034B4;
    }
    // 0x08003464: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x08003468: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800346C: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08003470: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08003474: addiu       $a1, $a1, 0x12EC
    ctx->r5 = ADD32(ctx->r5, 0X12EC);
    // 0x08003478: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x0800347C: jalr        $t9
    // 0x08003480: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003480: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x08003484: beq         $v0, $zero, L_080034F8
    if (ctx->r2 == 0) {
        // 0x08003488: lui         $at, 0x3FC0
        ctx->r1 = S32(0X3FC0 << 16);
            goto L_080034F8;
    }
    // 0x08003488: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x0800348C: lw          $t1, 0x64($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X64);
    // 0x08003490: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08003494: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x08003498: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0800349C: or          $t2, $t1, $at
    ctx->r10 = ctx->r9 | ctx->r1;
    // 0x080034A0: sw          $t2, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r10;
    // 0x080034A4: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    // 0x080034A8: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x080034AC: b           L_080034F8
    // 0x080034B0: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
        goto L_080034F8;
    // 0x080034B0: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
L_080034B4:
    // 0x080034B4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080034B8: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x080034BC: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x080034C0: addiu       $a1, $a1, 0x183C
    ctx->r5 = ADD32(ctx->r5, 0X183C);
    // 0x080034C4: jalr        $t9
    // 0x080034C8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080034C8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x080034CC: beq         $v0, $zero, L_080034F8
    if (ctx->r2 == 0) {
        // 0x080034D0: lui         $at, 0x3FC0
        ctx->r1 = S32(0X3FC0 << 16);
            goto L_080034F8;
    }
    // 0x080034D0: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x080034D4: lw          $t3, 0x64($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X64);
    // 0x080034D8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x080034DC: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x080034E0: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x080034E4: or          $t4, $t3, $at
    ctx->r12 = ctx->r11 | ctx->r1;
    // 0x080034E8: sw          $t4, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r12;
    // 0x080034EC: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    // 0x080034F0: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x080034F4: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
L_080034F8:
    // 0x080034F8: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
L_080034FC:
    // 0x080034FC: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x08003500: jalr        $t9
    // 0x08003504: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08003504: nop

    after_4:
    // 0x08003508: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x0800350C: lw          $t5, -0x3A38($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X3A38);
    // 0x08003510: lui         $t6, 0x4
    ctx->r14 = S32(0X4 << 16);
    // 0x08003514: addiu       $t7, $v0, 0x7
    ctx->r15 = ADD32(ctx->r2, 0X7);
    // 0x08003518: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x0800351C: lhu         $t6, -0x5232($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X5232);
    // 0x08003520: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    // 0x08003524: div         $zero, $t6, $t7
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r15))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r15)));
    // 0x08003528: mfhi        $t8
    ctx->r24 = hi;
    // 0x0800352C: bne         $t7, $zero, L_08003538
    if (ctx->r15 != 0) {
        // 0x08003530: nop
    
            goto L_08003538;
    }
    // 0x08003530: nop

    // 0x08003534: break       7
    do_break(134231348);
L_08003538:
    // 0x08003538: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x0800353C: bne         $t7, $at, L_08003550
    if (ctx->r15 != ctx->r1) {
        // 0x08003540: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_08003550;
    }
    // 0x08003540: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08003544: bne         $t6, $at, L_08003550
    if (ctx->r14 != ctx->r1) {
        // 0x08003548: nop
    
            goto L_08003550;
    }
    // 0x08003548: nop

    // 0x0800354C: break       6
    do_break(134231372);
L_08003550:
    // 0x08003550: bnel        $t8, $zero, L_080037D8
    if (ctx->r24 != 0) {
        // 0x08003554: lw          $a0, 0x30($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X30);
            goto L_080037D8;
    }
    goto skip_1;
    // 0x08003554: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    skip_1:
    // 0x08003558: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x0800355C: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x08003560: addiu       $v1, $v1, 0x71A8
    ctx->r3 = ADD32(ctx->r3, 0X71A8);
    // 0x08003564: jalr        $t9
    // 0x08003568: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08003568: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_5:
    // 0x0800356C: slti        $at, $v0, 0x33
    ctx->r1 = SIGNED(ctx->r2) < 0X33 ? 1 : 0;
    // 0x08003570: bne         $at, $zero, L_080036A0
    if (ctx->r1 != 0) {
        // 0x08003574: lw          $v1, 0x18($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X18);
            goto L_080036A0;
    }
    // 0x08003574: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x08003578: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x0800357C: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    // 0x08003580: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x08003584: jalr        $t9
    // 0x08003588: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08003588: nop

    after_6:
    // 0x0800358C: slti        $at, $v0, 0x33
    ctx->r1 = SIGNED(ctx->r2) < 0X33 ? 1 : 0;
    // 0x08003590: bne         $at, $zero, L_0800361C
    if (ctx->r1 != 0) {
        // 0x08003594: lw          $v1, 0x18($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X18);
            goto L_0800361C;
    }
    // 0x08003594: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x08003598: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x0800359C: addiu       $a1, $a1, 0x12EC
    ctx->r5 = ADD32(ctx->r5, 0X12EC);
    // 0x080035A0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x080035A4: jalr        $v1
    // 0x080035A8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_7;
    // 0x080035A8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_7:
    // 0x080035AC: beq         $v0, $zero, L_080037D4
    if (ctx->r2 == 0) {
        // 0x080035B0: addiu       $a0, $zero, 0x106
        ctx->r4 = ADD32(0, 0X106);
            goto L_080037D4;
    }
    // 0x080035B0: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    // 0x080035B4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080035B8: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x080035BC: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x080035C0: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x080035C4: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x080035C8: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    // 0x080035CC: jalr        $t9
    // 0x080035D0: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x080035D0: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_8:
    // 0x080035D4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x080035D8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x080035DC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x080035E0: lw          $t1, 0x64($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X64);
    // 0x080035E4: lw          $v1, 0x18($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X18);
    // 0x080035E8: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x080035EC: or          $t2, $t1, $at
    ctx->r10 = ctx->r9 | ctx->r1;
    // 0x080035F0: sw          $t2, 0x64($t0)
    MEM_W(0X64, ctx->r8) = ctx->r10;
    // 0x080035F4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x080035F8: lui         $at, 0xC302
    ctx->r1 = S32(0XC302 << 16);
    // 0x080035FC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08003600: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    // 0x08003604: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x08003608: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    // 0x0800360C: swc1        $f2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f2.u32l;
    // 0x08003610: swc1        $f2, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f2.u32l;
    // 0x08003614: b           L_080037D4
    // 0x08003618: swc1        $f4, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f4.u32l;
        goto L_080037D4;
    // 0x08003618: swc1        $f4, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f4.u32l;
L_0800361C:
    // 0x0800361C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08003620: addiu       $a1, $a1, 0x183C
    ctx->r5 = ADD32(ctx->r5, 0X183C);
    // 0x08003624: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x08003628: jalr        $v1
    // 0x0800362C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_9;
    // 0x0800362C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_9:
    // 0x08003630: beq         $v0, $zero, L_080037D4
    if (ctx->r2 == 0) {
        // 0x08003634: addiu       $a0, $zero, 0x10B
        ctx->r4 = ADD32(0, 0X10B);
            goto L_080037D4;
    }
    // 0x08003634: addiu       $a0, $zero, 0x10B
    ctx->r4 = ADD32(0, 0X10B);
    // 0x08003638: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800363C: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08003640: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08003644: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08003648: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x0800364C: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    // 0x08003650: jalr        $t9
    // 0x08003654: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08003654: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_10:
    // 0x08003658: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x0800365C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x08003660: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08003664: lw          $t3, 0x64($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X64);
    // 0x08003668: lw          $v1, 0x18($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X18);
    // 0x0800366C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x08003670: or          $t4, $t3, $at
    ctx->r12 = ctx->r11 | ctx->r1;
    // 0x08003674: sw          $t4, 0x64($t0)
    MEM_W(0X64, ctx->r8) = ctx->r12;
    // 0x08003678: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x0800367C: lui         $at, 0xC302
    ctx->r1 = S32(0XC302 << 16);
    // 0x08003680: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08003684: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    // 0x08003688: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x0800368C: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    // 0x08003690: swc1        $f2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f2.u32l;
    // 0x08003694: swc1        $f2, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f2.u32l;
    // 0x08003698: b           L_080037D4
    // 0x0800369C: swc1        $f6, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f6.u32l;
        goto L_080037D4;
    // 0x0800369C: swc1        $f6, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f6.u32l;
L_080036A0:
    // 0x080036A0: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x080036A4: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    // 0x080036A8: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x080036AC: jalr        $t9
    // 0x080036B0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x080036B0: nop

    after_11:
    // 0x080036B4: slti        $at, $v0, 0x33
    ctx->r1 = SIGNED(ctx->r2) < 0X33 ? 1 : 0;
    // 0x080036B8: bne         $at, $zero, L_0800374C
    if (ctx->r1 != 0) {
        // 0x080036BC: lw          $v1, 0x18($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X18);
            goto L_0800374C;
    }
    // 0x080036BC: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x080036C0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x080036C4: addiu       $a1, $a1, 0x12EC
    ctx->r5 = ADD32(ctx->r5, 0X12EC);
    // 0x080036C8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x080036CC: jalr        $v1
    // 0x080036D0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_12;
    // 0x080036D0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_12:
    // 0x080036D4: beq         $v0, $zero, L_080037D4
    if (ctx->r2 == 0) {
        // 0x080036D8: addiu       $a0, $zero, 0x106
        ctx->r4 = ADD32(0, 0X106);
            goto L_080037D4;
    }
    // 0x080036D8: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    // 0x080036DC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080036E0: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x080036E4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x080036E8: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x080036EC: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x080036F0: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    // 0x080036F4: jalr        $t9
    // 0x080036F8: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x080036F8: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_13:
    // 0x080036FC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x08003700: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x08003704: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08003708: lw          $t5, 0x64($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X64);
    // 0x0800370C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x08003710: lw          $v1, 0x18($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X18);
    // 0x08003714: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x08003718: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    // 0x0800371C: sw          $t6, 0x64($t0)
    MEM_W(0X64, ctx->r8) = ctx->r14;
    // 0x08003720: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08003724: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x08003728: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x0800372C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08003730: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    // 0x08003734: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x08003738: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    // 0x0800373C: swc1        $f8, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f8.u32l;
    // 0x08003740: swc1        $f2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f2.u32l;
    // 0x08003744: b           L_080037D4
    // 0x08003748: swc1        $f10, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f10.u32l;
        goto L_080037D4;
    // 0x08003748: swc1        $f10, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f10.u32l;
L_0800374C:
    // 0x0800374C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08003750: addiu       $a1, $a1, 0x183C
    ctx->r5 = ADD32(ctx->r5, 0X183C);
    // 0x08003754: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x08003758: jalr        $v1
    // 0x0800375C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_14;
    // 0x0800375C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_14:
    // 0x08003760: beq         $v0, $zero, L_080037D4
    if (ctx->r2 == 0) {
        // 0x08003764: addiu       $a0, $zero, 0x10B
        ctx->r4 = ADD32(0, 0X10B);
            goto L_080037D4;
    }
    // 0x08003764: addiu       $a0, $zero, 0x10B
    ctx->r4 = ADD32(0, 0X10B);
    // 0x08003768: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800376C: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08003770: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08003774: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08003778: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x0800377C: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    // 0x08003780: jalr        $t9
    // 0x08003784: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x08003784: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_15:
    // 0x08003788: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x0800378C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x08003790: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08003794: lw          $t7, 0x64($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X64);
    // 0x08003798: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x0800379C: lw          $v1, 0x18($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X18);
    // 0x080037A0: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x080037A4: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    // 0x080037A8: sw          $t8, 0x64($t0)
    MEM_W(0X64, ctx->r8) = ctx->r24;
    // 0x080037AC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x080037B0: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x080037B4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x080037B8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x080037BC: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    // 0x080037C0: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x080037C4: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    // 0x080037C8: swc1        $f16, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f16.u32l;
    // 0x080037CC: swc1        $f2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f2.u32l;
    // 0x080037D0: swc1        $f18, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f18.u32l;
L_080037D4:
    // 0x080037D4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
L_080037D8:
    // 0x080037D8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080037DC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080037E0: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x080037E4: addiu       $t1, $v0, -0x1
    ctx->r9 = ADD32(ctx->r2, -0X1);
    // 0x080037E8: bne         $v0, $zero, L_080037FC
    if (ctx->r2 != 0) {
        // 0x080037EC: sh          $t1, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r9;
            goto L_080037FC;
    }
    // 0x080037EC: sh          $t1, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r9;
    // 0x080037F0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X3814) << 16);
    // 0x080037F4: jalr        $t9
    // 0x080037F8: addiu       $a0, $a0, 0x3814
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X3814));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x080037F8: addiu       $a0, $a0, 0x3814
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X3814));
    after_16:
L_080037FC:
    // 0x080037FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08003800: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x08003804: jr          $ra
    // 0x08003808: nop

    TRACE_RETURN()
    return;
    // 0x08003808: nop

    // 0x0800380C: jr          $ra
    // 0x08003810: nop

    TRACE_RETURN()
    return;
    // 0x08003810: nop

;}
RECOMP_FUNC void func_080075E8_6BA888(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080075E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080075EC: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080075F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080075F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080075F8: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x080075FC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08007600: jalr        $t9
    // 0x08007604: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08007604: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_0:
    // 0x08007608: beq         $v0, $zero, L_0800762C
    if (ctx->r2 == 0) {
        // 0x0800760C: lui         $t9, 0x801
        ctx->r25 = S32(RELOC_HI16(20, 0XA04C) << 16);
            goto L_0800762C;
    }
    // 0x0800760C: lui         $t9, 0x801
    ctx->r25 = S32(RELOC_HI16(20, 0XA04C) << 16);
    // 0x08007610: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08007614: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08007618: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X79B0) << 16);
    // 0x0800761C: jalr        $t9
    // 0x08007620: addiu       $a0, $a0, 0x79B0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X79B0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08007620: addiu       $a0, $a0, 0x79B0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X79B0));
    after_1:
    // 0x08007624: b           L_08007688
    // 0x08007628: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08007688;
    // 0x08007628: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_0800762C:
    // 0x0800762C: addiu       $t9, $t9, -0x5FB4
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(20, 0XA04C));
    // 0x08007630: jalr        $t9
    // 0x08007634: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08007634: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x08007638: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800763C: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x08007640: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08007644: jalr        $t9
    // 0x08007648: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08007648: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x0800764C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x08007650: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08007654: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08007658: lhu         $v1, 0x8A($t6)
    ctx->r3 = MEM_HU(ctx->r14, 0X8A);
    // 0x0800765C: addiu       $t7, $v1, -0x1
    ctx->r15 = ADD32(ctx->r3, -0X1);
    // 0x08007660: bne         $v1, $zero, L_08007684
    if (ctx->r3 != 0) {
        // 0x08007664: sh          $t7, 0x8A($t6)
        MEM_H(0X8A, ctx->r14) = ctx->r15;
            goto L_08007684;
    }
    // 0x08007664: sh          $t7, 0x8A($t6)
    MEM_H(0X8A, ctx->r14) = ctx->r15;
    // 0x08007668: jalr        $t9
    // 0x0800766C: ori         $a0, $zero, 0x8203
    ctx->r4 = 0 | 0X8203;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x0800766C: ori         $a0, $zero, 0x8203
    ctx->r4 = 0 | 0X8203;
    after_4:
    // 0x08007670: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08007674: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08007678: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X7694) << 16);
    // 0x0800767C: jalr        $t9
    // 0x08007680: addiu       $a0, $a0, 0x7694
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X7694));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08007680: addiu       $a0, $a0, 0x7694
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X7694));
    after_5:
L_08007684:
    // 0x08007684: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08007688:
    // 0x08007688: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800768C: jr          $ra
    // 0x08007690: nop

    TRACE_RETURN()
    return;
    // 0x08007690: nop

;}
RECOMP_FUNC void func_080079B0_6BAC50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080079B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080079B4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080079B8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080079BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080079C0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080079C4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X79E4) << 16);
    // 0x080079C8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080079CC: jalr        $t9
    // 0x080079D0: addiu       $a0, $a0, 0x79E4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X79E4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080079D0: addiu       $a0, $a0, 0x79E4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X79E4));
    after_0:
    // 0x080079D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080079D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080079DC: jr          $ra
    // 0x080079E0: nop

    TRACE_RETURN()
    return;
    // 0x080079E0: nop

;}
RECOMP_FUNC void func_080027E4_6B5A84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080027E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080027E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080027EC: lbu         $t6, 0x7C($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X7C);
    // 0x080027F0: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x080027F4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x080027F8: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x080027FC: beq         $t7, $zero, L_08002854
    if (ctx->r15 == 0) {
        // 0x08002800: addiu       $v0, $v0, -0x33D0
        ctx->r2 = ADD32(ctx->r2, -0X33D0);
            goto L_08002854;
    }
    // 0x08002800: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x08002804: lbu         $t8, 0x186($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X186);
    // 0x08002808: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x0800280C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X2864) << 16);
    // 0x08002810: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x08002814: andi        $t0, $t9, 0xFF
    ctx->r8 = ctx->r25 & 0XFF;
    // 0x08002818: slti        $at, $t0, 0x14
    ctx->r1 = SIGNED(ctx->r8) < 0X14 ? 1 : 0;
    // 0x0800281C: beq         $at, $zero, L_08002840
    if (ctx->r1 == 0) {
        // 0x08002820: sb          $t9, 0x186($v0)
        MEM_B(0X186, ctx->r2) = ctx->r25;
            goto L_08002840;
    }
    // 0x08002820: sb          $t9, 0x186($v0)
    MEM_B(0X186, ctx->r2) = ctx->r25;
    // 0x08002824: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002828: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800282C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X2534) << 16);
    // 0x08002830: jalr        $t9
    // 0x08002834: addiu       $a0, $a0, 0x2534
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X2534));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002834: addiu       $a0, $a0, 0x2534
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X2534));
    after_0:
    // 0x08002838: b           L_08002858
    // 0x0800283C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08002858;
    // 0x0800283C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08002840:
    // 0x08002840: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002844: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002848: sh          $t1, 0x8A($a2)
    MEM_H(0X8A, ctx->r6) = ctx->r9;
    // 0x0800284C: jalr        $t9
    // 0x08002850: addiu       $a0, $a0, 0x2864
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X2864));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002850: addiu       $a0, $a0, 0x2864
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X2864));
    after_1:
L_08002854:
    // 0x08002854: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08002858:
    // 0x08002858: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800285C: jr          $ra
    // 0x08002860: nop

    TRACE_RETURN()
    return;
    // 0x08002860: nop

;}
RECOMP_FUNC void func_08002E00_6B60A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002E00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002E04: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08002E08: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002E0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002E10: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002E14: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X2E34) << 16);
    // 0x08002E18: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002E1C: jalr        $t9
    // 0x08002E20: addiu       $a0, $a0, 0x2E34
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X2E34));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002E20: addiu       $a0, $a0, 0x2E34
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X2E34));
    after_0:
    // 0x08002E24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002E28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002E2C: jr          $ra
    // 0x08002E30: nop

    TRACE_RETURN()
    return;
    // 0x08002E30: nop

;}
RECOMP_FUNC void func_080056FC_6B899C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080056FC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08005700: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08005704: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08005708: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x0800570C: lw          $v0, 0xE8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XE8);
    // 0x08005710: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08005714: addiu       $t7, $zero, 0x3C
    ctx->r15 = ADD32(0, 0X3C);
    // 0x08005718: andi        $t6, $v0, 0x20
    ctx->r14 = ctx->r2 & 0X20;
    // 0x0800571C: beq         $t6, $zero, L_08005760
    if (ctx->r14 == 0) {
        // 0x08005720: andi        $t2, $v0, 0x80
        ctx->r10 = ctx->r2 & 0X80;
            goto L_08005760;
    }
    // 0x08005720: andi        $t2, $v0, 0x80
    ctx->r10 = ctx->r2 & 0X80;
    // 0x08005724: addiu       $t8, $zero, 0xB4
    ctx->r24 = ADD32(0, 0XB4);
    // 0x08005728: sh          $t7, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r15;
    // 0x0800572C: sb          $t8, 0xD1($a0)
    MEM_B(0XD1, ctx->r4) = ctx->r24;
    // 0x08005730: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08005734: addiu       $t9, $t9, -0x22B4
    ctx->r25 = ADD32(ctx->r25, -0X22B4);
    // 0x08005738: lbu         $a1, 0xD1($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XD1);
    // 0x0800573C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08005740: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08005744: jalr        $t9
    // 0x08005748: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08005748: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x0800574C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x08005750: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08005754: or          $t0, $v0, $at
    ctx->r8 = ctx->r2 | ctx->r1;
    // 0x08005758: b           L_080057F0
    // 0x0800575C: sw          $t0, 0x30($t1)
    MEM_W(0X30, ctx->r9) = ctx->r8;
        goto L_080057F0;
    // 0x0800575C: sw          $t0, 0x30($t1)
    MEM_W(0X30, ctx->r9) = ctx->r8;
L_08005760:
    // 0x08005760: bne         $t2, $zero, L_08005770
    if (ctx->r10 != 0) {
        // 0x08005764: andi        $t3, $v0, 0x100
        ctx->r11 = ctx->r2 & 0X100;
            goto L_08005770;
    }
    // 0x08005764: andi        $t3, $v0, 0x100
    ctx->r11 = ctx->r2 & 0X100;
    // 0x08005768: beq         $t3, $zero, L_080057B4
    if (ctx->r11 == 0) {
        // 0x0800576C: addiu       $t8, $zero, 0x3C
        ctx->r24 = ADD32(0, 0X3C);
            goto L_080057B4;
    }
    // 0x0800576C: addiu       $t8, $zero, 0x3C
    ctx->r24 = ADD32(0, 0X3C);
L_08005770:
    // 0x08005770: addiu       $t4, $zero, 0x3C
    ctx->r12 = ADD32(0, 0X3C);
    // 0x08005774: addiu       $t5, $zero, 0xB4
    ctx->r13 = ADD32(0, 0XB4);
    // 0x08005778: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800577C: sh          $t4, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r12;
    // 0x08005780: sb          $t5, 0xD1($s0)
    MEM_B(0XD1, ctx->r16) = ctx->r13;
    // 0x08005784: addiu       $t9, $t9, -0x22B4
    ctx->r25 = ADD32(ctx->r25, -0X22B4);
    // 0x08005788: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0800578C: andi        $a1, $t5, 0xFF
    ctx->r5 = ctx->r13 & 0XFF;
    // 0x08005790: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08005794: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08005798: jalr        $t9
    // 0x0800579C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800579C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x080057A0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x080057A4: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x080057A8: or          $t6, $v0, $at
    ctx->r14 = ctx->r2 | ctx->r1;
    // 0x080057AC: b           L_080057F0
    // 0x080057B0: sw          $t6, 0x30($t7)
    MEM_W(0X30, ctx->r15) = ctx->r14;
        goto L_080057F0;
    // 0x080057B0: sw          $t6, 0x30($t7)
    MEM_W(0X30, ctx->r15) = ctx->r14;
L_080057B4:
    // 0x080057B4: addiu       $t0, $zero, 0x5A
    ctx->r8 = ADD32(0, 0X5A);
    // 0x080057B8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080057BC: sh          $t8, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r24;
    // 0x080057C0: sb          $t0, 0xD1($s0)
    MEM_B(0XD1, ctx->r16) = ctx->r8;
    // 0x080057C4: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x080057C8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x080057CC: andi        $a1, $t0, 0xFF
    ctx->r5 = ctx->r8 & 0XFF;
    // 0x080057D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080057D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080057D8: jalr        $t9
    // 0x080057DC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080057DC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x080057E0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x080057E4: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x080057E8: or          $t1, $v0, $at
    ctx->r9 = ctx->r2 | ctx->r1;
    // 0x080057EC: sw          $t1, 0x30($t2)
    MEM_W(0X30, ctx->r10) = ctx->r9;
L_080057F0:
    // 0x080057F0: lui         $t4, 0x40
    ctx->r12 = S32(0X40 << 16);
    // 0x080057F4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080057F8: addiu       $t3, $zero, 0x7E
    ctx->r11 = ADD32(0, 0X7E);
    // 0x080057FC: ori         $t4, $t4, 0x6E0
    ctx->r12 = ctx->r12 | 0X6E0;
    // 0x08005800: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x08005804: sh          $t3, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r11;
    // 0x08005808: sw          $t4, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r12;
    // 0x0800580C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08005810: jalr        $t9
    // 0x08005814: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08005814: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_3:
    // 0x08005818: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800581C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x08005820: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08005824: sb          $t5, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r13;
    // 0x08005828: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800582C: addiu       $a1, $zero, 0x2BC
    ctx->r5 = ADD32(0, 0X2BC);
    // 0x08005830: addiu       $a2, $zero, 0x23
    ctx->r6 = ADD32(0, 0X23);
    // 0x08005834: jalr        $t9
    // 0x08005838: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08005838: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x0800583C: lw          $t6, 0xE8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XE8);
    // 0x08005840: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08005844: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08005848: andi        $t7, $t6, 0x100
    ctx->r15 = ctx->r14 & 0X100;
    // 0x0800584C: beq         $t7, $zero, L_08005860
    if (ctx->r15 == 0) {
        // 0x08005850: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(20, 0X587C) << 16);
            goto L_08005860;
    }
    // 0x08005850: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X587C) << 16);
    // 0x08005854: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x08005858: addiu       $t8, $zero, 0x200
    ctx->r24 = ADD32(0, 0X200);
    // 0x0800585C: sh          $t8, 0x14($t0)
    MEM_H(0X14, ctx->r8) = ctx->r24;
L_08005860:
    // 0x08005860: jalr        $t9
    // 0x08005864: addiu       $a0, $a0, 0x587C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X587C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08005864: addiu       $a0, $a0, 0x587C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X587C));
    after_5:
    // 0x08005868: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0800586C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08005870: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08005874: jr          $ra
    // 0x08005878: nop

    TRACE_RETURN()
    return;
    // 0x08005878: nop

;}
RECOMP_FUNC void func_08003A00_6B6CA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003A00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003A04: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003A08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003A0C: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08003A10: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08003A14: jalr        $t9
    // 0x08003A18: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003A18: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x08003A1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08003A20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08003A24: jr          $ra
    // 0x08003A28: nop

    TRACE_RETURN()
    return;
    // 0x08003A28: nop

    // 0x08003A2C: jr          $ra
    // 0x08003A30: nop

    TRACE_RETURN()
    return;
    // 0x08003A30: nop

    // 0x08003A34: jr          $ra
    // 0x08003A38: nop

    TRACE_RETURN()
    return;
    // 0x08003A38: nop

    // 0x08003A3C: jr          $ra
    // 0x08003A40: nop

    TRACE_RETURN()
    return;
    // 0x08003A40: nop

;}
RECOMP_FUNC void func_0800738C_6BA62C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800738C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08007390: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08007394: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08007398: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x0800739C: addiu       $t9, $t9, 0x168
    ctx->r25 = ADD32(ctx->r25, 0X168);
    // 0x080073A0: jalr        $t9
    // 0x080073A4: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080073A4: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    after_0:
    // 0x080073A8: bne         $v0, $zero, L_080073C0
    if (ctx->r2 != 0) {
        // 0x080073AC: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(20, 0X73D0) << 16);
            goto L_080073C0;
    }
    // 0x080073AC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X73D0) << 16);
    // 0x080073B0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080073B4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080073B8: jalr        $t9
    // 0x080073BC: addiu       $a0, $a0, 0x73D0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X73D0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080073BC: addiu       $a0, $a0, 0x73D0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X73D0));
    after_1:
L_080073C0:
    // 0x080073C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080073C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080073C8: jr          $ra
    // 0x080073CC: nop

    TRACE_RETURN()
    return;
    // 0x080073CC: nop

;}
RECOMP_FUNC void func_080066B0_6B9950(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080066B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080066B4: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC3F4) << 16);
    // 0x080066B8: lwc1        $f0, -0x3C0C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(20, 0XC3F4));
    // 0x080066BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080066C0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080066C4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080066C8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080066CC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X66F4) << 16);
    // 0x080066D0: addiu       $a0, $a0, 0x66F4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X66F4));
    // 0x080066D4: swc1        $f0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f0.u32l;
    // 0x080066D8: swc1        $f0, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f0.u32l;
    // 0x080066DC: jalr        $t9
    // 0x080066E0: swc1        $f0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080066E0: swc1        $f0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f0.u32l;
    after_0:
    // 0x080066E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080066E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080066EC: jr          $ra
    // 0x080066F0: nop

    TRACE_RETURN()
    return;
    // 0x080066F0: nop

;}
RECOMP_FUNC void func_08001F28_6B51C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001F28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001F2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001F30: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001F34: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08001F38: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001F3C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001F40: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08001F44: bne         $v0, $zero, L_08001F58
    if (ctx->r2 != 0) {
        // 0x08001F48: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08001F58;
    }
    // 0x08001F48: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08001F4C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X1F68) << 16);
    // 0x08001F50: jalr        $t9
    // 0x08001F54: addiu       $a0, $a0, 0x1F68
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X1F68));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001F54: addiu       $a0, $a0, 0x1F68
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X1F68));
    after_0:
L_08001F58:
    // 0x08001F58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001F5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001F60: jr          $ra
    // 0x08001F64: nop

    TRACE_RETURN()
    return;
    // 0x08001F64: nop

;}
RECOMP_FUNC void func_0800A6F8_6BD998(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800A6F8: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x0800A6FC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x0800A700: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x0800A704: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x0800A708: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0800A70C: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x0800A710: lw          $v0, 0xD0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD0);
    // 0x0800A714: lw          $s2, 0x18($a0)
    ctx->r18 = MEM_W(ctx->r4, 0X18);
    // 0x0800A718: lui         $s0, 0x8000
    ctx->r16 = S32(0X8000 << 16);
    // 0x0800A71C: lw          $s1, 0x18($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X18);
    // 0x0800A720: lwc1        $f4, 0x8($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X8);
    // 0x0800A724: addiu       $s0, $s0, 0x3EA0
    ctx->r16 = ADD32(ctx->r16, 0X3EA0);
    // 0x0800A728: lwc1        $f6, 0x8($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X8);
    // 0x0800A72C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x0800A730: swc1        $f8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f8.u32l;
    // 0x0800A734: lwc1        $f10, 0x10($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X10);
    // 0x0800A738: lwc1        $f16, 0x10($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X10);
    // 0x0800A73C: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x0800A740: swc1        $f18, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f18.u32l;
    // 0x0800A744: lw          $t6, 0xE8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XE8);
    // 0x0800A748: andi        $t7, $t6, 0x2000
    ctx->r15 = ctx->r14 & 0X2000;
    // 0x0800A74C: beq         $t7, $zero, L_0800A7B4
    if (ctx->r15 == 0) {
        // 0x0800A750: nop
    
            goto L_0800A7B4;
    }
    // 0x0800A750: nop

    // 0x0800A754: lui         $s0, 0x8000
    ctx->r16 = S32(0X8000 << 16);
    // 0x0800A758: addiu       $s0, $s0, 0x3EA0
    ctx->r16 = ADD32(ctx->r16, 0X3EA0);
    // 0x0800A75C: jalr        $s0
    // 0x0800A760: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_0;
    // 0x0800A760: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x0800A764: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0800A768: addiu       $v0, $v0, 0x3E10
    ctx->r2 = ADD32(ctx->r2, 0X3E10);
    // 0x0800A76C: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x0800A770: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x0800A774: jalr        $v0
    // 0x0800A778: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x0800A778: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x0800A77C: lwc1        $f4, 0x64($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X64);
    // 0x0800A780: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x0800A784: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x0800A788: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x0800A78C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x0800A790: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x0800A794: sub.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x0800A798: jalr        $v0
    // 0x0800A79C: swc1        $f16, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f16.u32l;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x0800A79C: swc1        $f16, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x0800A7A0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x0800A7A4: jalr        $s0
    // 0x0800A7A8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_3;
    // 0x0800A7A8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x0800A7AC: b           L_0800A808
    // 0x0800A7B0: lwc1        $f16, 0x8($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X8);
        goto L_0800A808;
    // 0x0800A7B0: lwc1        $f16, 0x8($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X8);
L_0800A7B4:
    // 0x0800A7B4: jalr        $s0
    // 0x0800A7B8: addiu       $a0, $zero, 0x3FE
    ctx->r4 = ADD32(0, 0X3FE);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_4;
    // 0x0800A7B8: addiu       $a0, $zero, 0x3FE
    ctx->r4 = ADD32(0, 0X3FE);
    after_4:
    // 0x0800A7BC: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0800A7C0: addiu       $v0, $v0, 0x3E10
    ctx->r2 = ADD32(ctx->r2, 0X3E10);
    // 0x0800A7C4: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x0800A7C8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x0800A7CC: jalr        $v0
    // 0x0800A7D0: addiu       $a0, $zero, 0x3FE
    ctx->r4 = ADD32(0, 0X3FE);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x0800A7D0: addiu       $a0, $zero, 0x3FE
    ctx->r4 = ADD32(0, 0X3FE);
    after_5:
    // 0x0800A7D4: lwc1        $f18, 0x64($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X64);
    // 0x0800A7D8: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x0800A7DC: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x0800A7E0: mul.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x0800A7E4: addiu       $a0, $zero, 0x3FE
    ctx->r4 = ADD32(0, 0X3FE);
    // 0x0800A7E8: mul.s       $f6, $f0, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x0800A7EC: sub.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x0800A7F0: jalr        $v0
    // 0x0800A7F4: swc1        $f10, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_6;
    // 0x0800A7F4: swc1        $f10, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f10.u32l;
    after_6:
    // 0x0800A7F8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x0800A7FC: jalr        $s0
    // 0x0800A800: addiu       $a0, $zero, 0x3FE
    ctx->r4 = ADD32(0, 0X3FE);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_7;
    // 0x0800A800: addiu       $a0, $zero, 0x3FE
    ctx->r4 = ADD32(0, 0X3FE);
    after_7:
    // 0x0800A804: lwc1        $f16, 0x8($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X8);
L_0800A808:
    // 0x0800A808: lwc1        $f18, 0x58($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X58);
    // 0x0800A80C: add.s       $f8, $f16, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x0800A810: swc1        $f8, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f8.u32l;
    // 0x0800A814: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x0800A818: lwc1        $f10, 0x64($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X64);
    // 0x0800A81C: lwc1        $f8, 0x10($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X10);
    // 0x0800A820: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x0800A824: nop

    // 0x0800A828: mul.s       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x0800A82C: add.s       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x0800A830: add.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x0800A834: swc1        $f4, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->f4.u32l;
    // 0x0800A838: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x0800A83C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0800A840: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0800A844: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0800A848: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x0800A84C: jr          $ra
    // 0x0800A850: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    TRACE_RETURN()
    return;
    // 0x0800A850: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_08009184_6BC424(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08009184: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08009188: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800918C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08009190: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x08009194: addiu       $t9, $t9, 0x1F70
    ctx->r25 = ADD32(ctx->r25, 0X1F70);
    // 0x08009198: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x0800919C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x080091A0: jalr        $t9
    // 0x080091A4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080091A4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_0:
    // 0x080091A8: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080091AC: addiu       $t9, $t9, 0x4088
    ctx->r25 = ADD32(ctx->r25, 0X4088);
    // 0x080091B0: jalr        $t9
    // 0x080091B4: addiu       $a0, $zero, 0x134
    ctx->r4 = ADD32(0, 0X134);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080091B4: addiu       $a0, $zero, 0x134
    ctx->r4 = ADD32(0, 0X134);
    after_1:
    // 0x080091B8: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x080091BC: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x080091C0: addiu       $v0, $v0, 0x2938
    ctx->r2 = ADD32(ctx->r2, 0X2938);
    // 0x080091C4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x080091C8: jalr        $v0
    // 0x080091CC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x080091CC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_2:
    // 0x080091D0: sh          $zero, 0x48($v0)
    MEM_H(0X48, ctx->r2) = 0;
    // 0x080091D4: lbu         $t6, 0xDD($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0XDD);
    // 0x080091D8: addiu       $t7, $zero, 0x140
    ctx->r15 = ADD32(0, 0X140);
    // 0x080091DC: sh          $t7, 0x4C($v0)
    MEM_H(0X4C, ctx->r2) = ctx->r15;
    // 0x080091E0: sh          $t6, 0x4A($v0)
    MEM_H(0X4A, ctx->r2) = ctx->r14;
    // 0x080091E4: lbu         $t8, 0xDD($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0XDD);
    // 0x080091E8: addiu       $t0, $zero, 0xF0
    ctx->r8 = ADD32(0, 0XF0);
    // 0x080091EC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080091F0: subu        $t1, $t0, $t8
    ctx->r9 = SUB32(ctx->r8, ctx->r24);
    // 0x080091F4: sh          $t1, 0x4E($v0)
    MEM_H(0X4E, ctx->r2) = ctx->r9;
    // 0x080091F8: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x080091FC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x08009200: lui         $a1, 0xC32A
    ctx->r5 = S32(0XC32A << 16);
    // 0x08009204: lui         $a2, 0xC270
    ctx->r6 = S32(0XC270 << 16);
    // 0x08009208: jalr        $t9
    // 0x0800920C: lui         $a3, 0x432A
    ctx->r7 = S32(0X432A << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800920C: lui         $a3, 0x432A
    ctx->r7 = S32(0X432A << 16);
    after_3:
    // 0x08009210: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08009214: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x08009218: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x0800921C: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    // 0x08009220: lui         $a2, 0xC1A0
    ctx->r6 = S32(0XC1A0 << 16);
    // 0x08009224: jalr        $t9
    // 0x08009228: lui         $a3, 0x425C
    ctx->r7 = S32(0X425C << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08009228: lui         $a3, 0x425C
    ctx->r7 = S32(0X425C << 16);
    after_4:
    // 0x0800922C: lbu         $t2, 0xDD($s1)
    ctx->r10 = MEM_BU(ctx->r17, 0XDD);
    // 0x08009230: addiu       $at, $zero, 0x38
    ctx->r1 = ADD32(0, 0X38);
    // 0x08009234: addiu       $t3, $t2, 0x2
    ctx->r11 = ADD32(ctx->r10, 0X2);
    // 0x08009238: andi        $t4, $t3, 0xFF
    ctx->r12 = ctx->r11 & 0XFF;
    // 0x0800923C: bne         $t4, $at, L_08009284
    if (ctx->r12 != ctx->r1) {
        // 0x08009240: sb          $t3, 0xDD($s1)
        MEM_B(0XDD, ctx->r17) = ctx->r11;
            goto L_08009284;
    }
    // 0x08009240: sb          $t3, 0xDD($s1)
    MEM_B(0XDD, ctx->r17) = ctx->r11;
    // 0x08009244: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x08009248: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x0800924C: jalr        $t9
    // 0x08009250: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08009250: nop

    after_5:
    // 0x08009254: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08009258: addiu       $t5, $zero, 0x38
    ctx->r13 = ADD32(0, 0X38);
    // 0x0800925C: addiu       $t6, $zero, 0x140
    ctx->r14 = ADD32(0, 0X140);
    // 0x08009260: addiu       $t7, $zero, 0xB8
    ctx->r15 = ADD32(0, 0XB8);
    // 0x08009264: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08009268: lui         $a0, 0x801
    ctx->r4 = S32(RELOC_HI16(20, 0X9298) << 16);
    // 0x0800926C: sh          $zero, 0x48($v0)
    MEM_H(0X48, ctx->r2) = 0;
    // 0x08009270: sh          $t5, 0x4A($v0)
    MEM_H(0X4A, ctx->r2) = ctx->r13;
    // 0x08009274: sh          $t6, 0x4C($v0)
    MEM_H(0X4C, ctx->r2) = ctx->r14;
    // 0x08009278: sh          $t7, 0x4E($v0)
    MEM_H(0X4E, ctx->r2) = ctx->r15;
    // 0x0800927C: jalr        $t9
    // 0x08009280: addiu       $a0, $a0, -0x6D68
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X9298));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08009280: addiu       $a0, $a0, -0x6D68
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X9298));
    after_6:
L_08009284:
    // 0x08009284: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08009288: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x0800928C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x08009290: jr          $ra
    // 0x08009294: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x08009294: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_080030D0_6B6370(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080030D0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x080030D4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080030D8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080030DC: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x080030E0: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x080030E4: lw          $t7, 0x68($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X68);
    // 0x080030E8: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x080030EC: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x080030F0: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x080030F4: sw          $t8, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r24;
    // 0x080030F8: lw          $t9, -0x3A38($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3A38);
    // 0x080030FC: lui         $t0, 0x4
    ctx->r8 = S32(0X4 << 16);
    // 0x08003100: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08003104: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x08003108: lhu         $t0, -0x5232($t0)
    ctx->r8 = MEM_HU(ctx->r8, -0X5232);
    // 0x0800310C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08003110: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08003114: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x08003118: bne         $t1, $zero, L_08003188
    if (ctx->r9 != 0) {
        // 0x0800311C: addiu       $a1, $a1, 0x2088
        ctx->r5 = ADD32(ctx->r5, 0X2088);
            goto L_08003188;
    }
    // 0x0800311C: addiu       $a1, $a1, 0x2088
    ctx->r5 = ADD32(ctx->r5, 0X2088);
    // 0x08003120: jalr        $t9
    // 0x08003124: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003124: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x08003128: beq         $v0, $zero, L_08003188
    if (ctx->r2 == 0) {
        // 0x0800312C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08003188;
    }
    // 0x0800312C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08003130: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003134: addiu       $t9, $t9, -0x6D4C
    ctx->r25 = ADD32(ctx->r25, -0X6D4C);
    // 0x08003138: jalr        $t9
    // 0x0800313C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800313C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_1:
    // 0x08003140: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x08003144: lui         $at, 0x4014
    ctx->r1 = S32(0X4014 << 16);
    // 0x08003148: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x0800314C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08003150: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x08003154: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08003158: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x0800315C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x08003160: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003164: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x08003168: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x0800316C: div.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x08003170: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003174: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x08003178: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x0800317C: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x08003180: jalr        $t9
    // 0x08003184: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003184: nop

    after_2:
L_08003188:
    // 0x08003188: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x0800318C: addiu       $v1, $v1, -0x6D4C
    ctx->r3 = ADD32(ctx->r3, -0X6D4C);
    // 0x08003190: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    // 0x08003194: jalr        $v1
    // 0x08003198: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_3;
    // 0x08003198: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_3:
    // 0x0800319C: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x080031A0: lw          $t2, -0x3A38($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X3A38);
    // 0x080031A4: lui         $t3, 0x4
    ctx->r11 = S32(0X4 << 16);
    // 0x080031A8: addiu       $t4, $v0, 0xA
    ctx->r12 = ADD32(ctx->r2, 0XA);
    // 0x080031AC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x080031B0: lhu         $t3, -0x5232($t3)
    ctx->r11 = MEM_HU(ctx->r11, -0X5232);
    // 0x080031B4: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x080031B8: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    // 0x080031BC: div         $zero, $t3, $t4
    lo = S32(S64(S32(ctx->r11)) / S64(S32(ctx->r12))); hi = S32(S64(S32(ctx->r11)) % S64(S32(ctx->r12)));
    // 0x080031C0: mfhi        $t5
    ctx->r13 = hi;
    // 0x080031C4: lui         $s0, 0x8021
    ctx->r16 = S32(0X8021 << 16);
    // 0x080031C8: bne         $t4, $zero, L_080031D4
    if (ctx->r12 != 0) {
        // 0x080031CC: nop
    
            goto L_080031D4;
    }
    // 0x080031CC: nop

    // 0x080031D0: break       7
    do_break(134230480);
L_080031D4:
    // 0x080031D4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x080031D8: bne         $t4, $at, L_080031EC
    if (ctx->r12 != ctx->r1) {
        // 0x080031DC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_080031EC;
    }
    // 0x080031DC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x080031E0: bne         $t3, $at, L_080031EC
    if (ctx->r11 != ctx->r1) {
        // 0x080031E4: nop
    
            goto L_080031EC;
    }
    // 0x080031E4: nop

    // 0x080031E8: break       6
    do_break(134230504);
L_080031EC:
    // 0x080031EC: bnel        $t5, $zero, L_080032D4
    if (ctx->r13 != 0) {
        // 0x080031F0: lw          $t2, 0x3C($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X3C);
            goto L_080032D4;
    }
    goto skip_0;
    // 0x080031F0: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    skip_0:
    // 0x080031F4: jalr        $v1
    // 0x080031F8: addiu       $s0, $s0, 0x71A8
    ctx->r16 = ADD32(ctx->r16, 0X71A8);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_4;
    // 0x080031F8: addiu       $s0, $s0, 0x71A8
    ctx->r16 = ADD32(ctx->r16, 0X71A8);
    after_4:
    // 0x080031FC: slti        $at, $v0, 0x33
    ctx->r1 = SIGNED(ctx->r2) < 0X33 ? 1 : 0;
    // 0x08003200: bne         $at, $zero, L_08003270
    if (ctx->r1 != 0) {
        // 0x08003204: lw          $a0, 0x38($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X38);
            goto L_08003270;
    }
    // 0x08003204: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x08003208: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x0800320C: addiu       $a1, $a1, 0x12EC
    ctx->r5 = ADD32(ctx->r5, 0X12EC);
    // 0x08003210: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x08003214: jalr        $s0
    // 0x08003218: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_5;
    // 0x08003218: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x0800321C: beq         $v0, $zero, L_080032D0
    if (ctx->r2 == 0) {
        // 0x08003220: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_080032D0;
    }
    // 0x08003220: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08003224: lw          $t7, 0x64($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X64);
    // 0x08003228: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0800322C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08003230: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x08003234: sw          $t8, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r24;
    // 0x08003238: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x0800323C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08003240: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08003244: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x08003248: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    // 0x0800324C: jalr        $t9
    // 0x08003250: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08003250: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    after_6:
    // 0x08003254: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC38C) << 16);
    // 0x08003258: lwc1        $f0, -0x3C74($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(20, 0XC38C));
    // 0x0800325C: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x08003260: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x08003264: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x08003268: b           L_080032D0
    // 0x0800326C: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
        goto L_080032D0;
    // 0x0800326C: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
L_08003270:
    // 0x08003270: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08003274: addiu       $a1, $a1, 0x12EC
    ctx->r5 = ADD32(ctx->r5, 0X12EC);
    // 0x08003278: jalr        $s0
    // 0x0800327C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_7;
    // 0x0800327C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_7:
    // 0x08003280: beq         $v0, $zero, L_080032D0
    if (ctx->r2 == 0) {
        // 0x08003284: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_080032D0;
    }
    // 0x08003284: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08003288: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800328C: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08003290: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08003294: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08003298: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    // 0x0800329C: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x080032A0: jalr        $t9
    // 0x080032A4: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x080032A4: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    after_8:
    // 0x080032A8: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC390) << 16);
    // 0x080032AC: lwc1        $f0, -0x3C70($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(20, 0XC390));
    // 0x080032B0: lw          $t0, 0x64($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X64);
    // 0x080032B4: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x080032B8: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x080032BC: or          $t1, $t0, $at
    ctx->r9 = ctx->r8 | ctx->r1;
    // 0x080032C0: sw          $t1, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r9;
    // 0x080032C4: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x080032C8: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x080032CC: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
L_080032D0:
    // 0x080032D0: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
L_080032D4:
    // 0x080032D4: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x080032D8: lbu         $t6, -0x324C($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X324C);
    // 0x080032DC: lhu         $t3, 0x16($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X16);
    // 0x080032E0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080032E4: addiu       $t9, $t9, 0x68A8
    ctx->r25 = ADD32(ctx->r25, 0X68A8);
    // 0x080032E8: addu        $t4, $t6, $t3
    ctx->r12 = ADD32(ctx->r14, ctx->r11);
    // 0x080032EC: andi        $t5, $t4, 0x3FF
    ctx->r13 = ctx->r12 & 0X3FF;
    // 0x080032F0: sh          $t5, 0x16($t2)
    MEM_H(0X16, ctx->r10) = ctx->r13;
    // 0x080032F4: jalr        $t9
    // 0x080032F8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x080032F8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_9:
    // 0x080032FC: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x08003300: bne         $v0, $at, L_08003318
    if (ctx->r2 != ctx->r1) {
        // 0x08003304: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(20, 0X332C) << 16);
            goto L_08003318;
    }
    // 0x08003304: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X332C) << 16);
    // 0x08003308: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800330C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003310: jalr        $t9
    // 0x08003314: addiu       $a0, $a0, 0x332C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X332C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08003314: addiu       $a0, $a0, 0x332C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X332C));
    after_10:
L_08003318:
    // 0x08003318: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0800331C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08003320: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x08003324: jr          $ra
    // 0x08003328: nop

    TRACE_RETURN()
    return;
    // 0x08003328: nop

;}
RECOMP_FUNC void func_080065F0_6B9890(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080065F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080065F4: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080065F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080065FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08006600: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08006604: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08006608: jalr        $t9
    // 0x0800660C: addiu       $a0, $zero, 0x130
    ctx->r4 = ADD32(0, 0X130);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800660C: addiu       $a0, $zero, 0x130
    ctx->r4 = ADD32(0, 0X130);
    after_0:
    // 0x08006610: beq         $v0, $zero, L_08006628
    if (ctx->r2 == 0) {
        // 0x08006614: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(20, 0X6638) << 16);
            goto L_08006628;
    }
    // 0x08006614: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X6638) << 16);
    // 0x08006618: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800661C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08006620: jalr        $t9
    // 0x08006624: addiu       $a0, $a0, 0x6638
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X6638));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08006624: addiu       $a0, $a0, 0x6638
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X6638));
    after_1:
L_08006628:
    // 0x08006628: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800662C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08006630: jr          $ra
    // 0x08006634: nop

    TRACE_RETURN()
    return;
    // 0x08006634: nop

;}
RECOMP_FUNC void func_08005C68_6B8F08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08005C68: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x08005C6C: lwc1        $f4, -0x3230($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3230);
    // 0x08005C70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08005C74: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08005C78: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x08005C7C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08005C80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08005C84: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08005C88: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x08005C8C: lui         $a2, 0x3E2A
    ctx->r6 = S32(0X3E2A << 16);
    // 0x08005C90: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x08005C94: jalr        $t9
    // 0x08005C98: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08005C98: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x08005C9C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08005CA0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08005CA4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X5CC0) << 16);
    // 0x08005CA8: jalr        $t9
    // 0x08005CAC: addiu       $a0, $a0, 0x5CC0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X5CC0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08005CAC: addiu       $a0, $a0, 0x5CC0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X5CC0));
    after_1:
    // 0x08005CB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08005CB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08005CB8: jr          $ra
    // 0x08005CBC: nop

    TRACE_RETURN()
    return;
    // 0x08005CBC: nop

;}
RECOMP_FUNC void func_0800077C_6B3A1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800077C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x08000780: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x08000784: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x08000788: lw          $t6, 0xD0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD0);
    // 0x0800078C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x08000790: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08000794: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08000798: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x0800079C: lwc1        $f4, 0x24($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X24);
    // 0x080007A0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080007A4: lw          $v1, 0x18($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X18);
    // 0x080007A8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080007AC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x080007B0: swc1        $f8, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f8.u32l;
    // 0x080007B4: lwc1        $f10, 0x24($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X24);
    // 0x080007B8: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x080007BC: nop

    // 0x080007C0: bc1fl       L_080007D0
    if (!c1cs) {
        // 0x080007C4: lw          $v0, 0xE8($s0)
        ctx->r2 = MEM_W(ctx->r16, 0XE8);
            goto L_080007D0;
    }
    goto skip_0;
    // 0x080007C4: lw          $v0, 0xE8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XE8);
    skip_0:
    // 0x080007C8: swc1        $f0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f0.u32l;
    // 0x080007CC: lw          $v0, 0xE8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XE8);
L_080007D0:
    // 0x080007D0: andi        $t8, $v0, 0x1
    ctx->r24 = ctx->r2 & 0X1;
    // 0x080007D4: beql        $t8, $zero, L_080007EC
    if (ctx->r24 == 0) {
        // 0x080007D8: andi        $t0, $v0, 0x2
        ctx->r8 = ctx->r2 & 0X2;
            goto L_080007EC;
    }
    goto skip_1;
    // 0x080007D8: andi        $t0, $v0, 0x2
    ctx->r8 = ctx->r2 & 0X2;
    skip_1:
    // 0x080007DC: lhu         $t9, 0x16($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X16);
    // 0x080007E0: sh          $t9, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r25;
    // 0x080007E4: lw          $v0, 0xE8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XE8);
    // 0x080007E8: andi        $t0, $v0, 0x2
    ctx->r8 = ctx->r2 & 0X2;
L_080007EC:
    // 0x080007EC: beq         $t0, $zero, L_08000808
    if (ctx->r8 == 0) {
        // 0x080007F0: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(20, 0X9C4) << 16);
            goto L_08000808;
    }
    // 0x080007F0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X9C4) << 16);
    // 0x080007F4: lhu         $t1, 0x16($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X16);
    // 0x080007F8: addiu       $t2, $t1, -0x100
    ctx->r10 = ADD32(ctx->r9, -0X100);
    // 0x080007FC: andi        $t3, $t2, 0x3FF
    ctx->r11 = ctx->r10 & 0X3FF;
    // 0x08000800: sh          $t3, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r11;
    // 0x08000804: lw          $v0, 0xE8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XE8);
L_08000808:
    // 0x08000808: andi        $t4, $v0, 0x4
    ctx->r12 = ctx->r2 & 0X4;
    // 0x0800080C: beql        $t4, $zero, L_0800082C
    if (ctx->r12 == 0) {
        // 0x08000810: andi        $t8, $v0, 0x8
        ctx->r24 = ctx->r2 & 0X8;
            goto L_0800082C;
    }
    goto skip_2;
    // 0x08000810: andi        $t8, $v0, 0x8
    ctx->r24 = ctx->r2 & 0X8;
    skip_2:
    // 0x08000814: lhu         $t5, 0x16($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X16);
    // 0x08000818: addiu       $t6, $t5, 0x100
    ctx->r14 = ADD32(ctx->r13, 0X100);
    // 0x0800081C: andi        $t7, $t6, 0x3FF
    ctx->r15 = ctx->r14 & 0X3FF;
    // 0x08000820: sh          $t7, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r15;
    // 0x08000824: lw          $v0, 0xE8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XE8);
    // 0x08000828: andi        $t8, $v0, 0x8
    ctx->r24 = ctx->r2 & 0X8;
L_0800082C:
    // 0x0800082C: beql        $t8, $zero, L_08000848
    if (ctx->r24 == 0) {
        // 0x08000830: lw          $t2, 0x34($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X34);
            goto L_08000848;
    }
    goto skip_3;
    // 0x08000830: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    skip_3:
    // 0x08000834: lhu         $t9, 0x16($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X16);
    // 0x08000838: addiu       $t0, $t9, 0x200
    ctx->r8 = ADD32(ctx->r25, 0X200);
    // 0x0800083C: andi        $t1, $t0, 0x3FF
    ctx->r9 = ctx->r8 & 0X3FF;
    // 0x08000840: sh          $t1, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r9;
    // 0x08000844: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
L_08000848:
    // 0x08000848: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800084C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000850: lw          $t3, 0xE8($t2)
    ctx->r11 = MEM_W(ctx->r10, 0XE8);
    // 0x08000854: andi        $t4, $t3, 0x80
    ctx->r12 = ctx->r11 & 0X80;
    // 0x08000858: beql        $t4, $zero, L_0800086C
    if (ctx->r12 == 0) {
        // 0x0800085C: lw          $v0, 0xE8($s0)
        ctx->r2 = MEM_W(ctx->r16, 0XE8);
            goto L_0800086C;
    }
    goto skip_4;
    // 0x0800085C: lw          $v0, 0xE8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XE8);
    skip_4:
    // 0x08000860: jalr        $t9
    // 0x08000864: addiu       $a0, $a0, 0x9C4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X9C4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000864: addiu       $a0, $a0, 0x9C4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X9C4));
    after_0:
    // 0x08000868: lw          $v0, 0xE8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XE8);
L_0800086C:
    // 0x0800086C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000870: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000874: andi        $t5, $v0, 0x100
    ctx->r13 = ctx->r2 & 0X100;
    // 0x08000878: beq         $t5, $zero, L_080008A0
    if (ctx->r13 == 0) {
        // 0x0800087C: andi        $t6, $v0, 0x4000
        ctx->r14 = ctx->r2 & 0X4000;
            goto L_080008A0;
    }
    // 0x0800087C: andi        $t6, $v0, 0x4000
    ctx->r14 = ctx->r2 & 0X4000;
    // 0x08000880: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000884: addiu       $t9, $t9, -0x2350
    ctx->r25 = ADD32(ctx->r25, -0X2350);
    // 0x08000888: lbu         $a1, 0xEC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XEC);
    // 0x0800088C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08000890: jalr        $t9
    // 0x08000894: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000894: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_1:
    // 0x08000898: b           L_08000900
    // 0x0800089C: nop

        goto L_08000900;
    // 0x0800089C: nop

L_080008A0:
    // 0x080008A0: beq         $t6, $zero, L_080008E4
    if (ctx->r14 == 0) {
        // 0x080008A4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_080008E4;
    }
    // 0x080008A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080008A8: lbu         $a1, 0xEC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XEC);
    // 0x080008AC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080008B0: addiu       $t9, $t9, -0x22B4
    ctx->r25 = ADD32(ctx->r25, -0X22B4);
    // 0x080008B4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x080008B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080008BC: bgez        $a1, L_080008CC
    if (SIGNED(ctx->r5) >= 0) {
        // 0x080008C0: sra         $t7, $a1, 2
        ctx->r15 = S32(SIGNED(ctx->r5) >> 2);
            goto L_080008CC;
    }
    // 0x080008C0: sra         $t7, $a1, 2
    ctx->r15 = S32(SIGNED(ctx->r5) >> 2);
    // 0x080008C4: addiu       $at, $a1, 0x3
    ctx->r1 = ADD32(ctx->r5, 0X3);
    // 0x080008C8: sra         $t7, $at, 2
    ctx->r15 = S32(SIGNED(ctx->r1) >> 2);
L_080008CC:
    // 0x080008CC: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x080008D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080008D4: jalr        $t9
    // 0x080008D8: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080008D8: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_2:
    // 0x080008DC: b           L_08000900
    // 0x080008E0: nop

        goto L_08000900;
    // 0x080008E0: nop

L_080008E4:
    // 0x080008E4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080008E8: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x080008EC: lbu         $a1, 0xEC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XEC);
    // 0x080008F0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x080008F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080008F8: jalr        $t9
    // 0x080008FC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080008FC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_3:
L_08000900:
    // 0x08000900: lui         $t9, 0x801
    ctx->r25 = S32(RELOC_HI16(20, 0X9A50) << 16);
    // 0x08000904: addiu       $t9, $t9, -0x65B0
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(20, 0X9A50));
    // 0x08000908: jalr        $t9
    // 0x0800090C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x0800090C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x08000910: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x08000914: lw          $v1, 0xE8($t8)
    ctx->r3 = MEM_W(ctx->r24, 0XE8);
    // 0x08000918: andi        $t0, $v1, 0x80
    ctx->r8 = ctx->r3 & 0X80;
    // 0x0800091C: bnel        $t0, $zero, L_080009B4
    if (ctx->r8 != 0) {
        // 0x08000920: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_080009B4;
    }
    goto skip_5;
    // 0x08000920: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_5:
    // 0x08000924: lw          $v0, 0xE8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XE8);
    // 0x08000928: andi        $t1, $v0, 0x100
    ctx->r9 = ctx->r2 & 0X100;
    // 0x0800092C: bne         $t1, $zero, L_080009B0
    if (ctx->r9 != 0) {
        // 0x08000930: andi        $t2, $v0, 0x4000
        ctx->r10 = ctx->r2 & 0X4000;
            goto L_080009B0;
    }
    // 0x08000930: andi        $t2, $v0, 0x4000
    ctx->r10 = ctx->r2 & 0X4000;
    // 0x08000934: bne         $t2, $zero, L_080009B0
    if (ctx->r10 != 0) {
        // 0x08000938: andi        $t3, $v1, 0x400
        ctx->r11 = ctx->r3 & 0X400;
            goto L_080009B0;
    }
    // 0x08000938: andi        $t3, $v1, 0x400
    ctx->r11 = ctx->r3 & 0X400;
    // 0x0800093C: beq         $t3, $zero, L_080009B0
    if (ctx->r11 == 0) {
        // 0x08000940: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_080009B0;
    }
    // 0x08000940: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000944: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x08000948: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x0800094C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000950: addiu       $t9, $t9, -0x2218
    ctx->r25 = ADD32(ctx->r25, -0X2218);
    // 0x08000954: lwc1        $f16, 0xC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08000958: lw          $a3, 0x8($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X8);
    // 0x0800095C: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(20, 0XC14) << 16);
    // 0x08000960: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x08000964: lwc1        $f18, 0x10($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X10);
    // 0x08000968: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x0800096C: addiu       $a1, $a1, 0xC14
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(20, 0XC14));
    // 0x08000970: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x08000974: jalr        $t9
    // 0x08000978: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000978: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_5:
    // 0x0800097C: beq         $v0, $zero, L_080009B0
    if (ctx->r2 == 0) {
        // 0x08000980: addiu       $t4, $zero, 0x1D
        ctx->r12 = ADD32(0, 0X1D);
            goto L_080009B0;
    }
    // 0x08000980: addiu       $t4, $zero, 0x1D
    ctx->r12 = ADD32(0, 0X1D);
    // 0x08000984: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000988: sh          $t4, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r12;
    // 0x0800098C: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000990: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x08000994: jalr        $t9
    // 0x08000998: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000998: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    after_6:
    // 0x0800099C: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x080009A0: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x080009A4: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x080009A8: sw          $s0, 0xD4($v1)
    MEM_W(0XD4, ctx->r3) = ctx->r16;
    // 0x080009AC: sw          $t5, 0xD0($v1)
    MEM_W(0XD0, ctx->r3) = ctx->r13;
L_080009B0:
    // 0x080009B0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_080009B4:
    // 0x080009B4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x080009B8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x080009BC: jr          $ra
    // 0x080009C0: nop

    TRACE_RETURN()
    return;
    // 0x080009C0: nop

;}
RECOMP_FUNC void func_08000DCC_6B406C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000DCC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08000DD0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08000DD4: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x08000DD8: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x08000DDC: lw          $v0, 0xD0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD0);
    // 0x08000DE0: addiu       $t7, $zero, 0x78
    ctx->r15 = ADD32(0, 0X78);
    // 0x08000DE4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x08000DE8: lw          $t6, 0x18($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X18);
    // 0x08000DEC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000DF0: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x08000DF4: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x08000DF8: sb          $t7, 0xED($a0)
    MEM_B(0XED, ctx->r4) = ctx->r15;
    // 0x08000DFC: sb          $t8, 0x6D($a0)
    MEM_B(0X6D, ctx->r4) = ctx->r24;
    // 0x08000E00: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000E04: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08000E08: lbu         $a1, 0xED($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XED);
    // 0x08000E0C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08000E10: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000E14: jalr        $t9
    // 0x08000E18: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000E18: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08000E1C: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08000E20: or          $t0, $v0, $at
    ctx->r8 = ctx->r2 | ctx->r1;
    // 0x08000E24: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x08000E28: lui         $t3, 0x40
    ctx->r11 = S32(0X40 << 16);
    // 0x08000E2C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000E30: sw          $t0, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r8;
    // 0x08000E34: sb          $t1, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r9;
    // 0x08000E38: addiu       $t2, $zero, 0x7E
    ctx->r10 = ADD32(0, 0X7E);
    // 0x08000E3C: ori         $t3, $t3, 0x6E2
    ctx->r11 = ctx->r11 | 0X6E2;
    // 0x08000E40: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08000E44: sh          $t2, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r10;
    // 0x08000E48: sw          $t3, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r11;
    // 0x08000E4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000E50: addiu       $a1, $zero, 0x258
    ctx->r5 = ADD32(0, 0X258);
    // 0x08000E54: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    // 0x08000E58: jalr        $t9
    // 0x08000E5C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000E5C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x08000E60: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC2C0) << 16);
    // 0x08000E64: lwc1        $f0, -0x3D40($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(20, 0XC2C0));
    // 0x08000E68: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000E6C: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08000E70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000E74: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x08000E78: swc1        $f0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f0.u32l;
    // 0x08000E7C: swc1        $f0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f0.u32l;
    // 0x08000E80: jalr        $t9
    // 0x08000E84: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000E84: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
    after_2:
    // 0x08000E88: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000E8C: addiu       $t9, $t9, 0x4ABC
    ctx->r25 = ADD32(ctx->r25, 0X4ABC);
    // 0x08000E90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000E94: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08000E98: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x08000E9C: jalr        $t9
    // 0x08000EA0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000EA0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x08000EA4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000EA8: addiu       $t9, $t9, -0x5CF0
    ctx->r25 = ADD32(ctx->r25, -0X5CF0);
    // 0x08000EAC: jalr        $t9
    // 0x08000EB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000EB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x08000EB4: addiu       $t4, $zero, 0x6
    ctx->r12 = ADD32(0, 0X6);
    // 0x08000EB8: sb          $t4, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r12;
    // 0x08000EBC: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x08000EC0: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08000EC4: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x08000EC8: jalr        $t9
    // 0x08000ECC: lhu         $a0, 0x16($t5)
    ctx->r4 = MEM_HU(ctx->r13, 0X16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000ECC: lhu         $a0, 0x16($t5)
    ctx->r4 = MEM_HU(ctx->r13, 0X16);
    after_5:
    // 0x08000ED0: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC2C8) << 16);
    // 0x08000ED4: ldc1        $f6, -0x3D38($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(20, 0XC2C8));
    // 0x08000ED8: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x08000EDC: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08000EE0: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x08000EE4: addiu       $t9, $t9, 0x3EA0
    ctx->r25 = ADD32(ctx->r25, 0X3EA0);
    // 0x08000EE8: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08000EEC: swc1        $f10, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f10.u32l;
    // 0x08000EF0: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x08000EF4: jalr        $t9
    // 0x08000EF8: lhu         $a0, 0x16($t6)
    ctx->r4 = MEM_HU(ctx->r14, 0X16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000EF8: lhu         $a0, 0x16($t6)
    ctx->r4 = MEM_HU(ctx->r14, 0X16);
    after_6:
    // 0x08000EFC: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC2D0) << 16);
    // 0x08000F00: ldc1        $f18, -0x3D30($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(20, 0XC2D0));
    // 0x08000F04: cvt.d.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.d = CVT_D_S(ctx->f0.fl);
    // 0x08000F08: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000F0C: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x08000F10: addiu       $t7, $zero, 0xF
    ctx->r15 = ADD32(0, 0XF);
    // 0x08000F14: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000F18: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0XF44) << 16);
    // 0x08000F1C: sh          $t7, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r15;
    // 0x08000F20: addiu       $a0, $a0, 0xF44
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0XF44));
    // 0x08000F24: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08000F28: jalr        $t9
    // 0x08000F2C: swc1        $f6, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08000F2C: swc1        $f6, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f6.u32l;
    after_7:
    // 0x08000F30: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08000F34: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x08000F38: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x08000F3C: jr          $ra
    // 0x08000F40: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x08000F40: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_08007338_6BA5D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08007338: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800733C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08007340: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08007344: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08007348: addiu       $t9, $t9, 0x210
    ctx->r25 = ADD32(ctx->r25, 0X210);
    // 0x0800734C: jalr        $t9
    // 0x08007350: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08007350: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    after_0:
    // 0x08007354: bne         $v0, $zero, L_0800737C
    if (ctx->r2 != 0) {
        // 0x08007358: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_0800737C;
    }
    // 0x08007358: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800735C: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08007360: jalr        $t9
    // 0x08007364: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08007364: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    after_1:
    // 0x08007368: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800736C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08007370: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X738C) << 16);
    // 0x08007374: jalr        $t9
    // 0x08007378: addiu       $a0, $a0, 0x738C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X738C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08007378: addiu       $a0, $a0, 0x738C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X738C));
    after_2:
L_0800737C:
    // 0x0800737C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08007380: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08007384: jr          $ra
    // 0x08007388: nop

    TRACE_RETURN()
    return;
    // 0x08007388: nop

;}
RECOMP_FUNC void func_0800056C_6B380C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800056C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08000570: lhu         $t6, 0x16($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X16);
    // 0x08000574: addiu       $t7, $t6, 0x40
    ctx->r15 = ADD32(ctx->r14, 0X40);
    // 0x08000578: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x0800057C: jr          $ra
    // 0x08000580: sh          $t8, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r24;
    TRACE_RETURN()
    return;
    // 0x08000580: sh          $t8, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r24;
;}
RECOMP_FUNC void func_08007ACC_6BAD6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08007ACC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08007AD0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08007AD4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08007AD8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08007ADC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08007AE0: addiu       $t9, $t9, -0x2658
    ctx->r25 = ADD32(ctx->r25, -0X2658);
    // 0x08007AE4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08007AE8: addiu       $a1, $zero, 0x360
    ctx->r5 = ADD32(0, 0X360);
    // 0x08007AEC: jalr        $t9
    // 0x08007AF0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08007AF0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
    // 0x08007AF4: beq         $v0, $zero, L_08007B44
    if (ctx->r2 == 0) {
        // 0x08007AF8: addiu       $at, $zero, -0x81
        ctx->r1 = ADD32(0, -0X81);
            goto L_08007B44;
    }
    // 0x08007AF8: addiu       $at, $zero, -0x81
    ctx->r1 = ADD32(0, -0X81);
    // 0x08007AFC: lw          $t6, 0xE8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XE8);
    // 0x08007B00: lui         $t9, 0x801
    ctx->r25 = S32(RELOC_HI16(20, 0X9C04) << 16);
    // 0x08007B04: addiu       $t9, $t9, -0x63FC
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(20, 0X9C04));
    // 0x08007B08: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x08007B0C: sw          $t7, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r15;
    // 0x08007B10: jalr        $t9
    // 0x08007B14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08007B14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x08007B18: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08007B1C: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08007B20: jalr        $t9
    // 0x08007B24: addiu       $a0, $zero, 0x243
    ctx->r4 = ADD32(0, 0X243);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08007B24: addiu       $a0, $zero, 0x243
    ctx->r4 = ADD32(0, 0X243);
    after_2:
    // 0x08007B28: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08007B2C: addiu       $t8, $zero, 0x5A
    ctx->r24 = ADD32(0, 0X5A);
    // 0x08007B30: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08007B34: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X7B58) << 16);
    // 0x08007B38: sh          $t8, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r24;
    // 0x08007B3C: jalr        $t9
    // 0x08007B40: addiu       $a0, $a0, 0x7B58
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X7B58));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08007B40: addiu       $a0, $a0, 0x7B58
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X7B58));
    after_3:
L_08007B44:
    // 0x08007B44: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08007B48: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08007B4C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08007B50: jr          $ra
    // 0x08007B54: nop

    TRACE_RETURN()
    return;
    // 0x08007B54: nop

;}
RECOMP_FUNC void func_0800820C_6BB4AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800820C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08008210: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08008214: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08008218: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x0800821C: addiu       $t9, $t9, 0x26C
    ctx->r25 = ADD32(ctx->r25, 0X26C);
    // 0x08008220: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08008224: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x08008228: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x0800822C: jalr        $t9
    // 0x08008230: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08008230: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_0:
    // 0x08008234: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08008238: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x0800823C: jalr        $t9
    // 0x08008240: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08008240: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_1:
    // 0x08008244: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x08008248: addiu       $t6, $zero, 0x1E
    ctx->r14 = ADD32(0, 0X1E);
    // 0x0800824C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08008250: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x08008254: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x08008258: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800825C: lui         $a0, 0x801
    ctx->r4 = S32(RELOC_HI16(20, 0X8280) << 16);
    // 0x08008260: sh          $t6, 0x8A($t7)
    MEM_H(0X8A, ctx->r15) = ctx->r14;
    // 0x08008264: sb          $t8, -0x3A9E($at)
    MEM_B(-0X3A9E, ctx->r1) = ctx->r24;
    // 0x08008268: jalr        $t9
    // 0x0800826C: addiu       $a0, $a0, -0x7D80
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X8280));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800826C: addiu       $a0, $a0, -0x7D80
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X8280));
    after_2:
    // 0x08008270: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08008274: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08008278: jr          $ra
    // 0x0800827C: nop

    TRACE_RETURN()
    return;
    // 0x0800827C: nop

;}
RECOMP_FUNC void func_08005D98_6B9038(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08005D98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08005D9C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08005DA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08005DA4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08005DA8: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08005DAC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08005DB0: jalr        $t9
    // 0x08005DB4: addiu       $a0, $zero, 0x12E
    ctx->r4 = ADD32(0, 0X12E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08005DB4: addiu       $a0, $zero, 0x12E
    ctx->r4 = ADD32(0, 0X12E);
    after_0:
    // 0x08005DB8: beq         $v0, $zero, L_08005DDC
    if (ctx->r2 == 0) {
        // 0x08005DBC: addiu       $t6, $zero, 0x40
        ctx->r14 = ADD32(0, 0X40);
            goto L_08005DDC;
    }
    // 0x08005DBC: addiu       $t6, $zero, 0x40
    ctx->r14 = ADD32(0, 0X40);
    // 0x08005DC0: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x08005DC4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08005DC8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08005DCC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X5DEC) << 16);
    // 0x08005DD0: addiu       $a0, $a0, 0x5DEC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X5DEC));
    // 0x08005DD4: jalr        $t9
    // 0x08005DD8: sh          $t6, 0x8A($t7)
    MEM_H(0X8A, ctx->r15) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08005DD8: sh          $t6, 0x8A($t7)
    MEM_H(0X8A, ctx->r15) = ctx->r14;
    after_1:
L_08005DDC:
    // 0x08005DDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08005DE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08005DE4: jr          $ra
    // 0x08005DE8: nop

    TRACE_RETURN()
    return;
    // 0x08005DE8: nop

;}
RECOMP_FUNC void func_0800A04C_6BD2EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800A04C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x0800A050: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x0800A054: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0800A058: lui         $t7, 0x4
    ctx->r15 = S32(0X4 << 16);
    // 0x0800A05C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x0800A060: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x0800A064: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x0800A068: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x0800A06C: lhu         $t7, -0x5232($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X5232);
    // 0x0800A070: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x0800A074: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(20, 0XDCC) << 16);
    // 0x0800A078: div         $zero, $t7, $at
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r1)));
    // 0x0800A07C: mfhi        $t8
    ctx->r24 = hi;
    // 0x0800A080: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x0800A084: bne         $t8, $zero, L_0800A0EC
    if (ctx->r24 != 0) {
        // 0x0800A088: addiu       $a1, $a1, 0xDCC
        ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(20, 0XDCC));
            goto L_0800A0EC;
    }
    // 0x0800A088: addiu       $a1, $a1, 0xDCC
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(20, 0XDCC));
    // 0x0800A08C: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x0800A090: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x0800A094: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x0800A098: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x0800A09C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800A0A0: addiu       $t9, $t9, -0x2218
    ctx->r25 = ADD32(ctx->r25, -0X2218);
    // 0x0800A0A4: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x0800A0A8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x0800A0AC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x0800A0B0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x0800A0B4: jalr        $t9
    // 0x0800A0B8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800A0B8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x0800A0BC: beq         $v0, $zero, L_0800A0EC
    if (ctx->r2 == 0) {
        // 0x0800A0C0: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_0800A0EC;
    }
    // 0x0800A0C0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x0800A0C4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800A0C8: addiu       $t0, $zero, 0x1D
    ctx->r8 = ADD32(0, 0X1D);
    // 0x0800A0CC: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x0800A0D0: sh          $t0, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r8;
    // 0x0800A0D4: jalr        $t9
    // 0x0800A0D8: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800A0D8: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    after_1:
    // 0x0800A0DC: addiu       $t1, $zero, 0x10
    ctx->r9 = ADD32(0, 0X10);
    // 0x0800A0E0: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x0800A0E4: sw          $s1, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->r17;
    // 0x0800A0E8: sw          $t1, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r9;
L_0800A0EC:
    // 0x0800A0EC: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x0800A0F0: lw          $t2, -0x3A38($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X3A38);
    // 0x0800A0F4: lui         $t3, 0x4
    ctx->r11 = S32(0X4 << 16);
    // 0x0800A0F8: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x0800A0FC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x0800A100: lhu         $t3, -0x5232($t3)
    ctx->r11 = MEM_HU(ctx->r11, -0X5232);
    // 0x0800A104: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(20, 0XDCC) << 16);
    // 0x0800A108: addiu       $a1, $a1, 0xDCC
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(20, 0XDCC));
    // 0x0800A10C: div         $zero, $t3, $at
    lo = S32(S64(S32(ctx->r11)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r11)) % S64(S32(ctx->r1)));
    // 0x0800A110: mfhi        $t4
    ctx->r12 = hi;
    // 0x0800A114: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x0800A118: bne         $t4, $at, L_0800A180
    if (ctx->r12 != ctx->r1) {
        // 0x0800A11C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_0800A180;
    }
    // 0x0800A11C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x0800A120: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x0800A124: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x0800A128: lui         $at, 0x425C
    ctx->r1 = S32(0X425C << 16);
    // 0x0800A12C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x0800A130: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800A134: addiu       $t9, $t9, -0x2218
    ctx->r25 = ADD32(ctx->r25, -0X2218);
    // 0x0800A138: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x0800A13C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x0800A140: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x0800A144: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x0800A148: jalr        $t9
    // 0x0800A14C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800A14C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_2:
    // 0x0800A150: beq         $v0, $zero, L_0800A180
    if (ctx->r2 == 0) {
        // 0x0800A154: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_0800A180;
    }
    // 0x0800A154: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x0800A158: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800A15C: addiu       $t5, $zero, 0x1D
    ctx->r13 = ADD32(0, 0X1D);
    // 0x0800A160: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x0800A164: sh          $t5, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r13;
    // 0x0800A168: jalr        $t9
    // 0x0800A16C: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800A16C: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    after_3:
    // 0x0800A170: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x0800A174: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x0800A178: sw          $s1, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->r17;
    // 0x0800A17C: sw          $t6, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r14;
L_0800A180:
    // 0x0800A180: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x0800A184: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x0800A188: lui         $t8, 0x4
    ctx->r24 = S32(0X4 << 16);
    // 0x0800A18C: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x0800A190: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x0800A194: lhu         $t8, -0x5232($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X5232);
    // 0x0800A198: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(20, 0XDCC) << 16);
    // 0x0800A19C: addiu       $a1, $a1, 0xDCC
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(20, 0XDCC));
    // 0x0800A1A0: div         $zero, $t8, $at
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r1)));
    // 0x0800A1A4: mfhi        $t0
    ctx->r8 = hi;
    // 0x0800A1A8: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x0800A1AC: bne         $t0, $at, L_0800A214
    if (ctx->r8 != ctx->r1) {
        // 0x0800A1B0: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_0800A214;
    }
    // 0x0800A1B0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x0800A1B4: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x0800A1B8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x0800A1BC: lui         $at, 0x4268
    ctx->r1 = S32(0X4268 << 16);
    // 0x0800A1C0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x0800A1C4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800A1C8: addiu       $t9, $t9, -0x2218
    ctx->r25 = ADD32(ctx->r25, -0X2218);
    // 0x0800A1CC: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x0800A1D0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x0800A1D4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x0800A1D8: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x0800A1DC: jalr        $t9
    // 0x0800A1E0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x0800A1E0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_4:
    // 0x0800A1E4: beq         $v0, $zero, L_0800A214
    if (ctx->r2 == 0) {
        // 0x0800A1E8: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_0800A214;
    }
    // 0x0800A1E8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x0800A1EC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800A1F0: addiu       $t1, $zero, 0x1D
    ctx->r9 = ADD32(0, 0X1D);
    // 0x0800A1F4: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x0800A1F8: sh          $t1, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r9;
    // 0x0800A1FC: jalr        $t9
    // 0x0800A200: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x0800A200: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    after_5:
    // 0x0800A204: addiu       $t2, $zero, 0x40
    ctx->r10 = ADD32(0, 0X40);
    // 0x0800A208: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x0800A20C: sw          $s1, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->r17;
    // 0x0800A210: sw          $t2, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r10;
L_0800A214:
    // 0x0800A214: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x0800A218: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x0800A21C: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x0800A220: jr          $ra
    // 0x0800A224: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x0800A224: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_080077A4_6BAA44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080077A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080077A8: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080077AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080077B0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080077B4: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x080077B8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080077BC: jalr        $t9
    // 0x080077C0: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080077C0: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_0:
    // 0x080077C4: beq         $v0, $zero, L_080077E8
    if (ctx->r2 == 0) {
        // 0x080077C8: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_080077E8;
    }
    // 0x080077C8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x080077CC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080077D0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080077D4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X79B0) << 16);
    // 0x080077D8: jalr        $t9
    // 0x080077DC: addiu       $a0, $a0, 0x79B0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X79B0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080077DC: addiu       $a0, $a0, 0x79B0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X79B0));
    after_1:
    // 0x080077E0: b           L_08007810
    // 0x080077E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08007810;
    // 0x080077E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080077E8:
    // 0x080077E8: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x080077EC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080077F0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080077F4: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x080077F8: bne         $v0, $zero, L_0800780C
    if (ctx->r2 != 0) {
        // 0x080077FC: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_0800780C;
    }
    // 0x080077FC: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08007800: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X781C) << 16);
    // 0x08007804: jalr        $t9
    // 0x08007808: addiu       $a0, $a0, 0x781C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X781C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08007808: addiu       $a0, $a0, 0x781C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X781C));
    after_2:
L_0800780C:
    // 0x0800780C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08007810:
    // 0x08007810: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08007814: jr          $ra
    // 0x08007818: nop

    TRACE_RETURN()
    return;
    // 0x08007818: nop

;}
RECOMP_FUNC void func_08001B38_6B4DD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001B38: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001B3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001B40: lwc1        $f4, 0x1C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x08001B44: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC360) << 16);
    // 0x08001B48: ldc1        $f0, -0x3CA0($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(20, 0XC360));
    // 0x08001B4C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08001B50: lwc1        $f16, 0x20($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X20);
    // 0x08001B54: add.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = ctx->f6.d + ctx->f0.d;
    // 0x08001B58: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC368) << 16);
    // 0x08001B5C: ldc1        $f2, -0x3C98($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(20, 0XC368));
    // 0x08001B60: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x08001B64: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08001B68: lwc1        $f8, 0x24($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X24);
    // 0x08001B6C: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x08001B70: sub.d       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = ctx->f18.d - ctx->f2.d;
    // 0x08001B74: swc1        $f10, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f10.u32l;
    // 0x08001B78: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x08001B7C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x08001B80: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08001B84: lwc1        $f4, 0xC($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0XC);
    // 0x08001B88: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x08001B8C: add.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = ctx->f10.d + ctx->f0.d;
    // 0x08001B90: swc1        $f6, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f6.u32l;
    // 0x08001B94: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC370) << 16);
    // 0x08001B98: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08001B9C: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08001BA0: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x08001BA4: swc1        $f18, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f18.u32l;
    // 0x08001BA8: lwc1        $f18, 0x1C($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x08001BAC: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x08001BB0: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x08001BB4: swc1        $f16, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f16.u32l;
    // 0x08001BB8: c.le.d      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.d <= ctx->f4.d;
    // 0x08001BBC: nop

    // 0x08001BC0: bc1fl       L_08001BE8
    if (!c1cs) {
        // 0x08001BC4: lwc1        $f6, 0x20($a1)
        ctx->f6.u32l = MEM_W(ctx->r5, 0X20);
            goto L_08001BE8;
    }
    goto skip_0;
    // 0x08001BC4: lwc1        $f6, 0x20($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X20);
    skip_0:
    // 0x08001BC8: lwc1        $f0, -0x3C90($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(20, 0XC370));
    // 0x08001BCC: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x08001BD0: swc1        $f0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f0.u32l;
    // 0x08001BD4: swc1        $f0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f0.u32l;
    // 0x08001BD8: lw          $t6, 0xE8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XE8);
    // 0x08001BDC: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x08001BE0: sw          $t7, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->r15;
    // 0x08001BE4: lwc1        $f6, 0x20($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X20);
L_08001BE8:
    // 0x08001BE8: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC374) << 16);
    // 0x08001BEC: lwc1        $f0, -0x3C8C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(20, 0XC374));
    // 0x08001BF0: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x08001BF4: c.le.d      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.d <= ctx->f2.d;
    // 0x08001BF8: nop

    // 0x08001BFC: bc1fl       L_08001C0C
    if (!c1cs) {
        // 0x08001C00: lbu         $t8, 0xEF($a0)
        ctx->r24 = MEM_BU(ctx->r4, 0XEF);
            goto L_08001C0C;
    }
    goto skip_1;
    // 0x08001C00: lbu         $t8, 0xEF($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0XEF);
    skip_1:
    // 0x08001C04: swc1        $f0, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f0.u32l;
    // 0x08001C08: lbu         $t8, 0xEF($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0XEF);
L_08001C0C:
    // 0x08001C0C: lhu         $t9, 0x16($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0X16);
    // 0x08001C10: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x08001C14: andi        $t1, $t0, 0x3FF
    ctx->r9 = ctx->r8 & 0X3FF;
    // 0x08001C18: sh          $t1, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r9;
    // 0x08001C1C: lbu         $t2, 0xEF($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0XEF);
    // 0x08001C20: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001C24: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001C28: addiu       $t3, $t2, -0x2
    ctx->r11 = ADD32(ctx->r10, -0X2);
    // 0x08001C2C: andi        $t4, $t3, 0xFF
    ctx->r12 = ctx->r11 & 0XFF;
    // 0x08001C30: slti        $at, $t4, 0x4
    ctx->r1 = SIGNED(ctx->r12) < 0X4 ? 1 : 0;
    // 0x08001C34: beq         $at, $zero, L_08001C48
    if (ctx->r1 == 0) {
        // 0x08001C38: sb          $t3, 0xEF($a0)
        MEM_B(0XEF, ctx->r4) = ctx->r11;
            goto L_08001C48;
    }
    // 0x08001C38: sb          $t3, 0xEF($a0)
    MEM_B(0XEF, ctx->r4) = ctx->r11;
    // 0x08001C3C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X1C58) << 16);
    // 0x08001C40: jalr        $t9
    // 0x08001C44: addiu       $a0, $a0, 0x1C58
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X1C58));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001C44: addiu       $a0, $a0, 0x1C58
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X1C58));
    after_0:
L_08001C48:
    // 0x08001C48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001C4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001C50: jr          $ra
    // 0x08001C54: nop

    TRACE_RETURN()
    return;
    // 0x08001C54: nop

;}
RECOMP_FUNC void func_08005E3C_6B90DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08005E3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08005E40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08005E44: lwc1        $f4, 0xD0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XD0);
    // 0x08005E48: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x08005E4C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x08005E50: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x08005E54: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08005E58: addiu       $t1, $zero, 0x100
    ctx->r9 = ADD32(0, 0X100);
    // 0x08005E5C: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x08005E60: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x08005E64: swc1        $f16, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = ctx->f16.u32l;
    // 0x08005E68: lwc1        $f18, 0xD0($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0XD0);
    // 0x08005E6C: lhu         $t6, 0x14($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X14);
    // 0x08005E70: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X5EB8) << 16);
    // 0x08005E74: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x08005E78: addiu       $a0, $a0, 0x5EB8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X5EB8));
    // 0x08005E7C: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x08005E80: nop

    // 0x08005E84: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x08005E88: andi        $t0, $t9, 0xFFFF
    ctx->r8 = ctx->r25 & 0XFFFF;
    // 0x08005E8C: slti        $at, $t0, 0x101
    ctx->r1 = SIGNED(ctx->r8) < 0X101 ? 1 : 0;
    // 0x08005E90: bne         $at, $zero, L_08005EA8
    if (ctx->r1 != 0) {
        // 0x08005E94: sh          $t9, 0x14($a1)
        MEM_H(0X14, ctx->r5) = ctx->r25;
            goto L_08005EA8;
    }
    // 0x08005E94: sh          $t9, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r25;
    // 0x08005E98: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08005E9C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08005EA0: jalr        $t9
    // 0x08005EA4: sh          $t1, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08005EA4: sh          $t1, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r9;
    after_0:
L_08005EA8:
    // 0x08005EA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08005EAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08005EB0: jr          $ra
    // 0x08005EB4: nop

    TRACE_RETURN()
    return;
    // 0x08005EB4: nop

;}
RECOMP_FUNC void func_08007A64_6BAD04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08007A64: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08007A68: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x08007A6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08007A70: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08007A74: addiu       $v0, $v0, -0x7468
    ctx->r2 = ADD32(ctx->r2, -0X7468);
    // 0x08007A78: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08007A7C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x08007A80: jalr        $v0
    // 0x08007A84: ori         $a0, $zero, 0x8203
    ctx->r4 = 0 | 0X8203;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x08007A84: ori         $a0, $zero, 0x8203
    ctx->r4 = 0 | 0X8203;
    after_0:
    // 0x08007A88: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x08007A8C: addiu       $a0, $zero, 0x251
    ctx->r4 = ADD32(0, 0X251);
    // 0x08007A90: jalr        $v0
    // 0x08007A94: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x08007A94: nop

    after_1:
    // 0x08007A98: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08007A9C: addiu       $t9, $t9, 0x3E40
    ctx->r25 = ADD32(ctx->r25, 0X3E40);
    // 0x08007AA0: jalr        $t9
    // 0x08007AA4: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08007AA4: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_2:
    // 0x08007AA8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08007AAC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08007AB0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X7ACC) << 16);
    // 0x08007AB4: jalr        $t9
    // 0x08007AB8: addiu       $a0, $a0, 0x7ACC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X7ACC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08007AB8: addiu       $a0, $a0, 0x7ACC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X7ACC));
    after_3:
    // 0x08007ABC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08007AC0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08007AC4: jr          $ra
    // 0x08007AC8: nop

    TRACE_RETURN()
    return;
    // 0x08007AC8: nop

;}
RECOMP_FUNC void func_08001F68_6B5208(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001F68: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08001F6C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001F70: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08001F74: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08001F78: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x08001F7C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08001F80: jalr        $t9
    // 0x08001F84: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001F84: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x08001F88: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08001F8C: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x08001F90: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08001F94: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001F98: addiu       $t9, $t9, -0x4678
    ctx->r25 = ADD32(ctx->r25, -0X4678);
    // 0x08001F9C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x08001FA0: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x08001FA4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08001FA8: lui         $a2, 0xC2F0
    ctx->r6 = S32(0XC2F0 << 16);
    // 0x08001FAC: jalr        $t9
    // 0x08001FB0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001FB0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x08001FB4: bne         $v0, $zero, L_08001FD8
    if (ctx->r2 != 0) {
        // 0x08001FB8: addiu       $t6, $zero, 0xA
        ctx->r14 = ADD32(0, 0XA);
            goto L_08001FD8;
    }
    // 0x08001FB8: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x08001FBC: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x08001FC0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001FC4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001FC8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X1FE8) << 16);
    // 0x08001FCC: addiu       $a0, $a0, 0x1FE8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X1FE8));
    // 0x08001FD0: jalr        $t9
    // 0x08001FD4: sh          $t6, 0x8A($t7)
    MEM_H(0X8A, ctx->r15) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001FD4: sh          $t6, 0x8A($t7)
    MEM_H(0X8A, ctx->r15) = ctx->r14;
    after_2:
L_08001FD8:
    // 0x08001FD8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08001FDC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08001FE0: jr          $ra
    // 0x08001FE4: nop

    TRACE_RETURN()
    return;
    // 0x08001FE4: nop

;}
RECOMP_FUNC void func_0800833C_6BB5DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800833C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08008340: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08008344: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08008348: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x0800834C: lui         $v0, 0x8002
    ctx->r2 = S32(0X8002 << 16);
    // 0x08008350: sw          $zero, 0x60($a0)
    MEM_W(0X60, ctx->r4) = 0;
    // 0x08008354: addiu       $v0, $v0, 0x4038
    ctx->r2 = ADD32(ctx->r2, 0X4038);
    // 0x08008358: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x0800835C: jalr        $v0
    // 0x08008360: addiu       $a0, $zero, 0x12B
    ctx->r4 = ADD32(0, 0X12B);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x08008360: addiu       $a0, $zero, 0x12B
    ctx->r4 = ADD32(0, 0X12B);
    after_0:
    // 0x08008364: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x08008368: addiu       $a0, $zero, 0x12E
    ctx->r4 = ADD32(0, 0X12E);
    // 0x0800836C: jalr        $v0
    // 0x08008370: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x08008370: nop

    after_1:
    // 0x08008374: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08008378: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x0800837C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08008380: lui         $a0, 0x801
    ctx->r4 = S32(RELOC_HI16(20, 0X83A0) << 16);
    // 0x08008384: sb          $zero, -0x3A9E($at)
    MEM_B(-0X3A9E, ctx->r1) = 0;
    // 0x08008388: jalr        $t9
    // 0x0800838C: addiu       $a0, $a0, -0x7C60
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X83A0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800838C: addiu       $a0, $a0, -0x7C60
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X83A0));
    after_2:
    // 0x08008390: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08008394: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08008398: jr          $ra
    // 0x0800839C: nop

    TRACE_RETURN()
    return;
    // 0x0800839C: nop

;}
RECOMP_FUNC void func_08002028_6B52C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002028: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800202C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002030: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002034: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08002038: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x0800203C: jalr        $t9
    // 0x08002040: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002040: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x08002044: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002048: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x0800204C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08002050: jalr        $t9
    // 0x08002054: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002054: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_1:
    // 0x08002058: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x0800205C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002060: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002064: lbu         $v0, 0x8D($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X8D);
    // 0x08002068: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X20D8) << 16);
    // 0x0800206C: slti        $at, $v0, 0x9
    ctx->r1 = SIGNED(ctx->r2) < 0X9 ? 1 : 0;
    // 0x08002070: bnel        $at, $zero, L_0800208C
    if (ctx->r1 != 0) {
        // 0x08002074: slti        $at, $v0, 0x5
        ctx->r1 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
            goto L_0800208C;
    }
    goto skip_0;
    // 0x08002074: slti        $at, $v0, 0x5
    ctx->r1 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    skip_0:
    // 0x08002078: jalr        $t9
    // 0x0800207C: addiu       $a0, $a0, 0x20D8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X20D8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800207C: addiu       $a0, $a0, 0x20D8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X20D8));
    after_2:
    // 0x08002080: b           L_080020CC
    // 0x08002084: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_080020CC;
    // 0x08002084: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002088: slti        $at, $v0, 0x5
    ctx->r1 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
L_0800208C:
    // 0x0800208C: bne         $at, $zero, L_080020AC
    if (ctx->r1 != 0) {
        // 0x08002090: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(20, 0X24A0) << 16);
            goto L_080020AC;
    }
    // 0x08002090: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X24A0) << 16);
    // 0x08002094: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002098: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800209C: jalr        $t9
    // 0x080020A0: addiu       $a0, $a0, 0x24A0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X24A0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080020A0: addiu       $a0, $a0, 0x24A0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X24A0));
    after_3:
    // 0x080020A4: b           L_080020CC
    // 0x080020A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_080020CC;
    // 0x080020A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080020AC:
    // 0x080020AC: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x080020B0: bne         $at, $zero, L_080020C8
    if (ctx->r1 != 0) {
        // 0x080020B4: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(20, 0X28A4) << 16);
            goto L_080020C8;
    }
    // 0x080020B4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X28A4) << 16);
    // 0x080020B8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080020BC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080020C0: jalr        $t9
    // 0x080020C4: addiu       $a0, $a0, 0x28A4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X28A4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080020C4: addiu       $a0, $a0, 0x28A4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X28A4));
    after_4:
L_080020C8:
    // 0x080020C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080020CC:
    // 0x080020CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080020D0: jr          $ra
    // 0x080020D4: nop

    TRACE_RETURN()
    return;
    // 0x080020D4: nop

;}
RECOMP_FUNC void func_0800969C_6BC93C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800969C: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x080096A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080096A4: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x080096A8: sw          $a0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r4;
    // 0x080096AC: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x080096B0: lwc1        $f6, 0xE4($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XE4);
    // 0x080096B4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x080096B8: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x080096BC: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x080096C0: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x080096C4: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x080096C8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x080096CC: swc1        $f8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f8.u32l;
    // 0x080096D0: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x080096D4: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    // 0x080096D8: lwc1        $f4, 0xE8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XE8);
    // 0x080096DC: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x080096E0: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x080096E4: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x080096E8: bc1f        L_080096FC
    if (!c1cs) {
        // 0x080096EC: swc1        $f6, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->f6.u32l;
            goto L_080096FC;
    }
    // 0x080096EC: swc1        $f6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f6.u32l;
    // 0x080096F0: sub.s       $f2, $f0, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x080096F4: b           L_08009700
    // 0x080096F8: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_08009700;
    // 0x080096F8: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
L_080096FC:
    // 0x080096FC: sub.s       $f2, $f0, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f12.fl;
L_08009700:
    // 0x08009700: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x08009704: nop

    // 0x08009708: bc1tl       L_08009A40
    if (c1cs) {
        // 0x0800970C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_08009A40;
    }
    goto skip_0;
    // 0x0800970C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x08009710: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x08009714: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x08009718: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x0800971C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x08009720: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08009724: div.s       $f16, $f2, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = DIV_S(ctx->f2.fl, ctx->f8.fl);
    // 0x08009728: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x0800972C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x08009730: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08009734: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x08009738: mul.s       $f10, $f16, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x0800973C: nop

    // 0x08009740: mul.s       $f0, $f10, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x08009744: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x08009748: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x0800974C: bc1f        L_08009758
    if (!c1cs) {
        // 0x08009750: nop
    
            goto L_08009758;
    }
    // 0x08009750: nop

    // 0x08009754: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
L_08009758:
    // 0x08009758: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
    // 0x0800975C: nop

    // 0x08009760: bc1fl       L_08009770
    if (!c1cs) {
        // 0x08009764: cfc1        $t6, $FpcCsr
        ctx->r14 = get_cop1_cs();
            goto L_08009770;
    }
    goto skip_1;
    // 0x08009764: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    skip_1:
    // 0x08009768: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x0800976C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
L_08009770:
    // 0x08009770: ctc1        $v1, $FpcCsr
    set_cop1_cs(ctx->r3);
    // 0x08009774: nop

    // 0x08009778: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x0800977C: cfc1        $v1, $FpcCsr
    ctx->r3 = get_cop1_cs();
    // 0x08009780: nop

    // 0x08009784: andi        $v1, $v1, 0x78
    ctx->r3 = ctx->r3 & 0X78;
    // 0x08009788: beql        $v1, $zero, L_080097D8
    if (ctx->r3 == 0) {
        // 0x0800978C: mfc1        $v1, $f8
        ctx->r3 = (int32_t)ctx->f8.u32l;
            goto L_080097D8;
    }
    goto skip_2;
    // 0x0800978C: mfc1        $v1, $f8
    ctx->r3 = (int32_t)ctx->f8.u32l;
    skip_2:
    // 0x08009790: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08009794: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x08009798: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x0800979C: ctc1        $v1, $FpcCsr
    set_cop1_cs(ctx->r3);
    // 0x080097A0: nop

    // 0x080097A4: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x080097A8: cfc1        $v1, $FpcCsr
    ctx->r3 = get_cop1_cs();
    // 0x080097AC: nop

    // 0x080097B0: andi        $v1, $v1, 0x78
    ctx->r3 = ctx->r3 & 0X78;
    // 0x080097B4: bne         $v1, $zero, L_080097CC
    if (ctx->r3 != 0) {
        // 0x080097B8: nop
    
            goto L_080097CC;
    }
    // 0x080097B8: nop

    // 0x080097BC: mfc1        $v1, $f8
    ctx->r3 = (int32_t)ctx->f8.u32l;
    // 0x080097C0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x080097C4: b           L_080097E4
    // 0x080097C8: or          $v1, $v1, $at
    ctx->r3 = ctx->r3 | ctx->r1;
        goto L_080097E4;
    // 0x080097C8: or          $v1, $v1, $at
    ctx->r3 = ctx->r3 | ctx->r1;
L_080097CC:
    // 0x080097CC: b           L_080097E4
    // 0x080097D0: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
        goto L_080097E4;
    // 0x080097D0: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x080097D4: mfc1        $v1, $f8
    ctx->r3 = (int32_t)ctx->f8.u32l;
L_080097D8:
    // 0x080097D8: nop

    // 0x080097DC: bltz        $v1, L_080097CC
    if (SIGNED(ctx->r3) < 0) {
        // 0x080097E0: nop
    
            goto L_080097CC;
    }
    // 0x080097E0: nop

L_080097E4:
    // 0x080097E4: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x080097E8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x080097EC: andi        $t7, $v1, 0xFFFF
    ctx->r15 = ctx->r3 & 0XFFFF;
    // 0x080097F0: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
    // 0x080097F4: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x080097F8: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x080097FC: nop

    // 0x08009800: cvt.w.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    ctx->f10.u32l = CVT_W_S(ctx->f2.fl);
    // 0x08009804: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x08009808: nop

    // 0x0800980C: andi        $at, $t9, 0x4
    ctx->r1 = ctx->r25 & 0X4;
    // 0x08009810: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x08009814: beql        $t9, $zero, L_0800986C
    if (ctx->r25 == 0) {
        // 0x08009818: mfc1        $t9, $f10
        ctx->r25 = (int32_t)ctx->f10.u32l;
            goto L_0800986C;
    }
    goto skip_3;
    // 0x08009818: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    skip_3:
    // 0x0800981C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x08009820: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08009824: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x08009828: sub.s       $f10, $f2, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f10.fl;
    // 0x0800982C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x08009830: nop

    // 0x08009834: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x08009838: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x0800983C: nop

    // 0x08009840: andi        $at, $t9, 0x4
    ctx->r1 = ctx->r25 & 0X4;
    // 0x08009844: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x08009848: bne         $t9, $zero, L_08009860
    if (ctx->r25 != 0) {
        // 0x0800984C: nop
    
            goto L_08009860;
    }
    // 0x0800984C: nop

    // 0x08009850: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x08009854: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08009858: b           L_08009878
    // 0x0800985C: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_08009878;
    // 0x0800985C: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_08009860:
    // 0x08009860: b           L_08009878
    // 0x08009864: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_08009878;
    // 0x08009864: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x08009868: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
L_0800986C:
    // 0x0800986C: nop

    // 0x08009870: bltz        $t9, L_08009860
    if (SIGNED(ctx->r25) < 0) {
        // 0x08009874: nop
    
            goto L_08009860;
    }
    // 0x08009874: nop

L_08009878:
    // 0x08009878: andi        $t0, $t9, 0xFFFF
    ctx->r8 = ctx->r25 & 0XFFFF;
    // 0x0800987C: div         $zero, $t0, $v1
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r3)));
    // 0x08009880: mfhi        $t1
    ctx->r9 = hi;
    // 0x08009884: sll         $t2, $t1, 10
    ctx->r10 = S32(ctx->r9 << 10);
    // 0x08009888: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x0800988C: div         $zero, $t2, $v1
    lo = S32(S64(S32(ctx->r10)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r10)) % S64(S32(ctx->r3)));
    // 0x08009890: mflo        $t3
    ctx->r11 = lo;
    // 0x08009894: andi        $t4, $t3, 0x3FF
    ctx->r12 = ctx->r11 & 0X3FF;
    // 0x08009898: addiu       $t9, $t9, 0x3EA0
    ctx->r25 = ADD32(ctx->r25, 0X3EA0);
    // 0x0800989C: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x080098A0: bne         $v1, $zero, L_080098AC
    if (ctx->r3 != 0) {
        // 0x080098A4: nop
    
            goto L_080098AC;
    }
    // 0x080098A4: nop

    // 0x080098A8: break       7
    do_break(134256808);
L_080098AC:
    // 0x080098AC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x080098B0: bne         $v1, $at, L_080098C4
    if (ctx->r3 != ctx->r1) {
        // 0x080098B4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_080098C4;
    }
    // 0x080098B4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x080098B8: bne         $t0, $at, L_080098C4
    if (ctx->r8 != ctx->r1) {
        // 0x080098BC: nop
    
            goto L_080098C4;
    }
    // 0x080098BC: nop

    // 0x080098C0: break       6
    do_break(134256832);
L_080098C4:
    // 0x080098C4: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x080098C8: bne         $v1, $zero, L_080098D4
    if (ctx->r3 != 0) {
        // 0x080098CC: nop
    
            goto L_080098D4;
    }
    // 0x080098CC: nop

    // 0x080098D0: break       7
    do_break(134256848);
L_080098D4:
    // 0x080098D4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x080098D8: bne         $v1, $at, L_080098EC
    if (ctx->r3 != ctx->r1) {
        // 0x080098DC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_080098EC;
    }
    // 0x080098DC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x080098E0: bne         $t2, $at, L_080098EC
    if (ctx->r10 != ctx->r1) {
        // 0x080098E4: nop
    
            goto L_080098EC;
    }
    // 0x080098E4: nop

    // 0x080098E8: break       6
    do_break(134256872);
L_080098EC:
    // 0x080098EC: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x080098F0: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x080098F4: sw          $a1, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r5;
    // 0x080098F8: swc1        $f12, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f12.u32l;
    // 0x080098FC: jalr        $t9
    // 0x08009900: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08009900: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x08009904: lwc1        $f12, 0x58($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X58);
    // 0x08009908: lw          $a1, 0x78($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X78);
    // 0x0800990C: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08009910: mul.s       $f4, $f0, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x08009914: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08009918: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x0800991C: jalr        $t9
    // 0x08009920: swc1        $f4, 0xE4($a1)
    MEM_W(0XE4, ctx->r5) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08009920: swc1        $f4, 0xE4($a1)
    MEM_W(0XE4, ctx->r5) = ctx->f4.u32l;
    after_1:
    // 0x08009924: lwc1        $f12, 0x58($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X58);
    // 0x08009928: lw          $a1, 0x78($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X78);
    // 0x0800992C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08009930: mul.s       $f2, $f0, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x08009934: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08009938: lwc1        $f6, 0x78($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X78);
    // 0x0800993C: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x08009940: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x08009944: lwc1        $f8, 0xE4($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0XE4);
    // 0x08009948: swc1        $f2, 0xE8($a1)
    MEM_W(0XE8, ctx->r5) = ctx->f2.u32l;
    // 0x0800994C: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x08009950: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x08009954: lwc1        $f10, 0x7C($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X7C);
    // 0x08009958: add.s       $f14, $f8, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x0800995C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08009960: nop

    // 0x08009964: mul.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x08009968: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x0800996C: lwc1        $f8, 0x80($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X80);
    // 0x08009970: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x08009974: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08009978: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC420) << 16);
    // 0x0800997C: mul.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x08009980: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x08009984: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x08009988: sub.s       $f8, $f14, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f14.fl - ctx->f4.fl;
    // 0x0800998C: add.s       $f18, $f2, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f2.fl + ctx->f6.fl;
    // 0x08009990: swc1        $f8, 0xD8($a1)
    MEM_W(0XD8, ctx->r5) = ctx->f8.u32l;
    // 0x08009994: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x08009998: sub.s       $f6, $f16, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f10.fl;
    // 0x0800999C: swc1        $f6, 0xDC($a1)
    MEM_W(0XDC, ctx->r5) = ctx->f6.u32l;
    // 0x080099A0: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x080099A4: lwc1        $f6, 0xD8($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0XD8);
    // 0x080099A8: sub.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x080099AC: swc1        $f8, 0xE0($a1)
    MEM_W(0XE0, ctx->r5) = ctx->f8.u32l;
    // 0x080099B0: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x080099B4: lwc1        $f2, -0x3BE0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(20, 0XC420));
    // 0x080099B8: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x080099BC: add.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x080099C0: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x080099C4: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x080099C8: lwc1        $f10, 0xDC($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0XDC);
    // 0x080099CC: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x080099D0: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x080099D4: swc1        $f6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f6.u32l;
    // 0x080099D8: lwc1        $f8, 0xE0($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0XE0);
    // 0x080099DC: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x080099E0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080099E4: swc1        $f10, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f10.u32l;
    // 0x080099E8: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x080099EC: mul.s       $f4, $f6, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x080099F0: nop

    // 0x080099F4: mul.s       $f0, $f4, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x080099F8: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x080099FC: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x08009A00: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x08009A04: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x08009A08: bc1f        L_08009A1C
    if (!c1cs) {
        // 0x08009A0C: nop
    
            goto L_08009A1C;
    }
    // 0x08009A0C: nop

    // 0x08009A10: swc1        $f2, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f2.u32l;
    // 0x08009A14: swc1        $f2, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f2.u32l;
    // 0x08009A18: swc1        $f2, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f2.u32l;
L_08009A1C:
    // 0x08009A1C: lwc1        $f10, 0x1C($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x08009A20: c.lt.s      $f10, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f10.fl < ctx->f20.fl;
    // 0x08009A24: nop

    // 0x08009A28: bc1fl       L_08009A40
    if (!c1cs) {
        // 0x08009A2C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_08009A40;
    }
    goto skip_4;
    // 0x08009A2C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_4:
    // 0x08009A30: swc1        $f20, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f20.u32l;
    // 0x08009A34: swc1        $f20, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f20.u32l;
    // 0x08009A38: swc1        $f20, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f20.u32l;
    // 0x08009A3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08009A40:
    // 0x08009A40: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x08009A44: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x08009A48: jr          $ra
    // 0x08009A4C: nop

    TRACE_RETURN()
    return;
    // 0x08009A4C: nop

;}
RECOMP_FUNC void func_080068B8_6B9B58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080068B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080068BC: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC3F8) << 16);
    // 0x080068C0: lwc1        $f0, -0x3C08($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(20, 0XC3F8));
    // 0x080068C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080068C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080068CC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080068D0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080068D4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X68FC) << 16);
    // 0x080068D8: addiu       $a0, $a0, 0x68FC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X68FC));
    // 0x080068DC: swc1        $f0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f0.u32l;
    // 0x080068E0: swc1        $f0, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f0.u32l;
    // 0x080068E4: jalr        $t9
    // 0x080068E8: swc1        $f0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080068E8: swc1        $f0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f0.u32l;
    after_0:
    // 0x080068EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080068F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080068F4: jr          $ra
    // 0x080068F8: nop

    TRACE_RETURN()
    return;
    // 0x080068F8: nop

;}
RECOMP_FUNC void func_08007724_6BA9C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08007724: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08007728: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800772C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08007730: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08007734: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x08007738: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x0800773C: jalr        $t9
    // 0x08007740: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08007740: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_0:
    // 0x08007744: beq         $v0, $zero, L_08007768
    if (ctx->r2 == 0) {
        // 0x08007748: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_08007768;
    }
    // 0x08007748: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800774C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08007750: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08007754: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X79B0) << 16);
    // 0x08007758: jalr        $t9
    // 0x0800775C: addiu       $a0, $a0, 0x79B0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X79B0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800775C: addiu       $a0, $a0, 0x79B0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X79B0));
    after_1:
    // 0x08007760: b           L_08007798
    // 0x08007764: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08007798;
    // 0x08007764: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08007768:
    // 0x08007768: addiu       $t9, $t9, 0x3E40
    ctx->r25 = ADD32(ctx->r25, 0X3E40);
    // 0x0800776C: jalr        $t9
    // 0x08007770: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08007770: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_2:
    // 0x08007774: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x08007778: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800777C: addiu       $t6, $zero, 0x3C
    ctx->r14 = ADD32(0, 0X3C);
    // 0x08007780: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08007784: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X77A4) << 16);
    // 0x08007788: addiu       $a0, $a0, 0x77A4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X77A4));
    // 0x0800778C: jalr        $t9
    // 0x08007790: sh          $t6, 0x8A($t7)
    MEM_H(0X8A, ctx->r15) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08007790: sh          $t6, 0x8A($t7)
    MEM_H(0X8A, ctx->r15) = ctx->r14;
    after_3:
    // 0x08007794: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08007798:
    // 0x08007798: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800779C: jr          $ra
    // 0x080077A0: nop

    TRACE_RETURN()
    return;
    // 0x080077A0: nop

;}
RECOMP_FUNC void func_08002F50_6B61F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002F50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002F54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002F58: lbu         $t6, 0x7C($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X7C);
    // 0x08002F5C: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x08002F60: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x08002F64: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x08002F68: beq         $t7, $zero, L_08002F94
    if (ctx->r15 == 0) {
        // 0x08002F6C: addiu       $a1, $zero, 0x3
        ctx->r5 = ADD32(0, 0X3);
            goto L_08002F94;
    }
    // 0x08002F6C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x08002F70: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002F74: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08002F78: jalr        $t9
    // 0x08002F7C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002F7C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08002F80: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002F84: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002F88: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X2FA4) << 16);
    // 0x08002F8C: jalr        $t9
    // 0x08002F90: addiu       $a0, $a0, 0x2FA4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X2FA4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002F90: addiu       $a0, $a0, 0x2FA4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X2FA4));
    after_1:
L_08002F94:
    // 0x08002F94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002F98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002F9C: jr          $ra
    // 0x08002FA0: nop

    TRACE_RETURN()
    return;
    // 0x08002FA0: nop

;}
RECOMP_FUNC void func_08003044_6C2794(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003044: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08003048: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x0800304C: lw          $t6, -0x39D8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39D8);
    // 0x08003050: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003054: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x08003058: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x0800305C: lw          $t7, 0x2C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X2C);
    // 0x08003060: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x08003064: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x08003068: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800306C: addiu       $t9, $t9, 0x1F70
    ctx->r25 = ADD32(ctx->r25, 0X1F70);
    // 0x08003070: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x08003074: jalr        $t9
    // 0x08003078: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003078: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    after_0:
    // 0x0800307C: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x08003080: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08003084: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x08003088: addiu       $v0, $v0, 0xD0
    ctx->r2 = ADD32(ctx->r2, 0XD0);
    // 0x0800308C: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x08003090: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x08003094: lui         $a1, 0xC2C8
    ctx->r5 = S32(0XC2C8 << 16);
    // 0x08003098: lui         $a2, 0xC23C
    ctx->r6 = S32(0XC23C << 16);
    // 0x0800309C: jalr        $t9
    // 0x080030A0: lui         $a3, 0xC286
    ctx->r7 = S32(0XC286 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080030A0: lui         $a3, 0xC286
    ctx->r7 = S32(0XC286 << 16);
    after_1:
    // 0x080030A4: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x080030A8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080030AC: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x080030B0: lui         $a1, 0xC2B0
    ctx->r5 = S32(0XC2B0 << 16);
    // 0x080030B4: lui         $a2, 0xC2A4
    ctx->r6 = S32(0XC2A4 << 16);
    // 0x080030B8: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    // 0x080030BC: jalr        $t9
    // 0x080030C0: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080030C0: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    after_2:
    // 0x080030C4: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x080030C8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080030CC: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x080030D0: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x080030D4: jalr        $t9
    // 0x080030D8: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080030D8: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    after_3:
    // 0x080030DC: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080030E0: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x080030E4: jalr        $t9
    // 0x080030E8: addiu       $a0, $zero, 0xD6
    ctx->r4 = ADD32(0, 0XD6);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080030E8: addiu       $a0, $zero, 0xD6
    ctx->r4 = ADD32(0, 0XD6);
    after_4:
    // 0x080030EC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080030F0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080030F4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X3110) << 16);
    // 0x080030F8: jalr        $t9
    // 0x080030FC: addiu       $a0, $a0, 0x3110
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X3110));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080030FC: addiu       $a0, $a0, 0x3110
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X3110));
    after_5:
    // 0x08003100: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08003104: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08003108: jr          $ra
    // 0x0800310C: nop

    TRACE_RETURN()
    return;
    // 0x0800310C: nop

;}
RECOMP_FUNC void func_08004AB4_6C4204(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004AB4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08004AB8: lhu         $t6, 0x14($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X14);
    // 0x08004ABC: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(21, 0X8A24) << 16);
    // 0x08004AC0: lwc1        $f0, -0x75DC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(21, 0X8A24));
    // 0x08004AC4: addiu       $t7, $t6, 0x20
    ctx->r15 = ADD32(ctx->r14, 0X20);
    // 0x08004AC8: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x08004ACC: sh          $t8, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r24;
    // 0x08004AD0: swc1        $f0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f0.u32l;
    // 0x08004AD4: swc1        $f0, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f0.u32l;
    // 0x08004AD8: jr          $ra
    // 0x08004ADC: swc1        $f0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f0.u32l;
    TRACE_RETURN()
    return;
    // 0x08004ADC: swc1        $f0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_08002428_6C1B78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002428: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800242C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002430: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002434: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002438: addiu       $t9, $t9, 0x168
    ctx->r25 = ADD32(ctx->r25, 0X168);
    // 0x0800243C: jalr        $t9
    // 0x08002440: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002440: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    after_0:
    // 0x08002444: bne         $v0, $zero, L_08002464
    if (ctx->r2 != 0) {
        // 0x08002448: lui         $at, 0x8016
        ctx->r1 = S32(0X8016 << 16);
            goto L_08002464;
    }
    // 0x08002448: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x0800244C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002450: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002454: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X2474) << 16);
    // 0x08002458: sb          $zero, -0x3A9E($at)
    MEM_B(-0X3A9E, ctx->r1) = 0;
    // 0x0800245C: jalr        $t9
    // 0x08002460: addiu       $a0, $a0, 0x2474
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X2474));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002460: addiu       $a0, $a0, 0x2474
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X2474));
    after_1:
L_08002464:
    // 0x08002464: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002468: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800246C: jr          $ra
    // 0x08002470: nop

    TRACE_RETURN()
    return;
    // 0x08002470: nop

;}
RECOMP_FUNC void func_080076F4_6C6E44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080076F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080076F8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080076FC: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08007700: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08007704: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08007708: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x0800770C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08007710: jalr        $t9
    // 0x08007714: addiu       $a0, $zero, 0x1A5
    ctx->r4 = ADD32(0, 0X1A5);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08007714: addiu       $a0, $zero, 0x1A5
    ctx->r4 = ADD32(0, 0X1A5);
    after_0:
    // 0x08007718: beq         $v0, $zero, L_08007730
    if (ctx->r2 == 0) {
        // 0x0800771C: lui         $t8, 0x20
        ctx->r24 = S32(0X20 << 16);
            goto L_08007730;
    }
    // 0x0800771C: lui         $t8, 0x20
    ctx->r24 = S32(0X20 << 16);
    // 0x08007720: lw          $t6, 0x68($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X68);
    // 0x08007724: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x08007728: b           L_080077B4
    // 0x0800772C: sw          $t7, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r15;
        goto L_080077B4;
    // 0x0800772C: sw          $t7, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r15;
L_08007730:
    // 0x08007730: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08007734: ori         $t8, $t8, 0x6E1
    ctx->r24 = ctx->r24 | 0X6E1;
    // 0x08007738: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x0800773C: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x08007740: sw          $t8, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r24;
    // 0x08007744: sb          $t0, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r8;
    // 0x08007748: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800774C: jalr        $t9
    // 0x08007750: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08007750: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x08007754: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08007758: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x0800775C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08007760: addiu       $a1, $zero, 0x1F4
    ctx->r5 = ADD32(0, 0X1F4);
    // 0x08007764: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    // 0x08007768: jalr        $t9
    // 0x0800776C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800776C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x08007770: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08007774: addiu       $t9, $t9, -0x7FB4
    ctx->r25 = ADD32(ctx->r25, -0X7FB4);
    // 0x08007778: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800777C: jalr        $t9
    // 0x08007780: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08007780: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x08007784: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(21, 0X8AB8) << 16);
    // 0x08007788: lwc1        $f0, -0x7548($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(21, 0X8AB8));
    // 0x0800778C: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x08007790: sw          $v0, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->r2;
    // 0x08007794: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08007798: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800779C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X77C8) << 16);
    // 0x080077A0: addiu       $a0, $a0, 0x77C8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X77C8));
    // 0x080077A4: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    // 0x080077A8: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x080077AC: jalr        $t9
    // 0x080077B0: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080077B0: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    after_4:
L_080077B4:
    // 0x080077B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080077B8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080077BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080077C0: jr          $ra
    // 0x080077C4: nop

    TRACE_RETURN()
    return;
    // 0x080077C4: nop

;}
RECOMP_FUNC void func_08007508_6C6C58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08007508: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0800750C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08007510: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08007514: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08007518: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0800751C: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08007520: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08007524: jalr        $t9
    // 0x08007528: addiu       $a0, $zero, 0x1A4
    ctx->r4 = ADD32(0, 0X1A4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08007528: addiu       $a0, $zero, 0x1A4
    ctx->r4 = ADD32(0, 0X1A4);
    after_0:
    // 0x0800752C: beq         $v0, $zero, L_08007544
    if (ctx->r2 == 0) {
        // 0x08007530: lui         $t8, 0x20
        ctx->r24 = S32(0X20 << 16);
            goto L_08007544;
    }
    // 0x08007530: lui         $t8, 0x20
    ctx->r24 = S32(0X20 << 16);
    // 0x08007534: lw          $t6, 0x68($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X68);
    // 0x08007538: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x0800753C: b           L_080075C8
    // 0x08007540: sw          $t7, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r15;
        goto L_080075C8;
    // 0x08007540: sw          $t7, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r15;
L_08007544:
    // 0x08007544: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08007548: ori         $t8, $t8, 0x6E1
    ctx->r24 = ctx->r24 | 0X6E1;
    // 0x0800754C: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x08007550: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x08007554: sw          $t8, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r24;
    // 0x08007558: sb          $t0, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r8;
    // 0x0800755C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08007560: jalr        $t9
    // 0x08007564: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08007564: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x08007568: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800756C: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08007570: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08007574: addiu       $a1, $zero, 0x1F4
    ctx->r5 = ADD32(0, 0X1F4);
    // 0x08007578: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    // 0x0800757C: jalr        $t9
    // 0x08007580: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08007580: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x08007584: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08007588: addiu       $t9, $t9, -0x7FB4
    ctx->r25 = ADD32(ctx->r25, -0X7FB4);
    // 0x0800758C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08007590: jalr        $t9
    // 0x08007594: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08007594: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x08007598: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(21, 0X8AB4) << 16);
    // 0x0800759C: lwc1        $f0, -0x754C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(21, 0X8AB4));
    // 0x080075A0: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x080075A4: sw          $v0, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->r2;
    // 0x080075A8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080075AC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080075B0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X75DC) << 16);
    // 0x080075B4: addiu       $a0, $a0, 0x75DC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X75DC));
    // 0x080075B8: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    // 0x080075BC: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x080075C0: jalr        $t9
    // 0x080075C4: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080075C4: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    after_4:
L_080075C8:
    // 0x080075C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080075CC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080075D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080075D4: jr          $ra
    // 0x080075D8: nop

    TRACE_RETURN()
    return;
    // 0x080075D8: nop

;}
RECOMP_FUNC void func_080016D8_6C0E28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080016D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080016DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080016E0: lui         $t7, 0x20
    ctx->r15 = S32(0X20 << 16);
    // 0x080016E4: addiu       $t6, $zero, 0x1B9
    ctx->r14 = ADD32(0, 0X1B9);
    // 0x080016E8: ori         $t7, $t7, 0x6E1
    ctx->r15 = ctx->r15 | 0X6E1;
    // 0x080016EC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080016F0: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x080016F4: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x080016F8: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x080016FC: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x08001700: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x08001704: jalr        $t9
    // 0x08001708: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001708: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x0800170C: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(21, 0X89C8) << 16);
    // 0x08001710: lwc1        $f0, -0x7638($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(21, 0X89C8));
    // 0x08001714: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x08001718: lui         $at, 0x42CA
    ctx->r1 = S32(0X42CA << 16);
    // 0x0800171C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08001720: lui         $at, 0x430C
    ctx->r1 = S32(0X430C << 16);
    // 0x08001724: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08001728: lwc1        $f4, 0xC($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0XC);
    // 0x0800172C: lwc1        $f10, 0x10($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X10);
    // 0x08001730: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001734: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08001738: addiu       $t8, $zero, 0x100
    ctx->r24 = ADD32(0, 0X100);
    // 0x0800173C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001740: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x08001744: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X1778) << 16);
    // 0x08001748: addiu       $a0, $a0, 0x1778
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X1778));
    // 0x0800174C: swc1        $f0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f0.u32l;
    // 0x08001750: swc1        $f0, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f0.u32l;
    // 0x08001754: swc1        $f0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f0.u32l;
    // 0x08001758: swc1        $f8, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f8.u32l;
    // 0x0800175C: swc1        $f18, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f18.u32l;
    // 0x08001760: jalr        $t9
    // 0x08001764: sh          $t8, 0x16($a2)
    MEM_H(0X16, ctx->r6) = ctx->r24;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001764: sh          $t8, 0x16($a2)
    MEM_H(0X16, ctx->r6) = ctx->r24;
    after_1:
    // 0x08001768: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800176C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001770: jr          $ra
    // 0x08001774: nop

    TRACE_RETURN()
    return;
    // 0x08001774: nop

;}
RECOMP_FUNC void func_08002488_6C1BD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002488: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x0800248C: jr          $ra
    // 0x08002490: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08002490: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_080012B8_6C0A08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080012B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080012BC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080012C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080012C4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080012C8: addiu       $t9, $t9, -0x44FC
    ctx->r25 = ADD32(ctx->r25, -0X44FC);
    // 0x080012CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080012D0: lui         $a1, 0xC352
    ctx->r5 = S32(0XC352 << 16);
    // 0x080012D4: lui         $a2, 0x41B0
    ctx->r6 = S32(0X41B0 << 16);
    // 0x080012D8: jalr        $t9
    // 0x080012DC: lui         $a3, 0x3F00
    ctx->r7 = S32(0X3F00 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080012DC: lui         $a3, 0x3F00
    ctx->r7 = S32(0X3F00 << 16);
    after_0:
    // 0x080012E0: bne         $v0, $zero, L_08001314
    if (ctx->r2 != 0) {
        // 0x080012E4: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_08001314;
    }
    // 0x080012E4: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080012E8: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x080012EC: jalr        $t9
    // 0x080012F0: addiu       $a0, $zero, 0x155
    ctx->r4 = ADD32(0, 0X155);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080012F0: addiu       $a0, $zero, 0x155
    ctx->r4 = ADD32(0, 0X155);
    after_1:
    // 0x080012F4: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x080012F8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080012FC: addiu       $t6, $zero, 0x14
    ctx->r14 = ADD32(0, 0X14);
    // 0x08001300: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001304: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X1324) << 16);
    // 0x08001308: addiu       $a0, $a0, 0x1324
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X1324));
    // 0x0800130C: jalr        $t9
    // 0x08001310: sh          $t6, 0x8A($t7)
    MEM_H(0X8A, ctx->r15) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001310: sh          $t6, 0x8A($t7)
    MEM_H(0X8A, ctx->r15) = ctx->r14;
    after_2:
L_08001314:
    // 0x08001314: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001318: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800131C: jr          $ra
    // 0x08001320: nop

    TRACE_RETURN()
    return;
    // 0x08001320: nop

;}
RECOMP_FUNC void func_08005404_6C4B54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08005404: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08005408: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800540C: lw          $t7, 0x64($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X64);
    // 0x08005410: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x08005414: ori         $t6, $t6, 0x6E1
    ctx->r14 = ctx->r14 | 0X6E1;
    // 0x08005418: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800541C: ori         $t8, $t7, 0x4000
    ctx->r24 = ctx->r15 | 0X4000;
    // 0x08005420: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x08005424: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08005428: sw          $t8, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r24;
    // 0x0800542C: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08005430: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x08005434: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08005438: jalr        $t9
    // 0x0800543C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800543C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x08005440: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x08005444: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x08005448: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x0800544C: sb          $zero, 0x6C($a2)
    MEM_B(0X6C, ctx->r6) = 0;
    // 0x08005450: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08005454: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x08005458: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800545C: addiu       $t0, $zero, 0x168
    ctx->r8 = ADD32(0, 0X168);
    // 0x08005460: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08005464: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X54A4) << 16);
    // 0x08005468: sh          $zero, 0x18($a3)
    MEM_H(0X18, ctx->r7) = 0;
    // 0x0800546C: swc1        $f0, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->f0.u32l;
    // 0x08005470: swc1        $f0, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->f0.u32l;
    // 0x08005474: swc1        $f0, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->f0.u32l;
    // 0x08005478: swc1        $f2, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f2.u32l;
    // 0x0800547C: swc1        $f2, 0xC($a3)
    MEM_W(0XC, ctx->r7) = ctx->f2.u32l;
    // 0x08005480: swc1        $f2, 0x10($a3)
    MEM_W(0X10, ctx->r7) = ctx->f2.u32l;
    // 0x08005484: addiu       $a0, $a0, 0x54A4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X54A4));
    // 0x08005488: sh          $t0, 0x8A($a2)
    MEM_H(0X8A, ctx->r6) = ctx->r8;
    // 0x0800548C: jalr        $t9
    // 0x08005490: swc1        $f0, 0xDC($a2)
    MEM_W(0XDC, ctx->r6) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08005490: swc1        $f0, 0xDC($a2)
    MEM_W(0XDC, ctx->r6) = ctx->f0.u32l;
    after_1:
    // 0x08005494: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08005498: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800549C: jr          $ra
    // 0x080054A0: nop

    TRACE_RETURN()
    return;
    // 0x080054A0: nop

;}
