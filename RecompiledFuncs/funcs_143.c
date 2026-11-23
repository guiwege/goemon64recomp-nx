#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_08000CA8_739378(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000CA8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x08000CAC: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x08000CB0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000CB4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000CB8: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08000CBC: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(66, 0XB9C) << 16);
    // 0x08000CC0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000CC4: addiu       $a1, $a1, 0xB9C
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(66, 0XB9C));
    // 0x08000CC8: jalr        $t9
    // 0x08000CCC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000CCC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x08000CD0: bne         $v0, $zero, L_08000CE0
    if (ctx->r2 != 0) {
        // 0x08000CD4: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08000CE0;
    }
    // 0x08000CD4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08000CD8: b           L_08000DC8
    // 0x08000CDC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_08000DC8;
    // 0x08000CDC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_08000CE0:
    // 0x08000CE0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000CE4: addiu       $t6, $zero, 0x4B
    ctx->r14 = ADD32(0, 0X4B);
    // 0x08000CE8: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000CEC: sh          $t6, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r14;
    // 0x08000CF0: jalr        $t9
    // 0x08000CF4: addiu       $a0, $zero, 0x4B
    ctx->r4 = ADD32(0, 0X4B);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000CF4: addiu       $a0, $zero, 0x4B
    ctx->r4 = ADD32(0, 0X4B);
    after_1:
    // 0x08000CF8: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x08000CFC: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08000D00: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x08000D04: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x08000D08: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000D0C: addiu       $t9, $t9, 0x48F0
    ctx->r25 = ADD32(ctx->r25, 0X48F0);
    // 0x08000D10: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x08000D14: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x08000D18: jalr        $t9
    // 0x08000D1C: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000D1C: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_2:
    // 0x08000D20: sw          $v0, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->r2;
    // 0x08000D24: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x08000D28: lui         $t8, 0x800
    ctx->r24 = S32(RELOC_HI16(66, 0X15F4) << 16);
    // 0x08000D2C: lui         $t1, 0x280
    ctx->r9 = S32(0X280 << 16);
    // 0x08000D30: sll         $t7, $t0, 2
    ctx->r15 = S32(ctx->r8 << 2);
    // 0x08000D34: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x08000D38: lw          $t8, 0x15F4($t8)
    ctx->r24 = MEM_W(ctx->r24, (int16_t)RELOC_LO16(66, 0X15F4));
    // 0x08000D3C: ori         $t1, $t1, 0x321
    ctx->r9 = ctx->r9 | 0X321;
    // 0x08000D40: addiu       $t2, $zero, 0x20
    ctx->r10 = ADD32(0, 0X20);
    // 0x08000D44: sw          $t1, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r9;
    // 0x08000D48: sw          $t2, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r10;
    // 0x08000D4C: sh          $t8, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r24;
    // 0x08000D50: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x08000D54: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x08000D58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000D5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000D60: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08000D64: jal         0x08000EBC
    // 0x08000D68: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_08000EBC_73958C(rdram, ctx);
        goto after_3;
    // 0x08000D68: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x08000D6C: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08000D70: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x08000D74: lbu         $t3, 0xD8($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0XD8);
    // 0x08000D78: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x08000D7C: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(66, 0X1604) << 16);
    // 0x08000D80: sb          $t3, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r11;
    // 0x08000D84: lbu         $t4, 0xD8($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0XD8);
    // 0x08000D88: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000D8C: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x08000D90: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x08000D94: sb          $t5, 0xD8($v0)
    MEM_B(0XD8, ctx->r2) = ctx->r13;
    // 0x08000D98: addu        $a1, $a1, $t0
    ctx->r5 = ADD32(ctx->r5, ctx->r8);
    // 0x08000D9C: lw          $a1, 0x1604($a1)
    ctx->r5 = MEM_W(ctx->r5, (int16_t)RELOC_LO16(66, 0X1604));
    // 0x08000DA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000DA4: jalr        $t9
    // 0x08000DA8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000DA8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x08000DAC: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x08000DB0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08000DB4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x08000DB8: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x08000DBC: sw          $zero, 0x28($v1)
    MEM_W(0X28, ctx->r3) = 0;
    // 0x08000DC0: sw          $zero, 0x8($v1)
    MEM_W(0X8, ctx->r3) = 0;
    // 0x08000DC4: swc1        $f4, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f4.u32l;
L_08000DC8:
    // 0x08000DC8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000DCC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000DD0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x08000DD4: jr          $ra
    // 0x08000DD8: nop

    TRACE_RETURN()
    return;
    // 0x08000DD8: nop

;}
RECOMP_FUNC void func_08000B94_739264(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000B94: jr          $ra
    // 0x08000B98: nop

    TRACE_RETURN()
    return;
    // 0x08000B98: nop

;}
RECOMP_FUNC void func_08000DDC_7394AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000DDC: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x08000DE0: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x08000DE4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x08000DE8: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x08000DEC: swc1        $f12, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f12.u32l;
    // 0x08000DF0: swc1        $f14, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f14.u32l;
    // 0x08000DF4: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x08000DF8: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
    // 0x08000DFC: lhu         $t6, 0x12($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X12);
    // 0x08000E00: jr          $ra
    // 0x08000E04: sh          $t6, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x08000E04: sh          $t6, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r14;
;}
RECOMP_FUNC void func_08001160_739830(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001160: jr          $ra
    // 0x08001164: nop

    TRACE_RETURN()
    return;
    // 0x08001164: nop

;}
RECOMP_FUNC void func_08000EB0_739580(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000EB0: lw          $v0, 0xD0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD0);
    // 0x08000EB4: jr          $ra
    // 0x08000EB8: sw          $a1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08000EB8: sw          $a1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r5;
;}
RECOMP_FUNC void func_080008CC_738F9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080008CC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x080008D0: lw          $t6, 0x6C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X6C);
    // 0x080008D4: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x080008D8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x080008DC: beq         $t6, $zero, L_080009E0
    if (ctx->r14 == 0) {
        // 0x080008E0: lui         $t1, 0x8020
        ctx->r9 = S32(0X8020 << 16);
            goto L_080009E0;
    }
    // 0x080008E0: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x080008E4: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x080008E8: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x080008EC: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
    // 0x080008F0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x080008F4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x080008F8: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x080008FC: swc1        $f8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f8.u32l;
    // 0x08000900: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08000904: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x08000908: nop

    // 0x0800090C: bc1fl       L_08000928
    if (!c1cs) {
        // 0x08000910: mtc1        $zero, $f16
        ctx->f16.u32l = 0;
            goto L_08000928;
    }
    goto skip_0;
    // 0x08000910: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    skip_0:
    // 0x08000914: sub.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x08000918: swc1        $f10, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f10.u32l;
    // 0x0800091C: b           L_08000948
    // 0x08000920: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
        goto L_08000948;
    // 0x08000920: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08000924: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
L_08000928:
    // 0x08000928: nop

    // 0x0800092C: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x08000930: nop

    // 0x08000934: bc1fl       L_0800094C
    if (!c1cs) {
        // 0x08000938: cfc1        $t9, $FpcCsr
        ctx->r25 = get_cop1_cs();
            goto L_0800094C;
    }
    goto skip_1;
    // 0x08000938: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    skip_1:
    // 0x0800093C: add.s       $f18, $f0, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x08000940: swc1        $f18, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f18.u32l;
    // 0x08000944: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
L_08000948:
    // 0x08000948: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
L_0800094C:
    // 0x0800094C: ctc1        $v1, $FpcCsr
    set_cop1_cs(ctx->r3);
    // 0x08000950: lw          $t7, 0x10($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X10);
    // 0x08000954: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x08000958: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x0800095C: sw          $t8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r24;
    // 0x08000960: cfc1        $v1, $FpcCsr
    ctx->r3 = get_cop1_cs();
    // 0x08000964: nop

    // 0x08000968: andi        $v1, $v1, 0x78
    ctx->r3 = ctx->r3 & 0X78;
    // 0x0800096C: beql        $v1, $zero, L_080009BC
    if (ctx->r3 == 0) {
        // 0x08000970: mfc1        $v1, $f4
        ctx->r3 = (int32_t)ctx->f4.u32l;
            goto L_080009BC;
    }
    goto skip_2;
    // 0x08000970: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    skip_2:
    // 0x08000974: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000978: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x0800097C: sub.s       $f4, $f0, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x08000980: ctc1        $v1, $FpcCsr
    set_cop1_cs(ctx->r3);
    // 0x08000984: nop

    // 0x08000988: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x0800098C: cfc1        $v1, $FpcCsr
    ctx->r3 = get_cop1_cs();
    // 0x08000990: nop

    // 0x08000994: andi        $v1, $v1, 0x78
    ctx->r3 = ctx->r3 & 0X78;
    // 0x08000998: bne         $v1, $zero, L_080009B0
    if (ctx->r3 != 0) {
        // 0x0800099C: nop
    
            goto L_080009B0;
    }
    // 0x0800099C: nop

    // 0x080009A0: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x080009A4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x080009A8: b           L_080009C8
    // 0x080009AC: or          $v1, $v1, $at
    ctx->r3 = ctx->r3 | ctx->r1;
        goto L_080009C8;
    // 0x080009AC: or          $v1, $v1, $at
    ctx->r3 = ctx->r3 | ctx->r1;
L_080009B0:
    // 0x080009B0: b           L_080009C8
    // 0x080009B4: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
        goto L_080009C8;
    // 0x080009B4: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x080009B8: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
L_080009BC:
    // 0x080009BC: nop

    // 0x080009C0: bltz        $v1, L_080009B0
    if (SIGNED(ctx->r3) < 0) {
        // 0x080009C4: nop
    
            goto L_080009B0;
    }
    // 0x080009C4: nop

L_080009C8:
    // 0x080009C8: lw          $t1, -0x39F4($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X39F4);
    // 0x080009CC: lui         $t2, 0x8020
    ctx->r10 = S32(0X8020 << 16);
    // 0x080009D0: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x080009D4: sh          $v1, 0x16($t1)
    MEM_H(0X16, ctx->r9) = ctx->r3;
    // 0x080009D8: lw          $t2, -0x39FC($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X39FC);
    // 0x080009DC: sh          $v1, 0x94($t2)
    MEM_H(0X94, ctx->r10) = ctx->r3;
L_080009E0:
    // 0x080009E0: jr          $ra
    // 0x080009E4: nop

    TRACE_RETURN()
    return;
    // 0x080009E4: nop

;}
RECOMP_FUNC void func_080015B0_739C80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080015B0: jr          $ra
    // 0x080015B4: lw          $v0, 0x70($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X70);
    TRACE_RETURN()
    return;
    // 0x080015B4: lw          $v0, 0x70($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X70);
;}
RECOMP_FUNC void func_080009E8_7390B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080009E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080009EC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080009F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080009F4: addiu       $t9, $t9, 0x4E08
    ctx->r25 = ADD32(ctx->r25, 0X4E08);
    // 0x080009F8: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(66, 0X8CC) << 16);
    // 0x080009FC: addiu       $a1, $a1, 0x8CC
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(66, 0X8CC));
    // 0x08000A00: jalr        $t9
    // 0x08000A04: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000A04: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x08000A08: bne         $v0, $zero, L_08000A18
    if (ctx->r2 != 0) {
        // 0x08000A0C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_08000A18;
    }
    // 0x08000A0C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x08000A10: b           L_08000A5C
    // 0x08000A14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_08000A5C;
    // 0x08000A14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_08000A18:
    // 0x08000A18: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08000A1C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08000A20: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x08000A24: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x08000A28: sw          $zero, 0x5C($v1)
    MEM_W(0X5C, ctx->r3) = 0;
    // 0x08000A2C: sw          $t6, 0x60($v1)
    MEM_W(0X60, ctx->r3) = ctx->r14;
    // 0x08000A30: sw          $zero, 0x6C($v1)
    MEM_W(0X6C, ctx->r3) = 0;
    // 0x08000A34: sb          $a1, 0x74($v1)
    MEM_B(0X74, ctx->r3) = ctx->r5;
    // 0x08000A38: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x08000A3C: swc1        $f4, 0x64($v1)
    MEM_W(0X64, ctx->r3) = ctx->f4.u32l;
    // 0x08000A40: addiu       $a0, $a0, 0x4CC0
    ctx->r4 = ADD32(ctx->r4, 0X4CC0);
    // 0x08000A44: sb          $a1, 0x7AE2($at)
    MEM_B(0X7AE2, ctx->r1) = ctx->r5;
    // 0x08000A48: sh          $zero, 0x307A($a0)
    MEM_H(0X307A, ctx->r4) = 0;
    // 0x08000A4C: sh          $zero, 0x307C($a0)
    MEM_H(0X307C, ctx->r4) = 0;
    // 0x08000A50: sh          $zero, 0x30F2($a0)
    MEM_H(0X30F2, ctx->r4) = 0;
    // 0x08000A54: sh          $zero, 0x30F4($a0)
    MEM_H(0X30F4, ctx->r4) = 0;
    // 0x08000A58: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_08000A5C:
    // 0x08000A5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000A60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000A64: jr          $ra
    // 0x08000A68: nop

    TRACE_RETURN()
    return;
    // 0x08000A68: nop

;}
RECOMP_FUNC void func_08000EBC_73958C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000EBC: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x08000EC0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000EC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000EC8: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x08000ECC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000ED0: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000ED4: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x08000ED8: jalr        $t9
    // 0x08000EDC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000EDC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x08000EE0: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x08000EE4: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x08000EE8: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x08000EEC: lw          $t6, 0x2C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X2C);
    // 0x08000EF0: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x08000EF4: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x08000EF8: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x08000EFC: sw          $t8, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r24;
    // 0x08000F00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000F04: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000F08: jr          $ra
    // 0x08000F0C: nop

    TRACE_RETURN()
    return;
    // 0x08000F0C: nop

;}
RECOMP_FUNC void func_08000EA8_739578(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000EA8: jr          $ra
    // 0x08000EAC: nop

    TRACE_RETURN()
    return;
    // 0x08000EAC: nop

;}
RECOMP_FUNC void func_08000000_739E50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000004: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08000008: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800000C: addiu       $t9, $t9, -0x3A70
    ctx->r25 = ADD32(ctx->r25, -0X3A70);
    // 0x08000010: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000014: jalr        $t9
    // 0x08000018: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000018: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x0800001C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000020: addiu       $t9, $t9, 0x1FB0
    ctx->r25 = ADD32(ctx->r25, 0X1FB0);
    // 0x08000024: jalr        $t9
    // 0x08000028: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000028: nop

    after_1:
    // 0x0800002C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000030: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08000034: jalr        $t9
    // 0x08000038: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000038: nop

    after_2:
    // 0x0800003C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000040: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000044: jr          $ra
    // 0x08000048: nop

    TRACE_RETURN()
    return;
    // 0x08000048: nop

;}
RECOMP_FUNC void func_08000DF8_73AC98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000DF8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x08000DFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000E00: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x08000E04: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x08000E08: lbu         $v0, 0xD0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD0);
    // 0x08000E0C: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x08000E10: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x08000E14: beq         $v0, $zero, L_08000E3C
    if (ctx->r2 == 0) {
        // 0x08000E18: addiu       $t0, $t0, 0xD0
        ctx->r8 = ADD32(ctx->r8, 0XD0);
            goto L_08000E3C;
    }
    // 0x08000E18: addiu       $t0, $t0, 0xD0
    ctx->r8 = ADD32(ctx->r8, 0XD0);
    // 0x08000E1C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000E20: beq         $v0, $at, L_08000E44
    if (ctx->r2 == ctx->r1) {
        // 0x08000E24: lw          $t0, 0x48($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X48);
            goto L_08000E44;
    }
    // 0x08000E24: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x08000E28: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08000E2C: beq         $v0, $at, L_08000E4C
    if (ctx->r2 == ctx->r1) {
        // 0x08000E30: lw          $t0, 0x48($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X48);
            goto L_08000E4C;
    }
    // 0x08000E30: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x08000E34: b           L_08000EAC
    // 0x08000E38: addiu       $t0, $a0, 0xD0
    ctx->r8 = ADD32(ctx->r4, 0XD0);
        goto L_08000EAC;
    // 0x08000E38: addiu       $t0, $a0, 0xD0
    ctx->r8 = ADD32(ctx->r4, 0XD0);
L_08000E3C:
    // 0x08000E3C: b           L_08000EAC
    // 0x08000E40: sb          $t7, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r15;
        goto L_08000EAC;
    // 0x08000E40: sb          $t7, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r15;
L_08000E44:
    // 0x08000E44: b           L_08000EAC
    // 0x08000E48: addiu       $t0, $t0, 0xD0
    ctx->r8 = ADD32(ctx->r8, 0XD0);
        goto L_08000EAC;
    // 0x08000E48: addiu       $t0, $t0, 0xD0
    ctx->r8 = ADD32(ctx->r8, 0XD0);
L_08000E4C:
    // 0x08000E4C: lh          $a0, 0xD8($t0)
    ctx->r4 = MEM_H(ctx->r8, 0XD8);
    // 0x08000E50: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x08000E54: addiu       $t0, $t0, 0xD0
    ctx->r8 = ADD32(ctx->r8, 0XD0);
    // 0x08000E58: div         $zero, $a0, $at
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r1)));
    // 0x08000E5C: mfhi        $t8
    ctx->r24 = hi;
    // 0x08000E60: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x08000E64: bne         $t8, $zero, L_08000E84
    if (ctx->r24 != 0) {
        // 0x08000E68: addiu       $at, $zero, 0xA
        ctx->r1 = ADD32(0, 0XA);
            goto L_08000E84;
    }
    // 0x08000E68: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x08000E6C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08000E70: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000E74: lwc1        $f4, 0x10($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X10);
    // 0x08000E78: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08000E7C: b           L_08000EAC
    // 0x08000E80: swc1        $f8, 0x10($t9)
    MEM_W(0X10, ctx->r25) = ctx->f8.u32l;
        goto L_08000EAC;
    // 0x08000E80: swc1        $f8, 0x10($t9)
    MEM_W(0X10, ctx->r25) = ctx->f8.u32l;
L_08000E84:
    // 0x08000E84: div         $zero, $a0, $at
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r1)));
    // 0x08000E88: mfhi        $t1
    ctx->r9 = hi;
    // 0x08000E8C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08000E90: bne         $t1, $zero, L_08000EAC
    if (ctx->r9 != 0) {
        // 0x08000E94: lw          $t2, 0x4C($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X4C);
            goto L_08000EAC;
    }
    // 0x08000E94: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x08000E98: lwc1        $f10, 0x10($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X10);
    // 0x08000E9C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08000EA0: nop

    // 0x08000EA4: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x08000EA8: swc1        $f18, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->f18.u32l;
L_08000EAC:
    // 0x08000EAC: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x08000EB0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08000EB4: lbu         $t4, 0x7C($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X7C);
    // 0x08000EB8: bnel        $t4, $at, L_08000EF0
    if (ctx->r12 != ctx->r1) {
        // 0x08000EBC: lh          $v0, 0x4($t0)
        ctx->r2 = MEM_H(ctx->r8, 0X4);
            goto L_08000EF0;
    }
    goto skip_0;
    // 0x08000EBC: lh          $v0, 0x4($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X4);
    skip_0:
    // 0x08000EC0: lh          $a1, 0xE($t0)
    ctx->r5 = MEM_H(ctx->r8, 0XE);
    // 0x08000EC4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x08000EC8: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x08000ECC: beq         $a1, $at, L_08000EEC
    if (ctx->r5 == ctx->r1) {
        // 0x08000ED0: lui         $t9, 0x8021
        ctx->r25 = S32(0X8021 << 16);
            goto L_08000EEC;
    }
    // 0x08000ED0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000ED4: lw          $a2, 0x10($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X10);
    // 0x08000ED8: lbu         $a3, 0xC($t0)
    ctx->r7 = MEM_BU(ctx->r8, 0XC);
    // 0x08000EDC: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000EE0: jalr        $t9
    // 0x08000EE4: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000EE4: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    after_0:
    // 0x08000EE8: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
L_08000EEC:
    // 0x08000EEC: lh          $v0, 0x4($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X4);
L_08000EF0:
    // 0x08000EF0: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08000EF4: lui         $t3, 0x600
    ctx->r11 = S32(0X600 << 16);
    // 0x08000EF8: beq         $v0, $zero, L_08000F18
    if (ctx->r2 == 0) {
        // 0x08000EFC: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(68, 0X1B80) << 16);
            goto L_08000F18;
    }
    // 0x08000EFC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(68, 0X1B80) << 16);
    // 0x08000F00: lh          $t5, 0x2($t0)
    ctx->r13 = MEM_H(ctx->r8, 0X2);
    // 0x08000F04: lh          $t6, 0x6($t0)
    ctx->r14 = MEM_H(ctx->r8, 0X6);
    // 0x08000F08: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
    // 0x08000F0C: sh          $t8, 0x4($t0)
    MEM_H(0X4, ctx->r8) = ctx->r24;
    // 0x08000F10: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x08000F14: sh          $t7, 0x2($t0)
    MEM_H(0X2, ctx->r8) = ctx->r15;
L_08000F18:
    // 0x08000F18: lw          $a2, 0x14($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X14);
    // 0x08000F1C: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x08000F20: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000F24: or          $t1, $a2, $at
    ctx->r9 = ctx->r6 | ctx->r1;
    // 0x08000F28: sw          $t1, 0x30($t2)
    MEM_W(0X30, ctx->r10) = ctx->r9;
    // 0x08000F2C: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
    // 0x08000F30: addiu       $t9, $t9, 0x4840
    ctx->r25 = ADD32(ctx->r25, 0X4840);
    // 0x08000F34: addiu       $v1, $a2, 0x8
    ctx->r3 = ADD32(ctx->r6, 0X8);
    // 0x08000F38: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    // 0x08000F3C: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x08000F40: addiu       $a0, $a0, 0x1B80
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(68, 0X1B80));
    // 0x08000F44: addiu       $a1, $zero, 0x4D
    ctx->r5 = ADD32(0, 0X4D);
    // 0x08000F48: jalr        $t9
    // 0x08000F4C: sw          $a2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000F4C: sw          $a2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r6;
    after_1:
    // 0x08000F50: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x08000F54: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x08000F58: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x08000F5C: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
    // 0x08000F60: lh          $t4, 0xA($t0)
    ctx->r12 = MEM_H(ctx->r8, 0XA);
    // 0x08000F64: lh          $a0, 0x8($t0)
    ctx->r4 = MEM_H(ctx->r8, 0X8);
    // 0x08000F68: lui         $t5, 0xB900
    ctx->r13 = S32(0XB900 << 16);
    // 0x08000F6C: ori         $t5, $t5, 0x2
    ctx->r13 = ctx->r13 | 0X2;
    // 0x08000F70: slt         $at, $t4, $a0
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x08000F74: beq         $at, $zero, L_08000FF0
    if (ctx->r1 == 0) {
        // 0x08000F78: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_08000FF0;
    }
    // 0x08000F78: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x08000F7C: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x08000F80: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x08000F84: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x08000F88: lui         $a1, 0x8001
    ctx->r5 = S32(0X8001 << 16);
    // 0x08000F8C: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x08000F90: addiu       $a1, $a1, -0x22A8
    ctx->r5 = ADD32(ctx->r5, -0X22A8);
    // 0x08000F94: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x08000F98: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    // 0x08000F9C: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x08000FA0: jalr        $a1
    // 0x08000FA4: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    LOOKUP_FUNC(ctx->r5)(rdram, ctx);
        goto after_2;
    // 0x08000FA4: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_2:
    // 0x08000FA8: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x08000FAC: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x08000FB0: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x08000FB4: lh          $t7, 0xA($t0)
    ctx->r15 = MEM_H(ctx->r8, 0XA);
    // 0x08000FB8: lh          $a0, 0x8($t0)
    ctx->r4 = MEM_H(ctx->r8, 0X8);
    // 0x08000FBC: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x08000FC0: slt         $at, $t8, $a0
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x08000FC4: beql        $at, $zero, L_08000FF4
    if (ctx->r1 == 0) {
        // 0x08000FC8: andi        $v0, $a0, 0x1
        ctx->r2 = ctx->r4 & 0X1;
            goto L_08000FF4;
    }
    goto skip_1;
    // 0x08000FC8: andi        $v0, $a0, 0x1
    ctx->r2 = ctx->r4 & 0X1;
    skip_1:
    // 0x08000FCC: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    // 0x08000FD0: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    // 0x08000FD4: jalr        $a1
    // 0x08000FD8: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    LOOKUP_FUNC(ctx->r5)(rdram, ctx);
        goto after_3;
    // 0x08000FD8: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    after_3:
    // 0x08000FDC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x08000FE0: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x08000FE4: lh          $a0, 0x8($t0)
    ctx->r4 = MEM_H(ctx->r8, 0X8);
    // 0x08000FE8: addu        $t1, $v0, $a0
    ctx->r9 = ADD32(ctx->r2, ctx->r4);
    // 0x08000FEC: sh          $t1, 0xA($t0)
    MEM_H(0XA, ctx->r8) = ctx->r9;
