#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_801F3A34_61EE14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F3A34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F3A38: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F3A3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F3A40: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F3A44: jal         0x801D31CC
    // 0x801F3A48: addiu       $a1, $a1, -0x4D68
    ctx->r5 = ADD32(ctx->r5, -0X4D68);
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_0;
    // 0x801F3A48: addiu       $a1, $a1, -0x4D68
    ctx->r5 = ADD32(ctx->r5, -0X4D68);
    after_0:
    // 0x801F3A4C: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F3A50: jal         0x8003521C
    // 0x801F3A54: addiu       $a0, $a0, 0x3A68
    ctx->r4 = ADD32(ctx->r4, 0X3A68);
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x801F3A54: addiu       $a0, $a0, 0x3A68
    ctx->r4 = ADD32(ctx->r4, 0X3A68);
    after_1:
    // 0x801F3A58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F3A5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F3A60: jr          $ra
    // 0x801F3A64: nop

    TRACE_RETURN()
    return;
    // 0x801F3A64: nop

;}
RECOMP_FUNC void func_801DD3DC_6087BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DD3DC: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801DD3E0: lw          $v1, -0x1130($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1130);
    // 0x801DD3E4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801DD3E8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801DD3EC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801DD3F0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801DD3F4: lwc1        $f2, 0x4($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X4);
    // 0x801DD3F8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801DD3FC: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x801DD400: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x801DD404: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    // 0x801DD408: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801DD40C: lw          $t0, 0x1C($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X1C);
    // 0x801DD410: bc1f        L_801DD428
    if (!c1cs) {
        // 0x801DD414: mov.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
            goto L_801DD428;
    }
    // 0x801DD414: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x801DD418: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x801DD41C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DD420: nop

    // 0x801DD424: add.s       $f0, $f2, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f6.fl;
L_801DD428:
    // 0x801DD428: lw          $t6, 0x94($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X94);
    // 0x801DD42C: addiu       $t1, $zero, 0xC
    ctx->r9 = ADD32(0, 0XC);
    // 0x801DD430: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801DD434: multu       $t6, $t1
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801DD438: addiu       $v1, $v1, -0x611C
    ctx->r3 = ADD32(ctx->r3, -0X611C);
    // 0x801DD43C: lwc1        $f8, 0x98($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X98);
    // 0x801DD440: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x801DD444: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801DD448: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801DD44C: mflo        $t7
    ctx->r15 = lo;
    // 0x801DD450: addu        $t8, $v1, $t7
    ctx->r24 = ADD32(ctx->r3, ctx->r15);
    // 0x801DD454: lwc1        $f10, 0x0($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X0);
    // 0x801DD458: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801DD45C: swc1        $f16, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f16.u32l;
    // 0x801DD460: lw          $t9, 0x94($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X94);
    // 0x801DD464: lwc1        $f18, 0x9C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X9C);
    // 0x801DD468: multu       $t9, $t1
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801DD46C: addiu       $t9, $sp, 0x3C
    ctx->r25 = ADD32(ctx->r29, 0X3C);
    // 0x801DD470: mflo        $t2
    ctx->r10 = lo;
    // 0x801DD474: addu        $t3, $v1, $t2
    ctx->r11 = ADD32(ctx->r3, ctx->r10);
    // 0x801DD478: lwc1        $f4, 0x4($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X4);
    // 0x801DD47C: addiu       $t2, $sp, 0x38
    ctx->r10 = ADD32(ctx->r29, 0X38);
    // 0x801DD480: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801DD484: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801DD488: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
    // 0x801DD48C: div.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f18.fl);
    // 0x801DD490: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    // 0x801DD494: lw          $t4, 0x94($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X94);
    // 0x801DD498: lwc1        $f8, 0xA0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x801DD49C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DD4A0: multu       $t4, $t1
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801DD4A4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801DD4A8: mflo        $t5
    ctx->r13 = lo;
    // 0x801DD4AC: addu        $t6, $v1, $t5
    ctx->r14 = ADD32(ctx->r3, ctx->r13);
    // 0x801DD4B0: lwc1        $f10, 0x8($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X8);
    // 0x801DD4B4: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801DD4B8: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801DD4BC: swc1        $f16, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f16.u32l;
    // 0x801DD4C0: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x801DD4C4: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x801DD4C8: nop

    // 0x801DD4CC: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x801DD4D0: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x801DD4D4: nop

    // 0x801DD4D8: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x801DD4DC: beql        $a1, $zero, L_801DD52C
    if (ctx->r5 == 0) {
        // 0x801DD4E0: mfc1        $a1, $f10
        ctx->r5 = (int32_t)ctx->f10.u32l;
            goto L_801DD52C;
    }
    goto skip_0;
    // 0x801DD4E0: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    skip_0:
    // 0x801DD4E4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801DD4E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801DD4EC: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x801DD4F0: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x801DD4F4: nop

    // 0x801DD4F8: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x801DD4FC: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x801DD500: nop

    // 0x801DD504: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x801DD508: bne         $a1, $zero, L_801DD520
    if (ctx->r5 != 0) {
        // 0x801DD50C: nop
    
            goto L_801DD520;
    }
    // 0x801DD50C: nop

    // 0x801DD510: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x801DD514: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801DD518: b           L_801DD538
    // 0x801DD51C: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
        goto L_801DD538;
    // 0x801DD51C: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
L_801DD520:
    // 0x801DD520: b           L_801DD538
    // 0x801DD524: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
        goto L_801DD538;
    // 0x801DD524: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x801DD528: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
L_801DD52C:
    // 0x801DD52C: nop

    // 0x801DD530: bltz        $a1, L_801DD520
    if (SIGNED(ctx->r5) < 0) {
        // 0x801DD534: nop
    
            goto L_801DD520;
    }
    // 0x801DD534: nop

L_801DD538:
    // 0x801DD538: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x801DD53C: andi        $t8, $a1, 0xFFFF
    ctx->r24 = ctx->r5 & 0XFFFF;
    // 0x801DD540: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x801DD544: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x801DD548: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x801DD54C: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x801DD550: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x801DD554: jal         0x8000E808
    // 0x801DD558: sw          $t0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r8;
    func_8000E808_F408(rdram, ctx);
        goto after_0;
    // 0x801DD558: sw          $t0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r8;
    after_0:
    // 0x801DD55C: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x801DD560: lwc1        $f18, 0x40($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X40);
    // 0x801DD564: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
    // 0x801DD568: lwc1        $f16, 0x8($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X8);
    // 0x801DD56C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x801DD570: addiu       $t3, $zero, 0x3B0
    ctx->r11 = ADD32(0, 0X3B0);
    // 0x801DD574: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801DD578: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801DD57C: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x801DD580: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801DD584: lwc1        $f6, 0xC($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0XC);
    // 0x801DD588: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801DD58C: swc1        $f10, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f10.u32l;
    // 0x801DD590: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x801DD594: lwc1        $f16, 0x10($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X10);
    // 0x801DD598: sh          $t3, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r11;
    // 0x801DD59C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801DD5A0: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
    // 0x801DD5A4: lw          $t4, 0x94($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X94);
    // 0x801DD5A8: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x801DD5AC: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x801DD5B0: lhu         $t6, -0x6104($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X6104);
    // 0x801DD5B4: sh          $zero, 0x18($v0)
    MEM_H(0X18, ctx->r2) = 0;
    // 0x801DD5B8: addu        $t7, $t6, $a1
    ctx->r15 = ADD32(ctx->r14, ctx->r5);
    // 0x801DD5BC: addiu       $t8, $t7, 0x200
    ctx->r24 = ADD32(ctx->r15, 0X200);
    // 0x801DD5C0: sh          $t8, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r24;
    // 0x801DD5C4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801DD5C8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801DD5CC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x801DD5D0: jr          $ra
    // 0x801DD5D4: nop

    TRACE_RETURN()
    return;
    // 0x801DD5D4: nop

;}
RECOMP_FUNC void func_80203BC0_62EFA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80203BC0: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x80203BC4: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x80203BC8: lbu         $t6, 0x77($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X77);
    // 0x80203BCC: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80203BD0: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x80203BD4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80203BD8: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x80203BDC: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x80203BE0: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80203BE4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80203BE8: addiu       $t8, $t8, -0x49A0
    ctx->r24 = ADD32(ctx->r24, -0X49A0);
    // 0x80203BEC: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x80203BF0: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80203BF4: lwc1        $f6, 0x1C($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x80203BF8: lwc1        $f10, 0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80203BFC: addiu       $t9, $sp, 0x54
    ctx->r25 = ADD32(ctx->r29, 0X54);
    // 0x80203C00: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80203C04: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80203C08: addiu       $t1, $sp, 0x50
    ctx->r9 = ADD32(ctx->r29, 0X50);
    // 0x80203C0C: addiu       $a3, $sp, 0x58
    ctx->r7 = ADD32(ctx->r29, 0X58);
    // 0x80203C10: swc1        $f8, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f8.u32l;
    // 0x80203C14: lwc1        $f16, 0x20($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X20);
    // 0x80203C18: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80203C1C: swc1        $f18, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f18.u32l;
    // 0x80203C20: lwc1        $f6, 0x24($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X24);
    // 0x80203C24: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80203C28: swc1        $f8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f8.u32l;
    // 0x80203C2C: lhu         $a2, 0x18($v1)
    ctx->r6 = MEM_HU(ctx->r3, 0X18);
    // 0x80203C30: lhu         $a1, 0x16($v1)
    ctx->r5 = MEM_HU(ctx->r3, 0X16);
    // 0x80203C34: lhu         $a0, 0x14($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X14);
    // 0x80203C38: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x80203C3C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80203C40: jal         0x8000E808
    // 0x80203C44: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    func_8000E808_F408(rdram, ctx);
        goto after_0;
    // 0x80203C44: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    after_0:
    // 0x80203C48: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x80203C4C: lwc1        $f16, 0x58($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80203C50: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80203C54: lwc1        $f10, 0x8($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80203C58: ori         $t3, $zero, 0x8000
    ctx->r11 = 0 | 0X8000;
    // 0x80203C5C: ori         $t4, $zero, 0x8000
    ctx->r12 = 0 | 0X8000;
    // 0x80203C60: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80203C64: lwc1        $f16, 0x50($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80203C68: ori         $t5, $zero, 0x8000
    ctx->r13 = 0 | 0X8000;
    // 0x80203C6C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80203C70: swc1        $f18, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f18.u32l;
    // 0x80203C74: lwc1        $f4, 0xC($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0XC);
    // 0x80203C78: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80203C7C: lbu         $t0, 0x77($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X77);
    // 0x80203C80: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80203C84: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80203C88: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x80203C8C: addu        $a1, $a1, $t2
    ctx->r5 = ADD32(ctx->r5, ctx->r10);
    // 0x80203C90: swc1        $f8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f8.u32l;
    // 0x80203C94: lwc1        $f10, 0x10($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X10);
    // 0x80203C98: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80203C9C: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x80203CA0: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80203CA4: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x80203CA8: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x80203CAC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80203CB0: swc1        $f18, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f18.u32l;
    // 0x80203CB4: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80203CB8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80203CBC: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x80203CC0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x80203CC4: lwc1        $f8, 0x1C($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x80203CC8: addiu       $t6, $zero, 0x4B3
    ctx->r14 = ADD32(0, 0X4B3);
    // 0x80203CCC: addiu       $a2, $a2, -0x5830
    ctx->r6 = ADD32(ctx->r6, -0X5830);
    // 0x80203CD0: div.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80203CD4: addiu       $a0, $a0, 0x3DFC
    ctx->r4 = ADD32(ctx->r4, 0X3DFC);
    // 0x80203CD8: lw          $a1, -0x4A18($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X4A18);
    // 0x80203CDC: or          $t0, $t2, $zero
    ctx->r8 = ctx->r10 | 0;
    // 0x80203CE0: lw          $a3, 0x58($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X58);
    // 0x80203CE4: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x80203CE8: lwc1        $f16, 0x20($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X20);
    // 0x80203CEC: div.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80203CF0: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    // 0x80203CF4: lwc1        $f4, 0x24($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X24);
    // 0x80203CF8: sw          $t2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r10;
    // 0x80203CFC: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x80203D00: div.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80203D04: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x80203D08: jal         0x80035854
    // 0x80203D0C: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    func_80035854_36454(rdram, ctx);
        goto after_1;
    // 0x80203D0C: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x80203D10: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x80203D14: beq         $v0, $zero, L_80203DE8
    if (ctx->r2 == 0) {
        // 0x80203D18: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80203DE8;
    }
    // 0x80203D18: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80203D1C: lwc1        $f8, 0x1C($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x80203D20: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80203D24: lwc1        $f16, 0x54($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80203D28: lwc1        $f18, 0x50($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80203D2C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80203D30: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80203D34: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80203D38: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80203D3C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80203D40: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x80203D44: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x80203D48: jal         0x801E006C
    // 0x80203D4C: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_2;
    // 0x80203D4C: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    after_2:
    // 0x80203D50: lw          $v1, 0x18($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X18);
    // 0x80203D54: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x80203D58: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80203D5C: sb          $t7, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r15;
    // 0x80203D60: lbu         $t8, 0x77($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X77);
    // 0x80203D64: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80203D68: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x80203D6C: sw          $t8, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r24;
    // 0x80203D70: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x80203D74: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80203D78: lui         $a3, 0x4120
    ctx->r7 = S32(0X4120 << 16);
    // 0x80203D7C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80203D80: lwc1        $f12, -0x4838($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X4838);
    // 0x80203D84: jal         0x8000E39C
    // 0x80203D88: sw          $v1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r3;
    func_8000E39C_EF9C(rdram, ctx);
        goto after_3;
    // 0x80203D88: sw          $v1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r3;
    after_3:
    // 0x80203D8C: addiu       $v1, $zero, 0x28
    ctx->r3 = ADD32(0, 0X28);
    // 0x80203D90: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x80203D94: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x80203D98: addiu       $t3, $zero, 0x32
    ctx->r11 = ADD32(0, 0X32);
    // 0x80203D9C: addiu       $t4, $zero, 0x50
    ctx->r12 = ADD32(0, 0X50);
    // 0x80203DA0: addiu       $t5, $zero, -0x28
    ctx->r13 = ADD32(0, -0X28);
    // 0x80203DA4: sb          $t1, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r9;
    // 0x80203DA8: sw          $t2, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r10;
    // 0x80203DAC: sb          $t3, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r11;
    // 0x80203DB0: sh          $v1, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r3;
    // 0x80203DB4: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
    // 0x80203DB8: sh          $zero, 0x52($s0)
    MEM_H(0X52, ctx->r16) = 0;
    // 0x80203DBC: sh          $v1, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r3;
    // 0x80203DC0: sh          $t4, 0x3E($s0)
    MEM_H(0X3E, ctx->r16) = ctx->r12;
    // 0x80203DC4: sh          $t5, 0x40($s0)
    MEM_H(0X40, ctx->r16) = ctx->r13;
    // 0x80203DC8: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80203DCC: lw          $a1, -0x1130($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1130);
    // 0x80203DD0: lui         $a3, 0x44BB
    ctx->r7 = S32(0X44BB << 16);
    // 0x80203DD4: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x80203DD8: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    // 0x80203DDC: addiu       $a0, $zero, 0x22E
    ctx->r4 = ADD32(0, 0X22E);
    // 0x80203DE0: jal         0x8000F3D8
    // 0x80203DE4: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    func_8000F3D8_FFD8(rdram, ctx);
        goto after_4;
    // 0x80203DE4: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    after_4:
L_80203DE8:
    // 0x80203DE8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80203DEC: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x80203DF0: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x80203DF4: jr          $ra
    // 0x80203DF8: nop

    TRACE_RETURN()
    return;
    // 0x80203DF8: nop

;}
RECOMP_FUNC void func_801EF818_61ABF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EF818: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801EF81C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801EF820: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801EF824: lw          $t6, 0x7C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X7C);
    // 0x801EF828: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x801EF82C: bgez        $t7, L_801EF83C
    if (SIGNED(ctx->r15) >= 0) {
        // 0x801EF830: sw          $t7, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r15;
            goto L_801EF83C;
    }
    // 0x801EF830: sw          $t7, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r15;
    // 0x801EF834: jal         0x801D31F0
    // 0x801EF838: lui         $a1, 0xC248
    ctx->r5 = S32(0XC248 << 16);
    func_801D31F0_5FE5D0(rdram, ctx);
        goto after_0;
    // 0x801EF838: lui         $a1, 0xC248
    ctx->r5 = S32(0XC248 << 16);
    after_0:
L_801EF83C:
    // 0x801EF83C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801EF840: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801EF844: jr          $ra
    // 0x801EF848: nop

    TRACE_RETURN()
    return;
    // 0x801EF848: nop

;}
RECOMP_FUNC void func_801D606C_60144C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D606C: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x801D6070: beq         $v0, $zero, L_801D6094
    if (ctx->r2 == 0) {
        // 0x801D6074: nop
    
            goto L_801D6094;
    }
    // 0x801D6074: nop

    // 0x801D6078: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
L_801D607C:
    // 0x801D607C: lwc1        $f6, 0x78($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X78);
    // 0x801D6080: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801D6084: swc1        $f8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f8.u32l;
    // 0x801D6088: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x801D608C: bnel        $v0, $zero, L_801D607C
    if (ctx->r2 != 0) {
        // 0x801D6090: lwc1        $f4, 0x10($v0)
        ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
            goto L_801D607C;
    }
    goto skip_0;
    // 0x801D6090: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    skip_0:
L_801D6094:
    // 0x801D6094: jr          $ra
    // 0x801D6098: nop

    TRACE_RETURN()
    return;
    // 0x801D6098: nop

;}
RECOMP_FUNC void func_801D9DA8_605188(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D9DA8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801D9DAC: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801D9DB0: lw          $v1, -0x1130($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1130);
    // 0x801D9DB4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801D9DB8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801D9DBC: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x801D9DC0: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x801D9DC4: sb          $t6, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r14;
    // 0x801D9DC8: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x801D9DCC: addiu       $t9, $zero, 0x400
    ctx->r25 = ADD32(0, 0X400);
    // 0x801D9DD0: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801D9DD4: lw          $v0, 0x18($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X18);
    // 0x801D9DD8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801D9DDC: addiu       $t7, $sp, 0x34
    ctx->r15 = ADD32(ctx->r29, 0X34);
    // 0x801D9DE0: lhu         $t8, 0x14($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X14);
    // 0x801D9DE4: lhu         $t2, 0x16($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X16);
    // 0x801D9DE8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801D9DEC: subu        $t4, $t9, $t8
    ctx->r12 = SUB32(ctx->r25, ctx->r24);
    // 0x801D9DF0: addiu       $t9, $sp, 0x30
    ctx->r25 = ADD32(ctx->r29, 0X30);
    // 0x801D9DF4: addiu       $t6, $t2, -0x100
    ctx->r14 = ADD32(ctx->r10, -0X100);
    // 0x801D9DF8: andi        $a2, $t6, 0xFFFF
    ctx->r6 = ctx->r14 & 0XFFFF;
    // 0x801D9DFC: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x801D9E00: andi        $a1, $t4, 0xFFFF
    ctx->r5 = ctx->r12 & 0XFFFF;
    // 0x801D9E04: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x801D9E08: jal         0x8000E68C
    // 0x801D9E0C: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    func_8000E68C_F28C(rdram, ctx);
        goto after_0;
    // 0x801D9E0C: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    after_0:
    // 0x801D9E10: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x801D9E14: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801D9E18: lwc1        $f14, 0x38($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X38);
    // 0x801D9E1C: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x801D9E20: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x801D9E24: jal         0x8000E39C
    // 0x801D9E28: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8000E39C_EF9C(rdram, ctx);
        goto after_1;
    // 0x801D9E28: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_1:
    // 0x801D9E2C: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x801D9E30: lwc1        $f14, 0x34($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801D9E34: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x801D9E38: jal         0x8000EB50
    // 0x801D9E3C: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    func_8000EB50_F750(rdram, ctx);
        goto after_2;
    // 0x801D9E3C: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    after_2:
    // 0x801D9E40: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x801D9E44: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801D9E48: sw          $v0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r2;
    // 0x801D9E4C: sw          $v0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r2;
    // 0x801D9E50: jal         0x8003521C
    // 0x801D9E54: addiu       $a0, $a0, -0x6180
    ctx->r4 = ADD32(ctx->r4, -0X6180);
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801D9E54: addiu       $a0, $a0, -0x6180
    ctx->r4 = ADD32(ctx->r4, -0X6180);
    after_3:
    // 0x801D9E58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D9E5C: jal         0x801DA3CC
    // 0x801D9E60: lw          $a1, 0x90($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X90);
    func_801DA3CC_6057AC(rdram, ctx);
        goto after_4;
    // 0x801D9E60: lw          $a1, 0x90($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X90);
    after_4:
    // 0x801D9E64: jal         0x80038BC8
    // 0x801D9E68: addiu       $a0, $zero, 0x121
    ctx->r4 = ADD32(0, 0X121);
    func_80038BC8_397C8(rdram, ctx);
        goto after_5;
    // 0x801D9E68: addiu       $a0, $zero, 0x121
    ctx->r4 = ADD32(0, 0X121);
    after_5:
    // 0x801D9E6C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801D9E70: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801D9E74: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x801D9E78: jr          $ra
    // 0x801D9E7C: nop

    TRACE_RETURN()
    return;
    // 0x801D9E7C: nop

;}
RECOMP_FUNC void func_801E7FB0_613390(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E7FB0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801E7FB4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801E7FB8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801E7FBC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E7FC0: jal         0x801EF2B0
    // 0x801E7FC4: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    func_801EF2B0_61A690(rdram, ctx);
        goto after_0;
    // 0x801E7FC4: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801E7FC8: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801E7FCC: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801E7FD0: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x801E7FD4: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x801E7FD8: addiu       $t7, $t6, 0x1B0
    ctx->r15 = ADD32(ctx->r14, 0X1B0);
    // 0x801E7FDC: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x801E7FE0: lwc1        $f4, 0xC($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0XC);
    // 0x801E7FE4: lw          $a3, 0x8($a1)
    ctx->r7 = MEM_W(ctx->r5, 0X8);
    // 0x801E7FE8: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x801E7FEC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801E7FF0: lwc1        $f6, 0x10($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X10);
    // 0x801E7FF4: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    // 0x801E7FF8: jal         0x8000EDF4
    // 0x801E7FFC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_8000EDF4_F9F4(rdram, ctx);
        goto after_1;
    // 0x801E7FFC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x801E8000: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x801E8004: lw          $t8, 0x90($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X90);
    // 0x801E8008: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801E800C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801E8010: addiu       $v0, $t8, 0x4
    ctx->r2 = ADD32(ctx->r24, 0X4);
    // 0x801E8014: sltiu       $at, $v0, 0xC0
    ctx->r1 = ctx->r2 < 0XC0 ? 1 : 0;
    // 0x801E8018: bne         $at, $zero, L_801E8028
    if (ctx->r1 != 0) {
        // 0x801E801C: sw          $v0, 0x90($s0)
        MEM_W(0X90, ctx->r16) = ctx->r2;
            goto L_801E8028;
    }
    // 0x801E801C: sw          $v0, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r2;
    // 0x801E8020: addiu       $v0, $zero, 0xC0
    ctx->r2 = ADD32(0, 0XC0);
    // 0x801E8024: sw          $v0, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r2;
L_801E8028:
    // 0x801E8028: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801E802C: jal         0x801E4194
    // 0x801E8030: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
    func_801E4194_60F574(rdram, ctx);
        goto after_2;
    // 0x801E8030: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
    after_2:
    // 0x801E8034: lw          $v0, 0x80($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X80);
    // 0x801E8038: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E803C: lui         $a1, 0x3ECC
    ctx->r5 = S32(0X3ECC << 16);
    // 0x801E8040: addiu       $t1, $v0, -0x1
    ctx->r9 = ADD32(ctx->r2, -0X1);
    // 0x801E8044: bgtz        $v0, L_801E8088
    if (SIGNED(ctx->r2) > 0) {
        // 0x801E8048: sw          $t1, 0x80($s0)
        MEM_W(0X80, ctx->r16) = ctx->r9;
            goto L_801E8088;
    }
    // 0x801E8048: sw          $t1, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r9;
    // 0x801E804C: jal         0x801EBDC0
    // 0x801E8050: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    func_801EBDC0_6171A0(rdram, ctx);
        goto after_3;
    // 0x801E8050: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    after_3:
    // 0x801E8054: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801E8058: lui         $at, 0x3FD0
    ctx->r1 = S32(0X3FD0 << 16);
    // 0x801E805C: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x801E8060: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801E8064: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801E8068: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E806C: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x801E8070: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x801E8074: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801E8078: nop

    // 0x801E807C: div.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = DIV_D(ctx->f18.d, ctx->f4.d);
    // 0x801E8080: trunc.w.d   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_D(ctx->f6.d);
    // 0x801E8084: swc1        $f8, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f8.u32l;
L_801E8088:
    // 0x801E8088: lw          $t3, 0x7C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X7C);
    // 0x801E808C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x801E8090: slti        $at, $t4, 0x80
    ctx->r1 = SIGNED(ctx->r12) < 0X80 ? 1 : 0;
    // 0x801E8094: sw          $t4, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r12;
    // 0x801E8098: bne         $at, $zero, L_801E80C4
    if (ctx->r1 != 0) {
        // 0x801E809C: or          $v0, $t4, $zero
        ctx->r2 = ctx->r12 | 0;
            goto L_801E80C4;
    }
    // 0x801E809C: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
    // 0x801E80A0: andi        $t5, $t4, 0x3
    ctx->r13 = ctx->r12 & 0X3;
    // 0x801E80A4: bne         $t5, $zero, L_801E80C4
    if (ctx->r13 != 0) {
        // 0x801E80A8: lw          $a0, 0x2C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X2C);
            goto L_801E80C4;
    }
    // 0x801E80A8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x801E80AC: lhu         $v1, 0x8($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X8);
    // 0x801E80B0: slti        $at, $v1, 0x50
    ctx->r1 = SIGNED(ctx->r3) < 0X50 ? 1 : 0;
    // 0x801E80B4: beq         $at, $zero, L_801E80C4
    if (ctx->r1 == 0) {
        // 0x801E80B8: addiu       $t6, $v1, 0x1
        ctx->r14 = ADD32(ctx->r3, 0X1);
            goto L_801E80C4;
    }
    // 0x801E80B8: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x801E80BC: sh          $t6, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r14;
    // 0x801E80C0: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
L_801E80C4:
    // 0x801E80C4: addiu       $at, $zero, 0x60
    ctx->r1 = ADD32(0, 0X60);
    // 0x801E80C8: bnel        $v0, $at, L_801E80E0
    if (ctx->r2 != ctx->r1) {
        // 0x801E80CC: addiu       $v1, $zero, 0x380
        ctx->r3 = ADD32(0, 0X380);
            goto L_801E80E0;
    }
    goto skip_0;
    // 0x801E80CC: addiu       $v1, $zero, 0x380
    ctx->r3 = ADD32(0, 0X380);
    skip_0:
    // 0x801E80D0: jal         0x801EC2F0
    // 0x801E80D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801EC2F0_6176D0(rdram, ctx);
        goto after_4;
    // 0x801E80D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x801E80D8: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
    // 0x801E80DC: addiu       $v1, $zero, 0x380
    ctx->r3 = ADD32(0, 0X380);
L_801E80E0:
    // 0x801E80E0: bne         $v1, $v0, L_801E80F4
    if (ctx->r3 != ctx->r2) {
        // 0x801E80E4: lui         $a0, 0x801F
        ctx->r4 = S32(0X801F << 16);
            goto L_801E80F4;
    }
    // 0x801E80E4: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801E80E8: sw          $v1, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r3;
    // 0x801E80EC: jal         0x8003521C
    // 0x801E80F0: addiu       $a0, $a0, -0x7EF8
    ctx->r4 = ADD32(ctx->r4, -0X7EF8);
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x801E80F0: addiu       $a0, $a0, -0x7EF8
    ctx->r4 = ADD32(ctx->r4, -0X7EF8);
    after_5:
L_801E80F4:
    // 0x801E80F4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801E80F8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801E80FC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x801E8100: jr          $ra
    // 0x801E8104: nop

    TRACE_RETURN()
    return;
    // 0x801E8104: nop

;}
RECOMP_FUNC void func_801E4730_60FB10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E4730: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801E4734: lw          $t7, -0x1130($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1130);
    // 0x801E4738: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E473C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E4740: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E4744: lw          $t8, 0x1E4($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X1E4);
    // 0x801E4748: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x801E474C: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x801E4750: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x801E4754: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x801E4758: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x801E475C: lui         $t1, 0x4
    ctx->r9 = S32(0X4 << 16);
    // 0x801E4760: addu        $t0, $t6, $t9
    ctx->r8 = ADD32(ctx->r14, ctx->r25);
    // 0x801E4764: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x801E4768: lhu         $t1, -0x4F84($t1)
    ctx->r9 = MEM_HU(ctx->r9, -0X4F84);
    // 0x801E476C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801E4770: andi        $t2, $t1, 0xD000
    ctx->r10 = ctx->r9 & 0XD000;
    // 0x801E4774: beql        $t2, $zero, L_801E4784
    if (ctx->r10 == 0) {
        // 0x801E4778: lw          $t3, 0x7C($a0)
        ctx->r11 = MEM_W(ctx->r4, 0X7C);
            goto L_801E4784;
    }
    goto skip_0;
    // 0x801E4778: lw          $t3, 0x7C($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X7C);
    skip_0:
    // 0x801E477C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801E4780: lw          $t3, 0x7C($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X7C);
