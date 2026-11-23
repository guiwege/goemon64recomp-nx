#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_802164F8_6754A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802164F8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802164FC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80216500: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80216504: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80216508: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8021650C: lh          $t6, 0x88($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X88);
    // 0x80216510: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80216514: addiu       $s0, $a0, 0x5C
    ctx->r16 = ADD32(ctx->r4, 0X5C);
    // 0x80216518: slti        $at, $t6, 0xA
    ctx->r1 = SIGNED(ctx->r14) < 0XA ? 1 : 0;
    // 0x8021651C: bne         $at, $zero, L_80216560
    if (ctx->r1 != 0) {
        // 0x80216520: addiu       $t7, $zero, 0x9
        ctx->r15 = ADD32(0, 0X9);
            goto L_80216560;
    }
    // 0x80216520: addiu       $t7, $zero, 0x9
    ctx->r15 = ADD32(0, 0X9);
    // 0x80216524: lb          $t8, 0x37($s0)
    ctx->r24 = MEM_B(ctx->r16, 0X37);
    // 0x80216528: sh          $t7, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r15;
    // 0x8021652C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80216530: sb          $t8, 0x7ACD($at)
    MEM_B(0X7ACD, ctx->r1) = ctx->r24;
    // 0x80216534: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    // 0x80216538: jal         0x800116AC
    // 0x8021653C: sw          $a1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r5;
    func_800116AC_122AC(rdram, ctx);
        goto after_0;
    // 0x8021653C: sw          $a1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r5;
    after_0:
    // 0x80216540: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x80216544: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x80216548: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x8021654C: lw          $t0, -0x3A38($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3A38);
    // 0x80216550: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80216554: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x80216558: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8021655C: sb          $t9, -0x521F($at)
    MEM_B(-0X521F, ctx->r1) = ctx->r25;
L_80216560:
    // 0x80216560: addiu       $s0, $a1, 0x5C
    ctx->r16 = ADD32(ctx->r5, 0X5C);
    // 0x80216564: lw          $v0, 0x28($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X28);
    // 0x80216568: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8021656C: addiu       $a0, $a0, -0x1B70
    ctx->r4 = ADD32(ctx->r4, -0X1B70);
    // 0x80216570: beq         $v0, $zero, L_80216584
    if (ctx->r2 == 0) {
        // 0x80216574: or          $v1, $a0, $zero
        ctx->r3 = ctx->r4 | 0;
            goto L_80216584;
    }
    // 0x80216574: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80216578: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x8021657C: or          $t1, $v1, $at
    ctx->r9 = ctx->r3 | ctx->r1;
    // 0x80216580: sw          $t1, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r9;
L_80216584:
    // 0x80216584: jal         0x800108BC
    // 0x80216588: nop

    func_800108BC_114BC(rdram, ctx);
        goto after_1;
    // 0x80216588: nop

    after_1:
    // 0x8021658C: addiu       $t2, $zero, 0xF0
    ctx->r10 = ADD32(0, 0XF0);
    // 0x80216590: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80216594: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80216598: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8021659C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802165A0: lh          $t3, 0x2C($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X2C);
    // 0x802165A4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802165A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802165AC: sll         $t4, $t3, 3
    ctx->r12 = S32(ctx->r11 << 3);
    // 0x802165B0: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x802165B4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x802165B8: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x802165BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802165C0: jal         0x800108E4
    // 0x802165C4: addiu       $a3, $zero, 0x140
    ctx->r7 = ADD32(0, 0X140);
    func_800108E4_114E4(rdram, ctx);
        goto after_2;
    // 0x802165C4: addiu       $a3, $zero, 0x140
    ctx->r7 = ADD32(0, 0X140);
    after_2:
    // 0x802165C8: lh          $t5, 0x2C($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X2C);
    // 0x802165CC: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x802165D0: sh          $t6, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r14;
    // 0x802165D4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802165D8: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x802165DC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x802165E0: jr          $ra
    // 0x802165E4: nop

    TRACE_RETURN()
    return;
    // 0x802165E4: nop

;}
RECOMP_FUNC void func_8020FC3C_66EBEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020FC3C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8020FC40: ldc1        $f14, 0x7710($at)
    CHECK_FR(ctx, 14);
    ctx->f14.u64 = LD(ctx->r1, 0X7710);
    // 0x8020FC44: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8020FC48: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8020FC4C: ldc1        $f2, 0x7718($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, 0X7718);
L_8020FC50:
    // 0x8020FC50: lw          $a1, 0x18($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X18);
    // 0x8020FC54: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x8020FC58: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8020FC5C: beq         $a1, $zero, L_8020FC7C
    if (ctx->r5 == 0) {
        // 0x8020FC60: cvt.d.s     $f8, $f12
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f8.d = CVT_D_S(ctx->f12.fl);
            goto L_8020FC7C;
    }
    // 0x8020FC60: cvt.d.s     $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f8.d = CVT_D_S(ctx->f12.fl);
    // 0x8020FC64: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x8020FC68: mul.d       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f2.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f2.d);
    // 0x8020FC6C: cvt.s.d     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f0.fl = CVT_S_D(ctx->f6.d);
    // 0x8020FC70: swc1        $f0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f0.u32l;
    // 0x8020FC74: swc1        $f0, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f0.u32l;
    // 0x8020FC78: swc1        $f0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f0.u32l;
L_8020FC7C:
    // 0x8020FC7C: mul.d       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f14.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f14.d);
    // 0x8020FC80: lw          $t6, 0x30($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X30);
    // 0x8020FC84: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x8020FC88: beq         $t6, $zero, L_8020FC98
    if (ctx->r14 == 0) {
        // 0x8020FC8C: swc1        $f16, 0x10($v1)
        MEM_W(0X10, ctx->r3) = ctx->f16.u32l;
            goto L_8020FC98;
    }
    // 0x8020FC8C: swc1        $f16, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f16.u32l;
    // 0x8020FC90: b           L_8020FC50
    // 0x8020FC94: lw          $a0, 0x30($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X30);
        goto L_8020FC50;
    // 0x8020FC94: lw          $a0, 0x30($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X30);
L_8020FC98:
    // 0x8020FC98: jr          $ra
    // 0x8020FC9C: nop

    TRACE_RETURN()
    return;
    // 0x8020FC9C: nop

;}
RECOMP_FUNC void func_8020EFB8_66DF68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020EFB8: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x8020EFBC: lw          $v1, -0x3A38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A38);
    // 0x8020EFC0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8020EFC4: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8020EFC8: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x8020EFCC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020EFD0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8020EFD4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8020EFD8: addu        $v1, $v1, $at
    ctx->r3 = ADD32(ctx->r3, ctx->r1);
    // 0x8020EFDC: lbu         $t6, 0x2DE1($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X2DE1);
    // 0x8020EFE0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8020EFE4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8020EFE8: bne         $t6, $at, L_8020F014
    if (ctx->r14 != ctx->r1) {
        // 0x8020EFEC: addiu       $v0, $a0, 0x5C
        ctx->r2 = ADD32(ctx->r4, 0X5C);
            goto L_8020F014;
    }
    // 0x8020EFEC: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8020EFF0: lw          $t7, 0x20($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X20);
    // 0x8020EFF4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8020EFF8: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8020EFFC: sw          $t7, 0x6BE0($at)
    MEM_W(0X6BE0, ctx->r1) = ctx->r15;
    // 0x8020F000: sw          $zero, 0x18($v0)
    MEM_W(0X18, ctx->r2) = 0;
    // 0x8020F004: jal         0x8003521C
    // 0x8020F008: addiu       $a0, $a0, -0x1130
    ctx->r4 = ADD32(ctx->r4, -0X1130);
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x8020F008: addiu       $a0, $a0, -0x1130
    ctx->r4 = ADD32(ctx->r4, -0X1130);
    after_0:
    // 0x8020F00C: b           L_8020F10C
    // 0x8020F010: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8020F10C;
    // 0x8020F010: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8020F014:
    // 0x8020F014: lhu         $a2, 0x307A($v1)
    ctx->r6 = MEM_HU(ctx->r3, 0X307A);
    // 0x8020F018: addiu       $v0, $a1, 0x5C
    ctx->r2 = ADD32(ctx->r5, 0X5C);
    // 0x8020F01C: andi        $t8, $a2, 0x8
    ctx->r24 = ctx->r6 & 0X8;
    // 0x8020F020: beq         $t8, $zero, L_8020F048
    if (ctx->r24 == 0) {
        // 0x8020F024: andi        $t3, $a2, 0x4
        ctx->r11 = ctx->r6 & 0X4;
            goto L_8020F048;
    }
    // 0x8020F024: andi        $t3, $a2, 0x4
    ctx->r11 = ctx->r6 & 0X4;
    // 0x8020F028: lw          $t9, 0x24($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X24);
    // 0x8020F02C: andi        $t0, $t9, 0x8
    ctx->r8 = ctx->r25 & 0X8;
    // 0x8020F030: bne         $t0, $zero, L_8020F048
    if (ctx->r8 != 0) {
        // 0x8020F034: nop
    
            goto L_8020F048;
    }
    // 0x8020F034: nop

    // 0x8020F038: lw          $t1, 0x20($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X20);
    // 0x8020F03C: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x8020F040: b           L_8020F06C
    // 0x8020F044: sw          $t2, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r10;
        goto L_8020F06C;
    // 0x8020F044: sw          $t2, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r10;
L_8020F048:
    // 0x8020F048: beq         $t3, $zero, L_8020F06C
    if (ctx->r11 == 0) {
        // 0x8020F04C: addiu       $v0, $a1, 0x5C
        ctx->r2 = ADD32(ctx->r5, 0X5C);
            goto L_8020F06C;
    }
    // 0x8020F04C: addiu       $v0, $a1, 0x5C
    ctx->r2 = ADD32(ctx->r5, 0X5C);
    // 0x8020F050: lw          $t4, 0x24($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X24);
    // 0x8020F054: andi        $t5, $t4, 0x4
    ctx->r13 = ctx->r12 & 0X4;
    // 0x8020F058: bnel        $t5, $zero, L_8020F070
    if (ctx->r13 != 0) {
        // 0x8020F05C: lw          $a1, 0x20($v0)
        ctx->r5 = MEM_W(ctx->r2, 0X20);
            goto L_8020F070;
    }
    goto skip_0;
    // 0x8020F05C: lw          $a1, 0x20($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X20);
    skip_0:
    // 0x8020F060: lw          $t6, 0x20($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X20);
    // 0x8020F064: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8020F068: sw          $t7, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r15;
L_8020F06C:
    // 0x8020F06C: lw          $a1, 0x20($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X20);
L_8020F070:
    // 0x8020F070: bgezl       $a1, L_8020F084
    if (SIGNED(ctx->r5) >= 0) {
        // 0x8020F074: slti        $at, $a1, 0x4
        ctx->r1 = SIGNED(ctx->r5) < 0X4 ? 1 : 0;
            goto L_8020F084;
    }
    goto skip_1;
    // 0x8020F074: slti        $at, $a1, 0x4
    ctx->r1 = SIGNED(ctx->r5) < 0X4 ? 1 : 0;
    skip_1:
    // 0x8020F078: sw          $zero, 0x20($v0)
    MEM_W(0X20, ctx->r2) = 0;
    // 0x8020F07C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8020F080: slti        $at, $a1, 0x4
    ctx->r1 = SIGNED(ctx->r5) < 0X4 ? 1 : 0;
L_8020F084:
    // 0x8020F084: bnel        $at, $zero, L_8020F098
    if (ctx->r1 != 0) {
        // 0x8020F088: sw          $a2, 0x24($v0)
        MEM_W(0X24, ctx->r2) = ctx->r6;
            goto L_8020F098;
    }
    goto skip_2;
    // 0x8020F088: sw          $a2, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r6;
    skip_2:
    // 0x8020F08C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8020F090: sw          $a1, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r5;
    // 0x8020F094: sw          $a2, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r6;
L_8020F098:
    // 0x8020F098: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x8020F09C: jal         0x8020E498
    // 0x8020F0A0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_8020E498_66D448(rdram, ctx);
        goto after_1;
    // 0x8020F0A0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x8020F0A4: lui         $at, 0x403E
    ctx->r1 = S32(0X403E << 16);
    // 0x8020F0A8: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x8020F0AC: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x8020F0B0: lw          $v1, -0x3A38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A38);
    // 0x8020F0B4: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8020F0B8: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x8020F0BC: addu        $v1, $v1, $at
    ctx->r3 = ADD32(ctx->r3, ctx->r1);
    // 0x8020F0C0: lh          $t0, 0x3080($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X3080);
    // 0x8020F0C4: lh          $t9, 0x307E($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X307E);
    // 0x8020F0C8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8020F0CC: negu        $t1, $t0
    ctx->r9 = SUB32(0, ctx->r8);
    // 0x8020F0D0: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x8020F0D4: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8020F0D8: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8020F0DC: cvt.d.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.d = CVT_D_W(ctx->f16.u32l);
    // 0x8020F0E0: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x8020F0E4: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x8020F0E8: div.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = DIV_D(ctx->f18.d, ctx->f0.d);
    // 0x8020F0EC: div.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = DIV_D(ctx->f6.d, ctx->f0.d);
    // 0x8020F0F0: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x8020F0F4: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x8020F0F8: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x8020F0FC: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x8020F100: jal         0x8020E328
    // 0x8020F104: nop

    func_8020E328_66D2D8(rdram, ctx);
        goto after_2;
    // 0x8020F104: nop

    after_2:
    // 0x8020F108: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8020F10C:
    // 0x8020F10C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8020F110: jr          $ra
    // 0x8020F114: nop

    TRACE_RETURN()
    return;
    // 0x8020F114: nop

;}
RECOMP_FUNC void func_8020F118_66E0C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F118: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F11C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F120: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8020F124: jal         0x80013AC4
    // 0x8020F128: addiu       $a0, $a0, 0x6BE4
    ctx->r4 = ADD32(ctx->r4, 0X6BE4);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F128: addiu       $a0, $a0, 0x6BE4
    ctx->r4 = ADD32(ctx->r4, 0X6BE4);
    after_0:
    // 0x8020F12C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F130: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F134: jr          $ra
    // 0x8020F138: nop

    TRACE_RETURN()
    return;
    // 0x8020F138: nop

;}
RECOMP_FUNC void func_802154D4_674484(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802154D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802154D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802154DC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802154E0: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802154E4: sb          $t6, 0xA0($a0)
    MEM_B(0XA0, ctx->r4) = ctx->r14;
    // 0x802154E8: lw          $a1, 0x84($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X84);
    // 0x802154EC: lw          $a0, 0x8C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8C);
    // 0x802154F0: jal         0x8001080C
    // 0x802154F4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_8001080C_1140C(rdram, ctx);
        goto after_0;
    // 0x802154F4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x802154F8: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x802154FC: addiu       $v0, $a2, 0x5C
    ctx->r2 = ADD32(ctx->r6, 0X5C);
    // 0x80215500: lw          $a0, 0x30($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X30);
    // 0x80215504: jal         0x8001080C
    // 0x80215508: lw          $a1, 0x2C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X2C);
    func_8001080C_1140C(rdram, ctx);
        goto after_1;
    // 0x80215508: lw          $a1, 0x2C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X2C);
    after_1:
    // 0x8021550C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80215510: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80215514: jr          $ra
    // 0x80215518: nop

    TRACE_RETURN()
    return;
    // 0x80215518: nop

;}
RECOMP_FUNC void func_802148F8_6738A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802148F8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802148FC: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x80214900: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80214904: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80214908: lui         $a1, 0x801
    ctx->r5 = S32(0X801 << 16);
    // 0x8021490C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80214910: addiu       $a1, $a1, 0x3110
    ctx->r5 = ADD32(ctx->r5, 0X3110);
    // 0x80214914: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80214918: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x8021491C: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x80214920: addiu       $a2, $a2, 0x6AE0
    ctx->r6 = ADD32(ctx->r6, 0X6AE0);
    // 0x80214924: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x80214928: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8021492C: or          $t6, $a2, $at
    ctx->r14 = ctx->r6 | ctx->r1;
    // 0x80214930: ori         $t7, $zero, 0x8000
    ctx->r15 = 0 | 0X8000;
    // 0x80214934: ori         $t8, $zero, 0x8000
    ctx->r24 = 0 | 0X8000;
    // 0x80214938: ori         $t9, $zero, 0x8000
    ctx->r25 = 0 | 0X8000;
    // 0x8021493C: addiu       $t0, $zero, 0x4D2
    ctx->r8 = ADD32(0, 0X4D2);
    // 0x80214940: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80214944: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x80214948: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x8021494C: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x80214950: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80214954: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x80214958: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x8021495C: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    // 0x80214960: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x80214964: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x80214968: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x8021496C: jal         0x8000DBF0
    // 0x80214970: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_0;
    // 0x80214970: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x80214974: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x80214978: sb          $t1, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r9;
    // 0x8021497C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80214980: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80214984: jr          $ra
    // 0x80214988: nop

    TRACE_RETURN()
    return;
    // 0x80214988: nop

;}
RECOMP_FUNC void func_802121FC_6711AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802121FC: addiu       $t6, $a3, -0x1
    ctx->r14 = ADD32(ctx->r7, -0X1);
    // 0x80212200: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80212204: sltiu       $at, $t6, 0x8
    ctx->r1 = ctx->r14 < 0X8 ? 1 : 0;
    // 0x80212208: beq         $at, $zero, L_802122E0
    if (ctx->r1 == 0) {
        // 0x8021220C: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_802122E0;
    }
    // 0x8021220C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80212210: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80212214: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80212218: addu        $at, $at, $t6
    gpr jr_addend_80212220 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8021221C: lw          $t6, 0x7918($at)
    ctx->r14 = ADD32(ctx->r1, 0X7918);
    // 0x80212220: jr          $t6
    // 0x80212224: nop

    switch (jr_addend_80212220 >> 2) {
        case 0: goto L_80212228; break;
        case 1: goto L_8021223C; break;
        case 2: goto L_80212250; break;
        case 3: goto L_80212264; break;
        case 4: goto L_80212278; break;
        case 5: goto L_8021228C; break;
        case 6: goto L_802122A0; break;
        case 7: goto L_802122B4; break;
        default: switch_error(__func__, 0x80212220, 0x80217918);
    }
    // 0x80212224: nop

L_80212228:
    // 0x80212228: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x8021222C: lw          $v0, 0x7F14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7F14);
    // 0x80212230: addiu       $v1, $zero, 0x30
    ctx->r3 = ADD32(0, 0X30);
    // 0x80212234: b           L_802122C4
    // 0x80212238: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
        goto L_802122C4;
    // 0x80212238: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_8021223C:
    // 0x8021223C: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80212240: lw          $v0, 0x7F14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7F14);
    // 0x80212244: addiu       $v1, $zero, 0x30
    ctx->r3 = ADD32(0, 0X30);
    // 0x80212248: b           L_802122C4
    // 0x8021224C: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
        goto L_802122C4;
    // 0x8021224C: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
L_80212250:
    // 0x80212250: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80212254: lw          $v0, 0x7F18($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7F18);
    // 0x80212258: addiu       $v1, $zero, 0x18
    ctx->r3 = ADD32(0, 0X18);
    // 0x8021225C: b           L_802122C4
    // 0x80212260: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
        goto L_802122C4;
    // 0x80212260: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_80212264:
    // 0x80212264: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80212268: lw          $v0, 0x7F18($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7F18);
    // 0x8021226C: addiu       $v1, $zero, 0x28
    ctx->r3 = ADD32(0, 0X28);
    // 0x80212270: b           L_802122C4
    // 0x80212274: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
        goto L_802122C4;
    // 0x80212274: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_80212278:
    // 0x80212278: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x8021227C: lw          $v0, 0x7F18($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7F18);
    // 0x80212280: addiu       $v1, $zero, 0x18
    ctx->r3 = ADD32(0, 0X18);
    // 0x80212284: b           L_802122C4
    // 0x80212288: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
        goto L_802122C4;
    // 0x80212288: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
L_8021228C:
    // 0x8021228C: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80212290: lw          $v0, 0x7F18($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7F18);
    // 0x80212294: addiu       $v1, $zero, 0x28
    ctx->r3 = ADD32(0, 0X28);
    // 0x80212298: b           L_802122C4
    // 0x8021229C: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
        goto L_802122C4;
    // 0x8021229C: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
L_802122A0:
    // 0x802122A0: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x802122A4: lw          $v0, 0x7F1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7F1C);
    // 0x802122A8: addiu       $v1, $zero, 0x30
    ctx->r3 = ADD32(0, 0X30);
    // 0x802122AC: b           L_802122C4
    // 0x802122B0: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
        goto L_802122C4;
    // 0x802122B0: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_802122B4:
    // 0x802122B4: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x802122B8: lw          $v0, 0x7F1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7F1C);
    // 0x802122BC: addiu       $v1, $zero, 0x30
    ctx->r3 = ADD32(0, 0X30);
    // 0x802122C0: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
L_802122C4:
    // 0x802122C4: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x802122C8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x802122CC: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x802122D0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x802122D4: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x802122D8: jal         0x800106F0
    // 0x802122DC: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    func_800106F0_112F0(rdram, ctx);
        goto after_0;
    // 0x802122DC: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    after_0:
L_802122E0:
    // 0x802122E0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802122E4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802122E8: jr          $ra
    // 0x802122EC: nop

    TRACE_RETURN()
    return;
    // 0x802122EC: nop

;}
RECOMP_FUNC void func_80212470_671420(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80212470: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80212474: beq         $a3, $zero, L_8021249C
    if (ctx->r7 == 0) {
        // 0x80212478: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_8021249C;
    }
    // 0x80212478: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8021247C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80212480: beq         $a3, $at, L_802124AC
    if (ctx->r7 == ctx->r1) {
        // 0x80212484: lui         $v0, 0x8021
        ctx->r2 = S32(0X8021 << 16);
            goto L_802124AC;
    }
    // 0x80212484: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80212488: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8021248C: beq         $a3, $at, L_802124B8
    if (ctx->r7 == ctx->r1) {
        // 0x80212490: lui         $v0, 0x8021
        ctx->r2 = S32(0X8021 << 16);
            goto L_802124B8;
    }
    // 0x80212490: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80212494: b           L_802124E0
    // 0x80212498: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_802124E0;
    // 0x80212498: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8021249C:
    // 0x8021249C: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x802124A0: lw          $v0, 0x7F6C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7F6C);
    // 0x802124A4: b           L_802124C0
    // 0x802124A8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_802124C0;
    // 0x802124A8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_802124AC:
    // 0x802124AC: lw          $v0, 0x7F6C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7F6C);
    // 0x802124B0: b           L_802124C0
    // 0x802124B4: addiu       $v1, $zero, 0x18
    ctx->r3 = ADD32(0, 0X18);
        goto L_802124C0;
    // 0x802124B4: addiu       $v1, $zero, 0x18
    ctx->r3 = ADD32(0, 0X18);
L_802124B8:
    // 0x802124B8: lw          $v0, 0x7F70($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7F70);
    // 0x802124BC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_802124C0:
    // 0x802124C0: addiu       $t6, $zero, 0x18
    ctx->r14 = ADD32(0, 0X18);
    // 0x802124C4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802124C8: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    // 0x802124CC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x802124D0: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x802124D4: jal         0x800106F0
    // 0x802124D8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_800106F0_112F0(rdram, ctx);
        goto after_0;
    // 0x802124D8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x802124DC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802124E0:
    // 0x802124E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802124E4: jr          $ra
    // 0x802124E8: nop

    TRACE_RETURN()
    return;
    // 0x802124E8: nop

;}
RECOMP_FUNC void func_80215524_6744D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80215524: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80215528: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8021552C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80215530: beq         $a0, $zero, L_802155E0
    if (ctx->r4 == 0) {
        // 0x80215534: or          $a2, $a1, $zero
        ctx->r6 = ctx->r5 | 0;
            goto L_802155E0;
    }
    // 0x80215534: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80215538: addiu       $s0, $a0, 0x5C
    ctx->r16 = ADD32(ctx->r4, 0X5C);
    // 0x8021553C: lw          $v0, 0x28($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X28);
    // 0x80215540: sw          $a1, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r5;
    // 0x80215544: bgez        $v0, L_80215554
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80215548: negu        $t6, $v0
        ctx->r14 = SUB32(0, ctx->r2);
            goto L_80215554;
    }
    // 0x80215548: negu        $t6, $v0
    ctx->r14 = SUB32(0, ctx->r2);
    // 0x8021554C: b           L_80215558
    // 0x80215550: sw          $t6, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r14;
        goto L_80215558;
    // 0x80215550: sw          $t6, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r14;
L_80215554:
    // 0x80215554: sw          $v0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r2;
L_80215558:
    // 0x80215558: lw          $v0, 0x2C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2C);
    // 0x8021555C: bgez        $v0, L_8021556C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80215560: negu        $t7, $v0
        ctx->r15 = SUB32(0, ctx->r2);
            goto L_8021556C;
    }
    // 0x80215560: negu        $t7, $v0
    ctx->r15 = SUB32(0, ctx->r2);
    // 0x80215564: b           L_80215570
    // 0x80215568: sw          $t7, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r15;
        goto L_80215570;
    // 0x80215568: sw          $t7, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r15;
L_8021556C:
    // 0x8021556C: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
L_80215570:
    // 0x80215570: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    // 0x80215574: lw          $a1, 0x28($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X28);
    // 0x80215578: jal         0x80010864
    // 0x8021557C: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    func_80010864_11464(rdram, ctx);
        goto after_0;
    // 0x8021557C: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    after_0:
    // 0x80215580: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    // 0x80215584: jal         0x80010864
    // 0x80215588: lw          $a1, 0x2C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2C);
    func_80010864_11464(rdram, ctx);
        goto after_1;
    // 0x80215588: lw          $a1, 0x2C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2C);
    after_1:
    // 0x8021558C: lw          $t8, 0x3C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X3C);
    // 0x80215590: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80215594: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80215598: slt         $at, $a2, $t9
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8021559C: bne         $at, $zero, L_802155C0
    if (ctx->r1 != 0) {
        // 0x802155A0: nop
    
            goto L_802155C0;
    }
    // 0x802155A0: nop

    // 0x802155A4: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    // 0x802155A8: jal         0x8001080C
    // 0x802155AC: lw          $a1, 0x28($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X28);
    func_8001080C_1140C(rdram, ctx);
        goto after_2;
    // 0x802155AC: lw          $a1, 0x28($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X28);
    after_2:
    // 0x802155B0: lw          $t0, 0x28($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X28);
    // 0x802155B4: negu        $t1, $t0
    ctx->r9 = SUB32(0, ctx->r8);
    // 0x802155B8: b           L_802155E0
    // 0x802155BC: sw          $t1, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r9;
        goto L_802155E0;
    // 0x802155BC: sw          $t1, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r9;
L_802155C0:
    // 0x802155C0: bgtzl       $a2, L_802155E4
    if (SIGNED(ctx->r6) > 0) {
        // 0x802155C4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802155E4;
    }
    goto skip_0;
    // 0x802155C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x802155C8: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    // 0x802155CC: jal         0x8001080C
    // 0x802155D0: lw          $a1, 0x2C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2C);
    func_8001080C_1140C(rdram, ctx);
        goto after_3;
    // 0x802155D0: lw          $a1, 0x2C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2C);
    after_3:
    // 0x802155D4: lw          $t2, 0x2C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X2C);
    // 0x802155D8: negu        $t3, $t2
    ctx->r11 = SUB32(0, ctx->r10);
    // 0x802155DC: sw          $t3, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r11;
L_802155E0:
    // 0x802155E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802155E4:
    // 0x802155E4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802155E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802155EC: jr          $ra
    // 0x802155F0: nop

    TRACE_RETURN()
    return;
    // 0x802155F0: nop

;}
RECOMP_FUNC void func_8020FE60_66EE10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020FE60: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x8020FE64: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8020FE68: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8020FE6C: beq         $v0, $zero, L_8020FE90
    if (ctx->r2 == 0) {
        // 0x8020FE70: nop
    
            goto L_8020FE90;
    }
    // 0x8020FE70: nop

    // 0x8020FE74: ldc1        $f6, 0x7740($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, 0X7740);
    // 0x8020FE78: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x8020FE7C: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x8020FE80: cvt.s.d     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f0.fl = CVT_S_D(ctx->f8.d);
    // 0x8020FE84: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x8020FE88: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x8020FE8C: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
L_8020FE90:
    // 0x8020FE90: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8020FE94: ldc1        $f16, 0x7748($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, 0X7748);
    // 0x8020FE98: cvt.d.s     $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f10.d = CVT_D_S(ctx->f12.fl);
    // 0x8020FE9C: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x8020FEA0: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x8020FEA4: jr          $ra
    // 0x8020FEA8: swc1        $f4, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x8020FEA8: swc1        $f4, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_80215474_674424(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80215474: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80215478: beq         $a0, $zero, L_802154C4
    if (ctx->r4 == 0) {
        // 0x8021547C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802154C4;
    }
    // 0x8021547C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80215480: jal         0x80214590
    // 0x80215484: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_80214590_673540(rdram, ctx);
        goto after_0;
    // 0x80215484: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80215488: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8021548C: addiu       $v0, $a1, 0x5C
    ctx->r2 = ADD32(ctx->r5, 0X5C);
    // 0x80215490: lw          $a0, 0x30($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X30);
    // 0x80215494: jal         0x80010374
    // 0x80215498: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80010374_10F74(rdram, ctx);
        goto after_1;
    // 0x80215498: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x8021549C: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x802154A0: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x802154A4: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x802154A8: lw          $a1, 0x1C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X1C);
    // 0x802154AC: beql        $a1, $zero, L_802154C8
    if (ctx->r5 == 0) {
        // 0x802154B0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802154C8;
    }
    goto skip_0;
    // 0x802154B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802154B4: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x802154B8: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x802154BC: jal         0x80014B74
    // 0x802154C0: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_80014B74_15774(rdram, ctx);
        goto after_2;
    // 0x802154C0: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_2:
L_802154C4:
    // 0x802154C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802154C8:
    // 0x802154C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802154CC: jr          $ra
    // 0x802154D0: nop

    TRACE_RETURN()
    return;
    // 0x802154D0: nop

;}
RECOMP_FUNC void func_80215150_674100(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80215150: addiu       $t6, $a1, 0x1
    ctx->r14 = ADD32(ctx->r5, 0X1);
    // 0x80215154: addiu       $t7, $zero, 0x70
    ctx->r15 = ADD32(0, 0X70);
    // 0x80215158: div         $zero, $t7, $t6
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r14))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r14)));
    // 0x8021515C: mflo        $t8
    ctx->r24 = lo;
    // 0x80215160: bne         $t6, $zero, L_8021516C
    if (ctx->r14 != 0) {
        // 0x80215164: nop
    
            goto L_8021516C;
    }
    // 0x80215164: nop

    // 0x80215168: break       7
    do_break(2149667176);
L_8021516C:
    // 0x8021516C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80215170: bne         $t6, $at, L_80215184
    if (ctx->r14 != ctx->r1) {
        // 0x80215174: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80215184;
    }
    // 0x80215174: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80215178: bne         $t7, $at, L_80215184
    if (ctx->r15 != ctx->r1) {
        // 0x8021517C: nop
    
            goto L_80215184;
    }
    // 0x8021517C: nop

    // 0x80215180: break       6
    do_break(2149667200);
L_80215184:
    // 0x80215184: multu       $t8, $a0
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80215188: mflo        $v0
    ctx->r2 = lo;
    // 0x8021518C: addiu       $v0, $v0, 0x25
    ctx->r2 = ADD32(ctx->r2, 0X25);
    // 0x80215190: jr          $ra
    // 0x80215194: nop

    TRACE_RETURN()
    return;
    // 0x80215194: nop