L_08000FF0:
    // 0x08000FF0: andi        $v0, $a0, 0x1
    ctx->r2 = ctx->r4 & 0X1;
L_08000FF4:
    // 0x08000FF4: beq         $v0, $zero, L_08001010
    if (ctx->r2 == 0) {
        // 0x08000FF8: lui         $t5, 0xB800
        ctx->r13 = S32(0XB800 << 16);
            goto L_08001010;
    }
    // 0x08000FF8: lui         $t5, 0xB800
    ctx->r13 = S32(0XB800 << 16);
    // 0x08000FFC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08001000: beq         $v0, $at, L_0800102C
    if (ctx->r2 == ctx->r1) {
        // 0x08001004: lui         $t9, 0xFB00
        ctx->r25 = S32(0XFB00 << 16);
            goto L_0800102C;
    }
    // 0x08001004: lui         $t9, 0xFB00
    ctx->r25 = S32(0XFB00 << 16);
    // 0x08001008: b           L_08001044
    // 0x0800100C: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
        goto L_08001044;
    // 0x0800100C: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
L_08001010:
    // 0x08001010: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x08001014: lui         $t2, 0xFB00
    ctx->r10 = S32(0XFB00 << 16);
    // 0x08001018: addiu       $t3, $zero, 0x60D0
    ctx->r11 = ADD32(0, 0X60D0);
    // 0x0800101C: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x08001020: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x08001024: b           L_08001040
    // 0x08001028: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
        goto L_08001040;
    // 0x08001028: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
L_0800102C:
    // 0x0800102C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x08001030: addiu       $t4, $zero, 0x6080
    ctx->r12 = ADD32(0, 0X6080);
    // 0x08001034: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x08001038: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x0800103C: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
L_08001040:
    // 0x08001040: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
L_08001044:
    // 0x08001044: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x08001048: lh          $t6, 0x8($t0)
    ctx->r14 = MEM_H(ctx->r8, 0X8);
    // 0x0800104C: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x08001050: sh          $t7, 0x8($t0)
    MEM_H(0X8, ctx->r8) = ctx->r15;
    // 0x08001054: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001058: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x0800105C: jr          $ra
    // 0x08001060: nop

    TRACE_RETURN()
    return;
    // 0x08001060: nop

;}
RECOMP_FUNC void func_080003A4_73A244(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080003A4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x080003A8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x080003AC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x080003B0: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x080003B4: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
    // 0x080003B8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080003BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080003C0: beq         $v0, $zero, L_080003E8
    if (ctx->r2 == 0) {
        // 0x080003C4: addiu       $a1, $zero, 0xFF
        ctx->r5 = ADD32(0, 0XFF);
            goto L_080003E8;
    }
    // 0x080003C4: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x080003C8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x080003CC: beq         $v0, $at, L_0800042C
    if (ctx->r2 == ctx->r1) {
        // 0x080003D0: addiu       $v1, $s0, 0x5C
        ctx->r3 = ADD32(ctx->r16, 0X5C);
            goto L_0800042C;
    }
    // 0x080003D0: addiu       $v1, $s0, 0x5C
    ctx->r3 = ADD32(ctx->r16, 0X5C);
    // 0x080003D4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x080003D8: beq         $v0, $at, L_08000458
    if (ctx->r2 == ctx->r1) {
        // 0x080003DC: addiu       $v1, $s0, 0x5C
        ctx->r3 = ADD32(ctx->r16, 0X5C);
            goto L_08000458;
    }
    // 0x080003DC: addiu       $v1, $s0, 0x5C
    ctx->r3 = ADD32(ctx->r16, 0X5C);
    // 0x080003E0: b           L_08000478
    // 0x080003E4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_08000478;
    // 0x080003E4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_080003E8:
    // 0x080003E8: addiu       $t6, $zero, 0x96
    ctx->r14 = ADD32(0, 0X96);
    // 0x080003EC: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x080003F0: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x080003F4: addiu       $t9, $zero, 0xF
    ctx->r25 = ADD32(0, 0XF);
    // 0x080003F8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x080003FC: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x08000400: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x08000404: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x08000408: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    // 0x0800040C: jal         0x08000254
    // 0x08000410: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    func_08000254_73A0F4(rdram, ctx);
        goto after_0;
    // 0x08000410: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    after_0:
    // 0x08000414: addiu       $v1, $s0, 0x5C
    ctx->r3 = ADD32(ctx->r16, 0X5C);
    // 0x08000418: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x0800041C: sw          $v0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r2;
    // 0x08000420: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x08000424: b           L_08000474
    // 0x08000428: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
        goto L_08000474;
    // 0x08000428: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
L_0800042C:
    // 0x0800042C: lw          $a0, 0x8($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X8);
    // 0x08000430: jal         0x08000374
    // 0x08000434: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    func_08000374_73A214(rdram, ctx);
        goto after_1;
    // 0x08000434: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    after_1:
    // 0x08000438: bne         $v0, $zero, L_08000474
    if (ctx->r2 != 0) {
        // 0x0800043C: lw          $v1, 0x34($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X34);
            goto L_08000474;
    }
    // 0x0800043C: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x08000440: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x08000444: addiu       $t2, $zero, 0x14
    ctx->r10 = ADD32(0, 0X14);
    // 0x08000448: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x0800044C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x08000450: b           L_08000474
    // 0x08000454: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
        goto L_08000474;
    // 0x08000454: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
L_08000458:
    // 0x08000458: lw          $a0, 0x4($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X4);
    // 0x0800045C: addiu       $t5, $a0, -0x1
    ctx->r13 = ADD32(ctx->r4, -0X1);
    // 0x08000460: bne         $a0, $zero, L_08000474
    if (ctx->r4 != 0) {
        // 0x08000464: sw          $t5, 0x4($v1)
        MEM_W(0X4, ctx->r3) = ctx->r13;
            goto L_08000474;
    }
    // 0x08000464: sw          $t5, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r13;
    // 0x08000468: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x0800046C: jal         0x0800037C
    // 0x08000470: lw          $a0, 0x8($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X8);
    func_0800037C_73A21C(rdram, ctx);
        goto after_2;
    // 0x08000470: lw          $a0, 0x8($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X8);
    after_2:
L_08000474:
    // 0x08000474: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_08000478:
    // 0x08000478: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x0800047C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x08000480: jr          $ra
    // 0x08000484: nop

    TRACE_RETURN()
    return;
    // 0x08000484: nop

;}
RECOMP_FUNC void func_0800117C_73B01C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800117C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08001180: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08001184: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(68, 0X0) << 16);
    // 0x08001188: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800118C: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x08001190: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x08001194: addiu       $t9, $t9, 0x0
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(68, 0X0));
    // 0x08001198: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(68, 0XDF8) << 16);
    // 0x0800119C: addiu       $a1, $a1, 0xDF8
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(68, 0XDF8));
    // 0x080011A0: addiu       $a3, $zero, 0x4D
    ctx->r7 = ADD32(0, 0X4D);
    // 0x080011A4: jalr        $t9
    // 0x080011A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080011A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x080011AC: bne         $v0, $zero, L_080011BC
    if (ctx->r2 != 0) {
        // 0x080011B0: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_080011BC;
    }
    // 0x080011B0: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x080011B4: b           L_08001288
    // 0x080011B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_08001288;
    // 0x080011B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_080011BC:
    // 0x080011BC: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x080011C0: lw          $v1, 0x18($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X18);
    // 0x080011C4: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x080011C8: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x080011CC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080011D0: addiu       $t9, $t9, 0x48F0
    ctx->r25 = ADD32(ctx->r25, 0X48F0);
    // 0x080011D4: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x080011D8: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    // 0x080011DC: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x080011E0: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x080011E4: jalr        $t9
    // 0x080011E8: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080011E8: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_1:
    // 0x080011EC: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x080011F0: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x080011F4: bne         $v0, $zero, L_08001214
    if (ctx->r2 != 0) {
        // 0x080011F8: sw          $v0, 0xE4($a2)
        MEM_W(0XE4, ctx->r6) = ctx->r2;
            goto L_08001214;
    }
    // 0x080011F8: sw          $v0, 0xE4($a2)
    MEM_W(0XE4, ctx->r6) = ctx->r2;
    // 0x080011FC: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(68, 0X1064) << 16);
    // 0x08001200: addiu       $t9, $t9, 0x1064
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(68, 0X1064));
    // 0x08001204: jalr        $t9
    // 0x08001208: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001208: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_2:
    // 0x0800120C: b           L_08001288
    // 0x08001210: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_08001288;
    // 0x08001210: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_08001214:
    // 0x08001214: addiu       $t6, $zero, 0x30F
    ctx->r14 = ADD32(0, 0X30F);
    // 0x08001218: addiu       $t7, $zero, 0x221
    ctx->r15 = ADD32(0, 0X221);
    // 0x0800121C: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(68, 0X10E8) << 16);
    // 0x08001220: sh          $t6, 0x5E($a2)
    MEM_H(0X5E, ctx->r6) = ctx->r14;
    // 0x08001224: sw          $t7, 0x60($a2)
    MEM_W(0X60, ctx->r6) = ctx->r15;
    // 0x08001228: addiu       $t9, $t9, 0x10E8
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(68, 0X10E8));
    // 0x0800122C: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    // 0x08001230: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x08001234: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x08001238: jalr        $t9
    // 0x0800123C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800123C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x08001240: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(68, 0X1D14) << 16);
    // 0x08001244: lwc1        $f0, 0x1D14($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(68, 0X1D14));
    // 0x08001248: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x0800124C: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x08001250: addiu       $t8, $zero, 0x120
    ctx->r24 = ADD32(0, 0X120);
    // 0x08001254: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    // 0x08001258: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x0800125C: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    // 0x08001260: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x08001264: lbu         $t0, 0x5($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X5);
    // 0x08001268: swc1        $f4, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f4.u32l;
    // 0x0800126C: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x08001270: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x08001274: swc1        $f6, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f6.u32l;
    // 0x08001278: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x0800127C: sh          $t8, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r24;
    // 0x08001280: sb          $t1, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r9;
    // 0x08001284: swc1        $f8, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f8.u32l;
L_08001288:
    // 0x08001288: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800128C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08001290: jr          $ra
    // 0x08001294: nop

    TRACE_RETURN()
    return;
    // 0x08001294: nop

;}
RECOMP_FUNC void func_080005E0_73A480(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080005E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080005E4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080005E8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080005EC: sltiu       $at, $a1, 0x7
    ctx->r1 = ctx->r5 < 0X7 ? 1 : 0;
    // 0x080005F0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080005F4: beq         $at, $zero, L_080006CC
    if (ctx->r1 == 0) {
        // 0x080005F8: lw          $v0, 0x18($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X18);
            goto L_080006CC;
    }
    // 0x080005F8: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x080005FC: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x08000600: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(68, 0X1CF0) << 16);
    // 0x08000604: addu        $at, $at, $t6
    gpr jr_addend_0800060C = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x08000608: lw          $t6, 0x1CF0($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(68, 0X1CF0));
    // 0x0800060C: jr          $t6
    // 0x08000610: nop

    switch (jr_addend_0800060C >> 2) {
        case 0: goto L_08000614; break;
        case 1: goto L_0800063C; break;
        case 2: goto L_080006AC; break;
        case 3: goto L_08000684; break;
        case 4: goto L_08000698; break;
        case 5: goto L_080006CC; break;
        case 6: goto L_08000678; break;
        default: switch_error(__func__, 0x0800060C, 0x08001CF0);
    }
    // 0x08000610: nop

L_08000614:
    // 0x08000614: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000618: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x0800061C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000620: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000624: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08000628: jalr        $t9
    // 0x0800062C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800062C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x08000630: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x08000634: b           L_080006CC
    // 0x08000638: sh          $t7, 0xD6($s0)
    MEM_H(0XD6, ctx->r16) = ctx->r15;
        goto L_080006CC;
    // 0x08000638: sh          $t7, 0xD6($s0)
    MEM_H(0XD6, ctx->r16) = ctx->r15;
L_0800063C:
    // 0x0800063C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000640: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000644: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000648: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0800064C: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08000650: jalr        $t9
    // 0x08000654: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000654: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x08000658: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x0800065C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000660: addiu       $v0, $s0, 0xD0
    ctx->r2 = ADD32(ctx->r16, 0XD0);
    // 0x08000664: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x08000668: sh          $zero, 0x6($v0)
    MEM_H(0X6, ctx->r2) = 0;
    // 0x0800066C: sb          $t8, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r24;
    // 0x08000670: b           L_080006CC
    // 0x08000674: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
        goto L_080006CC;
    // 0x08000674: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
L_08000678:
    // 0x08000678: addiu       $t0, $zero, 0x100
    ctx->r8 = ADD32(0, 0X100);
    // 0x0800067C: b           L_080006CC
    // 0x08000680: sh          $t0, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r8;
        goto L_080006CC;
    // 0x08000680: sh          $t0, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r8;
L_08000684:
    // 0x08000684: addiu       $v0, $s0, 0xD0
    ctx->r2 = ADD32(ctx->r16, 0XD0);
    // 0x08000688: lbu         $t1, 0x0($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X0);
    // 0x0800068C: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x08000690: b           L_080006CC
    // 0x08000694: sb          $t2, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r10;
        goto L_080006CC;
    // 0x08000694: sb          $t2, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r10;
L_08000698:
    // 0x08000698: addiu       $v0, $s0, 0xD0
    ctx->r2 = ADD32(ctx->r16, 0XD0);
    // 0x0800069C: lbu         $t3, 0x0($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X0);
    // 0x080006A0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x080006A4: b           L_080006CC
    // 0x080006A8: sb          $t4, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r12;
        goto L_080006CC;
    // 0x080006A8: sb          $t4, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r12;
L_080006AC:
    // 0x080006AC: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080006B0: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x080006B4: jalr        $t9
    // 0x080006B8: addiu       $a0, $zero, 0x17C
    ctx->r4 = ADD32(0, 0X17C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080006B8: addiu       $a0, $zero, 0x17C
    ctx->r4 = ADD32(0, 0X17C);
    after_2:
    // 0x080006BC: addiu       $v0, $s0, 0xD0
    ctx->r2 = ADD32(ctx->r16, 0XD0);
    // 0x080006C0: lbu         $t5, 0x0($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X0);
    // 0x080006C4: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x080006C8: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
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
RECOMP_FUNC void func_08001298_73B138(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001298: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0800129C: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x080012A0: lw          $t6, -0x39D8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39D8);
    // 0x080012A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080012A8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080012AC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x080012B0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x080012B4: lw          $t7, 0x2C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X2C);
    // 0x080012B8: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x080012BC: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x080012C0: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x080012C4: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x080012C8: lbu         $t0, 0xD2($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0XD2);
    // 0x080012CC: sltiu       $at, $t0, 0x12
    ctx->r1 = ctx->r8 < 0X12 ? 1 : 0;
    // 0x080012D0: beq         $at, $zero, L_08001AEC
    if (ctx->r1 == 0) {
        // 0x080012D4: sll         $t0, $t0, 2
        ctx->r8 = S32(ctx->r8 << 2);
            goto L_08001AEC;
    }
    // 0x080012D4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x080012D8: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(68, 0X1D18) << 16);
    // 0x080012DC: addu        $at, $at, $t0
    gpr jr_addend_080012E4 = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x080012E0: lw          $t0, 0x1D18($at)
    ctx->r8 = ADD32(ctx->r1, (int16_t)RELOC_LO16(68, 0X1D18));
    // 0x080012E4: jr          $t0
    // 0x080012E8: nop

    switch (jr_addend_080012E4 >> 2) {
        case 0: goto L_080012EC; break;
        case 1: goto L_08001454; break;
        case 2: goto L_080014F0; break;
        case 3: goto L_08001550; break;
        case 4: goto L_0800163C; break;
        case 5: goto L_080016AC; break;
        case 6: goto L_08001700; break;
        case 7: goto L_08001784; break;
        case 8: goto L_080017B0; break;
        case 9: goto L_08001848; break;
        case 10: goto L_08001880; break;
        case 11: goto L_080018B8; break;
        case 12: goto L_080018F0; break;
        case 13: goto L_08001984; break;
        case 14: goto L_08001A00; break;
        case 15: goto L_08001A60; break;
        case 16: goto L_08001A9C; break;
        case 17: goto L_08001AC8; break;
        default: switch_error(__func__, 0x080012E4, 0x08001D18);
    }
    // 0x080012E8: nop

L_080012EC:
    // 0x080012EC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x080012F0: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(68, 0X6E0) << 16);
    // 0x080012F4: addiu       $t9, $t9, 0x6E0
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(68, 0X6E0));
    // 0x080012F8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x080012FC: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x08001300: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x08001304: jalr        $t9
    // 0x08001308: lui         $a2, 0xC348
    ctx->r6 = S32(0XC348 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001308: lui         $a2, 0xC348
    ctx->r6 = S32(0XC348 << 16);
    after_0:
    // 0x0800130C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x08001310: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08001314: addiu       $t9, $t9, -0x3A40
    ctx->r25 = ADD32(ctx->r25, -0X3A40);
    // 0x08001318: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x0800131C: jalr        $t9
    // 0x08001320: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001320: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    after_1:
    // 0x08001324: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08001328: addiu       $v0, $v0, -0x3A38
    ctx->r2 = ADD32(ctx->r2, -0X3A38);
    // 0x0800132C: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x08001330: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x08001334: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x08001338: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x0800133C: sb          $v1, -0x51DE($at)
    MEM_B(-0X51DE, ctx->r1) = ctx->r3;
    // 0x08001340: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x08001344: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x08001348: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x0800134C: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x08001350: sb          $v1, -0x51E0($at)
    MEM_B(-0X51E0, ctx->r1) = ctx->r3;
    // 0x08001354: addiu       $t9, $t9, -0x5324
    ctx->r25 = ADD32(ctx->r25, -0X5324);
    // 0x08001358: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x0800135C: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x08001360: jalr        $t9
    // 0x08001364: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001364: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x08001368: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x0800136C: addiu       $v1, $v1, -0x39F4
    ctx->r3 = ADD32(ctx->r3, -0X39F4);
    // 0x08001370: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    // 0x08001374: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08001378: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x0800137C: lui         $at, 0xC348
    ctx->r1 = S32(0XC348 << 16);
    // 0x08001380: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08001384: swc1        $f4, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->f4.u32l;
    // 0x08001388: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x0800138C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x08001390: addiu       $t6, $zero, 0x100
    ctx->r14 = ADD32(0, 0X100);
    // 0x08001394: swc1        $f6, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->f6.u32l;
    // 0x08001398: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x0800139C: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x080013A0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x080013A4: swc1        $f8, 0x10($t5)
    MEM_W(0X10, ctx->r13) = ctx->f8.u32l;
    // 0x080013A8: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x080013AC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080013B0: addiu       $t9, $t9, 0x2940
    ctx->r25 = ADD32(ctx->r25, 0X2940);
    // 0x080013B4: sh          $t6, 0x16($t7)
    MEM_H(0X16, ctx->r15) = ctx->r14;
    // 0x080013B8: lw          $t0, -0x39D8($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X39D8);
    // 0x080013BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080013C0: sb          $t8, 0x64($t0)
    MEM_B(0X64, ctx->r8) = ctx->r24;
    // 0x080013C4: jalr        $t9
    // 0x080013C8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080013C8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_3:
    // 0x080013CC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080013D0: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x080013D4: addiu       $t9, $t9, 0x2878
    ctx->r25 = ADD32(ctx->r25, 0X2878);
    // 0x080013D8: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x080013DC: jalr        $t9
    // 0x080013E0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080013E0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_4:
    // 0x080013E4: lui         $v0, 0x800
    ctx->r2 = S32(RELOC_HI16(68, 0X1C18) << 16);
    // 0x080013E8: addiu       $v0, $v0, 0x1C18
    ctx->r2 = ADD32(ctx->r2, (int16_t)RELOC_LO16(68, 0X1C18));
    // 0x080013EC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080013F0: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x080013F4: lw          $a1, 0xC($v0)
    ctx->r5 = MEM_W(ctx->r2, 0XC);
    // 0x080013F8: lw          $a2, 0x10($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X10);
    // 0x080013FC: lw          $a3, 0x14($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X14);
    // 0x08001400: jalr        $t9
    // 0x08001404: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08001404: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    after_5:
    // 0x08001408: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800140C: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x08001410: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08001414: lui         $a1, 0xC248
    ctx->r5 = S32(0XC248 << 16);
    // 0x08001418: lui         $a2, 0xC32A
    ctx->r6 = S32(0XC32A << 16);
    // 0x0800141C: jalr        $t9
    // 0x08001420: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08001420: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    after_6:
    // 0x08001424: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001428: addiu       $t9, $t9, 0x2500
    ctx->r25 = ADD32(ctx->r25, 0X2500);
    // 0x0800142C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08001430: jalr        $t9
    // 0x08001434: addiu       $a1, $zero, 0xF00
    ctx->r5 = ADD32(0, 0XF00);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08001434: addiu       $a1, $zero, 0xF00
    ctx->r5 = ADD32(0, 0XF00);
    after_7:
    // 0x08001438: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800143C: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08001440: jalr        $t9
    // 0x08001444: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08001444: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_8:
    // 0x08001448: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x0800144C: b           L_08001AEC
    // 0x08001450: sb          $t1, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r9;
        goto L_08001AEC;
    // 0x08001450: sb          $t1, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r9;
L_08001454:
    // 0x08001454: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x08001458: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x0800145C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001460: lh          $v0, 0xD0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XD0);
    // 0x08001464: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x08001468: lui         $a1, 0x4348
    ctx->r5 = S32(0X4348 << 16);
    // 0x0800146C: bne         $v0, $at, L_080014A8
    if (ctx->r2 != ctx->r1) {
        // 0x08001470: addiu       $s0, $s0, 0xD0
        ctx->r16 = ADD32(ctx->r16, 0XD0);
            goto L_080014A8;
    }
    // 0x08001470: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x08001474: jalr        $t9
    // 0x08001478: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08001478: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    after_9:
    // 0x0800147C: lui         $v0, 0x800
    ctx->r2 = S32(RELOC_HI16(68, 0X1C18) << 16);
    // 0x08001480: addiu       $v0, $v0, 0x1C18
    ctx->r2 = ADD32(ctx->r2, (int16_t)RELOC_LO16(68, 0X1C18));
    // 0x08001484: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001488: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x0800148C: lw          $a1, 0x18($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X18);
    // 0x08001490: lw          $a2, 0x1C($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X1C);
    // 0x08001494: lw          $a3, 0x20($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X20);
    // 0x08001498: jalr        $t9
    // 0x0800149C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x0800149C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    after_10:
    // 0x080014A0: b           L_08001AF0
    // 0x080014A4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
        goto L_08001AF0;
    // 0x080014A4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
L_080014A8:
    // 0x080014A8: addiu       $at, $zero, 0xC8
    ctx->r1 = ADD32(0, 0XC8);
    // 0x080014AC: bne         $v0, $at, L_08001AEC
    if (ctx->r2 != ctx->r1) {
        // 0x080014B0: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_08001AEC;
    }
    // 0x080014B0: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080014B4: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x080014B8: jalr        $t9
    // 0x080014BC: addiu       $a0, $zero, 0x69
    ctx->r4 = ADD32(0, 0X69);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x080014BC: addiu       $a0, $zero, 0x69
    ctx->r4 = ADD32(0, 0X69);
    after_11:
    // 0x080014C0: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080014C4: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x080014C8: jalr        $t9
    // 0x080014CC: addiu       $a0, $zero, 0xFA
    ctx->r4 = ADD32(0, 0XFA);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x080014CC: addiu       $a0, $zero, 0xFA
    ctx->r4 = ADD32(0, 0XFA);
    after_12:
    // 0x080014D0: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(68, 0X5E0) << 16);
    // 0x080014D4: addiu       $t9, $t9, 0x5E0
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(68, 0X5E0));
    // 0x080014D8: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x080014DC: jalr        $t9
    // 0x080014E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x080014E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_13:
    // 0x080014E4: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x080014E8: b           L_08001AEC
    // 0x080014EC: sb          $t2, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r10;
        goto L_08001AEC;
    // 0x080014EC: sb          $t2, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r10;
L_080014F0:
    // 0x080014F0: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080014F4: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x080014F8: jalr        $t9
    // 0x080014FC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x080014FC: nop

    after_14:
    // 0x08001500: bne         $v0, $zero, L_08001AEC
    if (ctx->r2 != 0) {
        // 0x08001504: lw          $a0, 0x28($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X28);
            goto L_08001AEC;
    }
    // 0x08001504: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x08001508: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(68, 0XCDC) << 16);
    // 0x0800150C: addiu       $t9, $t9, 0xCDC
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(68, 0XCDC));
    // 0x08001510: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    // 0x08001514: lui         $a2, 0xC32A
    ctx->r6 = S32(0XC32A << 16);
    // 0x08001518: jalr        $t9
    // 0x0800151C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x0800151C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_15:
    // 0x08001520: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x08001524: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(68, 0XB4C) << 16);
    // 0x08001528: addiu       $t9, $t9, 0xB4C
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(68, 0XB4C));
    // 0x0800152C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08001530: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x08001534: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x08001538: jalr        $t9
    // 0x0800153C: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x0800153C: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    after_16:
    // 0x08001540: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x08001544: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    // 0x08001548: b           L_08001AEC
    // 0x0800154C: sb          $t3, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r11;
        goto L_08001AEC;
    // 0x0800154C: sb          $t3, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r11;
