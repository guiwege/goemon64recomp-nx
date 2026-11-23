#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void recomp_entrypoint(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80000400: lui         $t0, 0x8008
    ctx->r8 = S32(0X8008 << 16);
    // 0x80000404: lui         $t1, 0x14
    ctx->r9 = S32(0X14 << 16);
    // 0x80000408: addiu       $t0, $t0, -0x1FE0
    ctx->r8 = ADD32(ctx->r8, -0X1FE0);
    // 0x8000040C: ori         $t1, $t1, 0xD440
    ctx->r9 = ctx->r9 | 0XD440;
L_80000410:
    // 0x80000410: addi        $t1, $t1, -0x8
    ctx->r9 = ADD32(ctx->r9, -0X8);
    // 0x80000414: sw          $zero, 0x0($t0)
    MEM_W(0X0, ctx->r8) = 0;
    // 0x80000418: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x8000041C: bne         $t1, $zero, L_80000410
    if (ctx->r9 != 0) {
        // 0x80000420: addi        $t0, $t0, 0x8
        ctx->r8 = ADD32(ctx->r8, 0X8);
            goto L_80000410;
    }
    // 0x80000420: addi        $t0, $t0, 0x8
    ctx->r8 = ADD32(ctx->r8, 0X8);
    // 0x80000424: lui         $t2, 0x8000
    ctx->r10 = S32(0X8000 << 16);
    // 0x80000428: lui         $sp, 0x8008
    ctx->r29 = S32(0X8008 << 16);
    // 0x8000042C: addiu       $t2, $t2, 0x450
    ctx->r10 = ADD32(ctx->r10, 0X450);
    // 0x80000430: jr          $t2
    // 0x80000434: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    LOOKUP_FUNC(ctx->r10)(rdram, ctx);
    TRACE_RETURN()
    return;
    // 0x80000434: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8000D3B8_DFB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000D3B8: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8000D3BC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8000D3C0: addiu       $a0, $a0, 0x7C48
    ctx->r4 = ADD32(ctx->r4, 0X7C48);
    // 0x8000D3C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8000D3C8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
L_8000D3CC:
    // 0x8000D3CC: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8000D3D0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8000D3D4: sllv        $t8, $t7, $v0
    ctx->r24 = S32(ctx->r15 << (ctx->r2 & 31));
    // 0x8000D3D8: beql        $t6, $zero, L_8000D3E8
    if (ctx->r14 == 0) {
        // 0x8000D3DC: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_8000D3E8;
    }
    goto skip_0;
    // 0x8000D3DC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_0:
    // 0x8000D3E0: or          $v1, $v1, $t8
    ctx->r3 = ctx->r3 | ctx->r24;
    // 0x8000D3E4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8000D3E8:
    // 0x8000D3E8: bne         $v0, $a1, L_8000D3CC
    if (ctx->r2 != ctx->r5) {
        // 0x8000D3EC: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_8000D3CC;
    }
    // 0x8000D3EC: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8000D3F0: jr          $ra
    // 0x8000D3F4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    TRACE_RETURN()
    return;
    // 0x8000D3F4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_800353F8_35FF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800353F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800353FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80035400: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80035404: sh          $a2, 0x24($a0)
    MEM_H(0X24, ctx->r4) = ctx->r6;
    // 0x80035408: jal         0x800353B4
    // 0x8003540C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800353B4_35FB4(rdram, ctx);
        goto after_0;
    // 0x8003540C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80035410: lui         $a1, 0x8003
    ctx->r5 = S32(0X8003 << 16);
    // 0x80035414: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80035418: jal         0x8003522C
    // 0x8003541C: addiu       $a1, $a1, 0x5430
    ctx->r5 = ADD32(ctx->r5, 0X5430);
    func_8003522C_35E2C(rdram, ctx);
        goto after_1;
    // 0x8003541C: addiu       $a1, $a1, 0x5430
    ctx->r5 = ADD32(ctx->r5, 0X5430);
    after_1:
    // 0x80035420: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80035424: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80035428: jr          $ra
    // 0x8003542C: nop

    TRACE_RETURN()
    return;
    // 0x8003542C: nop

;}
RECOMP_FUNC void func_80036D2C_3792C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80036D2C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80036D30: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80036D34: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x80036D38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80036D3C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80036D40: addiu       $t9, $t9, 0x4E08
    ctx->r25 = ADD32(ctx->r25, 0X4E08);
    // 0x80036D44: lui         $a1, 0x8003
    ctx->r5 = S32(0X8003 << 16);
    // 0x80036D48: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80036D4C: addiu       $a1, $a1, 0x6E34
    ctx->r5 = ADD32(ctx->r5, 0X6E34);
    // 0x80036D50: jalr        $t9
    // 0x80036D54: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80036D54: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80036D58: bne         $v0, $zero, L_80036D68
    if (ctx->r2 != 0) {
        // 0x80036D5C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80036D68;
    }
    // 0x80036D5C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80036D60: b           L_80036E1C
    // 0x80036D64: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80036E1C;
    // 0x80036D64: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80036D68:
    // 0x80036D68: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x80036D6C: addiu       $t9, $t9, 0x6B7C
    ctx->r25 = ADD32(ctx->r25, 0X6B7C);
    // 0x80036D70: jalr        $t9
    // 0x80036D74: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x80036D74: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_1:
    // 0x80036D78: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80036D7C: addiu       $v0, $v0, -0x3340
    ctx->r2 = ADD32(ctx->r2, -0X3340);
    // 0x80036D80: addiu       $t7, $v0, 0x7FFF
    ctx->r15 = ADD32(ctx->r2, 0X7FFF);
    // 0x80036D84: lw          $t7, 0x3019($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3019);
    // 0x80036D88: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80036D8C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80036D90: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x80036D94: sb          $t6, 0xD($t7)
    MEM_B(0XD, ctx->r15) = ctx->r14;
    // 0x80036D98: addiu       $t0, $v0, 0x7FFF
    ctx->r8 = ADD32(ctx->r2, 0X7FFF);
    // 0x80036D9C: lw          $t0, 0x3019($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3019);
    // 0x80036DA0: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80036DA4: addiu       $t2, $v0, 0x7FFF
    ctx->r10 = ADD32(ctx->r2, 0X7FFF);
    // 0x80036DA8: addiu       $t4, $v0, 0x7FFF
    ctx->r12 = ADD32(ctx->r2, 0X7FFF);
    // 0x80036DAC: sb          $t8, 0xE($t0)
    MEM_B(0XE, ctx->r8) = ctx->r24;
    // 0x80036DB0: lw          $t2, 0x3019($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X3019);
    // 0x80036DB4: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80036DB8: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x80036DBC: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x80036DC0: sb          $t1, 0xF($t2)
    MEM_B(0XF, ctx->r10) = ctx->r9;
    // 0x80036DC4: lw          $t4, 0x3019($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X3019);
    // 0x80036DC8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80036DCC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80036DD0: sb          $t3, 0x10($t4)
    MEM_B(0X10, ctx->r12) = ctx->r11;
    // 0x80036DD4: sw          $a1, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r5;
    // 0x80036DD8: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80036DDC: sw          $t5, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r13;
    // 0x80036DE0: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x80036DE4: beq         $a1, $zero, L_80036E0C
    if (ctx->r5 == 0) {
        // 0x80036DE8: sw          $t9, 0x68($a0)
        MEM_W(0X68, ctx->r4) = ctx->r25;
            goto L_80036E0C;
    }
    // 0x80036DE8: sw          $t9, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r25;
    // 0x80036DEC: mtc1        $a1, $f6
    ctx->f6.u32l = ctx->r5;
    // 0x80036DF0: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x80036DF4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80036DF8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80036DFC: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x80036E00: div.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x80036E04: b           L_80036E18
    // 0x80036E08: swc1        $f10, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f10.u32l;
        goto L_80036E18;
    // 0x80036E08: swc1        $f10, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f10.u32l;
L_80036E0C:
    // 0x80036E0C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80036E10: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x80036E14: swc1        $f16, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f16.u32l;
L_80036E18:
    // 0x80036E18: sw          $t6, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r14;
L_80036E1C:
    // 0x80036E1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80036E20: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80036E24: jr          $ra
    // 0x80036E28: nop

    TRACE_RETURN()
    return;
    // 0x80036E28: nop

;}
RECOMP_FUNC void func_80024734_25334(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80024734: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80024738: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8002473C: lui         $s2, 0x8016
    ctx->r18 = S32(0X8016 << 16);
    // 0x80024740: addiu       $s2, $s2, -0x3A38
    ctx->r18 = ADD32(ctx->r18, -0X3A38);
    // 0x80024744: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80024748: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x8002474C: lui         $s3, 0xC
    ctx->r19 = S32(0XC << 16);
    // 0x80024750: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80024754: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x80024758: ori         $s3, $s3, 0x7FA4
    ctx->r19 = ctx->r19 | 0X7FA4;
    // 0x8002475C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80024760: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80024764: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80024768: lw          $a1, 0x58($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X58);
    // 0x8002476C: jal         0x80014B74
    // 0x80024770: addu        $a0, $t6, $s3
    ctx->r4 = ADD32(ctx->r14, ctx->r19);
    func_80014B74_15774(rdram, ctx);
        goto after_0;
    // 0x80024770: addu        $a0, $t6, $s3
    ctx->r4 = ADD32(ctx->r14, ctx->r19);
    after_0:
    // 0x80024774: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x80024778: lw          $a1, 0x54($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X54);
    // 0x8002477C: jal         0x80014B74
    // 0x80024780: addu        $a0, $t7, $s3
    ctx->r4 = ADD32(ctx->r15, ctx->r19);
    func_80014B74_15774(rdram, ctx);
        goto after_1;
    // 0x80024780: addu        $a0, $t7, $s3
    ctx->r4 = ADD32(ctx->r15, ctx->r19);
    after_1:
    // 0x80024784: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
    // 0x80024788: lw          $a1, 0x50($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X50);
    // 0x8002478C: jal         0x80014B74
    // 0x80024790: addu        $a0, $t8, $s3
    ctx->r4 = ADD32(ctx->r24, ctx->r19);
    func_80014B74_15774(rdram, ctx);
        goto after_2;
    // 0x80024790: addu        $a0, $t8, $s3
    ctx->r4 = ADD32(ctx->r24, ctx->r19);
    after_2:
    // 0x80024794: lw          $t9, 0x0($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X0);
    // 0x80024798: lw          $a1, 0x5C($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X5C);
    // 0x8002479C: jal         0x80014B74
    // 0x800247A0: addu        $a0, $t9, $s3
    ctx->r4 = ADD32(ctx->r25, ctx->r19);
    func_80014B74_15774(rdram, ctx);
        goto after_3;
    // 0x800247A0: addu        $a0, $t9, $s3
    ctx->r4 = ADD32(ctx->r25, ctx->r19);
    after_3:
    // 0x800247A4: lw          $t0, 0x0($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X0);
    // 0x800247A8: lw          $a1, 0x60($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X60);
    // 0x800247AC: jal         0x80014B74
    // 0x800247B0: addu        $a0, $t0, $s3
    ctx->r4 = ADD32(ctx->r8, ctx->r19);
    func_80014B74_15774(rdram, ctx);
        goto after_4;
    // 0x800247B0: addu        $a0, $t0, $s3
    ctx->r4 = ADD32(ctx->r8, ctx->r19);
    after_4:
    // 0x800247B4: lw          $t1, 0x0($s4)
    ctx->r9 = MEM_W(ctx->r20, 0X0);
    // 0x800247B8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x800247BC: sll         $t3, $s1, 2
    ctx->r11 = S32(ctx->r17 << 2);
    // 0x800247C0: andi        $t2, $t1, 0x400
    ctx->r10 = ctx->r9 & 0X400;
    // 0x800247C4: beq         $t2, $zero, L_800247D4
    if (ctx->r10 == 0) {
        // 0x800247C8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_800247D4;
    }
    // 0x800247C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800247CC: b           L_800247D4
    // 0x800247D0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_800247D4;
    // 0x800247D0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_800247D4:
    // 0x800247D4: blez        $v0, L_80024828
    if (SIGNED(ctx->r2) <= 0) {
        // 0x800247D8: addu        $s0, $s4, $t3
        ctx->r16 = ADD32(ctx->r20, ctx->r11);
            goto L_80024828;
    }
    // 0x800247D8: addu        $s0, $s4, $t3
    ctx->r16 = ADD32(ctx->r20, ctx->r11);
    // 0x800247DC: lw          $t4, 0x0($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X0);
L_800247E0:
    // 0x800247E0: lw          $a1, 0x40($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X40);
    // 0x800247E4: jal         0x80014B74
    // 0x800247E8: addu        $a0, $t4, $s3
    ctx->r4 = ADD32(ctx->r12, ctx->r19);
    func_80014B74_15774(rdram, ctx);
        goto after_5;
    // 0x800247E8: addu        $a0, $t4, $s3
    ctx->r4 = ADD32(ctx->r12, ctx->r19);
    after_5:
    // 0x800247EC: lw          $t5, 0x0($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X0);
    // 0x800247F0: lw          $a1, 0x48($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X48);
    // 0x800247F4: jal         0x80014B74
    // 0x800247F8: addu        $a0, $t5, $s3
    ctx->r4 = ADD32(ctx->r13, ctx->r19);
    func_80014B74_15774(rdram, ctx);
        goto after_6;
    // 0x800247F8: addu        $a0, $t5, $s3
    ctx->r4 = ADD32(ctx->r13, ctx->r19);
    after_6:
    // 0x800247FC: lw          $t6, 0x0($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X0);
    // 0x80024800: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80024804: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80024808: andi        $t7, $t6, 0x400
    ctx->r15 = ctx->r14 & 0X400;
    // 0x8002480C: beq         $t7, $zero, L_8002481C
    if (ctx->r15 == 0) {
        // 0x80024810: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8002481C;
    }
    // 0x80024810: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80024814: b           L_8002481C
    // 0x80024818: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8002481C;
    // 0x80024818: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8002481C:
    // 0x8002481C: slt         $at, $s1, $v0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80024820: bnel        $at, $zero, L_800247E0
    if (ctx->r1 != 0) {
        // 0x80024824: lw          $t4, 0x0($s2)
        ctx->r12 = MEM_W(ctx->r18, 0X0);
            goto L_800247E0;
    }
    goto skip_0;
    // 0x80024824: lw          $t4, 0x0($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X0);
    skip_0:
L_80024828:
    // 0x80024828: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8002482C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80024830: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80024834: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80024838: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8002483C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80024840: jr          $ra
    // 0x80024844: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80024844: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800363F4_36FF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800363F4: beq         $a0, $zero, L_80036404
    if (ctx->r4 == 0) {
        // 0x800363F8: nop
    
            goto L_80036404;
    }
    // 0x800363F8: nop

    // 0x800363FC: bnel        $a1, $zero, L_80036410
    if (ctx->r5 != 0) {
        // 0x80036400: lw          $v0, 0x74($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X74);
            goto L_80036410;
    }
    goto skip_0;
    // 0x80036400: lw          $v0, 0x74($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X74);
    skip_0:
L_80036404:
    // 0x80036404: jr          $ra
    // 0x80036408: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x80036408: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8003640C: lw          $v0, 0x74($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X74);
L_80036410:
    // 0x80036410: beq         $v0, $a1, L_80036428
    if (ctx->r2 == ctx->r5) {
        // 0x80036414: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80036428;
    }
    // 0x80036414: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80036418: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_8003641C:
    // 0x8003641C: lw          $v0, 0x74($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X74);
    // 0x80036420: bnel        $v0, $a1, L_8003641C
    if (ctx->r2 != ctx->r5) {
        // 0x80036424: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8003641C;
    }
    goto skip_1;
    // 0x80036424: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    skip_1:
L_80036428:
    // 0x80036428: lw          $t6, 0x74($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X74);
    // 0x8003642C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80036430: sw          $t6, 0x74($v1)
    MEM_W(0X74, ctx->r3) = ctx->r14;
    // 0x80036434: lw          $t7, 0x74($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X74);
    // 0x80036438: sw          $t7, 0x74($a1)
    MEM_W(0X74, ctx->r5) = ctx->r15;
    // 0x8003643C: sw          $a1, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->r5;
    // 0x80036440: jr          $ra
    // 0x80036444: nop

    TRACE_RETURN()
    return;
    // 0x80036444: nop

;}
RECOMP_FUNC void func_8001DA08_1E608(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001DA08: lui         $v1, 0x8017
    ctx->r3 = S32(0X8017 << 16);
    // 0x8001DA0C: addiu       $v1, $v1, -0x7608
    ctx->r3 = ADD32(ctx->r3, -0X7608);
    // 0x8001DA10: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x8001DA14: addiu       $at, $zero, 0x11B7
    ctx->r1 = ADD32(0, 0X11B7);
    // 0x8001DA18: mtc1        $a0, $f16
    ctx->f16.u32l = ctx->r4;
    // 0x8001DA1C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8001DA20: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8001DA24: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8001DA28: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8001DA2C: addiu       $t8, $t7, 0x929
    ctx->r24 = ADD32(ctx->r15, 0X929);
    // 0x8001DA30: div         $zero, $t8, $at
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r1)));
    // 0x8001DA34: mfhi        $t0
    ctx->r8 = hi;
    // 0x8001DA38: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x8001DA3C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x8001DA40: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001DA44: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x8001DA48: ldc1        $f8, -0x46C8($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X46C8);
    // 0x8001DA4C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8001DA50: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8001DA54: cvt.d.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.d = CVT_D_W(ctx->f16.u32l);
    // 0x8001DA58: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x8001DA5C: nop

    // 0x8001DA60: mul.d       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f10.d, ctx->f18.d);
    // 0x8001DA64: cvt.s.d     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f0.fl = CVT_S_D(ctx->f4.d);
    // 0x8001DA68: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8001DA6C: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x8001DA70: nop

    // 0x8001DA74: cvt.w.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_S(ctx->f0.fl);
    // 0x8001DA78: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x8001DA7C: nop

    // 0x8001DA80: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x8001DA84: beq         $v0, $zero, L_8001DAE8
    if (ctx->r2 == 0) {
        // 0x8001DA88: nop
    
            goto L_8001DAE8;
    }
    // 0x8001DA88: nop

    // 0x8001DA8C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8001DA90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8001DA94: sub.s       $f6, $f0, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x8001DA98: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x8001DA9C: nop

    // 0x8001DAA0: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8001DAA4: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x8001DAA8: nop

    // 0x8001DAAC: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x8001DAB0: bnel        $v0, $zero, L_8001DAD8
    if (ctx->r2 != 0) {
        // 0x8001DAB4: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8001DAD8;
    }
    goto skip_0;
    // 0x8001DAB4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    skip_0:
    // 0x8001DAB8: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x8001DABC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8001DAC0: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8001DAC4: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
    // 0x8001DAC8: andi        $t2, $v0, 0xFFFF
    ctx->r10 = ctx->r2 & 0XFFFF;
    // 0x8001DACC: jr          $ra
    // 0x8001DAD0: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    TRACE_RETURN()
    return;
    // 0x8001DAD0: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
L_8001DAD4:
    // 0x8001DAD4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8001DAD8:
    // 0x8001DAD8: andi        $t2, $v0, 0xFFFF
    ctx->r10 = ctx->r2 & 0XFFFF;
    // 0x8001DADC: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8001DAE0: jr          $ra
    // 0x8001DAE4: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    TRACE_RETURN()
    return;
    // 0x8001DAE4: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
L_8001DAE8:
    // 0x8001DAE8: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x8001DAEC: nop

    // 0x8001DAF0: bltz        $v0, L_8001DAD4
    if (SIGNED(ctx->r2) < 0) {
        // 0x8001DAF4: andi        $t2, $v0, 0xFFFF
        ctx->r10 = ctx->r2 & 0XFFFF;
            goto L_8001DAD4;
    }
    // 0x8001DAF4: andi        $t2, $v0, 0xFFFF
    ctx->r10 = ctx->r2 & 0XFFFF;
    // 0x8001DAF8: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8001DAFC: jr          $ra
    // 0x8001DB00: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    TRACE_RETURN()
    return;
    // 0x8001DB00: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
;}
RECOMP_FUNC void func_8000A99C_B59C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000A99C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000A9A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000A9A4: lbu         $t6, 0x371($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X371);
    // 0x8000A9A8: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x8000A9AC: addiu       $a1, $a1, 0x7A80
    ctx->r5 = ADD32(ctx->r5, 0X7A80);
    // 0x8000A9B0: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x8000A9B4: beql        $t7, $zero, L_8000A9F4
    if (ctx->r15 == 0) {
        // 0x8000A9B8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8000A9F4;
    }
    goto skip_0;
    // 0x8000A9B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8000A9BC: jal         0x8000A918
    // 0x8000A9C0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8000A918_B518(rdram, ctx);
        goto after_0;
    // 0x8000A9C0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8000A9C4: sll         $t9, $v0, 16
    ctx->r25 = S32(ctx->r2 << 16);
    // 0x8000A9C8: sra         $t0, $t9, 16
    ctx->r8 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8000A9CC: sll         $a2, $v0, 16
    ctx->r6 = S32(ctx->r2 << 16);
    // 0x8000A9D0: sra         $t8, $a2, 16
    ctx->r24 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8000A9D4: slti        $at, $t0, 0x2
    ctx->r1 = SIGNED(ctx->r8) < 0X2 ? 1 : 0;
    // 0x8000A9D8: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x8000A9DC: bne         $at, $zero, L_8000A9F0
    if (ctx->r1 != 0) {
        // 0x8000A9E0: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_8000A9F0;
    }
    // 0x8000A9E0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8000A9E4: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x8000A9E8: jal         0x8000A74C
    // 0x8000A9EC: addiu       $a1, $a1, 0x7A80
    ctx->r5 = ADD32(ctx->r5, 0X7A80);
    func_8000A74C_B34C(rdram, ctx);
        goto after_1;
    // 0x8000A9EC: addiu       $a1, $a1, 0x7A80
    ctx->r5 = ADD32(ctx->r5, 0X7A80);
    after_1:
L_8000A9F0:
    // 0x8000A9F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8000A9F4:
    // 0x8000A9F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000A9F8: jr          $ra
    // 0x8000A9FC: nop

    TRACE_RETURN()
    return;
    // 0x8000A9FC: nop

;}
RECOMP_FUNC void func_8001CA0C_1D60C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001CA0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001CA10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001CA14: jal         0x800166E0
    // 0x8001CA18: nop

    func_800166E0_172E0(rdram, ctx);
        goto after_0;
    // 0x8001CA18: nop

    after_0:
    // 0x8001CA1C: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x8001CA20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001CA24: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x8001CA28: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x8001CA2C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001CA30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001CA34: bc1f        L_8001CA5C
    if (!c1cs) {
        // 0x8001CA38: nop
    
            goto L_8001CA5C;
    }
    // 0x8001CA38: nop

    // 0x8001CA3C: ldc1        $f2, -0x4730($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, -0X4730);
    // 0x8001CA40: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
L_8001CA44:
    // 0x8001CA44: add.d       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f2.d); 
    ctx->f6.d = ctx->f4.d + ctx->f2.d;
    // 0x8001CA48: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    // 0x8001CA4C: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x8001CA50: nop

    // 0x8001CA54: bc1tl       L_8001CA44
    if (c1cs) {
        // 0x8001CA58: cvt.d.s     $f4, $f12
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
            goto L_8001CA44;
    }
    goto skip_0;
    // 0x8001CA58: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    skip_0:
L_8001CA5C:
    // 0x8001CA5C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001CA60: ldc1        $f2, -0x4728($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, -0X4728);
    // 0x8001CA64: cvt.d.s     $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.d = CVT_D_S(ctx->f12.fl);
    // 0x8001CA68: lui         $at, 0x4400
    ctx->r1 = S32(0X4400 << 16);
    // 0x8001CA6C: c.lt.d      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.d < ctx->f0.d;
    // 0x8001CA70: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8001CA74: bc1f        L_8001CA98
    if (!c1cs) {
        // 0x8001CA78: nop
    
            goto L_8001CA98;
    }
    // 0x8001CA78: nop

    // 0x8001CA7C: sub.d       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = ctx->f0.d - ctx->f2.d;
L_8001CA80:
    // 0x8001CA80: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    // 0x8001CA84: cvt.d.s     $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.d = CVT_D_S(ctx->f12.fl);
    // 0x8001CA88: c.lt.d      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.d < ctx->f0.d;
    // 0x8001CA8C: nop

    // 0x8001CA90: bc1tl       L_8001CA80
    if (c1cs) {
        // 0x8001CA94: sub.d       $f8, $f0, $f2
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = ctx->f0.d - ctx->f2.d;
            goto L_8001CA80;
    }
    goto skip_1;
    // 0x8001CA94: sub.d       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = ctx->f0.d - ctx->f2.d;
    skip_1:
L_8001CA98:
    // 0x8001CA98: mul.s       $f16, $f12, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f12.fl, ctx->f10.fl);
    // 0x8001CA9C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001CAA0: ldc1        $f4, -0x4720($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X4720);
    // 0x8001CAA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8001CAA8: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8001CAAC: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x8001CAB0: div.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = DIV_D(ctx->f18.d, ctx->f4.d);
    // 0x8001CAB4: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x8001CAB8: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8001CABC: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x8001CAC0: nop

    // 0x8001CAC4: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8001CAC8: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x8001CACC: nop

    // 0x8001CAD0: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x8001CAD4: beql        $v0, $zero, L_8001CB24
    if (ctx->r2 == 0) {
        // 0x8001CAD8: mfc1        $v0, $f10
        ctx->r2 = (int32_t)ctx->f10.u32l;
            goto L_8001CB24;
    }
    goto skip_2;
    // 0x8001CAD8: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
    skip_2:
    // 0x8001CADC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8001CAE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8001CAE4: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8001CAE8: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x8001CAEC: nop

    // 0x8001CAF0: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8001CAF4: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x8001CAF8: nop

    // 0x8001CAFC: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x8001CB00: bne         $v0, $zero, L_8001CB18
    if (ctx->r2 != 0) {
        // 0x8001CB04: nop
    
            goto L_8001CB18;
    }
    // 0x8001CB04: nop

    // 0x8001CB08: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
    // 0x8001CB0C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8001CB10: b           L_8001CB30
    // 0x8001CB14: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
        goto L_8001CB30;
    // 0x8001CB14: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
L_8001CB18:
    // 0x8001CB18: b           L_8001CB30
    // 0x8001CB1C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8001CB30;
    // 0x8001CB1C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8001CB20: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
L_8001CB24:
    // 0x8001CB24: nop

    // 0x8001CB28: bltz        $v0, L_8001CB18
    if (SIGNED(ctx->r2) < 0) {
        // 0x8001CB2C: nop
    
            goto L_8001CB18;
    }
    // 0x8001CB2C: nop

L_8001CB30:
    // 0x8001CB30: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8001CB34: andi        $t7, $v0, 0xFFFF
    ctx->r15 = ctx->r2 & 0XFFFF;
    // 0x8001CB38: jr          $ra
    // 0x8001CB3C: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    TRACE_RETURN()
    return;
    // 0x8001CB3C: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
;}
RECOMP_FUNC void func_8000DDF0_E9F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000DDF0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8000DDF4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8000DDF8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8000DDFC: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8000DE00: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x8000DE04: sw          $t6, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = ctx->r14;
    // 0x8000DE08: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x8000DE0C: lui         $t8, 0xFA00
    ctx->r24 = S32(0XFA00 << 16);
    // 0x8000DE10: sw          $t8, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->r24;
    // 0x8000DE14: sw          $t7, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r15;
    // 0x8000DE18: lw          $t4, 0x48($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X48);
    // 0x8000DE1C: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x8000DE20: andi        $t1, $a3, 0xFF
    ctx->r9 = ctx->r7 & 0XFF;
    // 0x8000DE24: sll         $t2, $t1, 16
    ctx->r10 = S32(ctx->r9 << 16);
    // 0x8000DE28: sll         $t0, $a2, 24
    ctx->r8 = S32(ctx->r6 << 24);
    // 0x8000DE2C: andi        $t5, $t4, 0xFF
    ctx->r13 = ctx->r12 & 0XFF;
    // 0x8000DE30: sll         $t6, $t5, 8
    ctx->r14 = S32(ctx->r13 << 8);
    // 0x8000DE34: or          $t3, $t0, $t2
    ctx->r11 = ctx->r8 | ctx->r10;
    // 0x8000DE38: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8000DE3C: or          $t7, $t3, $t6
    ctx->r15 = ctx->r11 | ctx->r14;
    // 0x8000DE40: andi        $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 & 0XFF;
    // 0x8000DE44: or          $t1, $t7, $t9
    ctx->r9 = ctx->r15 | ctx->r25;
    // 0x8000DE48: lui         $t0, 0xB800
    ctx->r8 = S32(0XB800 << 16);
    // 0x8000DE4C: sw          $t1, 0xDC($a0)
    MEM_W(0XDC, ctx->r4) = ctx->r9;
    // 0x8000DE50: sw          $t0, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->r8;
    // 0x8000DE54: sw          $zero, 0xE4($a0)
    MEM_W(0XE4, ctx->r4) = 0;
    // 0x8000DE58: subu        $a1, $s0, $s0
    ctx->r5 = SUB32(ctx->r16, ctx->r16);
    // 0x8000DE5C: addiu       $a0, $a0, 0xD0
    ctx->r4 = ADD32(ctx->r4, 0XD0);
    // 0x8000DE60: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8000DE64: jal         0x80040620
    // 0x8000DE68: addiu       $a1, $a1, 0x18
    ctx->r5 = ADD32(ctx->r5, 0X18);
    osWritebackDCache_recomp(rdram, ctx);
        goto after_0;
    // 0x8000DE68: addiu       $a1, $a1, 0x18
    ctx->r5 = ADD32(ctx->r5, 0X18);
    after_0:
    // 0x8000DE6C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8000DE70: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x8000DE74: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8000DE78: jr          $ra
    // 0x8000DE7C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8000DE7C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8001C9D8_1D5D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001C9D8: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8001C9DC: lwc1        $f6, 0x8($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X8);
    // 0x8001C9E0: lwc1        $f10, 0xC($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0XC);
    // 0x8001C9E4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8001C9E8: lwc1        $f4, 0x10($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X10);
    // 0x8001C9EC: swc1        $f8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f8.u32l;
    // 0x8001C9F0: lwc1        $f16, 0xC($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0XC);
    // 0x8001C9F4: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8001C9F8: swc1        $f18, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f18.u32l;
    // 0x8001C9FC: lwc1        $f6, 0x10($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X10);
    // 0x8001CA00: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8001CA04: jr          $ra
    // 0x8001CA08: swc1        $f8, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x8001CA08: swc1        $f8, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_800036D0_42D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800036D0: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x800036D4: addiu       $v1, $v1, -0x3A38
    ctx->r3 = ADD32(ctx->r3, -0X3A38);
    // 0x800036D8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800036DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800036E0: lui         $t6, 0x4
    ctx->r14 = S32(0X4 << 16);
    // 0x800036E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800036E8: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x800036EC: lbu         $t6, -0x522A($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X522A);
    // 0x800036F0: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x800036F4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800036F8: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x800036FC: sb          $t7, -0x522A($at)
    MEM_B(-0X522A, ctx->r1) = ctx->r15;
    // 0x80003700: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x80003704: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80003708: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8000370C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80003710: jal         0x80003528
    // 0x80003714: sb          $zero, -0x5229($at)
    MEM_B(-0X5229, ctx->r1) = 0;
    func_80003528_4128(rdram, ctx);
        goto after_0;
    // 0x80003714: sb          $zero, -0x5229($at)
    MEM_B(-0X5229, ctx->r1) = 0;
    after_0:
    // 0x80003718: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000371C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80003720: jr          $ra
    // 0x80003724: nop

    TRACE_RETURN()
    return;
    // 0x80003724: nop

;}
RECOMP_FUNC void func_8000427C_4E7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000427C: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x80004280: lw          $t8, -0x3A38($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3A38);
    // 0x80004284: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x80004288: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8000428C: sll         $t9, $t7, 4
    ctx->r25 = S32(ctx->r15 << 4);
    // 0x80004290: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80004294: ori         $at, $at, 0xB168
    ctx->r1 = ctx->r1 | 0XB168;
    // 0x80004298: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x8000429C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x800042A0: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x800042A4: jr          $ra
    // 0x800042A8: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    TRACE_RETURN()
    return;
    // 0x800042A8: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