;}
RECOMP_FUNC void func_802126F8_6716A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802126F8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x802126FC: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x80212700: lw          $t7, 0x7F3C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7F3C);
    // 0x80212704: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80212708: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8021270C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80212710: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80212714: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x80212718: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8021271C: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x80212720: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x80212724: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80212728: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8021272C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80212730: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x80212734: jal         0x800106F0
    // 0x80212738: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    func_800106F0_112F0(rdram, ctx);
        goto after_0;
    // 0x80212738: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_0:
    // 0x8021273C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x80212740: lw          $t9, 0x7F44($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7F44);
    // 0x80212744: addiu       $a1, $s1, 0x20
    ctx->r5 = ADD32(ctx->r17, 0X20);
    // 0x80212748: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x8021274C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80212750: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x80212754: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80212758: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x8021275C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x80212760: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80212764: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80212768: jal         0x800106F0
    // 0x8021276C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    func_800106F0_112F0(rdram, ctx);
        goto after_1;
    // 0x8021276C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    after_1:
    // 0x80212770: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x80212774: lw          $t1, 0x7F3C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7F3C);
    // 0x80212778: addiu       $a1, $s1, 0x40
    ctx->r5 = ADD32(ctx->r17, 0X40);
    // 0x8021277C: addiu       $t0, $zero, 0x20
    ctx->r8 = ADD32(0, 0X20);
    // 0x80212780: addiu       $t2, $zero, 0x20
    ctx->r10 = ADD32(0, 0X20);
    // 0x80212784: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x80212788: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x8021278C: sw          $a1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r5;
    // 0x80212790: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80212794: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x80212798: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x8021279C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802127A0: jal         0x800106F0
    // 0x802127A4: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    func_800106F0_112F0(rdram, ctx);
        goto after_2;
    // 0x802127A4: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    after_2:
    // 0x802127A8: lui         $t4, 0x8021
    ctx->r12 = S32(0X8021 << 16);
    // 0x802127AC: lw          $t4, 0x7F48($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7F48);
    // 0x802127B0: addiu       $a2, $s2, 0x20
    ctx->r6 = ADD32(ctx->r18, 0X20);
    // 0x802127B4: addiu       $t3, $zero, 0x1C
    ctx->r11 = ADD32(0, 0X1C);
    // 0x802127B8: addiu       $t5, $zero, 0x10
    ctx->r13 = ADD32(0, 0X10);
    // 0x802127BC: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x802127C0: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x802127C4: sw          $a2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r6;
    // 0x802127C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802127CC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x802127D0: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x802127D4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802127D8: jal         0x800106F0
    // 0x802127DC: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    func_800106F0_112F0(rdram, ctx);
        goto after_3;
    // 0x802127DC: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    after_3:
    // 0x802127E0: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x802127E4: lw          $t7, 0x7F48($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7F48);
    // 0x802127E8: addiu       $t6, $zero, 0x1C
    ctx->r14 = ADD32(0, 0X1C);
    // 0x802127EC: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x802127F0: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x802127F4: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x802127F8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802127FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80212800: addiu       $a1, $s1, 0x5C
    ctx->r5 = ADD32(ctx->r17, 0X5C);
    // 0x80212804: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x80212808: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8021280C: jal         0x800106F0
    // 0x80212810: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    func_800106F0_112F0(rdram, ctx);
        goto after_4;
    // 0x80212810: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_4:
    // 0x80212814: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x80212818: lw          $t0, 0x7F40($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7F40);
    // 0x8021281C: addiu       $a2, $s2, 0x3C
    ctx->r6 = ADD32(ctx->r18, 0X3C);
    // 0x80212820: addiu       $t9, $zero, 0x12
    ctx->r25 = ADD32(0, 0X12);
    // 0x80212824: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
    // 0x80212828: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x8021282C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80212830: sw          $a2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r6;
    // 0x80212834: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80212838: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8021283C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x80212840: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80212844: jal         0x800106F0
    // 0x80212848: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    func_800106F0_112F0(rdram, ctx);
        goto after_5;
    // 0x80212848: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_5:
    // 0x8021284C: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x80212850: lw          $t3, 0x7F44($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7F44);
    // 0x80212854: addiu       $a2, $s2, 0x4E
    ctx->r6 = ADD32(ctx->r18, 0X4E);
    // 0x80212858: addiu       $t2, $zero, 0x12
    ctx->r10 = ADD32(0, 0X12);
    // 0x8021285C: addiu       $t4, $zero, 0xE
    ctx->r12 = ADD32(0, 0XE);
    // 0x80212860: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x80212864: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80212868: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x8021286C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80212870: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80212874: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x80212878: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8021287C: jal         0x800106F0
    // 0x80212880: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    func_800106F0_112F0(rdram, ctx);
        goto after_6;
    // 0x80212880: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    after_6:
    // 0x80212884: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x80212888: lw          $t6, 0x7F44($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7F44);
    // 0x8021288C: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x80212890: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80212894: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80212898: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x8021289C: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x802128A0: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x802128A4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802128A8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802128AC: jal         0x800106F0
    // 0x802128B0: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    func_800106F0_112F0(rdram, ctx);
        goto after_7;
    // 0x802128B0: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    after_7:
    // 0x802128B4: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x802128B8: lw          $t8, 0x7F44($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7F44);
    // 0x802128BC: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x802128C0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x802128C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802128C8: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x802128CC: addiu       $a2, $s2, 0x5C
    ctx->r6 = ADD32(ctx->r18, 0X5C);
    // 0x802128D0: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x802128D4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802128D8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802128DC: jal         0x800106F0
    // 0x802128E0: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    func_800106F0_112F0(rdram, ctx);
        goto after_8;
    // 0x802128E0: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    after_8:
    // 0x802128E4: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x802128E8: lw          $t0, 0x7F40($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7F40);
    // 0x802128EC: addiu       $t9, $zero, 0x12
    ctx->r25 = ADD32(0, 0X12);
    // 0x802128F0: addiu       $t1, $zero, 0x20
    ctx->r9 = ADD32(0, 0X20);
    // 0x802128F4: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x802128F8: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x802128FC: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x80212900: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80212904: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80212908: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x8021290C: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x80212910: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x80212914: jal         0x800106F0
    // 0x80212918: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    func_800106F0_112F0(rdram, ctx);
        goto after_9;
    // 0x80212918: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_9:
    // 0x8021291C: lui         $t4, 0x8021
    ctx->r12 = S32(0X8021 << 16);
    // 0x80212920: lw          $t4, 0x7F44($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7F44);
    // 0x80212924: addiu       $t3, $zero, 0x12
    ctx->r11 = ADD32(0, 0X12);
    // 0x80212928: addiu       $t5, $zero, 0x20
    ctx->r13 = ADD32(0, 0X20);
    // 0x8021292C: addiu       $t6, $zero, 0xE
    ctx->r14 = ADD32(0, 0XE);
    // 0x80212930: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80212934: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x80212938: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8021293C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80212940: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x80212944: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x80212948: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x8021294C: jal         0x800106F0
    // 0x80212950: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    func_800106F0_112F0(rdram, ctx);
        goto after_10;
    // 0x80212950: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    after_10:
    // 0x80212954: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80212958: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8021295C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80212960: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80212964: jr          $ra
    // 0x80212968: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x80212968: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8020F5F0_66E5A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F5F0: slti        $at, $a0, 0xF
    ctx->r1 = SIGNED(ctx->r4) < 0XF ? 1 : 0;
    // 0x8020F5F4: bne         $at, $zero, L_8020F604
    if (ctx->r1 != 0) {
        // 0x8020F5F8: sll         $t6, $a0, 3
        ctx->r14 = S32(ctx->r4 << 3);
            goto L_8020F604;
    }
    // 0x8020F5F8: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x8020F5FC: jr          $ra
    // 0x8020F600: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x8020F600: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8020F604:
    // 0x8020F604: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x8020F608: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8020F60C: lw          $v0, 0x6E40($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6E40);
    // 0x8020F610: jr          $ra
    // 0x8020F614: nop

    TRACE_RETURN()
    return;
    // 0x8020F614: nop

;}
RECOMP_FUNC void func_80213550_672500(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80213550: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80213554: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80213558: lui         $a3, 0x8016
    ctx->r7 = S32(0X8016 << 16);
    // 0x8021355C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80213560: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80213564: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80213568: jal         0x802122F0
    // 0x8021356C: lw          $a3, -0x3A10($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X3A10);
    func_802122F0_6712A0(rdram, ctx);
        goto after_0;
    // 0x8021356C: lw          $a3, -0x3A10($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X3A10);
    after_0:
    // 0x80213570: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80213574: lui         $a3, 0x8016
    ctx->r7 = S32(0X8016 << 16);
    // 0x80213578: lw          $a3, -0x3A0C($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X3A0C);
    // 0x8021357C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80213580: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80213584: jal         0x80212370
    // 0x80213588: addiu       $a1, $a1, 0x1A
    ctx->r5 = ADD32(ctx->r5, 0X1A);
    func_80212370_671320(rdram, ctx);
        goto after_1;
    // 0x80213588: addiu       $a1, $a1, 0x1A
    ctx->r5 = ADD32(ctx->r5, 0X1A);
    after_1:
    // 0x8021358C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80213590: lui         $a3, 0x8016
    ctx->r7 = S32(0X8016 << 16);
    // 0x80213594: lw          $a3, -0x3A04($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X3A04);
    // 0x80213598: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8021359C: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x802135A0: jal         0x802123F0
    // 0x802135A4: addiu       $a1, $a1, 0x34
    ctx->r5 = ADD32(ctx->r5, 0X34);
    func_802123F0_6713A0(rdram, ctx);
        goto after_2;
    // 0x802135A4: addiu       $a1, $a1, 0x34
    ctx->r5 = ADD32(ctx->r5, 0X34);
    after_2:
    // 0x802135A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802135AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802135B0: jr          $ra
    // 0x802135B4: nop

    TRACE_RETURN()
    return;
    // 0x802135B4: nop

;}
RECOMP_FUNC void func_80214590_673540(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80214590: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80214594: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80214598: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8021459C: jal         0x800102E0
    // 0x802145A0: lw          $a0, -0x1B80($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1B80);
    func_800102E0_10EE0(rdram, ctx);
        goto after_0;
    // 0x802145A0: lw          $a0, -0x1B80($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1B80);
    after_0:
    // 0x802145A4: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x802145A8: jal         0x800102E0
    // 0x802145AC: lw          $a0, -0x1B7C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1B7C);
    func_800102E0_10EE0(rdram, ctx);
        goto after_1;
    // 0x802145AC: lw          $a0, -0x1B7C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1B7C);
    after_1:
    // 0x802145B0: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x802145B4: jal         0x800102E0
    // 0x802145B8: lw          $a0, -0x1B78($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1B78);
    func_800102E0_10EE0(rdram, ctx);
        goto after_2;
    // 0x802145B8: lw          $a0, -0x1B78($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1B78);
    after_2:
    // 0x802145BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802145C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802145C4: jr          $ra
    // 0x802145C8: nop

    TRACE_RETURN()
    return;
    // 0x802145C8: nop

;}
RECOMP_FUNC void func_802111C4_670174(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802111C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802111C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802111CC: beq         $a0, $zero, L_80211204
    if (ctx->r4 == 0) {
        // 0x802111D0: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_80211204;
    }
    // 0x802111D0: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802111D4: lw          $a1, 0x5C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X5C);
    // 0x802111D8: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x802111DC: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x802111E0: beq         $a1, $zero, L_802111FC
    if (ctx->r5 == 0) {
        // 0x802111E4: lui         $a0, 0x8016
        ctx->r4 = S32(0X8016 << 16);
            goto L_802111FC;
    }
    // 0x802111E4: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x802111E8: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x802111EC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x802111F0: jal         0x80014B74
    // 0x802111F4: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_80014B74_15774(rdram, ctx);
        goto after_0;
    // 0x802111F4: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_0:
    // 0x802111F8: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
L_802111FC:
    // 0x802111FC: jal         0x80034EF8
    // 0x80211200: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_1;
    // 0x80211200: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_1:
L_80211204:
    // 0x80211204: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80211208: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8021120C: jr          $ra
    // 0x80211210: nop

    TRACE_RETURN()
    return;
    // 0x80211210: nop

;}
RECOMP_FUNC void func_8020DDDC_66CD8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020DDDC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8020DDE0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x8020DDE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020DDE8: addiu       $t9, $t9, 0x4E08
    ctx->r25 = ADD32(ctx->r25, 0X4E08);
    // 0x8020DDEC: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x8020DDF0: addiu       $a1, $a1, -0x23D0
    ctx->r5 = ADD32(ctx->r5, -0X23D0);
    // 0x8020DDF4: jalr        $t9
    // 0x8020DDF8: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x8020DDF8: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    after_0:
    // 0x8020DDFC: bne         $v0, $zero, L_8020DE0C
    if (ctx->r2 != 0) {
        // 0x8020DE00: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8020DE0C;
    }
    // 0x8020DE00: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020DE04: b           L_8020DE40
    // 0x8020DE08: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8020DE40;
    // 0x8020DE08: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8020DE0C:
    // 0x8020DE0C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x8020DE10: addiu       $t9, $t9, 0x19D4
    ctx->r25 = ADD32(ctx->r25, 0X19D4);
    // 0x8020DE14: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x8020DE18: jalr        $t9
    // 0x8020DE1C: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x8020DE1C: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_1:
    // 0x8020DE20: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x8020DE24: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8020DE28: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020DE2C: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x8020DE30: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8020DE34: addiu       $v1, $v0, 0x5C
    ctx->r3 = ADD32(ctx->r2, 0X5C);
    // 0x8020DE38: swc1        $f4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f4.u32l;
    // 0x8020DE3C: swc1        $f6, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f6.u32l;
L_8020DE40:
    // 0x8020DE40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020DE44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8020DE48: jr          $ra
    // 0x8020DE4C: nop

    TRACE_RETURN()
    return;
    // 0x8020DE4C: nop

;}
RECOMP_FUNC void func_8020E930_66D8E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E930: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x8020E934: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x8020E938: sw          $a1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r5;
    // 0x8020E93C: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x8020E940: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x8020E944: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x8020E948: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x8020E94C: or          $s4, $a3, $zero
    ctx->r20 = ctx->r7 | 0;
    // 0x8020E950: sw          $fp, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r30;
    // 0x8020E954: sw          $s7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r23;
    // 0x8020E958: sw          $s6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r22;
    // 0x8020E95C: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x8020E960: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x8020E964: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x8020E968: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x8020E96C: sdc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X48, ctx->r29);
    // 0x8020E970: sdc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X40, ctx->r29);
    // 0x8020E974: addiu       $a1, $a1, -0x19D0
    ctx->r5 = ADD32(ctx->r5, -0X19D0);
    // 0x8020E978: jal         0x80034E08
    // 0x8020E97C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x8020E97C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8020E980: bne         $v0, $zero, L_8020E990
    if (ctx->r2 != 0) {
        // 0x8020E984: or          $fp, $v0, $zero
        ctx->r30 = ctx->r2 | 0;
            goto L_8020E990;
    }
    // 0x8020E984: or          $fp, $v0, $zero
    ctx->r30 = ctx->r2 | 0;
    // 0x8020E988: b           L_8020EDAC
    // 0x8020E98C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8020EDAC;
    // 0x8020E98C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8020E990:
    // 0x8020E990: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8020E994: lwc1        $f20, 0x73C0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X73C0);
    // 0x8020E998: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x8020E99C: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x8020E9A0: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x8020E9A4: lui         $s3, 0x2000
    ctx->r19 = S32(0X2000 << 16);
    // 0x8020E9A8: addiu       $t6, $t6, 0x6A50
    ctx->r14 = ADD32(ctx->r14, 0X6A50);
    // 0x8020E9AC: addiu       $a1, $a1, 0xF0
    ctx->r5 = ADD32(ctx->r5, 0XF0);
    // 0x8020E9B0: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x8020E9B4: addiu       $t7, $zero, 0x4D0
    ctx->r15 = ADD32(0, 0X4D0);
    // 0x8020E9B8: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x8020E9BC: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x8020E9C0: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x8020E9C4: or          $a2, $t6, $s3
    ctx->r6 = ctx->r14 | ctx->r19;
    // 0x8020E9C8: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x8020E9CC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8020E9D0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8020E9D4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8020E9D8: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x8020E9DC: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x8020E9E0: swc1        $f20, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f20.u32l;
    // 0x8020E9E4: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    // 0x8020E9E8: swc1        $f22, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f22.u32l;
    // 0x8020E9EC: jal         0x8000DBF0
    // 0x8020E9F0: swc1        $f22, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f22.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x8020E9F0: swc1        $f22, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f22.u32l;
    after_1:
    // 0x8020E9F4: addiu       $s2, $zero, 0x8
    ctx->r18 = ADD32(0, 0X8);
    // 0x8020E9F8: sb          $s2, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r18;
    // 0x8020E9FC: jal         0x8020D5D0
    // 0x8020EA00: addiu       $a0, $zero, 0x3CA
    ctx->r4 = ADD32(0, 0X3CA);
    func_8020D5D0_66C580(rdram, ctx);
        goto after_2;
    // 0x8020EA00: addiu       $a0, $zero, 0x3CA
    ctx->r4 = ADD32(0, 0X3CA);
    after_2:
    // 0x8020EA04: lui         $a1, 0x801
    ctx->r5 = S32(0X801 << 16);
    // 0x8020EA08: addiu       $a1, $a1, -0x5F88
    ctx->r5 = ADD32(ctx->r5, -0X5F88);
    // 0x8020EA0C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8020EA10: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x8020EA14: addiu       $t8, $zero, 0x4D0
    ctx->r24 = ADD32(0, 0X4D0);
    // 0x8020EA18: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x8020EA1C: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x8020EA20: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x8020EA24: or          $a2, $v0, $s3
    ctx->r6 = ctx->r2 | ctx->r19;
    // 0x8020EA28: swc1        $f22, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f22.u32l;
    // 0x8020EA2C: swc1        $f22, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f22.u32l;
    // 0x8020EA30: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8020EA34: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8020EA38: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8020EA3C: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x8020EA40: swc1        $f20, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f20.u32l;
    // 0x8020EA44: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    // 0x8020EA48: jal         0x8000DBF0
    // 0x8020EA4C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_3;
    // 0x8020EA4C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_3:
    // 0x8020EA50: sb          $s2, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r18;
    // 0x8020EA54: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x8020EA58: lw          $t9, -0x37D8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X37D8);
    // 0x8020EA5C: bne         $t9, $zero, L_8020EABC
    if (ctx->r25 != 0) {
        // 0x8020EA60: nop
    
            goto L_8020EABC;
    }
    // 0x8020EA60: nop

    // 0x8020EA64: jal         0x8020D5D0
    // 0x8020EA68: addiu       $a0, $zero, 0x3CA
    ctx->r4 = ADD32(0, 0X3CA);
    func_8020D5D0_66C580(rdram, ctx);
        goto after_4;
    // 0x8020EA68: addiu       $a0, $zero, 0x3CA
    ctx->r4 = ADD32(0, 0X3CA);
    after_4:
    // 0x8020EA6C: lui         $a1, 0x801
    ctx->r5 = S32(0X801 << 16);
    // 0x8020EA70: addiu       $a1, $a1, -0x2E20
    ctx->r5 = ADD32(ctx->r5, -0X2E20);
    // 0x8020EA74: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8020EA78: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x8020EA7C: addiu       $t0, $zero, 0x4D0
    ctx->r8 = ADD32(0, 0X4D0);
    // 0x8020EA80: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x8020EA84: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x8020EA88: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x8020EA8C: or          $a2, $v0, $s3
    ctx->r6 = ctx->r2 | ctx->r19;
    // 0x8020EA90: swc1        $f22, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f22.u32l;
    // 0x8020EA94: swc1        $f22, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f22.u32l;
    // 0x8020EA98: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8020EA9C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8020EAA0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8020EAA4: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x8020EAA8: swc1        $f20, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f20.u32l;
    // 0x8020EAAC: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    // 0x8020EAB0: jal         0x8000DBF0
    // 0x8020EAB4: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_5;
    // 0x8020EAB4: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_5:
    // 0x8020EAB8: sb          $s2, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r18;
L_8020EABC:
    // 0x8020EABC: jal         0x8020D5D0
    // 0x8020EAC0: addiu       $a0, $zero, 0x3CA
    ctx->r4 = ADD32(0, 0X3CA);
    func_8020D5D0_66C580(rdram, ctx);
        goto after_6;
    // 0x8020EAC0: addiu       $a0, $zero, 0x3CA
    ctx->r4 = ADD32(0, 0X3CA);
    after_6:
    // 0x8020EAC4: lui         $a1, 0x801
    ctx->r5 = S32(0X801 << 16);
    // 0x8020EAC8: addiu       $a1, $a1, -0x36C8
    ctx->r5 = ADD32(ctx->r5, -0X36C8);
    // 0x8020EACC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8020EAD0: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x8020EAD4: addiu       $t1, $zero, 0x4D0
    ctx->r9 = ADD32(0, 0X4D0);
    // 0x8020EAD8: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x8020EADC: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x8020EAE0: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x8020EAE4: or          $a2, $v0, $s3
    ctx->r6 = ctx->r2 | ctx->r19;
    // 0x8020EAE8: swc1        $f22, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f22.u32l;
    // 0x8020EAEC: swc1        $f22, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f22.u32l;
    // 0x8020EAF0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8020EAF4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8020EAF8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8020EAFC: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x8020EB00: swc1        $f20, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f20.u32l;
    // 0x8020EB04: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    // 0x8020EB08: jal         0x8000DBF0
    // 0x8020EB0C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_7;
    // 0x8020EB0C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_7:
    // 0x8020EB10: addiu       $s7, $fp, 0x5C
    ctx->r23 = ADD32(ctx->r30, 0X5C);
    // 0x8020EB14: sw          $v0, 0x50($s7)
    MEM_W(0X50, ctx->r23) = ctx->r2;
    // 0x8020EB18: sb          $s2, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r18;
    // 0x8020EB1C: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x8020EB20: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x8020EB24: jal         0x80035EEC
    // 0x8020EB28: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80035EEC_36AEC(rdram, ctx);
        goto after_8;
    // 0x8020EB28: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_8:
    // 0x8020EB2C: bne         $v0, $zero, L_8020EB3C
    if (ctx->r2 != 0) {
        // 0x8020EB30: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_8020EB3C;
    }
    // 0x8020EB30: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8020EB34: b           L_8020EDAC
    // 0x8020EB38: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8020EDAC;
    // 0x8020EB38: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8020EB3C:
    // 0x8020EB3C: lui         $a0, 0x801
    ctx->r4 = S32(0X801 << 16);
    // 0x8020EB40: addiu       $a0, $a0, 0x580
    ctx->r4 = ADD32(ctx->r4, 0X580);
    // 0x8020EB44: jal         0x80014840
    // 0x8020EB48: addiu       $a1, $zero, 0x4D0
    ctx->r5 = ADD32(0, 0X4D0);
    func_80014840_15440(rdram, ctx);
        goto after_9;
    // 0x8020EB48: addiu       $a1, $zero, 0x4D0
    ctx->r5 = ADD32(0, 0X4D0);
    after_9:
    // 0x8020EB4C: lui         $a0, 0x803
    ctx->r4 = S32(0X803 << 16);
    // 0x8020EB50: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
    // 0x8020EB54: addiu       $a0, $a0, 0x5D80
    ctx->r4 = ADD32(ctx->r4, 0X5D80);
    // 0x8020EB58: jal         0x80014840
    // 0x8020EB5C: addiu       $a1, $zero, 0x4D0
    ctx->r5 = ADD32(0, 0X4D0);
    func_80014840_15440(rdram, ctx);
        goto after_10;
    // 0x8020EB5C: addiu       $a1, $zero, 0x4D0
    ctx->r5 = ADD32(0, 0X4D0);
    after_10:
    // 0x8020EB60: lui         $at, 0x438C
    ctx->r1 = S32(0X438C << 16);
    // 0x8020EB64: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020EB68: ori         $t2, $zero, 0xA009
    ctx->r10 = 0 | 0XA009;
    // 0x8020EB6C: sw          $v0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r2;
    // 0x8020EB70: swc1        $f22, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f22.u32l;
    // 0x8020EB74: sh          $t2, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r10;
    // 0x8020EB78: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x8020EB7C: beq         $s1, $zero, L_8020EBA8
    if (ctx->r17 == 0) {
        // 0x8020EB80: swc1        $f4, 0x18($s0)
        MEM_W(0X18, ctx->r16) = ctx->f4.u32l;
            goto L_8020EBA8;
    }
    // 0x8020EB80: swc1        $f4, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f4.u32l;
    // 0x8020EB84: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8020EB88: beq         $s1, $at, L_8020EBBC
    if (ctx->r17 == ctx->r1) {
        // 0x8020EB8C: lui         $s0, 0x800
        ctx->r16 = S32(0X800 << 16);
            goto L_8020EBBC;
    }
    // 0x8020EB8C: lui         $s0, 0x800
    ctx->r16 = S32(0X800 << 16);
    // 0x8020EB90: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8020EB94: beq         $s1, $at, L_8020EBCC
    if (ctx->r17 == ctx->r1) {
        // 0x8020EB98: lui         $s0, 0x800
        ctx->r16 = S32(0X800 << 16);
            goto L_8020EBCC;
    }
    // 0x8020EB98: lui         $s0, 0x800
    ctx->r16 = S32(0X800 << 16);
    // 0x8020EB9C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8020EBA0: beq         $s1, $at, L_8020EBDC
    if (ctx->r17 == ctx->r1) {
        // 0x8020EBA4: lui         $s0, 0x800
        ctx->r16 = S32(0X800 << 16);
            goto L_8020EBDC;
    }
    // 0x8020EBA4: lui         $s0, 0x800
    ctx->r16 = S32(0X800 << 16);
L_8020EBA8:
    // 0x8020EBA8: lui         $s0, 0x800
    ctx->r16 = S32(0X800 << 16);
    // 0x8020EBAC: addiu       $s0, $s0, 0x40
    ctx->r16 = ADD32(ctx->r16, 0X40);
    // 0x8020EBB0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8020EBB4: b           L_8020EBE8
    // 0x8020EBB8: addu        $s0, $s0, $at
    ctx->r16 = ADD32(ctx->r16, ctx->r1);
        goto L_8020EBE8;
    // 0x8020EBB8: addu        $s0, $s0, $at
    ctx->r16 = ADD32(ctx->r16, ctx->r1);
L_8020EBBC:
    // 0x8020EBBC: addiu       $s0, $s0, 0x120
    ctx->r16 = ADD32(ctx->r16, 0X120);
    // 0x8020EBC0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8020EBC4: b           L_8020EBE8
    // 0x8020EBC8: addu        $s0, $s0, $at
    ctx->r16 = ADD32(ctx->r16, ctx->r1);
        goto L_8020EBE8;
    // 0x8020EBC8: addu        $s0, $s0, $at
    ctx->r16 = ADD32(ctx->r16, ctx->r1);
L_8020EBCC:
    // 0x8020EBCC: addiu       $s0, $s0, 0x200
    ctx->r16 = ADD32(ctx->r16, 0X200);
    // 0x8020EBD0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8020EBD4: b           L_8020EBE8
    // 0x8020EBD8: addu        $s0, $s0, $at
    ctx->r16 = ADD32(ctx->r16, ctx->r1);
        goto L_8020EBE8;
    // 0x8020EBD8: addu        $s0, $s0, $at
    ctx->r16 = ADD32(ctx->r16, ctx->r1);
L_8020EBDC:
    // 0x8020EBDC: addiu       $s0, $s0, 0x2E0
    ctx->r16 = ADD32(ctx->r16, 0X2E0);
    // 0x8020EBE0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8020EBE4: addu        $s0, $s0, $at
    ctx->r16 = ADD32(ctx->r16, ctx->r1);
L_8020EBE8:
    // 0x8020EBE8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8020EBEC: lwc1        $f0, 0x73C4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X73C4);
    // 0x8020EBF0: lui         $a1, 0x801
    ctx->r5 = S32(0X801 << 16);
    // 0x8020EBF4: addiu       $a1, $a1, -0x2980
    ctx->r5 = ADD32(ctx->r5, -0X2980);
    // 0x8020EBF8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8020EBFC: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x8020EC00: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x8020EC04: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8020EC08: lui         $a2, 0x8007
    ctx->r6 = S32(0X8007 << 16);
    // 0x8020EC0C: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x8020EC10: addiu       $t3, $zero, 0x4D0
    ctx->r11 = ADD32(0, 0X4D0);
    // 0x8020EC14: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x8020EC18: addiu       $a2, $a2, -0x2768
    ctx->r6 = ADD32(ctx->r6, -0X2768);
    // 0x8020EC1C: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x8020EC20: swc1        $f22, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f22.u32l;
    // 0x8020EC24: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8020EC28: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8020EC2C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8020EC30: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x8020EC34: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x8020EC38: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x8020EC3C: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x8020EC40: jal         0x8000DBF0
    // 0x8020EC44: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_11;
    // 0x8020EC44: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_11:
    // 0x8020EC48: sw          $v0, 0x40($s7)
    MEM_W(0X40, ctx->r23) = ctx->r2;
    // 0x8020EC4C: sb          $s2, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r18;
    // 0x8020EC50: lw          $t5, 0x40($s7)
    ctx->r13 = MEM_W(ctx->r23, 0X40);
    // 0x8020EC54: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8020EC58: addiu       $s5, $sp, 0xA0
    ctx->r21 = ADD32(ctx->r29, 0XA0);
    // 0x8020EC5C: sb          $t4, 0x64($t5)
    MEM_B(0X64, ctx->r13) = ctx->r12;
    // 0x8020EC60: addiu       $t6, $sp, 0xA4
    ctx->r14 = ADD32(ctx->r29, 0XA4);
    // 0x8020EC64: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8020EC68: sw          $s5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r21;
    // 0x8020EC6C: lw          $a2, 0xC4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XC4);
    // 0x8020EC70: lw          $a1, 0xC0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XC0);
    // 0x8020EC74: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8020EC78: jal         0x8020F734
    // 0x8020EC7C: addiu       $a3, $sp, 0xA8
    ctx->r7 = ADD32(ctx->r29, 0XA8);
    func_8020F734_66E6E4(rdram, ctx);
        goto after_12;
    // 0x8020EC7C: addiu       $a3, $sp, 0xA8
    ctx->r7 = ADD32(ctx->r29, 0XA8);
    after_12:
    // 0x8020EC80: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8020EC84: lwc1        $f20, 0x73C8($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X73C8);
    // 0x8020EC88: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x8020EC8C: lwc1        $f8, 0xA4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x8020EC90: lwc1        $f10, 0xA0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x8020EC94: addiu       $t7, $t7, 0x6AE0
    ctx->r15 = ADD32(ctx->r15, 0X6AE0);
    // 0x8020EC98: or          $s4, $t7, $s3
    ctx->r20 = ctx->r15 | ctx->r19;
    // 0x8020EC9C: ori         $t8, $zero, 0x8000
    ctx->r24 = 0 | 0X8000;
    // 0x8020ECA0: ori         $t9, $zero, 0x8000
    ctx->r25 = 0 | 0X8000;
    // 0x8020ECA4: ori         $t0, $zero, 0x8000
    ctx->r8 = 0 | 0X8000;
    // 0x8020ECA8: addiu       $t1, $zero, 0x4D1
    ctx->r9 = ADD32(0, 0X4D1);
    // 0x8020ECAC: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x8020ECB0: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x8020ECB4: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8020ECB8: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8020ECBC: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x8020ECC0: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x8020ECC4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8020ECC8: lw          $a3, 0xA8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA8);
    // 0x8020ECCC: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x8020ECD0: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x8020ECD4: swc1        $f20, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f20.u32l;
    // 0x8020ECD8: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    // 0x8020ECDC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x8020ECE0: jal         0x8000DBF0
    // 0x8020ECE4: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_13;
    // 0x8020ECE4: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_13:
    // 0x8020ECE8: addiu       $s6, $zero, 0x9
    ctx->r22 = ADD32(0, 0X9);
    // 0x8020ECEC: sw          $v0, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->r2;
    // 0x8020ECF0: lui         $s2, 0x800
    ctx->r18 = S32(0X800 << 16);
    // 0x8020ECF4: sb          $s6, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r22;
    // 0x8020ECF8: addiu       $s2, $s2, 0x3C0
    ctx->r18 = ADD32(ctx->r18, 0X3C0);
    // 0x8020ECFC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8020ED00: addiu       $s3, $zero, 0xF
    ctx->r19 = ADD32(0, 0XF);
    // 0x8020ED04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8020ED08:
    // 0x8020ED08: lw          $a1, 0xB4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XB4);
    // 0x8020ED0C: addiu       $a2, $sp, 0xA8
    ctx->r6 = ADD32(ctx->r29, 0XA8);
    // 0x8020ED10: addiu       $a3, $sp, 0xA4
    ctx->r7 = ADD32(ctx->r29, 0XA4);
    // 0x8020ED14: jal         0x8020F640
    // 0x8020ED18: sw          $s5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r21;
    func_8020F640_66E5F0(rdram, ctx);
        goto after_14;
    // 0x8020ED18: sw          $s5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r21;
    after_14:
    // 0x8020ED1C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8020ED20: bne         $v0, $at, L_8020ED9C
    if (ctx->r2 != ctx->r1) {
        // 0x8020ED24: or          $a0, $fp, $zero
        ctx->r4 = ctx->r30 | 0;
            goto L_8020ED9C;
    }
    // 0x8020ED24: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x8020ED28: lwc1        $f16, 0xA4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x8020ED2C: lwc1        $f18, 0xA0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x8020ED30: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8020ED34: ori         $t2, $zero, 0x8000
    ctx->r10 = 0 | 0X8000;
    // 0x8020ED38: ori         $t3, $zero, 0x8000
    ctx->r11 = 0 | 0X8000;
    // 0x8020ED3C: ori         $t4, $zero, 0x8000
    ctx->r12 = 0 | 0X8000;
    // 0x8020ED40: addiu       $t5, $zero, 0x4D1
    ctx->r13 = ADD32(0, 0X4D1);
    // 0x8020ED44: sll         $t6, $s0, 2
    ctx->r14 = S32(ctx->r16 << 2);
    // 0x8020ED48: addu        $s1, $s7, $t6
    ctx->r17 = ADD32(ctx->r23, ctx->r14);
    // 0x8020ED4C: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
    // 0x8020ED50: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x8020ED54: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x8020ED58: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x8020ED5C: addu        $a1, $s2, $at
    ctx->r5 = ADD32(ctx->r18, ctx->r1);
    // 0x8020ED60: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x8020ED64: lw          $a3, 0xA8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA8);
    // 0x8020ED68: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x8020ED6C: swc1        $f20, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f20.u32l;
    // 0x8020ED70: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    // 0x8020ED74: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x8020ED78: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x8020ED7C: jal         0x8000DBF0
    // 0x8020ED80: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_15;
    // 0x8020ED80: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_15:
    // 0x8020ED84: sw          $v0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r2;
    // 0x8020ED88: lbu         $t7, 0x64($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X64);
    // 0x8020ED8C: xori        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 ^ 0X1;
    // 0x8020ED90: sb          $t8, 0x64($v0)
    MEM_B(0X64, ctx->r2) = ctx->r24;
    // 0x8020ED94: lw          $t9, 0x4($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X4);
    // 0x8020ED98: sb          $s6, 0x5($t9)
    MEM_B(0X5, ctx->r25) = ctx->r22;
L_8020ED9C:
    // 0x8020ED9C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8020EDA0: bnel        $s0, $s3, L_8020ED08
    if (ctx->r16 != ctx->r19) {
        // 0x8020EDA4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8020ED08;
    }
    goto skip_0;
    // 0x8020EDA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x8020EDA8: or          $v0, $fp, $zero
    ctx->r2 = ctx->r30 | 0;
L_8020EDAC:
    // 0x8020EDAC: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    // 0x8020EDB0: ldc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X40);
    // 0x8020EDB4: ldc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X48);
    // 0x8020EDB8: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x8020EDBC: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x8020EDC0: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x8020EDC4: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x8020EDC8: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x8020EDCC: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x8020EDD0: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x8020EDD4: lw          $s7, 0x6C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X6C);
    // 0x8020EDD8: lw          $fp, 0x70($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X70);
    // 0x8020EDDC: jr          $ra
    // 0x8020EDE0: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    TRACE_RETURN()
    return;
    // 0x8020EDE0: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_8020F13C_66E0EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F13C: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x8020F140: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x8020F144: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F148: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8020F14C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F150: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8020F154: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8020F158: jal         0x80034EF8
    // 0x8020F15C: sb          $t6, -0x5236($at)
    MEM_B(-0X5236, ctx->r1) = ctx->r14;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_0;
    // 0x8020F15C: sb          $t6, -0x5236($at)
    MEM_B(-0X5236, ctx->r1) = ctx->r14;
    after_0:
    // 0x8020F160: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F164: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F168: jr          $ra
    // 0x8020F16C: nop

    TRACE_RETURN()
    return;
    // 0x8020F16C: nop

;}
RECOMP_FUNC void func_8020FE40_66EDF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020FE40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020FE44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020FE48: jal         0x80011760
    // 0x8020FE4C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80011760_12360(rdram, ctx);
        goto after_0;
    // 0x8020FE4C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8020FE50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020FE54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020FE58: jr          $ra
    // 0x8020FE5C: nop

    TRACE_RETURN()
    return;
    // 0x8020FE5C: nop