L_08001550:
    // 0x08001550: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x08001554: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08001558: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800155C: lh          $v0, 0xD0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XD0);
    // 0x08001560: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08001564: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x08001568: bnel        $v0, $at, L_08001584
    if (ctx->r2 != ctx->r1) {
        // 0x0800156C: addiu       $at, $zero, 0x28
        ctx->r1 = ADD32(0, 0X28);
            goto L_08001584;
    }
    goto skip_0;
    // 0x0800156C: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    skip_0:
    // 0x08001570: jalr        $t9
    // 0x08001574: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x08001574: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_17:
    // 0x08001578: b           L_08001AF0
    // 0x0800157C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
        goto L_08001AF0;
    // 0x0800157C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x08001580: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
L_08001584:
    // 0x08001584: bne         $v0, $at, L_080015E0
    if (ctx->r2 != ctx->r1) {
        // 0x08001588: lui         $a1, 0x4220
        ctx->r5 = S32(0X4220 << 16);
            goto L_080015E0;
    }
    // 0x08001588: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x0800158C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001590: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x08001594: jalr        $t9
    // 0x08001598: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x08001598: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    after_18:
    // 0x0800159C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080015A0: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x080015A4: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x080015A8: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    // 0x080015AC: lui         $a2, 0xC302
    ctx->r6 = S32(0XC302 << 16);
    // 0x080015B0: jalr        $t9
    // 0x080015B4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_19;
    // 0x080015B4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_19:
    // 0x080015B8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x080015BC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080015C0: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x080015C4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x080015C8: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x080015CC: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x080015D0: jalr        $t9
    // 0x080015D4: lui         $a2, 0xC316
    ctx->r6 = S32(0XC316 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_20;
    // 0x080015D4: lui         $a2, 0xC316
    ctx->r6 = S32(0XC316 << 16);
    after_20:
    // 0x080015D8: b           L_08001AF0
    // 0x080015DC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
        goto L_08001AF0;
    // 0x080015DC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
L_080015E0:
    // 0x080015E0: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x080015E4: bne         $v0, $at, L_08001600
    if (ctx->r2 != ctx->r1) {
        // 0x080015E8: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_08001600;
    }
    // 0x080015E8: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080015EC: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x080015F0: jalr        $t9
    // 0x080015F4: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_21;
    // 0x080015F4: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_21:
    // 0x080015F8: b           L_08001AF0
    // 0x080015FC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
        goto L_08001AF0;
    // 0x080015FC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
L_08001600:
    // 0x08001600: addiu       $at, $zero, 0x50
    ctx->r1 = ADD32(0, 0X50);
    // 0x08001604: bne         $v0, $at, L_08001AEC
    if (ctx->r2 != ctx->r1) {
        // 0x08001608: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_08001AEC;
    }
    // 0x08001608: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0800160C: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(68, 0XBA4) << 16);
    // 0x08001610: addiu       $t9, $t9, 0xBA4
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(68, 0XBA4));
    // 0x08001614: jalr        $t9
    // 0x08001618: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_22;
    // 0x08001618: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_22:
    // 0x0800161C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001620: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x08001624: jalr        $t9
    // 0x08001628: addiu       $a0, $zero, 0xFB
    ctx->r4 = ADD32(0, 0XFB);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_23;
    // 0x08001628: addiu       $a0, $zero, 0xFB
    ctx->r4 = ADD32(0, 0XFB);
    after_23:
    // 0x0800162C: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x08001630: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    // 0x08001634: b           L_08001AEC
    // 0x08001638: sb          $t4, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r12;
        goto L_08001AEC;
    // 0x08001638: sb          $t4, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r12;
L_0800163C:
    // 0x0800163C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001640: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x08001644: jalr        $t9
    // 0x08001648: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_24;
    // 0x08001648: nop

    after_24:
    // 0x0800164C: bne         $v0, $zero, L_08001AEC
    if (ctx->r2 != 0) {
        // 0x08001650: lw          $a0, 0x28($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X28);
            goto L_08001AEC;
    }
    // 0x08001650: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x08001654: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(68, 0X117C) << 16);
    // 0x08001658: addiu       $t9, $t9, 0x117C
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(68, 0X117C));
    // 0x0800165C: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    // 0x08001660: lui         $a2, 0xC32A
    ctx->r6 = S32(0XC32A << 16);
    // 0x08001664: jalr        $t9
    // 0x08001668: lui         $a3, 0x4100
    ctx->r7 = S32(0X4100 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_25;
    // 0x08001668: lui         $a3, 0x4100
    ctx->r7 = S32(0X4100 << 16);
    after_25:
    // 0x0800166C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x08001670: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(68, 0XBA4) << 16);
    // 0x08001674: addiu       $t9, $t9, 0xBA4
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(68, 0XBA4));
    // 0x08001678: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x0800167C: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x08001680: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x08001684: jalr        $t9
    // 0x08001688: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_26;
    // 0x08001688: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_26:
    // 0x0800168C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001690: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x08001694: jalr        $t9
    // 0x08001698: addiu       $a0, $zero, 0xFC
    ctx->r4 = ADD32(0, 0XFC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_27;
    // 0x08001698: addiu       $a0, $zero, 0xFC
    ctx->r4 = ADD32(0, 0XFC);
    after_27:
    // 0x0800169C: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x080016A0: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    // 0x080016A4: b           L_08001AEC
    // 0x080016A8: sb          $t5, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r13;
        goto L_08001AEC;
    // 0x080016A8: sb          $t5, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r13;
L_080016AC:
    // 0x080016AC: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080016B0: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x080016B4: jalr        $t9
    // 0x080016B8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_28;
    // 0x080016B8: nop

    after_28:
    // 0x080016BC: bne         $v0, $zero, L_08001AEC
    if (ctx->r2 != 0) {
        // 0x080016C0: lw          $s0, 0x28($sp)
        ctx->r16 = MEM_W(ctx->r29, 0X28);
            goto L_08001AEC;
    }
    // 0x080016C0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x080016C4: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(68, 0XBA4) << 16);
    // 0x080016C8: addiu       $t9, $t9, 0xBA4
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(68, 0XBA4));
    // 0x080016CC: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x080016D0: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x080016D4: jalr        $t9
    // 0x080016D8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_29;
    // 0x080016D8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_29:
    // 0x080016DC: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(68, 0X5E0) << 16);
    // 0x080016E0: addiu       $t9, $t9, 0x5E0
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(68, 0X5E0));
    // 0x080016E4: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x080016E8: jalr        $t9
    // 0x080016EC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_30;
    // 0x080016EC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_30:
    // 0x080016F0: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x080016F4: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    // 0x080016F8: b           L_08001AEC
    // 0x080016FC: sb          $t6, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r14;
        goto L_08001AEC;
    // 0x080016FC: sb          $t6, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r14;
L_08001700:
    // 0x08001700: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x08001704: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x08001708: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800170C: lh          $t7, 0xD0($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XD0);
    // 0x08001710: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x08001714: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x08001718: bnel        $t7, $at, L_08001AF0
    if (ctx->r15 != ctx->r1) {
        // 0x0800171C: lw          $s0, 0x28($sp)
        ctx->r16 = MEM_W(ctx->r29, 0X28);
            goto L_08001AF0;
    }
    goto skip_1;
    // 0x0800171C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    skip_1:
    // 0x08001720: jalr        $t9
    // 0x08001724: addiu       $a0, $zero, 0xFD
    ctx->r4 = ADD32(0, 0XFD);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_31;
    // 0x08001724: addiu       $a0, $zero, 0xFD
    ctx->r4 = ADD32(0, 0XFD);
    after_31:
    // 0x08001728: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800172C: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x08001730: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08001734: jalr        $t9
    // 0x08001738: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_32;
    // 0x08001738: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_32:
    // 0x0800173C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001740: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x08001744: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08001748: lui         $a1, 0x41C0
    ctx->r5 = S32(0X41C0 << 16);
    // 0x0800174C: lui         $a2, 0xC31E
    ctx->r6 = S32(0XC31E << 16);
    // 0x08001750: jalr        $t9
    // 0x08001754: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_33;
    // 0x08001754: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_33:
    // 0x08001758: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800175C: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x08001760: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08001764: lui         $a1, 0xC298
    ctx->r5 = S32(0XC298 << 16);
    // 0x08001768: lui         $a2, 0xC33A
    ctx->r6 = S32(0XC33A << 16);
    // 0x0800176C: jalr        $t9
    // 0x08001770: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_34;
    // 0x08001770: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_34:
    // 0x08001774: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x08001778: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    // 0x0800177C: b           L_08001AEC
    // 0x08001780: sb          $t8, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r24;
        goto L_08001AEC;
    // 0x08001780: sb          $t8, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r24;
L_08001784:
    // 0x08001784: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001788: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x0800178C: jalr        $t9
    // 0x08001790: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_35;
    // 0x08001790: nop

    after_35:
    // 0x08001794: bne         $v0, $zero, L_08001AEC
    if (ctx->r2 != 0) {
        // 0x08001798: lw          $s0, 0x28($sp)
        ctx->r16 = MEM_W(ctx->r29, 0X28);
            goto L_08001AEC;
    }
    // 0x08001798: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x0800179C: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x080017A0: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x080017A4: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    // 0x080017A8: b           L_08001AEC
    // 0x080017AC: sb          $t0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r8;
        goto L_08001AEC;
    // 0x080017AC: sb          $t0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r8;
L_080017B0:
    // 0x080017B0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x080017B4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x080017B8: lh          $v0, 0xD0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XD0);
    // 0x080017BC: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x080017C0: bnel        $v0, $at, L_080017DC
    if (ctx->r2 != ctx->r1) {
        // 0x080017C4: addiu       $at, $zero, 0x14
        ctx->r1 = ADD32(0, 0X14);
            goto L_080017DC;
    }
    goto skip_2;
    // 0x080017C4: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    skip_2:
    // 0x080017C8: jal         0x08001064
    // 0x080017CC: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    func_08001064_73AF04(rdram, ctx);
        goto after_36;
    // 0x080017CC: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    after_36:
    // 0x080017D0: b           L_08001AEC
    // 0x080017D4: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
        goto L_08001AEC;
    // 0x080017D4: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x080017D8: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
L_080017DC:
    // 0x080017DC: bnel        $v0, $at, L_080017F8
    if (ctx->r2 != ctx->r1) {
        // 0x080017E0: addiu       $at, $zero, 0x1E
        ctx->r1 = ADD32(0, 0X1E);
            goto L_080017F8;
    }
    goto skip_3;
    // 0x080017E0: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    skip_3:
    // 0x080017E4: jal         0x08000AD0
    // 0x080017E8: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    func_08000AD0_73A970(rdram, ctx);
        goto after_37;
    // 0x080017E8: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_37:
    // 0x080017EC: b           L_08001AEC
    // 0x080017F0: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
        goto L_08001AEC;
    // 0x080017F0: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x080017F4: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
L_080017F8:
    // 0x080017F8: bne         $v0, $at, L_08001814
    if (ctx->r2 != ctx->r1) {
        // 0x080017FC: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_08001814;
    }
    // 0x080017FC: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001800: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x08001804: jalr        $t9
    // 0x08001808: addiu       $a0, $zero, 0xFE
    ctx->r4 = ADD32(0, 0XFE);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_38;
    // 0x08001808: addiu       $a0, $zero, 0xFE
    ctx->r4 = ADD32(0, 0XFE);
    after_38:
    // 0x0800180C: b           L_08001AF0
    // 0x08001810: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
        goto L_08001AF0;
    // 0x08001810: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
L_08001814:
    // 0x08001814: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x08001818: bne         $v0, $at, L_08001830
    if (ctx->r2 != ctx->r1) {
        // 0x0800181C: addiu       $a1, $zero, 0x3
        ctx->r5 = ADD32(0, 0X3);
            goto L_08001830;
    }
    // 0x0800181C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x08001820: jal         0x080005E0
    // 0x08001824: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    func_080005E0_73A480(rdram, ctx);
        goto after_39;
    // 0x08001824: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_39:
    // 0x08001828: b           L_08001AF0
    // 0x0800182C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
        goto L_08001AF0;
    // 0x0800182C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
L_08001830:
    // 0x08001830: addiu       $at, $zero, 0x5A
    ctx->r1 = ADD32(0, 0X5A);
    // 0x08001834: bne         $v0, $at, L_08001AEC
    if (ctx->r2 != ctx->r1) {
        // 0x08001838: addiu       $t1, $zero, 0x9
        ctx->r9 = ADD32(0, 0X9);
            goto L_08001AEC;
    }
    // 0x08001838: addiu       $t1, $zero, 0x9
    ctx->r9 = ADD32(0, 0X9);
    // 0x0800183C: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    // 0x08001840: b           L_08001AEC
    // 0x08001844: sb          $t1, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r9;
        goto L_08001AEC;
    // 0x08001844: sb          $t1, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r9;
L_08001848:
    // 0x08001848: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800184C: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x08001850: jalr        $t9
    // 0x08001854: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_40;
    // 0x08001854: nop

    after_40:
    // 0x08001858: bne         $v0, $zero, L_08001AEC
    if (ctx->r2 != 0) {
        // 0x0800185C: lw          $s0, 0x28($sp)
        ctx->r16 = MEM_W(ctx->r29, 0X28);
            goto L_08001AEC;
    }
    // 0x0800185C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x08001860: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x08001864: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x08001868: jal         0x080005E0
    // 0x0800186C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_080005E0_73A480(rdram, ctx);
        goto after_41;
    // 0x0800186C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_41:
    // 0x08001870: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x08001874: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    // 0x08001878: b           L_08001AEC
    // 0x0800187C: sb          $t2, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r10;
        goto L_08001AEC;
    // 0x0800187C: sb          $t2, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r10;
L_08001880:
    // 0x08001880: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x08001884: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x08001888: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800188C: lh          $t3, 0xD0($s0)
    ctx->r11 = MEM_H(ctx->r16, 0XD0);
    // 0x08001890: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x08001894: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x08001898: bnel        $t3, $at, L_08001AF0
    if (ctx->r11 != ctx->r1) {
        // 0x0800189C: lw          $s0, 0x28($sp)
        ctx->r16 = MEM_W(ctx->r29, 0X28);
            goto L_08001AF0;
    }
    goto skip_4;
    // 0x0800189C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    skip_4:
    // 0x080018A0: jalr        $t9
    // 0x080018A4: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_42;
    // 0x080018A4: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    after_42:
    // 0x080018A8: addiu       $t4, $zero, 0xB
    ctx->r12 = ADD32(0, 0XB);
    // 0x080018AC: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    // 0x080018B0: b           L_08001AEC
    // 0x080018B4: sb          $t4, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r12;
        goto L_08001AEC;
    // 0x080018B4: sb          $t4, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r12;
L_080018B8:
    // 0x080018B8: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080018BC: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x080018C0: jalr        $t9
    // 0x080018C4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_43;
    // 0x080018C4: nop

    after_43:
    // 0x080018C8: bne         $v0, $zero, L_08001AEC
    if (ctx->r2 != 0) {
        // 0x080018CC: lw          $s0, 0x28($sp)
        ctx->r16 = MEM_W(ctx->r29, 0X28);
            goto L_08001AEC;
    }
    // 0x080018CC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x080018D0: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x080018D4: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x080018D8: jal         0x080005E0
    // 0x080018DC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_080005E0_73A480(rdram, ctx);
        goto after_44;
    // 0x080018DC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_44:
    // 0x080018E0: addiu       $t5, $zero, 0xC
    ctx->r13 = ADD32(0, 0XC);
    // 0x080018E4: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    // 0x080018E8: b           L_08001AEC
    // 0x080018EC: sb          $t5, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r13;
        goto L_08001AEC;
    // 0x080018EC: sb          $t5, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r13;
L_080018F0:
    // 0x080018F0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x080018F4: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x080018F8: lh          $t6, 0xD0($s0)
    ctx->r14 = MEM_H(ctx->r16, 0XD0);
    // 0x080018FC: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x08001900: bnel        $t6, $at, L_08001AF0
    if (ctx->r14 != ctx->r1) {
        // 0x08001904: lw          $s0, 0x28($sp)
        ctx->r16 = MEM_W(ctx->r29, 0X28);
            goto L_08001AF0;
    }
    goto skip_5;
    // 0x08001904: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    skip_5:
    // 0x08001908: jal         0x080005AC
    // 0x0800190C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    func_080005AC_73A44C(rdram, ctx);
        goto after_45;
    // 0x0800190C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_45:
    // 0x08001910: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001914: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x08001918: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x0800191C: jalr        $t9
    // 0x08001920: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_46;
    // 0x08001920: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    after_46:
    // 0x08001924: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001928: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x0800192C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08001930: lui         $a1, 0xC2C8
    ctx->r5 = S32(0XC2C8 << 16);
    // 0x08001934: lui         $a2, 0xC33E
    ctx->r6 = S32(0XC33E << 16);
    // 0x08001938: jalr        $t9
    // 0x0800193C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_47;
    // 0x0800193C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_47:
    // 0x08001940: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001944: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x08001948: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x0800194C: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    // 0x08001950: lui         $a2, 0xC316
    ctx->r6 = S32(0XC316 << 16);
    // 0x08001954: jalr        $t9
    // 0x08001958: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_48;
    // 0x08001958: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    after_48:
    // 0x0800195C: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x08001960: addiu       $t9, $t9, -0x5324
    ctx->r25 = ADD32(ctx->r25, -0X5324);
    // 0x08001964: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x08001968: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x0800196C: jalr        $t9
    // 0x08001970: addiu       $a1, $zero, 0xDD
    ctx->r5 = ADD32(0, 0XDD);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_49;
    // 0x08001970: addiu       $a1, $zero, 0xDD
    ctx->r5 = ADD32(0, 0XDD);
    after_49:
    // 0x08001974: addiu       $t7, $zero, 0xD
    ctx->r15 = ADD32(0, 0XD);
    // 0x08001978: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    // 0x0800197C: b           L_08001AEC
    // 0x08001980: sb          $t7, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r15;
        goto L_08001AEC;
    // 0x08001980: sb          $t7, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r15;
L_08001984:
    // 0x08001984: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x08001988: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x0800198C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08001990: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x08001994: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08001998: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x0800199C: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x080019A0: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x080019A4: lui         $at, 0xC1A0
    ctx->r1 = S32(0XC1A0 << 16);
    // 0x080019A8: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x080019AC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080019B0: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x080019B4: addiu       $t9, $t9, -0x5324
    ctx->r25 = ADD32(ctx->r25, -0X5324);
    // 0x080019B8: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x080019BC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x080019C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080019C4: swc1        $f6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f6.u32l;
    // 0x080019C8: lw          $t8, -0x39F4($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X39F4);
    // 0x080019CC: lwc1        $f10, 0x8($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X8);
    // 0x080019D0: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x080019D4: nop

    // 0x080019D8: bc1fl       L_08001AF0
    if (!c1cs) {
        // 0x080019DC: lw          $s0, 0x28($sp)
        ctx->r16 = MEM_W(ctx->r29, 0X28);
            goto L_08001AF0;
    }
    goto skip_6;
    // 0x080019DC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    skip_6:
    // 0x080019E0: jalr        $t9
    // 0x080019E4: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_50;
    // 0x080019E4: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    after_50:
    // 0x080019E8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x080019EC: addiu       $t0, $zero, 0xE
    ctx->r8 = ADD32(0, 0XE);
    // 0x080019F0: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x080019F4: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    // 0x080019F8: b           L_08001AEC
    // 0x080019FC: sb          $t0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r8;
        goto L_08001AEC;
    // 0x080019FC: sb          $t0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r8;
