#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_801DB5E0_6069C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DB5E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DB5E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DB5E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801DB5EC: jal         0x80034ED4
    // 0x801DB5F0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80034ED4_35AD4(rdram, ctx);
        goto after_0;
    // 0x801DB5F0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801DB5F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DB5F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DB5FC: jr          $ra
    // 0x801DB600: nop

    TRACE_RETURN()
    return;
    // 0x801DB600: nop

;}
RECOMP_FUNC void func_801E2238_60D618(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E2238: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801E223C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801E2240: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x801E2244: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x801E2248: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801E224C: lwc1        $f6, 0x60($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801E2250: lui         $a2, 0x801
    ctx->r6 = S32(0X801 << 16);
    // 0x801E2254: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801E2258: addiu       $a2, $a2, -0x3D60
    ctx->r6 = ADD32(ctx->r6, -0X3D60);
    // 0x801E225C: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x801E2260: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E2264: ori         $t6, $zero, 0x8000
    ctx->r14 = 0 | 0X8000;
    // 0x801E2268: ori         $t7, $zero, 0x8000
    ctx->r15 = 0 | 0X8000;
    // 0x801E226C: ori         $t8, $zero, 0x8000
    ctx->r24 = 0 | 0X8000;
    // 0x801E2270: addiu       $t9, $zero, 0x4A8
    ctx->r25 = ADD32(0, 0X4A8);
    // 0x801E2274: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x801E2278: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x801E227C: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x801E2280: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x801E2284: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
    // 0x801E2288: addiu       $a1, $a1, 0x2874
    ctx->r5 = ADD32(ctx->r5, 0X2874);
    // 0x801E228C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801E2290: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x801E2294: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    // 0x801E2298: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    // 0x801E229C: swc1        $f12, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f12.u32l;
    // 0x801E22A0: swc1        $f14, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f14.u32l;
    // 0x801E22A4: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x801E22A8: jal         0x800358E8
    // 0x801E22AC: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    func_800358E8_364E8(rdram, ctx);
        goto after_0;
    // 0x801E22AC: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x801E22B0: beq         $v0, $zero, L_801E2310
    if (ctx->r2 == 0) {
        // 0x801E22B4: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_801E2310;
    }
    // 0x801E22B4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801E22B8: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801E22BC: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x801E22C0: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x801E22C4: swc1        $f8, 0x70($v0)
    MEM_W(0X70, ctx->r2) = ctx->f8.u32l;
    // 0x801E22C8: lwc1        $f10, 0x68($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801E22CC: addiu       $t0, $t0, -0x5018
    ctx->r8 = ADD32(ctx->r8, -0X5018);
    // 0x801E22D0: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x801E22D4: swc1        $f10, 0x74($v0)
    MEM_W(0X74, ctx->r2) = ctx->f10.u32l;
    // 0x801E22D8: lwc1        $f16, 0x6C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801E22DC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x801E22E0: addiu       $t3, $t3, -0x54E0
    ctx->r11 = ADD32(ctx->r11, -0X54E0);
    // 0x801E22E4: sw          $zero, 0x90($v0)
    MEM_W(0X90, ctx->r2) = 0;
    // 0x801E22E8: sw          $zero, 0x94($v0)
    MEM_W(0X94, ctx->r2) = 0;
    // 0x801E22EC: sw          $zero, 0x98($v0)
    MEM_W(0X98, ctx->r2) = 0;
    // 0x801E22F0: sw          $t0, 0x9C($v0)
    MEM_W(0X9C, ctx->r2) = ctx->r8;
    // 0x801E22F4: sw          $t1, 0xA0($v0)
    MEM_W(0XA0, ctx->r2) = ctx->r9;
    // 0x801E22F8: sw          $t2, 0xA4($v0)
    MEM_W(0XA4, ctx->r2) = ctx->r10;
    // 0x801E22FC: sw          $t3, 0xA8($v0)
    MEM_W(0XA8, ctx->r2) = ctx->r11;
    // 0x801E2300: swc1        $f16, 0x78($v0)
    MEM_W(0X78, ctx->r2) = ctx->f16.u32l;
    // 0x801E2304: jal         0x801E18E4
    // 0x801E2308: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    func_801E18E4_60CCC4(rdram, ctx);
        goto after_1;
    // 0x801E2308: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    after_1:
    // 0x801E230C: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
L_801E2310:
    // 0x801E2310: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801E2314: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x801E2318: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x801E231C: jr          $ra
    // 0x801E2320: nop

    TRACE_RETURN()
    return;
    // 0x801E2320: nop

;}
RECOMP_FUNC void func_801CC078_5F7458(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CC078: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801CC07C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801CC080: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801CC084: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801CC088: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801CC08C: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801CC090: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801CC094: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x801CC098: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801CC09C: addiu       $v0, $v0, 0xA0
    ctx->r2 = ADD32(ctx->r2, 0XA0);
    // 0x801CC0A0: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801CC0A4: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x801CC0A8: addu        $a1, $v0, $at
    ctx->r5 = ADD32(ctx->r2, ctx->r1);
    // 0x801CC0AC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801CC0B0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801CC0B4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801CC0B8: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x801CC0BC: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801CC0C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CC0C4: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    // 0x801CC0C8: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x801CC0CC: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x801CC0D0: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x801CC0D4: jal         0x8000DBF0
    // 0x801CC0D8: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_0;
    // 0x801CC0D8: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x801CC0DC: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x801CC0E0: jal         0x801D1F58
    // 0x801CC0E4: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    func_801D1F58_5FD338(rdram, ctx);
        goto after_1;
    // 0x801CC0E4: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    after_1:
    // 0x801CC0E8: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x801CC0EC: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CC0F0: addiu       $a0, $a0, -0x3EF4
    ctx->r4 = ADD32(ctx->r4, -0X3EF4);
    // 0x801CC0F4: jal         0x8003521C
    // 0x801CC0F8: sb          $zero, 0x5($t6)
    MEM_B(0X5, ctx->r14) = 0;
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801CC0F8: sb          $zero, 0x5($t6)
    MEM_B(0X5, ctx->r14) = 0;
    after_2:
    // 0x801CC0FC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801CC100: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x801CC104: jr          $ra
    // 0x801CC108: nop

    TRACE_RETURN()
    return;
    // 0x801CC108: nop

;}
RECOMP_FUNC void func_801FA2C0_6256A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FA2C0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801FA2C4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801FA2C8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801FA2CC: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x801FA2D0: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x801FA2D4: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x801FA2D8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801FA2DC: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801FA2E0: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x801FA2E4: lwc1        $f4, 0x94($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X94);
    // 0x801FA2E8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801FA2EC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801FA2F0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801FA2F4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801FA2F8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801FA2FC: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x801FA300: swc1        $f8, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->f8.u32l;
    // 0x801FA304: lwc1        $f0, 0x94($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X94);
    // 0x801FA308: c.le.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl <= ctx->f0.fl;
    // 0x801FA30C: nop

    // 0x801FA310: bc1fl       L_801FA324
    if (!c1cs) {
        // 0x801FA314: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_801FA324;
    }
    goto skip_0;
    // 0x801FA314: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_0:
    // 0x801FA318: b           L_801FA324
    // 0x801FA31C: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
        goto L_801FA324;
    // 0x801FA31C: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x801FA320: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_801FA324:
    // 0x801FA324: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x801FA328: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x801FA32C: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x801FA330: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x801FA334: cvt.w.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    ctx->f10.u32l = CVT_W_S(ctx->f2.fl);
    // 0x801FA338: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x801FA33C: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x801FA340: nop

    // 0x801FA344: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x801FA348: beql        $a3, $zero, L_801FA398
    if (ctx->r7 == 0) {
        // 0x801FA34C: mfc1        $a3, $f10
        ctx->r7 = (int32_t)ctx->f10.u32l;
            goto L_801FA398;
    }
    goto skip_1;
    // 0x801FA34C: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    skip_1:
    // 0x801FA350: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801FA354: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801FA358: sub.s       $f10, $f2, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f10.fl;
    // 0x801FA35C: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x801FA360: nop

    // 0x801FA364: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x801FA368: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x801FA36C: nop

    // 0x801FA370: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x801FA374: bne         $a3, $zero, L_801FA38C
    if (ctx->r7 != 0) {
        // 0x801FA378: nop
    
            goto L_801FA38C;
    }
    // 0x801FA378: nop

    // 0x801FA37C: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x801FA380: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801FA384: b           L_801FA3A4
    // 0x801FA388: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
        goto L_801FA3A4;
    // 0x801FA388: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
L_801FA38C:
    // 0x801FA38C: b           L_801FA3A4
    // 0x801FA390: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
        goto L_801FA3A4;
    // 0x801FA390: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x801FA394: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
L_801FA398:
    // 0x801FA398: nop

    // 0x801FA39C: bltz        $a3, L_801FA38C
    if (SIGNED(ctx->r7) < 0) {
        // 0x801FA3A0: nop
    
            goto L_801FA38C;
    }
    // 0x801FA3A0: nop

L_801FA3A4:
    // 0x801FA3A4: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x801FA3A8: andi        $t8, $a3, 0xFFFF
    ctx->r24 = ctx->r7 & 0XFFFF;
    // 0x801FA3AC: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    // 0x801FA3B0: jal         0x801D15BC
    // 0x801FA3B4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_801D15BC_5FC99C(rdram, ctx);
        goto after_0;
    // 0x801FA3B4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_0:
    // 0x801FA3B8: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x801FA3BC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801FA3C0: lwc1        $f18, 0x94($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X94);
    // 0x801FA3C4: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x801FA3C8: nop

    // 0x801FA3CC: bc1fl       L_801FA3E0
    if (!c1cs) {
        // 0x801FA3D0: lw          $t0, 0x2C($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X2C);
            goto L_801FA3E0;
    }
    goto skip_2;
    // 0x801FA3D0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    skip_2:
    // 0x801FA3D4: jal         0x80038BC8
    // 0x801FA3D8: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    func_80038BC8_397C8(rdram, ctx);
        goto after_1;
    // 0x801FA3D8: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    after_1:
    // 0x801FA3DC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
L_801FA3E0:
    // 0x801FA3E0: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x801FA3E4: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801FA3E8: lwc1        $f4, 0x1C($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x801FA3EC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801FA3F0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FA3F4: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801FA3F8: c.le.d      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.d <= ctx->f6.d;
    // 0x801FA3FC: nop

    // 0x801FA400: bc1fl       L_801FA414
    if (!c1cs) {
        // 0x801FA404: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_801FA414;
    }
    goto skip_3;
    // 0x801FA404: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_3:
    // 0x801FA408: jal         0x8003521C
    // 0x801FA40C: addiu       $a0, $a0, -0x5BDC
    ctx->r4 = ADD32(ctx->r4, -0X5BDC);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801FA40C: addiu       $a0, $a0, -0x5BDC
    ctx->r4 = ADD32(ctx->r4, -0X5BDC);
    after_2:
    // 0x801FA410: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801FA414:
    // 0x801FA414: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801FA418: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801FA41C: jr          $ra
    // 0x801FA420: nop

    TRACE_RETURN()
    return;
    // 0x801FA420: nop

;}
RECOMP_FUNC void func_801E91BC_61459C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E91BC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801E91C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E91C4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x801E91C8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x801E91CC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801E91D0: sw          $t6, 0xB0($a0)
    MEM_W(0XB0, ctx->r4) = ctx->r14;
    // 0x801E91D4: lwc1        $f0, 0x8($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X8);
    // 0x801E91D8: lwc1        $f2, 0x10($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X10);
    // 0x801E91DC: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801E91E0: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x801E91E4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801E91E8: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x801E91EC: jal         0x800417E0
    // 0x801E91F0: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    _nsqrtf(rdram, ctx);
        goto after_0;
    // 0x801E91F0: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_0:
    // 0x801E91F4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801E91F8: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801E91FC: lwc1        $f14, 0x10($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801E9200: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x801E9204: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x801E9208: jal         0x8000E28C
    // 0x801E920C: lwc1        $f12, 0x8($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8);
    func_8000E28C_EE8C(rdram, ctx);
        goto after_1;
    // 0x801E920C: lwc1        $f12, 0x8($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8);
    after_1:
    // 0x801E9210: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x801E9214: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801E9218: addiu       $t7, $zero, 0x32
    ctx->r15 = ADD32(0, 0X32);
    // 0x801E921C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E9220: sw          $v0, 0x94($s1)
    MEM_W(0X94, ctx->r17) = ctx->r2;
    // 0x801E9224: sw          $v0, 0x9C($s1)
    MEM_W(0X9C, ctx->r17) = ctx->r2;
    // 0x801E9228: sw          $t7, 0x7C($s1)
    MEM_W(0X7C, ctx->r17) = ctx->r15;
    // 0x801E922C: addiu       $a1, $a1, -0x4E38
    ctx->r5 = ADD32(ctx->r5, -0X4E38);
    // 0x801E9230: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E9234: swc1        $f8, 0x90($s1)
    MEM_W(0X90, ctx->r17) = ctx->f8.u32l;
    // 0x801E9238: jal         0x801D2EE4
    // 0x801E923C: swc1        $f10, 0xA0($s1)
    MEM_W(0XA0, ctx->r17) = ctx->f10.u32l;
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_2;
    // 0x801E923C: swc1        $f10, 0xA0($s1)
    MEM_W(0XA0, ctx->r17) = ctx->f10.u32l;
    after_2:
    // 0x801E9240: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E9244: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801E9248: lwc1        $f16, 0x94($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X94);
    // 0x801E924C: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801E9250: addiu       $a0, $a0, -0x6D8C
    ctx->r4 = ADD32(ctx->r4, -0X6D8C);
    // 0x801E9254: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x801E9258: jal         0x8003521C
    // 0x801E925C: swc1        $f4, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f4.u32l;
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801E925C: swc1        $f4, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f4.u32l;
    after_3:
    // 0x801E9260: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801E9264: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x801E9268: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x801E926C: jr          $ra
    // 0x801E9270: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x801E9270: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_801E8488_613868(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E8488: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801E848C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801E8490: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x801E8494: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x801E8498: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x801E849C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801E84A0: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801E84A4: jal         0x801D3A18
    // 0x801E84A8: sw          $t6, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->r14;
    func_801D3A18_5FEDF8(rdram, ctx);
        goto after_0;
    // 0x801E84A8: sw          $t6, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->r14;
    after_0:
    // 0x801E84AC: beq         $v0, $zero, L_801E84C4
    if (ctx->r2 == 0) {
        // 0x801E84B0: nop
    
            goto L_801E84C4;
    }
    // 0x801E84B0: nop

    // 0x801E84B4: jal         0x801EF280
    // 0x801E84B8: nop

    func_801EF280_61A660(rdram, ctx);
        goto after_1;
    // 0x801E84B8: nop

    after_1:
    // 0x801E84BC: b           L_801E84CC
    // 0x801E84C0: nop

        goto L_801E84CC;
    // 0x801E84C0: nop

L_801E84C4:
    // 0x801E84C4: jal         0x801EF2C8
    // 0x801E84C8: nop

    func_801EF2C8_61A6A8(rdram, ctx);
        goto after_2;
    // 0x801E84C8: nop

    after_2:
L_801E84CC:
    // 0x801E84CC: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801E84D0: lw          $t7, -0x1130($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1130);
    // 0x801E84D4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801E84D8: lui         $at, 0x405E
    ctx->r1 = S32(0X405E << 16);
    // 0x801E84DC: addiu       $t8, $t7, 0x178
    ctx->r24 = ADD32(ctx->r15, 0X178);
    // 0x801E84E0: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x801E84E4: lwc1        $f4, 0x74($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X74);
    // 0x801E84E8: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x801E84EC: nop

    // 0x801E84F0: bc1fl       L_801E855C
    if (!c1cs) {
        // 0x801E84F4: lwc1        $f8, 0x94($s0)
        ctx->f8.u32l = MEM_W(ctx->r16, 0X94);
            goto L_801E855C;
    }
    goto skip_0;
    // 0x801E84F4: lwc1        $f8, 0x94($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X94);
    skip_0:
    // 0x801E84F8: lwc1        $f8, 0x94($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X94);
    // 0x801E84FC: lui         $at, 0x4054
    ctx->r1 = S32(0X4054 << 16);
    // 0x801E8500: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x801E8504: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801E8508: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801E850C: lwc1        $f4, 0x28($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X28);
    // 0x801E8510: div.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = DIV_D(ctx->f10.d, ctx->f16.d);
    // 0x801E8514: lui         $at, 0x4018
    ctx->r1 = S32(0X4018 << 16);
    // 0x801E8518: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801E851C: add.d       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f18.d); 
    ctx->f8.d = ctx->f6.d + ctx->f18.d;
    // 0x801E8520: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801E8524: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x801E8528: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x801E852C: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801E8530: swc1        $f10, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f10.u32l;
    // 0x801E8534: lwc1        $f16, 0x28($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X28);
    // 0x801E8538: cvt.d.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.d = CVT_D_S(ctx->f16.fl);
    // 0x801E853C: c.le.d      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.d <= ctx->f4.d;
    // 0x801E8540: nop

    // 0x801E8544: bc1f        L_801E85AC
    if (!c1cs) {
        // 0x801E8548: nop
    
            goto L_801E85AC;
    }
    // 0x801E8548: nop

    // 0x801E854C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801E8550: b           L_801E85AC
    // 0x801E8554: swc1        $f18, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f18.u32l;
        goto L_801E85AC;
    // 0x801E8554: swc1        $f18, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f18.u32l;
    // 0x801E8558: lwc1        $f8, 0x94($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X94);
L_801E855C:
    // 0x801E855C: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x801E8560: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801E8564: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801E8568: lwc1        $f6, 0x28($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X28);
    // 0x801E856C: div.d       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = DIV_D(ctx->f10.d, ctx->f16.d);
    // 0x801E8570: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x801E8574: cvt.d.s     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f18.d = CVT_D_S(ctx->f6.fl);
    // 0x801E8578: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E857C: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x801E8580: add.d       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = ctx->f18.d + ctx->f4.d;
    // 0x801E8584: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801E8588: swc1        $f10, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f10.u32l;
    // 0x801E858C: lwc1        $f16, 0x28($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X28);
    // 0x801E8590: c.le.s      $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f6.fl <= ctx->f16.fl;
    // 0x801E8594: nop

    // 0x801E8598: bc1f        L_801E85AC
    if (!c1cs) {
        // 0x801E859C: nop
    
            goto L_801E85AC;
    }
    // 0x801E859C: nop

    // 0x801E85A0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801E85A4: nop

    // 0x801E85A8: swc1        $f18, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f18.u32l;
L_801E85AC:
    // 0x801E85AC: jal         0x801D60E4
    // 0x801E85B0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801D60E4_6014C4(rdram, ctx);
        goto after_3;
    // 0x801E85B0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x801E85B4: jal         0x801EA074
    // 0x801E85B8: nop

    func_801EA074_615454(rdram, ctx);
        goto after_4;
    // 0x801E85B8: nop

    after_4:
    // 0x801E85BC: lui         $a1, 0xBE99
    ctx->r5 = S32(0XBE99 << 16);
    // 0x801E85C0: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x801E85C4: jal         0x801D6508
    // 0x801E85C8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801D6508_6018E8(rdram, ctx);
        goto after_5;
    // 0x801E85C8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_5:
    // 0x801E85CC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E85D0: lwc1        $f4, 0x74($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X74);
    // 0x801E85D4: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x801E85D8: nop

    // 0x801E85DC: bc1fl       L_801E88B8
    if (!c1cs) {
        // 0x801E85E0: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_801E88B8;
    }
    goto skip_1;
    // 0x801E85E0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_1:
    // 0x801E85E4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x801E85E8: jal         0x801D4408
    // 0x801E85EC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801D4408_5FF7E8(rdram, ctx);
        goto after_6;
    // 0x801E85EC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_6:
    // 0x801E85F0: beql        $v0, $zero, L_801E88B8
    if (ctx->r2 == 0) {
        // 0x801E85F4: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_801E88B8;
    }
    goto skip_2;
    // 0x801E85F4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_2:
    // 0x801E85F8: jal         0x80038BC8
    // 0x801E85FC: addiu       $a0, $zero, 0x117
    ctx->r4 = ADD32(0, 0X117);
    func_80038BC8_397C8(rdram, ctx);
        goto after_7;
    // 0x801E85FC: addiu       $a0, $zero, 0x117
    ctx->r4 = ADD32(0, 0X117);
    after_7:
    // 0x801E8600: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E8604: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801E8608: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x801E860C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801E8610: addiu       $t9, $zero, 0xB
    ctx->r25 = ADD32(0, 0XB);
    // 0x801E8614: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801E8618: swc1        $f8, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f8.u32l;
    // 0x801E861C: lwc1        $f10, 0x74($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X74);
    // 0x801E8620: lwc1        $f18, 0x70($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X70);
    // 0x801E8624: lwc1        $f8, 0x78($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X78);
    // 0x801E8628: div.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x801E862C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E8630: lui         $a1, 0x40E0
    ctx->r5 = S32(0X40E0 << 16);
    // 0x801E8634: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x801E8638: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801E863C: div.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f18.fl, ctx->f0.fl);
    // 0x801E8640: neg.s       $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = -ctx->f16.fl;
    // 0x801E8644: swc1        $f6, 0x74($s1)
    MEM_W(0X74, ctx->r17) = ctx->f6.u32l;
    // 0x801E8648: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E864C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801E8650: div.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x801E8654: swc1        $f4, 0x70($s1)
    MEM_W(0X70, ctx->r17) = ctx->f4.u32l;
    // 0x801E8658: swc1        $f10, 0x78($s1)
    MEM_W(0X78, ctx->r17) = ctx->f10.u32l;
    // 0x801E865C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x801E8660: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801E8664: sb          $t9, 0x18($t0)
    MEM_B(0X18, ctx->r8) = ctx->r25;
    // 0x801E8668: lwc1        $f16, 0x1C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801E866C: mul.s       $f18, $f16, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x801E8670: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x801E8674: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801E8678: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x801E867C: lwc1        $f8, 0xC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801E8680: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801E8684: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x801E8688: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801E868C: jal         0x801E006C
    // 0x801E8690: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_8;
    // 0x801E8690: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    after_8:
    // 0x801E8694: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801E8698: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801E869C: lwc1        $f18, 0x1C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801E86A0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801E86A4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E86A8: mul.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x801E86AC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E86B0: lui         $a1, 0x40E0
    ctx->r5 = S32(0X40E0 << 16);
    // 0x801E86B4: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x801E86B8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801E86BC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x801E86C0: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801E86C4: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x801E86C8: lwc1        $f16, 0xC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801E86CC: add.s       $f18, $f16, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x801E86D0: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x801E86D4: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801E86D8: jal         0x801E006C
    // 0x801E86DC: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_9;
    // 0x801E86DC: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    after_9:
    // 0x801E86E0: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801E86E4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801E86E8: lwc1        $f8, 0x1C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801E86EC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801E86F0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801E86F4: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x801E86F8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E86FC: lui         $a1, 0x40E0
    ctx->r5 = S32(0X40E0 << 16);
    // 0x801E8700: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    // 0x801E8704: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801E8708: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x801E870C: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801E8710: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801E8714: lwc1        $f18, 0xC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801E8718: add.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801E871C: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x801E8720: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801E8724: jal         0x801E006C
    // 0x801E8728: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_10;
    // 0x801E8728: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    after_10:
    // 0x801E872C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801E8730: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E8734: lwc1        $f16, 0x1C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801E8738: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801E873C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801E8740: mul.s       $f18, $f16, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x801E8744: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E8748: lui         $a1, 0x40E0
    ctx->r5 = S32(0X40E0 << 16);
    // 0x801E874C: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x801E8750: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801E8754: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x801E8758: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801E875C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x801E8760: lwc1        $f8, 0xC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801E8764: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801E8768: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x801E876C: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801E8770: jal         0x801E006C
    // 0x801E8774: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_11;
    // 0x801E8774: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    after_11:
    // 0x801E8778: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801E877C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801E8780: lwc1        $f18, 0x1C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801E8784: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801E8788: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E878C: mul.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x801E8790: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E8794: lui         $a1, 0x40E0
    ctx->r5 = S32(0X40E0 << 16);
    // 0x801E8798: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    // 0x801E879C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801E87A0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x801E87A4: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801E87A8: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x801E87AC: lwc1        $f16, 0xC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801E87B0: add.s       $f18, $f16, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x801E87B4: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x801E87B8: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801E87BC: jal         0x801E006C
    // 0x801E87C0: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_12;
    // 0x801E87C0: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    after_12:
    // 0x801E87C4: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801E87C8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801E87CC: lwc1        $f8, 0x1C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801E87D0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801E87D4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801E87D8: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x801E87DC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E87E0: lui         $a1, 0x40E0
    ctx->r5 = S32(0X40E0 << 16);
    // 0x801E87E4: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    // 0x801E87E8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801E87EC: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x801E87F0: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801E87F4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801E87F8: lwc1        $f18, 0xC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801E87FC: add.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801E8800: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x801E8804: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801E8808: jal         0x801E006C
    // 0x801E880C: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_13;
    // 0x801E880C: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    after_13:
    // 0x801E8810: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801E8814: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E8818: lwc1        $f16, 0x1C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801E881C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801E8820: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801E8824: mul.s       $f18, $f16, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x801E8828: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E882C: lui         $a1, 0x40E0
    ctx->r5 = S32(0X40E0 << 16);
    // 0x801E8830: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    // 0x801E8834: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801E8838: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x801E883C: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801E8840: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x801E8844: lwc1        $f8, 0xC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801E8848: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801E884C: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x801E8850: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801E8854: jal         0x801E006C
    // 0x801E8858: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_14;
    // 0x801E8858: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    after_14:
    // 0x801E885C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801E8860: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801E8864: lwc1        $f18, 0x1C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801E8868: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801E886C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E8870: mul.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x801E8874: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E8878: lui         $a1, 0x40E0
    ctx->r5 = S32(0X40E0 << 16);
    // 0x801E887C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x801E8880: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801E8884: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x801E8888: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801E888C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x801E8890: lwc1        $f16, 0xC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801E8894: add.s       $f18, $f16, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x801E8898: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x801E889C: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801E88A0: jal         0x801E006C
    // 0x801E88A4: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_15;
    // 0x801E88A4: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    after_15:
    // 0x801E88A8: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801E88AC: jal         0x8003521C
    // 0x801E88B0: addiu       $a0, $a0, -0x7738
    ctx->r4 = ADD32(ctx->r4, -0X7738);
    func_8003521C_35E1C(rdram, ctx);
        goto after_16;
    // 0x801E88B0: addiu       $a0, $a0, -0x7738
    ctx->r4 = ADD32(ctx->r4, -0X7738);
    after_16:
    // 0x801E88B4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_801E88B8:
    // 0x801E88B8: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x801E88BC: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x801E88C0: jr          $ra
    // 0x801E88C4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x801E88C4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_801E66C4_611AA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E66C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E66C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E66CC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E66D0: lw          $t6, 0x94($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X94);
    // 0x801E66D4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801E66D8: addiu       $v0, $t6, 0x5
    ctx->r2 = ADD32(ctx->r14, 0X5);
    // 0x801E66DC: sltiu       $at, $v0, 0x32
    ctx->r1 = ctx->r2 < 0X32 ? 1 : 0;
    // 0x801E66E0: bne         $at, $zero, L_801E66F0
    if (ctx->r1 != 0) {
        // 0x801E66E4: sw          $v0, 0x94($a0)
        MEM_W(0X94, ctx->r4) = ctx->r2;
            goto L_801E66F0;
    }
    // 0x801E66E4: sw          $v0, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->r2;
    // 0x801E66E8: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x801E66EC: sw          $v0, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->r2;
L_801E66F0:
    // 0x801E66F0: lw          $t9, 0x98($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X98);
    // 0x801E66F4: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x801E66F8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x801E66FC: addu        $t0, $v0, $t9
    ctx->r8 = ADD32(ctx->r2, ctx->r25);
    // 0x801E6700: sh          $t0, 0x16($t1)
    MEM_H(0X16, ctx->r9) = ctx->r8;
    // 0x801E6704: jal         0x801D614C
    // 0x801E6708: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_801D614C_60152C(rdram, ctx);
        goto after_0;
    // 0x801E6708: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x801E670C: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x801E6710: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801E6714: lwc1        $f2, 0x10($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801E6718: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x801E671C: nop

    // 0x801E6720: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x801E6724: jal         0x800417E0
    // 0x801E6728: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    _nsqrtf(rdram, ctx);
        goto after_1;
    // 0x801E6728: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_1:
    // 0x801E672C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x801E6730: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801E6734: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E6738: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801E673C: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x801E6740: addiu       $t2, $zero, 0x28
    ctx->r10 = ADD32(0, 0X28);
    // 0x801E6744: addiu       $a1, $a1, -0x4E38
    ctx->r5 = ADD32(ctx->r5, -0X4E38);
    // 0x801E6748: bc1fl       L_801E676C
    if (!c1cs) {
        // 0x801E674C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E676C;
    }
    goto skip_0;
    // 0x801E674C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801E6750: sw          $t2, 0x7C($a2)
    MEM_W(0X7C, ctx->r6) = ctx->r10;
    // 0x801E6754: jal         0x801D2EE4
    // 0x801E6758: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_2;
    // 0x801E6758: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x801E675C: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E6760: jal         0x8003521C
    // 0x801E6764: addiu       $a0, $a0, 0x6778
    ctx->r4 = ADD32(ctx->r4, 0X6778);
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801E6764: addiu       $a0, $a0, 0x6778
    ctx->r4 = ADD32(ctx->r4, 0X6778);
    after_3:
    // 0x801E6768: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E676C:
    // 0x801E676C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E6770: jr          $ra
    // 0x801E6774: nop

    TRACE_RETURN()
    return;
    // 0x801E6774: nop

;}
RECOMP_FUNC void func_8020212C_62D50C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020212C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80202130: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80202134: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80202138: jal         0x80203F88
    // 0x8020213C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80203F88_62F368(rdram, ctx);
        goto after_0;
    // 0x8020213C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80202140: jal         0x801D3894
    // 0x80202144: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801D3894_5FEC74(rdram, ctx);
        goto after_1;
    // 0x80202144: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80202148: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020214C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80202150: jr          $ra
    // 0x80202154: nop

    TRACE_RETURN()
    return;
    // 0x80202154: nop