L_801E4784:
    // 0x801E4784: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x801E4788: beq         $t4, $zero, L_801E4798
    if (ctx->r12 == 0) {
        // 0x801E478C: sw          $t4, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r12;
            goto L_801E4798;
    }
    // 0x801E478C: sw          $t4, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r12;
    // 0x801E4790: beql        $v0, $zero, L_801E47B0
    if (ctx->r2 == 0) {
        // 0x801E4794: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E47B0;
    }
    goto skip_1;
    // 0x801E4794: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
L_801E4798:
    // 0x801E4798: jal         0x80038BC8
    // 0x801E479C: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_80038BC8_397C8(rdram, ctx);
        goto after_0;
    // 0x801E479C: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_0:
    // 0x801E47A0: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E47A4: jal         0x8003521C
    // 0x801E47A8: addiu       $a0, $a0, 0x47BC
    ctx->r4 = ADD32(ctx->r4, 0X47BC);
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x801E47A8: addiu       $a0, $a0, 0x47BC
    ctx->r4 = ADD32(ctx->r4, 0X47BC);
    after_1:
    // 0x801E47AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E47B0:
    // 0x801E47B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E47B4: jr          $ra
    // 0x801E47B8: nop

    TRACE_RETURN()
    return;
    // 0x801E47B8: nop

;}
RECOMP_FUNC void func_801EB790_616B70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EB790: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801EB794: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801EB798: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801EB79C: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x801EB7A0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801EB7A4: addiu       $a1, $a1, -0x5C58
    ctx->r5 = ADD32(ctx->r5, -0X5C58);
    // 0x801EB7A8: addiu       $v0, $t6, -0x5
    ctx->r2 = ADD32(ctx->r14, -0X5);
    // 0x801EB7AC: bgtz        $v0, L_801EB7C4
    if (SIGNED(ctx->r2) > 0) {
        // 0x801EB7B0: sw          $v0, 0x90($a0)
        MEM_W(0X90, ctx->r4) = ctx->r2;
            goto L_801EB7C4;
    }
    // 0x801EB7B0: sw          $v0, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r2;
    // 0x801EB7B4: jal         0x80034ED4
    // 0x801EB7B8: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_0;
    // 0x801EB7B8: nop

    after_0:
    // 0x801EB7BC: b           L_801EB7F4
    // 0x801EB7C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801EB7F4;
    // 0x801EB7C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801EB7C4:
    // 0x801EB7C4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x801EB7C8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801EB7CC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801EB7D0: jal         0x8000DDF0
    // 0x801EB7D4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_8000DDF0_E9F0(rdram, ctx);
        goto after_1;
    // 0x801EB7D4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_1:
    // 0x801EB7D8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801EB7DC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x801EB7E0: or          $t8, $v0, $at
    ctx->r24 = ctx->r2 | ctx->r1;
    // 0x801EB7E4: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801EB7E8: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x801EB7EC: sw          $t9, 0x30($t0)
    MEM_W(0X30, ctx->r8) = ctx->r25;
    // 0x801EB7F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801EB7F4:
    // 0x801EB7F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801EB7F8: jr          $ra
    // 0x801EB7FC: nop

    TRACE_RETURN()
    return;
    // 0x801EB7FC: nop

;}
RECOMP_FUNC void func_801E9B9C_614F7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E9B9C: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801E9BA0: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801E9BA4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801E9BA8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E9BAC: addiu       $t7, $t6, 0x140
    ctx->r15 = ADD32(ctx->r14, 0X140);
    // 0x801E9BB0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801E9BB4: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x801E9BB8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801E9BBC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E9BC0: lwc1        $f4, 0x90($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X90);
    // 0x801E9BC4: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801E9BC8: lhu         $a1, 0x96($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0X96);
    // 0x801E9BCC: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801E9BD0: addiu       $a2, $s0, 0x8
    ctx->r6 = ADD32(ctx->r16, 0X8);
    // 0x801E9BD4: addiu       $a3, $s0, 0x10
    ctx->r7 = ADD32(ctx->r16, 0X10);
    // 0x801E9BD8: swc1        $f8, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->f8.u32l;
    // 0x801E9BDC: lwc1        $f12, 0x90($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X90);
    // 0x801E9BE0: jal         0x8000E630
    // 0x801E9BE4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_8000E630_F230(rdram, ctx);
        goto after_0;
    // 0x801E9BE4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x801E9BE8: jal         0x801EEEC0
    // 0x801E9BEC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_801EEEC0_61A2A0(rdram, ctx);
        goto after_1;
    // 0x801E9BEC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_1:
    // 0x801E9BF0: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x801E9BF4: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x801E9BF8: jal         0x8000E9F4
    // 0x801E9BFC: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    func_8000E9F4_F5F4(rdram, ctx);
        goto after_2;
    // 0x801E9BFC: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    after_2:
    // 0x801E9C00: lui         $at, 0x4150
    ctx->r1 = S32(0X4150 << 16);
    // 0x801E9C04: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801E9C08: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x801E9C0C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801E9C10: lwc1        $f10, 0x94($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X94);
    // 0x801E9C14: lwc1        $f4, 0x28($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X28);
    // 0x801E9C18: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E9C1C: div.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x801E9C20: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x801E9C24: addiu       $a1, $a1, -0x4F6C
    ctx->r5 = ADD32(ctx->r5, -0X4F6C);
    // 0x801E9C28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E9C2C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801E9C30: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x801E9C34: swc1        $f6, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f6.u32l;
    // 0x801E9C38: lwc1        $f8, 0x28($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X28);
    // 0x801E9C3C: c.le.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl <= ctx->f8.fl;
    // 0x801E9C40: nop

    // 0x801E9C44: bc1fl       L_801E9C54
    if (!c1cs) {
        // 0x801E9C48: lw          $t8, 0x24($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X24);
            goto L_801E9C54;
    }
    goto skip_0;
    // 0x801E9C48: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x801E9C4C: swc1        $f0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f0.u32l;
    // 0x801E9C50: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
L_801E9C54:
    // 0x801E9C54: lw          $t9, 0x34($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X34);
    // 0x801E9C58: bnel        $t9, $zero, L_801E9C80
    if (ctx->r25 != 0) {
        // 0x801E9C5C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801E9C80;
    }
    goto skip_1;
    // 0x801E9C5C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x801E9C60: jal         0x801D34D0
    // 0x801E9C64: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_801D34D0_5FE8B0(rdram, ctx);
        goto after_3;
    // 0x801E9C64: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x801E9C68: jal         0x801EF268
    // 0x801E9C6C: nop

    func_801EF268_61A648(rdram, ctx);
        goto after_4;
    // 0x801E9C6C: nop

    after_4:
    // 0x801E9C70: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801E9C74: jal         0x8003521C
    // 0x801E9C78: addiu       $a0, $a0, -0x6370
    ctx->r4 = ADD32(ctx->r4, -0X6370);
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x801E9C78: addiu       $a0, $a0, -0x6370
    ctx->r4 = ADD32(ctx->r4, -0X6370);
    after_5:
    // 0x801E9C7C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E9C80:
    // 0x801E9C80: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801E9C84: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801E9C88: jr          $ra
    // 0x801E9C8C: nop

    TRACE_RETURN()
    return;
    // 0x801E9C8C: nop

;}
RECOMP_FUNC void func_801F0BF4_61BFD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F0BF4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801F0BF8: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801F0BFC: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801F0C00: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F0C04: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801F0C08: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801F0C0C: lw          $t6, 0x1D8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X1D8);
    // 0x801F0C10: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801F0C14: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F0C18: lw          $t7, 0x18($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X18);
    // 0x801F0C1C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x801F0C20: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801F0C24: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x801F0C28: lw          $t8, 0x1CC($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X1CC);
    // 0x801F0C2C: lw          $t9, 0x18($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X18);
    // 0x801F0C30: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x801F0C34: lwc1        $f14, 0x78($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X78);
    // 0x801F0C38: jal         0x8000EB08
    // 0x801F0C3C: lwc1        $f12, 0x70($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X70);
    func_8000EB08_F708(rdram, ctx);
        goto after_0;
    // 0x801F0C3C: lwc1        $f12, 0x70($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X70);
    after_0:
    // 0x801F0C40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F0C44: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    // 0x801F0C48: jal         0x801D3EC8
    // 0x801F0C4C: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    func_801D3EC8_5FF2A8(rdram, ctx);
        goto after_1;
    // 0x801F0C4C: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_1:
    // 0x801F0C50: jal         0x801D6124
    // 0x801F0C54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D6124_601504(rdram, ctx);
        goto after_2;
    // 0x801F0C54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801F0C58: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x801F0C5C: jal         0x8000EDB0
    // 0x801F0C60: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    func_8000EDB0_F9B0(rdram, ctx);
        goto after_3;
    // 0x801F0C60: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    after_3:
    // 0x801F0C64: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x801F0C68: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F0C6C: nop

    // 0x801F0C70: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x801F0C74: nop

    // 0x801F0C78: bc1fl       L_801F0CE8
    if (!c1cs) {
        // 0x801F0C7C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801F0CE8;
    }
    goto skip_0;
    // 0x801F0C7C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801F0C80: jal         0x801F703C
    // 0x801F0C84: nop

    func_801F703C_62241C(rdram, ctx);
        goto after_4;
    // 0x801F0C84: nop

    after_4:
    // 0x801F0C88: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F0C8C: addiu       $a1, $a1, -0x4D80
    ctx->r5 = ADD32(ctx->r5, -0X4D80);
    // 0x801F0C90: jal         0x801D31CC
    // 0x801F0C94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_5;
    // 0x801F0C94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x801F0C98: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801F0C9C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F0CA0: nop

    // 0x801F0CA4: swc1        $f6, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f6.u32l;
    // 0x801F0CA8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x801F0CAC: jal         0x80003E10
    // 0x801F0CB0: lhu         $a0, 0x16($t0)
    ctx->r4 = MEM_HU(ctx->r8, 0X16);
    func_80003E10_4A10(rdram, ctx);
        goto after_6;
    // 0x801F0CB0: lhu         $a0, 0x16($t0)
    ctx->r4 = MEM_HU(ctx->r8, 0X16);
    after_6:
    // 0x801F0CB4: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x801F0CB8: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801F0CBC: swc1        $f10, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f10.u32l;
    // 0x801F0CC0: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x801F0CC4: jal         0x80003EA0
    // 0x801F0CC8: lhu         $a0, 0x16($t1)
    ctx->r4 = MEM_HU(ctx->r9, 0X16);
    func_80003EA0_4AA0(rdram, ctx);
        goto after_7;
    // 0x801F0CC8: lhu         $a0, 0x16($t1)
    ctx->r4 = MEM_HU(ctx->r9, 0X16);
    after_7:
    // 0x801F0CCC: cvt.d.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.d = CVT_D_S(ctx->f0.fl);
    // 0x801F0CD0: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F0CD4: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801F0CD8: addiu       $a0, $a0, 0xCF8
    ctx->r4 = ADD32(ctx->r4, 0XCF8);
    // 0x801F0CDC: jal         0x8003521C
    // 0x801F0CE0: swc1        $f18, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f18.u32l;
    func_8003521C_35E1C(rdram, ctx);
        goto after_8;
    // 0x801F0CE0: swc1        $f18, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f18.u32l;
    after_8:
    // 0x801F0CE4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801F0CE8:
    // 0x801F0CE8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801F0CEC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801F0CF0: jr          $ra
    // 0x801F0CF4: nop

    TRACE_RETURN()
    return;
    // 0x801F0CF4: nop

;}
RECOMP_FUNC void func_801D60E4_6014C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D60E4: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x801D60E8: beq         $v0, $zero, L_801D611C
    if (ctx->r2 == 0) {
        // 0x801D60EC: nop
    
            goto L_801D611C;
    }
    // 0x801D60EC: nop

    // 0x801D60F0: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
L_801D60F4:
    // 0x801D60F4: lwc1        $f6, 0x70($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X70);
    // 0x801D60F8: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801D60FC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801D6100: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
    // 0x801D6104: lwc1        $f16, 0x78($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X78);
    // 0x801D6108: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801D610C: swc1        $f18, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f18.u32l;
    // 0x801D6110: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x801D6114: bnel        $v0, $zero, L_801D60F4
    if (ctx->r2 != 0) {
        // 0x801D6118: lwc1        $f4, 0x8($v0)
        ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
            goto L_801D60F4;
    }
    goto skip_0;
    // 0x801D6118: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    skip_0:
L_801D611C:
    // 0x801D611C: jr          $ra
    // 0x801D6120: nop

    TRACE_RETURN()
    return;
    // 0x801D6120: nop

;}
RECOMP_FUNC void func_801FA424_625804(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FA424: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801FA428: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x801FA42C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801FA430: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801FA434: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801FA438: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801FA43C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801FA440: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801FA444: lwc1        $f4, 0x94($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X94);
    // 0x801FA448: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801FA44C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801FA450: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801FA454: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801FA458: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x801FA45C: swc1        $f8, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->f8.u32l;
    // 0x801FA460: lwc1        $f0, 0x94($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X94);
    // 0x801FA464: c.le.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl <= ctx->f0.fl;
    // 0x801FA468: nop

    // 0x801FA46C: bc1fl       L_801FA480
    if (!c1cs) {
        // 0x801FA470: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_801FA480;
    }
    goto skip_0;
    // 0x801FA470: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_0:
    // 0x801FA474: b           L_801FA480
    // 0x801FA478: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
        goto L_801FA480;
    // 0x801FA478: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x801FA47C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_801FA480:
    // 0x801FA480: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x801FA484: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x801FA488: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x801FA48C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x801FA490: cvt.w.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    ctx->f10.u32l = CVT_W_S(ctx->f2.fl);
    // 0x801FA494: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x801FA498: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x801FA49C: nop

    // 0x801FA4A0: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x801FA4A4: beql        $a3, $zero, L_801FA4F4
    if (ctx->r7 == 0) {
        // 0x801FA4A8: mfc1        $a3, $f10
        ctx->r7 = (int32_t)ctx->f10.u32l;
            goto L_801FA4F4;
    }
    goto skip_1;
    // 0x801FA4A8: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    skip_1:
    // 0x801FA4AC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801FA4B0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801FA4B4: sub.s       $f10, $f2, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f10.fl;
    // 0x801FA4B8: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x801FA4BC: nop

    // 0x801FA4C0: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x801FA4C4: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x801FA4C8: nop

    // 0x801FA4CC: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x801FA4D0: bne         $a3, $zero, L_801FA4E8
    if (ctx->r7 != 0) {
        // 0x801FA4D4: nop
    
            goto L_801FA4E8;
    }
    // 0x801FA4D4: nop

    // 0x801FA4D8: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x801FA4DC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801FA4E0: b           L_801FA500
    // 0x801FA4E4: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
        goto L_801FA500;
    // 0x801FA4E4: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
L_801FA4E8:
    // 0x801FA4E8: b           L_801FA500
    // 0x801FA4EC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
        goto L_801FA500;
    // 0x801FA4EC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x801FA4F0: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
L_801FA4F4:
    // 0x801FA4F4: nop

    // 0x801FA4F8: bltz        $a3, L_801FA4E8
    if (SIGNED(ctx->r7) < 0) {
        // 0x801FA4FC: nop
    
            goto L_801FA4E8;
    }
    // 0x801FA4FC: nop

L_801FA500:
    // 0x801FA500: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x801FA504: andi        $t7, $a3, 0xFFFF
    ctx->r15 = ctx->r7 & 0XFFFF;
    // 0x801FA508: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x801FA50C: jal         0x801D15BC
    // 0x801FA510: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_801D15BC_5FC99C(rdram, ctx);
        goto after_0;
    // 0x801FA510: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_0:
    // 0x801FA514: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x801FA518: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801FA51C: lwc1        $f0, 0x94($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X94);
    // 0x801FA520: c.eq.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl == ctx->f0.fl;
    // 0x801FA524: nop

    // 0x801FA528: bc1f        L_801FA53C
    if (!c1cs) {
        // 0x801FA52C: nop
    
            goto L_801FA53C;
    }
    // 0x801FA52C: nop

    // 0x801FA530: jal         0x80038BC8
    // 0x801FA534: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    func_80038BC8_397C8(rdram, ctx);
        goto after_1;
    // 0x801FA534: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    after_1:
    // 0x801FA538: lwc1        $f0, 0x94($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X94);
L_801FA53C:
    // 0x801FA53C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801FA540: lwc1        $f18, -0x1748($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1748);
    // 0x801FA544: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FA548: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x801FA54C: nop

    // 0x801FA550: bc1fl       L_801FA564
    if (!c1cs) {
        // 0x801FA554: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_801FA564;
    }
    goto skip_2;
    // 0x801FA554: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_2:
    // 0x801FA558: jal         0x8003521C
    // 0x801FA55C: addiu       $a0, $a0, -0x5A8C
    ctx->r4 = ADD32(ctx->r4, -0X5A8C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801FA55C: addiu       $a0, $a0, -0x5A8C
    ctx->r4 = ADD32(ctx->r4, -0X5A8C);
    after_2:
    // 0x801FA560: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801FA564:
    // 0x801FA564: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801FA568: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801FA56C: jr          $ra
    // 0x801FA570: nop

    TRACE_RETURN()
    return;
    // 0x801FA570: nop

;}
RECOMP_FUNC void func_801F3FC0_61F3A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F3FC0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801F3FC4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801F3FC8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801F3FCC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F3FD0: jal         0x801F76D0
    // 0x801F3FD4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    func_801F76D0_622AB0(rdram, ctx);
        goto after_0;
    // 0x801F3FD4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F3FD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F3FDC: jal         0x801D6508
    // 0x801F3FE0: lui         $a1, 0xBF00
    ctx->r5 = S32(0XBF00 << 16);
    func_801D6508_6018E8(rdram, ctx);
        goto after_1;
    // 0x801F3FE0: lui         $a1, 0xBF00
    ctx->r5 = S32(0XBF00 << 16);
    after_1:
    // 0x801F3FE4: addiu       $a0, $s0, 0x74
    ctx->r4 = ADD32(ctx->r16, 0X74);
    // 0x801F3FE8: jal         0x801D725C
    // 0x801F3FEC: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_801D725C_60263C(rdram, ctx);
        goto after_2;
    // 0x801F3FEC: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_2:
    // 0x801F3FF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F3FF4: jal         0x801D4408
    // 0x801F3FF8: lui         $a1, 0xC1A0
    ctx->r5 = S32(0XC1A0 << 16);
    func_801D4408_5FF7E8(rdram, ctx);
        goto after_3;
    // 0x801F3FF8: lui         $a1, 0xC1A0
    ctx->r5 = S32(0XC1A0 << 16);
    after_3:
    // 0x801F3FFC: sb          $v0, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r2;
    // 0x801F4000: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x801F4004: jal         0x801D2F40
    // 0x801F4008: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    func_801D2F40_5FE320(rdram, ctx);
        goto after_4;
    // 0x801F4008: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    after_4:
    // 0x801F400C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801F4010: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x801F4014: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x801F4018: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x801F401C: nop

    // 0x801F4020: bc1fl       L_801F40CC
    if (!c1cs) {
        // 0x801F4024: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_801F40CC;
    }
    goto skip_0;
    // 0x801F4024: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x801F4028: lwc1        $f6, 0x20($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X20);
    // 0x801F402C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801F4030: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F4034: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x801F4038: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801F403C: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x801F4040: jal         0x801D3B18
    // 0x801F4044: nop

    func_801D3B18_5FEEF8(rdram, ctx);
        goto after_5;
    // 0x801F4044: nop

    after_5:
    // 0x801F4048: beq         $v0, $zero, L_801F40C8
    if (ctx->r2 == 0) {
        // 0x801F404C: lbu         $t7, 0x2F($sp)
        ctx->r15 = MEM_BU(ctx->r29, 0X2F);
            goto L_801F40C8;
    }
    // 0x801F404C: lbu         $t7, 0x2F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X2F);
    // 0x801F4050: beq         $t7, $zero, L_801F40C8
    if (ctx->r15 == 0) {
        // 0x801F4054: lw          $a0, 0x34($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X34);
            goto L_801F40C8;
    }
    // 0x801F4054: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x801F4058: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F405C: jal         0x801D2EE4
    // 0x801F4060: addiu       $a1, $a1, -0x4D70
    ctx->r5 = ADD32(ctx->r5, -0X4D70);
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_6;
    // 0x801F4060: addiu       $a1, $a1, -0x4D70
    ctx->r5 = ADD32(ctx->r5, -0X4D70);
    after_6:
    // 0x801F4064: lui         $t9, 0x801
    ctx->r25 = S32(0X801 << 16);
    // 0x801F4068: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801F406C: addiu       $t9, $t9, -0x7A28
    ctx->r25 = ADD32(ctx->r25, -0X7A28);
    // 0x801F4070: addiu       $t0, $zero, 0x51
    ctx->r8 = ADD32(0, 0X51);
    // 0x801F4074: sb          $t8, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r24;
    // 0x801F4078: sw          $t9, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r25;
    // 0x801F407C: sb          $t0, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r8;
    // 0x801F4080: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x801F4084: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801F4088: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801F408C: lwc1        $f16, 0x20($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X20);
    // 0x801F4090: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F4094: ldc1        $f4, -0x1980($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X1980);
    // 0x801F4098: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801F409C: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x801F40A0: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x801F40A4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x801F40A8: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x801F40AC: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x801F40B0: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x801F40B4: jal         0x8000E39C
    // 0x801F40B8: nop

    func_8000E39C_EF9C(rdram, ctx);
        goto after_7;
    // 0x801F40B8: nop

    after_7:
    // 0x801F40BC: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F40C0: jal         0x8003521C
    // 0x801F40C4: addiu       $a0, $a0, 0x40DC
    ctx->r4 = ADD32(ctx->r4, 0X40DC);
    func_8003521C_35E1C(rdram, ctx);
        goto after_8;
    // 0x801F40C4: addiu       $a0, $a0, 0x40DC
    ctx->r4 = ADD32(ctx->r4, 0X40DC);
    after_8:
L_801F40C8:
    // 0x801F40C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801F40CC:
    // 0x801F40CC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801F40D0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801F40D4: jr          $ra
    // 0x801F40D8: nop

    TRACE_RETURN()
    return;
    // 0x801F40D8: nop

;}
RECOMP_FUNC void func_801ED800_618BE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801ED800: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801ED804: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801ED808: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801ED80C: lw          $v1, 0x7C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X7C);
    // 0x801ED810: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801ED814: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801ED818: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801ED81C: beq         $v1, $zero, L_801ED850
    if (ctx->r3 == 0) {
        // 0x801ED820: addiu       $v0, $v0, 0xA0
        ctx->r2 = ADD32(ctx->r2, 0XA0);
            goto L_801ED850;
    }
    // 0x801ED820: addiu       $v0, $v0, 0xA0
    ctx->r2 = ADD32(ctx->r2, 0XA0);
    // 0x801ED824: addiu       $t6, $v1, -0x1
    ctx->r14 = ADD32(ctx->r3, -0X1);
    // 0x801ED828: sw          $t6, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r14;
    // 0x801ED82C: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801ED830: lwc1        $f6, 0x90($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X90);
    // 0x801ED834: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x801ED838: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801ED83C: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
    // 0x801ED840: lwc1        $f16, 0x94($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X94);
    // 0x801ED844: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801ED848: b           L_801ED8C4
    // 0x801ED84C: swc1        $f18, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f18.u32l;
        goto L_801ED8C4;
    // 0x801ED84C: swc1        $f18, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f18.u32l;
L_801ED850:
    // 0x801ED850: lw          $v0, 0x80($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X80);
    // 0x801ED854: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x801ED858: addiu       $a0, $zero, 0x12E
    ctx->r4 = ADD32(0, 0X12E);
    // 0x801ED85C: bnel        $v0, $at, L_801ED878
    if (ctx->r2 != ctx->r1) {
        // 0x801ED860: addiu       $t7, $v0, -0x1
        ctx->r15 = ADD32(ctx->r2, -0X1);
            goto L_801ED878;
    }
    goto skip_0;
    // 0x801ED860: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    skip_0:
    // 0x801ED864: jal         0x80038BC8
    // 0x801ED868: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_80038BC8_397C8(rdram, ctx);
        goto after_0;
    // 0x801ED868: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x801ED86C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801ED870: lw          $v0, 0x80($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X80);
    // 0x801ED874: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
L_801ED878:
    // 0x801ED878: bgtz        $v0, L_801ED8C4
    if (SIGNED(ctx->r2) > 0) {
        // 0x801ED87C: sw          $t7, 0x80($a2)
        MEM_W(0X80, ctx->r6) = ctx->r15;
            goto L_801ED8C4;
    }
    // 0x801ED87C: sw          $t7, 0x80($a2)
    MEM_W(0X80, ctx->r6) = ctx->r15;
    // 0x801ED880: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x801ED884: lw          $t8, -0x1130($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1130);
    // 0x801ED888: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x801ED88C: addiu       $a1, $a1, 0x4A40
    ctx->r5 = ADD32(ctx->r5, 0X4A40);
    // 0x801ED890: lw          $a0, 0x1D8($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X1D8);
    // 0x801ED894: jal         0x8003522C
    // 0x801ED898: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_8003522C_35E2C(rdram, ctx);
        goto after_1;
    // 0x801ED898: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x801ED89C: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x801ED8A0: lw          $t0, -0x1130($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1130);
    // 0x801ED8A4: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801ED8A8: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x801ED8AC: addiu       $t1, $zero, 0x32
    ctx->r9 = ADD32(0, 0X32);
    // 0x801ED8B0: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801ED8B4: sb          $t9, 0x2C1($t0)
    MEM_B(0X2C1, ctx->r8) = ctx->r25;
    // 0x801ED8B8: addiu       $a0, $a0, -0x272C
    ctx->r4 = ADD32(ctx->r4, -0X272C);
    // 0x801ED8BC: jal         0x8003521C
    // 0x801ED8C0: sw          $t1, 0x7C($a2)
    MEM_W(0X7C, ctx->r6) = ctx->r9;
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801ED8C0: sw          $t1, 0x7C($a2)
    MEM_W(0X7C, ctx->r6) = ctx->r9;
    after_2:
L_801ED8C4:
    // 0x801ED8C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801ED8C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801ED8CC: jr          $ra
    // 0x801ED8D0: nop

    TRACE_RETURN()
    return;
    // 0x801ED8D0: nop

;}
RECOMP_FUNC void func_801D8D2C_60410C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D8D2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D8D30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D8D34: lwc1        $f4, 0x28($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X28);
    // 0x801D8D38: lwc1        $f6, 0x94($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X94);
    // 0x801D8D3C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D8D40: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801D8D44: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801D8D48: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801D8D4C: addiu       $a0, $a0, -0x7270
    ctx->r4 = ADD32(ctx->r4, -0X7270);
    // 0x801D8D50: swc1        $f8, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f8.u32l;
    // 0x801D8D54: lwc1        $f10, 0x28($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X28);
    // 0x801D8D58: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x801D8D5C: nop

    // 0x801D8D60: bc1f        L_801D8D78
    if (!c1cs) {
        // 0x801D8D64: nop
    
            goto L_801D8D78;
    }
    // 0x801D8D64: nop

    // 0x801D8D68: swc1        $f0, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f0.u32l;
    // 0x801D8D6C: jal         0x8003521C
    // 0x801D8D70: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x801D8D70: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x801D8D74: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
L_801D8D78:
    // 0x801D8D78: jal         0x801D9030
    // 0x801D8D7C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_801D9030_604410(rdram, ctx);
        goto after_1;
    // 0x801D8D7C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_1:
    // 0x801D8D80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D8D84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D8D88: jr          $ra
    // 0x801D8D8C: nop

    TRACE_RETURN()
    return;
    // 0x801D8D8C: nop