;}
RECOMP_FUNC void func_80216794_675744(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80216794: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80216798: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8021679C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x802167A0: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x802167A4: subu        $t7, $t7, $a1
    ctx->r15 = SUB32(ctx->r15, ctx->r5);
    // 0x802167A8: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x802167AC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802167B0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x802167B4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802167B8: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x802167BC: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802167C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802167C4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x802167C8: addu        $a0, $a0, $t8
    ctx->r4 = ADD32(ctx->r4, ctx->r24);
    // 0x802167CC: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x802167D0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x802167D4: lw          $a0, 0x7030($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7030);
    // 0x802167D8: jal         0x80014840
    // 0x802167DC: addiu       $a1, $zero, 0x4D2
    ctx->r5 = ADD32(0, 0X4D2);
    func_80014840_15440(rdram, ctx);
        goto after_0;
    // 0x802167DC: addiu       $a1, $zero, 0x4D2
    ctx->r5 = ADD32(0, 0X4D2);
    after_0:
    // 0x802167E0: sll         $t9, $s1, 2
    ctx->r25 = S32(ctx->r17 << 2);
    // 0x802167E4: addu        $t0, $v0, $t9
    ctx->r8 = ADD32(ctx->r2, ctx->r25);
    // 0x802167E8: lw          $a0, 0x8($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X8);
    // 0x802167EC: jal         0x80014840
    // 0x802167F0: addiu       $a1, $zero, 0x4D2
    ctx->r5 = ADD32(0, 0X4D2);
    func_80014840_15440(rdram, ctx);
        goto after_1;
    // 0x802167F0: addiu       $a1, $zero, 0x4D2
    ctx->r5 = ADD32(0, 0X4D2);
    after_1:
    // 0x802167F4: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x802167F8: jal         0x80014840
    // 0x802167FC: addiu       $a1, $zero, 0x4D2
    ctx->r5 = ADD32(0, 0X4D2);
    func_80014840_15440(rdram, ctx);
        goto after_2;
    // 0x802167FC: addiu       $a1, $zero, 0x4D2
    ctx->r5 = ADD32(0, 0X4D2);
    after_2:
    // 0x80216800: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80216804: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80216808: jal         0x80216750
    // 0x8021680C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80216750_675700(rdram, ctx);
        goto after_3;
    // 0x8021680C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_3:
    // 0x80216810: bnel        $v0, $zero, L_80216834
    if (ctx->r2 != 0) {
        // 0x80216814: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80216834;
    }
    goto skip_0;
    // 0x80216814: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80216818: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8021681C:
    // 0x8021681C: sll         $t1, $s0, 3
    ctx->r9 = S32(ctx->r16 << 3);
    // 0x80216820: jal         0x80216750
    // 0x80216824: addu        $a0, $t1, $s1
    ctx->r4 = ADD32(ctx->r9, ctx->r17);
    func_80216750_675700(rdram, ctx);
        goto after_4;
    // 0x80216824: addu        $a0, $t1, $s1
    ctx->r4 = ADD32(ctx->r9, ctx->r17);
    after_4:
    // 0x80216828: beql        $v0, $zero, L_8021681C
    if (ctx->r2 == 0) {
        // 0x8021682C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8021681C;
    }
    goto skip_1;
    // 0x8021682C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_1:
    // 0x80216830: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80216834:
    // 0x80216834: sll         $t2, $s0, 3
    ctx->r10 = S32(ctx->r16 << 3);
    // 0x80216838: addu        $v0, $t2, $s1
    ctx->r2 = ADD32(ctx->r10, ctx->r17);
    // 0x8021683C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80216840: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80216844: jr          $ra
    // 0x80216848: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80216848: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8021498C_67393C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021498C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80214990: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80214994: jal         0x80011760
    // 0x80214998: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80011760_12360(rdram, ctx);
        goto after_0;
    // 0x80214998: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8021499C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802149A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802149A4: jr          $ra
    // 0x802149A8: nop

    TRACE_RETURN()
    return;
    // 0x802149A8: nop

;}
RECOMP_FUNC void func_8021480C_6737BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021480C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80214810: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80214814: beq         $a1, $zero, L_80214834
    if (ctx->r5 == 0) {
        // 0x80214818: sw          $a2, 0x48($sp)
        MEM_W(0X48, ctx->r29) = ctx->r6;
            goto L_80214834;
    }
    // 0x80214818: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x8021481C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80214820: beq         $a1, $at, L_80214848
    if (ctx->r5 == ctx->r1) {
        // 0x80214824: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80214848;
    }
    // 0x80214824: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80214828: beq         $a1, $at, L_8021485C
    if (ctx->r5 == ctx->r1) {
        // 0x8021482C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8021485C;
    }
    // 0x8021482C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80214830: beq         $a1, $at, L_80214870
    if (ctx->r5 == ctx->r1) {
        // 0x80214834: lui         $a1, 0x800
        ctx->r5 = S32(0X800 << 16);
            goto L_80214870;
    }
L_80214834:
    // 0x80214834: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x80214838: addiu       $a1, $a1, 0x40
    ctx->r5 = ADD32(ctx->r5, 0X40);
    // 0x8021483C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80214840: b           L_80214880
    // 0x80214844: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
        goto L_80214880;
    // 0x80214844: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
L_80214848:
    // 0x80214848: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x8021484C: addiu       $a1, $a1, 0x120
    ctx->r5 = ADD32(ctx->r5, 0X120);
    // 0x80214850: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80214854: b           L_80214880
    // 0x80214858: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
        goto L_80214880;
    // 0x80214858: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
L_8021485C:
    // 0x8021485C: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x80214860: addiu       $a1, $a1, 0x200
    ctx->r5 = ADD32(ctx->r5, 0X200);
    // 0x80214864: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80214868: b           L_80214880
    // 0x8021486C: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
        goto L_80214880;
    // 0x8021486C: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
L_80214870:
    // 0x80214870: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x80214874: addiu       $a1, $a1, 0x2E0
    ctx->r5 = ADD32(ctx->r5, 0X2E0);
    // 0x80214878: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8021487C: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
L_80214880:
    // 0x80214880: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80214884: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80214888: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8021488C: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x80214890: addiu       $a2, $a2, 0x6AE0
    ctx->r6 = ADD32(ctx->r6, 0X6AE0);
    // 0x80214894: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x80214898: or          $t6, $a2, $at
    ctx->r14 = ctx->r6 | ctx->r1;
    // 0x8021489C: ori         $t7, $zero, 0x8000
    ctx->r15 = 0 | 0X8000;
    // 0x802148A0: ori         $t8, $zero, 0x8000
    ctx->r24 = 0 | 0X8000;
    // 0x802148A4: ori         $t9, $zero, 0x8000
    ctx->r25 = 0 | 0X8000;
    // 0x802148A8: addiu       $t0, $zero, 0x4D1
    ctx->r8 = ADD32(0, 0X4D1);
    // 0x802148AC: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802148B0: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x802148B4: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x802148B8: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x802148BC: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x802148C0: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x802148C4: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x802148C8: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    // 0x802148CC: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x802148D0: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x802148D4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x802148D8: jal         0x8000DBF0
    // 0x802148DC: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_0;
    // 0x802148DC: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x802148E0: lw          $t1, 0x48($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X48);
    // 0x802148E4: sb          $t1, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r9;
    // 0x802148E8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x802148EC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x802148F0: jr          $ra
    // 0x802148F4: nop

    TRACE_RETURN()
    return;
    // 0x802148F4: nop

;}
RECOMP_FUNC void func_80211424_6703D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80211424: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80211428: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8021142C: lw          $v0, -0x3A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A38);
    // 0x80211430: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80211434: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x80211438: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8021143C: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x80211440: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x80211444: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x80211448: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x8021144C: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x80211450: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x80211454: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x80211458: lh          $v1, 0x307E($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X307E);
    // 0x8021145C: lhu         $a2, 0x307A($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0X307A);
    // 0x80211460: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x80211464: slti        $at, $v1, -0x28
    ctx->r1 = SIGNED(ctx->r3) < -0X28 ? 1 : 0;
    // 0x80211468: beq         $at, $zero, L_80211478
    if (ctx->r1 == 0) {
        // 0x8021146C: ori         $t6, $a2, 0x200
        ctx->r14 = ctx->r6 | 0X200;
            goto L_80211478;
    }
    // 0x8021146C: ori         $t6, $a2, 0x200
    ctx->r14 = ctx->r6 | 0X200;
    // 0x80211470: b           L_80211488
    // 0x80211474: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
        goto L_80211488;
    // 0x80211474: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
L_80211478:
    // 0x80211478: slti        $at, $v1, 0x29
    ctx->r1 = SIGNED(ctx->r3) < 0X29 ? 1 : 0;
    // 0x8021147C: bne         $at, $zero, L_80211488
    if (ctx->r1 != 0) {
        // 0x80211480: ori         $t7, $a2, 0x100
        ctx->r15 = ctx->r6 | 0X100;
            goto L_80211488;
    }
    // 0x80211480: ori         $t7, $a2, 0x100
    ctx->r15 = ctx->r6 | 0X100;
    // 0x80211484: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
L_80211488:
    // 0x80211488: lw          $t8, 0x80($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X80);
    // 0x8021148C: addiu       $s0, $s0, 0x5C
    ctx->r16 = ADD32(ctx->r16, 0X5C);
    // 0x80211490: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x80211494: bne         $a2, $t8, L_802114B0
    if (ctx->r6 != ctx->r24) {
        // 0x80211498: andi        $t1, $a2, 0x8000
        ctx->r9 = ctx->r6 & 0X8000;
            goto L_802114B0;
    }
    // 0x80211498: andi        $t1, $a2, 0x8000
    ctx->r9 = ctx->r6 & 0X8000;
    // 0x8021149C: lw          $t9, 0x28($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X28);
    // 0x802114A0: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x802114A4: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x802114A8: b           L_802114B4
    // 0x802114AC: sw          $t0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r8;
        goto L_802114B4;
    // 0x802114AC: sw          $t0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r8;
L_802114B0:
    // 0x802114B0: sw          $s1, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r17;
L_802114B4:
    // 0x802114B4: beq         $t1, $zero, L_80211568
    if (ctx->r9 == 0) {
        // 0x802114B8: andi        $t6, $a2, 0x8
        ctx->r14 = ctx->r6 & 0X8;
            goto L_80211568;
    }
    // 0x802114B8: andi        $t6, $a2, 0x8
    ctx->r14 = ctx->r6 & 0X8;
    // 0x802114BC: lw          $t2, 0x28($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X28);
    // 0x802114C0: bne         $s1, $t2, L_80211568
    if (ctx->r17 != ctx->r10) {
        // 0x802114C4: nop
    
            goto L_80211568;
    }
    // 0x802114C4: nop

    // 0x802114C8: lw          $t3, 0xC($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC);
    // 0x802114CC: addiu       $a3, $sp, 0x58
    ctx->r7 = ADD32(ctx->r29, 0X58);
    // 0x802114D0: addiu       $s3, $sp, 0x54
    ctx->r19 = ADD32(ctx->r29, 0X54);
    // 0x802114D4: bne         $t3, $zero, L_80211568
    if (ctx->r11 != 0) {
        // 0x802114D8: nop
    
            goto L_80211568;
    }
    // 0x802114D8: nop

    // 0x802114DC: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    // 0x802114E0: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    // 0x802114E4: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
    // 0x802114E8: jal         0x8020F640
    // 0x802114EC: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    func_8020F640_66E5F0(rdram, ctx);
        goto after_0;
    // 0x802114EC: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    after_0:
    // 0x802114F0: lw          $a0, 0x34($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X34);
    // 0x802114F4: lw          $a1, 0x38($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X38);
    // 0x802114F8: lw          $a2, 0x3C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X3C);
    // 0x802114FC: addiu       $t4, $sp, 0x44
    ctx->r12 = ADD32(ctx->r29, 0X44);
    // 0x80211500: addiu       $t5, $sp, 0x40
    ctx->r13 = ADD32(ctx->r29, 0X40);
    // 0x80211504: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x80211508: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x8021150C: jal         0x8020F734
    // 0x80211510: addiu       $a3, $sp, 0x48
    ctx->r7 = ADD32(ctx->r29, 0X48);
    func_8020F734_66E6E4(rdram, ctx);
        goto after_1;
    // 0x80211510: addiu       $a3, $sp, 0x48
    ctx->r7 = ADD32(ctx->r29, 0X48);
    after_1:
    // 0x80211514: jal         0x80034EF8
    // 0x80211518: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    func_80034EF8_35AF8(rdram, ctx);
        goto after_2;
    // 0x80211518: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_2:
    // 0x8021151C: jal         0x8020E838
    // 0x80211520: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    func_8020E838_66D7E8(rdram, ctx);
        goto after_3;
    // 0x80211520: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_3:
    // 0x80211524: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80211528: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8021152C: lwc1        $f8, 0x54($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80211530: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x80211534: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x80211538: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x8021153C: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x80211540: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80211544: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x80211548: jal         0x80210F88
    // 0x8021154C: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    func_80210F88_66FF38(rdram, ctx);
        goto after_4;
    // 0x8021154C: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x80211550: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80211554: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x80211558: jal         0x8003521C
    // 0x8021155C: addiu       $a0, $a0, 0x13C8
    ctx->r4 = ADD32(ctx->r4, 0X13C8);
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x8021155C: addiu       $a0, $a0, 0x13C8
    ctx->r4 = ADD32(ctx->r4, 0X13C8);
    after_5:
    // 0x80211560: b           L_80211788
    // 0x80211564: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_80211788;
    // 0x80211564: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80211568:
    // 0x80211568: beq         $t6, $zero, L_80211590
    if (ctx->r14 == 0) {
        // 0x8021156C: andi        $t1, $a2, 0x4
        ctx->r9 = ctx->r6 & 0X4;
            goto L_80211590;
    }
    // 0x8021156C: andi        $t1, $a2, 0x4
    ctx->r9 = ctx->r6 & 0X4;
    // 0x80211570: lw          $t7, 0x24($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X24);
    // 0x80211574: andi        $t8, $t7, 0x8
    ctx->r24 = ctx->r15 & 0X8;
    // 0x80211578: bne         $t8, $zero, L_80211590
    if (ctx->r24 != 0) {
        // 0x8021157C: nop
    
            goto L_80211590;
    }
    // 0x8021157C: nop

    // 0x80211580: lw          $t9, 0x20($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X20);
    // 0x80211584: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x80211588: b           L_802115B4
    // 0x8021158C: sw          $t0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r8;
        goto L_802115B4;
    // 0x8021158C: sw          $t0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r8;
L_80211590:
    // 0x80211590: beql        $t1, $zero, L_802115B8
    if (ctx->r9 == 0) {
        // 0x80211594: lw          $a1, 0x20($s0)
        ctx->r5 = MEM_W(ctx->r16, 0X20);
            goto L_802115B8;
    }
    goto skip_0;
    // 0x80211594: lw          $a1, 0x20($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X20);
    skip_0:
    // 0x80211598: lw          $t2, 0x24($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X24);
    // 0x8021159C: andi        $t3, $t2, 0x4
    ctx->r11 = ctx->r10 & 0X4;
    // 0x802115A0: bnel        $t3, $zero, L_802115B8
    if (ctx->r11 != 0) {
        // 0x802115A4: lw          $a1, 0x20($s0)
        ctx->r5 = MEM_W(ctx->r16, 0X20);
            goto L_802115B8;
    }
    goto skip_1;
    // 0x802115A4: lw          $a1, 0x20($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X20);
    skip_1:
    // 0x802115A8: lw          $t4, 0x20($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X20);
    // 0x802115AC: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x802115B0: sw          $t5, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r13;
L_802115B4:
    // 0x802115B4: lw          $a1, 0x20($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X20);
L_802115B8:
    // 0x802115B8: bgezl       $a1, L_802115CC
    if (SIGNED(ctx->r5) >= 0) {
        // 0x802115BC: slti        $at, $a1, 0x4
        ctx->r1 = SIGNED(ctx->r5) < 0X4 ? 1 : 0;
            goto L_802115CC;
    }
    goto skip_2;
    // 0x802115BC: slti        $at, $a1, 0x4
    ctx->r1 = SIGNED(ctx->r5) < 0X4 ? 1 : 0;
    skip_2:
    // 0x802115C0: sw          $zero, 0x20($s0)
    MEM_W(0X20, ctx->r16) = 0;
    // 0x802115C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802115C8: slti        $at, $a1, 0x4
    ctx->r1 = SIGNED(ctx->r5) < 0X4 ? 1 : 0;
L_802115CC:
    // 0x802115CC: bnel        $at, $zero, L_802115E0
    if (ctx->r1 != 0) {
        // 0x802115D0: lw          $a0, 0x0($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X0);
            goto L_802115E0;
    }
    goto skip_3;
    // 0x802115D0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    skip_3:
    // 0x802115D4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802115D8: sw          $a1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r5;
    // 0x802115DC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
L_802115E0:
    // 0x802115E0: jal         0x8020E498
    // 0x802115E4: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    func_8020E498_66D448(rdram, ctx);
        goto after_6;
    // 0x802115E4: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    after_6:
    // 0x802115E8: lw          $v1, 0x50($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X50);
    // 0x802115EC: andi        $t7, $v1, 0x200
    ctx->r15 = ctx->r3 & 0X200;
    // 0x802115F0: beq         $t7, $zero, L_8021165C
    if (ctx->r15 == 0) {
        // 0x802115F4: andi        $t2, $v1, 0x100
        ctx->r10 = ctx->r3 & 0X100;
            goto L_8021165C;
    }
    // 0x802115F4: andi        $t2, $v1, 0x100
    ctx->r10 = ctx->r3 & 0X100;
    // 0x802115F8: lw          $v0, 0x28($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X28);
    // 0x802115FC: addiu       $s3, $sp, 0x54
    ctx->r19 = ADD32(ctx->r29, 0X54);
    // 0x80211600: addiu       $s2, $sp, 0x58
    ctx->r18 = ADD32(ctx->r29, 0X58);
    // 0x80211604: beq         $s1, $v0, L_8021161C
    if (ctx->r17 == ctx->r2) {
        // 0x80211608: slti        $at, $v0, 0x15
        ctx->r1 = SIGNED(ctx->r2) < 0X15 ? 1 : 0;
            goto L_8021161C;
    }
    // 0x80211608: slti        $at, $v0, 0x15
    ctx->r1 = SIGNED(ctx->r2) < 0X15 ? 1 : 0;
    // 0x8021160C: bne         $at, $zero, L_8021165C
    if (ctx->r1 != 0) {
        // 0x80211610: andi        $t8, $v0, 0x7
        ctx->r24 = ctx->r2 & 0X7;
            goto L_8021165C;
    }
    // 0x80211610: andi        $t8, $v0, 0x7
    ctx->r24 = ctx->r2 & 0X7;
    // 0x80211614: bne         $t8, $zero, L_8021165C
    if (ctx->r24 != 0) {
        // 0x80211618: nop
    
            goto L_8021165C;
    }
    // 0x80211618: nop

L_8021161C:
    // 0x8021161C: addiu       $s1, $sp, 0x5C
    ctx->r17 = ADD32(ctx->r29, 0X5C);
    // 0x80211620: lw          $t9, 0x2C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X2C);
L_80211624:
    // 0x80211624: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x80211628: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x8021162C: addiu       $a0, $t9, -0x1
    ctx->r4 = ADD32(ctx->r25, -0X1);
    // 0x80211630: bgez        $a0, L_80211640
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80211634: sw          $a0, 0x2C($s0)
        MEM_W(0X2C, ctx->r16) = ctx->r4;
            goto L_80211640;
    }
    // 0x80211634: sw          $a0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r4;
    // 0x80211638: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x8021163C: sw          $a0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r4;
L_80211640:
    // 0x80211640: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    // 0x80211644: jal         0x8020F640
    // 0x80211648: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    func_8020F640_66E5F0(rdram, ctx);
        goto after_7;
    // 0x80211648: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    after_7:
    // 0x8021164C: beql        $v0, $zero, L_80211624
    if (ctx->r2 == 0) {
        // 0x80211650: lw          $t9, 0x2C($s0)
        ctx->r25 = MEM_W(ctx->r16, 0X2C);
            goto L_80211624;
    }
    goto skip_4;
    // 0x80211650: lw          $t9, 0x2C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X2C);
    skip_4:
    // 0x80211654: b           L_80211700
    // 0x80211658: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
        goto L_80211700;
    // 0x80211658: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
L_8021165C:
    // 0x8021165C: beq         $t2, $zero, L_802116C8
    if (ctx->r10 == 0) {
        // 0x80211660: addiu       $a2, $sp, 0x5C
        ctx->r6 = ADD32(ctx->r29, 0X5C);
            goto L_802116C8;
    }
    // 0x80211660: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
    // 0x80211664: lw          $v0, 0x28($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X28);
    // 0x80211668: addiu       $s3, $sp, 0x54
    ctx->r19 = ADD32(ctx->r29, 0X54);
    // 0x8021166C: addiu       $s2, $sp, 0x58
    ctx->r18 = ADD32(ctx->r29, 0X58);
    // 0x80211670: beq         $s1, $v0, L_80211684
    if (ctx->r17 == ctx->r2) {
        // 0x80211674: slti        $at, $v0, 0x15
        ctx->r1 = SIGNED(ctx->r2) < 0X15 ? 1 : 0;
            goto L_80211684;
    }
    // 0x80211674: slti        $at, $v0, 0x15
    ctx->r1 = SIGNED(ctx->r2) < 0X15 ? 1 : 0;
    // 0x80211678: bne         $at, $zero, L_802116C8
    if (ctx->r1 != 0) {
        // 0x8021167C: andi        $t3, $v0, 0x7
        ctx->r11 = ctx->r2 & 0X7;
            goto L_802116C8;
    }
    // 0x8021167C: andi        $t3, $v0, 0x7
    ctx->r11 = ctx->r2 & 0X7;
    // 0x80211680: bne         $t3, $zero, L_802116C8
    if (ctx->r11 != 0) {
        // 0x80211684: addiu       $s1, $sp, 0x5C
        ctx->r17 = ADD32(ctx->r29, 0X5C);
            goto L_802116C8;
    }
L_80211684:
    // 0x80211684: addiu       $s1, $sp, 0x5C
    ctx->r17 = ADD32(ctx->r29, 0X5C);
    // 0x80211688: lw          $t4, 0x2C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X2C);
L_8021168C:
    // 0x8021168C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x80211690: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x80211694: addiu       $a0, $t4, 0x1
    ctx->r4 = ADD32(ctx->r12, 0X1);
    // 0x80211698: slti        $at, $a0, 0xF
    ctx->r1 = SIGNED(ctx->r4) < 0XF ? 1 : 0;
    // 0x8021169C: bne         $at, $zero, L_802116AC
    if (ctx->r1 != 0) {
        // 0x802116A0: sw          $a0, 0x2C($s0)
        MEM_W(0X2C, ctx->r16) = ctx->r4;
            goto L_802116AC;
    }
    // 0x802116A0: sw          $a0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r4;
    // 0x802116A4: sw          $zero, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = 0;
    // 0x802116A8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_802116AC:
    // 0x802116AC: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    // 0x802116B0: jal         0x8020F640
    // 0x802116B4: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    func_8020F640_66E5F0(rdram, ctx);
        goto after_8;
    // 0x802116B4: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    after_8:
    // 0x802116B8: beql        $v0, $zero, L_8021168C
    if (ctx->r2 == 0) {
        // 0x802116BC: lw          $t4, 0x2C($s0)
        ctx->r12 = MEM_W(ctx->r16, 0X2C);
            goto L_8021168C;
    }
    goto skip_5;
    // 0x802116BC: lw          $t4, 0x2C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X2C);
    skip_5:
    // 0x802116C0: b           L_80211700
    // 0x802116C4: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
        goto L_80211700;
    // 0x802116C4: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
L_802116C8:
    // 0x802116C8: addiu       $s3, $sp, 0x54
    ctx->r19 = ADD32(ctx->r29, 0X54);
    // 0x802116CC: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    // 0x802116D0: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    // 0x802116D4: addiu       $a3, $sp, 0x58
    ctx->r7 = ADD32(ctx->r29, 0X58);
    // 0x802116D8: jal         0x8020F640
    // 0x802116DC: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    func_8020F640_66E5F0(rdram, ctx);
        goto after_9;
    // 0x802116DC: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    after_9:
    // 0x802116E0: bnel        $v0, $zero, L_80211700
    if (ctx->r2 != 0) {
        // 0x802116E4: lwc1        $f10, 0x58($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
            goto L_80211700;
    }
    goto skip_6;
    // 0x802116E4: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    skip_6:
    // 0x802116E8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802116EC: nop

    // 0x802116F0: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    // 0x802116F4: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    // 0x802116F8: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    // 0x802116FC: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
L_80211700:
    // 0x80211700: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80211704: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80211708: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8021170C: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80211710: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x80211714: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x80211718: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x8021171C: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x80211720: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80211724: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x80211728: jal         0x8020E8E8
    // 0x8021172C: nop

    func_8020E8E8_66D898(rdram, ctx);
        goto after_10;
    // 0x8021172C: nop

    after_10:
    // 0x80211730: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80211734: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x80211738: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x8021173C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80211740: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80211744: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80211748: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8021174C: mul.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f0.d);
    // 0x80211750: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80211754: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x80211758: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x8021175C: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x80211760: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x80211764: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x80211768: jal         0x8020E34C
    // 0x8021176C: nop

    func_8020E34C_66D2FC(rdram, ctx);
        goto after_11;
    // 0x8021176C: nop

    after_11:
    // 0x80211770: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x80211774: jal         0x80211214
    // 0x80211778: lw          $a1, 0x2C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2C);
    func_80211214_6701C4(rdram, ctx);
        goto after_12;
    // 0x80211778: lw          $a1, 0x2C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2C);
    after_12:
    // 0x8021177C: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x80211780: sw          $t6, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r14;
    // 0x80211784: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80211788:
    // 0x80211788: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x8021178C: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x80211790: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x80211794: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x80211798: jr          $ra
    // 0x8021179C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x8021179C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_8020FF80_66EF30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020FF80: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x8020FF84: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8020FF88: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8020FF8C: sw          $a0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r4;
    // 0x8020FF90: sw          $a1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r5;
    // 0x8020FF94: lwc1        $f4, 0x78($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X78);
    // 0x8020FF98: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8020FF9C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8020FFA0: swc1        $f4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f4.u32l;
    // 0x8020FFA4: lwc1        $f6, 0x7C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x8020FFA8: lwc1        $f10, 0x7754($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7754);
    // 0x8020FFAC: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x8020FFB0: c.lt.s      $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f6.fl < ctx->f18.fl;
    // 0x8020FFB4: swc1        $f6, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f6.u32l;
    // 0x8020FFB8: lwc1        $f8, 0x80($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X80);
    // 0x8020FFBC: swc1        $f18, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f18.u32l;
    // 0x8020FFC0: swc1        $f18, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f18.u32l;
    // 0x8020FFC4: swc1        $f10, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f10.u32l;
    // 0x8020FFC8: bc1t        L_8020FFE8
    if (c1cs) {
        // 0x8020FFCC: swc1        $f8, 0x80($sp)
        MEM_W(0X80, ctx->r29) = ctx->f8.u32l;
            goto L_8020FFE8;
    }
    // 0x8020FFCC: swc1        $f8, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f8.u32l;
    // 0x8020FFD0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020FFD4: nop

    // 0x8020FFD8: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8020FFDC: nop

    // 0x8020FFE0: bc1fl       L_80210004
    if (!c1cs) {
        // 0x8020FFE4: lui         $at, 0x4248
        ctx->r1 = S32(0X4248 << 16);
            goto L_80210004;
    }
    goto skip_0;
    // 0x8020FFE4: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    skip_0:
L_8020FFE8:
    // 0x8020FFE8: jal         0x80038B98
    // 0x8020FFEC: ori         $a0, $zero, 0x8133
    ctx->r4 = 0 | 0X8133;
    func_80038B98_39798(rdram, ctx);
        goto after_0;
    // 0x8020FFEC: ori         $a0, $zero, 0x8133
    ctx->r4 = 0 | 0X8133;
    after_0:
    // 0x8020FFF0: lw          $t8, 0x90($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X90);
    // 0x8020FFF4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8020FFF8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8020FFFC: sw          $t7, 0xD4($t8)
    MEM_W(0XD4, ctx->r24) = ctx->r15;
    // 0x80210000: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
L_80210004:
    // 0x80210004: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80210008: lwc1        $f10, 0x84($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X84);
    // 0x8021000C: lw          $s0, 0x90($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X90);
    // 0x80210010: addiu       $t9, $zero, 0x7
    ctx->r25 = ADD32(0, 0X7);
    // 0x80210014: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x80210018: addiu       $s0, $s0, 0x5C
    ctx->r16 = ADD32(ctx->r16, 0X5C);
    // 0x8021001C: bc1fl       L_8021002C
    if (!c1cs) {
        // 0x80210020: lw          $v0, 0x70($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X70);
            goto L_8021002C;
    }
    goto skip_1;
    // 0x80210020: lw          $v0, 0x70($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X70);
    skip_1:
    // 0x80210024: sw          $t9, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->r25;
    // 0x80210028: lw          $v0, 0x70($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X70);
L_8021002C:
    // 0x8021002C: addiu       $at, $zero, 0x258
    ctx->r1 = ADD32(0, 0X258);
    // 0x80210030: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x80210034: mfhi        $t0
    ctx->r8 = hi;
    // 0x80210038: bnel        $t0, $zero, L_80210088
    if (ctx->r8 != 0) {
        // 0x8021003C: lw          $t3, 0x74($s0)
        ctx->r11 = MEM_W(ctx->r16, 0X74);
            goto L_80210088;
    }
    goto skip_2;
    // 0x8021003C: lw          $t3, 0x74($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X74);
    skip_2:
    // 0x80210040: lw          $t1, 0x78($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X78);
    // 0x80210044: bnel        $t1, $zero, L_80210088
    if (ctx->r9 != 0) {
        // 0x80210048: lw          $t3, 0x74($s0)
        ctx->r11 = MEM_W(ctx->r16, 0X74);
            goto L_80210088;
    }
    goto skip_3;
    // 0x80210048: lw          $t3, 0x74($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X74);
    skip_3:
    // 0x8021004C: jal         0x80012938
    // 0x80210050: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    func_80012938_13538(rdram, ctx);
        goto after_1;
    // 0x80210050: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    after_1:
    // 0x80210054: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x80210058: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8021005C: lwc1        $f4, 0x80($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X80);
    // 0x80210060: addiu       $a0, $zero, 0x28D
    ctx->r4 = ADD32(0, 0X28D);
    // 0x80210064: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80210068: lw          $a2, 0x88($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X88);
    // 0x8021006C: lw          $a3, 0x84($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X84);
    // 0x80210070: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80210074: jal         0x8000FE1C
    // 0x80210078: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_8000FE1C_10A1C(rdram, ctx);
        goto after_2;
    // 0x80210078: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x8021007C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80210080: lw          $v0, 0x70($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X70);
    // 0x80210084: lw          $t3, 0x74($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X74);
L_80210088:
    // 0x80210088: addiu       $t2, $v0, 0x1
    ctx->r10 = ADD32(ctx->r2, 0X1);
    // 0x8021008C: sw          $t2, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->r10;
    // 0x80210090: sltiu       $at, $t3, 0x8
    ctx->r1 = ctx->r11 < 0X8 ? 1 : 0;
    // 0x80210094: beq         $at, $zero, L_80210EA0
    if (ctx->r1 == 0) {
        // 0x80210098: sll         $t3, $t3, 2
        ctx->r11 = S32(ctx->r11 << 2);
            goto L_80210EA0;
    }
    // 0x80210098: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8021009C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x802100A0: addu        $at, $at, $t3
    gpr jr_addend_802100A8 = ctx->r11;
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x802100A4: lw          $t3, 0x7758($at)
    ctx->r11 = ADD32(ctx->r1, 0X7758);
    // 0x802100A8: jr          $t3
    // 0x802100AC: nop

    switch (jr_addend_802100A8 >> 2) {
        case 0: goto L_802100B0; break;
        case 1: goto L_8021025C; break;
        case 2: goto L_80210390; break;
        case 3: goto L_80210504; break;
        case 4: goto L_802106DC; break;
        case 5: goto L_80210860; break;
        case 6: goto L_802109DC; break;
        case 7: goto L_80210C40; break;
        default: switch_error(__func__, 0x802100A8, 0x80217758);
    }
    // 0x802100AC: nop

L_802100B0:
    // 0x802100B0: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    // 0x802100B4: jal         0x80012500
    // 0x802100B8: addiu       $a1, $zero, 0xA00
    ctx->r5 = ADD32(0, 0XA00);
    func_80012500_13100(rdram, ctx);
        goto after_3;
    // 0x802100B8: addiu       $a1, $zero, 0xA00
    ctx->r5 = ADD32(0, 0XA00);
    after_3:
    // 0x802100BC: lwc1        $f8, 0x84($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X84);
    // 0x802100C0: lui         $at, 0x4054
    ctx->r1 = S32(0X4054 << 16);
    // 0x802100C4: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x802100C8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802100CC: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x802100D0: lui         $at, 0x4044
    ctx->r1 = S32(0X4044 << 16);
    // 0x802100D4: mul.d       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f10.d, ctx->f4.d);
    // 0x802100D8: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x802100DC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802100E0: lui         $at, 0x4064
    ctx->r1 = S32(0X4064 << 16);
    // 0x802100E4: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x802100E8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802100EC: lui         $at, 0x4030
    ctx->r1 = S32(0X4030 << 16);
    // 0x802100F0: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    // 0x802100F4: div.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = DIV_D(ctx->f6.d, ctx->f8.d);
    // 0x802100F8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802100FC: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80210100: sub.d       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f10.d); 
    ctx->f6.d = ctx->f4.d - ctx->f10.d;
    // 0x80210104: mul.d       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f4.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80210108: trunc.w.d   $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.u32l = TRUNC_W_D(ctx->f4.d);
    // 0x8021010C: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x80210110: jal         0x80012500
    // 0x80210114: nop

    func_80012500_13100(rdram, ctx);
        goto after_4;
    // 0x80210114: nop

    after_4:
    // 0x80210118: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8021011C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80210120: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80210124: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80210128: lwc1        $f6, 0x7778($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X7778);
    // 0x8021012C: swc1        $f2, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f2.u32l;
    // 0x80210130: swc1        $f2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f2.u32l;
    // 0x80210134: swc1        $f6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f6.u32l;
    // 0x80210138: lwc1        $f8, 0x40($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X40);
    // 0x8021013C: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x80210140: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80210144: mul.s       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80210148: lwc1        $f8, 0x48($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X48);
    // 0x8021014C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80210150: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    // 0x80210154: lui         $a2, 0x43C8
    ctx->r6 = S32(0X43C8 << 16);
    // 0x80210158: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x8021015C: mul.s       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80210160: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x80210164: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80210168: add.s       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x8021016C: sub.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x80210170: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x80210174: jal         0x80012518
    // 0x80210178: nop

    func_80012518_13118(rdram, ctx);
        goto after_5;
    // 0x80210178: nop

    after_5:
    // 0x8021017C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80210180: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80210184: lwc1        $f4, 0x40($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X40);
    // 0x80210188: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x8021018C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80210190: mul.s       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80210194: lwc1        $f4, 0x44($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X44);
    // 0x80210198: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8021019C: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    // 0x802101A0: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x802101A4: mul.s       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x802101A8: lwc1        $f6, 0x48($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X48);
    // 0x802101AC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802101B0: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x802101B4: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x802101B8: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x802101BC: sub.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x802101C0: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x802101C4: jal         0x80012818
    // 0x802101C8: nop

    func_80012818_13418(rdram, ctx);
        goto after_6;
    // 0x802101C8: nop

    after_6:
    // 0x802101CC: lui         $at, 0x4460
    ctx->r1 = S32(0X4460 << 16);
    // 0x802101D0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802101D4: lwc1        $f8, 0x5C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x802101D8: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x802101DC: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x802101E0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802101E4: cvt.d.s     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f4.d = CVT_D_S(ctx->f8.fl);
    // 0x802101E8: swc1        $f6, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f6.u32l;
    // 0x802101EC: add.d       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f10.d); 
    ctx->f6.d = ctx->f4.d + ctx->f10.d;
    // 0x802101F0: lwc1        $f10, 0xC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC);
    // 0x802101F4: lui         $at, 0x4044
    ctx->r1 = S32(0X4044 << 16);
    // 0x802101F8: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x802101FC: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x80210200: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80210204: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80210208: cvt.d.s     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f6.d = CVT_D_S(ctx->f10.fl);
    // 0x8021020C: swc1        $f8, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f8.u32l;
    // 0x80210210: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x80210214: nop

    // 0x80210218: bc1fl       L_80210EA4
    if (!c1cs) {
        // 0x8021021C: lwc1        $f6, 0x58($s0)
        ctx->f6.u32l = MEM_W(ctx->r16, 0X58);
            goto L_80210EA4;
    }
    goto skip_4;
    // 0x8021021C: lwc1        $f6, 0x58($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X58);
    skip_4:
    // 0x80210220: lwc1        $f8, 0x777C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X777C);
    // 0x80210224: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80210228: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
    // 0x8021022C: lwc1        $f10, 0x7780($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7780);
    // 0x80210230: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80210234: swc1        $f10, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f10.u32l;
    // 0x80210238: lwc1        $f4, 0x7784($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7784);
    // 0x8021023C: swc1        $f4, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f4.u32l;
    // 0x80210240: jal         0x80011760
    // 0x80210244: lw          $a0, 0x90($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X90);
    func_80011760_12360(rdram, ctx);
        goto after_7;
    // 0x80210244: lw          $a0, 0x90($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X90);
    after_7:
    // 0x80210248: jal         0x8020FBF8
    // 0x8021024C: lw          $a0, 0x38($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X38);
    func_8020FBF8_66EBA8(rdram, ctx);
        goto after_8;
    // 0x8021024C: lw          $a0, 0x38($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X38);
    after_8:
    // 0x80210250: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80210254: b           L_80210F6C
    // 0x80210258: sw          $t5, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->r13;
        goto L_80210F6C;
    // 0x80210258: sw          $t5, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->r13;