;}
RECOMP_FUNC void func_801E3D74_60F154(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E3D74: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801E3D78: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801E3D7C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801E3D80: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801E3D84: lwc1        $f4, 0xA0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XA0);
    // 0x801E3D88: lui         $at, 0x4366
    ctx->r1 = S32(0X4366 << 16);
    // 0x801E3D8C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801E3D90: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    // 0x801E3D94: lwc1        $f6, 0xA4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XA4);
    // 0x801E3D98: addiu       $t6, $sp, 0x4C
    ctx->r14 = ADD32(ctx->r29, 0X4C);
    // 0x801E3D9C: addiu       $t7, $sp, 0x48
    ctx->r15 = ADD32(ctx->r29, 0X48);
    // 0x801E3DA0: swc1        $f6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f6.u32l;
    // 0x801E3DA4: lwc1        $f8, 0xA8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XA8);
    // 0x801E3DA8: addiu       $t8, $sp, 0x44
    ctx->r24 = ADD32(ctx->r29, 0X44);
    // 0x801E3DAC: addiu       $v0, $v0, 0xA0
    ctx->r2 = ADD32(ctx->r2, 0XA0);
    // 0x801E3DB0: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    // 0x801E3DB4: lw          $a3, 0x14($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X14);
    // 0x801E3DB8: lw          $a2, 0x10($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X10);
    // 0x801E3DBC: lwc1        $f14, 0xC($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801E3DC0: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x801E3DC4: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x801E3DC8: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x801E3DCC: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801E3DD0: jal         0x8000E4E4
    // 0x801E3DD4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_8000E4E4_F0E4(rdram, ctx);
        goto after_0;
    // 0x801E3DD4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x801E3DD8: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x801E3DDC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E3DE0: ldc1        $f18, -0x2320($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0X2320);
    // 0x801E3DE4: lwc1        $f10, 0x94($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X94);
    // 0x801E3DE8: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x801E3DEC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x801E3DF0: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x801E3DF4: lui         $at, 0xC044
    ctx->r1 = S32(0XC044 << 16);
    // 0x801E3DF8: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x801E3DFC: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801E3E00: swc1        $f6, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->f6.u32l;
    // 0x801E3E04: lw          $t9, -0x1130($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1130);
    // 0x801E3E08: lwc1        $f12, 0x48($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X48);
    // 0x801E3E0C: lbu         $t0, 0x2C0($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X2C0);
    // 0x801E3E10: bnel        $t0, $zero, L_801E3ED0
    if (ctx->r8 != 0) {
        // 0x801E3E14: mtc1        $at, $f19
        ctx->f_odd[(19 - 1) * 2] = ctx->r1;
            goto L_801E3ED0;
    }
    goto skip_0;
    // 0x801E3E14: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    skip_0:
    // 0x801E3E18: lwc1        $f12, 0x48($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X48);
    // 0x801E3E1C: lui         $at, 0xC054
    ctx->r1 = S32(0XC054 << 16);
    // 0x801E3E20: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801E3E24: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801E3E28: cvt.d.s     $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.d = CVT_D_S(ctx->f12.fl);
    // 0x801E3E2C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801E3E30: c.le.d      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.d <= ctx->f8.d;
    // 0x801E3E34: lui         $at, 0xC2A0
    ctx->r1 = S32(0XC2A0 << 16);
    // 0x801E3E38: bc1fl       L_801E3E54
    if (!c1cs) {
        // 0x801E3E3C: lui         $at, 0x4054
        ctx->r1 = S32(0X4054 << 16);
            goto L_801E3E54;
    }
    goto skip_1;
    // 0x801E3E3C: lui         $at, 0x4054
    ctx->r1 = S32(0X4054 << 16);
    skip_1:
    // 0x801E3E40: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801E3E44: nop

    // 0x801E3E48: cvt.d.s     $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.d = CVT_D_S(ctx->f12.fl);
    // 0x801E3E4C: swc1        $f12, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f12.u32l;
    // 0x801E3E50: lui         $at, 0x4054
    ctx->r1 = S32(0X4054 << 16);
L_801E3E54:
    // 0x801E3E54: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x801E3E58: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x801E3E5C: c.le.d      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.d <= ctx->f0.d;
    // 0x801E3E60: nop

    // 0x801E3E64: bc1fl       L_801E3E7C
    if (!c1cs) {
        // 0x801E3E68: lwc1        $f16, 0x48($sp)
        ctx->f16.u32l = MEM_W(ctx->r29, 0X48);
            goto L_801E3E7C;
    }
    goto skip_2;
    // 0x801E3E68: lwc1        $f16, 0x48($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X48);
    skip_2:
    // 0x801E3E6C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801E3E70: nop

    // 0x801E3E74: swc1        $f12, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f12.u32l;
    // 0x801E3E78: lwc1        $f16, 0x48($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X48);
L_801E3E7C:
    // 0x801E3E7C: lui         $at, 0x4044
    ctx->r1 = S32(0X4044 << 16);
    // 0x801E3E80: mtc1        $at, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r1;
    // 0x801E3E84: neg.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = -ctx->f16.fl;
    // 0x801E3E88: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801E3E8C: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801E3E90: lui         $at, 0x4064
    ctx->r1 = S32(0X4064 << 16);
    // 0x801E3E94: add.d       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f2.d); 
    ctx->f6.d = ctx->f4.d + ctx->f2.d;
    // 0x801E3E98: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x801E3E9C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801E3EA0: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x801E3EA4: swc1        $f8, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->f8.u32l;
    // 0x801E3EA8: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801E3EAC: lwc1        $f6, 0x94($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X94);
    // 0x801E3EB0: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801E3EB4: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801E3EB8: add.d       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f10.d + ctx->f18.d;
    // 0x801E3EBC: add.d       $f16, $f8, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f4.d); 
    ctx->f16.d = ctx->f8.d + ctx->f4.d;
    // 0x801E3EC0: cvt.s.d     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f10.fl = CVT_S_D(ctx->f16.d);
    // 0x801E3EC4: b           L_801E3F68
    // 0x801E3EC8: swc1        $f10, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->f10.u32l;
        goto L_801E3F68;
    // 0x801E3EC8: swc1        $f10, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->f10.u32l;
    // 0x801E3ECC: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
L_801E3ED0:
    // 0x801E3ED0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801E3ED4: cvt.d.s     $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.d = CVT_D_S(ctx->f12.fl);
    // 0x801E3ED8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801E3EDC: c.le.d      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.d <= ctx->f18.d;
    // 0x801E3EE0: lui         $at, 0xC220
    ctx->r1 = S32(0XC220 << 16);
    // 0x801E3EE4: bc1fl       L_801E3F00
    if (!c1cs) {
        // 0x801E3EE8: lui         $at, 0x4044
        ctx->r1 = S32(0X4044 << 16);
            goto L_801E3F00;
    }
    goto skip_3;
    // 0x801E3EE8: lui         $at, 0x4044
    ctx->r1 = S32(0X4044 << 16);
    skip_3:
    // 0x801E3EEC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801E3EF0: nop

    // 0x801E3EF4: cvt.d.s     $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.d = CVT_D_S(ctx->f12.fl);
    // 0x801E3EF8: swc1        $f12, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f12.u32l;
    // 0x801E3EFC: lui         $at, 0x4044
    ctx->r1 = S32(0X4044 << 16);
L_801E3F00:
    // 0x801E3F00: mtc1        $at, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r1;
    // 0x801E3F04: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x801E3F08: c.le.d      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.d <= ctx->f0.d;
    // 0x801E3F0C: nop

    // 0x801E3F10: bc1fl       L_801E3F28
    if (!c1cs) {
        // 0x801E3F14: lwc1        $f6, 0x48($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
            goto L_801E3F28;
    }
    goto skip_4;
    // 0x801E3F14: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    skip_4:
    // 0x801E3F18: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801E3F1C: nop

    // 0x801E3F20: swc1        $f12, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f12.u32l;
    // 0x801E3F24: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
L_801E3F28:
    // 0x801E3F28: lui         $at, 0x4064
    ctx->r1 = S32(0X4064 << 16);
    // 0x801E3F2C: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x801E3F30: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x801E3F34: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801E3F38: cvt.d.s     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f4.d = CVT_D_S(ctx->f8.fl);
    // 0x801E3F3C: add.d       $f16, $f4, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f2.d); 
    ctx->f16.d = ctx->f4.d + ctx->f2.d;
    // 0x801E3F40: cvt.s.d     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f10.fl = CVT_S_D(ctx->f16.d);
    // 0x801E3F44: swc1        $f10, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->f10.u32l;
    // 0x801E3F48: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801E3F4C: lwc1        $f16, 0x94($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X94);
    // 0x801E3F50: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801E3F54: cvt.d.s     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f10.d = CVT_D_S(ctx->f16.fl);
    // 0x801E3F58: add.d       $f4, $f18, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f8.d); 
    ctx->f4.d = ctx->f18.d + ctx->f8.d;
    // 0x801E3F5C: add.d       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f10.d + ctx->f4.d;
    // 0x801E3F60: cvt.s.d     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f18.fl = CVT_S_D(ctx->f6.d);
    // 0x801E3F64: swc1        $f18, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->f18.u32l;
L_801E3F68:
    // 0x801E3F68: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801E3F6C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x801E3F70: jr          $ra
    // 0x801E3F74: nop

    TRACE_RETURN()
    return;
    // 0x801E3F74: nop

;}
RECOMP_FUNC void func_801D1E98_5FD278(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D1E98: lui         $a3, 0x8021
    ctx->r7 = S32(0X8021 << 16);
    // 0x801D1E9C: lw          $a3, -0x1130($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X1130);
    // 0x801D1EA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D1EA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D1EA8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x801D1EAC: lui         $at, 0xC220
    ctx->r1 = S32(0XC220 << 16);
    // 0x801D1EB0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801D1EB4: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x801D1EB8: addiu       $t7, $zero, 0x36
    ctx->r15 = ADD32(0, 0X36);
    // 0x801D1EBC: addiu       $t8, $zero, 0x136
    ctx->r24 = ADD32(0, 0X136);
    // 0x801D1EC0: addiu       $t9, $zero, 0xB8
    ctx->r25 = ADD32(0, 0XB8);
    // 0x801D1EC4: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x801D1EC8: addiu       $v1, $a3, 0xA0
    ctx->r3 = ADD32(ctx->r7, 0XA0);
    // 0x801D1ECC: sb          $t0, 0x2C0($a3)
    MEM_B(0X2C0, ctx->r7) = ctx->r8;
    // 0x801D1ED0: sb          $zero, 0x2C1($a3)
    MEM_B(0X2C1, ctx->r7) = 0;
    // 0x801D1ED4: sb          $t0, 0x2C2($a3)
    MEM_B(0X2C2, ctx->r7) = ctx->r8;
    // 0x801D1ED8: sb          $zero, 0x2C3($a3)
    MEM_B(0X2C3, ctx->r7) = 0;
    // 0x801D1EDC: sw          $t6, 0x1EC($a3)
    MEM_W(0X1EC, ctx->r7) = ctx->r14;
    // 0x801D1EE0: sw          $t7, 0x1F0($a3)
    MEM_W(0X1F0, ctx->r7) = ctx->r15;
    // 0x801D1EE4: sw          $t8, 0x1F4($a3)
    MEM_W(0X1F4, ctx->r7) = ctx->r24;
    // 0x801D1EE8: sw          $t9, 0x1F8($a3)
    MEM_W(0X1F8, ctx->r7) = ctx->r25;
    // 0x801D1EEC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D1EF0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D1EF4: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x801D1EF8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D1EFC: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801D1F00: swc1        $f4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f4.u32l;
    // 0x801D1F04: swc1        $f0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f0.u32l;
    // 0x801D1F08: swc1        $f0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f0.u32l;
    // 0x801D1F0C: swc1        $f0, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f0.u32l;
    // 0x801D1F10: swc1        $f6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f6.u32l;
    // 0x801D1F14: swc1        $f8, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f8.u32l;
    // 0x801D1F18: addiu       $a1, $a1, 0x1F4C
    ctx->r5 = ADD32(ctx->r5, 0X1F4C);
    // 0x801D1F1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D1F20: jal         0x80034E08
    // 0x801D1F24: lw          $a0, 0x1C0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X1C0);
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x801D1F24: lw          $a0, 0x1C0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X1C0);
    after_0:
    // 0x801D1F28: beql        $v0, $zero, L_801D1F40
    if (ctx->r2 == 0) {
        // 0x801D1F2C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801D1F40;
    }
    goto skip_0;
    // 0x801D1F2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801D1F30: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x801D1F34: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x801D1F38: sb          $t1, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r9;
    // 0x801D1F3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801D1F40:
    // 0x801D1F40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D1F44: jr          $ra
    // 0x801D1F48: nop

    TRACE_RETURN()
    return;
    // 0x801D1F48: nop

;}
RECOMP_FUNC void func_801E13F0_60C7D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E13F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801E13F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E13F8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801E13FC: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x801E1400: lwc1        $f0, 0x94($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X94);
    // 0x801E1404: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x801E1408: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801E140C: c.eq.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl == ctx->f0.fl;
    // 0x801E1410: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x801E1414: lui         $a3, 0x3F00
    ctx->r7 = S32(0X3F00 << 16);
    // 0x801E1418: bc1fl       L_801E14E4
    if (!c1cs) {
        // 0x801E141C: mfc1        $a1, $f0
        ctx->r5 = (int32_t)ctx->f0.u32l;
            goto L_801E14E4;
    }
    goto skip_0;
    // 0x801E141C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    skip_0:
    // 0x801E1420: lwc1        $f2, 0x70($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X70);
    // 0x801E1424: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E1428: ldc1        $f4, -0x23E8($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X23E8);
    // 0x801E142C: cvt.d.s     $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.d = CVT_D_S(ctx->f2.fl);
    // 0x801E1430: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E1434: c.lt.d      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.d < ctx->f0.d;
    // 0x801E1438: nop

    // 0x801E143C: bc1f        L_801E145C
    if (!c1cs) {
        // 0x801E1440: nop
    
            goto L_801E145C;
    }
    // 0x801E1440: nop

    // 0x801E1444: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E1448: ldc1        $f6, -0x23E0($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X23E0);
    // 0x801E144C: sub.d       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f0.d - ctx->f6.d;
    // 0x801E1450: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801E1454: b           L_801E14D0
    // 0x801E1458: swc1        $f10, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f10.u32l;
        goto L_801E14D0;
    // 0x801E1458: swc1        $f10, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f10.u32l;
L_801E145C:
    // 0x801E145C: ldc1        $f16, -0x23D8($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0X23D8);
    // 0x801E1460: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E1464: c.lt.d      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.d < ctx->f16.d;
    // 0x801E1468: nop

    // 0x801E146C: bc1fl       L_801E148C
    if (!c1cs) {
        // 0x801E1470: c.le.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl <= ctx->f2.fl;
            goto L_801E148C;
    }
    goto skip_1;
    // 0x801E1470: c.le.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl <= ctx->f2.fl;
    skip_1:
    // 0x801E1474: ldc1        $f18, -0x23D0($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0X23D0);
    // 0x801E1478: add.d       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f0.d + ctx->f18.d;
    // 0x801E147C: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801E1480: b           L_801E14D0
    // 0x801E1484: swc1        $f6, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f6.u32l;
        goto L_801E14D0;
    // 0x801E1484: swc1        $f6, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f6.u32l;
    // 0x801E1488: c.le.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl <= ctx->f2.fl;
L_801E148C:
    // 0x801E148C: lui         $at, 0xBFE0
    ctx->r1 = S32(0XBFE0 << 16);
    // 0x801E1490: bc1fl       L_801E14B8
    if (!c1cs) {
        // 0x801E1494: mtc1        $at, $f17
        ctx->f_odd[(17 - 1) * 2] = ctx->r1;
            goto L_801E14B8;
    }
    goto skip_2;
    // 0x801E1494: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    skip_2:
    // 0x801E1498: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x801E149C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801E14A0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801E14A4: nop

    // 0x801E14A8: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801E14AC: b           L_801E14C8
    // 0x801E14B0: swc1        $f10, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f10.u32l;
        goto L_801E14C8;
    // 0x801E14B0: swc1        $f10, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f10.u32l;
    // 0x801E14B4: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
L_801E14B8:
    // 0x801E14B8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801E14BC: nop

    // 0x801E14C0: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801E14C4: swc1        $f18, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f18.u32l;
L_801E14C8:
    // 0x801E14C8: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801E14CC: swc1        $f4, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->f4.u32l;
L_801E14D0:
    // 0x801E14D0: jal         0x801D600C
    // 0x801E14D4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_801D600C_6013EC(rdram, ctx);
        goto after_0;
    // 0x801E14D4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x801E14D8: b           L_801E14F0
    // 0x801E14DC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
        goto L_801E14F0;
    // 0x801E14DC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801E14E0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
L_801E14E4:
    // 0x801E14E4: jal         0x801D694C
    // 0x801E14E8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_801D694C_601D2C(rdram, ctx);
        goto after_1;
    // 0x801E14E8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_1:
    // 0x801E14EC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_801E14F0:
    // 0x801E14F0: lwc1        $f6, 0x74($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X74);
    // 0x801E14F4: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x801E14F8: mtc1        $at, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r1;
    // 0x801E14FC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801E1500: cvt.d.s     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f0.d = CVT_D_S(ctx->f6.fl);
    // 0x801E1504: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E1508: c.lt.d      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.d < ctx->f0.d;
    // 0x801E150C: nop

    // 0x801E1510: bc1f        L_801E1558
    if (!c1cs) {
        // 0x801E1514: nop
    
            goto L_801E1558;
    }
    // 0x801E1514: nop

    // 0x801E1518: ldc1        $f8, -0x23C8($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X23C8);
    // 0x801E151C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E1520: sub.d       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f0.d - ctx->f8.d;
    // 0x801E1524: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801E1528: swc1        $f16, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f16.u32l;
    // 0x801E152C: lwc1        $f18, 0x74($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X74);
    // 0x801E1530: cvt.d.s     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f0.d = CVT_D_S(ctx->f18.fl);
    // 0x801E1534: c.le.d      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.d <= ctx->f2.d;
    // 0x801E1538: nop

    // 0x801E153C: bc1f        L_801E1558
    if (!c1cs) {
        // 0x801E1540: nop
    
            goto L_801E1558;
    }
    // 0x801E1540: nop

    // 0x801E1544: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801E1548: nop

    // 0x801E154C: swc1        $f4, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f4.u32l;
    // 0x801E1550: lwc1        $f6, 0x74($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X74);
    // 0x801E1554: cvt.d.s     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f0.d = CVT_D_S(ctx->f6.fl);
L_801E1558:
    // 0x801E1558: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E155C: ldc1        $f2, -0x23C0($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, -0X23C0);
    // 0x801E1560: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E1564: c.lt.d      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.d < ctx->f2.d;
    // 0x801E1568: nop

    // 0x801E156C: bc1fl       L_801E15AC
    if (!c1cs) {
        // 0x801E1570: lwc1        $f8, 0x78($a0)
        ctx->f8.u32l = MEM_W(ctx->r4, 0X78);
            goto L_801E15AC;
    }
    goto skip_3;
    // 0x801E1570: lwc1        $f8, 0x78($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X78);
    skip_3:
    // 0x801E1574: ldc1        $f8, -0x23B8($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X23B8);
    // 0x801E1578: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E157C: add.d       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f0.d + ctx->f8.d;
    // 0x801E1580: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801E1584: swc1        $f16, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f16.u32l;
    // 0x801E1588: lwc1        $f18, 0x74($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X74);
    // 0x801E158C: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801E1590: c.le.d      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.d <= ctx->f4.d;
    // 0x801E1594: nop

    // 0x801E1598: bc1fl       L_801E15AC
    if (!c1cs) {
        // 0x801E159C: lwc1        $f8, 0x78($a0)
        ctx->f8.u32l = MEM_W(ctx->r4, 0X78);
            goto L_801E15AC;
    }
    goto skip_4;
    // 0x801E159C: lwc1        $f8, 0x78($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X78);
    skip_4:
    // 0x801E15A0: lwc1        $f6, -0x23B0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X23B0);
    // 0x801E15A4: swc1        $f6, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f6.u32l;
    // 0x801E15A8: lwc1        $f8, 0x78($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X78);
L_801E15AC:
    // 0x801E15AC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E15B0: ldc1        $f10, -0x23A8($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X23A8);
    // 0x801E15B4: cvt.d.s     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f0.d = CVT_D_S(ctx->f8.fl);
    // 0x801E15B8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E15BC: c.lt.d      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.d < ctx->f0.d;
    // 0x801E15C0: nop

    // 0x801E15C4: bc1f        L_801E15E4
    if (!c1cs) {
        // 0x801E15C8: nop
    
            goto L_801E15E4;
    }
    // 0x801E15C8: nop

    // 0x801E15CC: ldc1        $f16, -0x23A0($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0X23A0);
    // 0x801E15D0: sub.d       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f0.d - ctx->f16.d;
    // 0x801E15D4: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x801E15D8: swc1        $f4, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f4.u32l;
    // 0x801E15DC: lwc1        $f6, 0x78($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X78);
    // 0x801E15E0: cvt.d.s     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f0.d = CVT_D_S(ctx->f6.fl);
L_801E15E4:
    // 0x801E15E4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E15E8: ldc1        $f8, -0x2398($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X2398);
    // 0x801E15EC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E15F0: c.lt.d      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.d < ctx->f8.d;
    // 0x801E15F4: nop

    // 0x801E15F8: bc1f        L_801E1610
    if (!c1cs) {
        // 0x801E15FC: nop
    
            goto L_801E1610;
    }
    // 0x801E15FC: nop

    // 0x801E1600: ldc1        $f10, -0x2390($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X2390);
    // 0x801E1604: add.d       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f0.d + ctx->f10.d;
    // 0x801E1608: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801E160C: swc1        $f18, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f18.u32l;
L_801E1610:
    // 0x801E1610: jal         0x801D603C
    // 0x801E1614: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_801D603C_60141C(rdram, ctx);
        goto after_2;
    // 0x801E1614: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_2:
    // 0x801E1618: jal         0x801D606C
    // 0x801E161C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_801D606C_60144C(rdram, ctx);
        goto after_3;
    // 0x801E161C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_3:
    // 0x801E1620: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801E1624: lw          $t6, 0x7C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X7C);
    // 0x801E1628: andi        $t7, $t6, 0x8
    ctx->r15 = ctx->r14 & 0X8;
    // 0x801E162C: beql        $t7, $zero, L_801E165C
    if (ctx->r15 == 0) {
        // 0x801E1630: lwc1        $f4, 0x1C($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
            goto L_801E165C;
    }
    goto skip_5;
    // 0x801E1630: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    skip_5:
    // 0x801E1634: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801E1638: lwc1        $f6, 0x90($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X90);
    // 0x801E163C: lwc1        $f10, 0x20($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X20);
    // 0x801E1640: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801E1644: swc1        $f8, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f8.u32l;
    // 0x801E1648: lwc1        $f16, 0x90($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X90);
    // 0x801E164C: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x801E1650: b           L_801E1678
    // 0x801E1654: swc1        $f18, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f18.u32l;
        goto L_801E1678;
    // 0x801E1654: swc1        $f18, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f18.u32l;
    // 0x801E1658: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
L_801E165C:
    // 0x801E165C: lwc1        $f6, 0x90($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X90);
    // 0x801E1660: lwc1        $f10, 0x20($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X20);
    // 0x801E1664: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801E1668: swc1        $f8, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f8.u32l;
    // 0x801E166C: lwc1        $f16, 0x90($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X90);
    // 0x801E1670: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801E1674: swc1        $f18, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f18.u32l;
L_801E1678:
    // 0x801E1678: lw          $t8, 0x7C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X7C);
    // 0x801E167C: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x801E1680: bne         $t9, $zero, L_801E1698
    if (ctx->r25 != 0) {
        // 0x801E1684: sw          $t9, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r25;
            goto L_801E1698;
    }
    // 0x801E1684: sw          $t9, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r25;
    // 0x801E1688: jal         0x80034ED4
    // 0x801E168C: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_4;
    // 0x801E168C: nop

    after_4:
    // 0x801E1690: b           L_801E16C0
    // 0x801E1694: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E16C0;
    // 0x801E1694: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E1698:
    // 0x801E1698: jal         0x801F7168
    // 0x801E169C: nop

    func_801F7168_622548(rdram, ctx);
        goto after_5;
    // 0x801E169C: nop

    after_5:
    // 0x801E16A0: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801E16A4: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x801E16A8: nop

    // 0x801E16AC: bc1fl       L_801E16C0
    if (!c1cs) {
        // 0x801E16B0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801E16C0;
    }
    goto skip_6;
    // 0x801E16B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_6:
    // 0x801E16B4: jal         0x80034ED4
    // 0x801E16B8: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_6;
    // 0x801E16B8: nop

    after_6:
    // 0x801E16BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E16C0:
    // 0x801E16C0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801E16C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801E16C8: jr          $ra
    // 0x801E16CC: nop

    TRACE_RETURN()
    return;
    // 0x801E16CC: nop

;}
RECOMP_FUNC void func_801D46B8_5FFA98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D46B8: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x801D46BC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801D46C0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x801D46C4: swc1        $f12, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f12.u32l;
    // 0x801D46C8: swc1        $f14, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f14.u32l;
    // 0x801D46CC: sw          $a2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r6;
    // 0x801D46D0: lwc1        $f4, 0x70($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X70);
    // 0x801D46D4: lwc1        $f2, 0x78($a3)
    ctx->f2.u32l = MEM_W(ctx->r7, 0X78);
    // 0x801D46D8: lhu         $v0, 0x7A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X7A);
    // 0x801D46DC: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x801D46E0: lwc1        $f6, 0x74($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X74);
    // 0x801D46E4: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x801D46E8: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x801D46EC: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    // 0x801D46F0: mul.s       $f10, $f8, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x801D46F4: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801D46F8: or          $s0, $a3, $zero
    ctx->r16 = ctx->r7 | 0;
    // 0x801D46FC: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x801D4700: mul.s       $f18, $f16, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x801D4704: or          $t2, $zero, $zero
    ctx->r10 = 0 | 0;
    // 0x801D4708: or          $t3, $zero, $zero
    ctx->r11 = 0 | 0;
    // 0x801D470C: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x801D4710: addiu       $t7, $sp, 0x50
    ctx->r15 = ADD32(ctx->r29, 0X50);
    // 0x801D4714: addiu       $t8, $sp, 0x52
    ctx->r24 = ADD32(ctx->r29, 0X52);
    // 0x801D4718: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x801D471C: add.s       $f0, $f6, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x801D4720: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x801D4724: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
    // 0x801D4728: bgez        $v0, L_801D473C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x801D472C: lw          $v1, 0x18($a3)
        ctx->r3 = MEM_W(ctx->r7, 0X18);
            goto L_801D473C;
    }
    // 0x801D472C: lw          $v1, 0x18($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X18);
    // 0x801D4730: negu        $t6, $v0
    ctx->r14 = SUB32(0, ctx->r2);
    // 0x801D4734: b           L_801D4740
    // 0x801D4738: sh          $t6, 0x7A($sp)
    MEM_H(0X7A, ctx->r29) = ctx->r14;
        goto L_801D4740;
    // 0x801D4738: sh          $t6, 0x7A($sp)
    MEM_H(0X7A, ctx->r29) = ctx->r14;
L_801D473C:
    // 0x801D473C: sh          $v0, 0x7A($sp)
    MEM_H(0X7A, ctx->r29) = ctx->r2;
L_801D4740:
    // 0x801D4740: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D4744: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x801D4748: lwc1        $f14, 0x34($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801D474C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801D4750: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x801D4754: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x801D4758: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    // 0x801D475C: sb          $t1, 0x43($sp)
    MEM_B(0X43, ctx->r29) = ctx->r9;
    // 0x801D4760: sb          $t2, 0x42($sp)
    MEM_B(0X42, ctx->r29) = ctx->r10;
    // 0x801D4764: sb          $t3, 0x41($sp)
    MEM_B(0X41, ctx->r29) = ctx->r11;
    // 0x801D4768: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x801D476C: jal         0x8000EC04
    // 0x801D4770: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    func_8000EC04_F804(rdram, ctx);
        goto after_0;
    // 0x801D4770: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x801D4774: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x801D4778: addiu       $t9, $sp, 0x4C
    ctx->r25 = ADD32(ctx->r29, 0X4C);
    // 0x801D477C: addiu       $t6, $sp, 0x4E
    ctx->r14 = ADD32(ctx->r29, 0X4E);
    // 0x801D4780: lwc1        $f8, 0xC($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0XC);
    // 0x801D4784: lw          $a3, 0x8($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X8);
    // 0x801D4788: lwc1        $f12, 0x68($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801D478C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x801D4790: lwc1        $f16, 0x10($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X10);
    // 0x801D4794: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x801D4798: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x801D479C: lwc1        $f14, 0x6C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801D47A0: lw          $a2, 0x70($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X70);
    // 0x801D47A4: jal         0x8000EC04
    // 0x801D47A8: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_8000EC04_F804(rdram, ctx);
        goto after_1;
    // 0x801D47A8: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_1:
    // 0x801D47AC: lhu         $t4, 0x4C($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X4C);
    // 0x801D47B0: lhu         $a3, 0x50($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X50);
    // 0x801D47B4: lhu         $t5, 0x4E($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X4E);
    // 0x801D47B8: lhu         $t0, 0x52($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X52);
    // 0x801D47BC: subu        $v0, $t4, $a3
    ctx->r2 = SUB32(ctx->r12, ctx->r7);
    // 0x801D47C0: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x801D47C4: subu        $a1, $t5, $t0
    ctx->r5 = SUB32(ctx->r13, ctx->r8);
    // 0x801D47C8: sll         $a0, $a1, 16
    ctx->r4 = S32(ctx->r5 << 16);
    // 0x801D47CC: sll         $a2, $v0, 16
    ctx->r6 = S32(ctx->r2 << 16);
    // 0x801D47D0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D47D4: sra         $t7, $v1, 16
    ctx->r15 = S32(SIGNED(ctx->r3) >> 16);
    // 0x801D47D8: sra         $t8, $a0, 16
    ctx->r24 = S32(SIGNED(ctx->r4) >> 16);
    // 0x801D47DC: sra         $t9, $a2, 16
    ctx->r25 = S32(SIGNED(ctx->r6) >> 16);
    // 0x801D47E0: lbu         $t1, 0x43($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X43);
    // 0x801D47E4: lbu         $t2, 0x42($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X42);
    // 0x801D47E8: lbu         $t3, 0x41($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X41);
    // 0x801D47EC: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
    // 0x801D47F0: bgez        $t9, L_801D4804
    if (SIGNED(ctx->r25) >= 0) {
        // 0x801D47F4: or          $a0, $t8, $zero
        ctx->r4 = ctx->r24 | 0;
            goto L_801D4804;
    }
    // 0x801D47F4: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x801D47F8: addiu       $v1, $t9, 0x400
    ctx->r3 = ADD32(ctx->r25, 0X400);
    // 0x801D47FC: sll         $t6, $v1, 16
    ctx->r14 = S32(ctx->r3 << 16);
    // 0x801D4800: sra         $v1, $t6, 16
    ctx->r3 = S32(SIGNED(ctx->r14) >> 16);