;}
RECOMP_FUNC void func_802061B8_631598(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802061B8: lui         $t2, 0x8021
    ctx->r10 = S32(0X8021 << 16);
    // 0x802061BC: addiu       $t2, $t2, -0x10C0
    ctx->r10 = ADD32(ctx->r10, -0X10C0);
    // 0x802061C0: lw          $t0, 0x0($t2)
    ctx->r8 = MEM_W(ctx->r10, 0X0);
    // 0x802061C4: lw          $t8, 0x90($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X90);
    // 0x802061C8: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x802061CC: lbu         $t7, 0x814($t0)
    ctx->r15 = MEM_BU(ctx->r8, 0X814);
    // 0x802061D0: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x802061D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802061D8: subu        $t9, $t7, $t8
    ctx->r25 = SUB32(ctx->r15, ctx->r24);
    // 0x802061DC: andi        $t3, $t9, 0x3F
    ctx->r11 = ctx->r25 & 0X3F;
    // 0x802061E0: sll         $t1, $t3, 5
    ctx->r9 = S32(ctx->r11 << 5);
    // 0x802061E4: lw          $v1, 0x1D8($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X1D8);
    // 0x802061E8: addu        $t4, $t0, $t1
    ctx->r12 = ADD32(ctx->r8, ctx->r9);
    // 0x802061EC: lwc1        $f4, 0x14($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X14);
    // 0x802061F0: lw          $a2, 0x18($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X18);
    // 0x802061F4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x802061F8: swc1        $f4, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f4.u32l;
    // 0x802061FC: lw          $t5, 0x0($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X0);
    // 0x80206200: lwc1        $f10, 0x8($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80206204: addu        $t6, $t5, $t1
    ctx->r14 = ADD32(ctx->r13, ctx->r9);
    // 0x80206208: lwc1        $f6, 0x18($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X18);
    // 0x8020620C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80206210: swc1        $f6, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f6.u32l;
    // 0x80206214: lw          $t7, 0x0($t2)
    ctx->r15 = MEM_W(ctx->r10, 0X0);
    // 0x80206218: addu        $t8, $t7, $t1
    ctx->r24 = ADD32(ctx->r15, ctx->r9);
    // 0x8020621C: lwc1        $f8, 0x1C($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80206220: swc1        $f8, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f8.u32l;
    // 0x80206224: lwc1        $f16, 0x8($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X8);
    // 0x80206228: c.eq.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl == ctx->f16.fl;
    // 0x8020622C: nop

    // 0x80206230: bc1fl       L_80206270
    if (!c1cs) {
        // 0x80206234: lw          $t9, 0x0($t2)
        ctx->r25 = MEM_W(ctx->r10, 0X0);
            goto L_80206270;
    }
    goto skip_0;
    // 0x80206234: lw          $t9, 0x0($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X0);
    skip_0:
    // 0x80206238: lwc1        $f18, 0xC($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0XC);
    // 0x8020623C: lwc1        $f4, 0xC($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0XC);
    // 0x80206240: c.eq.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl == ctx->f4.fl;
    // 0x80206244: nop

    // 0x80206248: bc1fl       L_80206270
    if (!c1cs) {
        // 0x8020624C: lw          $t9, 0x0($t2)
        ctx->r25 = MEM_W(ctx->r10, 0X0);
            goto L_80206270;
    }
    goto skip_1;
    // 0x8020624C: lw          $t9, 0x0($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X0);
    skip_1:
    // 0x80206250: lwc1        $f6, 0x10($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X10);
    // 0x80206254: lwc1        $f8, 0x10($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X10);
    // 0x80206258: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x8020625C: nop

    // 0x80206260: bc1fl       L_80206270
    if (!c1cs) {
        // 0x80206264: lw          $t9, 0x0($t2)
        ctx->r25 = MEM_W(ctx->r10, 0X0);
            goto L_80206270;
    }
    goto skip_2;
    // 0x80206264: lw          $t9, 0x0($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X0);
    skip_2:
    // 0x80206268: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8020626C: lw          $t9, 0x0($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X0);
L_80206270:
    // 0x80206270: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x80206274: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80206278: addu        $t3, $t9, $t1
    ctx->r11 = ADD32(ctx->r25, ctx->r9);
    // 0x8020627C: lwc1        $f10, 0x20($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X20);
    // 0x80206280: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80206284: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80206288: nop

    // 0x8020628C: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x80206290: beql        $t5, $zero, L_802062E0
    if (ctx->r13 == 0) {
        // 0x80206294: mfc1        $t5, $f16
        ctx->r13 = (int32_t)ctx->f16.u32l;
            goto L_802062E0;
    }
    goto skip_3;
    // 0x80206294: mfc1        $t5, $f16
    ctx->r13 = (int32_t)ctx->f16.u32l;
    skip_3:
    // 0x80206298: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8020629C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x802062A0: sub.s       $f16, $f10, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x802062A4: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x802062A8: nop

    // 0x802062AC: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x802062B0: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x802062B4: nop

    // 0x802062B8: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x802062BC: bne         $t5, $zero, L_802062D4
    if (ctx->r13 != 0) {
        // 0x802062C0: nop
    
            goto L_802062D4;
    }
    // 0x802062C0: nop

    // 0x802062C4: mfc1        $t5, $f16
    ctx->r13 = (int32_t)ctx->f16.u32l;
    // 0x802062C8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802062CC: b           L_802062EC
    // 0x802062D0: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_802062EC;
    // 0x802062D0: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_802062D4:
    // 0x802062D4: b           L_802062EC
    // 0x802062D8: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_802062EC;
    // 0x802062D8: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x802062DC: mfc1        $t5, $f16
    ctx->r13 = (int32_t)ctx->f16.u32l;
L_802062E0:
    // 0x802062E0: nop

    // 0x802062E4: bltz        $t5, L_802062D4
    if (SIGNED(ctx->r13) < 0) {
        // 0x802062E8: nop
    
            goto L_802062D4;
    }
    // 0x802062E8: nop

L_802062EC:
    // 0x802062EC: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x802062F0: sh          $t5, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r13;
    // 0x802062F4: lw          $t6, 0x0($t2)
    ctx->r14 = MEM_W(ctx->r10, 0X0);
    // 0x802062F8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802062FC: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80206300: addu        $t7, $t6, $t1
    ctx->r15 = ADD32(ctx->r14, ctx->r9);
    // 0x80206304: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80206308: lwc1        $f18, 0x24($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X24);
    // 0x8020630C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80206310: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x80206314: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80206318: nop

    // 0x8020631C: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x80206320: beql        $t9, $zero, L_80206370
    if (ctx->r25 == 0) {
        // 0x80206324: mfc1        $t9, $f4
        ctx->r25 = (int32_t)ctx->f4.u32l;
            goto L_80206370;
    }
    goto skip_4;
    // 0x80206324: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    skip_4:
    // 0x80206328: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020632C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80206330: sub.s       $f4, $f18, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80206334: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80206338: nop

    // 0x8020633C: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80206340: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80206344: nop

    // 0x80206348: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x8020634C: bne         $t9, $zero, L_80206364
    if (ctx->r25 != 0) {
        // 0x80206350: nop
    
            goto L_80206364;
    }
    // 0x80206350: nop

    // 0x80206354: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x80206358: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020635C: b           L_8020637C
    // 0x80206360: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_8020637C;
    // 0x80206360: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_80206364:
    // 0x80206364: b           L_8020637C
    // 0x80206368: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_8020637C;
    // 0x80206368: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x8020636C: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
L_80206370:
    // 0x80206370: nop

    // 0x80206374: bltz        $t9, L_80206364
    if (SIGNED(ctx->r25) < 0) {
        // 0x80206378: nop
    
            goto L_80206364;
    }
    // 0x80206378: nop

L_8020637C:
    // 0x8020637C: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80206380: sh          $t9, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r25;
    // 0x80206384: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x80206388: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8020638C: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80206390: addu        $t4, $t3, $t1
    ctx->r12 = ADD32(ctx->r11, ctx->r9);
    // 0x80206394: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80206398: lwc1        $f6, 0x28($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X28);
    // 0x8020639C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x802063A0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802063A4: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x802063A8: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x802063AC: nop

    // 0x802063B0: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x802063B4: beql        $t6, $zero, L_80206404
    if (ctx->r14 == 0) {
        // 0x802063B8: mfc1        $t6, $f8
        ctx->r14 = (int32_t)ctx->f8.u32l;
            goto L_80206404;
    }
    goto skip_5;
    // 0x802063B8: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    skip_5:
    // 0x802063BC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802063C0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802063C4: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x802063C8: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x802063CC: nop

    // 0x802063D0: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x802063D4: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x802063D8: nop

    // 0x802063DC: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x802063E0: bne         $t6, $zero, L_802063F8
    if (ctx->r14 != 0) {
        // 0x802063E4: nop
    
            goto L_802063F8;
    }
    // 0x802063E4: nop

    // 0x802063E8: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x802063EC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802063F0: b           L_80206410
    // 0x802063F4: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
        goto L_80206410;
    // 0x802063F4: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
L_802063F8:
    // 0x802063F8: b           L_80206410
    // 0x802063FC: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
        goto L_80206410;
    // 0x802063FC: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x80206400: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
L_80206404:
    // 0x80206404: nop

    // 0x80206408: bltz        $t6, L_802063F8
    if (SIGNED(ctx->r14) < 0) {
        // 0x8020640C: nop
    
            goto L_802063F8;
    }
    // 0x8020640C: nop

L_80206410:
    // 0x80206410: sh          $t6, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r14;
    // 0x80206414: lwc1        $f10, 0x1C($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X1C);
    // 0x80206418: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8020641C: swc1        $f10, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f10.u32l;
    // 0x80206420: lwc1        $f16, 0x20($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X20);
    // 0x80206424: swc1        $f16, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f16.u32l;
    // 0x80206428: lwc1        $f18, 0x24($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X24);
    // 0x8020642C: swc1        $f18, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f18.u32l;
    // 0x80206430: lw          $t0, 0x0($t2)
    ctx->r8 = MEM_W(ctx->r10, 0X0);
    // 0x80206434: lbu         $t7, 0x815($t0)
    ctx->r15 = MEM_BU(ctx->r8, 0X815);
    // 0x80206438: beql        $t7, $zero, L_8020644C
    if (ctx->r15 == 0) {
        // 0x8020643C: mtc1        $zero, $f4
        ctx->f4.u32l = 0;
            goto L_8020644C;
    }
    goto skip_6;
    // 0x8020643C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    skip_6:
    // 0x80206440: beq         $v0, $zero, L_8020645C
    if (ctx->r2 == 0) {
        // 0x80206444: addu        $t9, $t0, $t1
        ctx->r25 = ADD32(ctx->r8, ctx->r9);
            goto L_8020645C;
    }
    // 0x80206444: addu        $t9, $t0, $t1
    ctx->r25 = ADD32(ctx->r8, ctx->r9);
    // 0x80206448: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
L_8020644C:
    // 0x8020644C: sw          $zero, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = 0;
    // 0x80206450: sb          $t8, 0x64($a1)
    MEM_B(0X64, ctx->r5) = ctx->r24;
    // 0x80206454: jr          $ra
    // 0x80206458: swc1        $f4, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x80206458: swc1        $f4, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f4.u32l;
L_8020645C:
    // 0x8020645C: lw          $t3, 0x2C($t9)
    ctx->r11 = MEM_W(ctx->r25, 0X2C);
    // 0x80206460: sw          $t3, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r11;
    // 0x80206464: lw          $t4, 0x0($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X0);
    // 0x80206468: addu        $t5, $t4, $t1
    ctx->r13 = ADD32(ctx->r12, ctx->r9);
    // 0x8020646C: lwc1        $f6, 0x30($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X30);
    // 0x80206470: sb          $zero, 0x64($a1)
    MEM_B(0X64, ctx->r5) = 0;
    // 0x80206474: swc1        $f6, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f6.u32l;
    // 0x80206478: jr          $ra
    // 0x8020647C: nop

    TRACE_RETURN()
    return;
    // 0x8020647C: nop

;}
RECOMP_FUNC void func_801EB180_616560(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EB180: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801EB184: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801EB188: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801EB18C: lw          $a3, 0x94($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X94);
    // 0x801EB190: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x801EB194: bne         $v0, $a3, L_801EB1C4
    if (ctx->r2 != ctx->r7) {
        // 0x801EB198: addiu       $t9, $a3, 0xA
        ctx->r25 = ADD32(ctx->r7, 0XA);
            goto L_801EB1C4;
    }
    // 0x801EB198: addiu       $t9, $a3, 0xA
    ctx->r25 = ADD32(ctx->r7, 0XA);
    // 0x801EB19C: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x801EB1A0: addiu       $t7, $t6, -0x5
    ctx->r15 = ADD32(ctx->r14, -0X5);
    // 0x801EB1A4: bgtz        $t7, L_801EB1BC
    if (SIGNED(ctx->r15) > 0) {
        // 0x801EB1A8: sw          $t7, 0x90($a0)
        MEM_W(0X90, ctx->r4) = ctx->r15;
            goto L_801EB1BC;
    }
    // 0x801EB1A8: sw          $t7, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r15;
    // 0x801EB1AC: sw          $zero, 0x90($a0)
    MEM_W(0X90, ctx->r4) = 0;
    // 0x801EB1B0: jal         0x80034ED4
    // 0x801EB1B4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_80034ED4_35AD4(rdram, ctx);
        goto after_0;
    // 0x801EB1B4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x801EB1B8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_801EB1BC:
    // 0x801EB1BC: b           L_801EB1DC
    // 0x801EB1C0: lw          $a3, 0x94($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X94);
        goto L_801EB1DC;
    // 0x801EB1C0: lw          $a3, 0x94($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X94);
L_801EB1C4:
    // 0x801EB1C4: slti        $at, $t9, 0xFF
    ctx->r1 = SIGNED(ctx->r25) < 0XFF ? 1 : 0;
    // 0x801EB1C8: sw          $t9, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->r25;
    // 0x801EB1CC: bne         $at, $zero, L_801EB1DC
    if (ctx->r1 != 0) {
        // 0x801EB1D0: or          $a3, $t9, $zero
        ctx->r7 = ctx->r25 | 0;
            goto L_801EB1DC;
    }
    // 0x801EB1D0: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
    // 0x801EB1D4: sw          $v0, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->r2;
    // 0x801EB1D8: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
L_801EB1DC:
    // 0x801EB1DC: sw          $a3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r7;
    // 0x801EB1E0: lw          $t0, 0x90($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X90);
    // 0x801EB1E4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801EB1E8: addiu       $a1, $a1, -0x5BF8
    ctx->r5 = ADD32(ctx->r5, -0X5BF8);
    // 0x801EB1EC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x801EB1F0: jal         0x8000DF10
    // 0x801EB1F4: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    func_8000DF10_EB10(rdram, ctx);
        goto after_1;
    // 0x801EB1F4: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_1:
    // 0x801EB1F8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801EB1FC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x801EB200: or          $t1, $v0, $at
    ctx->r9 = ctx->r2 | ctx->r1;
    // 0x801EB204: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801EB208: or          $t2, $t1, $at
    ctx->r10 = ctx->r9 | ctx->r1;
    // 0x801EB20C: sw          $t2, 0x30($t3)
    MEM_W(0X30, ctx->r11) = ctx->r10;
    // 0x801EB210: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801EB214: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801EB218: jr          $ra
    // 0x801EB21C: nop

    TRACE_RETURN()
    return;
    // 0x801EB21C: nop

;}
RECOMP_FUNC void func_801DF9E8_60ADC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DF9E8: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801DF9EC: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801DF9F0: lw          $a2, -0x1130($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X1130);
    // 0x801DF9F4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801DF9F8: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x801DF9FC: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x801DFA00: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x801DFA04: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DFA08: lwc1        $f4, 0x4($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X4);
    // 0x801DFA0C: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
    // 0x801DFA10: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801DFA14: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801DFA18: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x801DFA1C: sw          $a2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r6;
    // 0x801DFA20: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x801DFA24: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x801DFA28: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x801DFA2C: nop

    // 0x801DFA30: addiu       $t0, $t9, 0x100
    ctx->r8 = ADD32(ctx->r25, 0X100);
    // 0x801DFA34: jal         0x8000DD58
    // 0x801DFA38: sh          $t0, 0x4A($sp)
    MEM_H(0X4A, ctx->r29) = ctx->r8;
    func_8000DD58_E958(rdram, ctx);
        goto after_0;
    // 0x801DFA38: sh          $t0, 0x4A($sp)
    MEM_H(0X4A, ctx->r29) = ctx->r8;
    after_0:
    // 0x801DFA3C: lh          $t1, 0x4A($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X4A);
    // 0x801DFA40: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    // 0x801DFA44: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x801DFA48: addu        $t2, $t1, $v0
    ctx->r10 = ADD32(ctx->r9, ctx->r2);
    // 0x801DFA4C: addiu       $t3, $t2, -0x14
    ctx->r11 = ADD32(ctx->r10, -0X14);
    // 0x801DFA50: sh          $t3, 0x4A($sp)
    MEM_H(0X4A, ctx->r29) = ctx->r11;
    // 0x801DFA54: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DFA58: lwc1        $f4, 0x8($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X8);
    // 0x801DFA5C: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
    // 0x801DFA60: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801DFA64: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801DFA68: addiu       $t8, $zero, 0x400
    ctx->r24 = ADD32(0, 0X400);
    // 0x801DFA6C: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x801DFA70: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x801DFA74: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x801DFA78: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    // 0x801DFA7C: nop

    // 0x801DFA80: subu        $t0, $t8, $t7
    ctx->r8 = SUB32(ctx->r24, ctx->r15);
    // 0x801DFA84: jal         0x8000DD58
    // 0x801DFA88: sh          $t0, 0x48($sp)
    MEM_H(0X48, ctx->r29) = ctx->r8;
    func_8000DD58_E958(rdram, ctx);
        goto after_1;
    // 0x801DFA88: sh          $t0, 0x48($sp)
    MEM_H(0X48, ctx->r29) = ctx->r8;
    after_1:
    // 0x801DFA8C: lh          $v1, 0x48($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X48);
    // 0x801DFA90: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x801DFA94: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801DFA98: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x801DFA9C: addiu       $t2, $v1, -0xA
    ctx->r10 = ADD32(ctx->r3, -0XA);
    // 0x801DFAA0: addiu       $t3, $sp, 0x40
    ctx->r11 = ADD32(ctx->r29, 0X40);
    // 0x801DFAA4: addiu       $t4, $sp, 0x3C
    ctx->r12 = ADD32(ctx->r29, 0X3C);
    // 0x801DFAA8: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x801DFAAC: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x801DFAB0: andi        $a1, $t2, 0xFFFF
    ctx->r5 = ctx->r10 & 0XFFFF;
    // 0x801DFAB4: lhu         $a2, 0x4A($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X4A);
    // 0x801DFAB8: jal         0x8000E68C
    // 0x801DFABC: addiu       $a3, $sp, 0x44
    ctx->r7 = ADD32(ctx->r29, 0X44);
    func_8000E68C_F28C(rdram, ctx);
        goto after_2;
    // 0x801DFABC: addiu       $a3, $sp, 0x44
    ctx->r7 = ADD32(ctx->r29, 0X44);
    after_2:
    // 0x801DFAC0: jal         0x8000DD58
    // 0x801DFAC4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_8000DD58_E958(rdram, ctx);
        goto after_3;
    // 0x801DFAC4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_3:
    // 0x801DFAC8: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x801DFACC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801DFAD0: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801DFAD4: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x801DFAD8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801DFADC: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x801DFAE0: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x801DFAE4: cvt.s.d     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f0.fl = CVT_S_D(ctx->f10.d);
    // 0x801DFAE8: jal         0x8000DD58
    // 0x801DFAEC: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    func_8000DD58_E958(rdram, ctx);
        goto after_4;
    // 0x801DFAEC: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x801DFAF0: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x801DFAF4: lui         $at, 0x4008
    ctx->r1 = S32(0X4008 << 16);
    // 0x801DFAF8: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x801DFAFC: cvt.d.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.d = CVT_D_W(ctx->f16.u32l);
    // 0x801DFB00: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801DFB04: lbu         $t5, 0x57($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X57);
    // 0x801DFB08: lui         $a1, 0x3ECC
    ctx->r5 = S32(0X3ECC << 16);
    // 0x801DFB0C: lwc1        $f0, 0x34($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801DFB10: sub.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d - ctx->f4.d;
    // 0x801DFB14: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x801DFB18: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x801DFB1C: bne         $t5, $zero, L_801DFB5C
    if (ctx->r13 != 0) {
        // 0x801DFB20: cvt.s.d     $f2, $f6
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f2.fl = CVT_S_D(ctx->f6.d);
            goto L_801DFB5C;
    }
    // 0x801DFB20: cvt.s.d     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f2.fl = CVT_S_D(ctx->f6.d);
    // 0x801DFB24: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801DFB28: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801DFB2C: lui         $a1, 0x3ECC
    ctx->r5 = S32(0X3ECC << 16);
    // 0x801DFB30: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x801DFB34: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x801DFB38: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x801DFB3C: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x801DFB40: swc1        $f2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f2.u32l;
    // 0x801DFB44: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x801DFB48: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x801DFB4C: jal         0x801E1C4C
    // 0x801DFB50: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    func_801E1C4C_60D02C(rdram, ctx);
        goto after_5;
    // 0x801DFB50: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    after_5:
    // 0x801DFB54: b           L_801DFB84
    // 0x801DFB58: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801DFB84;
    // 0x801DFB58: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801DFB5C:
    // 0x801DFB5C: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801DFB60: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801DFB64: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x801DFB68: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x801DFB6C: swc1        $f2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f2.u32l;
    // 0x801DFB70: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x801DFB74: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x801DFB78: jal         0x801E1D38
    // 0x801DFB7C: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    func_801E1D38_60D118(rdram, ctx);
        goto after_6;
    // 0x801DFB7C: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    after_6:
    // 0x801DFB80: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801DFB84:
    // 0x801DFB84: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x801DFB88: jr          $ra
    // 0x801DFB8C: nop

    TRACE_RETURN()
    return;
    // 0x801DFB8C: nop

;}
RECOMP_FUNC void func_801D54E0_6008C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D54E0: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x801D54E4: lw          $v1, -0x3A38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A38);
    // 0x801D54E8: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801D54EC: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801D54F0: addu        $v1, $v1, $at
    ctx->r3 = ADD32(ctx->r3, ctx->r1);
    // 0x801D54F4: lhu         $a0, 0x307A($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X307A);
    // 0x801D54F8: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D54FC: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801D5500: andi        $t6, $a0, 0x800
    ctx->r14 = ctx->r4 & 0X800;
    // 0x801D5504: beq         $t6, $zero, L_801D5538
    if (ctx->r14 == 0) {
        // 0x801D5508: addiu       $v0, $v0, 0xA0
        ctx->r2 = ADD32(ctx->r2, 0XA0);
            goto L_801D5538;
    }
    // 0x801D5508: addiu       $v0, $v0, 0xA0
    ctx->r2 = ADD32(ctx->r2, 0XA0);
    // 0x801D550C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801D5510: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801D5514: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x801D5518: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x801D551C: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801D5520: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x801D5524: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801D5528: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
    // 0x801D552C: lw          $v1, -0x3A38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A38);
    // 0x801D5530: addu        $v1, $v1, $at
    ctx->r3 = ADD32(ctx->r3, ctx->r1);
    // 0x801D5534: lhu         $a0, 0x307A($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X307A);
L_801D5538:
    // 0x801D5538: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801D553C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801D5540: andi        $t7, $a0, 0x400
    ctx->r15 = ctx->r4 & 0X400;
    // 0x801D5544: beql        $t7, $zero, L_801D5574
    if (ctx->r15 == 0) {
        // 0x801D5548: andi        $t8, $a0, 0x100
        ctx->r24 = ctx->r4 & 0X100;
            goto L_801D5574;
    }
    goto skip_0;
    // 0x801D5548: andi        $t8, $a0, 0x100
    ctx->r24 = ctx->r4 & 0X100;
    skip_0:
    // 0x801D554C: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x801D5550: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x801D5554: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801D5558: sub.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x801D555C: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801D5560: swc1        $f10, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f10.u32l;
    // 0x801D5564: lw          $v1, -0x3A38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A38);
    // 0x801D5568: addu        $v1, $v1, $at
    ctx->r3 = ADD32(ctx->r3, ctx->r1);
    // 0x801D556C: lhu         $a0, 0x307A($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X307A);
    // 0x801D5570: andi        $t8, $a0, 0x100
    ctx->r24 = ctx->r4 & 0X100;
L_801D5574:
    // 0x801D5574: beql        $t8, $zero, L_801D55A4
    if (ctx->r24 == 0) {
        // 0x801D5578: andi        $t9, $a0, 0x200
        ctx->r25 = ctx->r4 & 0X200;
            goto L_801D55A4;
    }
    goto skip_1;
    // 0x801D5578: andi        $t9, $a0, 0x200
    ctx->r25 = ctx->r4 & 0X200;
    skip_1:
    // 0x801D557C: lwc1        $f16, 0x0($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X0);
    // 0x801D5580: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x801D5584: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801D5588: add.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x801D558C: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801D5590: swc1        $f18, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f18.u32l;
    // 0x801D5594: lw          $v1, -0x3A38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A38);
    // 0x801D5598: addu        $v1, $v1, $at
    ctx->r3 = ADD32(ctx->r3, ctx->r1);
    // 0x801D559C: lhu         $a0, 0x307A($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X307A);
    // 0x801D55A0: andi        $t9, $a0, 0x200
    ctx->r25 = ctx->r4 & 0X200;
L_801D55A4:
    // 0x801D55A4: beql        $t9, $zero, L_801D55D4
    if (ctx->r25 == 0) {
        // 0x801D55A8: andi        $t0, $a0, 0x10
        ctx->r8 = ctx->r4 & 0X10;
            goto L_801D55D4;
    }
    goto skip_2;
    // 0x801D55A8: andi        $t0, $a0, 0x10
    ctx->r8 = ctx->r4 & 0X10;
    skip_2:
    // 0x801D55AC: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x801D55B0: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x801D55B4: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801D55B8: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x801D55BC: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801D55C0: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
    // 0x801D55C4: lw          $v1, -0x3A38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A38);
    // 0x801D55C8: addu        $v1, $v1, $at
    ctx->r3 = ADD32(ctx->r3, ctx->r1);
    // 0x801D55CC: lhu         $a0, 0x307A($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X307A);
    // 0x801D55D0: andi        $t0, $a0, 0x10
    ctx->r8 = ctx->r4 & 0X10;
L_801D55D4:
    // 0x801D55D4: beql        $t0, $zero, L_801D5604
    if (ctx->r8 == 0) {
        // 0x801D55D8: andi        $t1, $a0, 0x20
        ctx->r9 = ctx->r4 & 0X20;
            goto L_801D5604;
    }
    goto skip_3;
    // 0x801D55D8: andi        $t1, $a0, 0x20
    ctx->r9 = ctx->r4 & 0X20;
    skip_3:
    // 0x801D55DC: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801D55E0: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x801D55E4: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801D55E8: sub.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x801D55EC: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801D55F0: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
    // 0x801D55F4: lw          $v1, -0x3A38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A38);
    // 0x801D55F8: addu        $v1, $v1, $at
    ctx->r3 = ADD32(ctx->r3, ctx->r1);
    // 0x801D55FC: lhu         $a0, 0x307A($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X307A);
    // 0x801D5600: andi        $t1, $a0, 0x20
    ctx->r9 = ctx->r4 & 0X20;
L_801D5604:
    // 0x801D5604: beql        $t1, $zero, L_801D5630
    if (ctx->r9 == 0) {
        // 0x801D5608: lhu         $a0, 0x30C2($v1)
        ctx->r4 = MEM_HU(ctx->r3, 0X30C2);
            goto L_801D5630;
    }
    goto skip_4;
    // 0x801D5608: lhu         $a0, 0x30C2($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X30C2);
    skip_4:
    // 0x801D560C: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801D5610: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x801D5614: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801D5618: add.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x801D561C: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801D5620: swc1        $f18, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f18.u32l;
    // 0x801D5624: lw          $v1, -0x3A38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A38);
    // 0x801D5628: addu        $v1, $v1, $at
    ctx->r3 = ADD32(ctx->r3, ctx->r1);
    // 0x801D562C: lhu         $a0, 0x30C2($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X30C2);
L_801D5630:
    // 0x801D5630: andi        $t2, $a0, 0x800
    ctx->r10 = ctx->r4 & 0X800;
    // 0x801D5634: beql        $t2, $zero, L_801D5660
    if (ctx->r10 == 0) {
        // 0x801D5638: andi        $t4, $a0, 0x400
        ctx->r12 = ctx->r4 & 0X400;
            goto L_801D5660;
    }
    goto skip_5;
    // 0x801D5638: andi        $t4, $a0, 0x400
    ctx->r12 = ctx->r4 & 0X400;
    skip_5:
    // 0x801D563C: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801D5640: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x801D5644: lui         $a0, 0x4
    ctx->r4 = S32(0X4 << 16);
    // 0x801D5648: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x801D564C: swc1        $f6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f6.u32l;
    // 0x801D5650: lw          $t3, -0x3A38($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X3A38);
    // 0x801D5654: addu        $a0, $a0, $t3
    ctx->r4 = ADD32(ctx->r4, ctx->r11);
    // 0x801D5658: lhu         $a0, -0x4F3E($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X4F3E);
    // 0x801D565C: andi        $t4, $a0, 0x400
    ctx->r12 = ctx->r4 & 0X400;
L_801D5660:
    // 0x801D5660: beql        $t4, $zero, L_801D568C
    if (ctx->r12 == 0) {
        // 0x801D5664: andi        $t6, $a0, 0x100
        ctx->r14 = ctx->r4 & 0X100;
            goto L_801D568C;
    }
    goto skip_6;
    // 0x801D5664: andi        $t6, $a0, 0x100
    ctx->r14 = ctx->r4 & 0X100;
    skip_6:
    // 0x801D5668: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801D566C: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x801D5670: lui         $a0, 0x4
    ctx->r4 = S32(0X4 << 16);
    // 0x801D5674: sub.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x801D5678: swc1        $f10, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f10.u32l;
    // 0x801D567C: lw          $t5, -0x3A38($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X3A38);
    // 0x801D5680: addu        $a0, $a0, $t5
    ctx->r4 = ADD32(ctx->r4, ctx->r13);
    // 0x801D5684: lhu         $a0, -0x4F3E($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X4F3E);
    // 0x801D5688: andi        $t6, $a0, 0x100
    ctx->r14 = ctx->r4 & 0X100;
L_801D568C:
    // 0x801D568C: beql        $t6, $zero, L_801D56B8
    if (ctx->r14 == 0) {
        // 0x801D5690: andi        $t8, $a0, 0x200
        ctx->r24 = ctx->r4 & 0X200;
            goto L_801D56B8;
    }
    goto skip_7;
    // 0x801D5690: andi        $t8, $a0, 0x200
    ctx->r24 = ctx->r4 & 0X200;
    skip_7:
    // 0x801D5694: lwc1        $f16, 0xC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801D5698: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x801D569C: lui         $a0, 0x4
    ctx->r4 = S32(0X4 << 16);
    // 0x801D56A0: add.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x801D56A4: swc1        $f18, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f18.u32l;
    // 0x801D56A8: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x801D56AC: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x801D56B0: lhu         $a0, -0x4F3E($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X4F3E);
    // 0x801D56B4: andi        $t8, $a0, 0x200
    ctx->r24 = ctx->r4 & 0X200;
