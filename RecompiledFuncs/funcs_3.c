#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80006B44_7744(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80006B44: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80006B48: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x80006B4C: lui         $t2, 0x1
    ctx->r10 = S32(0X1 << 16);
    // 0x80006B50: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x80006B54: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x80006B58: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80006B5C: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80006B60: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80006B64: lui         $t0, 0x8006
    ctx->r8 = S32(0X8006 << 16);
    // 0x80006B68: ori         $t2, $t2, 0x1
    ctx->r10 = ctx->r10 | 0X1;
    // 0x80006B6C: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x80006B70: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x80006B74: lui         $t9, 0xF700
    ctx->r25 = S32(0XF700 << 16);
    // 0x80006B78: addiu       $t0, $t0, -0x4DD0
    ctx->r8 = ADD32(ctx->r8, -0X4DD0);
    // 0x80006B7C: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80006B80: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x80006B84: lw          $t3, 0x0($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X0);
    // 0x80006B88: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80006B8C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80006B90: bltz        $t3, L_80006BF0
    if (SIGNED(ctx->r11) < 0) {
        // 0x80006B94: nop
    
            goto L_80006BF0;
    }
    // 0x80006B94: nop

    // 0x80006B98: trunc.w.s   $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    ctx->f4.u32l = TRUNC_W_S(ctx->f12.fl);
    // 0x80006B9C: lui         $t1, 0xF600
    ctx->r9 = S32(0XF600 << 16);
    // 0x80006BA0: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x80006BA4: nop

L_80006BA8:
    // 0x80006BA8: multu       $a1, $a2
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80006BAC: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80006BB0: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80006BB4: addiu       $t5, $v1, 0x8
    ctx->r13 = ADD32(ctx->r3, 0X8);
    // 0x80006BB8: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x80006BBC: mflo        $a3
    ctx->r7 = lo;
    // 0x80006BC0: addiu       $a3, $a3, 0x28
    ctx->r7 = ADD32(ctx->r7, 0X28);
    // 0x80006BC4: andi        $t6, $a3, 0x3FF
    ctx->r14 = ctx->r7 & 0X3FF;
    // 0x80006BC8: sll         $t7, $t6, 14
    ctx->r15 = S32(ctx->r14 << 14);
    // 0x80006BCC: or          $t8, $t7, $t1
    ctx->r24 = ctx->r15 | ctx->r9;
    // 0x80006BD0: ori         $t9, $t8, 0x370
    ctx->r25 = ctx->r24 | 0X370;
    // 0x80006BD4: ori         $t2, $t7, 0x348
    ctx->r10 = ctx->r15 | 0X348;
    // 0x80006BD8: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x80006BDC: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80006BE0: lw          $t3, 0x0($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X0);
    // 0x80006BE4: slt         $at, $t3, $a2
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80006BE8: beq         $at, $zero, L_80006BA8
    if (ctx->r1 == 0) {
        // 0x80006BEC: nop
    
            goto L_80006BA8;
    }
    // 0x80006BEC: nop

L_80006BF0:
    // 0x80006BF0: jr          $ra
    // 0x80006BF4: nop

    TRACE_RETURN()
    return;
    // 0x80006BF4: nop

;}
RECOMP_FUNC void func_800049D0_55D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800049D0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800049D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800049D8: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x800049DC: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x800049E0: jal         0x8003FEC0
    // 0x800049E4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x800049E4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x800049E8: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x800049EC: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x800049F0: jal         0x80041B20
    // 0x800049F4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSetEventMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x800049F4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x800049F8: lui         $a3, 0x8016
    ctx->r7 = S32(0X8016 << 16);
    // 0x800049FC: addiu       $a2, $a3, 0x7190
    ctx->r6 = ADD32(ctx->r7, 0X7190);
    // 0x80004A00: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x80004A04: jal         0x80041B90
    // 0x80004A08: addiu       $a1, $sp, 0x19
    ctx->r5 = ADD32(ctx->r29, 0X19);
    osContInit_recomp(rdram, ctx);
        goto after_2;
    // 0x80004A08: addiu       $a1, $sp, 0x19
    ctx->r5 = ADD32(ctx->r29, 0X19);
    after_2:
    // 0x80004A0C: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80004A10: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x80004A14: addiu       $a1, $a1, 0x7188
    ctx->r5 = ADD32(ctx->r5, 0X7188);
    // 0x80004A18: addiu       $a0, $a0, 0x7170
    ctx->r4 = ADD32(ctx->r4, 0X7170);
    // 0x80004A1C: jal         0x8003FEC0
    // 0x80004A20: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_3;
    // 0x80004A20: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x80004A24: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x80004A28: addiu       $a1, $a1, 0x7170
    ctx->r5 = ADD32(ctx->r5, 0X7170);
    // 0x80004A2C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x80004A30: jal         0x80041B20
    // 0x80004A34: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    osSetEventMesg_recomp(rdram, ctx);
        goto after_4;
    // 0x80004A34: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x80004A38: lui         $a3, 0x8016
    ctx->r7 = S32(0X8016 << 16);
    // 0x80004A3C: lui         $a1, 0x3
    ctx->r5 = S32(0X3 << 16);
    // 0x80004A40: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x80004A44: addiu       $a3, $a3, 0x7190
    ctx->r7 = ADD32(ctx->r7, 0X7190);
    // 0x80004A48: addiu       $v1, $v1, -0x3A38
    ctx->r3 = ADD32(ctx->r3, -0X3A38);
    // 0x80004A4C: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x80004A50: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80004A54: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80004A58: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    // 0x80004A5C: lbu         $t6, 0x19($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X19);
L_80004A60:
    // 0x80004A60: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80004A64: sllv        $t8, $t7, $v0
    ctx->r24 = S32(ctx->r15 << (ctx->r2 & 31));
    // 0x80004A68: and         $t9, $t6, $t8
    ctx->r25 = ctx->r14 & ctx->r24;
    // 0x80004A6C: beq         $t9, $zero, L_80004AA4
    if (ctx->r25 == 0) {
        // 0x80004A70: sll         $t0, $v0, 2
        ctx->r8 = S32(ctx->r2 << 2);
            goto L_80004AA4;
    }
    // 0x80004A70: sll         $t0, $v0, 2
    ctx->r8 = S32(ctx->r2 << 2);
    // 0x80004A74: addu        $t1, $a3, $t0
    ctx->r9 = ADD32(ctx->r7, ctx->r8);
    // 0x80004A78: lbu         $t2, 0x3($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X3);
    // 0x80004A7C: andi        $t3, $t2, 0x8
    ctx->r11 = ctx->r10 & 0X8;
    // 0x80004A80: bne         $t3, $zero, L_80004AA4
    if (ctx->r11 != 0) {
        // 0x80004A84: nop
    
            goto L_80004AA4;
    }
    // 0x80004A84: nop

    // 0x80004A88: multu       $v0, $a0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80004A8C: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x80004A90: mflo        $t5
    ctx->r13 = lo;
    // 0x80004A94: addu        $t7, $t4, $t5
    ctx->r15 = ADD32(ctx->r12, ctx->r13);
    // 0x80004A98: addu        $t6, $t7, $a1
    ctx->r14 = ADD32(ctx->r15, ctx->r5);
    // 0x80004A9C: b           L_80004ABC
    // 0x80004AA0: sh          $a2, 0x3078($t6)
    MEM_H(0X3078, ctx->r14) = ctx->r6;
        goto L_80004ABC;
    // 0x80004AA0: sh          $a2, 0x3078($t6)
    MEM_H(0X3078, ctx->r14) = ctx->r6;
L_80004AA4:
    // 0x80004AA4: multu       $v0, $a0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80004AA8: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x80004AAC: mflo        $t9
    ctx->r25 = lo;
    // 0x80004AB0: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x80004AB4: addu        $t1, $t0, $a1
    ctx->r9 = ADD32(ctx->r8, ctx->r5);
    // 0x80004AB8: sh          $zero, 0x3078($t1)
    MEM_H(0X3078, ctx->r9) = 0;
L_80004ABC:
    // 0x80004ABC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80004AC0: sll         $t2, $v0, 16
    ctx->r10 = S32(ctx->r2 << 16);
    // 0x80004AC4: sra         $v0, $t2, 16
    ctx->r2 = S32(SIGNED(ctx->r10) >> 16);
    // 0x80004AC8: slti        $at, $v0, 0x4
    ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x80004ACC: bnel        $at, $zero, L_80004A60
    if (ctx->r1 != 0) {
        // 0x80004AD0: lbu         $t6, 0x19($sp)
        ctx->r14 = MEM_BU(ctx->r29, 0X19);
            goto L_80004A60;
    }
    goto skip_0;
    // 0x80004AD0: lbu         $t6, 0x19($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X19);
    skip_0:
    // 0x80004AD4: jal         0x80004910
    // 0x80004AD8: nop

    func_80004910_5510(rdram, ctx);
        goto after_5;
    // 0x80004AD8: nop

    after_5:
    // 0x80004ADC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80004AE0: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80004AE4: sh          $zero, 0x71B8($at)
    MEM_H(0X71B8, ctx->r1) = 0;
    // 0x80004AE8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80004AEC: sh          $zero, 0x71BA($at)
    MEM_H(0X71BA, ctx->r1) = 0;
    // 0x80004AF0: jr          $ra
    // 0x80004AF4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80004AF4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8003F564_40164(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003F564: lui         $t6, 0x8007
    ctx->r14 = S32(0X8007 << 16);
    // 0x8003F568: lw          $t6, 0x7858($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7858);
    // 0x8003F56C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003F570: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003F574: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8003F578: lw          $a1, 0x78E8($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X78E8);
    // 0x8003F57C: jal         0x8003D468
    // 0x8003F580: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    func_8003D468_3E068(rdram, ctx);
        goto after_0;
    // 0x8003F580: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_0:
    // 0x8003F584: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003F588: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003F58C: jr          $ra
    // 0x8003F590: nop

    TRACE_RETURN()
    return;
    // 0x8003F590: nop

;}
RECOMP_FUNC void _ldexpf(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004FB00: beq         $a2, $zero, L_8004FB20
    if (ctx->r6 == 0) {
        // 0x8004FB04: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_8004FB20;
    }
    // 0x8004FB04: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8004FB08: sllv        $t7, $t6, $a2
    ctx->r15 = S32(ctx->r14 << (ctx->r6 & 31));
    // 0x8004FB0C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8004FB10: nop

    // 0x8004FB14: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x8004FB18: mul.d       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f6.d); 
    ctx->f12.d = MUL_D(ctx->f12.d, ctx->f6.d);
    // 0x8004FB1C: nop

L_8004FB20:
    // 0x8004FB20: jr          $ra
    // 0x8004FB24: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
    TRACE_RETURN()
    return;
    // 0x8004FB24: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
;}
RECOMP_FUNC void func_80012940_13540(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80012940: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80012944: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80012948: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001294C: lui         $a1, 0x8001
    ctx->r5 = S32(0X8001 << 16);
    // 0x80012950: addiu       $a1, $a1, 0x1CAC
    ctx->r5 = ADD32(ctx->r5, 0X1CAC);
    // 0x80012954: jal         0x80034E08
    // 0x80012958: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x80012958: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8001295C: bne         $v0, $zero, L_8001296C
    if (ctx->r2 != 0) {
        // 0x80012960: or          $a3, $v0, $zero
        ctx->r7 = ctx->r2 | 0;
            goto L_8001296C;
    }
    // 0x80012960: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x80012964: b           L_80012AC8
    // 0x80012968: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80012AC8;
    // 0x80012968: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8001296C:
    // 0x8001296C: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80012970: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x80012974: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x80012978: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x8001297C: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    // 0x80012980: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80012984: jal         0x800148F0
    // 0x80012988: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_800148F0_154F0(rdram, ctx);
        goto after_1;
    // 0x80012988: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_1:
    // 0x8001298C: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x80012990: lui         $t7, 0x8006
    ctx->r15 = S32(0X8006 << 16);
    // 0x80012994: addiu       $t7, $t7, 0x3740
    ctx->r15 = ADD32(ctx->r15, 0X3740);
    // 0x80012998: addiu       $v1, $a3, 0x5C
    ctx->r3 = ADD32(ctx->r7, 0X5C);
    // 0x8001299C: bne         $v0, $zero, L_800129B4
    if (ctx->r2 != 0) {
        // 0x800129A0: sw          $v0, 0x10($v1)
        MEM_W(0X10, ctx->r3) = ctx->r2;
            goto L_800129B4;
    }
    // 0x800129A0: sw          $v0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r2;
    // 0x800129A4: jal         0x80012304
    // 0x800129A8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_80012304_12F04(rdram, ctx);
        goto after_2;
    // 0x800129A8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_2:
    // 0x800129AC: b           L_80012AC8
    // 0x800129B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80012AC8;
    // 0x800129B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800129B4:
    // 0x800129B4: lw          $t6, 0x10($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X10);
    // 0x800129B8: addiu       $t9, $t7, 0x60
    ctx->r25 = ADD32(ctx->r15, 0X60);
L_800129BC:
    // 0x800129BC: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x800129C0: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x800129C4: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x800129C8: sw          $at, -0xC($t6)
    MEM_W(-0XC, ctx->r14) = ctx->r1;
    // 0x800129CC: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x800129D0: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x800129D4: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x800129D8: bne         $t7, $t9, L_800129BC
    if (ctx->r15 != ctx->r25) {
        // 0x800129DC: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_800129BC;
    }
    // 0x800129DC: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x800129E0: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x800129E4: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x800129E8: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x800129EC: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x800129F0: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x800129F4: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x800129F8: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x800129FC: jal         0x800148F0
    // 0x80012A00: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_800148F0_154F0(rdram, ctx);
        goto after_3;
    // 0x80012A00: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_3:
    // 0x80012A04: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80012A08: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x80012A0C: bne         $v0, $zero, L_80012A24
    if (ctx->r2 != 0) {
        // 0x80012A10: sw          $v0, 0x70($v1)
        MEM_W(0X70, ctx->r3) = ctx->r2;
            goto L_80012A24;
    }
    // 0x80012A10: sw          $v0, 0x70($v1)
    MEM_W(0X70, ctx->r3) = ctx->r2;
    // 0x80012A14: jal         0x80012304
    // 0x80012A18: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_80012304_12F04(rdram, ctx);
        goto after_4;
    // 0x80012A18: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_4:
    // 0x80012A1C: b           L_80012AC8
    // 0x80012A20: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80012AC8;
    // 0x80012A20: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80012A24:
    // 0x80012A24: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80012A28: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80012A2C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80012A30: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x80012A34: jal         0x80035EEC
    // 0x80012A38: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_80035EEC_36AEC(rdram, ctx);
        goto after_5;
    // 0x80012A38: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_5:
    // 0x80012A3C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80012A40: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x80012A44: bne         $v0, $zero, L_80012A54
    if (ctx->r2 != 0) {
        // 0x80012A48: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80012A54;
    }
    // 0x80012A48: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80012A4C: b           L_80012AC8
    // 0x80012A50: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80012AC8;
    // 0x80012A50: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80012A54:
    // 0x80012A54: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80012A58: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x80012A5C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80012A60: sb          $t0, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r8;
    // 0x80012A64: lw          $t1, 0x10($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X10);
    // 0x80012A68: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80012A6C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80012A70: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x80012A74: addu        $t2, $t1, $at
    ctx->r10 = ADD32(ctx->r9, ctx->r1);
    // 0x80012A78: sw          $t2, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r10;
    // 0x80012A7C: swc1        $f2, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f2.u32l;
    // 0x80012A80: swc1        $f2, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f2.u32l;
    // 0x80012A84: swc1        $f2, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f2.u32l;
    // 0x80012A88: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80012A8C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80012A90: lui         $at, 0x4520
    ctx->r1 = S32(0X4520 << 16);
    // 0x80012A94: sb          $t3, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r11;
    // 0x80012A98: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80012A9C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80012AA0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80012AA4: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    // 0x80012AA8: swc1        $f12, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->f12.u32l;
    // 0x80012AAC: swc1        $f12, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f12.u32l;
    // 0x80012AB0: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    // 0x80012AB4: swc1        $f0, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->f0.u32l;
    // 0x80012AB8: swc1        $f0, 0x34($v1)
    MEM_W(0X34, ctx->r3) = ctx->f0.u32l;
    // 0x80012ABC: swc1        $f0, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->f0.u32l;
    // 0x80012AC0: swc1        $f4, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->f4.u32l;
    // 0x80012AC4: swc1        $f6, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f6.u32l;
L_80012AC8:
    // 0x80012AC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80012ACC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80012AD0: jr          $ra
    // 0x80012AD4: nop

    TRACE_RETURN()
    return;
    // 0x80012AD4: nop

;}
RECOMP_FUNC void func_8001080C_1140C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001080C: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x80010810: multu       $a0, $a2
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80010814: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x80010818: addiu       $t7, $t7, 0x7EF8
    ctx->r15 = ADD32(ctx->r15, 0X7EF8);
    // 0x8001081C: mflo        $t6
    ctx->r14 = lo;
    // 0x80010820: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x80010824: lh          $t8, 0x4($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X4);
    // 0x80010828: slt         $at, $a1, $t8
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x8001082C: bne         $at, $zero, L_8001083C
    if (ctx->r1 != 0) {
        // 0x80010830: nop
    
            goto L_8001083C;
    }
    // 0x80010830: nop

    // 0x80010834: jr          $ra
    // 0x80010838: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    TRACE_RETURN()
    return;
    // 0x80010838: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8001083C:
    // 0x8001083C: multu       $a1, $a2
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80010840: lw          $t9, 0x8($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X8);
    // 0x80010844: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x80010848: mflo        $t0
    ctx->r8 = lo;
    // 0x8001084C: addu        $a0, $t9, $t0
    ctx->r4 = ADD32(ctx->r25, ctx->r8);
    // 0x80010850: lhu         $t1, 0x0($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X0);
    // 0x80010854: ori         $t2, $t1, 0x2000
    ctx->r10 = ctx->r9 | 0X2000;
    // 0x80010858: sh          $t2, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r10;
    // 0x8001085C: jr          $ra
    // 0x80010860: nop

    TRACE_RETURN()
    return;
    // 0x80010860: nop

;}
RECOMP_FUNC void func_8003546C_3606C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003546C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80035470: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80035474: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80035478: jal         0x80035490
    // 0x8003547C: lw          $a0, -0x254C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X254C);
    func_80035490_36090(rdram, ctx);
        goto after_0;
    // 0x8003547C: lw          $a0, -0x254C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X254C);
    after_0:
    // 0x80035480: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80035484: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80035488: jr          $ra
    // 0x8003548C: nop

    TRACE_RETURN()
    return;
    // 0x8003548C: nop

;}
RECOMP_FUNC void func_80029E58_2AA58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80029E58: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80029E5C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x80029E60: sdc1        $f24, 0x18($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X18, ctx->r29);
    // 0x80029E64: sdc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X10, ctx->r29);
    // 0x80029E68: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x80029E6C: mtc1        $a3, $f20
    ctx->f20.u32l = ctx->r7;
    // 0x80029E70: mtc1        $a2, $f22
    ctx->f22.u32l = ctx->r6;
    // 0x80029E74: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x80029E78: mtc1        $zero, $f25
    ctx->f_odd[(25 - 1) * 2] = 0;
    // 0x80029E7C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80029E80: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x80029E84: addiu       $t5, $zero, 0x14
    ctx->r13 = ADD32(0, 0X14);
    // 0x80029E88: ori         $t4, $zero, 0xFFFF
    ctx->r12 = 0 | 0XFFFF;
    // 0x80029E8C: addiu       $t3, $zero, 0x6
    ctx->r11 = ADD32(0, 0X6);
    // 0x80029E90: addiu       $t2, $zero, 0x6
    ctx->r10 = ADD32(0, 0X6);
    // 0x80029E94: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
L_80029E98:
    // 0x80029E98: multu       $v0, $t2
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80029E9C: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x80029EA0: mflo        $t6
    ctx->r14 = lo;
    // 0x80029EA4: addu        $t7, $a1, $t6
    ctx->r15 = ADD32(ctx->r5, ctx->r14);
    // 0x80029EA8: lhu         $a2, 0x0($t7)
    ctx->r6 = MEM_HU(ctx->r15, 0X0);
    // 0x80029EAC: multu       $v0, $t3
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80029EB0: mflo        $t0
    ctx->r8 = lo;
    // 0x80029EB4: addu        $t1, $a1, $t0
    ctx->r9 = ADD32(ctx->r5, ctx->r8);
    // 0x80029EB8: lh          $t8, 0x6($t1)
    ctx->r24 = MEM_H(ctx->r9, 0X6);
    // 0x80029EBC: addu        $v0, $a0, $t0
    ctx->r2 = ADD32(ctx->r4, ctx->r8);
    // 0x80029EC0: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x80029EC4: nop

    // 0x80029EC8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80029ECC: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x80029ED0: c.lt.s      $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f8.fl < ctx->f12.fl;
    // 0x80029ED4: nop

    // 0x80029ED8: bc1t        L_80029F94
    if (c1cs) {
        // 0x80029EDC: nop
    
            goto L_80029F94;
    }
    // 0x80029EDC: nop

    // 0x80029EE0: lh          $t9, 0xC($v0)
    ctx->r25 = MEM_H(ctx->r2, 0XC);
    // 0x80029EE4: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x80029EE8: nop

    // 0x80029EEC: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80029EF0: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x80029EF4: c.lt.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl < ctx->f6.fl;
    // 0x80029EF8: nop

    // 0x80029EFC: bc1t        L_80029F94
    if (c1cs) {
        // 0x80029F00: nop
    
            goto L_80029F94;
    }
    // 0x80029F00: nop

    // 0x80029F04: lh          $t6, 0xA($v0)
    ctx->r14 = MEM_H(ctx->r2, 0XA);
    // 0x80029F08: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x80029F0C: nop

    // 0x80029F10: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80029F14: mul.s       $f4, $f10, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x80029F18: c.lt.s      $f4, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f4.fl < ctx->f22.fl;
    // 0x80029F1C: nop

    // 0x80029F20: bc1t        L_80029F94
    if (c1cs) {
        // 0x80029F24: nop
    
            goto L_80029F94;
    }
    // 0x80029F24: nop

    // 0x80029F28: lh          $t7, 0x10($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X10);
    // 0x80029F2C: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x80029F30: nop

    // 0x80029F34: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80029F38: mul.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x80029F3C: c.lt.s      $f22, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f22.fl < ctx->f10.fl;
    // 0x80029F40: nop

    // 0x80029F44: bc1t        L_80029F94
    if (c1cs) {
        // 0x80029F48: nop
    
            goto L_80029F94;
    }
    // 0x80029F48: nop

    // 0x80029F4C: lh          $t8, 0x8($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X8);
    // 0x80029F50: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x80029F54: nop

    // 0x80029F58: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80029F5C: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x80029F60: c.lt.s      $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f8.fl < ctx->f14.fl;
    // 0x80029F64: nop

    // 0x80029F68: bc1t        L_80029F94
    if (c1cs) {
        // 0x80029F6C: nop
    
            goto L_80029F94;
    }
    // 0x80029F6C: nop

    // 0x80029F70: lh          $t9, 0xE($t1)
    ctx->r25 = MEM_H(ctx->r9, 0XE);
    // 0x80029F74: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x80029F78: nop

    // 0x80029F7C: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80029F80: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x80029F84: c.lt.s      $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.fl < ctx->f6.fl;
    // 0x80029F88: nop

    // 0x80029F8C: bc1fl       L_8002A0A4
    if (!c1cs) {
        // 0x80029F90: addiu       $v0, $a3, 0x3
        ctx->r2 = ADD32(ctx->r7, 0X3);
            goto L_8002A0A4;
    }
    goto skip_0;
    // 0x80029F90: addiu       $v0, $a3, 0x3
    ctx->r2 = ADD32(ctx->r7, 0X3);
    skip_0:
L_80029F94:
    // 0x80029F94: bne         $t4, $a2, L_80029FA4
    if (ctx->r12 != ctx->r6) {
        // 0x80029F98: nop
    
            goto L_80029FA4;
    }
    // 0x80029F98: nop

    // 0x80029F9C: b           L_8002A154
    // 0x80029FA0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8002A154;
    // 0x80029FA0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80029FA4:
    // 0x80029FA4: multu       $a2, $t2
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80029FA8: andi        $a3, $a2, 0xFFFF
    ctx->r7 = ctx->r6 & 0XFFFF;
    // 0x80029FAC: mflo        $t6
    ctx->r14 = lo;
    // 0x80029FB0: addu        $t7, $a1, $t6
    ctx->r15 = ADD32(ctx->r5, ctx->r14);
    // 0x80029FB4: lhu         $a2, 0x0($t7)
    ctx->r6 = MEM_HU(ctx->r15, 0X0);
    // 0x80029FB8: multu       $a3, $t3
    result = U64(U32(ctx->r7)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80029FBC: mflo        $t0
    ctx->r8 = lo;
    // 0x80029FC0: addu        $t8, $a1, $t0
    ctx->r24 = ADD32(ctx->r5, ctx->r8);
    // 0x80029FC4: lh          $t9, 0x6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X6);
    // 0x80029FC8: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80029FCC: nop

    // 0x80029FD0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80029FD4: mul.s       $f4, $f10, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x80029FD8: c.lt.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl < ctx->f12.fl;
    // 0x80029FDC: nop

    // 0x80029FE0: bc1t        L_80029F94
    if (c1cs) {
        // 0x80029FE4: nop
    
            goto L_80029F94;
    }
    // 0x80029FE4: nop

    // 0x80029FE8: addu        $v0, $a0, $t0
    ctx->r2 = ADD32(ctx->r4, ctx->r8);
    // 0x80029FEC: lh          $t6, 0xC($v0)
    ctx->r14 = MEM_H(ctx->r2, 0XC);
    // 0x80029FF0: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x80029FF4: nop

    // 0x80029FF8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80029FFC: mul.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x8002A000: c.lt.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl < ctx->f10.fl;
    // 0x8002A004: nop

    // 0x8002A008: bc1t        L_80029F94
    if (c1cs) {
        // 0x8002A00C: nop
    
            goto L_80029F94;
    }
    // 0x8002A00C: nop

    // 0x8002A010: lh          $t7, 0xA($v0)
    ctx->r15 = MEM_H(ctx->r2, 0XA);
    // 0x8002A014: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8002A018: nop

    // 0x8002A01C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8002A020: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x8002A024: c.lt.s      $f8, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f8.fl < ctx->f22.fl;
    // 0x8002A028: nop

    // 0x8002A02C: bc1t        L_80029F94
    if (c1cs) {
        // 0x8002A030: nop
    
            goto L_80029F94;
    }
    // 0x8002A030: nop

    // 0x8002A034: lh          $t8, 0x10($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X10);
    // 0x8002A038: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x8002A03C: nop

    // 0x8002A040: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8002A044: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x8002A048: c.lt.s      $f22, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f22.fl < ctx->f6.fl;
    // 0x8002A04C: nop

    // 0x8002A050: bc1t        L_80029F94
    if (c1cs) {
        // 0x8002A054: nop
    
            goto L_80029F94;
    }
    // 0x8002A054: nop

    // 0x8002A058: lh          $t9, 0x8($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X8);
    // 0x8002A05C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8002A060: nop

    // 0x8002A064: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8002A068: mul.s       $f4, $f10, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x8002A06C: c.lt.s      $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f4.fl < ctx->f14.fl;
    // 0x8002A070: nop

    // 0x8002A074: bc1t        L_80029F94
    if (c1cs) {
        // 0x8002A078: nop
    
            goto L_80029F94;
    }
    // 0x8002A078: nop

    // 0x8002A07C: lh          $t6, 0xE($v0)
    ctx->r14 = MEM_H(ctx->r2, 0XE);
    // 0x8002A080: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x8002A084: nop

    // 0x8002A088: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8002A08C: mul.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x8002A090: c.lt.s      $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f14.fl < ctx->f10.fl;
    // 0x8002A094: nop

    // 0x8002A098: bc1t        L_80029F94
    if (c1cs) {
        // 0x8002A09C: nop
    
            goto L_80029F94;
    }
    // 0x8002A09C: nop

    // 0x8002A0A0: addiu       $v0, $a3, 0x3
    ctx->r2 = ADD32(ctx->r7, 0X3);
L_8002A0A4:
    // 0x8002A0A4: andi        $t7, $v0, 0xFFFF
    ctx->r15 = ctx->r2 & 0XFFFF;
    // 0x8002A0A8: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_8002A0AC:
    // 0x8002A0AC: multu       $v0, $t2
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002A0B0: mflo        $t8
    ctx->r24 = lo;
    // 0x8002A0B4: addu        $t0, $a1, $t8
    ctx->r8 = ADD32(ctx->r5, ctx->r24);
    // 0x8002A0B8: lhu         $a3, 0x0($t0)
    ctx->r7 = MEM_HU(ctx->r8, 0X0);
    // 0x8002A0BC: multu       $a3, $t5
    result = U64(U32(ctx->r7)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002A0C0: mflo        $t9
    ctx->r25 = lo;
    // 0x8002A0C4: addu        $t1, $v1, $t9
    ctx->r9 = ADD32(ctx->r3, ctx->r25);
    // 0x8002A0C8: lwc1        $f4, 0xC($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0XC);
    // 0x8002A0CC: lwc1        $f0, 0x0($t1)
    ctx->f0.u32l = MEM_W(ctx->r9, 0X0);
    // 0x8002A0D0: lwc1        $f2, 0x4($t1)
    ctx->f2.u32l = MEM_W(ctx->r9, 0X4);
    // 0x8002A0D4: mul.s       $f18, $f4, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x8002A0D8: lwc1        $f16, 0x8($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X8);
    // 0x8002A0DC: mul.s       $f6, $f12, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x8002A0E0: nop

    // 0x8002A0E4: mul.s       $f8, $f14, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x8002A0E8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8002A0EC: mul.s       $f4, $f22, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f22.fl, ctx->f16.fl);
    // 0x8002A0F0: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8002A0F4: add.s       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x8002A0F8: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8002A0FC: c.lt.d      $f10, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f10.d < ctx->f24.d;
    // 0x8002A100: nop

    // 0x8002A104: bc1f        L_8002A128
    if (!c1cs) {
        // 0x8002A108: nop
    
            goto L_8002A128;
    }
    // 0x8002A108: nop

    // 0x8002A10C: lh          $a3, 0x2($t0)
    ctx->r7 = MEM_H(ctx->r8, 0X2);
    // 0x8002A110: bne         $a3, $zero, L_8002A120
    if (ctx->r7 != 0) {
        // 0x8002A114: nop
    
            goto L_8002A120;
    }
    // 0x8002A114: nop

    // 0x8002A118: b           L_8002A154
    // 0x8002A11C: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
        goto L_8002A154;
    // 0x8002A11C: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
L_8002A120:
    // 0x8002A120: b           L_8002A0AC
    // 0x8002A124: andi        $v0, $a3, 0xFFFF
    ctx->r2 = ctx->r7 & 0XFFFF;
        goto L_8002A0AC;
    // 0x8002A124: andi        $v0, $a3, 0xFFFF
    ctx->r2 = ctx->r7 & 0XFFFF;
L_8002A128:
    // 0x8002A128: lh          $a3, 0x4($t0)
    ctx->r7 = MEM_H(ctx->r8, 0X4);
    // 0x8002A12C: bne         $a3, $zero, L_8002A14C
    if (ctx->r7 != 0) {
        // 0x8002A130: nop
    
            goto L_8002A14C;
    }
    // 0x8002A130: nop

    // 0x8002A134: bne         $t4, $a2, L_8002A144
    if (ctx->r12 != ctx->r6) {
        // 0x8002A138: nop
    
            goto L_8002A144;
    }
    // 0x8002A138: nop

    // 0x8002A13C: b           L_8002A154
    // 0x8002A140: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8002A154;
    // 0x8002A140: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8002A144:
    // 0x8002A144: b           L_80029E98
    // 0x8002A148: andi        $v0, $a2, 0xFFFF
    ctx->r2 = ctx->r6 & 0XFFFF;
        goto L_80029E98;
    // 0x8002A148: andi        $v0, $a2, 0xFFFF
    ctx->r2 = ctx->r6 & 0XFFFF;
L_8002A14C:
    // 0x8002A14C: b           L_8002A0AC
    // 0x8002A150: andi        $v0, $a3, 0xFFFF
    ctx->r2 = ctx->r7 & 0XFFFF;
        goto L_8002A0AC;
    // 0x8002A150: andi        $v0, $a3, 0xFFFF
    ctx->r2 = ctx->r7 & 0XFFFF;
L_8002A154:
    // 0x8002A154: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    // 0x8002A158: ldc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X10);
    // 0x8002A15C: ldc1        $f24, 0x18($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X18);
    // 0x8002A160: jr          $ra
    // 0x8002A164: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8002A164: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8003CC18_3D818(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003CC18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003CC1C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003CC20: addiu       $v1, $v1, 0x172C
    ctx->r3 = ADD32(ctx->r3, 0X172C);
    // 0x8003CC24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003CC28: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003CC2C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8003CC30: lui         $t8, 0x801C
    ctx->r24 = S32(0X801C << 16);
    // 0x8003CC34: lbu         $a2, 0x0($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X0);
    // 0x8003CC38: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x8003CC3C: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8003CC40: lbu         $t7, 0x2972($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X2972);
    // 0x8003CC44: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003CC48: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8003CC4C: beq         $t7, $zero, L_8003CC84
    if (ctx->r15 == 0) {
        // 0x8003CC50: lui         $t3, 0x801C
        ctx->r11 = S32(0X801C << 16);
            goto L_8003CC84;
    }
    // 0x8003CC50: lui         $t3, 0x801C
    ctx->r11 = S32(0X801C << 16);
    // 0x8003CC54: lw          $t8, 0x1728($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X1728);
    // 0x8003CC58: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x8003CC5C: andi        $t0, $t9, 0x7FFF
    ctx->r8 = ctx->r25 & 0X7FFF;
    // 0x8003CC60: sltiu       $at, $t0, 0x100
    ctx->r1 = ctx->r8 < 0X100 ? 1 : 0;
    // 0x8003CC64: bne         $at, $zero, L_8003CC84
    if (ctx->r1 != 0) {
        // 0x8003CC68: nop
    
            goto L_8003CC84;
    }
    // 0x8003CC68: nop

    // 0x8003CC6C: addiu       $a2, $a2, 0xA
    ctx->r6 = ADD32(ctx->r6, 0XA);
    // 0x8003CC70: andi        $t1, $a2, 0xFF
    ctx->r9 = ctx->r6 & 0XFF;
    // 0x8003CC74: slti        $at, $t1, 0x80
    ctx->r1 = SIGNED(ctx->r9) < 0X80 ? 1 : 0;
    // 0x8003CC78: bne         $at, $zero, L_8003CC84
    if (ctx->r1 != 0) {
        // 0x8003CC7C: or          $a2, $t1, $zero
        ctx->r6 = ctx->r9 | 0;
            goto L_8003CC84;
    }
    // 0x8003CC7C: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    // 0x8003CC80: addiu       $a2, $zero, 0x7F
    ctx->r6 = ADD32(0, 0X7F);
L_8003CC84:
    // 0x8003CC84: lw          $v0, 0x1728($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1728);
    // 0x8003CC88: lui         $t5, 0x801C
    ctx->r13 = S32(0X801C << 16);
    // 0x8003CC8C: lbu         $t2, 0x10($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X10);
    // 0x8003CC90: beql        $t2, $a2, L_8003CCC0
    if (ctx->r10 == ctx->r6) {
        // 0x8003CC94: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8003CCC0;
    }
    goto skip_0;
    // 0x8003CC94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8003CC98: sb          $a2, 0x10($v0)
    MEM_B(0X10, ctx->r2) = ctx->r6;
    // 0x8003CC9C: lbu         $t3, 0x9CC($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X9CC);
    // 0x8003CCA0: addiu       $t5, $t5, 0xA68
    ctx->r13 = ADD32(ctx->r13, 0XA68);
    // 0x8003CCA4: lw          $a0, -0x5DD0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5DD0);
    // 0x8003CCA8: sll         $t4, $t3, 3
    ctx->r12 = S32(ctx->r11 << 3);
    // 0x8003CCAC: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x8003CCB0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8003CCB4: jal         0x80048640
    // 0x8003CCB8: addu        $a1, $t4, $t5
    ctx->r5 = ADD32(ctx->r12, ctx->r13);
    alSynSetFXMix(rdram, ctx);
        goto after_0;
    // 0x8003CCB8: addu        $a1, $t4, $t5
    ctx->r5 = ADD32(ctx->r12, ctx->r13);
    after_0:
    // 0x8003CCBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003CCC0:
    // 0x8003CCC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003CCC4: jr          $ra
    // 0x8003CCC8: nop

    TRACE_RETURN()
    return;
    // 0x8003CCC8: nop

;}
RECOMP_FUNC void func_8003C790_3D390(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003C790: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003C794: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003C798: addiu       $v1, $v1, 0x1728
    ctx->r3 = ADD32(ctx->r3, 0X1728);
    // 0x8003C79C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003C7A0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003C7A4: lbu         $t6, 0x8C($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X8C);
    // 0x8003C7A8: bnel        $t6, $zero, L_8003C7F4
    if (ctx->r14 != 0) {
        // 0x8003C7AC: lw          $t3, 0x28($v0)
        ctx->r11 = MEM_W(ctx->r2, 0X28);
            goto L_8003C7F4;
    }
    goto skip_0;
    // 0x8003C7AC: lw          $t3, 0x28($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X28);
    skip_0:
    // 0x8003C7B0: lbu         $t7, 0x88($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X88);
    // 0x8003C7B4: sb          $t7, 0x7C($v0)
    MEM_B(0X7C, ctx->r2) = ctx->r15;
    // 0x8003C7B8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003C7BC: lbu         $t8, 0x89($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X89);
    // 0x8003C7C0: sb          $t8, 0x7D($v0)
    MEM_B(0X7D, ctx->r2) = ctx->r24;
    // 0x8003C7C4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003C7C8: lw          $t9, 0x28($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X28);
    // 0x8003C7CC: sw          $t9, 0x80($v0)
    MEM_W(0X80, ctx->r2) = ctx->r25;
    // 0x8003C7D0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003C7D4: lw          $t0, 0x28($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X28);
    // 0x8003C7D8: lh          $t1, 0x8A($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X8A);
    // 0x8003C7DC: subu        $t2, $t0, $t1
    ctx->r10 = SUB32(ctx->r8, ctx->r9);
    // 0x8003C7E0: jal         0x8003C498
    // 0x8003C7E4: sw          $t2, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r10;
    func_8003C498_3D098(rdram, ctx);
        goto after_0;
    // 0x8003C7E4: sw          $t2, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r10;
    after_0:
    // 0x8003C7E8: b           L_8003C814
    // 0x8003C7EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8003C814;
    // 0x8003C7EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003C7F0: lw          $t3, 0x28($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X28);
L_8003C7F4:
    // 0x8003C7F4: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8003C7F8: sw          $t3, 0x80($v0)
    MEM_W(0X80, ctx->r2) = ctx->r11;
    // 0x8003C7FC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003C800: lw          $t4, 0x84($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X84);
    // 0x8003C804: sw          $t4, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r12;
    // 0x8003C808: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x8003C80C: sb          $t5, 0x7D($t6)
    MEM_B(0X7D, ctx->r14) = ctx->r13;
    // 0x8003C810: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003C814:
    // 0x8003C814: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003C818: jr          $ra
    // 0x8003C81C: nop

    TRACE_RETURN()
    return;
    // 0x8003C81C: nop

;}
RECOMP_FUNC void func_8003D68C_3E28C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003D68C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8003D690: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8003D694: lui         $s1, 0x8007
    ctx->r17 = S32(0X8007 << 16);
    // 0x8003D698: addiu       $s1, $s1, 0x7858
    ctx->r17 = ADD32(ctx->r17, 0X7858);
    // 0x8003D69C: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x8003D6A0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8003D6A4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8003D6A8: bne         $t6, $zero, L_8003D6B8
    if (ctx->r14 != 0) {
        // 0x8003D6AC: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_8003D6B8;
    }
    // 0x8003D6AC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8003D6B0: b           L_8003D9A0
    // 0x8003D6B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8003D9A0;
    // 0x8003D6B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8003D6B8:
    // 0x8003D6B8: lui         $t7, 0x801C
    ctx->r15 = S32(0X801C << 16);
    // 0x8003D6BC: lbu         $t7, 0x78FC($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X78FC);
    // 0x8003D6C0: beq         $t7, $zero, L_8003D6D0
    if (ctx->r15 == 0) {
        // 0x8003D6C4: nop
    
            goto L_8003D6D0;
    }
    // 0x8003D6C4: nop

    // 0x8003D6C8: b           L_8003D9A0
    // 0x8003D6CC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8003D9A0;
    // 0x8003D6CC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8003D6D0:
    // 0x8003D6D0: jal         0x8003D17C
    // 0x8003D6D4: nop

    func_8003D17C_3DD7C(rdram, ctx);
        goto after_0;
    // 0x8003D6D4: nop

    after_0:
    // 0x8003D6D8: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x8003D6DC: lui         $s2, 0x801C
    ctx->r18 = S32(0X801C << 16);
    // 0x8003D6E0: addiu       $s2, $s2, 0x77E0
    ctx->r18 = ADD32(ctx->r18, 0X77E0);
    // 0x8003D6E4: beql        $s0, $zero, L_8003D9A0
    if (ctx->r16 == 0) {
        // 0x8003D6E8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8003D9A0;
    }
    goto skip_0;
    // 0x8003D6E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x8003D6EC: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
L_8003D6F0:
    // 0x8003D6F0: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x8003D6F4: sltiu       $at, $t9, 0x7
    ctx->r1 = ctx->r25 < 0X7 ? 1 : 0;
    // 0x8003D6F8: beq         $at, $zero, L_8003D7AC
    if (ctx->r1 == 0) {
        // 0x8003D6FC: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_8003D7AC;
    }
    // 0x8003D6FC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8003D700: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8003D704: addu        $at, $at, $t9
    gpr jr_addend_8003D70C = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8003D708: lw          $t9, -0x306C($at)
    ctx->r25 = ADD32(ctx->r1, -0X306C);
    // 0x8003D70C: jr          $t9
    // 0x8003D710: nop

    switch (jr_addend_8003D70C >> 2) {
        case 0: goto L_8003D714; break;
        case 1: goto L_8003D724; break;
        case 2: goto L_8003D734; break;
        case 3: goto L_8003D744; break;
        case 4: goto L_8003D754; break;
        case 5: goto L_8003D778; break;
        case 6: goto L_8003D79C; break;
        default: switch_error(__func__, 0x8003D70C, 0x8007CF94);
    }
    // 0x8003D710: nop

L_8003D714:
    // 0x8003D714: jal         0x8003DBEC
    // 0x8003D718: nop

    func_8003DBEC_3E7EC(rdram, ctx);
        goto after_1;
    // 0x8003D718: nop

    after_1:
    // 0x8003D71C: b           L_8003D9A0
    // 0x8003D720: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8003D9A0;
    // 0x8003D720: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8003D724:
    // 0x8003D724: jal         0x8003E81C
    // 0x8003D728: nop

    func_8003E81C_3F41C(rdram, ctx);
        goto after_2;
    // 0x8003D728: nop

    after_2:
    // 0x8003D72C: b           L_8003D9A0
    // 0x8003D730: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8003D9A0;
    // 0x8003D730: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8003D734:
    // 0x8003D734: jal         0x8003E3EC
    // 0x8003D738: nop

    func_8003E3EC_3EFEC(rdram, ctx);
        goto after_3;
    // 0x8003D738: nop

    after_3:
    // 0x8003D73C: b           L_8003D9A0
    // 0x8003D740: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8003D9A0;
    // 0x8003D740: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8003D744:
    // 0x8003D744: jal         0x8003E4C0
    // 0x8003D748: nop

    func_8003E4C0_3F0C0(rdram, ctx);
        goto after_4;
    // 0x8003D748: nop

    after_4:
    // 0x8003D74C: b           L_8003D9A0
    // 0x8003D750: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8003D9A0;
    // 0x8003D750: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8003D754:
    // 0x8003D754: jal         0x8003E5EC
    // 0x8003D758: nop

    func_8003E5EC_3F1EC(rdram, ctx);
        goto after_5;
    // 0x8003D758: nop

    after_5:
    // 0x8003D75C: lw          $t0, 0x0($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X0);
    // 0x8003D760: bne         $t0, $zero, L_8003D770
    if (ctx->r8 != 0) {
        // 0x8003D764: nop
    
            goto L_8003D770;
    }
    // 0x8003D764: nop

    // 0x8003D768: b           L_8003D7AC
    // 0x8003D76C: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
        goto L_8003D7AC;
    // 0x8003D76C: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
L_8003D770:
    // 0x8003D770: b           L_8003D9A0
    // 0x8003D774: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8003D9A0;
    // 0x8003D774: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8003D778:
    // 0x8003D778: jal         0x8003E620
    // 0x8003D77C: nop

    func_8003E620_3F220(rdram, ctx);
        goto after_6;
    // 0x8003D77C: nop

    after_6:
    // 0x8003D780: lw          $t1, 0x0($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X0);
    // 0x8003D784: bne         $t1, $zero, L_8003D794
    if (ctx->r9 != 0) {
        // 0x8003D788: nop
    
            goto L_8003D794;
    }
    // 0x8003D788: nop

    // 0x8003D78C: b           L_8003D7AC
    // 0x8003D790: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
        goto L_8003D7AC;
    // 0x8003D790: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
L_8003D794:
    // 0x8003D794: b           L_8003D9A0
    // 0x8003D798: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8003D9A0;
    // 0x8003D798: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8003D79C:
    // 0x8003D79C: jal         0x8003E654
    // 0x8003D7A0: nop

    func_8003E654_3F254(rdram, ctx);
        goto after_7;
    // 0x8003D7A0: nop

    after_7:
    // 0x8003D7A4: b           L_8003D9A0
    // 0x8003D7A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8003D9A0;
    // 0x8003D7A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8003D7AC:
    // 0x8003D7AC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8003D7B0: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x8003D7B4: ori         $at, $at, 0x7FFC
    ctx->r1 = ctx->r1 | 0X7FFC;
    // 0x8003D7B8: addu        $t3, $v0, $at
    ctx->r11 = ADD32(ctx->r2, ctx->r1);
    // 0x8003D7BC: addiu       $t2, $s0, 0x4
    ctx->r10 = ADD32(ctx->r16, 0X4);
    // 0x8003D7C0: sltiu       $at, $t3, 0x1F
    ctx->r1 = ctx->r11 < 0X1F ? 1 : 0;
    // 0x8003D7C4: beq         $at, $zero, L_8003D988
    if (ctx->r1 == 0) {
        // 0x8003D7C8: sw          $t2, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->r10;
            goto L_8003D988;
    }
    // 0x8003D7C8: sw          $t2, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r10;
    // 0x8003D7CC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8003D7D0: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8003D7D4: addu        $at, $at, $t3
    gpr jr_addend_8003D7DC = ctx->r11;
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8003D7D8: lw          $t3, -0x3050($at)
    ctx->r11 = ADD32(ctx->r1, -0X3050);
    // 0x8003D7DC: jr          $t3
    // 0x8003D7E0: nop

    switch (jr_addend_8003D7DC >> 2) {
        case 0: goto L_8003D7E4; break;
        case 1: goto L_8003D988; break;
        case 2: goto L_8003D800; break;
        case 3: goto L_8003D988; break;
        case 4: goto L_8003D854; break;
        case 5: goto L_8003D988; break;
        case 6: goto L_8003D870; break;
        case 7: goto L_8003D888; break;
        case 8: goto L_8003D988; break;
        case 9: goto L_8003D988; break;
        case 10: goto L_8003D988; break;
        case 11: goto L_8003D988; break;
        case 12: goto L_8003D8A8; break;
        case 13: goto L_8003D8F0; break;
        case 14: goto L_8003D988; break;
        case 15: goto L_8003D988; break;
        case 16: goto L_8003D988; break;
        case 17: goto L_8003D988; break;
        case 18: goto L_8003D988; break;
        case 19: goto L_8003D988; break;
        case 20: goto L_8003D988; break;
        case 21: goto L_8003D988; break;
        case 22: goto L_8003D988; break;
        case 23: goto L_8003D988; break;
        case 24: goto L_8003D988; break;
        case 25: goto L_8003D988; break;
        case 26: goto L_8003D988; break;
        case 27: goto L_8003D988; break;
        case 28: goto L_8003D90C; break;
        case 29: goto L_8003D928; break;
        case 30: goto L_8003D944; break;
        default: switch_error(__func__, 0x8003D7DC, 0x8007CFB0);
    }
    // 0x8003D7E0: nop

L_8003D7E4:
    // 0x8003D7E4: jal         0x8003DB0C
    // 0x8003D7E8: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    func_8003DB0C_3E70C(rdram, ctx);
        goto after_8;
    // 0x8003D7E8: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    after_8:
    // 0x8003D7EC: jal         0x8003DE48
    // 0x8003D7F0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8003DE48_3EA48(rdram, ctx);
        goto after_9;
    // 0x8003D7F0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_9:
    // 0x8003D7F4: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x8003D7F8: b           L_8003D994
    // 0x8003D7FC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
        goto L_8003D994;
    // 0x8003D7FC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_8003D800:
    // 0x8003D800: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x8003D804: addiu       $t4, $s0, 0x4
    ctx->r12 = ADD32(ctx->r16, 0X4);
    // 0x8003D808: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8003D80C: sw          $t4, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r12;
    // 0x8003D810: addiu       $t5, $t4, 0x4
    ctx->r13 = ADD32(ctx->r12, 0X4);
    // 0x8003D814: lw          $a0, 0x0($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X0);
    // 0x8003D818: sw          $t5, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r13;
    // 0x8003D81C: lw          $a2, 0x0($t5)
    ctx->r6 = MEM_W(ctx->r13, 0X0);
    // 0x8003D820: addiu       $t6, $t5, 0x4
    ctx->r14 = ADD32(ctx->r13, 0X4);
    // 0x8003D824: sw          $t6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r14;
    // 0x8003D828: jal         0x8003D9B8
    // 0x8003D82C: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    func_8003D9B8_3E5B8(rdram, ctx);
        goto after_10;
    // 0x8003D82C: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    after_10:
    // 0x8003D830: bne         $v0, $zero, L_8003D84C
    if (ctx->r2 != 0) {
        // 0x8003D834: nop
    
            goto L_8003D84C;
    }
    // 0x8003D834: nop

    // 0x8003D838: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x8003D83C: addiu       $t8, $t7, 0x4
    ctx->r24 = ADD32(ctx->r15, 0X4);
    // 0x8003D840: sw          $t8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r24;
    // 0x8003D844: addiu       $t0, $t8, 0x4
    ctx->r8 = ADD32(ctx->r24, 0X4);
    // 0x8003D848: sw          $t0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r8;
L_8003D84C:
    // 0x8003D84C: b           L_8003D994
    // 0x8003D850: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
        goto L_8003D994;
    // 0x8003D850: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
L_8003D854:
    // 0x8003D854: jal         0x8003D428
    // 0x8003D858: nop

    func_8003D428_3E028(rdram, ctx);
        goto after_11;
    // 0x8003D858: nop

    after_11:
    // 0x8003D85C: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x8003D860: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003D864: sb          $t1, 0x7930($at)
    MEM_B(0X7930, ctx->r1) = ctx->r9;
    // 0x8003D868: b           L_8003D9A0
    // 0x8003D86C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8003D9A0;
    // 0x8003D86C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8003D870:
    // 0x8003D870: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
    // 0x8003D874: jal         0x8003DE48
    // 0x8003D878: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
    func_8003DE48_3EA48(rdram, ctx);
        goto after_12;
    // 0x8003D878: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
    after_12:
    // 0x8003D87C: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x8003D880: b           L_8003D994
    // 0x8003D884: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
        goto L_8003D994;
    // 0x8003D884: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_8003D888:
    // 0x8003D888: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x8003D88C: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
    // 0x8003D890: addiu       $t3, $s0, 0x4
    ctx->r11 = ADD32(ctx->r16, 0X4);
    // 0x8003D894: sw          $t3, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r11;
    // 0x8003D898: jalr        $a2
    // 0x8003D89C: nop

    LOOKUP_FUNC(ctx->r6)(rdram, ctx);
        goto after_13;
    // 0x8003D89C: nop

    after_13:
    // 0x8003D8A0: b           L_8003D994
    // 0x8003D8A4: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
        goto L_8003D994;
    // 0x8003D8A4: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
L_8003D8A8:
    // 0x8003D8A8: lw          $t4, 0x0($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X0);
    // 0x8003D8AC: jal         0x8003DE48
    // 0x8003D8B0: lw          $a0, 0x0($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X0);
    func_8003DE48_3EA48(rdram, ctx);
        goto after_14;
    // 0x8003D8B0: lw          $a0, 0x0($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X0);
    after_14:
    // 0x8003D8B4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003D8B8: jal         0x8003DBEC
    // 0x8003D8BC: sw          $v0, 0x77E8($at)
    MEM_W(0X77E8, ctx->r1) = ctx->r2;
    func_8003DBEC_3E7EC(rdram, ctx);
        goto after_15;
    // 0x8003D8BC: sw          $v0, 0x77E8($at)
    MEM_W(0X77E8, ctx->r1) = ctx->r2;
    after_15:
    // 0x8003D8C0: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x8003D8C4: beq         $s0, $zero, L_8003D994
    if (ctx->r16 == 0) {
        // 0x8003D8C8: nop
    
            goto L_8003D994;
    }
    // 0x8003D8C8: nop

    // 0x8003D8CC: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x8003D8D0: addiu       $t5, $s0, 0x4
    ctx->r13 = ADD32(ctx->r16, 0X4);
    // 0x8003D8D4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8003D8D8: bne         $t6, $at, L_8003D8E8
    if (ctx->r14 != ctx->r1) {
        // 0x8003D8DC: sw          $t5, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->r13;
            goto L_8003D8E8;
    }
    // 0x8003D8DC: sw          $t5, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r13;
    // 0x8003D8E0: b           L_8003D994
    // 0x8003D8E4: or          $s0, $t5, $zero
    ctx->r16 = ctx->r13 | 0;
        goto L_8003D994;
    // 0x8003D8E4: or          $s0, $t5, $zero
    ctx->r16 = ctx->r13 | 0;
L_8003D8E8:
    // 0x8003D8E8: b           L_8003D994
    // 0x8003D8EC: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
        goto L_8003D994;
    // 0x8003D8EC: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
L_8003D8F0:
    // 0x8003D8F0: jal         0x8003E6C0
    // 0x8003D8F4: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    func_8003E6C0_3F2C0(rdram, ctx);
        goto after_16;
    // 0x8003D8F4: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    after_16:
    // 0x8003D8F8: jal         0x8003DE48
    // 0x8003D8FC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8003DE48_3EA48(rdram, ctx);
        goto after_17;
    // 0x8003D8FC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_17:
    // 0x8003D900: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x8003D904: b           L_8003D994
    // 0x8003D908: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
        goto L_8003D994;
    // 0x8003D908: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_8003D90C:
    // 0x8003D90C: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x8003D910: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8003D914: addiu       $t7, $s0, 0x4
    ctx->r15 = ADD32(ctx->r16, 0X4);
    // 0x8003D918: jal         0x80024038
    // 0x8003D91C: sw          $t7, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r15;
    func_80024038_24C38(rdram, ctx);
        goto after_18;
    // 0x8003D91C: sw          $t7, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r15;
    after_18:
    // 0x8003D920: b           L_8003D994
    // 0x8003D924: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
        goto L_8003D994;
    // 0x8003D924: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
L_8003D928:
    // 0x8003D928: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x8003D92C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8003D930: addiu       $t8, $s0, 0x4
    ctx->r24 = ADD32(ctx->r16, 0X4);
    // 0x8003D934: jal         0x80024088
    // 0x8003D938: sw          $t8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r24;
    func_80024088_24C88(rdram, ctx);
        goto after_19;
    // 0x8003D938: sw          $t8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r24;
    after_19:
    // 0x8003D93C: b           L_8003D994
    // 0x8003D940: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
        goto L_8003D994;
    // 0x8003D940: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
L_8003D944:
    // 0x8003D944: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x8003D948: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8003D94C: addiu       $t9, $s0, 0x4
    ctx->r25 = ADD32(ctx->r16, 0X4);
    // 0x8003D950: jal         0x800240DC
    // 0x8003D954: sw          $t9, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r25;
    func_800240DC_24CDC(rdram, ctx);
        goto after_20;
    // 0x8003D954: sw          $t9, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r25;
    after_20:
    // 0x8003D958: beql        $v0, $zero, L_8003D978
    if (ctx->r2 == 0) {
        // 0x8003D95C: lw          $t1, 0x0($s1)
        ctx->r9 = MEM_W(ctx->r17, 0X0);
            goto L_8003D978;
    }
    goto skip_1;
    // 0x8003D95C: lw          $t1, 0x0($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X0);
    skip_1:
    // 0x8003D960: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x8003D964: jal         0x8003DE48
    // 0x8003D968: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    func_8003DE48_3EA48(rdram, ctx);
        goto after_21;
    // 0x8003D968: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    after_21:
    // 0x8003D96C: b           L_8003D980
    // 0x8003D970: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
        goto L_8003D980;
    // 0x8003D970: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x8003D974: lw          $t1, 0x0($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X0);
L_8003D978:
    // 0x8003D978: addiu       $t2, $t1, 0x4
    ctx->r10 = ADD32(ctx->r9, 0X4);
    // 0x8003D97C: sw          $t2, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r10;
L_8003D980:
    // 0x8003D980: b           L_8003D994
    // 0x8003D984: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
        goto L_8003D994;
    // 0x8003D984: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
L_8003D988:
    // 0x8003D988: jal         0x8003D428
    // 0x8003D98C: nop

    func_8003D428_3E028(rdram, ctx);
        goto after_22;
    // 0x8003D98C: nop

    after_22:
    // 0x8003D990: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
L_8003D994:
    // 0x8003D994: bnel        $s0, $zero, L_8003D6F0
    if (ctx->r16 != 0) {
        // 0x8003D998: lw          $t8, 0x0($s2)
        ctx->r24 = MEM_W(ctx->r18, 0X0);
            goto L_8003D6F0;
    }
    goto skip_2;
    // 0x8003D998: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
    skip_2:
    // 0x8003D99C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8003D9A0:
    // 0x8003D9A0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8003D9A4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8003D9A8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8003D9AC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8003D9B0: jr          $ra
    // 0x8003D9B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8003D9B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800061B0_6DB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800061B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800061B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800061B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800061BC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800061C0: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x800061C4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800061C8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x800061CC: sh          $t6, 0x7A76($at)
    MEM_H(0X7A76, ctx->r1) = ctx->r14;
    // 0x800061D0: andi        $a0, $a3, 0xFFFF
    ctx->r4 = ctx->r7 & 0XFFFF;
    // 0x800061D4: jal         0x80006274
    // 0x800061D8: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_80006274_6E74(rdram, ctx);
        goto after_0;
    // 0x800061D8: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_0:
    // 0x800061DC: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x800061E0: addiu       $v0, $v0, -0x3A38
    ctx->r2 = ADD32(ctx->r2, -0X3A38);
    // 0x800061E4: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x800061E8: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x800061EC: addiu       $t7, $zero, 0x80
    ctx->r15 = ADD32(0, 0X80);
    // 0x800061F0: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800061F4: sb          $t7, -0x51D7($at)
    MEM_B(-0X51D7, ctx->r1) = ctx->r15;
    // 0x800061F8: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x800061FC: lbu         $t9, 0x1B($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X1B);
    // 0x80006200: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80006204: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80006208: addiu       $t0, $t9, 0x220
    ctx->r8 = ADD32(ctx->r25, 0X220);
    // 0x8000620C: sh          $t0, -0x5020($at)
    MEM_H(-0X5020, ctx->r1) = ctx->r8;
    // 0x80006210: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80006214: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80006218: jr          $ra
    // 0x8000621C: nop

    TRACE_RETURN()
    return;
    // 0x8000621C: nop

;}
RECOMP_FUNC void func_8003A1C4_3ADC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003A1C4: lui         $t6, 0x801C
    ctx->r14 = S32(0X801C << 16);
    // 0x8003A1C8: lhu         $t6, 0x9D8($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X9D8);
    // 0x8003A1CC: addiu       $t7, $zero, 0xC
    ctx->r15 = ADD32(0, 0XC);
    // 0x8003A1D0: slti        $at, $t6, 0x100
    ctx->r1 = SIGNED(ctx->r14) < 0X100 ? 1 : 0;
    // 0x8003A1D4: beq         $at, $zero, L_8003A1E0
    if (ctx->r1 == 0) {
        // 0x8003A1D8: lui         $at, 0x801C
        ctx->r1 = S32(0X801C << 16);
            goto L_8003A1E0;
    }
    // 0x8003A1D8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003A1DC: sb          $t7, 0x9DA($at)
    MEM_B(0X9DA, ctx->r1) = ctx->r15;
L_8003A1E0:
    // 0x8003A1E0: jr          $ra
    // 0x8003A1E4: nop

    TRACE_RETURN()
    return;
    // 0x8003A1E4: nop