L_801D4804:
    // 0x801D4804: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x801D4808: sra         $t8, $v0, 16
    ctx->r24 = S32(SIGNED(ctx->r2) >> 16);
    // 0x801D480C: bgez        $t8, L_801D4820
    if (SIGNED(ctx->r24) >= 0) {
        // 0x801D4810: slti        $at, $v1, 0x400
        ctx->r1 = SIGNED(ctx->r3) < 0X400 ? 1 : 0;
            goto L_801D4820;
    }
    // 0x801D4810: slti        $at, $v1, 0x400
    ctx->r1 = SIGNED(ctx->r3) < 0X400 ? 1 : 0;
    // 0x801D4814: addiu       $a0, $t8, 0x400
    ctx->r4 = ADD32(ctx->r24, 0X400);
    // 0x801D4818: sll         $t9, $a0, 16
    ctx->r25 = S32(ctx->r4 << 16);
    // 0x801D481C: sra         $a0, $t9, 16
    ctx->r4 = S32(SIGNED(ctx->r25) >> 16);
L_801D4820:
    // 0x801D4820: bne         $at, $zero, L_801D4834
    if (ctx->r1 != 0) {
        // 0x801D4824: lhu         $v0, 0x7A($sp)
        ctx->r2 = MEM_HU(ctx->r29, 0X7A);
            goto L_801D4834;
    }
    // 0x801D4824: lhu         $v0, 0x7A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X7A);
    // 0x801D4828: addiu       $v1, $v1, -0x400
    ctx->r3 = ADD32(ctx->r3, -0X400);
    // 0x801D482C: sll         $t7, $v1, 16
    ctx->r15 = S32(ctx->r3 << 16);
    // 0x801D4830: sra         $v1, $t7, 16
    ctx->r3 = S32(SIGNED(ctx->r15) >> 16);
L_801D4834:
    // 0x801D4834: slti        $at, $a0, 0x400
    ctx->r1 = SIGNED(ctx->r4) < 0X400 ? 1 : 0;
    // 0x801D4838: bne         $at, $zero, L_801D484C
    if (ctx->r1 != 0) {
        // 0x801D483C: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_801D484C;
    }
    // 0x801D483C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D4840: addiu       $a0, $a0, -0x400
    ctx->r4 = ADD32(ctx->r4, -0X400);
    // 0x801D4844: sll         $t9, $a0, 16
    ctx->r25 = S32(ctx->r4 << 16);
    // 0x801D4848: sra         $a0, $t9, 16
    ctx->r4 = S32(SIGNED(ctx->r25) >> 16);
L_801D484C:
    // 0x801D484C: slti        $at, $v1, 0x200
    ctx->r1 = SIGNED(ctx->r3) < 0X200 ? 1 : 0;
    // 0x801D4850: bne         $at, $zero, L_801D4868
    if (ctx->r1 != 0) {
        // 0x801D4854: addiu       $t7, $zero, 0x400
        ctx->r15 = ADD32(0, 0X400);
            goto L_801D4868;
    }
    // 0x801D4854: addiu       $t7, $zero, 0x400
    ctx->r15 = ADD32(0, 0X400);
    // 0x801D4858: subu        $v1, $t7, $v1
    ctx->r3 = SUB32(ctx->r15, ctx->r3);
    // 0x801D485C: sll         $t8, $v1, 16
    ctx->r24 = S32(ctx->r3 << 16);
    // 0x801D4860: sra         $v1, $t8, 16
    ctx->r3 = S32(SIGNED(ctx->r24) >> 16);
    // 0x801D4864: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
L_801D4868:
    // 0x801D4868: slti        $at, $a0, 0x200
    ctx->r1 = SIGNED(ctx->r4) < 0X200 ? 1 : 0;
    // 0x801D486C: bne         $at, $zero, L_801D4884
    if (ctx->r1 != 0) {
        // 0x801D4870: addiu       $t6, $zero, 0x400
        ctx->r14 = ADD32(0, 0X400);
            goto L_801D4884;
    }
    // 0x801D4870: addiu       $t6, $zero, 0x400
    ctx->r14 = ADD32(0, 0X400);
    // 0x801D4874: subu        $a0, $t6, $a0
    ctx->r4 = SUB32(ctx->r14, ctx->r4);
    // 0x801D4878: sll         $t7, $a0, 16
    ctx->r15 = S32(ctx->r4 << 16);
    // 0x801D487C: sra         $a0, $t7, 16
    ctx->r4 = S32(SIGNED(ctx->r15) >> 16);
    // 0x801D4880: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
L_801D4884:
    // 0x801D4884: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x801D4888: beq         $at, $zero, L_801D489C
    if (ctx->r1 == 0) {
        // 0x801D488C: andi        $a1, $t5, 0xFFFF
        ctx->r5 = ctx->r13 & 0XFFFF;
            goto L_801D489C;
    }
    // 0x801D488C: andi        $a1, $t5, 0xFFFF
    ctx->r5 = ctx->r13 & 0XFFFF;
    // 0x801D4890: sh          $t4, 0x44($sp)
    MEM_H(0X44, ctx->r29) = ctx->r12;
    // 0x801D4894: b           L_801D48BC
    // 0x801D4898: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
        goto L_801D48BC;
    // 0x801D4898: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
L_801D489C:
    // 0x801D489C: bne         $t2, $zero, L_801D48B4
    if (ctx->r10 != 0) {
        // 0x801D48A0: subu        $t7, $a3, $v0
        ctx->r15 = SUB32(ctx->r7, ctx->r2);
            goto L_801D48B4;
    }
    // 0x801D48A0: subu        $t7, $a3, $v0
    ctx->r15 = SUB32(ctx->r7, ctx->r2);
    // 0x801D48A4: addu        $t9, $a3, $v0
    ctx->r25 = ADD32(ctx->r7, ctx->r2);
    // 0x801D48A8: andi        $t6, $t9, 0x3FF
    ctx->r14 = ctx->r25 & 0X3FF;
    // 0x801D48AC: b           L_801D48BC
    // 0x801D48B0: sh          $t6, 0x44($sp)
    MEM_H(0X44, ctx->r29) = ctx->r14;
        goto L_801D48BC;
    // 0x801D48B0: sh          $t6, 0x44($sp)
    MEM_H(0X44, ctx->r29) = ctx->r14;
L_801D48B4:
    // 0x801D48B4: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x801D48B8: sh          $t8, 0x44($sp)
    MEM_H(0X44, ctx->r29) = ctx->r24;
L_801D48BC:
    // 0x801D48BC: slt         $at, $a0, $v0
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x801D48C0: beq         $at, $zero, L_801D48D8
    if (ctx->r1 == 0) {
        // 0x801D48C4: addiu       $a3, $s0, 0x70
        ctx->r7 = ADD32(ctx->r16, 0X70);
            goto L_801D48D8;
    }
    // 0x801D48C4: addiu       $a3, $s0, 0x70
    ctx->r7 = ADD32(ctx->r16, 0X70);
    // 0x801D48C8: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x801D48CC: andi        $t9, $t1, 0xFF
    ctx->r25 = ctx->r9 & 0XFF;
    // 0x801D48D0: b           L_801D48F0
    // 0x801D48D4: or          $t1, $t9, $zero
    ctx->r9 = ctx->r25 | 0;
        goto L_801D48F0;
    // 0x801D48D4: or          $t1, $t9, $zero
    ctx->r9 = ctx->r25 | 0;
L_801D48D8:
    // 0x801D48D8: bne         $t3, $zero, L_801D48EC
    if (ctx->r11 != 0) {
        // 0x801D48DC: subu        $t8, $t0, $v0
        ctx->r24 = SUB32(ctx->r8, ctx->r2);
            goto L_801D48EC;
    }
    // 0x801D48DC: subu        $t8, $t0, $v0
    ctx->r24 = SUB32(ctx->r8, ctx->r2);
    // 0x801D48E0: addu        $t6, $t0, $v0
    ctx->r14 = ADD32(ctx->r8, ctx->r2);
    // 0x801D48E4: b           L_801D48F0
    // 0x801D48E8: andi        $a1, $t6, 0x3FF
    ctx->r5 = ctx->r14 & 0X3FF;
        goto L_801D48F0;
    // 0x801D48E8: andi        $a1, $t6, 0x3FF
    ctx->r5 = ctx->r14 & 0X3FF;
L_801D48EC:
    // 0x801D48EC: andi        $a1, $t8, 0x3FF
    ctx->r5 = ctx->r24 & 0X3FF;
L_801D48F0:
    // 0x801D48F0: swc1        $f0, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f0.u32l;
    // 0x801D48F4: swc1        $f0, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f0.u32l;
    // 0x801D48F8: lwc1        $f10, 0x60($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801D48FC: addiu       $t6, $s0, 0x74
    ctx->r14 = ADD32(ctx->r16, 0X74);
    // 0x801D4900: addiu       $t7, $s0, 0x78
    ctx->r15 = ADD32(ctx->r16, 0X78);
    // 0x801D4904: swc1        $f10, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f10.u32l;
    // 0x801D4908: sb          $t1, 0x43($sp)
    MEM_B(0X43, ctx->r29) = ctx->r9;
    // 0x801D490C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801D4910: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801D4914: jal         0x8000E808
    // 0x801D4918: lhu         $a0, 0x44($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X44);
    func_8000E808_F408(rdram, ctx);
        goto after_2;
    // 0x801D4918: lhu         $a0, 0x44($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X44);
    after_2:
    // 0x801D491C: lbu         $t1, 0x43($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X43);
    // 0x801D4920: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801D4924: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x801D4928: bne         $t1, $at, L_801D4938
    if (ctx->r9 != ctx->r1) {
        // 0x801D492C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801D4938;
    }
    // 0x801D492C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801D4930: b           L_801D4938
    // 0x801D4934: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801D4938;
    // 0x801D4934: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801D4938:
    // 0x801D4938: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x801D493C: jr          $ra
    // 0x801D4940: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    TRACE_RETURN()
    return;
    // 0x801D4940: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_802078E0_632CC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802078E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802078E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802078E8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802078EC: lwc1        $f4, 0x78($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X78);
    // 0x802078F0: lui         $at, 0x402C
    ctx->r1 = S32(0X402C << 16);
    // 0x802078F4: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x802078F8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802078FC: cvt.d.s     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f0.d = CVT_D_S(ctx->f4.fl);
    // 0x80207900: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80207904: c.le.d      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.d <= ctx->f0.d;
    // 0x80207908: nop

    // 0x8020790C: bc1f        L_80207924
    if (!c1cs) {
        // 0x80207910: nop
    
            goto L_80207924;
    }
    // 0x80207910: nop

    // 0x80207914: lui         $at, 0x4160
    ctx->r1 = S32(0X4160 << 16);
    // 0x80207918: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020791C: b           L_80207934
    // 0x80207920: swc1        $f8, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f8.u32l;
        goto L_80207934;
    // 0x80207920: swc1        $f8, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f8.u32l;
L_80207924:
    // 0x80207924: ldc1        $f10, -0x1170($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X1170);
    // 0x80207928: add.d       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f0.d + ctx->f10.d;
    // 0x8020792C: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x80207930: swc1        $f18, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f18.u32l;
L_80207934:
    // 0x80207934: jal         0x801D606C
    // 0x80207938: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801D606C_60144C(rdram, ctx);
        goto after_0;
    // 0x80207938: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8020793C: lui         $a1, 0x3DCC
    ctx->r5 = S32(0X3DCC << 16);
    // 0x80207940: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80207944: jal         0x801D6B14
    // 0x80207948: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    func_801D6B14_601EF4(rdram, ctx);
        goto after_1;
    // 0x80207948: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    after_1:
    // 0x8020794C: lui         $a1, 0x3DCC
    ctx->r5 = S32(0X3DCC << 16);
    // 0x80207950: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80207954: jal         0x801D6B50
    // 0x80207958: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    func_801D6B50_601F30(rdram, ctx);
        goto after_2;
    // 0x80207958: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    after_2:
    // 0x8020795C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80207960: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    // 0x80207964: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80207968: lwc1        $f4, 0x10($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X10);
    // 0x8020796C: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x80207970: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x80207974: nop

    // 0x80207978: bc1f        L_80207990
    if (!c1cs) {
        // 0x8020797C: nop
    
            goto L_80207990;
    }
    // 0x8020797C: nop

    // 0x80207980: jal         0x80034ED4
    // 0x80207984: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_3;
    // 0x80207984: nop

    after_3:
    // 0x80207988: b           L_802079B0
    // 0x8020798C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802079B0;
    // 0x8020798C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80207990:
    // 0x80207990: lw          $t7, -0x1130($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1130);
    // 0x80207994: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80207998: lbu         $t8, 0x2C4($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X2C4);
    // 0x8020799C: bnel        $t8, $at, L_802079B0
    if (ctx->r24 != ctx->r1) {
        // 0x802079A0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802079B0;
    }
    goto skip_0;
    // 0x802079A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802079A4: jal         0x80034ED4
    // 0x802079A8: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_4;
    // 0x802079A8: nop

    after_4:
    // 0x802079AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802079B0:
    // 0x802079B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802079B4: jr          $ra
    // 0x802079B8: nop

    TRACE_RETURN()
    return;
    // 0x802079B8: nop

;}
RECOMP_FUNC void func_80205EF8_6312D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80205EF8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80205EFC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80205F00: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80205F04: lwc1        $f4, 0x1C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x80205F08: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80205F0C: ldc1        $f8, -0x1190($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X1190);
    // 0x80205F10: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80205F14: lwc1        $f18, 0x20($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X20);
    // 0x80205F18: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x80205F1C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80205F20: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80205F24: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x80205F28: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80205F2C: swc1        $f16, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f16.u32l;
    // 0x80205F30: ldc1        $f6, -0x1188($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X1188);
    // 0x80205F34: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x80205F38: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x80205F3C: swc1        $f10, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f10.u32l;
    // 0x80205F40: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x80205F44: addiu       $v0, $t6, -0x4
    ctx->r2 = ADD32(ctx->r14, -0X4);
    // 0x80205F48: bne         $v0, $zero, L_80205F60
    if (ctx->r2 != 0) {
        // 0x80205F4C: sw          $v0, 0x90($a0)
        MEM_W(0X90, ctx->r4) = ctx->r2;
            goto L_80205F60;
    }
    // 0x80205F4C: sw          $v0, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r2;
    // 0x80205F50: jal         0x80034ED4
    // 0x80205F54: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    func_80034ED4_35AD4(rdram, ctx);
        goto after_0;
    // 0x80205F54: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    after_0:
    // 0x80205F58: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80205F5C: lw          $v0, 0x90($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X90);
L_80205F60:
    // 0x80205F60: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80205F64: addiu       $t8, $zero, 0x80
    ctx->r24 = ADD32(0, 0X80);
    // 0x80205F68: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x80205F6C: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x80205F70: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x80205F74: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x80205F78: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x80205F7C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x80205F80: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x80205F84: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x80205F88: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80205F8C: addiu       $a1, $a1, -0x5238
    ctx->r5 = ADD32(ctx->r5, -0X5238);
    // 0x80205F90: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x80205F94: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x80205F98: jal         0x8000E030
    // 0x80205F9C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_8000E030_EC30(rdram, ctx);
        goto after_1;
    // 0x80205F9C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_1:
    // 0x80205FA0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80205FA4: or          $t3, $v0, $at
    ctx->r11 = ctx->r2 | ctx->r1;
    // 0x80205FA8: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x80205FAC: or          $t4, $t3, $at
    ctx->r12 = ctx->r11 | ctx->r1;
    // 0x80205FB0: sw          $t4, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r12;
    // 0x80205FB4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80205FB8: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80205FBC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80205FC0: jr          $ra
    // 0x80205FC4: nop

    TRACE_RETURN()
    return;
    // 0x80205FC4: nop

;}
RECOMP_FUNC void func_801FF380_62A760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FF380: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801FF384: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801FF388: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801FF38C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801FF390: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x801FF394: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x801FF398: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x801FF39C: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x801FF3A0: lwc1        $f12, 0x90($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X90);
    // 0x801FF3A4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801FF3A8: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x801FF3AC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801FF3B0: c.le.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl <= ctx->f12.fl;
    // 0x801FF3B4: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x801FF3B8: addiu       $a2, $s1, 0x8
    ctx->r6 = ADD32(ctx->r17, 0X8);
    // 0x801FF3BC: addiu       $a3, $s1, 0x10
    ctx->r7 = ADD32(ctx->r17, 0X10);
    // 0x801FF3C0: bc1f        L_801FF3DC
    if (!c1cs) {
        // 0x801FF3C4: nop
    
            goto L_801FF3DC;
    }
    // 0x801FF3C4: nop

    // 0x801FF3C8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801FF3CC: nop

    // 0x801FF3D0: sub.s       $f8, $f12, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f12.fl - ctx->f6.fl;
    // 0x801FF3D4: swc1        $f8, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->f8.u32l;
    // 0x801FF3D8: lwc1        $f12, 0x90($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X90);
L_801FF3DC:
    // 0x801FF3DC: jal         0x8000E630
    // 0x801FF3E0: lhu         $a1, 0x96($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X96);
    func_8000E630_F230(rdram, ctx);
        goto after_0;
    // 0x801FF3E0: lhu         $a1, 0x96($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X96);
    after_0:
    // 0x801FF3E4: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x801FF3E8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x801FF3EC: jal         0x8000E9F4
    // 0x801FF3F0: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    func_8000E9F4_F5F4(rdram, ctx);
        goto after_1;
    // 0x801FF3F0: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    after_1:
    // 0x801FF3F4: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x801FF3F8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801FF3FC: jal         0x801D3018
    // 0x801FF400: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    func_801D3018_5FE3F8(rdram, ctx);
        goto after_2;
    // 0x801FF400: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    after_2:
    // 0x801FF404: lw          $t7, 0x7C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X7C);
    // 0x801FF408: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x801FF40C: bne         $t8, $zero, L_801FF44C
    if (ctx->r24 != 0) {
        // 0x801FF410: sw          $t8, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r24;
            goto L_801FF44C;
    }
    // 0x801FF410: sw          $t8, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r24;
    // 0x801FF414: lw          $t0, 0xE4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XE4);
    // 0x801FF418: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FF41C: addiu       $a0, $a0, -0x8D0
    ctx->r4 = ADD32(ctx->r4, -0X8D0);
    // 0x801FF420: slti        $at, $t0, 0x2
    ctx->r1 = SIGNED(ctx->r8) < 0X2 ? 1 : 0;
    // 0x801FF424: bne         $at, $zero, L_801FF43C
    if (ctx->r1 != 0) {
        // 0x801FF428: nop
    
            goto L_801FF43C;
    }
    // 0x801FF428: nop

    // 0x801FF42C: jal         0x8003521C
    // 0x801FF430: sw          $zero, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = 0;
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801FF430: sw          $zero, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = 0;
    after_3:
    // 0x801FF434: b           L_801FF450
    // 0x801FF438: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801FF450;
    // 0x801FF438: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801FF43C:
    // 0x801FF43C: jal         0x801FC3FC
    // 0x801FF440: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801FC3FC_6277DC(rdram, ctx);
        goto after_4;
    // 0x801FF440: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x801FF444: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x801FF448: sw          $zero, 0x70($t1)
    MEM_W(0X70, ctx->r9) = 0;
L_801FF44C:
    // 0x801FF44C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801FF450:
    // 0x801FF450: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x801FF454: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x801FF458: jr          $ra
    // 0x801FF45C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x801FF45C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_801E651C_6118FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E651C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801E6520: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E6524: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801E6528: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801E652C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E6530: jal         0x801D31F0
    // 0x801E6534: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    func_801D31F0_5FE5D0(rdram, ctx);
        goto after_0;
    // 0x801E6534: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    after_0:
    // 0x801E6538: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801E653C: nop

    // 0x801E6540: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x801E6544: nop

    // 0x801E6548: bc1fl       L_801E65D0
    if (!c1cs) {
        // 0x801E654C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801E65D0;
    }
    goto skip_0;
    // 0x801E654C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x801E6550: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
    // 0x801E6554: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x801E6558: bnel        $v0, $at, L_801E6570
    if (ctx->r2 != ctx->r1) {
        // 0x801E655C: sltiu       $v1, $v0, 0x1
        ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
            goto L_801E6570;
    }
    goto skip_1;
    // 0x801E655C: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    skip_1:
    // 0x801E6560: jal         0x80038BC8
    // 0x801E6564: addiu       $a0, $zero, 0x116
    ctx->r4 = ADD32(0, 0X116);
    func_80038BC8_397C8(rdram, ctx);
        goto after_1;
    // 0x801E6564: addiu       $a0, $zero, 0x116
    ctx->r4 = ADD32(0, 0X116);
    after_1:
    // 0x801E6568: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
    // 0x801E656C: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
L_801E6570:
    // 0x801E6570: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x801E6574: beq         $v1, $zero, L_801E65CC
    if (ctx->r3 == 0) {
        // 0x801E6578: sw          $t6, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r14;
            goto L_801E65CC;
    }
    // 0x801E6578: sw          $t6, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r14;
    // 0x801E657C: jal         0x801EF2B0
    // 0x801E6580: nop

    func_801EF2B0_61A690(rdram, ctx);
        goto after_2;
    // 0x801E6580: nop

    after_2:
    // 0x801E6584: jal         0x801EAA78
    // 0x801E6588: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801EAA78_615E58(rdram, ctx);
        goto after_3;
    // 0x801E6588: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801E658C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E6590: lw          $a1, -0x1130($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1130);
    // 0x801E6594: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x801E6598: addiu       $a0, $zero, 0x236
    ctx->r4 = ADD32(0, 0X236);
    // 0x801E659C: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x801E65A0: jal         0x8000F240
    // 0x801E65A4: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    func_8000F240_FE40(rdram, ctx);
        goto after_4;
    // 0x801E65A4: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    after_4:
    // 0x801E65A8: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x801E65AC: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x801E65B0: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E65B4: sw          $t8, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r24;
    // 0x801E65B8: addiu       $a0, $a0, 0x6600
    ctx->r4 = ADD32(ctx->r4, 0X6600);
    // 0x801E65BC: jal         0x8003521C
    // 0x801E65C0: sw          $t7, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r15;
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x801E65C0: sw          $t7, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r15;
    after_5:
    // 0x801E65C4: b           L_801E65F0
    // 0x801E65C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E65F0;
    // 0x801E65C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E65CC:
    // 0x801E65CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_801E65D0:
    // 0x801E65D0: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x801E65D4: jal         0x801D3B18
    // 0x801E65D8: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_801D3B18_5FEEF8(rdram, ctx);
        goto after_6;
    // 0x801E65D8: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_6:
    // 0x801E65DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E65E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801E65E4: jal         0x801D3F00
    // 0x801E65E8: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_801D3F00_5FF2E0(rdram, ctx);
        goto after_7;
    // 0x801E65E8: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_7:
    // 0x801E65EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E65F0:
    // 0x801E65F0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801E65F4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801E65F8: jr          $ra
    // 0x801E65FC: nop

    TRACE_RETURN()
    return;
    // 0x801E65FC: nop

;}
RECOMP_FUNC void func_801FA5C8_6259A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FA5C8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801FA5CC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801FA5D0: lwc1        $f0, -0x1744($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X1744);
    // 0x801FA5D4: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x801FA5D8: addiu       $a1, $a1, 0xB4
    ctx->r5 = ADD32(ctx->r5, 0XB4);
    // 0x801FA5DC: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x801FA5E0: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801FA5E4: lui         $at, 0xC248
    ctx->r1 = S32(0XC248 << 16);
    // 0x801FA5E8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801FA5EC: lui         $at, 0xC38C
    ctx->r1 = S32(0XC38C << 16);
    // 0x801FA5F0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801FA5F4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801FA5F8: lwc1        $f8, -0x1740($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1740);
    // 0x801FA5FC: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x801FA600: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801FA604: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FA608: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801FA60C: addiu       $t6, $zero, 0x200
    ctx->r14 = ADD32(0, 0X200);
    // 0x801FA610: addiu       $t7, $zero, 0x4A8
    ctx->r15 = ADD32(0, 0X4A8);
    // 0x801FA614: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x801FA618: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x801FA61C: addiu       $a2, $a2, -0x5AA0
    ctx->r6 = ADD32(ctx->r6, -0X5AA0);
    // 0x801FA620: addiu       $a0, $a0, -0x5978
    ctx->r4 = ADD32(ctx->r4, -0X5978);
    // 0x801FA624: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801FA628: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801FA62C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801FA630: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x801FA634: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801FA638: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801FA63C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801FA640: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801FA644: jal         0x80035854
    // 0x801FA648: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    func_80035854_36454(rdram, ctx);
        goto after_0;
    // 0x801FA648: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x801FA64C: beq         $v0, $zero, L_801FA678
    if (ctx->r2 == 0) {
        // 0x801FA650: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_801FA678;
    }
    // 0x801FA650: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801FA654: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801FA658: addiu       $a1, $a1, -0x4C20
    ctx->r5 = ADD32(ctx->r5, -0X4C20);
    // 0x801FA65C: jal         0x801D31CC
    // 0x801FA660: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_1;
    // 0x801FA660: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    after_1:
    // 0x801FA664: lui         $at, 0x43AA
    ctx->r1 = S32(0X43AA << 16);
    // 0x801FA668: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x801FA66C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801FA670: nop

    // 0x801FA674: swc1        $f10, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->f10.u32l;
L_801FA678:
    // 0x801FA678: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801FA67C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x801FA680: jr          $ra
    // 0x801FA684: nop

    TRACE_RETURN()
    return;
    // 0x801FA684: nop

;}
RECOMP_FUNC void func_801F71DC_6225BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F71DC: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801F71E0: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801F71E4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801F71E8: lwc1        $f6, 0x188($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X188);
    // 0x801F71EC: addiu       $v0, $v0, 0x178
    ctx->r2 = ADD32(ctx->r2, 0X178);
    // 0x801F71F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801F71F4: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x801F71F8: nop

    // 0x801F71FC: bc1f        L_801F720C
    if (!c1cs) {
        // 0x801F7200: nop
    
            goto L_801F720C;
    }
    // 0x801F7200: nop

    // 0x801F7204: jr          $ra
    // 0x801F7208: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x801F7208: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801F720C:
    // 0x801F720C: jr          $ra
    // 0x801F7210: nop

    TRACE_RETURN()
    return;
    // 0x801F7210: nop

;}
RECOMP_FUNC void func_801F8CCC_6240AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F8CCC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801F8CD0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801F8CD4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801F8CD8: lw          $t6, 0x7C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X7C);
    // 0x801F8CDC: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801F8CE0: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x801F8CE4: bne         $t7, $zero, L_801F8CFC
    if (ctx->r15 != 0) {
        // 0x801F8CE8: sw          $t7, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r15;
            goto L_801F8CFC;
    }
    // 0x801F8CE8: sw          $t7, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r15;
    // 0x801F8CEC: jal         0x80034ED4
    // 0x801F8CF0: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_0;
    // 0x801F8CF0: nop

    after_0:
    // 0x801F8CF4: b           L_801F8E68
    // 0x801F8CF8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801F8E68;
    // 0x801F8CF8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801F8CFC:
    // 0x801F8CFC: lwc1        $f4, 0x98($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X98);
    // 0x801F8D00: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F8D04: ldc1        $f8, -0x1788($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X1788);
    // 0x801F8D08: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801F8D0C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801F8D10: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x801F8D14: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801F8D18: swc1        $f16, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->f16.u32l;
    // 0x801F8D1C: lhu         $t9, 0x16($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X16);
    // 0x801F8D20: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x801F8D24: bgez        $t9, L_801F8D38
    if (SIGNED(ctx->r25) >= 0) {
        // 0x801F8D28: cvt.s.w     $f4, $f18
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
            goto L_801F8D38;
    }
    // 0x801F8D28: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x801F8D2C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F8D30: nop

    // 0x801F8D34: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_801F8D38:
    // 0x801F8D38: lwc1        $f8, 0x98($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X98);
    // 0x801F8D3C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801F8D40: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801F8D44: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x801F8D48: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x801F8D4C: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x801F8D50: nop

    // 0x801F8D54: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x801F8D58: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x801F8D5C: nop

    // 0x801F8D60: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x801F8D64: beql        $t1, $zero, L_801F8DB4
    if (ctx->r9 == 0) {
        // 0x801F8D68: mfc1        $t1, $f16
        ctx->r9 = (int32_t)ctx->f16.u32l;
            goto L_801F8DB4;
    }
    goto skip_0;
    // 0x801F8D68: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
    skip_0:
    // 0x801F8D6C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801F8D70: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801F8D74: sub.s       $f16, $f10, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x801F8D78: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x801F8D7C: nop

    // 0x801F8D80: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x801F8D84: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x801F8D88: nop

    // 0x801F8D8C: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x801F8D90: bne         $t1, $zero, L_801F8DA8
    if (ctx->r9 != 0) {
        // 0x801F8D94: nop
    
            goto L_801F8DA8;
    }
    // 0x801F8D94: nop

    // 0x801F8D98: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
    // 0x801F8D9C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801F8DA0: b           L_801F8DC0
    // 0x801F8DA4: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
        goto L_801F8DC0;
    // 0x801F8DA4: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
L_801F8DA8:
    // 0x801F8DA8: b           L_801F8DC0
    // 0x801F8DAC: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
        goto L_801F8DC0;
    // 0x801F8DAC: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x801F8DB0: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