L_801D56B8:
    // 0x801D56B8: beql        $t8, $zero, L_801D56E4
    if (ctx->r24 == 0) {
        // 0x801D56BC: andi        $t0, $a0, 0x10
        ctx->r8 = ctx->r4 & 0X10;
            goto L_801D56E4;
    }
    goto skip_8;
    // 0x801D56BC: andi        $t0, $a0, 0x10
    ctx->r8 = ctx->r4 & 0X10;
    skip_8:
    // 0x801D56C0: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801D56C4: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x801D56C8: lui         $a0, 0x4
    ctx->r4 = S32(0X4 << 16);
    // 0x801D56CC: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x801D56D0: swc1        $f6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f6.u32l;
    // 0x801D56D4: lw          $t9, -0x3A38($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3A38);
    // 0x801D56D8: addu        $a0, $a0, $t9
    ctx->r4 = ADD32(ctx->r4, ctx->r25);
    // 0x801D56DC: lhu         $a0, -0x4F3E($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X4F3E);
    // 0x801D56E0: andi        $t0, $a0, 0x10
    ctx->r8 = ctx->r4 & 0X10;
L_801D56E4:
    // 0x801D56E4: beql        $t0, $zero, L_801D5710
    if (ctx->r8 == 0) {
        // 0x801D56E8: andi        $t2, $a0, 0x20
        ctx->r10 = ctx->r4 & 0X20;
            goto L_801D5710;
    }
    goto skip_9;
    // 0x801D56E8: andi        $t2, $a0, 0x20
    ctx->r10 = ctx->r4 & 0X20;
    skip_9:
    // 0x801D56EC: lwc1        $f8, 0x14($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X14);
    // 0x801D56F0: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x801D56F4: lui         $a0, 0x4
    ctx->r4 = S32(0X4 << 16);
    // 0x801D56F8: sub.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x801D56FC: swc1        $f10, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f10.u32l;
    // 0x801D5700: lw          $t1, -0x3A38($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X3A38);
    // 0x801D5704: addu        $a0, $a0, $t1
    ctx->r4 = ADD32(ctx->r4, ctx->r9);
    // 0x801D5708: lhu         $a0, -0x4F3E($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X4F3E);
    // 0x801D570C: andi        $t2, $a0, 0x20
    ctx->r10 = ctx->r4 & 0X20;
L_801D5710:
    // 0x801D5710: beq         $t2, $zero, L_801D5724
    if (ctx->r10 == 0) {
        // 0x801D5714: nop
    
            goto L_801D5724;
    }
    // 0x801D5714: nop

    // 0x801D5718: lwc1        $f16, 0x14($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X14);
    // 0x801D571C: add.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x801D5720: swc1        $f18, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f18.u32l;
L_801D5724:
    // 0x801D5724: jr          $ra
    // 0x801D5728: nop

    TRACE_RETURN()
    return;
    // 0x801D5728: nop

;}
RECOMP_FUNC void func_801EC1E0_6175C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EC1E0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801EC1E4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801EC1E8: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x801EC1EC: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x801EC1F0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801EC1F4: jal         0x801D614C
    // 0x801EC1F8: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    func_801D614C_60152C(rdram, ctx);
        goto after_0;
    // 0x801EC1F8: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    after_0:
    // 0x801EC1FC: lw          $t6, 0x94($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X94);
    // 0x801EC200: lw          $a1, 0x70($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X70);
    // 0x801EC204: lw          $a2, 0x74($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X74);
    // 0x801EC208: addiu       $t7, $t6, 0x4
    ctx->r15 = ADD32(ctx->r14, 0X4);
    // 0x801EC20C: sw          $t7, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r15;
    // 0x801EC210: lw          $a3, 0x78($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X78);
    // 0x801EC214: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x801EC218: jal         0x8000EE50
    // 0x801EC21C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8000EE50_FA50(rdram, ctx);
        goto after_1;
    // 0x801EC21C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x801EC220: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801EC224: lwc1        $f4, 0x78($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X78);
    // 0x801EC228: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x801EC22C: nop

    // 0x801EC230: bc1fl       L_801EC25C
    if (!c1cs) {
        // 0x801EC234: lwc1        $f6, 0x10($s1)
        ctx->f6.u32l = MEM_W(ctx->r17, 0X10);
            goto L_801EC25C;
    }
    goto skip_0;
    // 0x801EC234: lwc1        $f6, 0x10($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X10);
    skip_0:
    // 0x801EC238: lw          $t9, 0x7C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X7C);
    // 0x801EC23C: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x801EC240: bgez        $t0, L_801EC258
    if (SIGNED(ctx->r8) >= 0) {
        // 0x801EC244: sw          $t0, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r8;
            goto L_801EC258;
    }
    // 0x801EC244: sw          $t0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r8;
    // 0x801EC248: jal         0x80035020
    // 0x801EC24C: nop

    func_80035020_35C20(rdram, ctx);
        goto after_2;
    // 0x801EC24C: nop

    after_2:
    // 0x801EC250: b           L_801EC2E0
    // 0x801EC254: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_801EC2E0;
    // 0x801EC254: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_801EC258:
    // 0x801EC258: lwc1        $f6, 0x10($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X10);
L_801EC25C:
    // 0x801EC25C: c.le.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl <= ctx->f6.fl;
    // 0x801EC260: nop

    // 0x801EC264: bc1f        L_801EC27C
    if (!c1cs) {
        // 0x801EC268: nop
    
            goto L_801EC27C;
    }
    // 0x801EC268: nop

    // 0x801EC26C: jal         0x80034ED4
    // 0x801EC270: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_3;
    // 0x801EC270: nop

    after_3:
    // 0x801EC274: b           L_801EC2E0
    // 0x801EC278: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_801EC2E0;
    // 0x801EC278: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_801EC27C:
    // 0x801EC27C: jal         0x801D365C
    // 0x801EC280: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D365C_5FEA3C(rdram, ctx);
        goto after_4;
    // 0x801EC280: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x801EC284: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801EC288: bnel        $v0, $zero, L_801EC2A4
    if (ctx->r2 != 0) {
        // 0x801EC28C: lui         $at, 0x4040
        ctx->r1 = S32(0X4040 << 16);
            goto L_801EC2A4;
    }
    goto skip_1;
    // 0x801EC28C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    skip_1:
    // 0x801EC290: jal         0x801D36CC
    // 0x801EC294: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D36CC_5FEAAC(rdram, ctx);
        goto after_5;
    // 0x801EC294: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x801EC298: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801EC29C: beq         $v0, $zero, L_801EC2DC
    if (ctx->r2 == 0) {
        // 0x801EC2A0: lui         $at, 0x4040
        ctx->r1 = S32(0X4040 << 16);
            goto L_801EC2DC;
    }
    // 0x801EC2A0: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
L_801EC2A4:
    // 0x801EC2A4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801EC2A8: lwc1        $f8, 0x1C($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x801EC2AC: lwc1        $f18, 0x10($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801EC2B0: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    // 0x801EC2B4: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x801EC2B8: lw          $a3, 0xC($s1)
    ctx->r7 = MEM_W(ctx->r17, 0XC);
    // 0x801EC2BC: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801EC2C0: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x801EC2C4: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801EC2C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EC2CC: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x801EC2D0: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x801EC2D4: jal         0x801E1B30
    // 0x801EC2D8: nop

    func_801E1B30_60CF10(rdram, ctx);
        goto after_6;
    // 0x801EC2D8: nop

    after_6:
L_801EC2DC:
    // 0x801EC2DC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_801EC2E0:
    // 0x801EC2E0: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x801EC2E4: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x801EC2E8: jr          $ra
    // 0x801EC2EC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x801EC2EC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_801DAF10_6062F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DAF10: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801DAF14: addiu       $v0, $v0, -0x1130
    ctx->r2 = ADD32(ctx->r2, -0X1130);
    // 0x801DAF18: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x801DAF1C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801DAF20: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801DAF24: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801DAF28: lw          $t7, 0x1D8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X1D8);
    // 0x801DAF2C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801DAF30: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801DAF34: bnel        $a1, $t7, L_801DAF98
    if (ctx->r5 != ctx->r15) {
        // 0x801DAF38: sb          $zero, 0x30($s0)
        MEM_B(0X30, ctx->r16) = 0;
            goto L_801DAF98;
    }
    goto skip_0;
    // 0x801DAF38: sb          $zero, 0x30($s0)
    MEM_B(0X30, ctx->r16) = 0;
    skip_0:
    // 0x801DAF3C: jal         0x80038BC8
    // 0x801DAF40: addiu       $a0, $zero, 0x24F
    ctx->r4 = ADD32(0, 0X24F);
    func_80038BC8_397C8(rdram, ctx);
        goto after_0;
    // 0x801DAF40: addiu       $a0, $zero, 0x24F
    ctx->r4 = ADD32(0, 0X24F);
    after_0:
    // 0x801DAF44: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801DAF48: jal         0x80037C9C
    // 0x801DAF4C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_80037C9C_3889C(rdram, ctx);
        goto after_1;
    // 0x801DAF4C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_1:
    // 0x801DAF50: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801DAF54: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801DAF58: jal         0x80037C20
    // 0x801DAF5C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_80037C20_38820(rdram, ctx);
        goto after_2;
    // 0x801DAF5C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_2:
    // 0x801DAF60: sb          $zero, 0x30($s0)
    MEM_B(0X30, ctx->r16) = 0;
    // 0x801DAF64: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x801DAF68: lw          $t8, -0x1130($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1130);
    // 0x801DAF6C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801DAF70: lwc1        $f4, -0x26A8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X26A8);
    // 0x801DAF74: lw          $a1, 0xD0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XD0);
    // 0x801DAF78: lw          $a2, 0xD4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XD4);
    // 0x801DAF7C: lw          $a3, 0xD8($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XD8);
    // 0x801DAF80: lw          $a0, 0x1C8($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X1C8);
    // 0x801DAF84: jal         0x801DF868
    // 0x801DAF88: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_801DF868_60AC48(rdram, ctx);
        goto after_3;
    // 0x801DAF88: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x801DAF8C: b           L_801DAFBC
    // 0x801DAF90: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801DAFBC;
    // 0x801DAF90: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801DAF94: sb          $zero, 0x30($s0)
    MEM_B(0X30, ctx->r16) = 0;
L_801DAF98:
    // 0x801DAF98: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x801DAF9C: lwc1        $f6, -0x26A4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X26A4);
    // 0x801DAFA0: lw          $a1, 0xD0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XD0);
    // 0x801DAFA4: lw          $a2, 0xD4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XD4);
    // 0x801DAFA8: lw          $a3, 0xD8($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XD8);
    // 0x801DAFAC: lw          $a0, 0x1C8($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X1C8);
    // 0x801DAFB0: jal         0x801DF868
    // 0x801DAFB4: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_801DF868_60AC48(rdram, ctx);
        goto after_4;
    // 0x801DAFB4: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x801DAFB8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801DAFBC:
    // 0x801DAFBC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801DAFC0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801DAFC4: jr          $ra
    // 0x801DAFC8: nop

    TRACE_RETURN()
    return;
    // 0x801DAFC8: nop

;}
RECOMP_FUNC void func_801D16B4_5FCA94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D16B4: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D16B8: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801D16BC: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x801D16C0: sdc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X48, ctx->r29);
    // 0x801D16C4: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x801D16C8: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x801D16CC: lui         $at, 0x4160
    ctx->r1 = S32(0X4160 << 16);
    // 0x801D16D0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801D16D4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x801D16D8: lui         $at, 0x421C
    ctx->r1 = S32(0X421C << 16);
    // 0x801D16DC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D16E0: addiu       $v1, $v0, 0xA0
    ctx->r3 = ADD32(ctx->r2, 0XA0);
    // 0x801D16E4: sb          $t2, 0x2C0($v0)
    MEM_B(0X2C0, ctx->r2) = ctx->r10;
    // 0x801D16E8: sb          $zero, 0x2C1($v0)
    MEM_B(0X2C1, ctx->r2) = 0;
    // 0x801D16EC: sb          $t2, 0x2C2($v0)
    MEM_B(0X2C2, ctx->r2) = ctx->r10;
    // 0x801D16F0: sb          $zero, 0x2C3($v0)
    MEM_B(0X2C3, ctx->r2) = 0;
    // 0x801D16F4: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x801D16F8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D16FC: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x801D1700: lui         $at, 0xC240
    ctx->r1 = S32(0XC240 << 16);
    // 0x801D1704: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801D1708: addiu       $t6, $zero, 0x1380
    ctx->r14 = ADD32(0, 0X1380);
    // 0x801D170C: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801D1710: sh          $t6, 0x1A($v1)
    MEM_H(0X1A, ctx->r3) = ctx->r14;
    // 0x801D1714: addiu       $t7, $t7, -0x63D0
    ctx->r15 = ADD32(ctx->r15, -0X63D0);
    // 0x801D1718: swc1        $f4, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f4.u32l;
    // 0x801D171C: swc1        $f6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f6.u32l;
    // 0x801D1720: swc1        $f8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f8.u32l;
    // 0x801D1724: swc1        $f20, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f20.u32l;
    // 0x801D1728: swc1        $f20, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f20.u32l;
    // 0x801D172C: swc1        $f10, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f10.u32l;
    // 0x801D1730: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x801D1734: addiu       $a3, $v0, 0x100
    ctx->r7 = ADD32(ctx->r2, 0X100);
    // 0x801D1738: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x801D173C: swl         $at, 0x0($a3)
    do_swl(rdram, 0X0, ctx->r7, ctx->r1);
    // 0x801D1740: swr         $at, 0x3($a3)
    do_swr(rdram, 0X3, ctx->r7, ctx->r1);
    // 0x801D1744: lbu         $at, 0x4($t7)
    ctx->r1 = MEM_BU(ctx->r15, 0X4);
    // 0x801D1748: addiu       $t3, $t3, -0x63C8
    ctx->r11 = ADD32(ctx->r11, -0X63C8);
    // 0x801D174C: addiu       $t0, $v0, 0x118
    ctx->r8 = ADD32(ctx->r2, 0X118);
    // 0x801D1750: sb          $at, 0x4($a3)
    MEM_B(0X4, ctx->r7) = ctx->r1;
    // 0x801D1754: lbu         $t9, 0x5($t7)
    ctx->r25 = MEM_BU(ctx->r15, 0X5);
    // 0x801D1758: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x801D175C: addiu       $t8, $zero, -0x1E
    ctx->r24 = ADD32(0, -0X1E);
    // 0x801D1760: sb          $t9, 0x5($a3)
    MEM_B(0X5, ctx->r7) = ctx->r25;
    // 0x801D1764: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x801D1768: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801D176C: addiu       $t7, $t7, -0x63B8
    ctx->r15 = ADD32(ctx->r15, -0X63B8);
    // 0x801D1770: swl         $at, 0xC($a3)
    do_swl(rdram, 0XC, ctx->r7, ctx->r1);
    // 0x801D1774: swr         $at, 0xF($a3)
    do_swr(rdram, 0XF, ctx->r7, ctx->r1);
    // 0x801D1778: lbu         $at, 0x4($t3)
    ctx->r1 = MEM_BU(ctx->r11, 0X4);
    // 0x801D177C: addiu       $t1, $v0, 0x130
    ctx->r9 = ADD32(ctx->r2, 0X130);
    // 0x801D1780: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801D1784: sb          $at, 0x10($a3)
    MEM_B(0X10, ctx->r7) = ctx->r1;
    // 0x801D1788: lbu         $t5, 0x5($t3)
    ctx->r13 = MEM_BU(ctx->r11, 0X5);
    // 0x801D178C: addiu       $a1, $a1, 0x1938
    ctx->r5 = ADD32(ctx->r5, 0X1938);
    // 0x801D1790: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D1794: sb          $t5, 0x11($a3)
    MEM_B(0X11, ctx->r7) = ctx->r13;
    // 0x801D1798: sb          $zero, 0xC($t0)
    MEM_B(0XC, ctx->r8) = 0;
    // 0x801D179C: sb          $t6, 0xD($t0)
    MEM_B(0XD, ctx->r8) = ctx->r14;
    // 0x801D17A0: sb          $t8, 0xE($t0)
    MEM_B(0XE, ctx->r8) = ctx->r24;
    // 0x801D17A4: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x801D17A8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x801D17AC: swl         $at, 0x4($t1)
    do_swl(rdram, 0X4, ctx->r9, ctx->r1);
    // 0x801D17B0: swr         $at, 0x7($t1)
    do_swr(rdram, 0X7, ctx->r9, ctx->r1);
    // 0x801D17B4: lw          $a0, 0x1C4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X1C4);
    // 0x801D17B8: sw          $t0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r8;
    // 0x801D17BC: jal         0x80034E08
    // 0x801D17C0: sw          $v1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r3;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x801D17C0: sw          $v1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r3;
    after_0:
    // 0x801D17C4: lw          $v1, 0x68($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X68);
    // 0x801D17C8: beq         $v0, $zero, L_801D181C
    if (ctx->r2 == 0) {
        // 0x801D17CC: lw          $t0, 0x58($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X58);
            goto L_801D181C;
    }
    // 0x801D17CC: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x801D17D0: addiu       $t3, $zero, 0xC8
    ctx->r11 = ADD32(0, 0XC8);
    // 0x801D17D4: sw          $t3, 0x7C($v0)
    MEM_W(0X7C, ctx->r2) = ctx->r11;
    // 0x801D17D8: sw          $zero, 0x80($v0)
    MEM_W(0X80, ctx->r2) = 0;
    // 0x801D17DC: lwc1        $f16, 0x0($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X0);
    // 0x801D17E0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801D17E4: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    // 0x801D17E8: swc1        $f16, 0x90($v0)
    MEM_W(0X90, ctx->r2) = ctx->f16.u32l;
    // 0x801D17EC: lb          $t5, 0xC($t0)
    ctx->r13 = MEM_B(ctx->r8, 0XC);
    // 0x801D17F0: sw          $zero, 0x98($v0)
    MEM_W(0X98, ctx->r2) = 0;
    // 0x801D17F4: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x801D17F8: nop

    // 0x801D17FC: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x801D1800: jal         0x80037C9C
    // 0x801D1804: swc1        $f4, 0x94($v0)
    MEM_W(0X94, ctx->r2) = ctx->f4.u32l;
    func_80037C9C_3889C(rdram, ctx);
        goto after_1;
    // 0x801D1804: swc1        $f4, 0x94($v0)
    MEM_W(0X94, ctx->r2) = ctx->f4.u32l;
    after_1:
    // 0x801D1808: lui         $a2, 0x1111
    ctx->r6 = S32(0X1111 << 16);
    // 0x801D180C: ori         $a2, $a2, 0x1111
    ctx->r6 = ctx->r6 | 0X1111;
    // 0x801D1810: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801D1814: jal         0x80037C20
    // 0x801D1818: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80037C20_38820(rdram, ctx);
        goto after_2;
    // 0x801D1818: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
L_801D181C:
    // 0x801D181C: lw          $a0, 0x1C0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C0);
    // 0x801D1820: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D1824: lwc1        $f0, -0x2DC0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X2DC0);
    // 0x801D1828: lui         $a2, 0x800
    ctx->r6 = S32(0X800 << 16);
    // 0x801D182C: addiu       $a2, $a2, 0x190
    ctx->r6 = ADD32(ctx->r6, 0X190);
    // 0x801D1830: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x801D1834: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801D1838: lui         $a3, 0x8021
    ctx->r7 = S32(0X8021 << 16);
    // 0x801D183C: addiu       $t6, $zero, 0x200
    ctx->r14 = ADD32(0, 0X200);
    // 0x801D1840: addiu       $t8, $zero, 0x4AD
    ctx->r24 = ADD32(0, 0X4AD);
    // 0x801D1844: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x801D1848: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x801D184C: addiu       $a3, $a3, -0x57D0
    ctx->r7 = ADD32(ctx->r7, -0X57D0);
    // 0x801D1850: addiu       $a1, $a1, 0x1D50
    ctx->r5 = ADD32(ctx->r5, 0X1D50);
    // 0x801D1854: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
    // 0x801D1858: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x801D185C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x801D1860: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801D1864: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x801D1868: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x801D186C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x801D1870: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801D1874: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x801D1878: jal         0x800358E8
    // 0x801D187C: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    func_800358E8_364E8(rdram, ctx);
        goto after_3;
    // 0x801D187C: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    after_3:
    // 0x801D1880: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D1884: beq         $v0, $zero, L_801D18AC
    if (ctx->r2 == 0) {
        // 0x801D1888: lwc1        $f0, -0x2DBC($at)
        ctx->f0.u32l = MEM_W(ctx->r1, -0X2DBC);
            goto L_801D18AC;
    }
    // 0x801D1888: lwc1        $f0, -0x2DBC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X2DBC);
    // 0x801D188C: lw          $a0, 0x18($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X18);
    // 0x801D1890: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x801D1894: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801D1898: addiu       $a1, $a1, -0x6334
    ctx->r5 = ADD32(ctx->r5, -0X6334);
    // 0x801D189C: jal         0x801D2EE4
    // 0x801D18A0: sb          $t9, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r25;
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_4;
    // 0x801D18A0: sb          $t9, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r25;
    after_4:
    // 0x801D18A4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D18A8: lwc1        $f0, -0x2DB8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X2DB8);
L_801D18AC:
    // 0x801D18AC: lw          $a0, 0x1C0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C0);
    // 0x801D18B0: lui         $a2, 0x800
    ctx->r6 = S32(0X800 << 16);
    // 0x801D18B4: addiu       $a2, $a2, 0x1E0
    ctx->r6 = ADD32(ctx->r6, 0X1E0);
    // 0x801D18B8: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801D18BC: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x801D18C0: lui         $a3, 0x8021
    ctx->r7 = S32(0X8021 << 16);
    // 0x801D18C4: addiu       $t7, $zero, 0x200
    ctx->r15 = ADD32(0, 0X200);
    // 0x801D18C8: addiu       $t4, $zero, 0x4AD
    ctx->r12 = ADD32(0, 0X4AD);
    // 0x801D18CC: sw          $t4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r12;
    // 0x801D18D0: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x801D18D4: addiu       $a3, $a3, -0x5830
    ctx->r7 = ADD32(ctx->r7, -0X5830);
    // 0x801D18D8: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
    // 0x801D18DC: addiu       $a1, $a1, 0x1E40
    ctx->r5 = ADD32(ctx->r5, 0X1E40);
    // 0x801D18E0: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x801D18E4: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x801D18E8: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x801D18EC: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801D18F0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x801D18F4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801D18F8: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x801D18FC: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x801D1900: jal         0x800358E8
    // 0x801D1904: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    func_800358E8_364E8(rdram, ctx);
        goto after_5;
    // 0x801D1904: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_5:
    // 0x801D1908: beq         $v0, $zero, L_801D1924
    if (ctx->r2 == 0) {
        // 0x801D190C: addiu       $t3, $zero, 0x5
        ctx->r11 = ADD32(0, 0X5);
            goto L_801D1924;
    }
    // 0x801D190C: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x801D1910: lw          $a0, 0x18($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X18);
    // 0x801D1914: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801D1918: addiu       $a1, $a1, -0x632C
    ctx->r5 = ADD32(ctx->r5, -0X632C);
    // 0x801D191C: jal         0x801D2EE4
    // 0x801D1920: sb          $t3, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r11;
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_6;
    // 0x801D1920: sb          $t3, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r11;
    after_6:
L_801D1924:
    // 0x801D1924: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x801D1928: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x801D192C: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x801D1930: jr          $ra
    // 0x801D1934: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    TRACE_RETURN()
    return;
    // 0x801D1934: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_801F8E78_624258(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F8E78: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801F8E7C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801F8E80: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x801F8E84: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x801F8E88: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x801F8E8C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801F8E90: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801F8E94: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801F8E98: lw          $a3, 0x8($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X8);
    // 0x801F8E9C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801F8EA0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801F8EA4: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801F8EA8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801F8EAC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801F8EB0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801F8EB4: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801F8EB8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801F8EBC: lwc1        $f8, 0x20($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X20);
    // 0x801F8EC0: lui         $a1, 0x801
    ctx->r5 = S32(0X801 << 16);
    // 0x801F8EC4: addiu       $a1, $a1, -0x4550
    ctx->r5 = ADD32(ctx->r5, -0X4550);
    // 0x801F8EC8: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x801F8ECC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801F8ED0: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801F8ED4: addiu       $t7, $zero, 0x4A8
    ctx->r15 = ADD32(0, 0X4A8);
    // 0x801F8ED8: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x801F8EDC: addiu       $a2, $a2, -0x54E0
    ctx->r6 = ADD32(ctx->r6, -0X54E0);
    // 0x801F8EE0: addiu       $a0, $a0, -0x707C
    ctx->r4 = ADD32(ctx->r4, -0X707C);
    // 0x801F8EE4: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    // 0x801F8EE8: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801F8EEC: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801F8EF0: jal         0x80035854
    // 0x801F8EF4: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    func_80035854_36454(rdram, ctx);
        goto after_0;
    // 0x801F8EF4: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x801F8EF8: beq         $v0, $zero, L_801F8F74
    if (ctx->r2 == 0) {
        // 0x801F8EFC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_801F8F74;
    }
    // 0x801F8EFC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801F8F00: lui         $at, 0x4300
    ctx->r1 = S32(0X4300 << 16);
    // 0x801F8F04: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F8F08: lwc1        $f18, 0x54($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801F8F0C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x801F8F10: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F8F14: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x801F8F18: addiu       $t8, $zero, 0x3C
    ctx->r24 = ADD32(0, 0X3C);
    // 0x801F8F1C: sw          $t8, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r24;
    // 0x801F8F20: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x801F8F24: swc1        $f18, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->f18.u32l;
    // 0x801F8F28: swc1        $f4, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->f4.u32l;
    // 0x801F8F2C: swc1        $f6, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->f6.u32l;
    // 0x801F8F30: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x801F8F34: sb          $t9, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r25;
    // 0x801F8F38: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x801F8F3C: lw          $t1, 0x94($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X94);
    // 0x801F8F40: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F8F44: addiu       $a1, $a1, -0x54E0
    ctx->r5 = ADD32(ctx->r5, -0X54E0);
    // 0x801F8F48: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x801F8F4C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x801F8F50: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
    // 0x801F8F54: jal         0x8000DF10
    // 0x801F8F58: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    func_8000DF10_EB10(rdram, ctx);
        goto after_1;
    // 0x801F8F58: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    after_1:
    // 0x801F8F5C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801F8F60: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x801F8F64: or          $t2, $v0, $at
    ctx->r10 = ctx->r2 | ctx->r1;
    // 0x801F8F68: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801F8F6C: or          $t3, $t2, $at
    ctx->r11 = ctx->r10 | ctx->r1;
    // 0x801F8F70: sw          $t3, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r11;
L_801F8F74:
    // 0x801F8F74: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801F8F78: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x801F8F7C: jr          $ra
    // 0x801F8F80: nop

    TRACE_RETURN()
    return;
    // 0x801F8F80: nop

;}
RECOMP_FUNC void func_801EDADC_618EBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EDADC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801EDAE0: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801EDAE4: addiu       $a2, $a2, -0x1130
    ctx->r6 = ADD32(ctx->r6, -0X1130);
    // 0x801EDAE8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801EDAEC: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x801EDAF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801EDAF4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801EDAF8: lw          $a1, 0x1D8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X1D8);
    // 0x801EDAFC: addiu       $v0, $a0, 0xA0
    ctx->r2 = ADD32(ctx->r4, 0XA0);
    // 0x801EDB00: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x801EDB04: lw          $v1, 0x18($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X18);
    // 0x801EDB08: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801EDB0C: lui         $at, 0xC228
    ctx->r1 = S32(0XC228 << 16);
    // 0x801EDB10: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801EDB14: addiu       $a0, $zero, 0x4B
    ctx->r4 = ADD32(0, 0X4B);
    // 0x801EDB18: swc1        $f4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f4.u32l;
    // 0x801EDB1C: lwc1        $f6, 0xC($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0XC);
    // 0x801EDB20: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801EDB24: swc1        $f10, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f10.u32l;
    // 0x801EDB28: lwc1        $f16, 0x10($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X10);
    // 0x801EDB2C: swc1        $f16, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f16.u32l;
    // 0x801EDB30: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x801EDB34: lbu         $t7, 0x2C1($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X2C1);
    // 0x801EDB38: beql        $t7, $zero, L_801EDB94
    if (ctx->r15 == 0) {
        // 0x801EDB3C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801EDB94;
    }
    goto skip_0;
    // 0x801EDB3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801EDB40: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801EDB44: lui         $at, 0xC3FA
    ctx->r1 = S32(0XC3FA << 16);
    // 0x801EDB48: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801EDB4C: lui         $at, 0x4296
    ctx->r1 = S32(0X4296 << 16);
    // 0x801EDB50: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801EDB54: lui         $at, 0xC28C
    ctx->r1 = S32(0XC28C << 16);
    // 0x801EDB58: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801EDB5C: lui         $at, 0xC3B9
    ctx->r1 = S32(0XC3B9 << 16);
    // 0x801EDB60: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801EDB64: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801EDB68: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
    // 0x801EDB6C: swc1        $f6, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f6.u32l;
    // 0x801EDB70: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
    // 0x801EDB74: swc1        $f10, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f10.u32l;
    // 0x801EDB78: swc1        $f18, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f18.u32l;
    // 0x801EDB7C: jal         0x80038BC8
    // 0x801EDB80: swc1        $f16, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f16.u32l;
    func_80038BC8_397C8(rdram, ctx);
        goto after_0;
    // 0x801EDB80: swc1        $f16, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f16.u32l;
    after_0:
    // 0x801EDB84: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801EDB88: jal         0x8003521C
    // 0x801EDB8C: addiu       $a0, $a0, -0x2460
    ctx->r4 = ADD32(ctx->r4, -0X2460);
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x801EDB8C: addiu       $a0, $a0, -0x2460
    ctx->r4 = ADD32(ctx->r4, -0X2460);
    after_1:
    // 0x801EDB90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801EDB94:
    // 0x801EDB94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801EDB98: jr          $ra
    // 0x801EDB9C: nop

    TRACE_RETURN()
    return;
    // 0x801EDB9C: nop