L_8021025C:
    // 0x8021025C: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    // 0x80210260: jal         0x80012500
    // 0x80210264: addiu       $a1, $zero, 0x500
    ctx->r5 = ADD32(0, 0X500);
    func_80012500_13100(rdram, ctx);
        goto after_9;
    // 0x80210264: addiu       $a1, $zero, 0x500
    ctx->r5 = ADD32(0, 0X500);
    after_9:
    // 0x80210268: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8021026C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80210270: lwc1        $f6, 0x88($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X88);
    // 0x80210274: lwc1        $f4, 0x80($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X80);
    // 0x80210278: lui         $at, 0x422C
    ctx->r1 = S32(0X422C << 16);
    // 0x8021027C: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80210280: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    // 0x80210284: lui         $a2, 0x43E1
    ctx->r6 = S32(0X43E1 << 16);
    // 0x80210288: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8021028C: sub.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x80210290: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80210294: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x80210298: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8021029C: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x802102A0: jal         0x800127B8
    // 0x802102A4: nop

    func_800127B8_133B8(rdram, ctx);
        goto after_10;
    // 0x802102A4: nop

    after_10:
    // 0x802102A8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802102AC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802102B0: lwc1        $f4, 0x88($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X88);
    // 0x802102B4: lwc1        $f10, 0x84($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X84);
    // 0x802102B8: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    // 0x802102BC: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x802102C0: sub.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x802102C4: mul.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x802102C8: lwc1        $f6, 0x80($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X80);
    // 0x802102CC: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x802102D0: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x802102D4: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x802102D8: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x802102DC: jal         0x80012818
    // 0x802102E0: nop

    func_80012818_13418(rdram, ctx);
        goto after_11;
    // 0x802102E0: nop

    after_11:
    // 0x802102E4: lwc1        $f10, 0x58($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X58);
    // 0x802102E8: lui         $at, 0x4090
    ctx->r1 = S32(0X4090 << 16);
    // 0x802102EC: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x802102F0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802102F4: cvt.d.s     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f0.d = CVT_D_S(ctx->f10.fl);
    // 0x802102F8: lui         $at, 0x4010
    ctx->r1 = S32(0X4010 << 16);
    // 0x802102FC: c.lt.d      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.d < ctx->f4.d;
    // 0x80210300: nop

    // 0x80210304: bc1fl       L_8021032C
    if (!c1cs) {
        // 0x80210308: lwc1        $f4, 0x1C($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
            goto L_8021032C;
    }
    goto skip_5;
    // 0x80210308: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    skip_5:
    // 0x8021030C: mtc1        $at, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r1;
    // 0x80210310: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80210314: nop

    // 0x80210318: add.d       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f6.d = ctx->f0.d + ctx->f2.d;
    // 0x8021031C: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x80210320: b           L_80210EA0
    // 0x80210324: swc1        $f8, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f8.u32l;
        goto L_80210EA0;
    // 0x80210324: swc1        $f8, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f8.u32l;
    // 0x80210328: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
L_8021032C:
    // 0x8021032C: lwc1        $f6, 0x4C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x80210330: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
    // 0x80210334: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80210338: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8021033C: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x80210340: swc1        $f10, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f10.u32l;
    // 0x80210344: bc1fl       L_80210368
    if (!c1cs) {
        // 0x80210348: mtc1        $at, $f10
        ctx->f10.u32l = ctx->r1;
            goto L_80210368;
    }
    goto skip_6;
    // 0x80210348: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    skip_6:
    // 0x8021034C: lwc1        $f12, 0x5C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x80210350: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80210354: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80210358: swc1        $f12, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->f12.u32l;
    // 0x8021035C: b           L_80210374
    // 0x80210360: swc1        $f18, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f18.u32l;
        goto L_80210374;
    // 0x80210360: swc1        $f18, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f18.u32l;
    // 0x80210364: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
L_80210368:
    // 0x80210368: lwc1        $f12, 0x5C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x8021036C: swc1        $f10, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f10.u32l;
    // 0x80210370: swc1        $f12, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->f12.u32l;
L_80210374:
    // 0x80210374: lwc1        $f4, 0x64($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X64);
    // 0x80210378: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8021037C: sw          $zero, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = 0;
    // 0x80210380: add.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f12.fl + ctx->f4.fl;
    // 0x80210384: sw          $t6, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->r14;
    // 0x80210388: b           L_80210EA0
    // 0x8021038C: swc1        $f6, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f6.u32l;
        goto L_80210EA0;
    // 0x8021038C: swc1        $f6, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f6.u32l;
L_80210390:
    // 0x80210390: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    // 0x80210394: jal         0x800124AC
    // 0x80210398: lui         $a1, 0x4520
    ctx->r5 = S32(0X4520 << 16);
    func_800124AC_130AC(rdram, ctx);
        goto after_12;
    // 0x80210398: lui         $a1, 0x4520
    ctx->r5 = S32(0X4520 << 16);
    after_12:
    // 0x8021039C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802103A0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802103A4: lwc1        $f8, 0x88($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X88);
    // 0x802103A8: lwc1        $f4, 0x80($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X80);
    // 0x802103AC: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x802103B0: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x802103B4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802103B8: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    // 0x802103BC: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x802103C0: lui         $a2, 0x43E1
    ctx->r6 = S32(0X43E1 << 16);
    // 0x802103C4: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x802103C8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x802103CC: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x802103D0: jal         0x80012518
    // 0x802103D4: nop

    func_80012518_13118(rdram, ctx);
        goto after_13;
    // 0x802103D4: nop

    after_13:
    // 0x802103D8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802103DC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802103E0: lwc1        $f4, 0x88($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X88);
    // 0x802103E4: lwc1        $f8, 0x84($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X84);
    // 0x802103E8: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    // 0x802103EC: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x802103F0: lwc1        $f4, 0x80($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X80);
    // 0x802103F4: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x802103F8: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x802103FC: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80210400: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x80210404: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80210408: jal         0x80012628
    // 0x8021040C: nop

    func_80012628_13228(rdram, ctx);
        goto after_14;
    // 0x8021040C: nop

    after_14:
    // 0x80210410: lw          $t7, 0x6C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X6C);
    // 0x80210414: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80210418: ldc1        $f4, 0x7788($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, 0X7788);
    // 0x8021041C: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x80210420: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80210424: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80210428: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x8021042C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80210430: lui         $at, 0x3F90
    ctx->r1 = S32(0X3F90 << 16);
    // 0x80210434: mul.d       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f10.d, ctx->f4.d);
    // 0x80210438: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8021043C: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80210440: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80210444: nop

    // 0x80210448: mul.d       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f10.d, ctx->f4.d);
    // 0x8021044C: jal         0x800417F0
    // 0x80210450: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    __sinf_recomp(rdram, ctx);
        goto after_15;
    // 0x80210450: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    after_15:
    // 0x80210454: cvt.d.s     $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.d = CVT_D_S(ctx->f0.fl);
    // 0x80210458: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8021045C: add.d       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = ctx->f2.d + ctx->f2.d;
    // 0x80210460: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x80210464: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80210468: lwc1        $f6, 0x58($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X58);
    // 0x8021046C: lwc1        $f16, 0x64($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X64);
    // 0x80210470: mul.d       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x80210474: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80210478: lwc1        $f14, 0x68($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X68);
    // 0x8021047C: add.d       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f4.d); 
    ctx->f10.d = ctx->f8.d + ctx->f4.d;
    // 0x80210480: lwc1        $f8, 0x5C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x80210484: add.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x80210488: cvt.s.d     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f6.fl = CVT_S_D(ctx->f10.d);
    // 0x8021048C: swc1        $f4, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f4.u32l;
    // 0x80210490: lwc1        $f12, 0x5C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x80210494: swc1        $f6, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f6.u32l;
    // 0x80210498: c.lt.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
    // 0x8021049C: nop

    // 0x802104A0: bc1fl       L_802104B8
    if (!c1cs) {
        // 0x802104A4: sub.s       $f0, $f14, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f12.fl;
            goto L_802104B8;
    }
    goto skip_7;
    // 0x802104A4: sub.s       $f0, $f14, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f12.fl;
    skip_7:
    // 0x802104A8: sub.s       $f0, $f14, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f12.fl;
    // 0x802104AC: b           L_802104B8
    // 0x802104B0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_802104B8;
    // 0x802104B0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x802104B4: sub.s       $f0, $f14, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f12.fl;
L_802104B8:
    // 0x802104B8: trunc.w.s   $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x802104BC: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x802104C0: nop

    // 0x802104C4: bgez        $t9, L_802104D8
    if (SIGNED(ctx->r25) >= 0) {
        // 0x802104C8: andi        $t0, $t9, 0x3FF
        ctx->r8 = ctx->r25 & 0X3FF;
            goto L_802104D8;
    }
    // 0x802104C8: andi        $t0, $t9, 0x3FF
    ctx->r8 = ctx->r25 & 0X3FF;
    // 0x802104CC: beq         $t0, $zero, L_802104D8
    if (ctx->r8 == 0) {
        // 0x802104D0: nop
    
            goto L_802104D8;
    }
    // 0x802104D0: nop

    // 0x802104D4: addiu       $t0, $t0, -0x400
    ctx->r8 = ADD32(ctx->r8, -0X400);
L_802104D8:
    // 0x802104D8: slti        $at, $t0, 0x2
    ctx->r1 = SIGNED(ctx->r8) < 0X2 ? 1 : 0;
    // 0x802104DC: beq         $at, $zero, L_80210EA0
    if (ctx->r1 == 0) {
        // 0x802104E0: lui         $at, 0x8021
        ctx->r1 = S32(0X8021 << 16);
            goto L_80210EA0;
    }
    // 0x802104E0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x802104E4: ldc1        $f8, 0x7790($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, 0X7790);
    // 0x802104E8: cvt.d.s     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f6.d = CVT_D_S(ctx->f16.fl);
    // 0x802104EC: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x802104F0: mul.d       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f4.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x802104F4: sw          $t1, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->r9;
    // 0x802104F8: cvt.s.d     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f10.fl = CVT_S_D(ctx->f4.d);
    // 0x802104FC: b           L_80210EA0
    // 0x80210500: swc1        $f10, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f10.u32l;
        goto L_80210EA0;
    // 0x80210500: swc1        $f10, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f10.u32l;
L_80210504:
    // 0x80210504: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80210508: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8021050C: lwc1        $f6, 0x88($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X88);
    // 0x80210510: lwc1        $f4, 0x84($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X84);
    // 0x80210514: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    // 0x80210518: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8021051C: lwc1        $f6, 0x80($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X80);
    // 0x80210520: mul.s       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80210524: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x80210528: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8021052C: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x80210530: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x80210534: jal         0x80012628
    // 0x80210538: nop

    func_80012628_13228(rdram, ctx);
        goto after_16;
    // 0x80210538: nop

    after_16:
    // 0x8021053C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80210540: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80210544: lwc1        $f4, 0x88($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X88);
    // 0x80210548: lwc1        $f6, 0x84($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X84);
    // 0x8021054C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80210550: mul.s       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80210554: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80210558: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    // 0x8021055C: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80210560: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x80210564: lwc1        $f10, 0x80($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X80);
    // 0x80210568: add.s       $f4, $f8, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f2.fl;
    // 0x8021056C: mul.s       $f6, $f10, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x80210570: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80210574: add.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x80210578: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x8021057C: jal         0x80012518
    // 0x80210580: nop

    func_80012518_13118(rdram, ctx);
        goto after_17;
    // 0x80210580: nop

    after_17:
    // 0x80210584: lw          $t2, 0x6C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X6C);
    // 0x80210588: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8021058C: ldc1        $f6, 0x7798($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, 0X7798);
    // 0x80210590: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x80210594: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80210598: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x8021059C: cvt.d.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.d = CVT_D_W(ctx->f4.u32l);
    // 0x802105A0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802105A4: lui         $at, 0x3F90
    ctx->r1 = S32(0X3F90 << 16);
    // 0x802105A8: mul.d       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f10.d, ctx->f6.d);
    // 0x802105AC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802105B0: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x802105B4: mul.d       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f4.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f4.d);
    // 0x802105B8: nop

    // 0x802105BC: mul.d       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f10.d, ctx->f6.d);
    // 0x802105C0: jal         0x800417F0
    // 0x802105C4: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    __sinf_recomp(rdram, ctx);
        goto after_18;
    // 0x802105C4: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    after_18:
    // 0x802105C8: lui         $at, 0x4010
    ctx->r1 = S32(0X4010 << 16);
    // 0x802105CC: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x802105D0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802105D4: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x802105D8: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x802105DC: mul.d       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f10.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f10.d);
    // 0x802105E0: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x802105E4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802105E8: lwc1        $f10, 0x58($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X58);
    // 0x802105EC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802105F0: addiu       $t3, $sp, 0x84
    ctx->r11 = ADD32(ctx->r29, 0X84);
    // 0x802105F4: addiu       $t4, $sp, 0x80
    ctx->r12 = ADD32(ctx->r29, 0X80);
    // 0x802105F8: addiu       $a3, $sp, 0x88
    ctx->r7 = ADD32(ctx->r29, 0X88);
    // 0x802105FC: mul.d       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f4.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80210600: cvt.d.s     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f6.d = CVT_D_S(ctx->f10.fl);
    // 0x80210604: add.d       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = ctx->f6.d + ctx->f4.d;
    // 0x80210608: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8021060C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80210610: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x80210614: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80210618: swc1        $f10, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f10.u32l;
    // 0x8021061C: swc1        $f4, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f4.u32l;
    // 0x80210620: swc1        $f6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f6.u32l;
    // 0x80210624: swc1        $f8, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f8.u32l;
    // 0x80210628: lhu         $a2, 0x18($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X18);
    // 0x8021062C: lhu         $a1, 0x16($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X16);
    // 0x80210630: lhu         $a0, 0x14($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X14);
    // 0x80210634: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x80210638: jal         0x80033898
    // 0x8021063C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    func_80033898_34498(rdram, ctx);
        goto after_19;
    // 0x8021063C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_19:
    // 0x80210640: lwc1        $f10, 0x4C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x80210644: lwc1        $f6, 0x1C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x80210648: lwc1        $f4, 0x54($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X54);
    // 0x8021064C: lwc1        $f8, 0x24($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X24);
    // 0x80210650: sub.s       $f14, $f10, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x80210654: lwc1        $f10, 0x88($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X88);
    // 0x80210658: lwc1        $f6, 0x80($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X80);
    // 0x8021065C: sub.s       $f0, $f4, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x80210660: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80210664: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80210668: mul.s       $f2, $f10, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x8021066C: lwc1        $f10, 0x88($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X88);
    // 0x80210670: mul.s       $f12, $f6, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x80210674: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x80210678: nop

    // 0x8021067C: bc1fl       L_80210694
    if (!c1cs) {
        // 0x80210680: sub.s       $f0, $f2, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
            goto L_80210694;
    }
    goto skip_8;
    // 0x80210680: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    skip_8:
    // 0x80210684: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x80210688: b           L_80210694
    // 0x8021068C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80210694;
    // 0x8021068C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80210690: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_80210694:
    // 0x80210694: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x80210698: nop

    // 0x8021069C: bc1fl       L_802106CC
    if (!c1cs) {
        // 0x802106A0: lwc1        $f4, 0x5C($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0X5C);
            goto L_802106CC;
    }
    goto skip_9;
    // 0x802106A0: lwc1        $f4, 0x5C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X5C);
    skip_9:
    // 0x802106A4: mul.s       $f6, $f10, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x802106A8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802106AC: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x802106B0: c.lt.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl < ctx->f6.fl;
    // 0x802106B4: nop

    // 0x802106B8: bc1fl       L_802106CC
    if (!c1cs) {
        // 0x802106BC: lwc1        $f4, 0x5C($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0X5C);
            goto L_802106CC;
    }
    goto skip_10;
    // 0x802106BC: lwc1        $f4, 0x5C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X5C);
    skip_10:
    // 0x802106C0: b           L_80210EA0
    // 0x802106C4: sw          $t5, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->r13;
        goto L_80210EA0;
    // 0x802106C4: sw          $t5, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->r13;
    // 0x802106C8: lwc1        $f4, 0x5C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X5C);
L_802106CC:
    // 0x802106CC: lwc1        $f10, 0x64($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X64);
    // 0x802106D0: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x802106D4: b           L_80210EA0
    // 0x802106D8: swc1        $f8, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f8.u32l;
        goto L_80210EA0;
    // 0x802106D8: swc1        $f8, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f8.u32l;
L_802106DC:
    // 0x802106DC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802106E0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802106E4: lwc1        $f6, 0x88($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X88);
    // 0x802106E8: lwc1        $f10, 0x84($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X84);
    // 0x802106EC: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    // 0x802106F0: mul.s       $f4, $f6, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x802106F4: lwc1        $f6, 0x80($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X80);
    // 0x802106F8: mul.s       $f8, $f10, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x802106FC: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x80210700: mul.s       $f4, $f6, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80210704: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x80210708: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x8021070C: jal         0x80012628
    // 0x80210710: nop

    func_80012628_13228(rdram, ctx);
        goto after_20;
    // 0x80210710: nop

    after_20:
    // 0x80210714: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80210718: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8021071C: lwc1        $f10, 0x88($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X88);
    // 0x80210720: lwc1        $f6, 0x84($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X84);
    // 0x80210724: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80210728: mul.s       $f8, $f10, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x8021072C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80210730: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    // 0x80210734: mul.s       $f4, $f6, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80210738: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x8021073C: lwc1        $f8, 0x80($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X80);
    // 0x80210740: add.s       $f10, $f4, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x80210744: mul.s       $f6, $f8, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80210748: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x8021074C: add.s       $f4, $f6, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x80210750: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x80210754: jal         0x80012518
    // 0x80210758: nop

    func_80012518_13118(rdram, ctx);
        goto after_21;
    // 0x80210758: nop

    after_21:
    // 0x8021075C: lwc1        $f10, 0x88($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X88);
    // 0x80210760: lwc1        $f8, 0x4C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x80210764: lwc1        $f4, 0x84($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X84);
    // 0x80210768: addiu       $t6, $sp, 0x5C
    ctx->r14 = ADD32(ctx->r29, 0X5C);
    // 0x8021076C: sub.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x80210770: addiu       $t7, $sp, 0x60
    ctx->r15 = ADD32(ctx->r29, 0X60);
    // 0x80210774: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    // 0x80210778: swc1        $f6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f6.u32l;
    // 0x8021077C: lwc1        $f10, 0x50($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X50);
    // 0x80210780: lwc1        $f6, 0x80($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X80);
    // 0x80210784: sub.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x80210788: swc1        $f8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f8.u32l;
    // 0x8021078C: lwc1        $f4, 0x54($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X54);
    // 0x80210790: sub.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x80210794: swc1        $f10, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f10.u32l;
    // 0x80210798: lhu         $a2, 0x2C($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X2C);
    // 0x8021079C: lhu         $a1, 0x2A($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X2A);
    // 0x802107A0: lhu         $a0, 0x28($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X28);
    // 0x802107A4: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x802107A8: jal         0x80033A3C
    // 0x802107AC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_80033A3C_3463C(rdram, ctx);
        goto after_22;
    // 0x802107AC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_22:
    // 0x802107B0: lhu         $t8, 0x28($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X28);
    // 0x802107B4: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x802107B8: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x802107BC: sh          $t8, 0x54($sp)
    MEM_H(0X54, ctx->r29) = ctx->r24;
    // 0x802107C0: lhu         $t9, 0x2A($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X2A);
    // 0x802107C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802107C8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802107CC: sh          $t9, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r25;
    // 0x802107D0: lhu         $t0, 0x2C($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X2C);
    // 0x802107D4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802107D8: jal         0x8001DB04
    // 0x802107DC: sh          $t0, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r8;
    func_8001DB04_1E704(rdram, ctx);
        goto after_23;
    // 0x802107DC: sh          $t0, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r8;
    after_23:
    // 0x802107E0: lhu         $v1, 0x54($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X54);
    // 0x802107E4: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x802107E8: slti        $at, $v1, 0x2
    ctx->r1 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802107EC: bne         $at, $zero, L_80210800
    if (ctx->r1 != 0) {
        // 0x802107F0: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_80210800;
    }
    // 0x802107F0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x802107F4: slti        $at, $v1, 0x3FF
    ctx->r1 = SIGNED(ctx->r3) < 0X3FF ? 1 : 0;
    // 0x802107F8: bnel        $at, $zero, L_80210810
    if (ctx->r1 != 0) {
        // 0x802107FC: slti        $at, $v0, 0x100
        ctx->r1 = SIGNED(ctx->r2) < 0X100 ? 1 : 0;
            goto L_80210810;
    }
    goto skip_11;
    // 0x802107FC: slti        $at, $v0, 0x100
    ctx->r1 = SIGNED(ctx->r2) < 0X100 ? 1 : 0;
    skip_11:
L_80210800:
    // 0x80210800: sw          $zero, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = 0;
    // 0x80210804: b           L_80210EA0
    // 0x80210808: sw          $t1, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->r9;
        goto L_80210EA0;
    // 0x80210808: sw          $t1, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->r9;
    // 0x8021080C: slti        $at, $v0, 0x100
    ctx->r1 = SIGNED(ctx->r2) < 0X100 ? 1 : 0;
L_80210810:
    // 0x80210810: beql        $at, $zero, L_80210840
    if (ctx->r1 == 0) {
        // 0x80210814: lwc1        $f6, 0x58($s0)
        ctx->f6.u32l = MEM_W(ctx->r16, 0X58);
            goto L_80210840;
    }
    goto skip_12;
    // 0x80210814: lwc1        $f6, 0x58($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X58);
    skip_12:
    // 0x80210818: lwc1        $f8, 0x58($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X58);
    // 0x8021081C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80210820: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80210824: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80210828: cvt.d.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f6.d = CVT_D_S(ctx->f8.fl);
    // 0x8021082C: add.d       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f4.d); 
    ctx->f10.d = ctx->f6.d + ctx->f4.d;
    // 0x80210830: cvt.s.d     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f8.fl = CVT_S_D(ctx->f10.d);
    // 0x80210834: b           L_80210EA0
    // 0x80210838: swc1        $f8, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f8.u32l;
        goto L_80210EA0;
    // 0x80210838: swc1        $f8, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f8.u32l;
    // 0x8021083C: lwc1        $f6, 0x58($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X58);
L_80210840:
    // 0x80210840: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80210844: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x80210848: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8021084C: cvt.d.s     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f4.d = CVT_D_S(ctx->f6.fl);
    // 0x80210850: sub.d       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f10.d); 
    ctx->f8.d = ctx->f4.d - ctx->f10.d;
    // 0x80210854: cvt.s.d     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f6.fl = CVT_S_D(ctx->f8.d);
    // 0x80210858: b           L_80210EA0
    // 0x8021085C: swc1        $f6, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f6.u32l;
        goto L_80210EA0;
    // 0x8021085C: swc1        $f6, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f6.u32l;
L_80210860:
    // 0x80210860: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80210864: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80210868: lwc1        $f4, 0x88($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X88);
    // 0x8021086C: lwc1        $f8, 0x84($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X84);
    // 0x80210870: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    // 0x80210874: mul.s       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80210878: lwc1        $f4, 0x80($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X80);
    // 0x8021087C: mul.s       $f6, $f8, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80210880: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x80210884: mul.s       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80210888: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x8021088C: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x80210890: jal         0x80012628
    // 0x80210894: nop

    func_80012628_13228(rdram, ctx);
        goto after_24;
    // 0x80210894: nop

    after_24:
    // 0x80210898: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8021089C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802108A0: lwc1        $f8, 0x88($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X88);
    // 0x802108A4: lwc1        $f4, 0x84($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X84);
    // 0x802108A8: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x802108AC: mul.s       $f6, $f8, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x802108B0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802108B4: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    // 0x802108B8: mul.s       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x802108BC: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x802108C0: lwc1        $f6, 0x80($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X80);
    // 0x802108C4: add.s       $f8, $f10, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x802108C8: mul.s       $f4, $f6, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x802108CC: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x802108D0: add.s       $f10, $f4, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x802108D4: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x802108D8: jal         0x80012518
    // 0x802108DC: nop

    func_80012518_13118(rdram, ctx);
        goto after_25;
    // 0x802108DC: nop

    after_25:
    // 0x802108E0: lw          $t2, 0x6C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X6C);
    // 0x802108E4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x802108E8: ldc1        $f4, 0x77A0($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, 0X77A0);
    // 0x802108EC: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x802108F0: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x802108F4: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x802108F8: cvt.d.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.d = CVT_D_W(ctx->f8.u32l);
    // 0x802108FC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80210900: lui         $at, 0x3F90
    ctx->r1 = S32(0X3F90 << 16);
    // 0x80210904: mul.d       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f4.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f4.d);
    // 0x80210908: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8021090C: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80210910: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80210914: mul.d       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = MUL_D(ctx->f10.d, ctx->f8.d);
    // 0x80210918: ldc1        $f8, 0x77A8($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, 0X77A8);
    // 0x8021091C: mul.d       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f4.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f4.d);
    // 0x80210920: add.d       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = ctx->f10.d + ctx->f8.d;
    // 0x80210924: jal         0x800417F0
    // 0x80210928: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    __sinf_recomp(rdram, ctx);
        goto after_26;
    // 0x80210928: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    after_26:
    // 0x8021092C: lui         $at, 0x4010
    ctx->r1 = S32(0X4010 << 16);
    // 0x80210930: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80210934: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80210938: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x8021093C: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80210940: mul.d       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f10.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f10.d);
    // 0x80210944: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80210948: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8021094C: lwc1        $f10, 0x58($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X58);
    // 0x80210950: lui         $at, 0x4014
    ctx->r1 = S32(0X4014 << 16);
    // 0x80210954: mul.d       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f4.d = MUL_D(ctx->f8.d, ctx->f6.d);
    // 0x80210958: cvt.d.s     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f8.d = CVT_D_S(ctx->f10.fl);
    // 0x8021095C: add.d       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f8.d + ctx->f4.d;
    // 0x80210960: lwc1        $f4, 0x4C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x80210964: cvt.s.d     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f10.fl = CVT_S_D(ctx->f6.d);
    // 0x80210968: swc1        $f10, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f10.u32l;
    // 0x8021096C: lwc1        $f8, 0x88($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X88);
    // 0x80210970: lwc1        $f6, 0x84($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X84);
    // 0x80210974: lwc1        $f10, 0x50($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X50);
    // 0x80210978: sub.s       $f12, $f8, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x8021097C: lwc1        $f4, 0x54($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X54);
    // 0x80210980: lwc1        $f8, 0x80($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X80);
    // 0x80210984: sub.s       $f14, $f6, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x80210988: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x8021098C: sub.s       $f16, $f8, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x80210990: mul.s       $f10, $f14, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80210994: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x80210998: mul.s       $f4, $f16, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x8021099C: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x802109A0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802109A4: add.s       $f0, $f8, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x802109A8: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x802109AC: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x802109B0: c.lt.d      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.d < ctx->f10.d;
    // 0x802109B4: nop

    // 0x802109B8: bc1fl       L_80210EA4
    if (!c1cs) {
        // 0x802109BC: lwc1        $f6, 0x58($s0)
        ctx->f6.u32l = MEM_W(ctx->r16, 0X58);
            goto L_80210EA4;
    }
    goto skip_13;
    // 0x802109BC: lwc1        $f6, 0x58($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X58);
    skip_13:
    // 0x802109C0: jal         0x80038B98
    // 0x802109C4: ori         $a0, $zero, 0x8133
    ctx->r4 = 0 | 0X8133;
    func_80038B98_39798(rdram, ctx);
        goto after_27;
    // 0x802109C4: ori         $a0, $zero, 0x8133
    ctx->r4 = 0 | 0X8133;
    after_27:
    // 0x802109C8: jal         0x80038B98
    // 0x802109CC: addiu       $a0, $zero, 0x28C
    ctx->r4 = ADD32(0, 0X28C);
    func_80038B98_39798(rdram, ctx);
        goto after_28;
    // 0x802109CC: addiu       $a0, $zero, 0x28C
    ctx->r4 = ADD32(0, 0X28C);
    after_28:
    // 0x802109D0: addiu       $t3, $zero, 0x6
    ctx->r11 = ADD32(0, 0X6);
    // 0x802109D4: b           L_80210EA0
    // 0x802109D8: sw          $t3, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->r11;
        goto L_80210EA0;
    // 0x802109D8: sw          $t3, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->r11;
L_802109DC:
    // 0x802109DC: lwc1        $f8, 0x88($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X88);
    // 0x802109E0: lwc1        $f4, 0x4C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x802109E4: lwc1        $f6, 0x84($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X84);
    // 0x802109E8: lwc1        $f10, 0x50($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X50);
    // 0x802109EC: sub.s       $f12, $f8, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x802109F0: lwc1        $f4, 0x54($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X54);
    // 0x802109F4: lwc1        $f8, 0x80($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X80);
    // 0x802109F8: sub.s       $f14, $f6, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x802109FC: mul.s       $f10, $f12, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x80210A00: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80210A04: sub.s       $f16, $f8, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x80210A08: mul.s       $f8, $f14, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80210A0C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80210A10: lui         $at, 0x4008
    ctx->r1 = S32(0X4008 << 16);
    // 0x80210A14: mtc1        $at, $f15
    ctx->f_odd[(15 - 1) * 2] = ctx->r1;
    // 0x80210A18: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80210A1C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80210A20: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80210A24: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x80210A28: mul.s       $f10, $f16, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x80210A2C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80210A30: add.s       $f0, $f4, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x80210A34: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x80210A38: cvt.d.s     $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.d = CVT_D_S(ctx->f0.fl);
    // 0x80210A3C: c.lt.d      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.d < ctx->f8.d;
    // 0x80210A40: nop

    // 0x80210A44: bc1tl       L_80210A60
    if (c1cs) {
        // 0x80210A48: sw          $t4, 0x78($s0)
        MEM_W(0X78, ctx->r16) = ctx->r12;
            goto L_80210A60;
    }
    goto skip_14;
    // 0x80210A48: sw          $t4, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r12;
    skip_14:
    // 0x80210A4C: c.lt.s      $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f6.fl < ctx->f18.fl;
    // 0x80210A50: nop

    // 0x80210A54: bc1fl       L_80210A64
    if (!c1cs) {
        // 0x80210A58: c.lt.d      $f14, $f2
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.d < ctx->f2.d;
            goto L_80210A64;
    }
    goto skip_15;
    // 0x80210A58: c.lt.d      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.d < ctx->f2.d;
    skip_15:
    // 0x80210A5C: sw          $t4, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r12;
L_80210A60:
    // 0x80210A60: c.lt.d      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.d < ctx->f2.d;
L_80210A64:
    // 0x80210A64: nop

    // 0x80210A68: bc1fl       L_80210A80
    if (!c1cs) {
        // 0x80210A6C: div.d       $f4, $f2, $f14
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f14.d); 
    ctx->f4.d = DIV_D(ctx->f2.d, ctx->f14.d);
            goto L_80210A80;
    }
    goto skip_16;
    // 0x80210A6C: div.d       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f14.d); 
    ctx->f4.d = DIV_D(ctx->f2.d, ctx->f14.d);
    skip_16:
    // 0x80210A70: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80210A74: b           L_80210A88
    // 0x80210A78: lw          $a0, 0x34($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X34);
        goto L_80210A88;
    // 0x80210A78: lw          $a0, 0x34($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X34);
    // 0x80210A7C: div.d       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f14.d); 
    ctx->f4.d = DIV_D(ctx->f2.d, ctx->f14.d);
L_80210A80:
    // 0x80210A80: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    // 0x80210A84: lw          $a0, 0x34($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X34);