L_801F8DB4:
    // 0x801F8DB4: nop

    // 0x801F8DB8: bltz        $t1, L_801F8DA8
    if (SIGNED(ctx->r9) < 0) {
        // 0x801F8DBC: nop
    
            goto L_801F8DA8;
    }
    // 0x801F8DBC: nop

L_801F8DC0:
    // 0x801F8DC0: sh          $t1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r9;
    // 0x801F8DC4: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x801F8DC8: lwc1        $f2, 0x90($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X90);
    // 0x801F8DCC: lwc1        $f0, 0x1C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801F8DD0: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x801F8DD4: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x801F8DD8: nop

    // 0x801F8DDC: bc1fl       L_801F8E0C
    if (!c1cs) {
        // 0x801F8DE0: lwc1        $f18, 0x94($a0)
        ctx->f18.u32l = MEM_W(ctx->r4, 0X94);
            goto L_801F8E0C;
    }
    goto skip_1;
    // 0x801F8DE0: lwc1        $f18, 0x94($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X94);
    skip_1:
    // 0x801F8DE4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801F8DE8: lwc1        $f4, 0x24($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X24);
    // 0x801F8DEC: div.s       $f18, $f2, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = DIV_S(ctx->f2.fl, ctx->f12.fl);
    // 0x801F8DF0: add.s       $f6, $f0, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f18.fl;
    // 0x801F8DF4: swc1        $f6, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f6.u32l;
    // 0x801F8DF8: lwc1        $f8, 0x90($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X90);
    // 0x801F8DFC: div.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f12.fl);
    // 0x801F8E00: add.s       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x801F8E04: swc1        $f16, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f16.u32l;
    // 0x801F8E08: lwc1        $f18, 0x94($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X94);
L_801F8E0C:
    // 0x801F8E0C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F8E10: ldc1        $f8, -0x1780($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X1780);
    // 0x801F8E14: cvt.d.s     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f6.d = CVT_D_S(ctx->f18.fl);
    // 0x801F8E18: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x801F8E1C: sub.d       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f4.d = ctx->f6.d - ctx->f8.d;
    // 0x801F8E20: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F8E24: addiu       $a1, $a1, -0x54E0
    ctx->r5 = ADD32(ctx->r5, -0X54E0);
    // 0x801F8E28: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x801F8E2C: cvt.s.d     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f10.fl = CVT_S_D(ctx->f4.d);
    // 0x801F8E30: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x801F8E34: swc1        $f10, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->f10.u32l;
    // 0x801F8E38: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x801F8E3C: lwc1        $f16, 0x94($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X94);
    // 0x801F8E40: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x801F8E44: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x801F8E48: jal         0x8000DF10
    // 0x801F8E4C: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    func_8000DF10_EB10(rdram, ctx);
        goto after_1;
    // 0x801F8E4C: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    after_1:
    // 0x801F8E50: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801F8E54: or          $t5, $v0, $at
    ctx->r13 = ctx->r2 | ctx->r1;
    // 0x801F8E58: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801F8E5C: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x801F8E60: sw          $t6, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r14;
    // 0x801F8E64: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801F8E68:
    // 0x801F8E68: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801F8E6C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801F8E70: jr          $ra
    // 0x801F8E74: nop

    TRACE_RETURN()
    return;
    // 0x801F8E74: nop

;}
RECOMP_FUNC void func_80201F0C_62D2EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80201F0C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80201F10: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80201F14: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80201F18: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80201F1C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80201F20: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x80201F24: swc1        $f0, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f0.u32l;
    // 0x80201F28: swc1        $f0, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f0.u32l;
    // 0x80201F2C: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x80201F30: lwc1        $f2, 0x8($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80201F34: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80201F38: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80201F3C: lui         $at, 0xC348
    ctx->r1 = S32(0XC348 << 16);
    // 0x80201F40: c.lt.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl < ctx->f2.fl;
    // 0x80201F44: nop

    // 0x80201F48: bc1fl       L_80201F64
    if (!c1cs) {
        // 0x80201F4C: mtc1        $at, $f8
        ctx->f8.u32l = ctx->r1;
            goto L_80201F64;
    }
    goto skip_0;
    // 0x80201F4C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    skip_0:
    // 0x80201F50: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80201F54: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80201F58: b           L_80201FF4
    // 0x80201F5C: swc1        $f6, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f6.u32l;
        goto L_80201FF4;
    // 0x80201F5C: swc1        $f6, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f6.u32l;
    // 0x80201F60: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
L_80201F64:
    // 0x80201F64: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80201F68: c.lt.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl < ctx->f8.fl;
    // 0x80201F6C: nop

    // 0x80201F70: bc1t        L_80201FF4
    if (c1cs) {
        // 0x80201F74: nop
    
            goto L_80201FF4;
    }
    // 0x80201F74: nop

    // 0x80201F78: lwc1        $f0, 0x70($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X70);
    // 0x80201F7C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80201F80: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x80201F84: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x80201F88: nop

    // 0x80201F8C: bc1fl       L_80201FA0
    if (!c1cs) {
        // 0x80201F90: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_80201FA0;
    }
    goto skip_1;
    // 0x80201F90: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_1:
    // 0x80201F94: b           L_80201FA0
    // 0x80201F98: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_80201FA0;
    // 0x80201F98: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    // 0x80201F9C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_80201FA0:
    // 0x80201FA0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80201FA4: cvt.d.s     $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f16.d = CVT_D_S(ctx->f2.fl);
    // 0x80201FA8: c.eq.d      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.d == ctx->f16.d;
    // 0x80201FAC: nop

    // 0x80201FB0: bc1t        L_80201FF4
    if (c1cs) {
        // 0x80201FB4: nop
    
            goto L_80201FF4;
    }
    // 0x80201FB4: nop

    // 0x80201FB8: jal         0x8000DDC0
    // 0x80201FBC: nop

    func_8000DDC0_E9C0(rdram, ctx);
        goto after_0;
    // 0x80201FBC: nop

    after_0:
    // 0x80201FC0: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80201FC4: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x80201FC8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80201FCC: beq         $v0, $zero, L_80201FEC
    if (ctx->r2 == 0) {
        // 0x80201FD0: lui         $at, 0xBFF0
        ctx->r1 = S32(0XBFF0 << 16);
            goto L_80201FEC;
    }
    // 0x80201FD0: lui         $at, 0xBFF0
    ctx->r1 = S32(0XBFF0 << 16);
    // 0x80201FD4: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80201FD8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80201FDC: nop

    // 0x80201FE0: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80201FE4: b           L_80201FF4
    // 0x80201FE8: swc1        $f4, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f4.u32l;
        goto L_80201FF4;
    // 0x80201FE8: swc1        $f4, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f4.u32l;
L_80201FEC:
    // 0x80201FEC: cvt.s.d     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f6.fl = CVT_S_D(ctx->f0.d);
    // 0x80201FF0: swc1        $f6, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f6.u32l;
L_80201FF4:
    // 0x80201FF4: jal         0x801D600C
    // 0x80201FF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D600C_6013EC(rdram, ctx);
        goto after_1;
    // 0x80201FF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80201FFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80202000: jal         0x801D6330
    // 0x80202004: lui         $a1, 0xC370
    ctx->r5 = S32(0XC370 << 16);
    func_801D6330_601710(rdram, ctx);
        goto after_2;
    // 0x80202004: lui         $a1, 0xC370
    ctx->r5 = S32(0XC370 << 16);
    after_2:
    // 0x80202008: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8020200C: jal         0x801D641C
    // 0x80202010: lui         $a1, 0xC47A
    ctx->r5 = S32(0XC47A << 16);
    func_801D641C_6017FC(rdram, ctx);
        goto after_3;
    // 0x80202010: lui         $a1, 0xC47A
    ctx->r5 = S32(0XC47A << 16);
    after_3:
    // 0x80202014: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80202018: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8020201C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80202020: jr          $ra
    // 0x80202024: nop

    TRACE_RETURN()
    return;
    // 0x80202024: nop

;}
RECOMP_FUNC void func_801CCE78_5F8258(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CCE78: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801CCE7C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801CCE80: lui         $s0, 0x8021
    ctx->r16 = S32(0X8021 << 16);
    // 0x801CCE84: lw          $s0, -0x1130($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X1130);
    // 0x801CCE88: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801CCE8C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x801CCE90: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801CCE94: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801CCE98: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x801CCE9C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CCEA0: swc1        $f0, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f0.u32l;
    // 0x801CCEA4: swc1        $f0, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f0.u32l;
    // 0x801CCEA8: lwc1        $f4, -0x3080($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3080);
    // 0x801CCEAC: jal         0x801D614C
    // 0x801CCEB0: swc1        $f4, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f4.u32l;
    func_801D614C_60152C(rdram, ctx);
        goto after_0;
    // 0x801CCEB0: swc1        $f4, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f4.u32l;
    after_0:
    // 0x801CCEB4: lw          $t6, 0x1C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X1C);
    // 0x801CCEB8: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x801CCEBC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x801CCEC0: beql        $a0, $zero, L_801CCEF8
    if (ctx->r4 == 0) {
        // 0x801CCEC4: lw          $t8, 0x20($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X20);
            goto L_801CCEF8;
    }
    goto skip_0;
    // 0x801CCEC4: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    skip_0:
    // 0x801CCEC8: jal         0x80034EF8
    // 0x801CCECC: nop

    func_80034EF8_35AF8(rdram, ctx);
        goto after_1;
    // 0x801CCECC: nop

    after_1:
    // 0x801CCED0: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x801CCED4: lw          $t7, -0x3A28($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A28);
    // 0x801CCED8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801CCEDC: bnel        $t7, $at, L_801CCEF0
    if (ctx->r15 != ctx->r1) {
        // 0x801CCEE0: sw          $zero, 0x0($s0)
        MEM_W(0X0, ctx->r16) = 0;
            goto L_801CCEF0;
    }
    goto skip_1;
    // 0x801CCEE0: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    skip_1:
    // 0x801CCEE4: jal         0x80034EF8
    // 0x801CCEE8: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    func_80034EF8_35AF8(rdram, ctx);
        goto after_2;
    // 0x801CCEE8: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_2:
    // 0x801CCEEC: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
L_801CCEF0:
    // 0x801CCEF0: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x801CCEF4: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
L_801CCEF8:
    // 0x801CCEF8: lui         $at, 0xC020
    ctx->r1 = S32(0XC020 << 16);
    // 0x801CCEFC: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x801CCF00: lwc1        $f8, 0x10($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X10);
    // 0x801CCF04: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801CCF08: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801CCF0C: c.le.d      $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.d <= ctx->f6.d;
    // 0x801CCF10: nop

    // 0x801CCF14: bc1fl       L_801CCF34
    if (!c1cs) {
        // 0x801CCF18: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801CCF34;
    }
    goto skip_2;
    // 0x801CCF18: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x801CCF1C: jal         0x80034F20
    // 0x801CCF20: nop

    func_80034F20_35B20(rdram, ctx);
        goto after_3;
    // 0x801CCF20: nop

    after_3:
    // 0x801CCF24: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CCF28: jal         0x8003521C
    // 0x801CCF2C: addiu       $a0, $a0, -0x3764
    ctx->r4 = ADD32(ctx->r4, -0X3764);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801CCF2C: addiu       $a0, $a0, -0x3764
    ctx->r4 = ADD32(ctx->r4, -0X3764);
    after_4:
    // 0x801CCF30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801CCF34:
    // 0x801CCF34: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801CCF38: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801CCF3C: jr          $ra
    // 0x801CCF40: nop

    TRACE_RETURN()
    return;
    // 0x801CCF40: nop

;}
RECOMP_FUNC void func_801EFA88_61AE68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EFA88: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801EFA8C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801EFA90: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x801EFA94: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x801EFA98: lw          $t6, 0x80($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X80);
    // 0x801EFA9C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801EFAA0: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x801EFAA4: bgtz        $t7, L_801EFAD0
    if (SIGNED(ctx->r15) > 0) {
        // 0x801EFAA8: sw          $t7, 0x80($a0)
        MEM_W(0X80, ctx->r4) = ctx->r15;
            goto L_801EFAD0;
    }
    // 0x801EFAA8: sw          $t7, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->r15;
    // 0x801EFAAC: jal         0x80038BC8
    // 0x801EFAB0: addiu       $a0, $zero, 0x276
    ctx->r4 = ADD32(0, 0X276);
    func_80038BC8_397C8(rdram, ctx);
        goto after_0;
    // 0x801EFAB0: addiu       $a0, $zero, 0x276
    ctx->r4 = ADD32(0, 0X276);
    after_0:
    // 0x801EFAB4: jal         0x8000DD58
    // 0x801EFAB8: addiu       $a0, $zero, 0x320
    ctx->r4 = ADD32(0, 0X320);
    func_8000DD58_E958(rdram, ctx);
        goto after_1;
    // 0x801EFAB8: addiu       $a0, $zero, 0x320
    ctx->r4 = ADD32(0, 0X320);
    after_1:
    // 0x801EFABC: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x801EFAC0: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x801EFAC4: mflo        $t9
    ctx->r25 = lo;
    // 0x801EFAC8: addiu       $t0, $t9, 0x7
    ctx->r8 = ADD32(ctx->r25, 0X7);
    // 0x801EFACC: sw          $t0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r8;
L_801EFAD0:
    // 0x801EFAD0: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x801EFAD4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801EFAD8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801EFADC: lwc1        $f4, 0x8($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X8);
    // 0x801EFAE0: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x801EFAE4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801EFAE8: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x801EFAEC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801EFAF0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801EFAF4: lwc1        $f6, 0xC($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0XC);
    // 0x801EFAF8: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x801EFAFC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801EFB00: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801EFB04: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x801EFB08: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801EFB0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EFB10: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x801EFB14: lwc1        $f16, 0x10($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X10);
    // 0x801EFB18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801EFB1C: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    // 0x801EFB20: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    // 0x801EFB24: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    // 0x801EFB28: jal         0x801DFB90
    // 0x801EFB2C: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    func_801DFB90_60AF70(rdram, ctx);
        goto after_2;
    // 0x801EFB2C: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x801EFB30: jal         0x801F76D0
    // 0x801EFB34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801F76D0_622AB0(rdram, ctx);
        goto after_3;
    // 0x801EFB34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801EFB38: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x801EFB3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EFB40: lhu         $t3, 0x14($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X14);
    // 0x801EFB44: slti        $at, $t3, 0x100
    ctx->r1 = SIGNED(ctx->r11) < 0X100 ? 1 : 0;
    // 0x801EFB48: beql        $at, $zero, L_801EFB5C
    if (ctx->r1 == 0) {
        // 0x801EFB4C: lw          $t4, 0x7C($s0)
        ctx->r12 = MEM_W(ctx->r16, 0X7C);
            goto L_801EFB5C;
    }
    goto skip_0;
    // 0x801EFB4C: lw          $t4, 0x7C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X7C);
    skip_0:
    // 0x801EFB50: jal         0x801D326C
    // 0x801EFB54: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    func_801D326C_5FE64C(rdram, ctx);
        goto after_4;
    // 0x801EFB54: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    after_4:
    // 0x801EFB58: lw          $t4, 0x7C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X7C);
L_801EFB5C:
    // 0x801EFB5C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801EFB60: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801EFB64: addiu       $v0, $t4, -0x1
    ctx->r2 = ADD32(ctx->r12, -0X1);
    // 0x801EFB68: bne         $v0, $at, L_801EFB80
    if (ctx->r2 != ctx->r1) {
        // 0x801EFB6C: sw          $v0, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r2;
            goto L_801EFB80;
    }
    // 0x801EFB6C: sw          $v0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r2;
    // 0x801EFB70: lw          $t7, -0x1130($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1130);
    // 0x801EFB74: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801EFB78: sb          $t6, 0x2C1($t7)
    MEM_B(0X2C1, ctx->r15) = ctx->r14;
    // 0x801EFB7C: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
L_801EFB80:
    // 0x801EFB80: bne         $v0, $zero, L_801EFBB0
    if (ctx->r2 != 0) {
        // 0x801EFB84: lui         $a0, 0x801F
        ctx->r4 = S32(0X801F << 16);
            goto L_801EFBB0;
    }
    // 0x801EFB84: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801EFB88: jal         0x8003521C
    // 0x801EFB8C: addiu       $a0, $a0, -0x43C
    ctx->r4 = ADD32(ctx->r4, -0X43C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x801EFB8C: addiu       $a0, $a0, -0x43C
    ctx->r4 = ADD32(ctx->r4, -0X43C);
    after_5:
    // 0x801EFB90: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801EFB94: jal         0x80037C9C
    // 0x801EFB98: addiu       $a1, $zero, 0xBB8
    ctx->r5 = ADD32(0, 0XBB8);
    func_80037C9C_3889C(rdram, ctx);
        goto after_6;
    // 0x801EFB98: addiu       $a1, $zero, 0xBB8
    ctx->r5 = ADD32(0, 0XBB8);
    after_6:
    // 0x801EFB9C: lui         $a2, 0x1111
    ctx->r6 = S32(0X1111 << 16);
    // 0x801EFBA0: ori         $a2, $a2, 0x1111
    ctx->r6 = ctx->r6 | 0X1111;
    // 0x801EFBA4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801EFBA8: jal         0x80037C20
    // 0x801EFBAC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80037C20_38820(rdram, ctx);
        goto after_7;
    // 0x801EFBAC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
L_801EFBB0:
    // 0x801EFBB0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x801EFBB4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x801EFBB8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x801EFBBC: jr          $ra
    // 0x801EFBC0: nop

    TRACE_RETURN()
    return;
    // 0x801EFBC0: nop

;}
RECOMP_FUNC void func_801FA574_625954(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FA574: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801FA578: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801FA57C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801FA580: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801FA584: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x801FA588: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801FA58C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801FA590: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801FA594: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801FA598: jal         0x801D15BC
    // 0x801FA59C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_801D15BC_5FC99C(rdram, ctx);
        goto after_0;
    // 0x801FA59C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x801FA5A0: jal         0x80038BC8
    // 0x801FA5A4: addiu       $a0, $zero, 0x4C
    ctx->r4 = ADD32(0, 0X4C);
    func_80038BC8_397C8(rdram, ctx);
        goto after_1;
    // 0x801FA5A4: addiu       $a0, $zero, 0x4C
    ctx->r4 = ADD32(0, 0X4C);
    after_1:
    // 0x801FA5A8: jal         0x801D16B4
    // 0x801FA5AC: nop

    func_801D16B4_5FCA94(rdram, ctx);
        goto after_2;
    // 0x801FA5AC: nop

    after_2:
    // 0x801FA5B0: jal         0x80034ED4
    // 0x801FA5B4: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_3;
    // 0x801FA5B4: nop

    after_3:
    // 0x801FA5B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801FA5BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801FA5C0: jr          $ra
    // 0x801FA5C4: nop

    TRACE_RETURN()
    return;
    // 0x801FA5C4: nop

;}
RECOMP_FUNC void func_8020878C_633B6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020878C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80208790: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x80208794: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x80208798: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020879C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802087A0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802087A4: lbu         $t7, 0x2C1($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X2C1);
    // 0x802087A8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802087AC: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802087B0: bnel        $t7, $at, L_802087C4
    if (ctx->r15 != ctx->r1) {
        // 0x802087B4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802087C4;
    }
    goto skip_0;
    // 0x802087B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802087B8: jal         0x8003521C
    // 0x802087BC: addiu       $a0, $a0, -0x7830
    ctx->r4 = ADD32(ctx->r4, -0X7830);
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x802087BC: addiu       $a0, $a0, -0x7830
    ctx->r4 = ADD32(ctx->r4, -0X7830);
    after_0:
    // 0x802087C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802087C4:
    // 0x802087C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802087C8: jr          $ra
    // 0x802087CC: nop

    TRACE_RETURN()
    return;
    // 0x802087CC: nop

;}
RECOMP_FUNC void func_801CBE3C_5F721C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CBE3C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801CBE40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CBE44: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801CBE48: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801CBE4C: jal         0x8000DD58
    // 0x801CBE50: addiu       $a0, $zero, 0x11B7
    ctx->r4 = ADD32(0, 0X11B7);
    func_8000DD58_E958(rdram, ctx);
        goto after_0;
    // 0x801CBE50: addiu       $a0, $zero, 0x11B7
    ctx->r4 = ADD32(0, 0X11B7);
    after_0:
    // 0x801CBE54: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801CBE58: addiu       $v1, $v1, -0x1130
    ctx->r3 = ADD32(ctx->r3, -0X1130);
    // 0x801CBE5C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801CBE60: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x801CBE64: lw          $t6, 0x2C8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X2C8);
    // 0x801CBE68: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x801CBE6C: sw          $t7, 0x2C8($v0)
    MEM_W(0X2C8, ctx->r2) = ctx->r15;
    // 0x801CBE70: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801CBE74: lbu         $t8, 0x2C0($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X2C0);
    // 0x801CBE78: bnel        $t8, $zero, L_801CC004
    if (ctx->r24 != 0) {
        // 0x801CBE7C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801CC004;
    }
    goto skip_0;
    // 0x801CBE7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801CBE80: lbu         $v1, 0x2C4($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X2C4);
    // 0x801CBE84: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801CBE88: bnel        $v1, $at, L_801CBF50
    if (ctx->r3 != ctx->r1) {
        // 0x801CBE8C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_801CBF50;
    }
    goto skip_1;
    // 0x801CBE8C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    skip_1:
    // 0x801CBE90: lw          $t9, -0x3A38($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3A38);
    // 0x801CBE94: lui         $t0, 0x4
    ctx->r8 = S32(0X4 << 16);
    // 0x801CBE98: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x801CBE9C: lhu         $t0, -0x520C($t0)
    ctx->r8 = MEM_HU(ctx->r8, -0X520C);
    // 0x801CBEA0: sltiu       $at, $t0, 0x5
    ctx->r1 = ctx->r8 < 0X5 ? 1 : 0;
    // 0x801CBEA4: beq         $at, $zero, L_801CBF4C
    if (ctx->r1 == 0) {
        // 0x801CBEA8: sll         $t0, $t0, 2
        ctx->r8 = S32(ctx->r8 << 2);
            goto L_801CBF4C;
    }
    // 0x801CBEA8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x801CBEAC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CBEB0: addu        $at, $at, $t0
    gpr jr_addend_801CBEB8 = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x801CBEB4: lw          $t0, -0x317C($at)
    ctx->r8 = ADD32(ctx->r1, -0X317C);
    // 0x801CBEB8: jr          $t0
    // 0x801CBEBC: nop

    switch (jr_addend_801CBEB8 >> 2) {
        case 0: goto L_801CBF4C; break;
        case 1: goto L_801CBEC0; break;
        case 2: goto L_801CBEE4; break;
        case 3: goto L_801CBF08; break;
        case 4: goto L_801CBF2C; break;
        default: switch_error(__func__, 0x801CBEB8, 0x8020CE84);
    }
    // 0x801CBEBC: nop

L_801CBEC0:
    // 0x801CBEC0: jal         0x801EECCC
    // 0x801CBEC4: nop

    func_801EECCC_61A0AC(rdram, ctx);
        goto after_1;
    // 0x801CBEC4: nop

    after_1:
    // 0x801CBEC8: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CBECC: jal         0x8003521C
    // 0x801CBED0: addiu       $a0, $a0, -0x3FF0
    ctx->r4 = ADD32(ctx->r4, -0X3FF0);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801CBED0: addiu       $a0, $a0, -0x3FF0
    ctx->r4 = ADD32(ctx->r4, -0X3FF0);
    after_2:
    // 0x801CBED4: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x801CBED8: lw          $t1, -0x1130($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1130);
    // 0x801CBEDC: b           L_801CBF4C
    // 0x801CBEE0: lbu         $v1, 0x2C4($t1)
    ctx->r3 = MEM_BU(ctx->r9, 0X2C4);
        goto L_801CBF4C;
    // 0x801CBEE0: lbu         $v1, 0x2C4($t1)
    ctx->r3 = MEM_BU(ctx->r9, 0X2C4);
L_801CBEE4:
    // 0x801CBEE4: jal         0x801F9DB4
    // 0x801CBEE8: nop

    func_801F9DB4_625194(rdram, ctx);
        goto after_3;
    // 0x801CBEE8: nop

    after_3:
    // 0x801CBEEC: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CBEF0: jal         0x8003521C
    // 0x801CBEF4: addiu       $a0, $a0, -0x3FF0
    ctx->r4 = ADD32(ctx->r4, -0X3FF0);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801CBEF4: addiu       $a0, $a0, -0x3FF0
    ctx->r4 = ADD32(ctx->r4, -0X3FF0);
    after_4:
    // 0x801CBEF8: lui         $t2, 0x8021
    ctx->r10 = S32(0X8021 << 16);
    // 0x801CBEFC: lw          $t2, -0x1130($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1130);
    // 0x801CBF00: b           L_801CBF4C
    // 0x801CBF04: lbu         $v1, 0x2C4($t2)
    ctx->r3 = MEM_BU(ctx->r10, 0X2C4);
        goto L_801CBF4C;
    // 0x801CBF04: lbu         $v1, 0x2C4($t2)
    ctx->r3 = MEM_BU(ctx->r10, 0X2C4);
L_801CBF08:
    // 0x801CBF08: jal         0x80207E7C
    // 0x801CBF0C: nop

    func_80207E7C_63325C(rdram, ctx);
        goto after_5;
    // 0x801CBF0C: nop

    after_5:
    // 0x801CBF10: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CBF14: jal         0x8003521C
    // 0x801CBF18: addiu       $a0, $a0, -0x3FF0
    ctx->r4 = ADD32(ctx->r4, -0X3FF0);
    func_8003521C_35E1C(rdram, ctx);
        goto after_6;
    // 0x801CBF18: addiu       $a0, $a0, -0x3FF0
    ctx->r4 = ADD32(ctx->r4, -0X3FF0);
    after_6:
    // 0x801CBF1C: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x801CBF20: lw          $t3, -0x1130($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1130);
    // 0x801CBF24: b           L_801CBF4C
    // 0x801CBF28: lbu         $v1, 0x2C4($t3)
    ctx->r3 = MEM_BU(ctx->r11, 0X2C4);
        goto L_801CBF4C;
    // 0x801CBF28: lbu         $v1, 0x2C4($t3)
    ctx->r3 = MEM_BU(ctx->r11, 0X2C4);
L_801CBF2C:
    // 0x801CBF2C: jal         0x80208998
    // 0x801CBF30: nop

    func_80208998_633D78(rdram, ctx);
        goto after_7;
    // 0x801CBF30: nop

    after_7:
    // 0x801CBF34: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CBF38: jal         0x8003521C
    // 0x801CBF3C: addiu       $a0, $a0, -0x3FF0
    ctx->r4 = ADD32(ctx->r4, -0X3FF0);
    func_8003521C_35E1C(rdram, ctx);
        goto after_8;
    // 0x801CBF3C: addiu       $a0, $a0, -0x3FF0
    ctx->r4 = ADD32(ctx->r4, -0X3FF0);
    after_8:
    // 0x801CBF40: lui         $t4, 0x8021
    ctx->r12 = S32(0X8021 << 16);
    // 0x801CBF44: lw          $t4, -0x1130($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1130);
    // 0x801CBF48: lbu         $v1, 0x2C4($t4)
    ctx->r3 = MEM_BU(ctx->r12, 0X2C4);
L_801CBF4C:
    // 0x801CBF4C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_801CBF50:
    // 0x801CBF50: bne         $v1, $at, L_801CC000
    if (ctx->r3 != ctx->r1) {
        // 0x801CBF54: lui         $t5, 0x8016
        ctx->r13 = S32(0X8016 << 16);
            goto L_801CC000;
    }
    // 0x801CBF54: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x801CBF58: lw          $t5, -0x3A38($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X3A38);
    // 0x801CBF5C: lui         $t6, 0x4
    ctx->r14 = S32(0X4 << 16);
    // 0x801CBF60: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x801CBF64: lhu         $t6, -0x520C($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X520C);
    // 0x801CBF68: sltiu       $at, $t6, 0x5
    ctx->r1 = ctx->r14 < 0X5 ? 1 : 0;
    // 0x801CBF6C: beq         $at, $zero, L_801CC000
    if (ctx->r1 == 0) {
        // 0x801CBF70: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_801CC000;
    }
    // 0x801CBF70: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x801CBF74: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CBF78: addu        $at, $at, $t6
    gpr jr_addend_801CBF80 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x801CBF7C: lw          $t6, -0x3168($at)
    ctx->r14 = ADD32(ctx->r1, -0X3168);
    // 0x801CBF80: jr          $t6
    // 0x801CBF84: nop

    switch (jr_addend_801CBF80 >> 2) {
        case 0: goto L_801CC000; break;
        case 1: goto L_801CBF88; break;
        case 2: goto L_801CBFA8; break;
        case 3: goto L_801CBFC8; break;
        case 4: goto L_801CBFE8; break;
        default: switch_error(__func__, 0x801CBF80, 0x8020CE98);
    }
    // 0x801CBF84: nop

L_801CBF88:
    // 0x801CBF88: lui         $t7, 0x801D
    ctx->r15 = S32(0X801D << 16);
    // 0x801CBF8C: addiu       $t7, $t7, -0x3FF0
    ctx->r15 = ADD32(ctx->r15, -0X3FF0);
    // 0x801CBF90: jal         0x801EEDB4
    // 0x801CBF94: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    func_801EEDB4_61A194(rdram, ctx);
        goto after_9;
    // 0x801CBF94: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    after_9:
    // 0x801CBF98: jal         0x8003521C
    // 0x801CBF9C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_10;
    // 0x801CBF9C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_10:
    // 0x801CBFA0: b           L_801CC004
    // 0x801CBFA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801CC004;
    // 0x801CBFA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801CBFA8:
    // 0x801CBFA8: lui         $t8, 0x801D
    ctx->r24 = S32(0X801D << 16);
    // 0x801CBFAC: addiu       $t8, $t8, -0x3FF0
    ctx->r24 = ADD32(ctx->r24, -0X3FF0);
    // 0x801CBFB0: jal         0x801FA904
    // 0x801CBFB4: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    func_801FA904_625CE4(rdram, ctx);
        goto after_11;
    // 0x801CBFB4: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    after_11:
    // 0x801CBFB8: jal         0x8003521C
    // 0x801CBFBC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_12;
    // 0x801CBFBC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_12:
    // 0x801CBFC0: b           L_801CC004
    // 0x801CBFC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801CC004;
    // 0x801CBFC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801CBFC8:
    // 0x801CBFC8: lui         $t9, 0x801D
    ctx->r25 = S32(0X801D << 16);
    // 0x801CBFCC: addiu       $t9, $t9, -0x3FF0
    ctx->r25 = ADD32(ctx->r25, -0X3FF0);
    // 0x801CBFD0: jal         0x8020814C
    // 0x801CBFD4: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    func_8020814C_63352C(rdram, ctx);
        goto after_13;
    // 0x801CBFD4: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    after_13:
    // 0x801CBFD8: jal         0x8003521C
    // 0x801CBFDC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_14;
    // 0x801CBFDC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_14:
    // 0x801CBFE0: b           L_801CC004
    // 0x801CBFE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801CC004;
    // 0x801CBFE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801CBFE8:
    // 0x801CBFE8: lui         $t0, 0x801D
    ctx->r8 = S32(0X801D << 16);
    // 0x801CBFEC: addiu       $t0, $t0, -0x3FF0
    ctx->r8 = ADD32(ctx->r8, -0X3FF0);
    // 0x801CBFF0: jal         0x802092F4
    // 0x801CBFF4: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    func_802092F4_6346D4(rdram, ctx);
        goto after_15;
    // 0x801CBFF4: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    after_15:
    // 0x801CBFF8: jal         0x8003521C
    // 0x801CBFFC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_16;
    // 0x801CBFFC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_16:
L_801CC000:
    // 0x801CC000: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801CC004:
    // 0x801CC004: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801CC008: jr          $ra
    // 0x801CC00C: nop

    TRACE_RETURN()
    return;
    // 0x801CC00C: nop

;}
RECOMP_FUNC void func_801D1638_5FCA18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D1638: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801D163C: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D1640: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801D1644: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D1648: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801D164C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801D1650: lw          $a0, 0x1C8($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X1C8);
    // 0x801D1654: beql        $a0, $zero, L_801D1688
    if (ctx->r4 == 0) {
        // 0x801D1658: lw          $a2, 0x1D8($v0)
        ctx->r6 = MEM_W(ctx->r2, 0X1D8);
            goto L_801D1688;
    }
    goto skip_0;
    // 0x801D1658: lw          $a2, 0x1D8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X1D8);
    skip_0:
    // 0x801D165C: lw          $a2, 0x1D8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X1D8);
    // 0x801D1660: beq         $a2, $zero, L_801D1684
    if (ctx->r6 == 0) {
        // 0x801D1664: or          $a1, $a2, $zero
        ctx->r5 = ctx->r6 | 0;
            goto L_801D1684;
    }
    // 0x801D1664: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x801D1668: jal         0x80033024
    // 0x801D166C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_80033024_33C24(rdram, ctx);
        goto after_0;
    // 0x801D166C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x801D1670: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x801D1674: lw          $a0, 0x1D8($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X1D8);
    // 0x801D1678: jal         0x80033024
    // 0x801D167C: lw          $a1, 0x1C8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X1C8);
    func_80033024_33C24(rdram, ctx);
        goto after_1;
    // 0x801D167C: lw          $a1, 0x1C8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X1C8);
    after_1:
    // 0x801D1680: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
L_801D1684:
    // 0x801D1684: lw          $a2, 0x1D8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X1D8);
L_801D1688:
    // 0x801D1688: beql        $a2, $zero, L_801D16A8
    if (ctx->r6 == 0) {
        // 0x801D168C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801D16A8;
    }
    goto skip_1;
    // 0x801D168C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x801D1690: lw          $a1, 0x1CC($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X1CC);
    // 0x801D1694: beql        $a1, $zero, L_801D16A8
    if (ctx->r5 == 0) {
        // 0x801D1698: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801D16A8;
    }
    goto skip_2;
    // 0x801D1698: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x801D169C: jal         0x80033024
    // 0x801D16A0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_80033024_33C24(rdram, ctx);
        goto after_2;
    // 0x801D16A0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_2:
    // 0x801D16A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801D16A8:
    // 0x801D16A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801D16AC: jr          $ra
    // 0x801D16B0: nop

    TRACE_RETURN()
    return;
    // 0x801D16B0: nop

;}
RECOMP_FUNC void func_80201C7C_62D05C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80201C7C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80201C80: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80201C84: lw          $v1, -0x1130($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1130);
    // 0x80201C88: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80201C8C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80201C90: addiu       $t6, $v1, 0x178
    ctx->r14 = ADD32(ctx->r3, 0X178);
    // 0x80201C94: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x80201C98: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x80201C9C: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    // 0x80201CA0: lw          $t8, 0x80($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X80);
    // 0x80201CA4: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80201CA8: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x80201CAC: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80201CB0: bne         $t9, $zero, L_80201D28
    if (ctx->r25 != 0) {
        // 0x80201CB4: sw          $t9, 0x80($a0)
        MEM_W(0X80, ctx->r4) = ctx->r25;
            goto L_80201D28;
    }
    // 0x80201CB4: sw          $t9, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->r25;
    // 0x80201CB8: sw          $t0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->r8;
    // 0x80201CBC: jal         0x8000DD58
    // 0x80201CC0: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    func_8000DD58_E958(rdram, ctx);
        goto after_0;
    // 0x80201CC0: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    after_0:
    // 0x80201CC4: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x80201CC8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80201CCC: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x80201CD0: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x80201CD4: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x80201CD8: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80201CDC: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    // 0x80201CE0: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80201CE4: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x80201CE8: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x80201CEC: jal         0x801E1958
    // 0x80201CF0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_801E1958_60CD38(rdram, ctx);
        goto after_1;
    // 0x80201CF0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x80201CF4: beq         $v0, $zero, L_80201D28
    if (ctx->r2 == 0) {
        // 0x80201CF8: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80201D28;
    }
    // 0x80201CF8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80201CFC: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80201D00: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x80201D04: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80201D08: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x80201D0C: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x80201D10: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80201D14: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80201D18: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80201D1C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80201D20: jal         0x801D5F34
    // 0x80201D24: nop

    func_801D5F34_601314(rdram, ctx);
        goto after_2;
    // 0x80201D24: nop

    after_2:
L_80201D28:
    // 0x80201D28: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80201D2C: lw          $v1, -0x1130($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1130);
    // 0x80201D30: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80201D34: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x80201D38: lbu         $a0, 0x2C1($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X2C1);
    // 0x80201D3C: bnel        $a0, $at, L_80201D9C
    if (ctx->r4 != ctx->r1) {
        // 0x80201D40: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80201D9C;
    }
    goto skip_0;
    // 0x80201D40: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    skip_0:
    // 0x80201D44: sb          $t2, 0x2C1($v1)
    MEM_B(0X2C1, ctx->r3) = ctx->r10;
    // 0x80201D48: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80201D4C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80201D50: lwc1        $f10, 0xC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC);
    // 0x80201D54: lw          $a3, 0x10($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X10);
    // 0x80201D58: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x80201D5C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80201D60: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80201D64: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x80201D68: jal         0x801E1084
    // 0x80201D6C: nop

    func_801E1084_60C464(rdram, ctx);
        goto after_3;
    // 0x80201D6C: nop

    after_3:
    // 0x80201D70: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80201D74: jal         0x80037C9C
    // 0x80201D78: addiu       $a1, $zero, 0x2710
    ctx->r5 = ADD32(0, 0X2710);
    func_80037C9C_3889C(rdram, ctx);
        goto after_4;
    // 0x80201D78: addiu       $a1, $zero, 0x2710
    ctx->r5 = ADD32(0, 0X2710);
    after_4:
    // 0x80201D7C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80201D80: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80201D84: jal         0x80037C20
    // 0x80201D88: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_80037C20_38820(rdram, ctx);
        goto after_5;
    // 0x80201D88: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_5:
    // 0x80201D8C: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80201D90: lw          $v1, -0x1130($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1130);
    // 0x80201D94: lbu         $a0, 0x2C1($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X2C1);
    // 0x80201D98: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
L_80201D9C:
    // 0x80201D9C: bne         $a0, $at, L_80201DF8
    if (ctx->r4 != ctx->r1) {
        // 0x80201DA0: addiu       $t3, $zero, 0x4
        ctx->r11 = ADD32(0, 0X4);
            goto L_80201DF8;
    }
    // 0x80201DA0: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x80201DA4: sb          $t3, 0x2C1($v1)
    MEM_B(0X2C1, ctx->r3) = ctx->r11;
    // 0x80201DA8: lui         $t4, 0x8021
    ctx->r12 = S32(0X8021 << 16);
    // 0x80201DAC: lw          $t4, -0x10C0($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X10C0);
    // 0x80201DB0: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    // 0x80201DB4: jal         0x80038BC8
    // 0x80201DB8: sb          $zero, 0x11($t4)
    MEM_B(0X11, ctx->r12) = 0;
    func_80038BC8_397C8(rdram, ctx);
        goto after_6;
    // 0x80201DB8: sb          $zero, 0x11($t4)
    MEM_B(0X11, ctx->r12) = 0;
    after_6:
    // 0x80201DBC: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x80201DC0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80201DC4: lwc1        $f6, 0x20($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X20);
    // 0x80201DC8: lwc1        $f10, 0xC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC);
    // 0x80201DCC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80201DD0: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80201DD4: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x80201DD8: lw          $a3, 0x10($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X10);
    // 0x80201DDC: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x80201DE0: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x80201DE4: jal         0x801E0950
    // 0x80201DE8: nop

    func_801E0950_60BD30(rdram, ctx);
        goto after_7;
    // 0x80201DE8: nop

    after_7:
    // 0x80201DEC: lui         $t5, 0x8021
    ctx->r13 = S32(0X8021 << 16);
    // 0x80201DF0: lw          $t5, -0x1130($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1130);
    // 0x80201DF4: lbu         $a0, 0x2C1($t5)
    ctx->r4 = MEM_BU(ctx->r13, 0X2C1);
L_80201DF8:
    // 0x80201DF8: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80201DFC: bnel        $a0, $at, L_80201E68
    if (ctx->r4 != ctx->r1) {
        // 0x80201E00: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_80201E68;
    }
    goto skip_1;
    // 0x80201E00: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    skip_1:
    // 0x80201E04: jal         0x802085B0
    // 0x80201E08: nop

    func_802085B0_633990(rdram, ctx);
        goto after_8;
    // 0x80201E08: nop

    after_8:
    // 0x80201E0C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80201E10: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80201E14: swc1        $f0, 0x74($t6)
    MEM_W(0X74, ctx->r14) = ctx->f0.u32l;
    // 0x80201E18: jal         0x801D2BF0
    // 0x80201E1C: swc1        $f0, 0x78($t6)
    MEM_W(0X78, ctx->r14) = ctx->f0.u32l;
    func_801D2BF0_5FDFD0(rdram, ctx);
        goto after_9;
    // 0x80201E1C: swc1        $f0, 0x78($t6)
    MEM_W(0X78, ctx->r14) = ctx->f0.u32l;
    after_9:
    // 0x80201E20: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80201E24: sw          $zero, 0x20($t8)
    MEM_W(0X20, ctx->r24) = 0;
    // 0x80201E28: jal         0x80034F20
    // 0x80201E2C: sw          $zero, 0x24($t8)
    MEM_W(0X24, ctx->r24) = 0;
    func_80034F20_35B20(rdram, ctx);
        goto after_10;
    // 0x80201E2C: sw          $zero, 0x24($t8)
    MEM_W(0X24, ctx->r24) = 0;
    after_10:
    // 0x80201E30: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80201E34: jal         0x8003521C
    // 0x80201E38: addiu       $a0, $a0, -0x5150
    ctx->r4 = ADD32(ctx->r4, -0X5150);
    func_8003521C_35E1C(rdram, ctx);
        goto after_11;
    // 0x80201E38: addiu       $a0, $a0, -0x5150
    ctx->r4 = ADD32(ctx->r4, -0X5150);
    after_11:
    // 0x80201E3C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80201E40: jal         0x80037C9C
    // 0x80201E44: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80037C9C_3889C(rdram, ctx);
        goto after_12;
    // 0x80201E44: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_12:
    // 0x80201E48: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80201E4C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80201E50: jal         0x80037C20
    // 0x80201E54: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_80037C20_38820(rdram, ctx);
        goto after_13;
    // 0x80201E54: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_13:
    // 0x80201E58: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x80201E5C: lw          $t9, -0x1130($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1130);
    // 0x80201E60: lbu         $a0, 0x2C1($t9)
    ctx->r4 = MEM_BU(ctx->r25, 0X2C1);
    // 0x80201E64: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
L_80201E68:
    // 0x80201E68: bne         $a0, $at, L_80201EB8
    if (ctx->r4 != ctx->r1) {
        // 0x80201E6C: lw          $t0, 0x30($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X30);
            goto L_80201EB8;
    }
    // 0x80201E6C: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x80201E70: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80201E74: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80201E78: swc1        $f18, 0x74($t0)
    MEM_W(0X74, ctx->r8) = ctx->f18.u32l;
    // 0x80201E7C: jal         0x801D2BF0
    // 0x80201E80: swc1        $f4, 0x78($t0)
    MEM_W(0X78, ctx->r8) = ctx->f4.u32l;
    func_801D2BF0_5FDFD0(rdram, ctx);
        goto after_14;
    // 0x80201E80: swc1        $f4, 0x78($t0)
    MEM_W(0X78, ctx->r8) = ctx->f4.u32l;
    after_14:
    // 0x80201E84: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80201E88: sw          $zero, 0x20($t7)
    MEM_W(0X20, ctx->r15) = 0;
    // 0x80201E8C: jal         0x80034F20
    // 0x80201E90: sw          $zero, 0x24($t7)
    MEM_W(0X24, ctx->r15) = 0;
    func_80034F20_35B20(rdram, ctx);
        goto after_15;
    // 0x80201E90: sw          $zero, 0x24($t7)
    MEM_W(0X24, ctx->r15) = 0;
    after_15:
    // 0x80201E94: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80201E98: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80201E9C: sb          $t1, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r9;
    // 0x80201EA0: jal         0x8003521C
    // 0x80201EA4: addiu       $a0, $a0, 0x1ECC
    ctx->r4 = ADD32(ctx->r4, 0X1ECC);
    func_8003521C_35E1C(rdram, ctx);
        goto after_16;
    // 0x80201EA4: addiu       $a0, $a0, 0x1ECC
    ctx->r4 = ADD32(ctx->r4, 0X1ECC);
    after_16:
    // 0x80201EA8: jal         0x801D16B4
    // 0x80201EAC: nop

    func_801D16B4_5FCA94(rdram, ctx);
        goto after_17;
    // 0x80201EAC: nop

    after_17:
    // 0x80201EB0: jal         0x80038BC8
    // 0x80201EB4: addiu       $a0, $zero, 0x4C
    ctx->r4 = ADD32(0, 0X4C);
    func_80038BC8_397C8(rdram, ctx);
        goto after_18;
    // 0x80201EB4: addiu       $a0, $zero, 0x4C
    ctx->r4 = ADD32(0, 0X4C);
    after_18:
L_80201EB8:
    // 0x80201EB8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80201EBC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80201EC0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80201EC4: jr          $ra
    // 0x80201EC8: nop

    TRACE_RETURN()
    return;
    // 0x80201EC8: nop

;}
RECOMP_FUNC void func_801E37E0_60EBC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E37E0: lui         $t2, 0x8021
    ctx->r10 = S32(0X8021 << 16);
    // 0x801E37E4: addiu       $t2, $t2, -0x1130
    ctx->r10 = ADD32(ctx->r10, -0X1130);
    // 0x801E37E8: lw          $v0, 0x0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X0);
    // 0x801E37EC: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x801E37F0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801E37F4: addiu       $t6, $v0, 0x178
    ctx->r14 = ADD32(ctx->r2, 0X178);
    // 0x801E37F8: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    // 0x801E37FC: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x801E3800: sw          $t6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r14;
    // 0x801E3804: lw          $t7, 0x1C4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X1C4);
    // 0x801E3808: addiu       $v1, $v0, 0xA0
    ctx->r3 = ADD32(ctx->r2, 0XA0);
    // 0x801E380C: lui         $at, 0x4366
    ctx->r1 = S32(0X4366 << 16);
    // 0x801E3810: lw          $t8, 0x18($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X18);
    // 0x801E3814: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801E3818: addiu       $t3, $sp, 0x6C
    ctx->r11 = ADD32(ctx->r29, 0X6C);
    // 0x801E381C: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x801E3820: addiu       $t4, $sp, 0x68
    ctx->r12 = ADD32(ctx->r29, 0X68);
    // 0x801E3824: addiu       $t5, $sp, 0x64
    ctx->r13 = ADD32(ctx->r29, 0X64);
    // 0x801E3828: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x801E382C: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x801E3830: swc1        $f4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f4.u32l;
    // 0x801E3834: lwc1        $f6, 0x4($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X4);
    // 0x801E3838: swc1        $f6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f6.u32l;
    // 0x801E383C: lwc1        $f8, 0x8($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801E3840: swc1        $f8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f8.u32l;
    // 0x801E3844: lw          $a3, 0x14($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X14);
    // 0x801E3848: lw          $a2, 0x10($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X10);
    // 0x801E384C: lwc1        $f14, 0xC($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0XC);
    // 0x801E3850: sw          $v1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r3;
    // 0x801E3854: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x801E3858: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x801E385C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x801E3860: jal         0x8000E4E4
    // 0x801E3864: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    func_8000E4E4_F0E4(rdram, ctx);
        goto after_0;
    // 0x801E3864: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    after_0:
    // 0x801E3868: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x801E386C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x801E3870: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801E3874: lwc1        $f0, 0x10($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X10);
    // 0x801E3878: lui         $t2, 0x8021
    ctx->r10 = S32(0X8021 << 16);
    // 0x801E387C: addiu       $t2, $t2, -0x1130
    ctx->r10 = ADD32(ctx->r10, -0X1130);
    // 0x801E3880: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x801E3884: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x801E3888: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x801E388C: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x801E3890: bc1f        L_801E3990
    if (!c1cs) {
        // 0x801E3894: lui         $at, 0x4220
        ctx->r1 = S32(0X4220 << 16);
            goto L_801E3990;
    }
    // 0x801E3894: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x801E3898: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x801E389C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801E38A0: lui         $a3, 0xC4A2
    ctx->r7 = S32(0XC4A2 << 16);
    // 0x801E38A4: addiu       $t7, $sp, 0x60
    ctx->r15 = ADD32(ctx->r29, 0X60);
    // 0x801E38A8: sub.s       $f16, $f0, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x801E38AC: addiu       $t8, $sp, 0x5C
    ctx->r24 = ADD32(ctx->r29, 0X5C);
    // 0x801E38B0: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x801E38B4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x801E38B8: sub.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f2.fl;
    // 0x801E38BC: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x801E38C0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x801E38C4: sw          $t1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r9;
    // 0x801E38C8: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x801E38CC: jal         0x8001CC38
    // 0x801E38D0: nop

    func_8001CC38_1D838(rdram, ctx);
        goto after_1;
    // 0x801E38D0: nop

    after_1:
    // 0x801E38D4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801E38D8: lui         $t2, 0x8021
    ctx->r10 = S32(0X8021 << 16);
    // 0x801E38DC: addiu       $t2, $t2, -0x1130
    ctx->r10 = ADD32(ctx->r10, -0X1130);
    // 0x801E38E0: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x801E38E4: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x801E38E8: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x801E38EC: bc1fl       L_801E3988
    if (!c1cs) {
        // 0x801E38F0: lw          $t5, 0x0($t2)
        ctx->r13 = MEM_W(ctx->r10, 0X0);
            goto L_801E3988;
    }
    goto skip_0;
    // 0x801E38F0: lw          $t5, 0x0($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X0);
    skip_0:
    // 0x801E38F4: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x801E38F8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x801E38FC: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x801E3900: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801E3904: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801E3908: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x801E390C: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x801E3910: nop

    // 0x801E3914: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x801E3918: beql        $t3, $zero, L_801E3968
    if (ctx->r11 == 0) {
        // 0x801E391C: mfc1        $t3, $f8
        ctx->r11 = (int32_t)ctx->f8.u32l;
            goto L_801E3968;
    }
    goto skip_1;
    // 0x801E391C: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    skip_1:
    // 0x801E3920: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801E3924: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x801E3928: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x801E392C: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x801E3930: nop

    // 0x801E3934: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x801E3938: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x801E393C: nop

    // 0x801E3940: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x801E3944: bne         $t3, $zero, L_801E395C
    if (ctx->r11 != 0) {
        // 0x801E3948: nop
    
            goto L_801E395C;
    }
    // 0x801E3948: nop

    // 0x801E394C: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    // 0x801E3950: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E3954: b           L_801E3974
    // 0x801E3958: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
        goto L_801E3974;
    // 0x801E3958: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
L_801E395C:
    // 0x801E395C: b           L_801E3974
    // 0x801E3960: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
        goto L_801E3974;
    // 0x801E3960: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x801E3964: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
L_801E3968:
    // 0x801E3968: nop

    // 0x801E396C: bltz        $t3, L_801E395C
    if (SIGNED(ctx->r11) < 0) {
        // 0x801E3970: nop
    
            goto L_801E395C;
    }
    // 0x801E3970: nop

L_801E3974:
    // 0x801E3974: lw          $t4, 0x0($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X0);
    // 0x801E3978: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x801E397C: b           L_801E3A98
    // 0x801E3980: sw          $t3, 0x1FC($t4)
    MEM_W(0X1FC, ctx->r12) = ctx->r11;
        goto L_801E3A98;
    // 0x801E3980: sw          $t3, 0x1FC($t4)
    MEM_W(0X1FC, ctx->r12) = ctx->r11;
    // 0x801E3984: lw          $t5, 0x0($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X0);
L_801E3988:
    // 0x801E3988: b           L_801E3A98
    // 0x801E398C: sw          $zero, 0x1FC($t5)
    MEM_W(0X1FC, ctx->r13) = 0;
        goto L_801E3A98;
    // 0x801E398C: sw          $zero, 0x1FC($t5)
    MEM_W(0X1FC, ctx->r13) = 0;
L_801E3990:
    // 0x801E3990: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801E3994: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x801E3998: addiu       $t6, $sp, 0x60
    ctx->r14 = ADD32(ctx->r29, 0X60);
    // 0x801E399C: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x801E39A0: addiu       $t7, $sp, 0x5C
    ctx->r15 = ADD32(ctx->r29, 0X5C);
    // 0x801E39A4: bc1fl       L_801E3A94
    if (!c1cs) {
        // 0x801E39A8: lw          $t5, 0x0($t2)
        ctx->r13 = MEM_W(ctx->r10, 0X0);
            goto L_801E3A94;
    }
    goto skip_2;
    // 0x801E39A8: lw          $t5, 0x0($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X0);
    skip_2:
    // 0x801E39AC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801E39B0: lui         $a3, 0xC4A2
    ctx->r7 = S32(0XC4A2 << 16);
    // 0x801E39B4: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x801E39B8: sub.s       $f16, $f0, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x801E39BC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x801E39C0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801E39C4: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801E39C8: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x801E39CC: jal         0x8001CC38
    // 0x801E39D0: sw          $t1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r9;
    func_8001CC38_1D838(rdram, ctx);
        goto after_2;
    // 0x801E39D0: sw          $t1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r9;
    after_2:
    // 0x801E39D4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801E39D8: lui         $t2, 0x8021
    ctx->r10 = S32(0X8021 << 16);
    // 0x801E39DC: addiu       $t2, $t2, -0x1130
    ctx->r10 = ADD32(ctx->r10, -0X1130);
    // 0x801E39E0: c.le.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl <= ctx->f0.fl;
    // 0x801E39E4: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x801E39E8: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x801E39EC: bc1fl       L_801E3A88
    if (!c1cs) {
        // 0x801E39F0: lw          $t4, 0x0($t2)
        ctx->r12 = MEM_W(ctx->r10, 0X0);
            goto L_801E3A88;
    }
    goto skip_3;
    // 0x801E39F0: lw          $t4, 0x0($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X0);
    skip_3:
    // 0x801E39F4: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x801E39F8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801E39FC: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x801E3A00: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801E3A04: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801E3A08: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x801E3A0C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x801E3A10: nop

    // 0x801E3A14: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x801E3A18: beql        $t9, $zero, L_801E3A68
    if (ctx->r25 == 0) {
        // 0x801E3A1C: mfc1        $t9, $f6
        ctx->r25 = (int32_t)ctx->f6.u32l;
            goto L_801E3A68;
    }
    goto skip_4;
    // 0x801E3A1C: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    skip_4:
    // 0x801E3A20: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E3A24: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801E3A28: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801E3A2C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x801E3A30: nop

    // 0x801E3A34: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x801E3A38: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x801E3A3C: nop

    // 0x801E3A40: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x801E3A44: bne         $t9, $zero, L_801E3A5C
    if (ctx->r25 != 0) {
        // 0x801E3A48: nop
    
            goto L_801E3A5C;
    }
    // 0x801E3A48: nop

    // 0x801E3A4C: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x801E3A50: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E3A54: b           L_801E3A74
    // 0x801E3A58: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_801E3A74;
    // 0x801E3A58: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_801E3A5C:
    // 0x801E3A5C: b           L_801E3A74
    // 0x801E3A60: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_801E3A74;
    // 0x801E3A60: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x801E3A64: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
L_801E3A68:
    // 0x801E3A68: nop

    // 0x801E3A6C: bltz        $t9, L_801E3A5C
    if (SIGNED(ctx->r25) < 0) {
        // 0x801E3A70: nop
    
            goto L_801E3A5C;
    }
    // 0x801E3A70: nop

L_801E3A74:
    // 0x801E3A74: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x801E3A78: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x801E3A7C: b           L_801E3A98
    // 0x801E3A80: sw          $t9, 0x1FC($t3)
    MEM_W(0X1FC, ctx->r11) = ctx->r25;
        goto L_801E3A98;
    // 0x801E3A80: sw          $t9, 0x1FC($t3)
    MEM_W(0X1FC, ctx->r11) = ctx->r25;
    // 0x801E3A84: lw          $t4, 0x0($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X0);
L_801E3A88:
    // 0x801E3A88: b           L_801E3A98
    // 0x801E3A8C: sw          $zero, 0x1FC($t4)
    MEM_W(0X1FC, ctx->r12) = 0;
        goto L_801E3A98;
    // 0x801E3A8C: sw          $zero, 0x1FC($t4)
    MEM_W(0X1FC, ctx->r12) = 0;
    // 0x801E3A90: lw          $t5, 0x0($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X0);
L_801E3A94:
    // 0x801E3A94: sw          $zero, 0x1FC($t5)
    MEM_W(0X1FC, ctx->r13) = 0;
L_801E3A98:
    // 0x801E3A98: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x801E3A9C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x801E3AA0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801E3AA4: lwc1        $f8, 0x10($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X10);
    // 0x801E3AA8: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801E3AAC: lui         $t5, 0x8021
    ctx->r13 = S32(0X8021 << 16);
    // 0x801E3AB0: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x801E3AB4: addiu       $a2, $a2, -0x10F4
    ctx->r6 = ADD32(ctx->r6, -0X10F4);
    // 0x801E3AB8: addiu       $t5, $t5, -0x5370
    ctx->r13 = ADD32(ctx->r13, -0X5370);
    // 0x801E3ABC: lui         $t4, 0x600
    ctx->r12 = S32(0X600 << 16);
    // 0x801E3AC0: bc1f        L_801E3AFC
    if (!c1cs) {
        // 0x801E3AC4: lui         $t6, 0xBC00
        ctx->r14 = S32(0XBC00 << 16);
            goto L_801E3AFC;
    }
    // 0x801E3AC4: lui         $t6, 0xBC00
    ctx->r14 = S32(0XBC00 << 16);
    // 0x801E3AC8: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x801E3ACC: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801E3AD0: addiu       $t7, $t7, -0x5350
    ctx->r15 = ADD32(ctx->r15, -0X5350);
    // 0x801E3AD4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x801E3AD8: sw          $t7, 0x30($t8)
    MEM_W(0X30, ctx->r24) = ctx->r15;
    // 0x801E3ADC: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801E3AE0: addiu       $a2, $a2, -0x10F4
    ctx->r6 = ADD32(ctx->r6, -0X10F4);
    // 0x801E3AE4: sb          $v0, 0x9C($t1)
    MEM_B(0X9C, ctx->r9) = ctx->r2;
    // 0x801E3AE8: sb          $v0, 0x9D($t1)
    MEM_B(0X9D, ctx->r9) = ctx->r2;
    // 0x801E3AEC: sb          $v0, 0x9E($t1)
    MEM_B(0X9E, ctx->r9) = ctx->r2;
    // 0x801E3AF0: addiu       $t9, $zero, 0x3C0
    ctx->r25 = ADD32(0, 0X3C0);
    // 0x801E3AF4: b           L_801E3C10
    // 0x801E3AF8: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
        goto L_801E3C10;
    // 0x801E3AF8: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
L_801E3AFC:
    // 0x801E3AFC: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x801E3B00: ori         $t6, $t6, 0x8
    ctx->r14 = ctx->r14 | 0X8;
    // 0x801E3B04: addiu       $t7, $zero, 0x3E8
    ctx->r15 = ADD32(0, 0X3E8);
    // 0x801E3B08: slti        $at, $v0, 0x3C0
    ctx->r1 = SIGNED(ctx->r2) < 0X3C0 ? 1 : 0;
    // 0x801E3B0C: beq         $at, $zero, L_801E3B1C
    if (ctx->r1 == 0) {
        // 0x801E3B10: lui         $t8, 0x1
        ctx->r24 = S32(0X1 << 16);
            goto L_801E3B1C;
    }
    // 0x801E3B10: lui         $t8, 0x1
    ctx->r24 = S32(0X1 << 16);
    // 0x801E3B14: addiu       $t3, $v0, 0x1
    ctx->r11 = ADD32(ctx->r2, 0X1);
    // 0x801E3B18: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