;}
RECOMP_FUNC void func_801D53EC_6007CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D53EC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801D53F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D53F4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x801D53F8: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x801D53FC: beq         $a0, $zero, L_801D54D0
    if (ctx->r4 == 0) {
        // 0x801D5400: sw          $a3, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r7;
            goto L_801D54D0;
    }
    // 0x801D5400: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x801D5404: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D5408: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801D540C: lbu         $t6, 0x2C0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X2C0);
    // 0x801D5410: beql        $t6, $zero, L_801D54D4
    if (ctx->r14 == 0) {
        // 0x801D5414: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801D54D4;
    }
    goto skip_0;
    // 0x801D5414: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801D5418: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x801D541C: addiu       $v1, $v0, 0xA0
    ctx->r3 = ADD32(ctx->r2, 0XA0);
    // 0x801D5420: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D5424: swc1        $f4, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f4.u32l;
    // 0x801D5428: lwc1        $f6, 0xC($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XC);
    // 0x801D542C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x801D5430: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801D5434: swc1        $f6, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f6.u32l;
    // 0x801D5438: lwc1        $f8, 0x10($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X10);
    // 0x801D543C: swc1        $f8, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f8.u32l;
    // 0x801D5440: lwc1        $f14, 0x10($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X10);
    // 0x801D5444: lwc1        $f12, 0x8($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X8);
    // 0x801D5448: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x801D544C: jal         0x8000E28C
    // 0x801D5450: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    func_8000E28C_EE8C(rdram, ctx);
        goto after_0;
    // 0x801D5450: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    after_0:
    // 0x801D5454: lhu         $t7, 0x3E($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X3E);
    // 0x801D5458: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x801D545C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x801D5460: addu        $a1, $v0, $t7
    ctx->r5 = ADD32(ctx->r2, ctx->r15);
    // 0x801D5464: andi        $a2, $a1, 0xFFFF
    ctx->r6 = ctx->r5 & 0XFFFF;
    // 0x801D5468: slti        $at, $a2, 0x400
    ctx->r1 = SIGNED(ctx->r6) < 0X400 ? 1 : 0;
    // 0x801D546C: bne         $at, $zero, L_801D547C
    if (ctx->r1 != 0) {
        // 0x801D5470: sh          $a1, 0x26($sp)
        MEM_H(0X26, ctx->r29) = ctx->r5;
            goto L_801D547C;
    }
    // 0x801D5470: sh          $a1, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r5;
    // 0x801D5474: addiu       $t8, $a2, -0x400
    ctx->r24 = ADD32(ctx->r6, -0X400);
    // 0x801D5478: sh          $t8, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r24;
L_801D547C:
    // 0x801D547C: lwc1        $f12, 0x34($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801D5480: lhu         $a1, 0x26($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X26);
    // 0x801D5484: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x801D5488: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    // 0x801D548C: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    // 0x801D5490: jal         0x8000E630
    // 0x801D5494: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    func_8000E630_F230(rdram, ctx);
        goto after_1;
    // 0x801D5494: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_1:
    // 0x801D5498: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x801D549C: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x801D54A0: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x801D54A4: lwc1        $f10, 0x8($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X8);
    // 0x801D54A8: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801D54AC: swc1        $f18, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f18.u32l;
    // 0x801D54B0: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x801D54B4: lwc1        $f4, 0xC($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XC);
    // 0x801D54B8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801D54BC: swc1        $f8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f8.u32l;
    // 0x801D54C0: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x801D54C4: lwc1        $f10, 0x10($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X10);
    // 0x801D54C8: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801D54CC: swc1        $f18, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f18.u32l;
L_801D54D0:
    // 0x801D54D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801D54D4:
    // 0x801D54D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801D54D8: jr          $ra
    // 0x801D54DC: nop

    TRACE_RETURN()
    return;
    // 0x801D54DC: nop

;}
RECOMP_FUNC void func_801E1138_60C518(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E1138: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801E113C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801E1140: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801E1144: lwc1        $f4, 0x1C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x801E1148: lwc1        $f16, 0x24($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X24);
    // 0x801E114C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E1150: ldc1        $f0, -0x23F0($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X23F0);
    // 0x801E1154: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801E1158: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801E115C: add.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = ctx->f6.d + ctx->f0.d;
    // 0x801E1160: lhu         $t6, 0x16($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X16);
    // 0x801E1164: lui         $at, 0x4028
    ctx->r1 = S32(0X4028 << 16);
    // 0x801E1168: add.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = ctx->f18.d + ctx->f0.d;
    // 0x801E116C: addiu       $t7, $t6, 0x10
    ctx->r15 = ADD32(ctx->r14, 0X10);
    // 0x801E1170: sh          $t7, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r15;
    // 0x801E1174: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801E1178: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x801E117C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801E1180: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801E1184: swc1        $f10, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f10.u32l;
    // 0x801E1188: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801E118C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x801E1190: swc1        $f6, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f6.u32l;
    // 0x801E1194: lwc1        $f8, 0x90($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X90);
    // 0x801E1198: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801E119C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E11A0: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801E11A4: sub.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d - ctx->f16.d;
    // 0x801E11A8: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x801E11AC: swc1        $f4, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->f4.u32l;
    // 0x801E11B0: lwc1        $f2, 0x90($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X90);
    // 0x801E11B4: c.lt.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl < ctx->f6.fl;
    // 0x801E11B8: nop

    // 0x801E11BC: bc1fl       L_801E11D8
    if (!c1cs) {
        // 0x801E11C0: mtc1        $at, $f12
        ctx->f12.u32l = ctx->r1;
            goto L_801E11D8;
    }
    goto skip_0;
    // 0x801E11C0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    skip_0:
    // 0x801E11C4: jal         0x80034ED4
    // 0x801E11C8: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_0;
    // 0x801E11C8: nop

    after_0:
    // 0x801E11CC: b           L_801E1228
    // 0x801E11D0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801E1228;
    // 0x801E11D0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801E11D4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
L_801E11D8:
    // 0x801E11D8: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x801E11DC: c.le.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl <= ctx->f2.fl;
    // 0x801E11E0: nop

    // 0x801E11E4: bc1fl       L_801E11F4
    if (!c1cs) {
        // 0x801E11E8: trunc.w.s   $f8, $f0
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
            goto L_801E11F4;
    }
    goto skip_1;
    // 0x801E11E8: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    skip_1:
    // 0x801E11EC: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    // 0x801E11F0: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
L_801E11F4:
    // 0x801E11F4: addiu       $a1, $a1, -0x54E0
    ctx->r5 = ADD32(ctx->r5, -0X54E0);
    // 0x801E11F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801E11FC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801E1200: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x801E1204: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801E1208: jal         0x8000DF10
    // 0x801E120C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    func_8000DF10_EB10(rdram, ctx);
        goto after_1;
    // 0x801E120C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    after_1:
    // 0x801E1210: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E1214: or          $t0, $v0, $at
    ctx->r8 = ctx->r2 | ctx->r1;
    // 0x801E1218: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801E121C: or          $t1, $t0, $at
    ctx->r9 = ctx->r8 | ctx->r1;
    // 0x801E1220: sw          $t1, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r9;
    // 0x801E1224: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801E1228:
    // 0x801E1228: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801E122C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801E1230: jr          $ra
    // 0x801E1234: nop

    TRACE_RETURN()
    return;
    // 0x801E1234: nop

;}
RECOMP_FUNC void func_80202904_62DCE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80202904: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80202908: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020290C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80202910: jal         0x80203F88
    // 0x80202914: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80203F88_62F368(rdram, ctx);
        goto after_0;
    // 0x80202914: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80202918: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8020291C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80202920: ldc1        $f0, -0x1338($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X1338);
    // 0x80202924: lwc1        $f4, 0xBC($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XBC);
    // 0x80202928: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8020292C: addiu       $v1, $v1, -0x10C0
    ctx->r3 = ADD32(ctx->r3, -0X10C0);
    // 0x80202930: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80202934: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80202938: c.eq.d      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.d == ctx->f6.d;
    // 0x8020293C: nop

    // 0x80202940: bc1fl       L_80202968
    if (!c1cs) {
        // 0x80202944: lw          $v0, 0x0($v1)
        ctx->r2 = MEM_W(ctx->r3, 0X0);
            goto L_80202968;
    }
    goto skip_0;
    // 0x80202944: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    skip_0:
    // 0x80202948: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8020294C: addiu       $v1, $v1, -0x10C0
    ctx->r3 = ADD32(ctx->r3, -0X10C0);
    // 0x80202950: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80202954: lbu         $t6, 0x6($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X6);
    // 0x80202958: ori         $t7, $t6, 0x1
    ctx->r15 = ctx->r14 | 0X1;
    // 0x8020295C: b           L_80202974
    // 0x80202960: sb          $t7, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r15;
        goto L_80202974;
    // 0x80202960: sb          $t7, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r15;
    // 0x80202964: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
L_80202968:
    // 0x80202968: lbu         $t8, 0x6($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X6);
    // 0x8020296C: andi        $t9, $t8, 0x2
    ctx->r25 = ctx->r24 & 0X2;
    // 0x80202970: sb          $t9, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r25;
L_80202974:
    // 0x80202974: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x80202978: lbu         $t1, 0x5($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X5);
    // 0x8020297C: beql        $t1, $zero, L_802029CC
    if (ctx->r9 == 0) {
        // 0x80202980: lwc1        $f10, 0xBC($a0)
        ctx->f10.u32l = MEM_W(ctx->r4, 0XBC);
            goto L_802029CC;
    }
    goto skip_1;
    // 0x80202980: lwc1        $f10, 0xBC($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0XBC);
    skip_1:
    // 0x80202984: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80202988: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8020298C: lwc1        $f8, 0xBC($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0XBC);
    // 0x80202990: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80202994: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80202998: swc1        $f16, 0xBC($a0)
    MEM_W(0XBC, ctx->r4) = ctx->f16.u32l;
    // 0x8020299C: lwc1        $f18, 0xBC($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0XBC);
    // 0x802029A0: ldc1        $f6, -0x1330($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X1330);
    // 0x802029A4: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x802029A8: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x802029AC: c.le.d      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.d <= ctx->f4.d;
    // 0x802029B0: nop

    // 0x802029B4: bc1fl       L_80202A04
    if (!c1cs) {
        // 0x802029B8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80202A04;
    }
    goto skip_2;
    // 0x802029B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x802029BC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802029C0: b           L_80202A00
    // 0x802029C4: swc1        $f8, 0xBC($a0)
    MEM_W(0XBC, ctx->r4) = ctx->f8.u32l;
        goto L_80202A00;
    // 0x802029C4: swc1        $f8, 0xBC($a0)
    MEM_W(0XBC, ctx->r4) = ctx->f8.u32l;
    // 0x802029C8: lwc1        $f10, 0xBC($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0XBC);
L_802029CC:
    // 0x802029CC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802029D0: lui         $at, 0x432E
    ctx->r1 = S32(0X432E << 16);
    // 0x802029D4: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x802029D8: swc1        $f18, 0xBC($a0)
    MEM_W(0XBC, ctx->r4) = ctx->f18.u32l;
    // 0x802029DC: lwc1        $f4, 0xBC($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XBC);
    // 0x802029E0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x802029E4: c.le.d      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.d <= ctx->f0.d;
    // 0x802029E8: nop

    // 0x802029EC: bc1fl       L_80202A04
    if (!c1cs) {
        // 0x802029F0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80202A04;
    }
    goto skip_3;
    // 0x802029F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x802029F4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802029F8: nop

    // 0x802029FC: swc1        $f8, 0xBC($a0)
    MEM_W(0XBC, ctx->r4) = ctx->f8.u32l;
L_80202A00:
    // 0x80202A00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80202A04:
    // 0x80202A04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80202A08: jr          $ra
    // 0x80202A0C: nop

    TRACE_RETURN()
    return;
    // 0x80202A0C: nop

;}
RECOMP_FUNC void func_802032E8_62E6C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802032E8: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x802032EC: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x802032F0: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x802032F4: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x802032F8: lbu         $t6, 0x5F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X5F);
    // 0x802032FC: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x80203300: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80203304: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80203308: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8020330C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80203310: lwc1        $f6, 0xC($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0XC);
    // 0x80203314: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80203318: addiu       $t8, $t8, -0x4B80
    ctx->r24 = ADD32(ctx->r24, -0X4B80);
    // 0x8020331C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x80203320: lwc1        $f8, 0x10($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X10);
    // 0x80203324: addu        $t0, $t7, $t8
    ctx->r8 = ADD32(ctx->r15, ctx->r24);
    // 0x80203328: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8020332C: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x80203330: lhu         $t9, 0x14($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X14);
    // 0x80203334: lui         $a3, 0x8021
    ctx->r7 = S32(0X8021 << 16);
    // 0x80203338: addiu       $t4, $zero, 0x4B5
    ctx->r12 = ADD32(0, 0X4B5);
    // 0x8020333C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80203340: lhu         $t2, 0x16($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0X16);
    // 0x80203344: addiu       $a3, $a3, -0x5198
    ctx->r7 = ADD32(ctx->r7, -0X5198);
    // 0x80203348: addiu       $a1, $a1, 0x3424
    ctx->r5 = ADD32(ctx->r5, 0X3424);
    // 0x8020334C: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x80203350: lhu         $t3, 0x18($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0X18);
    // 0x80203354: lw          $a2, 0xC($t0)
    ctx->r6 = MEM_W(ctx->r8, 0XC);
    // 0x80203358: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x8020335C: lwc1        $f10, 0x1C($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x80203360: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x80203364: lwc1        $f16, 0x20($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X20);
    // 0x80203368: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x8020336C: lwc1        $f18, 0x24($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X24);
    // 0x80203370: sw          $t0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r8;
    // 0x80203374: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x80203378: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x8020337C: sw          $t4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r12;
    // 0x80203380: sw          $v1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r3;
    // 0x80203384: jal         0x800358E8
    // 0x80203388: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    func_800358E8_364E8(rdram, ctx);
        goto after_0;
    // 0x80203388: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x8020338C: lw          $v1, 0x50($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X50);
    // 0x80203390: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x80203394: lbu         $t1, 0x5F($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X5F);
    // 0x80203398: beq         $v0, $zero, L_80203410
    if (ctx->r2 == 0) {
        // 0x8020339C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80203410;
    }
    // 0x8020339C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802033A0: lw          $v0, 0x18($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X18);
    // 0x802033A4: addiu       $t7, $t1, 0x1
    ctx->r15 = ADD32(ctx->r9, 0X1);
    // 0x802033A8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802033AC: sb          $zero, 0x65($v0)
    MEM_B(0X65, ctx->r2) = 0;
    // 0x802033B0: lbu         $t5, 0x5($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X5);
    // 0x802033B4: addiu       $t9, $zero, 0x32
    ctx->r25 = ADD32(0, 0X32);
    // 0x802033B8: addiu       $t2, $zero, 0x64
    ctx->r10 = ADD32(0, 0X64);
    // 0x802033BC: sb          $t5, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r13;
    // 0x802033C0: lbu         $t6, 0x10($t0)
    ctx->r14 = MEM_BU(ctx->r8, 0X10);
    // 0x802033C4: addiu       $t3, $zero, 0x32
    ctx->r11 = ADD32(0, 0X32);
    // 0x802033C8: sw          $t1, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r9;
    // 0x802033CC: sw          $t7, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->r15;
    // 0x802033D0: sb          $t8, 0x30($a0)
    MEM_B(0X30, ctx->r4) = ctx->r24;
    // 0x802033D4: sh          $t9, 0x3C($a0)
    MEM_H(0X3C, ctx->r4) = ctx->r25;
    // 0x802033D8: sh          $t2, 0x3E($a0)
    MEM_H(0X3E, ctx->r4) = ctx->r10;
    // 0x802033DC: sh          $zero, 0x40($a0)
    MEM_H(0X40, ctx->r4) = 0;
    // 0x802033E0: sw          $t3, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->r11;
    // 0x802033E4: sh          $t6, 0x5C($a0)
    MEM_H(0X5C, ctx->r4) = ctx->r14;
    // 0x802033E8: lwc1        $f4, 0x8($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X8);
    // 0x802033EC: sw          $a0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r4;
    // 0x802033F0: lw          $a3, 0x4($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X4);
    // 0x802033F4: lw          $a2, 0x0($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X0);
    // 0x802033F8: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x802033FC: jal         0x80203F5C
    // 0x80203400: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_80203F5C_62F33C(rdram, ctx);
        goto after_1;
    // 0x80203400: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x80203404: jal         0x80203F88
    // 0x80203408: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    func_80203F88_62F368(rdram, ctx);
        goto after_2;
    // 0x80203408: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    after_2:
    // 0x8020340C: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
L_80203410:
    // 0x80203410: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80203414: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x80203418: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8020341C: jr          $ra
    // 0x80203420: nop

    TRACE_RETURN()
    return;
    // 0x80203420: nop

;}
RECOMP_FUNC void func_80200978_62BD58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80200978: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020097C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80200980: lw          $v0, 0xD0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD0);
    // 0x80200984: sltiu       $at, $v0, 0x6
    ctx->r1 = ctx->r2 < 0X6 ? 1 : 0;
    // 0x80200988: beq         $at, $zero, L_80200AA8
    if (ctx->r1 == 0) {
        // 0x8020098C: sll         $t6, $v0, 2
        ctx->r14 = S32(ctx->r2 << 2);
            goto L_80200AA8;
    }
    // 0x8020098C: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x80200990: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80200994: addu        $at, $at, $t6
    gpr jr_addend_8020099C = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80200998: lw          $t6, -0x1388($at)
    ctx->r14 = ADD32(ctx->r1, -0X1388);
    // 0x8020099C: jr          $t6
    // 0x802009A0: nop

    switch (jr_addend_8020099C >> 2) {
        case 0: goto L_802009A4; break;
        case 1: goto L_802009D4; break;
        case 2: goto L_80200A0C; break;
        case 3: goto L_80200A40; break;
        case 4: goto L_80200A74; break;
        case 5: goto L_80200AA8; break;
        default: switch_error(__func__, 0x8020099C, 0x8020EC78);
    }
    // 0x802009A0: nop

L_802009A4:
    // 0x802009A4: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x802009A8: lw          $t7, -0x10C0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X10C0);
    // 0x802009AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802009B0: addiu       $t9, $v0, 0x1
    ctx->r25 = ADD32(ctx->r2, 0X1);
    // 0x802009B4: lbu         $t8, 0x10($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X10);
    // 0x802009B8: bnel        $t8, $zero, L_802009D4
    if (ctx->r24 != 0) {
        // 0x802009BC: sw          $t9, 0xD0($a0)
        MEM_W(0XD0, ctx->r4) = ctx->r25;
            goto L_802009D4;
    }
    goto skip_0;
    // 0x802009BC: sw          $t9, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = ctx->r25;
    skip_0:
    // 0x802009C0: jal         0x80200AD0
    // 0x802009C4: addiu       $a2, $zero, 0x12C
    ctx->r6 = ADD32(0, 0X12C);
    func_80200AD0_62BEB0(rdram, ctx);
        goto after_0;
    // 0x802009C4: addiu       $a2, $zero, 0x12C
    ctx->r6 = ADD32(0, 0X12C);
    after_0:
    // 0x802009C8: b           L_80200AC4
    // 0x802009CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80200AC4;
    // 0x802009CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802009D0: sw          $t9, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = ctx->r25;
L_802009D4:
    // 0x802009D4: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x802009D8: lw          $t0, -0x10C0($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X10C0);
    // 0x802009DC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802009E0: lbu         $t1, 0x8($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X8);
    // 0x802009E4: slti        $at, $t1, 0x6
    ctx->r1 = SIGNED(ctx->r9) < 0X6 ? 1 : 0;
    // 0x802009E8: beql        $at, $zero, L_80200A04
    if (ctx->r1 == 0) {
        // 0x802009EC: lw          $t2, 0xD0($a0)
        ctx->r10 = MEM_W(ctx->r4, 0XD0);
            goto L_80200A04;
    }
    goto skip_1;
    // 0x802009EC: lw          $t2, 0xD0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0XD0);
    skip_1:
    // 0x802009F0: jal         0x80200AD0
    // 0x802009F4: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    func_80200AD0_62BEB0(rdram, ctx);
        goto after_1;
    // 0x802009F4: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    after_1:
    // 0x802009F8: b           L_80200AC4
    // 0x802009FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80200AC4;
    // 0x802009FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80200A00: lw          $t2, 0xD0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0XD0);
L_80200A04:
    // 0x80200A04: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80200A08: sw          $t3, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = ctx->r11;
L_80200A0C:
    // 0x80200A0C: lui         $t4, 0x8021
    ctx->r12 = S32(0X8021 << 16);
    // 0x80200A10: lw          $t4, -0x10C0($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X10C0);
    // 0x80200A14: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80200A18: lbu         $t5, 0xA($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0XA);
    // 0x80200A1C: bnel        $t5, $zero, L_80200A38
    if (ctx->r13 != 0) {
        // 0x80200A20: lw          $t6, 0xD0($a0)
        ctx->r14 = MEM_W(ctx->r4, 0XD0);
            goto L_80200A38;
    }
    goto skip_2;
    // 0x80200A20: lw          $t6, 0xD0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD0);
    skip_2:
    // 0x80200A24: jal         0x80200AD0
    // 0x80200A28: addiu       $a2, $zero, 0x190
    ctx->r6 = ADD32(0, 0X190);
    func_80200AD0_62BEB0(rdram, ctx);
        goto after_2;
    // 0x80200A28: addiu       $a2, $zero, 0x190
    ctx->r6 = ADD32(0, 0X190);
    after_2:
    // 0x80200A2C: b           L_80200AC4
    // 0x80200A30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80200AC4;
    // 0x80200A30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80200A34: lw          $t6, 0xD0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD0);
L_80200A38:
    // 0x80200A38: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80200A3C: sw          $t7, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = ctx->r15;
L_80200A40:
    // 0x80200A40: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x80200A44: lw          $t8, -0x10C0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X10C0);
    // 0x80200A48: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80200A4C: lbu         $t9, 0xC($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0XC);
    // 0x80200A50: bnel        $t9, $zero, L_80200A6C
    if (ctx->r25 != 0) {
        // 0x80200A54: lw          $t0, 0xD0($a0)
        ctx->r8 = MEM_W(ctx->r4, 0XD0);
            goto L_80200A6C;
    }
    goto skip_3;
    // 0x80200A54: lw          $t0, 0xD0($a0)
    ctx->r8 = MEM_W(ctx->r4, 0XD0);
    skip_3:
    // 0x80200A58: jal         0x80200AD0
    // 0x80200A5C: addiu       $a2, $zero, 0x12C
    ctx->r6 = ADD32(0, 0X12C);
    func_80200AD0_62BEB0(rdram, ctx);
        goto after_3;
    // 0x80200A5C: addiu       $a2, $zero, 0x12C
    ctx->r6 = ADD32(0, 0X12C);
    after_3:
    // 0x80200A60: b           L_80200AC4
    // 0x80200A64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80200AC4;
    // 0x80200A64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80200A68: lw          $t0, 0xD0($a0)
    ctx->r8 = MEM_W(ctx->r4, 0XD0);
L_80200A6C:
    // 0x80200A6C: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80200A70: sw          $t1, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = ctx->r9;
L_80200A74:
    // 0x80200A74: lui         $t2, 0x8021
    ctx->r10 = S32(0X8021 << 16);
    // 0x80200A78: lw          $t2, -0x10C0($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X10C0);
    // 0x80200A7C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80200A80: lbu         $t3, 0xE($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0XE);
    // 0x80200A84: bnel        $t3, $zero, L_80200AA0
    if (ctx->r11 != 0) {
        // 0x80200A88: lw          $t4, 0xD0($a0)
        ctx->r12 = MEM_W(ctx->r4, 0XD0);
            goto L_80200AA0;
    }
    goto skip_4;
    // 0x80200A88: lw          $t4, 0xD0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0XD0);
    skip_4:
    // 0x80200A8C: jal         0x80200AD0
    // 0x80200A90: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_80200AD0_62BEB0(rdram, ctx);
        goto after_4;
    // 0x80200A90: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_4:
    // 0x80200A94: b           L_80200AC4
    // 0x80200A98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80200AC4;
    // 0x80200A98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80200A9C: lw          $t4, 0xD0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0XD0);
L_80200AA0:
    // 0x80200AA0: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80200AA4: sw          $t5, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = ctx->r13;
L_80200AA8:
    // 0x80200AA8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80200AAC: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    // 0x80200AB0: jal         0x80200AD0
    // 0x80200AB4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80200AD0_62BEB0(rdram, ctx);
        goto after_5;
    // 0x80200AB4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_5:
    // 0x80200AB8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80200ABC: sw          $zero, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = 0;
    // 0x80200AC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80200AC4:
    // 0x80200AC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80200AC8: jr          $ra
    // 0x80200ACC: nop

    TRACE_RETURN()
    return;
    // 0x80200ACC: nop