L_08001A00:
    // 0x08001A00: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x08001A04: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08001A08: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001A0C: lh          $v0, 0xD0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XD0);
    // 0x08001A10: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08001A14: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x08001A18: bnel        $v0, $at, L_08001A3C
    if (ctx->r2 != ctx->r1) {
        // 0x08001A1C: addiu       $at, $zero, 0x1E
        ctx->r1 = ADD32(0, 0X1E);
            goto L_08001A3C;
    }
    goto skip_7;
    // 0x08001A1C: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    skip_7:
    // 0x08001A20: jalr        $t9
    // 0x08001A24: addiu       $a0, $zero, 0x6D
    ctx->r4 = ADD32(0, 0X6D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_51;
    // 0x08001A24: addiu       $a0, $zero, 0x6D
    ctx->r4 = ADD32(0, 0X6D);
    after_51:
    // 0x08001A28: jal         0x08000488
    // 0x08001A2C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_08000488_73A328(rdram, ctx);
        goto after_52;
    // 0x08001A2C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_52:
    // 0x08001A30: b           L_08001AEC
    // 0x08001A34: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
        goto L_08001AEC;
    // 0x08001A34: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x08001A38: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
L_08001A3C:
    // 0x08001A3C: bne         $v0, $at, L_08001AEC
    if (ctx->r2 != ctx->r1) {
        // 0x08001A40: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_08001AEC;
    }
    // 0x08001A40: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001A44: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x08001A48: jalr        $t9
    // 0x08001A4C: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_53;
    // 0x08001A4C: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    after_53:
    // 0x08001A50: addiu       $t1, $zero, 0xF
    ctx->r9 = ADD32(0, 0XF);
    // 0x08001A54: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    // 0x08001A58: b           L_08001AEC
    // 0x08001A5C: sb          $t1, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r9;
        goto L_08001AEC;
    // 0x08001A5C: sb          $t1, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r9;
L_08001A60:
    // 0x08001A60: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001A64: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x08001A68: jalr        $t9
    // 0x08001A6C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_54;
    // 0x08001A6C: nop

    after_54:
    // 0x08001A70: bne         $v0, $zero, L_08001AEC
    if (ctx->r2 != 0) {
        // 0x08001A74: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_08001AEC;
    }
    // 0x08001A74: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001A78: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x08001A7C: jalr        $t9
    // 0x08001A80: addiu       $a0, $zero, 0x1D1
    ctx->r4 = ADD32(0, 0X1D1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_55;
    // 0x08001A80: addiu       $a0, $zero, 0x1D1
    ctx->r4 = ADD32(0, 0X1D1);
    after_55:
    // 0x08001A84: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x08001A88: addiu       $t2, $zero, 0x10
    ctx->r10 = ADD32(0, 0X10);
    // 0x08001A8C: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x08001A90: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    // 0x08001A94: b           L_08001AEC
    // 0x08001A98: sb          $t2, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r10;
        goto L_08001AEC;
    // 0x08001A98: sb          $t2, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r10;
L_08001A9C:
    // 0x08001A9C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001AA0: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x08001AA4: jalr        $t9
    // 0x08001AA8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_56;
    // 0x08001AA8: nop

    after_56:
    // 0x08001AAC: bne         $v0, $zero, L_08001AEC
    if (ctx->r2 != 0) {
        // 0x08001AB0: lw          $s0, 0x28($sp)
        ctx->r16 = MEM_W(ctx->r29, 0X28);
            goto L_08001AEC;
    }
    // 0x08001AB0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x08001AB4: addiu       $t3, $zero, 0x11
    ctx->r11 = ADD32(0, 0X11);
    // 0x08001AB8: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x08001ABC: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    // 0x08001AC0: b           L_08001AEC
    // 0x08001AC4: sb          $t3, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r11;
        goto L_08001AEC;
    // 0x08001AC4: sb          $t3, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r11;
L_08001AC8:
    // 0x08001AC8: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x08001ACC: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x08001AD0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001AD4: lh          $t5, 0xD0($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XD0);
    // 0x08001AD8: addiu       $t9, $t9, 0x7470
    ctx->r25 = ADD32(ctx->r25, 0X7470);
    // 0x08001ADC: bnel        $t5, $at, L_08001AF0
    if (ctx->r13 != ctx->r1) {
        // 0x08001AE0: lw          $s0, 0x28($sp)
        ctx->r16 = MEM_W(ctx->r29, 0X28);
            goto L_08001AF0;
    }
    goto skip_8;
    // 0x08001AE0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    skip_8:
    // 0x08001AE4: jalr        $t9
    // 0x08001AE8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_57;
    // 0x08001AE8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_57:
L_08001AEC:
    // 0x08001AEC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
L_08001AF0:
    // 0x08001AF0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001AF4: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x08001AF8: lw          $a0, 0xE0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE0);
    // 0x08001AFC: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x08001B00: beq         $a0, $zero, L_08001B10
    if (ctx->r4 == 0) {
        // 0x08001B04: nop
    
            goto L_08001B10;
    }
    // 0x08001B04: nop

    // 0x08001B08: jalr        $t9
    // 0x08001B0C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_58;
    // 0x08001B0C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    after_58:
L_08001B10:
    // 0x08001B10: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x08001B14: addiu       $v1, $v1, -0x39F4
    ctx->r3 = ADD32(ctx->r3, -0X39F4);
    // 0x08001B18: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x08001B1C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x08001B20: addiu       $v0, $v0, -0x39E4
    ctx->r2 = ADD32(ctx->r2, -0X39E4);
    // 0x08001B24: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x08001B28: lhu         $t7, 0x16($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X16);
    // 0x08001B2C: sh          $t7, 0x16($t8)
    MEM_H(0X16, ctx->r24) = ctx->r15;
    // 0x08001B30: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x08001B34: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x08001B38: lwc1        $f16, 0x8($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X8);
    // 0x08001B3C: swc1        $f16, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->f16.u32l;
    // 0x08001B40: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x08001B44: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x08001B48: lwc1        $f18, 0xC($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0XC);
    // 0x08001B4C: swc1        $f18, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->f18.u32l;
    // 0x08001B50: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x08001B54: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x08001B58: lwc1        $f4, 0x10($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X10);
    // 0x08001B5C: swc1        $f4, 0x10($t5)
    MEM_W(0X10, ctx->r13) = ctx->f4.u32l;
    // 0x08001B60: lh          $t9, 0x0($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X0);
    // 0x08001B64: addiu       $t6, $t9, 0x1
    ctx->r14 = ADD32(ctx->r25, 0X1);
    // 0x08001B68: sh          $t6, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r14;
    // 0x08001B6C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08001B70: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08001B74: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08001B78: jr          $ra
    // 0x08001B7C: nop

    TRACE_RETURN()
    return;
    // 0x08001B7C: nop

;}
RECOMP_FUNC void func_08000000_739EA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000000: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000004: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000008: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800000C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x08000010: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x08000014: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08000018: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x0800001C: jalr        $t9
    // 0x08000020: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000020: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_0:
    // 0x08000024: lhu         $a0, 0x2E($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X2E);
    // 0x08000028: beq         $v0, $zero, L_0800004C
    if (ctx->r2 == 0) {
        // 0x0800002C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_0800004C;
    }
    // 0x0800002C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x08000030: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000034: sh          $a0, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r4;
    // 0x08000038: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x0800003C: jalr        $t9
    // 0x08000040: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000040: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x08000044: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x08000048: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
L_0800004C:
    // 0x0800004C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000050: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000054: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x08000058: jr          $ra
    // 0x0800005C: nop

    TRACE_RETURN()
    return;
    // 0x0800005C: nop

;}
RECOMP_FUNC void func_08000060_739F00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000060: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x08000064: lw          $v1, 0x5C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X5C);
    // 0x08000068: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x0800006C: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x08000070: beql        $v1, $zero, L_0800009C
    if (ctx->r3 == 0) {
        // 0x08000074: lw          $t6, 0x18($v0)
        ctx->r14 = MEM_W(ctx->r2, 0X18);
            goto L_0800009C;
    }
    goto skip_0;
    // 0x08000074: lw          $t6, 0x18($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X18);
    skip_0:
    // 0x08000078: beq         $v1, $at, L_080000E0
    if (ctx->r3 == ctx->r1) {
        // 0x0800007C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_080000E0;
    }
    // 0x0800007C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08000080: beq         $v1, $at, L_08000170
    if (ctx->r3 == ctx->r1) {
        // 0x08000084: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_08000170;
    }
    // 0x08000084: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x08000088: beql        $v1, $at, L_080001B0
    if (ctx->r3 == ctx->r1) {
        // 0x0800008C: addiu       $v0, $a0, 0x5C
        ctx->r2 = ADD32(ctx->r4, 0X5C);
            goto L_080001B0;
    }
    goto skip_1;
    // 0x0800008C: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    skip_1:
    // 0x08000090: b           L_080001B8
    // 0x08000094: lwc1        $f2, 0x78($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X78);
        goto L_080001B8;
    // 0x08000094: lwc1        $f2, 0x78($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X78);
    // 0x08000098: lw          $t6, 0x18($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X18);
L_0800009C:
    // 0x0800009C: lwc1        $f4, 0x1C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x080000A0: lwc1        $f6, 0x20($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X20);
    // 0x080000A4: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x080000A8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x080000AC: cvt.s.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
    // 0x080000B0: swc1        $f8, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f8.u32l;
    // 0x080000B4: lwc1        $f2, 0x1C($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x080000B8: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x080000BC: nop

    // 0x080000C0: bc1fl       L_080001BC
    if (!c1cs) {
        // 0x080000C4: cfc1        $t9, $FpcCsr
        ctx->r25 = get_cop1_cs();
            goto L_080001BC;
    }
    goto skip_2;
    // 0x080000C4: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    skip_2:
    // 0x080000C8: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x080000CC: lw          $t7, 0x8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X8);
    // 0x080000D0: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x080000D4: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x080000D8: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x080000DC: sw          $t7, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r15;
L_080000E0:
    // 0x080000E0: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x080000E4: lw          $t0, 0x18($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X18);
    // 0x080000E8: lw          $a1, 0x10($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X10);
    // 0x080000EC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x080000F0: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x080000F4: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x080000F8: sltiu       $v1, $a1, 0x1
    ctx->r3 = ctx->r5 < 0X1 ? 1 : 0;
    // 0x080000FC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x08000100: addiu       $t2, $a1, -0x1
    ctx->r10 = ADD32(ctx->r5, -0X1);
    // 0x08000104: bne         $a1, $at, L_08000114
    if (ctx->r5 != ctx->r1) {
        // 0x08000108: swc1        $f18, 0x1C($v0)
        MEM_W(0X1C, ctx->r2) = ctx->f18.u32l;
            goto L_08000114;
    }
    // 0x08000108: swc1        $f18, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f18.u32l;
    // 0x0800010C: b           L_08000170
    // 0x08000110: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
        goto L_08000170;
    // 0x08000110: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
L_08000114:
    // 0x08000114: beq         $v1, $zero, L_08000168
    if (ctx->r3 == 0) {
        // 0x08000118: sw          $t2, 0x10($v0)
        MEM_W(0X10, ctx->r2) = ctx->r10;
            goto L_08000168;
    }
    // 0x08000118: sw          $t2, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r10;
    // 0x0800011C: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x08000120: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x08000124: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x08000128: beq         $v1, $zero, L_08000150
    if (ctx->r3 == 0) {
        // 0x0800012C: sw          $t4, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r12;
            goto L_08000150;
    }
    // 0x0800012C: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x08000130: lw          $t5, 0x18($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X18);
    // 0x08000134: mtc1        $v1, $f8
    ctx->f8.u32l = ctx->r3;
    // 0x08000138: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x0800013C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x08000140: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08000144: div.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x08000148: b           L_08000170
    // 0x0800014C: swc1        $f16, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f16.u32l;
        goto L_08000170;
    // 0x0800014C: swc1        $f16, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f16.u32l;
L_08000150:
    // 0x08000150: lw          $t6, 0x18($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X18);
    // 0x08000154: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x08000158: nop

    // 0x0800015C: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x08000160: b           L_08000170
    // 0x08000164: swc1        $f4, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f4.u32l;
        goto L_08000170;
    // 0x08000164: swc1        $f4, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f4.u32l;
L_08000168:
    // 0x08000168: b           L_080001B8
    // 0x0800016C: lwc1        $f2, 0x1C($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X1C);
        goto L_080001B8;
    // 0x0800016C: lwc1        $f2, 0x1C($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X1C);
L_08000170:
    // 0x08000170: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x08000174: lwc1        $f8, 0x1C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x08000178: lwc1        $f6, 0x20($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X20);
    // 0x0800017C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08000180: sub.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x08000184: swc1        $f10, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f10.u32l;
    // 0x08000188: lwc1        $f2, 0x1C($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x0800018C: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x08000190: nop

    // 0x08000194: bc1fl       L_080001BC
    if (!c1cs) {
        // 0x08000198: cfc1        $t9, $FpcCsr
        ctx->r25 = get_cop1_cs();
            goto L_080001BC;
    }
    goto skip_3;
    // 0x08000198: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    skip_3:
    // 0x0800019C: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x080001A0: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x080001A4: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x080001A8: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x080001AC: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
L_080001B0:
    // 0x080001B0: sw          $zero, 0x14($v0)
    MEM_W(0X14, ctx->r2) = 0;
    // 0x080001B4: lwc1        $f2, 0x1C($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X1C);
L_080001B8:
    // 0x080001B8: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
L_080001BC:
    // 0x080001BC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x080001C0: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x080001C4: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x080001C8: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x080001CC: cvt.w.s     $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    ctx->f16.u32l = CVT_W_S(ctx->f2.fl);
    // 0x080001D0: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x080001D4: nop

    // 0x080001D8: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x080001DC: beql        $t0, $zero, L_0800022C
    if (ctx->r8 == 0) {
        // 0x080001E0: mfc1        $t0, $f16
        ctx->r8 = (int32_t)ctx->f16.u32l;
            goto L_0800022C;
    }
    goto skip_4;
    // 0x080001E0: mfc1        $t0, $f16
    ctx->r8 = (int32_t)ctx->f16.u32l;
    skip_4:
    // 0x080001E4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x080001E8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x080001EC: sub.s       $f16, $f2, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f2.fl - ctx->f16.fl;
    // 0x080001F0: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x080001F4: nop

    // 0x080001F8: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x080001FC: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x08000200: nop

    // 0x08000204: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x08000208: bne         $t0, $zero, L_08000220
    if (ctx->r8 != 0) {
        // 0x0800020C: nop
    
            goto L_08000220;
    }
    // 0x0800020C: nop

    // 0x08000210: mfc1        $t0, $f16
    ctx->r8 = (int32_t)ctx->f16.u32l;
    // 0x08000214: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08000218: b           L_08000238
    // 0x0800021C: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
        goto L_08000238;
    // 0x0800021C: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
L_08000220:
    // 0x08000220: b           L_08000238
    // 0x08000224: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
        goto L_08000238;
    // 0x08000224: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x08000228: mfc1        $t0, $f16
    ctx->r8 = (int32_t)ctx->f16.u32l;
L_0800022C:
    // 0x0800022C: nop

    // 0x08000230: bltz        $t0, L_08000220
    if (SIGNED(ctx->r8) < 0) {
        // 0x08000234: nop
    
            goto L_08000220;
    }
    // 0x08000234: nop

L_08000238:
    // 0x08000238: lw          $t1, -0x3A38($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X3A38);
    // 0x0800023C: lui         $t2, 0x4
    ctx->r10 = S32(0X4 << 16);
    // 0x08000240: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x08000244: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x08000248: lw          $t2, -0x4FE8($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X4FE8);
    // 0x0800024C: jr          $ra
    // 0x08000250: sb          $t0, 0x10($t2)
    MEM_B(0X10, ctx->r10) = ctx->r8;
    TRACE_RETURN()
    return;
    // 0x08000250: sb          $t0, 0x10($t2)
    MEM_B(0X10, ctx->r10) = ctx->r8;
;}
RECOMP_FUNC void func_08000CDC_73AB7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000CDC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08000CE0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08000CE4: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(68, 0X0) << 16);
    // 0x08000CE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000CEC: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x08000CF0: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x08000CF4: addiu       $t9, $t9, 0x0
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(68, 0X0));
    // 0x08000CF8: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(68, 0X7A8) << 16);
    // 0x08000CFC: addiu       $a1, $a1, 0x7A8
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(68, 0X7A8));
    // 0x08000D00: addiu       $a3, $zero, 0x4D
    ctx->r7 = ADD32(0, 0X4D);
    // 0x08000D04: jalr        $t9
    // 0x08000D08: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000D08: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x08000D0C: bne         $v0, $zero, L_08000D1C
    if (ctx->r2 != 0) {
        // 0x08000D10: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_08000D1C;
    }
    // 0x08000D10: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x08000D14: b           L_08000DE8
    // 0x08000D18: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_08000DE8;
    // 0x08000D18: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_08000D1C:
    // 0x08000D1C: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08000D20: lw          $v1, 0x18($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X18);
    // 0x08000D24: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x08000D28: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x08000D2C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000D30: addiu       $t9, $t9, 0x48F0
    ctx->r25 = ADD32(ctx->r25, 0X48F0);
    // 0x08000D34: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x08000D38: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    // 0x08000D3C: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x08000D40: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x08000D44: jalr        $t9
    // 0x08000D48: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000D48: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_1:
    // 0x08000D4C: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x08000D50: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x08000D54: bne         $v0, $zero, L_08000D74
    if (ctx->r2 != 0) {
        // 0x08000D58: sw          $v0, 0xE4($a2)
        MEM_W(0XE4, ctx->r6) = ctx->r2;
            goto L_08000D74;
    }
    // 0x08000D58: sw          $v0, 0xE4($a2)
    MEM_W(0XE4, ctx->r6) = ctx->r2;
    // 0x08000D5C: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(68, 0XAD0) << 16);
    // 0x08000D60: addiu       $t9, $t9, 0xAD0
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(68, 0XAD0));
    // 0x08000D64: jalr        $t9
    // 0x08000D68: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000D68: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_2:
    // 0x08000D6C: b           L_08000DE8
    // 0x08000D70: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_08000DE8;
    // 0x08000D70: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_08000D74:
    // 0x08000D74: addiu       $t6, $zero, 0x310
    ctx->r14 = ADD32(0, 0X310);
    // 0x08000D78: addiu       $t7, $zero, 0x221
    ctx->r15 = ADD32(0, 0X221);
    // 0x08000D7C: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(68, 0XBA4) << 16);
    // 0x08000D80: sh          $t6, 0x5E($a2)
    MEM_H(0X5E, ctx->r6) = ctx->r14;
    // 0x08000D84: sw          $t7, 0x60($a2)
    MEM_W(0X60, ctx->r6) = ctx->r15;
    // 0x08000D88: addiu       $t9, $t9, 0xBA4
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(68, 0XBA4));
    // 0x08000D8C: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    // 0x08000D90: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x08000D94: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x08000D98: jalr        $t9
    // 0x08000D9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000D9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x08000DA0: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(68, 0X1D10) << 16);
    // 0x08000DA4: lwc1        $f0, 0x1D10($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(68, 0X1D10));
    // 0x08000DA8: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x08000DAC: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x08000DB0: addiu       $t8, $zero, 0x300
    ctx->r24 = ADD32(0, 0X300);
    // 0x08000DB4: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    // 0x08000DB8: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x08000DBC: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    // 0x08000DC0: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x08000DC4: lbu         $t0, 0x5($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X5);
    // 0x08000DC8: swc1        $f4, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f4.u32l;
    // 0x08000DCC: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x08000DD0: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x08000DD4: swc1        $f6, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f6.u32l;
    // 0x08000DD8: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x08000DDC: sh          $t8, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r24;
    // 0x08000DE0: sb          $t1, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r9;
    // 0x08000DE4: swc1        $f8, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f8.u32l;
L_08000DE8:
    // 0x08000DE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000DEC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08000DF0: jr          $ra
    // 0x08000DF4: nop

    TRACE_RETURN()
    return;
    // 0x08000DF4: nop

;}
RECOMP_FUNC void func_08000BA4_73AA44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000BA4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000BA8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000BAC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000BB0: beq         $a1, $zero, L_08000BE4
    if (ctx->r5 == 0) {
        // 0x08000BB4: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_08000BE4;
    }
    // 0x08000BB4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000BB8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000BBC: beq         $a1, $at, L_08000C0C
    if (ctx->r5 == ctx->r1) {
        // 0x08000BC0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08000C0C;
    }
    // 0x08000BC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000BC4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x08000BC8: beq         $a1, $at, L_08000C48
    if (ctx->r5 == ctx->r1) {
        // 0x08000BCC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08000C48;
    }
    // 0x08000BCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000BD0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x08000BD4: beq         $a1, $at, L_08000C7C
    if (ctx->r5 == ctx->r1) {
        // 0x08000BD8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08000C7C;
    }
    // 0x08000BD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000BDC: b           L_08000CCC
    // 0x08000BE0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08000CCC;
    // 0x08000BE0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08000BE4:
    // 0x08000BE4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000BE8: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000BEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000BF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000BF4: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08000BF8: jalr        $t9
    // 0x08000BFC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000BFC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x08000C00: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x08000C04: b           L_08000CC8
    // 0x08000C08: sh          $t6, 0xDE($s0)
    MEM_H(0XDE, ctx->r16) = ctx->r14;
        goto L_08000CC8;
    // 0x08000C08: sh          $t6, 0xDE($s0)
    MEM_H(0XDE, ctx->r16) = ctx->r14;
L_08000C0C:
    // 0x08000C0C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000C10: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000C14: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08000C18: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08000C1C: jalr        $t9
    // 0x08000C20: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000C20: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x08000C24: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x08000C28: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000C2C: addiu       $v0, $s0, 0xD0
    ctx->r2 = ADD32(ctx->r16, 0XD0);
    // 0x08000C30: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x08000C34: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x08000C38: sh          $t7, 0xE($v0)
    MEM_H(0XE, ctx->r2) = ctx->r15;
    // 0x08000C3C: sb          $t8, 0xC($v0)
    MEM_B(0XC, ctx->r2) = ctx->r24;
    // 0x08000C40: b           L_08000CC8
    // 0x08000C44: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
        goto L_08000CC8;
    // 0x08000C44: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
L_08000C48:
    // 0x08000C48: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000C4C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000C50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000C54: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08000C58: jalr        $t9
    // 0x08000C5C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000C5C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x08000C60: addiu       $v0, $s0, 0xD0
    ctx->r2 = ADD32(ctx->r16, 0XD0);
    // 0x08000C64: lbu         $t1, 0x0($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X0);
    // 0x08000C68: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x08000C6C: sh          $t0, 0xE($v0)
    MEM_H(0XE, ctx->r2) = ctx->r8;
    // 0x08000C70: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x08000C74: b           L_08000CC8
    // 0x08000C78: sb          $t2, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r10;
        goto L_08000CC8;
    // 0x08000C78: sb          $t2, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r10;
L_08000C7C:
    // 0x08000C7C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000C80: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000C84: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x08000C88: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08000C8C: jalr        $t9
    // 0x08000C90: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000C90: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x08000C94: addiu       $v0, $s0, 0xD0
    ctx->r2 = ADD32(ctx->r16, 0XD0);
    // 0x08000C98: lbu         $t5, 0x0($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X0);
    // 0x08000C9C: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x08000CA0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000CA4: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x08000CA8: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x08000CAC: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x08000CB0: sh          $t3, 0xE($v0)
    MEM_H(0XE, ctx->r2) = ctx->r11;
    // 0x08000CB4: sb          $t4, 0xC($v0)
    MEM_B(0XC, ctx->r2) = ctx->r12;
    // 0x08000CB8: sb          $zero, 0x1($v0)
    MEM_B(0X1, ctx->r2) = 0;
    // 0x08000CBC: sh          $zero, 0x8($v0)
    MEM_H(0X8, ctx->r2) = 0;
    // 0x08000CC0: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
    // 0x08000CC4: swc1        $f6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f6.u32l;
L_08000CC8:
    // 0x08000CC8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08000CCC:
    // 0x08000CCC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000CD0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000CD4: jr          $ra
    // 0x08000CD8: nop

    TRACE_RETURN()
    return;
    // 0x08000CD8: nop

;}
RECOMP_FUNC void func_080006E0_73A580(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080006E0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x080006E4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x080006E8: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(68, 0X0) << 16);
    // 0x080006EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080006F0: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x080006F4: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x080006F8: addiu       $t9, $t9, 0x0
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(68, 0X0));
    // 0x080006FC: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(68, 0X4D8) << 16);
    // 0x08000700: addiu       $a1, $a1, 0x4D8
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(68, 0X4D8));
    // 0x08000704: addiu       $a3, $zero, 0x4D
    ctx->r7 = ADD32(0, 0X4D);
    // 0x08000708: jalr        $t9
    // 0x0800070C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800070C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x08000710: addiu       $t6, $v0, 0xD0
    ctx->r14 = ADD32(ctx->r2, 0XD0);
    // 0x08000714: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x08000718: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x0800071C: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x08000720: addiu       $t7, $zero, 0x353
    ctx->r15 = ADD32(0, 0X353);
    // 0x08000724: addiu       $t8, $zero, 0x221
    ctx->r24 = ADD32(0, 0X221);
    // 0x08000728: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800072C: sh          $t7, 0x5E($v0)
    MEM_H(0X5E, ctx->r2) = ctx->r15;
    // 0x08000730: sw          $t8, 0x60($v0)
    MEM_W(0X60, ctx->r2) = ctx->r24;
    // 0x08000734: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000738: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x0800073C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000740: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08000744: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x08000748: jalr        $t9
    // 0x0800074C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800074C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_1:
    // 0x08000750: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(68, 0X1D0C) << 16);
    // 0x08000754: lwc1        $f0, 0x1D0C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(68, 0X1D0C));
    // 0x08000758: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x0800075C: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x08000760: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x08000764: addiu       $t2, $zero, 0x300
    ctx->r10 = ADD32(0, 0X300);
    // 0x08000768: sh          $t0, 0x6($t1)
    MEM_H(0X6, ctx->r9) = ctx->r8;
    // 0x0800076C: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    // 0x08000770: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x08000774: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    // 0x08000778: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x0800077C: swc1        $f4, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f4.u32l;
    // 0x08000780: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x08000784: swc1        $f6, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f6.u32l;
    // 0x08000788: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x0800078C: sh          $t2, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r10;
    // 0x08000790: swc1        $f8, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f8.u32l;
    // 0x08000794: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000798: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x0800079C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x080007A0: jr          $ra
    // 0x080007A4: nop

    TRACE_RETURN()
    return;
    // 0x080007A4: nop

;}
RECOMP_FUNC void func_080005AC_73A44C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080005AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080005B0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080005B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080005B8: addiu       $t9, $t9, 0x4EF8
    ctx->r25 = ADD32(ctx->r25, 0X4EF8);
    // 0x080005BC: jalr        $t9
    // 0x080005C0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080005C0: nop

    after_0:
    // 0x080005C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080005C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080005CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x080005D0: jr          $ra
    // 0x080005D4: nop

    TRACE_RETURN()
    return;
    // 0x080005D4: nop

    // 0x080005D8: jr          $ra
    // 0x080005DC: nop

    TRACE_RETURN()
    return;
    // 0x080005DC: nop

;}
RECOMP_FUNC void func_080004D8_73A378(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080004D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080004DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080004E0: lbu         $t6, 0xD0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XD0);
    // 0x080004E4: sltiu       $at, $t6, 0x5
    ctx->r1 = ctx->r14 < 0X5 ? 1 : 0;
    // 0x080004E8: beq         $at, $zero, L_08000568
    if (ctx->r1 == 0) {
        // 0x080004EC: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_08000568;
    }
    // 0x080004EC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x080004F0: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(68, 0X1CDC) << 16);
    // 0x080004F4: addu        $at, $at, $t6
    gpr jr_addend_080004FC = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x080004F8: lw          $t6, 0x1CDC($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(68, 0X1CDC));
    // 0x080004FC: jr          $t6
    // 0x08000500: nop

    switch (jr_addend_080004FC >> 2) {
        case 0: goto L_08000504; break;
        case 1: goto L_08000568; break;
        case 2: goto L_08000510; break;
        case 3: goto L_08000528; break;
        case 4: goto L_08000540; break;
        default: switch_error(__func__, 0x080004FC, 0x08001CDC);
    }
    // 0x08000500: nop