L_801E3B1C:
    // 0x801E3B1C: sw          $t4, 0xD0($t0)
    MEM_W(0XD0, ctx->r8) = ctx->r12;
    // 0x801E3B20: sw          $t5, 0xD4($t0)
    MEM_W(0XD4, ctx->r8) = ctx->r13;
    // 0x801E3B24: sw          $t6, 0xD8($t0)
    MEM_W(0XD8, ctx->r8) = ctx->r14;
    // 0x801E3B28: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x801E3B2C: ori         $t8, $t8, 0xF400
    ctx->r24 = ctx->r24 | 0XF400;
    // 0x801E3B30: sw          $zero, 0xE4($t0)
    MEM_W(0XE4, ctx->r8) = 0;
    // 0x801E3B34: subu        $v1, $t7, $v0
    ctx->r3 = SUB32(ctx->r15, ctx->r2);
    // 0x801E3B38: div         $zero, $t8, $v1
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r3)));
    // 0x801E3B3C: negu        $t5, $v0
    ctx->r13 = SUB32(0, ctx->r2);
    // 0x801E3B40: sll         $t6, $t5, 8
    ctx->r14 = S32(ctx->r13 << 8);
    // 0x801E3B44: addu        $t7, $t6, $t8
    ctx->r15 = ADD32(ctx->r14, ctx->r24);
    // 0x801E3B48: mflo        $t9
    ctx->r25 = lo;
    // 0x801E3B4C: or          $t3, $t9, $zero
    ctx->r11 = ctx->r25 | 0;
    // 0x801E3B50: bne         $v1, $zero, L_801E3B5C
    if (ctx->r3 != 0) {
        // 0x801E3B54: nop
    
            goto L_801E3B5C;
    }
    // 0x801E3B54: nop

    // 0x801E3B58: break       7
    do_break(2149464920);
L_801E3B5C:
    // 0x801E3B5C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x801E3B60: bne         $v1, $at, L_801E3B74
    if (ctx->r3 != ctx->r1) {
        // 0x801E3B64: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_801E3B74;
    }
    // 0x801E3B64: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E3B68: bne         $t8, $at, L_801E3B74
    if (ctx->r24 != ctx->r1) {
        // 0x801E3B6C: nop
    
            goto L_801E3B74;
    }
    // 0x801E3B6C: nop

    // 0x801E3B70: break       6
    do_break(2149464944);
L_801E3B74:
    // 0x801E3B74: div         $zero, $t7, $v1
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r3)));
    // 0x801E3B78: addu        $at, $t8, $zero
    ctx->r1 = ADD32(ctx->r24, 0);
    // 0x801E3B7C: mflo        $t8
    ctx->r24 = lo;
    // 0x801E3B80: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x801E3B84: sll         $t4, $t3, 16
    ctx->r12 = S32(ctx->r11 << 16);
    // 0x801E3B88: or          $t3, $t4, $t9
    ctx->r11 = ctx->r12 | ctx->r25;
    // 0x801E3B8C: lui         $t5, 0xB800
    ctx->r13 = S32(0XB800 << 16);
    // 0x801E3B90: sw          $t3, 0xDC($t0)
    MEM_W(0XDC, ctx->r8) = ctx->r11;
    // 0x801E3B94: bne         $v1, $zero, L_801E3BA0
    if (ctx->r3 != 0) {
        // 0x801E3B98: nop
    
            goto L_801E3BA0;
    }
    // 0x801E3B98: nop

    // 0x801E3B9C: break       7
    do_break(2149464988);
L_801E3BA0:
    // 0x801E3BA0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x801E3BA4: bne         $v1, $at, L_801E3BB8
    if (ctx->r3 != ctx->r1) {
        // 0x801E3BA8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_801E3BB8;
    }
    // 0x801E3BA8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E3BAC: bne         $t7, $at, L_801E3BB8
    if (ctx->r15 != ctx->r1) {
        // 0x801E3BB0: nop
    
            goto L_801E3BB8;
    }
    // 0x801E3BB0: nop

    // 0x801E3BB4: break       6
    do_break(2149465012);
L_801E3BB8:
    // 0x801E3BB8: sw          $t5, 0xE0($t0)
    MEM_W(0XE0, ctx->r8) = ctx->r13;
    // 0x801E3BBC: addiu       $a0, $t0, 0xD0
    ctx->r4 = ADD32(ctx->r8, 0XD0);
    // 0x801E3BC0: subu        $a1, $t0, $t0
    ctx->r5 = SUB32(ctx->r8, ctx->r8);
    // 0x801E3BC4: addiu       $a1, $a1, 0x18
    ctx->r5 = ADD32(ctx->r5, 0X18);
    // 0x801E3BC8: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    // 0x801E3BCC: jal         0x80040620
    // 0x801E3BD0: sw          $t1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r9;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_3;
    // 0x801E3BD0: sw          $t1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r9;
    after_3:
    // 0x801E3BD4: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x801E3BD8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E3BDC: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x801E3BE0: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x801E3BE4: or          $t6, $a0, $at
    ctx->r14 = ctx->r4 | ctx->r1;
    // 0x801E3BE8: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801E3BEC: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x801E3BF0: sw          $t7, 0x30($t8)
    MEM_W(0X30, ctx->r24) = ctx->r15;
    // 0x801E3BF4: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x801E3BF8: lui         $t2, 0x8021
    ctx->r10 = S32(0X8021 << 16);
    // 0x801E3BFC: addiu       $t4, $zero, 0xA0
    ctx->r12 = ADD32(0, 0XA0);
    // 0x801E3C00: addiu       $t2, $t2, -0x1130
    ctx->r10 = ADD32(ctx->r10, -0X1130);
    // 0x801E3C04: sb          $v0, 0x9C($t1)
    MEM_B(0X9C, ctx->r9) = ctx->r2;
    // 0x801E3C08: sb          $v0, 0x9D($t1)
    MEM_B(0X9D, ctx->r9) = ctx->r2;
    // 0x801E3C0C: sb          $t4, 0x9E($t1)
    MEM_B(0X9E, ctx->r9) = ctx->r12;
L_801E3C10:
    // 0x801E3C10: lw          $t9, 0x0($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X0);
    // 0x801E3C14: lwc1        $f0, 0x68($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801E3C18: lui         $at, 0xC220
    ctx->r1 = S32(0XC220 << 16);
    // 0x801E3C1C: lbu         $t3, 0x2C0($t9)
    ctx->r11 = MEM_BU(ctx->r25, 0X2C0);
    // 0x801E3C20: bnel        $t3, $zero, L_801E3CD4
    if (ctx->r11 != 0) {
        // 0x801E3C24: mtc1        $at, $f2
        ctx->f2.u32l = ctx->r1;
            goto L_801E3CD4;
    }
    goto skip_5;
    // 0x801E3C24: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    skip_5:
    // 0x801E3C28: lui         $at, 0xC2A0
    ctx->r1 = S32(0XC2A0 << 16);
    // 0x801E3C2C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801E3C30: lwc1        $f0, 0x68($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801E3C34: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x801E3C38: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x801E3C3C: nop

    // 0x801E3C40: bc1fl       L_801E3C50
    if (!c1cs) {
        // 0x801E3C44: mtc1        $at, $f2
        ctx->f2.u32l = ctx->r1;
            goto L_801E3C50;
    }
    goto skip_6;
    // 0x801E3C44: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    skip_6:
    // 0x801E3C48: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x801E3C4C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
L_801E3C50:
    // 0x801E3C50: lui         $at, 0xC366
    ctx->r1 = S32(0XC366 << 16);
    // 0x801E3C54: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    // 0x801E3C58: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x801E3C5C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801E3C60: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x801E3C64: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801E3C68: bc1f        L_801E3C74
    if (!c1cs) {
        // 0x801E3C6C: lui         $at, 0x4366
        ctx->r1 = S32(0X4366 << 16);
            goto L_801E3C74;
    }
    // 0x801E3C6C: lui         $at, 0x4366
    ctx->r1 = S32(0X4366 << 16);
    // 0x801E3C70: swc1        $f2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f2.u32l;
L_801E3C74:
    // 0x801E3C74: lwc1        $f18, 0x68($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801E3C78: lw          $v0, 0x74($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X74);
    // 0x801E3C7C: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x801E3C80: swc1        $f4, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f4.u32l;
    // 0x801E3C84: lwc1        $f6, 0x6C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801E3C88: c.le.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl <= ctx->f0.fl;
    // 0x801E3C8C: nop

    // 0x801E3C90: bc1fl       L_801E3CA0
    if (!c1cs) {
        // 0x801E3C94: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_801E3CA0;
    }
    goto skip_7;
    // 0x801E3C94: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_7:
    // 0x801E3C98: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    // 0x801E3C9C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
L_801E3CA0:
    // 0x801E3CA0: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801E3CA4: lui         $at, 0x4320
    ctx->r1 = S32(0X4320 << 16);
    // 0x801E3CA8: c.le.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl <= ctx->f8.fl;
    // 0x801E3CAC: nop

    // 0x801E3CB0: bc1fl       L_801E3CC0
    if (!c1cs) {
        // 0x801E3CB4: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_801E3CC0;
    }
    goto skip_8;
    // 0x801E3CB4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_8:
    // 0x801E3CB8: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    // 0x801E3CBC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
L_801E3CC0:
    // 0x801E3CC0: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801E3CC4: add.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x801E3CC8: b           L_801E3D64
    // 0x801E3CCC: swc1        $f16, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f16.u32l;
        goto L_801E3D64;
    // 0x801E3CCC: swc1        $f16, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f16.u32l;
    // 0x801E3CD0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
L_801E3CD4:
    // 0x801E3CD4: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x801E3CD8: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x801E3CDC: nop

    // 0x801E3CE0: bc1fl       L_801E3CF0
    if (!c1cs) {
        // 0x801E3CE4: mtc1        $at, $f2
        ctx->f2.u32l = ctx->r1;
            goto L_801E3CF0;
    }
    goto skip_9;
    // 0x801E3CE4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    skip_9:
    // 0x801E3CE8: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x801E3CEC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
L_801E3CF0:
    // 0x801E3CF0: lui         $at, 0xC320
    ctx->r1 = S32(0XC320 << 16);
    // 0x801E3CF4: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    // 0x801E3CF8: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x801E3CFC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801E3D00: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x801E3D04: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801E3D08: bc1f        L_801E3D14
    if (!c1cs) {
        // 0x801E3D0C: lui         $at, 0x4320
        ctx->r1 = S32(0X4320 << 16);
            goto L_801E3D14;
    }
    // 0x801E3D0C: lui         $at, 0x4320
    ctx->r1 = S32(0X4320 << 16);
    // 0x801E3D10: swc1        $f2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f2.u32l;
L_801E3D14:
    // 0x801E3D14: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801E3D18: lw          $v0, 0x74($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X74);
    // 0x801E3D1C: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x801E3D20: swc1        $f6, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f6.u32l;
    // 0x801E3D24: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801E3D28: c.le.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl <= ctx->f0.fl;
    // 0x801E3D2C: nop

    // 0x801E3D30: bc1fl       L_801E3D40
    if (!c1cs) {
        // 0x801E3D34: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_801E3D40;
    }
    goto skip_10;
    // 0x801E3D34: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_10:
    // 0x801E3D38: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    // 0x801E3D3C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
L_801E3D40:
    // 0x801E3D40: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801E3D44: c.le.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl <= ctx->f10.fl;
    // 0x801E3D48: nop

    // 0x801E3D4C: bc1fl       L_801E3D5C
    if (!c1cs) {
        // 0x801E3D50: lwc1        $f16, 0x6C($sp)
        ctx->f16.u32l = MEM_W(ctx->r29, 0X6C);
            goto L_801E3D5C;
    }
    goto skip_11;
    // 0x801E3D50: lwc1        $f16, 0x6C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X6C);
    skip_11:
    // 0x801E3D54: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    // 0x801E3D58: lwc1        $f16, 0x6C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X6C);
L_801E3D5C:
    // 0x801E3D5C: add.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f16.fl;
    // 0x801E3D60: swc1        $f18, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f18.u32l;
L_801E3D64:
    // 0x801E3D64: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801E3D68: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x801E3D6C: jr          $ra
    // 0x801E3D70: nop

    TRACE_RETURN()
    return;
    // 0x801E3D70: nop

;}
RECOMP_FUNC void func_801EDBA0_618F80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EDBA0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801EDBA4: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801EDBA8: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801EDBAC: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x801EDBB0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801EDBB4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801EDBB8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801EDBBC: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x801EDBC0: addiu       $t6, $zero, 0xAB
    ctx->r14 = ADD32(0, 0XAB);
    // 0x801EDBC4: sw          $t6, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r14;
    // 0x801EDBC8: sw          $zero, 0x98($a0)
    MEM_W(0X98, ctx->r4) = 0;
    // 0x801EDBCC: addiu       $v0, $v0, 0xA0
    ctx->r2 = ADD32(ctx->r2, 0XA0);
    // 0x801EDBD0: swc1        $f12, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->f12.u32l;
    // 0x801EDBD4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801EDBD8: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x801EDBDC: addiu       $a1, $zero, 0xAB
    ctx->r5 = ADD32(0, 0XAB);
    // 0x801EDBE0: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x801EDBE4: jal         0x8000E630
    // 0x801EDBE8: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    func_8000E630_F230(rdram, ctx);
        goto after_0;
    // 0x801EDBE8: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x801EDBEC: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x801EDBF0: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x801EDBF4: lui         $at, 0xC3FA
    ctx->r1 = S32(0XC3FA << 16);
    // 0x801EDBF8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801EDBFC: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x801EDC00: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x801EDC04: addiu       $t7, $zero, 0x64
    ctx->r15 = ADD32(0, 0X64);
    // 0x801EDC08: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801EDC0C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801EDC10: addiu       $a0, $a0, -0x23C4
    ctx->r4 = ADD32(ctx->r4, -0X23C4);
    // 0x801EDC14: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
    // 0x801EDC18: sw          $t7, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r15;
    // 0x801EDC1C: sw          $zero, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = 0;
    // 0x801EDC20: jal         0x8003521C
    // 0x801EDC24: sw          $zero, 0xEC($s0)
    MEM_W(0XEC, ctx->r16) = 0;
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x801EDC24: sw          $zero, 0xEC($s0)
    MEM_W(0XEC, ctx->r16) = 0;
    after_1:
    // 0x801EDC28: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801EDC2C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801EDC30: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801EDC34: jr          $ra
    // 0x801EDC38: nop

    TRACE_RETURN()
    return;
    // 0x801EDC38: nop

;}
RECOMP_FUNC void func_801E5574_610954(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E5574: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E5578: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E557C: lw          $t6, 0xD0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD0);
    // 0x801E5580: sltiu       $at, $t6, 0xB
    ctx->r1 = ctx->r14 < 0XB ? 1 : 0;
    // 0x801E5584: beq         $at, $zero, L_801E55A0
    if (ctx->r1 == 0) {
        // 0x801E5588: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_801E55A0;
    }
    // 0x801E5588: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x801E558C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E5590: addu        $at, $at, $t6
    gpr jr_addend_801E5598 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x801E5594: lw          $t6, -0x20D8($at)
    ctx->r14 = ADD32(ctx->r1, -0X20D8);
    // 0x801E5598: jr          $t6
    // 0x801E559C: nop

    switch (jr_addend_801E5598 >> 2) {
        case 0: goto L_801E55A0; break;
        case 1: goto L_801E55B4; break;
        case 2: goto L_801E55C8; break;
        case 3: goto L_801E55DC; break;
        case 4: goto L_801E55F0; break;
        case 5: goto L_801E5604; break;
        case 6: goto L_801E5618; break;
        case 7: goto L_801E562C; break;
        case 8: goto L_801E5640; break;
        case 9: goto L_801E5654; break;
        case 10: goto L_801E5668; break;
        default: switch_error(__func__, 0x801E5598, 0x8020DF28);
    }
    // 0x801E559C: nop

L_801E55A0:
    // 0x801E55A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801E55A4: jal         0x801E58C8
    // 0x801E55A8: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    func_801E58C8_610CA8(rdram, ctx);
        goto after_0;
    // 0x801E55A8: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    after_0:
    // 0x801E55AC: b           L_801E5684
    // 0x801E55B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E5684;
    // 0x801E55B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E55B4:
    // 0x801E55B4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x801E55B8: jal         0x801E58C8
    // 0x801E55BC: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_801E58C8_610CA8(rdram, ctx);
        goto after_1;
    // 0x801E55BC: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_1:
    // 0x801E55C0: b           L_801E5684
    // 0x801E55C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E5684;
    // 0x801E55C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E55C8:
    // 0x801E55C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801E55CC: jal         0x801E58C8
    // 0x801E55D0: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_801E58C8_610CA8(rdram, ctx);
        goto after_2;
    // 0x801E55D0: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_2:
    // 0x801E55D4: b           L_801E5684
    // 0x801E55D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E5684;
    // 0x801E55D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E55DC:
    // 0x801E55DC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801E55E0: jal         0x801E58C8
    // 0x801E55E4: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    func_801E58C8_610CA8(rdram, ctx);
        goto after_3;
    // 0x801E55E4: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    after_3:
    // 0x801E55E8: b           L_801E5684
    // 0x801E55EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E5684;
    // 0x801E55EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E55F0:
    // 0x801E55F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801E55F4: jal         0x801E58C8
    // 0x801E55F8: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    func_801E58C8_610CA8(rdram, ctx);
        goto after_4;
    // 0x801E55F8: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    after_4:
    // 0x801E55FC: b           L_801E5684
    // 0x801E5600: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E5684;
    // 0x801E5600: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E5604:
    // 0x801E5604: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801E5608: jal         0x801E58C8
    // 0x801E560C: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    func_801E58C8_610CA8(rdram, ctx);
        goto after_5;
    // 0x801E560C: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    after_5:
    // 0x801E5610: b           L_801E5684
    // 0x801E5614: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E5684;
    // 0x801E5614: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E5618:
    // 0x801E5618: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x801E561C: jal         0x801E58C8
    // 0x801E5620: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    func_801E58C8_610CA8(rdram, ctx);
        goto after_6;
    // 0x801E5620: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    after_6:
    // 0x801E5624: b           L_801E5684
    // 0x801E5628: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E5684;
    // 0x801E5628: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E562C:
    // 0x801E562C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x801E5630: jal         0x801E58C8
    // 0x801E5634: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    func_801E58C8_610CA8(rdram, ctx);
        goto after_7;
    // 0x801E5634: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    after_7:
    // 0x801E5638: b           L_801E5684
    // 0x801E563C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E5684;
    // 0x801E563C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E5640:
    // 0x801E5640: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x801E5644: jal         0x801E58C8
    // 0x801E5648: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_801E58C8_610CA8(rdram, ctx);
        goto after_8;
    // 0x801E5648: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_8:
    // 0x801E564C: b           L_801E5684
    // 0x801E5650: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E5684;
    // 0x801E5650: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E5654:
    // 0x801E5654: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801E5658: jal         0x801E58C8
    // 0x801E565C: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    func_801E58C8_610CA8(rdram, ctx);
        goto after_9;
    // 0x801E565C: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    after_9:
    // 0x801E5660: b           L_801E5684
    // 0x801E5664: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E5684;
    // 0x801E5664: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E5668:
    // 0x801E5668: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801E566C: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    // 0x801E5670: jal         0x801E58C8
    // 0x801E5674: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801E58C8_610CA8(rdram, ctx);
        goto after_10;
    // 0x801E5674: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_10:
    // 0x801E5678: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801E567C: sw          $zero, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = 0;
    // 0x801E5680: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E5684:
    // 0x801E5684: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E5688: jr          $ra
    // 0x801E568C: nop

    TRACE_RETURN()
    return;
    // 0x801E568C: nop

;}
RECOMP_FUNC void func_801E9C90_615070(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E9C90: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801E9C94: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801E9C98: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801E9C9C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E9CA0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801E9CA4: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x801E9CA8: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x801E9CAC: lwc1        $f12, 0x90($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X90);
    // 0x801E9CB0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801E9CB4: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801E9CB8: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x801E9CBC: c.le.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl <= ctx->f12.fl;
    // 0x801E9CC0: addiu       $a2, $s0, 0x8
    ctx->r6 = ADD32(ctx->r16, 0X8);
    // 0x801E9CC4: addiu       $a3, $s0, 0x10
    ctx->r7 = ADD32(ctx->r16, 0X10);
    // 0x801E9CC8: bc1fl       L_801E9CE8
    if (!c1cs) {
        // 0x801E9CCC: lhu         $a1, 0x96($a0)
        ctx->r5 = MEM_HU(ctx->r4, 0X96);
            goto L_801E9CE8;
    }
    goto skip_0;
    // 0x801E9CCC: lhu         $a1, 0x96($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0X96);
    skip_0:
    // 0x801E9CD0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E9CD4: nop

    // 0x801E9CD8: sub.s       $f8, $f12, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f12.fl - ctx->f6.fl;
    // 0x801E9CDC: swc1        $f8, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->f8.u32l;
    // 0x801E9CE0: lwc1        $f12, 0x90($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X90);
    // 0x801E9CE4: lhu         $a1, 0x96($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0X96);
L_801E9CE8:
    // 0x801E9CE8: jal         0x8000E630
    // 0x801E9CEC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_8000E630_F230(rdram, ctx);
        goto after_0;
    // 0x801E9CEC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x801E9CF0: jal         0x801EEEC0
    // 0x801E9CF4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_801EEEC0_61A2A0(rdram, ctx);
        goto after_1;
    // 0x801E9CF4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_1:
    // 0x801E9CF8: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x801E9CFC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x801E9D00: jal         0x8000E9F4
    // 0x801E9D04: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    func_8000E9F4_F5F4(rdram, ctx);
        goto after_2;
    // 0x801E9D04: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    after_2:
    // 0x801E9D08: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x801E9D0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E9D10: jal         0x801D2F40
    // 0x801E9D14: lui         $a1, 0x430C
    ctx->r5 = S32(0X430C << 16);
    func_801D2F40_5FE320(rdram, ctx);
        goto after_3;
    // 0x801E9D14: lui         $a1, 0x430C
    ctx->r5 = S32(0X430C << 16);
    after_3:
    // 0x801E9D18: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801E9D1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E9D20: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E9D24: c.eq.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl == ctx->f10.fl;
    // 0x801E9D28: nop

    // 0x801E9D2C: bc1fl       L_801E9D54
    if (!c1cs) {
        // 0x801E9D30: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801E9D54;
    }
    goto skip_1;
    // 0x801E9D30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x801E9D34: jal         0x801D2EE4
    // 0x801E9D38: addiu       $a1, $a1, -0x4E90
    ctx->r5 = ADD32(ctx->r5, -0X4E90);
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_4;
    // 0x801E9D38: addiu       $a1, $a1, -0x4E90
    ctx->r5 = ADD32(ctx->r5, -0X4E90);
    after_4:
    // 0x801E9D3C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x801E9D40: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E9D44: addiu       $a0, $a0, 0x52D8
    ctx->r4 = ADD32(ctx->r4, 0X52D8);
    // 0x801E9D48: jal         0x8003521C
    // 0x801E9D4C: sw          $zero, 0x70($t7)
    MEM_W(0X70, ctx->r15) = 0;
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x801E9D4C: sw          $zero, 0x70($t7)
    MEM_W(0X70, ctx->r15) = 0;
    after_5:
    // 0x801E9D50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E9D54:
    // 0x801E9D54: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801E9D58: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801E9D5C: jr          $ra
    // 0x801E9D60: nop

    TRACE_RETURN()
    return;
    // 0x801E9D60: nop

;}
RECOMP_FUNC void func_80208440_633820(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80208440: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80208444: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80208448: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8020844C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80208450: addiu       $t6, $zero, 0xB
    ctx->r14 = ADD32(0, 0XB);
    // 0x80208454: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80208458: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x8020845C: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x80208460: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x80208464: jal         0x801D15BC
    // 0x80208468: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_801D15BC_5FC99C(rdram, ctx);
        goto after_0;
    // 0x80208468: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_0:
    // 0x8020846C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80208470: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80208474: addiu       $a1, $zero, 0x8B
    ctx->r5 = ADD32(0, 0X8B);
    // 0x80208478: jal         0x801D5064
    // 0x8020847C: addiu       $a2, $zero, 0x63
    ctx->r6 = ADD32(0, 0X63);
    func_801D5064_600444(rdram, ctx);
        goto after_1;
    // 0x8020847C: addiu       $a2, $zero, 0x63
    ctx->r6 = ADD32(0, 0X63);
    after_1:
    // 0x80208480: beq         $v0, $zero, L_802084F4
    if (ctx->r2 == 0) {
        // 0x80208484: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_802084F4;
    }
    // 0x80208484: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80208488: jal         0x80037C9C
    // 0x8020848C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80037C9C_3889C(rdram, ctx);
        goto after_2;
    // 0x8020848C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x80208490: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80208494: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80208498: jal         0x80037C20
    // 0x8020849C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80037C20_38820(rdram, ctx);
        goto after_3;
    // 0x8020849C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x802084A0: jal         0x80038BC8
    // 0x802084A4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80038BC8_397C8(rdram, ctx);
        goto after_4;
    // 0x802084A4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x802084A8: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x802084AC: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x802084B0: lui         $t8, 0x4
    ctx->r24 = S32(0X4 << 16);
    // 0x802084B4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x802084B8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x802084BC: lbu         $t8, -0x521C($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X521C);
    // 0x802084C0: bne         $t8, $at, L_802084E0
    if (ctx->r24 != ctx->r1) {
        // 0x802084C4: nop
    
            goto L_802084E0;
    }
    // 0x802084C4: nop

    // 0x802084C8: jal         0x801D3AA4
    // 0x802084CC: nop

    func_801D3AA4_5FEE84(rdram, ctx);
        goto after_5;
    // 0x802084CC: nop

    after_5:
    // 0x802084D0: jal         0x800374EC
    // 0x802084D4: nop

    func_800374EC_380EC(rdram, ctx);
        goto after_6;
    // 0x802084D4: nop

    after_6:
    // 0x802084D8: b           L_802084E8
    // 0x802084DC: nop

        goto L_802084E8;
    // 0x802084DC: nop

L_802084E0:
    // 0x802084E0: jal         0x80037090
    // 0x802084E4: nop

    func_80037090_37C90(rdram, ctx);
        goto after_7;
    // 0x802084E4: nop

    after_7:
L_802084E8:
    // 0x802084E8: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802084EC: jal         0x8003521C
    // 0x802084F0: addiu       $a0, $a0, -0x7AFC
    ctx->r4 = ADD32(ctx->r4, -0X7AFC);
    func_8003521C_35E1C(rdram, ctx);
        goto after_8;
    // 0x802084F0: addiu       $a0, $a0, -0x7AFC
    ctx->r4 = ADD32(ctx->r4, -0X7AFC);
    after_8:
L_802084F4:
    // 0x802084F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802084F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802084FC: jr          $ra
    // 0x80208500: nop

    TRACE_RETURN()
    return;
    // 0x80208500: nop

;}
RECOMP_FUNC void func_801F4C74_620054(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F4C74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F4C78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F4C7C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F4C80: jal         0x801F76D0
    // 0x801F4C84: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801F76D0_622AB0(rdram, ctx);
        goto after_0;
    // 0x801F4C84: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801F4C88: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801F4C8C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801F4C90: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801F4C94: lwc1        $f6, 0x70($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X70);
    // 0x801F4C98: lwc1        $f10, 0x78($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X78);
    // 0x801F4C9C: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x801F4CA0: div.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x801F4CA4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F4CA8: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F4CAC: addiu       $a1, $a1, -0x4D30
    ctx->r5 = ADD32(ctx->r5, -0X4D30);
    // 0x801F4CB0: swc1        $f4, 0x74($a2)
    MEM_W(0X74, ctx->r6) = ctx->f4.u32l;
    // 0x801F4CB4: div.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x801F4CB8: swc1        $f8, 0x70($a2)
    MEM_W(0X70, ctx->r6) = ctx->f8.u32l;
    // 0x801F4CBC: swc1        $f16, 0x78($a2)
    MEM_W(0X78, ctx->r6) = ctx->f16.u32l;
    // 0x801F4CC0: jal         0x801D2EE4
    // 0x801F4CC4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_1;
    // 0x801F4CC4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x801F4CC8: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801F4CCC: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F4CD0: addiu       $a0, $a0, 0x4CF4
    ctx->r4 = ADD32(ctx->r4, 0X4CF4);
    // 0x801F4CD4: lw          $t6, 0xE8($a2)
    ctx->r14 = MEM_W(ctx->r6, 0XE8);
    // 0x801F4CD8: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x801F4CDC: jal         0x8003521C
    // 0x801F4CE0: sw          $t7, 0xE8($a2)
    MEM_W(0XE8, ctx->r6) = ctx->r15;
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801F4CE0: sw          $t7, 0xE8($a2)
    MEM_W(0XE8, ctx->r6) = ctx->r15;
    after_2:
    // 0x801F4CE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F4CE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F4CEC: jr          $ra
    // 0x801F4CF0: nop

    TRACE_RETURN()
    return;
    // 0x801F4CF0: nop

;}
RECOMP_FUNC void func_80208EF4_6342D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80208EF4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80208EF8: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x80208EFC: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x80208F00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80208F04: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80208F08: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80208F0C: lw          $t7, 0x1D8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X1D8);
    // 0x80208F10: lw          $t8, 0x18($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X18);
    // 0x80208F14: jal         0x801EE658
    // 0x80208F18: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    func_801EE658_619A38(rdram, ctx);
        goto after_0;
    // 0x80208F18: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    after_0:
    // 0x80208F1C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x80208F20: lw          $t9, -0x1130($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1130);
    // 0x80208F24: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80208F28: lbu         $t0, 0x2C1($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X2C1);
    // 0x80208F2C: bnel        $t0, $at, L_80208FA8
    if (ctx->r8 != ctx->r1) {
        // 0x80208F30: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80208FA8;
    }
    goto skip_0;
    // 0x80208F30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80208F34: jal         0x80038BC8
    // 0x80208F38: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    func_80038BC8_397C8(rdram, ctx);
        goto after_1;
    // 0x80208F38: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    after_1:
    // 0x80208F3C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80208F40: jal         0x80037C9C
    // 0x80208F44: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    func_80037C9C_3889C(rdram, ctx);
        goto after_2;
    // 0x80208F44: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    after_2:
    // 0x80208F48: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80208F4C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80208F50: jal         0x80037C20
    // 0x80208F54: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_80037C20_38820(rdram, ctx);
        goto after_3;
    // 0x80208F54: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_3:
    // 0x80208F58: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80208F5C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80208F60: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80208F64: lwc1        $f4, 0x10($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X10);
    // 0x80208F68: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x80208F6C: lui         $a2, 0xC120
    ctx->r6 = S32(0XC120 << 16);
    // 0x80208F70: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80208F74: lw          $a1, 0x8($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X8);
    // 0x80208F78: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x80208F7C: jal         0x801E0950
    // 0x80208F80: nop

    func_801E0950_60BD30(rdram, ctx);
        goto after_4;
    // 0x80208F80: nop

    after_4:
    // 0x80208F84: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x80208F88: lw          $t1, 0x18($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X18);
    // 0x80208F8C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80208F90: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80208F94: addiu       $a0, $a0, -0x704C
    ctx->r4 = ADD32(ctx->r4, -0X704C);
    // 0x80208F98: sw          $t1, 0x90($v1)
    MEM_W(0X90, ctx->r3) = ctx->r9;
    // 0x80208F9C: jal         0x8003521C
    // 0x80208FA0: swc1        $f10, 0x94($v1)
    MEM_W(0X94, ctx->r3) = ctx->f10.u32l;
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x80208FA0: swc1        $f10, 0x94($v1)
    MEM_W(0X94, ctx->r3) = ctx->f10.u32l;
    after_5:
    // 0x80208FA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80208FA8:
    // 0x80208FA8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80208FAC: jr          $ra
    // 0x80208FB0: nop

    TRACE_RETURN()
    return;
    // 0x80208FB0: nop