;}
RECOMP_FUNC void func_801D1F58_5FD338(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D1F58: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801D1F5C: lw          $a1, -0x1130($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1130);
    // 0x801D1F60: addiu       $v1, $a1, 0xA0
    ctx->r3 = ADD32(ctx->r5, 0XA0);
    // 0x801D1F64: beq         $v1, $zero, L_801D2170
    if (ctx->r3 == 0) {
        // 0x801D1F68: nop
    
            goto L_801D2170;
    }
    // 0x801D1F68: nop

    // 0x801D1F6C: beq         $a0, $zero, L_801D2170
    if (ctx->r4 == 0) {
        // 0x801D1F70: lui         $t6, 0x8016
        ctx->r14 = S32(0X8016 << 16);
            goto L_801D2170;
    }
    // 0x801D1F70: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x801D1F74: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x801D1F78: lui         $t7, 0x4
    ctx->r15 = S32(0X4 << 16);
    // 0x801D1F7C: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801D1F80: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x801D1F84: lhu         $t7, -0x520C($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X520C);
    // 0x801D1F88: addiu       $a2, $a2, -0x5DA8
    ctx->r6 = ADD32(ctx->r6, -0X5DA8);
    // 0x801D1F8C: sltiu       $at, $t7, 0x5
    ctx->r1 = ctx->r15 < 0X5 ? 1 : 0;
    // 0x801D1F90: beq         $at, $zero, L_801D1FE8
    if (ctx->r1 == 0) {
        // 0x801D1F94: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_801D1FE8;
    }
    // 0x801D1F94: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x801D1F98: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D1F9C: addu        $at, $at, $t7
    gpr jr_addend_801D1FA4 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x801D1FA0: lw          $t7, -0x2DA8($at)
    ctx->r15 = ADD32(ctx->r1, -0X2DA8);
    // 0x801D1FA4: jr          $t7
    // 0x801D1FA8: nop

    switch (jr_addend_801D1FA4 >> 2) {
        case 0: goto L_801D1FAC; break;
        case 1: goto L_801D1FB8; break;
        case 2: goto L_801D1FC4; break;
        case 3: goto L_801D1FD0; break;
        case 4: goto L_801D1FDC; break;
        default: switch_error(__func__, 0x801D1FA4, 0x8020D258);
    }
    // 0x801D1FA8: nop

L_801D1FAC:
    // 0x801D1FAC: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801D1FB0: b           L_801D1FE8
    // 0x801D1FB4: addiu       $a2, $a2, -0x5DA8
    ctx->r6 = ADD32(ctx->r6, -0X5DA8);
        goto L_801D1FE8;
    // 0x801D1FB4: addiu       $a2, $a2, -0x5DA8
    ctx->r6 = ADD32(ctx->r6, -0X5DA8);
L_801D1FB8:
    // 0x801D1FB8: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801D1FBC: b           L_801D1FE8
    // 0x801D1FC0: addiu       $a2, $a2, -0x5DA8
    ctx->r6 = ADD32(ctx->r6, -0X5DA8);
        goto L_801D1FE8;
    // 0x801D1FC0: addiu       $a2, $a2, -0x5DA8
    ctx->r6 = ADD32(ctx->r6, -0X5DA8);
L_801D1FC4:
    // 0x801D1FC4: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801D1FC8: b           L_801D1FE8
    // 0x801D1FCC: addiu       $a2, $a2, -0x5D80
    ctx->r6 = ADD32(ctx->r6, -0X5D80);
        goto L_801D1FE8;
    // 0x801D1FCC: addiu       $a2, $a2, -0x5D80
    ctx->r6 = ADD32(ctx->r6, -0X5D80);
L_801D1FD0:
    // 0x801D1FD0: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801D1FD4: b           L_801D1FE8
    // 0x801D1FD8: addiu       $a2, $a2, -0x5D58
    ctx->r6 = ADD32(ctx->r6, -0X5D58);
        goto L_801D1FE8;
    // 0x801D1FD8: addiu       $a2, $a2, -0x5D58
    ctx->r6 = ADD32(ctx->r6, -0X5D58);
L_801D1FDC:
    // 0x801D1FDC: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801D1FE0: b           L_801D1FE8
    // 0x801D1FE4: addiu       $a2, $a2, -0x5D58
    ctx->r6 = ADD32(ctx->r6, -0X5D58);
        goto L_801D1FE8;
    // 0x801D1FE4: addiu       $a2, $a2, -0x5D58
    ctx->r6 = ADD32(ctx->r6, -0X5D58);
L_801D1FE8:
    // 0x801D1FE8: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x801D1FEC: beq         $v0, $zero, L_801D2170
    if (ctx->r2 == 0) {
        // 0x801D1FF0: nop
    
            goto L_801D2170;
    }
    // 0x801D1FF0: nop

    // 0x801D1FF4: lbu         $t8, 0x2C0($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X2C0);
    // 0x801D1FF8: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x801D1FFC: beql        $t8, $zero, L_801D202C
    if (ctx->r24 == 0) {
        // 0x801D2000: addiu       $a0, $zero, 0xA
        ctx->r4 = ADD32(0, 0XA);
            goto L_801D202C;
    }
    goto skip_0;
    // 0x801D2000: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    skip_0:
    // 0x801D2004: lw          $t1, 0x1F8($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X1F8);
    // 0x801D2008: lw          $t2, 0x1FC($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X1FC);
    // 0x801D200C: lw          $a0, 0x1EC($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X1EC);
    // 0x801D2010: lw          $a3, 0x1F0($a1)
    ctx->r7 = MEM_W(ctx->r5, 0X1F0);
    // 0x801D2014: sltu        $at, $t2, $t1
    ctx->r1 = ctx->r10 < ctx->r9 ? 1 : 0;
    // 0x801D2018: bne         $at, $zero, L_801D203C
    if (ctx->r1 != 0) {
        // 0x801D201C: lw          $t0, 0x1F4($a1)
        ctx->r8 = MEM_W(ctx->r5, 0X1F4);
            goto L_801D203C;
    }
    // 0x801D201C: lw          $t0, 0x1F4($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X1F4);
    // 0x801D2020: b           L_801D203C
    // 0x801D2024: or          $t2, $t1, $zero
    ctx->r10 = ctx->r9 | 0;
        goto L_801D203C;
    // 0x801D2024: or          $t2, $t1, $zero
    ctx->r10 = ctx->r9 | 0;
    // 0x801D2028: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
L_801D202C:
    // 0x801D202C: addiu       $a3, $zero, 0xE
    ctx->r7 = ADD32(0, 0XE);
    // 0x801D2030: addiu       $t0, $zero, 0x136
    ctx->r8 = ADD32(0, 0X136);
    // 0x801D2034: addiu       $t1, $zero, 0xE0
    ctx->r9 = ADD32(0, 0XE0);
    // 0x801D2038: lw          $t2, 0x1FC($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X1FC);
L_801D203C:
    // 0x801D203C: sltiu       $at, $a0, 0xA
    ctx->r1 = ctx->r4 < 0XA ? 1 : 0;
    // 0x801D2040: beq         $at, $zero, L_801D204C
    if (ctx->r1 == 0) {
        // 0x801D2044: lui         $a1, 0x8021
        ctx->r5 = S32(0X8021 << 16);
            goto L_801D204C;
    }
    // 0x801D2044: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801D2048: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
L_801D204C:
    // 0x801D204C: sltiu       $at, $a0, 0x137
    ctx->r1 = ctx->r4 < 0X137 ? 1 : 0;
    // 0x801D2050: bnel        $at, $zero, L_801D2060
    if (ctx->r1 != 0) {
        // 0x801D2054: sltiu       $at, $a3, 0xE
        ctx->r1 = ctx->r7 < 0XE ? 1 : 0;
            goto L_801D2060;
    }
    goto skip_1;
    // 0x801D2054: sltiu       $at, $a3, 0xE
    ctx->r1 = ctx->r7 < 0XE ? 1 : 0;
    skip_1:
    // 0x801D2058: addiu       $a0, $zero, 0x136
    ctx->r4 = ADD32(0, 0X136);
    // 0x801D205C: sltiu       $at, $a3, 0xE
    ctx->r1 = ctx->r7 < 0XE ? 1 : 0;
L_801D2060:
    // 0x801D2060: beql        $at, $zero, L_801D2070
    if (ctx->r1 == 0) {
        // 0x801D2064: sltiu       $at, $a3, 0xE1
        ctx->r1 = ctx->r7 < 0XE1 ? 1 : 0;
            goto L_801D2070;
    }
    goto skip_2;
    // 0x801D2064: sltiu       $at, $a3, 0xE1
    ctx->r1 = ctx->r7 < 0XE1 ? 1 : 0;
    skip_2:
    // 0x801D2068: addiu       $a3, $zero, 0xE
    ctx->r7 = ADD32(0, 0XE);
    // 0x801D206C: sltiu       $at, $a3, 0xE1
    ctx->r1 = ctx->r7 < 0XE1 ? 1 : 0;
L_801D2070:
    // 0x801D2070: bnel        $at, $zero, L_801D2080
    if (ctx->r1 != 0) {
        // 0x801D2074: sltiu       $at, $t0, 0xA
        ctx->r1 = ctx->r8 < 0XA ? 1 : 0;
            goto L_801D2080;
    }
    goto skip_3;
    // 0x801D2074: sltiu       $at, $t0, 0xA
    ctx->r1 = ctx->r8 < 0XA ? 1 : 0;
    skip_3:
    // 0x801D2078: addiu       $a3, $zero, 0xE0
    ctx->r7 = ADD32(0, 0XE0);
    // 0x801D207C: sltiu       $at, $t0, 0xA
    ctx->r1 = ctx->r8 < 0XA ? 1 : 0;
L_801D2080:
    // 0x801D2080: beql        $at, $zero, L_801D2090
    if (ctx->r1 == 0) {
        // 0x801D2084: sltiu       $at, $t0, 0x137
        ctx->r1 = ctx->r8 < 0X137 ? 1 : 0;
            goto L_801D2090;
    }
    goto skip_4;
    // 0x801D2084: sltiu       $at, $t0, 0x137
    ctx->r1 = ctx->r8 < 0X137 ? 1 : 0;
    skip_4:
    // 0x801D2088: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x801D208C: sltiu       $at, $t0, 0x137
    ctx->r1 = ctx->r8 < 0X137 ? 1 : 0;
L_801D2090:
    // 0x801D2090: bnel        $at, $zero, L_801D20A0
    if (ctx->r1 != 0) {
        // 0x801D2094: sltiu       $at, $t1, 0xE
        ctx->r1 = ctx->r9 < 0XE ? 1 : 0;
            goto L_801D20A0;
    }
    goto skip_5;
    // 0x801D2094: sltiu       $at, $t1, 0xE
    ctx->r1 = ctx->r9 < 0XE ? 1 : 0;
    skip_5:
    // 0x801D2098: addiu       $t0, $zero, 0x136
    ctx->r8 = ADD32(0, 0X136);
    // 0x801D209C: sltiu       $at, $t1, 0xE
    ctx->r1 = ctx->r9 < 0XE ? 1 : 0;
L_801D20A0:
    // 0x801D20A0: beq         $at, $zero, L_801D20AC
    if (ctx->r1 == 0) {
        // 0x801D20A4: andi        $t6, $t0, 0x3FF
        ctx->r14 = ctx->r8 & 0X3FF;
            goto L_801D20AC;
    }
    // 0x801D20A4: andi        $t6, $t0, 0x3FF
    ctx->r14 = ctx->r8 & 0X3FF;
    // 0x801D20A8: addiu       $t1, $zero, 0xE
    ctx->r9 = ADD32(0, 0XE);
L_801D20AC:
    // 0x801D20AC: sltiu       $at, $t1, 0xE1
    ctx->r1 = ctx->r9 < 0XE1 ? 1 : 0;
    // 0x801D20B0: bne         $at, $zero, L_801D20BC
    if (ctx->r1 != 0) {
        // 0x801D20B4: sll         $t7, $t6, 14
        ctx->r15 = S32(ctx->r14 << 14);
            goto L_801D20BC;
    }
    // 0x801D20B4: sll         $t7, $t6, 14
    ctx->r15 = S32(ctx->r14 << 14);
    // 0x801D20B8: addiu       $t1, $zero, 0xE0
    ctx->r9 = ADD32(0, 0XE0);
L_801D20BC:
    // 0x801D20BC: sltiu       $at, $t2, 0xE
    ctx->r1 = ctx->r10 < 0XE ? 1 : 0;
    // 0x801D20C0: beql        $at, $zero, L_801D20D0
    if (ctx->r1 == 0) {
        // 0x801D20C4: sltiu       $at, $t2, 0xE1
        ctx->r1 = ctx->r10 < 0XE1 ? 1 : 0;
            goto L_801D20D0;
    }
    goto skip_6;
    // 0x801D20C4: sltiu       $at, $t2, 0xE1
    ctx->r1 = ctx->r10 < 0XE1 ? 1 : 0;
    skip_6:
    // 0x801D20C8: addiu       $t2, $zero, 0xE
    ctx->r10 = ADD32(0, 0XE);
    // 0x801D20CC: sltiu       $at, $t2, 0xE1
    ctx->r1 = ctx->r10 < 0XE1 ? 1 : 0;
L_801D20D0:
    // 0x801D20D0: bnel        $at, $zero, L_801D20E0
    if (ctx->r1 != 0) {
        // 0x801D20D4: sh          $a0, 0x48($v1)
        MEM_H(0X48, ctx->r3) = ctx->r4;
            goto L_801D20E0;
    }
    goto skip_7;
    // 0x801D20D4: sh          $a0, 0x48($v1)
    MEM_H(0X48, ctx->r3) = ctx->r4;
    skip_7:
    // 0x801D20D8: addiu       $t2, $zero, 0xE0
    ctx->r10 = ADD32(0, 0XE0);
    // 0x801D20DC: sh          $a0, 0x48($v1)
    MEM_H(0X48, ctx->r3) = ctx->r4;
L_801D20E0:
    // 0x801D20E0: sh          $a3, 0x4A($v1)
    MEM_H(0X4A, ctx->r3) = ctx->r7;
    // 0x801D20E4: sh          $t0, 0x4C($v1)
    MEM_H(0X4C, ctx->r3) = ctx->r8;
    // 0x801D20E8: sh          $t2, 0x4E($v1)
    MEM_H(0X4E, ctx->r3) = ctx->r10;
    // 0x801D20EC: lw          $a1, -0x1130($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1130);
    // 0x801D20F0: lui         $at, 0xF600
    ctx->r1 = S32(0XF600 << 16);
    // 0x801D20F4: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x801D20F8: addiu       $t3, $a1, 0x200
    ctx->r11 = ADD32(ctx->r5, 0X200);
    // 0x801D20FC: sw          $t9, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r25;
    // 0x801D2100: addiu       $t9, $t1, -0x1
    ctx->r25 = ADD32(ctx->r9, -0X1);
    // 0x801D2104: andi        $t6, $t9, 0x3FF
    ctx->r14 = ctx->r25 & 0X3FF;
    // 0x801D2108: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x801D210C: or          $t9, $t8, $t7
    ctx->r25 = ctx->r24 | ctx->r15;
    // 0x801D2110: addiu       $t5, $t3, 0x8
    ctx->r13 = ADD32(ctx->r11, 0X8);
    // 0x801D2114: sw          $a2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r6;
    // 0x801D2118: sw          $t9, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r25;
    // 0x801D211C: andi        $t7, $a3, 0x3FF
    ctx->r15 = ctx->r7 & 0X3FF;
    // 0x801D2120: andi        $t6, $a0, 0x3FF
    ctx->r14 = ctx->r4 & 0X3FF;
    // 0x801D2124: sll         $t8, $t6, 14
    ctx->r24 = S32(ctx->r14 << 14);
    // 0x801D2128: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x801D212C: or          $t6, $t8, $t9
    ctx->r14 = ctx->r24 | ctx->r25;
    // 0x801D2130: sw          $t6, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r14;
    // 0x801D2134: addiu       $v1, $t5, 0x8
    ctx->r3 = ADD32(ctx->r13, 0X8);
    // 0x801D2138: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x801D213C: lui         $t7, 0x600
    ctx->r15 = S32(0X600 << 16);
    // 0x801D2140: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x801D2144: addiu       $t8, $t8, -0x5DE0
    ctx->r24 = ADD32(ctx->r24, -0X5DE0);
    // 0x801D2148: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801D214C: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x801D2150: addiu       $a1, $v1, 0x8
    ctx->r5 = ADD32(ctx->r3, 0X8);
    // 0x801D2154: or          $t6, $t3, $at
    ctx->r14 = ctx->r11 | ctx->r1;
    // 0x801D2158: lui         $t9, 0xB800
    ctx->r25 = S32(0XB800 << 16);
    // 0x801D215C: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801D2160: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x801D2164: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x801D2168: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x801D216C: sw          $t7, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r15;
L_801D2170:
    // 0x801D2170: jr          $ra
    // 0x801D2174: nop

    TRACE_RETURN()
    return;
    // 0x801D2174: nop

;}
RECOMP_FUNC void func_801F6988_621D68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F6988: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F698C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F6990: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801F6994: jal         0x801F703C
    // 0x801F6998: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801F703C_62241C(rdram, ctx);
        goto after_0;
    // 0x801F6998: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F699C: jal         0x801F7074
    // 0x801F69A0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801F7074_622454(rdram, ctx);
        goto after_1;
    // 0x801F69A0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x801F69A4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F69A8: addiu       $a1, $a1, -0x4D58
    ctx->r5 = ADD32(ctx->r5, -0X4D58);
    // 0x801F69AC: jal         0x801D31CC
    // 0x801F69B0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_2;
    // 0x801F69B0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x801F69B4: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x801F69B8: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F69BC: addiu       $a0, $a0, 0x69E0
    ctx->r4 = ADD32(ctx->r4, 0X69E0);
    // 0x801F69C0: lw          $t6, 0xEC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XEC);
    // 0x801F69C4: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x801F69C8: jal         0x8003521C
    // 0x801F69CC: sw          $t7, 0xEC($v0)
    MEM_W(0XEC, ctx->r2) = ctx->r15;
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801F69CC: sw          $t7, 0xEC($v0)
    MEM_W(0XEC, ctx->r2) = ctx->r15;
    after_3:
    // 0x801F69D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F69D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F69D8: jr          $ra
    // 0x801F69DC: nop

    TRACE_RETURN()
    return;
    // 0x801F69DC: nop

;}
RECOMP_FUNC void func_801F4860_61FC40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F4860: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801F4864: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F4868: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x801F486C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x801F4870: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x801F4874: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801F4878: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801F487C: jal         0x801D3A18
    // 0x801F4880: sw          $t6, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->r14;
    func_801D3A18_5FEDF8(rdram, ctx);
        goto after_0;
    // 0x801F4880: sw          $t6, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->r14;
    after_0:
    // 0x801F4884: beq         $v0, $zero, L_801F489C
    if (ctx->r2 == 0) {
        // 0x801F4888: nop
    
            goto L_801F489C;
    }
    // 0x801F4888: nop

    // 0x801F488C: jal         0x801F701C
    // 0x801F4890: nop

    func_801F701C_6223FC(rdram, ctx);
        goto after_1;
    // 0x801F4890: nop

    after_1:
    // 0x801F4894: b           L_801F48A8
    // 0x801F4898: lwc1        $f4, 0x74($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X74);
        goto L_801F48A8;
    // 0x801F4898: lwc1        $f4, 0x74($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X74);
L_801F489C:
    // 0x801F489C: jal         0x801F705C
    // 0x801F48A0: nop

    func_801F705C_62243C(rdram, ctx);
        goto after_2;
    // 0x801F48A0: nop

    after_2:
    // 0x801F48A4: lwc1        $f4, 0x74($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X74);
L_801F48A8:
    // 0x801F48A8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801F48AC: lui         $at, 0x405E
    ctx->r1 = S32(0X405E << 16);
    // 0x801F48B0: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x801F48B4: nop

    // 0x801F48B8: bc1fl       L_801F4924
    if (!c1cs) {
        // 0x801F48BC: lwc1        $f8, 0x94($s0)
        ctx->f8.u32l = MEM_W(ctx->r16, 0X94);
            goto L_801F4924;
    }
    goto skip_0;
    // 0x801F48BC: lwc1        $f8, 0x94($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X94);
    skip_0:
    // 0x801F48C0: lwc1        $f8, 0x94($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X94);
    // 0x801F48C4: lui         $at, 0x4054
    ctx->r1 = S32(0X4054 << 16);
    // 0x801F48C8: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x801F48CC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801F48D0: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801F48D4: lwc1        $f4, 0x28($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X28);
    // 0x801F48D8: div.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = DIV_D(ctx->f10.d, ctx->f16.d);
    // 0x801F48DC: lui         $at, 0x4014
    ctx->r1 = S32(0X4014 << 16);
    // 0x801F48E0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801F48E4: add.d       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f18.d); 
    ctx->f8.d = ctx->f6.d + ctx->f18.d;
    // 0x801F48E8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801F48EC: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x801F48F0: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x801F48F4: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801F48F8: swc1        $f10, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f10.u32l;
    // 0x801F48FC: lwc1        $f16, 0x28($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X28);
    // 0x801F4900: cvt.d.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.d = CVT_D_S(ctx->f16.fl);
    // 0x801F4904: c.le.d      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.d <= ctx->f4.d;
    // 0x801F4908: nop

    // 0x801F490C: bc1f        L_801F497C
    if (!c1cs) {
        // 0x801F4910: nop
    
            goto L_801F497C;
    }
    // 0x801F4910: nop

    // 0x801F4914: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801F4918: b           L_801F497C
    // 0x801F491C: swc1        $f18, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f18.u32l;
        goto L_801F497C;
    // 0x801F491C: swc1        $f18, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f18.u32l;
    // 0x801F4920: lwc1        $f8, 0x94($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X94);
L_801F4924:
    // 0x801F4924: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x801F4928: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801F492C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801F4930: lwc1        $f6, 0x28($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X28);
    // 0x801F4934: div.d       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = DIV_D(ctx->f10.d, ctx->f16.d);
    // 0x801F4938: lui         $at, 0x4022
    ctx->r1 = S32(0X4022 << 16);
    // 0x801F493C: cvt.d.s     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f18.d = CVT_D_S(ctx->f6.fl);
    // 0x801F4940: add.d       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = ctx->f18.d + ctx->f4.d;
    // 0x801F4944: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801F4948: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x801F494C: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x801F4950: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801F4954: swc1        $f10, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f10.u32l;
    // 0x801F4958: lwc1        $f16, 0x28($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X28);
    // 0x801F495C: cvt.d.s     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f6.d = CVT_D_S(ctx->f16.fl);
    // 0x801F4960: c.le.d      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.d <= ctx->f6.d;
    // 0x801F4964: nop

    // 0x801F4968: bc1f        L_801F497C
    if (!c1cs) {
        // 0x801F496C: nop
    
            goto L_801F497C;
    }
    // 0x801F496C: nop

    // 0x801F4970: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F4974: nop

    // 0x801F4978: swc1        $f4, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f4.u32l;
L_801F497C:
    // 0x801F497C: jal         0x801D60E4
    // 0x801F4980: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801D60E4_6014C4(rdram, ctx);
        goto after_3;
    // 0x801F4980: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x801F4984: lui         $a1, 0xBE99
    ctx->r5 = S32(0XBE99 << 16);
    // 0x801F4988: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x801F498C: jal         0x801D6508
    // 0x801F4990: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801D6508_6018E8(rdram, ctx);
        goto after_4;
    // 0x801F4990: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x801F4994: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801F4998: lwc1        $f10, 0x74($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X74);
    // 0x801F499C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801F49A0: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x801F49A4: nop

    // 0x801F49A8: bc1fl       L_801F4A28
    if (!c1cs) {
        // 0x801F49AC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801F4A28;
    }
    goto skip_1;
    // 0x801F49AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x801F49B0: jal         0x801F718C
    // 0x801F49B4: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    func_801F718C_62256C(rdram, ctx);
        goto after_5;
    // 0x801F49B4: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    after_5:
    // 0x801F49B8: bne         $v0, $zero, L_801F4A24
    if (ctx->r2 != 0) {
        // 0x801F49BC: lui         $at, 0x4000
        ctx->r1 = S32(0X4000 << 16);
            goto L_801F4A24;
    }
    // 0x801F49BC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801F49C0: lwc1        $f16, 0x74($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X74);
    // 0x801F49C4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F49C8: addiu       $t7, $zero, 0x28
    ctx->r15 = ADD32(0, 0X28);
    // 0x801F49CC: sw          $t7, 0x7C($s1)
    MEM_W(0X7C, ctx->r17) = ctx->r15;
    // 0x801F49D0: div.s       $f18, $f16, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f6.fl);
    // 0x801F49D4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F49D8: lui         $a3, 0x44BB
    ctx->r7 = S32(0X44BB << 16);
    // 0x801F49DC: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x801F49E0: addiu       $a0, $zero, 0x282
    ctx->r4 = ADD32(0, 0X282);
    // 0x801F49E4: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x801F49E8: swc1        $f18, 0x74($s1)
    MEM_W(0X74, ctx->r17) = ctx->f18.u32l;
    // 0x801F49EC: lw          $a1, -0x1130($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1130);
    // 0x801F49F0: jal         0x8000F3D8
    // 0x801F49F4: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    func_8000F3D8_FFD8(rdram, ctx);
        goto after_6;
    // 0x801F49F4: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    after_6:
    // 0x801F49F8: lui         $a1, 0x3F4C
    ctx->r5 = S32(0X3F4C << 16);
    // 0x801F49FC: lui         $a2, 0x3F19
    ctx->r6 = S32(0X3F19 << 16);
    // 0x801F4A00: lui         $a3, 0x3ECC
    ctx->r7 = S32(0X3ECC << 16);
    // 0x801F4A04: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x801F4A08: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x801F4A0C: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x801F4A10: jal         0x801F74E4
    // 0x801F4A14: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801F74E4_6228C4(rdram, ctx);
        goto after_7;
    // 0x801F4A14: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_7:
    // 0x801F4A18: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F4A1C: jal         0x8003521C
    // 0x801F4A20: addiu       $a0, $a0, 0x4A38
    ctx->r4 = ADD32(ctx->r4, 0X4A38);
    func_8003521C_35E1C(rdram, ctx);
        goto after_8;
    // 0x801F4A20: addiu       $a0, $a0, 0x4A38
    ctx->r4 = ADD32(ctx->r4, 0X4A38);
    after_8:
L_801F4A24:
    // 0x801F4A24: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801F4A28:
    // 0x801F4A28: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x801F4A2C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x801F4A30: jr          $ra
    // 0x801F4A34: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x801F4A34: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_801FCE74_628254(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FCE74: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801FCE78: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801FCE7C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801FCE80: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801FCE84: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801FCE88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801FCE8C: jal         0x801D3EC8
    // 0x801FCE90: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_801D3EC8_5FF2A8(rdram, ctx);
        goto after_0;
    // 0x801FCE90: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x801FCE94: jal         0x801D614C
    // 0x801FCE98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D614C_60152C(rdram, ctx);
        goto after_1;
    // 0x801FCE98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801FCE9C: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x801FCEA0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801FCEA4: lwc1        $f4, -0x156C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X156C);
    // 0x801FCEA8: lwc1        $f0, 0x10($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801FCEAC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801FCEB0: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x801FCEB4: nop

    // 0x801FCEB8: bc1fl       L_801FCF58
    if (!c1cs) {
        // 0x801FCEBC: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_801FCF58;
    }
    goto skip_0;
    // 0x801FCEBC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x801FCEC0: lwc1        $f6, -0x1568($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1568);
    // 0x801FCEC4: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x801FCEC8: nop

    // 0x801FCECC: bc1fl       L_801FCF58
    if (!c1cs) {
        // 0x801FCED0: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_801FCF58;
    }
    goto skip_1;
    // 0x801FCED0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x801FCED4: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801FCED8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801FCEDC: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x801FCEE0: lui         $a2, 0xC352
    ctx->r6 = S32(0XC352 << 16);
    // 0x801FCEE4: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x801FCEE8: lui         $a3, 0xC448
    ctx->r7 = S32(0XC448 << 16);
    // 0x801FCEEC: bc1fl       L_801FCF20
    if (!c1cs) {
        // 0x801FCEF0: mtc1        $at, $f12
        ctx->f12.u32l = ctx->r1;
            goto L_801FCF20;
    }
    goto skip_2;
    // 0x801FCEF0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    skip_2:
    // 0x801FCEF4: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x801FCEF8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801FCEFC: lui         $at, 0xC3FA
    ctx->r1 = S32(0XC3FA << 16);
    // 0x801FCF00: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x801FCF04: lui         $a2, 0xC352
    ctx->r6 = S32(0XC352 << 16);
    // 0x801FCF08: lui         $a3, 0xC448
    ctx->r7 = S32(0XC448 << 16);
    // 0x801FCF0C: jal         0x8000E39C
    // 0x801FCF10: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8000E39C_EF9C(rdram, ctx);
        goto after_2;
    // 0x801FCF10: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_2:
    // 0x801FCF14: b           L_801FCF34
    // 0x801FCF18: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
        goto L_801FCF34;
    // 0x801FCF18: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x801FCF1C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
L_801FCF20:
    // 0x801FCF20: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x801FCF24: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x801FCF28: jal         0x8000E39C
    // 0x801FCF2C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8000E39C_EF9C(rdram, ctx);
        goto after_3;
    // 0x801FCF2C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_3:
    // 0x801FCF30: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
L_801FCF34:
    // 0x801FCF34: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801FCF38: addiu       $a1, $a1, -0x4BE8
    ctx->r5 = ADD32(ctx->r5, -0X4BE8);
    // 0x801FCF3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801FCF40: jal         0x801D31CC
    // 0x801FCF44: sh          $zero, 0x16($t6)
    MEM_H(0X16, ctx->r14) = 0;
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_4;
    // 0x801FCF44: sh          $zero, 0x16($t6)
    MEM_H(0X16, ctx->r14) = 0;
    after_4:
    // 0x801FCF48: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FCF4C: jal         0x8003521C
    // 0x801FCF50: addiu       $a0, $a0, -0x3098
    ctx->r4 = ADD32(ctx->r4, -0X3098);
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x801FCF50: addiu       $a0, $a0, -0x3098
    ctx->r4 = ADD32(ctx->r4, -0X3098);
    after_5:
    // 0x801FCF54: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801FCF58:
    // 0x801FCF58: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801FCF5C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801FCF60: jr          $ra
    // 0x801FCF64: nop

    TRACE_RETURN()
    return;
    // 0x801FCF64: nop

;}
RECOMP_FUNC void func_801F2FA0_61E380(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F2FA0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801F2FA4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801F2FA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F2FAC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801F2FB0: jal         0x801D2F40
    // 0x801F2FB4: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    func_801D2F40_5FE320(rdram, ctx);
        goto after_0;
    // 0x801F2FB4: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    after_0:
    // 0x801F2FB8: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801F2FBC: jal         0x801F76D0
    // 0x801F2FC0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_801F76D0_622AB0(rdram, ctx);
        goto after_1;
    // 0x801F2FC0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x801F2FC4: jal         0x801D60E4
    // 0x801F2FC8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_801D60E4_6014C4(rdram, ctx);
        goto after_2;
    // 0x801F2FC8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x801F2FCC: jal         0x801F732C
    // 0x801F2FD0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_801F732C_62270C(rdram, ctx);
        goto after_3;
    // 0x801F2FD0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_3:
    // 0x801F2FD4: beq         $v0, $zero, L_801F2FFC
    if (ctx->r2 == 0) {
        // 0x801F2FD8: lwc1        $f4, 0x1C($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
            goto L_801F2FFC;
    }
    // 0x801F2FD8: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x801F2FDC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801F2FE0: nop

    // 0x801F2FE4: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x801F2FE8: nop

    // 0x801F2FEC: bc1fl       L_801F3000
    if (!c1cs) {
        // 0x801F2FF0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801F3000;
    }
    goto skip_0;
    // 0x801F2FF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801F2FF4: jal         0x801F0540
    // 0x801F2FF8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_801F0540_61B920(rdram, ctx);
        goto after_4;
    // 0x801F2FF8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_4:
L_801F2FFC:
    // 0x801F2FFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F3000:
    // 0x801F3000: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801F3004: jr          $ra
    // 0x801F3008: nop

    TRACE_RETURN()
    return;
    // 0x801F3008: nop

;}
RECOMP_FUNC void func_801D39A0_5FED80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D39A0: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801D39A4: lw          $v1, -0x1130($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1130);
    // 0x801D39A8: lw          $v0, 0x68($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X68);
    // 0x801D39AC: slti        $at, $v0, 0x3E7
    ctx->r1 = SIGNED(ctx->r2) < 0X3E7 ? 1 : 0;
    // 0x801D39B0: bne         $at, $zero, L_801D39C0
    if (ctx->r1 != 0) {
        // 0x801D39B4: nop
    
            goto L_801D39C0;
    }
    // 0x801D39B4: nop

    // 0x801D39B8: addiu       $v0, $zero, 0x3E7
    ctx->r2 = ADD32(0, 0X3E7);
    // 0x801D39BC: sw          $v0, 0x68($v1)
    MEM_W(0X68, ctx->r3) = ctx->r2;