L_80210A88:
    // 0x80210A88: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x80210A8C: jal         0x8020FE60
    // 0x80210A90: swc1        $f12, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f12.u32l;
    func_8020FE60_66EE10(rdram, ctx);
        goto after_29;
    // 0x80210A90: swc1        $f12, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f12.u32l;
    after_29:
    // 0x80210A94: lwc1        $f12, 0x58($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80210A98: lw          $a0, 0x38($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X38);
    // 0x80210A9C: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x80210AA0: jal         0x8020FC3C
    // 0x80210AA4: nop

    func_8020FC3C_66EBEC(rdram, ctx);
        goto after_30;
    // 0x80210AA4: nop

    after_30:
    // 0x80210AA8: lwc1        $f12, 0x58($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80210AAC: lwc1        $f10, 0x7C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x80210AB0: lwc1        $f6, 0x78($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80210AB4: addiu       $t5, $sp, 0x5C
    ctx->r13 = ADD32(ctx->r29, 0X5C);
    // 0x80210AB8: mul.s       $f8, $f10, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x80210ABC: lwc1        $f10, 0x74($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80210AC0: addiu       $t6, $sp, 0x60
    ctx->r14 = ADD32(ctx->r29, 0X60);
    // 0x80210AC4: mul.s       $f4, $f6, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x80210AC8: lwc1        $f6, 0x88($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X88);
    // 0x80210ACC: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    // 0x80210AD0: swc1        $f8, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f8.u32l;
    // 0x80210AD4: mul.s       $f8, $f10, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x80210AD8: swc1        $f4, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f4.u32l;
    // 0x80210ADC: swc1        $f8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f8.u32l;
    // 0x80210AE0: lwc1        $f4, 0x4C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x80210AE4: lwc1        $f8, 0x84($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X84);
    // 0x80210AE8: sub.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x80210AEC: swc1        $f10, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f10.u32l;
    // 0x80210AF0: lwc1        $f6, 0x50($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X50);
    // 0x80210AF4: lwc1        $f10, 0x80($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X80);
    // 0x80210AF8: sub.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x80210AFC: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
    // 0x80210B00: lwc1        $f8, 0x54($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X54);
    // 0x80210B04: sub.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x80210B08: swc1        $f6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f6.u32l;
    // 0x80210B0C: lhu         $a2, 0x2C($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X2C);
    // 0x80210B10: lhu         $a1, 0x2A($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X2A);
    // 0x80210B14: lhu         $a0, 0x28($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X28);
    // 0x80210B18: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x80210B1C: jal         0x80033A3C
    // 0x80210B20: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    func_80033A3C_3463C(rdram, ctx);
        goto after_31;
    // 0x80210B20: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_31:
    // 0x80210B24: lhu         $t7, 0x28($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X28);
    // 0x80210B28: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x80210B2C: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x80210B30: sh          $t7, 0x54($sp)
    MEM_H(0X54, ctx->r29) = ctx->r15;
    // 0x80210B34: lhu         $t8, 0x2A($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X2A);
    // 0x80210B38: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80210B3C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80210B40: sh          $t8, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r24;
    // 0x80210B44: lhu         $t9, 0x2C($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X2C);
    // 0x80210B48: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80210B4C: jal         0x8001DB04
    // 0x80210B50: sh          $t9, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r25;
    func_8001DB04_1E704(rdram, ctx);
        goto after_32;
    // 0x80210B50: sh          $t9, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r25;
    after_32:
    // 0x80210B54: lhu         $t0, 0x54($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X54);
    // 0x80210B58: lhu         $t2, 0x50($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X50);
    // 0x80210B5C: lhu         $t4, 0x52($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X52);
    // 0x80210B60: andi        $t1, $t0, 0x3FF
    ctx->r9 = ctx->r8 & 0X3FF;
    // 0x80210B64: slti        $at, $t1, 0x4
    ctx->r1 = SIGNED(ctx->r9) < 0X4 ? 1 : 0;
    // 0x80210B68: andi        $t3, $t2, 0x3FF
    ctx->r11 = ctx->r10 & 0X3FF;
    // 0x80210B6C: andi        $t5, $t4, 0x3FF
    ctx->r13 = ctx->r12 & 0X3FF;
    // 0x80210B70: sh          $t5, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r13;
    // 0x80210B74: sh          $t3, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r11;
    // 0x80210B78: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x80210B7C: bne         $at, $zero, L_80210B8C
    if (ctx->r1 != 0) {
        // 0x80210B80: sh          $t1, 0x54($sp)
        MEM_H(0X54, ctx->r29) = ctx->r9;
            goto L_80210B8C;
    }
    // 0x80210B80: sh          $t1, 0x54($sp)
    MEM_H(0X54, ctx->r29) = ctx->r9;
    // 0x80210B84: slti        $at, $t1, 0x3FD
    ctx->r1 = SIGNED(ctx->r9) < 0X3FD ? 1 : 0;
    // 0x80210B88: bne         $at, $zero, L_80210BA0
    if (ctx->r1 != 0) {
        // 0x80210B8C: lui         $at, 0x4010
        ctx->r1 = S32(0X4010 << 16);
            goto L_80210BA0;
    }
L_80210B8C:
    // 0x80210B8C: lui         $at, 0x4010
    ctx->r1 = S32(0X4010 << 16);
    // 0x80210B90: mtc1        $at, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r1;
    // 0x80210B94: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80210B98: b           L_80210BF4
    // 0x80210B9C: lhu         $v0, 0x50($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X50);
        goto L_80210BF4;
    // 0x80210B9C: lhu         $v0, 0x50($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X50);
L_80210BA0:
    // 0x80210BA0: slti        $at, $v0, 0x200
    ctx->r1 = SIGNED(ctx->r2) < 0X200 ? 1 : 0;
    // 0x80210BA4: beql        $at, $zero, L_80210BD4
    if (ctx->r1 == 0) {
        // 0x80210BA8: lwc1        $f4, 0x58($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0X58);
            goto L_80210BD4;
    }
    goto skip_17;
    // 0x80210BA8: lwc1        $f4, 0x58($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X58);
    skip_17:
    // 0x80210BAC: lwc1        $f4, 0x58($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X58);
    // 0x80210BB0: lui         $at, 0x4010
    ctx->r1 = S32(0X4010 << 16);
    // 0x80210BB4: mtc1        $at, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r1;
    // 0x80210BB8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80210BBC: cvt.d.s     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f10.d = CVT_D_S(ctx->f4.fl);
    // 0x80210BC0: add.d       $f8, $f10, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = ctx->f10.d + ctx->f2.d;
    // 0x80210BC4: cvt.s.d     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f6.fl = CVT_S_D(ctx->f8.d);
    // 0x80210BC8: b           L_80210BF0
    // 0x80210BCC: swc1        $f6, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f6.u32l;
        goto L_80210BF0;
    // 0x80210BCC: swc1        $f6, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f6.u32l;
    // 0x80210BD0: lwc1        $f4, 0x58($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X58);
L_80210BD4:
    // 0x80210BD4: lui         $at, 0x4010
    ctx->r1 = S32(0X4010 << 16);
    // 0x80210BD8: mtc1        $at, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r1;
    // 0x80210BDC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80210BE0: cvt.d.s     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f10.d = CVT_D_S(ctx->f4.fl);
    // 0x80210BE4: sub.d       $f8, $f10, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = ctx->f10.d - ctx->f2.d;
    // 0x80210BE8: cvt.s.d     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f6.fl = CVT_S_D(ctx->f8.d);
    // 0x80210BEC: swc1        $f6, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f6.u32l;
L_80210BF0:
    // 0x80210BF0: lhu         $v0, 0x50($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X50);
L_80210BF4:
    // 0x80210BF4: slti        $at, $v0, 0x4
    ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x80210BF8: bne         $at, $zero, L_80210EA0
    if (ctx->r1 != 0) {
        // 0x80210BFC: slti        $at, $v0, 0x3FD
        ctx->r1 = SIGNED(ctx->r2) < 0X3FD ? 1 : 0;
            goto L_80210EA0;
    }
    // 0x80210BFC: slti        $at, $v0, 0x3FD
    ctx->r1 = SIGNED(ctx->r2) < 0X3FD ? 1 : 0;
    // 0x80210C00: beq         $at, $zero, L_80210EA0
    if (ctx->r1 == 0) {
        // 0x80210C04: slti        $at, $v0, 0x200
        ctx->r1 = SIGNED(ctx->r2) < 0X200 ? 1 : 0;
            goto L_80210EA0;
    }
    // 0x80210C04: slti        $at, $v0, 0x200
    ctx->r1 = SIGNED(ctx->r2) < 0X200 ? 1 : 0;
    // 0x80210C08: beql        $at, $zero, L_80210C2C
    if (ctx->r1 == 0) {
        // 0x80210C0C: lwc1        $f4, 0x5C($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0X5C);
            goto L_80210C2C;
    }
    goto skip_18;
    // 0x80210C0C: lwc1        $f4, 0x5C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X5C);
    skip_18:
    // 0x80210C10: lwc1        $f4, 0x5C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x80210C14: cvt.d.s     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f10.d = CVT_D_S(ctx->f4.fl);
    // 0x80210C18: sub.d       $f8, $f10, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = ctx->f10.d - ctx->f2.d;
    // 0x80210C1C: cvt.s.d     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f6.fl = CVT_S_D(ctx->f8.d);
    // 0x80210C20: b           L_80210EA0
    // 0x80210C24: swc1        $f6, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f6.u32l;
        goto L_80210EA0;
    // 0x80210C24: swc1        $f6, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f6.u32l;
    // 0x80210C28: lwc1        $f4, 0x5C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X5C);
L_80210C2C:
    // 0x80210C2C: cvt.d.s     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f10.d = CVT_D_S(ctx->f4.fl);
    // 0x80210C30: add.d       $f8, $f10, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = ctx->f10.d + ctx->f2.d;
    // 0x80210C34: cvt.s.d     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f6.fl = CVT_S_D(ctx->f8.d);
    // 0x80210C38: b           L_80210EA0
    // 0x80210C3C: swc1        $f6, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f6.u32l;
        goto L_80210EA0;
    // 0x80210C3C: swc1        $f6, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f6.u32l;
L_80210C40:
    // 0x80210C40: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80210C44: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80210C48: lwc1        $f4, 0x88($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X88);
    // 0x80210C4C: lwc1        $f8, 0x84($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X84);
    // 0x80210C50: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    // 0x80210C54: mul.s       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80210C58: lwc1        $f4, 0x80($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X80);
    // 0x80210C5C: mul.s       $f6, $f8, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80210C60: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x80210C64: mul.s       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80210C68: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x80210C6C: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x80210C70: jal         0x80012628
    // 0x80210C74: nop

    func_80012628_13228(rdram, ctx);
        goto after_33;
    // 0x80210C74: nop

    after_33:
    // 0x80210C78: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80210C7C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80210C80: lwc1        $f8, 0x88($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X88);
    // 0x80210C84: lwc1        $f4, 0x84($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X84);
    // 0x80210C88: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80210C8C: mul.s       $f6, $f8, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80210C90: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80210C94: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    // 0x80210C98: mul.s       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80210C9C: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x80210CA0: lwc1        $f6, 0x80($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X80);
    // 0x80210CA4: add.s       $f8, $f10, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x80210CA8: mul.s       $f4, $f6, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80210CAC: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x80210CB0: add.s       $f10, $f4, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x80210CB4: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x80210CB8: jal         0x80012518
    // 0x80210CBC: nop

    func_80012518_13118(rdram, ctx);
        goto after_34;
    // 0x80210CBC: nop

    after_34:
    // 0x80210CC0: lwc1        $f8, 0x88($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X88);
    // 0x80210CC4: lwc1        $f6, 0x4C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x80210CC8: lwc1        $f10, 0x84($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X84);
    // 0x80210CCC: addiu       $t6, $sp, 0x5C
    ctx->r14 = ADD32(ctx->r29, 0X5C);
    // 0x80210CD0: sub.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x80210CD4: addiu       $t7, $sp, 0x60
    ctx->r15 = ADD32(ctx->r29, 0X60);
    // 0x80210CD8: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    // 0x80210CDC: swc1        $f4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f4.u32l;
    // 0x80210CE0: lwc1        $f8, 0x50($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X50);
    // 0x80210CE4: lwc1        $f4, 0x80($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X80);
    // 0x80210CE8: sub.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x80210CEC: swc1        $f6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f6.u32l;
    // 0x80210CF0: lwc1        $f10, 0x54($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X54);
    // 0x80210CF4: sub.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x80210CF8: swc1        $f8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f8.u32l;
    // 0x80210CFC: lhu         $a2, 0x2C($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X2C);
    // 0x80210D00: lhu         $a1, 0x2A($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X2A);
    // 0x80210D04: lhu         $a0, 0x28($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X28);
    // 0x80210D08: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80210D0C: jal         0x80033A3C
    // 0x80210D10: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_80033A3C_3463C(rdram, ctx);
        goto after_35;
    // 0x80210D10: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_35:
    // 0x80210D14: lhu         $t8, 0x28($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X28);
    // 0x80210D18: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x80210D1C: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x80210D20: sh          $t8, 0x54($sp)
    MEM_H(0X54, ctx->r29) = ctx->r24;
    // 0x80210D24: lhu         $t9, 0x2A($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X2A);
    // 0x80210D28: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80210D2C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80210D30: sh          $t9, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r25;
    // 0x80210D34: lhu         $t0, 0x2C($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X2C);
    // 0x80210D38: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80210D3C: jal         0x8001DB04
    // 0x80210D40: sh          $t0, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r8;
    func_8001DB04_1E704(rdram, ctx);
        goto after_36;
    // 0x80210D40: sh          $t0, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r8;
    after_36:
    // 0x80210D44: lhu         $t1, 0x54($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X54);
    // 0x80210D48: lhu         $t3, 0x50($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X50);
    // 0x80210D4C: lhu         $t5, 0x52($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X52);
    // 0x80210D50: andi        $t2, $t1, 0x3FF
    ctx->r10 = ctx->r9 & 0X3FF;
    // 0x80210D54: slti        $at, $t2, 0x4
    ctx->r1 = SIGNED(ctx->r10) < 0X4 ? 1 : 0;
    // 0x80210D58: andi        $t4, $t3, 0x3FF
    ctx->r12 = ctx->r11 & 0X3FF;
    // 0x80210D5C: andi        $t6, $t5, 0x3FF
    ctx->r14 = ctx->r13 & 0X3FF;
    // 0x80210D60: sh          $t6, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r14;
    // 0x80210D64: sh          $t4, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r12;
    // 0x80210D68: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x80210D6C: bne         $at, $zero, L_80210D7C
    if (ctx->r1 != 0) {
        // 0x80210D70: sh          $t2, 0x54($sp)
        MEM_H(0X54, ctx->r29) = ctx->r10;
            goto L_80210D7C;
    }
    // 0x80210D70: sh          $t2, 0x54($sp)
    MEM_H(0X54, ctx->r29) = ctx->r10;
    // 0x80210D74: slti        $at, $t2, 0x3FD
    ctx->r1 = SIGNED(ctx->r10) < 0X3FD ? 1 : 0;
    // 0x80210D78: bne         $at, $zero, L_80210D90
    if (ctx->r1 != 0) {
        // 0x80210D7C: lui         $at, 0x4010
        ctx->r1 = S32(0X4010 << 16);
            goto L_80210D90;
    }
L_80210D7C:
    // 0x80210D7C: lui         $at, 0x4010
    ctx->r1 = S32(0X4010 << 16);
    // 0x80210D80: mtc1        $at, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r1;
    // 0x80210D84: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80210D88: b           L_80210DE4
    // 0x80210D8C: lhu         $v0, 0x50($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X50);
        goto L_80210DE4;
    // 0x80210D8C: lhu         $v0, 0x50($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X50);
L_80210D90:
    // 0x80210D90: slti        $at, $v0, 0x200
    ctx->r1 = SIGNED(ctx->r2) < 0X200 ? 1 : 0;
    // 0x80210D94: beql        $at, $zero, L_80210DC4
    if (ctx->r1 == 0) {
        // 0x80210D98: lwc1        $f6, 0x58($s0)
        ctx->f6.u32l = MEM_W(ctx->r16, 0X58);
            goto L_80210DC4;
    }
    goto skip_19;
    // 0x80210D98: lwc1        $f6, 0x58($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X58);
    skip_19:
    // 0x80210D9C: lwc1        $f6, 0x58($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X58);
    // 0x80210DA0: lui         $at, 0x4010
    ctx->r1 = S32(0X4010 << 16);
    // 0x80210DA4: mtc1        $at, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r1;
    // 0x80210DA8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80210DAC: cvt.d.s     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f4.d = CVT_D_S(ctx->f6.fl);
    // 0x80210DB0: add.d       $f10, $f4, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f2.d); 
    ctx->f10.d = ctx->f4.d + ctx->f2.d;
    // 0x80210DB4: cvt.s.d     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f8.fl = CVT_S_D(ctx->f10.d);
    // 0x80210DB8: b           L_80210DE0
    // 0x80210DBC: swc1        $f8, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f8.u32l;
        goto L_80210DE0;
    // 0x80210DBC: swc1        $f8, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f8.u32l;
    // 0x80210DC0: lwc1        $f6, 0x58($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X58);
L_80210DC4:
    // 0x80210DC4: lui         $at, 0x4010
    ctx->r1 = S32(0X4010 << 16);
    // 0x80210DC8: mtc1        $at, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r1;
    // 0x80210DCC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80210DD0: cvt.d.s     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f4.d = CVT_D_S(ctx->f6.fl);
    // 0x80210DD4: sub.d       $f10, $f4, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f2.d); 
    ctx->f10.d = ctx->f4.d - ctx->f2.d;
    // 0x80210DD8: cvt.s.d     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f8.fl = CVT_S_D(ctx->f10.d);
    // 0x80210DDC: swc1        $f8, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f8.u32l;
L_80210DE0:
    // 0x80210DE0: lhu         $v0, 0x50($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X50);
L_80210DE4:
    // 0x80210DE4: slti        $at, $v0, 0x4
    ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x80210DE8: bne         $at, $zero, L_80210E2C
    if (ctx->r1 != 0) {
        // 0x80210DEC: slti        $at, $v0, 0x3FD
        ctx->r1 = SIGNED(ctx->r2) < 0X3FD ? 1 : 0;
            goto L_80210E2C;
    }
    // 0x80210DEC: slti        $at, $v0, 0x3FD
    ctx->r1 = SIGNED(ctx->r2) < 0X3FD ? 1 : 0;
    // 0x80210DF0: beq         $at, $zero, L_80210E2C
    if (ctx->r1 == 0) {
        // 0x80210DF4: slti        $at, $v0, 0x200
        ctx->r1 = SIGNED(ctx->r2) < 0X200 ? 1 : 0;
            goto L_80210E2C;
    }
    // 0x80210DF4: slti        $at, $v0, 0x200
    ctx->r1 = SIGNED(ctx->r2) < 0X200 ? 1 : 0;
    // 0x80210DF8: beql        $at, $zero, L_80210E1C
    if (ctx->r1 == 0) {
        // 0x80210DFC: lwc1        $f6, 0x5C($s0)
        ctx->f6.u32l = MEM_W(ctx->r16, 0X5C);
            goto L_80210E1C;
    }
    goto skip_20;
    // 0x80210DFC: lwc1        $f6, 0x5C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X5C);
    skip_20:
    // 0x80210E00: lwc1        $f6, 0x5C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x80210E04: cvt.d.s     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f4.d = CVT_D_S(ctx->f6.fl);
    // 0x80210E08: sub.d       $f10, $f4, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f2.d); 
    ctx->f10.d = ctx->f4.d - ctx->f2.d;
    // 0x80210E0C: cvt.s.d     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f8.fl = CVT_S_D(ctx->f10.d);
    // 0x80210E10: b           L_80210E2C
    // 0x80210E14: swc1        $f8, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f8.u32l;
        goto L_80210E2C;
    // 0x80210E14: swc1        $f8, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f8.u32l;
    // 0x80210E18: lwc1        $f6, 0x5C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X5C);
L_80210E1C:
    // 0x80210E1C: cvt.d.s     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f4.d = CVT_D_S(ctx->f6.fl);
    // 0x80210E20: add.d       $f10, $f4, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f2.d); 
    ctx->f10.d = ctx->f4.d + ctx->f2.d;
    // 0x80210E24: cvt.s.d     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f8.fl = CVT_S_D(ctx->f10.d);
    // 0x80210E28: swc1        $f8, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f8.u32l;
L_80210E2C:
    // 0x80210E2C: lwc1        $f6, 0x88($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X88);
    // 0x80210E30: lwc1        $f4, 0x4C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x80210E34: lwc1        $f10, 0x84($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X84);
    // 0x80210E38: lwc1        $f8, 0x50($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X50);
    // 0x80210E3C: sub.s       $f12, $f6, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x80210E40: lwc1        $f4, 0x54($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X54);
    // 0x80210E44: lwc1        $f6, 0x80($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X80);
    // 0x80210E48: sub.s       $f14, $f10, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x80210E4C: mul.s       $f10, $f12, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x80210E50: lui         $at, 0x4014
    ctx->r1 = S32(0X4014 << 16);
    // 0x80210E54: sub.s       $f16, $f6, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x80210E58: mul.s       $f8, $f14, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80210E5C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80210E60: mul.s       $f4, $f16, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x80210E64: add.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x80210E68: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80210E6C: add.s       $f0, $f6, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x80210E70: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x80210E74: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x80210E78: c.lt.d      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.d < ctx->f8.d;
    // 0x80210E7C: nop

    // 0x80210E80: bc1fl       L_80210EA4
    if (!c1cs) {
        // 0x80210E84: lwc1        $f6, 0x58($s0)
        ctx->f6.u32l = MEM_W(ctx->r16, 0X58);
            goto L_80210EA4;
    }
    goto skip_21;
    // 0x80210E84: lwc1        $f6, 0x58($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X58);
    skip_21:
    // 0x80210E88: jal         0x80038B98
    // 0x80210E8C: ori         $a0, $zero, 0x8133
    ctx->r4 = 0 | 0X8133;
    func_80038B98_39798(rdram, ctx);
        goto after_37;
    // 0x80210E8C: ori         $a0, $zero, 0x8133
    ctx->r4 = 0 | 0X8133;
    after_37:
    // 0x80210E90: jal         0x80038B98
    // 0x80210E94: addiu       $a0, $zero, 0x28C
    ctx->r4 = ADD32(0, 0X28C);
    func_80038B98_39798(rdram, ctx);
        goto after_38;
    // 0x80210E94: addiu       $a0, $zero, 0x28C
    ctx->r4 = ADD32(0, 0X28C);
    after_38:
    // 0x80210E98: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x80210E9C: sw          $t7, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->r15;
L_80210EA0:
    // 0x80210EA0: lwc1        $f6, 0x58($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X58);
L_80210EA4:
    // 0x80210EA4: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80210EA8: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x80210EAC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80210EB0: cvt.d.s     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f4.d = CVT_D_S(ctx->f6.fl);
    // 0x80210EB4: lwc1        $f6, 0x5C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x80210EB8: add.d       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = ctx->f4.d + ctx->f0.d;
    // 0x80210EBC: addiu       $t4, $sp, 0x78
    ctx->r12 = ADD32(ctx->r29, 0X78);
    // 0x80210EC0: addiu       $t5, $sp, 0x74
    ctx->r13 = ADD32(ctx->r29, 0X74);
    // 0x80210EC4: cvt.d.s     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f4.d = CVT_D_S(ctx->f6.fl);
    // 0x80210EC8: trunc.w.d   $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.u32l = TRUNC_W_D(ctx->f10.d);
    // 0x80210ECC: lwc1        $f6, 0x60($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X60);
    // 0x80210ED0: addiu       $a3, $sp, 0x7C
    ctx->r7 = ADD32(ctx->r29, 0X7C);
    // 0x80210ED4: add.d       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = ctx->f4.d + ctx->f0.d;
    // 0x80210ED8: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x80210EDC: cvt.d.s     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f4.d = CVT_D_S(ctx->f6.fl);
    // 0x80210EE0: trunc.w.d   $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.u32l = TRUNC_W_D(ctx->f10.d);
    // 0x80210EE4: andi        $t9, $v0, 0x3FF
    ctx->r25 = ctx->r2 & 0X3FF;
    // 0x80210EE8: sh          $t9, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r25;
    // 0x80210EEC: add.d       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = ctx->f4.d + ctx->f0.d;
    // 0x80210EF0: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x80210EF4: andi        $a0, $t9, 0xFFFF
    ctx->r4 = ctx->r25 & 0XFFFF;
    // 0x80210EF8: trunc.w.d   $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.u32l = TRUNC_W_D(ctx->f10.d);
    // 0x80210EFC: andi        $t1, $v0, 0x3FF
    ctx->r9 = ctx->r2 & 0X3FF;
    // 0x80210F00: sh          $t1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r9;
    // 0x80210F04: andi        $a1, $t1, 0xFFFF
    ctx->r5 = ctx->r9 & 0XFFFF;
    // 0x80210F08: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x80210F0C: nop

    // 0x80210F10: andi        $t3, $v0, 0x3FF
    ctx->r11 = ctx->r2 & 0X3FF;
    // 0x80210F14: sh          $t3, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r11;
    // 0x80210F18: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x80210F1C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80210F20: jal         0x80033898
    // 0x80210F24: andi        $a2, $t3, 0xFFFF
    ctx->r6 = ctx->r11 & 0XFFFF;
    func_80033898_34498(rdram, ctx);
        goto after_39;
    // 0x80210F24: andi        $a2, $t3, 0xFFFF
    ctx->r6 = ctx->r11 & 0XFFFF;
    after_39:
    // 0x80210F28: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x80210F2C: lwc1        $f4, 0x7C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x80210F30: lwc1        $f8, 0xC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC);
    // 0x80210F34: add.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x80210F38: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
    // 0x80210F3C: lwc1        $f6, 0x78($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80210F40: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x80210F44: add.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x80210F48: swc1        $f4, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f4.u32l;
    // 0x80210F4C: lwc1        $f8, 0x74($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80210F50: add.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x80210F54: swc1        $f6, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f6.u32l;
    // 0x80210F58: jal         0x80011760
    // 0x80210F5C: lw          $a0, 0x90($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X90);
    func_80011760_12360(rdram, ctx);
        goto after_40;
    // 0x80210F5C: lw          $a0, 0x90($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X90);
    after_40:
    // 0x80210F60: lw          $t6, 0x6C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X6C);
    // 0x80210F64: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80210F68: sw          $t7, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r15;
L_80210F6C:
    // 0x80210F6C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80210F70: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80210F74: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    // 0x80210F78: jr          $ra
    // 0x80210F7C: nop

    TRACE_RETURN()
    return;
    // 0x80210F7C: nop