;}
RECOMP_FUNC void func_801D32D4_5FE6B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D32D4: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x801D32D8: beq         $a0, $zero, L_801D331C
    if (ctx->r4 == 0) {
        // 0x801D32DC: andi        $t6, $a2, 0xFF
        ctx->r14 = ctx->r6 & 0XFF;
            goto L_801D331C;
    }
    // 0x801D32DC: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x801D32E0: addu        $v1, $a0, $t6
    ctx->r3 = ADD32(ctx->r4, ctx->r14);
    // 0x801D32E4: sb          $zero, 0x8C($v1)
    MEM_B(0X8C, ctx->r3) = 0;
    // 0x801D32E8: sb          $zero, 0x90($v1)
    MEM_B(0X90, ctx->r3) = 0;
    // 0x801D32EC: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x801D32F0: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x801D32F4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x801D32F8: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x801D32FC: lw          $t1, -0x6320($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X6320);
    // 0x801D3300: lw          $t7, 0x38($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X38);
    // 0x801D3304: lui         $at, 0xF800
    ctx->r1 = S32(0XF800 << 16);
    // 0x801D3308: sll         $t2, $t1, 3
    ctx->r10 = S32(ctx->r9 << 3);
    // 0x801D330C: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x801D3310: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x801D3314: addu        $t3, $a0, $t2
    ctx->r11 = ADD32(ctx->r4, ctx->r10);
    // 0x801D3318: sw          $t9, 0x38($t3)
    MEM_W(0X38, ctx->r11) = ctx->r25;
L_801D331C:
    // 0x801D331C: jr          $ra
    // 0x801D3320: nop

    TRACE_RETURN()
    return;
    // 0x801D3320: nop

;}
RECOMP_FUNC void func_80200378_62B758(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80200378: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020037C: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x80200380: lw          $t6, -0x10C0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X10C0);
    // 0x80200384: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80200388: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8020038C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80200390: lbu         $v0, 0x4($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X4);
    // 0x80200394: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80200398: beql        $v0, $zero, L_802003D4
    if (ctx->r2 == 0) {
        // 0x8020039C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802003D4;
    }
    goto skip_0;
    // 0x8020039C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802003A0: bne         $v0, $at, L_802003D0
    if (ctx->r2 != ctx->r1) {
        // 0x802003A4: lui         $t7, 0x8021
        ctx->r15 = S32(0X8021 << 16);
            goto L_802003D0;
    }
    // 0x802003A4: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x802003A8: lw          $t7, -0x1130($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1130);
    // 0x802003AC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802003B0: addiu       $a1, $a1, 0x6BC
    ctx->r5 = ADD32(ctx->r5, 0X6BC);
    // 0x802003B4: jal         0x8003522C
    // 0x802003B8: lw          $a0, 0x1D8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X1D8);
    func_8003522C_35E2C(rdram, ctx);
        goto after_0;
    // 0x802003B8: lw          $a0, 0x1D8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X1D8);
    after_0:
    // 0x802003BC: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x802003C0: lw          $v0, -0x10C0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X10C0);
    // 0x802003C4: lbu         $t8, 0x4($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X4);
    // 0x802003C8: ori         $t9, $t8, 0x50
    ctx->r25 = ctx->r24 | 0X50;
    // 0x802003CC: sb          $t9, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r25;
L_802003D0:
    // 0x802003D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802003D4:
    // 0x802003D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802003D8: jr          $ra
    // 0x802003DC: nop

    TRACE_RETURN()
    return;
    // 0x802003DC: nop

;}
RECOMP_FUNC void func_801F8830_623C10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F8830: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801F8834: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801F8838: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801F883C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801F8840: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801F8844: lw          $t7, 0x1D8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X1D8);
    // 0x801F8848: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801F884C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801F8850: lw          $t8, 0xD8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XD8);
    // 0x801F8854: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x801F8858: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x801F885C: sltiu       $at, $t8, 0x14
    ctx->r1 = ctx->r24 < 0X14 ? 1 : 0;
    // 0x801F8860: beq         $at, $zero, L_801F8884
    if (ctx->r1 == 0) {
        // 0x801F8864: addiu       $t3, $zero, 0xFF
        ctx->r11 = ADD32(0, 0XFF);
            goto L_801F8884;
    }
    // 0x801F8864: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x801F8868: sb          $t9, 0x64($a1)
    MEM_B(0X64, ctx->r5) = ctx->r25;
    // 0x801F886C: jal         0x80038BC8
    // 0x801F8870: ori         $a0, $zero, 0x8130
    ctx->r4 = 0 | 0X8130;
    func_80038BC8_397C8(rdram, ctx);
        goto after_0;
    // 0x801F8870: ori         $a0, $zero, 0x8130
    ctx->r4 = 0 | 0X8130;
    after_0:
    // 0x801F8874: jal         0x80035020
    // 0x801F8878: nop

    func_80035020_35C20(rdram, ctx);
        goto after_1;
    // 0x801F8878: nop

    after_1:
    // 0x801F887C: b           L_801F89C8
    // 0x801F8880: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801F89C8;
    // 0x801F8880: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801F8884:
    // 0x801F8884: lhu         $t0, 0x16($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X16);
    // 0x801F8888: lw          $t1, 0x98($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X98);
    // 0x801F888C: lwc1        $f0, 0x1C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801F8890: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x801F8894: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x801F8898: sh          $t2, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r10;
    // 0x801F889C: lwc1        $f2, 0x90($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X90);
    // 0x801F88A0: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x801F88A4: nop

    // 0x801F88A8: bc1fl       L_801F88D8
    if (!c1cs) {
        // 0x801F88AC: lwc1        $f0, 0x94($a0)
        ctx->f0.u32l = MEM_W(ctx->r4, 0X94);
            goto L_801F88D8;
    }
    goto skip_0;
    // 0x801F88AC: lwc1        $f0, 0x94($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X94);
    skip_0:
    // 0x801F88B0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801F88B4: lwc1        $f8, 0x24($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X24);
    // 0x801F88B8: div.s       $f4, $f2, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = DIV_S(ctx->f2.fl, ctx->f12.fl);
    // 0x801F88BC: add.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x801F88C0: swc1        $f6, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f6.u32l;
    // 0x801F88C4: lwc1        $f10, 0x90($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X90);
    // 0x801F88C8: div.s       $f16, $f10, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f12.fl);
    // 0x801F88CC: add.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x801F88D0: swc1        $f18, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f18.u32l;
    // 0x801F88D4: lwc1        $f0, 0x94($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X94);
L_801F88D8:
    // 0x801F88D8: lwc1        $f2, 0x9C($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X9C);
    // 0x801F88DC: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x801F88E0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801F88E4: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x801F88E8: nop

    // 0x801F88EC: bc1fl       L_801F8908
    if (!c1cs) {
        // 0x801F88F0: trunc.w.s   $f10, $f0
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = TRUNC_W_S(ctx->f0.fl);
            goto L_801F8908;
    }
    goto skip_1;
    // 0x801F88F0: trunc.w.s   $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = TRUNC_W_S(ctx->f0.fl);
    skip_1:
    // 0x801F88F4: div.s       $f4, $f2, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = DIV_S(ctx->f2.fl, ctx->f12.fl);
    // 0x801F88F8: add.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x801F88FC: swc1        $f6, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->f6.u32l;
    // 0x801F8900: lwc1        $f0, 0x94($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X94);
    // 0x801F8904: trunc.w.s   $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = TRUNC_W_S(ctx->f0.fl);
L_801F8908:
    // 0x801F8908: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F890C: addiu       $a1, $a1, -0x54E0
    ctx->r5 = ADD32(ctx->r5, -0X54E0);
    // 0x801F8910: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x801F8914: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x801F8918: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x801F891C: jal         0x8000DF10
    // 0x801F8920: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    func_8000DF10_EB10(rdram, ctx);
        goto after_2;
    // 0x801F8920: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    after_2:
    // 0x801F8924: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801F8928: or          $t6, $v0, $at
    ctx->r14 = ctx->r2 | ctx->r1;
    // 0x801F892C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x801F8930: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801F8934: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x801F8938: sw          $t7, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r15;
    // 0x801F893C: lw          $t8, 0x7C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X7C);
    // 0x801F8940: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801F8944: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x801F8948: bgtz        $t9, L_801F8978
    if (SIGNED(ctx->r25) > 0) {
        // 0x801F894C: sw          $t9, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r25;
            goto L_801F8978;
    }
    // 0x801F894C: sw          $t9, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r25;
    // 0x801F8950: lwc1        $f8, 0x90($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X90);
    // 0x801F8954: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801F8958: addiu       $t1, $zero, 0x19
    ctx->r9 = ADD32(0, 0X19);
    // 0x801F895C: sw          $t1, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r9;
    // 0x801F8960: mul.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x801F8964: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x801F8968: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x801F896C: jal         0x801F8BB0
    // 0x801F8970: nop

    func_801F8BB0_623F90(rdram, ctx);
        goto after_3;
    // 0x801F8970: nop

    after_3:
    // 0x801F8974: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
L_801F8978:
    // 0x801F8978: lw          $t2, 0x80($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X80);
    // 0x801F897C: addiu       $t5, $zero, 0x1E
    ctx->r13 = ADD32(0, 0X1E);
    // 0x801F8980: lui         $a1, 0x3F4C
    ctx->r5 = S32(0X3F4C << 16);
    // 0x801F8984: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x801F8988: bgtz        $t3, L_801F899C
    if (SIGNED(ctx->r11) > 0) {
        // 0x801F898C: sw          $t3, 0x80($a0)
        MEM_W(0X80, ctx->r4) = ctx->r11;
            goto L_801F899C;
    }
    // 0x801F898C: sw          $t3, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->r11;
    // 0x801F8990: sw          $t5, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->r13;
    // 0x801F8994: jal         0x801F8E78
    // 0x801F8998: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    func_801F8E78_624258(rdram, ctx);
        goto after_4;
    // 0x801F8998: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    after_4:
L_801F899C:
    // 0x801F899C: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801F89A0: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801F89A4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801F89A8: lw          $t7, 0x1D8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X1D8);
    // 0x801F89AC: lw          $t8, 0xD8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XD8);
    // 0x801F89B0: sltiu       $at, $t8, 0x15
    ctx->r1 = ctx->r24 < 0X15 ? 1 : 0;
    // 0x801F89B4: bnel        $at, $zero, L_801F89C8
    if (ctx->r1 != 0) {
        // 0x801F89B8: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_801F89C8;
    }
    goto skip_2;
    // 0x801F89B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_2:
    // 0x801F89BC: jal         0x8003521C
    // 0x801F89C0: addiu       $a0, $a0, -0x7628
    ctx->r4 = ADD32(ctx->r4, -0X7628);
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x801F89C0: addiu       $a0, $a0, -0x7628
    ctx->r4 = ADD32(ctx->r4, -0X7628);
    after_5:
    // 0x801F89C4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801F89C8:
    // 0x801F89C8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801F89CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801F89D0: jr          $ra
    // 0x801F89D4: nop

    TRACE_RETURN()
    return;
    // 0x801F89D4: nop

;}
RECOMP_FUNC void func_801D363C_5FEA1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D363C: lw          $v1, 0x34($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X34);
    // 0x801D3640: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801D3644: beq         $v1, $zero, L_801D3654
    if (ctx->r3 == 0) {
        // 0x801D3648: nop
    
            goto L_801D3654;
    }
    // 0x801D3648: nop

    // 0x801D364C: jr          $ra
    // 0x801D3650: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    TRACE_RETURN()
    return;
    // 0x801D3650: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_801D3654:
    // 0x801D3654: jr          $ra
    // 0x801D3658: nop

    TRACE_RETURN()
    return;
    // 0x801D3658: nop

;}
RECOMP_FUNC void func_80202D34_62E114(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80202D34: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80202D38: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80202D3C: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80202D40: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80202D44: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80202D48: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80202D4C: lwc1        $f18, 0xC($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0XC);
    // 0x80202D50: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x80202D54: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80202D58: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80202D5C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80202D60: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x80202D64: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80202D68: sub.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d - ctx->f6.d;
    // 0x80202D6C: swc1        $f16, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f16.u32l;
    // 0x80202D70: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x80202D74: jr          $ra
    // 0x80202D78: swc1        $f10, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f10.u32l;
    TRACE_RETURN()
    return;
    // 0x80202D78: swc1        $f10, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f10.u32l;
;}
RECOMP_FUNC void func_801D5064_600444(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D5064: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D5068: sltiu       $at, $a1, 0xE
    ctx->r1 = ctx->r5 < 0XE ? 1 : 0;
    // 0x801D506C: beq         $at, $zero, L_801D5078
    if (ctx->r1 == 0) {
        // 0x801D5070: lw          $v0, -0x1130($v0)
        ctx->r2 = MEM_W(ctx->r2, -0X1130);
            goto L_801D5078;
    }
    // 0x801D5070: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801D5074: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
L_801D5078:
    // 0x801D5078: sltiu       $at, $a1, 0xE1
    ctx->r1 = ctx->r5 < 0XE1 ? 1 : 0;
    // 0x801D507C: bnel        $at, $zero, L_801D508C
    if (ctx->r1 != 0) {
        // 0x801D5080: sltiu       $at, $a2, 0x10
        ctx->r1 = ctx->r6 < 0X10 ? 1 : 0;
            goto L_801D508C;
    }
    goto skip_0;
    // 0x801D5080: sltiu       $at, $a2, 0x10
    ctx->r1 = ctx->r6 < 0X10 ? 1 : 0;
    skip_0:
    // 0x801D5084: addiu       $a1, $zero, 0xE0
    ctx->r5 = ADD32(0, 0XE0);
    // 0x801D5088: sltiu       $at, $a2, 0x10
    ctx->r1 = ctx->r6 < 0X10 ? 1 : 0;
L_801D508C:
    // 0x801D508C: beql        $at, $zero, L_801D509C
    if (ctx->r1 == 0) {
        // 0x801D5090: sltiu       $at, $a2, 0xE1
        ctx->r1 = ctx->r6 < 0XE1 ? 1 : 0;
            goto L_801D509C;
    }
    goto skip_1;
    // 0x801D5090: sltiu       $at, $a2, 0xE1
    ctx->r1 = ctx->r6 < 0XE1 ? 1 : 0;
    skip_1:
    // 0x801D5094: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x801D5098: sltiu       $at, $a2, 0xE1
    ctx->r1 = ctx->r6 < 0XE1 ? 1 : 0;
L_801D509C:
    // 0x801D509C: bnel        $at, $zero, L_801D50AC
    if (ctx->r1 != 0) {
        // 0x801D50A0: lw          $v1, 0x1F0($v0)
        ctx->r3 = MEM_W(ctx->r2, 0X1F0);
            goto L_801D50AC;
    }
    goto skip_2;
    // 0x801D50A0: lw          $v1, 0x1F0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1F0);
    skip_2:
    // 0x801D50A4: addiu       $a2, $zero, 0xE0
    ctx->r6 = ADD32(0, 0XE0);
    // 0x801D50A8: lw          $v1, 0x1F0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1F0);
L_801D50AC:
    // 0x801D50AC: sltu        $at, $v1, $a1
    ctx->r1 = ctx->r3 < ctx->r5 ? 1 : 0;
    // 0x801D50B0: beql        $at, $zero, L_801D5178
    if (ctx->r1 == 0) {
        // 0x801D50B4: sltu        $at, $a1, $v1
        ctx->r1 = ctx->r5 < ctx->r3 ? 1 : 0;
            goto L_801D5178;
    }
    goto skip_3;
    // 0x801D50B4: sltu        $at, $a1, $v1
    ctx->r1 = ctx->r5 < ctx->r3 ? 1 : 0;
    skip_3:
    // 0x801D50B8: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x801D50BC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801D50C0: bgez        $v1, L_801D50D4
    if (SIGNED(ctx->r3) >= 0) {
        // 0x801D50C4: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_801D50D4;
    }
    // 0x801D50C4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801D50C8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D50CC: nop

    // 0x801D50D0: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_801D50D4:
    // 0x801D50D4: add.s       $f10, $f6, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f12.fl;
    // 0x801D50D8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801D50DC: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801D50E0: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x801D50E4: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x801D50E8: nop

    // 0x801D50EC: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x801D50F0: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x801D50F4: nop

    // 0x801D50F8: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x801D50FC: beql        $t7, $zero, L_801D514C
    if (ctx->r15 == 0) {
        // 0x801D5100: mfc1        $t7, $f16
        ctx->r15 = (int32_t)ctx->f16.u32l;
            goto L_801D514C;
    }
    goto skip_4;
    // 0x801D5100: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    skip_4:
    // 0x801D5104: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801D5108: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801D510C: sub.s       $f16, $f10, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x801D5110: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x801D5114: nop

    // 0x801D5118: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x801D511C: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x801D5120: nop

    // 0x801D5124: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x801D5128: bne         $t7, $zero, L_801D5140
    if (ctx->r15 != 0) {
        // 0x801D512C: nop
    
            goto L_801D5140;
    }
    // 0x801D512C: nop

    // 0x801D5130: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x801D5134: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801D5138: b           L_801D5158
    // 0x801D513C: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_801D5158;
    // 0x801D513C: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_801D5140:
    // 0x801D5140: b           L_801D5158
    // 0x801D5144: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_801D5158;
    // 0x801D5144: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x801D5148: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
L_801D514C:
    // 0x801D514C: nop

    // 0x801D5150: bltz        $t7, L_801D5140
    if (SIGNED(ctx->r15) < 0) {
        // 0x801D5154: nop
    
            goto L_801D5140;
    }
    // 0x801D5154: nop

L_801D5158:
    // 0x801D5158: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x801D515C: sltu        $at, $t7, $a1
    ctx->r1 = ctx->r15 < ctx->r5 ? 1 : 0;
    // 0x801D5160: sw          $t7, 0x1F0($v0)
    MEM_W(0X1F0, ctx->r2) = ctx->r15;
    // 0x801D5164: bne         $at, $zero, L_801D5174
    if (ctx->r1 != 0) {
        // 0x801D5168: or          $v1, $t7, $zero
        ctx->r3 = ctx->r15 | 0;
            goto L_801D5174;
    }
    // 0x801D5168: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
    // 0x801D516C: sw          $a1, 0x1F0($v0)
    MEM_W(0X1F0, ctx->r2) = ctx->r5;
    // 0x801D5170: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
L_801D5174:
    // 0x801D5174: sltu        $at, $a1, $v1
    ctx->r1 = ctx->r5 < ctx->r3 ? 1 : 0;
L_801D5178:
    // 0x801D5178: beql        $at, $zero, L_801D5238
    if (ctx->r1 == 0) {
        // 0x801D517C: lw          $v1, 0x1F8($v0)
        ctx->r3 = MEM_W(ctx->r2, 0X1F8);
            goto L_801D5238;
    }
    goto skip_5;
    // 0x801D517C: lw          $v1, 0x1F8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1F8);
    skip_5:
    // 0x801D5180: mtc1        $v1, $f18
    ctx->f18.u32l = ctx->r3;
    // 0x801D5184: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801D5188: bgez        $v1, L_801D519C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x801D518C: cvt.s.w     $f4, $f18
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
            goto L_801D519C;
    }
    // 0x801D518C: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x801D5190: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D5194: nop

    // 0x801D5198: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
L_801D519C:
    // 0x801D519C: sub.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f12.fl;
    // 0x801D51A0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801D51A4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801D51A8: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x801D51AC: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x801D51B0: nop

    // 0x801D51B4: cvt.w.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = CVT_W_S(ctx->f6.fl);
    // 0x801D51B8: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x801D51BC: nop

    // 0x801D51C0: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x801D51C4: beql        $t9, $zero, L_801D5214
    if (ctx->r25 == 0) {
        // 0x801D51C8: mfc1        $t9, $f10
        ctx->r25 = (int32_t)ctx->f10.u32l;
            goto L_801D5214;
    }
    goto skip_6;
    // 0x801D51C8: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    skip_6:
    // 0x801D51CC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801D51D0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801D51D4: sub.s       $f10, $f6, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x801D51D8: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x801D51DC: nop

    // 0x801D51E0: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x801D51E4: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x801D51E8: nop

    // 0x801D51EC: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x801D51F0: bne         $t9, $zero, L_801D5208
    if (ctx->r25 != 0) {
        // 0x801D51F4: nop
    
            goto L_801D5208;
    }
    // 0x801D51F4: nop

    // 0x801D51F8: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x801D51FC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801D5200: b           L_801D5220
    // 0x801D5204: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_801D5220;
    // 0x801D5204: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_801D5208:
    // 0x801D5208: b           L_801D5220
    // 0x801D520C: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_801D5220;
    // 0x801D520C: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x801D5210: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
L_801D5214:
    // 0x801D5214: nop

    // 0x801D5218: bltz        $t9, L_801D5208
    if (SIGNED(ctx->r25) < 0) {
        // 0x801D521C: nop
    
            goto L_801D5208;
    }
    // 0x801D521C: nop

L_801D5220:
    // 0x801D5220: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x801D5224: sltu        $at, $a1, $t9
    ctx->r1 = ctx->r5 < ctx->r25 ? 1 : 0;
    // 0x801D5228: bne         $at, $zero, L_801D5234
    if (ctx->r1 != 0) {
        // 0x801D522C: sw          $t9, 0x1F0($v0)
        MEM_W(0X1F0, ctx->r2) = ctx->r25;
            goto L_801D5234;
    }
    // 0x801D522C: sw          $t9, 0x1F0($v0)
    MEM_W(0X1F0, ctx->r2) = ctx->r25;
    // 0x801D5230: sw          $a1, 0x1F0($v0)
    MEM_W(0X1F0, ctx->r2) = ctx->r5;
L_801D5234:
    // 0x801D5234: lw          $v1, 0x1F8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1F8);
L_801D5238:
    // 0x801D5238: sltu        $at, $v1, $a2
    ctx->r1 = ctx->r3 < ctx->r6 ? 1 : 0;
    // 0x801D523C: beql        $at, $zero, L_801D5304
    if (ctx->r1 == 0) {
        // 0x801D5240: sltu        $at, $a2, $v1
        ctx->r1 = ctx->r6 < ctx->r3 ? 1 : 0;
            goto L_801D5304;
    }
    goto skip_7;
    // 0x801D5240: sltu        $at, $a2, $v1
    ctx->r1 = ctx->r6 < ctx->r3 ? 1 : 0;
    skip_7:
    // 0x801D5244: mtc1        $v1, $f16
    ctx->f16.u32l = ctx->r3;
    // 0x801D5248: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801D524C: bgez        $v1, L_801D5260
    if (SIGNED(ctx->r3) >= 0) {
        // 0x801D5250: cvt.s.w     $f18, $f16
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
            goto L_801D5260;
    }
    // 0x801D5250: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x801D5254: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D5258: nop

    // 0x801D525C: add.s       $f18, $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f8.fl;
L_801D5260:
    // 0x801D5260: add.s       $f4, $f18, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f12.fl;
    // 0x801D5264: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x801D5268: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801D526C: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x801D5270: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x801D5274: nop

    // 0x801D5278: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x801D527C: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x801D5280: nop

    // 0x801D5284: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x801D5288: beql        $t2, $zero, L_801D52D8
    if (ctx->r10 == 0) {
        // 0x801D528C: mfc1        $t2, $f6
        ctx->r10 = (int32_t)ctx->f6.u32l;
            goto L_801D52D8;
    }
    goto skip_8;
    // 0x801D528C: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    skip_8:
    // 0x801D5290: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D5294: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x801D5298: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801D529C: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x801D52A0: nop

    // 0x801D52A4: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x801D52A8: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x801D52AC: nop

    // 0x801D52B0: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x801D52B4: bne         $t2, $zero, L_801D52CC
    if (ctx->r10 != 0) {
        // 0x801D52B8: nop
    
            goto L_801D52CC;
    }
    // 0x801D52B8: nop

    // 0x801D52BC: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x801D52C0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801D52C4: b           L_801D52E4
    // 0x801D52C8: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
        goto L_801D52E4;
    // 0x801D52C8: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
L_801D52CC:
    // 0x801D52CC: b           L_801D52E4
    // 0x801D52D0: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
        goto L_801D52E4;
    // 0x801D52D0: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x801D52D4: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
L_801D52D8:
    // 0x801D52D8: nop

    // 0x801D52DC: bltz        $t2, L_801D52CC
    if (SIGNED(ctx->r10) < 0) {
        // 0x801D52E0: nop
    
            goto L_801D52CC;
    }
    // 0x801D52E0: nop

L_801D52E4:
    // 0x801D52E4: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x801D52E8: sltu        $at, $t2, $a2
    ctx->r1 = ctx->r10 < ctx->r6 ? 1 : 0;
    // 0x801D52EC: sw          $t2, 0x1F8($v0)
    MEM_W(0X1F8, ctx->r2) = ctx->r10;
    // 0x801D52F0: bne         $at, $zero, L_801D5300
    if (ctx->r1 != 0) {
        // 0x801D52F4: or          $v1, $t2, $zero
        ctx->r3 = ctx->r10 | 0;
            goto L_801D5300;
    }
    // 0x801D52F4: or          $v1, $t2, $zero
    ctx->r3 = ctx->r10 | 0;
    // 0x801D52F8: sw          $a2, 0x1F8($v0)
    MEM_W(0X1F8, ctx->r2) = ctx->r6;
    // 0x801D52FC: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
L_801D5300:
    // 0x801D5300: sltu        $at, $a2, $v1
    ctx->r1 = ctx->r6 < ctx->r3 ? 1 : 0;
L_801D5304:
    // 0x801D5304: beql        $at, $zero, L_801D53C4
    if (ctx->r1 == 0) {
        // 0x801D5308: lw          $t6, 0x1F0($v0)
        ctx->r14 = MEM_W(ctx->r2, 0X1F0);
            goto L_801D53C4;
    }
    goto skip_9;
    // 0x801D5308: lw          $t6, 0x1F0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X1F0);
    skip_9:
    // 0x801D530C: mtc1        $v1, $f10
    ctx->f10.u32l = ctx->r3;
    // 0x801D5310: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801D5314: bgez        $v1, L_801D5328
    if (SIGNED(ctx->r3) >= 0) {
        // 0x801D5318: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_801D5328;
    }
    // 0x801D5318: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x801D531C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D5320: nop

    // 0x801D5324: add.s       $f16, $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f8.fl;
L_801D5328:
    // 0x801D5328: sub.s       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f12.fl;
    // 0x801D532C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x801D5330: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801D5334: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x801D5338: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x801D533C: nop

    // 0x801D5340: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x801D5344: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x801D5348: nop

    // 0x801D534C: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x801D5350: beql        $t4, $zero, L_801D53A0
    if (ctx->r12 == 0) {
        // 0x801D5354: mfc1        $t4, $f4
        ctx->r12 = (int32_t)ctx->f4.u32l;
            goto L_801D53A0;
    }
    goto skip_10;
    // 0x801D5354: mfc1        $t4, $f4
    ctx->r12 = (int32_t)ctx->f4.u32l;
    skip_10:
    // 0x801D5358: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801D535C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x801D5360: sub.s       $f4, $f18, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x801D5364: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x801D5368: nop

    // 0x801D536C: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x801D5370: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x801D5374: nop

    // 0x801D5378: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x801D537C: bne         $t4, $zero, L_801D5394
    if (ctx->r12 != 0) {
        // 0x801D5380: nop
    
            goto L_801D5394;
    }
    // 0x801D5380: nop

    // 0x801D5384: mfc1        $t4, $f4
    ctx->r12 = (int32_t)ctx->f4.u32l;
    // 0x801D5388: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801D538C: b           L_801D53AC
    // 0x801D5390: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
        goto L_801D53AC;
    // 0x801D5390: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
L_801D5394:
    // 0x801D5394: b           L_801D53AC
    // 0x801D5398: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
        goto L_801D53AC;
    // 0x801D5398: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x801D539C: mfc1        $t4, $f4
    ctx->r12 = (int32_t)ctx->f4.u32l;
L_801D53A0:
    // 0x801D53A0: nop

    // 0x801D53A4: bltz        $t4, L_801D5394
    if (SIGNED(ctx->r12) < 0) {
        // 0x801D53A8: nop
    
            goto L_801D5394;
    }
    // 0x801D53A8: nop

L_801D53AC:
    // 0x801D53AC: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x801D53B0: sltu        $at, $a2, $t4
    ctx->r1 = ctx->r6 < ctx->r12 ? 1 : 0;
    // 0x801D53B4: bne         $at, $zero, L_801D53C0
    if (ctx->r1 != 0) {
        // 0x801D53B8: sw          $t4, 0x1F8($v0)
        MEM_W(0X1F8, ctx->r2) = ctx->r12;
            goto L_801D53C0;
    }
    // 0x801D53B8: sw          $t4, 0x1F8($v0)
    MEM_W(0X1F8, ctx->r2) = ctx->r12;
    // 0x801D53BC: sw          $a2, 0x1F8($v0)
    MEM_W(0X1F8, ctx->r2) = ctx->r6;
L_801D53C0:
    // 0x801D53C0: lw          $t6, 0x1F0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X1F0);