L_801D39C0:
    // 0x801D39C0: bgtzl       $v0, L_801D39D8
    if (SIGNED(ctx->r2) > 0) {
        // 0x801D39C4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801D39D8;
    }
    goto skip_0;
    // 0x801D39C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x801D39C8: sw          $zero, 0x68($v1)
    MEM_W(0X68, ctx->r3) = 0;
    // 0x801D39CC: jr          $ra
    // 0x801D39D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x801D39D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801D39D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D39D8:
    // 0x801D39D8: jr          $ra
    // 0x801D39DC: nop

    TRACE_RETURN()
    return;
    // 0x801D39DC: nop

;}
RECOMP_FUNC void func_801EE4B4_619894(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EE4B4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801EE4B8: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x801EE4BC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801EE4C0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801EE4C4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801EE4C8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801EE4CC: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801EE4D0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801EE4D4: lwc1        $f4, 0x94($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X94);
    // 0x801EE4D8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801EE4DC: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801EE4E0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801EE4E4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801EE4E8: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x801EE4EC: swc1        $f8, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->f8.u32l;
    // 0x801EE4F0: lwc1        $f0, 0x94($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X94);
    // 0x801EE4F4: c.le.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl <= ctx->f0.fl;
    // 0x801EE4F8: nop

    // 0x801EE4FC: bc1fl       L_801EE510
    if (!c1cs) {
        // 0x801EE500: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_801EE510;
    }
    goto skip_0;
    // 0x801EE500: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_0:
    // 0x801EE504: b           L_801EE510
    // 0x801EE508: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
        goto L_801EE510;
    // 0x801EE508: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x801EE50C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_801EE510:
    // 0x801EE510: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x801EE514: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x801EE518: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x801EE51C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x801EE520: cvt.w.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    ctx->f10.u32l = CVT_W_S(ctx->f2.fl);
    // 0x801EE524: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x801EE528: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x801EE52C: nop

    // 0x801EE530: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x801EE534: beql        $a3, $zero, L_801EE584
    if (ctx->r7 == 0) {
        // 0x801EE538: mfc1        $a3, $f10
        ctx->r7 = (int32_t)ctx->f10.u32l;
            goto L_801EE584;
    }
    goto skip_1;
    // 0x801EE538: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    skip_1:
    // 0x801EE53C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801EE540: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801EE544: sub.s       $f10, $f2, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f10.fl;
    // 0x801EE548: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x801EE54C: nop

    // 0x801EE550: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x801EE554: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x801EE558: nop

    // 0x801EE55C: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x801EE560: bne         $a3, $zero, L_801EE578
    if (ctx->r7 != 0) {
        // 0x801EE564: nop
    
            goto L_801EE578;
    }
    // 0x801EE564: nop

    // 0x801EE568: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x801EE56C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801EE570: b           L_801EE590
    // 0x801EE574: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
        goto L_801EE590;
    // 0x801EE574: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
L_801EE578:
    // 0x801EE578: b           L_801EE590
    // 0x801EE57C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
        goto L_801EE590;
    // 0x801EE57C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x801EE580: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
L_801EE584:
    // 0x801EE584: nop

    // 0x801EE588: bltz        $a3, L_801EE578
    if (SIGNED(ctx->r7) < 0) {
        // 0x801EE58C: nop
    
            goto L_801EE578;
    }
    // 0x801EE58C: nop

L_801EE590:
    // 0x801EE590: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x801EE594: andi        $t7, $a3, 0xFFFF
    ctx->r15 = ctx->r7 & 0XFFFF;
    // 0x801EE598: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x801EE59C: jal         0x801D15BC
    // 0x801EE5A0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_801D15BC_5FC99C(rdram, ctx);
        goto after_0;
    // 0x801EE5A0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_0:
    // 0x801EE5A4: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x801EE5A8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801EE5AC: lwc1        $f0, 0x94($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X94);
    // 0x801EE5B0: c.eq.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl == ctx->f0.fl;
    // 0x801EE5B4: nop

    // 0x801EE5B8: bc1f        L_801EE5CC
    if (!c1cs) {
        // 0x801EE5BC: nop
    
            goto L_801EE5CC;
    }
    // 0x801EE5BC: nop

    // 0x801EE5C0: jal         0x80038BC8
    // 0x801EE5C4: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    func_80038BC8_397C8(rdram, ctx);
        goto after_1;
    // 0x801EE5C4: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    after_1:
    // 0x801EE5C8: lwc1        $f0, 0x94($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X94);
L_801EE5CC:
    // 0x801EE5CC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EE5D0: lwc1        $f18, -0x1D50($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1D50);
    // 0x801EE5D4: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801EE5D8: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x801EE5DC: nop

    // 0x801EE5E0: bc1fl       L_801EE5F4
    if (!c1cs) {
        // 0x801EE5E4: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_801EE5F4;
    }
    goto skip_2;
    // 0x801EE5E4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_2:
    // 0x801EE5E8: jal         0x8003521C
    // 0x801EE5EC: addiu       $a0, $a0, -0x19FC
    ctx->r4 = ADD32(ctx->r4, -0X19FC);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801EE5EC: addiu       $a0, $a0, -0x19FC
    ctx->r4 = ADD32(ctx->r4, -0X19FC);
    after_2:
    // 0x801EE5F0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801EE5F4:
    // 0x801EE5F4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801EE5F8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801EE5FC: jr          $ra
    // 0x801EE600: nop

    TRACE_RETURN()
    return;
    // 0x801EE600: nop

;}
RECOMP_FUNC void func_801D67FC_601BDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D67FC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801D6800: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D6804: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801D6808: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x801D680C: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x801D6810: mtc1        $a1, $f14
    ctx->f14.u32l = ctx->r5;
    // 0x801D6814: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x801D6818: lwc1        $f0, 0x10($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801D681C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801D6820: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x801D6824: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x801D6828: nop

    // 0x801D682C: bc1fl       L_801D684C
    if (!c1cs) {
        // 0x801D6830: c.lt.s      $f8, $f0
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
            goto L_801D684C;
    }
    goto skip_0;
    // 0x801D6830: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    skip_0:
    // 0x801D6834: lwc1        $f4, 0x78($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X78);
    // 0x801D6838: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x801D683C: add.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x801D6840: b           L_801D68F8
    // 0x801D6844: swc1        $f6, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f6.u32l;
        goto L_801D68F8;
    // 0x801D6844: swc1        $f6, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f6.u32l;
    // 0x801D6848: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
L_801D684C:
    // 0x801D684C: nop

    // 0x801D6850: bc1fl       L_801D6870
    if (!c1cs) {
        // 0x801D6854: lwc1        $f0, 0x78($a2)
        ctx->f0.u32l = MEM_W(ctx->r6, 0X78);
            goto L_801D6870;
    }
    goto skip_1;
    // 0x801D6854: lwc1        $f0, 0x78($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X78);
    skip_1:
    // 0x801D6858: lwc1        $f10, 0x78($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X78);
    // 0x801D685C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x801D6860: sub.s       $f16, $f10, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f12.fl;
    // 0x801D6864: b           L_801D68F8
    // 0x801D6868: swc1        $f16, 0x78($a2)
    MEM_W(0X78, ctx->r6) = ctx->f16.u32l;
        goto L_801D68F8;
    // 0x801D6868: swc1        $f16, 0x78($a2)
    MEM_W(0X78, ctx->r6) = ctx->f16.u32l;
    // 0x801D686C: lwc1        $f0, 0x78($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X78);
L_801D6870:
    // 0x801D6870: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801D6874: nop

    // 0x801D6878: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x801D687C: nop

    // 0x801D6880: bc1fl       L_801D6898
    if (!c1cs) {
        // 0x801D6884: mtc1        $zero, $f6
        ctx->f6.u32l = 0;
            goto L_801D6898;
    }
    goto skip_2;
    // 0x801D6884: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    skip_2:
    // 0x801D6888: add.s       $f4, $f0, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f12.fl;
    // 0x801D688C: b           L_801D68F4
    // 0x801D6890: swc1        $f4, 0x78($a2)
    MEM_W(0X78, ctx->r6) = ctx->f4.u32l;
        goto L_801D68F4;
    // 0x801D6890: swc1        $f4, 0x78($a2)
    MEM_W(0X78, ctx->r6) = ctx->f4.u32l;
    // 0x801D6894: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
L_801D6898:
    // 0x801D6898: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    // 0x801D689C: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x801D68A0: nop

    // 0x801D68A4: bc1f        L_801D68B8
    if (!c1cs) {
        // 0x801D68A8: nop
    
            goto L_801D68B8;
    }
    // 0x801D68A8: nop

    // 0x801D68AC: sub.s       $f8, $f0, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x801D68B0: b           L_801D68F4
    // 0x801D68B4: swc1        $f8, 0x78($a2)
    MEM_W(0X78, ctx->r6) = ctx->f8.u32l;
        goto L_801D68F4;
    // 0x801D68B4: swc1        $f8, 0x78($a2)
    MEM_W(0X78, ctx->r6) = ctx->f8.u32l;
L_801D68B8:
    // 0x801D68B8: jal         0x8000DD58
    // 0x801D68BC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_8000DD58_E958(rdram, ctx);
        goto after_0;
    // 0x801D68BC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x801D68C0: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x801D68C4: lui         $at, 0x4049
    ctx->r1 = S32(0X4049 << 16);
    // 0x801D68C8: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x801D68CC: cvt.d.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.d = CVT_D_W(ctx->f10.u32l);
    // 0x801D68D0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801D68D4: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x801D68D8: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x801D68DC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801D68E0: sub.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d - ctx->f18.d;
    // 0x801D68E4: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x801D68E8: div.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f4.d, ctx->f6.d);
    // 0x801D68EC: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801D68F0: swc1        $f10, 0x78($a2)
    MEM_W(0X78, ctx->r6) = ctx->f10.u32l;
L_801D68F4:
    // 0x801D68F4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_801D68F8:
    // 0x801D68F8: lwc1        $f2, 0x30($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X30);
    // 0x801D68FC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801D6900: addiu       $a0, $a2, 0x78
    ctx->r4 = ADD32(ctx->r6, 0X78);
    // 0x801D6904: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
    // 0x801D6908: nop

    // 0x801D690C: bc1fl       L_801D6920
    if (!c1cs) {
        // 0x801D6910: mov.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
            goto L_801D6920;
    }
    goto skip_3;
    // 0x801D6910: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    skip_3:
    // 0x801D6914: b           L_801D6920
    // 0x801D6918: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
        goto L_801D6920;
    // 0x801D6918: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x801D691C: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_801D6920:
    // 0x801D6920: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x801D6924: sb          $v1, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r3;
    // 0x801D6928: jal         0x801D725C
    // 0x801D692C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_801D725C_60263C(rdram, ctx);
        goto after_1;
    // 0x801D692C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_1:
    // 0x801D6930: jal         0x801D60CC
    // 0x801D6934: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_801D60CC_6014AC(rdram, ctx);
        goto after_2;
    // 0x801D6934: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x801D6938: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D693C: lbu         $v0, 0x1B($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X1B);
    // 0x801D6940: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801D6944: jr          $ra
    // 0x801D6948: nop

    TRACE_RETURN()
    return;
    // 0x801D6948: nop

;}
RECOMP_FUNC void func_801DBF20_607300(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DBF20: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801DBF24: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801DBF28: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x801DBF2C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801DBF30: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801DBF34: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801DBF38: lw          $a3, 0x8($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X8);
    // 0x801DBF3C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801DBF40: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801DBF44: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801DBF48: lui         $a1, 0x801
    ctx->r5 = S32(0X801 << 16);
    // 0x801DBF4C: addiu       $a1, $a1, -0x5580
    ctx->r5 = ADD32(ctx->r5, -0X5580);
    // 0x801DBF50: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801DBF54: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801DBF58: addiu       $t6, $zero, 0x100
    ctx->r14 = ADD32(0, 0X100);
    // 0x801DBF5C: addiu       $t7, $zero, 0x4A8
    ctx->r15 = ADD32(0, 0X4A8);
    // 0x801DBF60: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x801DBF64: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x801DBF68: addiu       $a2, $a2, -0x5488
    ctx->r6 = ADD32(ctx->r6, -0X5488);
    // 0x801DBF6C: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801DBF70: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801DBF74: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801DBF78: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801DBF7C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801DBF80: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801DBF84: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x801DBF88: jal         0x8000DBF0
    // 0x801DBF8C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_0;
    // 0x801DBF8C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x801DBF90: beq         $v0, $zero, L_801DBFA0
    if (ctx->r2 == 0) {
        // 0x801DBF94: addiu       $t8, $zero, 0x6
        ctx->r24 = ADD32(0, 0X6);
            goto L_801DBFA0;
    }
    // 0x801DBF94: addiu       $t8, $zero, 0x6
    ctx->r24 = ADD32(0, 0X6);
    // 0x801DBF98: b           L_801DBFA4
    // 0x801DBF9C: sb          $t8, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r24;
        goto L_801DBFA4;
    // 0x801DBF9C: sb          $t8, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r24;
L_801DBFA0:
    // 0x801DBFA0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801DBFA4:
    // 0x801DBFA4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801DBFA8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x801DBFAC: jr          $ra
    // 0x801DBFB0: nop

    TRACE_RETURN()
    return;
    // 0x801DBFB0: nop

;}
RECOMP_FUNC void func_801FA688_625A68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FA688: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801FA68C: lui         $at, 0xC396
    ctx->r1 = S32(0XC396 << 16);
    // 0x801FA690: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801FA694: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801FA698: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x801FA69C: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x801FA6A0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801FA6A4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801FA6A8: lwc1        $f4, 0x10($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X10);
    // 0x801FA6AC: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801FA6B0: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801FA6B4: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801FA6B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801FA6BC: swc1        $f8, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f8.u32l;
    // 0x801FA6C0: lwc1        $f10, 0x10($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X10);
    // 0x801FA6C4: c.lt.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl < ctx->f2.fl;
    // 0x801FA6C8: nop

    // 0x801FA6CC: bc1f        L_801FA6D8
    if (!c1cs) {
        // 0x801FA6D0: nop
    
            goto L_801FA6D8;
    }
    // 0x801FA6D0: nop

    // 0x801FA6D4: swc1        $f2, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f2.u32l;
L_801FA6D8:
    // 0x801FA6D8: jal         0x801D2F40
    // 0x801FA6DC: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    func_801D2F40_5FE320(rdram, ctx);
        goto after_0;
    // 0x801FA6DC: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    after_0:
    // 0x801FA6E0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801FA6E4: lui         $at, 0xC396
    ctx->r1 = S32(0XC396 << 16);
    // 0x801FA6E8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801FA6EC: c.eq.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl == ctx->f16.fl;
    // 0x801FA6F0: nop

    // 0x801FA6F4: bc1fl       L_801FA760
    if (!c1cs) {
        // 0x801FA6F8: lui         $at, 0x41A0
        ctx->r1 = S32(0X41A0 << 16);
            goto L_801FA760;
    }
    goto skip_0;
    // 0x801FA6F8: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    skip_0:
    // 0x801FA6FC: lwc1        $f18, 0x10($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801FA700: c.le.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl <= ctx->f2.fl;
    // 0x801FA704: nop

    // 0x801FA708: bc1fl       L_801FA760
    if (!c1cs) {
        // 0x801FA70C: lui         $at, 0x41A0
        ctx->r1 = S32(0X41A0 << 16);
            goto L_801FA760;
    }
    goto skip_1;
    // 0x801FA70C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    skip_1:
    // 0x801FA710: jal         0x80038BC8
    // 0x801FA714: addiu       $a0, $zero, 0x245
    ctx->r4 = ADD32(0, 0X245);
    func_80038BC8_397C8(rdram, ctx);
        goto after_1;
    // 0x801FA714: addiu       $a0, $zero, 0x245
    ctx->r4 = ADD32(0, 0X245);
    after_1:
    // 0x801FA718: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x801FA71C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801FA720: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x801FA724: lw          $a2, 0xC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC);
    // 0x801FA728: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801FA72C: lui         $a3, 0xC3F0
    ctx->r7 = S32(0XC3F0 << 16);
    // 0x801FA730: jal         0x801DF868
    // 0x801FA734: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_801DF868_60AC48(rdram, ctx);
        goto after_2;
    // 0x801FA734: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x801FA738: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801FA73C: lw          $t7, -0x1130($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1130);
    // 0x801FA740: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x801FA744: addiu       $t8, $zero, 0x28
    ctx->r24 = ADD32(0, 0X28);
    // 0x801FA748: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FA74C: sb          $t6, 0x2C1($t7)
    MEM_B(0X2C1, ctx->r15) = ctx->r14;
    // 0x801FA750: sw          $t8, 0x7C($s1)
    MEM_W(0X7C, ctx->r17) = ctx->r24;
    // 0x801FA754: jal         0x8003521C
    // 0x801FA758: addiu       $a0, $a0, -0x5828
    ctx->r4 = ADD32(ctx->r4, -0X5828);
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801FA758: addiu       $a0, $a0, -0x5828
    ctx->r4 = ADD32(ctx->r4, -0X5828);
    after_3:
    // 0x801FA75C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
L_801FA760:
    // 0x801FA760: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801FA764: lwc1        $f6, 0x90($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X90);
    // 0x801FA768: lui         $at, 0x401A
    ctx->r1 = S32(0X401A << 16);
    // 0x801FA76C: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x801FA770: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801FA774: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801FA778: lui         $a3, 0x3F4C
    ctx->r7 = S32(0X3F4C << 16);
    // 0x801FA77C: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x801FA780: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x801FA784: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801FA788: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x801FA78C: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801FA790: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x801FA794: swc1        $f18, 0x90($s1)
    MEM_W(0X90, ctx->r17) = ctx->f18.u32l;
    // 0x801FA798: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801FA79C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801FA7A0: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801FA7A4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801FA7A8: lwc1        $f8, 0x90($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X90);
    // 0x801FA7AC: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801FA7B0: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801FA7B4: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x801FA7B8: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801FA7BC: jal         0x801DFB90
    // 0x801FA7C0: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    func_801DFB90_60AF70(rdram, ctx);
        goto after_4;
    // 0x801FA7C0: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    after_4:
    // 0x801FA7C4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x801FA7C8: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x801FA7CC: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x801FA7D0: jr          $ra
    // 0x801FA7D4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x801FA7D4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_801FD30C_6286EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FD30C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801FD310: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801FD314: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801FD318: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801FD31C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x801FD320: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x801FD324: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801FD328: lui         $a1, 0xC4AF
    ctx->r5 = S32(0XC4AF << 16);
    // 0x801FD32C: jal         0x801D641C
    // 0x801FD330: swc1        $f4, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f4.u32l;
    func_801D641C_6017FC(rdram, ctx);
        goto after_0;
    // 0x801FD330: swc1        $f4, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f4.u32l;
    after_0:
    // 0x801FD334: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801FD338: lw          $t6, -0x10C0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X10C0);
    // 0x801FD33C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801FD340: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801FD344: addiu       $a2, $zero, 0x4C
    ctx->r6 = ADD32(0, 0X4C);
    // 0x801FD348: jal         0x801E4194
    // 0x801FD34C: lbu         $a3, 0x817($t6)
    ctx->r7 = MEM_BU(ctx->r14, 0X817);
    func_801E4194_60F574(rdram, ctx);
        goto after_1;
    // 0x801FD34C: lbu         $a3, 0x817($t6)
    ctx->r7 = MEM_BU(ctx->r14, 0X817);
    after_1:
    // 0x801FD350: lw          $t7, 0x90($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X90);
    // 0x801FD354: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x801FD358: bne         $t8, $zero, L_801FD3C0
    if (ctx->r24 != 0) {
        // 0x801FD35C: sw          $t8, 0x90($s0)
        MEM_W(0X90, ctx->r16) = ctx->r24;
            goto L_801FD3C0;
    }
    // 0x801FD35C: sw          $t8, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r24;
    // 0x801FD360: jal         0x8000DD58
    // 0x801FD364: addiu       $a0, $zero, 0x400
    ctx->r4 = ADD32(0, 0X400);
    func_8000DD58_E958(rdram, ctx);
        goto after_2;
    // 0x801FD364: addiu       $a0, $zero, 0x400
    ctx->r4 = ADD32(0, 0X400);
    after_2:
    // 0x801FD368: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x801FD36C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801FD370: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    // 0x801FD374: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    // 0x801FD378: jal         0x8000E630
    // 0x801FD37C: addiu       $a3, $sp, 0x3C
    ctx->r7 = ADD32(ctx->r29, 0X3C);
    func_8000E630_F230(rdram, ctx);
        goto after_3;
    // 0x801FD37C: addiu       $a3, $sp, 0x3C
    ctx->r7 = ADD32(ctx->r29, 0X3C);
    after_3:
    // 0x801FD380: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801FD384: lwc1        $f6, -0x1560($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1560);
    // 0x801FD388: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801FD38C: lui         $at, 0x4160
    ctx->r1 = S32(0X4160 << 16);
    // 0x801FD390: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801FD394: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801FD398: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x801FD39C: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x801FD3A0: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x801FD3A4: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x801FD3A8: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801FD3AC: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x801FD3B0: jal         0x80207838
    // 0x801FD3B4: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    func_80207838_632C18(rdram, ctx);
        goto after_4;
    // 0x801FD3B4: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x801FD3B8: addiu       $t0, $zero, 0x32
    ctx->r8 = ADD32(0, 0X32);
    // 0x801FD3BC: sw          $t0, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r8;
L_801FD3C0:
    // 0x801FD3C0: lw          $t1, 0x80($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X80);
    // 0x801FD3C4: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x801FD3C8: bne         $t2, $zero, L_801FD40C
    if (ctx->r10 != 0) {
        // 0x801FD3CC: sw          $t2, 0x80($s0)
        MEM_W(0X80, ctx->r16) = ctx->r10;
            goto L_801FD40C;
    }
    // 0x801FD3CC: sw          $t2, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r10;
    // 0x801FD3D0: lw          $t4, 0x7C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X7C);
    // 0x801FD3D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801FD3D8: lui         $a1, 0x430C
    ctx->r5 = S32(0X430C << 16);
    // 0x801FD3DC: blezl       $t4, L_801FD410
    if (SIGNED(ctx->r12) <= 0) {
        // 0x801FD3E0: lw          $v1, 0x7C($s0)
        ctx->r3 = MEM_W(ctx->r16, 0X7C);
            goto L_801FD410;
    }
    goto skip_0;
    // 0x801FD3E0: lw          $v1, 0x7C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X7C);
    skip_0:
    // 0x801FD3E4: jal         0x80206ED8
    // 0x801FD3E8: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    func_80206ED8_6322B8(rdram, ctx);
        goto after_5;
    // 0x801FD3E8: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    after_5:
    // 0x801FD3EC: lw          $t5, 0x94($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X94);
    // 0x801FD3F0: addiu       $v1, $t5, -0xA
    ctx->r3 = ADD32(ctx->r13, -0XA);
    // 0x801FD3F4: slti        $at, $v1, 0x47
    ctx->r1 = SIGNED(ctx->r3) < 0X47 ? 1 : 0;
    // 0x801FD3F8: beq         $at, $zero, L_801FD408
    if (ctx->r1 == 0) {
        // 0x801FD3FC: sw          $v1, 0x94($s0)
        MEM_W(0X94, ctx->r16) = ctx->r3;
            goto L_801FD408;
    }
    // 0x801FD3FC: sw          $v1, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r3;
    // 0x801FD400: addiu       $v1, $zero, 0x46
    ctx->r3 = ADD32(0, 0X46);
    // 0x801FD404: sw          $v1, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r3;
L_801FD408:
    // 0x801FD408: sw          $v1, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r3;
L_801FD40C:
    // 0x801FD40C: lw          $v1, 0x7C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X7C);
L_801FD410:
    // 0x801FD410: addiu       $at, $zero, -0x64
    ctx->r1 = ADD32(0, -0X64);
    // 0x801FD414: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801FD418: bne         $v1, $at, L_801FD42C
    if (ctx->r3 != ctx->r1) {
        // 0x801FD41C: addiu       $a1, $zero, 0x0
        ctx->r5 = ADD32(0, 0X0);
            goto L_801FD42C;
    }
    // 0x801FD41C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x801FD420: jal         0x80206ED8
    // 0x801FD424: lui         $a2, 0x4180
    ctx->r6 = S32(0X4180 << 16);
    func_80206ED8_6322B8(rdram, ctx);
        goto after_6;
    // 0x801FD424: lui         $a2, 0x4180
    ctx->r6 = S32(0X4180 << 16);
    after_6:
    // 0x801FD428: lw          $v1, 0x7C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X7C);
L_801FD42C:
    // 0x801FD42C: addiu       $t8, $v1, -0x1
    ctx->r24 = ADD32(ctx->r3, -0X1);
    // 0x801FD430: slti        $at, $t8, -0xC8
    ctx->r1 = SIGNED(ctx->r24) < -0XC8 ? 1 : 0;
    // 0x801FD434: beq         $at, $zero, L_801FD458
    if (ctx->r1 == 0) {
        // 0x801FD438: sw          $t8, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r24;
            goto L_801FD458;
    }
    // 0x801FD438: sw          $t8, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r24;
    // 0x801FD43C: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x801FD440: lw          $t0, -0x10C0($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X10C0);
    // 0x801FD444: ori         $a0, $zero, 0x8152
    ctx->r4 = 0 | 0X8152;
    // 0x801FD448: jal         0x80038BC8
    // 0x801FD44C: sb          $zero, 0x817($t0)
    MEM_B(0X817, ctx->r8) = 0;
    func_80038BC8_397C8(rdram, ctx);
        goto after_7;
    // 0x801FD44C: sb          $zero, 0x817($t0)
    MEM_B(0X817, ctx->r8) = 0;
    after_7:
    // 0x801FD450: jal         0x801FC3FC
    // 0x801FD454: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801FC3FC_6277DC(rdram, ctx);
        goto after_8;
    // 0x801FD454: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
L_801FD458:
    // 0x801FD458: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x801FD45C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x801FD460: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x801FD464: jr          $ra
    // 0x801FD468: nop

    TRACE_RETURN()
    return;
    // 0x801FD468: nop

;}
RECOMP_FUNC void func_802092E8_6346C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802092E8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802092EC: jr          $ra
    // 0x802092F0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x802092F0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801D6244_601624(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D6244: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D6248: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D624C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801D6250: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x801D6254: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x801D6258: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801D625C: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801D6260: lwc1        $f18, 0x1C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x801D6264: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801D6268: sub.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801D626C: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
    // 0x801D6270: nop

    // 0x801D6274: bc1fl       L_801D6288
    if (!c1cs) {
        // 0x801D6278: mov.s       $f14, $f2
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.fl = ctx->f2.fl;
            goto L_801D6288;
    }
    goto skip_0;
    // 0x801D6278: mov.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.fl = ctx->f2.fl;
    skip_0:
    // 0x801D627C: b           L_801D6288
    // 0x801D6280: neg.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = -ctx->f2.fl;
        goto L_801D6288;
    // 0x801D6280: neg.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = -ctx->f2.fl;
    // 0x801D6284: mov.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.fl = ctx->f2.fl;
L_801D6288:
    // 0x801D6288: lwc1        $f0, 0x70($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X70);
    // 0x801D628C: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x801D6290: nop

    // 0x801D6294: bc1fl       L_801D62A8
    if (!c1cs) {
        // 0x801D6298: mov.s       $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
            goto L_801D62A8;
    }
    goto skip_1;
    // 0x801D6298: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    skip_1:
    // 0x801D629C: b           L_801D62A8
    // 0x801D62A0: neg.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
        goto L_801D62A8;
    // 0x801D62A0: neg.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
    // 0x801D62A4: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_801D62A8:
    // 0x801D62A8: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x801D62AC: nop

    // 0x801D62B0: bc1fl       L_801D6320
    if (!c1cs) {
        // 0x801D62B4: swc1        $f18, 0x8($v1)
        MEM_W(0X8, ctx->r3) = ctx->f18.u32l;
            goto L_801D6320;
    }
    goto skip_2;
    // 0x801D62B4: swc1        $f18, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f18.u32l;
    skip_2:
    // 0x801D62B8: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
    // 0x801D62BC: nop

    // 0x801D62C0: bc1fl       L_801D62F0
    if (!c1cs) {
        // 0x801D62C4: c.lt.s      $f0, $f16
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
            goto L_801D62F0;
    }
    goto skip_3;
    // 0x801D62C4: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    skip_3:
    // 0x801D62C8: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x801D62CC: nop

    // 0x801D62D0: bc1f        L_801D62E4
    if (!c1cs) {
        // 0x801D62D4: nop
    
            goto L_801D62E4;
    }
    // 0x801D62D4: nop

    // 0x801D62D8: neg.s       $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = -ctx->f0.fl;
    // 0x801D62DC: b           L_801D630C
    // 0x801D62E0: swc1        $f8, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f8.u32l;
        goto L_801D630C;
    // 0x801D62E0: swc1        $f8, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f8.u32l;
L_801D62E4:
    // 0x801D62E4: b           L_801D630C
    // 0x801D62E8: swc1        $f0, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f0.u32l;
        goto L_801D630C;
    // 0x801D62E8: swc1        $f0, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f0.u32l;
    // 0x801D62EC: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