;}
RECOMP_FUNC void func_8003B348_3BF48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003B348: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B34C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003B350: addiu       $v0, $v0, 0x1728
    ctx->r2 = ADD32(ctx->r2, 0X1728);
    // 0x8003B354: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B358: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8003B35C: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8003B360: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x8003B364: sb          $v1, 0xF($t6)
    MEM_B(0XF, ctx->r14) = ctx->r3;
    // 0x8003B368: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x8003B36C: sb          $t7, 0x49($t8)
    MEM_B(0X49, ctx->r24) = ctx->r15;
    // 0x8003B370: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x8003B374: sh          $zero, 0x4A($t9)
    MEM_H(0X4A, ctx->r25) = 0;
    // 0x8003B378: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x8003B37C: jal         0x8003AFB0
    // 0x8003B380: sh          $v1, 0x4C($t0)
    MEM_H(0X4C, ctx->r8) = ctx->r3;
    func_8003AFB0_3BBB0(rdram, ctx);
        goto after_0;
    // 0x8003B380: sh          $v1, 0x4C($t0)
    MEM_H(0X4C, ctx->r8) = ctx->r3;
    after_0:
    // 0x8003B384: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003B388: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003B38C: jr          $ra
    // 0x8003B390: nop

    TRACE_RETURN()
    return;
    // 0x8003B390: nop

;}
RECOMP_FUNC void alSynDelete(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004E220: jr          $ra
    // 0x8004E224: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    TRACE_RETURN()
    return;
    // 0x8004E224: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
;}
RECOMP_FUNC void func_8000C3A0_CFA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000C3A0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8000C3A4: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8000C3A8: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8000C3AC: lw          $v0, 0x7C48($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7C48);
    // 0x8000C3B0: beq         $v0, $zero, L_8000C3E4
    if (ctx->r2 == 0) {
        // 0x8000C3B4: nop
    
            goto L_8000C3E4;
    }
    // 0x8000C3B4: nop

    // 0x8000C3B8: lh          $t7, 0x30($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X30);
    // 0x8000C3BC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8000C3C0: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x8000C3C4: bne         $t7, $at, L_8000C3E4
    if (ctx->r15 != ctx->r1) {
        // 0x8000C3C8: nop
    
            goto L_8000C3E4;
    }
    // 0x8000C3C8: nop

    // 0x8000C3CC: lw          $t1, 0x14($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X14);
    // 0x8000C3D0: lw          $t0, 0x10($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X10);
    // 0x8000C3D4: sh          $t8, 0x30($v0)
    MEM_H(0X30, ctx->r2) = ctx->r24;
    // 0x8000C3D8: ori         $t3, $t1, 0x1
    ctx->r11 = ctx->r9 | 0X1;
    // 0x8000C3DC: sw          $t3, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r11;
    // 0x8000C3E0: sw          $t0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r8;
L_8000C3E4:
    // 0x8000C3E4: jr          $ra
    // 0x8000C3E8: nop

    TRACE_RETURN()
    return;
    // 0x8000C3E8: nop

;}
RECOMP_FUNC void func_80009548_A148(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80009548: addiu       $sp, $sp, -0xE8
    ctx->r29 = ADD32(ctx->r29, -0XE8);
    // 0x8000954C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80009550: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80009554: sw          $a0, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r4;
    // 0x80009558: lbu         $v0, 0xC($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XC);
    // 0x8000955C: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x80009560: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80009564: slti        $at, $v0, 0x10
    ctx->r1 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x80009568: bne         $at, $zero, L_80009578
    if (ctx->r1 != 0) {
        // 0x8000956C: addiu       $v1, $v1, 0x7A60
        ctx->r3 = ADD32(ctx->r3, 0X7A60);
            goto L_80009578;
    }
    // 0x8000956C: addiu       $v1, $v1, 0x7A60
    ctx->r3 = ADD32(ctx->r3, 0X7A60);
    // 0x80009570: b           L_8000957C
    // 0x80009574: lbu         $t4, 0x5($a1)
    ctx->r12 = MEM_BU(ctx->r5, 0X5);
        goto L_8000957C;
    // 0x80009574: lbu         $t4, 0x5($a1)
    ctx->r12 = MEM_BU(ctx->r5, 0X5);
L_80009578:
    // 0x80009578: or          $t4, $v0, $zero
    ctx->r12 = ctx->r2 | 0;
L_8000957C:
    // 0x8000957C: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x80009580: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x80009584: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x80009588: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8000958C: bnel        $t7, $v0, L_800095A4
    if (ctx->r15 != ctx->r2) {
        // 0x80009590: sw          $v0, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r2;
            goto L_800095A4;
    }
    goto skip_0;
    // 0x80009590: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    skip_0:
    // 0x80009594: lhu         $t8, 0x7A68($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X7A68);
    // 0x80009598: beql        $t4, $t8, L_8000A0E0
    if (ctx->r12 == ctx->r24) {
        // 0x8000959C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8000A0E0;
    }
    goto skip_1;
    // 0x8000959C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x800095A0: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_800095A4:
    // 0x800095A4: sh          $t4, 0x7A68($at)
    MEM_H(0X7A68, ctx->r1) = ctx->r12;
    // 0x800095A8: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x800095AC: lw          $t6, 0xE8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XE8);
    // 0x800095B0: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800095B4: sw          $t9, 0x7A64($at)
    MEM_W(0X7A64, ctx->r1) = ctx->r25;
    // 0x800095B8: lw          $t7, 0x38($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X38);
    // 0x800095BC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800095C0: sw          $t7, 0x7A6C($at)
    MEM_W(0X7A6C, ctx->r1) = ctx->r15;
    // 0x800095C4: lhu         $a0, 0xC($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XC);
    // 0x800095C8: beql        $a0, $zero, L_80009660
    if (ctx->r4 == 0) {
        // 0x800095CC: lbu         $a3, 0x4($s0)
        ctx->r7 = MEM_BU(ctx->r16, 0X4);
            goto L_80009660;
    }
    goto skip_2;
    // 0x800095CC: lbu         $a3, 0x4($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X4);
    skip_2:
    // 0x800095D0: jal         0x80001E50
    // 0x800095D4: sw          $t4, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r12;
    func_80001E50_2A50(rdram, ctx);
        goto after_0;
    // 0x800095D4: sw          $t4, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r12;
    after_0:
    // 0x800095D8: lhu         $a0, 0xC($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XC);
    // 0x800095DC: jal         0x800141C4
    // 0x800095E0: sw          $v0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r2;
    func_800141C4_14DC4(rdram, ctx);
        goto after_1;
    // 0x800095E0: sw          $v0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r2;
    after_1:
    // 0x800095E4: lw          $a3, 0xD8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XD8);
    // 0x800095E8: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
    // 0x800095EC: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x800095F0: sll         $t0, $a3, 24
    ctx->r8 = S32(ctx->r7 << 24);
    // 0x800095F4: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x800095F8: subu        $t6, $t9, $t0
    ctx->r14 = SUB32(ctx->r25, ctx->r8);
    // 0x800095FC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80009600: addiu       $a0, $a0, -0x3A34
    ctx->r4 = ADD32(ctx->r4, -0X3A34);
    // 0x80009604: sw          $t6, 0x7A64($at)
    MEM_W(0X7A64, ctx->r1) = ctx->r14;
    // 0x80009608: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x8000960C: sll         $t8, $a3, 2
    ctx->r24 = S32(ctx->r7 << 2);
    // 0x80009610: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x80009614: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x80009618: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x8000961C: sll         $t6, $t9, 8
    ctx->r14 = S32(ctx->r25 << 8);
    // 0x80009620: lui         $at, 0xBC00
    ctx->r1 = S32(0XBC00 << 16);
    // 0x80009624: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x80009628: lw          $t4, 0xDC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XDC);
    // 0x8000962C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80009630: addu        $t9, $v0, $at
    ctx->r25 = ADD32(ctx->r2, ctx->r1);
    // 0x80009634: ori         $t8, $t7, 0x6
    ctx->r24 = ctx->r15 | 0X6;
    // 0x80009638: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8000963C: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x80009640: lw          $t6, 0xE8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XE8);
    // 0x80009644: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80009648: lw          $a2, 0x38($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X38);
    // 0x8000964C: beq         $a2, $zero, L_8000965C
    if (ctx->r6 == 0) {
        // 0x80009650: addu        $t7, $a2, $v0
        ctx->r15 = ADD32(ctx->r6, ctx->r2);
            goto L_8000965C;
    }
    // 0x80009650: addu        $t7, $a2, $v0
    ctx->r15 = ADD32(ctx->r6, ctx->r2);
    // 0x80009654: subu        $t8, $t7, $t0
    ctx->r24 = SUB32(ctx->r15, ctx->r8);
    // 0x80009658: sw          $t8, 0x7A6C($at)
    MEM_W(0X7A6C, ctx->r1) = ctx->r24;
L_8000965C:
    // 0x8000965C: lbu         $a3, 0x4($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X4);
L_80009660:
    // 0x80009660: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80009664: addiu       $a0, $a0, -0x3A34
    ctx->r4 = ADD32(ctx->r4, -0X3A34);
    // 0x80009668: andi        $t9, $a3, 0x7
    ctx->r25 = ctx->r7 & 0X7;
    // 0x8000966C: sll         $v0, $t9, 2
    ctx->r2 = S32(ctx->r25 << 2);
    // 0x80009670: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x80009674: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80009678: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x8000967C: lw          $t6, -0x554C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X554C);
    // 0x80009680: lui         $t8, 0xBA00
    ctx->r24 = S32(0XBA00 << 16);
    // 0x80009684: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x80009688: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x8000968C: ori         $t8, $t8, 0xE02
    ctx->r24 = ctx->r24 | 0XE02;
    // 0x80009690: lui         $t9, 0x8008
    ctx->r25 = S32(0X8008 << 16);
    // 0x80009694: sw          $t6, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r14;
    // 0x80009698: addu        $t9, $t9, $v0
    ctx->r25 = ADD32(ctx->r25, ctx->r2);
    // 0x8000969C: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x800096A0: lw          $t9, -0x5560($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X5560);
    // 0x800096A4: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x800096A8: addiu       $t2, $t2, 0x7A72
    ctx->r10 = ADD32(ctx->r10, 0X7A72);
    // 0x800096AC: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x800096B0: lbu         $a1, 0x4($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X4);
    // 0x800096B4: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x800096B8: lui         $ra, 0x10
    ctx->r31 = S32(0X10 << 16);
    // 0x800096BC: andi        $t6, $a1, 0x18
    ctx->r14 = ctx->r5 & 0X18;
    // 0x800096C0: beql        $t6, $zero, L_800096EC
    if (ctx->r14 == 0) {
        // 0x800096C4: lhu         $t7, 0x0($t2)
        ctx->r15 = MEM_HU(ctx->r10, 0X0);
            goto L_800096EC;
    }
    goto skip_3;
    // 0x800096C4: lhu         $t7, 0x0($t2)
    ctx->r15 = MEM_HU(ctx->r10, 0X0);
    skip_3:
    // 0x800096C8: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x800096CC: beq         $t6, $at, L_80009AF4
    if (ctx->r14 == ctx->r1) {
        // 0x800096D0: lui         $t2, 0x8016
        ctx->r10 = S32(0X8016 << 16);
            goto L_80009AF4;
    }
    // 0x800096D0: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x800096D4: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x800096D8: beql        $t6, $at, L_80009E58
    if (ctx->r14 == ctx->r1) {
        // 0x800096DC: lw          $a1, 0xE4($sp)
        ctx->r5 = MEM_W(ctx->r29, 0XE4);
            goto L_80009E58;
    }
    goto skip_4;
    // 0x800096DC: lw          $a1, 0xE4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XE4);
    skip_4:
    // 0x800096E0: b           L_80009AF8
    // 0x800096E4: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
        goto L_80009AF8;
    // 0x800096E4: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x800096E8: lhu         $t7, 0x0($t2)
    ctx->r15 = MEM_HU(ctx->r10, 0X0);
L_800096EC:
    // 0x800096EC: lui         $t9, 0xFD10
    ctx->r25 = S32(0XFD10 << 16);
    // 0x800096F0: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x800096F4: beq         $t7, $zero, L_800097A0
    if (ctx->r15 == 0) {
        // 0x800096F8: nop
    
            goto L_800097A0;
    }
    // 0x800096F8: nop

    // 0x800096FC: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80009700: sh          $zero, 0x0($t2)
    MEM_H(0X0, ctx->r10) = 0;
    // 0x80009704: addiu       $t6, $t6, 0x29D8
    ctx->r14 = ADD32(ctx->r14, 0X29D8);
    // 0x80009708: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x8000970C: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x80009710: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x80009714: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80009718: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x8000971C: lui         $t8, 0xE800
    ctx->r24 = S32(0XE800 << 16);
    // 0x80009720: lui         $t6, 0xF500
    ctx->r14 = S32(0XF500 << 16);
    // 0x80009724: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x80009728: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x8000972C: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80009730: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80009734: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80009738: lui         $t7, 0x700
    ctx->r15 = S32(0X700 << 16);
    // 0x8000973C: ori         $t6, $t6, 0x100
    ctx->r14 = ctx->r14 | 0X100;
    // 0x80009740: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x80009744: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x80009748: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x8000974C: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80009750: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80009754: lui         $t9, 0xE600
    ctx->r25 = S32(0XE600 << 16);
    // 0x80009758: lui         $t7, 0xF000
    ctx->r15 = S32(0XF000 << 16);
    // 0x8000975C: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x80009760: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x80009764: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80009768: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8000976C: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80009770: lui         $t8, 0x73F
    ctx->r24 = S32(0X73F << 16);
    // 0x80009774: ori         $t8, $t8, 0xC000
    ctx->r24 = ctx->r24 | 0XC000;
    // 0x80009778: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x8000977C: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x80009780: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x80009784: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80009788: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x8000978C: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x80009790: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x80009794: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x80009798: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8000979C: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
L_800097A0:
    // 0x800097A0: bnel        $t4, $at, L_8000985C
    if (ctx->r12 != ctx->r1) {
        // 0x800097A4: lw          $a1, 0xE4($sp)
        ctx->r5 = MEM_W(ctx->r29, 0XE4);
            goto L_8000985C;
    }
    goto skip_5;
    // 0x800097A4: lw          $a1, 0xE4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XE4);
    skip_5:
    // 0x800097A8: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x800097AC: lui         $t8, 0xFD10
    ctx->r24 = S32(0XFD10 << 16);
    // 0x800097B0: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x800097B4: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x800097B8: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x800097BC: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x800097C0: lw          $t9, 0x7A6C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A6C);
    // 0x800097C4: lui         $t7, 0xE800
    ctx->r15 = S32(0XE800 << 16);
    // 0x800097C8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800097CC: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x800097D0: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x800097D4: lui         $t9, 0xF500
    ctx->r25 = S32(0XF500 << 16);
    // 0x800097D8: ori         $t9, $t9, 0x1F0
    ctx->r25 = ctx->r25 | 0X1F0;
    // 0x800097DC: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x800097E0: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x800097E4: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x800097E8: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x800097EC: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x800097F0: lui         $t6, 0x700
    ctx->r14 = S32(0X700 << 16);
    // 0x800097F4: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x800097F8: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x800097FC: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x80009800: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80009804: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80009808: lui         $t8, 0xE600
    ctx->r24 = S32(0XE600 << 16);
    // 0x8000980C: lui         $t6, 0xF000
    ctx->r14 = S32(0XF000 << 16);
    // 0x80009810: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x80009814: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x80009818: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8000981C: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80009820: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80009824: lui         $t7, 0x703
    ctx->r15 = S32(0X703 << 16);
    // 0x80009828: ori         $t7, $t7, 0xC000
    ctx->r15 = ctx->r15 | 0XC000;
    // 0x8000982C: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x80009830: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x80009834: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x80009838: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8000983C: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80009840: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x80009844: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x80009848: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x8000984C: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80009850: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80009854: sh          $zero, 0x7A68($at)
    MEM_H(0X7A68, ctx->r1) = 0;
    // 0x80009858: lw          $a1, 0xE4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XE4);
L_8000985C:
    // 0x8000985C: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80009860: lui         $at, 0xFD00
    ctx->r1 = S32(0XFD00 << 16);
    // 0x80009864: andi        $t7, $a1, 0x7
    ctx->r15 = ctx->r5 & 0X7;
    // 0x80009868: sll         $a1, $t7, 21
    ctx->r5 = S32(ctx->r15 << 21);
    // 0x8000986C: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x80009870: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x80009874: or          $t9, $a1, $at
    ctx->r25 = ctx->r5 | ctx->r1;
    // 0x80009878: or          $t6, $t9, $ra
    ctx->r14 = ctx->r25 | ctx->r31;
    // 0x8000987C: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x80009880: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80009884: lw          $t7, 0x7A64($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A64);
    // 0x80009888: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
    // 0x8000988C: lui         $at, 0xF500
    ctx->r1 = S32(0XF500 << 16);
    // 0x80009890: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x80009894: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80009898: or          $t3, $a1, $at
    ctx->r11 = ctx->r5 | ctx->r1;
    // 0x8000989C: or          $t9, $t3, $ra
    ctx->r25 = ctx->r11 | ctx->r31;
    // 0x800098A0: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x800098A4: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x800098A8: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x800098AC: lw          $t6, 0xE8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XE8);
    // 0x800098B0: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x800098B4: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    // 0x800098B8: lw          $v0, 0x8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X8);
    // 0x800098BC: sll         $t7, $v0, 10
    ctx->r15 = S32(ctx->r2 << 10);
    // 0x800098C0: srl         $t8, $t7, 29
    ctx->r24 = S32(U32(ctx->r15) >> 29);
    // 0x800098C4: andi        $t9, $t8, 0x3
    ctx->r25 = ctx->r24 & 0X3;
    // 0x800098C8: sll         $t6, $t9, 18
    ctx->r14 = S32(ctx->r25 << 18);
    // 0x800098CC: sll         $t8, $v0, 17
    ctx->r24 = S32(ctx->r2 << 17);
    // 0x800098D0: srl         $t9, $t8, 28
    ctx->r25 = S32(U32(ctx->r24) >> 28);
    // 0x800098D4: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x800098D8: andi        $t6, $t9, 0xF
    ctx->r14 = ctx->r25 & 0XF;
    // 0x800098DC: sll         $t8, $t6, 14
    ctx->r24 = S32(ctx->r14 << 14);
    // 0x800098E0: or          $t9, $t7, $t8
    ctx->r25 = ctx->r15 | ctx->r24;
    // 0x800098E4: sll         $t6, $v0, 7
    ctx->r14 = S32(ctx->r2 << 7);
    // 0x800098E8: srl         $t7, $t6, 29
    ctx->r15 = S32(U32(ctx->r14) >> 29);
    // 0x800098EC: andi        $t8, $t7, 0x3
    ctx->r24 = ctx->r15 & 0X3;
    // 0x800098F0: sll         $t6, $t8, 8
    ctx->r14 = S32(ctx->r24 << 8);
    // 0x800098F4: or          $t7, $t9, $t6
    ctx->r15 = ctx->r25 | ctx->r14;
    // 0x800098F8: sll         $t8, $v0, 13
    ctx->r24 = S32(ctx->r2 << 13);
    // 0x800098FC: srl         $t9, $t8, 28
    ctx->r25 = S32(U32(ctx->r24) >> 28);
    // 0x80009900: andi        $t6, $t9, 0xF
    ctx->r14 = ctx->r25 & 0XF;
    // 0x80009904: sll         $t8, $t6, 4
    ctx->r24 = S32(ctx->r14 << 4);
    // 0x80009908: or          $t9, $t7, $t8
    ctx->r25 = ctx->r15 | ctx->r24;
    // 0x8000990C: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x80009910: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80009914: lui         $t7, 0xE600
    ctx->r15 = S32(0XE600 << 16);
    // 0x80009918: lui         $t9, 0xF300
    ctx->r25 = S32(0XF300 << 16);
    // 0x8000991C: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x80009920: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x80009924: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80009928: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8000992C: or          $t0, $v1, $zero
    ctx->r8 = ctx->r3 | 0;
    // 0x80009930: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80009934: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x80009938: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x8000993C: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80009940: lhu         $t6, 0x2($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X2);
    // 0x80009944: lhu         $t1, 0x0($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X0);
    // 0x80009948: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x8000994C: addiu       $t3, $zero, 0x7FF
    ctx->r11 = ADD32(0, 0X7FF);
    // 0x80009950: multu       $t1, $t6
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80009954: or          $t5, $v1, $zero
    ctx->r13 = ctx->r3 | 0;
    // 0x80009958: mflo        $t2
    ctx->r10 = lo;
    // 0x8000995C: addiu       $t2, $t2, 0x3
    ctx->r10 = ADD32(ctx->r10, 0X3);
    // 0x80009960: sra         $t7, $t2, 2
    ctx->r15 = S32(SIGNED(ctx->r10) >> 2);
    // 0x80009964: addiu       $t2, $t7, -0x1
    ctx->r10 = ADD32(ctx->r15, -0X1);
    // 0x80009968: slti        $at, $t2, 0x7FF
    ctx->r1 = SIGNED(ctx->r10) < 0X7FF ? 1 : 0;
    // 0x8000996C: beq         $at, $zero, L_8000997C
    if (ctx->r1 == 0) {
        // 0x80009970: nop
    
            goto L_8000997C;
    }
    // 0x80009970: nop

    // 0x80009974: b           L_8000997C
    // 0x80009978: or          $t3, $t2, $zero
    ctx->r11 = ctx->r10 | 0;
        goto L_8000997C;
    // 0x80009978: or          $t3, $t2, $zero
    ctx->r11 = ctx->r10 | 0;
L_8000997C:
    // 0x8000997C: bgez        $t1, L_8000998C
    if (SIGNED(ctx->r9) >= 0) {
        // 0x80009980: sra         $v0, $t1, 4
        ctx->r2 = S32(SIGNED(ctx->r9) >> 4);
            goto L_8000998C;
    }
    // 0x80009980: sra         $v0, $t1, 4
    ctx->r2 = S32(SIGNED(ctx->r9) >> 4);
    // 0x80009984: addiu       $at, $t1, 0xF
    ctx->r1 = ADD32(ctx->r9, 0XF);
    // 0x80009988: sra         $v0, $at, 4
    ctx->r2 = S32(SIGNED(ctx->r1) >> 4);
L_8000998C:
    // 0x8000998C: bgtz        $v0, L_8000999C
    if (SIGNED(ctx->r2) > 0) {
        // 0x80009990: or          $t1, $v0, $zero
        ctx->r9 = ctx->r2 | 0;
            goto L_8000999C;
    }
    // 0x80009990: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
    // 0x80009994: b           L_8000999C
    // 0x80009998: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
        goto L_8000999C;
    // 0x80009998: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
L_8000999C:
    // 0x8000999C: bgtz        $v0, L_800099AC
    if (SIGNED(ctx->r2) > 0) {
        // 0x800099A0: addiu       $t8, $t1, 0x7FF
        ctx->r24 = ADD32(ctx->r9, 0X7FF);
            goto L_800099AC;
    }
    // 0x800099A0: addiu       $t8, $t1, 0x7FF
    ctx->r24 = ADD32(ctx->r9, 0X7FF);
    // 0x800099A4: b           L_800099B0
    // 0x800099A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_800099B0;
    // 0x800099A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_800099AC:
    // 0x800099AC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_800099B0:
    // 0x800099B0: div         $zero, $t8, $a1
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r5)));
    // 0x800099B4: bne         $a1, $zero, L_800099C0
    if (ctx->r5 != 0) {
        // 0x800099B8: nop
    
            goto L_800099C0;
    }
    // 0x800099B8: nop

    // 0x800099BC: break       7
    do_break(2147523004);
L_800099C0:
    // 0x800099C0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800099C4: bne         $a1, $at, L_800099D8
    if (ctx->r5 != ctx->r1) {
        // 0x800099C8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800099D8;
    }
    // 0x800099C8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800099CC: bne         $t8, $at, L_800099D8
    if (ctx->r24 != ctx->r1) {
        // 0x800099D0: nop
    
            goto L_800099D8;
    }
    // 0x800099D0: nop

    // 0x800099D4: break       6
    do_break(2147523028);
L_800099D8:
    // 0x800099D8: mflo        $t9
    ctx->r25 = lo;
    // 0x800099DC: andi        $t6, $t9, 0xFFF
    ctx->r14 = ctx->r25 & 0XFFF;
    // 0x800099E0: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x800099E4: andi        $t8, $t3, 0xFFF
    ctx->r24 = ctx->r11 & 0XFFF;
    // 0x800099E8: sll         $t9, $t8, 12
    ctx->r25 = S32(ctx->r24 << 12);
    // 0x800099EC: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x800099F0: or          $t6, $t7, $t9
    ctx->r14 = ctx->r15 | ctx->r25;
    // 0x800099F4: sw          $t6, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r14;
    // 0x800099F8: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x800099FC: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x80009A00: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x80009A04: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x80009A08: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80009A0C: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80009A10: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
    // 0x80009A14: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80009A18: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80009A1C: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x80009A20: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x80009A24: lhu         $t8, 0x0($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X0);
    // 0x80009A28: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    // 0x80009A2C: sra         $t7, $t8, 1
    ctx->r15 = S32(SIGNED(ctx->r24) >> 1);
    // 0x80009A30: addiu       $t9, $t7, 0x7
    ctx->r25 = ADD32(ctx->r15, 0X7);
    // 0x80009A34: sra         $t8, $t9, 3
    ctx->r24 = S32(SIGNED(ctx->r25) >> 3);
    // 0x80009A38: andi        $t7, $t8, 0x1FF
    ctx->r15 = ctx->r24 & 0X1FF;
    // 0x80009A3C: sll         $t9, $t7, 9
    ctx->r25 = S32(ctx->r15 << 9);
    // 0x80009A40: or          $t8, $t6, $t9
    ctx->r24 = ctx->r14 | ctx->r25;
    // 0x80009A44: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80009A48: lw          $t7, 0xE8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XE8);
    // 0x80009A4C: andi        $t6, $t4, 0xF
    ctx->r14 = ctx->r12 & 0XF;
    // 0x80009A50: sll         $t9, $t6, 20
    ctx->r25 = S32(ctx->r14 << 20);
    // 0x80009A54: lw          $v0, 0x8($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X8);
    // 0x80009A58: sll         $t8, $v0, 10
    ctx->r24 = S32(ctx->r2 << 10);
    // 0x80009A5C: srl         $t7, $t8, 29
    ctx->r15 = S32(U32(ctx->r24) >> 29);
    // 0x80009A60: andi        $t6, $t7, 0x3
    ctx->r14 = ctx->r15 & 0X3;
    // 0x80009A64: sll         $t8, $t6, 18
    ctx->r24 = S32(ctx->r14 << 18);
    // 0x80009A68: or          $t7, $t9, $t8
    ctx->r15 = ctx->r25 | ctx->r24;
    // 0x80009A6C: sll         $t6, $v0, 17
    ctx->r14 = S32(ctx->r2 << 17);
    // 0x80009A70: srl         $t9, $t6, 28
    ctx->r25 = S32(U32(ctx->r14) >> 28);
    // 0x80009A74: andi        $t8, $t9, 0xF
    ctx->r24 = ctx->r25 & 0XF;
    // 0x80009A78: sll         $t6, $t8, 14
    ctx->r14 = S32(ctx->r24 << 14);
    // 0x80009A7C: or          $t9, $t7, $t6
    ctx->r25 = ctx->r15 | ctx->r14;
    // 0x80009A80: sll         $t8, $v0, 7
    ctx->r24 = S32(ctx->r2 << 7);
    // 0x80009A84: srl         $t7, $t8, 29
    ctx->r15 = S32(U32(ctx->r24) >> 29);
    // 0x80009A88: andi        $t6, $t7, 0x3
    ctx->r14 = ctx->r15 & 0X3;
    // 0x80009A8C: sll         $t8, $t6, 8
    ctx->r24 = S32(ctx->r14 << 8);
    // 0x80009A90: or          $t7, $t9, $t8
    ctx->r15 = ctx->r25 | ctx->r24;
    // 0x80009A94: sll         $t6, $v0, 13
    ctx->r14 = S32(ctx->r2 << 13);
    // 0x80009A98: srl         $t9, $t6, 28
    ctx->r25 = S32(U32(ctx->r14) >> 28);
    // 0x80009A9C: andi        $t8, $t9, 0xF
    ctx->r24 = ctx->r25 & 0XF;
    // 0x80009AA0: sll         $t6, $t8, 4
    ctx->r14 = S32(ctx->r24 << 4);
    // 0x80009AA4: or          $t9, $t7, $t6
    ctx->r25 = ctx->r15 | ctx->r14;
    // 0x80009AA8: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x80009AAC: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80009AB0: lui         $t7, 0xF200
    ctx->r15 = S32(0XF200 << 16);
    // 0x80009AB4: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x80009AB8: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x80009ABC: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80009AC0: lhu         $t6, 0x0($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X0);
    // 0x80009AC4: or          $t0, $v1, $zero
    ctx->r8 = ctx->r3 | 0;
    // 0x80009AC8: addiu       $t9, $t6, -0x1
    ctx->r25 = ADD32(ctx->r14, -0X1);
    // 0x80009ACC: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x80009AD0: lhu         $t9, 0x2($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X2);
    // 0x80009AD4: andi        $t7, $t8, 0xFFF
    ctx->r15 = ctx->r24 & 0XFFF;
    // 0x80009AD8: sll         $t6, $t7, 12
    ctx->r14 = S32(ctx->r15 << 12);
    // 0x80009ADC: addiu       $t8, $t9, -0x1
    ctx->r24 = ADD32(ctx->r25, -0X1);
    // 0x80009AE0: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x80009AE4: andi        $t9, $t7, 0xFFF
    ctx->r25 = ctx->r15 & 0XFFF;
    // 0x80009AE8: or          $t8, $t6, $t9
    ctx->r24 = ctx->r14 | ctx->r25;
    // 0x80009AEC: b           L_8000A0DC
    // 0x80009AF0: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
        goto L_8000A0DC;
    // 0x80009AF0: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
L_80009AF4:
    // 0x80009AF4: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