;}
RECOMP_FUNC void func_80023D80_24980(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80023D80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80023D84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80023D88: jal         0x800238D0
    // 0x80023D8C: nop

    func_800238D0_244D0(rdram, ctx);
        goto after_0;
    // 0x80023D8C: nop

    after_0:
    // 0x80023D90: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80023D94: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x80023D98: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80023D9C:
    // 0x80023D9C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
L_80023DA0:
    // 0x80023DA0: bnel        $v0, $v1, L_80023DA0
    if (ctx->r2 != ctx->r3) {
        // 0x80023DA4: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_80023DA0;
    }
    goto skip_0;
    // 0x80023DA4: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    skip_0:
    // 0x80023DA8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80023DAC: bnel        $a0, $v1, L_80023D9C
    if (ctx->r4 != ctx->r3) {
        // 0x80023DB0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80023D9C;
    }
    goto skip_1;
    // 0x80023DB0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
    // 0x80023DB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80023DB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80023DBC: jr          $ra
    // 0x80023DC0: nop

    TRACE_RETURN()
    return;
    // 0x80023DC0: nop

;}
RECOMP_FUNC void func_8000DBCC_E7CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000DBCC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8000DBD0: jr          $ra
    // 0x8000DBD4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x8000DBD4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_8002A458_2B058(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002A458: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x8002A45C: lwc1        $f4, 0xD8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x8002A460: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x8002A464: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8002A468: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8002A46C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8002A470: c.eq.d      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.d == ctx->f6.d;
    // 0x8002A474: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8002A478: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8002A47C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8002A480: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8002A484: bc1f        L_8002A534
    if (!c1cs) {
        // 0x8002A488: sw          $a3, 0xD4($sp)
        MEM_W(0XD4, ctx->r29) = ctx->r7;
            goto L_8002A534;
    }
    // 0x8002A488: sw          $a3, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r7;
    // 0x8002A48C: lwc1        $f8, 0xDC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x8002A490: lwc1        $f16, 0xE0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x8002A494: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8002A498: c.eq.d      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.d == ctx->f10.d;
    // 0x8002A49C: nop

    // 0x8002A4A0: bc1fl       L_8002A538
    if (!c1cs) {
        // 0x8002A4A4: lwc1        $f4, 0xD8($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0XD8);
            goto L_8002A538;
    }
    goto skip_0;
    // 0x8002A4A4: lwc1        $f4, 0xD8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD8);
    skip_0:
    // 0x8002A4A8: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x8002A4AC: c.eq.d      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.d == ctx->f18.d;
    // 0x8002A4B0: nop

    // 0x8002A4B4: bc1fl       L_8002A538
    if (!c1cs) {
        // 0x8002A4B8: lwc1        $f4, 0xD8($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0XD8);
            goto L_8002A538;
    }
    goto skip_1;
    // 0x8002A4B8: lwc1        $f4, 0xD8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD8);
    skip_1:
    // 0x8002A4BC: jal         0x80029E08
    // 0x8002A4C0: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    func_80029E08_2AA08(rdram, ctx);
        goto after_0;
    // 0x8002A4C0: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    after_0:
    // 0x8002A4C4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8002A4C8: addiu       $t6, $sp, 0x80
    ctx->r14 = ADD32(ctx->r29, 0X80);
    // 0x8002A4CC: sh          $v0, 0xB8($sp)
    MEM_H(0XB8, ctx->r29) = ctx->r2;
    // 0x8002A4D0: sb          $zero, 0xB4($sp)
    MEM_B(0XB4, ctx->r29) = 0;
    // 0x8002A4D4: sh          $zero, 0xB6($sp)
    MEM_H(0XB6, ctx->r29) = 0;
    // 0x8002A4D8: sw          $zero, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = 0;
    // 0x8002A4DC: sw          $zero, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = 0;
    // 0x8002A4E0: addiu       $t9, $t6, 0x48
    ctx->r25 = ADD32(ctx->r14, 0X48);
    // 0x8002A4E4: or          $t0, $s0, $zero
    ctx->r8 = ctx->r16 | 0;
    // 0x8002A4E8: swc1        $f0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f0.u32l;
    // 0x8002A4EC: swc1        $f0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f0.u32l;
    // 0x8002A4F0: swc1        $f0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f0.u32l;
    // 0x8002A4F4: swc1        $f0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f0.u32l;
    // 0x8002A4F8: swc1        $f0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f0.u32l;
    // 0x8002A4FC: swc1        $f0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f0.u32l;
    // 0x8002A500: swc1        $f0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f0.u32l;
    // 0x8002A504: swc1        $f0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f0.u32l;
L_8002A508:
    // 0x8002A508: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x8002A50C: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x8002A510: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x8002A514: sw          $at, -0xC($t0)
    MEM_W(-0XC, ctx->r8) = ctx->r1;
    // 0x8002A518: lw          $at, -0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X8);
    // 0x8002A51C: sw          $at, -0x8($t0)
    MEM_W(-0X8, ctx->r8) = ctx->r1;
    // 0x8002A520: lw          $at, -0x4($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X4);
    // 0x8002A524: bne         $t6, $t9, L_8002A508
    if (ctx->r14 != ctx->r25) {
        // 0x8002A528: sw          $at, -0x4($t0)
        MEM_W(-0X4, ctx->r8) = ctx->r1;
            goto L_8002A508;
    }
    // 0x8002A528: sw          $at, -0x4($t0)
    MEM_W(-0X4, ctx->r8) = ctx->r1;
    // 0x8002A52C: b           L_8002A704
    // 0x8002A530: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_8002A704;
    // 0x8002A530: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_8002A534:
    // 0x8002A534: lwc1        $f4, 0xD8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD8);
L_8002A538:
    // 0x8002A538: lwc1        $f6, 0xDC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x8002A53C: lwc1        $f8, 0xE0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x8002A540: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x8002A544: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x8002A548: addiu       $a0, $sp, 0x80
    ctx->r4 = ADD32(ctx->r29, 0X80);
    // 0x8002A54C: lw          $a3, 0xD4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XD4);
    // 0x8002A550: swc1        $f12, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f12.u32l;
    // 0x8002A554: swc1        $f14, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f14.u32l;
    // 0x8002A558: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8002A55C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x8002A560: jal         0x80028B28
    // 0x8002A564: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    func_80028B28_29728(rdram, ctx);
        goto after_1;
    // 0x8002A564: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x8002A568: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8002A56C: lwc1        $f12, 0xCC($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x8002A570: lwc1        $f14, 0xD0($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x8002A574: lwc1        $f10, 0xD4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x8002A578: lwc1        $f16, 0xD8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x8002A57C: lwc1        $f18, 0xDC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x8002A580: lwc1        $f4, 0xE0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x8002A584: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8002A588: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x8002A58C: sw          $zero, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = 0;
    // 0x8002A590: sw          $zero, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = 0;
    // 0x8002A594: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8002A598: swc1        $f12, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f12.u32l;
    // 0x8002A59C: swc1        $f14, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f14.u32l;
    // 0x8002A5A0: swc1        $f10, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f10.u32l;
    // 0x8002A5A4: swc1        $f16, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f16.u32l;
    // 0x8002A5A8: swc1        $f18, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f18.u32l;
    // 0x8002A5AC: jal         0x80032320
    // 0x8002A5B0: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    func_80032320_32F20(rdram, ctx);
        goto after_2;
    // 0x8002A5B0: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x8002A5B4: lh          $v0, 0xB8($sp)
    ctx->r2 = MEM_H(ctx->r29, 0XB8);
    // 0x8002A5B8: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x8002A5BC: lh          $t1, 0x70($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X70);
    // 0x8002A5C0: bne         $v0, $zero, L_8002A604
    if (ctx->r2 != 0) {
        // 0x8002A5C4: addiu       $v1, $zero, 0x7FFF
        ctx->r3 = ADD32(0, 0X7FFF);
            goto L_8002A604;
    }
    // 0x8002A5C4: addiu       $v1, $zero, 0x7FFF
    ctx->r3 = ADD32(0, 0X7FFF);
    // 0x8002A5C8: bne         $t1, $zero, L_8002A604
    if (ctx->r9 != 0) {
        // 0x8002A5CC: or          $t4, $a0, $zero
        ctx->r12 = ctx->r4 | 0;
            goto L_8002A604;
    }
    // 0x8002A5CC: or          $t4, $a0, $zero
    ctx->r12 = ctx->r4 | 0;
    // 0x8002A5D0: or          $t5, $s0, $zero
    ctx->r13 = ctx->r16 | 0;
    // 0x8002A5D4: addiu       $t3, $a0, 0x48
    ctx->r11 = ADD32(ctx->r4, 0X48);
L_8002A5D8:
    // 0x8002A5D8: lw          $at, 0x0($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X0);
    // 0x8002A5DC: addiu       $t4, $t4, 0xC
    ctx->r12 = ADD32(ctx->r12, 0XC);
    // 0x8002A5E0: addiu       $t5, $t5, 0xC
    ctx->r13 = ADD32(ctx->r13, 0XC);
    // 0x8002A5E4: sw          $at, -0xC($t5)
    MEM_W(-0XC, ctx->r13) = ctx->r1;
    // 0x8002A5E8: lw          $at, -0x8($t4)
    ctx->r1 = MEM_W(ctx->r12, -0X8);
    // 0x8002A5EC: sw          $at, -0x8($t5)
    MEM_W(-0X8, ctx->r13) = ctx->r1;
    // 0x8002A5F0: lw          $at, -0x4($t4)
    ctx->r1 = MEM_W(ctx->r12, -0X4);
    // 0x8002A5F4: bne         $t4, $t3, L_8002A5D8
    if (ctx->r12 != ctx->r11) {
        // 0x8002A5F8: sw          $at, -0x4($t5)
        MEM_W(-0X4, ctx->r13) = ctx->r1;
            goto L_8002A5D8;
    }
    // 0x8002A5F8: sw          $at, -0x4($t5)
    MEM_W(-0X4, ctx->r13) = ctx->r1;
    // 0x8002A5FC: b           L_8002A704
    // 0x8002A600: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_8002A704;
    // 0x8002A600: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_8002A604:
    // 0x8002A604: bne         $v0, $v1, L_8002A694
    if (ctx->r2 != ctx->r3) {
        // 0x8002A608: lh          $t8, 0x70($sp)
        ctx->r24 = MEM_H(ctx->r29, 0X70);
            goto L_8002A694;
    }
    // 0x8002A608: lh          $t8, 0x70($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X70);
    // 0x8002A60C: bne         $t8, $v1, L_8002A694
    if (ctx->r24 != ctx->r3) {
        // 0x8002A610: lwc1        $f6, 0xBC($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0XBC);
            goto L_8002A694;
    }
    // 0x8002A610: lwc1        $f6, 0xBC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x8002A614: lwc1        $f8, 0x74($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X74);
    // 0x8002A618: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x8002A61C: or          $t0, $s0, $zero
    ctx->r8 = ctx->r16 | 0;
    // 0x8002A620: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x8002A624: addiu       $t9, $a0, 0x48
    ctx->r25 = ADD32(ctx->r4, 0X48);
    // 0x8002A628: bc1fl       L_8002A660
    if (!c1cs) {
        // 0x8002A62C: addiu       $t1, $sp, 0x80
        ctx->r9 = ADD32(ctx->r29, 0X80);
            goto L_8002A660;
    }
    goto skip_2;
    // 0x8002A62C: addiu       $t1, $sp, 0x80
    ctx->r9 = ADD32(ctx->r29, 0X80);
    skip_2:
L_8002A630:
    // 0x8002A630: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x8002A634: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x8002A638: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x8002A63C: sw          $at, -0xC($t0)
    MEM_W(-0XC, ctx->r8) = ctx->r1;
    // 0x8002A640: lw          $at, -0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X8);
    // 0x8002A644: sw          $at, -0x8($t0)
    MEM_W(-0X8, ctx->r8) = ctx->r1;
    // 0x8002A648: lw          $at, -0x4($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X4);
    // 0x8002A64C: bne         $t6, $t9, L_8002A630
    if (ctx->r14 != ctx->r25) {
        // 0x8002A650: sw          $at, -0x4($t0)
        MEM_W(-0X4, ctx->r8) = ctx->r1;
            goto L_8002A630;
    }
    // 0x8002A650: sw          $at, -0x4($t0)
    MEM_W(-0X4, ctx->r8) = ctx->r1;
    // 0x8002A654: b           L_8002A704
    // 0x8002A658: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_8002A704;
    // 0x8002A658: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x8002A65C: addiu       $t1, $sp, 0x80
    ctx->r9 = ADD32(ctx->r29, 0X80);
L_8002A660:
    // 0x8002A660: addiu       $t3, $t1, 0x48
    ctx->r11 = ADD32(ctx->r9, 0X48);
    // 0x8002A664: or          $t4, $s0, $zero
    ctx->r12 = ctx->r16 | 0;
L_8002A668:
    // 0x8002A668: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x8002A66C: addiu       $t1, $t1, 0xC
    ctx->r9 = ADD32(ctx->r9, 0XC);
    // 0x8002A670: addiu       $t4, $t4, 0xC
    ctx->r12 = ADD32(ctx->r12, 0XC);
    // 0x8002A674: sw          $at, -0xC($t4)
    MEM_W(-0XC, ctx->r12) = ctx->r1;
    // 0x8002A678: lw          $at, -0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, -0X8);
    // 0x8002A67C: sw          $at, -0x8($t4)
    MEM_W(-0X8, ctx->r12) = ctx->r1;
    // 0x8002A680: lw          $at, -0x4($t1)
    ctx->r1 = MEM_W(ctx->r9, -0X4);
    // 0x8002A684: bne         $t1, $t3, L_8002A668
    if (ctx->r9 != ctx->r11) {
        // 0x8002A688: sw          $at, -0x4($t4)
        MEM_W(-0X4, ctx->r12) = ctx->r1;
            goto L_8002A668;
    }
    // 0x8002A688: sw          $at, -0x4($t4)
    MEM_W(-0X4, ctx->r12) = ctx->r1;
    // 0x8002A68C: b           L_8002A704
    // 0x8002A690: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_8002A704;
    // 0x8002A690: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_8002A694:
    // 0x8002A694: bne         $v0, $v1, L_8002A6D4
    if (ctx->r2 != ctx->r3) {
        // 0x8002A698: or          $t2, $a0, $zero
        ctx->r10 = ctx->r4 | 0;
            goto L_8002A6D4;
    }
    // 0x8002A698: or          $t2, $a0, $zero
    ctx->r10 = ctx->r4 | 0;
    // 0x8002A69C: addiu       $t5, $sp, 0x80
    ctx->r13 = ADD32(ctx->r29, 0X80);
    // 0x8002A6A0: addiu       $t7, $t5, 0x48
    ctx->r15 = ADD32(ctx->r13, 0X48);
    // 0x8002A6A4: or          $t9, $s0, $zero
    ctx->r25 = ctx->r16 | 0;
L_8002A6A8:
    // 0x8002A6A8: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x8002A6AC: addiu       $t5, $t5, 0xC
    ctx->r13 = ADD32(ctx->r13, 0XC);
    // 0x8002A6B0: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x8002A6B4: sw          $at, -0xC($t9)
    MEM_W(-0XC, ctx->r25) = ctx->r1;
    // 0x8002A6B8: lw          $at, -0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, -0X8);
    // 0x8002A6BC: sw          $at, -0x8($t9)
    MEM_W(-0X8, ctx->r25) = ctx->r1;
    // 0x8002A6C0: lw          $at, -0x4($t5)
    ctx->r1 = MEM_W(ctx->r13, -0X4);
    // 0x8002A6C4: bne         $t5, $t7, L_8002A6A8
    if (ctx->r13 != ctx->r15) {
        // 0x8002A6C8: sw          $at, -0x4($t9)
        MEM_W(-0X4, ctx->r25) = ctx->r1;
            goto L_8002A6A8;
    }
    // 0x8002A6C8: sw          $at, -0x4($t9)
    MEM_W(-0X4, ctx->r25) = ctx->r1;
    // 0x8002A6CC: b           L_8002A704
    // 0x8002A6D0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_8002A704;
    // 0x8002A6D0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_8002A6D4:
    // 0x8002A6D4: or          $t3, $s0, $zero
    ctx->r11 = ctx->r16 | 0;
    // 0x8002A6D8: addiu       $t0, $a0, 0x48
    ctx->r8 = ADD32(ctx->r4, 0X48);
L_8002A6DC:
    // 0x8002A6DC: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x8002A6E0: addiu       $t2, $t2, 0xC
    ctx->r10 = ADD32(ctx->r10, 0XC);
    // 0x8002A6E4: addiu       $t3, $t3, 0xC
    ctx->r11 = ADD32(ctx->r11, 0XC);
    // 0x8002A6E8: sw          $at, -0xC($t3)
    MEM_W(-0XC, ctx->r11) = ctx->r1;
    // 0x8002A6EC: lw          $at, -0x8($t2)
    ctx->r1 = MEM_W(ctx->r10, -0X8);
    // 0x8002A6F0: sw          $at, -0x8($t3)
    MEM_W(-0X8, ctx->r11) = ctx->r1;
    // 0x8002A6F4: lw          $at, -0x4($t2)
    ctx->r1 = MEM_W(ctx->r10, -0X4);
    // 0x8002A6F8: bne         $t2, $t0, L_8002A6DC
    if (ctx->r10 != ctx->r8) {
        // 0x8002A6FC: sw          $at, -0x4($t3)
        MEM_W(-0X4, ctx->r11) = ctx->r1;
            goto L_8002A6DC;
    }
    // 0x8002A6FC: sw          $at, -0x4($t3)
    MEM_W(-0X4, ctx->r11) = ctx->r1;
    // 0x8002A700: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_8002A704:
    // 0x8002A704: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8002A708: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8002A70C: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    // 0x8002A710: jr          $ra
    // 0x8002A714: nop

    TRACE_RETURN()
    return;
    // 0x8002A714: nop

;}
RECOMP_FUNC void func_800386E0_392E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800386E0: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x800386E4: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x800386E8: lui         $s6, 0x8017
    ctx->r22 = S32(0X8017 << 16);
    // 0x800386EC: addiu       $s6, $s6, 0x2998
    ctx->r22 = ADD32(ctx->r22, 0X2998);
    // 0x800386F0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x800386F4: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x800386F8: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x800386FC: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80038700: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80038704: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80038708: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8003870C: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x80038710: lui         $a2, 0x4
    ctx->r6 = S32(0X4 << 16);
    // 0x80038714: ori         $a2, $a2, 0xE000
    ctx->r6 = ctx->r6 | 0XE000;
    // 0x80038718: addiu       $a1, $a1, 0x29C8
    ctx->r5 = ADD32(ctx->r5, 0X29C8);
    // 0x8003871C: jal         0x80047F30
    // 0x80038720: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    alHeapInit(rdram, ctx);
        goto after_0;
    // 0x80038720: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_0:
    // 0x80038724: lui         $s4, 0x8007
    ctx->r20 = S32(0X8007 << 16);
    // 0x80038728: lui         $s3, 0x8007
    ctx->r19 = S32(0X8007 << 16);
    // 0x8003872C: lui         $s2, 0x8017
    ctx->r18 = S32(0X8017 << 16);
    // 0x80038730: lui         $s5, 0x8017
    ctx->r21 = S32(0X8017 << 16);
    // 0x80038734: addiu       $s5, $s5, 0x29C8
    ctx->r21 = ADD32(ctx->r21, 0X29C8);
    // 0x80038738: addiu       $s2, $s2, 0x29A8
    ctx->r18 = ADD32(ctx->r18, 0X29A8);
    // 0x8003873C: addiu       $s3, $s3, -0x1DC0
    ctx->r19 = ADD32(ctx->r19, -0X1DC0);
    // 0x80038740: addiu       $s4, $s4, -0x1DA0
    ctx->r20 = ADD32(ctx->r20, -0X1DA0);
L_80038744:
    // 0x80038744: lw          $t6, 0x0($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X0);
    // 0x80038748: lw          $t7, 0x0($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X0);
    // 0x8003874C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80038750: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80038754: subu        $s1, $t6, $t7
    ctx->r17 = SUB32(ctx->r14, ctx->r15);
    // 0x80038758: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x8003875C: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x80038760: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80038764: jal         0x800476B0
    // 0x80038768: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    alHeapDBAlloc(rdram, ctx);
        goto after_1;
    // 0x80038768: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    after_1:
    // 0x8003876C: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x80038770: beq         $s1, $zero, L_800387B4
    if (ctx->r17 == 0) {
        // 0x80038774: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_800387B4;
    }
    // 0x80038774: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80038778: andi        $a0, $s1, 0x3
    ctx->r4 = ctx->r17 & 0X3;
    // 0x8003877C: beq         $a0, $zero, L_80038798
    if (ctx->r4 == 0) {
        // 0x80038780: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_80038798;
    }
    // 0x80038780: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_80038784:
    // 0x80038784: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80038788: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    // 0x8003878C: bne         $v0, $s0, L_80038784
    if (ctx->r2 != ctx->r16) {
        // 0x80038790: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_80038784;
    }
    // 0x80038790: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80038794: beq         $s0, $s1, L_800387B4
    if (ctx->r16 == ctx->r17) {
        // 0x80038798: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_800387B4;
    }
L_80038798:
    // 0x80038798: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8003879C: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    // 0x800387A0: sb          $zero, 0x1($v1)
    MEM_B(0X1, ctx->r3) = 0;
    // 0x800387A4: sb          $zero, 0x2($v1)
    MEM_B(0X2, ctx->r3) = 0;
    // 0x800387A8: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    // 0x800387AC: bne         $s0, $s1, L_80038798
    if (ctx->r16 != ctx->r17) {
        // 0x800387B0: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_80038798;
    }
    // 0x800387B0: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_800387B4:
    // 0x800387B4: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x800387B8: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    // 0x800387BC: jal         0x80001640
    // 0x800387C0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_80001640_2240(rdram, ctx);
        goto after_2;
    // 0x800387C0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_2:
    // 0x800387C4: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x800387C8: sltu        $at, $s2, $s5
    ctx->r1 = ctx->r18 < ctx->r21 ? 1 : 0;
    // 0x800387CC: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
    // 0x800387D0: bne         $at, $zero, L_80038744
    if (ctx->r1 != 0) {
        // 0x800387D4: addiu       $s3, $s3, 0x4
        ctx->r19 = ADD32(ctx->r19, 0X4);
            goto L_80038744;
    }
    // 0x800387D4: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x800387D8: lui         $s2, 0x8017
    ctx->r18 = S32(0X8017 << 16);
    // 0x800387DC: lui         $s0, 0x8007
    ctx->r16 = S32(0X8007 << 16);
    // 0x800387E0: lui         $s1, 0x8007
    ctx->r17 = S32(0X8007 << 16);
    // 0x800387E4: addiu       $s1, $s1, -0x1D60
    ctx->r17 = ADD32(ctx->r17, -0X1D60);
    // 0x800387E8: addiu       $s0, $s0, -0x1D80
    ctx->r16 = ADD32(ctx->r16, -0X1D80);
    // 0x800387EC: addiu       $s2, $s2, 0x29A8
    ctx->r18 = ADD32(ctx->r18, 0X29A8);
L_800387F0:
    // 0x800387F0: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x800387F4: jal         0x80048074
    // 0x800387F8: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    alBnkfNew(rdram, ctx);
        goto after_3;
    // 0x800387F8: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    after_3:
    // 0x800387FC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80038800: bne         $s0, $s1, L_800387F0
    if (ctx->r16 != ctx->r17) {
        // 0x80038804: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_800387F0;
    }
    // 0x80038804: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x80038808: lui         $t2, 0x8007
    ctx->r10 = S32(0X8007 << 16);
    // 0x8003880C: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x80038810: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x80038814: addiu       $t0, $zero, 0xA0
    ctx->r8 = ADD32(0, 0XA0);
    // 0x80038818: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x8003881C: addiu       $t2, $t2, -0x1D50
    ctx->r10 = ADD32(ctx->r10, -0X1D50);
    // 0x80038820: ori         $t3, $zero, 0xAC44
    ctx->r11 = 0 | 0XAC44;
    // 0x80038824: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80038828: addiu       $t5, $zero, 0x1000
    ctx->r13 = ADD32(0, 0X1000);
    // 0x8003882C: sw          $t8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r24;
    // 0x80038830: sw          $t9, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r25;
    // 0x80038834: sw          $t0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r8;
    // 0x80038838: sw          $zero, 0x84($sp)
    MEM_W(0X84, ctx->r29) = 0;
    // 0x8003883C: sw          $zero, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = 0;
    // 0x80038840: sw          $s6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r22;
    // 0x80038844: sb          $t1, 0x90($sp)
    MEM_B(0X90, ctx->r29) = ctx->r9;
    // 0x80038848: sw          $t2, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r10;
    // 0x8003884C: sw          $t3, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r11;
    // 0x80038850: sw          $t4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r12;
    // 0x80038854: sw          $t5, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r13;
    // 0x80038858: addiu       $a0, $sp, 0x74
    ctx->r4 = ADD32(ctx->r29, 0X74);
    // 0x8003885C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x80038860: jal         0x80037DC0
    // 0x80038864: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
    func_80037DC0_389C0(rdram, ctx);
        goto after_4;
    // 0x80038864: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
    after_4:
    // 0x80038868: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8003886C: jal         0x8003889C
    // 0x80038870: addiu       $a0, $a0, 0x2980
    ctx->r4 = ADD32(ctx->r4, 0X2980);
    func_8003889C_3949C(rdram, ctx);
        goto after_5;
    // 0x80038870: addiu       $a0, $a0, 0x2980
    ctx->r4 = ADD32(ctx->r4, 0X2980);
    after_5:
    // 0x80038874: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80038878: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8003887C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80038880: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80038884: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80038888: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8003888C: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80038890: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80038894: jr          $ra
    // 0x80038898: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    TRACE_RETURN()
    return;
    // 0x80038898: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_80022214_22E14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80022214: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80022218: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8002221C: sw          $s7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r23;
    // 0x80022220: sw          $s6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r22;
    // 0x80022224: sw          $s5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r21;
    // 0x80022228: sw          $s4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r20;
    // 0x8002222C: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x80022230: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x80022234: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x80022238: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x8002223C: lwc1        $f8, 0x20($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X20);
    // 0x80022240: lwc1        $f16, 0x14($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X14);
    // 0x80022244: lui         $at, 0x4500
    ctx->r1 = S32(0X4500 << 16);
    // 0x80022248: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8002224C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80022250: lwc1        $f4, 0x1C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x80022254: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80022258: mfc1        $s5, $f10
    ctx->r21 = (int32_t)ctx->f10.u32l;
    // 0x8002225C: lwc1        $f10, 0x24($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X24);
    // 0x80022260: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80022264: lwc1        $f4, 0x18($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X18);
    // 0x80022268: mfc1        $s7, $f18
    ctx->r23 = (int32_t)ctx->f18.u32l;
    // 0x8002226C: div.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80022270: mfc1        $s6, $f6
    ctx->r22 = (int32_t)ctx->f6.u32l;
    // 0x80022274: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x80022278: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x8002227C: mfc1        $s4, $f6
    ctx->r20 = (int32_t)ctx->f6.u32l;
    // 0x80022280: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80022284: mfc1        $s2, $f18
    ctx->r18 = (int32_t)ctx->f18.u32l;
    // 0x80022288: jal         0x80022EC0
    // 0x8002228C: nop

    func_80022EC0_23AC0(rdram, ctx);
        goto after_0;
    // 0x8002228C: nop

    after_0:
    // 0x80022290: lwc1        $f4, 0x28($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X28);
    // 0x80022294: or          $s0, $s5, $zero
    ctx->r16 = ctx->r21 | 0;
    // 0x80022298: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x8002229C: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x800222A0: nop

    // 0x800222A4: addu        $v0, $t2, $s5
    ctx->r2 = ADD32(ctx->r10, ctx->r21);
    // 0x800222A8: slt         $at, $s5, $v0
    ctx->r1 = SIGNED(ctx->r21) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800222AC: beq         $at, $zero, L_8002231C
    if (ctx->r1 == 0) {
        // 0x800222B0: addu        $s1, $s0, $s2
        ctx->r17 = ADD32(ctx->r16, ctx->r18);
            goto L_8002231C;
    }
    // 0x800222B0: addu        $s1, $s0, $s2
    ctx->r17 = ADD32(ctx->r16, ctx->r18);
L_800222B4:
    // 0x800222B4: slt         $at, $v0, $s1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x800222B8: beql        $at, $zero, L_800222CC
    if (ctx->r1 == 0) {
        // 0x800222BC: lwc1        $f8, 0x24($s3)
        ctx->f8.u32l = MEM_W(ctx->r19, 0X24);
            goto L_800222CC;
    }
    goto skip_0;
    // 0x800222BC: lwc1        $f8, 0x24($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0X24);
    skip_0:
    // 0x800222C0: subu        $s2, $v0, $s0
    ctx->r18 = SUB32(ctx->r2, ctx->r16);
    // 0x800222C4: addu        $s1, $s0, $s2
    ctx->r17 = ADD32(ctx->r16, ctx->r18);
    // 0x800222C8: lwc1        $f8, 0x24($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0X24);
L_800222CC:
    // 0x800222CC: sw          $s3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r19;
    // 0x800222D0: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    // 0x800222D4: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x800222D8: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x800222DC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800222E0: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    // 0x800222E4: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x800222E8: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    // 0x800222EC: jal         0x80022348
    // 0x800222F0: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    func_80022348_22F48(rdram, ctx);
        goto after_1;
    // 0x800222F0: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    after_1:
    // 0x800222F4: lwc1        $f16, 0x28($s3)
    ctx->f16.u32l = MEM_W(ctx->r19, 0X28);
    // 0x800222F8: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x800222FC: addu        $s4, $s4, $s2
    ctx->r20 = ADD32(ctx->r20, ctx->r18);
    // 0x80022300: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80022304: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x80022308: nop

    // 0x8002230C: addu        $v0, $t6, $s5
    ctx->r2 = ADD32(ctx->r14, ctx->r21);
    // 0x80022310: slt         $at, $s1, $v0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80022314: bnel        $at, $zero, L_800222B4
    if (ctx->r1 != 0) {
        // 0x80022318: addu        $s1, $s0, $s2
        ctx->r17 = ADD32(ctx->r16, ctx->r18);
            goto L_800222B4;
    }
    goto skip_1;
    // 0x80022318: addu        $s1, $s0, $s2
    ctx->r17 = ADD32(ctx->r16, ctx->r18);
    skip_1:
L_8002231C:
    // 0x8002231C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80022320: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x80022324: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x80022328: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x8002232C: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x80022330: lw          $s4, 0x34($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X34);
    // 0x80022334: lw          $s5, 0x38($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X38);
    // 0x80022338: lw          $s6, 0x3C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X3C);
    // 0x8002233C: lw          $s7, 0x40($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X40);
    // 0x80022340: jr          $ra
    // 0x80022344: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x80022344: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void _bnkfPatchInst(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80047F80: lbu         $t6, 0x3($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X3);
    // 0x80047F84: bne         $t6, $zero, L_80048064
    if (ctx->r14 != 0) {
        // 0x80047F88: nop
    
            goto L_80048064;
    }
    // 0x80047F88: nop

    // 0x80047F8C: lh          $t7, 0xE($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XE);
    // 0x80047F90: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80047F94: sb          $t1, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r9;
    // 0x80047F98: blez        $t7, L_80048064
    if (SIGNED(ctx->r15) <= 0) {
        // 0x80047F9C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80048064;
    }
    // 0x80047F9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80047FA0: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80047FA4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80047FA8: lw          $t8, 0x10($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X10);