L_801D62F0:
    // 0x801D62F0: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    // 0x801D62F4: bc1fl       L_801D630C
    if (!c1cs) {
        // 0x801D62F8: swc1        $f2, 0x70($a0)
        MEM_W(0X70, ctx->r4) = ctx->f2.u32l;
            goto L_801D630C;
    }
    goto skip_4;
    // 0x801D62F8: swc1        $f2, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f2.u32l;
    skip_4:
    // 0x801D62FC: neg.s       $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = -ctx->f2.fl;
    // 0x801D6300: b           L_801D630C
    // 0x801D6304: swc1        $f10, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f10.u32l;
        goto L_801D630C;
    // 0x801D6304: swc1        $f10, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f10.u32l;
    // 0x801D6308: swc1        $f2, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f2.u32l;
L_801D630C:
    // 0x801D630C: jal         0x801D600C
    // 0x801D6310: nop

    func_801D600C_6013EC(rdram, ctx);
        goto after_0;
    // 0x801D6310: nop

    after_0:
    // 0x801D6314: b           L_801D6320
    // 0x801D6318: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801D6320;
    // 0x801D6318: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801D631C: swc1        $f18, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f18.u32l;
L_801D6320:
    // 0x801D6320: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D6324: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D6328: jr          $ra
    // 0x801D632C: nop

    TRACE_RETURN()
    return;
    // 0x801D632C: nop

;}
RECOMP_FUNC void func_801FD028_628408(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FD028: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x801FD02C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801FD030: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801FD034: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801FD038: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801FD03C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x801FD040: jal         0x8000E9F4
    // 0x801FD044: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    func_8000E9F4_F5F4(rdram, ctx);
        goto after_0;
    // 0x801FD044: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    after_0:
    // 0x801FD048: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x801FD04C: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x801FD050: jal         0x801D2F40
    // 0x801FD054: sh          $v0, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r2;
    func_801D2F40_5FE320(rdram, ctx);
        goto after_1;
    // 0x801FD054: sh          $v0, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r2;
    after_1:
    // 0x801FD058: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801FD05C: nop

    // 0x801FD060: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x801FD064: nop

    // 0x801FD068: bc1fl       L_801FD07C
    if (!c1cs) {
        // 0x801FD06C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801FD07C;
    }
    goto skip_0;
    // 0x801FD06C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801FD070: jal         0x801FC3FC
    // 0x801FD074: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801FC3FC_6277DC(rdram, ctx);
        goto after_2;
    // 0x801FD074: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x801FD078: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FD07C:
    // 0x801FD07C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801FD080: jr          $ra
    // 0x801FD084: nop

    TRACE_RETURN()
    return;
    // 0x801FD084: nop

;}
RECOMP_FUNC void func_801D9940_604D20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D9940: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x801D9944: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801D9948: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x801D994C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x801D9950: lw          $a2, 0x84($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X84);
    // 0x801D9954: lw          $v1, 0x88($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X88);
    // 0x801D9958: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801D995C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801D9960: beq         $a2, $zero, L_801D9988
    if (ctx->r6 == 0) {
        // 0x801D9964: lw          $v0, 0x18($v1)
        ctx->r2 = MEM_W(ctx->r3, 0X18);
            goto L_801D9988;
    }
    // 0x801D9964: lw          $v0, 0x18($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X18);
    // 0x801D9968: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801D996C: beq         $a2, $at, L_801D9AA0
    if (ctx->r6 == ctx->r1) {
        // 0x801D9970: or          $a3, $s0, $zero
        ctx->r7 = ctx->r16 | 0;
            goto L_801D9AA0;
    }
    // 0x801D9970: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x801D9974: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801D9978: beql        $a2, $at, L_801D9AC8
    if (ctx->r6 == ctx->r1) {
        // 0x801D997C: lw          $t1, 0x94($s1)
        ctx->r9 = MEM_W(ctx->r17, 0X94);
            goto L_801D9AC8;
    }
    goto skip_0;
    // 0x801D997C: lw          $t1, 0x94($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X94);
    skip_0:
    // 0x801D9980: b           L_801D9D00
    // 0x801D9984: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801D9D00;
    // 0x801D9984: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801D9988:
    // 0x801D9988: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x801D998C: lui         $at, 0x4475
    ctx->r1 = S32(0X4475 << 16);
    // 0x801D9990: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D9994: swc1        $f12, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f12.u32l;
    // 0x801D9998: swc1        $f12, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f12.u32l;
    // 0x801D999C: lwc1        $f4, 0x24($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X24);
    // 0x801D99A0: addiu       $t6, $sp, 0x48
    ctx->r14 = ADD32(ctx->r29, 0X48);
    // 0x801D99A4: addiu       $t7, $sp, 0x44
    ctx->r15 = ADD32(ctx->r29, 0X44);
    // 0x801D99A8: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801D99AC: addiu       $a3, $sp, 0x4C
    ctx->r7 = ADD32(ctx->r29, 0X4C);
    // 0x801D99B0: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    // 0x801D99B4: lhu         $a2, 0x18($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X18);
    // 0x801D99B8: lhu         $a1, 0x16($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X16);
    // 0x801D99BC: lhu         $a0, 0x14($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X14);
    // 0x801D99C0: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801D99C4: jal         0x8000E808
    // 0x801D99C8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_8000E808_F408(rdram, ctx);
        goto after_0;
    // 0x801D99C8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x801D99CC: lwc1        $f18, 0xC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801D99D0: lwc1        $f16, 0x48($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X48);
    // 0x801D99D4: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801D99D8: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801D99DC: add.s       $f16, $f18, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x801D99E0: lwc1        $f18, 0x8($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801D99E4: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801D99E8: add.s       $f8, $f10, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x801D99EC: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x801D99F0: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x801D99F4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801D99F8: add.s       $f14, $f18, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x801D99FC: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x801D9A00: jal         0x8000E39C
    // 0x801D9A04: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    func_8000E39C_EF9C(rdram, ctx);
        goto after_1;
    // 0x801D9A04: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    after_1:
    // 0x801D9A08: lwc1        $f6, 0x70($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X70);
    // 0x801D9A0C: lwc1        $f10, 0x74($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X74);
    // 0x801D9A10: lwc1        $f4, 0x78($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X78);
    // 0x801D9A14: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x801D9A18: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x801D9A1C: neg.s       $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = -ctx->f10.fl;
    // 0x801D9A20: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x801D9A24: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x801D9A28: addiu       $a1, $a1, 0x40C
    ctx->r5 = ADD32(ctx->r5, 0X40C);
    // 0x801D9A2C: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x801D9A30: swc1        $f8, 0x70($s1)
    MEM_W(0X70, ctx->r17) = ctx->f8.u32l;
    // 0x801D9A34: swc1        $f18, 0x74($s1)
    MEM_W(0X74, ctx->r17) = ctx->f18.u32l;
    // 0x801D9A38: swc1        $f6, 0x78($s1)
    MEM_W(0X78, ctx->r17) = ctx->f6.u32l;
    // 0x801D9A3C: sw          $t8, 0x7C($s1)
    MEM_W(0X7C, ctx->r17) = ctx->r24;
    // 0x801D9A40: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801D9A44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D9A48: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x801D9A4C: jal         0x8000E100
    // 0x801D9A50: addiu       $a3, $zero, 0x4A8
    ctx->r7 = ADD32(0, 0X4A8);
    func_8000E100_ED00(rdram, ctx);
        goto after_2;
    // 0x801D9A50: addiu       $a3, $zero, 0x4A8
    ctx->r7 = ADD32(0, 0X4A8);
    after_2:
    // 0x801D9A54: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801D9A58: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801D9A5C: lwc1        $f10, 0x1C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801D9A60: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801D9A64: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D9A68: mul.s       $f18, $f10, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x801D9A6C: lwc1        $f4, 0x20($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X20);
    // 0x801D9A70: swc1        $f8, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f8.u32l;
    // 0x801D9A74: lwc1        $f8, 0x24($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X24);
    // 0x801D9A78: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x801D9A7C: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801D9A80: addiu       $a0, $a0, -0x62F0
    ctx->r4 = ADD32(ctx->r4, -0X62F0);
    // 0x801D9A84: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x801D9A88: swc1        $f18, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f18.u32l;
    // 0x801D9A8C: swc1        $f6, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f6.u32l;
    // 0x801D9A90: jal         0x8003521C
    // 0x801D9A94: swc1        $f10, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f10.u32l;
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801D9A94: swc1        $f10, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f10.u32l;
    after_3:
    // 0x801D9A98: b           L_801D9D00
    // 0x801D9A9C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801D9D00;
    // 0x801D9A9C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801D9AA0:
    // 0x801D9AA0: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801D9AA4: lwc1        $f14, 0xC($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801D9AA8: jal         0x8000EB50
    // 0x801D9AAC: lw          $a2, 0x10($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X10);
    func_8000EB50_F750(rdram, ctx);
        goto after_4;
    // 0x801D9AAC: lw          $a2, 0x10($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X10);
    after_4:
    // 0x801D9AB0: lhu         $t9, 0x14($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X14);
    // 0x801D9AB4: sw          $t9, 0x98($s1)
    MEM_W(0X98, ctx->r17) = ctx->r25;
    // 0x801D9AB8: lhu         $t0, 0x16($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X16);
    // 0x801D9ABC: b           L_801D9CFC
    // 0x801D9AC0: sw          $t0, 0x9C($s1)
    MEM_W(0X9C, ctx->r17) = ctx->r8;
        goto L_801D9CFC;
    // 0x801D9AC0: sw          $t0, 0x9C($s1)
    MEM_W(0X9C, ctx->r17) = ctx->r8;
    // 0x801D9AC4: lw          $t1, 0x94($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X94);
L_801D9AC8:
    // 0x801D9AC8: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x801D9ACC: sw          $t1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r9;
    // 0x801D9AD0: lw          $a2, 0x10($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X10);
    // 0x801D9AD4: lwc1        $f14, 0xC($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801D9AD8: jal         0x8000EB50
    // 0x801D9ADC: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    func_8000EB50_F750(rdram, ctx);
        goto after_5;
    // 0x801D9ADC: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    after_5:
    // 0x801D9AE0: lhu         $t2, 0x14($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X14);
    // 0x801D9AE4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D9AE8: ldc1        $f12, -0x26E0($at)
    CHECK_FR(ctx, 12);
    ctx->f12.u64 = LD(ctx->r1, -0X26E0);
    // 0x801D9AEC: sw          $t2, 0x98($s1)
    MEM_W(0X98, ctx->r17) = ctx->r10;
    // 0x801D9AF0: lhu         $t9, 0x16($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X16);
    // 0x801D9AF4: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x801D9AF8: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
    // 0x801D9AFC: sw          $t9, 0x9C($s1)
    MEM_W(0X9C, ctx->r17) = ctx->r25;
    // 0x801D9B00: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x801D9B04: lw          $t4, -0x3A38($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X3A38);
    // 0x801D9B08: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x801D9B0C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x801D9B10: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x801D9B14: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x801D9B18: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801D9B1C: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801D9B20: addu        $v0, $t4, $t6
    ctx->r2 = ADD32(ctx->r12, ctx->r14);
    // 0x801D9B24: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x801D9B28: lh          $t7, 0x307E($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X307E);
    // 0x801D9B2C: lh          $t8, 0x3080($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X3080);
    // 0x801D9B30: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801D9B34: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x801D9B38: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x801D9B3C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x801D9B40: cvt.d.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.d = CVT_D_W(ctx->f18.u32l);
    // 0x801D9B44: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x801D9B48: mul.d       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f12.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f12.d);
    // 0x801D9B4C: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x801D9B50: mul.d       $f18, $f10, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f12.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f12.d);
    // 0x801D9B54: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x801D9B58: cvt.s.d     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f0.fl = CVT_S_D(ctx->f6.d);
    // 0x801D9B5C: cvt.s.d     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f16.fl = CVT_S_D(ctx->f18.d);
    // 0x801D9B60: bgez        $t9, L_801D9B74
    if (SIGNED(ctx->r25) >= 0) {
        // 0x801D9B64: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_801D9B74;
    }
    // 0x801D9B64: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801D9B68: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D9B6C: nop

    // 0x801D9B70: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_801D9B74:
    // 0x801D9B74: sub.s       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x801D9B78: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801D9B7C: c.le.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl <= ctx->f2.fl;
    // 0x801D9B80: nop

    // 0x801D9B84: bc1fl       L_801D9B94
    if (!c1cs) {
        // 0x801D9B88: c.lt.s      $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
            goto L_801D9B94;
    }
    goto skip_1;
    // 0x801D9B88: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    skip_1:
    // 0x801D9B8C: sub.s       $f2, $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x801D9B90: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
L_801D9B94:
    // 0x801D9B94: nop

    // 0x801D9B98: bc1fl       L_801D9BA8
    if (!c1cs) {
        // 0x801D9B9C: lw          $t0, 0x98($s1)
        ctx->r8 = MEM_W(ctx->r17, 0X98);
            goto L_801D9BA8;
    }
    goto skip_2;
    // 0x801D9B9C: lw          $t0, 0x98($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X98);
    skip_2:
    // 0x801D9BA0: add.s       $f2, $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f14.fl;
    // 0x801D9BA4: lw          $t0, 0x98($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X98);
L_801D9BA8:
    // 0x801D9BA8: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x801D9BAC: bgez        $t0, L_801D9BC0
    if (SIGNED(ctx->r8) >= 0) {
        // 0x801D9BB0: cvt.s.w     $f18, $f10
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
            goto L_801D9BC0;
    }
    // 0x801D9BB0: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x801D9BB4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801D9BB8: nop

    // 0x801D9BBC: add.s       $f18, $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f4.fl;
L_801D9BC0:
    // 0x801D9BC0: sub.s       $f0, $f18, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x801D9BC4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801D9BC8: c.le.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl <= ctx->f0.fl;
    // 0x801D9BCC: nop

    // 0x801D9BD0: bc1fl       L_801D9BE0
    if (!c1cs) {
        // 0x801D9BD4: c.lt.s      $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
            goto L_801D9BE0;
    }
    goto skip_3;
    // 0x801D9BD4: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    skip_3:
    // 0x801D9BD8: sub.s       $f0, $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f14.fl;
    // 0x801D9BDC: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
L_801D9BE0:
    // 0x801D9BE0: nop

    // 0x801D9BE4: bc1fl       L_801D9BF4
    if (!c1cs) {
        // 0x801D9BE8: cfc1        $t1, $FpcCsr
        ctx->r9 = get_cop1_cs();
            goto L_801D9BF4;
    }
    goto skip_4;
    // 0x801D9BE8: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    skip_4:
    // 0x801D9BEC: add.s       $f0, $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f14.fl;
    // 0x801D9BF0: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
L_801D9BF4:
    // 0x801D9BF4: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x801D9BF8: nop

    // 0x801D9BFC: cvt.w.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    ctx->f8.u32l = CVT_W_S(ctx->f2.fl);
    // 0x801D9C00: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x801D9C04: nop

    // 0x801D9C08: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x801D9C0C: beql        $t2, $zero, L_801D9C5C
    if (ctx->r10 == 0) {
        // 0x801D9C10: mfc1        $t2, $f8
        ctx->r10 = (int32_t)ctx->f8.u32l;
            goto L_801D9C5C;
    }
    goto skip_5;
    // 0x801D9C10: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    skip_5:
    // 0x801D9C14: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D9C18: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x801D9C1C: sub.s       $f8, $f2, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f8.fl;
    // 0x801D9C20: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x801D9C24: nop

    // 0x801D9C28: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x801D9C2C: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x801D9C30: nop

    // 0x801D9C34: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x801D9C38: bne         $t2, $zero, L_801D9C50
    if (ctx->r10 != 0) {
        // 0x801D9C3C: nop
    
            goto L_801D9C50;
    }
    // 0x801D9C3C: nop

    // 0x801D9C40: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x801D9C44: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801D9C48: b           L_801D9C68
    // 0x801D9C4C: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
        goto L_801D9C68;
    // 0x801D9C4C: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
L_801D9C50:
    // 0x801D9C50: b           L_801D9C68
    // 0x801D9C54: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
        goto L_801D9C68;
    // 0x801D9C54: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x801D9C58: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
L_801D9C5C:
    // 0x801D9C5C: nop

    // 0x801D9C60: bltz        $t2, L_801D9C50
    if (SIGNED(ctx->r10) < 0) {
        // 0x801D9C64: nop
    
            goto L_801D9C50;
    }
    // 0x801D9C64: nop

L_801D9C68:
    // 0x801D9C68: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x801D9C6C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x801D9C70: sh          $t2, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r10;
    // 0x801D9C74: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801D9C78: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x801D9C7C: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x801D9C80: nop

    // 0x801D9C84: cvt.w.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_S(ctx->f0.fl);
    // 0x801D9C88: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x801D9C8C: nop

    // 0x801D9C90: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x801D9C94: beql        $t5, $zero, L_801D9CE4
    if (ctx->r13 == 0) {
        // 0x801D9C98: mfc1        $t5, $f6
        ctx->r13 = (int32_t)ctx->f6.u32l;
            goto L_801D9CE4;
    }
    goto skip_6;
    // 0x801D9C98: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    skip_6:
    // 0x801D9C9C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D9CA0: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x801D9CA4: sub.s       $f6, $f0, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x801D9CA8: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x801D9CAC: nop

    // 0x801D9CB0: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x801D9CB4: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x801D9CB8: nop

    // 0x801D9CBC: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x801D9CC0: bne         $t5, $zero, L_801D9CD8
    if (ctx->r13 != 0) {
        // 0x801D9CC4: nop
    
            goto L_801D9CD8;
    }
    // 0x801D9CC4: nop

    // 0x801D9CC8: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x801D9CCC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801D9CD0: b           L_801D9CF0
    // 0x801D9CD4: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_801D9CF0;
    // 0x801D9CD4: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_801D9CD8:
    // 0x801D9CD8: b           L_801D9CF0
    // 0x801D9CDC: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_801D9CF0;
    // 0x801D9CDC: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x801D9CE0: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
L_801D9CE4:
    // 0x801D9CE4: nop

    // 0x801D9CE8: bltz        $t5, L_801D9CD8
    if (SIGNED(ctx->r13) < 0) {
        // 0x801D9CEC: nop
    
            goto L_801D9CD8;
    }
    // 0x801D9CEC: nop

L_801D9CF0:
    // 0x801D9CF0: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x801D9CF4: sh          $t5, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r13;
    // 0x801D9CF8: nop

L_801D9CFC:
    // 0x801D9CFC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801D9D00:
    // 0x801D9D00: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x801D9D04: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x801D9D08: jr          $ra
    // 0x801D9D0C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    TRACE_RETURN()
    return;
    // 0x801D9D0C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_80202D7C_62E15C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80202D7C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80202D80: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80202D84: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x80202D88: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x80202D8C: lui         $a2, 0x800
    ctx->r6 = S32(0X800 << 16);
    // 0x80202D90: addiu       $a2, $a2, 0xA4
    ctx->r6 = ADD32(ctx->r6, 0XA4);
    // 0x80202D94: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80202D98: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80202D9C: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x80202DA0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80202DA4: lwc1        $f6, 0xC($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0XC);
    // 0x80202DA8: lui         $a3, 0x8021
    ctx->r7 = S32(0X8021 << 16);
    // 0x80202DAC: addiu       $t9, $zero, 0x4B5
    ctx->r25 = ADD32(0, 0X4B5);
    // 0x80202DB0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x80202DB4: lwc1        $f8, 0x10($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X10);
    // 0x80202DB8: addiu       $a3, $a3, -0x5198
    ctx->r7 = ADD32(ctx->r7, -0X5198);
    // 0x80202DBC: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
    // 0x80202DC0: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x80202DC4: lhu         $t6, 0x14($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X14);
    // 0x80202DC8: addiu       $a1, $a1, 0x2EA4
    ctx->r5 = ADD32(ctx->r5, 0X2EA4);
    // 0x80202DCC: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80202DD0: lhu         $t7, 0x16($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X16);
    // 0x80202DD4: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x80202DD8: lhu         $t8, 0x18($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X18);
    // 0x80202DDC: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x80202DE0: lwc1        $f10, 0x1C($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x80202DE4: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x80202DE8: lwc1        $f16, 0x20($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X20);
    // 0x80202DEC: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x80202DF0: lwc1        $f18, 0x24($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X24);
    // 0x80202DF4: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x80202DF8: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x80202DFC: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80202E00: sw          $v1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r3;
    // 0x80202E04: jal         0x800358E8
    // 0x80202E08: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    func_800358E8_364E8(rdram, ctx);
        goto after_0;
    // 0x80202E08: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80202E0C: lw          $v1, 0x50($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X50);
    // 0x80202E10: beq         $v0, $zero, L_80202E90
    if (ctx->r2 == 0) {
        // 0x80202E14: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80202E90;
    }
    // 0x80202E14: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80202E18: lw          $v0, 0x18($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X18);
    // 0x80202E1C: addiu       $t0, $zero, 0xC8
    ctx->r8 = ADD32(0, 0XC8);
    // 0x80202E20: lui         $at, 0xC36E
    ctx->r1 = S32(0XC36E << 16);
    // 0x80202E24: sb          $zero, 0x65($v0)
    MEM_B(0X65, ctx->r2) = 0;
    // 0x80202E28: lbu         $t1, 0x5($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X5);
    // 0x80202E2C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80202E30: addiu       $t2, $zero, 0x9C
    ctx->r10 = ADD32(0, 0X9C);
    // 0x80202E34: sb          $t1, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r9;
    // 0x80202E38: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80202E3C: addiu       $t4, $zero, 0x64
    ctx->r12 = ADD32(0, 0X64);
    // 0x80202E40: sh          $t2, 0x5C($s0)
    MEM_H(0X5C, ctx->r16) = ctx->r10;
    // 0x80202E44: sw          $zero, 0x90($s0)
    MEM_W(0X90, ctx->r16) = 0;
    // 0x80202E48: sw          $zero, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = 0;
    // 0x80202E4C: sb          $t3, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r11;
    // 0x80202E50: sh          $t0, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r8;
    // 0x80202E54: sh          $t0, 0x3E($s0)
    MEM_H(0X3E, ctx->r16) = ctx->r8;
    // 0x80202E58: sh          $zero, 0x40($s0)
    MEM_H(0X40, ctx->r16) = 0;
    // 0x80202E5C: sw          $t4, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->r12;
    // 0x80202E60: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x80202E64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80202E68: lui         $a2, 0x435C
    ctx->r6 = S32(0X435C << 16);
    // 0x80202E6C: lui         $a3, 0xC2BC
    ctx->r7 = S32(0XC2BC << 16);
    // 0x80202E70: jal         0x80203F5C
    // 0x80202E74: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_80203F5C_62F33C(rdram, ctx);
        goto after_1;
    // 0x80202E74: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x80202E78: jal         0x80203F88
    // 0x80202E7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80203F88_62F368(rdram, ctx);
        goto after_2;
    // 0x80202E7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80202E80: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80202E84: addiu       $a1, $a1, -0x4B90
    ctx->r5 = ADD32(ctx->r5, -0X4B90);
    // 0x80202E88: jal         0x801D31CC
    // 0x80202E8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_3;
    // 0x80202E8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
L_80202E90:
    // 0x80202E90: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80202E94: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80202E98: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x80202E9C: jr          $ra
    // 0x80202EA0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x80202EA0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_801F7958_622D38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F7958: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801F795C: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801F7960: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801F7964: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801F7968: lw          $a0, 0x1D8($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X1D8);
    // 0x801F796C: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801F7970: addiu       $a1, $a1, 0x7A1C
    ctx->r5 = ADD32(ctx->r5, 0X7A1C);
    // 0x801F7974: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x801F7978: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801F797C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801F7980: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801F7984: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801F7988: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801F798C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801F7990: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801F7994: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x801F7998: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801F799C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801F79A0: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x801F79A4: lwc1        $f10, 0x1C($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x801F79A8: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x801F79AC: lwc1        $f16, 0x20($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X20);
    // 0x801F79B0: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x801F79B4: lwc1        $f18, 0x24($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X24);
    // 0x801F79B8: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x801F79BC: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801F79C0: jal         0x800358E8
    // 0x801F79C4: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    func_800358E8_364E8(rdram, ctx);
        goto after_0;
    // 0x801F79C4: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x801F79C8: beq         $v0, $zero, L_801F7A08
    if (ctx->r2 == 0) {
        // 0x801F79CC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_801F7A08;
    }
    // 0x801F79CC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801F79D0: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x801F79D4: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x801F79D8: addiu       $t9, $zero, 0x54
    ctx->r25 = ADD32(0, 0X54);
    // 0x801F79DC: addiu       $t0, $zero, 0x190
    ctx->r8 = ADD32(0, 0X190);
    // 0x801F79E0: addiu       $t1, $zero, 0x32
    ctx->r9 = ADD32(0, 0X32);
    // 0x801F79E4: sb          $t7, 0x30($v0)
    MEM_B(0X30, ctx->r2) = ctx->r15;
    // 0x801F79E8: sw          $t8, 0x48($v0)
    MEM_W(0X48, ctx->r2) = ctx->r24;
    // 0x801F79EC: sb          $t9, 0x4C($v0)
    MEM_B(0X4C, ctx->r2) = ctx->r25;
    // 0x801F79F0: sh          $t0, 0x4E($v0)
    MEM_H(0X4E, ctx->r2) = ctx->r8;
    // 0x801F79F4: sh          $t1, 0x50($v0)
    MEM_H(0X50, ctx->r2) = ctx->r9;
    // 0x801F79F8: sh          $zero, 0x52($v0)
    MEM_H(0X52, ctx->r2) = 0;
    // 0x801F79FC: jal         0x801D36C4
    // 0x801F7A00: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    func_801D36C4_5FEAA4(rdram, ctx);
        goto after_1;
    // 0x801F7A00: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    after_1:
    // 0x801F7A04: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
L_801F7A08:
    // 0x801F7A08: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801F7A0C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x801F7A10: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x801F7A14: jr          $ra
    // 0x801F7A18: nop

    TRACE_RETURN()
    return;
    // 0x801F7A18: nop

;}
RECOMP_FUNC void func_802055B4_630994(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802055B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802055B8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802055BC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802055C0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802055C4: jal         0x801D614C
    // 0x802055C8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_801D614C_60152C(rdram, ctx);
        goto after_0;
    // 0x802055C8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x802055CC: lw          $t6, 0x7C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X7C);
    // 0x802055D0: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x802055D4: bne         $t7, $zero, L_802055F8
    if (ctx->r15 != 0) {
        // 0x802055D8: sw          $t7, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r15;
            goto L_802055F8;
    }
    // 0x802055D8: sw          $t7, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r15;
    // 0x802055DC: jal         0x8000DD58
    // 0x802055E0: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    func_8000DD58_E958(rdram, ctx);
        goto after_1;
    // 0x802055E0: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_1:
    // 0x802055E4: addiu       $t9, $zero, 0x64
    ctx->r25 = ADD32(0, 0X64);
    // 0x802055E8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x802055EC: sw          $t9, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r25;
    // 0x802055F0: jal         0x8003521C
    // 0x802055F4: addiu       $a0, $a0, 0x5614
    ctx->r4 = ADD32(ctx->r4, 0X5614);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x802055F4: addiu       $a0, $a0, 0x5614
    ctx->r4 = ADD32(ctx->r4, 0X5614);
    after_2:
L_802055F8:
    // 0x802055F8: jal         0x80205C00
    // 0x802055FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80205C00_630FE0(rdram, ctx);
        goto after_3;
    // 0x802055FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80205600: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80205604: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80205608: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8020560C: jr          $ra
    // 0x80205610: nop

    TRACE_RETURN()
    return;
    // 0x80205610: nop

;}
RECOMP_FUNC void func_802006B0_62BA90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802006B0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802006B4: jr          $ra
    // 0x802006B8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x802006B8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801FB9D4_626DB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FB9D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801FB9D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801FB9DC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801FB9E0: lui         $a2, 0x3CA3
    ctx->r6 = S32(0X3CA3 << 16);
    // 0x801FB9E4: lui         $a3, 0x3ECC
    ctx->r7 = S32(0X3ECC << 16);
    // 0x801FB9E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801FB9EC: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x801FB9F0: ori         $a2, $a2, 0xD70A
    ctx->r6 = ctx->r6 | 0XD70A;
    // 0x801FB9F4: jal         0x801D6A30
    // 0x801FB9F8: lui         $a1, 0xC307
    ctx->r5 = S32(0XC307 << 16);
    func_801D6A30_601E10(rdram, ctx);
        goto after_0;
    // 0x801FB9F8: lui         $a1, 0xC307
    ctx->r5 = S32(0XC307 << 16);
    after_0:
    // 0x801FB9FC: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x801FBA00: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x801FBA04: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FBA08: lw          $t6, 0x38($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X38);
    // 0x801FBA0C: beql        $t6, $zero, L_801FBA28
    if (ctx->r14 == 0) {
        // 0x801FBA10: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801FBA28;
    }
    goto skip_0;
    // 0x801FBA10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801FBA14: lwc1        $f4, 0x8($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X8);
    // 0x801FBA18: addiu       $a0, $a0, -0x45CC
    ctx->r4 = ADD32(ctx->r4, -0X45CC);
    // 0x801FBA1C: jal         0x8003521C
    // 0x801FBA20: swc1        $f4, 0x90($v0)
    MEM_W(0X90, ctx->r2) = ctx->f4.u32l;
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x801FBA20: swc1        $f4, 0x90($v0)
    MEM_W(0X90, ctx->r2) = ctx->f4.u32l;
    after_1:
    // 0x801FBA24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FBA28:
    // 0x801FBA28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801FBA2C: jr          $ra
    // 0x801FBA30: nop

    TRACE_RETURN()
    return;
    // 0x801FBA30: nop

;}