L_08000504:
    // 0x08000504: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x08000508: b           L_08000568
    // 0x0800050C: sb          $t7, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = ctx->r15;
        goto L_08000568;
    // 0x0800050C: sb          $t7, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = ctx->r15;
L_08000510:
    // 0x08000510: lhu         $v0, 0x16($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X16);
    // 0x08000514: slti        $at, $v0, 0x300
    ctx->r1 = SIGNED(ctx->r2) < 0X300 ? 1 : 0;
    // 0x08000518: beq         $at, $zero, L_08000568
    if (ctx->r1 == 0) {
        // 0x0800051C: addiu       $t8, $v0, 0x10
        ctx->r24 = ADD32(ctx->r2, 0X10);
            goto L_08000568;
    }
    // 0x0800051C: addiu       $t8, $v0, 0x10
    ctx->r24 = ADD32(ctx->r2, 0X10);
    // 0x08000520: b           L_08000568
    // 0x08000524: sh          $t8, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r24;
        goto L_08000568;
    // 0x08000524: sh          $t8, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r24;
L_08000528:
    // 0x08000528: lhu         $v0, 0x16($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X16);
    // 0x0800052C: slti        $at, $v0, 0x101
    ctx->r1 = SIGNED(ctx->r2) < 0X101 ? 1 : 0;
    // 0x08000530: bne         $at, $zero, L_08000568
    if (ctx->r1 != 0) {
        // 0x08000534: addiu       $t9, $v0, -0x10
        ctx->r25 = ADD32(ctx->r2, -0X10);
            goto L_08000568;
    }
    // 0x08000534: addiu       $t9, $v0, -0x10
    ctx->r25 = ADD32(ctx->r2, -0X10);
    // 0x08000538: b           L_08000568
    // 0x0800053C: sh          $t9, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r25;
        goto L_08000568;
    // 0x0800053C: sh          $t9, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r25;
L_08000540:
    // 0x08000540: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08000544: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000548: lwc1        $f4, 0xC($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0XC);
    // 0x0800054C: lhu         $t0, 0x16($a1)
    ctx->r8 = MEM_HU(ctx->r5, 0X16);
    // 0x08000550: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08000554: addiu       $t2, $t0, 0x80
    ctx->r10 = ADD32(ctx->r8, 0X80);
    // 0x08000558: sh          $t2, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r10;
    // 0x0800055C: andi        $t3, $t2, 0x3FF
    ctx->r11 = ctx->r10 & 0X3FF;
    // 0x08000560: sh          $t3, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r11;
    // 0x08000564: swc1        $f8, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f8.u32l;
L_08000568:
    // 0x08000568: lbu         $t4, 0x7C($a1)
    ctx->r12 = MEM_BU(ctx->r5, 0X7C);
    // 0x0800056C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08000570: addiu       $v0, $a0, 0xD0
    ctx->r2 = ADD32(ctx->r4, 0XD0);
    // 0x08000574: bnel        $t4, $at, L_080005A0
    if (ctx->r12 != ctx->r1) {
        // 0x08000578: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_080005A0;
    }
    goto skip_0;
    // 0x08000578: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x0800057C: lh          $a1, 0x6($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X6);
    // 0x08000580: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x08000584: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000588: beq         $a1, $at, L_0800059C
    if (ctx->r5 == ctx->r1) {
        // 0x0800058C: addiu       $t9, $t9, 0x664C
        ctx->r25 = ADD32(ctx->r25, 0X664C);
            goto L_0800059C;
    }
    // 0x0800058C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000590: lw          $a2, 0x8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X8);
    // 0x08000594: jalr        $t9
    // 0x08000598: lbu         $a3, 0x4($v0)
    ctx->r7 = MEM_BU(ctx->r2, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000598: lbu         $a3, 0x4($v0)
    ctx->r7 = MEM_BU(ctx->r2, 0X4);
    after_0:
L_0800059C:
    // 0x0800059C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080005A0:
    // 0x080005A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080005A4: jr          $ra
    // 0x080005A8: nop

    TRACE_RETURN()
    return;
    // 0x080005A8: nop

;}
RECOMP_FUNC void func_08001064_73AF04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001064: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08001068: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800106C: lw          $t6, 0xE4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XE4);
    // 0x08001070: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x08001074: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08001078: beq         $t6, $zero, L_080010B4
    if (ctx->r14 == 0) {
        // 0x0800107C: lui         $at, 0xC
        ctx->r1 = S32(0XC << 16);
            goto L_080010B4;
    }
    // 0x0800107C: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x08001080: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x08001084: addiu       $v0, $a2, 0xD0
    ctx->r2 = ADD32(ctx->r6, 0XD0);
    // 0x08001088: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800108C: addiu       $t9, $t9, 0x4B74
    ctx->r25 = ADD32(ctx->r25, 0X4B74);
    // 0x08001090: lw          $a1, 0x14($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X14);
    // 0x08001094: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x08001098: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x0800109C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x080010A0: jalr        $t9
    // 0x080010A4: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080010A4: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_0:
    // 0x080010A8: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x080010AC: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x080010B0: sw          $zero, 0x14($v0)
    MEM_W(0X14, ctx->r2) = 0;
L_080010B4:
    // 0x080010B4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080010B8: addiu       $t9, $t9, 0x4EF8
    ctx->r25 = ADD32(ctx->r25, 0X4EF8);
    // 0x080010BC: jalr        $t9
    // 0x080010C0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080010C0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_1:
    // 0x080010C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080010C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080010CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x080010D0: jr          $ra
    // 0x080010D4: nop

    TRACE_RETURN()
    return;
    // 0x080010D4: nop

    // 0x080010D8: jr          $ra
    // 0x080010DC: nop

    TRACE_RETURN()
    return;
    // 0x080010DC: nop

    // 0x080010E0: jr          $ra
    // 0x080010E4: nop

    TRACE_RETURN()
    return;
    // 0x080010E4: nop

;}
RECOMP_FUNC void func_0800037C_73A21C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800037C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000380: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000384: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000388: addiu       $t9, $t9, 0x4EF8
    ctx->r25 = ADD32(ctx->r25, 0X4EF8);
    // 0x0800038C: jalr        $t9
    // 0x08000390: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000390: nop

    after_0:
    // 0x08000394: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000398: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800039C: jr          $ra
    // 0x080003A0: nop

    TRACE_RETURN()
    return;
    // 0x080003A0: nop

;}
RECOMP_FUNC void func_08000488_73A328(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000488: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800048C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000490: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000494: addiu       $t9, $t9, 0x4E08
    ctx->r25 = ADD32(ctx->r25, 0X4E08);
    // 0x08000498: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(68, 0X3A4) << 16);
    // 0x0800049C: addiu       $a1, $a1, 0x3A4
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(68, 0X3A4));
    // 0x080004A0: jalr        $t9
    // 0x080004A4: addiu       $a2, $zero, 0x4D
    ctx->r6 = ADD32(0, 0X4D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080004A4: addiu       $a2, $zero, 0x4D
    ctx->r6 = ADD32(0, 0X4D);
    after_0:
    // 0x080004A8: bne         $v0, $zero, L_080004B8
    if (ctx->r2 != 0) {
        // 0x080004AC: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_080004B8;
    }
    // 0x080004AC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x080004B0: b           L_080004C8
    // 0x080004B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_080004C8;
    // 0x080004B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_080004B8:
    // 0x080004B8: sw          $zero, 0x64($v1)
    MEM_W(0X64, ctx->r3) = 0;
    // 0x080004BC: sw          $zero, 0x5C($v1)
    MEM_W(0X5C, ctx->r3) = 0;
    // 0x080004C0: sw          $zero, 0x60($v1)
    MEM_W(0X60, ctx->r3) = 0;
    // 0x080004C4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_080004C8:
    // 0x080004C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080004CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080004D0: jr          $ra
    // 0x080004D4: nop

    TRACE_RETURN()
    return;
    // 0x080004D4: nop

;}
RECOMP_FUNC void func_080007A8_73A648(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080007A8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x080007AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080007B0: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x080007B4: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x080007B8: lbu         $v0, 0xD0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD0);
    // 0x080007BC: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x080007C0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x080007C4: beq         $v0, $zero, L_080007F8
    if (ctx->r2 == 0) {
        // 0x080007C8: addiu       $t0, $t0, 0xD0
        ctx->r8 = ADD32(ctx->r8, 0XD0);
            goto L_080007F8;
    }
    // 0x080007C8: addiu       $t0, $t0, 0xD0
    ctx->r8 = ADD32(ctx->r8, 0XD0);
    // 0x080007CC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x080007D0: beq         $v0, $at, L_08000800
    if (ctx->r2 == ctx->r1) {
        // 0x080007D4: lw          $t0, 0x48($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X48);
            goto L_08000800;
    }
    // 0x080007D4: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x080007D8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x080007DC: beq         $v0, $at, L_08000808
    if (ctx->r2 == ctx->r1) {
        // 0x080007E0: lw          $t8, 0x4C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X4C);
            goto L_08000808;
    }
    // 0x080007E0: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x080007E4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x080007E8: beq         $v0, $at, L_0800085C
    if (ctx->r2 == ctx->r1) {
        // 0x080007EC: lw          $t2, 0x4C($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X4C);
            goto L_0800085C;
    }
    // 0x080007EC: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x080007F0: b           L_08000918
    // 0x080007F4: addiu       $t0, $a0, 0xD0
    ctx->r8 = ADD32(ctx->r4, 0XD0);
        goto L_08000918;
    // 0x080007F4: addiu       $t0, $a0, 0xD0
    ctx->r8 = ADD32(ctx->r4, 0XD0);
L_080007F8:
    // 0x080007F8: b           L_08000918
    // 0x080007FC: sb          $t7, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r15;
        goto L_08000918;
    // 0x080007FC: sb          $t7, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r15;
L_08000800:
    // 0x08000800: b           L_08000918
    // 0x08000804: addiu       $t0, $t0, 0xD0
    ctx->r8 = ADD32(ctx->r8, 0XD0);
        goto L_08000918;
    // 0x08000804: addiu       $t0, $t0, 0xD0
    ctx->r8 = ADD32(ctx->r8, 0XD0);
L_08000808:
    // 0x08000808: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x0800080C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000810: lwc1        $f0, 0x10($t8)
    ctx->f0.u32l = MEM_W(ctx->r24, 0X10);
    // 0x08000814: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08000818: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x0800081C: nop

    // 0x08000820: bc1fl       L_0800083C
    if (!c1cs) {
        // 0x08000824: lw          $t9, 0x4C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X4C);
            goto L_0800083C;
    }
    goto skip_0;
    // 0x08000824: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    skip_0:
    // 0x08000828: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x0800082C: nop

    // 0x08000830: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x08000834: swc1        $f8, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f8.u32l;
    // 0x08000838: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
L_0800083C:
    // 0x0800083C: lhu         $v0, 0x16($t9)
    ctx->r2 = MEM_HU(ctx->r25, 0X16);
    // 0x08000840: slti        $at, $v0, 0x380
    ctx->r1 = SIGNED(ctx->r2) < 0X380 ? 1 : 0;
    // 0x08000844: beq         $at, $zero, L_08000850
    if (ctx->r1 == 0) {
        // 0x08000848: addiu       $t1, $v0, 0x8
        ctx->r9 = ADD32(ctx->r2, 0X8);
            goto L_08000850;
    }
    // 0x08000848: addiu       $t1, $v0, 0x8
    ctx->r9 = ADD32(ctx->r2, 0X8);
    // 0x0800084C: sh          $t1, 0x16($t9)
    MEM_H(0X16, ctx->r25) = ctx->r9;
L_08000850:
    // 0x08000850: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x08000854: b           L_08000918
    // 0x08000858: addiu       $t0, $t0, 0xD0
    ctx->r8 = ADD32(ctx->r8, 0XD0);
        goto L_08000918;
    // 0x08000858: addiu       $t0, $t0, 0xD0
    ctx->r8 = ADD32(ctx->r8, 0XD0);
L_0800085C:
    // 0x0800085C: lhu         $v0, 0x16($t2)
    ctx->r2 = MEM_HU(ctx->r10, 0X16);
    // 0x08000860: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x08000864: slti        $at, $v0, 0x3D0
    ctx->r1 = SIGNED(ctx->r2) < 0X3D0 ? 1 : 0;
    // 0x08000868: beq         $at, $zero, L_08000880
    if (ctx->r1 == 0) {
        // 0x0800086C: addiu       $t3, $v0, 0x8
        ctx->r11 = ADD32(ctx->r2, 0X8);
            goto L_08000880;
    }
    // 0x0800086C: addiu       $t3, $v0, 0x8
    ctx->r11 = ADD32(ctx->r2, 0X8);
    // 0x08000870: sh          $t3, 0x16($t2)
    MEM_H(0X16, ctx->r10) = ctx->r11;
    // 0x08000874: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x08000878: b           L_08000918
    // 0x0800087C: addiu       $t0, $t0, 0xD0
    ctx->r8 = ADD32(ctx->r8, 0XD0);
        goto L_08000918;
    // 0x0800087C: addiu       $t0, $t0, 0xD0
    ctx->r8 = ADD32(ctx->r8, 0XD0);
L_08000880:
    // 0x08000880: lbu         $t4, 0xD1($t0)
    ctx->r12 = MEM_BU(ctx->r8, 0XD1);
    // 0x08000884: addiu       $t0, $t0, 0xD0
    ctx->r8 = ADD32(ctx->r8, 0XD0);
    // 0x08000888: slti        $at, $t4, 0x3
    ctx->r1 = SIGNED(ctx->r12) < 0X3 ? 1 : 0;
    // 0x0800088C: beql        $at, $zero, L_0800091C
    if (ctx->r1 == 0) {
        // 0x08000890: lw          $t2, 0x4C($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X4C);
            goto L_0800091C;
    }
    goto skip_1;
    // 0x08000890: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    skip_1:
    // 0x08000894: lh          $v0, 0x8($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X8);
    // 0x08000898: addiu       $at, $zero, 0x16
    ctx->r1 = ADD32(0, 0X16);
    // 0x0800089C: addiu       $a0, $zero, 0x24F
    ctx->r4 = ADD32(0, 0X24F);
    // 0x080008A0: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x080008A4: mfhi        $v0
    ctx->r2 = hi;
    // 0x080008A8: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x080008AC: bne         $v0, $zero, L_080008E4
    if (ctx->r2 != 0) {
        // 0x080008B0: addiu       $a2, $zero, 0xA0
        ctx->r6 = ADD32(0, 0XA0);
            goto L_080008E4;
    }
    // 0x080008B0: addiu       $a2, $zero, 0xA0
    ctx->r6 = ADD32(0, 0XA0);
    // 0x080008B4: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080008B8: addiu       $t9, $t9, -0x73D0
    ctx->r25 = ADD32(ctx->r25, -0X73D0);
    // 0x080008BC: jalr        $t9
    // 0x080008C0: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080008C0: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    after_0:
    // 0x080008C4: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x080008C8: addiu       $at, $zero, 0x16
    ctx->r1 = ADD32(0, 0X16);
    // 0x080008CC: lh          $v0, 0x8($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X8);
    // 0x080008D0: lbu         $t6, 0x1($t0)
    ctx->r14 = MEM_BU(ctx->r8, 0X1);
    // 0x080008D4: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x080008D8: mfhi        $v0
    ctx->r2 = hi;
    // 0x080008DC: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x080008E0: sb          $t7, 0x1($t0)
    MEM_B(0X1, ctx->r8) = ctx->r15;
L_080008E4:
    // 0x080008E4: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x080008E8: bne         $v0, $at, L_08000918
    if (ctx->r2 != ctx->r1) {
        // 0x080008EC: addiu       $a0, $zero, 0x24F
        ctx->r4 = ADD32(0, 0X24F);
            goto L_08000918;
    }
    // 0x080008EC: addiu       $a0, $zero, 0x24F
    ctx->r4 = ADD32(0, 0X24F);
    // 0x080008F0: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080008F4: addiu       $t9, $t9, -0x73D0
    ctx->r25 = ADD32(ctx->r25, -0X73D0);
    // 0x080008F8: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x080008FC: addiu       $a2, $zero, 0xA0
    ctx->r6 = ADD32(0, 0XA0);
    // 0x08000900: jalr        $t9
    // 0x08000904: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000904: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    after_1:
    // 0x08000908: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x0800090C: lbu         $t1, 0x1($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X1);
    // 0x08000910: addiu       $t3, $t1, 0x1
    ctx->r11 = ADD32(ctx->r9, 0X1);
    // 0x08000914: sb          $t3, 0x1($t0)
    MEM_B(0X1, ctx->r8) = ctx->r11;
L_08000918:
    // 0x08000918: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
L_0800091C:
    // 0x0800091C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08000920: lbu         $t4, 0x7C($t2)
    ctx->r12 = MEM_BU(ctx->r10, 0X7C);
    // 0x08000924: bnel        $t4, $at, L_0800095C
    if (ctx->r12 != ctx->r1) {
        // 0x08000928: lh          $v0, 0x4($t0)
        ctx->r2 = MEM_H(ctx->r8, 0X4);
            goto L_0800095C;
    }
    goto skip_2;
    // 0x08000928: lh          $v0, 0x4($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X4);
    skip_2:
    // 0x0800092C: lh          $a1, 0xE($t0)
    ctx->r5 = MEM_H(ctx->r8, 0XE);
    // 0x08000930: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x08000934: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x08000938: beq         $a1, $at, L_08000958
    if (ctx->r5 == ctx->r1) {
        // 0x0800093C: lui         $t9, 0x8021
        ctx->r25 = S32(0X8021 << 16);
            goto L_08000958;
    }
    // 0x0800093C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000940: lw          $a2, 0x10($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X10);
    // 0x08000944: lbu         $a3, 0xC($t0)
    ctx->r7 = MEM_BU(ctx->r8, 0XC);
    // 0x08000948: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x0800094C: jalr        $t9
    // 0x08000950: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000950: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    after_2:
    // 0x08000954: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
L_08000958:
    // 0x08000958: lh          $v0, 0x4($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X4);
L_0800095C:
    // 0x0800095C: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08000960: lui         $t2, 0x600
    ctx->r10 = S32(0X600 << 16);
    // 0x08000964: beq         $v0, $zero, L_08000984
    if (ctx->r2 == 0) {
        // 0x08000968: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(68, 0X1B80) << 16);
            goto L_08000984;
    }
    // 0x08000968: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(68, 0X1B80) << 16);
    // 0x0800096C: lh          $t5, 0x2($t0)
    ctx->r13 = MEM_H(ctx->r8, 0X2);
    // 0x08000970: lh          $t6, 0x6($t0)
    ctx->r14 = MEM_H(ctx->r8, 0X6);
    // 0x08000974: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
    // 0x08000978: sh          $t8, 0x4($t0)
    MEM_H(0X4, ctx->r8) = ctx->r24;
    // 0x0800097C: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x08000980: sh          $t7, 0x2($t0)
    MEM_H(0X2, ctx->r8) = ctx->r15;
L_08000984:
    // 0x08000984: lw          $a2, 0x14($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X14);
    // 0x08000988: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x0800098C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000990: or          $t1, $a2, $at
    ctx->r9 = ctx->r6 | ctx->r1;
    // 0x08000994: sw          $t1, 0x30($t3)
    MEM_W(0X30, ctx->r11) = ctx->r9;
    // 0x08000998: sw          $t2, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r10;
    // 0x0800099C: addiu       $t9, $t9, 0x4840
    ctx->r25 = ADD32(ctx->r25, 0X4840);
    // 0x080009A0: addiu       $v1, $a2, 0x8
    ctx->r3 = ADD32(ctx->r6, 0X8);
    // 0x080009A4: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    // 0x080009A8: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x080009AC: addiu       $a0, $a0, 0x1B80
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(68, 0X1B80));
    // 0x080009B0: addiu       $a1, $zero, 0x4D
    ctx->r5 = ADD32(0, 0X4D);
    // 0x080009B4: jalr        $t9
    // 0x080009B8: sw          $a2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080009B8: sw          $a2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r6;
    after_3:
    // 0x080009BC: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x080009C0: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x080009C4: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x080009C8: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
    // 0x080009CC: lh          $t4, 0xA($t0)
    ctx->r12 = MEM_H(ctx->r8, 0XA);
    // 0x080009D0: lh          $a0, 0x8($t0)
    ctx->r4 = MEM_H(ctx->r8, 0X8);
    // 0x080009D4: lui         $t5, 0xB900
    ctx->r13 = S32(0XB900 << 16);
    // 0x080009D8: ori         $t5, $t5, 0x2
    ctx->r13 = ctx->r13 | 0X2;
    // 0x080009DC: slt         $at, $t4, $a0
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x080009E0: beq         $at, $zero, L_08000A5C
    if (ctx->r1 == 0) {
        // 0x080009E4: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_08000A5C;
    }
    // 0x080009E4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x080009E8: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x080009EC: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x080009F0: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x080009F4: lui         $a1, 0x8001
    ctx->r5 = S32(0X8001 << 16);
    // 0x080009F8: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x080009FC: addiu       $a1, $a1, -0x22A8
    ctx->r5 = ADD32(ctx->r5, -0X22A8);
    // 0x08000A00: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x08000A04: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    // 0x08000A08: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x08000A0C: jalr        $a1
    // 0x08000A10: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    LOOKUP_FUNC(ctx->r5)(rdram, ctx);
        goto after_4;
    // 0x08000A10: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_4:
    // 0x08000A14: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x08000A18: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x08000A1C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x08000A20: lh          $t7, 0xA($t0)
    ctx->r15 = MEM_H(ctx->r8, 0XA);
    // 0x08000A24: lh          $a0, 0x8($t0)
    ctx->r4 = MEM_H(ctx->r8, 0X8);
    // 0x08000A28: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x08000A2C: slt         $at, $t8, $a0
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x08000A30: beql        $at, $zero, L_08000A60
    if (ctx->r1 == 0) {
        // 0x08000A34: andi        $v0, $a0, 0x1
        ctx->r2 = ctx->r4 & 0X1;
            goto L_08000A60;
    }
    goto skip_3;
    // 0x08000A34: andi        $v0, $a0, 0x1
    ctx->r2 = ctx->r4 & 0X1;
    skip_3:
    // 0x08000A38: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    // 0x08000A3C: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    // 0x08000A40: jalr        $a1
    // 0x08000A44: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    LOOKUP_FUNC(ctx->r5)(rdram, ctx);
        goto after_5;
    // 0x08000A44: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    after_5:
    // 0x08000A48: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x08000A4C: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x08000A50: lh          $a0, 0x8($t0)
    ctx->r4 = MEM_H(ctx->r8, 0X8);
    // 0x08000A54: addu        $t1, $v0, $a0
    ctx->r9 = ADD32(ctx->r2, ctx->r4);
    // 0x08000A58: sh          $t1, 0xA($t0)
    MEM_H(0XA, ctx->r8) = ctx->r9;
L_08000A5C:
    // 0x08000A5C: andi        $v0, $a0, 0x1
    ctx->r2 = ctx->r4 & 0X1;
L_08000A60:
    // 0x08000A60: beq         $v0, $zero, L_08000A7C
    if (ctx->r2 == 0) {
        // 0x08000A64: lui         $t5, 0xB800
        ctx->r13 = S32(0XB800 << 16);
            goto L_08000A7C;
    }
    // 0x08000A64: lui         $t5, 0xB800
    ctx->r13 = S32(0XB800 << 16);
    // 0x08000A68: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000A6C: beq         $v0, $at, L_08000A98
    if (ctx->r2 == ctx->r1) {
        // 0x08000A70: lui         $t9, 0xFB00
        ctx->r25 = S32(0XFB00 << 16);
            goto L_08000A98;
    }
    // 0x08000A70: lui         $t9, 0xFB00
    ctx->r25 = S32(0XFB00 << 16);
    // 0x08000A74: b           L_08000AB0
    // 0x08000A78: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
        goto L_08000AB0;
    // 0x08000A78: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
L_08000A7C:
    // 0x08000A7C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x08000A80: lui         $t3, 0xFB00
    ctx->r11 = S32(0XFB00 << 16);
    // 0x08000A84: addiu       $t2, $zero, 0x60D0
    ctx->r10 = ADD32(0, 0X60D0);
    // 0x08000A88: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
    // 0x08000A8C: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x08000A90: b           L_08000AAC
    // 0x08000A94: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
        goto L_08000AAC;
    // 0x08000A94: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
L_08000A98:
    // 0x08000A98: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x08000A9C: addiu       $t4, $zero, 0x6080
    ctx->r12 = ADD32(0, 0X6080);
    // 0x08000AA0: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x08000AA4: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x08000AA8: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