L_80047FAC:
    // 0x80047FAC: addu        $t9, $t8, $a1
    ctx->r25 = ADD32(ctx->r24, ctx->r5);
    // 0x80047FB0: sw          $t9, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r25;
    // 0x80047FB4: lbu         $t6, 0xE($t9)
    ctx->r14 = MEM_BU(ctx->r25, 0XE);
    // 0x80047FB8: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x80047FBC: bnel        $t6, $zero, L_80048050
    if (ctx->r14 != 0) {
        // 0x80047FC0: lh          $t8, 0xE($a0)
        ctx->r24 = MEM_H(ctx->r4, 0XE);
            goto L_80048050;
    }
    goto skip_0;
    // 0x80047FC0: lh          $t8, 0xE($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XE);
    skip_0:
    // 0x80047FC4: lw          $t7, 0x0($t9)
    ctx->r15 = MEM_W(ctx->r25, 0X0);
    // 0x80047FC8: sb          $t1, 0xE($t9)
    MEM_B(0XE, ctx->r25) = ctx->r9;
    // 0x80047FCC: addu        $t8, $t7, $a1
    ctx->r24 = ADD32(ctx->r15, ctx->r5);
    // 0x80047FD0: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x80047FD4: lw          $t9, 0x4($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X4);
    // 0x80047FD8: lw          $t7, 0x8($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X8);
    // 0x80047FDC: addu        $t6, $t9, $a1
    ctx->r14 = ADD32(ctx->r25, ctx->r5);
    // 0x80047FE0: addu        $t8, $t7, $a1
    ctx->r24 = ADD32(ctx->r15, ctx->r5);
    // 0x80047FE4: sw          $t6, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r14;
    // 0x80047FE8: sw          $t8, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r24;
    // 0x80047FEC: lbu         $t9, 0x9($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X9);
    // 0x80047FF0: or          $t0, $t8, $zero
    ctx->r8 = ctx->r24 | 0;
    // 0x80047FF4: bnel        $t9, $zero, L_80048050
    if (ctx->r25 != 0) {
        // 0x80047FF8: lh          $t8, 0xE($a0)
        ctx->r24 = MEM_H(ctx->r4, 0XE);
            goto L_80048050;
    }
    goto skip_1;
    // 0x80047FF8: lh          $t8, 0xE($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XE);
    skip_1:
    // 0x80047FFC: lw          $t6, 0x0($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X0);
    // 0x80048000: lbu         $a2, 0x8($t8)
    ctx->r6 = MEM_BU(ctx->r24, 0X8);
    // 0x80048004: sb          $t1, 0x9($t8)
    MEM_B(0X9, ctx->r24) = ctx->r9;
    // 0x80048008: addu        $t7, $t6, $a3
    ctx->r15 = ADD32(ctx->r14, ctx->r7);
    // 0x8004800C: bne         $a2, $zero, L_80048034
    if (ctx->r6 != 0) {
        // 0x80048010: sw          $t7, 0x0($t8)
        MEM_W(0X0, ctx->r24) = ctx->r15;
            goto L_80048034;
    }
    // 0x80048010: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x80048014: lw          $t8, 0x10($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X10);
    // 0x80048018: lw          $a2, 0xC($t0)
    ctx->r6 = MEM_W(ctx->r8, 0XC);
    // 0x8004801C: addu        $t9, $t8, $a1
    ctx->r25 = ADD32(ctx->r24, ctx->r5);
    // 0x80048020: beq         $a2, $zero, L_8004804C
    if (ctx->r6 == 0) {
        // 0x80048024: sw          $t9, 0x10($t0)
        MEM_W(0X10, ctx->r8) = ctx->r25;
            goto L_8004804C;
    }
    // 0x80048024: sw          $t9, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->r25;
    // 0x80048028: addu        $t6, $a2, $a1
    ctx->r14 = ADD32(ctx->r6, ctx->r5);
    // 0x8004802C: b           L_8004804C
    // 0x80048030: sw          $t6, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r14;
        goto L_8004804C;
    // 0x80048030: sw          $t6, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r14;
L_80048034:
    // 0x80048034: bnel        $t2, $a2, L_80048050
    if (ctx->r10 != ctx->r6) {
        // 0x80048038: lh          $t8, 0xE($a0)
        ctx->r24 = MEM_H(ctx->r4, 0XE);
            goto L_80048050;
    }
    goto skip_2;
    // 0x80048038: lh          $t8, 0xE($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XE);
    skip_2:
    // 0x8004803C: lw          $a2, 0xC($t0)
    ctx->r6 = MEM_W(ctx->r8, 0XC);
    // 0x80048040: beq         $a2, $zero, L_8004804C
    if (ctx->r6 == 0) {
        // 0x80048044: addu        $t7, $a2, $a1
        ctx->r15 = ADD32(ctx->r6, ctx->r5);
            goto L_8004804C;
    }
    // 0x80048044: addu        $t7, $a2, $a1
    ctx->r15 = ADD32(ctx->r6, ctx->r5);
    // 0x80048048: sw          $t7, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r15;
L_8004804C:
    // 0x8004804C: lh          $t8, 0xE($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XE);
L_80048050:
    // 0x80048050: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80048054: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80048058: slt         $at, $v0, $t8
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x8004805C: bnel        $at, $zero, L_80047FAC
    if (ctx->r1 != 0) {
        // 0x80048060: lw          $t8, 0x10($v1)
        ctx->r24 = MEM_W(ctx->r3, 0X10);
            goto L_80047FAC;
    }
    goto skip_3;
    // 0x80048060: lw          $t8, 0x10($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X10);
    skip_3:
L_80048064:
    // 0x80048064: jr          $ra
    // 0x80048068: nop

    TRACE_RETURN()
    return;
    // 0x80048068: nop

    // 0x8004806C: jr          $ra
    // 0x80048070: nop

    TRACE_RETURN()
    return;
    // 0x80048070: nop

;}
RECOMP_FUNC void func_80036798_37398(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80036798: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8003679C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800367A0: lw          $a1, 0x74($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X74);
    // 0x800367A4: sw          $zero, 0x74($a0)
    MEM_W(0X74, ctx->r4) = 0;
    // 0x800367A8: beq         $a1, $zero, L_800367D0
    if (ctx->r5 == 0) {
        // 0x800367AC: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_800367D0;
    }
    // 0x800367AC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x800367B0: jal         0x800364FC
    // 0x800367B4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800364FC_370FC(rdram, ctx);
        goto after_0;
    // 0x800367B4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800367B8: bne         $v0, $zero, L_800367C8
    if (ctx->r2 != 0) {
        // 0x800367BC: lw          $a1, 0x1C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X1C);
            goto L_800367C8;
    }
    // 0x800367BC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x800367C0: b           L_800367D4
    // 0x800367C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800367D4;
    // 0x800367C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800367C8:
    // 0x800367C8: jal         0x800367E4
    // 0x800367CC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_800367E4_373E4(rdram, ctx);
        goto after_1;
    // 0x800367CC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_1:
L_800367D0:
    // 0x800367D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800367D4:
    // 0x800367D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800367D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800367DC: jr          $ra
    // 0x800367E0: nop

    TRACE_RETURN()
    return;
    // 0x800367E0: nop

;}
RECOMP_FUNC void func_8003CB8C_3D78C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003CB8C: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8003CB90: addiu       $a1, $a1, 0x1728
    ctx->r5 = ADD32(ctx->r5, 0X1728);
    // 0x8003CB94: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x8003CB98: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8003CB9C: lbu         $a0, 0x70($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X70);
    // 0x8003CBA0: beq         $a0, $zero, L_8003CBC4
    if (ctx->r4 == 0) {
        // 0x8003CBA4: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_8003CBC4;
    }
    // 0x8003CBA4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8003CBA8: beq         $v0, $at, L_8003CBD0
    if (ctx->r2 == ctx->r1) {
        // 0x8003CBAC: addiu       $t7, $a0, 0x1
        ctx->r15 = ADD32(ctx->r4, 0X1);
            goto L_8003CBD0;
    }
    // 0x8003CBAC: addiu       $t7, $a0, 0x1
    ctx->r15 = ADD32(ctx->r4, 0X1);
    // 0x8003CBB0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8003CBB4: beq         $v0, $at, L_8003CBF8
    if (ctx->r2 == ctx->r1) {
        // 0x8003CBB8: addiu       $t2, $a0, -0x1
        ctx->r10 = ADD32(ctx->r4, -0X1);
            goto L_8003CBF8;
    }
    // 0x8003CBB8: addiu       $t2, $a0, -0x1
    ctx->r10 = ADD32(ctx->r4, -0X1);
    // 0x8003CBBC: jr          $ra
    // 0x8003CBC0: nop

    TRACE_RETURN()
    return;
    // 0x8003CBC0: nop

L_8003CBC4:
    // 0x8003CBC4: addiu       $t6, $a0, 0x1
    ctx->r14 = ADD32(ctx->r4, 0X1);
    // 0x8003CBC8: jr          $ra
    // 0x8003CBCC: sb          $t6, 0x70($v1)
    MEM_B(0X70, ctx->r3) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x8003CBCC: sb          $t6, 0x70($v1)
    MEM_B(0X70, ctx->r3) = ctx->r14;
L_8003CBD0:
    // 0x8003CBD0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003CBD4: sb          $t7, 0x70($v1)
    MEM_B(0X70, ctx->r3) = ctx->r15;
    // 0x8003CBD8: addiu       $v0, $v0, 0x172C
    ctx->r2 = ADD32(ctx->r2, 0X172C);
    // 0x8003CBDC: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x8003CBE0: lw          $t9, 0x0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X0);
    // 0x8003CBE4: sw          $t8, 0x78($t9)
    MEM_W(0X78, ctx->r25) = ctx->r24;
    // 0x8003CBE8: lw          $t0, 0x0($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X0);
    // 0x8003CBEC: lw          $t1, 0x74($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X74);
    // 0x8003CBF0: jr          $ra
    // 0x8003CBF4: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    TRACE_RETURN()
    return;
    // 0x8003CBF4: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
L_8003CBF8:
    // 0x8003CBF8: sb          $t2, 0x70($v1)
    MEM_B(0X70, ctx->r3) = ctx->r10;
    // 0x8003CBFC: lw          $t3, 0x0($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X0);
    // 0x8003CC00: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003CC04: addiu       $v0, $v0, 0x172C
    ctx->r2 = ADD32(ctx->r2, 0X172C);
    // 0x8003CC08: lw          $t4, 0x78($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X78);
    // 0x8003CC0C: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x8003CC10: jr          $ra
    // 0x8003CC14: nop

    TRACE_RETURN()
    return;
    // 0x8003CC14: nop

;}
RECOMP_FUNC void func_8001110C_11D0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001110C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80011110: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80011114: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x80011118: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8001111C: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80011120: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80011124: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80011128: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8001112C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80011130: or          $s2, $a3, $zero
    ctx->r18 = ctx->r7 | 0;
    // 0x80011134: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x80011138: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x8001113C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80011140: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x80011144: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x80011148: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8001114C: bne         $s1, $at, L_8001115C
    if (ctx->r17 != ctx->r1) {
        // 0x80011150: addiu       $s5, $a2, 0x1
        ctx->r21 = ADD32(ctx->r6, 0X1);
            goto L_8001115C;
    }
    // 0x80011150: addiu       $s5, $a2, 0x1
    ctx->r21 = ADD32(ctx->r6, 0X1);
    // 0x80011154: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80011158: addiu       $s1, $zero, 0xA
    ctx->r17 = ADD32(0, 0XA);
L_8001115C:
    // 0x8001115C: blez        $s1, L_8001133C
    if (SIGNED(ctx->r17) <= 0) {
        // 0x80011160: addiu       $s7, $zero, 0xA
        ctx->r23 = ADD32(0, 0XA);
            goto L_8001133C;
    }
    // 0x80011160: addiu       $s7, $zero, 0xA
    ctx->r23 = ADD32(0, 0XA);
    // 0x80011164: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
L_80011168:
    // 0x80011168: div         $zero, $s2, $s1
    lo = S32(S64(S32(ctx->r18)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r18)) % S64(S32(ctx->r17)));
    // 0x8001116C: bne         $s1, $zero, L_80011178
    if (ctx->r17 != 0) {
        // 0x80011170: nop
    
            goto L_80011178;
    }
    // 0x80011170: nop

    // 0x80011174: break       7
    do_break(2147553652);
L_80011178:
    // 0x80011178: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8001117C: bne         $s1, $at, L_80011190
    if (ctx->r17 != ctx->r1) {
        // 0x80011180: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80011190;
    }
    // 0x80011180: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80011184: bne         $s2, $at, L_80011190
    if (ctx->r18 != ctx->r1) {
        // 0x80011188: nop
    
            goto L_80011190;
    }
    // 0x80011188: nop

    // 0x8001118C: break       6
    do_break(2147553676);
L_80011190:
    // 0x80011190: mflo        $v0
    ctx->r2 = lo;
    // 0x80011194: mfhi        $s2
    ctx->r18 = hi;
    // 0x80011198: sltiu       $at, $v0, 0xA
    ctx->r1 = ctx->r2 < 0XA ? 1 : 0;
    // 0x8001119C: beq         $at, $zero, L_800111BC
    if (ctx->r1 == 0) {
        // 0x800111A0: nop
    
            goto L_800111BC;
    }
    // 0x800111A0: nop

    // 0x800111A4: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x800111A8: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x800111AC: addu        $at, $at, $t6
    gpr jr_addend_800111B4 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800111B0: lw          $t6, -0x4FFC($at)
    ctx->r14 = ADD32(ctx->r1, -0X4FFC);
    // 0x800111B4: jr          $t6
    // 0x800111B8: nop

    switch (jr_addend_800111B4 >> 2) {
        case 0: goto L_800111BC; break;
        case 1: goto L_80011230; break;
        case 2: goto L_8001123C; break;
        case 3: goto L_80011248; break;
        case 4: goto L_80011254; break;
        case 5: goto L_80011260; break;
        case 6: goto L_8001126C; break;
        case 7: goto L_80011278; break;
        case 8: goto L_80011284; break;
        case 9: goto L_80011290; break;
        default: switch_error(__func__, 0x800111B4, 0x8007B004);
    }
    // 0x800111B8: nop

L_800111BC:
    // 0x800111BC: bnel        $s0, $zero, L_80011228
    if (ctx->r16 != 0) {
        // 0x800111C0: addiu       $a3, $zero, 0x30
        ctx->r7 = ADD32(0, 0X30);
            goto L_80011228;
    }
    goto skip_0;
    // 0x800111C0: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    skip_0:
    // 0x800111C4: beq         $s1, $s6, L_80011224
    if (ctx->r17 == ctx->r22) {
        // 0x800111C8: lui         $t7, 0x8006
        ctx->r15 = S32(0X8006 << 16);
            goto L_80011224;
    }
    // 0x800111C8: lui         $t7, 0x8006
    ctx->r15 = S32(0X8006 << 16);
    // 0x800111CC: lui         $t8, 0x8006
    ctx->r24 = S32(0X8006 << 16);
    // 0x800111D0: lbu         $t8, -0x44F0($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X44F0);
    // 0x800111D4: lw          $t7, 0x391C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X391C);
    // 0x800111D8: lui         $a0, 0x8006
    ctx->r4 = S32(0X8006 << 16);
    // 0x800111DC: lw          $a0, 0x3924($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3924);
    // 0x800111E0: multu       $t7, $t8
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800111E4: mflo        $t9
    ctx->r25 = lo;
    // 0x800111E8: nop

    // 0x800111EC: nop

    // 0x800111F0: div         $zero, $t9, $t8
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r24))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r24)));
    // 0x800111F4: mflo        $v1
    ctx->r3 = lo;
    // 0x800111F8: bne         $t8, $zero, L_80011204
    if (ctx->r24 != 0) {
        // 0x800111FC: nop
    
            goto L_80011204;
    }
    // 0x800111FC: nop

    // 0x80011200: break       7
    do_break(2147553792);
L_80011204:
    // 0x80011204: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80011208: bne         $t8, $at, L_8001121C
    if (ctx->r24 != ctx->r1) {
        // 0x8001120C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8001121C;
    }
    // 0x8001120C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80011210: bne         $t9, $at, L_8001121C
    if (ctx->r25 != ctx->r1) {
        // 0x80011214: nop
    
            goto L_8001121C;
    }
    // 0x80011214: nop

    // 0x80011218: break       6
    do_break(2147553816);
L_8001121C:
    // 0x8001121C: b           L_80011300
    // 0x80011220: nop

        goto L_80011300;
    // 0x80011220: nop

L_80011224:
    // 0x80011224: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
L_80011228:
    // 0x80011228: b           L_80011298
    // 0x8001122C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
        goto L_80011298;
    // 0x8001122C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_80011230:
    // 0x80011230: addiu       $a3, $zero, 0x31
    ctx->r7 = ADD32(0, 0X31);
    // 0x80011234: b           L_80011298
    // 0x80011238: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
        goto L_80011298;
    // 0x80011238: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_8001123C:
    // 0x8001123C: addiu       $a3, $zero, 0x32
    ctx->r7 = ADD32(0, 0X32);
    // 0x80011240: b           L_80011298
    // 0x80011244: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
        goto L_80011298;
    // 0x80011244: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_80011248:
    // 0x80011248: addiu       $a3, $zero, 0x33
    ctx->r7 = ADD32(0, 0X33);
    // 0x8001124C: b           L_80011298
    // 0x80011250: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
        goto L_80011298;
    // 0x80011250: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_80011254:
    // 0x80011254: addiu       $a3, $zero, 0x34
    ctx->r7 = ADD32(0, 0X34);
    // 0x80011258: b           L_80011298
    // 0x8001125C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
        goto L_80011298;
    // 0x8001125C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_80011260:
    // 0x80011260: addiu       $a3, $zero, 0x35
    ctx->r7 = ADD32(0, 0X35);
    // 0x80011264: b           L_80011298
    // 0x80011268: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
        goto L_80011298;
    // 0x80011268: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_8001126C:
    // 0x8001126C: addiu       $a3, $zero, 0x36
    ctx->r7 = ADD32(0, 0X36);
    // 0x80011270: b           L_80011298
    // 0x80011274: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
        goto L_80011298;
    // 0x80011274: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_80011278:
    // 0x80011278: addiu       $a3, $zero, 0x37
    ctx->r7 = ADD32(0, 0X37);
    // 0x8001127C: b           L_80011298
    // 0x80011280: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
        goto L_80011298;
    // 0x80011280: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_80011284:
    // 0x80011284: addiu       $a3, $zero, 0x38
    ctx->r7 = ADD32(0, 0X38);
    // 0x80011288: b           L_80011298
    // 0x8001128C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
        goto L_80011298;
    // 0x8001128C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_80011290:
    // 0x80011290: addiu       $a3, $zero, 0x39
    ctx->r7 = ADD32(0, 0X39);
    // 0x80011294: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_80011298:
    // 0x80011298: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8001129C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x800112A0: jal         0x80010C6C
    // 0x800112A4: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    func_80010C6C_1186C(rdram, ctx);
        goto after_0;
    // 0x800112A4: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    after_0:
    // 0x800112A8: lui         $t0, 0x8006
    ctx->r8 = S32(0X8006 << 16);
    // 0x800112AC: lui         $t1, 0x8006
    ctx->r9 = S32(0X8006 << 16);
    // 0x800112B0: lbu         $t1, -0x44F0($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X44F0);
    // 0x800112B4: lw          $t0, 0x391C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X391C);
    // 0x800112B8: lui         $a0, 0x8006
    ctx->r4 = S32(0X8006 << 16);
    // 0x800112BC: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x800112C0: multu       $t0, $t1
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800112C4: lw          $a0, 0x3924($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3924);
    // 0x800112C8: mflo        $t2
    ctx->r10 = lo;
    // 0x800112CC: nop

    // 0x800112D0: nop

    // 0x800112D4: div         $zero, $t2, $t1
    lo = S32(S64(S32(ctx->r10)) / S64(S32(ctx->r9))); hi = S32(S64(S32(ctx->r10)) % S64(S32(ctx->r9)));
    // 0x800112D8: mflo        $v1
    ctx->r3 = lo;
    // 0x800112DC: bne         $t1, $zero, L_800112E8
    if (ctx->r9 != 0) {
        // 0x800112E0: nop
    
            goto L_800112E8;
    }
    // 0x800112E0: nop

    // 0x800112E4: break       7
    do_break(2147554020);
L_800112E8:
    // 0x800112E8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800112EC: bne         $t1, $at, L_80011300
    if (ctx->r9 != ctx->r1) {
        // 0x800112F0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80011300;
    }
    // 0x800112F0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800112F4: bne         $t2, $at, L_80011300
    if (ctx->r10 != ctx->r1) {
        // 0x800112F8: nop
    
            goto L_80011300;
    }
    // 0x800112F8: nop

    // 0x800112FC: break       6
    do_break(2147554044);
L_80011300:
    // 0x80011300: div         $zero, $s1, $s7
    lo = S32(S64(S32(ctx->r17)) / S64(S32(ctx->r23))); hi = S32(S64(S32(ctx->r17)) % S64(S32(ctx->r23)));
    // 0x80011304: addu        $t3, $s3, $v1
    ctx->r11 = ADD32(ctx->r19, ctx->r3);
    // 0x80011308: addu        $s3, $t3, $a0
    ctx->r19 = ADD32(ctx->r11, ctx->r4);
    // 0x8001130C: bne         $s7, $zero, L_80011318
    if (ctx->r23 != 0) {
        // 0x80011310: nop
    
            goto L_80011318;
    }
    // 0x80011310: nop

    // 0x80011314: break       7
    do_break(2147554068);
L_80011318:
    // 0x80011318: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8001131C: bne         $s7, $at, L_80011330
    if (ctx->r23 != ctx->r1) {
        // 0x80011320: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80011330;
    }
    // 0x80011320: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80011324: bne         $s1, $at, L_80011330
    if (ctx->r17 != ctx->r1) {
        // 0x80011328: nop
    
            goto L_80011330;
    }
    // 0x80011328: nop

    // 0x8001132C: break       6
    do_break(2147554092);
L_80011330:
    // 0x80011330: mflo        $s1
    ctx->r17 = lo;
    // 0x80011334: bgtz        $s1, L_80011168
    if (SIGNED(ctx->r17) > 0) {
        // 0x80011338: nop
    
            goto L_80011168;
    }
    // 0x80011338: nop

L_8001133C:
    // 0x8001133C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80011340: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
    // 0x80011344: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80011348: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8001134C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80011350: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80011354: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80011358: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x8001135C: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x80011360: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x80011364: jr          $ra
    // 0x80011368: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80011368: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80025B38_26738(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80025B38: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x80025B3C: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80025B40: sw          $s1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r17;
    // 0x80025B44: sw          $s0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r16;
    // 0x80025B48: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x80025B4C: lw          $s0, 0xD0($a0)
    ctx->r16 = MEM_W(ctx->r4, 0XD0);
    // 0x80025B50: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80025B54: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x80025B58: beql        $v0, $zero, L_80025B6C
    if (ctx->r2 == 0) {
        // 0x80025B5C: lw          $v1, 0x0($s0)
        ctx->r3 = MEM_W(ctx->r16, 0X0);
            goto L_80025B6C;
    }
    goto skip_0;
    // 0x80025B5C: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    skip_0:
    // 0x80025B60: jalr        $v0
    // 0x80025B64: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80025B64: nop

    after_0:
    // 0x80025B68: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
L_80025B6C:
    // 0x80025B6C: addiu       $at, $zero, 0x2800
    ctx->r1 = ADD32(0, 0X2800);
    // 0x80025B70: andi        $t6, $v1, 0x2800
    ctx->r14 = ctx->r3 & 0X2800;
    // 0x80025B74: bnel        $t6, $at, L_80025B8C
    if (ctx->r14 != ctx->r1) {
        // 0x80025B78: andi        $t7, $v1, 0x200
        ctx->r15 = ctx->r3 & 0X200;
            goto L_80025B8C;
    }
    goto skip_1;
    // 0x80025B78: andi        $t7, $v1, 0x200
    ctx->r15 = ctx->r3 & 0X200;
    skip_1:
    // 0x80025B7C: jal         0x80024BAC
    // 0x80025B80: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80024BAC_257AC(rdram, ctx);
        goto after_1;
    // 0x80025B80: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x80025B84: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x80025B88: andi        $t7, $v1, 0x200
    ctx->r15 = ctx->r3 & 0X200;
L_80025B8C:
    // 0x80025B8C: bne         $t7, $zero, L_80025B9C
    if (ctx->r15 != 0) {
        // 0x80025B90: nop
    
            goto L_80025B9C;
    }
    // 0x80025B90: nop

    // 0x80025B94: jal         0x80025D74
    // 0x80025B98: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80025D74_26974(rdram, ctx);
        goto after_2;
    // 0x80025B98: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
L_80025B9C:
    // 0x80025B9C: jal         0x80026040
    // 0x80025BA0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80026040_26C40(rdram, ctx);
        goto after_3;
    // 0x80025BA0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x80025BA4: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x80025BA8: andi        $t8, $v1, 0x1
    ctx->r24 = ctx->r3 & 0X1;
    // 0x80025BAC: beql        $t8, $zero, L_80025BC4
    if (ctx->r24 == 0) {
        // 0x80025BB0: andi        $t9, $v1, 0x400
        ctx->r25 = ctx->r3 & 0X400;
            goto L_80025BC4;
    }
    goto skip_2;
    // 0x80025BB0: andi        $t9, $v1, 0x400
    ctx->r25 = ctx->r3 & 0X400;
    skip_2:
    // 0x80025BB4: jal         0x80026114
    // 0x80025BB8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80026114_26D14(rdram, ctx);
        goto after_4;
    // 0x80025BB8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x80025BBC: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x80025BC0: andi        $t9, $v1, 0x400
    ctx->r25 = ctx->r3 & 0X400;
L_80025BC4:
    // 0x80025BC4: beq         $t9, $zero, L_80025BE4
    if (ctx->r25 == 0) {
        // 0x80025BC8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80025BE4;
    }
    // 0x80025BC8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80025BCC: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80025BD0: lw          $t0, -0x3A38($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3A38);
    // 0x80025BD4: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
    // 0x80025BD8: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x80025BDC: b           L_80025BE4
    // 0x80025BE0: lh          $v0, -0x524E($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X524E);
        goto L_80025BE4;
    // 0x80025BE0: lh          $v0, -0x524E($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X524E);
L_80025BE4:
    // 0x80025BE4: sll         $t1, $v0, 2
    ctx->r9 = S32(ctx->r2 << 2);
    // 0x80025BE8: addu        $v1, $s0, $t1
    ctx->r3 = ADD32(ctx->r16, ctx->r9);
    // 0x80025BEC: lw          $a0, 0x40($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X40);
    // 0x80025BF0: lw          $a1, 0xD8($s1)
    ctx->r5 = MEM_W(ctx->r17, 0XD8);
    // 0x80025BF4: jal         0x80040620
    // 0x80025BF8: sw          $v1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r3;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_5;
    // 0x80025BF8: sw          $v1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r3;
    after_5:
    // 0x80025BFC: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x80025C00: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80025C04: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x80025C08: andi        $t2, $v1, 0x1000
    ctx->r10 = ctx->r3 & 0X1000;
    // 0x80025C0C: beq         $t2, $zero, L_80025CD8
    if (ctx->r10 == 0) {
        // 0x80025C10: lui         $a2, 0x8007
        ctx->r6 = S32(0X8007 << 16);
            goto L_80025CD8;
    }
    // 0x80025C10: lui         $a2, 0x8007
    ctx->r6 = S32(0X8007 << 16);
    // 0x80025C14: lwc1        $f4, 0x70($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X70);
    // 0x80025C18: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80025C1C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80025C20: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80025C24: lw          $a0, 0x74($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X74);
    // 0x80025C28: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x80025C2C: lbu         $a1, 0x27($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X27);
    // 0x80025C30: addiu       $t5, $zero, 0x100
    ctx->r13 = ADD32(0, 0X100);
    // 0x80025C34: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80025C38: trunc.w.d   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_D(ctx->f10.d);
    // 0x80025C3C: lw          $t6, 0x30($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X30);
    // 0x80025C40: addiu       $t0, $zero, 0x1E
    ctx->r8 = ADD32(0, 0X1E);
    // 0x80025C44: addiu       $t7, $zero, 0x40
    ctx->r15 = ADD32(0, 0X40);
    // 0x80025C48: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x80025C4C: addiu       $t8, $zero, 0x20
    ctx->r24 = ADD32(0, 0X20);
    // 0x80025C50: addiu       $t2, $zero, 0x6
    ctx->r10 = ADD32(0, 0X6);
    // 0x80025C54: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x80025C58: addiu       $t9, $v0, 0x5
    ctx->r25 = ADD32(ctx->r2, 0X5);
    // 0x80025C5C: subu        $t1, $t0, $v0
    ctx->r9 = SUB32(ctx->r8, ctx->r2);
    // 0x80025C60: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x80025C64: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80025C68: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
    // 0x80025C6C: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x80025C70: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x80025C74: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80025C78: addiu       $a2, $a2, -0x2120
    ctx->r6 = ADD32(ctx->r6, -0X2120);
    // 0x80025C7C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x80025C80: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x80025C84: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80025C88: jal         0x80026FE8
    // 0x80025C8C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    func_80026FE8_27BE8(rdram, ctx);
        goto after_6;
    // 0x80025C8C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_6:
    // 0x80025C90: lwc1        $f18, 0x70($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X70);
    // 0x80025C94: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80025C98: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80025C9C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80025CA0: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x80025CA4: lui         $a2, 0x8FFF
    ctx->r6 = S32(0X8FFF << 16);
    // 0x80025CA8: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x80025CAC: ori         $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 | 0XFFFF;
    // 0x80025CB0: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x80025CB4: swc1        $f10, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f10.u32l;
    // 0x80025CB8: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x80025CBC: lw          $v1, 0x74($t4)
    ctx->r3 = MEM_W(ctx->r12, 0X74);
    // 0x80025CC0: subu        $t5, $a2, $v1
    ctx->r13 = SUB32(ctx->r6, ctx->r3);
    // 0x80025CC4: and         $t6, $t5, $v0
    ctx->r14 = ctx->r13 & ctx->r2;
    // 0x80025CC8: and         $a1, $t6, $a2
    ctx->r5 = ctx->r14 & ctx->r6;
    // 0x80025CCC: jal         0x80040620
    // 0x80025CD0: and         $a0, $v1, $a2
    ctx->r4 = ctx->r3 & ctx->r6;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_7;
    // 0x80025CD0: and         $a0, $v1, $a2
    ctx->r4 = ctx->r3 & ctx->r6;
    after_7:
    // 0x80025CD4: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