L_801D53C4:
    // 0x801D53C4: bnel        $a1, $t6, L_801D53E4
    if (ctx->r5 != ctx->r14) {
        // 0x801D53C8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801D53E4;
    }
    goto skip_11;
    // 0x801D53C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_11:
    // 0x801D53CC: lw          $t7, 0x1F8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X1F8);
    // 0x801D53D0: bnel        $a2, $t7, L_801D53E4
    if (ctx->r6 != ctx->r15) {
        // 0x801D53D4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801D53E4;
    }
    goto skip_12;
    // 0x801D53D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_12:
    // 0x801D53D8: jr          $ra
    // 0x801D53DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x801D53DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801D53E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D53E4:
    // 0x801D53E4: jr          $ra
    // 0x801D53E8: nop

    TRACE_RETURN()
    return;
    // 0x801D53E8: nop

;}
RECOMP_FUNC void func_801F31A0_61E580(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F31A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801F31A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F31A8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801F31AC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F31B0: jal         0x801F76D0
    // 0x801F31B4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_801F76D0_622AB0(rdram, ctx);
        goto after_0;
    // 0x801F31B4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F31B8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x801F31BC: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x801F31C0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F31C4: lwc1        $f4, 0x20($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X20);
    // 0x801F31C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F31CC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x801F31D0: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801F31D4: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x801F31D8: jal         0x801D3B18
    // 0x801F31DC: nop

    func_801D3B18_5FEEF8(rdram, ctx);
        goto after_1;
    // 0x801F31DC: nop

    after_1:
    // 0x801F31E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F31E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801F31E8: jal         0x801D3F00
    // 0x801F31EC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_801D3F00_5FF2E0(rdram, ctx);
        goto after_2;
    // 0x801F31EC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x801F31F0: jal         0x801F732C
    // 0x801F31F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801F732C_62270C(rdram, ctx);
        goto after_3;
    // 0x801F31F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801F31F8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x801F31FC: jal         0x801D2F40
    // 0x801F3200: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    func_801D2F40_5FE320(rdram, ctx);
        goto after_4;
    // 0x801F3200: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    after_4:
    // 0x801F3204: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801F3208: nop

    // 0x801F320C: c.eq.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl == ctx->f10.fl;
    // 0x801F3210: nop

    // 0x801F3214: bc1fl       L_801F3244
    if (!c1cs) {
        // 0x801F3218: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801F3244;
    }
    goto skip_0;
    // 0x801F3218: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801F321C: jal         0x801F703C
    // 0x801F3220: nop

    func_801F703C_62241C(rdram, ctx);
        goto after_5;
    // 0x801F3220: nop

    after_5:
    // 0x801F3224: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F3228: addiu       $a1, $a1, -0x4D58
    ctx->r5 = ADD32(ctx->r5, -0X4D58);
    // 0x801F322C: jal         0x801D31CC
    // 0x801F3230: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_6;
    // 0x801F3230: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x801F3234: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F3238: jal         0x8003521C
    // 0x801F323C: addiu       $a0, $a0, 0x3254
    ctx->r4 = ADD32(ctx->r4, 0X3254);
    func_8003521C_35E1C(rdram, ctx);
        goto after_7;
    // 0x801F323C: addiu       $a0, $a0, 0x3254
    ctx->r4 = ADD32(ctx->r4, 0X3254);
    after_7:
    // 0x801F3240: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801F3244:
    // 0x801F3244: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801F3248: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801F324C: jr          $ra
    // 0x801F3250: nop

    TRACE_RETURN()
    return;
    // 0x801F3250: nop

;}
RECOMP_FUNC void func_801F7004_6223E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F7004: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801F7008: lw          $t7, -0x1130($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1130);
    // 0x801F700C: addiu       $t6, $zero, 0x40
    ctx->r14 = ADD32(0, 0X40);
    // 0x801F7010: lw          $t8, 0x1D8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X1D8);
    // 0x801F7014: jr          $ra
    // 0x801F7018: sw          $t6, 0x64($t8)
    MEM_W(0X64, ctx->r24) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x801F7018: sw          $t6, 0x64($t8)
    MEM_W(0X64, ctx->r24) = ctx->r14;
;}
RECOMP_FUNC void func_801EAE80_616260(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EAE80: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801EAE84: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801EAE88: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x801EAE8C: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x801EAE90: lui         $a1, 0x801
    ctx->r5 = S32(0X801 << 16);
    // 0x801EAE94: addiu       $a1, $a1, -0xC50
    ctx->r5 = ADD32(ctx->r5, -0XC50);
    // 0x801EAE98: lwc1        $f4, 0xC($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0XC);
    // 0x801EAE9C: lw          $a3, 0x8($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X8);
    // 0x801EAEA0: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801EAEA4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801EAEA8: lwc1        $f6, 0x10($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X10);
    // 0x801EAEAC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801EAEB0: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801EAEB4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801EAEB8: lhu         $t7, 0x14($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X14);
    // 0x801EAEBC: addiu       $t1, $zero, 0x4B0
    ctx->r9 = ADD32(0, 0X4B0);
    // 0x801EAEC0: addiu       $a2, $a2, -0x54E0
    ctx->r6 = ADD32(ctx->r6, -0X54E0);
    // 0x801EAEC4: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x801EAEC8: lhu         $t8, 0x16($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X16);
    // 0x801EAECC: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801EAED0: addiu       $a0, $a0, -0x507C
    ctx->r4 = ADD32(ctx->r4, -0X507C);
    // 0x801EAED4: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x801EAED8: lhu         $t9, 0x18($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X18);
    // 0x801EAEDC: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x801EAEE0: lwc1        $f8, 0x1C($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x801EAEE4: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x801EAEE8: lwc1        $f10, 0x20($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X20);
    // 0x801EAEEC: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x801EAEF0: lwc1        $f16, 0x24($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X24);
    // 0x801EAEF4: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801EAEF8: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x801EAEFC: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    // 0x801EAF00: jal         0x80035854
    // 0x801EAF04: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    func_80035854_36454(rdram, ctx);
        goto after_0;
    // 0x801EAF04: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x801EAF08: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x801EAF0C: beq         $v0, $zero, L_801EAF70
    if (ctx->r2 == 0) {
        // 0x801EAF10: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_801EAF70;
    }
    // 0x801EAF10: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801EAF14: lw          $t0, 0x18($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X18);
    // 0x801EAF18: addiu       $t2, $zero, 0xB4
    ctx->r10 = ADD32(0, 0XB4);
    // 0x801EAF1C: sw          $v1, 0x90($v0)
    MEM_W(0X90, ctx->r2) = ctx->r3;
    // 0x801EAF20: sw          $t2, 0x94($v0)
    MEM_W(0X94, ctx->r2) = ctx->r10;
    // 0x801EAF24: addiu       $t3, $zero, 0x6
    ctx->r11 = ADD32(0, 0X6);
    // 0x801EAF28: sb          $t3, 0x5($t0)
    MEM_B(0X5, ctx->r8) = ctx->r11;
    // 0x801EAF2C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801EAF30: lw          $t4, 0x94($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X94);
    // 0x801EAF34: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801EAF38: addiu       $a1, $a1, -0x5A48
    ctx->r5 = ADD32(ctx->r5, -0X5A48);
    // 0x801EAF3C: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x801EAF40: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x801EAF44: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801EAF48: sw          $t0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r8;
    // 0x801EAF4C: jal         0x8000DF10
    // 0x801EAF50: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    func_8000DF10_EB10(rdram, ctx);
        goto after_1;
    // 0x801EAF50: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    after_1:
    // 0x801EAF54: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801EAF58: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x801EAF5C: or          $t5, $v0, $at
    ctx->r13 = ctx->r2 | ctx->r1;
    // 0x801EAF60: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801EAF64: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x801EAF68: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x801EAF6C: sw          $t6, 0x30($t0)
    MEM_W(0X30, ctx->r8) = ctx->r14;
L_801EAF70:
    // 0x801EAF70: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801EAF74: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x801EAF78: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x801EAF7C: jr          $ra
    // 0x801EAF80: nop

    TRACE_RETURN()
    return;
    // 0x801EAF80: nop

;}
RECOMP_FUNC void func_801E752C_61290C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E752C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801E7530: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E7534: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801E7538: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801E753C: lw          $t6, 0x9C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X9C);
    // 0x801E7540: addiu       $at, $zero, -0x100
    ctx->r1 = ADD32(0, -0X100);
    // 0x801E7544: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E7548: addiu       $v0, $t6, -0x4
    ctx->r2 = ADD32(ctx->r14, -0X4);
    // 0x801E754C: bne         $v0, $at, L_801E757C
    if (ctx->r2 != ctx->r1) {
        // 0x801E7550: sw          $v0, 0x9C($a0)
        MEM_W(0X9C, ctx->r4) = ctx->r2;
            goto L_801E757C;
    }
    // 0x801E7550: sw          $v0, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->r2;
    // 0x801E7554: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E7558: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x801E755C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801E7560: swc1        $f0, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f0.u32l;
    // 0x801E7564: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x801E7568: swc1        $f4, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f4.u32l;
    // 0x801E756C: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E7570: jal         0x8003521C
    // 0x801E7574: addiu       $a0, $a0, 0x75E4
    ctx->r4 = ADD32(ctx->r4, 0X75E4);
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x801E7574: addiu       $a0, $a0, 0x75E4
    ctx->r4 = ADD32(ctx->r4, 0X75E4);
    after_0:
    // 0x801E7578: lw          $v0, 0x9C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X9C);
L_801E757C:
    // 0x801E757C: lui         $at, 0xC0A0
    ctx->r1 = S32(0XC0A0 << 16);
    // 0x801E7580: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801E7584: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    // 0x801E7588: addiu       $a2, $s0, 0x78
    ctx->r6 = ADD32(ctx->r16, 0X78);
    // 0x801E758C: jal         0x8000E630
    // 0x801E7590: addiu       $a3, $s0, 0x74
    ctx->r7 = ADD32(ctx->r16, 0X74);
    func_8000E630_F230(rdram, ctx);
        goto after_1;
    // 0x801E7590: addiu       $a3, $s0, 0x74
    ctx->r7 = ADD32(ctx->r16, 0X74);
    after_1:
    // 0x801E7594: jal         0x801D614C
    // 0x801E7598: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D614C_60152C(rdram, ctx);
        goto after_2;
    // 0x801E7598: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801E759C: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x801E75A0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801E75A4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801E75A8: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801E75AC: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801E75B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E75B4: sub.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x801E75B8: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x801E75BC: sub.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x801E75C0: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x801E75C4: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x801E75C8: jal         0x801E7AA8
    // 0x801E75CC: nop

    func_801E7AA8_612E88(rdram, ctx);
        goto after_3;
    // 0x801E75CC: nop

    after_3:
    // 0x801E75D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801E75D4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801E75D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801E75DC: jr          $ra
    // 0x801E75E0: nop

    TRACE_RETURN()
    return;
    // 0x801E75E0: nop

;}
RECOMP_FUNC void func_80202F90_62E370(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80202F90: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80202F94: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80202F98: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80202F9C: jal         0x80203F88
    // 0x80202FA0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    func_80203F88_62F368(rdram, ctx);
        goto after_0;
    // 0x80202FA0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_0:
    // 0x80202FA4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80202FA8: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x80202FAC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80202FB0: lw          $t6, 0x7C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X7C);
    // 0x80202FB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80202FB8: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80202FBC: bne         $t7, $zero, L_8020301C
    if (ctx->r15 != 0) {
        // 0x80202FC0: sw          $t7, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r15;
            goto L_8020301C;
    }
    // 0x80202FC0: sw          $t7, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r15;
    // 0x80202FC4: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80202FC8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80202FCC: lui         $at, 0x430C
    ctx->r1 = S32(0X430C << 16);
    // 0x80202FD0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80202FD4: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80202FD8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80202FDC: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80202FE0: add.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x80202FE4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80202FE8: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    // 0x80202FEC: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x80202FF0: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x80202FF4: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80202FF8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80202FFC: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80203000: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    // 0x80203004: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    // 0x80203008: jal         0x801DFB90
    // 0x8020300C: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    func_801DFB90_60AF70(rdram, ctx);
        goto after_1;
    // 0x8020300C: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x80203010: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80203014: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x80203018: sw          $t9, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r25;
L_8020301C:
    // 0x8020301C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80203020: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80203024: jr          $ra
    // 0x80203028: nop

    TRACE_RETURN()
    return;
    // 0x80203028: nop

;}
RECOMP_FUNC void func_801E58C8_610CA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E58C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E58CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E58D0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E58D4: lw          $t7, 0xD0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XD0);
    // 0x801E58D8: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x801E58DC: sltiu       $at, $t6, 0x7
    ctx->r1 = ctx->r14 < 0X7 ? 1 : 0;
    // 0x801E58E0: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x801E58E4: sw          $a2, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r6;
    // 0x801E58E8: sw          $t8, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = ctx->r24;
    // 0x801E58EC: beq         $at, $zero, L_801E590C
    if (ctx->r1 == 0) {
        // 0x801E58F0: sw          $t6, 0xD8($a0)
        MEM_W(0XD8, ctx->r4) = ctx->r14;
            goto L_801E590C;
    }
    // 0x801E58F0: sw          $t6, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->r14;
    // 0x801E58F4: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x801E58F8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E58FC: addu        $at, $at, $t9
    gpr jr_addend_801E5904 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x801E5900: lw          $t9, -0x2054($at)
    ctx->r25 = ADD32(ctx->r1, -0X2054);
    // 0x801E5904: jr          $t9
    // 0x801E5908: nop

    switch (jr_addend_801E5904 >> 2) {
        case 0: goto L_801E590C; break;
        case 1: goto L_801E591C; break;
        case 2: goto L_801E5930; break;
        case 3: goto L_801E5944; break;
        case 4: goto L_801E5958; break;
        case 5: goto L_801E596C; break;
        case 6: goto L_801E5980; break;
        default: switch_error(__func__, 0x801E5904, 0x8020DFAC);
    }
    // 0x801E5908: nop

L_801E590C:
    // 0x801E590C: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x801E5910: sw          $zero, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = 0;
    // 0x801E5914: b           L_801E598C
    // 0x801E5918: sw          $t0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r8;
        goto L_801E598C;
    // 0x801E5918: sw          $t0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r8;
L_801E591C:
    // 0x801E591C: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x801E5920: jal         0x8003522C
    // 0x801E5924: addiu       $a1, $a1, 0x6150
    ctx->r5 = ADD32(ctx->r5, 0X6150);
    func_8003522C_35E2C(rdram, ctx);
        goto after_0;
    // 0x801E5924: addiu       $a1, $a1, 0x6150
    ctx->r5 = ADD32(ctx->r5, 0X6150);
    after_0:
    // 0x801E5928: b           L_801E5990
    // 0x801E592C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E5990;
    // 0x801E592C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E5930:
    // 0x801E5930: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x801E5934: jal         0x8003522C
    // 0x801E5938: addiu       $a1, $a1, 0x641C
    ctx->r5 = ADD32(ctx->r5, 0X641C);
    func_8003522C_35E2C(rdram, ctx);
        goto after_1;
    // 0x801E5938: addiu       $a1, $a1, 0x641C
    ctx->r5 = ADD32(ctx->r5, 0X641C);
    after_1:
    // 0x801E593C: b           L_801E5990
    // 0x801E5940: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E5990;
    // 0x801E5940: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E5944:
    // 0x801E5944: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x801E5948: jal         0x8003522C
    // 0x801E594C: addiu       $a1, $a1, 0x67D4
    ctx->r5 = ADD32(ctx->r5, 0X67D4);
    func_8003522C_35E2C(rdram, ctx);
        goto after_2;
    // 0x801E594C: addiu       $a1, $a1, 0x67D4
    ctx->r5 = ADD32(ctx->r5, 0X67D4);
    after_2:
    // 0x801E5950: b           L_801E5990
    // 0x801E5954: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E5990;
    // 0x801E5954: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E5958:
    // 0x801E5958: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x801E595C: jal         0x8003522C
    // 0x801E5960: addiu       $a1, $a1, 0x700C
    ctx->r5 = ADD32(ctx->r5, 0X700C);
    func_8003522C_35E2C(rdram, ctx);
        goto after_3;
    // 0x801E5960: addiu       $a1, $a1, 0x700C
    ctx->r5 = ADD32(ctx->r5, 0X700C);
    after_3:
    // 0x801E5964: b           L_801E5990
    // 0x801E5968: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E5990;
    // 0x801E5968: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E596C:
    // 0x801E596C: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x801E5970: jal         0x8003522C
    // 0x801E5974: addiu       $a1, $a1, 0x7C50
    ctx->r5 = ADD32(ctx->r5, 0X7C50);
    func_8003522C_35E2C(rdram, ctx);
        goto after_4;
    // 0x801E5974: addiu       $a1, $a1, 0x7C50
    ctx->r5 = ADD32(ctx->r5, 0X7C50);
    after_4:
    // 0x801E5978: b           L_801E5990
    // 0x801E597C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E5990;
    // 0x801E597C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E5980:
    // 0x801E5980: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x801E5984: jal         0x8003522C
    // 0x801E5988: addiu       $a1, $a1, 0x59F8
    ctx->r5 = ADD32(ctx->r5, 0X59F8);
    func_8003522C_35E2C(rdram, ctx);
        goto after_5;
    // 0x801E5988: addiu       $a1, $a1, 0x59F8
    ctx->r5 = ADD32(ctx->r5, 0X59F8);
    after_5:
L_801E598C:
    // 0x801E598C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E5990:
    // 0x801E5990: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E5994: jr          $ra
    // 0x801E5998: nop

    TRACE_RETURN()
    return;
    // 0x801E5998: nop

;}
RECOMP_FUNC void func_801FADE0_6261C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FADE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801FADE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801FADE8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801FADEC: jal         0x801F71DC
    // 0x801FADF0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801F71DC_6225BC(rdram, ctx);
        goto after_0;
    // 0x801FADF0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801FADF4: beq         $v0, $zero, L_801FAEA0
    if (ctx->r2 == 0) {
        // 0x801FADF8: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_801FAEA0;
    }
    // 0x801FADF8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801FADFC: lw          $t6, 0x7C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X7C);
    // 0x801FAE00: addiu       $t9, $zero, 0x14
    ctx->r25 = ADD32(0, 0X14);
    // 0x801FAE04: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x801FAE08: bgez        $t7, L_801FAE20
    if (SIGNED(ctx->r15) >= 0) {
        // 0x801FAE0C: sw          $t7, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r15;
            goto L_801FAE20;
    }
    // 0x801FAE0C: sw          $t7, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r15;
    // 0x801FAE10: sw          $t9, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r25;
    // 0x801FAE14: jal         0x801FACC8
    // 0x801FAE18: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801FACC8_6260A8(rdram, ctx);
        goto after_1;
    // 0x801FAE18: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x801FAE1C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_801FAE20:
    // 0x801FAE20: lw          $v0, 0x80($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X80);
    // 0x801FAE24: beq         $v0, $zero, L_801FAEA0
    if (ctx->r2 == 0) {
        // 0x801FAE28: addiu       $t0, $v0, -0x1
        ctx->r8 = ADD32(ctx->r2, -0X1);
            goto L_801FAEA0;
    }
    // 0x801FAE28: addiu       $t0, $v0, -0x1
    ctx->r8 = ADD32(ctx->r2, -0X1);
    // 0x801FAE2C: jal         0x801FACC8
    // 0x801FAE30: sw          $t0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->r8;
    func_801FACC8_6260A8(rdram, ctx);
        goto after_2;
    // 0x801FAE30: sw          $t0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->r8;
    after_2:
    // 0x801FAE34: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801FAE38: addiu       $a1, $a1, -0x10D0
    ctx->r5 = ADD32(ctx->r5, -0X10D0);
    // 0x801FAE3C: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x801FAE40: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801FAE44: lw          $t1, 0x8($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X8);
    // 0x801FAE48: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x801FAE4C: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x801FAE50: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x801FAE54: lw          $t3, 0x8($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X8);
    // 0x801FAE58: bgezl       $t3, L_801FAEA4
    if (SIGNED(ctx->r11) >= 0) {
        // 0x801FAE5C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801FAEA4;
    }
    goto skip_0;
    // 0x801FAE5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801FAE60: beql        $v0, $zero, L_801FAEA4
    if (ctx->r2 == 0) {
        // 0x801FAE64: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801FAEA4;
    }
    goto skip_1;
    // 0x801FAE64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x801FAE68: lbu         $t4, 0xC($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0XC);
    // 0x801FAE6C: bnel        $t4, $zero, L_801FAEA4
    if (ctx->r12 != 0) {
        // 0x801FAE70: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801FAEA4;
    }
    goto skip_2;
    // 0x801FAE70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x801FAE74: jal         0x801F77EC
    // 0x801FAE78: nop

    func_801F77EC_622BCC(rdram, ctx);
        goto after_3;
    // 0x801FAE78: nop

    after_3:
    // 0x801FAE7C: jal         0x8000DD58
    // 0x801FAE80: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    func_8000DD58_E958(rdram, ctx);
        goto after_4;
    // 0x801FAE80: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    after_4:
    // 0x801FAE84: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x801FAE88: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x801FAE8C: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801FAE90: lw          $t7, -0x10D0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X10D0);
    // 0x801FAE94: mflo        $t5
    ctx->r13 = lo;
    // 0x801FAE98: addiu       $t6, $t5, 0x2
    ctx->r14 = ADD32(ctx->r13, 0X2);
    // 0x801FAE9C: sw          $t6, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r14;
L_801FAEA0:
    // 0x801FAEA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FAEA4:
    // 0x801FAEA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801FAEA8: jr          $ra
    // 0x801FAEAC: nop

    TRACE_RETURN()
    return;
    // 0x801FAEAC: nop

;}
RECOMP_FUNC void func_801D45BC_5FF99C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D45BC: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x801D45C0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x801D45C4: lw          $t6, -0x70A0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X70A0);
    // 0x801D45C8: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x801D45CC: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x801D45D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801D45D4: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    // 0x801D45D8: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    // 0x801D45DC: bne         $t6, $zero, L_801D45EC
    if (ctx->r14 != 0) {
        // 0x801D45E0: sw          $a3, 0x7C($sp)
        MEM_W(0X7C, ctx->r29) = ctx->r7;
            goto L_801D45EC;
    }
    // 0x801D45E0: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    // 0x801D45E4: b           L_801D46A8
    // 0x801D45E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801D46A8;
    // 0x801D45E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D45EC:
    // 0x801D45EC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x801D45F0: lw          $t7, -0x709C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X709C);
    // 0x801D45F4: bne         $t7, $zero, L_801D4604
    if (ctx->r15 != 0) {
        // 0x801D45F8: nop
    
            goto L_801D4604;
    }
    // 0x801D45F8: nop

    // 0x801D45FC: b           L_801D46A8
    // 0x801D4600: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801D46A8;
    // 0x801D4600: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D4604:
    // 0x801D4604: bne         $a1, $zero, L_801D4614
    if (ctx->r5 != 0) {
        // 0x801D4608: lui         $v0, 0x8021
        ctx->r2 = S32(0X8021 << 16);
            goto L_801D4614;
    }
    // 0x801D4608: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D460C: b           L_801D46A8
    // 0x801D4610: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801D46A8;
    // 0x801D4610: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D4614:
    // 0x801D4614: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801D4618: lwc1        $f4, 0x7C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x801D461C: lw          $a2, 0x74($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X74);
    // 0x801D4620: lw          $a0, 0x198($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X198);
    // 0x801D4624: addiu       $v0, $v0, 0x178
    ctx->r2 = ADD32(ctx->r2, 0X178);
    // 0x801D4628: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x801D462C: sw          $a1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r5;
    // 0x801D4630: lw          $a3, 0x78($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X78);
    // 0x801D4634: jal         0x801D4278
    // 0x801D4638: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_801D4278_5FF658(rdram, ctx);
        goto after_0;
    // 0x801D4638: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x801D463C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x801D4640: lwc1        $f6, 0x7C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x801D4644: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
    // 0x801D4648: lw          $a0, 0x24($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X24);
    // 0x801D464C: sb          $v0, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r2;
    // 0x801D4650: lw          $a2, 0x74($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X74);
    // 0x801D4654: lw          $a3, 0x78($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X78);
    // 0x801D4658: jal         0x801D4278
    // 0x801D465C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_801D4278_5FF658(rdram, ctx);
        goto after_1;
    // 0x801D465C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x801D4660: lbu         $v1, 0x23($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X23);
    // 0x801D4664: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x801D4668: lwc1        $f8, 0x7C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x801D466C: or          $t9, $v1, $v0
    ctx->r25 = ctx->r3 | ctx->r2;
    // 0x801D4670: lw          $a0, 0x28($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X28);
    // 0x801D4674: sb          $t9, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r25;
    // 0x801D4678: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
    // 0x801D467C: lw          $a2, 0x74($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X74);
    // 0x801D4680: lw          $a3, 0x78($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X78);
    // 0x801D4684: jal         0x801D4278
    // 0x801D4688: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_801D4278_5FF658(rdram, ctx);
        goto after_2;
    // 0x801D4688: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x801D468C: lbu         $v1, 0x23($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X23);
    // 0x801D4690: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x801D4694: andi        $t1, $v1, 0xFF
    ctx->r9 = ctx->r3 & 0XFF;
    // 0x801D4698: beq         $t1, $zero, L_801D46A8
    if (ctx->r9 == 0) {
        // 0x801D469C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801D46A8;
    }
    // 0x801D469C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801D46A0: b           L_801D46A8
    // 0x801D46A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801D46A8;
    // 0x801D46A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801D46A8:
    // 0x801D46A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801D46AC: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x801D46B0: jr          $ra
    // 0x801D46B4: nop

    TRACE_RETURN()
    return;
    // 0x801D46B4: nop

;}
RECOMP_FUNC void func_801D3AF4_5FEED4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D3AF4: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D3AF8: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801D3AFC: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x801D3B00: addiu       $v1, $v1, -0x39F8
    ctx->r3 = ADD32(ctx->r3, -0X39F8);
    // 0x801D3B04: lw          $t6, 0x68($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X68);
    // 0x801D3B08: sw          $t6, 0x29C($v1)
    MEM_W(0X29C, ctx->r3) = ctx->r14;
    // 0x801D3B0C: lw          $t7, 0x64($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X64);
    // 0x801D3B10: jr          $ra
    // 0x801D3B14: sw          $t7, 0x2A0($v1)
    MEM_W(0X2A0, ctx->r3) = ctx->r15;
    TRACE_RETURN()
    return;
    // 0x801D3B14: sw          $t7, 0x2A0($v1)
    MEM_W(0X2A0, ctx->r3) = ctx->r15;
;}
RECOMP_FUNC void func_801F7088_622468(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F7088: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801F708C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801F7090: lui         $s0, 0x8021
    ctx->r16 = S32(0X8021 << 16);
    // 0x801F7094: addiu       $s0, $s0, -0x1130
    ctx->r16 = ADD32(ctx->r16, -0X1130);
    // 0x801F7098: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x801F709C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F70A0: sw          $zero, -0x10D0($at)
    MEM_W(-0X10D0, ctx->r1) = 0;
    // 0x801F70A4: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x801F70A8: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x801F70AC: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x801F70B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F70B4: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x801F70B8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x801F70BC: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x801F70C0: jal         0x800148F0
    // 0x801F70C4: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_800148F0_154F0(rdram, ctx);
        goto after_0;
    // 0x801F70C4: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_0:
    // 0x801F70C8: bne         $v0, $zero, L_801F70D8
    if (ctx->r2 != 0) {
        // 0x801F70CC: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_801F70D8;
    }
    // 0x801F70CC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x801F70D0: b           L_801F7154
    // 0x801F70D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801F7154;
    // 0x801F70D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801F70D8:
    // 0x801F70D8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F70DC: sw          $v1, -0x10D0($at)
    MEM_W(-0X10D0, ctx->r1) = ctx->r3;
    // 0x801F70E0: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x801F70E4: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801F70E8: addiu       $a1, $a1, 0x6C4C
    ctx->r5 = ADD32(ctx->r5, 0X6C4C);
    // 0x801F70EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801F70F0: jal         0x80034E08
    // 0x801F70F4: lw          $a0, 0x1C4($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X1C4);
    func_80034E08_35A08(rdram, ctx);
        goto after_1;
    // 0x801F70F4: lw          $a0, 0x1C4($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X1C4);
    after_1:
    // 0x801F70F8: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x801F70FC: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801F7100: addiu       $a1, $a1, -0xD20
    ctx->r5 = ADD32(ctx->r5, -0XD20);
    // 0x801F7104: sw          $v0, 0x1D0($t8)
    MEM_W(0X1D0, ctx->r24) = ctx->r2;
    // 0x801F7108: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x801F710C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801F7110: jal         0x80034E08
    // 0x801F7114: lw          $a0, 0x1C4($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X1C4);
    func_80034E08_35A08(rdram, ctx);
        goto after_2;
    // 0x801F7114: lw          $a0, 0x1C4($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X1C4);
    after_2:
    // 0x801F7118: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x801F711C: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801F7120: addiu       $a1, $a1, -0x3F94
    ctx->r5 = ADD32(ctx->r5, -0X3F94);
    // 0x801F7124: sw          $v0, 0x1D8($t0)
    MEM_W(0X1D8, ctx->r8) = ctx->r2;
    // 0x801F7128: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x801F712C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801F7130: jal         0x80034E08
    // 0x801F7134: lw          $a0, 0x1BC($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X1BC);
    func_80034E08_35A08(rdram, ctx);
        goto after_3;
    // 0x801F7134: lw          $a0, 0x1BC($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X1BC);
    after_3:
    // 0x801F7138: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x801F713C: addiu       $t3, $zero, 0x7D0
    ctx->r11 = ADD32(0, 0X7D0);
    // 0x801F7140: sw          $v0, 0x1D4($t2)
    MEM_W(0X1D4, ctx->r10) = ctx->r2;
    // 0x801F7144: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x801F7148: sw          $t3, 0x60($t4)
    MEM_W(0X60, ctx->r12) = ctx->r11;
    // 0x801F714C: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    // 0x801F7150: lw          $v0, 0x1D8($t5)
    ctx->r2 = MEM_W(ctx->r13, 0X1D8);
L_801F7154:
    // 0x801F7154: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801F7158: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801F715C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801F7160: jr          $ra
    // 0x801F7164: nop

    TRACE_RETURN()
    return;
    // 0x801F7164: nop

;}