;}
RECOMP_FUNC void func_8020F3B8_66E368(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F3B8: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8020F3BC: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8020F3C0: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8020F3C4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8020F3C8: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x8020F3CC: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8020F3D0: addiu       $a1, $a1, 0x17A0
    ctx->r5 = ADD32(ctx->r5, 0X17A0);
    // 0x8020F3D4: jal         0x80034E08
    // 0x8020F3D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x8020F3D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8020F3DC: bne         $v0, $zero, L_8020F3EC
    if (ctx->r2 != 0) {
        // 0x8020F3E0: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_8020F3EC;
    }
    // 0x8020F3E0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x8020F3E4: b           L_8020F5D0
    // 0x8020F3E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8020F5D0;
    // 0x8020F3E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8020F3EC:
    // 0x8020F3EC: jal         0x8020F118
    // 0x8020F3F0: nop

    func_8020F118_66E0C8(rdram, ctx);
        goto after_1;
    // 0x8020F3F0: nop

    after_1:
    // 0x8020F3F4: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x8020F3F8: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x8020F3FC: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8020F400: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8020F404: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8020F408: sb          $t6, -0x5236($at)
    MEM_B(-0X5236, ctx->r1) = ctx->r14;
    // 0x8020F40C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8020F410: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8020F414: jal         0x80035EEC
    // 0x8020F418: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80035EEC_36AEC(rdram, ctx);
        goto after_2;
    // 0x8020F418: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x8020F41C: bne         $v0, $zero, L_8020F434
    if (ctx->r2 != 0) {
        // 0x8020F420: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8020F434;
    }
    // 0x8020F420: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8020F424: jal         0x8020F13C
    // 0x8020F428: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8020F13C_66E0EC(rdram, ctx);
        goto after_3;
    // 0x8020F428: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x8020F42C: b           L_8020F5D0
    // 0x8020F430: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8020F5D0;
    // 0x8020F430: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8020F434:
    // 0x8020F434: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x8020F438: addiu       $t9, $t9, 0x6A48
    ctx->r25 = ADD32(ctx->r25, 0X6A48);
    // 0x8020F43C: lui         $at, 0x5000
    ctx->r1 = S32(0X5000 << 16);
    // 0x8020F440: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x8020F444: addu        $t0, $t9, $at
    ctx->r8 = ADD32(ctx->r25, ctx->r1);
    // 0x8020F448: sb          $t8, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r24;
    // 0x8020F44C: sw          $t0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r8;
    // 0x8020F450: sb          $zero, 0x5($v1)
    MEM_B(0X5, ctx->r3) = 0;
    // 0x8020F454: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8020F458: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8020F45C: jal         0x80035EEC
    // 0x8020F460: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80035EEC_36AEC(rdram, ctx);
        goto after_4;
    // 0x8020F460: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x8020F464: bne         $v0, $zero, L_8020F47C
    if (ctx->r2 != 0) {
        // 0x8020F468: addiu       $t1, $zero, 0x2
        ctx->r9 = ADD32(0, 0X2);
            goto L_8020F47C;
    }
    // 0x8020F468: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x8020F46C: jal         0x8020F13C
    // 0x8020F470: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8020F13C_66E0EC(rdram, ctx);
        goto after_5;
    // 0x8020F470: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_5:
    // 0x8020F474: b           L_8020F5D0
    // 0x8020F478: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8020F5D0;
    // 0x8020F478: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8020F47C:
    // 0x8020F47C: lui         $t2, 0x8021
    ctx->r10 = S32(0X8021 << 16);
    // 0x8020F480: addiu       $t2, $t2, 0x6A40
    ctx->r10 = ADD32(ctx->r10, 0X6A40);
    // 0x8020F484: lui         $at, 0x3000
    ctx->r1 = S32(0X3000 << 16);
    // 0x8020F488: addu        $t3, $t2, $at
    ctx->r11 = ADD32(ctx->r10, ctx->r1);
    // 0x8020F48C: sb          $t1, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r9;
    // 0x8020F490: sw          $t3, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r11;
    // 0x8020F494: beq         $s0, $zero, L_8020F4B0
    if (ctx->r16 == 0) {
        // 0x8020F498: sb          $zero, 0x5($v0)
        MEM_B(0X5, ctx->r2) = 0;
            goto L_8020F4B0;
    }
    // 0x8020F498: sb          $zero, 0x5($v0)
    MEM_B(0X5, ctx->r2) = 0;
    // 0x8020F49C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8020F4A0: beq         $s0, $at, L_8020F4E0
    if (ctx->r16 == ctx->r1) {
        // 0x8020F4A4: addiu       $t6, $zero, 0x177
        ctx->r14 = ADD32(0, 0X177);
            goto L_8020F4E0;
    }
    // 0x8020F4A4: addiu       $t6, $zero, 0x177
    ctx->r14 = ADD32(0, 0X177);
    // 0x8020F4A8: b           L_8020F500
    // 0x8020F4AC: addiu       $s0, $s1, 0x5C
    ctx->r16 = ADD32(ctx->r17, 0X5C);
        goto L_8020F500;
    // 0x8020F4AC: addiu       $s0, $s1, 0x5C
    ctx->r16 = ADD32(ctx->r17, 0X5C);
L_8020F4B0:
    // 0x8020F4B0: lui         $at, 0xC2F0
    ctx->r1 = S32(0XC2F0 << 16);
    // 0x8020F4B4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020F4B8: addiu       $s0, $s1, 0x5C
    ctx->r16 = ADD32(ctx->r17, 0X5C);
    // 0x8020F4BC: lui         $at, 0xC396
    ctx->r1 = S32(0XC396 << 16);
    // 0x8020F4C0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8020F4C4: addiu       $t4, $zero, 0x138
    ctx->r12 = ADD32(0, 0X138);
    // 0x8020F4C8: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x8020F4CC: sw          $t4, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r12;
    // 0x8020F4D0: sw          $t5, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r13;
    // 0x8020F4D4: swc1        $f4, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f4.u32l;
    // 0x8020F4D8: b           L_8020F500
    // 0x8020F4DC: swc1        $f6, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f6.u32l;
        goto L_8020F500;
    // 0x8020F4DC: swc1        $f6, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f6.u32l;
L_8020F4E0:
    // 0x8020F4E0: addiu       $s0, $s1, 0x5C
    ctx->r16 = ADD32(ctx->r17, 0X5C);
    // 0x8020F4E4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8020F4E8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8020F4EC: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
    // 0x8020F4F0: sw          $t6, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r14;
    // 0x8020F4F4: sw          $t7, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r15;
    // 0x8020F4F8: swc1        $f8, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f8.u32l;
    // 0x8020F4FC: swc1        $f10, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f10.u32l;
L_8020F500:
    // 0x8020F500: lw          $a0, 0x34($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X34);
    // 0x8020F504: lw          $a1, 0x38($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X38);
    // 0x8020F508: lw          $a2, 0x3C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X3C);
    // 0x8020F50C: addiu       $t8, $sp, 0x44
    ctx->r24 = ADD32(ctx->r29, 0X44);
    // 0x8020F510: addiu       $t9, $sp, 0x40
    ctx->r25 = ADD32(ctx->r29, 0X40);
    // 0x8020F514: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x8020F518: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8020F51C: jal         0x8020F734
    // 0x8020F520: addiu       $a3, $sp, 0x48
    ctx->r7 = ADD32(ctx->r29, 0X48);
    func_8020F734_66E6E4(rdram, ctx);
        goto after_6;
    // 0x8020F520: addiu       $a3, $sp, 0x48
    ctx->r7 = ADD32(ctx->r29, 0X48);
    after_6:
    // 0x8020F524: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8020F528: sw          $t0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r8;
    // 0x8020F52C: jal         0x8020E588
    // 0x8020F530: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8020E588_66D538(rdram, ctx);
        goto after_7;
    // 0x8020F530: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_7:
    // 0x8020F534: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x8020F538: lwc1        $f16, 0x48($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8020F53C: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x8020F540: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x8020F544: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8020F548: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8020F54C: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x8020F550: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020F554: mul.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x8020F558: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8020F55C: lw          $a2, 0x20($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X20);
    // 0x8020F560: mul.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f0.d);
    // 0x8020F564: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x8020F568: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x8020F56C: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x8020F570: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x8020F574: jal         0x8020E300
    // 0x8020F578: nop

    func_8020E300_66D2B0(rdram, ctx);
        goto after_8;
    // 0x8020F578: nop

    after_8:
    // 0x8020F57C: lwc1        $f4, 0x38($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X38);
    // 0x8020F580: lw          $a3, 0x34($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X34);
    // 0x8020F584: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8020F588: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8020F58C: lwc1        $f6, 0x3C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x8020F590: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8020F594: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8020F598: jal         0x8020E930
    // 0x8020F59C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_8020E930_66D8E0(rdram, ctx);
        goto after_9;
    // 0x8020F59C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_9:
    // 0x8020F5A0: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x8020F5A4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8020F5A8: jal         0x800119D4
    // 0x8020F5AC: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_800119D4_125D4(rdram, ctx);
        goto after_10;
    // 0x8020F5AC: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_10:
    // 0x8020F5B0: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x8020F5B4: sw          $zero, 0x18($s0)
    MEM_W(0X18, ctx->r16) = 0;
    // 0x8020F5B8: jal         0x8020DDDC
    // 0x8020F5BC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8020DDDC_66CD8C(rdram, ctx);
        goto after_11;
    // 0x8020F5BC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_11:
    // 0x8020F5C0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020F5C4: jal         0x8020DD88
    // 0x8020F5C8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8020DD88_66CD38(rdram, ctx);
        goto after_12;
    // 0x8020F5C8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_12:
    // 0x8020F5CC: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_8020F5D0:
    // 0x8020F5D0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8020F5D4: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8020F5D8: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8020F5DC: jr          $ra
    // 0x8020F5E0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x8020F5E0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_8020F640_66E5F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F640: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x8020F644: addiu       $t7, $t7, 0x6E3C
    ctx->r15 = ADD32(ctx->r15, 0X6E3C);
    // 0x8020F648: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x8020F64C: andi        $t8, $a0, 0xFF
    ctx->r24 = ctx->r4 & 0XFF;
    // 0x8020F650: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x8020F654: slti        $at, $t8, 0xF
    ctx->r1 = SIGNED(ctx->r24) < 0XF ? 1 : 0;
    // 0x8020F658: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8020F65C: bne         $at, $zero, L_8020F66C
    if (ctx->r1 != 0) {
        // 0x8020F660: lb          $v1, 0x1($v0)
        ctx->r3 = MEM_B(ctx->r2, 0X1);
            goto L_8020F66C;
    }
    // 0x8020F660: lb          $v1, 0x1($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X1);
    // 0x8020F664: jr          $ra
    // 0x8020F668: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x8020F668: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8020F66C:
    // 0x8020F66C: lb          $t9, 0x0($v0)
    ctx->r25 = MEM_B(ctx->r2, 0X0);
    // 0x8020F670: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x8020F674: sll         $t2, $v1, 2
    ctx->r10 = S32(ctx->r3 << 2);
    // 0x8020F678: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8020F67C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8020F680: lw          $t1, -0x3754($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X3754);
    // 0x8020F684: subu        $t2, $t2, $v1
    ctx->r10 = SUB32(ctx->r10, ctx->r3);
    // 0x8020F688: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8020F68C: bne         $t1, $zero, L_8020F69C
    if (ctx->r9 != 0) {
        // 0x8020F690: lui         $t3, 0x8021
        ctx->r11 = S32(0X8021 << 16);
            goto L_8020F69C;
    }
    // 0x8020F690: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x8020F694: jr          $ra
    // 0x8020F698: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x8020F698: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8020F69C:
    // 0x8020F69C: addiu       $t3, $t3, 0x6BF0
    ctx->r11 = ADD32(ctx->r11, 0X6BF0);
    // 0x8020F6A0: addu        $a0, $t2, $t3
    ctx->r4 = ADD32(ctx->r10, ctx->r11);
    // 0x8020F6A4: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8020F6A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8020F6AC: swc1        $f4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f4.u32l;
    // 0x8020F6B0: lwc1        $f6, 0x4($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8020F6B4: swc1        $f6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f6.u32l;
    // 0x8020F6B8: lw          $t4, 0x10($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X10);
    // 0x8020F6BC: lwc1        $f8, 0x8($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8020F6C0: swc1        $f8, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f8.u32l;
    // 0x8020F6C4: jr          $ra
    // 0x8020F6C8: nop

    TRACE_RETURN()
    return;
    // 0x8020F6C8: nop

;}
RECOMP_FUNC void func_80213988_672938(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80213988: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8021398C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80213990: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80213994: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80213998: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8021399C: jal         0x802126F8
    // 0x802139A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_802126F8_6716A8(rdram, ctx);
        goto after_0;
    // 0x802139A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x802139A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802139A8: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    // 0x802139AC: jal         0x802126F8
    // 0x802139B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_802126F8_6716A8(rdram, ctx);
        goto after_1;
    // 0x802139B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x802139B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802139B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802139BC: jal         0x802126F8
    // 0x802139C0: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    func_802126F8_6716A8(rdram, ctx);
        goto after_2;
    // 0x802139C0: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    after_2:
    // 0x802139C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802139C8: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    // 0x802139CC: jal         0x802126F8
    // 0x802139D0: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    func_802126F8_6716A8(rdram, ctx);
        goto after_3;
    // 0x802139D0: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    after_3:
    // 0x802139D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802139D8: addiu       $a1, $zero, 0xC0
    ctx->r5 = ADD32(0, 0XC0);
    // 0x802139DC: jal         0x8021296C
    // 0x802139E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8021296C_67191C(rdram, ctx);
        goto after_4;
    // 0x802139E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x802139E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802139E8: addiu       $a1, $zero, 0xC0
    ctx->r5 = ADD32(0, 0XC0);
    // 0x802139EC: jal         0x80212B44
    // 0x802139F0: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    func_80212B44_671AF4(rdram, ctx);
        goto after_5;
    // 0x802139F0: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    after_5:
    // 0x802139F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802139F8: addiu       $a1, $zero, 0xC0
    ctx->r5 = ADD32(0, 0XC0);
    // 0x802139FC: jal         0x80212DF4
    // 0x80213A00: addiu       $a2, $zero, 0x98
    ctx->r6 = ADD32(0, 0X98);
    func_80212DF4_671DA4(rdram, ctx);
        goto after_6;
    // 0x80213A00: addiu       $a2, $zero, 0x98
    ctx->r6 = ADD32(0, 0X98);
    after_6:
    // 0x80213A04: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80213A08: lw          $t6, -0x3964($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3964);
    // 0x80213A0C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80213A10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80213A14: bne         $t6, $at, L_80213A24
    if (ctx->r14 != ctx->r1) {
        // 0x80213A18: addiu       $a1, $zero, 0x4
        ctx->r5 = ADD32(0, 0X4);
            goto L_80213A24;
    }
    // 0x80213A18: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80213A1C: jal         0x8021302C
    // 0x80213A20: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_8021302C_671FDC(rdram, ctx);
        goto after_7;
    // 0x80213A20: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_7:
L_80213A24:
    // 0x80213A24: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x80213A28: lw          $t7, -0x3960($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3960);
    // 0x80213A2C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80213A30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80213A34: bne         $t7, $at, L_80213A44
    if (ctx->r15 != ctx->r1) {
        // 0x80213A38: addiu       $a1, $zero, 0x64
        ctx->r5 = ADD32(0, 0X64);
            goto L_80213A44;
    }
    // 0x80213A38: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x80213A3C: jal         0x802131A0
    // 0x80213A40: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_802131A0_672150(rdram, ctx);
        goto after_8;
    // 0x80213A40: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_8:
L_80213A44:
    // 0x80213A44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80213A48: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80213A4C: jal         0x802132C8
    // 0x80213A50: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_802132C8_672278(rdram, ctx);
        goto after_9;
    // 0x80213A50: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_9:
    // 0x80213A54: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x80213A58: lw          $t8, -0x3958($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3958);
    // 0x80213A5C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80213A60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80213A64: bne         $t8, $at, L_80213A74
    if (ctx->r24 != ctx->r1) {
        // 0x80213A68: addiu       $a1, $zero, 0x64
        ctx->r5 = ADD32(0, 0X64);
            goto L_80213A74;
    }
    // 0x80213A68: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x80213A6C: jal         0x80213424
    // 0x80213A70: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_80213424_6723D4(rdram, ctx);
        goto after_10;
    // 0x80213A70: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_10:
L_80213A74:
    // 0x80213A74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80213A78: addiu       $a1, $zero, 0xC6
    ctx->r5 = ADD32(0, 0XC6);
    // 0x80213A7C: jal         0x80213550
    // 0x80213A80: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    func_80213550_672500(rdram, ctx);
        goto after_11;
    // 0x80213A80: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    after_11:
    // 0x80213A84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80213A88: addiu       $a1, $zero, 0xC6
    ctx->r5 = ADD32(0, 0XC6);
    // 0x80213A8C: jal         0x802135B8
    // 0x80213A90: addiu       $a2, $zero, 0x38
    ctx->r6 = ADD32(0, 0X38);
    func_802135B8_672568(rdram, ctx);
        goto after_12;
    // 0x80213A90: addiu       $a2, $zero, 0x38
    ctx->r6 = ADD32(0, 0X38);
    after_12:
    // 0x80213A94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80213A98: addiu       $a1, $zero, 0xC4
    ctx->r5 = ADD32(0, 0XC4);
    // 0x80213A9C: jal         0x8021386C
    // 0x80213AA0: addiu       $a2, $zero, 0xA0
    ctx->r6 = ADD32(0, 0XA0);
    func_8021386C_67281C(rdram, ctx);
        goto after_13;
    // 0x80213AA0: addiu       $a2, $zero, 0xA0
    ctx->r6 = ADD32(0, 0XA0);
    after_13:
    // 0x80213AA4: jal         0x800105AC
    // 0x80213AA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800105AC_111AC(rdram, ctx);
        goto after_14;
    // 0x80213AA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x80213AAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80213AB0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80213AB4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80213AB8: jr          $ra
    // 0x80213ABC: nop

    TRACE_RETURN()
    return;
    // 0x80213ABC: nop

    // 0x80213AC0: jr          $ra
    // 0x80213AC4: nop

    TRACE_RETURN()
    return;
    // 0x80213AC4: nop

;}
RECOMP_FUNC void func_802113C8_670378(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802113C8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802113CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802113D0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802113D4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802113D8: jal         0x80210F80
    // 0x802113DC: lw          $a0, 0x68($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X68);
    func_80210F80_66FF30(rdram, ctx);
        goto after_0;
    // 0x802113DC: lw          $a0, 0x68($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X68);
    after_0:
    // 0x802113E0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802113E4: bnel        $v0, $at, L_80211418
    if (ctx->r2 != ctx->r1) {
        // 0x802113E8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80211418;
    }
    goto skip_0;
    // 0x802113E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802113EC: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x802113F0: addiu       $v0, $v0, 0x5C
    ctx->r2 = ADD32(ctx->r2, 0X5C);
    // 0x802113F4: lw          $a0, 0x8($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X8);
    // 0x802113F8: jal         0x802111C4
    // 0x802113FC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_802111C4_670174(rdram, ctx);
        goto after_1;
    // 0x802113FC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x80211400: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x80211404: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80211408: addiu       $a0, $a0, 0x12C0
    ctx->r4 = ADD32(ctx->r4, 0X12C0);
    // 0x8021140C: jal         0x8003521C
    // 0x80211410: sw          $zero, 0x18($v0)
    MEM_W(0X18, ctx->r2) = 0;
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x80211410: sw          $zero, 0x18($v0)
    MEM_W(0X18, ctx->r2) = 0;
    after_2:
    // 0x80211414: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80211418:
    // 0x80211418: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8021141C: jr          $ra
    // 0x80211420: nop

    TRACE_RETURN()
    return;
    // 0x80211420: nop

;}
RECOMP_FUNC void func_8021302C_671FDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021302C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80213030: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x80213034: lw          $t7, 0x7F54($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7F54);
    // 0x80213038: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8021303C: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x80213040: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x80213044: addiu       $t6, $zero, 0x38
    ctx->r14 = ADD32(0, 0X38);
    // 0x80213048: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8021304C: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x80213050: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x80213054: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80213058: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8021305C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80213060: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x80213064: jal         0x800106F0
    // 0x80213068: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    func_800106F0_112F0(rdram, ctx);
        goto after_0;
    // 0x80213068: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_0:
    // 0x8021306C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x80213070: lw          $t9, 0x7F64($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7F64);
    // 0x80213074: addiu       $t8, $zero, 0x38
    ctx->r24 = ADD32(0, 0X38);
    // 0x80213078: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8021307C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80213080: addiu       $a1, $s1, 0x20
    ctx->r5 = ADD32(ctx->r17, 0X20);
    // 0x80213084: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x80213088: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    // 0x8021308C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80213090: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80213094: jal         0x800106F0
    // 0x80213098: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    func_800106F0_112F0(rdram, ctx);
        goto after_1;
    // 0x80213098: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    after_1:
    // 0x8021309C: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x802130A0: lui         $a3, 0x8016
    ctx->r7 = S32(0X8016 << 16);
    // 0x802130A4: lw          $a3, -0x3954($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X3954);
    // 0x802130A8: addiu       $a2, $a2, 0x3
    ctx->r6 = ADD32(ctx->r6, 0X3);
    // 0x802130AC: sw          $a2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r6;
    // 0x802130B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802130B4: jal         0x80212470
    // 0x802130B8: addiu       $a1, $s1, 0x29
    ctx->r5 = ADD32(ctx->r17, 0X29);
    func_80212470_671420(rdram, ctx);
        goto after_2;
    // 0x802130B8: addiu       $a1, $s1, 0x29
    ctx->r5 = ADD32(ctx->r17, 0X29);
    after_2:
    // 0x802130BC: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x802130C0: addiu       $v0, $v0, -0x39F8
    ctx->r2 = ADD32(ctx->r2, -0X39F8);
    // 0x802130C4: lw          $t0, 0xC4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0XC4);
    // 0x802130C8: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x802130CC: beql        $t0, $zero, L_80213150
    if (ctx->r8 == 0) {
        // 0x802130D0: lw          $t7, 0xB4($v0)
        ctx->r15 = MEM_W(ctx->r2, 0XB4);
            goto L_80213150;
    }
    goto skip_0;
    // 0x802130D0: lw          $t7, 0xB4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XB4);
    skip_0:
    // 0x802130D4: lw          $t1, 0xD4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0XD4);
    // 0x802130D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802130DC: addiu       $a1, $s1, 0x40
    ctx->r5 = ADD32(ctx->r17, 0X40);
    // 0x802130E0: beq         $t1, $zero, L_80213124
    if (ctx->r9 == 0) {
        // 0x802130E4: addiu       $a3, $zero, 0x18
        ctx->r7 = ADD32(0, 0X18);
            goto L_80213124;
    }
    // 0x802130E4: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    // 0x802130E8: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x802130EC: lw          $t3, 0x7F74($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7F74);
    // 0x802130F0: addiu       $t2, $zero, 0x18
    ctx->r10 = ADD32(0, 0X18);
    // 0x802130F4: addiu       $t4, $zero, 0x18
    ctx->r12 = ADD32(0, 0X18);
    // 0x802130F8: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x802130FC: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80213100: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80213104: addiu       $a1, $s1, 0x40
    ctx->r5 = ADD32(ctx->r17, 0X40);
    // 0x80213108: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    // 0x8021310C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80213110: jal         0x800106F0
    // 0x80213114: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    func_800106F0_112F0(rdram, ctx);
        goto after_3;
    // 0x80213114: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    after_3:
    // 0x80213118: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8021311C: b           L_8021314C
    // 0x80213120: addiu       $v0, $v0, -0x39F8
    ctx->r2 = ADD32(ctx->r2, -0X39F8);
        goto L_8021314C;
    // 0x80213120: addiu       $v0, $v0, -0x39F8
    ctx->r2 = ADD32(ctx->r2, -0X39F8);
L_80213124:
    // 0x80213124: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x80213128: lw          $t6, 0x7F74($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7F74);
    // 0x8021312C: addiu       $t5, $zero, 0x18
    ctx->r13 = ADD32(0, 0X18);
    // 0x80213130: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80213134: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80213138: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8021313C: jal         0x800106F0
    // 0x80213140: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    func_800106F0_112F0(rdram, ctx);
        goto after_4;
    // 0x80213140: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    after_4:
    // 0x80213144: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x80213148: addiu       $v0, $v0, -0x39F8
    ctx->r2 = ADD32(ctx->r2, -0X39F8);
L_8021314C:
    // 0x8021314C: lw          $t7, 0xB4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XB4);
L_80213150:
    // 0x80213150: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80213154: addiu       $a1, $s1, 0x34
    ctx->r5 = ADD32(ctx->r17, 0X34);
    // 0x80213158: beq         $t7, $zero, L_8021318C
    if (ctx->r15 == 0) {
        // 0x8021315C: lw          $a2, 0x40($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X40);
            goto L_8021318C;
    }
    // 0x8021315C: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x80213160: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x80213164: lw          $t9, 0x7F70($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7F70);
    // 0x80213168: addiu       $t8, $zero, 0x18
    ctx->r24 = ADD32(0, 0X18);
    // 0x8021316C: addiu       $t0, $zero, 0x18
    ctx->r8 = ADD32(0, 0X18);
    // 0x80213170: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x80213174: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80213178: addiu       $a2, $a2, 0x1E
    ctx->r6 = ADD32(ctx->r6, 0X1E);
    // 0x8021317C: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    // 0x80213180: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80213184: jal         0x800106F0
    // 0x80213188: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    func_800106F0_112F0(rdram, ctx);
        goto after_5;
    // 0x80213188: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    after_5:
L_8021318C:
    // 0x8021318C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80213190: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x80213194: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x80213198: jr          $ra
    // 0x8021319C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8021319C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8021551C_6744CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021551C: jr          $ra
    // 0x80215520: sb          $zero, 0xA0($a0)
    MEM_B(0XA0, ctx->r4) = 0;
    TRACE_RETURN()
    return;
    // 0x80215520: sb          $zero, 0xA0($a0)
    MEM_B(0XA0, ctx->r4) = 0;
;}
RECOMP_FUNC void func_8020FA90_66EA40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020FA90: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8020FA94: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8020FA98: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8020FA9C: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x8020FAA0: lw          $v0, 0x8C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8C);
    // 0x8020FAA4: addiu       $s0, $a0, 0x5C
    ctx->r16 = ADD32(ctx->r4, 0X5C);
    // 0x8020FAA8: beq         $v0, $zero, L_8020FBDC
    if (ctx->r2 == 0) {
        // 0x8020FAAC: addiu       $v1, $v0, 0x5C
        ctx->r3 = ADD32(ctx->r2, 0X5C);
            goto L_8020FBDC;
    }
    // 0x8020FAAC: addiu       $v1, $v0, 0x5C
    ctx->r3 = ADD32(ctx->r2, 0X5C);
    // 0x8020FAB0: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x8020FAB4: lwc1        $f6, 0x1C($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x8020FAB8: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8020FABC: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x8020FAC0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8020FAC4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8020FAC8: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8020FACC: mul.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f0.d);
    // 0x8020FAD0: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x8020FAD4: swc1        $f18, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f18.u32l;
    // 0x8020FAD8: lwc1        $f6, 0x20($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X20);
    // 0x8020FADC: lwc1        $f4, 0x20($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X20);
    // 0x8020FAE0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8020FAE4: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8020FAE8: mul.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f0.d);
    // 0x8020FAEC: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x8020FAF0: swc1        $f18, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f18.u32l;
    // 0x8020FAF4: lwc1        $f6, 0x24($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X24);
    // 0x8020FAF8: lwc1        $f4, 0x24($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X24);
    // 0x8020FAFC: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x8020FB00: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8020FB04: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8020FB08: mul.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f0.d);
    // 0x8020FB0C: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x8020FB10: jal         0x80011760
    // 0x8020FB14: swc1        $f18, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f18.u32l;
    func_80011760_12360(rdram, ctx);
        goto after_0;
    // 0x8020FB14: swc1        $f18, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x8020FB18: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x8020FB1C: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8020FB20: lwc1        $f16, 0x50($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8020FB24: addiu       $t6, $sp, 0x50
    ctx->r14 = ADD32(ctx->r29, 0X50);
    // 0x8020FB28: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8020FB2C: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8020FB30: addiu       $t7, $sp, 0x4C
    ctx->r15 = ADD32(ctx->r29, 0X4C);
    // 0x8020FB34: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x8020FB38: swc1        $f8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f8.u32l;
    // 0x8020FB3C: lwc1        $f10, 0x20($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X20);
    // 0x8020FB40: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8020FB44: swc1        $f18, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f18.u32l;
    // 0x8020FB48: lwc1        $f4, 0x24($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X24);
    // 0x8020FB4C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8020FB50: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    // 0x8020FB54: lhu         $a2, 0x2C($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X2C);
    // 0x8020FB58: lhu         $a1, 0x2A($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X2A);
    // 0x8020FB5C: lhu         $a0, 0x28($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X28);
    // 0x8020FB60: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8020FB64: jal         0x80033A3C
    // 0x8020FB68: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_80033A3C_3463C(rdram, ctx);
        goto after_1;
    // 0x8020FB68: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_1:
    // 0x8020FB6C: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8020FB70: lwc1        $f16, 0x50($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8020FB74: lwc1        $f18, 0x4C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8020FB78: sh          $zero, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = 0;
    // 0x8020FB7C: sh          $zero, 0x38($sp)
    MEM_H(0X38, ctx->r29) = 0;
    // 0x8020FB80: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x8020FB84: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x8020FB88: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8020FB8C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8020FB90: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8020FB94: sh          $zero, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = 0;
    // 0x8020FB98: swc1        $f10, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f10.u32l;
    // 0x8020FB9C: swc1        $f16, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f16.u32l;
    // 0x8020FBA0: jal         0x8001DB04
    // 0x8020FBA4: swc1        $f18, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f18.u32l;
    func_8001DB04_1E704(rdram, ctx);
        goto after_2;
    // 0x8020FBA4: swc1        $f18, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f18.u32l;
    after_2:
    // 0x8020FBA8: lhu         $t8, 0x14($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X14);
    // 0x8020FBAC: lhu         $t9, 0x3C($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X3C);
    // 0x8020FBB0: lhu         $t1, 0x16($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X16);
    // 0x8020FBB4: lhu         $t4, 0x18($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X18);
    // 0x8020FBB8: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8020FBBC: sh          $t0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r8;
    // 0x8020FBC0: lhu         $t2, 0x38($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X38);
    // 0x8020FBC4: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x8020FBC8: sh          $t3, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r11;
    // 0x8020FBCC: lhu         $t5, 0x3A($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X3A);
    // 0x8020FBD0: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x8020FBD4: sh          $t6, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r14;
    // 0x8020FBD8: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
L_8020FBDC:
    // 0x8020FBDC: jal         0x80011760
    // 0x8020FBE0: nop

    func_80011760_12360(rdram, ctx);
        goto after_3;
    // 0x8020FBE0: nop

    after_3:
    // 0x8020FBE4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8020FBE8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8020FBEC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x8020FBF0: jr          $ra
    // 0x8020FBF4: nop

    TRACE_RETURN()
    return;
    // 0x8020FBF4: nop

;}
RECOMP_FUNC void func_80216054_675004(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80216054: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80216058: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021605C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80216060: lw          $a0, 0x80($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X80);
    // 0x80216064: jal         0x800116AC
    // 0x80216068: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_800116AC_122AC(rdram, ctx);
        goto after_0;
    // 0x80216068: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x8021606C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80216070: jal         0x80034EF8
    // 0x80216074: sw          $v0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->r2;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_1;
    // 0x80216074: sw          $v0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->r2;
    after_1:
    // 0x80216078: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x8021607C: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x80216080: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80216084: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80216088: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8021608C: sb          $t6, -0x521F($at)
    MEM_B(-0X521F, ctx->r1) = ctx->r14;
    // 0x80216090: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80216094: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80216098: jr          $ra
    // 0x8021609C: nop

    TRACE_RETURN()
    return;
    // 0x8021609C: nop

;}
RECOMP_FUNC void func_80216750_675700(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80216750: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80216754: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80216758: addiu       $v0, $v0, 0x71D0
    ctx->r2 = ADD32(ctx->r2, 0X71D0);
    // 0x8021675C: addiu       $a1, $a1, 0x71C8
    ctx->r5 = ADD32(ctx->r5, 0X71C8);
    // 0x80216760: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_80216764:
    // 0x80216764: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80216768: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x8021676C: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x80216770: beq         $t6, $t7, L_80216780
    if (ctx->r14 == ctx->r15) {
        // 0x80216774: nop
    
            goto L_80216780;
    }
    // 0x80216774: nop

    // 0x80216778: jr          $ra
    // 0x8021677C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x8021677C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80216780:
    // 0x80216780: bne         $a1, $v0, L_80216764
    if (ctx->r5 != ctx->r2) {
        // 0x80216784: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_80216764;
    }
    // 0x80216784: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80216788: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8021678C: jr          $ra
    // 0x80216790: nop

    TRACE_RETURN()
    return;
    // 0x80216790: nop

;}
RECOMP_FUNC void func_8020F618_66E5C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F618: slti        $at, $a0, 0xF
    ctx->r1 = SIGNED(ctx->r4) < 0XF ? 1 : 0;
    // 0x8020F61C: bne         $at, $zero, L_8020F62C
    if (ctx->r1 != 0) {
        // 0x8020F620: sll         $t6, $a0, 3
        ctx->r14 = S32(ctx->r4 << 3);
            goto L_8020F62C;
    }
    // 0x8020F620: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x8020F624: jr          $ra
    // 0x8020F628: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x8020F628: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8020F62C:
    // 0x8020F62C: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x8020F630: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8020F634: lbu         $v0, 0x6E3C($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X6E3C);
    // 0x8020F638: jr          $ra
    // 0x8020F63C: nop

    TRACE_RETURN()
    return;
    // 0x8020F63C: nop

;}
RECOMP_FUNC void func_8020EDE4_66DD94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020EDE4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8020EDE8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8020EDEC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8020EDF0: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8020EDF4: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8020EDF8: lw          $t6, 0x74($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X74);
    // 0x8020EDFC: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8020EE00: addiu       $s0, $a1, 0x5C
    ctx->r16 = ADD32(ctx->r5, 0X5C);
    // 0x8020EE04: bgez        $t6, L_8020EE34
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8020EE08: lui         $at, 0x2000
        ctx->r1 = S32(0X2000 << 16);
            goto L_8020EE34;
    }
    // 0x8020EE08: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x8020EE0C: addiu       $s0, $a0, 0x5C
    ctx->r16 = ADD32(ctx->r4, 0X5C);
    // 0x8020EE10: lw          $t7, 0x10($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X10);
    // 0x8020EE14: sw          $zero, 0x30($t7)
    MEM_W(0X30, ctx->r15) = 0;
    // 0x8020EE18: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x8020EE1C: beql        $a0, $zero, L_8020EEC0
    if (ctx->r4 == 0) {
        // 0x8020EE20: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_8020EEC0;
    }
    goto skip_0;
    // 0x8020EE20: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_0:
    // 0x8020EE24: jal         0x8003521C
    // 0x8020EE28: nop

    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x8020EE28: nop

    after_0:
    // 0x8020EE2C: b           L_8020EEC0
    // 0x8020EE30: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_8020EEC0;
    // 0x8020EE30: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8020EE34:
    // 0x8020EE34: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8020EE38: lw          $t9, 0x10($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X10);
    // 0x8020EE3C: addiu       $a0, $a0, 0x7E90
    ctx->r4 = ADD32(ctx->r4, 0X7E90);
    // 0x8020EE40: or          $t8, $a0, $at
    ctx->r24 = ctx->r4 | ctx->r1;
    // 0x8020EE44: jal         0x800108BC
    // 0x8020EE48: sw          $t8, 0x30($t9)
    MEM_W(0X30, ctx->r25) = ctx->r24;
    func_800108BC_114BC(rdram, ctx);
        goto after_1;
    // 0x8020EE48: sw          $t8, 0x30($t9)
    MEM_W(0X30, ctx->r25) = ctx->r24;
    after_1:
    // 0x8020EE4C: addiu       $t0, $zero, 0xF0
    ctx->r8 = ADD32(0, 0XF0);
    // 0x8020EE50: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x8020EE54: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8020EE58: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8020EE5C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8020EE60: lw          $t1, 0x18($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X18);
    // 0x8020EE64: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020EE68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8020EE6C: sll         $t2, $t1, 3
    ctx->r10 = S32(ctx->r9 << 3);
    // 0x8020EE70: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x8020EE74: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8020EE78: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x8020EE7C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8020EE80: jal         0x800108E4
    // 0x8020EE84: addiu       $a3, $zero, 0x140
    ctx->r7 = ADD32(0, 0X140);
    func_800108E4_114E4(rdram, ctx);
        goto after_2;
    // 0x8020EE84: addiu       $a3, $zero, 0x140
    ctx->r7 = ADD32(0, 0X140);
    after_2:
    // 0x8020EE88: lw          $t3, 0x10($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X10);
    // 0x8020EE8C: lui         $a2, 0x8FFF
    ctx->r6 = S32(0X8FFF << 16);
    // 0x8020EE90: ori         $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 | 0XFFFF;
    // 0x8020EE94: lw          $v1, 0x30($t3)
    ctx->r3 = MEM_W(ctx->r11, 0X30);
    // 0x8020EE98: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x8020EE9C: subu        $t5, $a2, $v1
    ctx->r13 = SUB32(ctx->r6, ctx->r3);
    // 0x8020EEA0: and         $t6, $t4, $t5
    ctx->r14 = ctx->r12 & ctx->r13;
    // 0x8020EEA4: and         $a1, $t6, $a2
    ctx->r5 = ctx->r14 & ctx->r6;
    // 0x8020EEA8: jal         0x80040620
    // 0x8020EEAC: and         $a0, $v1, $a2
    ctx->r4 = ctx->r3 & ctx->r6;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_3;
    // 0x8020EEAC: and         $a0, $v1, $a2
    ctx->r4 = ctx->r3 & ctx->r6;
    after_3:
    // 0x8020EEB0: lw          $t7, 0x18($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X18);
    // 0x8020EEB4: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x8020EEB8: sw          $t8, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r24;
    // 0x8020EEBC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8020EEC0:
    // 0x8020EEC0: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8020EEC4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8020EEC8: jr          $ra
    // 0x8020EECC: nop

    TRACE_RETURN()
    return;
    // 0x8020EECC: nop

;}
RECOMP_FUNC void func_80215A7C_674A2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80215A7C: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x80215A80: addiu       $v1, $v1, -0x3A38
    ctx->r3 = ADD32(ctx->r3, -0X3A38);
    // 0x80215A84: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80215A88: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80215A8C: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x80215A90: lui         $a1, 0x3
    ctx->r5 = S32(0X3 << 16);
    // 0x80215A94: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x80215A98: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80215A9C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80215AA0: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x80215AA4: addu        $v0, $t6, $a1
    ctx->r2 = ADD32(ctx->r14, ctx->r5);
    // 0x80215AA8: lbu         $t7, 0x2DE1($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X2DE1);
    // 0x80215AAC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80215AB0: bnel        $t0, $t7, L_80215AD4
    if (ctx->r8 != ctx->r15) {
        // 0x80215AB4: lhu         $t9, 0x307A($v0)
        ctx->r25 = MEM_HU(ctx->r2, 0X307A);
            goto L_80215AD4;
    }
    goto skip_0;
    // 0x80215AB4: lhu         $t9, 0x307A($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X307A);
    skip_0:
    // 0x80215AB8: sh          $zero, 0x88($a0)
    MEM_H(0X88, ctx->r4) = 0;
    // 0x80215ABC: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80215AC0: jal         0x8003521C
    // 0x80215AC4: addiu       $a0, $a0, 0x64F8
    ctx->r4 = ADD32(ctx->r4, 0X64F8);
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x80215AC4: addiu       $a0, $a0, 0x64F8
    ctx->r4 = ADD32(ctx->r4, 0X64F8);
    after_0:
    // 0x80215AC8: b           L_80216044
    // 0x80215ACC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_80216044;
    // 0x80215ACC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80215AD0: lhu         $t9, 0x307A($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X307A);
L_80215AD4:
    // 0x80215AD4: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x80215AD8: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    // 0x80215ADC: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x80215AE0: lw          $t2, 0x8C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X8C);
    // 0x80215AE4: addiu       $a3, $sp, 0x50
    ctx->r7 = ADD32(ctx->r29, 0X50);
    // 0x80215AE8: addiu       $s0, $s0, 0x5C
    ctx->r16 = ADD32(ctx->r16, 0X5C);
    // 0x80215AEC: bnel        $t9, $t2, L_80215B08
    if (ctx->r25 != ctx->r10) {
        // 0x80215AF0: sh          $t0, 0x34($s0)
        MEM_H(0X34, ctx->r16) = ctx->r8;
            goto L_80215B08;
    }
    goto skip_1;
    // 0x80215AF0: sh          $t0, 0x34($s0)
    MEM_H(0X34, ctx->r16) = ctx->r8;
    skip_1:
    // 0x80215AF4: lh          $t3, 0x34($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X34);
    // 0x80215AF8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80215AFC: b           L_80215B08
    // 0x80215B00: sh          $t4, 0x34($s0)
    MEM_H(0X34, ctx->r16) = ctx->r12;
        goto L_80215B08;
    // 0x80215B00: sh          $t4, 0x34($s0)
    MEM_H(0X34, ctx->r16) = ctx->r12;
    // 0x80215B04: sh          $t0, 0x34($s0)
    MEM_H(0X34, ctx->r16) = ctx->r8;
L_80215B08:
    // 0x80215B08: lbu         $v0, 0x2E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2E);
    // 0x80215B0C: beql        $v0, $zero, L_80215D44
    if (ctx->r2 == 0) {
        // 0x80215B10: lb          $t7, 0x37($s0)
        ctx->r15 = MEM_B(ctx->r16, 0X37);
            goto L_80215D44;
    }
    goto skip_2;
    // 0x80215B10: lb          $t7, 0x37($s0)
    ctx->r15 = MEM_B(ctx->r16, 0X37);
    skip_2:
    // 0x80215B14: beq         $v0, $t0, L_80215B34
    if (ctx->r2 == ctx->r8) {
        // 0x80215B18: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80215B34;
    }
    // 0x80215B18: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80215B1C: beq         $v0, $at, L_80215C2C
    if (ctx->r2 == ctx->r1) {
        // 0x80215B20: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80215C2C;
    }
    // 0x80215B20: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80215B24: beq         $v0, $at, L_80215D24
    if (ctx->r2 == ctx->r1) {
        // 0x80215B28: nop
    
            goto L_80215D24;
    }
    // 0x80215B28: nop

    // 0x80215B2C: b           L_8021603C
    // 0x80215B30: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
        goto L_8021603C;
    // 0x80215B30: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
L_80215B34:
    // 0x80215B34: jal         0x80214CBC
    // 0x80215B38: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    func_80214CBC_673C6C(rdram, ctx);
        goto after_1;
    // 0x80215B38: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    after_1:
    // 0x80215B3C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80215B40: beql        $v0, $at, L_8021603C
    if (ctx->r2 == ctx->r1) {
        // 0x80215B44: lw          $t6, 0x3C($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X3C);
            goto L_8021603C;
    }
    goto skip_3;
    // 0x80215B44: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    skip_3:
    // 0x80215B48: jal         0x80214C90
    // 0x80215B4C: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    func_80214C90_673C40(rdram, ctx);
        goto after_2;
    // 0x80215B4C: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    after_2:
    // 0x80215B50: lb          $v0, 0x38($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X38);
    // 0x80215B54: lh          $t5, 0x42($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X42);
    // 0x80215B58: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x80215B5C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80215B60: bne         $t5, $v0, L_80215BA0
    if (ctx->r13 != ctx->r2) {
        // 0x80215B64: addiu       $t1, $zero, -0x1
        ctx->r9 = ADD32(0, -0X1);
            goto L_80215BA0;
    }
    // 0x80215B64: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x80215B68: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x80215B6C: lh          $a3, 0x44($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X44);
    // 0x80215B70: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80215B74: lh          $t6, 0x40($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X40);
    // 0x80215B78: sll         $t8, $v0, 3
    ctx->r24 = S32(ctx->r2 << 3);
    // 0x80215B7C: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x80215B80: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x80215B84: lw          $t7, 0x3C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X3C);
    // 0x80215B88: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80215B8C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80215B90: jal         0x80214EB8
    // 0x80215B94: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    func_80214EB8_673E68(rdram, ctx);
        goto after_3;
    // 0x80215B94: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    after_3:
    // 0x80215B98: b           L_80215BC8
    // 0x80215B9C: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
        goto L_80215BC8;
    // 0x80215B9C: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
L_80215BA0:
    // 0x80215BA0: lh          $a3, 0x44($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X44);
    // 0x80215BA4: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x80215BA8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80215BAC: lw          $t2, 0x3C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X3C);
    // 0x80215BB0: sll         $t3, $v0, 3
    ctx->r11 = S32(ctx->r2 << 3);
    // 0x80215BB4: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80215BB8: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80215BBC: jal         0x80214EB8
    // 0x80215BC0: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    func_80214EB8_673E68(rdram, ctx);
        goto after_4;
    // 0x80215BC0: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    after_4:
    // 0x80215BC4: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