L_08000AAC:
    // 0x08000AAC: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
L_08000AB0:
    // 0x08000AB0: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x08000AB4: lh          $t6, 0x8($t0)
    ctx->r14 = MEM_H(ctx->r8, 0X8);
    // 0x08000AB8: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x08000ABC: sh          $t7, 0x8($t0)
    MEM_H(0X8, ctx->r8) = ctx->r15;
    // 0x08000AC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000AC4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x08000AC8: jr          $ra
    // 0x08000ACC: nop

    TRACE_RETURN()
    return;
    // 0x08000ACC: nop

;}
RECOMP_FUNC void func_08000254_73A0F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000254: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000258: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x0800025C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000260: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000264: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x08000268: addiu       $t9, $t9, 0x4E08
    ctx->r25 = ADD32(ctx->r25, 0X4E08);
    // 0x0800026C: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(68, 0X60) << 16);
    // 0x08000270: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x08000274: addiu       $a1, $a1, 0x60
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(68, 0X60));
    // 0x08000278: jalr        $t9
    // 0x0800027C: addiu       $a2, $zero, 0x4D
    ctx->r6 = ADD32(0, 0X4D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800027C: addiu       $a2, $zero, 0x4D
    ctx->r6 = ADD32(0, 0X4D);
    after_0:
    // 0x08000280: bne         $v0, $zero, L_08000290
    if (ctx->r2 != 0) {
        // 0x08000284: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_08000290;
    }
    // 0x08000284: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08000288: b           L_08000364
    // 0x0800028C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_08000364;
    // 0x0800028C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_08000290:
    // 0x08000290: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000294: addiu       $t9, $t9, 0x6B7C
    ctx->r25 = ADD32(ctx->r25, 0X6B7C);
    // 0x08000298: jalr        $t9
    // 0x0800029C: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800029C: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_1:
    // 0x080002A0: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x080002A4: addiu       $v0, $v0, -0x3A38
    ctx->r2 = ADD32(ctx->r2, -0X3A38);
    // 0x080002A8: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x080002AC: lui         $v1, 0x3
    ctx->r3 = S32(0X3 << 16);
    // 0x080002B0: ori         $v1, $v1, 0x8000
    ctx->r3 = ctx->r3 | 0X8000;
    // 0x080002B4: addu        $t8, $t7, $v1
    ctx->r24 = ADD32(ctx->r15, ctx->r3);
    // 0x080002B8: lw          $t0, 0x3018($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X3018);
    // 0x080002BC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x080002C0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x080002C4: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x080002C8: sb          $t6, 0xD($t0)
    MEM_B(0XD, ctx->r8) = ctx->r14;
    // 0x080002CC: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x080002D0: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x080002D4: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x080002D8: addu        $t3, $t2, $v1
    ctx->r11 = ADD32(ctx->r10, ctx->r3);
    // 0x080002DC: lw          $t4, 0x3018($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X3018);
    // 0x080002E0: sb          $t1, 0xE($t4)
    MEM_B(0XE, ctx->r12) = ctx->r9;
    // 0x080002E4: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x080002E8: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x080002EC: addu        $t7, $t9, $v1
    ctx->r15 = ADD32(ctx->r25, ctx->r3);
    // 0x080002F0: lw          $t8, 0x3018($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X3018);
    // 0x080002F4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x080002F8: sb          $t5, 0xF($t8)
    MEM_B(0XF, ctx->r24) = ctx->r13;
    // 0x080002FC: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x08000300: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x08000304: addu        $t0, $t6, $v1
    ctx->r8 = ADD32(ctx->r14, ctx->r3);
    // 0x08000308: lw          $t2, 0x3018($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X3018);
    // 0x0800030C: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x08000310: sb          $zero, 0x10($t2)
    MEM_B(0X10, ctx->r10) = 0;
    // 0x08000314: sw          $a1, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r5;
    // 0x08000318: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x0800031C: sw          $t3, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r11;
    // 0x08000320: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x08000324: sw          $t1, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r9;
    // 0x08000328: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x0800032C: beq         $a1, $zero, L_08000354
    if (ctx->r5 == 0) {
        // 0x08000330: sw          $t4, 0x74($a0)
        MEM_W(0X74, ctx->r4) = ctx->r12;
            goto L_08000354;
    }
    // 0x08000330: sw          $t4, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->r12;
    // 0x08000334: lw          $t9, 0x18($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X18);
    // 0x08000338: mtc1        $a1, $f8
    ctx->f8.u32l = ctx->r5;
    // 0x0800033C: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x08000340: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x08000344: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08000348: div.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x0800034C: b           L_08000360
    // 0x08000350: swc1        $f16, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f16.u32l;
        goto L_08000360;
    // 0x08000350: swc1        $f16, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f16.u32l;
L_08000354:
    // 0x08000354: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08000358: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x0800035C: swc1        $f18, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f18.u32l;
L_08000360:
    // 0x08000360: sw          $t7, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r15;
L_08000364:
    // 0x08000364: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000368: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x0800036C: jr          $ra
    // 0x08000370: nop

    TRACE_RETURN()
    return;
    // 0x08000370: nop

;}
RECOMP_FUNC void func_08000AD0_73A970(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000AD0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000AD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000AD8: lw          $t6, 0xE4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XE4);
    // 0x08000ADC: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x08000AE0: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08000AE4: beq         $t6, $zero, L_08000B20
    if (ctx->r14 == 0) {
        // 0x08000AE8: lui         $at, 0xC
        ctx->r1 = S32(0XC << 16);
            goto L_08000B20;
    }
    // 0x08000AE8: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x08000AEC: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x08000AF0: addiu       $v0, $a2, 0xD0
    ctx->r2 = ADD32(ctx->r6, 0XD0);
    // 0x08000AF4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000AF8: addiu       $t9, $t9, 0x4B74
    ctx->r25 = ADD32(ctx->r25, 0X4B74);
    // 0x08000AFC: lw          $a1, 0x14($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X14);
    // 0x08000B00: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x08000B04: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x08000B08: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x08000B0C: jalr        $t9
    // 0x08000B10: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000B10: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_0:
    // 0x08000B14: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x08000B18: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x08000B1C: sw          $zero, 0x14($v0)
    MEM_W(0X14, ctx->r2) = 0;
L_08000B20:
    // 0x08000B20: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000B24: addiu       $t9, $t9, 0x4EF8
    ctx->r25 = ADD32(ctx->r25, 0X4EF8);
    // 0x08000B28: jalr        $t9
    // 0x08000B2C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000B2C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_1:
    // 0x08000B30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000B34: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000B38: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x08000B3C: jr          $ra
    // 0x08000B40: nop

    TRACE_RETURN()
    return;
    // 0x08000B40: nop

    // 0x08000B44: jr          $ra
    // 0x08000B48: nop

    TRACE_RETURN()
    return;
    // 0x08000B48: nop

;}
RECOMP_FUNC void func_08000B4C_73A9EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000B4C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x08000B50: lh          $t8, 0xD2($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XD2);
    // 0x08000B54: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x08000B58: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x08000B5C: sh          $t7, 0xD4($a0)
    MEM_H(0XD4, ctx->r4) = ctx->r15;
    // 0x08000B60: lh          $t0, 0xD4($a0)
    ctx->r8 = MEM_H(ctx->r4, 0XD4);
    // 0x08000B64: subu        $t9, $t6, $t8
    ctx->r25 = SUB32(ctx->r14, ctx->r24);
    // 0x08000B68: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x08000B6C: div         $zero, $t9, $t0
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r8))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r8)));
    // 0x08000B70: mflo        $t1
    ctx->r9 = lo;
    // 0x08000B74: sh          $t1, 0xD6($a0)
    MEM_H(0XD6, ctx->r4) = ctx->r9;
    // 0x08000B78: bne         $t0, $zero, L_08000B84
    if (ctx->r8 != 0) {
        // 0x08000B7C: nop
    
            goto L_08000B84;
    }
    // 0x08000B7C: nop

    // 0x08000B80: break       7
    do_break(134220672);
L_08000B84:
    // 0x08000B84: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x08000B88: bne         $t0, $at, L_08000B9C
    if (ctx->r8 != ctx->r1) {
        // 0x08000B8C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_08000B9C;
    }
    // 0x08000B8C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08000B90: bne         $t9, $at, L_08000B9C
    if (ctx->r25 != ctx->r1) {
        // 0x08000B94: nop
    
            goto L_08000B9C;
    }
    // 0x08000B94: nop

    // 0x08000B98: break       6
    do_break(134220696);
L_08000B9C:
    // 0x08000B9C: jr          $ra
    // 0x08000BA0: nop

    TRACE_RETURN()
    return;
    // 0x08000BA0: nop

;}
RECOMP_FUNC void func_08000374_73A214(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000374: jr          $ra
    // 0x08000378: lw          $v0, 0x70($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X70);
    TRACE_RETURN()
    return;
    // 0x08000378: lw          $v0, 0x70($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X70);
;}
RECOMP_FUNC void func_080010E8_73AF88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080010E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080010EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080010F0: beq         $a1, $zero, L_0800110C
    if (ctx->r5 == 0) {
        // 0x080010F4: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_0800110C;
    }
    // 0x080010F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080010F8: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x080010FC: beq         $a1, $at, L_08001138
    if (ctx->r5 == ctx->r1) {
        // 0x08001100: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_08001138;
    }
    // 0x08001100: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08001104: b           L_08001170
    // 0x08001108: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08001170;
    // 0x08001108: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_0800110C:
    // 0x0800110C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001110: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08001114: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08001118: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800111C: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08001120: jalr        $t9
    // 0x08001124: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001124: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x08001128: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x0800112C: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x08001130: b           L_0800116C
    // 0x08001134: sh          $t6, 0xDE($t7)
    MEM_H(0XDE, ctx->r15) = ctx->r14;
        goto L_0800116C;
    // 0x08001134: sh          $t6, 0xDE($t7)
    MEM_H(0XDE, ctx->r15) = ctx->r14;
L_08001138:
    // 0x08001138: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800113C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08001140: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001144: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08001148: jalr        $t9
    // 0x0800114C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800114C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x08001150: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x08001154: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x08001158: lbu         $t0, 0xD0($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0XD0);
    // 0x0800115C: sh          $t8, 0xDE($v0)
    MEM_H(0XDE, ctx->r2) = ctx->r24;
    // 0x08001160: addiu       $v0, $v0, 0xD0
    ctx->r2 = ADD32(ctx->r2, 0XD0);
    // 0x08001164: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x08001168: sb          $t1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r9;
L_0800116C:
    // 0x0800116C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08001170:
    // 0x08001170: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001174: jr          $ra
    // 0x08001178: nop

    TRACE_RETURN()
    return;
    // 0x08001178: nop

;}
RECOMP_FUNC void func_080008C4_73C4C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080008C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080008C8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080008CC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080008D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080008D4: addiu       $t9, $t9, 0x4E08
    ctx->r25 = ADD32(ctx->r25, 0X4E08);
    // 0x080008D8: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(69, 0X824) << 16);
    // 0x080008DC: addiu       $a1, $a1, 0x824
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(69, 0X824));
    // 0x080008E0: jalr        $t9
    // 0x080008E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080008E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x080008E8: bne         $v0, $zero, L_080008F8
    if (ctx->r2 != 0) {
        // 0x080008EC: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_080008F8;
    }
    // 0x080008EC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x080008F0: b           L_08000914
    // 0x080008F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08000914;
    // 0x080008F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080008F8:
    // 0x080008F8: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x080008FC: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x08000900: sw          $t7, 0x64($v1)
    MEM_W(0X64, ctx->r3) = ctx->r15;
    // 0x08000904: sw          $zero, 0x60($v1)
    MEM_W(0X60, ctx->r3) = 0;
    // 0x08000908: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x0800090C: sw          $t6, 0x68($v1)
    MEM_W(0X68, ctx->r3) = ctx->r14;
    // 0x08000910: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000914:
    // 0x08000914: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000918: jr          $ra
    // 0x0800091C: nop

    TRACE_RETURN()
    return;
    // 0x0800091C: nop

;}
RECOMP_FUNC void func_080007CC_73C3CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080007CC: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x080007D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080007D4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080007D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080007DC: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080007E0: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x080007E4: jalr        $t9
    // 0x080007E8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080007E8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x080007EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080007F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080007F4: jr          $ra
    // 0x080007F8: nop

    TRACE_RETURN()
    return;
    // 0x080007F8: nop

;}
RECOMP_FUNC void func_0800077C_73C37C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800077C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000780: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000784: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000788: addiu       $t9, $t9, 0x4EF8
    ctx->r25 = ADD32(ctx->r25, 0X4EF8);
    // 0x0800078C: jalr        $t9
    // 0x08000790: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000790: nop

    after_0:
    // 0x08000794: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000798: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800079C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x080007A0: jr          $ra
    // 0x080007A4: nop

    TRACE_RETURN()
    return;
    // 0x080007A4: nop

;}
RECOMP_FUNC void func_0800098C_73C58C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800098C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x08000990: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x08000994: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x08000998: sb          $a1, 0x6F($a0)
    MEM_B(0X6F, ctx->r4) = ctx->r5;
    // 0x0800099C: sb          $a2, 0x70($a0)
    MEM_B(0X70, ctx->r4) = ctx->r6;
    // 0x080009A0: jr          $ra
    // 0x080009A4: sb          $a3, 0x71($a0)
    MEM_B(0X71, ctx->r4) = ctx->r7;
    TRACE_RETURN()
    return;
    // 0x080009A4: sb          $a3, 0x71($a0)
    MEM_B(0X71, ctx->r4) = ctx->r7;
;}
RECOMP_FUNC void func_080007FC_73C3FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080007FC: jr          $ra
    // 0x08000800: sw          $a1, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08000800: sw          $a1, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_08000970_73C570(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000970: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x08000974: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x08000978: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x0800097C: sb          $a1, 0x6C($a0)
    MEM_B(0X6C, ctx->r4) = ctx->r5;
    // 0x08000980: sb          $a2, 0x6D($a0)
    MEM_B(0X6D, ctx->r4) = ctx->r6;
    // 0x08000984: jr          $ra
    // 0x08000988: sb          $a3, 0x6E($a0)
    MEM_B(0X6E, ctx->r4) = ctx->r7;
    TRACE_RETURN()
    return;
    // 0x08000988: sb          $a3, 0x6E($a0)
    MEM_B(0X6E, ctx->r4) = ctx->r7;
;}
RECOMP_FUNC void func_08000000_73BC00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000000: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x08000004: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x08000008: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x0800000C: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x08000010: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x08000014: lhu         $t7, 0xD0($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0XD0);
    // 0x08000018: sltiu       $at, $t7, 0xB
    ctx->r1 = ctx->r15 < 0XB ? 1 : 0;
    // 0x0800001C: beq         $at, $zero, L_08000500
    if (ctx->r1 == 0) {
        // 0x08000020: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_08000500;
    }
    // 0x08000020: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x08000024: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(69, 0X9D8) << 16);
    // 0x08000028: addu        $at, $at, $t7
    gpr jr_addend_08000030 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x0800002C: lw          $t7, 0x9D8($at)
    ctx->r15 = ADD32(ctx->r1, (int16_t)RELOC_LO16(69, 0X9D8));
    // 0x08000030: jr          $t7
    // 0x08000034: nop

    switch (jr_addend_08000030 >> 2) {
        case 0: goto L_08000038; break;
        case 1: goto L_08000124; break;
        case 2: goto L_080001A0; break;
        case 3: goto L_080001D8; break;
        case 4: goto L_08000210; break;
        case 5: goto L_08000248; break;
        case 6: goto L_08000280; break;
        case 7: goto L_080002E8; break;
        case 8: goto L_080003F8; break;
        case 9: goto L_080004BC; break;
        case 10: goto L_08000500; break;
        default: switch_error(__func__, 0x08000030, 0x080009D8);
    }
    // 0x08000034: nop

L_08000038:
    // 0x08000038: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x0800003C: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x08000040: lui         $v0, 0xD
    ctx->r2 = S32(0XD << 16);
    // 0x08000044: lw          $t9, 0x64($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X64);
    // 0x08000048: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800004C: ori         $t0, $t9, 0x2
    ctx->r8 = ctx->r25 | 0X2;
    // 0x08000050: sw          $t0, 0x64($t8)
    MEM_W(0X64, ctx->r24) = ctx->r8;
    // 0x08000054: lw          $t1, -0x3A38($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X3A38);
    // 0x08000058: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800005C: addiu       $t9, $t9, 0x381C
    ctx->r25 = ADD32(ctx->r25, 0X381C);
    // 0x08000060: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x08000064: lw          $v0, -0x718($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X718);
    // 0x08000068: lhu         $t2, 0x22($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X22);
    // 0x0800006C: ori         $t3, $t2, 0x14
    ctx->r11 = ctx->r10 | 0X14;
    // 0x08000070: sh          $t3, 0x22($v0)
    MEM_H(0X22, ctx->r2) = ctx->r11;
    // 0x08000074: jalr        $t9
    // 0x08000078: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000078: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    after_0:
    // 0x0800007C: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x08000080: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000084: addiu       $t9, $t9, 0x3484
    ctx->r25 = ADD32(ctx->r25, 0X3484);
    // 0x08000088: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x0800008C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x08000090: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    // 0x08000094: addiu       $a3, $zero, 0x32
    ctx->r7 = ADD32(0, 0X32);
    // 0x08000098: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x0800009C: jalr        $t9
    // 0x080000A0: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080000A0: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    after_1:
    // 0x080000A4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080000A8: addiu       $t9, $t9, 0x3400
    ctx->r25 = ADD32(ctx->r25, 0X3400);
    // 0x080000AC: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x080000B0: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x080000B4: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    // 0x080000B8: jalr        $t9
    // 0x080000BC: addiu       $a3, $zero, 0x64
    ctx->r7 = ADD32(0, 0X64);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080000BC: addiu       $a3, $zero, 0x64
    ctx->r7 = ADD32(0, 0X64);
    after_2:
    // 0x080000C0: lui         $v0, 0x8002
    ctx->r2 = S32(0X8002 << 16);
    // 0x080000C4: addiu       $v0, $v0, 0x4088
    ctx->r2 = ADD32(ctx->r2, 0X4088);
    // 0x080000C8: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x080000CC: jalr        $v0
    // 0x080000D0: addiu       $a0, $zero, 0x9C
    ctx->r4 = ADD32(0, 0X9C);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x080000D0: addiu       $a0, $zero, 0x9C
    ctx->r4 = ADD32(0, 0X9C);
    after_3:
    // 0x080000D4: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x080000D8: addiu       $a0, $zero, 0x9D
    ctx->r4 = ADD32(0, 0X9D);
    // 0x080000DC: jalr        $t9
    // 0x080000E0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080000E0: nop

    after_4:
    // 0x080000E4: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x080000E8: addiu       $a0, $zero, 0x9E
    ctx->r4 = ADD32(0, 0X9E);
    // 0x080000EC: jalr        $t9
    // 0x080000F0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080000F0: nop

    after_5:
    // 0x080000F4: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x080000F8: addiu       $a0, $zero, 0x9F
    ctx->r4 = ADD32(0, 0X9F);
    // 0x080000FC: jalr        $t9
    // 0x08000100: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000100: nop

    after_6:
    // 0x08000104: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x08000108: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x0800010C: jalr        $t9
    // 0x08000110: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08000110: nop

    after_7:
    // 0x08000114: lh          $t4, 0x0($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X0);
    // 0x08000118: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x0800011C: b           L_08000500
    // 0x08000120: sh          $t5, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r13;
        goto L_08000500;
    // 0x08000120: sh          $t5, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r13;