L_80009AF8:
    // 0x80009AF8: lui         $t6, 0xFD10
    ctx->r14 = S32(0XFD10 << 16);
    // 0x80009AFC: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x80009B00: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x80009B04: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x80009B08: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80009B0C: lw          $t9, 0x7A6C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A6C);
    // 0x80009B10: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
    // 0x80009B14: lui         $t7, 0xE800
    ctx->r15 = S32(0XE800 << 16);
    // 0x80009B18: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x80009B1C: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80009B20: lui         $t9, 0xF500
    ctx->r25 = S32(0XF500 << 16);
    // 0x80009B24: ori         $t9, $t9, 0x100
    ctx->r25 = ctx->r25 | 0X100;
    // 0x80009B28: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x80009B2C: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x80009B30: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80009B34: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80009B38: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    // 0x80009B3C: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80009B40: lui         $t8, 0x700
    ctx->r24 = S32(0X700 << 16);
    // 0x80009B44: lui         $at, 0xFD00
    ctx->r1 = S32(0XFD00 << 16);
    // 0x80009B48: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x80009B4C: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x80009B50: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80009B54: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x80009B58: or          $t0, $v1, $zero
    ctx->r8 = ctx->r3 | 0;
    // 0x80009B5C: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80009B60: lui         $t6, 0xE600
    ctx->r14 = S32(0XE600 << 16);
    // 0x80009B64: lui         $t8, 0xF000
    ctx->r24 = S32(0XF000 << 16);
    // 0x80009B68: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x80009B6C: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x80009B70: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80009B74: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80009B78: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80009B7C: lui         $t7, 0x73F
    ctx->r15 = S32(0X73F << 16);
    // 0x80009B80: ori         $t7, $t7, 0xC000
    ctx->r15 = ctx->r15 | 0XC000;
    // 0x80009B84: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x80009B88: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x80009B8C: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80009B90: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x80009B94: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80009B98: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x80009B9C: lui         $ra, 0x10
    ctx->r31 = S32(0X10 << 16);
    // 0x80009BA0: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x80009BA4: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x80009BA8: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80009BAC: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80009BB0: lw          $a1, 0xE4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XE4);
    // 0x80009BB4: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80009BB8: addiu       $t2, $t2, 0x7A72
    ctx->r10 = ADD32(ctx->r10, 0X7A72);
    // 0x80009BBC: andi        $t7, $a1, 0x7
    ctx->r15 = ctx->r5 & 0X7;
    // 0x80009BC0: sll         $t6, $t7, 21
    ctx->r14 = S32(ctx->r15 << 21);
    // 0x80009BC4: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x80009BC8: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x80009BCC: or          $t9, $t6, $at
    ctx->r25 = ctx->r14 | ctx->r1;
    // 0x80009BD0: or          $t8, $t9, $ra
    ctx->r24 = ctx->r25 | ctx->r31;
    // 0x80009BD4: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x80009BD8: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80009BDC: lw          $t7, 0x7A64($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A64);
    // 0x80009BE0: lui         $at, 0xF500
    ctx->r1 = S32(0XF500 << 16);
    // 0x80009BE4: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x80009BE8: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x80009BEC: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80009BF0: or          $t9, $a1, $at
    ctx->r25 = ctx->r5 | ctx->r1;
    // 0x80009BF4: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x80009BF8: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x80009BFC: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x80009C00: or          $t7, $t9, $ra
    ctx->r15 = ctx->r25 | ctx->r31;
    // 0x80009C04: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80009C08: lw          $t6, 0xE8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XE8);
    // 0x80009C0C: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x80009C10: or          $t5, $v1, $zero
    ctx->r13 = ctx->r3 | 0;
    // 0x80009C14: lw          $v0, 0x8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X8);
    // 0x80009C18: addiu       $t3, $zero, 0x7FF
    ctx->r11 = ADD32(0, 0X7FF);
    // 0x80009C1C: sll         $t9, $v0, 10
    ctx->r25 = S32(ctx->r2 << 10);
    // 0x80009C20: srl         $t8, $t9, 29
    ctx->r24 = S32(U32(ctx->r25) >> 29);
    // 0x80009C24: andi        $t7, $t8, 0x3
    ctx->r15 = ctx->r24 & 0X3;
    // 0x80009C28: sll         $t6, $t7, 18
    ctx->r14 = S32(ctx->r15 << 18);
    // 0x80009C2C: sll         $t8, $v0, 17
    ctx->r24 = S32(ctx->r2 << 17);
    // 0x80009C30: srl         $t7, $t8, 28
    ctx->r15 = S32(U32(ctx->r24) >> 28);
    // 0x80009C34: or          $t9, $t6, $at
    ctx->r25 = ctx->r14 | ctx->r1;
    // 0x80009C38: andi        $t6, $t7, 0xF
    ctx->r14 = ctx->r15 & 0XF;
    // 0x80009C3C: sll         $t8, $t6, 14
    ctx->r24 = S32(ctx->r14 << 14);
    // 0x80009C40: or          $t7, $t9, $t8
    ctx->r15 = ctx->r25 | ctx->r24;
    // 0x80009C44: sll         $t6, $v0, 7
    ctx->r14 = S32(ctx->r2 << 7);
    // 0x80009C48: srl         $t9, $t6, 29
    ctx->r25 = S32(U32(ctx->r14) >> 29);
    // 0x80009C4C: andi        $t8, $t9, 0x3
    ctx->r24 = ctx->r25 & 0X3;
    // 0x80009C50: sll         $t6, $t8, 8
    ctx->r14 = S32(ctx->r24 << 8);
    // 0x80009C54: or          $t9, $t7, $t6
    ctx->r25 = ctx->r15 | ctx->r14;
    // 0x80009C58: sll         $t8, $v0, 13
    ctx->r24 = S32(ctx->r2 << 13);
    // 0x80009C5C: srl         $t7, $t8, 28
    ctx->r15 = S32(U32(ctx->r24) >> 28);
    // 0x80009C60: andi        $t6, $t7, 0xF
    ctx->r14 = ctx->r15 & 0XF;
    // 0x80009C64: sll         $t8, $t6, 4
    ctx->r24 = S32(ctx->r14 << 4);
    // 0x80009C68: or          $t7, $t9, $t8
    ctx->r15 = ctx->r25 | ctx->r24;
    // 0x80009C6C: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x80009C70: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80009C74: lui         $t9, 0xE600
    ctx->r25 = S32(0XE600 << 16);
    // 0x80009C78: lui         $t7, 0xF300
    ctx->r15 = S32(0XF300 << 16);
    // 0x80009C7C: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x80009C80: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x80009C84: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80009C88: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80009C8C: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80009C90: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x80009C94: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x80009C98: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80009C9C: lhu         $t6, 0x2($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X2);
    // 0x80009CA0: lhu         $t1, 0x0($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X0);
    // 0x80009CA4: or          $t4, $v1, $zero
    ctx->r12 = ctx->r3 | 0;
    // 0x80009CA8: multu       $t1, $t6
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80009CAC: mflo        $a1
    ctx->r5 = lo;
    // 0x80009CB0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80009CB4: sra         $t9, $a1, 1
    ctx->r25 = S32(SIGNED(ctx->r5) >> 1);
    // 0x80009CB8: addiu       $a1, $t9, -0x1
    ctx->r5 = ADD32(ctx->r25, -0X1);
    // 0x80009CBC: slti        $at, $a1, 0x7FF
    ctx->r1 = SIGNED(ctx->r5) < 0X7FF ? 1 : 0;
    // 0x80009CC0: beq         $at, $zero, L_80009CD0
    if (ctx->r1 == 0) {
        // 0x80009CC4: nop
    
            goto L_80009CD0;
    }
    // 0x80009CC4: nop

    // 0x80009CC8: b           L_80009CD0
    // 0x80009CCC: or          $t3, $a1, $zero
    ctx->r11 = ctx->r5 | 0;
        goto L_80009CD0;
    // 0x80009CCC: or          $t3, $a1, $zero
    ctx->r11 = ctx->r5 | 0;
L_80009CD0:
    // 0x80009CD0: bgez        $t1, L_80009CE0
    if (SIGNED(ctx->r9) >= 0) {
        // 0x80009CD4: sra         $v0, $t1, 3
        ctx->r2 = S32(SIGNED(ctx->r9) >> 3);
            goto L_80009CE0;
    }
    // 0x80009CD4: sra         $v0, $t1, 3
    ctx->r2 = S32(SIGNED(ctx->r9) >> 3);
    // 0x80009CD8: addiu       $at, $t1, 0x7
    ctx->r1 = ADD32(ctx->r9, 0X7);
    // 0x80009CDC: sra         $v0, $at, 3
    ctx->r2 = S32(SIGNED(ctx->r1) >> 3);
L_80009CE0:
    // 0x80009CE0: bgtz        $v0, L_80009CF0
    if (SIGNED(ctx->r2) > 0) {
        // 0x80009CE4: or          $t1, $v0, $zero
        ctx->r9 = ctx->r2 | 0;
            goto L_80009CF0;
    }
    // 0x80009CE4: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
    // 0x80009CE8: b           L_80009CF0
    // 0x80009CEC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
        goto L_80009CF0;
    // 0x80009CEC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
L_80009CF0:
    // 0x80009CF0: bgtz        $v0, L_80009D00
    if (SIGNED(ctx->r2) > 0) {
        // 0x80009CF4: addiu       $t8, $t1, 0x7FF
        ctx->r24 = ADD32(ctx->r9, 0X7FF);
            goto L_80009D00;
    }
    // 0x80009CF4: addiu       $t8, $t1, 0x7FF
    ctx->r24 = ADD32(ctx->r9, 0X7FF);
    // 0x80009CF8: b           L_80009D04
    // 0x80009CFC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_80009D04;
    // 0x80009CFC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_80009D00:
    // 0x80009D00: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_80009D04:
    // 0x80009D04: div         $zero, $t8, $a1
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r5)));
    // 0x80009D08: bne         $a1, $zero, L_80009D14
    if (ctx->r5 != 0) {
        // 0x80009D0C: nop
    
            goto L_80009D14;
    }
    // 0x80009D0C: nop

    // 0x80009D10: break       7
    do_break(2147523856);
L_80009D14:
    // 0x80009D14: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80009D18: bne         $a1, $at, L_80009D2C
    if (ctx->r5 != ctx->r1) {
        // 0x80009D1C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80009D2C;
    }
    // 0x80009D1C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80009D20: bne         $t8, $at, L_80009D2C
    if (ctx->r24 != ctx->r1) {
        // 0x80009D24: nop
    
            goto L_80009D2C;
    }
    // 0x80009D24: nop

    // 0x80009D28: break       6
    do_break(2147523880);
L_80009D2C:
    // 0x80009D2C: mflo        $t7
    ctx->r15 = lo;
    // 0x80009D30: andi        $t6, $t7, 0xFFF
    ctx->r14 = ctx->r15 & 0XFFF;
    // 0x80009D34: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x80009D38: andi        $t8, $t3, 0xFFF
    ctx->r24 = ctx->r11 & 0XFFF;
    // 0x80009D3C: sll         $t7, $t8, 12
    ctx->r15 = S32(ctx->r24 << 12);
    // 0x80009D40: or          $t9, $t6, $at
    ctx->r25 = ctx->r14 | ctx->r1;
    // 0x80009D44: or          $t6, $t9, $t7
    ctx->r14 = ctx->r25 | ctx->r15;
    // 0x80009D48: sw          $t6, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r14;
    // 0x80009D4C: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80009D50: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x80009D54: lui         $at, 0x8
    ctx->r1 = S32(0X8 << 16);
    // 0x80009D58: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x80009D5C: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x80009D60: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80009D64: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80009D68: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
    // 0x80009D6C: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80009D70: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80009D74: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x80009D78: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x80009D7C: lhu         $t9, 0x0($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X0);
    // 0x80009D80: or          $t8, $t6, $at
    ctx->r24 = ctx->r14 | ctx->r1;
    // 0x80009D84: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    // 0x80009D88: addiu       $t7, $t9, 0x7
    ctx->r15 = ADD32(ctx->r25, 0X7);
    // 0x80009D8C: sra         $t6, $t7, 3
    ctx->r14 = S32(SIGNED(ctx->r15) >> 3);
    // 0x80009D90: andi        $t9, $t6, 0x1FF
    ctx->r25 = ctx->r14 & 0X1FF;
    // 0x80009D94: sll         $t7, $t9, 9
    ctx->r15 = S32(ctx->r25 << 9);
    // 0x80009D98: or          $t6, $t8, $t7
    ctx->r14 = ctx->r24 | ctx->r15;
    // 0x80009D9C: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80009DA0: lw          $t9, 0xE8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XE8);
    // 0x80009DA4: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80009DA8: lw          $v0, 0x8($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X8);
    // 0x80009DAC: sll         $t8, $v0, 10
    ctx->r24 = S32(ctx->r2 << 10);
    // 0x80009DB0: srl         $t7, $t8, 29
    ctx->r15 = S32(U32(ctx->r24) >> 29);
    // 0x80009DB4: andi        $t6, $t7, 0x3
    ctx->r14 = ctx->r15 & 0X3;
    // 0x80009DB8: sll         $t8, $v0, 17
    ctx->r24 = S32(ctx->r2 << 17);
    // 0x80009DBC: srl         $t7, $t8, 28
    ctx->r15 = S32(U32(ctx->r24) >> 28);
    // 0x80009DC0: sll         $t9, $t6, 18
    ctx->r25 = S32(ctx->r14 << 18);
    // 0x80009DC4: andi        $t6, $t7, 0xF
    ctx->r14 = ctx->r15 & 0XF;
    // 0x80009DC8: sll         $t8, $t6, 14
    ctx->r24 = S32(ctx->r14 << 14);
    // 0x80009DCC: or          $t7, $t9, $t8
    ctx->r15 = ctx->r25 | ctx->r24;
    // 0x80009DD0: sll         $t6, $v0, 7
    ctx->r14 = S32(ctx->r2 << 7);
    // 0x80009DD4: srl         $t9, $t6, 29
    ctx->r25 = S32(U32(ctx->r14) >> 29);
    // 0x80009DD8: andi        $t8, $t9, 0x3
    ctx->r24 = ctx->r25 & 0X3;
    // 0x80009DDC: sll         $t6, $t8, 8
    ctx->r14 = S32(ctx->r24 << 8);
    // 0x80009DE0: or          $t9, $t7, $t6
    ctx->r25 = ctx->r15 | ctx->r14;
    // 0x80009DE4: sll         $t8, $v0, 13
    ctx->r24 = S32(ctx->r2 << 13);
    // 0x80009DE8: srl         $t7, $t8, 28
    ctx->r15 = S32(U32(ctx->r24) >> 28);
    // 0x80009DEC: andi        $t6, $t7, 0xF
    ctx->r14 = ctx->r15 & 0XF;
    // 0x80009DF0: sll         $t8, $t6, 4
    ctx->r24 = S32(ctx->r14 << 4);
    // 0x80009DF4: or          $t7, $t9, $t8
    ctx->r15 = ctx->r25 | ctx->r24;
    // 0x80009DF8: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x80009DFC: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80009E00: lui         $t9, 0xF200
    ctx->r25 = S32(0XF200 << 16);
    // 0x80009E04: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x80009E08: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x80009E0C: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80009E10: lhu         $t8, 0x0($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X0);
    // 0x80009E14: or          $t0, $v1, $zero
    ctx->r8 = ctx->r3 | 0;
    // 0x80009E18: addiu       $t7, $t8, -0x1
    ctx->r15 = ADD32(ctx->r24, -0X1);
    // 0x80009E1C: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x80009E20: lhu         $t7, 0x2($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X2);
    // 0x80009E24: andi        $t9, $t6, 0xFFF
    ctx->r25 = ctx->r14 & 0XFFF;
    // 0x80009E28: sll         $t8, $t9, 12
    ctx->r24 = S32(ctx->r25 << 12);
    // 0x80009E2C: addiu       $t6, $t7, -0x1
    ctx->r14 = ADD32(ctx->r15, -0X1);
    // 0x80009E30: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x80009E34: andi        $t7, $t9, 0xFFF
    ctx->r15 = ctx->r25 & 0XFFF;
    // 0x80009E38: or          $t6, $t8, $t7
    ctx->r14 = ctx->r24 | ctx->r15;
    // 0x80009E3C: ori         $t9, $zero, 0xFFFF
    ctx->r25 = 0 | 0XFFFF;
    // 0x80009E40: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x80009E44: sh          $t9, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r25;
    // 0x80009E48: andi        $t8, $t9, 0xFFFF
    ctx->r24 = ctx->r25 & 0XFFFF;
    // 0x80009E4C: b           L_8000A0DC
    // 0x80009E50: sh          $t8, 0x7A68($at)
    MEM_H(0X7A68, ctx->r1) = ctx->r24;
        goto L_8000A0DC;
    // 0x80009E50: sh          $t8, 0x7A68($at)
    MEM_H(0X7A68, ctx->r1) = ctx->r24;
    // 0x80009E54: lw          $a1, 0xE4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XE4);
L_80009E58:
    // 0x80009E58: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80009E5C: lui         $at, 0xFD00
    ctx->r1 = S32(0XFD00 << 16);
    // 0x80009E60: andi        $t6, $a1, 0x7
    ctx->r14 = ctx->r5 & 0X7;
    // 0x80009E64: sll         $a1, $t6, 21
    ctx->r5 = S32(ctx->r14 << 21);
    // 0x80009E68: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x80009E6C: lui         $ra, 0x10
    ctx->r31 = S32(0X10 << 16);
    // 0x80009E70: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x80009E74: or          $t8, $a1, $at
    ctx->r24 = ctx->r5 | ctx->r1;
    // 0x80009E78: or          $t7, $t8, $ra
    ctx->r15 = ctx->r24 | ctx->r31;
    // 0x80009E7C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80009E80: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80009E84: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x80009E88: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
    // 0x80009E8C: lui         $at, 0xF500
    ctx->r1 = S32(0XF500 << 16);
    // 0x80009E90: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x80009E94: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80009E98: or          $t8, $a1, $at
    ctx->r24 = ctx->r5 | ctx->r1;
    // 0x80009E9C: or          $t4, $t8, $ra
    ctx->r12 = ctx->r24 | ctx->r31;
    // 0x80009EA0: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x80009EA4: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x80009EA8: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x80009EAC: lw          $t7, 0xE8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XE8);
    // 0x80009EB0: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x80009EB4: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    // 0x80009EB8: lw          $v0, 0x8($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X8);
    // 0x80009EBC: sll         $t6, $v0, 10
    ctx->r14 = S32(ctx->r2 << 10);
    // 0x80009EC0: srl         $t9, $t6, 29
    ctx->r25 = S32(U32(ctx->r14) >> 29);
    // 0x80009EC4: andi        $t8, $t9, 0x3
    ctx->r24 = ctx->r25 & 0X3;
    // 0x80009EC8: sll         $t7, $t8, 18
    ctx->r15 = S32(ctx->r24 << 18);
    // 0x80009ECC: sll         $t9, $v0, 17
    ctx->r25 = S32(ctx->r2 << 17);
    // 0x80009ED0: srl         $t8, $t9, 28
    ctx->r24 = S32(U32(ctx->r25) >> 28);
    // 0x80009ED4: or          $t6, $t7, $at
    ctx->r14 = ctx->r15 | ctx->r1;
    // 0x80009ED8: andi        $t7, $t8, 0xF
    ctx->r15 = ctx->r24 & 0XF;
    // 0x80009EDC: sll         $t9, $t7, 14
    ctx->r25 = S32(ctx->r15 << 14);
    // 0x80009EE0: or          $t8, $t6, $t9
    ctx->r24 = ctx->r14 | ctx->r25;
    // 0x80009EE4: sll         $t7, $v0, 7
    ctx->r15 = S32(ctx->r2 << 7);
    // 0x80009EE8: srl         $t6, $t7, 29
    ctx->r14 = S32(U32(ctx->r15) >> 29);
    // 0x80009EEC: andi        $t9, $t6, 0x3
    ctx->r25 = ctx->r14 & 0X3;
    // 0x80009EF0: sll         $t7, $t9, 8
    ctx->r15 = S32(ctx->r25 << 8);
    // 0x80009EF4: or          $t6, $t8, $t7
    ctx->r14 = ctx->r24 | ctx->r15;
    // 0x80009EF8: sll         $t9, $v0, 13
    ctx->r25 = S32(ctx->r2 << 13);
    // 0x80009EFC: srl         $t8, $t9, 28
    ctx->r24 = S32(U32(ctx->r25) >> 28);
    // 0x80009F00: andi        $t7, $t8, 0xF
    ctx->r15 = ctx->r24 & 0XF;
    // 0x80009F04: sll         $t9, $t7, 4
    ctx->r25 = S32(ctx->r15 << 4);
    // 0x80009F08: or          $t8, $t6, $t9
    ctx->r24 = ctx->r14 | ctx->r25;
    // 0x80009F0C: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x80009F10: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80009F14: lui         $t6, 0xE600
    ctx->r14 = S32(0XE600 << 16);
    // 0x80009F18: lui         $t8, 0xF300
    ctx->r24 = S32(0XF300 << 16);
    // 0x80009F1C: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x80009F20: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x80009F24: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80009F28: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80009F2C: or          $t0, $v1, $zero
    ctx->r8 = ctx->r3 | 0;
    // 0x80009F30: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80009F34: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x80009F38: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x80009F3C: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80009F40: lhu         $t7, 0x2($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X2);
    // 0x80009F44: lhu         $t1, 0x0($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X0);
    // 0x80009F48: or          $t5, $v1, $zero
    ctx->r13 = ctx->r3 | 0;
    // 0x80009F4C: multu       $t1, $t7
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80009F50: sll         $v0, $t1, 1
    ctx->r2 = S32(ctx->r9 << 1);
    // 0x80009F54: mflo        $t2
    ctx->r10 = lo;
    // 0x80009F58: addiu       $t2, $t2, -0x1
    ctx->r10 = ADD32(ctx->r10, -0X1);
    // 0x80009F5C: slti        $at, $t2, 0x7FF
    ctx->r1 = SIGNED(ctx->r10) < 0X7FF ? 1 : 0;
    // 0x80009F60: beql        $at, $zero, L_80009F74
    if (ctx->r1 == 0) {
        // 0x80009F64: addiu       $t3, $zero, 0x7FF
        ctx->r11 = ADD32(0, 0X7FF);
            goto L_80009F74;
    }
    goto skip_6;
    // 0x80009F64: addiu       $t3, $zero, 0x7FF
    ctx->r11 = ADD32(0, 0X7FF);
    skip_6:
    // 0x80009F68: b           L_80009F74
    // 0x80009F6C: or          $t3, $t2, $zero
    ctx->r11 = ctx->r10 | 0;
        goto L_80009F74;
    // 0x80009F6C: or          $t3, $t2, $zero
    ctx->r11 = ctx->r10 | 0;
    // 0x80009F70: addiu       $t3, $zero, 0x7FF
    ctx->r11 = ADD32(0, 0X7FF);
L_80009F74:
    // 0x80009F74: bgez        $v0, L_80009F84
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80009F78: sra         $t6, $v0, 3
        ctx->r14 = S32(SIGNED(ctx->r2) >> 3);
            goto L_80009F84;
    }
    // 0x80009F78: sra         $t6, $v0, 3
    ctx->r14 = S32(SIGNED(ctx->r2) >> 3);
    // 0x80009F7C: addiu       $at, $v0, 0x7
    ctx->r1 = ADD32(ctx->r2, 0X7);
    // 0x80009F80: sra         $t6, $at, 3
    ctx->r14 = S32(SIGNED(ctx->r1) >> 3);
L_80009F84:
    // 0x80009F84: bgtz        $t6, L_80009F94
    if (SIGNED(ctx->r14) > 0) {
        // 0x80009F88: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_80009F94;
    }
    // 0x80009F88: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x80009F8C: b           L_80009F98
    // 0x80009F90: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
        goto L_80009F98;
    // 0x80009F90: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
L_80009F94:
    // 0x80009F94: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
L_80009F98:
    // 0x80009F98: bgtz        $v0, L_80009FA8
    if (SIGNED(ctx->r2) > 0) {
        // 0x80009F9C: addiu       $t9, $t1, 0x7FF
        ctx->r25 = ADD32(ctx->r9, 0X7FF);
            goto L_80009FA8;
    }
    // 0x80009F9C: addiu       $t9, $t1, 0x7FF
    ctx->r25 = ADD32(ctx->r9, 0X7FF);
    // 0x80009FA0: b           L_80009FAC
    // 0x80009FA4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_80009FAC;
    // 0x80009FA4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_80009FA8:
    // 0x80009FA8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_80009FAC:
    // 0x80009FAC: div         $zero, $t9, $a1
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r5)));
    // 0x80009FB0: bne         $a1, $zero, L_80009FBC
    if (ctx->r5 != 0) {
        // 0x80009FB4: nop
    
            goto L_80009FBC;
    }
    // 0x80009FB4: nop

    // 0x80009FB8: break       7
    do_break(2147524536);
L_80009FBC:
    // 0x80009FBC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80009FC0: bne         $a1, $at, L_80009FD4
    if (ctx->r5 != ctx->r1) {
        // 0x80009FC4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80009FD4;
    }
    // 0x80009FC4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80009FC8: bne         $t9, $at, L_80009FD4
    if (ctx->r25 != ctx->r1) {
        // 0x80009FCC: nop
    
            goto L_80009FD4;
    }
    // 0x80009FCC: nop

    // 0x80009FD0: break       6
    do_break(2147524560);
L_80009FD4:
    // 0x80009FD4: mflo        $t8
    ctx->r24 = lo;
    // 0x80009FD8: andi        $t7, $t8, 0xFFF
    ctx->r15 = ctx->r24 & 0XFFF;
    // 0x80009FDC: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x80009FE0: andi        $t9, $t3, 0xFFF
    ctx->r25 = ctx->r11 & 0XFFF;
    // 0x80009FE4: sll         $t8, $t9, 12
    ctx->r24 = S32(ctx->r25 << 12);
    // 0x80009FE8: or          $t6, $t7, $at
    ctx->r14 = ctx->r15 | ctx->r1;
    // 0x80009FEC: or          $t7, $t6, $t8
    ctx->r15 = ctx->r14 | ctx->r24;
    // 0x80009FF0: sw          $t7, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r15;
    // 0x80009FF4: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80009FF8: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x80009FFC: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x8000A000: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x8000A004: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8000A008: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8000A00C: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
    // 0x8000A010: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x8000A014: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x8000A018: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x8000A01C: lhu         $t7, 0x0($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X0);
    // 0x8000A020: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    // 0x8000A024: sll         $t9, $t7, 1
    ctx->r25 = S32(ctx->r15 << 1);
    // 0x8000A028: addiu       $t6, $t9, 0x7
    ctx->r14 = ADD32(ctx->r25, 0X7);
    // 0x8000A02C: sra         $t8, $t6, 3
    ctx->r24 = S32(SIGNED(ctx->r14) >> 3);
    // 0x8000A030: andi        $t7, $t8, 0x1FF
    ctx->r15 = ctx->r24 & 0X1FF;
    // 0x8000A034: sll         $t9, $t7, 9
    ctx->r25 = S32(ctx->r15 << 9);
    // 0x8000A038: or          $t6, $t4, $t9
    ctx->r14 = ctx->r12 | ctx->r25;
    // 0x8000A03C: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8000A040: lw          $t8, 0xE8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XE8);
    // 0x8000A044: lw          $v0, 0x8($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X8);
    // 0x8000A048: sll         $t7, $v0, 10
    ctx->r15 = S32(ctx->r2 << 10);
    // 0x8000A04C: srl         $t9, $t7, 29
    ctx->r25 = S32(U32(ctx->r15) >> 29);
    // 0x8000A050: andi        $t6, $t9, 0x3
    ctx->r14 = ctx->r25 & 0X3;
    // 0x8000A054: sll         $t7, $v0, 17
    ctx->r15 = S32(ctx->r2 << 17);
    // 0x8000A058: srl         $t9, $t7, 28
    ctx->r25 = S32(U32(ctx->r15) >> 28);
    // 0x8000A05C: sll         $t8, $t6, 18
    ctx->r24 = S32(ctx->r14 << 18);
    // 0x8000A060: andi        $t6, $t9, 0xF
    ctx->r14 = ctx->r25 & 0XF;
    // 0x8000A064: sll         $t7, $t6, 14
    ctx->r15 = S32(ctx->r14 << 14);
    // 0x8000A068: or          $t9, $t8, $t7
    ctx->r25 = ctx->r24 | ctx->r15;
    // 0x8000A06C: sll         $t6, $v0, 7
    ctx->r14 = S32(ctx->r2 << 7);
    // 0x8000A070: srl         $t8, $t6, 29
    ctx->r24 = S32(U32(ctx->r14) >> 29);
    // 0x8000A074: andi        $t7, $t8, 0x3
    ctx->r15 = ctx->r24 & 0X3;
    // 0x8000A078: sll         $t6, $t7, 8
    ctx->r14 = S32(ctx->r15 << 8);
    // 0x8000A07C: or          $t8, $t9, $t6
    ctx->r24 = ctx->r25 | ctx->r14;
    // 0x8000A080: sll         $t7, $v0, 13
    ctx->r15 = S32(ctx->r2 << 13);
    // 0x8000A084: srl         $t9, $t7, 28
    ctx->r25 = S32(U32(ctx->r15) >> 28);
    // 0x8000A088: andi        $t6, $t9, 0xF
    ctx->r14 = ctx->r25 & 0XF;
    // 0x8000A08C: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x8000A090: or          $t9, $t8, $t7
    ctx->r25 = ctx->r24 | ctx->r15;
    // 0x8000A094: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x8000A098: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x8000A09C: lui         $t8, 0xF200
    ctx->r24 = S32(0XF200 << 16);
    // 0x8000A0A0: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x8000A0A4: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8000A0A8: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8000A0AC: lhu         $t7, 0x0($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X0);
    // 0x8000A0B0: or          $t0, $v1, $zero
    ctx->r8 = ctx->r3 | 0;
    // 0x8000A0B4: addiu       $t9, $t7, -0x1
    ctx->r25 = ADD32(ctx->r15, -0X1);
    // 0x8000A0B8: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x8000A0BC: lhu         $t9, 0x2($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X2);
    // 0x8000A0C0: andi        $t8, $t6, 0xFFF
    ctx->r24 = ctx->r14 & 0XFFF;
    // 0x8000A0C4: sll         $t7, $t8, 12
    ctx->r15 = S32(ctx->r24 << 12);
    // 0x8000A0C8: addiu       $t6, $t9, -0x1
    ctx->r14 = ADD32(ctx->r25, -0X1);
    // 0x8000A0CC: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x8000A0D0: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x8000A0D4: or          $t6, $t7, $t9
    ctx->r14 = ctx->r15 | ctx->r25;
    // 0x8000A0D8: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
L_8000A0DC:
    // 0x8000A0DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8000A0E0:
    // 0x8000A0E0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8000A0E4: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
    // 0x8000A0E8: jr          $ra
    // 0x8000A0EC: nop

    TRACE_RETURN()
    return;
    // 0x8000A0EC: nop

;}
RECOMP_FUNC void func_8001381C_1441C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001381C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80013820: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80013824: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80013828: lui         $a1, 0x8001
    ctx->r5 = S32(0X8001 << 16);
    // 0x8001382C: addiu       $a1, $a1, 0x2AD8
    ctx->r5 = ADD32(ctx->r5, 0X2AD8);
    // 0x80013830: jal         0x80034E08
    // 0x80013834: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x80013834: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80013838: bne         $v0, $zero, L_80013848
    if (ctx->r2 != 0) {
        // 0x8001383C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80013848;
    }
    // 0x8001383C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80013840: b           L_80013928
    // 0x80013844: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80013928;
    // 0x80013844: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80013848:
    // 0x80013848: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8001384C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80013850: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x80013854: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80013858: lui         $at, 0x42C0
    ctx->r1 = S32(0X42C0 << 16);
    // 0x8001385C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80013860: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80013864: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80013868: swc1        $f0, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f0.u32l;
    // 0x8001386C: swc1        $f0, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f0.u32l;
    // 0x80013870: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x80013874: swc1        $f2, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->f2.u32l;
    // 0x80013878: swc1        $f2, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->f2.u32l;
    // 0x8001387C: swc1        $f2, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->f2.u32l;
    // 0x80013880: swc1        $f12, 0xA8($a0)
    MEM_W(0XA8, ctx->r4) = ctx->f12.u32l;
    // 0x80013884: swc1        $f12, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->f12.u32l;
    // 0x80013888: swc1        $f12, 0xC0($a0)
    MEM_W(0XC0, ctx->r4) = ctx->f12.u32l;
    // 0x8001388C: swc1        $f4, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f4.u32l;
    // 0x80013890: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    // 0x80013894: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80013898: jal         0x80035EEC
    // 0x8001389C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80035EEC_36AEC(rdram, ctx);
        goto after_1;
    // 0x8001389C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x800138A0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800138A4: bne         $v0, $zero, L_800138B4
    if (ctx->r2 != 0) {
        // 0x800138A8: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_800138B4;
    }
    // 0x800138A8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x800138AC: b           L_80013928
    // 0x800138B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80013928;
    // 0x800138B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800138B4:
    // 0x800138B4: lui         $at, 0x3000
    ctx->r1 = S32(0X3000 << 16);
    // 0x800138B8: ori         $at, $at, 0x70
    ctx->r1 = ctx->r1 | 0X70;
    // 0x800138BC: addiu       $a3, $a0, 0x5C
    ctx->r7 = ADD32(ctx->r4, 0X5C);
    // 0x800138C0: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800138C4: addu        $t7, $a3, $at
    ctx->r15 = ADD32(ctx->r7, ctx->r1);
    // 0x800138C8: sb          $t6, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r14;
    // 0x800138CC: sw          $t7, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r15;
    // 0x800138D0: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800138D4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800138D8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800138DC: sb          $t8, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r24;
    // 0x800138E0: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x800138E4: jal         0x80035EEC
    // 0x800138E8: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    func_80035EEC_36AEC(rdram, ctx);
        goto after_2;
    // 0x800138E8: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    after_2:
    // 0x800138EC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800138F0: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x800138F4: bne         $v0, $zero, L_80013904
    if (ctx->r2 != 0) {
        // 0x800138F8: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80013904;
    }
    // 0x800138F8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x800138FC: b           L_80013928
    // 0x80013900: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80013928;
    // 0x80013900: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80013904:
    // 0x80013904: lui         $at, 0x5000
    ctx->r1 = S32(0X5000 << 16);
    // 0x80013908: ori         $at, $at, 0x76
    ctx->r1 = ctx->r1 | 0X76;
    // 0x8001390C: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x80013910: addu        $t0, $a3, $at
    ctx->r8 = ADD32(ctx->r7, ctx->r1);
    // 0x80013914: sb          $t9, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r25;
    // 0x80013918: sw          $t0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r8;
    // 0x8001391C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80013920: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80013924: sb          $t1, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r9;
L_80013928:
    // 0x80013928: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001392C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80013930: jr          $ra
    // 0x80013934: nop

    TRACE_RETURN()
    return;
    // 0x80013934: nop