L_80215BC8:
    // 0x80215BC8: jal         0x80215524
    // 0x80215BCC: lb          $a1, 0x38($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X38);
    func_80215524_6744D4(rdram, ctx);
        goto after_5;
    // 0x80215BCC: lb          $a1, 0x38($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X38);
    after_5:
    // 0x80215BD0: jal         0x80214EA8
    // 0x80215BD4: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    func_80214EA8_673E58(rdram, ctx);
        goto after_6;
    // 0x80215BD4: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    after_6:
    // 0x80215BD8: jal         0x80214E38
    // 0x80215BDC: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    func_80214E38_673DE8(rdram, ctx);
        goto after_7;
    // 0x80215BDC: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    after_7:
    // 0x80215BE0: lb          $v0, 0x37($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X37);
    // 0x80215BE4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80215BE8: beq         $v0, $zero, L_80215C08
    if (ctx->r2 == 0) {
        // 0x80215BEC: nop
    
            goto L_80215C08;
    }
    // 0x80215BEC: nop

    // 0x80215BF0: beq         $v0, $at, L_80215C18
    if (ctx->r2 == ctx->r1) {
        // 0x80215BF4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80215C18;
    }
    // 0x80215BF4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80215BF8: beq         $v0, $at, L_80215C18
    if (ctx->r2 == ctx->r1) {
        // 0x80215BFC: nop
    
            goto L_80215C18;
    }
    // 0x80215BFC: nop

    // 0x80215C00: b           L_80215C24
    // 0x80215C04: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
        goto L_80215C24;
    // 0x80215C04: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
L_80215C08:
    // 0x80215C08: jal         0x80214CF0
    // 0x80215C0C: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    func_80214CF0_673CA0(rdram, ctx);
        goto after_8;
    // 0x80215C0C: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    after_8:
    // 0x80215C10: b           L_80215C24
    // 0x80215C14: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
        goto L_80215C24;
    // 0x80215C14: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
L_80215C18:
    // 0x80215C18: jal         0x80214D64
    // 0x80215C1C: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    func_80214D64_673D14(rdram, ctx);
        goto after_9;
    // 0x80215C1C: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    after_9:
    // 0x80215C20: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
L_80215C24:
    // 0x80215C24: b           L_80216038
    // 0x80215C28: sb          $t5, 0x2E($s0)
    MEM_B(0X2E, ctx->r16) = ctx->r13;
        goto L_80216038;
    // 0x80215C28: sb          $t5, 0x2E($s0)
    MEM_B(0X2E, ctx->r16) = ctx->r13;
L_80215C2C:
    // 0x80215C2C: jal         0x80214CBC
    // 0x80215C30: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    func_80214CBC_673C6C(rdram, ctx);
        goto after_10;
    // 0x80215C30: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    after_10:
    // 0x80215C34: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80215C38: beql        $v0, $at, L_8021603C
    if (ctx->r2 == ctx->r1) {
        // 0x80215C3C: lw          $t6, 0x3C($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X3C);
            goto L_8021603C;
    }
    goto skip_4;
    // 0x80215C3C: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    skip_4:
    // 0x80215C40: jal         0x80214C90
    // 0x80215C44: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    func_80214C90_673C40(rdram, ctx);
        goto after_11;
    // 0x80215C44: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    after_11:
    // 0x80215C48: lb          $v0, 0x38($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X38);
    // 0x80215C4C: lh          $t6, 0x42($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X42);
    // 0x80215C50: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x80215C54: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80215C58: bne         $t6, $v0, L_80215C98
    if (ctx->r14 != ctx->r2) {
        // 0x80215C5C: addiu       $t2, $zero, -0x1
        ctx->r10 = ADD32(0, -0X1);
            goto L_80215C98;
    }
    // 0x80215C5C: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x80215C60: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x80215C64: lh          $a3, 0x44($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X44);
    // 0x80215C68: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80215C6C: lh          $t7, 0x40($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X40);
    // 0x80215C70: sll         $t9, $v0, 3
    ctx->r25 = S32(ctx->r2 << 3);
    // 0x80215C74: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x80215C78: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80215C7C: lw          $t8, 0x3C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X3C);
    // 0x80215C80: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80215C84: addu        $t1, $t8, $t9
    ctx->r9 = ADD32(ctx->r24, ctx->r25);
    // 0x80215C88: jal         0x80214EB8
    // 0x80215C8C: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    func_80214EB8_673E68(rdram, ctx);
        goto after_12;
    // 0x80215C8C: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    after_12:
    // 0x80215C90: b           L_80215CC0
    // 0x80215C94: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
        goto L_80215CC0;
    // 0x80215C94: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
L_80215C98:
    // 0x80215C98: lh          $a3, 0x44($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X44);
    // 0x80215C9C: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x80215CA0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80215CA4: lw          $t3, 0x3C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X3C);
    // 0x80215CA8: sll         $t4, $v0, 3
    ctx->r12 = S32(ctx->r2 << 3);
    // 0x80215CAC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80215CB0: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x80215CB4: jal         0x80214EB8
    // 0x80215CB8: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    func_80214EB8_673E68(rdram, ctx);
        goto after_13;
    // 0x80215CB8: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    after_13:
    // 0x80215CBC: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
L_80215CC0:
    // 0x80215CC0: jal         0x80215524
    // 0x80215CC4: lb          $a1, 0x38($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X38);
    func_80215524_6744D4(rdram, ctx);
        goto after_14;
    // 0x80215CC4: lb          $a1, 0x38($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X38);
    after_14:
    // 0x80215CC8: jal         0x80214E98
    // 0x80215CCC: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    func_80214E98_673E48(rdram, ctx);
        goto after_15;
    // 0x80215CCC: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    after_15:
    // 0x80215CD0: jal         0x80214E68
    // 0x80215CD4: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    func_80214E68_673E18(rdram, ctx);
        goto after_16;
    // 0x80215CD4: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    after_16:
    // 0x80215CD8: lb          $v0, 0x37($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X37);
    // 0x80215CDC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80215CE0: beq         $v0, $zero, L_80215D00
    if (ctx->r2 == 0) {
        // 0x80215CE4: nop
    
            goto L_80215D00;
    }
    // 0x80215CE4: nop

    // 0x80215CE8: beq         $v0, $at, L_80215D10
    if (ctx->r2 == ctx->r1) {
        // 0x80215CEC: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80215D10;
    }
    // 0x80215CEC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80215CF0: beq         $v0, $at, L_80215D10
    if (ctx->r2 == ctx->r1) {
        // 0x80215CF4: nop
    
            goto L_80215D10;
    }
    // 0x80215CF4: nop

    // 0x80215CF8: b           L_80215D1C
    // 0x80215CFC: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
        goto L_80215D1C;
    // 0x80215CFC: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
L_80215D00:
    // 0x80215D00: jal         0x80214CF0
    // 0x80215D04: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    func_80214CF0_673CA0(rdram, ctx);
        goto after_17;
    // 0x80215D04: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    after_17:
    // 0x80215D08: b           L_80215D1C
    // 0x80215D0C: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
        goto L_80215D1C;
    // 0x80215D0C: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
L_80215D10:
    // 0x80215D10: jal         0x80214D64
    // 0x80215D14: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    func_80214D64_673D14(rdram, ctx);
        goto after_18;
    // 0x80215D14: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    after_18:
    // 0x80215D18: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
L_80215D1C:
    // 0x80215D1C: b           L_80216038
    // 0x80215D20: sb          $t6, 0x2E($s0)
    MEM_B(0X2E, ctx->r16) = ctx->r14;
        goto L_80216038;
    // 0x80215D20: sb          $t6, 0x2E($s0)
    MEM_B(0X2E, ctx->r16) = ctx->r14;
L_80215D24:
    // 0x80215D24: jal         0x80214CBC
    // 0x80215D28: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    func_80214CBC_673C6C(rdram, ctx);
        goto after_19;
    // 0x80215D28: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    after_19:
    // 0x80215D2C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80215D30: beql        $v0, $at, L_8021603C
    if (ctx->r2 == ctx->r1) {
        // 0x80215D34: lw          $t6, 0x3C($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X3C);
            goto L_8021603C;
    }
    goto skip_5;
    // 0x80215D34: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    skip_5:
    // 0x80215D38: b           L_80216038
    // 0x80215D3C: sb          $zero, 0x2E($s0)
    MEM_B(0X2E, ctx->r16) = 0;
        goto L_80216038;
    // 0x80215D3C: sb          $zero, 0x2E($s0)
    MEM_B(0X2E, ctx->r16) = 0;
    // 0x80215D40: lb          $t7, 0x37($s0)
    ctx->r15 = MEM_B(ctx->r16, 0X37);
L_80215D44:
    // 0x80215D44: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x80215D48: lui         $at, 0x403E
    ctx->r1 = S32(0X403E << 16);
    // 0x80215D4C: sw          $t7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r15;
    // 0x80215D50: addu        $t9, $t8, $a1
    ctx->r25 = ADD32(ctx->r24, ctx->r5);
    // 0x80215D54: lh          $t1, 0x307E($t9)
    ctx->r9 = MEM_H(ctx->r25, 0X307E);
    // 0x80215D58: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x80215D5C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80215D60: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x80215D64: lwc1        $f4, 0x48($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X48);
    // 0x80215D68: lui         $at, 0xC270
    ctx->r1 = S32(0XC270 << 16);
    // 0x80215D6C: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x80215D70: lwc1        $f8, 0x4C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x80215D74: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80215D78: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80215D7C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80215D80: div.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = DIV_D(ctx->f10.d, ctx->f0.d);
    // 0x80215D84: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80215D88: add.d       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f6.d + ctx->f16.d;
    // 0x80215D8C: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80215D90: swc1        $f4, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->f4.u32l;
    // 0x80215D94: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x80215D98: lwc1        $f2, 0x48($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X48);
    // 0x80215D9C: addu        $t3, $t2, $a1
    ctx->r11 = ADD32(ctx->r10, ctx->r5);
    // 0x80215DA0: lh          $t4, 0x3080($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X3080);
    // 0x80215DA4: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x80215DA8: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    // 0x80215DAC: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x80215DB0: nop

    // 0x80215DB4: cvt.d.w     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    ctx->f16.d = CVT_D_W(ctx->f6.u32l);
    // 0x80215DB8: div.d       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = DIV_D(ctx->f16.d, ctx->f0.d);
    // 0x80215DBC: add.d       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f10.d + ctx->f18.d;
    // 0x80215DC0: cvt.s.d     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f8.fl = CVT_S_D(ctx->f4.d);
    // 0x80215DC4: bc1f        L_80215DDC
    if (!c1cs) {
        // 0x80215DC8: swc1        $f8, 0x4C($s0)
        MEM_W(0X4C, ctx->r16) = ctx->f8.u32l;
            goto L_80215DDC;
    }
    // 0x80215DC8: swc1        $f8, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f8.u32l;
    // 0x80215DCC: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80215DD0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80215DD4: b           L_80215DF8
    // 0x80215DD8: swc1        $f12, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->f12.u32l;
        goto L_80215DF8;
    // 0x80215DD8: swc1        $f12, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->f12.u32l;
L_80215DDC:
    // 0x80215DDC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80215DE0: nop

    // 0x80215DE4: c.lt.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl < ctx->f2.fl;
    // 0x80215DE8: nop

    // 0x80215DEC: bc1fl       L_80215DFC
    if (!c1cs) {
        // 0x80215DF0: lwc1        $f0, 0x4C($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X4C);
            goto L_80215DFC;
    }
    goto skip_6;
    // 0x80215DF0: lwc1        $f0, 0x4C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4C);
    skip_6:
    // 0x80215DF4: swc1        $f14, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->f14.u32l;
L_80215DF8:
    // 0x80215DF8: lwc1        $f0, 0x4C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4C);
L_80215DFC:
    // 0x80215DFC: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x80215E00: nop

    // 0x80215E04: bc1fl       L_80215E18
    if (!c1cs) {
        // 0x80215E08: c.lt.s      $f14, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
            goto L_80215E18;
    }
    goto skip_7;
    // 0x80215E08: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    skip_7:
    // 0x80215E0C: b           L_80215E28
    // 0x80215E10: swc1        $f12, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f12.u32l;
        goto L_80215E28;
    // 0x80215E10: swc1        $f12, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f12.u32l;
    // 0x80215E14: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
L_80215E18:
    // 0x80215E18: nop

    // 0x80215E1C: bc1f        L_80215E28
    if (!c1cs) {
        // 0x80215E20: nop
    
            goto L_80215E28;
    }
    // 0x80215E20: nop

    // 0x80215E24: swc1        $f14, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f14.u32l;
L_80215E28:
    // 0x80215E28: jal         0x80215A10
    // 0x80215E2C: lb          $a0, 0x36($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X36);
    func_80215A10_6749C0(rdram, ctx);
        goto after_20;
    // 0x80215E2C: lb          $a0, 0x36($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X36);
    after_20:
    // 0x80215E30: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80215E34: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80215E38: lwc1        $f6, 0x4C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x80215E3C: lwc1        $f16, 0x48($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X48);
    // 0x80215E40: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x80215E44: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80215E48: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x80215E4C: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x80215E50: div.s       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80215E54: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x80215E58: neg.s       $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = -ctx->f2.fl;
    // 0x80215E5C: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80215E60: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x80215E64: jal         0x80012628
    // 0x80215E68: swc1        $f2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f2.u32l;
    func_80012628_13228(rdram, ctx);
        goto after_21;
    // 0x80215E68: swc1        $f2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f2.u32l;
    after_21:
    // 0x80215E6C: lwc1        $f2, 0x4C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80215E70: lwc1        $f8, 0x48($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X48);
    // 0x80215E74: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80215E78: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80215E7C: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80215E80: add.s       $f16, $f8, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x80215E84: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x80215E88: add.s       $f18, $f10, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x80215E8C: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x80215E90: sub.s       $f8, $f4, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f2.fl;
    // 0x80215E94: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x80215E98: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x80215E9C: jal         0x80012518
    // 0x80215EA0: nop

    func_80012518_13118(rdram, ctx);
        goto after_22;
    // 0x80215EA0: nop

    after_22:
    // 0x80215EA4: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80215EA8: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80215EAC: andi        $t6, $t5, 0x4000
    ctx->r14 = ctx->r13 & 0X4000;
    // 0x80215EB0: beq         $t6, $zero, L_80215F14
    if (ctx->r14 == 0) {
        // 0x80215EB4: andi        $t4, $t3, 0x8000
        ctx->r12 = ctx->r11 & 0X8000;
            goto L_80215F14;
    }
    // 0x80215EB4: andi        $t4, $t3, 0x8000
    ctx->r12 = ctx->r11 & 0X8000;
    // 0x80215EB8: lh          $t7, 0x34($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X34);
    // 0x80215EBC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80215EC0: bne         $a1, $t7, L_80215F14
    if (ctx->r5 != ctx->r15) {
        // 0x80215EC4: nop
    
            goto L_80215F14;
    }
    // 0x80215EC4: nop

    // 0x80215EC8: jal         0x80216648
    // 0x80215ECC: lh          $a0, 0x44($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X44);
    func_80216648_6755F8(rdram, ctx);
        goto after_23;
    // 0x80215ECC: lh          $a0, 0x44($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X44);
    after_23:
    // 0x80215ED0: lb          $t8, 0x38($s0)
    ctx->r24 = MEM_B(ctx->r16, 0X38);
    // 0x80215ED4: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x80215ED8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80215EDC: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80215EE0: sb          $t9, 0x38($s0)
    MEM_B(0X38, ctx->r16) = ctx->r25;
    // 0x80215EE4: lb          $t1, 0x38($s0)
    ctx->r9 = MEM_B(ctx->r16, 0X38);
    // 0x80215EE8: slt         $at, $v1, $t1
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80215EEC: beq         $at, $zero, L_80215EFC
    if (ctx->r1 == 0) {
        // 0x80215EF0: nop
    
            goto L_80215EFC;
    }
    // 0x80215EF0: nop

    // 0x80215EF4: b           L_80215F5C
    // 0x80215EF8: sb          $v1, 0x38($s0)
    MEM_B(0X38, ctx->r16) = ctx->r3;
        goto L_80215F5C;
    // 0x80215EF8: sb          $v1, 0x38($s0)
    MEM_B(0X38, ctx->r16) = ctx->r3;
L_80215EFC:
    // 0x80215EFC: jal         0x80214E68
    // 0x80215F00: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    func_80214E68_673E18(rdram, ctx);
        goto after_24;
    // 0x80215F00: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    after_24:
    // 0x80215F04: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x80215F08: sb          $t2, 0x2E($s0)
    MEM_B(0X2E, ctx->r16) = ctx->r10;
    // 0x80215F0C: b           L_80215F5C
    // 0x80215F10: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_80215F5C;
    // 0x80215F10: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_80215F14:
    // 0x80215F14: beq         $t4, $zero, L_80215F5C
    if (ctx->r12 == 0) {
        // 0x80215F18: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_80215F5C;
    }
    // 0x80215F18: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80215F1C: lh          $t5, 0x34($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X34);
    // 0x80215F20: bnel        $a1, $t5, L_80215F60
    if (ctx->r5 != ctx->r13) {
        // 0x80215F24: lw          $t1, 0x3C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X3C);
            goto L_80215F60;
    }
    goto skip_8;
    // 0x80215F24: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    skip_8:
    // 0x80215F28: lb          $t6, 0x38($s0)
    ctx->r14 = MEM_B(ctx->r16, 0X38);
    // 0x80215F2C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80215F30: sb          $t7, 0x38($s0)
    MEM_B(0X38, ctx->r16) = ctx->r15;
    // 0x80215F34: lb          $t8, 0x38($s0)
    ctx->r24 = MEM_B(ctx->r16, 0X38);
    // 0x80215F38: bgez        $t8, L_80215F48
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80215F3C: nop
    
            goto L_80215F48;
    }
    // 0x80215F3C: nop

    // 0x80215F40: b           L_80215F5C
    // 0x80215F44: sb          $zero, 0x38($s0)
    MEM_B(0X38, ctx->r16) = 0;
        goto L_80215F5C;
    // 0x80215F44: sb          $zero, 0x38($s0)
    MEM_B(0X38, ctx->r16) = 0;
L_80215F48:
    // 0x80215F48: jal         0x80214E38
    // 0x80215F4C: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    func_80214E38_673DE8(rdram, ctx);
        goto after_25;
    // 0x80215F4C: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    after_25:
    // 0x80215F50: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80215F54: sb          $t9, 0x2E($s0)
    MEM_B(0X2E, ctx->r16) = ctx->r25;
    // 0x80215F58: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_80215F5C:
    // 0x80215F5C: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
L_80215F60:
    // 0x80215F60: andi        $t2, $t1, 0x4
    ctx->r10 = ctx->r9 & 0X4;
    // 0x80215F64: beql        $t2, $zero, L_80215F98
    if (ctx->r10 == 0) {
        // 0x80215F68: lw          $t7, 0x3C($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X3C);
            goto L_80215F98;
    }
    goto skip_9;
    // 0x80215F68: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    skip_9:
    // 0x80215F6C: lh          $t3, 0x34($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X34);
    // 0x80215F70: bnel        $a1, $t3, L_80215F98
    if (ctx->r5 != ctx->r11) {
        // 0x80215F74: lw          $t7, 0x3C($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X3C);
            goto L_80215F98;
    }
    goto skip_10;
    // 0x80215F74: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    skip_10:
    // 0x80215F78: lb          $t4, 0x37($s0)
    ctx->r12 = MEM_B(ctx->r16, 0X37);
    // 0x80215F7C: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x80215F80: sb          $t5, 0x37($s0)
    MEM_B(0X37, ctx->r16) = ctx->r13;
    // 0x80215F84: lb          $t6, 0x37($s0)
    ctx->r14 = MEM_B(ctx->r16, 0X37);
    // 0x80215F88: bgezl       $t6, L_80215F98
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80215F8C: lw          $t7, 0x3C($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X3C);
            goto L_80215F98;
    }
    goto skip_11;
    // 0x80215F8C: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    skip_11:
    // 0x80215F90: sb          $zero, 0x37($s0)
    MEM_B(0X37, ctx->r16) = 0;
    // 0x80215F94: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
L_80215F98:
    // 0x80215F98: lb          $v1, 0x37($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X37);
    // 0x80215F9C: andi        $t8, $t7, 0x8
    ctx->r24 = ctx->r15 & 0X8;
    // 0x80215FA0: beql        $t8, $zero, L_80215FDC
    if (ctx->r24 == 0) {
        // 0x80215FA4: lw          $t3, 0x40($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X40);
            goto L_80215FDC;
    }
    goto skip_12;
    // 0x80215FA4: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    skip_12:
    // 0x80215FA8: lh          $t9, 0x34($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X34);
    // 0x80215FAC: addiu       $t1, $v1, 0x1
    ctx->r9 = ADD32(ctx->r3, 0X1);
    // 0x80215FB0: bnel        $a1, $t9, L_80215FDC
    if (ctx->r5 != ctx->r25) {
        // 0x80215FB4: lw          $t3, 0x40($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X40);
            goto L_80215FDC;
    }
    goto skip_13;
    // 0x80215FB4: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    skip_13:
    // 0x80215FB8: sb          $t1, 0x37($s0)
    MEM_B(0X37, ctx->r16) = ctx->r9;
    // 0x80215FBC: lb          $v1, 0x37($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X37);
    // 0x80215FC0: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x80215FC4: slti        $at, $v1, 0x3
    ctx->r1 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x80215FC8: bnel        $at, $zero, L_80215FDC
    if (ctx->r1 != 0) {
        // 0x80215FCC: lw          $t3, 0x40($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X40);
            goto L_80215FDC;
    }
    goto skip_14;
    // 0x80215FCC: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    skip_14:
    // 0x80215FD0: sb          $t2, 0x37($s0)
    MEM_B(0X37, ctx->r16) = ctx->r10;
    // 0x80215FD4: lb          $v1, 0x37($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X37);
    // 0x80215FD8: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
L_80215FDC:
    // 0x80215FDC: beql        $t3, $v1, L_8021603C
    if (ctx->r11 == ctx->r3) {
        // 0x80215FE0: lw          $t6, 0x3C($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X3C);
            goto L_8021603C;
    }
    goto skip_15;
    // 0x80215FE0: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    skip_15:
    // 0x80215FE4: beq         $v1, $zero, L_80216004
    if (ctx->r3 == 0) {
        // 0x80215FE8: nop
    
            goto L_80216004;
    }
    // 0x80215FE8: nop

    // 0x80215FEC: beq         $v1, $a1, L_80216018
    if (ctx->r3 == ctx->r5) {
        // 0x80215FF0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80216018;
    }
    // 0x80215FF0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80215FF4: beq         $v1, $at, L_8021602C
    if (ctx->r3 == ctx->r1) {
        // 0x80215FF8: nop
    
            goto L_8021602C;
    }
    // 0x80215FF8: nop

    // 0x80215FFC: b           L_8021603C
    // 0x80216000: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
        goto L_8021603C;
    // 0x80216000: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
L_80216004:
    // 0x80216004: jal         0x80214CF0
    // 0x80216008: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    func_80214CF0_673CA0(rdram, ctx);
        goto after_26;
    // 0x80216008: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    after_26:
    // 0x8021600C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80216010: b           L_80216038
    // 0x80216014: sb          $t4, 0x36($s0)
    MEM_B(0X36, ctx->r16) = ctx->r12;
        goto L_80216038;
    // 0x80216014: sb          $t4, 0x36($s0)
    MEM_B(0X36, ctx->r16) = ctx->r12;
L_80216018:
    // 0x80216018: jal         0x80214D64
    // 0x8021601C: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    func_80214D64_673D14(rdram, ctx);
        goto after_27;
    // 0x8021601C: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    after_27:
    // 0x80216020: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80216024: b           L_80216038
    // 0x80216028: sb          $t5, 0x36($s0)
    MEM_B(0X36, ctx->r16) = ctx->r13;
        goto L_80216038;
    // 0x80216028: sb          $t5, 0x36($s0)
    MEM_B(0X36, ctx->r16) = ctx->r13;
L_8021602C:
    // 0x8021602C: jal         0x80214D64
    // 0x80216030: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    func_80214D64_673D14(rdram, ctx);
        goto after_28;
    // 0x80216030: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    after_28:
    // 0x80216034: sb          $zero, 0x36($s0)
    MEM_B(0X36, ctx->r16) = 0;
L_80216038:
    // 0x80216038: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
L_8021603C:
    // 0x8021603C: sw          $t6, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r14;
    // 0x80216040: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80216044:
    // 0x80216044: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80216048: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x8021604C: jr          $ra
    // 0x80216050: nop

    TRACE_RETURN()
    return;
    // 0x80216050: nop

;}
RECOMP_FUNC void func_8020F6CC_66E67C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F6CC: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x8020F6D0: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8020F6D4: andi        $t7, $a0, 0xFF
    ctx->r15 = ctx->r4 & 0XFF;
    // 0x8020F6D8: addu        $v1, $v1, $t6
    ctx->r3 = ADD32(ctx->r3, ctx->r14);
    // 0x8020F6DC: slti        $at, $t7, 0xF
    ctx->r1 = SIGNED(ctx->r15) < 0XF ? 1 : 0;
    // 0x8020F6E0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8020F6E4: bne         $at, $zero, L_8020F6F4
    if (ctx->r1 != 0) {
        // 0x8020F6E8: lb          $v1, 0x6E3D($v1)
        ctx->r3 = MEM_B(ctx->r3, 0X6E3D);
            goto L_8020F6F4;
    }
    // 0x8020F6E8: lb          $v1, 0x6E3D($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X6E3D);
    // 0x8020F6EC: jr          $ra
    // 0x8020F6F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x8020F6F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8020F6F4:
    // 0x8020F6F4: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x8020F6F8: subu        $t8, $t8, $v1
    ctx->r24 = SUB32(ctx->r24, ctx->r3);
    // 0x8020F6FC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x8020F700: addiu       $t9, $t9, 0x6BF0
    ctx->r25 = ADD32(ctx->r25, 0X6BF0);
    // 0x8020F704: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8020F708: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
    // 0x8020F70C: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8020F710: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8020F714: swc1        $f4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f4.u32l;
    // 0x8020F718: lwc1        $f6, 0x4($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8020F71C: swc1        $f6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f6.u32l;
    // 0x8020F720: lw          $t0, 0x10($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X10);
    // 0x8020F724: lwc1        $f8, 0x8($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8020F728: swc1        $f8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f8.u32l;
    // 0x8020F72C: jr          $ra
    // 0x8020F730: nop

    TRACE_RETURN()
    return;
    // 0x8020F730: nop

;}
RECOMP_FUNC void func_8021386C_67281C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021386C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80213870: lw          $t6, -0x37A8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X37A8);
    // 0x80213874: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80213878: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8021387C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80213880: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80213884: beq         $t6, $zero, L_802138B0
    if (ctx->r14 == 0) {
        // 0x80213888: sw          $a2, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r6;
            goto L_802138B0;
    }
    // 0x80213888: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8021388C: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x80213890: lw          $t8, 0x7F20($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7F20);
    // 0x80213894: addiu       $t7, $zero, 0x18
    ctx->r15 = ADD32(0, 0X18);
    // 0x80213898: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8021389C: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    // 0x802138A0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802138A4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802138A8: jal         0x800106F0
    // 0x802138AC: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    func_800106F0_112F0(rdram, ctx);
        goto after_0;
    // 0x802138AC: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    after_0:
L_802138B0:
    // 0x802138B0: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x802138B4: lw          $t9, -0x37A4($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X37A4);
    // 0x802138B8: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x802138BC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x802138C0: beq         $t9, $zero, L_802138F4
    if (ctx->r25 == 0) {
        // 0x802138C4: addiu       $a1, $a1, 0x14
        ctx->r5 = ADD32(ctx->r5, 0X14);
            goto L_802138F4;
    }
    // 0x802138C4: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    // 0x802138C8: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x802138CC: lw          $t1, 0x7F20($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7F20);
    // 0x802138D0: addiu       $t0, $zero, 0x18
    ctx->r8 = ADD32(0, 0X18);
    // 0x802138D4: addiu       $t2, $zero, 0x18
    ctx->r10 = ADD32(0, 0X18);
    // 0x802138D8: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x802138DC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x802138E0: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x802138E4: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    // 0x802138E8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802138EC: jal         0x800106F0
    // 0x802138F0: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    func_800106F0_112F0(rdram, ctx);
        goto after_1;
    // 0x802138F0: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    after_1:
L_802138F4:
    // 0x802138F4: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x802138F8: lw          $t3, -0x37A0($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X37A0);
    // 0x802138FC: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80213900: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80213904: beq         $t3, $zero, L_80213934
    if (ctx->r11 == 0) {
        // 0x80213908: addiu       $a1, $a1, 0x28
        ctx->r5 = ADD32(ctx->r5, 0X28);
            goto L_80213934;
    }
    // 0x80213908: addiu       $a1, $a1, 0x28
    ctx->r5 = ADD32(ctx->r5, 0X28);
    // 0x8021390C: lui         $t5, 0x8021
    ctx->r13 = S32(0X8021 << 16);
    // 0x80213910: lw          $t5, 0x7F24($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7F24);
    // 0x80213914: addiu       $t4, $zero, 0x18
    ctx->r12 = ADD32(0, 0X18);
    // 0x80213918: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x8021391C: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x80213920: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    // 0x80213924: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80213928: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8021392C: jal         0x800106F0
    // 0x80213930: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    func_800106F0_112F0(rdram, ctx);
        goto after_2;
    // 0x80213930: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    after_2:
L_80213934:
    // 0x80213934: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80213938: lw          $t6, -0x379C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X379C);
    // 0x8021393C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80213940: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80213944: beq         $t6, $zero, L_80213978
    if (ctx->r14 == 0) {
        // 0x80213948: addiu       $a1, $a1, 0x3C
        ctx->r5 = ADD32(ctx->r5, 0X3C);
            goto L_80213978;
    }
    // 0x80213948: addiu       $a1, $a1, 0x3C
    ctx->r5 = ADD32(ctx->r5, 0X3C);
    // 0x8021394C: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x80213950: lw          $t8, 0x7F24($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7F24);
    // 0x80213954: addiu       $t7, $zero, 0x18
    ctx->r15 = ADD32(0, 0X18);
    // 0x80213958: addiu       $t9, $zero, 0x18
    ctx->r25 = ADD32(0, 0X18);
    // 0x8021395C: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x80213960: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80213964: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x80213968: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    // 0x8021396C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80213970: jal         0x800106F0
    // 0x80213974: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    func_800106F0_112F0(rdram, ctx);
        goto after_3;
    // 0x80213974: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    after_3:
L_80213978:
    // 0x80213978: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8021397C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80213980: jr          $ra
    // 0x80213984: nop

    TRACE_RETURN()
    return;
    // 0x80213984: nop

;}
RECOMP_FUNC void func_8020DC30_66CBE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020DC30: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8020DC34: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8020DC38: lwc1        $f6, 0x6C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X6C);
    // 0x8020DC3C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8020DC40: ldc1        $f4, 0x7348($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, 0X7348);
    // 0x8020DC44: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8020DC48: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x8020DC4C: c.lt.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d < ctx->f8.d;
    // 0x8020DC50: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8020DC54: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x8020DC58: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x8020DC5C: bc1f        L_8020DCD4
    if (!c1cs) {
        // 0x8020DC60: addiu       $t9, $t9, 0x8BC
        ctx->r25 = ADD32(ctx->r25, 0X8BC);
            goto L_8020DCD4;
    }
    // 0x8020DC60: addiu       $t9, $t9, 0x8BC
    ctx->r25 = ADD32(ctx->r25, 0X8BC);
    // 0x8020DC64: lwc1        $f2, 0xC($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0XC);
    // 0x8020DC68: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8020DC6C: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x8020DC70: nop

    // 0x8020DC74: bc1fl       L_8020DC8C
    if (!c1cs) {
        // 0x8020DC78: sub.s       $f14, $f2, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
            goto L_8020DC8C;
    }
    goto skip_0;
    // 0x8020DC78: sub.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
    skip_0:
    // 0x8020DC7C: sub.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x8020DC80: b           L_8020DC8C
    // 0x8020DC84: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
        goto L_8020DC8C;
    // 0x8020DC84: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    // 0x8020DC88: sub.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
L_8020DC8C:
    // 0x8020DC8C: lwc1        $f12, 0x10($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X10);
    // 0x8020DC90: c.lt.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
    // 0x8020DC94: nop

    // 0x8020DC98: bc1fl       L_8020DCB4
    if (!c1cs) {
        // 0x8020DC9C: c.lt.s      $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
            goto L_8020DCB4;
    }
    goto skip_1;
    // 0x8020DC9C: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    skip_1:
    // 0x8020DCA0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8020DCA4: swc1        $f2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f2.u32l;
    // 0x8020DCA8: b           L_8020DCD4
    // 0x8020DCAC: swc1        $f10, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f10.u32l;
        goto L_8020DCD4;
    // 0x8020DCAC: swc1        $f10, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f10.u32l;
    // 0x8020DCB0: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
L_8020DCB4:
    // 0x8020DCB4: nop

    // 0x8020DCB8: bc1fl       L_8020DCD0
    if (!c1cs) {
        // 0x8020DCBC: add.s       $f18, $f0, $f12
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f12.fl;
            goto L_8020DCD0;
    }
    goto skip_2;
    // 0x8020DCBC: add.s       $f18, $f0, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f12.fl;
    skip_2:
    // 0x8020DCC0: sub.s       $f16, $f0, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x8020DCC4: b           L_8020DCD4
    // 0x8020DCC8: swc1        $f16, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f16.u32l;
        goto L_8020DCD4;
    // 0x8020DCC8: swc1        $f16, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f16.u32l;
    // 0x8020DCCC: add.s       $f18, $f0, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f12.fl;
L_8020DCD0:
    // 0x8020DCD0: swc1        $f18, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f18.u32l;
L_8020DCD4:
    // 0x8020DCD4: addiu       $v1, $a2, 0x5C
    ctx->r3 = ADD32(ctx->r6, 0X5C);
    // 0x8020DCD8: addiu       $a0, $v1, 0x18
    ctx->r4 = ADD32(ctx->r3, 0X18);
    // 0x8020DCDC: or          $t6, $a0, $at
    ctx->r14 = ctx->r4 | ctx->r1;
    // 0x8020DCE0: sw          $t6, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r14;
    // 0x8020DCE4: jalr        $t9
    // 0x8020DCE8: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x8020DCE8: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    after_0:
    // 0x8020DCEC: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x8020DCF0: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8020DCF4: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x8020DCF8: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8020DCFC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8020DD00: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020DD04: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x8020DD08: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8020DD0C: c.le.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d <= ctx->f6.d;
    // 0x8020DD10: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8020DD14: addiu       $a3, $zero, 0x140
    ctx->r7 = ADD32(0, 0X140);
    // 0x8020DD18: addiu       $t7, $zero, 0xF0
    ctx->r15 = ADD32(0, 0XF0);
    // 0x8020DD1C: bc1fl       L_8020DD5C
    if (!c1cs) {
        // 0x8020DD20: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_8020DD5C;
    }
    goto skip_3;
    // 0x8020DD20: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_3:
    // 0x8020DD24: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8020DD28: lbu         $t8, 0x14($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X14);
    // 0x8020DD2C: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x8020DD30: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x8020DD34: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x8020DD38: lbu         $t0, 0x15($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X15);
    // 0x8020DD3C: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    // 0x8020DD40: addiu       $t9, $t9, 0x8E4
    ctx->r25 = ADD32(ctx->r25, 0X8E4);
    // 0x8020DD44: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x8020DD48: lbu         $t1, 0x16($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X16);
    // 0x8020DD4C: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x8020DD50: jalr        $t9
    // 0x8020DD54: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x8020DD54: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    after_1:
    // 0x8020DD58: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_8020DD5C:
    // 0x8020DD5C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8020DD60: jr          $ra
    // 0x8020DD64: nop

    TRACE_RETURN()
    return;
    // 0x8020DD64: nop

    // 0x8020DD68: jr          $ra
    // 0x8020DD6C: nop

    TRACE_RETURN()
    return;
    // 0x8020DD6C: nop

    // 0x8020DD70: jr          $ra
    // 0x8020DD74: nop

    TRACE_RETURN()
    return;
    // 0x8020DD74: nop

    // 0x8020DD78: jr          $ra
    // 0x8020DD7C: nop

    TRACE_RETURN()
    return;
    // 0x8020DD7C: nop

    // 0x8020DD80: jr          $ra
    // 0x8020DD84: nop

    TRACE_RETURN()
    return;
    // 0x8020DD84: nop