L_80025CD8:
    // 0x80025CD8: andi        $t7, $v1, 0x400
    ctx->r15 = ctx->r3 & 0X400;
    // 0x80025CDC: beq         $t7, $zero, L_80025D60
    if (ctx->r15 == 0) {
        // 0x80025CE0: andi        $t8, $v1, 0x800
        ctx->r24 = ctx->r3 & 0X800;
            goto L_80025D60;
    }
    // 0x80025CE0: andi        $t8, $v1, 0x800
    ctx->r24 = ctx->r3 & 0X800;
    // 0x80025CE4: beq         $t8, $zero, L_80025D34
    if (ctx->r24 == 0) {
        // 0x80025CE8: lui         $t9, 0x8016
        ctx->r25 = S32(0X8016 << 16);
            goto L_80025D34;
    }
    // 0x80025CE8: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x80025CEC: andi        $t9, $v1, 0x80
    ctx->r25 = ctx->r3 & 0X80;
    // 0x80025CF0: beq         $t9, $zero, L_80025D1C
    if (ctx->r25 == 0) {
        // 0x80025CF4: lw          $t5, 0x4C($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X4C);
            goto L_80025D1C;
    }
    // 0x80025CF4: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x80025CF8: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x80025CFC: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x80025D00: lw          $t4, 0x18($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X18);
    // 0x80025D04: lw          $t1, 0x48($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X48);
    // 0x80025D08: or          $t2, $t1, $at
    ctx->r10 = ctx->r9 | ctx->r1;
    // 0x80025D0C: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x80025D10: or          $t3, $t2, $at
    ctx->r11 = ctx->r10 | ctx->r1;
    // 0x80025D14: b           L_80025D60
    // 0x80025D18: sw          $t3, 0x30($t4)
    MEM_W(0X30, ctx->r12) = ctx->r11;
        goto L_80025D60;
    // 0x80025D18: sw          $t3, 0x30($t4)
    MEM_W(0X30, ctx->r12) = ctx->r11;
L_80025D1C:
    // 0x80025D1C: lw          $t6, 0x48($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X48);
    // 0x80025D20: lw          $t8, 0x18($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X18);
    // 0x80025D24: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x80025D28: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x80025D2C: b           L_80025D60
    // 0x80025D30: sw          $t7, 0x30($t8)
    MEM_W(0X30, ctx->r24) = ctx->r15;
        goto L_80025D60;
    // 0x80025D30: sw          $t7, 0x30($t8)
    MEM_W(0X30, ctx->r24) = ctx->r15;
L_80025D34:
    // 0x80025D34: lw          $t9, -0x3A38($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3A38);
    // 0x80025D38: lui         $t0, 0x4
    ctx->r8 = S32(0X4 << 16);
    // 0x80025D3C: lw          $t5, 0x18($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X18);
    // 0x80025D40: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80025D44: lh          $t0, -0x524E($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X524E);
    // 0x80025D48: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80025D4C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80025D50: addu        $t2, $s0, $t1
    ctx->r10 = ADD32(ctx->r16, ctx->r9);
    // 0x80025D54: lw          $t3, 0x64($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X64);
    // 0x80025D58: addu        $t4, $t3, $at
    ctx->r12 = ADD32(ctx->r11, ctx->r1);
    // 0x80025D5C: sw          $t4, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->r12;
L_80025D60:
    // 0x80025D60: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80025D64: lw          $s0, 0x3C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X3C);
    // 0x80025D68: lw          $s1, 0x40($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X40);
    // 0x80025D6C: jr          $ra
    // 0x80025D70: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    TRACE_RETURN()
    return;
    // 0x80025D70: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_80023CC8_248C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80023CC8: lui         $v0, 0x8017
    ctx->r2 = S32(0X8017 << 16);
    // 0x80023CCC: lw          $v0, -0x717C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X717C);
    // 0x80023CD0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80023CD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80023CD8: lw          $t6, 0x3F0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X3F0);
    // 0x80023CDC: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80023CE0: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x80023CE4: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x80023CE8: sll         $t7, $t6, 5
    ctx->r15 = S32(ctx->r14 << 5);
    // 0x80023CEC: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x80023CF0: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x80023CF4: lw          $a1, 0x1B0($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X1B0);
    // 0x80023CF8: jal         0x800148F0
    // 0x80023CFC: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_800148F0_154F0(rdram, ctx);
        goto after_0;
    // 0x80023CFC: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_0:
    // 0x80023D00: beq         $v0, $zero, L_80023D70
    if (ctx->r2 == 0) {
        // 0x80023D04: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_80023D70;
    }
    // 0x80023D04: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x80023D08: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80023D0C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80023D10: addiu       $a1, $zero, 0x500
    ctx->r5 = ADD32(0, 0X500);
L_80023D14:
    // 0x80023D14: or          $t9, $v1, $zero
    ctx->r25 = ctx->r3 | 0;
    // 0x80023D18: addiu       $t1, $v1, 0x1
    ctx->r9 = ADD32(ctx->r3, 0X1);
    // 0x80023D1C: addiu       $t3, $v1, 0x2
    ctx->r11 = ADD32(ctx->r3, 0X2);
    // 0x80023D20: addiu       $t5, $v1, 0x3
    ctx->r13 = ADD32(ctx->r3, 0X3);
    // 0x80023D24: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80023D28: sb          $t5, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r13;
    // 0x80023D2C: sb          $t3, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r11;
    // 0x80023D30: sb          $t1, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r9;
    // 0x80023D34: sb          $t9, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r25;
    // 0x80023D38: bne         $v1, $a1, L_80023D14
    if (ctx->r3 != ctx->r5) {
        // 0x80023D3C: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_80023D14;
    }
    // 0x80023D3C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80023D40: sb          $zero, 0x4FF($a2)
    MEM_B(0X4FF, ctx->r6) = 0;
    // 0x80023D44: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x80023D48: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x80023D4C: jal         0x80023610
    // 0x80023D50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80023610_24210(rdram, ctx);
        goto after_1;
    // 0x80023D50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80023D54: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80023D58: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x80023D5C: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x80023D60: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x80023D64: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80023D68: jal         0x80014B74
    // 0x80023D6C: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_80014B74_15774(rdram, ctx);
        goto after_2;
    // 0x80023D6C: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_2:
L_80023D70:
    // 0x80023D70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80023D74: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80023D78: jr          $ra
    // 0x80023D7C: nop

    TRACE_RETURN()
    return;
    // 0x80023D7C: nop

;}
RECOMP_FUNC void func_8001B5AC_1C1AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001B5AC: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x8001B5B0: lui         $at, 0x7000
    ctx->r1 = S32(0X7000 << 16);
    // 0x8001B5B4: and         $v0, $v1, $at
    ctx->r2 = ctx->r3 & ctx->r1;
    // 0x8001B5B8: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x8001B5BC: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x8001B5C0: beq         $v0, $zero, L_8001B5E8
    if (ctx->r2 == 0) {
        // 0x8001B5C4: and         $a1, $v1, $at
        ctx->r5 = ctx->r3 & ctx->r1;
            goto L_8001B5E8;
    }
    // 0x8001B5C4: and         $a1, $v1, $at
    ctx->r5 = ctx->r3 & ctx->r1;
    // 0x8001B5C8: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x8001B5CC: beq         $v0, $at, L_8001B5E8
    if (ctx->r2 == ctx->r1) {
        // 0x8001B5D0: lui         $at, 0x6000
        ctx->r1 = S32(0X6000 << 16);
            goto L_8001B5E8;
    }
    // 0x8001B5D0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x8001B5D4: beq         $v0, $at, L_8001B5E8
    if (ctx->r2 == ctx->r1) {
        // 0x8001B5D8: nop
    
            goto L_8001B5E8;
    }
    // 0x8001B5D8: nop

    // 0x8001B5DC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8001B5E0: jr          $ra
    // 0x8001B5E4: nop

    TRACE_RETURN()
    return;
    // 0x8001B5E4: nop

L_8001B5E8:
    // 0x8001B5E8: bne         $a1, $zero, L_8001B5FC
    if (ctx->r5 != 0) {
        // 0x8001B5EC: lui         $v1, 0x8017
        ctx->r3 = S32(0X8017 << 16);
            goto L_8001B5FC;
    }
    // 0x8001B5EC: lui         $v1, 0x8017
    ctx->r3 = S32(0X8017 << 16);
    // 0x8001B5F0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8001B5F4: jr          $ra
    // 0x8001B5F8: nop

    TRACE_RETURN()
    return;
    // 0x8001B5F8: nop

L_8001B5FC:
    // 0x8001B5FC: addiu       $v1, $v1, -0x7B10
    ctx->r3 = ADD32(ctx->r3, -0X7B10);
    // 0x8001B600: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    // 0x8001B604: beq         $a1, $zero, L_8001B674
    if (ctx->r5 == 0) {
        // 0x8001B608: or          $v0, $a1, $zero
        ctx->r2 = ctx->r5 | 0;
            goto L_8001B674;
    }
    // 0x8001B608: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x8001B60C: sll         $t6, $a1, 0
    ctx->r14 = S32(ctx->r5 << 0);
    // 0x8001B610: bgez        $t6, L_8001B620
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8001B614: lui         $at, 0x800
        ctx->r1 = S32(0X800 << 16);
            goto L_8001B620;
    }
    // 0x8001B614: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x8001B618: b           L_8001B678
    // 0x8001B61C: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
        goto L_8001B678;
    // 0x8001B61C: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_8001B620:
    // 0x8001B620: ori         $at, $at, 0x1
    ctx->r1 = ctx->r1 | 0X1;
    // 0x8001B624: sltu        $at, $v0, $at
    ctx->r1 = ctx->r2 < ctx->r1 ? 1 : 0;
    // 0x8001B628: bne         $at, $zero, L_8001B654
    if (ctx->r1 != 0) {
        // 0x8001B62C: srl         $t7, $v0, 24
        ctx->r15 = S32(U32(ctx->r2) >> 24);
            goto L_8001B654;
    }
    // 0x8001B62C: srl         $t7, $v0, 24
    ctx->r15 = S32(U32(ctx->r2) >> 24);
    // 0x8001B630: andi        $t8, $t7, 0xF
    ctx->r24 = ctx->r15 & 0XF;
    // 0x8001B634: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x8001B638: addu        $t0, $a0, $t9
    ctx->r8 = ADD32(ctx->r4, ctx->r25);
    // 0x8001B63C: lui         $at, 0x80FF
    ctx->r1 = S32(0X80FF << 16);
    // 0x8001B640: lw          $t1, -0x8($t0)
    ctx->r9 = MEM_W(ctx->r8, -0X8);
    // 0x8001B644: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8001B648: and         $t2, $v0, $at
    ctx->r10 = ctx->r2 & ctx->r1;
    // 0x8001B64C: b           L_8001B668
    // 0x8001B650: addu        $a1, $t1, $t2
    ctx->r5 = ADD32(ctx->r9, ctx->r10);
        goto L_8001B668;
    // 0x8001B650: addu        $a1, $t1, $t2
    ctx->r5 = ADD32(ctx->r9, ctx->r10);
L_8001B654:
    // 0x8001B654: lw          $t3, 0x38($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X38);
    // 0x8001B658: lui         $at, 0x80FF
    ctx->r1 = S32(0X80FF << 16);
    // 0x8001B65C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8001B660: and         $t4, $v0, $at
    ctx->r12 = ctx->r2 & ctx->r1;
    // 0x8001B664: addu        $a1, $t3, $t4
    ctx->r5 = ADD32(ctx->r11, ctx->r12);
L_8001B668:
    // 0x8001B668: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x8001B66C: b           L_8001B678
    // 0x8001B670: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_8001B678;
    // 0x8001B670: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8001B674:
    // 0x8001B674: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8001B678:
    // 0x8001B678: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x8001B67C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8001B680: andi        $t5, $v1, 0xFF
    ctx->r13 = ctx->r3 & 0XFF;
    // 0x8001B684: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x8001B688: bgez        $t5, L_8001B69C
    if (SIGNED(ctx->r13) >= 0) {
        // 0x8001B68C: cvt.s.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8001B69C;
    }
    // 0x8001B68C: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8001B690: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8001B694: nop

    // 0x8001B698: add.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
L_8001B69C:
    // 0x8001B69C: jr          $ra
    // 0x8001B6A0: nop

    TRACE_RETURN()
    return;
    // 0x8001B6A0: nop

;}
RECOMP_FUNC void _Ldtob(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004AD50: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x8004AD54: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8004AD58: sw          $s5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r21;
    // 0x8004AD5C: sw          $s4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r20;
    // 0x8004AD60: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x8004AD64: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x8004AD68: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x8004AD6C: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x8004AD70: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x8004AD74: sw          $a0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r4;
    // 0x8004AD78: sw          $a1, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r5;
    // 0x8004AD7C: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x8004AD80: addiu       $s5, $sp, 0xB0
    ctx->r21 = ADD32(ctx->r29, 0XB0);
    // 0x8004AD84: ldc1        $f20, 0x0($a0)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r4, 0X0);
    // 0x8004AD88: bgez        $v0, L_8004AD98
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8004AD8C: addiu       $t7, $zero, 0x6
        ctx->r15 = ADD32(0, 0X6);
            goto L_8004AD98;
    }
    // 0x8004AD8C: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x8004AD90: b           L_8004ADC4
    // 0x8004AD94: sw          $t7, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r15;
        goto L_8004ADC4;
    // 0x8004AD94: sw          $t7, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r15;
L_8004AD98:
    // 0x8004AD98: bne         $v0, $zero, L_8004ADC4
    if (ctx->r2 != 0) {
        // 0x8004AD9C: lbu         $t8, 0xD7($sp)
        ctx->r24 = MEM_BU(ctx->r29, 0XD7);
            goto L_8004ADC4;
    }
    // 0x8004AD9C: lbu         $t8, 0xD7($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0XD7);
    // 0x8004ADA0: addiu       $at, $zero, 0x67
    ctx->r1 = ADD32(0, 0X67);
    // 0x8004ADA4: beq         $t8, $at, L_8004ADB8
    if (ctx->r24 == ctx->r1) {
        // 0x8004ADA8: sw          $t8, 0x48($sp)
        MEM_W(0X48, ctx->r29) = ctx->r24;
            goto L_8004ADB8;
    }
    // 0x8004ADA8: sw          $t8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r24;
    // 0x8004ADAC: addiu       $at, $zero, 0x47
    ctx->r1 = ADD32(0, 0X47);
    // 0x8004ADB0: bnel        $t8, $at, L_8004ADC8
    if (ctx->r24 != ctx->r1) {
        // 0x8004ADB4: lw          $t6, 0xD0($sp)
        ctx->r14 = MEM_W(ctx->r29, 0XD0);
            goto L_8004ADC8;
    }
    goto skip_0;
    // 0x8004ADB4: lw          $t6, 0xD0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XD0);
    skip_0:
L_8004ADB8:
    // 0x8004ADB8: lw          $t7, 0xD0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XD0);
    // 0x8004ADBC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8004ADC0: sw          $t9, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->r25;
L_8004ADC4:
    // 0x8004ADC4: lw          $t6, 0xD0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XD0);
L_8004ADC8:
    // 0x8004ADC8: addiu       $at, $zero, 0x7FF
    ctx->r1 = ADD32(0, 0X7FF);
    // 0x8004ADCC: lhu         $a0, 0x0($t6)
    ctx->r4 = MEM_HU(ctx->r14, 0X0);
    // 0x8004ADD0: andi        $v1, $a0, 0x7FF0
    ctx->r3 = ctx->r4 & 0X7FF0;
    // 0x8004ADD4: sra         $t8, $v1, 4
    ctx->r24 = S32(SIGNED(ctx->r3) >> 4);
    // 0x8004ADD8: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x8004ADDC: sra         $v1, $t9, 16
    ctx->r3 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8004ADE0: bne         $v1, $at, L_8004AE44
    if (ctx->r3 != ctx->r1) {
        // 0x8004ADE4: nop
    
            goto L_8004AE44;
    }
    // 0x8004ADE4: nop

    // 0x8004ADE8: sh          $zero, 0x9A($sp)
    MEM_H(0X9A, ctx->r29) = 0;
    // 0x8004ADEC: lhu         $t8, 0x0($t6)
    ctx->r24 = MEM_HU(ctx->r14, 0X0);
    // 0x8004ADF0: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8004ADF4: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8004ADF8: andi        $t9, $t8, 0xF
    ctx->r25 = ctx->r24 & 0XF;
    // 0x8004ADFC: bnel        $t9, $zero, L_8004AE28
    if (ctx->r25 != 0) {
        // 0x8004AE00: sra         $t7, $v0, 16
        ctx->r15 = S32(SIGNED(ctx->r2) >> 16);
            goto L_8004AE28;
    }
    goto skip_1;
    // 0x8004AE00: sra         $t7, $v0, 16
    ctx->r15 = S32(SIGNED(ctx->r2) >> 16);
    skip_1:
    // 0x8004AE04: lhu         $t7, 0x2($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X2);
    // 0x8004AE08: bnel        $t7, $zero, L_8004AE28
    if (ctx->r15 != 0) {
        // 0x8004AE0C: sra         $t7, $v0, 16
        ctx->r15 = S32(SIGNED(ctx->r2) >> 16);
            goto L_8004AE28;
    }
    goto skip_2;
    // 0x8004AE0C: sra         $t7, $v0, 16
    ctx->r15 = S32(SIGNED(ctx->r2) >> 16);
    skip_2:
    // 0x8004AE10: lhu         $t8, 0x4($t6)
    ctx->r24 = MEM_HU(ctx->r14, 0X4);
    // 0x8004AE14: bnel        $t8, $zero, L_8004AE28
    if (ctx->r24 != 0) {
        // 0x8004AE18: sra         $t7, $v0, 16
        ctx->r15 = S32(SIGNED(ctx->r2) >> 16);
            goto L_8004AE28;
    }
    goto skip_3;
    // 0x8004AE18: sra         $t7, $v0, 16
    ctx->r15 = S32(SIGNED(ctx->r2) >> 16);
    skip_3:
    // 0x8004AE1C: lhu         $t9, 0x6($t6)
    ctx->r25 = MEM_HU(ctx->r14, 0X6);
    // 0x8004AE20: beq         $t9, $zero, L_8004AE30
    if (ctx->r25 == 0) {
        // 0x8004AE24: sra         $t7, $v0, 16
        ctx->r15 = S32(SIGNED(ctx->r2) >> 16);
            goto L_8004AE30;
    }
    // 0x8004AE24: sra         $t7, $v0, 16
    ctx->r15 = S32(SIGNED(ctx->r2) >> 16);
L_8004AE28:
    // 0x8004AE28: b           L_8004AE7C
    // 0x8004AE2C: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
        goto L_8004AE7C;
    // 0x8004AE2C: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_8004AE30:
    // 0x8004AE30: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8004AE34: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8004AE38: sra         $t7, $v0, 16
    ctx->r15 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8004AE3C: b           L_8004AE7C
    // 0x8004AE40: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
        goto L_8004AE7C;
    // 0x8004AE40: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_8004AE44:
    // 0x8004AE44: blez        $v1, L_8004AE68
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8004AE48: andi        $t8, $a0, 0x800F
        ctx->r24 = ctx->r4 & 0X800F;
            goto L_8004AE68;
    }
    // 0x8004AE48: andi        $t8, $a0, 0x800F
    ctx->r24 = ctx->r4 & 0X800F;
    // 0x8004AE4C: lw          $t9, 0xD0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XD0);
    // 0x8004AE50: ori         $t6, $t8, 0x3FF0
    ctx->r14 = ctx->r24 | 0X3FF0;
    // 0x8004AE54: addiu       $t7, $v1, -0x3FE
    ctx->r15 = ADD32(ctx->r3, -0X3FE);
    // 0x8004AE58: sh          $t6, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r14;
    // 0x8004AE5C: sh          $t7, 0x9A($sp)
    MEM_H(0X9A, ctx->r29) = ctx->r15;
    // 0x8004AE60: b           L_8004AE7C
    // 0x8004AE64: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8004AE7C;
    // 0x8004AE64: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8004AE68:
    // 0x8004AE68: bgez        $v1, L_8004AE78
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8004AE6C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8004AE78;
    }
    // 0x8004AE6C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8004AE70: b           L_8004AE7C
    // 0x8004AE74: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8004AE7C;
    // 0x8004AE74: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8004AE78:
    // 0x8004AE78: sh          $zero, 0x9A($sp)
    MEM_H(0X9A, ctx->r29) = 0;
L_8004AE7C:
    // 0x8004AE7C: blez        $v0, L_8004AEC8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8004AE80: sll         $t8, $v0, 16
        ctx->r24 = S32(ctx->r2 << 16);
            goto L_8004AEC8;
    }
    // 0x8004AE80: sll         $t8, $v0, 16
    ctx->r24 = S32(ctx->r2 << 16);
    // 0x8004AE84: sll         $t8, $v0, 16
    ctx->r24 = S32(ctx->r2 << 16);
    // 0x8004AE88: sra         $t6, $t8, 16
    ctx->r14 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8004AE8C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8004AE90: bne         $t6, $at, L_8004AEA4
    if (ctx->r14 != ctx->r1) {
        // 0x8004AE94: lw          $t9, 0xD0($sp)
        ctx->r25 = MEM_W(ctx->r29, 0XD0);
            goto L_8004AEA4;
    }
    // 0x8004AE94: lw          $t9, 0xD0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XD0);
    // 0x8004AE98: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x8004AE9C: b           L_8004AEAC
    // 0x8004AEA0: addiu       $a1, $a1, -0x2BB8
    ctx->r5 = ADD32(ctx->r5, -0X2BB8);
        goto L_8004AEAC;
    // 0x8004AEA0: addiu       $a1, $a1, -0x2BB8
    ctx->r5 = ADD32(ctx->r5, -0X2BB8);
L_8004AEA4:
    // 0x8004AEA4: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x8004AEA8: addiu       $a1, $a1, -0x2BB4
    ctx->r5 = ADD32(ctx->r5, -0X2BB4);
L_8004AEAC:
    // 0x8004AEAC: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x8004AEB0: sw          $t7, 0x14($t9)
    MEM_W(0X14, ctx->r25) = ctx->r15;
    // 0x8004AEB4: lw          $a0, 0x8($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X8);
    // 0x8004AEB8: jal         0x8004A4A0
    // 0x8004AEBC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8004AEBC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_0:
    // 0x8004AEC0: b           L_8004B278
    // 0x8004AEC4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_8004B278;
    // 0x8004AEC4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_8004AEC8:
    // 0x8004AEC8: sra         $t6, $t8, 16
    ctx->r14 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8004AECC: bne         $t6, $zero, L_8004AEDC
    if (ctx->r14 != 0) {
        // 0x8004AED0: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_8004AEDC;
    }
    // 0x8004AED0: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x8004AED4: b           L_8004B260
    // 0x8004AED8: sh          $zero, 0x9A($sp)
    MEM_H(0X9A, ctx->r29) = 0;
        goto L_8004B260;
    // 0x8004AED8: sh          $zero, 0x9A($sp)
    MEM_H(0X9A, ctx->r29) = 0;
L_8004AEDC:
    // 0x8004AEDC: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    // 0x8004AEE0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8004AEE4: lbu         $t7, 0xD7($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0XD7);
    // 0x8004AEE8: lh          $t9, 0x9A($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X9A);
    // 0x8004AEEC: c.lt.d      $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f20.d < ctx->f2.d;
    // 0x8004AEF0: addiu       $at, $zero, 0x7597
    ctx->r1 = ADD32(0, 0X7597);
    // 0x8004AEF4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8004AEF8: addiu       $s5, $sp, 0xB1
    ctx->r21 = ADD32(ctx->r29, 0XB1);
    // 0x8004AEFC: bc1f        L_8004AF08
    if (!c1cs) {
        // 0x8004AF00: sw          $t7, 0x48($sp)
        MEM_W(0X48, ctx->r29) = ctx->r15;
            goto L_8004AF08;
    }
    // 0x8004AF00: sw          $t7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r15;
    // 0x8004AF04: neg.d       $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.d); 
    ctx->f20.d = -ctx->f20.d;
L_8004AF08:
    // 0x8004AF08: multu       $t9, $at
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r1)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004AF0C: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x8004AF10: ori         $at, $at, 0x86A0
    ctx->r1 = ctx->r1 | 0X86A0;
    // 0x8004AF14: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x8004AF18: mflo        $t8
    ctx->r24 = lo;
    // 0x8004AF1C: nop

    // 0x8004AF20: nop

    // 0x8004AF24: div         $zero, $t8, $at
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r1)));
    // 0x8004AF28: mflo        $t6
    ctx->r14 = lo;
    // 0x8004AF2C: addiu       $t7, $t6, -0x4
    ctx->r15 = ADD32(ctx->r14, -0X4);
    // 0x8004AF30: sll         $t9, $t7, 16
    ctx->r25 = S32(ctx->r15 << 16);
    // 0x8004AF34: sra         $t8, $t9, 16
    ctx->r24 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8004AF38: bgez        $t8, L_8004AFA0
    if (SIGNED(ctx->r24) >= 0) {
        // 0x8004AF3C: sh          $t7, 0x9A($sp)
        MEM_H(0X9A, ctx->r29) = ctx->r15;
            goto L_8004AFA0;
    }
    // 0x8004AF3C: sh          $t7, 0x9A($sp)
    MEM_H(0X9A, ctx->r29) = ctx->r15;
    // 0x8004AF40: sll         $t9, $t7, 16
    ctx->r25 = S32(ctx->r15 << 16);
    // 0x8004AF44: sra         $t8, $t9, 16
    ctx->r24 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8004AF48: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x8004AF4C: subu        $a0, $t6, $t8
    ctx->r4 = SUB32(ctx->r14, ctx->r24);
    // 0x8004AF50: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x8004AF54: and         $v0, $a0, $at
    ctx->r2 = ctx->r4 & ctx->r1;
    // 0x8004AF58: negu        $t9, $v0
    ctx->r25 = SUB32(0, ctx->r2);
    // 0x8004AF5C: blez        $v0, L_8004B010
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8004AF60: sh          $t9, 0x9A($sp)
        MEM_H(0X9A, ctx->r29) = ctx->r25;
            goto L_8004B010;
    }
    // 0x8004AF60: sh          $t9, 0x9A($sp)
    MEM_H(0X9A, ctx->r29) = ctx->r25;
    // 0x8004AF64: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8004AF68: addiu       $a0, $a0, -0x2C00
    ctx->r4 = ADD32(ctx->r4, -0X2C00);
L_8004AF6C:
    // 0x8004AF6C: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x8004AF70: beq         $t6, $zero, L_8004AF8C
    if (ctx->r14 == 0) {
        // 0x8004AF74: sra         $t9, $v0, 1
        ctx->r25 = S32(SIGNED(ctx->r2) >> 1);
            goto L_8004AF8C;
    }
    // 0x8004AF74: sra         $t9, $v0, 1
    ctx->r25 = S32(SIGNED(ctx->r2) >> 1);
    // 0x8004AF78: sll         $t8, $v1, 3
    ctx->r24 = S32(ctx->r3 << 3);
    // 0x8004AF7C: addu        $t7, $a0, $t8
    ctx->r15 = ADD32(ctx->r4, ctx->r24);
    // 0x8004AF80: ldc1        $f4, 0x0($t7)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r15, 0X0);
    // 0x8004AF84: mul.d       $f20, $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.d); NAN_CHECK(ctx->f4.d); 
    ctx->f20.d = MUL_D(ctx->f20.d, ctx->f4.d);
    // 0x8004AF88: nop

L_8004AF8C:
    // 0x8004AF8C: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x8004AF90: bgtz        $t9, L_8004AF6C
    if (SIGNED(ctx->r25) > 0) {
        // 0x8004AF94: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_8004AF6C;
    }
    // 0x8004AF94: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8004AF98: b           L_8004B014
    // 0x8004AF9C: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
        goto L_8004B014;
    // 0x8004AF9C: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
L_8004AFA0:
    // 0x8004AFA0: lh          $t6, 0x9A($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X9A);
    // 0x8004AFA4: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8004AFA8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8004AFAC: blez        $t6, L_8004B010
    if (SIGNED(ctx->r14) <= 0) {
        // 0x8004AFB0: andi        $t8, $t6, 0xFFFC
        ctx->r24 = ctx->r14 & 0XFFFC;
            goto L_8004B010;
    }
    // 0x8004AFB0: andi        $t8, $t6, 0xFFFC
    ctx->r24 = ctx->r14 & 0XFFFC;
    // 0x8004AFB4: sll         $v0, $t8, 16
    ctx->r2 = S32(ctx->r24 << 16);
    // 0x8004AFB8: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x8004AFBC: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x8004AFC0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8004AFC4: sra         $t6, $t9, 16
    ctx->r14 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8004AFC8: sra         $t7, $v0, 16
    ctx->r15 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8004AFCC: sh          $t8, 0x9A($sp)
    MEM_H(0X9A, ctx->r29) = ctx->r24;
    // 0x8004AFD0: blez        $t6, L_8004B00C
    if (SIGNED(ctx->r14) <= 0) {
        // 0x8004AFD4: or          $v0, $t7, $zero
        ctx->r2 = ctx->r15 | 0;
            goto L_8004B00C;
    }
    // 0x8004AFD4: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x8004AFD8: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8004AFDC: addiu       $a0, $a0, -0x2C00
    ctx->r4 = ADD32(ctx->r4, -0X2C00);
L_8004AFE0:
    // 0x8004AFE0: andi        $t7, $v0, 0x1
    ctx->r15 = ctx->r2 & 0X1;
    // 0x8004AFE4: beq         $t7, $zero, L_8004B000
    if (ctx->r15 == 0) {
        // 0x8004AFE8: sra         $t6, $v0, 1
        ctx->r14 = S32(SIGNED(ctx->r2) >> 1);
            goto L_8004B000;
    }
    // 0x8004AFE8: sra         $t6, $v0, 1
    ctx->r14 = S32(SIGNED(ctx->r2) >> 1);
    // 0x8004AFEC: sll         $t8, $v1, 3
    ctx->r24 = S32(ctx->r3 << 3);
    // 0x8004AFF0: addu        $t9, $a0, $t8
    ctx->r25 = ADD32(ctx->r4, ctx->r24);
    // 0x8004AFF4: ldc1        $f6, 0x0($t9)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r25, 0X0);
    // 0x8004AFF8: mul.d       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f6.d); 
    ctx->f0.d = MUL_D(ctx->f0.d, ctx->f6.d);
    // 0x8004AFFC: nop

L_8004B000:
    // 0x8004B000: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x8004B004: bgtz        $t6, L_8004AFE0
    if (SIGNED(ctx->r14) > 0) {
        // 0x8004B008: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_8004AFE0;
    }
    // 0x8004B008: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_8004B00C:
    // 0x8004B00C: div.d       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.d); NAN_CHECK(ctx->f0.d); 
    ctx->f20.d = DIV_D(ctx->f20.d, ctx->f0.d);