;}
RECOMP_FUNC void func_8000ECB4_F8B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000ECB4: lhu         $t6, 0x0($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X0);
    // 0x8000ECB8: addiu       $t7, $t6, 0x200
    ctx->r15 = ADD32(ctx->r14, 0X200);
    // 0x8000ECBC: andi        $v0, $t7, 0xFFFF
    ctx->r2 = ctx->r15 & 0XFFFF;
    // 0x8000ECC0: slti        $at, $v0, 0x400
    ctx->r1 = SIGNED(ctx->r2) < 0X400 ? 1 : 0;
    // 0x8000ECC4: bne         $at, $zero, L_8000ECD4
    if (ctx->r1 != 0) {
        // 0x8000ECC8: sh          $t7, 0x0($a1)
        MEM_H(0X0, ctx->r5) = ctx->r15;
            goto L_8000ECD4;
    }
    // 0x8000ECC8: sh          $t7, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r15;
    // 0x8000ECCC: addiu       $t8, $v0, -0x400
    ctx->r24 = ADD32(ctx->r2, -0X400);
    // 0x8000ECD0: sh          $t8, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r24;
L_8000ECD4:
    // 0x8000ECD4: lhu         $t9, 0x0($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X0);
    // 0x8000ECD8: addiu       $t0, $zero, 0x400
    ctx->r8 = ADD32(0, 0X400);
    // 0x8000ECDC: subu        $t1, $t0, $t9
    ctx->r9 = SUB32(ctx->r8, ctx->r25);
    // 0x8000ECE0: andi        $v0, $t1, 0xFFFF
    ctx->r2 = ctx->r9 & 0XFFFF;
    // 0x8000ECE4: slti        $at, $v0, 0x400
    ctx->r1 = SIGNED(ctx->r2) < 0X400 ? 1 : 0;
    // 0x8000ECE8: bne         $at, $zero, L_8000ECF8
    if (ctx->r1 != 0) {
        // 0x8000ECEC: sh          $t1, 0x0($a0)
        MEM_H(0X0, ctx->r4) = ctx->r9;
            goto L_8000ECF8;
    }
    // 0x8000ECEC: sh          $t1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r9;
    // 0x8000ECF0: addiu       $t2, $v0, -0x400
    ctx->r10 = ADD32(ctx->r2, -0X400);
    // 0x8000ECF4: sh          $t2, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r10;
L_8000ECF8:
    // 0x8000ECF8: jr          $ra
    // 0x8000ECFC: nop

    TRACE_RETURN()
    return;
    // 0x8000ECFC: nop

;}
RECOMP_FUNC void func_8001F940_20540(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001F940: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001F944: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001F948: jal         0x8000B7E4
    // 0x8001F94C: nop

    func_8000B7E4_C3E4(rdram, ctx);
        goto after_0;
    // 0x8001F94C: nop

    after_0:
    // 0x8001F950: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x8001F954: addiu       $v1, $v1, -0x3340
    ctx->r3 = ADD32(ctx->r3, -0X3340);
    // 0x8001F958: addiu       $t6, $v1, 0x7FFF
    ctx->r14 = ADD32(ctx->r3, 0X7FFF);
    // 0x8001F95C: lhu         $t6, 0x2E27($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X2E27);
    // 0x8001F960: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x8001F964: bne         $t6, $zero, L_8001FA24
    if (ctx->r14 != 0) {
        // 0x8001F968: nop
    
            goto L_8001FA24;
    }
    // 0x8001F968: nop

    // 0x8001F96C: lhu         $t7, 0x7D3C($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X7D3C);
    // 0x8001F970: addiu       $t9, $v1, 0x7FFF
    ctx->r25 = ADD32(ctx->r3, 0X7FFF);
    // 0x8001F974: andi        $t8, $t7, 0x1000
    ctx->r24 = ctx->r15 & 0X1000;
    // 0x8001F978: beql        $t8, $zero, L_8001FA30
    if (ctx->r24 == 0) {
        // 0x8001F97C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8001FA30;
    }
    goto skip_0;
    // 0x8001F97C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8001F980: lbu         $t9, 0x2E2A($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X2E2A);
    // 0x8001F984: addiu       $v0, $v1, 0x7FFF
    ctx->r2 = ADD32(ctx->r3, 0X7FFF);
    // 0x8001F988: bnel        $t9, $zero, L_8001FA30
    if (ctx->r25 != 0) {
        // 0x8001F98C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8001FA30;
    }
    goto skip_1;
    // 0x8001F98C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x8001F990: lbu         $v0, 0x2DE5($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2DE5);
    // 0x8001F994: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8001F998: beq         $v0, $at, L_8001FA2C
    if (ctx->r2 == ctx->r1) {
        // 0x8001F99C: slti        $at, $v0, 0x4
        ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
            goto L_8001FA2C;
    }
    // 0x8001F99C: slti        $at, $v0, 0x4
    ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x8001F9A0: beql        $at, $zero, L_8001FA30
    if (ctx->r1 == 0) {
        // 0x8001F9A4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8001FA30;
    }
    goto skip_2;
    // 0x8001F9A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x8001F9A8: jal         0x8003F1D8
    // 0x8001F9AC: nop

    func_8003F1D8_3FDD8(rdram, ctx);
        goto after_1;
    // 0x8001F9AC: nop

    after_1:
    // 0x8001F9B0: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x8001F9B4: bne         $v0, $zero, L_8001FA2C
    if (ctx->r2 != 0) {
        // 0x8001F9B8: addiu       $v1, $v1, -0x3340
        ctx->r3 = ADD32(ctx->r3, -0X3340);
            goto L_8001FA2C;
    }
    // 0x8001F9B8: addiu       $v1, $v1, -0x3340
    ctx->r3 = ADD32(ctx->r3, -0X3340);
    // 0x8001F9BC: lui         $v0, 0x8015
    ctx->r2 = S32(0X8015 << 16);
    // 0x8001F9C0: addiu       $v0, $v0, -0x3340
    ctx->r2 = ADD32(ctx->r2, -0X3340);
    // 0x8001F9C4: addiu       $t0, $v0, 0x7FFF
    ctx->r8 = ADD32(ctx->r2, 0X7FFF);
    // 0x8001F9C8: lbu         $t0, 0x78A3($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X78A3);
    // 0x8001F9CC: addiu       $t1, $v1, 0x7FFF
    ctx->r9 = ADD32(ctx->r3, 0X7FFF);
    // 0x8001F9D0: bnel        $t0, $zero, L_8001FA30
    if (ctx->r8 != 0) {
        // 0x8001F9D4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8001FA30;
    }
    goto skip_3;
    // 0x8001F9D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x8001F9D8: lbu         $t1, 0x2E2A($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X2E2A);
    // 0x8001F9DC: addiu       $t2, $v0, 0x7FFF
    ctx->r10 = ADD32(ctx->r2, 0X7FFF);
    // 0x8001F9E0: bnel        $t1, $zero, L_8001FA30
    if (ctx->r9 != 0) {
        // 0x8001F9E4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8001FA30;
    }
    goto skip_4;
    // 0x8001F9E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_4:
    // 0x8001F9E8: lbu         $t2, 0x788E($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X788E);
    // 0x8001F9EC: addiu       $t3, $v1, 0x7FFF
    ctx->r11 = ADD32(ctx->r3, 0X7FFF);
    // 0x8001F9F0: bnel        $t2, $zero, L_8001FA30
    if (ctx->r10 != 0) {
        // 0x8001F9F4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8001FA30;
    }
    goto skip_5;
    // 0x8001F9F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_5:
    // 0x8001F9F8: lhu         $t3, 0x2E17($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0X2E17);
    // 0x8001F9FC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8001FA00: addiu       $at, $v1, 0x7FFF
    ctx->r1 = ADD32(ctx->r3, 0X7FFF);
    // 0x8001FA04: bne         $t3, $zero, L_8001FA2C
    if (ctx->r11 != 0) {
        // 0x8001FA08: addiu       $a0, $zero, 0x3
        ctx->r4 = ADD32(0, 0X3);
            goto L_8001FA2C;
    }
    // 0x8001FA08: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x8001FA0C: sh          $t4, 0x2E27($at)
    MEM_H(0X2E27, ctx->r1) = ctx->r12;
    // 0x8001FA10: sb          $zero, 0x2DE1($at)
    MEM_B(0X2DE1, ctx->r1) = 0;
    // 0x8001FA14: jal         0x80038BC8
    // 0x8001FA18: sb          $zero, 0x2DE2($at)
    MEM_B(0X2DE2, ctx->r1) = 0;
    func_80038BC8_397C8(rdram, ctx);
        goto after_2;
    // 0x8001FA18: sb          $zero, 0x2DE2($at)
    MEM_B(0X2DE2, ctx->r1) = 0;
    after_2:
    // 0x8001FA1C: b           L_8001FA30
    // 0x8001FA20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8001FA30;
    // 0x8001FA20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8001FA24:
    // 0x8001FA24: jal         0x8001FA80
    // 0x8001FA28: nop

    func_8001FA80_20680(rdram, ctx);
        goto after_3;
    // 0x8001FA28: nop

    after_3:
L_8001FA2C:
    // 0x8001FA2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8001FA30:
    // 0x8001FA30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001FA34: jr          $ra
    // 0x8001FA38: nop

    TRACE_RETURN()
    return;
    // 0x8001FA38: nop

;}
RECOMP_FUNC void alSynAllocFX(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004EAC0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8004EAC4: sll         $t0, $a1, 16
    ctx->r8 = S32(ctx->r5 << 16);
    // 0x8004EAC8: sra         $t6, $t0, 16
    ctx->r14 = S32(SIGNED(ctx->r8) >> 16);
    // 0x8004EACC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8004EAD0: sll         $s1, $t6, 2
    ctx->r17 = S32(ctx->r14 << 2);
    // 0x8004EAD4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8004EAD8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8004EADC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8004EAE0: addu        $s1, $s1, $t6
    ctx->r17 = ADD32(ctx->r17, ctx->r14);
    // 0x8004EAE4: lw          $t7, 0x34($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X34);
    // 0x8004EAE8: sll         $s1, $s1, 2
    ctx->r17 = S32(ctx->r17 << 2);
    // 0x8004EAEC: subu        $s1, $s1, $t6
    ctx->r17 = SUB32(ctx->r17, ctx->r14);
    // 0x8004EAF0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8004EAF4: sll         $s1, $s1, 2
    ctx->r17 = S32(ctx->r17 << 2);
    // 0x8004EAF8: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x8004EAFC: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    // 0x8004EB00: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    // 0x8004EB04: jal         0x8004E680
    // 0x8004EB08: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    alFxNew(rdram, ctx);
        goto after_0;
    // 0x8004EB08: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    after_0:
    // 0x8004EB0C: lw          $t8, 0x34($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X34);
    // 0x8004EB10: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8004EB14: addu        $a2, $t8, $s1
    ctx->r6 = ADD32(ctx->r24, ctx->r17);
    // 0x8004EB18: jal         0x800521D4
    // 0x8004EB1C: addiu       $a0, $a2, 0x20
    ctx->r4 = ADD32(ctx->r6, 0X20);
    alFxParam(rdram, ctx);
        goto after_1;
    // 0x8004EB1C: addiu       $a0, $a2, 0x20
    ctx->r4 = ADD32(ctx->r6, 0X20);
    after_1:
    // 0x8004EB20: lw          $t9, 0x34($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X34);
    // 0x8004EB24: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    // 0x8004EB28: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8004EB2C: addu        $a2, $t9, $s1
    ctx->r6 = ADD32(ctx->r25, ctx->r17);
    // 0x8004EB30: jal         0x8004EB60
    // 0x8004EB34: addiu       $a2, $a2, 0x20
    ctx->r6 = ADD32(ctx->r6, 0X20);
    alMainBusParam(rdram, ctx);
        goto after_2;
    // 0x8004EB34: addiu       $a2, $a2, 0x20
    ctx->r6 = ADD32(ctx->r6, 0X20);
    after_2:
    // 0x8004EB38: lw          $t2, 0x34($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X34);
    // 0x8004EB3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8004EB40: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8004EB44: addu        $v0, $t2, $s1
    ctx->r2 = ADD32(ctx->r10, ctx->r17);
    // 0x8004EB48: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8004EB4C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8004EB50: jr          $ra
    // 0x8004EB54: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    TRACE_RETURN()
    return;
    // 0x8004EB54: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
;}
RECOMP_FUNC void func_80001EB0_2AB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80001EB0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80001EB4: lui         $at, 0x3FFF
    ctx->r1 = S32(0X3FFF << 16);
    // 0x80001EB8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80001EBC: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x80001EC0: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x80001EC4: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x80001EC8: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80001ECC: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80001ED0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80001ED4: sw          $s7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r23;
    // 0x80001ED8: sw          $s6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r22;
    // 0x80001EDC: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x80001EE0: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80001EE4: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x80001EE8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80001EEC: jal         0x80001DF4
    // 0x80001EF0: and         $s3, $a1, $at
    ctx->r19 = ctx->r5 & ctx->r1;
    func_80001DF4_29F4(rdram, ctx);
        goto after_0;
    // 0x80001EF0: and         $s3, $a1, $at
    ctx->r19 = ctx->r5 & ctx->r1;
    after_0:
    // 0x80001EF4: beql        $v0, $zero, L_80001FBC
    if (ctx->r2 == 0) {
        // 0x80001EF8: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_80001FBC;
    }
    goto skip_0;
    // 0x80001EF8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_0:
    // 0x80001EFC: beq         $s0, $zero, L_80001F2C
    if (ctx->r16 == 0) {
        // 0x80001F00: sll         $t8, $s0, 3
        ctx->r24 = S32(ctx->r16 << 3);
            goto L_80001F2C;
    }
    // 0x80001F00: sll         $t8, $s0, 3
    ctx->r24 = S32(ctx->r16 << 3);
    // 0x80001F04: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x80001F08: addiu       $t0, $t0, 0x4ACC
    ctx->r8 = ADD32(ctx->r8, 0X4ACC);
    // 0x80001F0C: addiu       $t9, $t8, -0x8
    ctx->r25 = ADD32(ctx->r24, -0X8);
    // 0x80001F10: addu        $v0, $t9, $t0
    ctx->r2 = ADD32(ctx->r25, ctx->r8);
    // 0x80001F14: lw          $s7, 0x0($v0)
    ctx->r23 = MEM_W(ctx->r2, 0X0);
    // 0x80001F18: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x80001F1C: subu        $s6, $t1, $s7
    ctx->r22 = SUB32(ctx->r9, ctx->r23);
    // 0x80001F20: srl         $t2, $s6, 13
    ctx->r10 = S32(U32(ctx->r22) >> 13);
    // 0x80001F24: b           L_80001F34
    // 0x80001F28: or          $s6, $t2, $zero
    ctx->r22 = ctx->r10 | 0;
        goto L_80001F34;
    // 0x80001F28: or          $s6, $t2, $zero
    ctx->r22 = ctx->r10 | 0;
L_80001F2C:
    // 0x80001F2C: addiu       $s6, $zero, 0x1F
    ctx->r22 = ADD32(0, 0X1F);
    // 0x80001F30: lui         $s7, 0x700
    ctx->r23 = S32(0X700 << 16);
L_80001F34:
    // 0x80001F34: bltz        $s6, L_80001FB8
    if (SIGNED(ctx->r22) < 0) {
        // 0x80001F38: addu        $s1, $s3, $s5
        ctx->r17 = ADD32(ctx->r19, ctx->r21);
            goto L_80001FB8;
    }
    // 0x80001F38: addu        $s1, $s3, $s5
    ctx->r17 = ADD32(ctx->r19, ctx->r21);
    // 0x80001F3C: lui         $s4, 0xC
    ctx->r20 = S32(0XC << 16);
    // 0x80001F40: lui         $s3, 0x8016
    ctx->r19 = S32(0X8016 << 16);
    // 0x80001F44: addiu       $s3, $s3, -0x3A38
    ctx->r19 = ADD32(ctx->r19, -0X3A38);
    // 0x80001F48: ori         $s4, $s4, 0x8000
    ctx->r20 = ctx->r20 | 0X8000;
    // 0x80001F4C: sll         $s0, $s2, 2
    ctx->r16 = S32(ctx->r18 << 2);
L_80001F50:
    // 0x80001F50: lw          $t3, 0x0($s3)
    ctx->r11 = MEM_W(ctx->r19, 0X0);
    // 0x80001F54: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x80001F58: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80001F5C: addu        $t4, $t3, $s0
    ctx->r12 = ADD32(ctx->r11, ctx->r16);
    // 0x80001F60: addu        $v1, $t4, $s4
    ctx->r3 = ADD32(ctx->r12, ctx->r20);
    // 0x80001F64: lw          $t5, 0x780C($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X780C);
    // 0x80001F68: beql        $s1, $t5, L_80001FA4
    if (ctx->r17 == ctx->r13) {
        // 0x80001F6C: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_80001FA4;
    }
    goto skip_1;
    // 0x80001F6C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_1:
    // 0x80001F70: sw          $v0, 0x780C($v1)
    MEM_W(0X780C, ctx->r3) = ctx->r2;
    // 0x80001F74: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
    // 0x80001F78: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x80001F7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80001F80: addu        $t7, $t6, $s0
    ctx->r15 = ADD32(ctx->r14, ctx->r16);
    // 0x80001F84: addu        $t8, $t7, $s4
    ctx->r24 = ADD32(ctx->r15, ctx->r20);
    // 0x80001F88: lw          $a3, 0x780C($t8)
    ctx->r7 = MEM_W(ctx->r24, 0X780C);
    // 0x80001F8C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x80001F90: addu        $a2, $s7, $s5
    ctx->r6 = ADD32(ctx->r23, ctx->r21);
    // 0x80001F94: addiu       $t9, $a3, 0x1000
    ctx->r25 = ADD32(ctx->r7, 0X1000);
    // 0x80001F98: jal         0x80041660
    // 0x80001F9C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    osMapTLB_recomp(rdram, ctx);
        goto after_1;
    // 0x80001F9C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_1:
    // 0x80001FA0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_80001FA4:
    // 0x80001FA4: slt         $at, $s6, $s2
    ctx->r1 = SIGNED(ctx->r22) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x80001FA8: addiu       $s5, $s5, 0x2000
    ctx->r21 = ADD32(ctx->r21, 0X2000);
    // 0x80001FAC: addiu       $s1, $s1, 0x2000
    ctx->r17 = ADD32(ctx->r17, 0X2000);
    // 0x80001FB0: beq         $at, $zero, L_80001F50
    if (ctx->r1 == 0) {
        // 0x80001FB4: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_80001F50;
    }
    // 0x80001FB4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_80001FB8:
    // 0x80001FB8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80001FBC:
    // 0x80001FBC: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80001FC0: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80001FC4: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x80001FC8: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x80001FCC: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x80001FD0: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x80001FD4: lw          $s6, 0x34($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X34);
    // 0x80001FD8: lw          $s7, 0x38($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X38);
    // 0x80001FDC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80001FE0: jr          $ra
    // 0x80001FE4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x80001FE4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8003488C_3548C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003488C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80034890: lui         $t6, 0x8007
    ctx->r14 = S32(0X8007 << 16);
    // 0x80034894: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80034898: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8003489C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800348A0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800348A4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800348A8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800348AC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x800348B0: addiu       $t6, $t6, -0x2CC4
    ctx->r14 = ADD32(ctx->r14, -0X2CC4);
    // 0x800348B4: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x800348B8: lui         $s3, 0x8007
    ctx->r19 = S32(0X8007 << 16);
    // 0x800348BC: addiu       $s3, $s3, -0x2CD8
    ctx->r19 = ADD32(ctx->r19, -0X2CD8);
    // 0x800348C0: sw          $at, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r1;
    // 0x800348C4: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x800348C8: lw          $t0, 0x0($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X0);
    // 0x800348CC: lui         $s1, 0x8017
    ctx->r17 = S32(0X8017 << 16);
    // 0x800348D0: sw          $t9, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r25;
    // 0x800348D4: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x800348D8: addiu       $s1, $s1, -0x7050
    ctx->r17 = ADD32(ctx->r17, -0X7050);
    // 0x800348DC: addiu       $t1, $zero, 0x81
    ctx->r9 = ADD32(0, 0X81);
    // 0x800348E0: sw          $at, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r1;
    // 0x800348E4: lw          $t9, 0xC($t6)
    ctx->r25 = MEM_W(ctx->r14, 0XC);
    // 0x800348E8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800348EC: sw          $t9, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->r25;
    // 0x800348F0: lw          $at, 0x10($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X10);
    // 0x800348F4: sw          $at, 0x10($s3)
    MEM_W(0X10, ctx->r19) = ctx->r1;
    // 0x800348F8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800348FC: sw          $t0, -0x254C($at)
    MEM_W(-0X254C, ctx->r1) = ctx->r8;
    // 0x80034900: lui         $at, 0x8007
    ctx->r1 = S32(0X8007 << 16);
    // 0x80034904: jal         0x80034A10
    // 0x80034908: sh          $t1, -0x2CDC($at)
    MEM_H(-0X2CDC, ctx->r1) = ctx->r9;
    func_80034A10_35610(rdram, ctx);
        goto after_0;
    // 0x80034908: sh          $t1, -0x2CDC($at)
    MEM_H(-0X2CDC, ctx->r1) = ctx->r9;
    after_0:
    // 0x8003490C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80034910: jal         0x80034A10
    // 0x80034914: addiu       $a0, $a0, -0x6F60
    ctx->r4 = ADD32(ctx->r4, -0X6F60);
    func_80034A10_35610(rdram, ctx);
        goto after_1;
    // 0x80034914: addiu       $a0, $a0, -0x6F60
    ctx->r4 = ADD32(ctx->r4, -0X6F60);
    after_1:
    // 0x80034918: sw          $v0, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r2;
    // 0x8003491C: sh          $zero, 0xC($s3)
    MEM_H(0XC, ctx->r19) = 0;
    // 0x80034920: addiu       $s3, $zero, 0xF0
    ctx->r19 = ADD32(0, 0XF0);
    // 0x80034924: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80034928: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x8003492C: addiu       $s4, $zero, 0xF0
    ctx->r20 = ADD32(0, 0XF0);
L_80034930:
    // 0x80034930: multu       $s2, $s3
    result = U64(U32(ctx->r18)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80034934: mflo        $t2
    ctx->r10 = lo;
    // 0x80034938: addu        $a0, $s1, $t2
    ctx->r4 = ADD32(ctx->r17, ctx->r10);
    // 0x8003493C: jal         0x80034A10
    // 0x80034940: addiu       $a0, $a0, 0xF0
    ctx->r4 = ADD32(ctx->r4, 0XF0);
    func_80034A10_35610(rdram, ctx);
        goto after_2;
    // 0x80034940: addiu       $a0, $a0, 0xF0
    ctx->r4 = ADD32(ctx->r4, 0XF0);
    after_2:
    // 0x80034944: multu       $s0, $s4
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80034948: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003494C: andi        $s2, $s0, 0xFFFF
    ctx->r18 = ctx->r16 & 0XFFFF;
    // 0x80034950: slti        $at, $s2, 0x4F
    ctx->r1 = SIGNED(ctx->r18) < 0X4F ? 1 : 0;
    // 0x80034954: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
    // 0x80034958: mflo        $t3
    ctx->r11 = lo;
    // 0x8003495C: addu        $t4, $s1, $t3
    ctx->r12 = ADD32(ctx->r17, ctx->r11);
    // 0x80034960: bne         $at, $zero, L_80034930
    if (ctx->r1 != 0) {
        // 0x80034964: sw          $v0, 0x0($t4)
        MEM_W(0X0, ctx->r12) = ctx->r2;
            goto L_80034930;
    }
    // 0x80034964: sw          $v0, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r2;
    // 0x80034968: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x8003496C: sh          $zero, 0x20($s1)
    MEM_H(0X20, ctx->r17) = 0;
    // 0x80034970: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    // 0x80034974: sw          $s1, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r17;
    // 0x80034978: sw          $zero, 0x8($s1)
    MEM_W(0X8, ctx->r17) = 0;
    // 0x8003497C: sw          $zero, 0x10($s1)
    MEM_W(0X10, ctx->r17) = 0;
    // 0x80034980: sh          $zero, 0x22($s1)
    MEM_H(0X22, ctx->r17) = 0;
    // 0x80034984: sw          $zero, 0x18($s1)
    MEM_W(0X18, ctx->r17) = 0;
    // 0x80034988: sw          $zero, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = 0;
    // 0x8003498C: sh          $zero, 0x4A30($s1)
    MEM_H(0X4A30, ctx->r17) = 0;
    // 0x80034990: sw          $zero, 0x4A10($s1)
    MEM_W(0X4A10, ctx->r17) = 0;
    // 0x80034994: sw          $zero, 0x48($s1)
    MEM_W(0X48, ctx->r17) = 0;
    // 0x80034998: sh          $zero, 0x3C($s1)
    MEM_H(0X3C, ctx->r17) = 0;
    // 0x8003499C: sh          $zero, 0x3E($s1)
    MEM_H(0X3E, ctx->r17) = 0;
    // 0x800349A0: sh          $zero, 0x40($s1)
    MEM_H(0X40, ctx->r17) = 0;
    // 0x800349A4: sh          $zero, 0x42($s1)
    MEM_H(0X42, ctx->r17) = 0;
    // 0x800349A8: sb          $zero, 0x44($s1)
    MEM_B(0X44, ctx->r17) = 0;
    // 0x800349AC: sw          $zero, 0x34($s1)
    MEM_W(0X34, ctx->r17) = 0;
    // 0x800349B0: sw          $zero, 0x38($s1)
    MEM_W(0X38, ctx->r17) = 0;
    // 0x800349B4: sb          $zero, 0x30($s1)
    MEM_B(0X30, ctx->r17) = 0;
    // 0x800349B8: sb          $zero, 0x4C($s1)
    MEM_B(0X4C, ctx->r17) = 0;
    // 0x800349BC: sh          $zero, 0x4E($s1)
    MEM_H(0X4E, ctx->r17) = 0;
    // 0x800349C0: sh          $zero, 0x50($s1)
    MEM_H(0X50, ctx->r17) = 0;
    // 0x800349C4: sh          $zero, 0x52($s1)
    MEM_H(0X52, ctx->r17) = 0;
    // 0x800349C8: sw          $zero, 0x54($s1)
    MEM_W(0X54, ctx->r17) = 0;
    // 0x800349CC: sw          $zero, 0x58($s1)
    MEM_W(0X58, ctx->r17) = 0;
    // 0x800349D0: lui         $at, 0x8007
    ctx->r1 = S32(0X8007 << 16);
    // 0x800349D4: sw          $t8, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r24;
    // 0x800349D8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800349DC: lui         $v0, 0x8017
    ctx->r2 = S32(0X8017 << 16);
    // 0x800349E0: sw          $zero, -0x2CE0($at)
    MEM_W(-0X2CE0, ctx->r1) = 0;
    // 0x800349E4: addiu       $v0, $v0, -0x2550
    ctx->r2 = ADD32(ctx->r2, -0X2550);
    // 0x800349E8: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
    // 0x800349EC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800349F0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800349F4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800349F8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800349FC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80034A00: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80034A04: sh          $zero, -0x254E($at)
    MEM_H(-0X254E, ctx->r1) = 0;
    // 0x80034A08: jr          $ra
    // 0x80034A0C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80034A0C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800206D4_212D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800206D4: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x800206D8: lw          $v0, -0x3A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A38);
    // 0x800206DC: lui         $t6, 0x4
    ctx->r14 = S32(0X4 << 16);
    // 0x800206E0: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x800206E4: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x800206E8: lhu         $t6, -0x51DC($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X51DC);
    // 0x800206EC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800206F0: ori         $t7, $t6, 0x1
    ctx->r15 = ctx->r14 | 0X1;
    // 0x800206F4: jr          $ra
    // 0x800206F8: sh          $t7, -0x51DC($at)
    MEM_H(-0X51DC, ctx->r1) = ctx->r15;
    TRACE_RETURN()
    return;
    // 0x800206F8: sh          $t7, -0x51DC($at)
    MEM_H(-0X51DC, ctx->r1) = ctx->r15;
;}
RECOMP_FUNC void func_80007E00_8A00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80007E00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80007E04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80007E08: jal         0x80007E5C
    // 0x80007E0C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80007E5C_8A5C(rdram, ctx);
        goto after_0;
    // 0x80007E0C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80007E10: jal         0x80007D40
    // 0x80007E14: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80007D40_8940(rdram, ctx);
        goto after_1;
    // 0x80007E14: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80007E18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80007E1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80007E20: jr          $ra
    // 0x80007E24: nop

    TRACE_RETURN()
    return;
    // 0x80007E24: nop

;}
RECOMP_FUNC void func_80007160_7D60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80007160: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80007164: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80007168: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8000716C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80007170: lw          $t6, 0x2B4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X2B4);
    // 0x80007174: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x80007178: addiu       $v0, $v0, 0x7854
    ctx->r2 = ADD32(ctx->r2, 0X7854);
    // 0x8000717C: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80007180: sw          $t7, 0x2B4($a0)
    MEM_W(0X2B4, ctx->r4) = ctx->r15;
    // 0x80007184: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80007188: beql        $a1, $t8, L_800071F8
    if (ctx->r5 == ctx->r24) {
        // 0x8000718C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800071F8;
    }
    goto skip_0;
    // 0x8000718C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80007190: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x80007194: jal         0x80007634
    // 0x80007198: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    func_80007634_8234(rdram, ctx);
        goto after_0;
    // 0x80007198: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    after_0:
    // 0x8000719C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x800071A0: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x800071A4: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x800071A8: lw          $t9, 0x2AC($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X2AC);
    // 0x800071AC: lw          $t2, 0x2B0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X2B0);
    // 0x800071B0: sltiu       $t0, $t9, 0x1
    ctx->r8 = ctx->r25 < 0X1 ? 1 : 0;
    // 0x800071B4: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x800071B8: sltiu       $t3, $t2, 0x1
    ctx->r11 = ctx->r10 < 0X1 ? 1 : 0;
    // 0x800071BC: or          $a3, $t1, $t3
    ctx->r7 = ctx->r9 | ctx->r11;
    // 0x800071C0: jal         0x800077B8
    // 0x800071C4: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_800077B8_83B8(rdram, ctx);
        goto after_1;
    // 0x800071C4: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_1:
    // 0x800071C8: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x800071CC: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x800071D0: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x800071D4: beql        $v0, $a3, L_800071F8
    if (ctx->r2 == ctx->r7) {
        // 0x800071D8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800071F8;
    }
    goto skip_1;
    // 0x800071D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x800071DC: lbu         $t4, 0x7858($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X7858);
    // 0x800071E0: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x800071E4: bnel        $t4, $zero, L_800071F8
    if (ctx->r12 != 0) {
        // 0x800071E8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800071F8;
    }
    goto skip_2;
    // 0x800071E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x800071EC: jal         0x8000769C
    // 0x800071F0: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    func_8000769C_829C(rdram, ctx);
        goto after_2;
    // 0x800071F0: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x800071F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800071F8:
    // 0x800071F8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800071FC: jr          $ra
    // 0x80007200: nop

    TRACE_RETURN()
    return;
    // 0x80007200: nop