;}
RECOMP_FUNC void func_802166B4_675664(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802166B4: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x802166B8: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x802166BC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x802166C0: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x802166C4: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x802166C8: addiu       $v1, $v1, 0x7020
    ctx->r3 = ADD32(ctx->r3, 0X7020);
    // 0x802166CC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x802166D0: addu        $t7, $v1, $t6
    ctx->r15 = ADD32(ctx->r3, ctx->r14);
    // 0x802166D4: lbu         $t8, 0x0($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X0);
    // 0x802166D8: sll         $t9, $a0, 2
    ctx->r25 = S32(ctx->r4 << 2);
    // 0x802166DC: addu        $t9, $t9, $a0
    ctx->r25 = ADD32(ctx->r25, ctx->r4);
    // 0x802166E0: slt         $at, $a1, $t8
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x802166E4: bne         $at, $zero, L_802166F4
    if (ctx->r1 != 0) {
        // 0x802166E8: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_802166F4;
    }
    // 0x802166E8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x802166EC: jr          $ra
    // 0x802166F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x802166F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802166F4:
    // 0x802166F4: addu        $t9, $t9, $a0
    ctx->r25 = ADD32(ctx->r25, ctx->r4);
    // 0x802166F8: sll         $t1, $a1, 2
    ctx->r9 = S32(ctx->r5 << 2);
    // 0x802166FC: subu        $t1, $t1, $a1
    ctx->r9 = SUB32(ctx->r9, ctx->r5);
    // 0x80216700: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80216704: addu        $t0, $v1, $t9
    ctx->r8 = ADD32(ctx->r3, ctx->r25);
    // 0x80216708: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8021670C: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x80216710: lbu         $v0, 0xC($t2)
    ctx->r2 = MEM_BU(ctx->r10, 0XC);
    // 0x80216714: jr          $ra
    // 0x80216718: nop

    TRACE_RETURN()
    return;
    // 0x80216718: nop

;}
RECOMP_FUNC void func_8021666C_67561C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021666C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80216670: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x80216674: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80216678: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8021667C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80216680: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80216684: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80216688: jr          $ra
    // 0x8021668C: lb          $v0, 0x7028($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X7028);
    TRACE_RETURN()
    return;
    // 0x8021668C: lb          $v0, 0x7028($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X7028);
;}
RECOMP_FUNC void func_8020DD88_66CD38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020DD88: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8020DD8C: lwc1        $f4, 0x64($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X64);
    // 0x8020DD90: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8020DD94: swc1        $f12, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f12.u32l;
    // 0x8020DD98: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x8020DD9C: nop

    // 0x8020DDA0: bc1fl       L_8020DDC4
    if (!c1cs) {
        // 0x8020DDA4: lwc1        $f10, 0xC($v0)
        ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
            goto L_8020DDC4;
    }
    goto skip_0;
    // 0x8020DDA4: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    skip_0:
    // 0x8020DDA8: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8020DDAC: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8020DDB0: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8020DDB4: sub.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8020DDB8: b           L_8020DDCC
    // 0x8020DDBC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8020DDCC;
    // 0x8020DDBC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x8020DDC0: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
L_8020DDC4:
    // 0x8020DDC4: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8020DDC8: sub.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f16.fl;
L_8020DDCC:
    // 0x8020DDCC: lwc1        $f18, 0x4($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8020DDD0: div.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f18.fl);
    // 0x8020DDD4: jr          $ra
    // 0x8020DDD8: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x8020DDD8: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_80216624_6755D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80216624: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80216628: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8021662C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80216630: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x80216634: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80216638: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x8021663C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80216640: jr          $ra
    // 0x80216644: lw          $v0, 0x7024($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7024);
    TRACE_RETURN()
    return;
    // 0x80216644: lw          $v0, 0x7024($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7024);
;}
RECOMP_FUNC void func_80210F80_66FF30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210F80: jr          $ra
    // 0x80210F84: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    TRACE_RETURN()
    return;
    // 0x80210F84: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
;}
RECOMP_FUNC void func_8020FEAC_66EE5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020FEAC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8020FEB0: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8020FEB4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x8020FEB8: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x8020FEBC: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x8020FEC0: addiu       $a1, $a1, -0x1C0
    ctx->r5 = ADD32(ctx->r5, -0X1C0);
    // 0x8020FEC4: jal         0x80034E08
    // 0x8020FEC8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x8020FEC8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8020FECC: bne         $v0, $zero, L_8020FEDC
    if (ctx->r2 != 0) {
        // 0x8020FED0: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_8020FEDC;
    }
    // 0x8020FED0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8020FED4: b           L_8020FF6C
    // 0x8020FED8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8020FF6C;
    // 0x8020FED8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8020FEDC:
    // 0x8020FEDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8020FEE0: jal         0x80011968
    // 0x8020FEE4: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    func_80011968_12568(rdram, ctx);
        goto after_1;
    // 0x8020FEE4: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    after_1:
    // 0x8020FEE8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8020FEEC: lui         $a3, 0xC00B
    ctx->r7 = S32(0XC00B << 16);
    // 0x8020FEF0: ori         $a3, $a3, 0x851F
    ctx->r7 = ctx->r7 | 0X851F;
    // 0x8020FEF4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8020FEF8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8020FEFC: jal         0x80011908
    // 0x8020FF00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80011908_12508(rdram, ctx);
        goto after_2;
    // 0x8020FF00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8020FF04: jal         0x80011760
    // 0x8020FF08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80011760_12360(rdram, ctx);
        goto after_3;
    // 0x8020FF08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8020FF0C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8020FF10: lwc1        $f2, 0x7750($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X7750);
    // 0x8020FF14: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8020FF18: lui         $a1, 0x801
    ctx->r5 = S32(0X801 << 16);
    // 0x8020FF1C: addiu       $a1, $a1, -0x1740
    ctx->r5 = ADD32(ctx->r5, -0X1740);
    // 0x8020FF20: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8020FF24: lui         $a2, 0x8007
    ctx->r6 = S32(0X8007 << 16);
    // 0x8020FF28: addiu       $t6, $zero, 0x4D0
    ctx->r14 = ADD32(0, 0X4D0);
    // 0x8020FF2C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8020FF30: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x8020FF34: addiu       $a2, $a2, -0x2768
    ctx->r6 = ADD32(ctx->r6, -0X2768);
    // 0x8020FF38: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x8020FF3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8020FF40: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8020FF44: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8020FF48: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8020FF4C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x8020FF50: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    // 0x8020FF54: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x8020FF58: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x8020FF5C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x8020FF60: jal         0x8000DBF0
    // 0x8020FF64: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_4;
    // 0x8020FF64: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x8020FF68: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_8020FF6C:
    // 0x8020FF6C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8020FF70: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x8020FF74: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8020FF78: jr          $ra
    // 0x8020FF7C: nop

    TRACE_RETURN()
    return;
    // 0x8020FF7C: nop

;}
RECOMP_FUNC void func_8021433C_6732EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021433C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80214340: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80214344: bne         $a0, $zero, L_80214354
    if (ctx->r4 != 0) {
        // 0x80214348: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_80214354;
    }
    // 0x80214348: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8021434C: b           L_802144C0
    // 0x80214350: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802144C0;
    // 0x80214350: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80214354:
    // 0x80214354: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80214358: addiu       $a1, $a1, 0x3F30
    ctx->r5 = ADD32(ctx->r5, 0X3F30);
    // 0x8021435C: jal         0x80034E08
    // 0x80214360: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x80214360: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80214364: bne         $v0, $zero, L_80214374
    if (ctx->r2 != 0) {
        // 0x80214368: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80214374;
    }
    // 0x80214368: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8021436C: b           L_802144C0
    // 0x80214370: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802144C0;
    // 0x80214370: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80214374:
    // 0x80214374: jal         0x80211870
    // 0x80214378: nop

    func_80211870_670820(rdram, ctx);
        goto after_1;
    // 0x80214378: nop

    after_1:
    // 0x8021437C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80214380: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80214384: jal         0x800114B8
    // 0x80214388: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800114B8_120B8(rdram, ctx);
        goto after_2;
    // 0x80214388: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x8021438C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80214390: addiu       $a1, $zero, 0x73
    ctx->r5 = ADD32(0, 0X73);
    // 0x80214394: jal         0x800103DC
    // 0x80214398: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_800103DC_10FDC(rdram, ctx);
        goto after_3;
    // 0x80214398: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_3:
    // 0x8021439C: addiu       $v1, $s0, 0x5C
    ctx->r3 = ADD32(ctx->r16, 0X5C);
    // 0x802143A0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802143A4: bne         $v0, $at, L_802143BC
    if (ctx->r2 != ctx->r1) {
        // 0x802143A8: sw          $v0, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r2;
            goto L_802143BC;
    }
    // 0x802143A8: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x802143AC: jal         0x80214284
    // 0x802143B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80214284_673234(rdram, ctx);
        goto after_4;
    // 0x802143B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x802143B4: b           L_802144C0
    // 0x802143B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802144C0;
    // 0x802143B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802143BC:
    // 0x802143BC: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x802143C0: addiu       $t6, $zero, 0x16
    ctx->r14 = ADD32(0, 0X16);
    // 0x802143C4: addiu       $t7, $zero, 0x18
    ctx->r15 = ADD32(0, 0X18);
    // 0x802143C8: sh          $t6, 0x1C($v0)
    MEM_H(0X1C, ctx->r2) = ctx->r14;
    // 0x802143CC: sh          $t7, 0x20($v0)
    MEM_H(0X20, ctx->r2) = ctx->r15;
    // 0x802143D0: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x802143D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802143D8: jal         0x800119D4
    // 0x802143DC: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_800119D4_125D4(rdram, ctx);
        goto after_5;
    // 0x802143DC: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_5:
    // 0x802143E0: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x802143E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802143E8: bne         $v0, $zero, L_80214400
    if (ctx->r2 != 0) {
        // 0x802143EC: sw          $v0, 0x20($v1)
        MEM_W(0X20, ctx->r3) = ctx->r2;
            goto L_80214400;
    }
    // 0x802143EC: sw          $v0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r2;
    // 0x802143F0: jal         0x80214284
    // 0x802143F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80214284_673234(rdram, ctx);
        goto after_6;
    // 0x802143F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x802143F8: b           L_802144C0
    // 0x802143FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802144C0;
    // 0x802143FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80214400:
    // 0x80214400: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x80214404: jal         0x800119D4
    // 0x80214408: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_800119D4_125D4(rdram, ctx);
        goto after_7;
    // 0x80214408: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_7:
    // 0x8021440C: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x80214410: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80214414: bne         $v0, $zero, L_8021442C
    if (ctx->r2 != 0) {
        // 0x80214418: sw          $v0, 0x24($v1)
        MEM_W(0X24, ctx->r3) = ctx->r2;
            goto L_8021442C;
    }
    // 0x80214418: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
    // 0x8021441C: jal         0x80214284
    // 0x80214420: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80214284_673234(rdram, ctx);
        goto after_8;
    // 0x80214420: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80214424: b           L_802144C0
    // 0x80214428: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802144C0;
    // 0x80214428: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8021442C:
    // 0x8021442C: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x80214430: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x80214434: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x80214438: addiu       $a1, $zero, 0x2580
    ctx->r5 = ADD32(0, 0X2580);
    // 0x8021443C: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x80214440: jal         0x800148F0
    // 0x80214444: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_800148F0_154F0(rdram, ctx);
        goto after_9;
    // 0x80214444: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_9:
    // 0x80214448: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x8021444C: bne         $v0, $zero, L_80214464
    if (ctx->r2 != 0) {
        // 0x80214450: sw          $v0, 0x8($v1)
        MEM_W(0X8, ctx->r3) = ctx->r2;
            goto L_80214464;
    }
    // 0x80214450: sw          $v0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r2;
    // 0x80214454: jal         0x80214284
    // 0x80214458: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80214284_673234(rdram, ctx);
        goto after_10;
    // 0x80214458: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x8021445C: b           L_802144C0
    // 0x80214460: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802144C0;
    // 0x80214460: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80214464:
    // 0x80214464: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x80214468: jal         0x80213988
    // 0x8021446C: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_80213988_672938(rdram, ctx);
        goto after_11;
    // 0x8021446C: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_11:
    // 0x80214470: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80214474: addiu       $a1, $a1, 0x3D14
    ctx->r5 = ADD32(ctx->r5, 0X3D14);
    // 0x80214478: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8021447C: jal         0x80034E08
    // 0x80214480: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_12;
    // 0x80214480: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_12:
    // 0x80214484: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x80214488: addiu       $t8, $zero, 0x9
    ctx->r24 = ADD32(0, 0X9);
    // 0x8021448C: addiu       $t9, $zero, 0xFC
    ctx->r25 = ADD32(0, 0XFC);
    // 0x80214490: addiu       $t0, $zero, -0x1C
    ctx->r8 = ADD32(0, -0X1C);
    // 0x80214494: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x80214498: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x8021449C: sw          $t8, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r24;
    // 0x802144A0: sw          $t9, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r25;
    // 0x802144A4: sw          $t0, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r8;
    // 0x802144A8: lw          $t2, -0x3A38($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X3A38);
    // 0x802144AC: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x802144B0: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x802144B4: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x802144B8: sb          $t1, -0x5236($at)
    MEM_B(-0X5236, ctx->r1) = ctx->r9;
    // 0x802144BC: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_802144C0:
    // 0x802144C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802144C4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802144C8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x802144CC: jr          $ra
    // 0x802144D0: nop

    TRACE_RETURN()
    return;
    // 0x802144D0: nop

;}
RECOMP_FUNC void func_80214CBC_673C6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80214CBC: lwc1        $f6, 0xB0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XB0);
    // 0x80214CC0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80214CC4: ldc1        $f4, 0x7BA0($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, 0X7BA0);
    // 0x80214CC8: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80214CCC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80214CD0: c.lt.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d < ctx->f8.d;
    // 0x80214CD4: nop

    // 0x80214CD8: bc1f        L_80214CE8
    if (!c1cs) {
        // 0x80214CDC: nop
    
            goto L_80214CE8;
    }
    // 0x80214CDC: nop

    // 0x80214CE0: jr          $ra
    // 0x80214CE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x80214CE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80214CE8:
    // 0x80214CE8: jr          $ra
    // 0x80214CEC: nop

    TRACE_RETURN()
    return;
    // 0x80214CEC: nop

;}
RECOMP_FUNC void func_8020DE50_66CE00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020DE50: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8020DE54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020DE58: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8020DE5C: lwc1        $f4, 0x6C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X6C);
    // 0x8020DE60: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8020DE64: ldc1        $f16, 0x7350($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, 0X7350);
    // 0x8020DE68: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8020DE6C: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8020DE70: c.lt.d      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.d < ctx->f6.d;
    // 0x8020DE74: nop

    // 0x8020DE78: bc1fl       L_8020DEF4
    if (!c1cs) {
        // 0x8020DE7C: addiu       $v0, $a0, 0x5C
        ctx->r2 = ADD32(ctx->r4, 0X5C);
            goto L_8020DEF4;
    }
    goto skip_0;
    // 0x8020DE7C: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    skip_0:
    // 0x8020DE80: lwc1        $f12, 0xC($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8020DE84: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8020DE88: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x8020DE8C: nop

    // 0x8020DE90: bc1fl       L_8020DEA8
    if (!c1cs) {
        // 0x8020DE94: sub.s       $f2, $f12, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
            goto L_8020DEA8;
    }
    goto skip_1;
    // 0x8020DE94: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
    skip_1:
    // 0x8020DE98: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x8020DE9C: b           L_8020DEA8
    // 0x8020DEA0: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_8020DEA8;
    // 0x8020DEA0: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x8020DEA4: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
L_8020DEA8:
    // 0x8020DEA8: lwc1        $f14, 0x10($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8020DEAC: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    // 0x8020DEB0: nop

    // 0x8020DEB4: bc1fl       L_8020DED0
    if (!c1cs) {
        // 0x8020DEB8: c.lt.s      $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
            goto L_8020DED0;
    }
    goto skip_2;
    // 0x8020DEB8: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    skip_2:
    // 0x8020DEBC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8020DEC0: swc1        $f12, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f12.u32l;
    // 0x8020DEC4: b           L_8020DEF0
    // 0x8020DEC8: swc1        $f8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f8.u32l;
        goto L_8020DEF0;
    // 0x8020DEC8: swc1        $f8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f8.u32l;
    // 0x8020DECC: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
L_8020DED0:
    // 0x8020DED0: nop

    // 0x8020DED4: bc1fl       L_8020DEEC
    if (!c1cs) {
        // 0x8020DED8: add.s       $f4, $f0, $f14
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f14.fl;
            goto L_8020DEEC;
    }
    goto skip_3;
    // 0x8020DED8: add.s       $f4, $f0, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f14.fl;
    skip_3:
    // 0x8020DEDC: sub.s       $f10, $f0, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f14.fl;
    // 0x8020DEE0: b           L_8020DEF0
    // 0x8020DEE4: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
        goto L_8020DEF0;
    // 0x8020DEE4: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
    // 0x8020DEE8: add.s       $f4, $f0, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f14.fl;
L_8020DEEC:
    // 0x8020DEEC: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
L_8020DEF0:
    // 0x8020DEF0: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
L_8020DEF4:
    // 0x8020DEF4: lwc1        $f14, 0x20($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X20);
    // 0x8020DEF8: cvt.d.s     $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f6.d = CVT_D_S(ctx->f14.fl);
    // 0x8020DEFC: c.lt.d      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.d < ctx->f6.d;
    // 0x8020DF00: nop

    // 0x8020DF04: bc1fl       L_8020DF7C
    if (!c1cs) {
        // 0x8020DF08: lwc1        $f14, 0x18($v0)
        ctx->f14.u32l = MEM_W(ctx->r2, 0X18);
            goto L_8020DF7C;
    }
    goto skip_4;
    // 0x8020DF08: lwc1        $f14, 0x18($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X18);
    skip_4:
    // 0x8020DF0C: lwc1        $f12, 0x1C($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x8020DF10: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8020DF14: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x8020DF18: nop

    // 0x8020DF1C: bc1fl       L_8020DF34
    if (!c1cs) {
        // 0x8020DF20: sub.s       $f2, $f12, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
            goto L_8020DF34;
    }
    goto skip_5;
    // 0x8020DF20: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
    skip_5:
    // 0x8020DF24: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x8020DF28: b           L_8020DF34
    // 0x8020DF2C: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_8020DF34;
    // 0x8020DF2C: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x8020DF30: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
L_8020DF34:
    // 0x8020DF34: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    // 0x8020DF38: nop

    // 0x8020DF3C: bc1fl       L_8020DF58
    if (!c1cs) {
        // 0x8020DF40: c.lt.s      $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
            goto L_8020DF58;
    }
    goto skip_6;
    // 0x8020DF40: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    skip_6:
    // 0x8020DF44: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8020DF48: swc1        $f12, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f12.u32l;
    // 0x8020DF4C: b           L_8020DF78
    // 0x8020DF50: swc1        $f8, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f8.u32l;
        goto L_8020DF78;
    // 0x8020DF50: swc1        $f8, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f8.u32l;
    // 0x8020DF54: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
L_8020DF58:
    // 0x8020DF58: nop

    // 0x8020DF5C: bc1fl       L_8020DF74
    if (!c1cs) {
        // 0x8020DF60: add.s       $f4, $f0, $f14
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f14.fl;
            goto L_8020DF74;
    }
    goto skip_7;
    // 0x8020DF60: add.s       $f4, $f0, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f14.fl;
    skip_7:
    // 0x8020DF64: sub.s       $f10, $f0, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f14.fl;
    // 0x8020DF68: b           L_8020DF78
    // 0x8020DF6C: swc1        $f10, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f10.u32l;
        goto L_8020DF78;
    // 0x8020DF6C: swc1        $f10, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f10.u32l;
    // 0x8020DF70: add.s       $f4, $f0, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f14.fl;
L_8020DF74:
    // 0x8020DF74: swc1        $f4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f4.u32l;
L_8020DF78:
    // 0x8020DF78: lwc1        $f14, 0x18($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X18);
L_8020DF7C:
    // 0x8020DF7C: cvt.d.s     $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f6.d = CVT_D_S(ctx->f14.fl);
    // 0x8020DF80: c.lt.d      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.d < ctx->f6.d;
    // 0x8020DF84: nop

    // 0x8020DF88: bc1fl       L_8020E000
    if (!c1cs) {
        // 0x8020DF8C: lw          $t6, 0x30($v0)
        ctx->r14 = MEM_W(ctx->r2, 0X30);
            goto L_8020E000;
    }
    goto skip_8;
    // 0x8020DF8C: lw          $t6, 0x30($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X30);
    skip_8:
    // 0x8020DF90: lwc1        $f12, 0x14($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8020DF94: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8020DF98: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x8020DF9C: nop

    // 0x8020DFA0: bc1fl       L_8020DFB8
    if (!c1cs) {
        // 0x8020DFA4: sub.s       $f2, $f12, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
            goto L_8020DFB8;
    }
    goto skip_9;
    // 0x8020DFA4: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
    skip_9:
    // 0x8020DFA8: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x8020DFAC: b           L_8020DFB8
    // 0x8020DFB0: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_8020DFB8;
    // 0x8020DFB0: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x8020DFB4: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
L_8020DFB8:
    // 0x8020DFB8: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    // 0x8020DFBC: nop

    // 0x8020DFC0: bc1fl       L_8020DFDC
    if (!c1cs) {
        // 0x8020DFC4: c.lt.s      $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
            goto L_8020DFDC;
    }
    goto skip_10;
    // 0x8020DFC4: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    skip_10:
    // 0x8020DFC8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8020DFCC: swc1        $f12, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f12.u32l;
    // 0x8020DFD0: b           L_8020DFFC
    // 0x8020DFD4: swc1        $f8, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f8.u32l;
        goto L_8020DFFC;
    // 0x8020DFD4: swc1        $f8, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f8.u32l;
    // 0x8020DFD8: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
L_8020DFDC:
    // 0x8020DFDC: nop

    // 0x8020DFE0: bc1fl       L_8020DFF8
    if (!c1cs) {
        // 0x8020DFE4: add.s       $f4, $f0, $f14
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f14.fl;
            goto L_8020DFF8;
    }
    goto skip_11;
    // 0x8020DFE4: add.s       $f4, $f0, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f14.fl;
    skip_11:
    // 0x8020DFE8: sub.s       $f10, $f0, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f14.fl;
    // 0x8020DFEC: b           L_8020DFFC
    // 0x8020DFF0: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
        goto L_8020DFFC;
    // 0x8020DFF0: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
    // 0x8020DFF4: add.s       $f4, $f0, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f14.fl;
L_8020DFF8:
    // 0x8020DFF8: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
L_8020DFFC:
    // 0x8020DFFC: lw          $t6, 0x30($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X30);
L_8020E000:
    // 0x8020E000: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8020E004: bne         $t6, $at, L_8020E130
    if (ctx->r14 != ctx->r1) {
        // 0x8020E008: lui         $at, 0x4220
        ctx->r1 = S32(0X4220 << 16);
            goto L_8020E130;
    }
    // 0x8020E008: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x8020E00C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8020E010: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8020E014: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8020E018: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x8020E01C: nop

    // 0x8020E020: bc1f        L_8020E034
    if (!c1cs) {
        // 0x8020E024: nop
    
            goto L_8020E034;
    }
    // 0x8020E024: nop

    // 0x8020E028: swc1        $f18, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f18.u32l;
    // 0x8020E02C: b           L_8020E050
    // 0x8020E030: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
        goto L_8020E050;
    // 0x8020E030: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
L_8020E034:
    // 0x8020E034: lwc1        $f2, 0x7358($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X7358);
    // 0x8020E038: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x8020E03C: nop

    // 0x8020E040: bc1fl       L_8020E054
    if (!c1cs) {
        // 0x8020E044: sub.s       $f8, $f0, $f18
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f18.fl;
            goto L_8020E054;
    }
    goto skip_12;
    // 0x8020E044: sub.s       $f8, $f0, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f18.fl;
    skip_12:
    // 0x8020E048: swc1        $f2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f2.u32l;
    // 0x8020E04C: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
L_8020E050:
    // 0x8020E050: sub.s       $f8, $f0, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f18.fl;
L_8020E054:
    // 0x8020E054: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8020E058: ldc1        $f10, 0x7360($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, 0X7360);
    // 0x8020E05C: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8020E060: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8020E064: ldc1        $f4, 0x7368($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, 0X7368);
    // 0x8020E068: cvt.d.s     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f2.d = CVT_D_S(ctx->f8.fl);
    // 0x8020E06C: cvt.d.s     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f12.d = CVT_D_S(ctx->f6.fl);
    // 0x8020E070: mul.d       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f2.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f2.d);
    // 0x8020E074: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8020E078: add.d       $f14, $f10, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f6.d); 
    ctx->f14.d = ctx->f10.d + ctx->f6.d;
    // 0x8020E07C: c.lt.d      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.d < ctx->f14.d;
    // 0x8020E080: nop

    // 0x8020E084: bc1f        L_8020E098
    if (!c1cs) {
        // 0x8020E088: nop
    
            goto L_8020E098;
    }
    // 0x8020E088: nop

    // 0x8020E08C: cvt.s.d     $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.d); 
    ctx->f8.fl = CVT_S_D(ctx->f14.d);
    // 0x8020E090: b           L_8020E0C4
    // 0x8020E094: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
        goto L_8020E0C4;
    // 0x8020E094: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
L_8020E098:
    // 0x8020E098: ldc1        $f4, 0x7370($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, 0X7370);
    // 0x8020E09C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8020E0A0: ldc1        $f10, 0x7378($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, 0X7378);
    // 0x8020E0A4: mul.d       $f6, $f10, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f2.d); 
    ctx->f6.d = MUL_D(ctx->f10.d, ctx->f2.d);
    // 0x8020E0A8: sub.d       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f0.d = ctx->f4.d - ctx->f6.d;
    // 0x8020E0AC: c.lt.d      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.d < ctx->f12.d;
    // 0x8020E0B0: nop

    // 0x8020E0B4: bc1f        L_8020E0C4
    if (!c1cs) {
        // 0x8020E0B8: nop
    
            goto L_8020E0C4;
    }
    // 0x8020E0B8: nop

    // 0x8020E0BC: cvt.s.d     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f8.fl = CVT_S_D(ctx->f0.d);
    // 0x8020E0C0: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
L_8020E0C4:
    // 0x8020E0C4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8020E0C8: ldc1        $f4, 0x7380($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, 0X7380);
    // 0x8020E0CC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8020E0D0: ldc1        $f6, 0x7388($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, 0X7388);
    // 0x8020E0D4: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8020E0D8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8020E0DC: mul.d       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f2.d);
    // 0x8020E0E0: cvt.d.s     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f12.d = CVT_D_S(ctx->f10.fl);
    // 0x8020E0E4: add.d       $f0, $f4, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f0.d = ctx->f4.d + ctx->f8.d;
    // 0x8020E0E8: c.lt.d      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.d < ctx->f0.d;
    // 0x8020E0EC: nop

    // 0x8020E0F0: bc1f        L_8020E104
    if (!c1cs) {
        // 0x8020E0F4: nop
    
            goto L_8020E104;
    }
    // 0x8020E0F4: nop

    // 0x8020E0F8: cvt.s.d     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f10.fl = CVT_S_D(ctx->f0.d);
    // 0x8020E0FC: b           L_8020E130
    // 0x8020E100: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
        goto L_8020E130;
    // 0x8020E100: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
L_8020E104:
    // 0x8020E104: ldc1        $f6, 0x7390($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, 0X7390);
    // 0x8020E108: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8020E10C: ldc1        $f4, 0x7398($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, 0X7398);
    // 0x8020E110: mul.d       $f8, $f4, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f2.d);
    // 0x8020E114: sub.d       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f0.d = ctx->f6.d - ctx->f8.d;
    // 0x8020E118: c.lt.d      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.d < ctx->f12.d;
    // 0x8020E11C: nop

    // 0x8020E120: bc1f        L_8020E130
    if (!c1cs) {
        // 0x8020E124: nop
    
            goto L_8020E130;
    }
    // 0x8020E124: nop

    // 0x8020E128: cvt.s.d     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f10.fl = CVT_S_D(ctx->f0.d);
    // 0x8020E12C: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
L_8020E130:
    // 0x8020E130: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8020E134: lwc1        $f16, 0x73A0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X73A0);
    // 0x8020E138: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8020E13C: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x8020E140: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8020E144: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8020E148: swc1        $f4, 0x6B7C($at)
    MEM_W(0X6B7C, ctx->r1) = ctx->f4.u32l;
    // 0x8020E14C: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8020E150: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8020E154: swc1        $f6, 0x6B84($at)
    MEM_W(0X6B84, ctx->r1) = ctx->f6.u32l;
    // 0x8020E158: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8020E15C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8020E160: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8020E164: swc1        $f8, 0x6B70($at)
    MEM_W(0X6B70, ctx->r1) = ctx->f8.u32l;
    // 0x8020E168: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8020E16C: lui         $at, 0x4069
    ctx->r1 = S32(0X4069 << 16);
    // 0x8020E170: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x8020E174: cvt.d.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.d = CVT_D_S(ctx->f10.fl);
    // 0x8020E178: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8020E17C: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x8020E180: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x8020E184: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8020E188: swc1        $f10, 0x6B78($at)
    MEM_W(0X6B78, ctx->r1) = ctx->f10.u32l;
    // 0x8020E18C: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8020E190: swc1        $f4, 0x6B74($at)
    MEM_W(0X6B74, ctx->r1) = ctx->f4.u32l;
    // 0x8020E194: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8020E198: lwc1        $f6, 0x73A4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X73A4);
    // 0x8020E19C: lui         $at, 0x4010
    ctx->r1 = S32(0X4010 << 16);
    // 0x8020E1A0: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x8020E1A4: cvt.d.s     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f2.d = CVT_D_S(ctx->f6.fl);
    // 0x8020E1A8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8020E1AC: lwc1        $f4, 0x73A8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X73A8);
    // 0x8020E1B0: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8020E1B4: mul.d       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f2.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f2.d);
    // 0x8020E1B8: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x8020E1BC: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8020E1C0: mul.d       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f4.d = MUL_D(ctx->f10.d, ctx->f8.d);
    // 0x8020E1C4: nop

    // 0x8020E1C8: mul.s       $f6, $f16, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x8020E1CC: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x8020E1D0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8020E1D4: sub.d       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = ctx->f10.d - ctx->f4.d;
    // 0x8020E1D8: cvt.s.d     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f14.fl = CVT_S_D(ctx->f8.d);
    // 0x8020E1DC: c.lt.s      $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f6.fl < ctx->f14.fl;
    // 0x8020E1E0: nop

    // 0x8020E1E4: bc1f        L_8020E228
    if (!c1cs) {
        // 0x8020E1E8: nop
    
            goto L_8020E228;
    }
    // 0x8020E1E8: nop

    // 0x8020E1EC: sqrt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = sqrtf(ctx->f14.fl);
    // 0x8020E1F0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8020E1F4: add.d       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = ctx->f2.d + ctx->f2.d;
    // 0x8020E1F8: sub.s       $f10, $f0, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f16.fl;
    // 0x8020E1FC: cvt.d.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.d = CVT_D_S(ctx->f10.fl);
    // 0x8020E200: div.d       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = DIV_D(ctx->f4.d, ctx->f8.d);
    // 0x8020E204: cvt.s.d     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f10.fl = CVT_S_D(ctx->f6.d);
    // 0x8020E208: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x8020E20C: mfc1        $a0, $f4
    ctx->r4 = (int32_t)ctx->f4.u32l;
    // 0x8020E210: jal         0x8020D5D0
    // 0x8020E214: nop

    func_8020D5D0_66C580(rdram, ctx);
        goto after_0;
    // 0x8020E214: nop

    after_0:
    // 0x8020E218: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8020E21C: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x8020E220: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8020E224: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
L_8020E228:
    // 0x8020E228: sub.s       $f8, $f0, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f18.fl;
    // 0x8020E22C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8020E230: ldc1        $f10, 0x73B0($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, 0X73B0);
    // 0x8020E234: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x8020E238: cvt.d.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f6.d = CVT_D_S(ctx->f8.fl);
    // 0x8020E23C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8020E240: mul.d       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = MUL_D(ctx->f6.d, ctx->f10.d);
    // 0x8020E244: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x8020E248: lui         $at, 0x4030
    ctx->r1 = S32(0X4030 << 16);
    // 0x8020E24C: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x8020E250: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8020E254: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8020E258: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x8020E25C: add.d       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = ctx->f4.d + ctx->f8.d;
    // 0x8020E260: mul.d       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = MUL_D(ctx->f6.d, ctx->f10.d);
    // 0x8020E264: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8020E268: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8020E26C: nop

    // 0x8020E270: cvt.w.d     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = CVT_W_D(ctx->f4.d);
    // 0x8020E274: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8020E278: nop

    // 0x8020E27C: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x8020E280: beql        $t9, $zero, L_8020E2D4
    if (ctx->r25 == 0) {
        // 0x8020E284: mfc1        $t9, $f8
        ctx->r25 = (int32_t)ctx->f8.u32l;
            goto L_8020E2D4;
    }
    goto skip_13;
    // 0x8020E284: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    skip_13:
    // 0x8020E288: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x8020E28C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8020E290: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8020E294: sub.d       $f8, $f4, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f8.d = ctx->f4.d - ctx->f8.d;
    // 0x8020E298: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8020E29C: nop

    // 0x8020E2A0: cvt.w.d     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_D(ctx->f8.d);
    // 0x8020E2A4: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8020E2A8: nop

    // 0x8020E2AC: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x8020E2B0: bne         $t9, $zero, L_8020E2C8
    if (ctx->r25 != 0) {
        // 0x8020E2B4: nop
    
            goto L_8020E2C8;
    }
    // 0x8020E2B4: nop

    // 0x8020E2B8: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x8020E2BC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020E2C0: b           L_8020E2E0
    // 0x8020E2C4: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_8020E2E0;
    // 0x8020E2C4: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_8020E2C8:
    // 0x8020E2C8: b           L_8020E2E0
    // 0x8020E2CC: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_8020E2E0;
    // 0x8020E2CC: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x8020E2D0: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
L_8020E2D4:
    // 0x8020E2D4: nop

    // 0x8020E2D8: bltz        $t9, L_8020E2C8
    if (SIGNED(ctx->r25) < 0) {
        // 0x8020E2DC: nop
    
            goto L_8020E2C8;
    }
    // 0x8020E2DC: nop

L_8020E2E0:
    // 0x8020E2E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E2E4: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8020E2E8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8020E2EC: sh          $t9, 0x6B8A($at)
    MEM_H(0X6B8A, ctx->r1) = ctx->r25;
    // 0x8020E2F0: jr          $ra
    // 0x8020E2F4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8020E2F4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