L_8004B010:
    // 0x8004B010: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
L_8004B014:
    // 0x8004B014: addiu       $at, $zero, 0x66
    ctx->r1 = ADD32(0, 0X66);
    // 0x8004B018: lw          $t8, 0xD0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XD0);
    // 0x8004B01C: bne         $t7, $at, L_8004B030
    if (ctx->r15 != ctx->r1) {
        // 0x8004B020: addiu       $t6, $zero, 0x30
        ctx->r14 = ADD32(0, 0X30);
            goto L_8004B030;
    }
    // 0x8004B020: addiu       $t6, $zero, 0x30
    ctx->r14 = ADD32(0, 0X30);
    // 0x8004B024: lh          $a1, 0x9A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X9A);
    // 0x8004B028: b           L_8004B030
    // 0x8004B02C: addiu       $a1, $a1, 0xA
    ctx->r5 = ADD32(ctx->r5, 0XA);
        goto L_8004B030;
    // 0x8004B02C: addiu       $a1, $a1, 0xA
    ctx->r5 = ADD32(ctx->r5, 0XA);
L_8004B030:
    // 0x8004B030: lw          $t9, 0x24($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X24);
    // 0x8004B034: addu        $s4, $a1, $t9
    ctx->r20 = ADD32(ctx->r5, ctx->r25);
    // 0x8004B038: slti        $at, $s4, 0x14
    ctx->r1 = SIGNED(ctx->r20) < 0X14 ? 1 : 0;
    // 0x8004B03C: bne         $at, $zero, L_8004B048
    if (ctx->r1 != 0) {
        // 0x8004B040: nop
    
            goto L_8004B048;
    }
    // 0x8004B040: nop

    // 0x8004B044: addiu       $s4, $zero, 0x13
    ctx->r20 = ADD32(0, 0X13);
L_8004B048:
    // 0x8004B048: blez        $s4, L_8004B118
    if (SIGNED(ctx->r20) <= 0) {
        // 0x8004B04C: sb          $t6, 0xB0($sp)
        MEM_B(0XB0, ctx->r29) = ctx->r14;
            goto L_8004B118;
    }
    // 0x8004B04C: sb          $t6, 0xB0($sp)
    MEM_B(0XB0, ctx->r29) = ctx->r14;
    // 0x8004B050: c.lt.d      $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f2.d < ctx->f20.d;
    // 0x8004B054: addiu       $s3, $zero, 0x30
    ctx->r19 = ADD32(0, 0X30);
    // 0x8004B058: addiu       $s2, $sp, 0x74
    ctx->r18 = ADD32(ctx->r29, 0X74);
    // 0x8004B05C: bc1fl       L_8004B11C
    if (!c1cs) {
        // 0x8004B060: lh          $t8, 0x9A($sp)
        ctx->r24 = MEM_H(ctx->r29, 0X9A);
            goto L_8004B11C;
    }
    goto skip_4;
    // 0x8004B060: lh          $t8, 0x9A($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X9A);
    skip_4:
    // 0x8004B064: trunc.w.d   $f8, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    ctx->f8.u32l = TRUNC_W_D(ctx->f20.d);
L_8004B068:
    // 0x8004B068: addiu       $s4, $s4, -0x8
    ctx->r20 = ADD32(ctx->r20, -0X8);
    // 0x8004B06C: addiu       $s5, $s5, 0x8
    ctx->r21 = ADD32(ctx->r21, 0X8);
    // 0x8004B070: mfc1        $s1, $f8
    ctx->r17 = (int32_t)ctx->f8.u32l;
    // 0x8004B074: blez        $s4, L_8004B098
    if (SIGNED(ctx->r20) <= 0) {
        // 0x8004B078: nop
    
            goto L_8004B098;
    }
    // 0x8004B078: nop

    // 0x8004B07C: mtc1        $s1, $f10
    ctx->f10.u32l = ctx->r17;
    // 0x8004B080: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8004B084: ldc1        $f8, -0x2BA8($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X2BA8);
    // 0x8004B088: cvt.d.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.d = CVT_D_W(ctx->f10.u32l);
    // 0x8004B08C: sub.d       $f6, $f20, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f20.d - ctx->f4.d;
    // 0x8004B090: mul.d       $f20, $f6, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f20.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x8004B094: nop

L_8004B098:
    // 0x8004B098: blez        $s1, L_8004B0E0
    if (SIGNED(ctx->r17) <= 0) {
        // 0x8004B09C: addiu       $s0, $zero, 0x8
        ctx->r16 = ADD32(0, 0X8);
            goto L_8004B0E0;
    }
    // 0x8004B09C: addiu       $s0, $zero, 0x8
    ctx->r16 = ADD32(0, 0X8);
    // 0x8004B0A0: addiu       $s0, $zero, 0x7
    ctx->r16 = ADD32(0, 0X7);
    // 0x8004B0A4: bltz        $s0, L_8004B0E0
    if (SIGNED(ctx->r16) < 0) {
        // 0x8004B0A8: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_8004B0E0;
    }
    // 0x8004B0A8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_8004B0AC:
    // 0x8004B0AC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8004B0B0: jal         0x80051820
    // 0x8004B0B4: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    ldiv_recomp(rdram, ctx);
        goto after_1;
    // 0x8004B0B4: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_1:
    // 0x8004B0B8: lw          $t8, 0x78($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X78);
    // 0x8004B0BC: addiu       $s5, $s5, -0x1
    ctx->r21 = ADD32(ctx->r21, -0X1);
    // 0x8004B0C0: addiu       $t9, $t8, 0x30
    ctx->r25 = ADD32(ctx->r24, 0X30);
    // 0x8004B0C4: sb          $t9, 0x0($s5)
    MEM_B(0X0, ctx->r21) = ctx->r25;
    // 0x8004B0C8: lw          $s1, 0x74($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X74);
    // 0x8004B0CC: blezl       $s1, L_8004B0E4
    if (SIGNED(ctx->r17) <= 0) {
        // 0x8004B0D0: mtc1        $zero, $f3
        ctx->f_odd[(3 - 1) * 2] = 0;
            goto L_8004B0E4;
    }
    goto skip_5;
    // 0x8004B0D0: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    skip_5:
    // 0x8004B0D4: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x8004B0D8: bgezl       $s0, L_8004B0AC
    if (SIGNED(ctx->r16) >= 0) {
        // 0x8004B0DC: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_8004B0AC;
    }
    goto skip_6;
    // 0x8004B0DC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    skip_6:
L_8004B0E0:
    // 0x8004B0E0: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
L_8004B0E4:
    // 0x8004B0E4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8004B0E8: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x8004B0EC: bltz        $s0, L_8004B100
    if (SIGNED(ctx->r16) < 0) {
        // 0x8004B0F0: addiu       $s0, $s0, -0x1
        ctx->r16 = ADD32(ctx->r16, -0X1);
            goto L_8004B100;
    }
L_8004B0F0:
    // 0x8004B0F0: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x8004B0F4: addiu       $s5, $s5, -0x1
    ctx->r21 = ADD32(ctx->r21, -0X1);
    // 0x8004B0F8: bgez        $s0, L_8004B0F0
    if (SIGNED(ctx->r16) >= 0) {
        // 0x8004B0FC: sb          $s3, 0x0($s5)
        MEM_B(0X0, ctx->r21) = ctx->r19;
            goto L_8004B0F0;
    }
    // 0x8004B0FC: sb          $s3, 0x0($s5)
    MEM_B(0X0, ctx->r21) = ctx->r19;
L_8004B100:
    // 0x8004B100: blez        $s4, L_8004B118
    if (SIGNED(ctx->r20) <= 0) {
        // 0x8004B104: addiu       $s5, $s5, 0x8
        ctx->r21 = ADD32(ctx->r21, 0X8);
            goto L_8004B118;
    }
    // 0x8004B104: addiu       $s5, $s5, 0x8
    ctx->r21 = ADD32(ctx->r21, 0X8);
    // 0x8004B108: c.lt.d      $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f2.d < ctx->f20.d;
    // 0x8004B10C: nop

    // 0x8004B110: bc1tl       L_8004B068
    if (c1cs) {
        // 0x8004B114: trunc.w.d   $f8, $f20
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    ctx->f8.u32l = TRUNC_W_D(ctx->f20.d);
            goto L_8004B068;
    }
    goto skip_7;
    // 0x8004B114: trunc.w.d   $f8, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    ctx->f8.u32l = TRUNC_W_D(ctx->f20.d);
    skip_7:
L_8004B118:
    // 0x8004B118: lh          $t8, 0x9A($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X9A);
L_8004B11C:
    // 0x8004B11C: lbu         $t6, 0xB1($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0XB1);
    // 0x8004B120: addiu       $t7, $sp, 0xB0
    ctx->r15 = ADD32(ctx->r29, 0XB0);
    // 0x8004B124: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8004B128: subu        $s4, $s5, $t7
    ctx->r20 = SUB32(ctx->r21, ctx->r15);
    // 0x8004B12C: addiu       $t9, $t8, 0x7
    ctx->r25 = ADD32(ctx->r24, 0X7);
    // 0x8004B130: addiu       $s4, $s4, -0x1
    ctx->r20 = ADD32(ctx->r20, -0X1);
    // 0x8004B134: sh          $t9, 0x9A($sp)
    MEM_H(0X9A, ctx->r29) = ctx->r25;
    // 0x8004B138: bne         $v0, $t6, L_8004B160
    if (ctx->r2 != ctx->r14) {
        // 0x8004B13C: addiu       $s5, $sp, 0xB1
        ctx->r21 = ADD32(ctx->r29, 0XB1);
            goto L_8004B160;
    }
    // 0x8004B13C: addiu       $s5, $sp, 0xB1
    ctx->r21 = ADD32(ctx->r29, 0XB1);
    // 0x8004B140: lh          $t7, 0x9A($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X9A);
L_8004B144:
    // 0x8004B144: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x8004B148: addiu       $s4, $s4, -0x1
    ctx->r20 = ADD32(ctx->r20, -0X1);
    // 0x8004B14C: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x8004B150: sh          $t8, 0x9A($sp)
    MEM_H(0X9A, ctx->r29) = ctx->r24;
    // 0x8004B154: lbu         $t9, 0x0($s5)
    ctx->r25 = MEM_BU(ctx->r21, 0X0);
    // 0x8004B158: beql        $v0, $t9, L_8004B144
    if (ctx->r2 == ctx->r25) {
        // 0x8004B15C: lh          $t7, 0x9A($sp)
        ctx->r15 = MEM_H(ctx->r29, 0X9A);
            goto L_8004B144;
    }
    goto skip_8;
    // 0x8004B15C: lh          $t7, 0x9A($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X9A);
    skip_8:
L_8004B160:
    // 0x8004B160: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x8004B164: addiu       $at, $zero, 0x66
    ctx->r1 = ADD32(0, 0X66);
    // 0x8004B168: lw          $t8, 0xD0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XD0);
    // 0x8004B16C: bne         $t6, $at, L_8004B180
    if (ctx->r14 != ctx->r1) {
        // 0x8004B170: lw          $t7, 0x48($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X48);
            goto L_8004B180;
    }
    // 0x8004B170: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x8004B174: lh          $a1, 0x9A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X9A);
    // 0x8004B178: b           L_8004B1A0
    // 0x8004B17C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
        goto L_8004B1A0;
    // 0x8004B17C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_8004B180:
    // 0x8004B180: addiu       $at, $zero, 0x65
    ctx->r1 = ADD32(0, 0X65);
    // 0x8004B184: beq         $t7, $at, L_8004B194
    if (ctx->r15 == ctx->r1) {
        // 0x8004B188: addiu       $at, $zero, 0x45
        ctx->r1 = ADD32(0, 0X45);
            goto L_8004B194;
    }
    // 0x8004B188: addiu       $at, $zero, 0x45
    ctx->r1 = ADD32(0, 0X45);
    // 0x8004B18C: bne         $t7, $at, L_8004B19C
    if (ctx->r15 != ctx->r1) {
        // 0x8004B190: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8004B19C;
    }
    // 0x8004B190: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8004B194:
    // 0x8004B194: b           L_8004B19C
    // 0x8004B198: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8004B19C;
    // 0x8004B198: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004B19C:
    // 0x8004B19C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_8004B1A0:
    // 0x8004B1A0: lw          $t9, 0x24($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X24);
    // 0x8004B1A4: addu        $s3, $a1, $t9
    ctx->r19 = ADD32(ctx->r5, ctx->r25);
    // 0x8004B1A8: sll         $t6, $s3, 16
    ctx->r14 = S32(ctx->r19 << 16);
    // 0x8004B1AC: sra         $s3, $t6, 16
    ctx->r19 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8004B1B0: slt         $at, $s4, $s3
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x8004B1B4: beq         $at, $zero, L_8004B1C8
    if (ctx->r1 == 0) {
        // 0x8004B1B8: nop
    
            goto L_8004B1C8;
    }
    // 0x8004B1B8: nop

    // 0x8004B1BC: sll         $s3, $s4, 16
    ctx->r19 = S32(ctx->r20 << 16);
    // 0x8004B1C0: sra         $t8, $s3, 16
    ctx->r24 = S32(SIGNED(ctx->r19) >> 16);
    // 0x8004B1C4: or          $s3, $t8, $zero
    ctx->r19 = ctx->r24 | 0;
L_8004B1C8:
    // 0x8004B1C8: blez        $s3, L_8004B260
    if (SIGNED(ctx->r19) <= 0) {
        // 0x8004B1CC: slt         $at, $s3, $s4
        ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r20) ? 1 : 0;
            goto L_8004B260;
    }
    // 0x8004B1CC: slt         $at, $s3, $s4
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x8004B1D0: beq         $at, $zero, L_8004B1F0
    if (ctx->r1 == 0) {
        // 0x8004B1D4: addu        $v0, $s3, $s5
        ctx->r2 = ADD32(ctx->r19, ctx->r21);
            goto L_8004B1F0;
    }
    // 0x8004B1D4: addu        $v0, $s3, $s5
    ctx->r2 = ADD32(ctx->r19, ctx->r21);
    // 0x8004B1D8: lbu         $t9, 0x0($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X0);
    // 0x8004B1DC: slti        $at, $t9, 0x35
    ctx->r1 = SIGNED(ctx->r25) < 0X35 ? 1 : 0;
    // 0x8004B1E0: bnel        $at, $zero, L_8004B1F4
    if (ctx->r1 != 0) {
        // 0x8004B1E4: addiu       $a1, $zero, 0x30
        ctx->r5 = ADD32(0, 0X30);
            goto L_8004B1F4;
    }
    goto skip_9;
    // 0x8004B1E4: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    skip_9:
    // 0x8004B1E8: b           L_8004B1F8
    // 0x8004B1EC: addiu       $a1, $zero, 0x39
    ctx->r5 = ADD32(0, 0X39);
        goto L_8004B1F8;
    // 0x8004B1EC: addiu       $a1, $zero, 0x39
    ctx->r5 = ADD32(0, 0X39);
L_8004B1F0:
    // 0x8004B1F0: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
L_8004B1F4:
    // 0x8004B1F4: addu        $v0, $s3, $s5
    ctx->r2 = ADD32(ctx->r19, ctx->r21);
L_8004B1F8:
    // 0x8004B1F8: lbu         $t6, -0x1($v0)
    ctx->r14 = MEM_BU(ctx->r2, -0X1);
    // 0x8004B1FC: addiu       $v1, $s3, -0x1
    ctx->r3 = ADD32(ctx->r19, -0X1);
    // 0x8004B200: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8004B204: bne         $a1, $t6, L_8004B22C
    if (ctx->r5 != ctx->r14) {
        // 0x8004B208: addiu       $at, $zero, 0x39
        ctx->r1 = ADD32(0, 0X39);
            goto L_8004B22C;
    }
    // 0x8004B208: addiu       $at, $zero, 0x39
    ctx->r1 = ADD32(0, 0X39);
    // 0x8004B20C: addu        $v0, $v1, $s5
    ctx->r2 = ADD32(ctx->r3, ctx->r21);
L_8004B210:
    // 0x8004B210: lbu         $t9, -0x1($v0)
    ctx->r25 = MEM_BU(ctx->r2, -0X1);
    // 0x8004B214: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x8004B218: sll         $t7, $s3, 16
    ctx->r15 = S32(ctx->r19 << 16);
    // 0x8004B21C: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8004B220: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8004B224: beq         $a0, $t9, L_8004B210
    if (ctx->r4 == ctx->r25) {
        // 0x8004B228: sra         $s3, $t7, 16
        ctx->r19 = S32(SIGNED(ctx->r15) >> 16);
            goto L_8004B210;
    }
    // 0x8004B228: sra         $s3, $t7, 16
    ctx->r19 = S32(SIGNED(ctx->r15) >> 16);
L_8004B22C:
    // 0x8004B22C: bne         $a0, $at, L_8004B240
    if (ctx->r4 != ctx->r1) {
        // 0x8004B230: addu        $v0, $s5, $v1
        ctx->r2 = ADD32(ctx->r21, ctx->r3);
            goto L_8004B240;
    }
    // 0x8004B230: addu        $v0, $s5, $v1
    ctx->r2 = ADD32(ctx->r21, ctx->r3);
    // 0x8004B234: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x8004B238: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8004B23C: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
L_8004B240:
    // 0x8004B240: bgez        $v1, L_8004B260
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8004B244: lh          $t6, 0x9A($sp)
        ctx->r14 = MEM_H(ctx->r29, 0X9A);
            goto L_8004B260;
    }
    // 0x8004B244: lh          $t6, 0x9A($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X9A);
    // 0x8004B248: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8004B24C: sll         $t8, $s3, 16
    ctx->r24 = S32(ctx->r19 << 16);
    // 0x8004B250: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8004B254: sh          $t7, 0x9A($sp)
    MEM_H(0X9A, ctx->r29) = ctx->r15;
    // 0x8004B258: sra         $s3, $t8, 16
    ctx->r19 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8004B25C: addiu       $s5, $s5, -0x1
    ctx->r21 = ADD32(ctx->r21, -0X1);
L_8004B260:
    // 0x8004B260: lw          $s0, 0xD0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XD0);
    // 0x8004B264: lbu         $s4, 0xD7($sp)
    ctx->r20 = MEM_BU(ctx->r29, 0XD7);
    // 0x8004B268: or          $s1, $s5, $zero
    ctx->r17 = ctx->r21 | 0;
    // 0x8004B26C: jal         0x8004A7E0
    // 0x8004B270: lh          $s2, 0x9A($sp)
    ctx->r18 = MEM_H(ctx->r29, 0X9A);
    _Ldunscale(rdram, ctx);
        goto after_2;
    // 0x8004B270: lh          $s2, 0x9A($sp)
    ctx->r18 = MEM_H(ctx->r29, 0X9A);
    after_2:
    // 0x8004B274: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_8004B278:
    // 0x8004B278: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x8004B27C: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x8004B280: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x8004B284: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x8004B288: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x8004B28C: lw          $s4, 0x34($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X34);
    // 0x8004B290: lw          $s5, 0x38($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X38);
    // 0x8004B294: jr          $ra
    // 0x8004B298: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    TRACE_RETURN()
    return;
    // 0x8004B298: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void func_80020730_21330(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80020730: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80020734: lui         $t6, 0x8007
    ctx->r14 = S32(0X8007 << 16);
    // 0x80020738: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002073C: addiu       $t6, $t6, -0x3038
    ctx->r14 = ADD32(ctx->r14, -0X3038);
    // 0x80020740: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x80020744: addiu       $v0, $sp, 0x18
    ctx->r2 = ADD32(ctx->r29, 0X18);
    // 0x80020748: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x8002074C: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x80020750: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x80020754: lui         $t1, 0x4
    ctx->r9 = S32(0X4 << 16);
    // 0x80020758: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8002075C: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x80020760: sw          $at, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r1;
    // 0x80020764: lw          $t9, 0xC($t6)
    ctx->r25 = MEM_W(ctx->r14, 0XC);
    // 0x80020768: sw          $t9, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r25;
    // 0x8002076C: lw          $at, 0x10($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X10);
    // 0x80020770: sw          $at, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r1;
    // 0x80020774: lw          $t9, 0x14($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X14);
    // 0x80020778: sw          $t9, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r25;
    // 0x8002077C: lw          $t0, -0x3A38($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3A38);
    // 0x80020780: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80020784: lbu         $t1, -0x522A($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X522A);
    // 0x80020788: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8002078C: addu        $t3, $v0, $t2
    ctx->r11 = ADD32(ctx->r2, ctx->r10);
    // 0x80020790: lw          $t9, 0x0($t3)
    ctx->r25 = MEM_W(ctx->r11, 0X0);
    // 0x80020794: jalr        $t9
    // 0x80020798: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80020798: nop

    after_0:
    // 0x8002079C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800207A0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800207A4: jr          $ra
    // 0x800207A8: nop

    TRACE_RETURN()
    return;
    // 0x800207A8: nop

;}
RECOMP_FUNC void func_8003BCFC_3C8FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003BCFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003BD00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003BD04: lui         $t6, 0x801C
    ctx->r14 = S32(0X801C << 16);
    // 0x8003BD08: lbu         $t6, 0x9D0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X9D0);
    // 0x8003BD0C: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8003BD10: lui         $t1, 0x801C
    ctx->r9 = S32(0X801C << 16);
    // 0x8003BD14: beq         $t6, $zero, L_8003BD24
    if (ctx->r14 == 0) {
        // 0x8003BD18: lui         $t3, 0x801C
        ctx->r11 = S32(0X801C << 16);
            goto L_8003BD24;
    }
    // 0x8003BD18: lui         $t3, 0x801C
    ctx->r11 = S32(0X801C << 16);
    // 0x8003BD1C: b           L_8003BD38
    // 0x8003BD20: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
        goto L_8003BD38;
    // 0x8003BD20: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
L_8003BD24:
    // 0x8003BD24: lui         $t7, 0x801C
    ctx->r15 = S32(0X801C << 16);
    // 0x8003BD28: lw          $t7, 0x1728($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1728);
    // 0x8003BD2C: lhu         $a2, 0x58($t7)
    ctx->r6 = MEM_HU(ctx->r15, 0X58);
    // 0x8003BD30: sra         $t9, $a2, 8
    ctx->r25 = S32(SIGNED(ctx->r6) >> 8);
    // 0x8003BD34: andi        $a2, $t9, 0x7F
    ctx->r6 = ctx->r25 & 0X7F;
L_8003BD38:
    // 0x8003BD38: lbu         $t1, 0x9CC($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X9CC);
    // 0x8003BD3C: addiu       $t3, $t3, 0xA68
    ctx->r11 = ADD32(ctx->r11, 0XA68);
    // 0x8003BD40: lw          $a0, -0x5DD0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5DD0);
    // 0x8003BD44: sll         $t2, $t1, 3
    ctx->r10 = S32(ctx->r9 << 3);
    // 0x8003BD48: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x8003BD4C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8003BD50: jal         0x800485B0
    // 0x8003BD54: addu        $a1, $t2, $t3
    ctx->r5 = ADD32(ctx->r10, ctx->r11);
    alSynSetPan(rdram, ctx);
        goto after_0;
    // 0x8003BD54: addu        $a1, $t2, $t3
    ctx->r5 = ADD32(ctx->r10, ctx->r11);
    after_0:
    // 0x8003BD58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003BD5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003BD60: jr          $ra
    // 0x8003BD64: nop

    TRACE_RETURN()
    return;
    // 0x8003BD64: nop

;}
RECOMP_FUNC void func_8000C260_CE60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000C260: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8000C264: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x8000C268: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8000C26C: lw          $t7, 0x7C48($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7C48);
    // 0x8000C270: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8000C274: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8000C278: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x8000C27C: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x8000C280: bne         $t7, $zero, L_8000C304
    if (ctx->r15 != 0) {
        // 0x8000C284: sw          $a3, 0x54($sp)
        MEM_W(0X54, ctx->r29) = ctx->r7;
            goto L_8000C304;
    }
    // 0x8000C284: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x8000C288: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x8000C28C: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x8000C290: lw          $t8, 0x7C54($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7C54);
    // 0x8000C294: sll         $t9, $t1, 3
    ctx->r25 = S32(ctx->r9 << 3);
    // 0x8000C298: addu        $t9, $t9, $t1
    ctx->r25 = ADD32(ctx->r25, ctx->r9);
    // 0x8000C29C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8000C2A0: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x8000C2A4: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    // 0x8000C2A8: lw          $a3, 0xC($v0)
    ctx->r7 = MEM_W(ctx->r2, 0XC);
    // 0x8000C2AC: lw          $t0, 0x10($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X10);
    // 0x8000C2B0: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x8000C2B4: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
    // 0x8000C2B8: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x8000C2BC: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x8000C2C0: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    // 0x8000C2C4: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x8000C2C8: lw          $t7, 0x58($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X58);
    // 0x8000C2CC: addiu       $t2, $zero, 0x0
    ctx->r10 = ADD32(0, 0X0);
    // 0x8000C2D0: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8000C2D4: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x8000C2D8: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8000C2DC: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x8000C2E0: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    // 0x8000C2E4: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8000C2E8: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x8000C2EC: sw          $t8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r24;
    // 0x8000C2F0: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x8000C2F4: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x8000C2F8: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x8000C2FC: jal         0x8000C6A8
    // 0x8000C300: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    func_8000C6A8_D2A8(rdram, ctx);
        goto after_0;
    // 0x8000C300: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    after_0:
L_8000C304:
    // 0x8000C304: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8000C308: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8000C30C: jr          $ra
    // 0x8000C310: nop

    TRACE_RETURN()
    return;
    // 0x8000C310: nop

;}
RECOMP_FUNC void func_80003D88_4988(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80003D88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80003D8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80003D90: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80003D94: lhu         $a0, 0x1A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X1A);
    // 0x80003D98: jal         0x80003D28
    // 0x80003D9C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80003D28_4928(rdram, ctx);
        goto after_0;
    // 0x80003D9C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80003DA0: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80003DA4: swc1        $f0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f0.u32l;
    // 0x80003DA8: jal         0x80003CC8
    // 0x80003DAC: lhu         $a0, 0x1A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X1A);
    func_80003CC8_48C8(rdram, ctx);
        goto after_1;
    // 0x80003DAC: lhu         $a0, 0x1A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X1A);
    after_1:
    // 0x80003DB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80003DB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80003DB8: jr          $ra
    // 0x80003DBC: nop

    TRACE_RETURN()
    return;
    // 0x80003DBC: nop

;}
RECOMP_FUNC void func_8000D400_E000(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000D400: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000D404: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000D408: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
    // 0x8000D40C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8000D410: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8000D414: beql        $v0, $at, L_8000D43C
    if (ctx->r2 == ctx->r1) {
        // 0x8000D418: lh          $t7, 0x40($a0)
        ctx->r15 = MEM_H(ctx->r4, 0X40);
            goto L_8000D43C;
    }
    goto skip_0;
    // 0x8000D418: lh          $t7, 0x40($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X40);
    skip_0:
    // 0x8000D41C: beq         $v0, $a1, L_8000D48C
    if (ctx->r2 == ctx->r5) {
        // 0x8000D420: lui         $at, 0x8008
        ctx->r1 = S32(0X8008 << 16);
            goto L_8000D48C;
    }
    // 0x8000D420: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8000D424: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8000D428: beq         $v0, $at, L_8000D4A8
    if (ctx->r2 == ctx->r1) {
        // 0x8000D42C: nop
    
            goto L_8000D4A8;
    }
    // 0x8000D42C: nop

    // 0x8000D430: b           L_8000D4C8
    // 0x8000D434: nop

        goto L_8000D4C8;
    // 0x8000D434: nop

    // 0x8000D438: lh          $t7, 0x40($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X40);
L_8000D43C:
    // 0x8000D43C: lh          $t8, 0x42($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X42);
    // 0x8000D440: lh          $v0, 0x3E($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X3E);
    // 0x8000D444: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8000D448: multu       $t7, $t8
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8000D44C: sh          $a1, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r5;
    // 0x8000D450: bgez        $v0, L_8000D460
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8000D454: sra         $t6, $v0, 1
        ctx->r14 = S32(SIGNED(ctx->r2) >> 1);
            goto L_8000D460;
    }
    // 0x8000D454: sra         $t6, $v0, 1
    ctx->r14 = S32(SIGNED(ctx->r2) >> 1);
    // 0x8000D458: addiu       $at, $v0, 0x1
    ctx->r1 = ADD32(ctx->r2, 0X1);
    // 0x8000D45C: sra         $t6, $at, 1
    ctx->r14 = S32(SIGNED(ctx->r1) >> 1);
L_8000D460:
    // 0x8000D460: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x8000D464: mflo        $v1
    ctx->r3 = lo;
    // 0x8000D468: sh          $t6, 0x64($a0)
    MEM_H(0X64, ctx->r4) = ctx->r14;
    // 0x8000D46C: sh          $t6, 0x68($a0)
    MEM_H(0X68, ctx->r4) = ctx->r14;
    // 0x8000D470: bgez        $v1, L_8000D480
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8000D474: sra         $t9, $v1, 1
        ctx->r25 = S32(SIGNED(ctx->r3) >> 1);
            goto L_8000D480;
    }
    // 0x8000D474: sra         $t9, $v1, 1
    ctx->r25 = S32(SIGNED(ctx->r3) >> 1);
    // 0x8000D478: addiu       $at, $v1, 0x1
    ctx->r1 = ADD32(ctx->r3, 0X1);
    // 0x8000D47C: sra         $t9, $at, 1
    ctx->r25 = S32(SIGNED(ctx->r1) >> 1);
L_8000D480:
    // 0x8000D480: sh          $t9, 0x66($a0)
    MEM_H(0X66, ctx->r4) = ctx->r25;
    // 0x8000D484: b           L_8000D4D0
    // 0x8000D488: sh          $t9, 0x6A($a0)
    MEM_H(0X6A, ctx->r4) = ctx->r25;
        goto L_8000D4D0;
    // 0x8000D488: sh          $t9, 0x6A($a0)
    MEM_H(0X6A, ctx->r4) = ctx->r25;
L_8000D48C:
    // 0x8000D48C: lwc1        $f0, -0x53E0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X53E0);
    // 0x8000D490: sh          $a1, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r5;
    // 0x8000D494: swc1        $f0, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f0.u32l;
    // 0x8000D498: jal         0x8000D918
    // 0x8000D49C: swc1        $f0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f0.u32l;
    func_8000D918_E518(rdram, ctx);
        goto after_0;
    // 0x8000D49C: swc1        $f0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f0.u32l;
    after_0:
    // 0x8000D4A0: b           L_8000D4D4
    // 0x8000D4A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8000D4D4;
    // 0x8000D4A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8000D4A8:
    // 0x8000D4A8: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8000D4AC: lwc1        $f0, -0x53DC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X53DC);
    // 0x8000D4B0: sh          $a1, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r5;
    // 0x8000D4B4: swc1        $f0, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f0.u32l;
    // 0x8000D4B8: jal         0x8000D918
    // 0x8000D4BC: swc1        $f0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f0.u32l;
    func_8000D918_E518(rdram, ctx);
        goto after_1;
    // 0x8000D4BC: swc1        $f0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f0.u32l;
    after_1:
    // 0x8000D4C0: b           L_8000D4D4
    // 0x8000D4C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8000D4D4;
    // 0x8000D4C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8000D4C8:
    // 0x8000D4C8: jal         0x8000D66C
    // 0x8000D4CC: nop

    func_8000D66C_E26C(rdram, ctx);
        goto after_2;
    // 0x8000D4CC: nop

    after_2:
L_8000D4D0:
    // 0x8000D4D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8000D4D4:
    // 0x8000D4D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000D4D8: jr          $ra
    // 0x8000D4DC: nop

    TRACE_RETURN()
    return;
    // 0x8000D4DC: nop

;}
RECOMP_FUNC void func_80034EF8_35AF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80034EF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80034EFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80034F00: jal         0x80034F44
    // 0x80034F04: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80034F44_35B44(rdram, ctx);
        goto after_0;
    // 0x80034F04: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80034F08: jal         0x80035044
    // 0x80034F0C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80035044_35C44(rdram, ctx);
        goto after_1;
    // 0x80034F0C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80034F10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80034F14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80034F18: jr          $ra
    // 0x80034F1C: nop

    TRACE_RETURN()
    return;
    // 0x80034F1C: nop

;}
RECOMP_FUNC void func_80007014_7C14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80007014: jr          $ra
    // 0x80007018: addiu       $v0, $a0, 0x78
    ctx->r2 = ADD32(ctx->r4, 0X78);
    TRACE_RETURN()
    return;
    // 0x80007018: addiu       $v0, $a0, 0x78
    ctx->r2 = ADD32(ctx->r4, 0X78);
;}
RECOMP_FUNC void func_80035064_35C64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80035064: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80035068: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003506C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80035070: jal         0x800362DC
    // 0x80035074: lw          $a0, -0x254C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X254C);
    func_800362DC_36EDC(rdram, ctx);
        goto after_0;
    // 0x80035074: lw          $a0, -0x254C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X254C);
    after_0:
    // 0x80035078: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8003507C: jal         0x80035044
    // 0x80035080: lw          $a0, -0x254C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X254C);
    func_80035044_35C44(rdram, ctx);
        goto after_1;
    // 0x80035080: lw          $a0, -0x254C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X254C);
    after_1:
    // 0x80035084: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80035088: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003508C: jr          $ra
    // 0x80035090: nop

    TRACE_RETURN()
    return;
    // 0x80035090: nop

;}
RECOMP_FUNC void alMainBusNew(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004E364: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004E368: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8004E36C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8004E370: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004E374: lui         $a2, 0x8005
    ctx->r6 = S32(0X8005 << 16);
    // 0x8004E378: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x8004E37C: addiu       $a1, $a1, -0x1470
    ctx->r5 = ADD32(ctx->r5, -0X1470);
    // 0x8004E380: addiu       $a2, $a2, -0x14A0
    ctx->r6 = ADD32(ctx->r6, -0X14A0);
    // 0x8004E384: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8004E388: jal         0x800518C0
    // 0x8004E38C: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    alFilterNew(rdram, ctx);
        goto after_0;
    // 0x8004E38C: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_0:
    // 0x8004E390: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8004E394: sw          $zero, 0x14($a0)
    MEM_W(0X14, ctx->r4) = 0;
    // 0x8004E398: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8004E39C: sw          $t6, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r14;
    // 0x8004E3A0: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8004E3A4: sw          $t7, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r15;
    // 0x8004E3A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004E3AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004E3B0: jr          $ra
    // 0x8004E3B4: nop

    TRACE_RETURN()
    return;
    // 0x8004E3B4: nop

;}
RECOMP_FUNC void func_8000B718_C318(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000B718: lui         $a3, 0x8016
    ctx->r7 = S32(0X8016 << 16);
    // 0x8000B71C: addiu       $a3, $a3, -0x39F8
    ctx->r7 = ADD32(ctx->r7, -0X39F8);
    // 0x8000B720: lw          $t6, 0x200($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X200);
    // 0x8000B724: lui         $t8, 0x8006
    ctx->r24 = S32(0X8006 << 16);
    // 0x8000B728: addiu       $t8, $t8, -0x45D0
    ctx->r24 = ADD32(ctx->r24, -0X45D0);
    // 0x8000B72C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8000B730: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8000B734: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8000B738: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x8000B73C: lhu         $t9, 0x0($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X0);
    // 0x8000B740: lhu         $t0, 0x2($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X2);
    // 0x8000B744: lhu         $t1, 0x4($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X4);
    // 0x8000B748: lhu         $t2, 0x6($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X6);
    // 0x8000B74C: lhu         $t3, 0x8($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X8);
    // 0x8000B750: lhu         $t4, 0xA($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0XA);
    // 0x8000B754: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000B758: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000B75C: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8000B760: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x8000B764: addiu       $a1, $a1, -0x3994
    ctx->r5 = ADD32(ctx->r5, -0X3994);
    // 0x8000B768: addiu       $a0, $a0, -0x3A28
    ctx->r4 = ADD32(ctx->r4, -0X3A28);
    // 0x8000B76C: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    // 0x8000B770: sh          $t9, 0x204($a3)
    MEM_H(0X204, ctx->r7) = ctx->r25;
    // 0x8000B774: sh          $t0, 0x20A($a3)
    MEM_H(0X20A, ctx->r7) = ctx->r8;
    // 0x8000B778: sh          $t1, 0x20C($a3)
    MEM_H(0X20C, ctx->r7) = ctx->r9;
    // 0x8000B77C: sh          $t2, 0x20E($a3)
    MEM_H(0X20E, ctx->r7) = ctx->r10;
    // 0x8000B780: sh          $t3, 0x210($a3)
    MEM_H(0X210, ctx->r7) = ctx->r11;
    // 0x8000B784: jal         0x80004208
    // 0x8000B788: sh          $t4, 0x208($a3)
    MEM_H(0X208, ctx->r7) = ctx->r12;
    func_80004208_4E08(rdram, ctx);
        goto after_0;
    // 0x8000B788: sh          $t4, 0x208($a3)
    MEM_H(0X208, ctx->r7) = ctx->r12;
    after_0:
    // 0x8000B78C: lui         $a3, 0x8016
    ctx->r7 = S32(0X8016 << 16);
    // 0x8000B790: addiu       $a3, $a3, -0x39F8
    ctx->r7 = ADD32(ctx->r7, -0X39F8);
    // 0x8000B794: lw          $t5, 0x78($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X78);
    // 0x8000B798: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x8000B79C: addiu       $a1, $a1, -0x36F0
    ctx->r5 = ADD32(ctx->r5, -0X36F0);
    // 0x8000B7A0: slti        $at, $t5, 0x3
    ctx->r1 = SIGNED(ctx->r13) < 0X3 ? 1 : 0;
    // 0x8000B7A4: beq         $at, $zero, L_8000B7B4
    if (ctx->r1 == 0) {
        // 0x8000B7A8: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_8000B7B4;
    }
    // 0x8000B7A8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8000B7AC: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x8000B7B0: sw          $t6, 0x78($a3)
    MEM_W(0X78, ctx->r7) = ctx->r14;
L_8000B7B4:
    // 0x8000B7B4: lw          $t7, 0x70($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X70);
    // 0x8000B7B8: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x8000B7BC: slti        $at, $t7, 0xA
    ctx->r1 = SIGNED(ctx->r15) < 0XA ? 1 : 0;
    // 0x8000B7C0: beq         $at, $zero, L_8000B7CC
    if (ctx->r1 == 0) {
        // 0x8000B7C4: nop
    
            goto L_8000B7CC;
    }
    // 0x8000B7C4: nop

    // 0x8000B7C8: sw          $t8, 0x70($a3)
    MEM_W(0X70, ctx->r7) = ctx->r24;
L_8000B7CC:
    // 0x8000B7CC: jal         0x80004208
    // 0x8000B7D0: addiu       $a2, $zero, 0x304
    ctx->r6 = ADD32(0, 0X304);
    func_80004208_4E08(rdram, ctx);
        goto after_1;
    // 0x8000B7D0: addiu       $a2, $zero, 0x304
    ctx->r6 = ADD32(0, 0X304);
    after_1:
    // 0x8000B7D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000B7D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000B7DC: jr          $ra
    // 0x8000B7E0: nop

    TRACE_RETURN()
    return;
    // 0x8000B7E0: nop

;}
RECOMP_FUNC void func_80036388_36F88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80036388: beq         $a0, $zero, L_80036398
    if (ctx->r4 == 0) {
        // 0x8003638C: nop
    
            goto L_80036398;
    }
    // 0x8003638C: nop

    // 0x80036390: bnel        $a1, $zero, L_800363A4
    if (ctx->r5 != 0) {
        // 0x80036394: lw          $v0, 0x78($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X78);
            goto L_800363A4;
    }
    goto skip_0;
    // 0x80036394: lw          $v0, 0x78($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X78);
    skip_0:
L_80036398:
    // 0x80036398: jr          $ra
    // 0x8003639C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x8003639C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800363A0: lw          $v0, 0x78($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X78);
L_800363A4:
    // 0x800363A4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x800363A8: lw          $v0, 0x74($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X74);
    // 0x800363AC: beq         $v0, $a1, L_800363C4
    if (ctx->r2 == ctx->r5) {
        // 0x800363B0: nop
    
            goto L_800363C4;
    }
    // 0x800363B0: nop

    // 0x800363B4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_800363B8:
    // 0x800363B8: lw          $v0, 0x74($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X74);
    // 0x800363BC: bnel        $v0, $a1, L_800363B8
    if (ctx->r2 != ctx->r5) {
        // 0x800363C0: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_800363B8;
    }
    goto skip_1;
    // 0x800363C0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    skip_1:
L_800363C4:
    // 0x800363C4: bnel        $v0, $zero, L_800363D8
    if (ctx->r2 != 0) {
        // 0x800363C8: lw          $t6, 0x74($a1)
        ctx->r14 = MEM_W(ctx->r5, 0X74);
            goto L_800363D8;
    }
    goto skip_2;
    // 0x800363C8: lw          $t6, 0x74($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X74);
    skip_2:
    // 0x800363CC: jr          $ra
    // 0x800363D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x800363D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800363D4: lw          $t6, 0x74($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X74);
L_800363D8:
    // 0x800363D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800363DC: sw          $t6, 0x74($v1)
    MEM_W(0X74, ctx->r3) = ctx->r14;
    // 0x800363E0: lw          $t7, 0x78($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X78);
    // 0x800363E4: sw          $t7, 0x74($a1)
    MEM_W(0X74, ctx->r5) = ctx->r15;
    // 0x800363E8: sw          $a1, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->r5;
    // 0x800363EC: jr          $ra
    // 0x800363F0: nop

    TRACE_RETURN()
    return;
    // 0x800363F0: nop

;}
RECOMP_FUNC void func_8001018C_10D8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001018C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80010190: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80010194: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x80010198: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
L_8001019C:
    // 0x8001019C: bnel        $v0, $v1, L_8001019C
    if (ctx->r2 != ctx->r3) {
        // 0x800101A0: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_8001019C;
    }
    goto skip_0;
    // 0x800101A0: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    skip_0:
    // 0x800101A4: jr          $ra
    // 0x800101A8: nop

    TRACE_RETURN()
    return;
    // 0x800101A8: nop

;}
RECOMP_FUNC void func_800206FC_212FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800206FC: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x80020700: lw          $v0, -0x3A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A38);
    // 0x80020704: lui         $t6, 0x4
    ctx->r14 = S32(0X4 << 16);
    // 0x80020708: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8002070C: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x80020710: lhu         $t6, -0x51DC($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X51DC);
    // 0x80020714: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80020718: ori         $t7, $t6, 0x80
    ctx->r15 = ctx->r14 | 0X80;
    // 0x8002071C: jr          $ra
    // 0x80020720: sh          $t7, -0x51DC($at)
    MEM_H(-0X51DC, ctx->r1) = ctx->r15;
    TRACE_RETURN()
    return;
    // 0x80020720: sh          $t7, -0x51DC($at)
    MEM_H(-0X51DC, ctx->r1) = ctx->r15;
;}
RECOMP_FUNC void func_8003EA14_3F614(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003EA14: lui         $a2, 0x801C
    ctx->r6 = S32(0X801C << 16);
    // 0x8003EA18: addiu       $a2, $a2, 0x7908
    ctx->r6 = ADD32(ctx->r6, 0X7908);
    // 0x8003EA1C: lh          $v1, 0x8($a2)
    ctx->r3 = MEM_H(ctx->r6, 0X8);
    // 0x8003EA20: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8003EA24: slti        $at, $v1, 0x29
    ctx->r1 = SIGNED(ctx->r3) < 0X29 ? 1 : 0;
    // 0x8003EA28: beq         $at, $zero, L_8003EA54
    if (ctx->r1 == 0) {
        // 0x8003EA2C: nop
    
            goto L_8003EA54;
    }
    // 0x8003EA2C: nop

    // 0x8003EA30: lh          $a0, 0x6($a2)
    ctx->r4 = MEM_H(ctx->r6, 0X6);
    // 0x8003EA34: slti        $at, $a0, -0x28
    ctx->r1 = SIGNED(ctx->r4) < -0X28 ? 1 : 0;
    // 0x8003EA38: bne         $at, $zero, L_8003EA54
    if (ctx->r1 != 0) {
        // 0x8003EA3C: nop
    
            goto L_8003EA54;
    }
    // 0x8003EA3C: nop

    // 0x8003EA40: lhu         $a1, 0x4($a2)
    ctx->r5 = MEM_HU(ctx->r6, 0X4);
    // 0x8003EA44: slti        $at, $v1, -0x28
    ctx->r1 = SIGNED(ctx->r3) < -0X28 ? 1 : 0;
    // 0x8003EA48: andi        $t6, $a1, 0xA00
    ctx->r14 = ctx->r5 & 0XA00;
    // 0x8003EA4C: beq         $t6, $zero, L_8003EA5C
    if (ctx->r14 == 0) {
        // 0x8003EA50: nop
    
            goto L_8003EA5C;
    }
    // 0x8003EA50: nop

L_8003EA54:
    // 0x8003EA54: b           L_8003EA78
    // 0x8003EA58: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
        goto L_8003EA78;
    // 0x8003EA58: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
L_8003EA5C:
    // 0x8003EA5C: bne         $at, $zero, L_8003EA74
    if (ctx->r1 != 0) {
        // 0x8003EA60: slti        $at, $a0, 0x29
        ctx->r1 = SIGNED(ctx->r4) < 0X29 ? 1 : 0;
            goto L_8003EA74;
    }
    // 0x8003EA60: slti        $at, $a0, 0x29
    ctx->r1 = SIGNED(ctx->r4) < 0X29 ? 1 : 0;
    // 0x8003EA64: beq         $at, $zero, L_8003EA74
    if (ctx->r1 == 0) {
        // 0x8003EA68: andi        $t7, $a1, 0x500
        ctx->r15 = ctx->r5 & 0X500;
            goto L_8003EA74;
    }
    // 0x8003EA68: andi        $t7, $a1, 0x500
    ctx->r15 = ctx->r5 & 0X500;
    // 0x8003EA6C: beq         $t7, $zero, L_8003EA78
    if (ctx->r15 == 0) {
        // 0x8003EA70: nop
    
            goto L_8003EA78;
    }
    // 0x8003EA70: nop

L_8003EA74:
    // 0x8003EA74: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
L_8003EA78:
    // 0x8003EA78: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8003EA7C: addiu       $a1, $a1, 0x77E8
    ctx->r5 = ADD32(ctx->r5, 0X77E8);
    // 0x8003EA80: lhu         $t8, 0x4($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X4);
    // 0x8003EA84: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8003EA88: bnel        $v0, $t8, L_8003EAC0
    if (ctx->r2 != ctx->r24) {
        // 0x8003EA8C: sh          $v0, 0x4($a1)
        MEM_H(0X4, ctx->r5) = ctx->r2;
            goto L_8003EAC0;
    }
    goto skip_0;
    // 0x8003EA8C: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    skip_0:
    // 0x8003EA90: lhu         $a0, 0x6($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X6);
    // 0x8003EA94: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x8003EA98: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8003EA9C: slti        $at, $a0, 0xA
    ctx->r1 = SIGNED(ctx->r4) < 0XA ? 1 : 0;
    // 0x8003EAA0: bne         $at, $zero, L_8003EAB4
    if (ctx->r1 != 0) {
        // 0x8003EAA4: addiu       $t9, $a0, 0x1
        ctx->r25 = ADD32(ctx->r4, 0X1);
            goto L_8003EAB4;
    }
    // 0x8003EAA4: addiu       $t9, $a0, 0x1
    ctx->r25 = ADD32(ctx->r4, 0X1);
    // 0x8003EAA8: sh          $zero, 0x6($a1)
    MEM_H(0X6, ctx->r5) = 0;
    // 0x8003EAAC: jr          $ra
    // 0x8003EAB0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    TRACE_RETURN()
    return;
    // 0x8003EAB0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8003EAB4:
    // 0x8003EAB4: jr          $ra
    // 0x8003EAB8: sh          $t9, 0x6($a1)
    MEM_H(0X6, ctx->r5) = ctx->r25;
    TRACE_RETURN()
    return;
    // 0x8003EAB8: sh          $t9, 0x6($a1)
    MEM_H(0X6, ctx->r5) = ctx->r25;
    // 0x8003EABC: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
L_8003EAC0:
    // 0x8003EAC0: sh          $zero, 0x6($a1)
    MEM_H(0X6, ctx->r5) = 0;
    // 0x8003EAC4: jr          $ra
    // 0x8003EAC8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    TRACE_RETURN()
    return;
    // 0x8003EAC8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_80002040_2C40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80002040: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80002044: lui         $t6, 0x8006
    ctx->r14 = S32(0X8006 << 16);
    // 0x80002048: addiu       $v0, $sp, 0x18
    ctx->r2 = ADD32(ctx->r29, 0X18);
    // 0x8000204C: addiu       $t6, $t6, -0x76F8
    ctx->r14 = ADD32(ctx->r14, -0X76F8);
    // 0x80002050: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80002054: addiu       $t9, $t6, 0x48
    ctx->r25 = ADD32(ctx->r14, 0X48);
    // 0x80002058: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
L_8000205C:
    // 0x8000205C: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x80002060: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x80002064: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x80002068: sw          $at, -0xC($t0)
    MEM_W(-0XC, ctx->r8) = ctx->r1;
    // 0x8000206C: lw          $at, -0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X8);
    // 0x80002070: sw          $at, -0x8($t0)
    MEM_W(-0X8, ctx->r8) = ctx->r1;
    // 0x80002074: lw          $at, -0x4($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X4);
    // 0x80002078: bne         $t6, $t9, L_8000205C
    if (ctx->r14 != ctx->r25) {
        // 0x8000207C: sw          $at, -0x4($t0)
        MEM_W(-0X4, ctx->r8) = ctx->r1;
            goto L_8000205C;
    }
    // 0x8000207C: sw          $at, -0x4($t0)
    MEM_W(-0X4, ctx->r8) = ctx->r1;
    // 0x80002080: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x80002084: lw          $t1, -0x3A38($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X3A38);
    // 0x80002088: lui         $t2, 0x4
    ctx->r10 = S32(0X4 << 16);
    // 0x8000208C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80002090: lbu         $t2, -0x522C($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X522C);
    // 0x80002094: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80002098: addu        $t4, $v0, $t3
    ctx->r12 = ADD32(ctx->r2, ctx->r11);
    // 0x8000209C: lw          $t9, 0x0($t4)
    ctx->r25 = MEM_W(ctx->r12, 0X0);
    // 0x800020A0: jalr        $t9
    // 0x800020A4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x800020A4: nop

    after_0:
    // 0x800020A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800020AC: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x800020B0: jr          $ra
    // 0x800020B4: nop

    TRACE_RETURN()
    return;
    // 0x800020B4: nop

;}
RECOMP_FUNC void __osSumcalc(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004C220: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8004C224: sw          $zero, 0x8($sp)
    MEM_W(0X8, ctx->r29) = 0;
    // 0x8004C228: sw          $a0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r4;
    // 0x8004C22C: blez        $a1, L_8004C270
    if (SIGNED(ctx->r5) <= 0) {
        // 0x8004C230: sw          $zero, 0xC($sp)
        MEM_W(0XC, ctx->r29) = 0;
            goto L_8004C270;
    }
    // 0x8004C230: sw          $zero, 0xC($sp)
    MEM_W(0XC, ctx->r29) = 0;
L_8004C234:
    // 0x8004C234: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x8004C238: lw          $t6, 0x8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X8);
    // 0x8004C23C: lw          $t3, 0xC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XC);
    // 0x8004C240: lbu         $t8, 0x0($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X0);
    // 0x8004C244: addiu       $t0, $t7, 0x1
    ctx->r8 = ADD32(ctx->r15, 0X1);
    // 0x8004C248: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8004C24C: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x8004C250: sw          $t9, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r25;
    // 0x8004C254: lw          $t1, 0x8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X8);
    // 0x8004C258: slt         $at, $t4, $a1
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8004C25C: sw          $t4, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r12;
    // 0x8004C260: andi        $t2, $t1, 0xFFFF
    ctx->r10 = ctx->r9 & 0XFFFF;
    // 0x8004C264: sw          $t0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r8;
    // 0x8004C268: bne         $at, $zero, L_8004C234
    if (ctx->r1 != 0) {
        // 0x8004C26C: sw          $t2, 0x8($sp)
        MEM_W(0X8, ctx->r29) = ctx->r10;
            goto L_8004C234;
    }
    // 0x8004C26C: sw          $t2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r10;
L_8004C270:
    // 0x8004C270: lhu         $v0, 0xA($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0XA);
    // 0x8004C274: jr          $ra
    // 0x8004C278: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    TRACE_RETURN()
    return;
    // 0x8004C278: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_800162F4_16EF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800162F4: bltz        $a0, L_80016348
    if (SIGNED(ctx->r4) < 0) {
        // 0x800162F8: lui         $v0, 0x8017
        ctx->r2 = S32(0X8017 << 16);
            goto L_80016348;
    }
    // 0x800162F8: lui         $v0, 0x8017
    ctx->r2 = S32(0X8017 << 16);
    // 0x800162FC: lw          $v0, -0x7E8C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7E8C);
    // 0x80016300: slt         $at, $a0, $v0
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80016304: beq         $at, $zero, L_80016348
    if (ctx->r1 == 0) {
        // 0x80016308: nop
    
            goto L_80016348;
    }
    // 0x80016308: nop

    // 0x8001630C: bltz        $a1, L_80016348
    if (SIGNED(ctx->r5) < 0) {
        // 0x80016310: lui         $t6, 0x8017
        ctx->r14 = S32(0X8017 << 16);
            goto L_80016348;
    }
    // 0x80016310: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80016314: lw          $t6, -0x7E88($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X7E88);
    // 0x80016318: slt         $at, $t6, $a1
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8001631C: bne         $at, $zero, L_80016348
    if (ctx->r1 != 0) {
        // 0x80016320: nop
    
            goto L_80016348;
    }
    // 0x80016320: nop

    // 0x80016324: multu       $v0, $a1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80016328: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8001632C: lw          $t7, -0x7B74($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X7B74);
    // 0x80016330: sll         $t1, $a0, 1
    ctx->r9 = S32(ctx->r4 << 1);
    // 0x80016334: mflo        $t8
    ctx->r24 = lo;
    // 0x80016338: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x8001633C: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x80016340: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x80016344: sh          $zero, 0x0($t2)
    MEM_H(0X0, ctx->r10) = 0;
L_80016348:
    // 0x80016348: jr          $ra
    // 0x8001634C: nop

    TRACE_RETURN()
    return;
    // 0x8001634C: nop

    // 0x80016350: jr          $ra
    // 0x80016354: nop

    TRACE_RETURN()
    return;
    // 0x80016354: nop

;}
RECOMP_FUNC void _loadBuffer(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80051BC8: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80051BCC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80051BD0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80051BD4: lw          $v1, 0x1C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C);
    // 0x80051BD8: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x80051BDC: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x80051BE0: sll         $t6, $v1, 1
    ctx->r14 = S32(ctx->r3 << 1);
    // 0x80051BE4: sltu        $at, $a1, $v0
    ctx->r1 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x80051BE8: or          $t2, $a0, $zero
    ctx->r10 = ctx->r4 | 0;
    // 0x80051BEC: or          $t5, $a2, $zero
    ctx->r13 = ctx->r6 | 0;
    // 0x80051BF0: or          $t3, $a3, $zero
    ctx->r11 = ctx->r7 | 0;
    // 0x80051BF4: beq         $at, $zero, L_80051C00
    if (ctx->r1 == 0) {
        // 0x80051BF8: addu        $t1, $v0, $t6
        ctx->r9 = ADD32(ctx->r2, ctx->r14);
            goto L_80051C00;
    }
    // 0x80051BF8: addu        $t1, $v0, $t6
    ctx->r9 = ADD32(ctx->r2, ctx->r14);
    // 0x80051BFC: addu        $a1, $a1, $t6
    ctx->r5 = ADD32(ctx->r5, ctx->r14);
L_80051C00:
    // 0x80051C00: sll         $a2, $t3, 1
    ctx->r6 = S32(ctx->r11 << 1);
    // 0x80051C04: addu        $a3, $a2, $a1
    ctx->r7 = ADD32(ctx->r6, ctx->r5);
    // 0x80051C08: sltu        $at, $t1, $a3
    ctx->r1 = ctx->r9 < ctx->r7 ? 1 : 0;
    // 0x80051C0C: beq         $at, $zero, L_80051CEC
    if (ctx->r1 == 0) {
        // 0x80051C10: addiu       $s0, $t0, 0x8
        ctx->r16 = ADD32(ctx->r8, 0X8);
            goto L_80051CEC;
    }
    // 0x80051C10: addiu       $s0, $t0, 0x8
    ctx->r16 = ADD32(ctx->r8, 0X8);
    // 0x80051C14: andi        $t7, $t5, 0xFFFF
    ctx->r15 = ctx->r13 & 0XFFFF;
    // 0x80051C18: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x80051C1C: subu        $t3, $t1, $a1
    ctx->r11 = SUB32(ctx->r9, ctx->r5);
    // 0x80051C20: sra         $t9, $t3, 1
    ctx->r25 = S32(SIGNED(ctx->r11) >> 1);
    // 0x80051C24: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x80051C28: sll         $t6, $t9, 1
    ctx->r14 = S32(ctx->r25 << 1);
    // 0x80051C2C: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x80051C30: sw          $t8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r24;
    // 0x80051C34: addiu       $s0, $t0, 0x8
    ctx->r16 = ADD32(ctx->r8, 0X8);
    // 0x80051C38: sw          $t7, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r15;
    // 0x80051C3C: or          $t4, $s0, $zero
    ctx->r12 = ctx->r16 | 0;
    // 0x80051C40: lui         $t8, 0x400
    ctx->r24 = S32(0X400 << 16);
    // 0x80051C44: sw          $t8, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r24;
    // 0x80051C48: sw          $t5, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r13;
    // 0x80051C4C: sw          $t4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r12;
    // 0x80051C50: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x80051C54: sw          $t2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r10;
    // 0x80051C58: sw          $t1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r9;
    // 0x80051C5C: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    // 0x80051C60: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    // 0x80051C64: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80051C68: jal         0x80047710
    // 0x80051C6C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_0;
    // 0x80051C6C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x80051C70: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80051C74: lw          $t5, 0x68($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X68);
    // 0x80051C78: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x80051C7C: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x80051C80: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x80051C84: addu        $t9, $t3, $t5
    ctx->r25 = ADD32(ctx->r11, ctx->r13);
    // 0x80051C88: andi        $t6, $t9, 0xFFFF
    ctx->r14 = ctx->r25 & 0XFFFF;
    // 0x80051C8C: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x80051C90: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    // 0x80051C94: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x80051C98: subu        $t8, $a3, $t1
    ctx->r24 = SUB32(ctx->r7, ctx->r9);
    // 0x80051C9C: sra         $t9, $t8, 1
    ctx->r25 = S32(SIGNED(ctx->r24) >> 1);
    // 0x80051CA0: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x80051CA4: sw          $v0, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r2;
    // 0x80051CA8: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80051CAC: sll         $t6, $t9, 1
    ctx->r14 = S32(ctx->r25 << 1);
    // 0x80051CB0: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x80051CB4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80051CB8: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x80051CBC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80051CC0: lui         $t8, 0x400
    ctx->r24 = S32(0X400 << 16);
    // 0x80051CC4: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x80051CC8: lw          $a0, 0x14($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X14);
    // 0x80051CCC: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80051CD0: jal         0x80047710
    // 0x80051CD4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_1;
    // 0x80051CD4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    after_1:
    // 0x80051CD8: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x80051CDC: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x80051CE0: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x80051CE4: b           L_80051D30
    // 0x80051CE8: andi        $a3, $a2, 0xFFFF
    ctx->r7 = ctx->r6 & 0XFFFF;
        goto L_80051D30;
    // 0x80051CE8: andi        $a3, $a2, 0xFFFF
    ctx->r7 = ctx->r6 & 0XFFFF;
L_80051CEC:
    // 0x80051CEC: andi        $t9, $t5, 0xFFFF
    ctx->r25 = ctx->r13 & 0XFFFF;
    // 0x80051CF0: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x80051CF4: or          $t6, $t9, $at
    ctx->r14 = ctx->r25 | ctx->r1;
    // 0x80051CF8: andi        $a3, $a2, 0xFFFF
    ctx->r7 = ctx->r6 & 0XFFFF;
    // 0x80051CFC: sw          $a3, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r7;
    // 0x80051D00: sw          $t6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r14;
    // 0x80051D04: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x80051D08: lui         $t7, 0x400
    ctx->r15 = S32(0X400 << 16);
    // 0x80051D0C: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80051D10: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    // 0x80051D14: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    // 0x80051D18: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80051D1C: jal         0x80047710
    // 0x80051D20: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_2;
    // 0x80051D20: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_2:
    // 0x80051D24: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x80051D28: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x80051D2C: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