;}
RECOMP_FUNC void func_80019D40_1A940(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80019D40: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x80019D44: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80019D48: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80019D4C: sw          $a1, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r5;
    // 0x80019D50: jal         0x8001E2BC
    // 0x80019D54: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    func_8001E2BC_1EEBC(rdram, ctx);
        goto after_0;
    // 0x80019D54: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    after_0:
    // 0x80019D58: lui         $a3, 0x8017
    ctx->r7 = S32(0X8017 << 16);
    // 0x80019D5C: addiu       $a3, $a3, -0x7AFC
    ctx->r7 = ADD32(ctx->r7, -0X7AFC);
    // 0x80019D60: lw          $a1, 0x0($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X0);
    // 0x80019D64: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x80019D68: addiu       $t6, $a1, 0x40
    ctx->r14 = ADD32(ctx->r5, 0X40);
    // 0x80019D6C: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
    // 0x80019D70: jal         0x8001F5F8
    // 0x80019D74: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    func_8001F5F8_201F8(rdram, ctx);
        goto after_1;
    // 0x80019D74: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    after_1:
    // 0x80019D78: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80019D7C: addiu       $t0, $t0, -0x3A34
    ctx->r8 = ADD32(ctx->r8, -0X3A34);
    // 0x80019D80: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x80019D84: lui         $t8, 0x106
    ctx->r24 = S32(0X106 << 16);
    // 0x80019D88: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
    // 0x80019D8C: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x80019D90: sw          $t7, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r15;
    // 0x80019D94: ori         $t8, $t8, 0x40
    ctx->r24 = ctx->r24 | 0X40;
    // 0x80019D98: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80019D9C: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80019DA0: lui         $at, 0x1FFF
    ctx->r1 = S32(0X1FFF << 16);
    // 0x80019DA4: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80019DA8: and         $t1, $t9, $at
    ctx->r9 = ctx->r25 & ctx->r1;
    // 0x80019DAC: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x80019DB0: lhu         $t2, 0x14($a2)
    ctx->r10 = MEM_HU(ctx->r6, 0X14);
    // 0x80019DB4: ori         $a0, $zero, 0x8000
    ctx->r4 = 0 | 0X8000;
    // 0x80019DB8: lui         $a3, 0x8017
    ctx->r7 = S32(0X8017 << 16);
    // 0x80019DBC: beq         $a0, $t2, L_80019DDC
    if (ctx->r4 == ctx->r10) {
        // 0x80019DC0: addiu       $a3, $a3, -0x7AFC
        ctx->r7 = ADD32(ctx->r7, -0X7AFC);
            goto L_80019DDC;
    }
    // 0x80019DC0: addiu       $a3, $a3, -0x7AFC
    ctx->r7 = ADD32(ctx->r7, -0X7AFC);
    // 0x80019DC4: lhu         $t3, 0x16($a2)
    ctx->r11 = MEM_HU(ctx->r6, 0X16);
    // 0x80019DC8: beql        $a0, $t3, L_80019DE0
    if (ctx->r4 == ctx->r11) {
        // 0x80019DCC: lw          $v0, 0x0($a3)
        ctx->r2 = MEM_W(ctx->r7, 0X0);
            goto L_80019DE0;
    }
    goto skip_0;
    // 0x80019DCC: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    skip_0:
    // 0x80019DD0: lhu         $t4, 0x18($a2)
    ctx->r12 = MEM_HU(ctx->r6, 0X18);
    // 0x80019DD4: bnel        $a0, $t4, L_80019EC0
    if (ctx->r4 != ctx->r12) {
        // 0x80019DD8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80019EC0;
    }
    goto skip_1;
    // 0x80019DD8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
L_80019DDC:
    // 0x80019DDC: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
L_80019DE0:
    // 0x80019DE0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80019DE4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80019DE8: addiu       $t5, $v0, 0x40
    ctx->r13 = ADD32(ctx->r2, 0X40);
    // 0x80019DEC: sw          $t5, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r13;
    // 0x80019DF0: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x80019DF4: lhu         $v1, 0x16($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X16);
    // 0x80019DF8: beq         $a0, $v1, L_80019E0C
    if (ctx->r4 == ctx->r3) {
        // 0x80019DFC: nop
    
            goto L_80019E0C;
    }
    // 0x80019DFC: nop

    // 0x80019E00: lhu         $t6, 0x18($a2)
    ctx->r14 = MEM_HU(ctx->r6, 0X18);
    // 0x80019E04: bnel        $a0, $t6, L_80019E20
    if (ctx->r4 != ctx->r14) {
        // 0x80019E08: mtc1        $zero, $f14
        ctx->f14.u32l = 0;
            goto L_80019E20;
    }
    goto skip_2;
    // 0x80019E08: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    skip_2:
L_80019E0C:
    // 0x80019E0C: lwc1        $f12, -0x7680($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X7680);
    // 0x80019E10: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80019E14: b           L_80019E28
    // 0x80019E18: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
        goto L_80019E28;
    // 0x80019E18: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    // 0x80019E1C: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
L_80019E20:
    // 0x80019E20: nop

    // 0x80019E24: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
L_80019E28:
    // 0x80019E28: lhu         $v0, 0x14($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X14);
    // 0x80019E2C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80019E30: beq         $a0, $v0, L_80019E44
    if (ctx->r4 == ctx->r2) {
        // 0x80019E34: nop
    
            goto L_80019E44;
    }
    // 0x80019E34: nop

    // 0x80019E38: lhu         $t7, 0x18($a2)
    ctx->r15 = MEM_HU(ctx->r6, 0X18);
    // 0x80019E3C: bnel        $a0, $t7, L_80019E54
    if (ctx->r4 != ctx->r15) {
        // 0x80019E40: mov.s       $f2, $f14
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    ctx->f2.fl = ctx->f14.fl;
            goto L_80019E54;
    }
    goto skip_3;
    // 0x80019E40: mov.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    ctx->f2.fl = ctx->f14.fl;
    skip_3:
L_80019E44:
    // 0x80019E44: lwc1        $f2, -0x767C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X767C);
    // 0x80019E48: b           L_80019E54
    // 0x80019E4C: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_80019E54;
    // 0x80019E4C: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x80019E50: mov.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    ctx->f2.fl = ctx->f14.fl;
L_80019E54:
    // 0x80019E54: beq         $a0, $v0, L_80019E64
    if (ctx->r4 == ctx->r2) {
        // 0x80019E58: lui         $at, 0x8017
        ctx->r1 = S32(0X8017 << 16);
            goto L_80019E64;
    }
    // 0x80019E58: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80019E5C: bnel        $a0, $v1, L_80019E74
    if (ctx->r4 != ctx->r3) {
        // 0x80019E60: mov.s       $f0, $f14
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
            goto L_80019E74;
    }
    goto skip_4;
    // 0x80019E60: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
    skip_4:
L_80019E64:
    // 0x80019E64: lwc1        $f0, -0x7678($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7678);
    // 0x80019E68: b           L_80019E74
    // 0x80019E6C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80019E74;
    // 0x80019E6C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80019E70: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
L_80019E74:
    // 0x80019E74: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x80019E78: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x80019E7C: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x80019E80: jal         0x80043ED0
    // 0x80019E84: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    guAlign(rdram, ctx);
        goto after_2;
    // 0x80019E84: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x80019E88: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80019E8C: addiu       $t0, $t0, -0x3A34
    ctx->r8 = ADD32(ctx->r8, -0X3A34);
    // 0x80019E90: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x80019E94: lui         $t9, 0x100
    ctx->r25 = S32(0X100 << 16);
    // 0x80019E98: ori         $t9, $t9, 0x40
    ctx->r25 = ctx->r25 | 0X40;
    // 0x80019E9C: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x80019EA0: sw          $t8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r24;
    // 0x80019EA4: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80019EA8: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80019EAC: lui         $at, 0x1FFF
    ctx->r1 = S32(0X1FFF << 16);
    // 0x80019EB0: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80019EB4: and         $t2, $t1, $at
    ctx->r10 = ctx->r9 & ctx->r1;
    // 0x80019EB8: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x80019EBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80019EC0:
    // 0x80019EC0: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80019EC4: addiu       $t3, $t3, -0x7AC8
    ctx->r11 = ADD32(ctx->r11, -0X7AC8);
    // 0x80019EC8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80019ECC: sw          $t3, -0x7AD0($at)
    MEM_W(-0X7AD0, ctx->r1) = ctx->r11;
    // 0x80019ED0: jr          $ra
    // 0x80019ED4: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    TRACE_RETURN()
    return;
    // 0x80019ED4: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_80015870_16470(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80015870: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80015874: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80015878: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8001587C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80015880: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80015884: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80015888: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8001588C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80015890: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80015894: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80015898: lui         $fp, 0x8017
    ctx->r30 = S32(0X8017 << 16);
    // 0x8001589C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x800158A0: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x800158A4: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x800158A8: or          $s4, $a3, $zero
    ctx->r20 = ctx->r7 | 0;
    // 0x800158AC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x800158B0: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x800158B4: addiu       $fp, $fp, -0x7E8C
    ctx->r30 = ADD32(ctx->r30, -0X7E8C);
    // 0x800158B8: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x800158BC: addiu       $s6, $zero, 0x2
    ctx->r22 = ADD32(0, 0X2);
    // 0x800158C0: addiu       $s7, $zero, 0x3
    ctx->r23 = ADD32(0, 0X3);
L_800158C4:
    // 0x800158C4: jal         0x80014CC4
    // 0x800158C8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80014CC4_158C4(rdram, ctx);
        goto after_0;
    // 0x800158C8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_0:
    // 0x800158CC: beq         $v0, $zero, L_800158F4
    if (ctx->r2 == 0) {
        // 0x800158D0: nop
    
            goto L_800158F4;
    }
    // 0x800158D0: nop

    // 0x800158D4: beq         $v0, $s5, L_80015924
    if (ctx->r2 == ctx->r21) {
        // 0x800158D8: nop
    
            goto L_80015924;
    }
    // 0x800158D8: nop

    // 0x800158DC: beql        $v0, $s6, L_80015934
    if (ctx->r2 == ctx->r22) {
        // 0x800158E0: lw          $t6, 0x0($fp)
        ctx->r14 = MEM_W(ctx->r30, 0X0);
            goto L_80015934;
    }
    goto skip_0;
    // 0x800158E0: lw          $t6, 0x0($fp)
    ctx->r14 = MEM_W(ctx->r30, 0X0);
    skip_0:
    // 0x800158E4: beql        $v0, $s7, L_80015930
    if (ctx->r2 == ctx->r23) {
        // 0x800158E8: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80015930;
    }
    goto skip_1;
    // 0x800158E8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_1:
    // 0x800158EC: b           L_80015934
    // 0x800158F0: lw          $t6, 0x0($fp)
    ctx->r14 = MEM_W(ctx->r30, 0X0);
        goto L_80015934;
    // 0x800158F0: lw          $t6, 0x0($fp)
    ctx->r14 = MEM_W(ctx->r30, 0X0);
L_800158F4:
    // 0x800158F4: jal         0x80014CC4
    // 0x800158F8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80014CC4_158C4(rdram, ctx);
        goto after_1;
    // 0x800158F8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x800158FC: beql        $v0, $zero, L_80015984
    if (ctx->r2 == 0) {
        // 0x80015900: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_80015984;
    }
    goto skip_2;
    // 0x80015900: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_2:
    // 0x80015904: jal         0x80014CC4
    // 0x80015908: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80014CC4_158C4(rdram, ctx);
        goto after_2;
    // 0x80015908: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x8001590C: bne         $v0, $zero, L_8001591C
    if (ctx->r2 != 0) {
        // 0x80015910: nop
    
            goto L_8001591C;
    }
    // 0x80015910: nop

    // 0x80015914: b           L_80015930
    // 0x80015918: addiu       $s0, $s0, -0x2
    ctx->r16 = ADD32(ctx->r16, -0X2);
        goto L_80015930;
    // 0x80015918: addiu       $s0, $s0, -0x2
    ctx->r16 = ADD32(ctx->r16, -0X2);
L_8001591C:
    // 0x8001591C: b           L_80015930
    // 0x80015920: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
        goto L_80015930;
    // 0x80015920: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_80015924:
    // 0x80015924: b           L_80015930
    // 0x80015928: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
        goto L_80015930;
    // 0x80015928: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x8001592C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80015930:
    // 0x80015930: lw          $t6, 0x0($fp)
    ctx->r14 = MEM_W(ctx->r30, 0X0);
L_80015934:
    // 0x80015934: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80015938: slt         $at, $s0, $t6
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8001593C: beql        $at, $zero, L_80015984
    if (ctx->r1 == 0) {
        // 0x80015940: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_80015984;
    }
    goto skip_3;
    // 0x80015940: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_3:
    // 0x80015944: lw          $t7, -0x7E88($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X7E88);
    // 0x80015948: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8001594C: slt         $at, $s1, $t7
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80015950: bne         $at, $zero, L_8001595C
    if (ctx->r1 != 0) {
        // 0x80015954: nop
    
            goto L_8001595C;
    }
    // 0x80015954: nop

    // 0x80015958: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_8001595C:
    // 0x8001595C: beq         $s2, $zero, L_800158C4
    if (ctx->r18 == 0) {
        // 0x80015960: nop
    
            goto L_800158C4;
    }
    // 0x80015960: nop

    // 0x80015964: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80015968: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8001596C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x80015970: jal         0x80016254
    // 0x80015974: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    func_80016254_16E54(rdram, ctx);
        goto after_3;
    // 0x80015974: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    after_3:
    // 0x80015978: b           L_800158C4
    // 0x8001597C: nop

        goto L_800158C4;
    // 0x8001597C: nop

    // 0x80015980: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80015984:
    // 0x80015984: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80015988: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8001598C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80015990: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80015994: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80015998: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8001599C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x800159A0: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x800159A4: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x800159A8: jr          $ra
    // 0x800159AC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x800159AC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800154B0_160B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800154B0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800154B4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800154B8: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x800154BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800154C0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800154C4: jal         0x80014CC4
    // 0x800154C8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_80014CC4_158C4(rdram, ctx);
        goto after_0;
    // 0x800154C8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_0:
    // 0x800154CC: jal         0x80014CC4
    // 0x800154D0: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_80014CC4_158C4(rdram, ctx);
        goto after_1;
    // 0x800154D0: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_1:
    // 0x800154D4: jal         0x80014CC4
    // 0x800154D8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_80014CC4_158C4(rdram, ctx);
        goto after_2;
    // 0x800154D8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_2:
    // 0x800154DC: lui         $t6, 0x8000
    ctx->r14 = S32(0X8000 << 16);
    // 0x800154E0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800154E4: sw          $t6, -0x7E84($at)
    MEM_W(-0X7E84, ctx->r1) = ctx->r14;
    // 0x800154E8: jal         0x80014CC4
    // 0x800154EC: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_80014CC4_158C4(rdram, ctx);
        goto after_3;
    // 0x800154EC: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_3:
    // 0x800154F0: addiu       $s0, $zero, 0x1A
    ctx->r16 = ADD32(0, 0X1A);
    // 0x800154F4: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x800154F8: beq         $s0, $v1, L_80015554
    if (ctx->r16 == ctx->r3) {
        // 0x800154FC: sb          $v1, 0x2C($sp)
        MEM_B(0X2C, ctx->r29) = ctx->r3;
            goto L_80015554;
    }
    // 0x800154FC: sb          $v1, 0x2C($sp)
    MEM_B(0X2C, ctx->r29) = ctx->r3;
    // 0x80015500: jal         0x80014CC4
    // 0x80015504: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_80014CC4_158C4(rdram, ctx);
        goto after_4;
    // 0x80015504: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_4:
    // 0x80015508: sb          $v0, 0x2D($sp)
    MEM_B(0X2D, ctx->r29) = ctx->r2;
    // 0x8001550C: jal         0x80014CC4
    // 0x80015510: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_80014CC4_158C4(rdram, ctx);
        goto after_5;
    // 0x80015510: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_5:
    // 0x80015514: sb          $v0, 0x2E($sp)
    MEM_B(0X2E, ctx->r29) = ctx->r2;
    // 0x80015518: jal         0x80014CC4
    // 0x8001551C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_80014CC4_158C4(rdram, ctx);
        goto after_6;
    // 0x8001551C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_6:
    // 0x80015520: sb          $v0, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r2;
    // 0x80015524: jal         0x8001654C
    // 0x80015528: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    func_8001654C_1714C(rdram, ctx);
        goto after_7;
    // 0x80015528: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    after_7:
    // 0x8001552C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80015530: sw          $v0, -0x7E84($at)
    MEM_W(-0X7E84, ctx->r1) = ctx->r2;
    // 0x80015534: jal         0x80014CC4
    // 0x80015538: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_80014CC4_158C4(rdram, ctx);
        goto after_8;
    // 0x80015538: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_8:
    // 0x8001553C: beq         $v0, $s0, L_80015554
    if (ctx->r2 == ctx->r16) {
        // 0x80015540: nop
    
            goto L_80015554;
    }
    // 0x80015540: nop

L_80015544:
    // 0x80015544: jal         0x80014CC4
    // 0x80015548: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_80014CC4_158C4(rdram, ctx);
        goto after_9;
    // 0x80015548: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_9:
    // 0x8001554C: bne         $v0, $s0, L_80015544
    if (ctx->r2 != ctx->r16) {
        // 0x80015550: nop
    
            goto L_80015544;
    }
    // 0x80015550: nop

L_80015554:
    // 0x80015554: jal         0x80014CC4
    // 0x80015558: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_80014CC4_158C4(rdram, ctx);
        goto after_10;
    // 0x80015558: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_10:
    // 0x8001555C: beq         $v0, $zero, L_80015574
    if (ctx->r2 == 0) {
        // 0x80015560: nop
    
            goto L_80015574;
    }
    // 0x80015560: nop

L_80015564:
    // 0x80015564: jal         0x80014CC4
    // 0x80015568: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_80014CC4_158C4(rdram, ctx);
        goto after_11;
    // 0x80015568: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_11:
    // 0x8001556C: bne         $v0, $zero, L_80015564
    if (ctx->r2 != 0) {
        // 0x80015570: nop
    
            goto L_80015564;
    }
    // 0x80015570: nop

L_80015574:
    // 0x80015574: jal         0x80014CC4
    // 0x80015578: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_80014CC4_158C4(rdram, ctx);
        goto after_12;
    // 0x80015578: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_12:
    // 0x8001557C: jal         0x80014CC4
    // 0x80015580: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_80014CC4_158C4(rdram, ctx);
        goto after_13;
    // 0x80015580: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_13:
    // 0x80015584: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80015588: jal         0x80014CC4
    // 0x8001558C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_80014CC4_158C4(rdram, ctx);
        goto after_14;
    // 0x8001558C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_14:
    // 0x80015590: jal         0x80014CC4
    // 0x80015594: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_80014CC4_158C4(rdram, ctx);
        goto after_15;
    // 0x80015594: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_15:
    // 0x80015598: sw          $v0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r2;
    // 0x8001559C: jal         0x80014CC4
    // 0x800155A0: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_80014CC4_158C4(rdram, ctx);
        goto after_16;
    // 0x800155A0: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_16:
    // 0x800155A4: lui         $s0, 0x8017
    ctx->r16 = S32(0X8017 << 16);
    // 0x800155A8: addiu       $s0, $s0, -0x7E8C
    ctx->r16 = ADD32(ctx->r16, -0X7E8C);
    // 0x800155AC: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x800155B0: jal         0x80014CC4
    // 0x800155B4: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_80014CC4_158C4(rdram, ctx);
        goto after_17;
    // 0x800155B4: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_17:
    // 0x800155B8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800155BC: addiu       $a0, $a0, -0x7E88
    ctx->r4 = ADD32(ctx->r4, -0X7E88);
    // 0x800155C0: slti        $at, $v0, 0x201
    ctx->r1 = SIGNED(ctx->r2) < 0X201 ? 1 : 0;
    // 0x800155C4: bne         $at, $zero, L_800155D4
    if (ctx->r1 != 0) {
        // 0x800155C8: sw          $v0, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->r2;
            goto L_800155D4;
    }
    // 0x800155C8: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x800155CC: addiu       $t8, $zero, 0x200
    ctx->r24 = ADD32(0, 0X200);
    // 0x800155D0: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
L_800155D4:
    // 0x800155D4: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x800155D8: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x800155DC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x800155E0: sw          $t9, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r25;
    // 0x800155E4: lw          $t0, 0x0($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X0);
    // 0x800155E8: sw          $zero, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = 0;
    // 0x800155EC: sw          $zero, 0x20($s1)
    MEM_W(0X20, ctx->r17) = 0;
    // 0x800155F0: sw          $t0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r8;
    // 0x800155F4: lw          $t1, -0x7E84($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X7E84);
    // 0x800155F8: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x800155FC: sw          $t1, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r9;
    // 0x80015600: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80015604: bnel        $t2, $a1, L_8001565C
    if (ctx->r10 != ctx->r5) {
        // 0x80015608: lw          $v0, 0x8($s1)
        ctx->r2 = MEM_W(ctx->r17, 0X8);
            goto L_8001565C;
    }
    goto skip_0;
    // 0x80015608: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    skip_0:
    // 0x8001560C: sw          $t3, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r11;
    // 0x80015610: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x80015614: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x80015618: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x8001561C: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80015620: and         $t6, $t5, $at
    ctx->r14 = ctx->r13 & ctx->r1;
    // 0x80015624: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80015628: lw          $t9, 0x8($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X8);
    // 0x8001562C: mflo        $t8
    ctx->r24 = lo;
    // 0x80015630: nop

    // 0x80015634: nop

    // 0x80015638: multu       $t8, $t9
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001563C: mflo        $t0
    ctx->r8 = lo;
    // 0x80015640: bgez        $t0, L_80015650
    if (SIGNED(ctx->r8) >= 0) {
        // 0x80015644: sra         $t1, $t0, 3
        ctx->r9 = S32(SIGNED(ctx->r8) >> 3);
            goto L_80015650;
    }
    // 0x80015644: sra         $t1, $t0, 3
    ctx->r9 = S32(SIGNED(ctx->r8) >> 3);
    // 0x80015648: addiu       $at, $t0, 0x7
    ctx->r1 = ADD32(ctx->r8, 0X7);
    // 0x8001564C: sra         $t1, $at, 3
    ctx->r9 = S32(SIGNED(ctx->r1) >> 3);
L_80015650:
    // 0x80015650: b           L_800156F8
    // 0x80015654: sw          $t1, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r9;
        goto L_800156F8;
    // 0x80015654: sw          $t1, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r9;
    // 0x80015658: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
L_8001565C:
    // 0x8001565C: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x80015660: beq         $v0, $at, L_80015670
    if (ctx->r2 == ctx->r1) {
        // 0x80015664: addiu       $at, $zero, 0x10
        ctx->r1 = ADD32(0, 0X10);
            goto L_80015670;
    }
    // 0x80015664: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x80015668: bne         $v0, $at, L_80015690
    if (ctx->r2 != ctx->r1) {
        // 0x8001566C: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_80015690;
    }
    // 0x8001566C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
L_80015670:
    // 0x80015670: sw          $zero, 0x10($s1)
    MEM_W(0X10, ctx->r17) = 0;
    // 0x80015674: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x80015678: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x8001567C: multu       $t2, $t3
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80015680: mflo        $t4
    ctx->r12 = lo;
    // 0x80015684: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x80015688: b           L_800156F8
    // 0x8001568C: sw          $t5, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r13;
        goto L_800156F8;
    // 0x8001568C: sw          $t5, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r13;
L_80015690:
    // 0x80015690: sw          $t6, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r14;
    // 0x80015694: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x80015698: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x8001569C: xor         $t4, $a1, $v0
    ctx->r12 = ctx->r5 ^ ctx->r2;
    // 0x800156A0: sltiu       $t4, $t4, 0x1
    ctx->r12 = ctx->r12 < 0X1 ? 1 : 0;
    // 0x800156A4: multu       $t7, $t8
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800156A8: xori        $t7, $v0, 0x8
    ctx->r15 = ctx->r2 ^ 0X8;
    // 0x800156AC: sltiu       $t7, $t7, 0x1
    ctx->r15 = ctx->r15 < 0X1 ? 1 : 0;
    // 0x800156B0: sll         $t5, $t4, 5
    ctx->r13 = S32(ctx->r12 << 5);
    // 0x800156B4: sll         $t8, $t7, 9
    ctx->r24 = S32(ctx->r15 << 9);
    // 0x800156B8: mflo        $v1
    ctx->r3 = lo;
    // 0x800156BC: andi        $t1, $v1, 0x1
    ctx->r9 = ctx->r3 & 0X1;
    // 0x800156C0: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x800156C4: multu       $v1, $v0
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800156C8: mflo        $t9
    ctx->r25 = lo;
    // 0x800156CC: bgez        $t9, L_800156DC
    if (SIGNED(ctx->r25) >= 0) {
        // 0x800156D0: sra         $t0, $t9, 3
        ctx->r8 = S32(SIGNED(ctx->r25) >> 3);
            goto L_800156DC;
    }
    // 0x800156D0: sra         $t0, $t9, 3
    ctx->r8 = S32(SIGNED(ctx->r25) >> 3);
    // 0x800156D4: addiu       $at, $t9, 0x7
    ctx->r1 = ADD32(ctx->r25, 0X7);
    // 0x800156D8: sra         $t0, $at, 3
    ctx->r8 = S32(SIGNED(ctx->r1) >> 3);
L_800156DC:
    // 0x800156DC: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x800156E0: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x800156E4: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x800156E8: addiu       $t1, $t9, 0x7
    ctx->r9 = ADD32(ctx->r25, 0X7);
    // 0x800156EC: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x800156F0: and         $t0, $t1, $at
    ctx->r8 = ctx->r9 & ctx->r1;
    // 0x800156F4: sw          $t0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r8;
L_800156F8:
    // 0x800156F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800156FC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80015700: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80015704: jr          $ra
    // 0x80015708: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80015708: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8000B8B0_C4B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000B8B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8000B8B4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8000B8B8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8000B8BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8000B8C0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8000B8C4: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
L_8000B8C8:
    // 0x8000B8C8: jal         0x8000B8F0
    // 0x8000B8CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8000B8F0_C4F0(rdram, ctx);
        goto after_0;
    // 0x8000B8CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8000B8D0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8000B8D4: bne         $s0, $s1, L_8000B8C8
    if (ctx->r16 != ctx->r17) {
        // 0x8000B8D8: nop
    
            goto L_8000B8C8;
    }
    // 0x8000B8D8: nop

    // 0x8000B8DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8000B8E0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8000B8E4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8000B8E8: jr          $ra
    // 0x8000B8EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8000B8EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8003CA6C_3D66C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003CA6C: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8003CA70: lui         $a2, 0x801C
    ctx->r6 = S32(0X801C << 16);
    // 0x8003CA74: addiu       $a2, $a2, 0x1728
    ctx->r6 = ADD32(ctx->r6, 0X1728);
    // 0x8003CA78: addiu       $a1, $a1, 0x172C
    ctx->r5 = ADD32(ctx->r5, 0X172C);
    // 0x8003CA7C: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x8003CA80: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x8003CA84: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8003CA88: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x8003CA8C: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x8003CA90: lbu         $t7, 0x64($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X64);
    // 0x8003CA94: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8003CA98: beq         $v0, $zero, L_8003CAB0
    if (ctx->r2 == 0) {
        // 0x8003CA9C: sb          $t8, 0x64($a0)
        MEM_B(0X64, ctx->r4) = ctx->r24;
            goto L_8003CAB0;
    }
    // 0x8003CA9C: sb          $t8, 0x64($a0)
    MEM_B(0X64, ctx->r4) = ctx->r24;
    // 0x8003CAA0: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x8003CAA4: lbu         $t9, 0x64($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X64);
    // 0x8003CAA8: beql        $t9, $v0, L_8003CB0C
    if (ctx->r25 == ctx->r2) {
        // 0x8003CAAC: sh          $zero, 0x42($a0)
        MEM_H(0X42, ctx->r4) = 0;
            goto L_8003CB0C;
    }
    goto skip_0;
    // 0x8003CAAC: sh          $zero, 0x42($a0)
    MEM_H(0X42, ctx->r4) = 0;
    skip_0:
L_8003CAB0:
    // 0x8003CAB0: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x8003CAB4: lw          $t1, 0x0($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X0);
    // 0x8003CAB8: lh          $t0, 0x42($a0)
    ctx->r8 = MEM_H(ctx->r4, 0X42);
    // 0x8003CABC: lb          $t2, 0x0($t1)
    ctx->r10 = MEM_B(ctx->r9, 0X0);
    // 0x8003CAC0: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x8003CAC4: sh          $t3, 0x42($a0)
    MEM_H(0X42, ctx->r4) = ctx->r11;
    // 0x8003CAC8: lw          $t4, 0x0($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X0);
    // 0x8003CACC: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x8003CAD0: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8003CAD4: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
    // 0x8003CAD8: lb          $t8, 0x0($t5)
    ctx->r24 = MEM_B(ctx->r13, 0X0);
    // 0x8003CADC: lh          $t6, 0x34($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X34);
    // 0x8003CAE0: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x8003CAE4: addu        $t1, $t6, $t9
    ctx->r9 = ADD32(ctx->r14, ctx->r25);
    // 0x8003CAE8: sh          $t1, 0x34($a0)
    MEM_H(0X34, ctx->r4) = ctx->r9;
    // 0x8003CAEC: lw          $t0, 0x0($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X0);
    // 0x8003CAF0: lw          $t3, 0x0($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X0);
    // 0x8003CAF4: addiu       $t2, $t0, 0x1
    ctx->r10 = ADD32(ctx->r8, 0X1);
    // 0x8003CAF8: sw          $t2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r10;
    // 0x8003CAFC: lw          $t4, 0x68($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X68);
    // 0x8003CB00: jr          $ra
    // 0x8003CB04: sw          $t4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r12;
    TRACE_RETURN()
    return;
    // 0x8003CB04: sw          $t4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r12;
    // 0x8003CB08: sh          $zero, 0x42($a0)
    MEM_H(0X42, ctx->r4) = 0;
L_8003CB0C:
    // 0x8003CB0C: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x8003CB10: lh          $t5, 0x42($a0)
    ctx->r13 = MEM_H(ctx->r4, 0X42);
    // 0x8003CB14: sh          $t5, 0x34($a0)
    MEM_H(0X34, ctx->r4) = ctx->r13;
    // 0x8003CB18: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x8003CB1C: addiu       $t8, $t7, 0x2
    ctx->r24 = ADD32(ctx->r15, 0X2);
    // 0x8003CB20: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x8003CB24: jr          $ra
    // 0x8003CB28: nop

    TRACE_RETURN()
    return;
    // 0x8003CB28: nop

;}
RECOMP_FUNC void func_8003EA0C_3F60C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003EA0C: jr          $ra
    // 0x8003EA10: nop

    TRACE_RETURN()
    return;
    // 0x8003EA10: nop

;}
RECOMP_FUNC void func_80035234_35E34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80035234: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80035238: lw          $t6, -0x254C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X254C);
    // 0x8003523C: jr          $ra
    // 0x80035240: sw          $a0, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->r4;
    TRACE_RETURN()
    return;
    // 0x80035240: sw          $a0, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->r4;
;}
RECOMP_FUNC void func_8000ED5C_F95C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000ED5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000ED60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000ED64: lwc1        $f6, 0x8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8000ED68: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x8000ED6C: lwc1        $f10, 0xC($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0XC);
    // 0x8000ED70: lwc1        $f8, 0xC($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0XC);
    // 0x8000ED74: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8000ED78: lwc1        $f18, 0x10($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X10);
    // 0x8000ED7C: lwc1        $f16, 0x10($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X10);
    // 0x8000ED80: sub.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8000ED84: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8000ED88: sub.s       $f14, $f16, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x8000ED8C: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8000ED90: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8000ED94: mul.s       $f10, $f14, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x8000ED98: jal         0x800417E0
    // 0x8000ED9C: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    _nsqrtf(rdram, ctx);
        goto after_0;
    // 0x8000ED9C: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    after_0:
    // 0x8000EDA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000EDA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000EDA8: jr          $ra
    // 0x8000EDAC: nop

    TRACE_RETURN()
    return;
    // 0x8000EDAC: nop

;}
RECOMP_FUNC void func_8002A750_2B350(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002A750: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8002A754: lhu         $t6, 0x3A($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X3A);
    // 0x8002A758: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8002A75C: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8002A760: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8002A764: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8002A768: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8002A76C: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x8002A770: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x8002A774: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x8002A778: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8002A77C: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x8002A780: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x8002A784: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x8002A788: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x8002A78C: bgez        $t6, L_8002A7A4
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8002A790: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_8002A7A4;
    }
    // 0x8002A790: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8002A794: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8002A798: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8002A79C: nop

    // 0x8002A7A0: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_8002A7A4:
    // 0x8002A7A4: jal         0x8002C9D4
    // 0x8002A7A8: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    func_8002C9D4_2D5D4(rdram, ctx);
        goto after_0;
    // 0x8002A7A8: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x8002A7AC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8002A7B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8002A7B4: jr          $ra
    // 0x8002A7B8: nop

    TRACE_RETURN()
    return;
    // 0x8002A7B8: nop

;}
RECOMP_FUNC void func_800176F0_182F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800176F0: lui         $v1, 0x8017
    ctx->r3 = S32(0X8017 << 16);
    // 0x800176F4: addiu       $v1, $v1, -0x7AFC
    ctx->r3 = ADD32(ctx->r3, -0X7AFC);
    // 0x800176F8: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x800176FC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80017700: sw          $s1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r17;
    // 0x80017704: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80017708: addiu       $t6, $v0, 0x40
    ctx->r14 = ADD32(ctx->r2, 0X40);
    // 0x8001770C: addiu       $t7, $t6, 0x40
    ctx->r15 = ADD32(ctx->r14, 0X40);
    // 0x80017710: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80017714: addiu       $t8, $t7, 0x40
    ctx->r24 = ADD32(ctx->r15, 0X40);
    // 0x80017718: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8001771C: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80017720: addiu       $t9, $t8, 0x40
    ctx->r25 = ADD32(ctx->r24, 0X40);
    // 0x80017724: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x80017728: sw          $s2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r18;
    // 0x8001772C: sw          $s0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r16;
    // 0x80017730: sw          $a1, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r5;
    // 0x80017734: sw          $t6, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r14;
    // 0x80017738: sw          $t7, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r15;
    // 0x8001773C: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80017740: sw          $t8, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r24;
    // 0x80017744: sw          $v0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r2;
    // 0x80017748: jal         0x8001AC28
    // 0x8001774C: lhu         $a0, 0xC($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XC);
    func_8001AC28_1B828(rdram, ctx);
        goto after_0;
    // 0x8001774C: lhu         $a0, 0xC($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XC);
    after_0:
    // 0x80017750: lui         $s2, 0x8017
    ctx->r18 = S32(0X8017 << 16);
    // 0x80017754: addiu       $s2, $s2, -0x7B5C
    ctx->r18 = ADD32(ctx->r18, -0X7B5C);
    // 0x80017758: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x8001775C: sh          $v0, 0xCE($sp)
    MEM_H(0XCE, ctx->r29) = ctx->r2;
    // 0x80017760: lui         $t1, 0x8007
    ctx->r9 = S32(0X8007 << 16);
    // 0x80017764: bne         $v1, $zero, L_80017774
    if (ctx->r3 != 0) {
        // 0x80017768: lui         $s0, 0x8016
        ctx->r16 = S32(0X8016 << 16);
            goto L_80017774;
    }
    // 0x80017768: lui         $s0, 0x8016
    ctx->r16 = S32(0X8016 << 16);
    // 0x8001776C: addiu       $v1, $t1, -0x49C0
    ctx->r3 = ADD32(ctx->r9, -0X49C0);
    // 0x80017770: sw          $v1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r3;