L_08000124:
    // 0x08000124: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000128: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x0800012C: jalr        $t9
    // 0x08000130: addiu       $a0, $zero, 0x7C
    ctx->r4 = ADD32(0, 0X7C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08000130: addiu       $a0, $zero, 0x7C
    ctx->r4 = ADD32(0, 0X7C);
    after_8:
    // 0x08000134: beq         $v0, $zero, L_08000500
    if (ctx->r2 == 0) {
        // 0x08000138: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_08000500;
    }
    // 0x08000138: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800013C: addiu       $t9, $t9, 0x4088
    ctx->r25 = ADD32(ctx->r25, 0X4088);
    // 0x08000140: jalr        $t9
    // 0x08000144: addiu       $a0, $zero, 0x7C
    ctx->r4 = ADD32(0, 0X7C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08000144: addiu       $a0, $zero, 0x7C
    ctx->r4 = ADD32(0, 0X7C);
    after_9:
    // 0x08000148: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x0800014C: addiu       $s0, $a0, 0xD0
    ctx->r16 = ADD32(ctx->r4, 0XD0);
    // 0x08000150: jal         0x080008C4
    // 0x08000154: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    func_080008C4_73C4C4(rdram, ctx);
        goto after_10;
    // 0x08000154: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    after_10:
    // 0x08000158: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x0800015C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08000160: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x08000164: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    // 0x08000168: jal         0x08000970
    // 0x0800016C: addiu       $a3, $zero, 0x64
    ctx->r7 = ADD32(0, 0X64);
    func_08000970_73C570(rdram, ctx);
        goto after_11;
    // 0x0800016C: addiu       $a3, $zero, 0x64
    ctx->r7 = ADD32(0, 0X64);
    after_11:
    // 0x08000170: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08000174: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x08000178: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    // 0x0800017C: jal         0x0800098C
    // 0x08000180: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_0800098C_73C58C(rdram, ctx);
        goto after_12;
    // 0x08000180: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_12:
    // 0x08000184: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08000188: jal         0x080009A8
    // 0x0800018C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_080009A8_73C5A8(rdram, ctx);
        goto after_13;
    // 0x0800018C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_13:
    // 0x08000190: lh          $t7, 0x0($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X0);
    // 0x08000194: addiu       $t0, $t7, 0x1
    ctx->r8 = ADD32(ctx->r15, 0X1);
    // 0x08000198: b           L_08000500
    // 0x0800019C: sh          $t0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r8;
        goto L_08000500;
    // 0x0800019C: sh          $t0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r8;
L_080001A0:
    // 0x080001A0: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080001A4: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x080001A8: jalr        $t9
    // 0x080001AC: addiu       $a0, $zero, 0x9C
    ctx->r4 = ADD32(0, 0X9C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x080001AC: addiu       $a0, $zero, 0x9C
    ctx->r4 = ADD32(0, 0X9C);
    after_14:
    // 0x080001B0: beq         $v0, $zero, L_08000500
    if (ctx->r2 == 0) {
        // 0x080001B4: lw          $s0, 0x50($sp)
        ctx->r16 = MEM_W(ctx->r29, 0X50);
            goto L_08000500;
    }
    // 0x080001B4: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x080001B8: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x080001BC: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x080001C0: jal         0x080009A8
    // 0x080001C4: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_080009A8_73C5A8(rdram, ctx);
        goto after_15;
    // 0x080001C4: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_15:
    // 0x080001C8: lh          $t8, 0x0($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X0);
    // 0x080001CC: addiu       $t1, $t8, 0x1
    ctx->r9 = ADD32(ctx->r24, 0X1);
    // 0x080001D0: b           L_08000500
    // 0x080001D4: sh          $t1, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r9;
        goto L_08000500;
    // 0x080001D4: sh          $t1, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r9;
L_080001D8:
    // 0x080001D8: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080001DC: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x080001E0: jalr        $t9
    // 0x080001E4: addiu       $a0, $zero, 0x9D
    ctx->r4 = ADD32(0, 0X9D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x080001E4: addiu       $a0, $zero, 0x9D
    ctx->r4 = ADD32(0, 0X9D);
    after_16:
    // 0x080001E8: beq         $v0, $zero, L_08000500
    if (ctx->r2 == 0) {
        // 0x080001EC: lw          $s0, 0x50($sp)
        ctx->r16 = MEM_W(ctx->r29, 0X50);
            goto L_08000500;
    }
    // 0x080001EC: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x080001F0: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x080001F4: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x080001F8: jal         0x080009A8
    // 0x080001FC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_080009A8_73C5A8(rdram, ctx);
        goto after_17;
    // 0x080001FC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_17:
    // 0x08000200: lh          $t2, 0x0($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X0);
    // 0x08000204: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x08000208: b           L_08000500
    // 0x0800020C: sh          $t3, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r11;
        goto L_08000500;
    // 0x0800020C: sh          $t3, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r11;
L_08000210:
    // 0x08000210: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000214: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08000218: jalr        $t9
    // 0x0800021C: addiu       $a0, $zero, 0x9E
    ctx->r4 = ADD32(0, 0X9E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x0800021C: addiu       $a0, $zero, 0x9E
    ctx->r4 = ADD32(0, 0X9E);
    after_18:
    // 0x08000220: beq         $v0, $zero, L_08000500
    if (ctx->r2 == 0) {
        // 0x08000224: lw          $s0, 0x50($sp)
        ctx->r16 = MEM_W(ctx->r29, 0X50);
            goto L_08000500;
    }
    // 0x08000224: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x08000228: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x0800022C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08000230: jal         0x080009A8
    // 0x08000234: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_080009A8_73C5A8(rdram, ctx);
        goto after_19;
    // 0x08000234: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_19:
    // 0x08000238: lh          $t4, 0x0($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X0);
    // 0x0800023C: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x08000240: b           L_08000500
    // 0x08000244: sh          $t5, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r13;
        goto L_08000500;
    // 0x08000244: sh          $t5, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r13;
L_08000248:
    // 0x08000248: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800024C: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08000250: jalr        $t9
    // 0x08000254: addiu       $a0, $zero, 0x9F
    ctx->r4 = ADD32(0, 0X9F);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_20;
    // 0x08000254: addiu       $a0, $zero, 0x9F
    ctx->r4 = ADD32(0, 0X9F);
    after_20:
    // 0x08000258: beq         $v0, $zero, L_08000500
    if (ctx->r2 == 0) {
        // 0x0800025C: lw          $s0, 0x50($sp)
        ctx->r16 = MEM_W(ctx->r29, 0X50);
            goto L_08000500;
    }
    // 0x0800025C: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x08000260: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x08000264: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08000268: jal         0x080009A8
    // 0x0800026C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_080009A8_73C5A8(rdram, ctx);
        goto after_21;
    // 0x0800026C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_21:
    // 0x08000270: lh          $t6, 0x0($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X0);
    // 0x08000274: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x08000278: b           L_08000500
    // 0x0800027C: sh          $t7, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r15;
        goto L_08000500;
    // 0x0800027C: sh          $t7, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r15;
L_08000280:
    // 0x08000280: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000284: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08000288: jalr        $t9
    // 0x0800028C: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_22;
    // 0x0800028C: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    after_22:
    // 0x08000290: beq         $v0, $zero, L_08000500
    if (ctx->r2 == 0) {
        // 0x08000294: lw          $a0, 0x50($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X50);
            goto L_08000500;
    }
    // 0x08000294: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x08000298: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800029C: addiu       $t9, $t9, 0x6D2C
    ctx->r25 = ADD32(ctx->r25, 0X6D2C);
    // 0x080002A0: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x080002A4: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x080002A8: addiu       $t1, $zero, 0xF
    ctx->r9 = ADD32(0, 0XF);
    // 0x080002AC: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x080002B0: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x080002B4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x080002B8: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x080002BC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x080002C0: jalr        $t9
    // 0x080002C4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_23;
    // 0x080002C4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_23:
    // 0x080002C8: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x080002CC: lh          $t2, 0xD0($s0)
    ctx->r10 = MEM_H(ctx->r16, 0XD0);
    // 0x080002D0: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x080002D4: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x080002D8: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x080002DC: sh          $zero, 0x2($s0)
    MEM_H(0X2, ctx->r16) = 0;
    // 0x080002E0: b           L_08000500
    // 0x080002E4: sh          $t3, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r11;
        goto L_08000500;
    // 0x080002E4: sh          $t3, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r11;
L_080002E8:
    // 0x080002E8: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x080002EC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x080002F0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080002F4: addiu       $s0, $t4, 0xD0
    ctx->r16 = ADD32(ctx->r12, 0XD0);
    // 0x080002F8: lh          $t5, 0x2($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X2);
    // 0x080002FC: addiu       $t9, $t9, 0x6E2C
    ctx->r25 = ADD32(ctx->r25, 0X6E2C);
    // 0x08000300: bne         $t5, $at, L_080003CC
    if (ctx->r13 != ctx->r1) {
        // 0x08000304: nop
    
            goto L_080003CC;
    }
    // 0x08000304: nop

    // 0x08000308: jal         0x08000600
    // 0x0800030C: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    func_08000600_73C200(rdram, ctx);
        goto after_24;
    // 0x0800030C: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    after_24:
    // 0x08000310: lui         $at, 0xC110
    ctx->r1 = S32(0XC110 << 16);
    // 0x08000314: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08000318: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x0800031C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08000320: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x08000324: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x08000328: jal         0x080007A8
    // 0x0800032C: lui         $a3, 0xC1A8
    ctx->r7 = S32(0XC1A8 << 16);
    func_080007A8_73C3A8(rdram, ctx);
        goto after_25;
    // 0x0800032C: lui         $a3, 0xC1A8
    ctx->r7 = S32(0XC1A8 << 16);
    after_25:
    // 0x08000330: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000334: addiu       $t9, $t9, 0x381C
    ctx->r25 = ADD32(ctx->r25, 0X381C);
    // 0x08000338: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x0800033C: jalr        $t9
    // 0x08000340: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_26;
    // 0x08000340: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_26:
    // 0x08000344: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000348: addiu       $t9, $t9, 0x33E0
    ctx->r25 = ADD32(ctx->r25, 0X33E0);
    // 0x0800034C: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x08000350: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08000354: lui         $a1, 0xC120
    ctx->r5 = S32(0XC120 << 16);
    // 0x08000358: lui         $a2, 0xC2C8
    ctx->r6 = S32(0XC2C8 << 16);
    // 0x0800035C: jalr        $t9
    // 0x08000360: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_27;
    // 0x08000360: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    after_27:
    // 0x08000364: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000368: addiu       $t9, $t9, 0x3484
    ctx->r25 = ADD32(ctx->r25, 0X3484);
    // 0x0800036C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x08000370: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000374: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    // 0x08000378: jalr        $t9
    // 0x0800037C: addiu       $a3, $zero, 0x3C
    ctx->r7 = ADD32(0, 0X3C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_28;
    // 0x0800037C: addiu       $a3, $zero, 0x3C
    ctx->r7 = ADD32(0, 0X3C);
    after_28:
    // 0x08000380: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x08000384: addiu       $v0, $v0, 0x3400
    ctx->r2 = ADD32(ctx->r2, 0X3400);
    // 0x08000388: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x0800038C: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x08000390: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x08000394: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    // 0x08000398: jalr        $v0
    // 0x0800039C: addiu       $a3, $zero, 0xDC
    ctx->r7 = ADD32(0, 0XDC);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_29;
    // 0x0800039C: addiu       $a3, $zero, 0xDC
    ctx->r7 = ADD32(0, 0XDC);
    after_29:
    // 0x080003A0: jal         0x08000920
    // 0x080003A4: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    func_08000920_73C520(rdram, ctx);
        goto after_30;
    // 0x080003A4: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    after_30:
    // 0x080003A8: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x080003AC: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x080003B0: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x080003B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080003B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080003BC: jalr        $t9
    // 0x080003C0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_31;
    // 0x080003C0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_31:
    // 0x080003C4: b           L_08000504
    // 0x080003C8: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
        goto L_08000504;
    // 0x080003C8: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
L_080003CC:
    // 0x080003CC: jalr        $t9
    // 0x080003D0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_32;
    // 0x080003D0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_32:
    // 0x080003D4: bne         $v0, $zero, L_08000500
    if (ctx->r2 != 0) {
        // 0x080003D8: lui         $t9, 0x8003
        ctx->r25 = S32(0X8003 << 16);
            goto L_08000500;
    }
    // 0x080003D8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080003DC: addiu       $t9, $t9, 0x4EF8
    ctx->r25 = ADD32(ctx->r25, 0X4EF8);
    // 0x080003E0: jalr        $t9
    // 0x080003E4: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_33;
    // 0x080003E4: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_33:
    // 0x080003E8: lh          $t6, 0x0($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X0);
    // 0x080003EC: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x080003F0: b           L_08000500
    // 0x080003F4: sh          $t7, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r15;
        goto L_08000500;
    // 0x080003F4: sh          $t7, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r15;
L_080003F8:
    // 0x080003F8: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080003FC: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x08000400: jalr        $t9
    // 0x08000404: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_34;
    // 0x08000404: nop

    after_34:
    // 0x08000408: bne         $v0, $zero, L_08000500
    if (ctx->r2 != 0) {
        // 0x0800040C: lw          $s0, 0x50($sp)
        ctx->r16 = MEM_W(ctx->r29, 0X50);
            goto L_08000500;
    }
    // 0x0800040C: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x08000410: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x08000414: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x08000418: jal         0x080007FC
    // 0x0800041C: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    func_080007FC_73C3FC(rdram, ctx);
        goto after_35;
    // 0x0800041C: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    after_35:
    // 0x08000420: jal         0x08000804
    // 0x08000424: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    func_08000804_73C404(rdram, ctx);
        goto after_36;
    // 0x08000424: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    after_36:
    // 0x08000428: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x0800042C: addiu       $v0, $v0, 0x33D4
    ctx->r2 = ADD32(ctx->r2, 0X33D4);
    // 0x08000430: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x08000434: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x08000438: jalr        $v0
    // 0x0800043C: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_37;
    // 0x0800043C: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    after_37:
    // 0x08000440: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x08000444: addiu       $v0, $v0, 0x35D4
    ctx->r2 = ADD32(ctx->r2, 0X35D4);
    // 0x08000448: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x0800044C: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x08000450: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x08000454: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    // 0x08000458: jalr        $v0
    // 0x0800045C: addiu       $a3, $zero, 0x64
    ctx->r7 = ADD32(0, 0X64);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_38;
    // 0x0800045C: addiu       $a3, $zero, 0x64
    ctx->r7 = ADD32(0, 0X64);
    after_38:
    // 0x08000460: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x08000464: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x08000468: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    // 0x0800046C: jalr        $t9
    // 0x08000470: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_39;
    // 0x08000470: nop

    after_39:
    // 0x08000474: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x08000478: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x0800047C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000480: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000484: jalr        $t9
    // 0x08000488: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_40;
    // 0x08000488: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_40:
    // 0x0800048C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000490: addiu       $t9, $t9, 0x36F8
    ctx->r25 = ADD32(ctx->r25, 0X36F8);
    // 0x08000494: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x08000498: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800049C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080004A0: jalr        $t9
    // 0x080004A4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_41;
    // 0x080004A4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_41:
    // 0x080004A8: lh          $t0, 0x0($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X0);
    // 0x080004AC: sh          $zero, 0x2($s0)
    MEM_H(0X2, ctx->r16) = 0;
    // 0x080004B0: addiu       $t8, $t0, 0x1
    ctx->r24 = ADD32(ctx->r8, 0X1);
    // 0x080004B4: b           L_08000500
    // 0x080004B8: sh          $t8, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r24;
        goto L_08000500;
    // 0x080004B8: sh          $t8, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r24;
L_080004BC:
    // 0x080004BC: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x080004C0: lh          $t1, 0xD2($s0)
    ctx->r9 = MEM_H(ctx->r16, 0XD2);
    // 0x080004C4: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x080004C8: slti        $at, $t1, 0x1E
    ctx->r1 = SIGNED(ctx->r9) < 0X1E ? 1 : 0;
    // 0x080004CC: bnel        $at, $zero, L_08000504
    if (ctx->r1 != 0) {
        // 0x080004D0: lw          $s0, 0x50($sp)
        ctx->r16 = MEM_W(ctx->r29, 0X50);
            goto L_08000504;
    }
    goto skip_0;
    // 0x080004D0: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    skip_0:
    // 0x080004D4: jal         0x0800077C
    // 0x080004D8: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    func_0800077C_73C37C(rdram, ctx);
        goto after_42;
    // 0x080004D8: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    after_42:
    // 0x080004DC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080004E0: addiu       $t9, $t9, 0x4EF8
    ctx->r25 = ADD32(ctx->r25, 0X4EF8);
    // 0x080004E4: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x080004E8: jalr        $t9
    // 0x080004EC: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_43;
    // 0x080004EC: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_43:
    // 0x080004F0: lh          $t2, 0x0($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X0);
    // 0x080004F4: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x080004F8: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x080004FC: sh          $t3, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r11;
L_08000500:
    // 0x08000500: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
L_08000504:
    // 0x08000504: lh          $t5, 0xD2($s0)
    ctx->r13 = MEM_H(ctx->r16, 0XD2);
    // 0x08000508: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x0800050C: addiu       $t4, $t5, 0x1
    ctx->r12 = ADD32(ctx->r13, 0X1);
    // 0x08000510: sh          $t4, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r12;
    // 0x08000514: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x08000518: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x0800051C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x08000520: jr          $ra
    // 0x08000524: nop

    TRACE_RETURN()
    return;
    // 0x08000524: nop

;}
RECOMP_FUNC void func_08000600_73C200(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000600: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x08000604: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000608: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x0800060C: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08000610: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(69, 0X528) << 16);
    // 0x08000614: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08000618: addiu       $a1, $a1, 0x528
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(69, 0X528));
    // 0x0800061C: jalr        $t9
    // 0x08000620: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000620: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x08000624: bne         $v0, $zero, L_08000634
    if (ctx->r2 != 0) {
        // 0x08000628: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08000634;
    }
    // 0x08000628: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x0800062C: b           L_08000768
    // 0x08000630: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_08000768;
    // 0x08000630: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_08000634:
    // 0x08000634: lw          $t6, 0x18($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X18);
    // 0x08000638: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800063C: addiu       $t7, $zero, 0x3D8
    ctx->r15 = ADD32(0, 0X3D8);
    // 0x08000640: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x08000644: addiu       $t8, $zero, 0x20
    ctx->r24 = ADD32(0, 0X20);
    // 0x08000648: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x0800064C: addiu       $t1, $zero, 0x4E
    ctx->r9 = ADD32(0, 0X4E);
    // 0x08000650: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000654: sh          $t7, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r15;
    // 0x08000658: sw          $t8, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r24;
    // 0x0800065C: sw          $t0, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r8;
    // 0x08000660: sh          $t1, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r9;
    // 0x08000664: jalr        $t9
    // 0x08000668: addiu       $a0, $zero, 0x4E
    ctx->r4 = ADD32(0, 0X4E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000668: addiu       $a0, $zero, 0x4E
    ctx->r4 = ADD32(0, 0X4E);
    after_1:
    // 0x0800066C: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x08000670: addiu       $v1, $v1, -0x33D0
    ctx->r3 = ADD32(ctx->r3, -0X33D0);
    // 0x08000674: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x08000678: lbu         $t2, 0xD8($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0XD8);
    // 0x0800067C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000680: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000684: sb          $t2, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r10;
    // 0x08000688: lbu         $t3, 0xD8($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0XD8);
    // 0x0800068C: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x08000690: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x08000694: jal         0x080007CC
    // 0x08000698: sb          $t4, 0xD8($v1)
    MEM_B(0XD8, ctx->r3) = ctx->r12;
    func_080007CC_73C3CC(rdram, ctx);
        goto after_2;
    // 0x08000698: sb          $t4, 0xD8($v1)
    MEM_B(0XD8, ctx->r3) = ctx->r12;
    after_2:
    // 0x0800069C: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x080006A0: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x080006A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x080006A8: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x080006AC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x080006B0: addiu       $v0, $s0, 0xD0
    ctx->r2 = ADD32(ctx->r16, 0XD0);
    // 0x080006B4: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x080006B8: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x080006BC: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x080006C0: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x080006C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080006C8: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x080006CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080006D0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x080006D4: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x080006D8: beq         $a1, $zero, L_08000728
    if (ctx->r5 == 0) {
        // 0x080006DC: swc1        $f0, 0x10($v0)
        MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
            goto L_08000728;
    }
    // 0x080006DC: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
    // 0x080006E0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x080006E4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080006E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x080006EC: sub.s       $f4, $f0, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x080006F0: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x080006F4: nop

    // 0x080006F8: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x080006FC: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x08000700: nop

    // 0x08000704: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x08000708: bne         $a1, $zero, L_08000720
    if (ctx->r5 != 0) {
        // 0x0800070C: nop
    
            goto L_08000720;
    }
    // 0x0800070C: nop

    // 0x08000710: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x08000714: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08000718: b           L_08000738
    // 0x0800071C: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
        goto L_08000738;
    // 0x0800071C: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
L_08000720:
    // 0x08000720: b           L_08000738
    // 0x08000724: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
        goto L_08000738;
    // 0x08000724: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
L_08000728:
    // 0x08000728: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x0800072C: nop

    // 0x08000730: bltz        $a1, L_08000720
    if (SIGNED(ctx->r5) < 0) {
        // 0x08000734: nop
    
            goto L_08000720;
    }
    // 0x08000734: nop

L_08000738:
    // 0x08000738: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800073C: addiu       $t9, $t9, -0x213C
    ctx->r25 = ADD32(ctx->r25, -0X213C);
    // 0x08000740: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x08000744: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x08000748: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x0800074C: jalr        $t9
    // 0x08000750: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000750: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x08000754: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x08000758: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x0800075C: or          $t7, $v0, $at
    ctx->r15 = ctx->r2 | ctx->r1;
    // 0x08000760: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x08000764: sw          $t7, 0x30($t8)
    MEM_W(0X30, ctx->r24) = ctx->r15;
L_08000768:
    // 0x08000768: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0800076C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08000770: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x08000774: jr          $ra
    // 0x08000778: nop

    TRACE_RETURN()
    return;
    // 0x08000778: nop

;}
RECOMP_FUNC void func_08000804_73C404(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000804: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x08000808: lwc1        $f4, 0xE0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XE0);
    // 0x0800080C: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x08000810: sw          $v0, 0xDC($a0)
    MEM_W(0XDC, ctx->r4) = ctx->r2;
    // 0x08000814: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x08000818: div.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x0800081C: jr          $ra
    // 0x08000820: swc1        $f10, 0xE4($a0)
    MEM_W(0XE4, ctx->r4) = ctx->f10.u32l;
    TRACE_RETURN()
    return;
    // 0x08000820: swc1        $f10, 0xE4($a0)
    MEM_W(0XE4, ctx->r4) = ctx->f10.u32l;
;}
RECOMP_FUNC void func_08000920_73C520(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000920: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000924: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000928: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0800092C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000930: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000934: addiu       $t9, $t9, 0x3400
    ctx->r25 = ADD32(ctx->r25, 0X3400);
    // 0x08000938: lbu         $a1, 0x6C($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X6C);
    // 0x0800093C: lbu         $a2, 0x6D($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X6D);
    // 0x08000940: lbu         $a3, 0x6E($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X6E);
    // 0x08000944: jalr        $t9
    // 0x08000948: lw          $a0, 0x68($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X68);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000948: lw          $a0, 0x68($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X68);
    after_0:
    // 0x0800094C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000950: addiu       $t9, $t9, 0x4EF8
    ctx->r25 = ADD32(ctx->r25, 0X4EF8);
    // 0x08000954: jalr        $t9
    // 0x08000958: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000958: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x0800095C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000960: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000964: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000968: jr          $ra
    // 0x0800096C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x0800096C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_08000528_73C128(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000528: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0800052C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000530: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08000534: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000538: lw          $t7, 0xDC($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XDC);
    // 0x0800053C: addiu       $v0, $a0, 0xD0
    ctx->r2 = ADD32(ctx->r4, 0XD0);
    // 0x08000540: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000544: beq         $t7, $zero, L_08000584
    if (ctx->r15 == 0) {
        // 0x08000548: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_08000584;
    }
    // 0x08000548: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x0800054C: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x08000550: lwc1        $f6, 0x14($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X14);
    // 0x08000554: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08000558: lw          $t8, 0xC($v0)
    ctx->r24 = MEM_W(ctx->r2, 0XC);
    // 0x0800055C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x08000560: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x08000564: sw          $t9, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r25;
    // 0x08000568: swc1        $f8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f8.u32l;
    // 0x0800056C: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x08000570: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x08000574: nop

    // 0x08000578: bc1fl       L_08000588
    if (!c1cs) {
        // 0x0800057C: lw          $v0, 0x20($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X20);
            goto L_08000588;
    }
    goto skip_0;
    // 0x0800057C: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    skip_0:
    // 0x08000580: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
L_08000584:
    // 0x08000584: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
L_08000588:
    // 0x08000588: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800058C: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x08000590: lw          $v1, 0xD8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XD8);
    // 0x08000594: addiu       $t9, $t9, -0x213C
    ctx->r25 = ADD32(ctx->r25, -0X213C);
    // 0x08000598: addiu       $v0, $v0, 0xD0
    ctx->r2 = ADD32(ctx->r2, 0XD0);
    // 0x0800059C: andi        $a0, $v1, 0x1
    ctx->r4 = ctx->r3 & 0X1;
    // 0x080005A0: addiu       $t0, $v1, 0x1
    ctx->r8 = ADD32(ctx->r3, 0X1);
    // 0x080005A4: beq         $a0, $zero, L_080005C4
    if (ctx->r4 == 0) {
        // 0x080005A8: sw          $t0, 0x8($v0)
        MEM_W(0X8, ctx->r2) = ctx->r8;
            goto L_080005C4;
    }
    // 0x080005A8: sw          $t0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r8;
    // 0x080005AC: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
    // 0x080005B0: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x080005B4: trunc.w.d   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_D(ctx->f18.d);
    // 0x080005B8: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x080005BC: b           L_080005E8
    // 0x080005C0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
        goto L_080005E8;
    // 0x080005C0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_080005C4:
    // 0x080005C4: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x080005C8: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x080005CC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x080005D0: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x080005D4: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x080005D8: trunc.w.d   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_D(ctx->f16.d);
    // 0x080005DC: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x080005E0: nop

    // 0x080005E4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_080005E8:
    // 0x080005E8: jalr        $t9
    // 0x080005EC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080005EC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x080005F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080005F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080005F8: jr          $ra
    // 0x080005FC: nop

    TRACE_RETURN()
    return;
    // 0x080005FC: nop

;}
RECOMP_FUNC void func_08000824_73C424(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000824: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000828: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800082C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000830: lw          $t6, 0x64($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X64);
    // 0x08000834: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x08000838: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x0800083C: beql        $t6, $at, L_080008B8
    if (ctx->r14 == ctx->r1) {
        // 0x08000840: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_080008B8;
    }
    goto skip_0;
    // 0x08000840: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08000844: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x08000848: lw          $t8, 0x8($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X8);
    // 0x0800084C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000850: addiu       $t9, $t9, 0x3400
    ctx->r25 = ADD32(ctx->r25, 0X3400);
    // 0x08000854: slt         $at, $t7, $t8
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x08000858: bnel        $at, $zero, L_08000890
    if (ctx->r1 != 0) {
        // 0x0800085C: lw          $a0, 0xC($v0)
        ctx->r4 = MEM_W(ctx->r2, 0XC);
            goto L_08000890;
    }
    goto skip_1;
    // 0x0800085C: lw          $a0, 0xC($v0)
    ctx->r4 = MEM_W(ctx->r2, 0XC);
    skip_1:
    // 0x08000860: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000864: addiu       $t9, $t9, 0x3400
    ctx->r25 = ADD32(ctx->r25, 0X3400);
    // 0x08000868: lw          $a0, 0xC($v0)
    ctx->r4 = MEM_W(ctx->r2, 0XC);
    // 0x0800086C: lbu         $a1, 0x13($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X13);
    // 0x08000870: lbu         $a2, 0x14($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X14);
    // 0x08000874: lbu         $a3, 0x15($v0)
    ctx->r7 = MEM_BU(ctx->r2, 0X15);
    // 0x08000878: jalr        $t9
    // 0x0800087C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800087C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_0:
    // 0x08000880: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x08000884: b           L_080008B4
    // 0x08000888: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
        goto L_080008B4;
    // 0x08000888: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x0800088C: lw          $a0, 0xC($v0)
    ctx->r4 = MEM_W(ctx->r2, 0XC);
L_08000890:
    // 0x08000890: lbu         $a1, 0x10($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X10);
    // 0x08000894: lbu         $a2, 0x11($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X11);
    // 0x08000898: lbu         $a3, 0x12($v0)
    ctx->r7 = MEM_BU(ctx->r2, 0X12);
    // 0x0800089C: jalr        $t9
    // 0x080008A0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080008A0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x080008A4: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x080008A8: lw          $t0, 0x4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X4);
    // 0x080008AC: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x080008B0: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
L_080008B4:
    // 0x080008B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080008B8:
    // 0x080008B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080008BC: jr          $ra
    // 0x080008C0: nop

    TRACE_RETURN()
    return;
    // 0x080008C0: nop

;}
RECOMP_FUNC void func_080009A8_73C5A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080009A8: jr          $ra
    // 0x080009AC: sw          $a1, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x080009AC: sw          $a1, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_080007A8_73C3A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080007A8: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x080007AC: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x080007B0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x080007B4: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x080007B8: swc1        $f12, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f12.u32l;
    // 0x080007BC: swc1        $f14, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f14.u32l;
    // 0x080007C0: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x080007C4: jr          $ra
    // 0x080007C8: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x080007C8: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_08000C60_73D270(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000C60: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000C64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000C68: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08000C6C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000C70: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x08000C74: lui         $t8, 0x8007
    ctx->r24 = S32(0X8007 << 16);
    // 0x08000C78: addiu       $t8, $t8, -0x26E0
    ctx->r24 = ADD32(ctx->r24, -0X26E0);
    // 0x08000C7C: addiu       $a0, $v0, 0x80
    ctx->r4 = ADD32(ctx->r2, 0X80);
    // 0x08000C80: lui         $t7, 0x600
    ctx->r15 = S32(0X600 << 16);
    // 0x08000C84: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x08000C88: addiu       $t0, $a0, 0x8
    ctx->r8 = ADD32(ctx->r4, 0X8);
    // 0x08000C8C: sw          $t8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r24;
    // 0x08000C90: lui         $t9, 0xFB00
    ctx->r25 = S32(0XFB00 << 16);
    // 0x08000C94: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x08000C98: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x08000C9C: andi        $t5, $a2, 0xFF
    ctx->r13 = ctx->r6 & 0XFF;
    // 0x08000CA0: sll         $t6, $t5, 16
    ctx->r14 = S32(ctx->r13 << 16);
    // 0x08000CA4: sll         $t4, $t3, 24
    ctx->r12 = S32(ctx->r11 << 24);
    // 0x08000CA8: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x08000CAC: andi        $t8, $a3, 0xFF
    ctx->r24 = ctx->r7 & 0XFF;
    // 0x08000CB0: sll         $t9, $t8, 8
    ctx->r25 = S32(ctx->r24 << 8);
    // 0x08000CB4: or          $t7, $t4, $t6
    ctx->r15 = ctx->r12 | ctx->r14;
    // 0x08000CB8: or          $t2, $t7, $t9
    ctx->r10 = ctx->r15 | ctx->r25;
    // 0x08000CBC: andi        $t5, $t3, 0xFF
    ctx->r13 = ctx->r11 & 0XFF;
    // 0x08000CC0: or          $t4, $t2, $t5
    ctx->r12 = ctx->r10 | ctx->r13;
    // 0x08000CC4: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x08000CC8: sw          $t4, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r12;
    // 0x08000CCC: lui         $t6, 0xB800
    ctx->r14 = S32(0XB800 << 16);
    // 0x08000CD0: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000CD4: sw          $t6, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r14;
    // 0x08000CD8: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x08000CDC: addiu       $v0, $t1, 0x8
    ctx->r2 = ADD32(ctx->r9, 0X8);
    // 0x08000CE0: addiu       $t9, $t9, 0x620
    ctx->r25 = ADD32(ctx->r25, 0X620);
    // 0x08000CE4: subu        $a1, $a0, $v0
    ctx->r5 = SUB32(ctx->r4, ctx->r2);
    // 0x08000CE8: jalr        $t9
    // 0x08000CEC: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000CEC: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x08000CF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000CF4: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x08000CF8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000CFC: jr          $ra
    // 0x08000D00: nop

    TRACE_RETURN()
    return;
    // 0x08000D00: nop

;}
RECOMP_FUNC void func_0800079C_73CDAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800079C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x080007A0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x080007A4: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x080007A8: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x080007AC: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x080007B0: lw          $t6, 0xD8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD8);
    // 0x080007B4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x080007B8: sltiu       $at, $t6, 0x8
    ctx->r1 = ctx->r14 < 0X8 ? 1 : 0;
    // 0x080007BC: beq         $at, $zero, L_08000BE0
    if (ctx->r1 == 0) {
        // 0x080007C0: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_08000BE0;
    }
    // 0x080007C0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x080007C4: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(70, 0XDA0) << 16);
    // 0x080007C8: addu        $at, $at, $t6
    gpr jr_addend_080007D0 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x080007CC: lw          $t6, 0xDA0($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(70, 0XDA0));
    // 0x080007D0: jr          $t6
    // 0x080007D4: nop

    switch (jr_addend_080007D0 >> 2) {
        case 0: goto L_080007D8; break;
        case 1: goto L_080008B0; break;
        case 2: goto L_08000914; break;
        case 3: goto L_08000974; break;
        case 4: goto L_08000AD4; break;
        case 5: goto L_08000B20; break;
        case 6: goto L_08000BA4; break;
        case 7: goto L_08000BE0; break;
        default: switch_error(__func__, 0x080007D0, 0x08000DA0);
    }
    // 0x080007D4: nop

L_080007D8:
    // 0x080007D8: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080007DC: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x080007E0: jalr        $t9
    // 0x080007E4: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080007E4: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    after_0:
    // 0x080007E8: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x080007EC: lhu         $t7, 0xC($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0XC);
    // 0x080007F0: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x080007F4: addiu       $t3, $zero, 0x21
    ctx->r11 = ADD32(0, 0X21);
    // 0x080007F8: beq         $v0, $t7, L_08000BE0
    if (ctx->r2 == ctx->r15) {
        // 0x080007FC: addiu       $t4, $zero, 0x2
        ctx->r12 = ADD32(0, 0X2);
            goto L_08000BE0;
    }
    // 0x080007FC: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x08000800: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x08000804: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000808: addiu       $t5, $zero, 0x3D8
    ctx->r13 = ADD32(0, 0X3D8);
    // 0x0800080C: lw          $t1, 0x60($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X60);
    // 0x08000810: addiu       $t6, $zero, 0x4F
    ctx->r14 = ADD32(0, 0X4F);
    // 0x08000814: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000818: and         $t2, $t1, $at
    ctx->r10 = ctx->r9 & ctx->r1;
    // 0x0800081C: sw          $t2, 0x60($v0)
    MEM_W(0X60, ctx->r2) = ctx->r10;
    // 0x08000820: sw          $t3, 0x60($s1)
    MEM_W(0X60, ctx->r17) = ctx->r11;
    // 0x08000824: sw          $t4, 0x64($s1)
    MEM_W(0X64, ctx->r17) = ctx->r12;
    // 0x08000828: sh          $t5, 0x5E($s1)
    MEM_H(0X5E, ctx->r17) = ctx->r13;
    // 0x0800082C: sh          $t6, 0x28($s1)
    MEM_H(0X28, ctx->r17) = ctx->r14;
    // 0x08000830: jalr        $t9
    // 0x08000834: addiu       $a0, $zero, 0x4F
    ctx->r4 = ADD32(0, 0X4F);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000834: addiu       $a0, $zero, 0x4F
    ctx->r4 = ADD32(0, 0X4F);
    after_1:
    // 0x08000838: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800083C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000840: sw          $v0, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r2;
    // 0x08000844: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000848: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0800084C: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x08000850: jalr        $t9
    // 0x08000854: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000854: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x08000858: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x0800085C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x08000860: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000864: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000868: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x0800086C: jal         0x08000C60
    // 0x08000870: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_08000C60_73D270(rdram, ctx);
        goto after_3;
    // 0x08000870: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x08000874: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x08000878: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x0800087C: or          $t8, $v0, $at
    ctx->r24 = ctx->r2 | ctx->r1;
    // 0x08000880: sw          $t8, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r24;
    // 0x08000884: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x08000888: lw          $t2, 0x18($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X18);
    // 0x0800088C: lhu         $t4, 0x16($t2)
    ctx->r12 = MEM_HU(ctx->r10, 0X16);
    // 0x08000890: sh          $t4, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r12;
    // 0x08000894: lw          $t9, 0x8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X8);
    // 0x08000898: addiu       $t5, $t4, 0x200
    ctx->r13 = ADD32(ctx->r12, 0X200);
    // 0x0800089C: andi        $t6, $t5, 0x3FF
    ctx->r14 = ctx->r13 & 0X3FF;
    // 0x080008A0: addiu       $t7, $t9, 0x1
    ctx->r15 = ADD32(ctx->r25, 0X1);
    // 0x080008A4: sh          $t6, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r14;
    // 0x080008A8: b           L_08000BE0
    // 0x080008AC: sw          $t7, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r15;
        goto L_08000BE0;
    // 0x080008AC: sw          $t7, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r15;
L_080008B0:
    // 0x080008B0: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x080008B4: lhu         $a1, 0xE($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0XE);
    // 0x080008B8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080008BC: jal         0x08000C18
    // 0x080008C0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_08000C18_73D228(rdram, ctx);
        goto after_4;
    // 0x080008C0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_4:
    // 0x080008C4: beq         $v0, $zero, L_08000BE0
    if (ctx->r2 == 0) {
        // 0x080008C8: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_08000BE0;
    }
    // 0x080008C8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080008CC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080008D0: addiu       $t9, $t9, 0x6D2C
    ctx->r25 = ADD32(ctx->r25, 0X6D2C);
    // 0x080008D4: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x080008D8: addiu       $t1, $zero, 0x1E
    ctx->r9 = ADD32(0, 0X1E);
    // 0x080008DC: addiu       $t2, $zero, 0x1E
    ctx->r10 = ADD32(0, 0X1E);
    // 0x080008E0: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x080008E4: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x080008E8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x080008EC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x080008F0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x080008F4: jalr        $t9
    // 0x080008F8: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080008F8: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_5:
    // 0x080008FC: lw          $t3, 0x8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X8);
    // 0x08000900: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x08000904: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x08000908: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x0800090C: b           L_08000BE0
    // 0x08000910: sw          $t4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r12;
        goto L_08000BE0;
    // 0x08000910: sw          $t4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r12;
L_08000914:
    // 0x08000914: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x08000918: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x0800091C: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x08000920: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000924: bne         $v1, $at, L_08000938
    if (ctx->r3 != ctx->r1) {
        // 0x08000928: addiu       $t9, $t9, -0x7468
        ctx->r25 = ADD32(ctx->r25, -0X7468);
            goto L_08000938;
    }
    // 0x08000928: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x0800092C: jalr        $t9
    // 0x08000930: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000930: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
    after_6:
    // 0x08000934: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
L_08000938:
    // 0x08000938: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x0800093C: bne         $v1, $at, L_08000958
    if (ctx->r3 != ctx->r1) {
        // 0x08000940: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_08000958;
    }
    // 0x08000940: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000944: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000948: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x0800094C: jalr        $t9
    // 0x08000950: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08000950: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_7:
    // 0x08000954: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
L_08000958:
    // 0x08000958: slti        $at, $v1, 0x2D
    ctx->r1 = SIGNED(ctx->r3) < 0X2D ? 1 : 0;
    // 0x0800095C: bne         $at, $zero, L_08000BE0
    if (ctx->r1 != 0) {
        // 0x08000960: nop
    
            goto L_08000BE0;
    }
    // 0x08000960: nop

    // 0x08000964: lw          $t5, 0x8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X8);
    // 0x08000968: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x0800096C: b           L_08000BE0
    // 0x08000970: sw          $t6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r14;
        goto L_08000BE0;
    // 0x08000970: sw          $t6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r14;
L_08000974:
    // 0x08000974: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000978: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x0800097C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000980: jalr        $t9
    // 0x08000984: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08000984: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_8:
    // 0x08000988: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x0800098C: lw          $t7, 0x4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4);
    // 0x08000990: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(70, 0X380) << 16);
    // 0x08000994: addiu       $a1, $a1, 0x380
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(70, 0X380));
    // 0x08000998: slti        $at, $t7, 0x3C
    ctx->r1 = SIGNED(ctx->r15) < 0X3C ? 1 : 0;
    // 0x0800099C: bne         $at, $zero, L_08000BE0
    if (ctx->r1 != 0) {
        // 0x080009A0: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_08000BE0;
    }
    // 0x080009A0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080009A4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080009A8: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x080009AC: jalr        $t9
    // 0x080009B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x080009B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_9:
    // 0x080009B4: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x080009B8: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x080009BC: lw          $t8, -0x39FC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X39FC);
    // 0x080009C0: lui         $t3, 0x800
    ctx->r11 = S32(RELOC_HI16(70, 0XD18) << 16);
    // 0x080009C4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080009C8: lbu         $t1, 0x60($t8)
    ctx->r9 = MEM_BU(ctx->r24, 0X60);
    // 0x080009CC: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x080009D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x080009D4: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x080009D8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x080009DC: lhu         $t3, 0xD18($t3)
    ctx->r11 = MEM_HU(ctx->r11, (int16_t)RELOC_LO16(70, 0XD18));
    // 0x080009E0: sh          $t3, 0x5E($v0)
    MEM_H(0X5E, ctx->r2) = ctx->r11;
    // 0x080009E4: jalr        $t9
    // 0x080009E8: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x080009E8: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_10:
    // 0x080009EC: lw          $t5, 0x14($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X14);
    // 0x080009F0: addiu       $t4, $zero, 0x21
    ctx->r12 = ADD32(0, 0X21);
    // 0x080009F4: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x080009F8: sw          $t4, 0x60($t5)
    MEM_W(0X60, ctx->r13) = ctx->r12;
    // 0x080009FC: lw          $t7, 0x14($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X14);
    // 0x08000A00: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000A04: addiu       $t8, $zero, 0x4F
    ctx->r24 = ADD32(0, 0X4F);
    // 0x08000A08: sw          $t6, 0x64($t7)
    MEM_W(0X64, ctx->r15) = ctx->r14;
    // 0x08000A0C: lw          $t1, 0x14($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X14);
    // 0x08000A10: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000A14: addiu       $a0, $zero, 0x4F
    ctx->r4 = ADD32(0, 0X4F);
    // 0x08000A18: jalr        $t9
    // 0x08000A1C: sh          $t8, 0x28($t1)
    MEM_H(0X28, ctx->r9) = ctx->r24;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08000A1C: sh          $t8, 0x28($t1)
    MEM_H(0X28, ctx->r9) = ctx->r24;
    after_11:
    // 0x08000A20: lw          $t2, 0x14($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X14);
    // 0x08000A24: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x08000A28: addiu       $v1, $v1, -0x33D0
    ctx->r3 = ADD32(ctx->r3, -0X33D0);
    // 0x08000A2C: sw          $v0, 0x2C($t2)
    MEM_W(0X2C, ctx->r10) = ctx->r2;
    // 0x08000A30: lbu         $t3, 0xD8($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0XD8);
    // 0x08000A34: lw          $t4, 0x14($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X14);
    // 0x08000A38: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000A3C: addiu       $t9, $t9, -0x7FB4
    ctx->r25 = ADD32(ctx->r25, -0X7FB4);
    // 0x08000A40: sb          $t3, 0x74($t4)
    MEM_B(0X74, ctx->r12) = ctx->r11;
    // 0x08000A44: lbu         $t5, 0xD8($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0XD8);
    // 0x08000A48: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000A4C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08000A50: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x08000A54: jalr        $t9
    // 0x08000A58: sb          $t6, 0xD8($v1)
    MEM_B(0XD8, ctx->r3) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x08000A58: sb          $t6, 0xD8($v1)
    MEM_B(0XD8, ctx->r3) = ctx->r14;
    after_12:
    // 0x08000A5C: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x08000A60: addiu       $t0, $t0, -0x39F4
    ctx->r8 = ADD32(ctx->r8, -0X39F4);
    // 0x08000A64: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x08000A68: lw          $t7, 0x14($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X14);
    // 0x08000A6C: lw          $t8, 0x0($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X0);
    // 0x08000A70: lw          $a0, 0x18($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X18);
    // 0x08000A74: lw          $v1, 0x18($t7)
    ctx->r3 = MEM_W(ctx->r15, 0X18);
    // 0x08000A78: lwc1        $f0, 0x8($t8)
    ctx->f0.u32l = MEM_W(ctx->r24, 0X8);
    // 0x08000A7C: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x08000A80: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000A84: swc1        $f0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f0.u32l;
    // 0x08000A88: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    // 0x08000A8C: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x08000A90: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x08000A94: lwc1        $f4, 0xC($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0XC);
    // 0x08000A98: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08000A9C: swc1        $f0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f0.u32l;
    // 0x08000AA0: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    // 0x08000AA4: lw          $t2, 0x0($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X0);
    // 0x08000AA8: lwc1        $f0, 0x10($t2)
    ctx->f0.u32l = MEM_W(ctx->r10, 0X10);
    // 0x08000AAC: swc1        $f0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f0.u32l;
    // 0x08000AB0: swc1        $f0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f0.u32l;
    // 0x08000AB4: lw          $t3, 0x30($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X30);
    // 0x08000AB8: sw          $t3, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r11;
    // 0x08000ABC: lw          $t5, 0x18($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X18);
    // 0x08000AC0: sw          $t4, 0x64($t5)
    MEM_W(0X64, ctx->r13) = ctx->r12;
    // 0x08000AC4: lw          $t6, 0x8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X8);
    // 0x08000AC8: addiu       $t9, $t6, 0x1
    ctx->r25 = ADD32(ctx->r14, 0X1);
    // 0x08000ACC: b           L_08000BE0
    // 0x08000AD0: sw          $t9, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r25;
        goto L_08000BE0;
    // 0x08000AD0: sw          $t9, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r25;