L_80051D30:
    // 0x80051D30: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x80051D34: lui         $t8, 0x800
    ctx->r24 = S32(0X800 << 16);
    // 0x80051D38: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80051D3C: sw          $a3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r7;
    // 0x80051D40: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80051D44: addiu       $v0, $s0, 0x8
    ctx->r2 = ADD32(ctx->r16, 0X8);
    // 0x80051D48: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80051D4C: jr          $ra
    // 0x80051D50: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x80051D50: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void alBnkfNew(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80048074: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80048078: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8004807C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80048080: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80048084: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80048088: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8004808C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80048090: lh          $t6, 0x0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X0);
    // 0x80048094: addiu       $at, $zero, 0x4231
    ctx->r1 = ADD32(0, 0X4231);
    // 0x80048098: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8004809C: bne         $t6, $at, L_80048158
    if (ctx->r14 != ctx->r1) {
        // 0x800480A0: or          $s1, $a1, $zero
        ctx->r17 = ctx->r5 | 0;
            goto L_80048158;
    }
    // 0x800480A0: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x800480A4: lh          $t7, 0x2($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X2);
    // 0x800480A8: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x800480AC: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x800480B0: blez        $t7, L_80048158
    if (SIGNED(ctx->r15) <= 0) {
        // 0x800480B4: addiu       $s4, $zero, 0x1
        ctx->r20 = ADD32(0, 0X1);
            goto L_80048158;
    }
    // 0x800480B4: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x800480B8: lw          $t8, 0x4($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X4);
L_800480BC:
    // 0x800480BC: addu        $t9, $t8, $s0
    ctx->r25 = ADD32(ctx->r24, ctx->r16);
    // 0x800480C0: beq         $t9, $zero, L_80048140
    if (ctx->r25 == 0) {
        // 0x800480C4: sw          $t9, 0x4($s2)
        MEM_W(0X4, ctx->r18) = ctx->r25;
            goto L_80048140;
    }
    // 0x800480C4: sw          $t9, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r25;
    // 0x800480C8: lbu         $t6, 0x2($t9)
    ctx->r14 = MEM_BU(ctx->r25, 0X2);
    // 0x800480CC: or          $t5, $t9, $zero
    ctx->r13 = ctx->r25 | 0;
    // 0x800480D0: bnel        $t6, $zero, L_80048144
    if (ctx->r14 != 0) {
        // 0x800480D4: lh          $t8, 0x2($s0)
        ctx->r24 = MEM_H(ctx->r16, 0X2);
            goto L_80048144;
    }
    goto skip_0;
    // 0x800480D4: lh          $t8, 0x2($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X2);
    skip_0:
    // 0x800480D8: lw          $v0, 0x8($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X8);
    // 0x800480DC: sb          $s4, 0x2($t9)
    MEM_B(0X2, ctx->r25) = ctx->r20;
    // 0x800480E0: or          $t4, $zero, $zero
    ctx->r12 = 0 | 0;
    // 0x800480E4: beq         $v0, $zero, L_800480FC
    if (ctx->r2 == 0) {
        // 0x800480E8: addu        $a0, $v0, $s0
        ctx->r4 = ADD32(ctx->r2, ctx->r16);
            goto L_800480FC;
    }
    // 0x800480E8: addu        $a0, $v0, $s0
    ctx->r4 = ADD32(ctx->r2, ctx->r16);
    // 0x800480EC: sw          $a0, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r4;
    // 0x800480F0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800480F4: jal         0x80047F80
    // 0x800480F8: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    _bnkfPatchInst(rdram, ctx);
        goto after_0;
    // 0x800480F8: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_0:
L_800480FC:
    // 0x800480FC: lh          $t8, 0x0($t5)
    ctx->r24 = MEM_H(ctx->r13, 0X0);
    // 0x80048100: or          $t3, $t5, $zero
    ctx->r11 = ctx->r13 | 0;
    // 0x80048104: blezl       $t8, L_80048144
    if (SIGNED(ctx->r24) <= 0) {
        // 0x80048108: lh          $t8, 0x2($s0)
        ctx->r24 = MEM_H(ctx->r16, 0X2);
            goto L_80048144;
    }
    goto skip_1;
    // 0x80048108: lh          $t8, 0x2($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X2);
    skip_1:
    // 0x8004810C: lw          $t9, 0xC($t3)
    ctx->r25 = MEM_W(ctx->r11, 0XC);
L_80048110:
    // 0x80048110: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80048114: addu        $a0, $t9, $s0
    ctx->r4 = ADD32(ctx->r25, ctx->r16);
    // 0x80048118: beq         $a0, $zero, L_80048128
    if (ctx->r4 == 0) {
        // 0x8004811C: sw          $a0, 0xC($t3)
        MEM_W(0XC, ctx->r11) = ctx->r4;
            goto L_80048128;
    }
    // 0x8004811C: sw          $a0, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->r4;
    // 0x80048120: jal         0x80047F80
    // 0x80048124: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    _bnkfPatchInst(rdram, ctx);
        goto after_1;
    // 0x80048124: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_1:
L_80048128:
    // 0x80048128: lh          $t7, 0x0($t5)
    ctx->r15 = MEM_H(ctx->r13, 0X0);
    // 0x8004812C: addiu       $t4, $t4, 0x1
    ctx->r12 = ADD32(ctx->r12, 0X1);
    // 0x80048130: addiu       $t3, $t3, 0x4
    ctx->r11 = ADD32(ctx->r11, 0X4);
    // 0x80048134: slt         $at, $t4, $t7
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80048138: bnel        $at, $zero, L_80048110
    if (ctx->r1 != 0) {
        // 0x8004813C: lw          $t9, 0xC($t3)
        ctx->r25 = MEM_W(ctx->r11, 0XC);
            goto L_80048110;
    }
    goto skip_2;
    // 0x8004813C: lw          $t9, 0xC($t3)
    ctx->r25 = MEM_W(ctx->r11, 0XC);
    skip_2:
L_80048140:
    // 0x80048140: lh          $t8, 0x2($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X2);
L_80048144:
    // 0x80048144: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80048148: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x8004814C: slt         $at, $s3, $t8
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80048150: bnel        $at, $zero, L_800480BC
    if (ctx->r1 != 0) {
        // 0x80048154: lw          $t8, 0x4($s2)
        ctx->r24 = MEM_W(ctx->r18, 0X4);
            goto L_800480BC;
    }
    goto skip_3;
    // 0x80048154: lw          $t8, 0x4($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X4);
    skip_3:
L_80048158:
    // 0x80048158: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8004815C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80048160: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80048164: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80048168: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8004816C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80048170: jr          $ra
    // 0x80048174: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80048174: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80033404_34004(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80033404: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80033408: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8003340C: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x80033410: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80033414: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80033418: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8003341C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80033420: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80033424: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x80033428: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x8003342C: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x80033430: beq         $a2, $zero, L_800334C8
    if (ctx->r6 == 0) {
        // 0x80033434: lhu         $s5, 0x20($a2)
        ctx->r21 = MEM_HU(ctx->r6, 0X20);
            goto L_800334C8;
    }
    // 0x80033434: lhu         $s5, 0x20($a2)
    ctx->r21 = MEM_HU(ctx->r6, 0X20);
    // 0x80033438: addiu       $s4, $zero, 0x2
    ctx->r20 = ADD32(0, 0X2);
L_8003343C:
    // 0x8003343C: lw          $t6, 0x34($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X34);
    // 0x80033440: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80033444: bnel        $t6, $zero, L_800334CC
    if (ctx->r14 != 0) {
        // 0x80033448: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_800334CC;
    }
    goto skip_0;
    // 0x80033448: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x8003344C: lw          $s0, 0x18($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X18);
    // 0x80033450: beql        $s0, $zero, L_800334A8
    if (ctx->r16 == 0) {
        // 0x80033454: lw          $v0, 0x0($s1)
        ctx->r2 = MEM_W(ctx->r17, 0X0);
            goto L_800334A8;
    }
    goto skip_1;
    // 0x80033454: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    skip_1:
    // 0x80033458: jal         0x800334EC
    // 0x8003345C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800334EC_340EC(rdram, ctx);
        goto after_0;
    // 0x8003345C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_0:
    // 0x80033460: beql        $v0, $zero, L_800334A8
    if (ctx->r2 == 0) {
        // 0x80033464: lw          $v0, 0x0($s1)
        ctx->r2 = MEM_W(ctx->r17, 0X0);
            goto L_800334A8;
    }
    goto skip_2;
    // 0x80033464: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    skip_2:
    // 0x80033468: beql        $s0, $s3, L_800334A8
    if (ctx->r16 == ctx->r19) {
        // 0x8003346C: lw          $v0, 0x0($s1)
        ctx->r2 = MEM_W(ctx->r17, 0X0);
            goto L_800334A8;
    }
    goto skip_3;
    // 0x8003346C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    skip_3:
    // 0x80033470: lbu         $t7, 0x4($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X4);
    // 0x80033474: bnel        $s4, $t7, L_800334A8
    if (ctx->r20 != ctx->r15) {
        // 0x80033478: lw          $v0, 0x0($s1)
        ctx->r2 = MEM_W(ctx->r17, 0X0);
            goto L_800334A8;
    }
    goto skip_4;
    // 0x80033478: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    skip_4:
    // 0x8003347C: lw          $t8, 0x38($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X38);
    // 0x80033480: bnel        $t8, $zero, L_800334A8
    if (ctx->r24 != 0) {
        // 0x80033484: lw          $v0, 0x0($s1)
        ctx->r2 = MEM_W(ctx->r17, 0X0);
            goto L_800334A8;
    }
    goto skip_5;
    // 0x80033484: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    skip_5:
    // 0x80033488: lhu         $t9, 0x3C($s1)
    ctx->r25 = MEM_HU(ctx->r17, 0X3C);
    // 0x8003348C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80033490: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80033494: beq         $t9, $zero, L_800334A4
    if (ctx->r25 == 0) {
        // 0x80033498: or          $a2, $s2, $zero
        ctx->r6 = ctx->r18 | 0;
            goto L_800334A4;
    }
    // 0x80033498: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x8003349C: jal         0x80033688
    // 0x800334A0: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    func_80033688_34288(rdram, ctx);
        goto after_1;
    // 0x800334A0: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_1:
L_800334A4:
    // 0x800334A4: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
L_800334A8:
    // 0x800334A8: beql        $v0, $zero, L_800334CC
    if (ctx->r2 == 0) {
        // 0x800334AC: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_800334CC;
    }
    goto skip_6;
    // 0x800334AC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_6:
    // 0x800334B0: lhu         $t0, 0x20($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X20);
    // 0x800334B4: slt         $at, $s5, $t0
    ctx->r1 = SIGNED(ctx->r21) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x800334B8: beql        $at, $zero, L_800334CC
    if (ctx->r1 == 0) {
        // 0x800334BC: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_800334CC;
    }
    goto skip_7;
    // 0x800334BC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_7:
    // 0x800334C0: bne         $v0, $zero, L_8003343C
    if (ctx->r2 != 0) {
        // 0x800334C4: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_8003343C;
    }
    // 0x800334C4: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_800334C8:
    // 0x800334C8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_800334CC:
    // 0x800334CC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800334D0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800334D4: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800334D8: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800334DC: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x800334E0: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x800334E4: jr          $ra
    // 0x800334E8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x800334E8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void alResamplePull(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004F8EC: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8004F8F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8004F8F4: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x8004F8F8: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8004F8FC: addiu       $t6, $zero, 0x140
    ctx->r14 = ADD32(0, 0X140);
    // 0x8004F900: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x8004F904: or          $t2, $a2, $zero
    ctx->r10 = ctx->r6 | 0;
    // 0x8004F908: bne         $a2, $zero, L_8004F918
    if (ctx->r6 != 0) {
        // 0x8004F90C: sh          $t6, 0x46($sp)
        MEM_H(0X46, ctx->r29) = ctx->r14;
            goto L_8004F918;
    }
    // 0x8004F90C: sh          $t6, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r14;
    // 0x8004F910: b           L_8004FAE4
    // 0x8004F914: lw          $v0, 0x60($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X60);
        goto L_8004FAE4;
    // 0x8004F914: lw          $v0, 0x60($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X60);
L_8004F918:
    // 0x8004F918: lw          $t7, 0x1C($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X1C);
    // 0x8004F91C: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x8004F920: beql        $t7, $zero, L_8004F98C
    if (ctx->r15 == 0) {
        // 0x8004F924: lwc1        $f2, 0x18($t0)
        ctx->f2.u32l = MEM_W(ctx->r8, 0X18);
            goto L_8004F98C;
    }
    goto skip_0;
    // 0x8004F924: lwc1        $f2, 0x18($t0)
    ctx->f2.u32l = MEM_W(ctx->r8, 0X18);
    skip_0:
    // 0x8004F928: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8004F92C: sw          $t2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r10;
    // 0x8004F930: lw          $t9, 0x4($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X4);
    // 0x8004F934: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x8004F938: addiu       $a1, $sp, 0x46
    ctx->r5 = ADD32(ctx->r29, 0X46);
    // 0x8004F93C: jalr        $t9
    // 0x8004F940: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x8004F940: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    after_0:
    // 0x8004F944: lh          $t3, 0x46($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X46);
    // 0x8004F948: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x8004F94C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8004F950: and         $t4, $t3, $at
    ctx->r12 = ctx->r11 & ctx->r1;
    // 0x8004F954: lui         $at, 0xA00
    ctx->r1 = S32(0XA00 << 16);
    // 0x8004F958: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x8004F95C: or          $t5, $t4, $at
    ctx->r13 = ctx->r12 | ctx->r1;
    // 0x8004F960: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x8004F964: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x8004F968: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x8004F96C: andi        $t4, $t3, 0xFFFF
    ctx->r12 = ctx->r11 & 0XFFFF;
    // 0x8004F970: lh          $t8, 0x0($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X0);
    // 0x8004F974: addiu       $a1, $v0, 0x8
    ctx->r5 = ADD32(ctx->r2, 0X8);
    // 0x8004F978: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x8004F97C: or          $t5, $t9, $t4
    ctx->r13 = ctx->r25 | ctx->r12;
    // 0x8004F980: b           L_8004FAE0
    // 0x8004F984: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
        goto L_8004FAE0;
    // 0x8004F984: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x8004F988: lwc1        $f2, 0x18($t0)
    ctx->f2.u32l = MEM_W(ctx->r8, 0X18);
L_8004F98C:
    // 0x8004F98C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8004F990: ldc1        $f4, -0x2B48($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X2B48);
    // 0x8004F994: cvt.d.s     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.d = CVT_D_S(ctx->f2.fl);
    // 0x8004F998: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8004F99C: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x8004F9A0: nop

    // 0x8004F9A4: bc1fl       L_8004F9BC
    if (!c1cs) {
        // 0x8004F9A8: lui         $at, 0x4700
        ctx->r1 = S32(0X4700 << 16);
            goto L_8004F9BC;
    }
    goto skip_1;
    // 0x8004F9A8: lui         $at, 0x4700
    ctx->r1 = S32(0X4700 << 16);
    skip_1:
    // 0x8004F9AC: lwc1        $f8, -0x2B40($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X2B40);
    // 0x8004F9B0: swc1        $f8, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->f8.u32l;
    // 0x8004F9B4: lwc1        $f2, 0x18($t0)
    ctx->f2.u32l = MEM_W(ctx->r8, 0X18);
    // 0x8004F9B8: lui         $at, 0x4700
    ctx->r1 = S32(0X4700 << 16);
L_8004F9BC:
    // 0x8004F9BC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8004F9C0: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x8004F9C4: addiu       $a1, $sp, 0x46
    ctx->r5 = ADD32(ctx->r29, 0X46);
    // 0x8004F9C8: mul.s       $f10, $f2, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x8004F9CC: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x8004F9D0: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x8004F9D4: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x8004F9D8: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x8004F9DC: nop

    // 0x8004F9E0: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8004F9E4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8004F9E8: swc1        $f4, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->f4.u32l;
    // 0x8004F9EC: lwc1        $f6, 0x18($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X18);
    // 0x8004F9F0: div.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f12.fl);
    // 0x8004F9F4: lwc1        $f6, 0x20($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X20);
    // 0x8004F9F8: swc1        $f8, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->f8.u32l;
    // 0x8004F9FC: lwc1        $f10, 0x18($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X18);
    // 0x8004FA00: mul.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x8004FA04: add.s       $f0, $f6, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x8004FA08: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x8004FA0C: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x8004FA10: nop

    // 0x8004FA14: mtc1        $a2, $f16
    ctx->f16.u32l = ctx->r6;
    // 0x8004FA18: nop

    // 0x8004FA1C: cvt.s.w     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8004FA20: sub.s       $f18, $f0, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x8004FA24: swc1        $f18, 0x20($t0)
    MEM_W(0X20, ctx->r8) = ctx->f18.u32l;
    // 0x8004FA28: lw          $t3, 0x60($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X60);
    // 0x8004FA2C: sw          $t2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r10;
    // 0x8004FA30: sw          $t0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r8;
    // 0x8004FA34: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8004FA38: lw          $t9, 0x4($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X4);
    // 0x8004FA3C: jalr        $t9
    // 0x8004FA40: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x8004FA40: nop

    after_1:
    // 0x8004FA44: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x8004FA48: lh          $t5, 0x46($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X46);
    // 0x8004FA4C: lui         $at, 0x4700
    ctx->r1 = S32(0X4700 << 16);
    // 0x8004FA50: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8004FA54: lwc1        $f6, 0x18($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X18);
    // 0x8004FA58: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x8004FA5C: andi        $t6, $t5, 0xFFFF
    ctx->r14 = ctx->r13 & 0XFFFF;
    // 0x8004FA60: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x8004FA64: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x8004FA68: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8004FA6C: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x8004FA70: mul.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x8004FA74: sll         $t5, $t2, 1
    ctx->r13 = S32(ctx->r10 << 1);
    // 0x8004FA78: lh          $t9, 0x0($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X0);
    // 0x8004FA7C: andi        $t6, $t5, 0xFFFF
    ctx->r14 = ctx->r13 & 0XFFFF;
    // 0x8004FA80: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8004FA84: sll         $t4, $t9, 16
    ctx->r12 = S32(ctx->r25 << 16);
    // 0x8004FA88: or          $t7, $t4, $t6
    ctx->r15 = ctx->r12 | ctx->r14;
    // 0x8004FA8C: trunc.w.s   $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8004FA90: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8004FA94: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x8004FA98: lw          $t3, 0x24($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X24);
    // 0x8004FA9C: mfc1        $v1, $f16
    ctx->r3 = (int32_t)ctx->f16.u32l;
    // 0x8004FAA0: lui         $at, 0x500
    ctx->r1 = S32(0X500 << 16);
    // 0x8004FAA4: andi        $t9, $t3, 0xFF
    ctx->r25 = ctx->r11 & 0XFF;
    // 0x8004FAA8: sll         $t5, $t9, 16
    ctx->r13 = S32(ctx->r25 << 16);
    // 0x8004FAAC: or          $t4, $t5, $at
    ctx->r12 = ctx->r13 | ctx->r1;
    // 0x8004FAB0: andi        $t6, $v1, 0xFFFF
    ctx->r14 = ctx->r3 & 0XFFFF;
    // 0x8004FAB4: or          $t7, $t4, $t6
    ctx->r15 = ctx->r12 | ctx->r14;
    // 0x8004FAB8: sw          $t7, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r15;
    // 0x8004FABC: addiu       $a1, $v0, 0x10
    ctx->r5 = ADD32(ctx->r2, 0X10);
    // 0x8004FAC0: lw          $a0, 0x14($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X14);
    // 0x8004FAC4: jal         0x80047710
    // 0x8004FAC8: sw          $a1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r5;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_2;
    // 0x8004FAC8: sw          $a1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r5;
    after_2:
    // 0x8004FACC: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8004FAD0: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x8004FAD4: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x8004FAD8: sw          $v0, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r2;
    // 0x8004FADC: sw          $zero, 0x24($t0)
    MEM_W(0X24, ctx->r8) = 0;
L_8004FAE0:
    // 0x8004FAE0: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_8004FAE4:
    // 0x8004FAE4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8004FAE8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x8004FAEC: jr          $ra
    // 0x8004FAF0: nop

    TRACE_RETURN()
    return;
    // 0x8004FAF0: nop

;}
RECOMP_FUNC void func_8003F0FC_3FCFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003F0FC: lui         $t6, 0x801C
    ctx->r14 = S32(0X801C << 16);
    // 0x8003F100: lw          $t6, 0x77E0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X77E0);
    // 0x8003F104: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8003F108: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8003F10C: beq         $t6, $at, L_8003F11C
    if (ctx->r14 == ctx->r1) {
        // 0x8003F110: lui         $v0, 0x801C
        ctx->r2 = S32(0X801C << 16);
            goto L_8003F11C;
    }
    // 0x8003F110: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003F114: jr          $ra
    // 0x8003F118: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    TRACE_RETURN()
    return;
    // 0x8003F118: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8003F11C:
    // 0x8003F11C: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003F120: lw          $a0, 0x7800($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7800);
    // 0x8003F124: addiu       $v0, $v0, 0x7808
    ctx->r2 = ADD32(ctx->r2, 0X7808);
    // 0x8003F128: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
L_8003F12C:
    // 0x8003F12C: beql        $a0, $v0, L_8003F144
    if (ctx->r4 == ctx->r2) {
        // 0x8003F130: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_8003F144;
    }
    goto skip_0;
    // 0x8003F130: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    skip_0:
    // 0x8003F134: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8003F138: bne         $v1, $a1, L_8003F12C
    if (ctx->r3 != ctx->r5) {
        // 0x8003F13C: addiu       $v0, $v0, 0x14
        ctx->r2 = ADD32(ctx->r2, 0X14);
            goto L_8003F12C;
    }
    // 0x8003F13C: addiu       $v0, $v0, 0x14
    ctx->r2 = ADD32(ctx->r2, 0X14);
    // 0x8003F140: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8003F144:
    // 0x8003F144: jr          $ra
    // 0x8003F148: nop

    TRACE_RETURN()
    return;
    // 0x8003F148: nop

;}
RECOMP_FUNC void func_8003A71C_3B31C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003A71C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003A720: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003A724: addiu       $a0, $a0, 0x1728
    ctx->r4 = ADD32(ctx->r4, 0X1728);
    // 0x8003A728: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003A72C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8003A730: lhu         $t7, 0x18($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X18);
    // 0x8003A734: lhu         $t6, 0x1A($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X1A);
    // 0x8003A738: sra         $t8, $t7, 8
    ctx->r24 = S32(SIGNED(ctx->r15) >> 8);
    // 0x8003A73C: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x8003A740: sh          $t9, 0x1A($v0)
    MEM_H(0X1A, ctx->r2) = ctx->r25;
    // 0x8003A744: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8003A748: lhu         $v1, 0x1A($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X1A);
    // 0x8003A74C: slti        $at, $v1, 0x100
    ctx->r1 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x8003A750: bne         $at, $zero, L_8003A804
    if (ctx->r1 != 0) {
        // 0x8003A754: andi        $t0, $v1, 0xFF
        ctx->r8 = ctx->r3 & 0XFF;
            goto L_8003A804;
    }
    // 0x8003A754: andi        $t0, $v1, 0xFF
    ctx->r8 = ctx->r3 & 0XFF;
    // 0x8003A758: sh          $t0, 0x1A($v0)
    MEM_H(0X1A, ctx->r2) = ctx->r8;
    // 0x8003A75C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8003A760: lbu         $t1, 0x21($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X21);
    // 0x8003A764: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x8003A768: sb          $t2, 0x21($v0)
    MEM_B(0X21, ctx->r2) = ctx->r10;
    // 0x8003A76C: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x8003A770: lbu         $t4, 0x21($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X21);
    // 0x8003A774: bne         $t4, $zero, L_8003A798
    if (ctx->r12 != 0) {
        // 0x8003A778: nop
    
            goto L_8003A798;
    }
    // 0x8003A778: nop

    // 0x8003A77C: jal         0x8003A838
    // 0x8003A780: nop

    func_8003A838_3B438(rdram, ctx);
        goto after_0;
    // 0x8003A780: nop

    after_0:
    // 0x8003A784: jal         0x8003C540
    // 0x8003A788: nop

    func_8003C540_3D140(rdram, ctx);
        goto after_1;
    // 0x8003A788: nop

    after_1:
    // 0x8003A78C: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003A790: b           L_8003A7A8
    // 0x8003A794: addiu       $a0, $a0, 0x1728
    ctx->r4 = ADD32(ctx->r4, 0X1728);
        goto L_8003A7A8;
    // 0x8003A794: addiu       $a0, $a0, 0x1728
    ctx->r4 = ADD32(ctx->r4, 0X1728);
L_8003A798:
    // 0x8003A798: jal         0x8003AC0C
    // 0x8003A79C: nop

    func_8003AC0C_3B80C(rdram, ctx);
        goto after_2;
    // 0x8003A79C: nop

    after_2:
    // 0x8003A7A0: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003A7A4: addiu       $a0, $a0, 0x1728
    ctx->r4 = ADD32(ctx->r4, 0X1728);
L_8003A7A8:
    // 0x8003A7A8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8003A7AC: lbu         $t5, 0x1D($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X1D);
    // 0x8003A7B0: beql        $t5, $zero, L_8003A7CC
    if (ctx->r13 == 0) {
        // 0x8003A7B4: lbu         $t7, 0x47($v0)
        ctx->r15 = MEM_BU(ctx->r2, 0X47);
            goto L_8003A7CC;
    }
    goto skip_0;
    // 0x8003A7B4: lbu         $t7, 0x47($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X47);
    skip_0:
    // 0x8003A7B8: jal         0x8003B4EC
    // 0x8003A7BC: nop

    func_8003B4EC_3C0EC(rdram, ctx);
        goto after_3;
    // 0x8003A7BC: nop

    after_3:
    // 0x8003A7C0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003A7C4: lw          $v0, 0x1728($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1728);
    // 0x8003A7C8: lbu         $t7, 0x47($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X47);
L_8003A7CC:
    // 0x8003A7CC: beql        $t7, $zero, L_8003A7E8
    if (ctx->r15 == 0) {
        // 0x8003A7D0: lbu         $t6, 0x5B($v0)
        ctx->r14 = MEM_BU(ctx->r2, 0X5B);
            goto L_8003A7E8;
    }
    goto skip_1;
    // 0x8003A7D0: lbu         $t6, 0x5B($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X5B);
    skip_1:
    // 0x8003A7D4: jal         0x8003B938
    // 0x8003A7D8: nop

    func_8003B938_3C538(rdram, ctx);
        goto after_4;
    // 0x8003A7D8: nop

    after_4:
    // 0x8003A7DC: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003A7E0: lw          $v0, 0x1728($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1728);
    // 0x8003A7E4: lbu         $t6, 0x5B($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X5B);
L_8003A7E8:
    // 0x8003A7E8: beql        $t6, $zero, L_8003A818
    if (ctx->r14 == 0) {
        // 0x8003A7EC: lbu         $t8, 0x92($v0)
        ctx->r24 = MEM_BU(ctx->r2, 0X92);
            goto L_8003A818;
    }
    goto skip_2;
    // 0x8003A7EC: lbu         $t8, 0x92($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X92);
    skip_2:
    // 0x8003A7F0: jal         0x8003BE24
    // 0x8003A7F4: nop

    func_8003BE24_3CA24(rdram, ctx);
        goto after_5;
    // 0x8003A7F4: nop

    after_5:
    // 0x8003A7F8: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003A7FC: b           L_8003A814
    // 0x8003A800: lw          $v0, 0x1728($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1728);
        goto L_8003A814;
    // 0x8003A800: lw          $v0, 0x1728($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1728);
L_8003A804:
    // 0x8003A804: jal         0x8003AE04
    // 0x8003A808: nop

    func_8003AE04_3BA04(rdram, ctx);
        goto after_6;
    // 0x8003A808: nop

    after_6:
    // 0x8003A80C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003A810: lw          $v0, 0x1728($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1728);
L_8003A814:
    // 0x8003A814: lbu         $t8, 0x92($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X92);
L_8003A818:
    // 0x8003A818: beql        $t8, $zero, L_8003A82C
    if (ctx->r24 == 0) {
        // 0x8003A81C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8003A82C;
    }
    goto skip_3;
    // 0x8003A81C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x8003A820: jal         0x8003C3C0
    // 0x8003A824: nop

    func_8003C3C0_3CFC0(rdram, ctx);
        goto after_7;
    // 0x8003A824: nop

    after_7:
    // 0x8003A828: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003A82C:
    // 0x8003A82C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003A830: jr          $ra
    // 0x8003A834: nop

    TRACE_RETURN()
    return;
    // 0x8003A834: nop

;}
RECOMP_FUNC void func_800106F0_112F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800106F0: addiu       $t1, $zero, 0xC
    ctx->r9 = ADD32(0, 0XC);
    // 0x800106F4: multu       $a0, $t1
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800106F8: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x800106FC: addiu       $t7, $t7, 0x7EF8
    ctx->r15 = ADD32(ctx->r15, 0X7EF8);
    // 0x80010700: mflo        $t6
    ctx->r14 = lo;
    // 0x80010704: addu        $t0, $t6, $t7
    ctx->r8 = ADD32(ctx->r14, ctx->r15);
    // 0x80010708: lh          $v1, 0x2($t0)
    ctx->r3 = MEM_H(ctx->r8, 0X2);
    // 0x8001070C: lh          $t8, 0x4($t0)
    ctx->r24 = MEM_H(ctx->r8, 0X4);
    // 0x80010710: slt         $at, $v1, $t8
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80010714: bne         $at, $zero, L_80010724
    if (ctx->r1 != 0) {
        // 0x80010718: nop
    
            goto L_80010724;
    }
    // 0x80010718: nop

    // 0x8001071C: jr          $ra
    // 0x80010720: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    TRACE_RETURN()
    return;
    // 0x80010720: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80010724:
    // 0x80010724: multu       $v1, $t1
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80010728: lw          $t9, 0x8($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X8);
    // 0x8001072C: lw          $t3, 0x14($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X14);
    // 0x80010730: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80010734: addiu       $t4, $t3, 0x4000
    ctx->r12 = ADD32(ctx->r11, 0X4000);
    // 0x80010738: mflo        $t2
    ctx->r10 = lo;
    // 0x8001073C: addu        $a0, $t9, $t2
    ctx->r4 = ADD32(ctx->r25, ctx->r10);
    // 0x80010740: sh          $t4, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r12;
    // 0x80010744: sb          $a3, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r7;
    // 0x80010748: lw          $t5, 0x10($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X10);
    // 0x8001074C: sh          $a1, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r5;
    // 0x80010750: sh          $a2, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r6;
    // 0x80010754: sb          $t5, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r13;
    // 0x80010758: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8001075C: sll         $t7, $t6, 5
    ctx->r15 = S32(ctx->r14 << 5);
    // 0x80010760: sh          $t7, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r15;
    // 0x80010764: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80010768: sll         $t9, $t8, 5
    ctx->r25 = S32(ctx->r24 << 5);
    // 0x8001076C: sh          $t9, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r25;
    // 0x80010770: lh          $t2, 0x2($t0)
    ctx->r10 = MEM_H(ctx->r8, 0X2);
    // 0x80010774: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80010778: sh          $t3, 0x2($t0)
    MEM_H(0X2, ctx->r8) = ctx->r11;
    // 0x8001077C: jr          $ra
    // 0x80010780: nop

    TRACE_RETURN()
    return;
    // 0x80010780: nop

;}