L_80017774:
    // 0x80017774: lw          $a1, 0x40($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X40);
    // 0x80017778: lui         $t9, 0x380
    ctx->r25 = S32(0X380 << 16);
    // 0x8001777C: addiu       $s0, $s0, -0x3A34
    ctx->r16 = ADD32(ctx->r16, -0X3A34);
    // 0x80017780: beq         $a1, $zero, L_8001781C
    if (ctx->r5 == 0) {
        // 0x80017784: ori         $t9, $t9, 0x10
        ctx->r25 = ctx->r25 | 0X10;
            goto L_8001781C;
    }
    // 0x80017784: ori         $t9, $t9, 0x10
    ctx->r25 = ctx->r25 | 0X10;
    // 0x80017788: lui         $v1, 0x8017
    ctx->r3 = S32(0X8017 << 16);
    // 0x8001778C: addiu       $v1, $v1, -0x7B0C
    ctx->r3 = ADD32(ctx->r3, -0X7B0C);
    // 0x80017790: lui         $a2, 0x8017
    ctx->r6 = S32(0X8017 << 16);
    // 0x80017794: lbu         $t3, 0x0($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X0);
    // 0x80017798: addiu       $a2, $a2, -0x7B00
    ctx->r6 = ADD32(ctx->r6, -0X7B00);
    // 0x8001779C: lw          $t2, 0x0($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X0);
    // 0x800177A0: lw          $at, 0x0($a1)
    ctx->r1 = MEM_W(ctx->r5, 0X0);
    // 0x800177A4: sll         $t4, $t3, 4
    ctx->r12 = S32(ctx->r11 << 4);
    // 0x800177A8: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x800177AC: sw          $at, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r1;
    // 0x800177B0: lw          $t7, 0x4($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X4);
    // 0x800177B4: lui         $s0, 0x8016
    ctx->r16 = S32(0X8016 << 16);
    // 0x800177B8: addiu       $s0, $s0, -0x3A34
    ctx->r16 = ADD32(ctx->r16, -0X3A34);
    // 0x800177BC: sw          $t7, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r15;
    // 0x800177C0: lw          $at, 0x8($a1)
    ctx->r1 = MEM_W(ctx->r5, 0X8);
    // 0x800177C4: lui         $t9, 0x380
    ctx->r25 = S32(0X380 << 16);
    // 0x800177C8: ori         $t9, $t9, 0x10
    ctx->r25 = ctx->r25 | 0X10;
    // 0x800177CC: sw          $at, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->r1;
    // 0x800177D0: lw          $t7, 0xC($a1)
    ctx->r15 = MEM_W(ctx->r5, 0XC);
    // 0x800177D4: sw          $t7, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->r15;
    // 0x800177D8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x800177DC: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x800177E0: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    // 0x800177E4: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x800177E8: lbu         $t1, 0x0($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X0);
    // 0x800177EC: lw          $t2, 0x0($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X0);
    // 0x800177F0: sll         $t3, $t1, 4
    ctx->r11 = S32(ctx->r9 << 4);
    // 0x800177F4: addu        $t4, $t3, $t2
    ctx->r12 = ADD32(ctx->r11, ctx->r10);
    // 0x800177F8: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x800177FC: lbu         $t6, 0x0($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X0);
    // 0x80017800: addiu       $t5, $t6, 0x1
    ctx->r13 = ADD32(ctx->r14, 0X1);
    // 0x80017804: andi        $t7, $t5, 0xFF
    ctx->r15 = ctx->r13 & 0XFF;
    // 0x80017808: slti        $at, $t7, 0x5
    ctx->r1 = SIGNED(ctx->r15) < 0X5 ? 1 : 0;
    // 0x8001780C: bne         $at, $zero, L_80017838
    if (ctx->r1 != 0) {
        // 0x80017810: sb          $t5, 0x0($v1)
        MEM_B(0X0, ctx->r3) = ctx->r13;
            goto L_80017838;
    }
    // 0x80017810: sb          $t5, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r13;
    // 0x80017814: b           L_8001783C
    // 0x80017818: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
        goto L_8001783C;
    // 0x80017818: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
L_8001781C:
    // 0x8001781C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80017820: lui         $t1, 0x8007
    ctx->r9 = S32(0X8007 << 16);
    // 0x80017824: addiu       $t1, $t1, -0x49D0
    ctx->r9 = ADD32(ctx->r9, -0X49D0);
    // 0x80017828: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8001782C: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    // 0x80017830: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x80017834: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
L_80017838:
    // 0x80017838: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
L_8001783C:
    // 0x8001783C: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
    // 0x80017840: lbu         $t3, 0x3E($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X3E);
    // 0x80017844: andi        $t2, $t3, 0x1
    ctx->r10 = ctx->r11 & 0X1;
    // 0x80017848: bnel        $t2, $zero, L_8001794C
    if (ctx->r10 != 0) {
        // 0x8001784C: lwc1        $f18, 0x54($v1)
        ctx->f18.u32l = MEM_W(ctx->r3, 0X54);
            goto L_8001794C;
    }
    goto skip_0;
    // 0x8001784C: lwc1        $f18, 0x54($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X54);
    skip_0:
    // 0x80017850: jal         0x8001AC28
    // 0x80017854: lhu         $a0, 0xE($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0XE);
    func_8001AC28_1B828(rdram, ctx);
        goto after_1;
    // 0x80017854: lhu         $a0, 0xE($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0XE);
    after_1:
    // 0x80017858: sh          $v0, 0x86($sp)
    MEM_H(0X86, ctx->r29) = ctx->r2;
    // 0x8001785C: jal         0x8001A8E4
    // 0x80017860: lhu         $a0, 0x10($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X10);
    func_8001A8E4_1B4E4(rdram, ctx);
        goto after_2;
    // 0x80017860: lhu         $a0, 0x10($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X10);
    after_2:
    // 0x80017864: sh          $v0, 0x88($sp)
    MEM_H(0X88, ctx->r29) = ctx->r2;
    // 0x80017868: jal         0x8001A8E4
    // 0x8001786C: lhu         $a0, 0x12($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X12);
    func_8001A8E4_1B4E4(rdram, ctx);
        goto after_3;
    // 0x8001786C: lhu         $a0, 0x12($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X12);
    after_3:
    // 0x80017870: lhu         $t4, 0x86($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X86);
    // 0x80017874: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
    // 0x80017878: addiu       $a1, $sp, 0xCC
    ctx->r5 = ADD32(ctx->r29, 0XCC);
    // 0x8001787C: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x80017880: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80017884: bgez        $t4, L_80017898
    if (SIGNED(ctx->r12) >= 0) {
        // 0x80017888: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80017898;
    }
    // 0x80017888: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8001788C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80017890: nop

    // 0x80017894: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_80017898:
    // 0x80017898: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8001789C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800178A0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800178A4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800178A8: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x800178AC: lui         $at, 0x4700
    ctx->r1 = S32(0X4700 << 16);
    // 0x800178B0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800178B4: lhu         $t6, 0x88($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X88);
    // 0x800178B8: lui         $a3, 0x3FAA
    ctx->r7 = S32(0X3FAA << 16);
    // 0x800178BC: ori         $a3, $a3, 0xAAAB
    ctx->r7 = ctx->r7 | 0XAAAB;
    // 0x800178C0: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x800178C4: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x800178C8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800178CC: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800178D0: div.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x800178D4: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x800178D8: nop

    // 0x800178DC: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800178E0: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x800178E4: bgez        $t6, L_800178F8
    if (SIGNED(ctx->r14) >= 0) {
        // 0x800178E8: nop
    
            goto L_800178F8;
    }
    // 0x800178E8: nop

    // 0x800178EC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800178F0: nop

    // 0x800178F4: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
L_800178F8:
    // 0x800178F8: bgez        $v0, L_80017910
    if (SIGNED(ctx->r2) >= 0) {
        // 0x800178FC: swc1        $f16, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
            goto L_80017910;
    }
    // 0x800178FC: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80017900: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80017904: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80017908: nop

    // 0x8001790C: add.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f6.fl;
L_80017910:
    // 0x80017910: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80017914: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80017918: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x8001791C: jal         0x80043250
    // 0x80017920: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    guPerspective(rdram, ctx);
        goto after_4;
    // 0x80017920: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    after_4:
    // 0x80017924: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80017928: lui         $t7, 0xBC00
    ctx->r15 = S32(0XBC00 << 16);
    // 0x8001792C: ori         $t7, $t7, 0xE
    ctx->r15 = ctx->r15 | 0XE;
    // 0x80017930: addiu       $t5, $v0, 0x8
    ctx->r13 = ADD32(ctx->r2, 0X8);
    // 0x80017934: sw          $t5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r13;
    // 0x80017938: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8001793C: lhu         $t8, 0xCC($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0XCC);
    // 0x80017940: b           L_8001797C
    // 0x80017944: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
        goto L_8001797C;
    // 0x80017944: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80017948: lwc1        $f18, 0x54($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X54);
L_8001794C:
    // 0x8001794C: lw          $a1, 0x50($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X50);
    // 0x80017950: lw          $a2, 0x58($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X58);
    // 0x80017954: lw          $a3, 0x5C($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X5C);
    // 0x80017958: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x8001795C: lwc1        $f16, 0x1C($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x80017960: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80017964: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80017968: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x8001796C: lwc1        $f4, 0x20($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X20);
    // 0x80017970: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x80017974: jal         0x80042CF4
    // 0x80017978: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    guFrustum(rdram, ctx);
        goto after_5;
    // 0x80017978: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    after_5:
L_8001797C:
    // 0x8001797C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80017980: lui         $t1, 0x103
    ctx->r9 = S32(0X103 << 16);
    // 0x80017984: ori         $t1, $t1, 0x40
    ctx->r9 = ctx->r9 | 0X40;
    // 0x80017988: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8001798C: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x80017990: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x80017994: lw          $t3, 0xC8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XC8);
    // 0x80017998: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8001799C: addu        $t2, $t3, $at
    ctx->r10 = ADD32(ctx->r11, ctx->r1);
    // 0x800179A0: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
    // 0x800179A4: lw          $t4, 0x0($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X0);
    // 0x800179A8: lbu         $t6, 0x3E($t4)
    ctx->r14 = MEM_BU(ctx->r12, 0X3E);
    // 0x800179AC: andi        $t5, $t6, 0x1
    ctx->r13 = ctx->r14 & 0X1;
    // 0x800179B0: bnel        $t5, $zero, L_80017B8C
    if (ctx->r13 != 0) {
        // 0x800179B4: lw          $a0, 0xD4($sp)
        ctx->r4 = MEM_W(ctx->r29, 0XD4);
            goto L_80017B8C;
    }
    goto skip_1;
    // 0x800179B4: lw          $a0, 0xD4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XD4);
    skip_1:
    // 0x800179B8: jal         0x8001AABC
    // 0x800179BC: lhu         $a0, 0x0($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X0);
    func_8001AABC_1B6BC(rdram, ctx);
        goto after_6;
    // 0x800179BC: lhu         $a0, 0x0($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X0);
    after_6:
    // 0x800179C0: sh          $v0, 0x76($sp)
    MEM_H(0X76, ctx->r29) = ctx->r2;
    // 0x800179C4: jal         0x8001AABC
    // 0x800179C8: lhu         $a0, 0x2($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X2);
    func_8001AABC_1B6BC(rdram, ctx);
        goto after_7;
    // 0x800179C8: lhu         $a0, 0x2($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X2);
    after_7:
    // 0x800179CC: sh          $v0, 0x78($sp)
    MEM_H(0X78, ctx->r29) = ctx->r2;
    // 0x800179D0: jal         0x8001AABC
    // 0x800179D4: lhu         $a0, 0x4($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X4);
    func_8001AABC_1B6BC(rdram, ctx);
        goto after_8;
    // 0x800179D4: lhu         $a0, 0x4($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X4);
    after_8:
    // 0x800179D8: sh          $v0, 0x7A($sp)
    MEM_H(0X7A, ctx->r29) = ctx->r2;
    // 0x800179DC: jal         0x8001AABC
    // 0x800179E0: lhu         $a0, 0x6($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X6);
    func_8001AABC_1B6BC(rdram, ctx);
        goto after_9;
    // 0x800179E0: lhu         $a0, 0x6($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X6);
    after_9:
    // 0x800179E4: sh          $v0, 0x86($sp)
    MEM_H(0X86, ctx->r29) = ctx->r2;
    // 0x800179E8: jal         0x8001AABC
    // 0x800179EC: lhu         $a0, 0x8($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X8);
    func_8001AABC_1B6BC(rdram, ctx);
        goto after_10;
    // 0x800179EC: lhu         $a0, 0x8($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X8);
    after_10:
    // 0x800179F0: sh          $v0, 0x88($sp)
    MEM_H(0X88, ctx->r29) = ctx->r2;
    // 0x800179F4: jal         0x8001AABC
    // 0x800179F8: lhu         $a0, 0xA($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0XA);
    func_8001AABC_1B6BC(rdram, ctx);
        goto after_11;
    // 0x800179F8: lhu         $a0, 0xA($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0XA);
    after_11:
    // 0x800179FC: sll         $s1, $v0, 16
    ctx->r17 = S32(ctx->r2 << 16);
    // 0x80017A00: sra         $t7, $s1, 16
    ctx->r15 = S32(SIGNED(ctx->r17) >> 16);
    // 0x80017A04: or          $s1, $t7, $zero
    ctx->r17 = ctx->r15 | 0;
    // 0x80017A08: jal         0x80003E10
    // 0x80017A0C: lhu         $a0, 0xCE($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0XCE);
    func_80003E10_4A10(rdram, ctx);
        goto after_12;
    // 0x80017A0C: lhu         $a0, 0xCE($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0XCE);
    after_12:
    // 0x80017A10: swc1        $f0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f0.u32l;
    // 0x80017A14: jal         0x80003EA0
    // 0x80017A18: lhu         $a0, 0xCE($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0XCE);
    func_80003EA0_4AA0(rdram, ctx);
        goto after_13;
    // 0x80017A18: lhu         $a0, 0xCE($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0XCE);
    after_13:
    // 0x80017A1C: lh          $t8, 0x76($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X76);
    // 0x80017A20: lh          $t9, 0x78($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X78);
    // 0x80017A24: lui         $at, 0x3FA0
    ctx->r1 = S32(0X3FA0 << 16);
    // 0x80017A28: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x80017A2C: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x80017A30: mtc1        $at, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r1;
    // 0x80017A34: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80017A38: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80017A3C: lh          $t1, 0x7A($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X7A);
    // 0x80017A40: lh          $t3, 0x86($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X86);
    // 0x80017A44: lh          $t2, 0x88($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X88);
    // 0x80017A48: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80017A4C: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x80017A50: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80017A54: lui         $v0, 0x8017
    ctx->r2 = S32(0X8017 << 16);
    // 0x80017A58: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80017A5C: cvt.d.s     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f18.d = CVT_D_S(ctx->f10.fl);
    // 0x80017A60: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80017A64: mul.d       $f16, $f18, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f2.d); 
    ctx->f16.d = MUL_D(ctx->f18.d, ctx->f2.d);
    // 0x80017A68: addiu       $t0, $t0, -0x7AF4
    ctx->r8 = ADD32(ctx->r8, -0X7AF4);
    // 0x80017A6C: addiu       $v0, $v0, -0x7AF8
    ctx->r2 = ADD32(ctx->r2, -0X7AF8);
    // 0x80017A70: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x80017A74: mul.d       $f18, $f10, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f2.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f2.d);
    // 0x80017A78: lw          $a2, 0x0($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X0);
    // 0x80017A7C: addiu       $t5, $a1, 0x20
    ctx->r13 = ADD32(ctx->r5, 0X20);
    // 0x80017A80: lw          $a0, 0xC4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC4);
    // 0x80017A84: addiu       $t7, $a2, 0x10
    ctx->r15 = ADD32(ctx->r6, 0X10);
    // 0x80017A88: cvt.s.d     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f4.fl = CVT_S_D(ctx->f16.d);
    // 0x80017A8C: cvt.s.d     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f16.fl = CVT_S_D(ctx->f18.d);
    // 0x80017A90: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x80017A94: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x80017A98: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80017A9C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80017AA0: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x80017AA4: nop

    // 0x80017AA8: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80017AAC: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80017AB0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80017AB4: mul.d       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f2.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f2.d);
    // 0x80017AB8: cvt.s.d     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f18.fl = CVT_S_D(ctx->f10.d);
    // 0x80017ABC: mul.d       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f2.d);
    // 0x80017AC0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x80017AC4: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x80017AC8: nop

    // 0x80017ACC: cvt.s.w     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80017AD0: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x80017AD4: cvt.d.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.d = CVT_D_S(ctx->f16.fl);
    // 0x80017AD8: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x80017ADC: mtc1        $s1, $f10
    ctx->f10.u32l = ctx->r17;
    // 0x80017AE0: mul.d       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f2.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f2.d);
    // 0x80017AE4: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80017AE8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80017AEC: nop

    // 0x80017AF0: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x80017AF4: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x80017AF8: cvt.d.s     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f16.d = CVT_D_S(ctx->f18.fl);
    // 0x80017AFC: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x80017B00: mul.d       $f4, $f16, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f2.d);
    // 0x80017B04: lwc1        $f8, 0x7C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x80017B08: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x80017B0C: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80017B10: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x80017B14: lwc1        $f18, 0x24($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X24);
    // 0x80017B18: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    // 0x80017B1C: lwc1        $f16, 0x28($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X28);
    // 0x80017B20: swc1        $f16, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f16.u32l;
    // 0x80017B24: lwc1        $f4, 0x2C($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X2C);
    // 0x80017B28: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x80017B2C: lwc1        $f6, 0x30($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X30);
    // 0x80017B30: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    // 0x80017B34: lwc1        $f8, 0x34($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X34);
    // 0x80017B38: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    // 0x80017B3C: lwc1        $f10, 0x38($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X38);
    // 0x80017B40: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
    // 0x80017B44: lb          $t4, 0x3C($v1)
    ctx->r12 = MEM_B(ctx->r3, 0X3C);
    // 0x80017B48: sw          $t4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r12;
    // 0x80017B4C: lb          $t6, 0x3D($v1)
    ctx->r14 = MEM_B(ctx->r3, 0X3D);
    // 0x80017B50: sw          $t7, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r15;
    // 0x80017B54: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x80017B58: jal         0x800439E8
    // 0x80017B5C: sw          $t6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r14;
    guLookAtHilite(rdram, ctx);
        goto after_14;
    // 0x80017B5C: sw          $t6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r14;
    after_14:
    // 0x80017B60: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80017B64: lui         $t9, 0x101
    ctx->r25 = S32(0X101 << 16);
    // 0x80017B68: ori         $t9, $t9, 0x40
    ctx->r25 = ctx->r25 | 0X40;
    // 0x80017B6C: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80017B70: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    // 0x80017B74: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80017B78: lw          $t1, 0xC4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XC4);
    // 0x80017B7C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80017B80: addu        $t3, $t1, $at
    ctx->r11 = ADD32(ctx->r9, ctx->r1);
    // 0x80017B84: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x80017B88: lw          $a0, 0xD4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XD4);
L_80017B8C:
    // 0x80017B8C: jal         0x80043AA0
    // 0x80017B90: lw          $a1, 0xBC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XBC);
    guMtxF2L(rdram, ctx);
        goto after_15;
    // 0x80017B90: lw          $a1, 0xBC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XBC);
    after_15:
    // 0x80017B94: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80017B98: lui         $t4, 0x101
    ctx->r12 = S32(0X101 << 16);
    // 0x80017B9C: ori         $t4, $t4, 0x40
    ctx->r12 = ctx->r12 | 0X40;
    // 0x80017BA0: addiu       $t2, $v0, 0x8
    ctx->r10 = ADD32(ctx->r2, 0X8);
    // 0x80017BA4: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
    // 0x80017BA8: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x80017BAC: lw          $t6, 0xBC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XBC);
    // 0x80017BB0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80017BB4: addu        $t5, $t6, $at
    ctx->r13 = ADD32(ctx->r14, ctx->r1);
    // 0x80017BB8: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x80017BBC: jal         0x80043C28
    // 0x80017BC0: lw          $a0, 0xC0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC0);
    guMtxIdent(rdram, ctx);
        goto after_16;
    // 0x80017BC0: lw          $a0, 0xC0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC0);
    after_16:
    // 0x80017BC4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80017BC8: lui         $t8, 0x102
    ctx->r24 = S32(0X102 << 16);
    // 0x80017BCC: ori         $t8, $t8, 0x40
    ctx->r24 = ctx->r24 | 0X40;
    // 0x80017BD0: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80017BD4: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x80017BD8: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80017BDC: lw          $t9, 0xC0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC0);
    // 0x80017BE0: lui         $at, 0x1FFF
    ctx->r1 = S32(0X1FFF << 16);
    // 0x80017BE4: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80017BE8: and         $t1, $t9, $at
    ctx->r9 = ctx->r25 & ctx->r1;
    // 0x80017BEC: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x80017BF0: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x80017BF4: lw          $t3, 0x44($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X44);
    // 0x80017BF8: beql        $t3, $zero, L_80017CA4
    if (ctx->r11 == 0) {
        // 0x80017BFC: lh          $t2, 0x48($v1)
        ctx->r10 = MEM_H(ctx->r3, 0X48);
            goto L_80017CA4;
    }
    goto skip_2;
    // 0x80017BFC: lh          $t2, 0x48($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X48);
    skip_2:
    // 0x80017C00: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80017C04: lui         $t4, 0xBC00
    ctx->r12 = S32(0XBC00 << 16);
    // 0x80017C08: ori         $t4, $t4, 0x404
    ctx->r12 = ctx->r12 | 0X404;
    // 0x80017C0C: addiu       $t2, $v0, 0x8
    ctx->r10 = ADD32(ctx->r2, 0X8);
    // 0x80017C10: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
    // 0x80017C14: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x80017C18: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x80017C1C: lui         $t8, 0xBC00
    ctx->r24 = S32(0XBC00 << 16);
    // 0x80017C20: ori         $t8, $t8, 0xC04
    ctx->r24 = ctx->r24 | 0XC04;
    // 0x80017C24: lw          $t5, 0x44($t6)
    ctx->r13 = MEM_W(ctx->r14, 0X44);
    // 0x80017C28: lui         $t2, 0xBC00
    ctx->r10 = S32(0XBC00 << 16);
    // 0x80017C2C: ori         $t2, $t2, 0x1404
    ctx->r10 = ctx->r10 | 0X1404;
    // 0x80017C30: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x80017C34: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80017C38: lui         $t0, 0x1
    ctx->r8 = S32(0X1 << 16);
    // 0x80017C3C: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80017C40: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x80017C44: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80017C48: lw          $t9, 0x0($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X0);
    // 0x80017C4C: lui         $t8, 0xBC00
    ctx->r24 = S32(0XBC00 << 16);
    // 0x80017C50: ori         $t8, $t8, 0x1C04
    ctx->r24 = ctx->r24 | 0X1C04;
    // 0x80017C54: lw          $t1, 0x44($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X44);
    // 0x80017C58: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x80017C5C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80017C60: addiu       $t3, $v0, 0x8
    ctx->r11 = ADD32(ctx->r2, 0X8);
    // 0x80017C64: sw          $t3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r11;
    // 0x80017C68: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x80017C6C: lw          $t4, 0x0($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X0);
    // 0x80017C70: lw          $t6, 0x44($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X44);
    // 0x80017C74: subu        $t5, $t0, $t6
    ctx->r13 = SUB32(ctx->r8, ctx->r14);
    // 0x80017C78: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x80017C7C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80017C80: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80017C84: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x80017C88: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80017C8C: lw          $t9, 0x0($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X0);
    // 0x80017C90: lw          $t1, 0x44($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X44);
    // 0x80017C94: subu        $t3, $t0, $t1
    ctx->r11 = SUB32(ctx->r8, ctx->r9);
    // 0x80017C98: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x80017C9C: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x80017CA0: lh          $t2, 0x48($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X48);
L_80017CA4:
    // 0x80017CA4: lh          $t4, 0x4A($v1)
    ctx->r12 = MEM_H(ctx->r3, 0X4A);
    // 0x80017CA8: lh          $t5, 0x4C($v1)
    ctx->r13 = MEM_H(ctx->r3, 0X4C);
    // 0x80017CAC: lh          $t8, 0x4E($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X4E);
    // 0x80017CB0: or          $t6, $t2, $t4
    ctx->r14 = ctx->r10 | ctx->r12;
    // 0x80017CB4: or          $t7, $t6, $t5
    ctx->r15 = ctx->r14 | ctx->r13;
    // 0x80017CB8: or          $t9, $t7, $t8
    ctx->r25 = ctx->r15 | ctx->r24;
    // 0x80017CBC: beql        $t9, $zero, L_80017D78
    if (ctx->r25 == 0) {
        // 0x80017CC0: lw          $ra, 0x64($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X64);
            goto L_80017D78;
    }
    goto skip_3;
    // 0x80017CC0: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    skip_3:
    // 0x80017CC4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80017CC8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80017CCC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80017CD0: addiu       $t1, $v0, 0x8
    ctx->r9 = ADD32(ctx->r2, 0X8);
    // 0x80017CD4: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    // 0x80017CD8: lh          $t3, 0x48($v1)
    ctx->r11 = MEM_H(ctx->r3, 0X48);
    // 0x80017CDC: lh          $t8, 0x4A($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X4A);
    // 0x80017CE0: lui         $at, 0xED00
    ctx->r1 = S32(0XED00 << 16);
    // 0x80017CE4: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x80017CE8: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x80017CEC: cvt.s.w     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80017CF0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80017CF4: mul.s       $f4, $f16, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80017CF8: nop

    // 0x80017CFC: mul.s       $f18, $f10, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x80017D00: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80017D04: trunc.w.s   $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x80017D08: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x80017D0C: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
    // 0x80017D10: andi        $t6, $t4, 0xFFF
    ctx->r14 = ctx->r12 & 0XFFF;
    // 0x80017D14: sll         $t5, $t6, 12
    ctx->r13 = S32(ctx->r14 << 12);
    // 0x80017D18: or          $t7, $t5, $at
    ctx->r15 = ctx->r13 | ctx->r1;
    // 0x80017D1C: andi        $t3, $t1, 0xFFF
    ctx->r11 = ctx->r9 & 0XFFF;
    // 0x80017D20: or          $t2, $t7, $t3
    ctx->r10 = ctx->r15 | ctx->r11;
    // 0x80017D24: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x80017D28: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x80017D2C: lh          $t4, 0x4C($v1)
    ctx->r12 = MEM_H(ctx->r3, 0X4C);
    // 0x80017D30: lh          $t1, 0x4E($v1)
    ctx->r9 = MEM_H(ctx->r3, 0X4E);
    // 0x80017D34: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x80017D38: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x80017D3C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80017D40: cvt.s.w     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80017D44: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80017D48: nop

    // 0x80017D4C: mul.s       $f4, $f16, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80017D50: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80017D54: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80017D58: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x80017D5C: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x80017D60: andi        $t8, $t5, 0xFFF
    ctx->r24 = ctx->r13 & 0XFFF;
    // 0x80017D64: sll         $t9, $t8, 12
    ctx->r25 = S32(ctx->r24 << 12);
    // 0x80017D68: andi        $t2, $t3, 0xFFF
    ctx->r10 = ctx->r11 & 0XFFF;
    // 0x80017D6C: or          $t4, $t9, $t2
    ctx->r12 = ctx->r25 | ctx->r10;
    // 0x80017D70: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x80017D74: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
L_80017D78:
    // 0x80017D78: lw          $s0, 0x58($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X58);
    // 0x80017D7C: lw          $s1, 0x5C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X5C);
    // 0x80017D80: lw          $s2, 0x60($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X60);
    // 0x80017D84: jr          $ra
    // 0x80017D88: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    TRACE_RETURN()
    return;
    // 0x80017D88: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void func_8003B938_3C538(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003B938: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003B93C: addiu       $v1, $v1, 0x1728
    ctx->r3 = ADD32(ctx->r3, 0X1728);
    // 0x8003B940: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003B944: lbu         $t6, 0x6($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X6);
    // 0x8003B948: ori         $t7, $t6, 0x1
    ctx->r15 = ctx->r14 | 0X1;
    // 0x8003B94C: sb          $t7, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r15;
    // 0x8003B950: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003B954: lbu         $t8, 0x47($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X47);
    // 0x8003B958: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x8003B95C: sb          $t9, 0x47($v0)
    MEM_B(0X47, ctx->r2) = ctx->r25;
    // 0x8003B960: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003B964: lbu         $t0, 0x47($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X47);
    // 0x8003B968: beql        $t0, $zero, L_8003B9A8
    if (ctx->r8 == 0) {
        // 0x8003B96C: lbu         $t2, 0x46($v0)
        ctx->r10 = MEM_BU(ctx->r2, 0X46);
            goto L_8003B9A8;
    }
    goto skip_0;
    // 0x8003B96C: lbu         $t2, 0x46($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X46);
    skip_0:
    // 0x8003B970: lhu         $v1, 0x3A($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X3A);
    // 0x8003B974: lh          $t1, 0x44($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X44);
    // 0x8003B978: ori         $at, $zero, 0xFF01
    ctx->r1 = 0 | 0XFF01;
    // 0x8003B97C: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
    // 0x8003B980: bgez        $v1, L_8003B990
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8003B984: slt         $at, $v1, $at
        ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r1) ? 1 : 0;
            goto L_8003B990;
    }
    // 0x8003B984: slt         $at, $v1, $at
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x8003B988: b           L_8003B99C
    // 0x8003B98C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_8003B99C;
    // 0x8003B98C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8003B990:
    // 0x8003B990: bne         $at, $zero, L_8003B99C
    if (ctx->r1 != 0) {
        // 0x8003B994: nop
    
            goto L_8003B99C;
    }
    // 0x8003B994: nop

    // 0x8003B998: ori         $v1, $zero, 0xFF00
    ctx->r3 = 0 | 0XFF00;
L_8003B99C:
    // 0x8003B99C: jr          $ra
    // 0x8003B9A0: sh          $v1, 0x3A($v0)
    MEM_H(0X3A, ctx->r2) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x8003B9A0: sh          $v1, 0x3A($v0)
    MEM_H(0X3A, ctx->r2) = ctx->r3;
    // 0x8003B9A4: lbu         $t2, 0x46($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X46);
L_8003B9A8:
    // 0x8003B9A8: sll         $t3, $t2, 8
    ctx->r11 = S32(ctx->r10 << 8);
    // 0x8003B9AC: sh          $t3, 0x3A($v0)
    MEM_H(0X3A, ctx->r2) = ctx->r11;
    // 0x8003B9B0: jr          $ra
    // 0x8003B9B4: nop

    TRACE_RETURN()
    return;
    // 0x8003B9B4: nop