L_08000AD4:
    // 0x08000AD4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000AD8: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x08000ADC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000AE0: jalr        $t9
    // 0x08000AE4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x08000AE4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_13:
    // 0x08000AE8: bne         $v0, $zero, L_08000BE0
    if (ctx->r2 != 0) {
        // 0x08000AEC: addiu       $s0, $s1, 0xD0
        ctx->r16 = ADD32(ctx->r17, 0XD0);
            goto L_08000BE0;
    }
    // 0x08000AEC: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x08000AF0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x08000AF4: addiu       $at, $zero, -0x22
    ctx->r1 = ADD32(0, -0X22);
    // 0x08000AF8: lw          $t7, 0x60($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X60);
    // 0x08000AFC: ori         $t8, $t7, 0x20
    ctx->r24 = ctx->r15 | 0X20;
    // 0x08000B00: sw          $t8, 0x60($v0)
    MEM_W(0X60, ctx->r2) = ctx->r24;
    // 0x08000B04: lw          $t1, 0x60($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X60);
    // 0x08000B08: and         $t2, $t1, $at
    ctx->r10 = ctx->r9 & ctx->r1;
    // 0x08000B0C: sw          $t2, 0x60($s1)
    MEM_W(0X60, ctx->r17) = ctx->r10;
    // 0x08000B10: lw          $t3, 0x8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X8);
    // 0x08000B14: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x08000B18: b           L_08000BE0
    // 0x08000B1C: sw          $t4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r12;
        goto L_08000BE0;
    // 0x08000B1C: sw          $t4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r12;
L_08000B20:
    // 0x08000B20: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000B24: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x08000B28: jalr        $t9
    // 0x08000B2C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x08000B2C: nop

    after_14:
    // 0x08000B30: bne         $v0, $zero, L_08000BE0
    if (ctx->r2 != 0) {
        // 0x08000B34: lui         $t0, 0x8020
        ctx->r8 = S32(0X8020 << 16);
            goto L_08000BE0;
    }
    // 0x08000B34: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x08000B38: addiu       $t0, $t0, -0x39F4
    ctx->r8 = ADD32(ctx->r8, -0X39F4);
    // 0x08000B3C: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x08000B40: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08000B44: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08000B48: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08000B4C: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x08000B50: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08000B54: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x08000B58: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x08000B5C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x08000B60: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x08000B64: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x08000B68: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x08000B6C: jal         0x08000460
    // 0x08000B70: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    func_08000460_73CA70(rdram, ctx);
        goto after_15;
    // 0x08000B70: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_15:
    // 0x08000B74: lui         $a1, 0x3F66
    ctx->r5 = S32(0X3F66 << 16);
    // 0x08000B78: ori         $a1, $a1, 0x6666
    ctx->r5 = ctx->r5 | 0X6666;
    // 0x08000B7C: jal         0x08000490
    // 0x08000B80: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    func_08000490_73CAA0(rdram, ctx);
        goto after_16;
    // 0x08000B80: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_16:
    // 0x08000B84: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000B88: addiu       $t9, $t9, 0x4EF8
    ctx->r25 = ADD32(ctx->r25, 0X4EF8);
    // 0x08000B8C: jalr        $t9
    // 0x08000B90: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x08000B90: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    after_17:
    // 0x08000B94: lw          $t5, 0x8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X8);
    // 0x08000B98: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x08000B9C: b           L_08000BE0
    // 0x08000BA0: sw          $t6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r14;
        goto L_08000BE0;
    // 0x08000BA0: sw          $t6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r14;
L_08000BA4:
    // 0x08000BA4: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x08000BA8: jal         0x080004A4
    // 0x08000BAC: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    func_080004A4_73CAB4(rdram, ctx);
        goto after_18;
    // 0x08000BAC: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_18:
    // 0x08000BB0: bne         $v0, $zero, L_08000BE0
    if (ctx->r2 != 0) {
        // 0x08000BB4: lui         $t9, 0x8003
        ctx->r25 = S32(0X8003 << 16);
            goto L_08000BE0;
    }
    // 0x08000BB4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000BB8: addiu       $t9, $t9, 0x4EF8
    ctx->r25 = ADD32(ctx->r25, 0X4EF8);
    // 0x08000BBC: jalr        $t9
    // 0x08000BC0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_19;
    // 0x08000BC0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_19:
    // 0x08000BC4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000BC8: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08000BCC: jalr        $t9
    // 0x08000BD0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_20;
    // 0x08000BD0: nop

    after_20:
    // 0x08000BD4: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x08000BD8: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x08000BDC: sw          $t8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r24;
L_08000BE0:
    // 0x08000BE0: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000BE4: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08000BE8: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    // 0x08000BEC: jalr        $t9
    // 0x08000BF0: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_21;
    // 0x08000BF0: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    after_21:
    // 0x08000BF4: lw          $t1, 0x4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X4);
    // 0x08000BF8: sh          $v0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r2;
    // 0x08000BFC: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x08000C00: sw          $t2, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r10;
    // 0x08000C04: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x08000C08: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x08000C0C: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x08000C10: jr          $ra
    // 0x08000C14: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x08000C14: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_08000718_73CD28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000718: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800071C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000720: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000724: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000728: lw          $v0, 0xD0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD0);
    // 0x0800072C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000730: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x08000734: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08000738: sw          $v0, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = ctx->r2;
    // 0x0800073C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x08000740: jalr        $t9
    // 0x08000744: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000744: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    after_0:
    // 0x08000748: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x0800074C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000750: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000754: addiu       $a0, $zero, 0x18F
    ctx->r4 = ADD32(0, 0X18F);
    // 0x08000758: jalr        $t9
    // 0x0800075C: sh          $v0, 0xDC($a1)
    MEM_H(0XDC, ctx->r5) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800075C: sh          $v0, 0xDC($a1)
    MEM_H(0XDC, ctx->r5) = ctx->r2;
    after_1:
    // 0x08000760: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x08000764: bne         $v0, $at, L_08000778
    if (ctx->r2 != ctx->r1) {
        // 0x08000768: lui         $t9, 0x8001
        ctx->r25 = S32(0X8001 << 16);
            goto L_08000778;
    }
    // 0x08000768: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800076C: addiu       $t9, $t9, 0x3B14
    ctx->r25 = ADD32(ctx->r25, 0X3B14);
    // 0x08000770: jalr        $t9
    // 0x08000774: addiu       $a0, $zero, 0x18F
    ctx->r4 = ADD32(0, 0X18F);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000774: addiu       $a0, $zero, 0x18F
    ctx->r4 = ADD32(0, 0X18F);
    after_2:
L_08000778:
    // 0x08000778: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800077C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000780: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(70, 0X79C) << 16);
    // 0x08000784: jalr        $t9
    // 0x08000788: addiu       $a0, $a0, 0x79C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(70, 0X79C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000788: addiu       $a0, $a0, 0x79C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(70, 0X79C));
    after_3:
    // 0x0800078C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000790: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000794: jr          $ra
    // 0x08000798: nop

    TRACE_RETURN()
    return;
    // 0x08000798: nop

;}
RECOMP_FUNC void func_08000490_73CAA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000490: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x08000494: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x08000498: sb          $t6, 0xD3($a0)
    MEM_B(0XD3, ctx->r4) = ctx->r14;
    // 0x0800049C: jr          $ra
    // 0x080004A0: swc1        $f12, 0xE4($a0)
    MEM_W(0XE4, ctx->r4) = ctx->f12.u32l;
    TRACE_RETURN()
    return;
    // 0x080004A0: swc1        $f12, 0xE4($a0)
    MEM_W(0XE4, ctx->r4) = ctx->f12.u32l;
;}