;}
RECOMP_FUNC void func_80014698_15298(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80014698: ori         $at, $zero, 0x8770
    ctx->r1 = 0 | 0X8770;
    // 0x8001469C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800146A0: sltu        $at, $a0, $at
    ctx->r1 = ctx->r4 < ctx->r1 ? 1 : 0;
    // 0x800146A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800146A8: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x800146AC: bne         $at, $zero, L_800146C8
    if (ctx->r1 != 0) {
        // 0x800146B0: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_800146C8;
    }
    // 0x800146B0: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x800146B4: beq         $a1, $zero, L_800146C0
    if (ctx->r5 == 0) {
        // 0x800146B8: nop
    
            goto L_800146C0;
    }
    // 0x800146B8: nop

    // 0x800146BC: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
L_800146C0:
    // 0x800146C0: b           L_8001480C
    // 0x800146C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8001480C;
    // 0x800146C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800146C8:
    // 0x800146C8: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x800146CC: sltu        $at, $a2, $at
    ctx->r1 = ctx->r6 < ctx->r1 ? 1 : 0;
    // 0x800146D0: bne         $at, $zero, L_800147D0
    if (ctx->r1 != 0) {
        // 0x800146D4: lw          $t8, 0x3C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X3C);
            goto L_800147D0;
    }
    // 0x800146D4: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800146D8: lui         $a3, 0x8006
    ctx->r7 = S32(0X8006 << 16);
    // 0x800146DC: addiu       $a3, $a3, 0x3940
    ctx->r7 = ADD32(ctx->r7, 0X3940);
    // 0x800146E0: lhu         $t7, 0x0($a3)
    ctx->r15 = MEM_HU(ctx->r7, 0X0);
    // 0x800146E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800146E8: lui         $t8, 0x8006
    ctx->r24 = S32(0X8006 << 16);
    // 0x800146EC: beql        $t7, $zero, L_8001472C
    if (ctx->r15 == 0) {
        // 0x800146F0: addiu       $a1, $a1, -0x2
        ctx->r5 = ADD32(ctx->r5, -0X2);
            goto L_8001472C;
    }
    goto skip_0;
    // 0x800146F0: addiu       $a1, $a1, -0x2
    ctx->r5 = ADD32(ctx->r5, -0X2);
    skip_0:
    // 0x800146F4: lhu         $t8, 0x3940($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X3940);
    // 0x800146F8: sll         $t9, $zero, 1
    ctx->r25 = S32(0 << 1);
    // 0x800146FC: addu        $v1, $a3, $t9
    ctx->r3 = ADD32(ctx->r7, ctx->r25);
    // 0x80014700: sltu        $at, $a2, $t8
    ctx->r1 = ctx->r6 < ctx->r24 ? 1 : 0;
    // 0x80014704: bnel        $at, $zero, L_8001472C
    if (ctx->r1 != 0) {
        // 0x80014708: addiu       $a1, $a1, -0x2
        ctx->r5 = ADD32(ctx->r5, -0X2);
            goto L_8001472C;
    }
    goto skip_1;
    // 0x80014708: addiu       $a1, $a1, -0x2
    ctx->r5 = ADD32(ctx->r5, -0X2);
    skip_1:
    // 0x8001470C: lhu         $v0, 0x4($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X4);
L_80014710:
    // 0x80014710: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x80014714: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80014718: beq         $v0, $zero, L_80014728
    if (ctx->r2 == 0) {
        // 0x8001471C: sltu        $at, $a2, $v0
        ctx->r1 = ctx->r6 < ctx->r2 ? 1 : 0;
            goto L_80014728;
    }
    // 0x8001471C: sltu        $at, $a2, $v0
    ctx->r1 = ctx->r6 < ctx->r2 ? 1 : 0;
    // 0x80014720: beql        $at, $zero, L_80014710
    if (ctx->r1 == 0) {
        // 0x80014724: lhu         $v0, 0x4($v1)
        ctx->r2 = MEM_HU(ctx->r3, 0X4);
            goto L_80014710;
    }
    goto skip_2;
    // 0x80014724: lhu         $v0, 0x4($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X4);
    skip_2:
L_80014728:
    // 0x80014728: addiu       $a1, $a1, -0x2
    ctx->r5 = ADD32(ctx->r5, -0X2);
L_8001472C:
    // 0x8001472C: sll         $t1, $a1, 1
    ctx->r9 = S32(ctx->r5 << 1);
    // 0x80014730: addu        $v1, $a3, $t1
    ctx->r3 = ADD32(ctx->r7, ctx->r9);
    // 0x80014734: lhu         $a0, 0x2($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X2);
    // 0x80014738: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x8001473C: jal         0x80001D68
    // 0x80014740: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    func_80001D68_2968(rdram, ctx);
        goto after_0;
    // 0x80014740: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    after_0:
    // 0x80014744: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80014748: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x8001474C: jal         0x80001D94
    // 0x80014750: lhu         $a0, 0x2($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X2);
    func_80001D94_2994(rdram, ctx);
        goto after_1;
    // 0x80014750: lhu         $a0, 0x2($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X2);
    after_1:
    // 0x80014754: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x80014758: lui         $at, 0xFFFE
    ctx->r1 = S32(0XFFFE << 16);
    // 0x8001475C: lui         $t4, 0x8006
    ctx->r12 = S32(0X8006 << 16);
    // 0x80014760: sll         $t2, $a2, 2
    ctx->r10 = S32(ctx->r6 << 2);
    // 0x80014764: addu        $t3, $t2, $at
    ctx->r11 = ADD32(ctx->r10, ctx->r1);
    // 0x80014768: addiu       $t4, $t4, 0x39D4
    ctx->r12 = ADD32(ctx->r12, 0X39D4);
    // 0x8001476C: addu        $a0, $t3, $t4
    ctx->r4 = ADD32(ctx->r11, ctx->r12);
    // 0x80014770: lw          $a1, 0x0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X0);
    // 0x80014774: lw          $a3, 0x4($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X4);
    // 0x80014778: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x8001477C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80014780: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80014784: and         $t5, $a1, $at
    ctx->r13 = ctx->r5 & ctx->r1;
    // 0x80014788: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8001478C: beq         $a3, $zero, L_800147B4
    if (ctx->r7 == 0) {
        // 0x80014790: addu        $t0, $t5, $t6
        ctx->r8 = ADD32(ctx->r13, ctx->r14);
            goto L_800147B4;
    }
    // 0x80014790: addu        $t0, $t5, $t6
    ctx->r8 = ADD32(ctx->r13, ctx->r14);
    // 0x80014794: lhu         $a0, 0x4($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X4);
    // 0x80014798: addiu       $t7, $a2, 0x1
    ctx->r15 = ADD32(ctx->r6, 0X1);
    // 0x8001479C: beq         $a0, $zero, L_800147AC
    if (ctx->r4 == 0) {
        // 0x800147A0: sltu        $at, $t7, $a0
        ctx->r1 = ctx->r15 < ctx->r4 ? 1 : 0;
            goto L_800147AC;
    }
    // 0x800147A0: sltu        $at, $t7, $a0
    ctx->r1 = ctx->r15 < ctx->r4 ? 1 : 0;
    // 0x800147A4: beql        $at, $zero, L_800147B8
    if (ctx->r1 == 0) {
        // 0x800147A8: subu        $v1, $v0, $t0
        ctx->r3 = SUB32(ctx->r2, ctx->r8);
            goto L_800147B8;
    }
    goto skip_3;
    // 0x800147A8: subu        $v1, $v0, $t0
    ctx->r3 = SUB32(ctx->r2, ctx->r8);
    skip_3:
L_800147AC:
    // 0x800147AC: b           L_800147B8
    // 0x800147B0: subu        $v1, $a3, $a1
    ctx->r3 = SUB32(ctx->r7, ctx->r5);
        goto L_800147B8;
    // 0x800147B0: subu        $v1, $a3, $a1
    ctx->r3 = SUB32(ctx->r7, ctx->r5);
L_800147B4:
    // 0x800147B4: subu        $v1, $v0, $t0
    ctx->r3 = SUB32(ctx->r2, ctx->r8);
L_800147B8:
    // 0x800147B8: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x800147BC: beq         $v0, $zero, L_800147C8
    if (ctx->r2 == 0) {
        // 0x800147C0: nop
    
            goto L_800147C8;
    }
    // 0x800147C0: nop

    // 0x800147C4: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
L_800147C8:
    // 0x800147C8: b           L_8001480C
    // 0x800147CC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_8001480C;
    // 0x800147CC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_800147D0:
    // 0x800147D0: beq         $t8, $zero, L_800147EC
    if (ctx->r24 == 0) {
        // 0x800147D4: andi        $a0, $a2, 0xFFFF
        ctx->r4 = ctx->r6 & 0XFFFF;
            goto L_800147EC;
    }
    // 0x800147D4: andi        $a0, $a2, 0xFFFF
    ctx->r4 = ctx->r6 & 0XFFFF;
    // 0x800147D8: jal         0x80001D68
    // 0x800147DC: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    func_80001D68_2968(rdram, ctx);
        goto after_2;
    // 0x800147DC: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    after_2:
    // 0x800147E0: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800147E4: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x800147E8: sw          $v0, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r2;
L_800147EC:
    // 0x800147EC: andi        $a0, $a2, 0xFFFF
    ctx->r4 = ctx->r6 & 0XFFFF;
    // 0x800147F0: jal         0x80001D94
    // 0x800147F4: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_80001D94_2994(rdram, ctx);
        goto after_3;
    // 0x800147F4: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_3:
    // 0x800147F8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800147FC: jal         0x80001D68
    // 0x80014800: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    func_80001D68_2968(rdram, ctx);
        goto after_4;
    // 0x80014800: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_4:
    // 0x80014804: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80014808: subu        $v0, $t1, $v0
    ctx->r2 = SUB32(ctx->r9, ctx->r2);
L_8001480C:
    // 0x8001480C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80014810: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80014814: jr          $ra
    // 0x80014818: nop

    TRACE_RETURN()
    return;
    // 0x80014818: nop

;}
RECOMP_FUNC void func_8000A344_AF44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000A344: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8000A348: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8000A34C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8000A350: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8000A354: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x8000A358: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8000A35C: addiu       $s0, $s0, -0x7CD8
    ctx->r16 = ADD32(ctx->r16, -0X7CD8);
    // 0x8000A360: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8000A364: addiu       $s2, $zero, 0x2
    ctx->r18 = ADD32(0, 0X2);
L_8000A368:
    // 0x8000A368: jal         0x8000A394
    // 0x8000A36C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8000A394_AF94(rdram, ctx);
        goto after_0;
    // 0x8000A36C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8000A370: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8000A374: bne         $s1, $s2, L_8000A368
    if (ctx->r17 != ctx->r18) {
        // 0x8000A378: addiu       $s0, $s0, 0x250
        ctx->r16 = ADD32(ctx->r16, 0X250);
            goto L_8000A368;
    }
    // 0x8000A378: addiu       $s0, $s0, 0x250
    ctx->r16 = ADD32(ctx->r16, 0X250);
    // 0x8000A37C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8000A380: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8000A384: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8000A388: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8000A38C: jr          $ra
    // 0x8000A390: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8000A390: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8003BB00_3C700(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003BB00: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003BB04: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003BB08: addiu       $a0, $a0, 0x172C
    ctx->r4 = ADD32(ctx->r4, 0X172C);
    // 0x8003BB0C: addiu       $v1, $v1, 0x1728
    ctx->r3 = ADD32(ctx->r3, 0X1728);
    // 0x8003BB10: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8003BB14: lui         $t1, 0x8007
    ctx->r9 = S32(0X8007 << 16);
    // 0x8003BB18: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x8003BB1C: lbu         $t8, 0x0($t6)
    ctx->r24 = MEM_BU(ctx->r14, 0X0);
    // 0x8003BB20: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x8003BB24: negu        $t0, $t9
    ctx->r8 = SUB32(0, ctx->r25);
    // 0x8003BB28: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8003BB2C: lhu         $t1, -0x1706($t1)
    ctx->r9 = MEM_HU(ctx->r9, -0X1706);
    // 0x8003BB30: sh          $t1, 0x56($t2)
    MEM_H(0X56, ctx->r10) = ctx->r9;
    // 0x8003BB34: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x8003BB38: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003BB3C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8003BB40: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x8003BB44: lbu         $t5, 0x22($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X22);
    // 0x8003BB48: bne         $t5, $zero, L_8003BB68
    if (ctx->r13 != 0) {
        // 0x8003BB4C: nop
    
            goto L_8003BB68;
    }
    // 0x8003BB4C: nop

    // 0x8003BB50: lbu         $t6, 0x49($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X49);
    // 0x8003BB54: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8003BB58: bne         $t6, $at, L_8003BB68
    if (ctx->r14 != ctx->r1) {
        // 0x8003BB5C: nop
    
            goto L_8003BB68;
    }
    // 0x8003BB5C: nop

    // 0x8003BB60: lhu         $t7, 0x56($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X56);
    // 0x8003BB64: sh          $t7, 0x4C($v0)
    MEM_H(0X4C, ctx->r2) = ctx->r15;
L_8003BB68:
    // 0x8003BB68: jr          $ra
    // 0x8003BB6C: nop

    TRACE_RETURN()
    return;
    // 0x8003BB6C: nop

;}
RECOMP_FUNC void func_80003F30_4B30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80003F30: andi        $t8, $a0, 0x3FF
    ctx->r24 = ctx->r4 & 0X3FF;
    // 0x80003F34: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x80003F38: andi        $t0, $t9, 0xFFFF
    ctx->r8 = ctx->r25 & 0XFFFF;
    // 0x80003F3C: slti        $at, $t0, 0x200
    ctx->r1 = SIGNED(ctx->r8) < 0X200 ? 1 : 0;
    // 0x80003F40: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80003F44: beq         $at, $zero, L_80003F84
    if (ctx->r1 == 0) {
        // 0x80003F48: or          $v0, $t0, $zero
        ctx->r2 = ctx->r8 | 0;
            goto L_80003F84;
    }
    // 0x80003F48: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x80003F4C: addiu       $a0, $t0, 0x1
    ctx->r4 = ADD32(ctx->r8, 0X1);
    // 0x80003F50: andi        $t1, $a0, 0xFFFF
    ctx->r9 = ctx->r4 & 0XFFFF;
    // 0x80003F54: lui         $v1, 0x8006
    ctx->r3 = S32(0X8006 << 16);
    // 0x80003F58: addiu       $v1, $v1, -0x76B0
    ctx->r3 = ADD32(ctx->r3, -0X76B0);
    // 0x80003F5C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80003F60: addu        $t3, $v1, $t2
    ctx->r11 = ADD32(ctx->r3, ctx->r10);
    // 0x80003F64: lwc1        $f4, 0x0($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X0);
    // 0x80003F68: addiu       $a0, $t1, -0x1
    ctx->r4 = ADD32(ctx->r9, -0X1);
    // 0x80003F6C: andi        $t4, $a0, 0xFFFF
    ctx->r12 = ctx->r4 & 0XFFFF;
    // 0x80003F70: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80003F74: addu        $t6, $v1, $t5
    ctx->r14 = ADD32(ctx->r3, ctx->r13);
    // 0x80003F78: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x80003F7C: jr          $ra
    // 0x80003F80: lwc1        $f0, 0x0($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X0);
    TRACE_RETURN()
    return;
    // 0x80003F80: lwc1        $f0, 0x0($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X0);
L_80003F84:
    // 0x80003F84: slti        $at, $v0, 0x400
    ctx->r1 = SIGNED(ctx->r2) < 0X400 ? 1 : 0;
    // 0x80003F88: beq         $at, $zero, L_80003FCC
    if (ctx->r1 == 0) {
        // 0x80003F8C: addiu       $t7, $zero, 0x401
        ctx->r15 = ADD32(0, 0X401);
            goto L_80003FCC;
    }
    // 0x80003F8C: addiu       $t7, $zero, 0x401
    ctx->r15 = ADD32(0, 0X401);
    // 0x80003F90: subu        $a0, $t7, $v0
    ctx->r4 = SUB32(ctx->r15, ctx->r2);
    // 0x80003F94: andi        $t8, $a0, 0xFFFF
    ctx->r24 = ctx->r4 & 0XFFFF;
    // 0x80003F98: lui         $v1, 0x8006
    ctx->r3 = S32(0X8006 << 16);
    // 0x80003F9C: addiu       $v1, $v1, -0x76B0
    ctx->r3 = ADD32(ctx->r3, -0X76B0);
    // 0x80003FA0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80003FA4: addu        $t0, $v1, $t9
    ctx->r8 = ADD32(ctx->r3, ctx->r25);
    // 0x80003FA8: lwc1        $f6, 0x0($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80003FAC: addiu       $a0, $t8, -0x1
    ctx->r4 = ADD32(ctx->r24, -0X1);
    // 0x80003FB0: andi        $t1, $a0, 0xFFFF
    ctx->r9 = ctx->r4 & 0XFFFF;
    // 0x80003FB4: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x80003FB8: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80003FBC: addu        $t3, $v1, $t2
    ctx->r11 = ADD32(ctx->r3, ctx->r10);
    // 0x80003FC0: swc1        $f8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f8.u32l;
    // 0x80003FC4: jr          $ra
    // 0x80003FC8: lwc1        $f0, 0x0($t3)
    ctx->f0.u32l = MEM_W(ctx->r11, 0X0);
    TRACE_RETURN()
    return;
    // 0x80003FC8: lwc1        $f0, 0x0($t3)
    ctx->f0.u32l = MEM_W(ctx->r11, 0X0);
L_80003FCC:
    // 0x80003FCC: slti        $at, $v0, 0x600
    ctx->r1 = SIGNED(ctx->r2) < 0X600 ? 1 : 0;
    // 0x80003FD0: beq         $at, $zero, L_80004014
    if (ctx->r1 == 0) {
        // 0x80003FD4: addiu       $a0, $v0, -0x3FF
        ctx->r4 = ADD32(ctx->r2, -0X3FF);
            goto L_80004014;
    }
    // 0x80003FD4: addiu       $a0, $v0, -0x3FF
    ctx->r4 = ADD32(ctx->r2, -0X3FF);
    // 0x80003FD8: andi        $t4, $a0, 0xFFFF
    ctx->r12 = ctx->r4 & 0XFFFF;
    // 0x80003FDC: lui         $v1, 0x8006
    ctx->r3 = S32(0X8006 << 16);
    // 0x80003FE0: addiu       $v1, $v1, -0x76B0
    ctx->r3 = ADD32(ctx->r3, -0X76B0);
    // 0x80003FE4: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80003FE8: addu        $t6, $v1, $t5
    ctx->r14 = ADD32(ctx->r3, ctx->r13);
    // 0x80003FEC: lwc1        $f10, 0x0($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X0);
    // 0x80003FF0: addiu       $a0, $t4, -0x1
    ctx->r4 = ADD32(ctx->r12, -0X1);
    // 0x80003FF4: andi        $t7, $a0, 0xFFFF
    ctx->r15 = ctx->r4 & 0XFFFF;
    // 0x80003FF8: neg.s       $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = -ctx->f10.fl;
    // 0x80003FFC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80004000: addu        $t9, $v1, $t8
    ctx->r25 = ADD32(ctx->r3, ctx->r24);
    // 0x80004004: swc1        $f16, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f16.u32l;
    // 0x80004008: lwc1        $f0, 0x0($t9)
    ctx->f0.u32l = MEM_W(ctx->r25, 0X0);
    // 0x8000400C: jr          $ra
    // 0x80004010: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    TRACE_RETURN()
    return;
    // 0x80004010: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_80004014:
    // 0x80004014: addiu       $t0, $zero, 0x801
    ctx->r8 = ADD32(0, 0X801);
    // 0x80004018: subu        $a0, $t0, $v0
    ctx->r4 = SUB32(ctx->r8, ctx->r2);
    // 0x8000401C: lui         $v1, 0x8006
    ctx->r3 = S32(0X8006 << 16);
    // 0x80004020: andi        $t1, $a0, 0xFFFF
    ctx->r9 = ctx->r4 & 0XFFFF;
    // 0x80004024: addiu       $v1, $v1, -0x76B0
    ctx->r3 = ADD32(ctx->r3, -0X76B0);
    // 0x80004028: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8000402C: addu        $t3, $v1, $t2
    ctx->r11 = ADD32(ctx->r3, ctx->r10);
    // 0x80004030: lwc1        $f18, 0x0($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X0);
    // 0x80004034: addiu       $a0, $t1, -0x1
    ctx->r4 = ADD32(ctx->r9, -0X1);
    // 0x80004038: andi        $t4, $a0, 0xFFFF
    ctx->r12 = ctx->r4 & 0XFFFF;
    // 0x8000403C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80004040: addu        $t6, $v1, $t5
    ctx->r14 = ADD32(ctx->r3, ctx->r13);
    // 0x80004044: swc1        $f18, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f18.u32l;
    // 0x80004048: lwc1        $f0, 0x0($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X0);
    // 0x8000404C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80004050: jr          $ra
    // 0x80004054: nop

    TRACE_RETURN()
    return;
    // 0x80004054: nop

;}
RECOMP_FUNC void func_80034B58_35758(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80034B58: lui         $v0, 0x8007
    ctx->r2 = S32(0X8007 << 16);
    // 0x80034B5C: addiu       $v0, $v0, -0x2CD8
    ctx->r2 = ADD32(ctx->r2, -0X2CD8);
    // 0x80034B60: lw          $t0, 0x8($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X8);
    // 0x80034B64: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80034B68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80034B6C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80034B70: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80034B74: beq         $t0, $zero, L_80034C38
    if (ctx->r8 == 0) {
        // 0x80034B78: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_80034C38;
    }
    // 0x80034B78: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80034B7C: lhu         $t6, 0xC($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0XC);
    // 0x80034B80: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80034B84: sh          $t7, 0xC($v0)
    MEM_H(0XC, ctx->r2) = ctx->r15;
    // 0x80034B88: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80034B8C: beq         $v1, $zero, L_80034B9C
    if (ctx->r3 == 0) {
        // 0x80034B90: or          $a2, $v1, $zero
        ctx->r6 = ctx->r3 | 0;
            goto L_80034B9C;
    }
    // 0x80034B90: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
    // 0x80034B94: b           L_80034BA0
    // 0x80034B98: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
        goto L_80034BA0;
    // 0x80034B98: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
L_80034B9C:
    // 0x80034B9C: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
L_80034BA0:
    // 0x80034BA0: sw          $t0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r8;
    // 0x80034BA4: lw          $t8, 0x8($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X8);
    // 0x80034BA8: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x80034BAC: sw          $t9, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r25;
    // 0x80034BB0: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x80034BB4: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x80034BB8: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x80034BBC: jal         0x80034A10
    // 0x80034BC0: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_80034A10_35610(rdram, ctx);
        goto after_0;
    // 0x80034BC0: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x80034BC4: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x80034BC8: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x80034BCC: lhu         $a0, 0x2A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X2A);
    // 0x80034BD0: lw          $t1, 0x0($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X0);
    // 0x80034BD4: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80034BD8: sw          $a2, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r6;
    // 0x80034BDC: lw          $t2, 0x0($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X0);
    // 0x80034BE0: sw          $a3, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r7;
    // 0x80034BE4: lw          $t3, 0x0($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X0);
    // 0x80034BE8: sw          $t3, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r11;
    // 0x80034BEC: lhu         $t4, 0x20($a3)
    ctx->r12 = MEM_HU(ctx->r7, 0X20);
    // 0x80034BF0: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
    // 0x80034BF4: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80034BF8: sh          $t5, 0x20($t6)
    MEM_H(0X20, ctx->r14) = ctx->r13;
    // 0x80034BFC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80034C00: lw          $t8, 0x0($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X0);
    // 0x80034C04: sw          $t7, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->r15;
    // 0x80034C08: lw          $t9, 0x0($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X0);
    // 0x80034C0C: jal         0x800141C4
    // 0x80034C10: sh          $a0, 0x28($t9)
    MEM_H(0X28, ctx->r25) = ctx->r4;
    func_800141C4_14DC4(rdram, ctx);
        goto after_1;
    // 0x80034C10: sh          $a0, 0x28($t9)
    MEM_H(0X28, ctx->r25) = ctx->r4;
    after_1:
    // 0x80034C14: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x80034C18: lui         $t2, 0x8007
    ctx->r10 = S32(0X8007 << 16);
    // 0x80034C1C: lw          $t1, 0x0($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X0);
    // 0x80034C20: sw          $v0, 0x2C($t1)
    MEM_W(0X2C, ctx->r9) = ctx->r2;
    // 0x80034C24: lhu         $t2, -0x2CDC($t2)
    ctx->r10 = MEM_HU(ctx->r10, -0X2CDC);
    // 0x80034C28: lw          $t3, 0x0($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X0);
    // 0x80034C2C: sh          $t2, 0x22($t3)
    MEM_H(0X22, ctx->r11) = ctx->r10;
    // 0x80034C30: b           L_80034C3C
    // 0x80034C34: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
        goto L_80034C3C;
    // 0x80034C34: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
L_80034C38:
    // 0x80034C38: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80034C3C:
    // 0x80034C3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80034C40: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80034C44: jr          $ra
    // 0x80034C48: nop

    TRACE_RETURN()
    return;
    // 0x80034C48: nop

;}
RECOMP_FUNC void func_80025398_25F98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80025398: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x8002539C: lui         $t7, 0x8007
    ctx->r15 = S32(0X8007 << 16);
    // 0x800253A0: addiu       $t7, $t7, -0x2DE0
    ctx->r15 = ADD32(ctx->r15, -0X2DE0);
    // 0x800253A4: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x800253A8: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x800253AC: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x800253B0: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
    // 0x800253B4: sw          $t7, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r15;
    // 0x800253B8: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x800253BC: lui         $t8, 0xFA00
    ctx->r24 = S32(0XFA00 << 16);
    // 0x800253C0: sw          $t8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r24;
    // 0x800253C4: lbu         $t6, 0x24($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X24);
    // 0x800253C8: lbu         $t9, 0x25($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X25);
    // 0x800253CC: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x800253D0: sll         $t7, $t6, 24
    ctx->r15 = S32(ctx->r14 << 24);
    // 0x800253D4: sll         $t6, $t9, 16
    ctx->r14 = S32(ctx->r25 << 16);
    // 0x800253D8: or          $t8, $t7, $t6
    ctx->r24 = ctx->r15 | ctx->r14;
    // 0x800253DC: lbu         $t7, 0x26($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X26);
    // 0x800253E0: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
    // 0x800253E4: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x800253E8: sll         $t6, $t7, 8
    ctx->r14 = S32(ctx->r15 << 8);
    // 0x800253EC: or          $t9, $t8, $t6
    ctx->r25 = ctx->r24 | ctx->r14;
    // 0x800253F0: lbu         $t8, 0x27($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X27);
    // 0x800253F4: lui         $t7, 0xB900
    ctx->r15 = S32(0XB900 << 16);
    // 0x800253F8: ori         $t7, $t7, 0x31D
    ctx->r15 = ctx->r15 | 0X31D;
    // 0x800253FC: or          $t6, $t9, $t8
    ctx->r14 = ctx->r25 | ctx->r24;
    // 0x80025400: sw          $t6, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r14;
    // 0x80025404: lui         $t9, 0xC18
    ctx->r25 = S32(0XC18 << 16);
    // 0x80025408: ori         $t9, $t9, 0x45D8
    ctx->r25 = ctx->r25 | 0X45D8;
    // 0x8002540C: lui         $a2, 0xFD10
    ctx->r6 = S32(0XFD10 << 16);
    // 0x80025410: sw          $t9, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r25;
    // 0x80025414: sw          $t7, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r15;
    // 0x80025418: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8002541C: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x80025420: lw          $t8, 0x28($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X28);
    // 0x80025424: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80025428: or          $t4, $v0, $zero
    ctx->r12 = ctx->r2 | 0;
    // 0x8002542C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80025430: lui         $a3, 0x701
    ctx->r7 = S32(0X701 << 16);
    // 0x80025434: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x80025438: ori         $a3, $a3, 0x4050
    ctx->r7 = ctx->r7 | 0X4050;
    // 0x8002543C: or          $t5, $v0, $zero
    ctx->r13 = ctx->r2 | 0;
    // 0x80025440: lui         $t6, 0xF510
    ctx->r14 = S32(0XF510 << 16);
    // 0x80025444: sw          $t6, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r14;
    // 0x80025448: sw          $a3, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r7;
    // 0x8002544C: lui         $t0, 0xE600
    ctx->r8 = S32(0XE600 << 16);
    // 0x80025450: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80025454: sw          $t0, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r8;
    // 0x80025458: sw          $zero, 0x4($t5)
    MEM_W(0X4, ctx->r13) = 0;
    // 0x8002545C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80025460: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80025464: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80025468: lui         $t2, 0x73F
    ctx->r10 = S32(0X73F << 16);
    // 0x8002546C: ori         $t2, $t2, 0xF100
    ctx->r10 = ctx->r10 | 0XF100;
    // 0x80025470: lui         $t1, 0xF300
    ctx->r9 = S32(0XF300 << 16);
    // 0x80025474: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80025478: sw          $t1, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r9;
    // 0x8002547C: sw          $t2, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r10;
    // 0x80025480: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80025484: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80025488: lui         $t3, 0xE700
    ctx->r11 = S32(0XE700 << 16);
    // 0x8002548C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80025490: sw          $t3, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r11;
    // 0x80025494: sw          $zero, 0x4($t9)
    MEM_W(0X4, ctx->r25) = 0;
    // 0x80025498: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x8002549C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800254A0: lui         $t7, 0x1
    ctx->r15 = S32(0X1 << 16);
    // 0x800254A4: lui         $t8, 0xF510
    ctx->r24 = S32(0XF510 << 16);
    // 0x800254A8: ori         $t8, $t8, 0x1000
    ctx->r24 = ctx->r24 | 0X1000;
    // 0x800254AC: ori         $t7, $t7, 0x4050
    ctx->r15 = ctx->r15 | 0X4050;
    // 0x800254B0: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x800254B4: or          $t4, $v0, $zero
    ctx->r12 = ctx->r2 | 0;
    // 0x800254B8: lui         $t9, 0x7
    ctx->r25 = S32(0X7 << 16);
    // 0x800254BC: sw          $t7, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r15;
    // 0x800254C0: sw          $t8, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r24;
    // 0x800254C4: ori         $t9, $t9, 0xC07C
    ctx->r25 = ctx->r25 | 0XC07C;
    // 0x800254C8: lui         $v1, 0xF200
    ctx->r3 = S32(0XF200 << 16);
    // 0x800254CC: sw          $v1, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r3;
    // 0x800254D0: sw          $t9, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r25;
    // 0x800254D4: lw          $t8, 0x2C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X2C);
    // 0x800254D8: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x800254DC: beql        $t8, $zero, L_800255F8
    if (ctx->r24 == 0) {
        // 0x800254E0: lw          $t7, 0x0($a0)
        ctx->r15 = MEM_W(ctx->r4, 0X0);
            goto L_800255F8;
    }
    goto skip_0;
    // 0x800254E0: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    skip_0:
    // 0x800254E4: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x800254E8: lui         $t9, 0xFC32
    ctx->r25 = S32(0XFC32 << 16);
    // 0x800254EC: ori         $t9, $t9, 0x7E26
    ctx->r25 = ctx->r25 | 0X7E26;
    // 0x800254F0: andi        $t6, $t7, 0x40
    ctx->r14 = ctx->r15 & 0X40;
    // 0x800254F4: beq         $t6, $zero, L_8002553C
    if (ctx->r14 == 0) {
        // 0x800254F8: or          $t4, $v0, $zero
        ctx->r12 = ctx->r2 | 0;
            goto L_8002553C;
    }
    // 0x800254F8: or          $t4, $v0, $zero
    ctx->r12 = ctx->r2 | 0;
    // 0x800254FC: or          $t4, $v0, $zero
    ctx->r12 = ctx->r2 | 0;
    // 0x80025500: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80025504: lui         $t9, 0xB900
    ctx->r25 = S32(0XB900 << 16);
    // 0x80025508: ori         $t9, $t9, 0x2
    ctx->r25 = ctx->r25 | 0X2;
    // 0x8002550C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80025510: or          $t5, $v0, $zero
    ctx->r13 = ctx->r2 | 0;
    // 0x80025514: lui         $t7, 0xFC32
    ctx->r15 = S32(0XFC32 << 16);
    // 0x80025518: lui         $t6, 0xF2FF
    ctx->r14 = S32(0XF2FF << 16);
    // 0x8002551C: sw          $t8, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r24;
    // 0x80025520: sw          $t9, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r25;
    // 0x80025524: ori         $t6, $t6, 0xF638
    ctx->r14 = ctx->r14 | 0XF638;
    // 0x80025528: ori         $t7, $t7, 0x7E26
    ctx->r15 = ctx->r15 | 0X7E26;
    // 0x8002552C: sw          $t7, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r15;
    // 0x80025530: sw          $t6, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r14;
    // 0x80025534: b           L_80025550
    // 0x80025538: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
        goto L_80025550;
    // 0x80025538: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
L_8002553C:
    // 0x8002553C: lui         $t8, 0xF2FF
    ctx->r24 = S32(0XF2FF << 16);
    // 0x80025540: ori         $t8, $t8, 0xFC38
    ctx->r24 = ctx->r24 | 0XFC38;
    // 0x80025544: sw          $t8, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r24;
    // 0x80025548: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8002554C: sw          $t9, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r25;
L_80025550:
    // 0x80025550: or          $t4, $v0, $zero
    ctx->r12 = ctx->r2 | 0;
    // 0x80025554: sw          $a2, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r6;
    // 0x80025558: lw          $t7, 0x2C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X2C);
    // 0x8002555C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80025560: or          $t5, $v0, $zero
    ctx->r13 = ctx->r2 | 0;
    // 0x80025564: lui         $t6, 0xF510
    ctx->r14 = S32(0XF510 << 16);
    // 0x80025568: sw          $t7, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r15;
    // 0x8002556C: ori         $t6, $t6, 0x100
    ctx->r14 = ctx->r14 | 0X100;
    // 0x80025570: sw          $t6, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r14;
    // 0x80025574: sw          $a3, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r7;
    // 0x80025578: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8002557C: sw          $v0, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r2;
    // 0x80025580: lw          $t9, 0xC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC);
    // 0x80025584: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80025588: lui         $t6, 0xF510
    ctx->r14 = S32(0XF510 << 16);
    // 0x8002558C: sw          $t0, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r8;
    // 0x80025590: sw          $zero, 0x4($t9)
    MEM_W(0X4, ctx->r25) = 0;
    // 0x80025594: sw          $v0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r2;
    // 0x80025598: lw          $t8, 0x8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8);
    // 0x8002559C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x800255A0: lui         $t9, 0x101
    ctx->r25 = S32(0X101 << 16);
    // 0x800255A4: sw          $t1, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r9;
    // 0x800255A8: sw          $t2, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r10;
    // 0x800255AC: sw          $v0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r2;
    // 0x800255B0: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x800255B4: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x800255B8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800255BC: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x800255C0: sw          $t3, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r11;
    // 0x800255C4: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
    // 0x800255C8: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x800255CC: lui         $t8, 0x107
    ctx->r24 = S32(0X107 << 16);
    // 0x800255D0: ori         $t9, $t9, 0x4050
    ctx->r25 = ctx->r25 | 0X4050;
    // 0x800255D4: ori         $t6, $t6, 0x1100
    ctx->r14 = ctx->r14 | 0X1100;
    // 0x800255D8: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x800255DC: sw          $t9, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r25;
    // 0x800255E0: ori         $t8, $t8, 0xC07C
    ctx->r24 = ctx->r24 | 0XC07C;
    // 0x800255E4: sw          $t8, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r24;
    // 0x800255E8: sw          $v1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r3;
    // 0x800255EC: b           L_80025658
    // 0x800255F0: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
        goto L_80025658;
    // 0x800255F0: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x800255F4: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
L_800255F8:
    // 0x800255F8: lui         $t9, 0xFC12
    ctx->r25 = S32(0XFC12 << 16);
    // 0x800255FC: ori         $t9, $t9, 0x7FFF
    ctx->r25 = ctx->r25 | 0X7FFF;
    // 0x80025600: andi        $t6, $t7, 0x40
    ctx->r14 = ctx->r15 & 0X40;
    // 0x80025604: beq         $t6, $zero, L_80025648
    if (ctx->r14 == 0) {
        // 0x80025608: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80025648;
    }
    // 0x80025608: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8002560C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80025610: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80025614: lui         $t9, 0xB900
    ctx->r25 = S32(0XB900 << 16);
    // 0x80025618: ori         $t9, $t9, 0x2
    ctx->r25 = ctx->r25 | 0X2;
    // 0x8002561C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80025620: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x80025624: lui         $t7, 0xFC12
    ctx->r15 = S32(0XFC12 << 16);
    // 0x80025628: sw          $t8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r24;
    // 0x8002562C: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x80025630: ori         $t7, $t7, 0x7FFF
    ctx->r15 = ctx->r15 | 0X7FFF;
    // 0x80025634: addiu       $t6, $zero, -0x9C8
    ctx->r14 = ADD32(0, -0X9C8);
    // 0x80025638: sw          $t6, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r14;
    // 0x8002563C: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x80025640: b           L_80025658
    // 0x80025644: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
        goto L_80025658;
    // 0x80025644: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
L_80025648:
    // 0x80025648: addiu       $t8, $zero, -0x3C8
    ctx->r24 = ADD32(0, -0X3C8);
    // 0x8002564C: sw          $t8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r24;
    // 0x80025650: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80025654: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
L_80025658:
    // 0x80025658: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x8002565C: addiu       $t1, $t1, -0x3A38
    ctx->r9 = ADD32(ctx->r9, -0X3A38);
    // 0x80025660: lw          $a2, 0x0($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X0);
    // 0x80025664: lui         $t2, 0x3
    ctx->r10 = S32(0X3 << 16);
    // 0x80025668: ori         $t2, $t2, 0x8000
    ctx->r10 = ctx->r10 | 0X8000;
    // 0x8002566C: addu        $t7, $a2, $t2
    ctx->r15 = ADD32(ctx->r6, ctx->r10);
    // 0x80025670: lh          $t6, 0x2DB2($t7)
    ctx->r14 = MEM_H(ctx->r15, 0X2DB2);
    // 0x80025674: lui         $t3, 0x1
    ctx->r11 = S32(0X1 << 16);
    // 0x80025678: ori         $t3, $t3, 0xD6D8
    ctx->r11 = ctx->r11 | 0XD6D8;
    // 0x8002567C: multu       $t6, $t3
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80025680: lui         $t4, 0x1
    ctx->r12 = S32(0X1 << 16);
    // 0x80025684: ori         $t4, $t4, 0x8000
    ctx->r12 = ctx->r12 | 0X8000;
    // 0x80025688: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8002568C: addiu       $t0, $v0, 0x8
    ctx->r8 = ADD32(ctx->r2, 0X8);
    // 0x80025690: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x80025694: addiu       $v0, $t0, 0x8
    ctx->r2 = ADD32(ctx->r8, 0X8);
    // 0x80025698: mflo        $t9
    ctx->r25 = lo;
    // 0x8002569C: addu        $t8, $a2, $t9
    ctx->r24 = ADD32(ctx->r6, ctx->r25);
    // 0x800256A0: addu        $a3, $t8, $t4
    ctx->r7 = ADD32(ctx->r24, ctx->r12);
    // 0x800256A4: lw          $t6, 0x569C($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X569C);
    // 0x800256A8: andi        $t9, $t6, 0xFFF
    ctx->r25 = ctx->r14 & 0XFFF;
    // 0x800256AC: lw          $t6, 0x5698($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X5698);
    // 0x800256B0: or          $t8, $t9, $v1
    ctx->r24 = ctx->r25 | ctx->r3;
    // 0x800256B4: andi        $t9, $t6, 0xFFF
    ctx->r25 = ctx->r14 & 0XFFF;
    // 0x800256B8: sll         $t7, $t9, 12
    ctx->r15 = S32(ctx->r25 << 12);
    // 0x800256BC: or          $t6, $t8, $t7
    ctx->r14 = ctx->r24 | ctx->r15;
    // 0x800256C0: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x800256C4: lw          $a2, 0x0($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X0);
    // 0x800256C8: addu        $t9, $a2, $t2
    ctx->r25 = ADD32(ctx->r6, ctx->r10);
    // 0x800256CC: lh          $t8, 0x2DB2($t9)
    ctx->r24 = MEM_H(ctx->r25, 0X2DB2);
    // 0x800256D0: multu       $t8, $t3
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800256D4: mflo        $t7
    ctx->r15 = lo;
    // 0x800256D8: addu        $t6, $a2, $t7
    ctx->r14 = ADD32(ctx->r6, ctx->r15);
    // 0x800256DC: addu        $a3, $t6, $t4
    ctx->r7 = ADD32(ctx->r14, ctx->r12);
    // 0x800256E0: lw          $t9, 0x569C($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X569C);
    // 0x800256E4: addiu       $t7, $t9, 0x7C
    ctx->r15 = ADD32(ctx->r25, 0X7C);
    // 0x800256E8: lw          $t9, 0x5698($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X5698);
    // 0x800256EC: andi        $t6, $t7, 0xFFF
    ctx->r14 = ctx->r15 & 0XFFF;
    // 0x800256F0: addiu       $t7, $t9, 0x7C
    ctx->r15 = ADD32(ctx->r25, 0X7C);
    // 0x800256F4: andi        $t9, $t7, 0xFFF
    ctx->r25 = ctx->r15 & 0XFFF;
    // 0x800256F8: sll         $t8, $t9, 12
    ctx->r24 = S32(ctx->r25 << 12);
    // 0x800256FC: or          $t7, $t6, $t8
    ctx->r15 = ctx->r14 | ctx->r24;
    // 0x80025700: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x80025704: lw          $a2, 0x0($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X0);
    // 0x80025708: addu        $t9, $a2, $t2
    ctx->r25 = ADD32(ctx->r6, ctx->r10);
    // 0x8002570C: lh          $t6, 0x2DB2($t9)
    ctx->r14 = MEM_H(ctx->r25, 0X2DB2);
    // 0x80025710: multu       $t6, $t3
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80025714: mflo        $t8
    ctx->r24 = lo;
    // 0x80025718: addu        $t7, $a2, $t8
    ctx->r15 = ADD32(ctx->r6, ctx->r24);
    // 0x8002571C: addu        $a3, $t7, $t4
    ctx->r7 = ADD32(ctx->r15, ctx->r12);
    // 0x80025720: lw          $t6, 0x56A4($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X56A4);
    // 0x80025724: andi        $t8, $t6, 0xFFF
    ctx->r24 = ctx->r14 & 0XFFF;
    // 0x80025728: lw          $t6, 0x56A0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X56A0);
    // 0x8002572C: or          $t7, $t8, $v1
    ctx->r15 = ctx->r24 | ctx->r3;
    // 0x80025730: andi        $t8, $t6, 0xFFF
    ctx->r24 = ctx->r14 & 0XFFF;
    // 0x80025734: sll         $t9, $t8, 12
    ctx->r25 = S32(ctx->r24 << 12);
    // 0x80025738: or          $t6, $t7, $t9
    ctx->r14 = ctx->r15 | ctx->r25;
    // 0x8002573C: sw          $t6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r14;
    // 0x80025740: lw          $a2, 0x0($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X0);
    // 0x80025744: addu        $t8, $a2, $t2
    ctx->r24 = ADD32(ctx->r6, ctx->r10);
    // 0x80025748: lh          $t7, 0x2DB2($t8)
    ctx->r15 = MEM_H(ctx->r24, 0X2DB2);
    // 0x8002574C: multu       $t7, $t3
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80025750: mflo        $t9
    ctx->r25 = lo;
    // 0x80025754: addu        $t6, $a2, $t9
    ctx->r14 = ADD32(ctx->r6, ctx->r25);
    // 0x80025758: addu        $a3, $t6, $t4
    ctx->r7 = ADD32(ctx->r14, ctx->r12);
    // 0x8002575C: lw          $t8, 0x56A4($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X56A4);
    // 0x80025760: lw          $t7, 0x56A0($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X56A0);
    // 0x80025764: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x80025768: addiu       $t9, $t8, 0x7C
    ctx->r25 = ADD32(ctx->r24, 0X7C);
    // 0x8002576C: andi        $t6, $t9, 0xFFF
    ctx->r14 = ctx->r25 & 0XFFF;
    // 0x80025770: or          $t8, $t6, $at
    ctx->r24 = ctx->r14 | ctx->r1;
    // 0x80025774: addiu       $t6, $t7, 0x7C
    ctx->r14 = ADD32(ctx->r15, 0X7C);
    // 0x80025778: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x8002577C: sll         $t9, $t7, 12
    ctx->r25 = S32(ctx->r15 << 12);
    // 0x80025780: or          $t6, $t8, $t9
    ctx->r14 = ctx->r24 | ctx->r25;
    // 0x80025784: sw          $t6, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r14;
    // 0x80025788: jr          $ra
    // 0x8002578C: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x8002578C: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_8000383C_443C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000383C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80003840: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80003844: jal         0x80003880
    // 0x80003848: nop

    func_80003880_4480(rdram, ctx);
        goto after_0;
    // 0x80003848: nop

    after_0:
    // 0x8000384C: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80003850: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x80003854: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x80003858: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x8000385C: lui         $a1, 0x802F
    ctx->r5 = S32(0X802F << 16);
    // 0x80003860: addiu       $a1, $a1, 0x7000
    ctx->r5 = ADD32(ctx->r5, 0X7000);
    // 0x80003864: ori         $a2, $zero, 0xA000
    ctx->r6 = 0 | 0XA000;
    // 0x80003868: jal         0x800148C0
    // 0x8000386C: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_800148C0_154C0(rdram, ctx);
        goto after_1;
    // 0x8000386C: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_1:
    // 0x80003870: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80003874: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80003878: jr          $ra
    // 0x8000387C: nop

    TRACE_RETURN()
    return;
    // 0x8000387C: nop

;}
RECOMP_FUNC void func_80004910_5510(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80004910: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80004914: sb          $zero, 0x71BD($at)
    MEM_B(0X71BD, ctx->r1) = 0;
    // 0x80004918: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8000491C: sb          $zero, 0x71BC($at)
    MEM_B(0X71BC, ctx->r1) = 0;
    // 0x80004920: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x80004924: addiu       $v1, $v1, 0x71C0
    ctx->r3 = ADD32(ctx->r3, 0X71C0);
    // 0x80004928: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8000492C: addiu       $v0, $v0, 0x71E0
    ctx->r2 = ADD32(ctx->r2, 0X71E0);
    // 0x80004930: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x80004934: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80004938: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x8000493C: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x80004940: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x80004944: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80004948: sw          $zero, 0x8($v1)
    MEM_W(0X8, ctx->r3) = 0;
    // 0x8000494C: sw          $zero, 0xC($v1)
    MEM_W(0XC, ctx->r3) = 0;
    // 0x80004950: sw          $zero, 0x10($v1)
    MEM_W(0X10, ctx->r3) = 0;
    // 0x80004954: sw          $zero, 0x14($v1)
    MEM_W(0X14, ctx->r3) = 0;
    // 0x80004958: sw          $zero, 0x18($v1)
    MEM_W(0X18, ctx->r3) = 0;
    // 0x8000495C: jr          $ra
    // 0x80004960: sw          $zero, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = 0;
    TRACE_RETURN()
    return;
    // 0x80004960: sw          $zero, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = 0;
;}
RECOMP_FUNC void func_800034D0_40D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800034D0: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x800034D4: addiu       $v1, $v1, -0x3A38
    ctx->r3 = ADD32(ctx->r3, -0X3A38);
    // 0x800034D8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800034DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800034E0: lui         $t6, 0x4
    ctx->r14 = S32(0X4 << 16);
    // 0x800034E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800034E8: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x800034EC: lbu         $t6, -0x5222($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X5222);
    // 0x800034F0: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x800034F4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800034F8: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x800034FC: sb          $t7, -0x5222($at)
    MEM_B(-0X5222, ctx->r1) = ctx->r15;
    // 0x80003500: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x80003504: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80003508: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8000350C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80003510: jal         0x80003380
    // 0x80003514: sb          $zero, -0x5221($at)
    MEM_B(-0X5221, ctx->r1) = 0;
    func_80003380_3F80(rdram, ctx);
        goto after_0;
    // 0x80003514: sb          $zero, -0x5221($at)
    MEM_B(-0X5221, ctx->r1) = 0;
    after_0:
    // 0x80003518: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000351C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80003520: jr          $ra
    // 0x80003524: nop

    TRACE_RETURN()
    return;
    // 0x80003524: nop

;}
RECOMP_FUNC void func_80023E94_24A94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80023E94: bgez        $a0, L_80023EA4
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80023E98: sra         $t6, $a0, 3
        ctx->r14 = S32(SIGNED(ctx->r4) >> 3);
            goto L_80023EA4;
    }
    // 0x80023E98: sra         $t6, $a0, 3
    ctx->r14 = S32(SIGNED(ctx->r4) >> 3);
    // 0x80023E9C: addiu       $at, $a0, 0x7
    ctx->r1 = ADD32(ctx->r4, 0X7);
    // 0x80023EA0: sra         $t6, $at, 3
    ctx->r14 = S32(SIGNED(ctx->r1) >> 3);
L_80023EA4:
    // 0x80023EA4: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x80023EA8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80023EAC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80023EB0: lbu         $t8, -0x7170($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X7170);
    // 0x80023EB4: bgez        $a0, L_80023EC8
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80023EB8: andi        $t9, $a0, 0x7
        ctx->r25 = ctx->r4 & 0X7;
            goto L_80023EC8;
    }
    // 0x80023EB8: andi        $t9, $a0, 0x7
    ctx->r25 = ctx->r4 & 0X7;
    // 0x80023EBC: beq         $t9, $zero, L_80023EC8
    if (ctx->r25 == 0) {
        // 0x80023EC0: nop
    
            goto L_80023EC8;
    }
    // 0x80023EC0: nop

    // 0x80023EC4: addiu       $t9, $t9, -0x8
    ctx->r25 = ADD32(ctx->r25, -0X8);
L_80023EC8:
    // 0x80023EC8: andi        $t0, $t9, 0xFF
    ctx->r8 = ctx->r25 & 0XFF;
    // 0x80023ECC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80023ED0: sllv        $t3, $t1, $t0
    ctx->r11 = S32(ctx->r9 << (ctx->r8 & 31));
    // 0x80023ED4: and         $v0, $t8, $t3
    ctx->r2 = ctx->r24 & ctx->r11;
    // 0x80023ED8: andi        $t4, $v0, 0xFF
    ctx->r12 = ctx->r2 & 0XFF;
    // 0x80023EDC: jr          $ra
    // 0x80023EE0: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
    TRACE_RETURN()
    return;
    // 0x80023EE0: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
;}
RECOMP_FUNC void _pullSubFrame(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004FEC4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8004FEC8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8004FECC: lw          $t6, 0x48($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X48);
    // 0x8004FED0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8004FED4: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x8004FED8: bne         $t6, $at, L_8004FEE8
    if (ctx->r14 != ctx->r1) {
        // 0x8004FEDC: nop
    
            goto L_8004FEE8;
    }
    // 0x8004FEDC: nop

    // 0x8004FEE0: bnel        $s5, $zero, L_8004FEF4
    if (ctx->r21 != 0) {
        // 0x8004FEE4: sw          $t0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r8;
            goto L_8004FEF4;
    }
    goto skip_0;
    // 0x8004FEE4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    skip_0:
L_8004FEE8:
    // 0x8004FEE8: b           L_8005014C
    // 0x8004FEEC: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
        goto L_8005014C;
    // 0x8004FEEC: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x8004FEF0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
L_8004FEF4:
    // 0x8004FEF4: lw          $t9, 0x4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X4);
    // 0x8004FEF8: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x8004FEFC: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x8004FF00: jalr        $t9
    // 0x8004FF04: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x8004FF04: nop

    after_0:
    // 0x8004FF08: lh          $t7, 0x0($s6)
    ctx->r15 = MEM_H(ctx->r22, 0X0);
    // 0x8004FF0C: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x8004FF10: sll         $s7, $s5, 1
    ctx->r23 = S32(ctx->r21 << 1);
    // 0x8004FF14: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x8004FF18: or          $t6, $t8, $at
    ctx->r14 = ctx->r24 | ctx->r1;
    // 0x8004FF1C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8004FF20: lh          $t9, 0x0($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X0);
    // 0x8004FF24: lui         $at, 0x808
    ctx->r1 = S32(0X808 << 16);
    // 0x8004FF28: addiu       $s4, $v0, 0x10
    ctx->r20 = ADD32(ctx->r2, 0X10);
    // 0x8004FF2C: addiu       $t8, $t9, 0x440
    ctx->r24 = ADD32(ctx->r25, 0X440);
    // 0x8004FF30: sll         $t6, $t8, 16
    ctx->r14 = S32(ctx->r24 << 16);
    // 0x8004FF34: andi        $t9, $s7, 0xFFFF
    ctx->r25 = ctx->r23 & 0XFFFF;
    // 0x8004FF38: or          $t7, $t6, $t9
    ctx->r15 = ctx->r14 | ctx->r25;
    // 0x8004FF3C: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8004FF40: lh          $t8, 0x0($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X0);
    // 0x8004FF44: addiu       $t6, $t8, 0x580
    ctx->r14 = ADD32(ctx->r24, 0X580);
    // 0x8004FF48: andi        $t9, $t6, 0xFFFF
    ctx->r25 = ctx->r14 & 0XFFFF;
    // 0x8004FF4C: or          $t7, $t9, $at
    ctx->r15 = ctx->r25 | ctx->r1;
    // 0x8004FF50: sw          $t7, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r15;
    // 0x8004FF54: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
    // 0x8004FF58: or          $s0, $s4, $zero
    ctx->r16 = ctx->r20 | 0;
    // 0x8004FF5C: addiu       $t8, $v1, 0x800
    ctx->r24 = ADD32(ctx->r3, 0X800);
    // 0x8004FF60: andi        $t6, $t8, 0xFFFF
    ctx->r14 = ctx->r24 & 0XFFFF;
    // 0x8004FF64: addiu       $t7, $v1, 0x6C0
    ctx->r15 = ADD32(ctx->r3, 0X6C0);
    // 0x8004FF68: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x8004FF6C: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x8004FF70: sw          $t9, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r25;
    // 0x8004FF74: lw          $t7, 0x38($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X38);
    // 0x8004FF78: lui         $t9, 0x8008
    ctx->r25 = S32(0X8008 << 16);
    // 0x8004FF7C: beql        $t7, $zero, L_8005011C
    if (ctx->r15 == 0) {
        // 0x8004FF80: lui         $t7, 0x308
        ctx->r15 = S32(0X308 << 16);
            goto L_8005011C;
    }
    goto skip_1;
    // 0x8004FF80: lui         $t7, 0x308
    ctx->r15 = S32(0X308 << 16);
    skip_1:
    // 0x8004FF84: lh          $t6, 0x18($s3)
    ctx->r14 = MEM_H(ctx->r19, 0X18);
    // 0x8004FF88: sw          $zero, 0x38($s3)
    MEM_W(0X38, ctx->r19) = 0;
    // 0x8004FF8C: lh          $t7, 0x1A($s3)
    ctx->r15 = MEM_H(ctx->r19, 0X1A);
    // 0x8004FF90: sll         $t8, $t6, 1
    ctx->r24 = S32(ctx->r14 << 1);
    // 0x8004FF94: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8004FF98: lh          $t9, -0x5B10($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X5B10);
    // 0x8004FF9C: lw          $a0, 0x34($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X34);
    // 0x8004FFA0: addiu       $s1, $s3, 0x24
    ctx->r17 = ADD32(ctx->r19, 0X24);
    // 0x8004FFA4: multu       $t9, $t7
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004FFA8: lh          $t9, 0x1C($s3)
    ctx->r25 = MEM_H(ctx->r19, 0X1C);
    // 0x8004FFAC: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8004FFB0: nop

    // 0x8004FFB4: cvt.d.w     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    ctx->f16.d = CVT_D_W(ctx->f4.u32l);
    // 0x8004FFB8: mflo        $t6
    ctx->r14 = lo;
    // 0x8004FFBC: sra         $t8, $t6, 15
    ctx->r24 = S32(SIGNED(ctx->r14) >> 15);
    // 0x8004FFC0: sh          $t8, 0x28($s3)
    MEM_H(0X28, ctx->r19) = ctx->r24;
    // 0x8004FFC4: lh          $t7, 0x28($s3)
    ctx->r15 = MEM_H(ctx->r19, 0X28);
    // 0x8004FFC8: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x8004FFCC: jal         0x8004FCF4
    // 0x8004FFD0: cvt.d.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.d = CVT_D_W(ctx->f6.u32l);
    _getRate(rdram, ctx);
        goto after_1;
    // 0x8004FFD0: cvt.d.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.d = CVT_D_W(ctx->f6.u32l);
    after_1:
    // 0x8004FFD4: lh          $t6, 0x18($s3)
    ctx->r14 = MEM_H(ctx->r19, 0X18);
    // 0x8004FFD8: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x8004FFDC: sh          $v0, 0x26($s3)
    MEM_H(0X26, ctx->r19) = ctx->r2;
    // 0x8004FFE0: sll         $t8, $t6, 1
    ctx->r24 = S32(ctx->r14 << 1);
    // 0x8004FFE4: negu        $t9, $t8
    ctx->r25 = SUB32(0, ctx->r24);
    // 0x8004FFE8: addu        $t7, $t7, $t9
    ctx->r15 = ADD32(ctx->r15, ctx->r25);
    // 0x8004FFEC: lh          $t7, -0x5A12($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X5A12);
    // 0x8004FFF0: lh          $t6, 0x1A($s3)
    ctx->r14 = MEM_H(ctx->r19, 0X1A);
    // 0x8004FFF4: lw          $a0, 0x34($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X34);
    // 0x8004FFF8: addiu       $s1, $s3, 0x2A
    ctx->r17 = ADD32(ctx->r19, 0X2A);
    // 0x8004FFFC: multu       $t7, $t6
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80050000: lh          $t7, 0x1E($s3)
    ctx->r15 = MEM_H(ctx->r19, 0X1E);
    // 0x80050004: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x80050008: nop

    // 0x8005000C: cvt.d.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.d = CVT_D_W(ctx->f8.u32l);
    // 0x80050010: mflo        $t8
    ctx->r24 = lo;
    // 0x80050014: sra         $t9, $t8, 15
    ctx->r25 = S32(SIGNED(ctx->r24) >> 15);
    // 0x80050018: sh          $t9, 0x2E($s3)
    MEM_H(0X2E, ctx->r19) = ctx->r25;
    // 0x8005001C: lh          $t6, 0x2E($s3)
    ctx->r14 = MEM_H(ctx->r19, 0X2E);
    // 0x80050020: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x80050024: jal         0x8004FCF4
    // 0x80050028: cvt.d.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.d = CVT_D_W(ctx->f10.u32l);
    _getRate(rdram, ctx);
        goto after_2;
    // 0x80050028: cvt.d.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.d = CVT_D_W(ctx->f10.u32l);
    after_2:
    // 0x8005002C: lh          $t8, 0x1C($s3)
    ctx->r24 = MEM_H(ctx->r19, 0X1C);
    // 0x80050030: sh          $v0, 0x2C($s3)
    MEM_H(0X2C, ctx->r19) = ctx->r2;
    // 0x80050034: or          $v1, $s4, $zero
    ctx->r3 = ctx->r20 | 0;
    // 0x80050038: lui         $at, 0x906
    ctx->r1 = S32(0X906 << 16);
    // 0x8005003C: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x80050040: or          $t7, $t9, $at
    ctx->r15 = ctx->r25 | ctx->r1;
    // 0x80050044: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80050048: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8005004C: lh          $t6, 0x1E($s3)
    ctx->r14 = MEM_H(ctx->r19, 0X1E);
    // 0x80050050: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
    // 0x80050054: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80050058: lui         $at, 0x904
    ctx->r1 = S32(0X904 << 16);
    // 0x8005005C: andi        $t8, $t6, 0xFFFF
    ctx->r24 = ctx->r14 & 0XFFFF;
    // 0x80050060: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x80050064: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x80050068: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x8005006C: lh          $t7, 0x28($s3)
    ctx->r15 = MEM_H(ctx->r19, 0X28);
    // 0x80050070: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
    // 0x80050074: lui         $at, 0x902
    ctx->r1 = S32(0X902 << 16);
    // 0x80050078: andi        $t6, $t7, 0xFFFF
    ctx->r14 = ctx->r15 & 0XFFFF;
    // 0x8005007C: or          $t8, $t6, $at
    ctx->r24 = ctx->r14 | ctx->r1;
    // 0x80050080: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x80050084: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x80050088: lh          $t7, 0x26($s3)
    ctx->r15 = MEM_H(ctx->r19, 0X26);
    // 0x8005008C: lhu         $t9, 0x24($s3)
    ctx->r25 = MEM_HU(ctx->r19, 0X24);
    // 0x80050090: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
    // 0x80050094: sll         $t6, $t7, 16
    ctx->r14 = S32(ctx->r15 << 16);
    // 0x80050098: or          $t7, $t6, $t9
    ctx->r15 = ctx->r14 | ctx->r25;
    // 0x8005009C: sw          $t7, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r15;
    // 0x800500A0: lh          $t8, 0x2E($s3)
    ctx->r24 = MEM_H(ctx->r19, 0X2E);
    // 0x800500A4: lui         $at, 0x900
    ctx->r1 = S32(0X900 << 16);
    // 0x800500A8: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x800500AC: andi        $t6, $t8, 0xFFFF
    ctx->r14 = ctx->r24 & 0XFFFF;
    // 0x800500B0: or          $t9, $t6, $at
    ctx->r25 = ctx->r14 | ctx->r1;
    // 0x800500B4: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x800500B8: lh          $t8, 0x2C($s3)
    ctx->r24 = MEM_H(ctx->r19, 0X2C);
    // 0x800500BC: lhu         $t7, 0x2A($s3)
    ctx->r15 = MEM_HU(ctx->r19, 0X2A);
    // 0x800500C0: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
    // 0x800500C4: sll         $t6, $t8, 16
    ctx->r14 = S32(ctx->r24 << 16);
    // 0x800500C8: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x800500CC: sw          $t8, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r24;
    // 0x800500D0: lh          $t9, 0x20($s3)
    ctx->r25 = MEM_H(ctx->r19, 0X20);
    // 0x800500D4: lui         $at, 0x908
    ctx->r1 = S32(0X908 << 16);
    // 0x800500D8: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
    // 0x800500DC: andi        $t6, $t9, 0xFFFF
    ctx->r14 = ctx->r25 & 0XFFFF;
    // 0x800500E0: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x800500E4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x800500E8: lh          $t8, 0x22($s3)
    ctx->r24 = MEM_H(ctx->r19, 0X22);
    // 0x800500EC: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
    // 0x800500F0: or          $s0, $s4, $zero
    ctx->r16 = ctx->r20 | 0;
    // 0x800500F4: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x800500F8: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x800500FC: lui         $t6, 0x309
    ctx->r14 = S32(0X309 << 16);
    // 0x80050100: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x80050104: lw          $a0, 0x14($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X14);
    // 0x80050108: jal         0x80047710
    // 0x8005010C: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_3;
    // 0x8005010C: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
    after_3:
    // 0x80050110: b           L_80050130
    // 0x80050114: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
        goto L_80050130;
    // 0x80050114: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x80050118: lui         $t7, 0x308
    ctx->r15 = S32(0X308 << 16);
L_8005011C:
    // 0x8005011C: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x80050120: lw          $a0, 0x14($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X14);
    // 0x80050124: jal         0x80047710
    // 0x80050128: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_4;
    // 0x80050128: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
    after_4:
    // 0x8005012C: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
L_80050130:
    // 0x80050130: lh          $t8, 0x0($s6)
    ctx->r24 = MEM_H(ctx->r22, 0X0);
    // 0x80050134: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
    // 0x80050138: addu        $t9, $t8, $s7
    ctx->r25 = ADD32(ctx->r24, ctx->r23);
    // 0x8005013C: sh          $t9, 0x0($s6)
    MEM_H(0X0, ctx->r22) = ctx->r25;
    // 0x80050140: lw          $t6, 0x30($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X30);
    // 0x80050144: addu        $t7, $t6, $s5
    ctx->r15 = ADD32(ctx->r14, ctx->r21);
    // 0x80050148: sw          $t7, 0x30($s3)
    MEM_W(0X30, ctx->r19) = ctx->r15;
L_8005014C:
    // 0x8005014C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80050150: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80050154: jr          $ra
    // 0x80050158: nop

    TRACE_RETURN()
    return;
    // 0x80050158: nop

;}
RECOMP_FUNC void func_80035314_35F14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80035314: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80035318: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003531C: sw          $a1, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r5;
    // 0x80035320: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80035324: lw          $t6, -0x254C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X254C);
    // 0x80035328: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x8003532C: jalr        $a2
    // 0x80035330: lw          $a1, 0x18($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X18);
    LOOKUP_FUNC(ctx->r6)(rdram, ctx);
        goto after_0;
    // 0x80035330: lw          $a1, 0x18($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X18);
    after_0:
    // 0x80035334: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80035338: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003533C: jr          $ra
    // 0x80035340: nop

    TRACE_RETURN()
    return;
    // 0x80035340: nop

;}
RECOMP_FUNC void func_8001F914_20514(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001F914: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001F918: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001F91C: jal         0x80020440
    // 0x8001F920: nop

    func_80020440_21040(rdram, ctx);
        goto after_0;
    // 0x8001F920: nop

    after_0:
    // 0x8001F924: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x8001F928: jal         0x80003478
    // 0x8001F92C: sh          $zero, 0x7A76($at)
    MEM_H(0X7A76, ctx->r1) = 0;
    func_80003478_4078(rdram, ctx);
        goto after_1;
    // 0x8001F92C: sh          $zero, 0x7A76($at)
    MEM_H(0X7A76, ctx->r1) = 0;
    after_1:
    // 0x8001F930: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001F934: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001F938: jr          $ra
    // 0x8001F93C: nop

    TRACE_RETURN()
    return;
    // 0x8001F93C: nop

;}
