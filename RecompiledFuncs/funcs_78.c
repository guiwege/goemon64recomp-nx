#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_801E819C_656FEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E819C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801E81A0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x801E81A4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x801E81A8: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801E81AC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801E81B0: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x801E81B4: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x801E81B8: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x801E81BC: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x801E81C0: lw          $t3, 0x48($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X48);
    // 0x801E81C4: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x801E81C8: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x801E81CC: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x801E81D0: nop

    // 0x801E81D4: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x801E81D8: lwc1        $f10, 0x0($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X0);
    // 0x801E81DC: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x801E81E0: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x801E81E4: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x801E81E8: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x801E81EC: nop

    // 0x801E81F0: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x801E81F4: lwc1        $f4, 0x0($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X0);
    // 0x801E81F8: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x801E81FC: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x801E8200: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x801E8204: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x801E8208: nop

    // 0x801E820C: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x801E8210: lwc1        $f10, 0x0($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X0);
    // 0x801E8214: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x801E8218: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x801E821C: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x801E8220: nop

    // 0x801E8224: sw          $t4, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r12;
    // 0x801E8228: lwc1        $f4, 0x4($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X4);
    // 0x801E822C: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x801E8230: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x801E8234: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x801E8238: nop

    // 0x801E823C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801E8240: lwc1        $f10, 0x8($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X8);
    // 0x801E8244: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x801E8248: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x801E824C: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x801E8250: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    // 0x801E8254: nop

    // 0x801E8258: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x801E825C: lwc1        $f4, 0x0($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X0);
    // 0x801E8260: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x801E8264: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x801E8268: mfc1        $t1, $f8
    ctx->r9 = (int32_t)ctx->f8.u32l;
    // 0x801E826C: nop

    // 0x801E8270: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x801E8274: lwc1        $f10, 0x0($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X0);
    // 0x801E8278: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x801E827C: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x801E8280: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    // 0x801E8284: nop

    // 0x801E8288: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x801E828C: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x801E8290: lw          $t5, 0xC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XC);
    // 0x801E8294: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x801E8298: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x801E829C: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x801E82A0: nop

    // 0x801E82A4: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x801E82A8: lwc1        $f10, 0x0($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X0);
    // 0x801E82AC: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x801E82B0: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x801E82B4: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x801E82B8: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x801E82BC: nop

    // 0x801E82C0: sw          $t1, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r9;
    // 0x801E82C4: lwc1        $f4, 0x4($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X4);
    // 0x801E82C8: subu        $t1, $t2, $t0
    ctx->r9 = SUB32(ctx->r10, ctx->r8);
    // 0x801E82CC: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x801E82D0: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x801E82D4: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    // 0x801E82D8: nop

    // 0x801E82DC: sw          $t4, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r12;
    // 0x801E82E0: lwc1        $f10, 0x8($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X8);
    // 0x801E82E4: lw          $t4, 0x0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X0);
    // 0x801E82E8: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x801E82EC: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x801E82F0: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x801E82F4: nop

    // 0x801E82F8: addu        $v0, $t6, $t8
    ctx->r2 = ADD32(ctx->r14, ctx->r24);
    // 0x801E82FC: sll         $t9, $v0, 1
    ctx->r25 = S32(ctx->r2 << 1);
    // 0x801E8300: addu        $t3, $t1, $v0
    ctx->r11 = ADD32(ctx->r9, ctx->r2);
    // 0x801E8304: sltu        $at, $t9, $t3
    ctx->r1 = ctx->r25 < ctx->r11 ? 1 : 0;
    // 0x801E8308: beq         $at, $zero, L_801E8318
    if (ctx->r1 == 0) {
        // 0x801E830C: sw          $t6, 0x8($sp)
        MEM_W(0X8, ctx->r29) = ctx->r14;
            goto L_801E8318;
    }
    // 0x801E830C: sw          $t6, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r14;
    // 0x801E8310: b           L_801E8370
    // 0x801E8314: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801E8370;
    // 0x801E8314: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801E8318:
    // 0x801E8318: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x801E831C: addu        $v0, $t4, $t5
    ctx->r2 = ADD32(ctx->r12, ctx->r13);
    // 0x801E8320: sll         $t6, $v0, 1
    ctx->r14 = S32(ctx->r2 << 1);
    // 0x801E8324: subu        $t2, $t7, $t8
    ctx->r10 = SUB32(ctx->r15, ctx->r24);
    // 0x801E8328: addu        $t0, $t2, $v0
    ctx->r8 = ADD32(ctx->r10, ctx->r2);
    // 0x801E832C: sltu        $at, $t6, $t0
    ctx->r1 = ctx->r14 < ctx->r8 ? 1 : 0;
    // 0x801E8330: beq         $at, $zero, L_801E8340
    if (ctx->r1 == 0) {
        // 0x801E8334: lw          $t1, 0x4($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X4);
            goto L_801E8340;
    }
    // 0x801E8334: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x801E8338: b           L_801E8370
    // 0x801E833C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801E8370;
    // 0x801E833C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801E8340:
    // 0x801E8340: lw          $t9, 0x10($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X10);
    // 0x801E8344: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x801E8348: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x801E834C: addu        $v0, $t1, $t9
    ctx->r2 = ADD32(ctx->r9, ctx->r25);
    // 0x801E8350: sll         $t3, $v0, 1
    ctx->r11 = S32(ctx->r2 << 1);
    // 0x801E8354: subu        $t7, $t4, $t5
    ctx->r15 = SUB32(ctx->r12, ctx->r13);
    // 0x801E8358: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x801E835C: sltu        $at, $t3, $t8
    ctx->r1 = ctx->r11 < ctx->r24 ? 1 : 0;
    // 0x801E8360: beq         $at, $zero, L_801E8370
    if (ctx->r1 == 0) {
        // 0x801E8364: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_801E8370;
    }
    // 0x801E8364: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801E8368: b           L_801E8370
    // 0x801E836C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801E8370;
    // 0x801E836C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801E8370:
    // 0x801E8370: jr          $ra
    // 0x801E8374: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x801E8374: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_801CD0B4_63BF04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CD0B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CD0B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CD0BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801CD0C0: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x801CD0C4: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x801CD0C8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x801CD0CC: addiu       $a2, $zero, 0x3F
    ctx->r6 = ADD32(0, 0X3F);
    // 0x801CD0D0: jal         0x801CCBD0
    // 0x801CD0D4: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    func_801CCBD0_63BA20(rdram, ctx);
        goto after_0;
    // 0x801CD0D4: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    after_0:
    // 0x801CD0D8: jal         0x801CD0F0
    // 0x801CD0DC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_801CD0F0_63BF40(rdram, ctx);
        goto after_1;
    // 0x801CD0DC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x801CD0E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CD0E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CD0E8: jr          $ra
    // 0x801CD0EC: nop

    TRACE_RETURN()
    return;
    // 0x801CD0EC: nop

;}
RECOMP_FUNC void func_801D4654_6434A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D4654: lw          $v0, 0xB0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XB0);
    // 0x801D4658: addiu       $at, $zero, 0x3E8
    ctx->r1 = ADD32(0, 0X3E8);
    // 0x801D465C: lw          $v1, 0xA0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XA0);
    // 0x801D4660: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x801D4664: mflo        $t6
    ctx->r14 = lo;
    // 0x801D4668: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x801D466C: mtc1        $v1, $f16
    ctx->f16.u32l = ctx->r3;
    // 0x801D4670: lwc1        $f4, 0x64($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X64);
    // 0x801D4674: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x801D4678: lui         $at, 0x4054
    ctx->r1 = S32(0X4054 << 16);
    // 0x801D467C: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x801D4680: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801D4684: subu        $t7, $v0, $v1
    ctx->r15 = SUB32(ctx->r2, ctx->r3);
    // 0x801D4688: cvt.d.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.d = CVT_D_W(ctx->f16.u32l);
    // 0x801D468C: sw          $t7, 0xB0($a0)
    MEM_W(0XB0, ctx->r4) = ctx->r15;
    // 0x801D4690: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x801D4694: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x801D4698: sub.d       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f6.d); 
    ctx->f4.d = ctx->f18.d - ctx->f6.d;
    // 0x801D469C: swc1        $f10, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f10.u32l;
    // 0x801D46A0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801D46A4: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x801D46A8: trunc.w.d   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_D(ctx->f4.d);
    // 0x801D46AC: lui         $at, 0x41E8
    ctx->r1 = S32(0X41E8 << 16);
    // 0x801D46B0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801D46B4: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x801D46B8: swc1        $f8, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f8.u32l;
    // 0x801D46BC: lwc1        $f10, 0x28($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X28);
    // 0x801D46C0: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x801D46C4: add.d       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f6.d = ctx->f16.d + ctx->f18.d;
    // 0x801D46C8: cvt.s.d     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f0.fl = CVT_S_D(ctx->f6.d);
    // 0x801D46CC: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x801D46D0: nop

    // 0x801D46D4: bc1f        L_801D471C
    if (!c1cs) {
        // 0x801D46D8: nop
    
            goto L_801D471C;
    }
    // 0x801D46D8: nop

    // 0x801D46DC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801D46E0: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x801D46E4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D46E8: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801D46EC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801D46F0: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x801D46F4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D46F8: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x801D46FC: sb          $t9, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = ctx->r25;
    // 0x801D4700: mul.s       $f18, $f2, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x801D4704: div.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = DIV_S(ctx->f16.fl, ctx->f18.fl);
    // 0x801D4708: trunc.w.s   $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x801D470C: mfc1        $t1, $f4
    ctx->r9 = (int32_t)ctx->f4.u32l;
    // 0x801D4710: nop

    // 0x801D4714: negu        $t2, $t1
    ctx->r10 = SUB32(0, ctx->r9);
    // 0x801D4718: sw          $t2, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->r10;
L_801D471C:
    // 0x801D471C: jr          $ra
    // 0x801D4720: swc1        $f0, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f0.u32l;
    TRACE_RETURN()
    return;
    // 0x801D4720: swc1        $f0, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_801D7050_645EA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D7050: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x801D7054: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x801D7058: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x801D705C: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x801D7060: lwc1        $f4, 0x1C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x801D7064: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x801D7068: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x801D706C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D7070: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801D7074: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    // 0x801D7078: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801D707C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801D7080: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D7084: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801D7088: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801D708C: addiu       $t6, $sp, 0x68
    ctx->r14 = ADD32(ctx->r29, 0X68);
    // 0x801D7090: addiu       $t7, $sp, 0x6C
    ctx->r15 = ADD32(ctx->r29, 0X6C);
    // 0x801D7094: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    // 0x801D7098: mul.d       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f2.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f2.d);
    // 0x801D709C: ldc1        $f8, -0xE58($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0XE58);
    // 0x801D70A0: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801D70A4: swc1        $f16, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f16.u32l;
    // 0x801D70A8: lwc1        $f18, 0x20($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X20);
    // 0x801D70AC: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801D70B0: mul.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x801D70B4: nop

    // 0x801D70B8: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x801D70BC: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801D70C0: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
    // 0x801D70C4: lwc1        $f18, 0x24($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X24);
    // 0x801D70C8: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801D70CC: mul.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x801D70D0: nop

    // 0x801D70D4: mul.d       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f2.d);
    // 0x801D70D8: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801D70DC: swc1        $f10, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f10.u32l;
    // 0x801D70E0: lhu         $a0, 0x14($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X14);
    // 0x801D70E4: lhu         $a1, 0x16($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X16);
    // 0x801D70E8: lhu         $a2, 0x18($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X18);
    // 0x801D70EC: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801D70F0: jal         0x80033898
    // 0x801D70F4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_80033898_34498(rdram, ctx);
        goto after_0;
    // 0x801D70F4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x801D70F8: addiu       $t8, $zero, 0x77
    ctx->r24 = ADD32(0, 0X77);
    // 0x801D70FC: addiu       $t9, $zero, 0x3E
    ctx->r25 = ADD32(0, 0X3E);
    // 0x801D7100: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
    // 0x801D7104: addiu       $t1, $zero, 0x80
    ctx->r9 = ADD32(0, 0X80);
    // 0x801D7108: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x801D710C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x801D7110: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x801D7114: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801D7118: lwc1        $f18, 0x5C($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X5C);
    // 0x801D711C: lwc1        $f16, 0x64($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801D7120: lwc1        $f6, 0x68($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801D7124: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x801D7128: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801D712C: lwc1        $f16, 0x6C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801D7130: addiu       $t2, $zero, 0xC0
    ctx->r10 = ADD32(0, 0XC0);
    // 0x801D7134: addiu       $t3, $zero, 0x300
    ctx->r11 = ADD32(0, 0X300);
    // 0x801D7138: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x801D713C: lwc1        $f8, 0x60($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X60);
    // 0x801D7140: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801D7144: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D7148: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801D714C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D7150: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    // 0x801D7154: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x801D7158: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x801D715C: lwc1        $f18, 0x64($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X64);
    // 0x801D7160: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
    // 0x801D7164: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x801D7168: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801D716C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801D7170: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x801D7174: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x801D7178: jal         0x801CDA88
    // 0x801D717C: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    func_801CDA88_63C8D8(rdram, ctx);
        goto after_1;
    // 0x801D717C: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x801D7180: addiu       $t4, $zero, 0xC0
    ctx->r12 = ADD32(0, 0XC0);
    // 0x801D7184: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x801D7188: lwc1        $f10, 0x5C($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X5C);
    // 0x801D718C: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801D7190: lwc1        $f18, 0x68($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801D7194: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D7198: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801D719C: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801D71A0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801D71A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D71A8: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x801D71AC: lwc1        $f4, 0x60($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X60);
    // 0x801D71B0: lui         $a2, 0x42E1
    ctx->r6 = S32(0X42E1 << 16);
    // 0x801D71B4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801D71B8: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801D71BC: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x801D71C0: lwc1        $f10, 0x64($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X64);
    // 0x801D71C4: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801D71C8: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801D71CC: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801D71D0: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801D71D4: jal         0x801DF9EC
    // 0x801D71D8: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    func_801DF9EC_64E83C(rdram, ctx);
        goto after_2;
    // 0x801D71D8: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x801D71DC: lw          $v0, 0xEC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XEC);
    // 0x801D71E0: lhu         $t5, 0xE2($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0XE2);
    // 0x801D71E4: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x801D71E8: bnel        $t6, $zero, L_801D7240
    if (ctx->r14 != 0) {
        // 0x801D71EC: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_801D7240;
    }
    goto skip_0;
    // 0x801D71EC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_0:
    // 0x801D71F0: lhu         $t7, 0xE4($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0XE4);
    // 0x801D71F4: addiu       $at, $zero, 0x298
    ctx->r1 = ADD32(0, 0X298);
    // 0x801D71F8: bne         $t7, $at, L_801D7218
    if (ctx->r15 != ctx->r1) {
        // 0x801D71FC: nop
    
            goto L_801D7218;
    }
    // 0x801D71FC: nop

    // 0x801D7200: jal         0x80038B98
    // 0x801D7204: addiu       $a0, $zero, 0x299
    ctx->r4 = ADD32(0, 0X299);
    func_80038B98_39798(rdram, ctx);
        goto after_3;
    // 0x801D7204: addiu       $a0, $zero, 0x299
    ctx->r4 = ADD32(0, 0X299);
    after_3:
    // 0x801D7208: lw          $t9, 0xEC($s1)
    ctx->r25 = MEM_W(ctx->r17, 0XEC);
    // 0x801D720C: addiu       $t8, $zero, 0x299
    ctx->r24 = ADD32(0, 0X299);
    // 0x801D7210: b           L_801D722C
    // 0x801D7214: sh          $t8, 0xE4($t9)
    MEM_H(0XE4, ctx->r25) = ctx->r24;
        goto L_801D722C;
    // 0x801D7214: sh          $t8, 0xE4($t9)
    MEM_H(0XE4, ctx->r25) = ctx->r24;
L_801D7218:
    // 0x801D7218: jal         0x80038B98
    // 0x801D721C: addiu       $a0, $zero, 0x298
    ctx->r4 = ADD32(0, 0X298);
    func_80038B98_39798(rdram, ctx);
        goto after_4;
    // 0x801D721C: addiu       $a0, $zero, 0x298
    ctx->r4 = ADD32(0, 0X298);
    after_4:
    // 0x801D7220: lw          $t1, 0xEC($s1)
    ctx->r9 = MEM_W(ctx->r17, 0XEC);
    // 0x801D7224: addiu       $t0, $zero, 0x298
    ctx->r8 = ADD32(0, 0X298);
    // 0x801D7228: sh          $t0, 0xE4($t1)
    MEM_H(0XE4, ctx->r9) = ctx->r8;
L_801D722C:
    // 0x801D722C: lw          $v0, 0xEC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XEC);
    // 0x801D7230: lhu         $t2, 0xE2($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0XE2);
    // 0x801D7234: ori         $t3, $t2, 0x1
    ctx->r11 = ctx->r10 | 0X1;
    // 0x801D7238: sh          $t3, 0xE2($v0)
    MEM_H(0XE2, ctx->r2) = ctx->r11;
    // 0x801D723C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_801D7240:
    // 0x801D7240: jal         0x801E8824
    // 0x801D7244: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_801E8824_657674(rdram, ctx);
        goto after_5;
    // 0x801D7244: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_5:
    // 0x801D7248: jal         0x801D2B90
    // 0x801D724C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801D2B90_6419E0(rdram, ctx);
        goto after_6;
    // 0x801D724C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_6:
    // 0x801D7250: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x801D7254: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x801D7258: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x801D725C: jr          $ra
    // 0x801D7260: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    TRACE_RETURN()
    return;
    // 0x801D7260: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_801D6934_645784(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D6934: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801D6938: lw          $v0, 0xA4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XA4);
    // 0x801D693C: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801D6940: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801D6944: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x801D6948: lw          $v0, 0xB0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XB0);
    // 0x801D694C: lwc1        $f4, 0x5C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X5C);
    // 0x801D6950: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x801D6954: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x801D6958: lwc1        $f18, 0x64($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X64);
    // 0x801D695C: div.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x801D6960: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x801D6964: add.s       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x801D6968: div.s       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x801D696C: swc1        $f16, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f16.u32l;
    // 0x801D6970: add.s       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801D6974: jr          $ra
    // 0x801D6978: swc1        $f10, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f10.u32l;
    TRACE_RETURN()
    return;
    // 0x801D6978: swc1        $f10, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f10.u32l;
;}
RECOMP_FUNC void func_801D2160_640FB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D2160: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D2164: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801D2168: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801D216C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x801D2170: sh          $zero, 0xAC($a0)
    MEM_H(0XAC, ctx->r4) = 0;
    // 0x801D2174: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801D2178: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D217C: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    // 0x801D2180: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801D2184: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801D2188: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801D218C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801D2190: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x801D2194: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801D2198: jal         0x801E8378
    // 0x801D219C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    func_801E8378_6571C8(rdram, ctx);
        goto after_0;
    // 0x801D219C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x801D21A0: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801D21A4: jal         0x800352EC
    // 0x801D21A8: addiu       $a0, $a0, 0x21BC
    ctx->r4 = ADD32(ctx->r4, 0X21BC);
    func_800352EC_35EEC(rdram, ctx);
        goto after_1;
    // 0x801D21A8: addiu       $a0, $a0, 0x21BC
    ctx->r4 = ADD32(ctx->r4, 0X21BC);
    after_1:
    // 0x801D21AC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x801D21B0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x801D21B4: jr          $ra
    // 0x801D21B8: nop

    TRACE_RETURN()
    return;
    // 0x801D21B8: nop

;}
RECOMP_FUNC void func_801E341C_65226C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E341C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801E3420: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801E3424: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x801E3428: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x801E342C: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x801E3430: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x801E3434: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x801E3438: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x801E343C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x801E3440: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x801E3444: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x801E3448: lh          $t6, 0x66($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X66);
    // 0x801E344C: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x801E3450: lw          $s7, 0xEC($a0)
    ctx->r23 = MEM_W(ctx->r4, 0XEC);
    // 0x801E3454: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x801E3458: sh          $t7, 0x66($a0)
    MEM_H(0X66, ctx->r4) = ctx->r15;
    // 0x801E345C: lh          $t8, 0x66($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X66);
    // 0x801E3460: lui         $s5, 0x801F
    ctx->r21 = S32(0X801F << 16);
    // 0x801E3464: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801E3468: bgez        $t8, L_801E3498
    if (SIGNED(ctx->r24) >= 0) {
        // 0x801E346C: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_801E3498;
    }
    // 0x801E346C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801E3470: lbu         $t9, 0x65($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X65);
    // 0x801E3474: lui         $t4, 0x801F
    ctx->r12 = S32(0X801F << 16);
    // 0x801E3478: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x801E347C: andi        $t1, $t0, 0x3
    ctx->r9 = ctx->r8 & 0X3;
    // 0x801E3480: andi        $t2, $t1, 0xFF
    ctx->r10 = ctx->r9 & 0XFF;
    // 0x801E3484: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x801E3488: sb          $t1, 0x65($a0)
    MEM_B(0X65, ctx->r4) = ctx->r9;
    // 0x801E348C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x801E3490: lh          $t4, -0x1D84($t4)
    ctx->r12 = MEM_H(ctx->r12, -0X1D84);
    // 0x801E3494: sh          $t4, 0x66($a0)
    MEM_H(0X66, ctx->r4) = ctx->r12;
L_801E3498:
    // 0x801E3498: lbu         $v0, 0x65($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X65);
    // 0x801E349C: andi        $t5, $v0, 0x1
    ctx->r13 = ctx->r2 & 0X1;
    // 0x801E34A0: beq         $t5, $zero, L_801E35A4
    if (ctx->r13 == 0) {
        // 0x801E34A4: sll         $t6, $v0, 1
        ctx->r14 = S32(ctx->r2 << 1);
            goto L_801E35A4;
    }
    // 0x801E34A4: sll         $t6, $v0, 1
    ctx->r14 = S32(ctx->r2 << 1);
    // 0x801E34A8: addu        $s5, $s5, $t6
    ctx->r21 = ADD32(ctx->r21, ctx->r14);
    // 0x801E34AC: lh          $s5, -0x1D84($s5)
    ctx->r21 = MEM_H(ctx->r21, -0X1D84);
    // 0x801E34B0: bne         $v0, $at, L_801E34C8
    if (ctx->r2 != ctx->r1) {
        // 0x801E34B4: lh          $s4, 0x66($s3)
        ctx->r20 = MEM_H(ctx->r19, 0X66);
            goto L_801E34C8;
    }
    // 0x801E34B4: lh          $s4, 0x66($s3)
    ctx->r20 = MEM_H(ctx->r19, 0X66);
    // 0x801E34B8: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x801E34BC: subu        $s4, $t7, $s4
    ctx->r20 = SUB32(ctx->r15, ctx->r20);
    // 0x801E34C0: sll         $t8, $s4, 16
    ctx->r24 = S32(ctx->r20 << 16);
    // 0x801E34C4: sra         $s4, $t8, 16
    ctx->r20 = S32(SIGNED(ctx->r24) >> 16);
L_801E34C8:
    // 0x801E34C8: lw          $s1, 0x5C($s3)
    ctx->r17 = MEM_W(ctx->r19, 0X5C);
    // 0x801E34CC: sll         $a1, $s4, 16
    ctx->r5 = S32(ctx->r20 << 16);
    // 0x801E34D0: sll         $a2, $s5, 16
    ctx->r6 = S32(ctx->r21 << 16);
    // 0x801E34D4: sra         $t1, $a2, 16
    ctx->r9 = S32(SIGNED(ctx->r6) >> 16);
    // 0x801E34D8: sra         $t0, $a1, 16
    ctx->r8 = S32(SIGNED(ctx->r5) >> 16);
    // 0x801E34DC: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x801E34E0: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    // 0x801E34E4: jal         0x801CC95C
    // 0x801E34E8: lbu         $a0, 0x1($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X1);
    func_801CC95C_63B7AC(rdram, ctx);
        goto after_0;
    // 0x801E34E8: lbu         $a0, 0x1($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X1);
    after_0:
    // 0x801E34EC: sll         $a1, $s4, 16
    ctx->r5 = S32(ctx->r20 << 16);
    // 0x801E34F0: sll         $a2, $s5, 16
    ctx->r6 = S32(ctx->r21 << 16);
    // 0x801E34F4: sb          $v0, 0x3C5($s7)
    MEM_B(0X3C5, ctx->r23) = ctx->r2;
    // 0x801E34F8: sra         $t3, $a2, 16
    ctx->r11 = S32(SIGNED(ctx->r6) >> 16);
    // 0x801E34FC: sra         $t2, $a1, 16
    ctx->r10 = S32(SIGNED(ctx->r5) >> 16);
    // 0x801E3500: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x801E3504: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    // 0x801E3508: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    // 0x801E350C: jal         0x801CC95C
    // 0x801E3510: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_801CC95C_63B7AC(rdram, ctx);
        goto after_1;
    // 0x801E3510: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x801E3514: sb          $v0, 0x3C6($s7)
    MEM_B(0X3C6, ctx->r23) = ctx->r2;
    // 0x801E3518: lbu         $s1, 0x64($s3)
    ctx->r17 = MEM_BU(ctx->r19, 0X64);
    // 0x801E351C: addiu       $s6, $zero, 0x6
    ctx->r22 = ADD32(0, 0X6);
    // 0x801E3520: lw          $s2, 0x60($s3)
    ctx->r18 = MEM_W(ctx->r19, 0X60);
    // 0x801E3524: multu       $s1, $s6
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801E3528: mflo        $t4
    ctx->r12 = lo;
    // 0x801E352C: addu        $s2, $s2, $t4
    ctx->r18 = ADD32(ctx->r18, ctx->r12);
    // 0x801E3530: beq         $s1, $zero, L_801E35A4
    if (ctx->r17 == 0) {
        // 0x801E3534: addiu       $s1, $s1, -0x1
        ctx->r17 = ADD32(ctx->r17, -0X1);
            goto L_801E35A4;
    }
L_801E3534:
    // 0x801E3534: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x801E3538: sll         $a1, $s4, 16
    ctx->r5 = S32(ctx->r20 << 16);
    // 0x801E353C: sll         $a2, $s5, 16
    ctx->r6 = S32(ctx->r21 << 16);
    // 0x801E3540: andi        $t5, $s1, 0xFF
    ctx->r13 = ctx->r17 & 0XFF;
    // 0x801E3544: sra         $t7, $a2, 16
    ctx->r15 = S32(SIGNED(ctx->r6) >> 16);
    // 0x801E3548: sra         $t6, $a1, 16
    ctx->r14 = S32(SIGNED(ctx->r5) >> 16);
    // 0x801E354C: or          $s1, $t5, $zero
    ctx->r17 = ctx->r13 | 0;
    // 0x801E3550: addiu       $s2, $s2, -0x6
    ctx->r18 = ADD32(ctx->r18, -0X6);
    // 0x801E3554: lbu         $a0, 0x4($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X4);
    // 0x801E3558: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801E355C: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x801E3560: jal         0x801CC95C
    // 0x801E3564: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_801CC95C_63B7AC(rdram, ctx);
        goto after_2;
    // 0x801E3564: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x801E3568: multu       $s1, $s6
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801E356C: sll         $a1, $s4, 16
    ctx->r5 = S32(ctx->r20 << 16);
    // 0x801E3570: sll         $a2, $s5, 16
    ctx->r6 = S32(ctx->r21 << 16);
    // 0x801E3574: sra         $t0, $a2, 16
    ctx->r8 = S32(SIGNED(ctx->r6) >> 16);
    // 0x801E3578: sra         $t9, $a1, 16
    ctx->r25 = S32(SIGNED(ctx->r5) >> 16);
    // 0x801E357C: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x801E3580: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    // 0x801E3584: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801E3588: mflo        $t8
    ctx->r24 = lo;
    // 0x801E358C: addu        $s3, $s7, $t8
    ctx->r19 = ADD32(ctx->r23, ctx->r24);
    // 0x801E3590: sb          $v0, 0x3CC($s3)
    MEM_B(0X3CC, ctx->r19) = ctx->r2;
    // 0x801E3594: jal         0x801CC95C
    // 0x801E3598: lbu         $a0, 0x5($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X5);
    func_801CC95C_63B7AC(rdram, ctx);
        goto after_3;
    // 0x801E3598: lbu         $a0, 0x5($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X5);
    after_3:
    // 0x801E359C: bne         $s1, $zero, L_801E3534
    if (ctx->r17 != 0) {
        // 0x801E35A0: sb          $v0, 0x3CD($s3)
        MEM_B(0X3CD, ctx->r19) = ctx->r2;
            goto L_801E3534;
    }
    // 0x801E35A0: sb          $v0, 0x3CD($s3)
    MEM_B(0X3CD, ctx->r19) = ctx->r2;
L_801E35A4:
    // 0x801E35A4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x801E35A8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x801E35AC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x801E35B0: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x801E35B4: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x801E35B8: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x801E35BC: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x801E35C0: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x801E35C4: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x801E35C8: jr          $ra
    // 0x801E35CC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x801E35CC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_801D056C_63F3BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D056C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801D0570: sw          $s1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r17;
    // 0x801D0574: sdc1        $f28, 0x30($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X30, ctx->r29);
    // 0x801D0578: sdc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X28, ctx->r29);
    // 0x801D057C: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801D0580: sw          $s0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r16;
    // 0x801D0584: sdc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X20, ctx->r29);
    // 0x801D0588: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x801D058C: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x801D0590: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x801D0594: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D0598: mtc1        $zero, $f26
    ctx->f26.u32l = 0;
    // 0x801D059C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801D05A0: lw          $s0, 0x18($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X18);
    // 0x801D05A4: ldc1        $f28, -0x1108($at)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r1, -0X1108);
    // 0x801D05A8: lwc1        $f0, 0x84($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X84);
L_801D05AC:
    // 0x801D05AC: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801D05B0: lwc1        $f6, 0x80($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X80);
    // 0x801D05B4: lwc1        $f10, 0x88($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X88);
    // 0x801D05B8: lwc1        $f16, 0x10($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801D05BC: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x801D05C0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801D05C4: lwc1        $f20, 0xC($s0)
    ctx->f20.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801D05C8: mov.s       $f14, $f26
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 26);
    ctx->f14.fl = ctx->f26.fl;
    // 0x801D05CC: add.d       $f4, $f18, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f28.d); 
    ctx->f4.d = ctx->f18.d + ctx->f28.d;
    // 0x801D05D0: mov.s       $f24, $f20
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    ctx->f24.fl = ctx->f20.fl;
    // 0x801D05D4: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
    // 0x801D05D8: add.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801D05DC: cvt.s.d     $f22, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f22.fl = CVT_S_D(ctx->f4.d);
    // 0x801D05E0: swc1        $f12, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f12.u32l;
    // 0x801D05E4: jal         0x801CBEF8
    // 0x801D05E8: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    func_801CBEF8_63AD48(rdram, ctx);
        goto after_0;
    // 0x801D05E8: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    after_0:
    // 0x801D05EC: c.le.s      $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f26.fl <= ctx->f0.fl;
    // 0x801D05F0: nop

    // 0x801D05F4: bc1fl       L_801D0634
    if (!c1cs) {
        // 0x801D05F8: lhu         $v1, 0x8C($s0)
        ctx->r3 = MEM_HU(ctx->r16, 0X8C);
            goto L_801D0634;
    }
    goto skip_0;
    // 0x801D05F8: lhu         $v1, 0x8C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X8C);
    skip_0:
    // 0x801D05FC: c.le.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl <= ctx->f0.fl;
    // 0x801D0600: nop

    // 0x801D0604: bc1fl       L_801D0634
    if (!c1cs) {
        // 0x801D0608: lhu         $v1, 0x8C($s0)
        ctx->r3 = MEM_HU(ctx->r16, 0X8C);
            goto L_801D0634;
    }
    goto skip_1;
    // 0x801D0608: lhu         $v1, 0x8C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X8C);
    skip_1:
    // 0x801D060C: c.le.s      $f26, $f24
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f26.fl <= ctx->f24.fl;
    // 0x801D0610: nop

    // 0x801D0614: bc1fl       L_801D0634
    if (!c1cs) {
        // 0x801D0618: lhu         $v1, 0x8C($s0)
        ctx->r3 = MEM_HU(ctx->r16, 0X8C);
            goto L_801D0634;
    }
    goto skip_2;
    // 0x801D0618: lhu         $v1, 0x8C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X8C);
    skip_2:
    // 0x801D061C: c.lt.s      $f22, $f26
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f22.fl < ctx->f26.fl;
    // 0x801D0620: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x801D0624: bc1fl       L_801D0634
    if (!c1cs) {
        // 0x801D0628: lhu         $v1, 0x8C($s0)
        ctx->r3 = MEM_HU(ctx->r16, 0X8C);
            goto L_801D0634;
    }
    goto skip_3;
    // 0x801D0628: lhu         $v1, 0x8C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X8C);
    skip_3:
    // 0x801D062C: neg.s       $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = -ctx->f22.fl;
    // 0x801D0630: lhu         $v1, 0x8C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X8C);
L_801D0634:
    // 0x801D0634: swc1        $f20, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f20.u32l;
    // 0x801D0638: swc1        $f22, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->f22.u32l;
    // 0x801D063C: bnel        $v1, $zero, L_801D0654
    if (ctx->r3 != 0) {
        // 0x801D0640: lhu         $t7, 0x14($s0)
        ctx->r15 = MEM_HU(ctx->r16, 0X14);
            goto L_801D0654;
    }
    goto skip_4;
    // 0x801D0640: lhu         $t7, 0x14($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X14);
    skip_4:
    // 0x801D0644: lhu         $t6, 0x8E($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X8E);
    // 0x801D0648: beql        $t6, $zero, L_801D0678
    if (ctx->r14 == 0) {
        // 0x801D064C: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_801D0678;
    }
    goto skip_5;
    // 0x801D064C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_5:
    // 0x801D0650: lhu         $t7, 0x14($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X14);
L_801D0654:
    // 0x801D0654: lhu         $t0, 0x8E($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X8E);
    // 0x801D0658: lhu         $t1, 0x16($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X16);
    // 0x801D065C: addu        $t8, $v1, $t7
    ctx->r24 = ADD32(ctx->r3, ctx->r15);
    // 0x801D0660: andi        $t9, $t8, 0x3FF
    ctx->r25 = ctx->r24 & 0X3FF;
    // 0x801D0664: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x801D0668: andi        $t3, $t2, 0x3FF
    ctx->r11 = ctx->r10 & 0X3FF;
    // 0x801D066C: sh          $t9, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r25;
    // 0x801D0670: sh          $t3, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r11;
    // 0x801D0674: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_801D0678:
    // 0x801D0678: bnel        $s0, $zero, L_801D05AC
    if (ctx->r16 != 0) {
        // 0x801D067C: lwc1        $f0, 0x84($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X84);
            goto L_801D05AC;
    }
    goto skip_6;
    // 0x801D067C: lwc1        $f0, 0x84($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X84);
    skip_6:
    // 0x801D0680: lb          $t4, 0xA2($s1)
    ctx->r12 = MEM_B(ctx->r17, 0XA2);
    // 0x801D0684: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x801D0688: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801D068C: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x801D0690: sb          $t5, 0xA2($s1)
    MEM_B(0XA2, ctx->r17) = ctx->r13;
    // 0x801D0694: lb          $t6, 0xA2($s1)
    ctx->r14 = MEM_B(ctx->r17, 0XA2);
    // 0x801D0698: bnel        $t6, $zero, L_801D06C0
    if (ctx->r14 != 0) {
        // 0x801D069C: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_801D06C0;
    }
    goto skip_7;
    // 0x801D069C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    skip_7:
    // 0x801D06A0: sb          $t7, 0x9C($s1)
    MEM_B(0X9C, ctx->r17) = ctx->r15;
    // 0x801D06A4: sb          $zero, 0x9D($s1)
    MEM_B(0X9D, ctx->r17) = 0;
    // 0x801D06A8: lw          $s0, 0x18($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X18);
    // 0x801D06AC: sb          $v0, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r2;
L_801D06B0:
    // 0x801D06B0: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x801D06B4: bnel        $s0, $zero, L_801D06B0
    if (ctx->r16 != 0) {
        // 0x801D06B8: sb          $v0, 0x64($s0)
        MEM_B(0X64, ctx->r16) = ctx->r2;
            goto L_801D06B0;
    }
    goto skip_8;
    // 0x801D06B8: sb          $v0, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r2;
    skip_8:
    // 0x801D06BC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_801D06C0:
    // 0x801D06C0: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x801D06C4: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x801D06C8: ldc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X20);
    // 0x801D06CC: ldc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X28);
    // 0x801D06D0: ldc1        $f28, 0x30($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X30);
    // 0x801D06D4: lw          $s0, 0x3C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X3C);
    // 0x801D06D8: lw          $s1, 0x40($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X40);
    // 0x801D06DC: jr          $ra
    // 0x801D06E0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x801D06E0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_801CCB68_63B9B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CCB68: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801CCB6C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801CCB70: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x801CCB74: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801CCB78: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801CCB7C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801CCB80: addiu       $a0, $a0, -0x7BF0
    ctx->r4 = ADD32(ctx->r4, -0X7BF0);
    // 0x801CCB84: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801CCB88: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801CCB8C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801CCB90: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x801CCB94: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801CCB98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801CCB9C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CCBA0: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x801CCBA4: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801CCBA8: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801CCBAC: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801CCBB0: jal         0x80035854
    // 0x801CCBB4: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    func_80035854_36454(rdram, ctx);
        goto after_0;
    // 0x801CCBB4: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x801CCBB8: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x801CCBBC: sw          $t6, 0xEC($v0)
    MEM_W(0XEC, ctx->r2) = ctx->r14;
    // 0x801CCBC0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801CCBC4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x801CCBC8: jr          $ra
    // 0x801CCBCC: nop

    TRACE_RETURN()
    return;
    // 0x801CCBCC: nop

;}
RECOMP_FUNC void func_801DAA80_6498D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DAA80: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801DAA84: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801DAA88: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x801DAA8C: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x801DAA90: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x801DAA94: addiu       $t6, $t6, 0x2B90
    ctx->r14 = ADD32(ctx->r14, 0X2B90);
    // 0x801DAA98: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801DAA9C: lui         $t8, 0x801F
    ctx->r24 = S32(0X801F << 16);
    // 0x801DAAA0: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
    // 0x801DAAA4: addiu       $t8, $t8, -0x1BE8
    ctx->r24 = ADD32(ctx->r24, -0X1BE8);
    // 0x801DAAA8: sw          $t7, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r15;
    // 0x801DAAAC: sw          $t8, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r24;
    // 0x801DAAB0: sb          $zero, 0x65($a1)
    MEM_B(0X65, ctx->r5) = 0;
    // 0x801DAAB4: lbu         $t9, 0x9E($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X9E);
    // 0x801DAAB8: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801DAABC: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801DAAC0: beq         $t9, $zero, L_801DAB18
    if (ctx->r25 == 0) {
        // 0x801DAAC4: addiu       $t1, $zero, 0x200
        ctx->r9 = ADD32(0, 0X200);
            goto L_801DAB18;
    }
    // 0x801DAAC4: addiu       $t1, $zero, 0x200
    ctx->r9 = ADD32(0, 0X200);
    // 0x801DAAC8: addiu       $t0, $zero, 0x100
    ctx->r8 = ADD32(0, 0X100);
    // 0x801DAACC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DAAD0: sh          $zero, 0x14($a1)
    MEM_H(0X14, ctx->r5) = 0;
    // 0x801DAAD4: sh          $t0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r8;
    // 0x801DAAD8: sh          $zero, 0x18($a1)
    MEM_H(0X18, ctx->r5) = 0;
    // 0x801DAADC: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x801DAAE0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801DAAE4: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x801DAAE8: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x801DAAEC: lui         $a3, 0x42AA
    ctx->r7 = S32(0X42AA << 16);
    // 0x801DAAF0: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801DAAF4: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801DAAF8: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801DAAFC: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801DAB00: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x801DAB04: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801DAB08: jal         0x801E8378
    // 0x801DAB0C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_801E8378_6571C8(rdram, ctx);
        goto after_0;
    // 0x801DAB0C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x801DAB10: b           L_801DAB64
    // 0x801DAB14: lw          $v0, 0xEC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XEC);
        goto L_801DAB64;
    // 0x801DAB14: lw          $v0, 0xEC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XEC);
L_801DAB18:
    // 0x801DAB18: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DAB1C: sh          $zero, 0x14($s0)
    MEM_H(0X14, ctx->r16) = 0;
    // 0x801DAB20: sh          $t1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r9;
    // 0x801DAB24: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x801DAB28: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x801DAB2C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DAB30: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801DAB34: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x801DAB38: lui         $a2, 0x41C8
    ctx->r6 = S32(0X41C8 << 16);
    // 0x801DAB3C: lui         $a3, 0x42AA
    ctx->r7 = S32(0X42AA << 16);
    // 0x801DAB40: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801DAB44: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801DAB48: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801DAB4C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801DAB50: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x801DAB54: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801DAB58: jal         0x801E8378
    // 0x801DAB5C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_801E8378_6571C8(rdram, ctx);
        goto after_1;
    // 0x801DAB5C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x801DAB60: lw          $v0, 0xEC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XEC);
L_801DAB64:
    // 0x801DAB64: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x801DAB68: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801DAB6C: lwc1        $f8, 0x330($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X330);
    // 0x801DAB70: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DAB74: addiu       $a0, $a0, -0x5468
    ctx->r4 = ADD32(ctx->r4, -0X5468);
    // 0x801DAB78: add.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801DAB7C: jal         0x800352EC
    // 0x801DAB80: swc1        $f0, 0x60($s1)
    MEM_W(0X60, ctx->r17) = ctx->f0.u32l;
    func_800352EC_35EEC(rdram, ctx);
        goto after_2;
    // 0x801DAB80: swc1        $f0, 0x60($s1)
    MEM_W(0X60, ctx->r17) = ctx->f0.u32l;
    after_2:
    // 0x801DAB84: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801DAB88: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x801DAB8C: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x801DAB90: jr          $ra
    // 0x801DAB94: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x801DAB94: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_801D0960_63F7B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D0960: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801D0964: lw          $v0, 0xB4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XB4);
    // 0x801D0968: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D096C: ldc1        $f6, -0x10E8($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X10E8);
    // 0x801D0970: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x801D0974: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D0978: cvt.d.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.d = CVT_D_W(ctx->f4.u32l);
    // 0x801D097C: c.le.d      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.d <= ctx->f6.d;
    // 0x801D0980: nop

    // 0x801D0984: bc1f        L_801D09A4
    if (!c1cs) {
        // 0x801D0988: nop
    
            goto L_801D09A4;
    }
    // 0x801D0988: nop

    // 0x801D098C: ldc1        $f8, -0x10E0($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X10E0);
    // 0x801D0990: add.d       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f0.d + ctx->f8.d;
    // 0x801D0994: trunc.w.d   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_D(ctx->f10.d);
    // 0x801D0998: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x801D099C: nop

    // 0x801D09A0: sw          $v0, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->r2;
L_801D09A4:
    // 0x801D09A4: jr          $ra
    // 0x801D09A8: nop

    TRACE_RETURN()
    return;
    // 0x801D09A8: nop

;}
RECOMP_FUNC void func_801CB83C_63A68C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CB83C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801CB840: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CB844: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801CB848: lw          $v0, 0xEC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XEC);
    // 0x801CB84C: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CB850: addiu       $a0, $a0, -0x4774
    ctx->r4 = ADD32(ctx->r4, -0X4774);
    // 0x801CB854: lh          $t6, 0x4($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X4);
    // 0x801CB858: lh          $t8, 0x0($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X0);
    // 0x801CB85C: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x801CB860: andi        $t9, $t8, 0x4
    ctx->r25 = ctx->r24 & 0X4;
    // 0x801CB864: bne         $t9, $zero, L_801CB878
    if (ctx->r25 != 0) {
        // 0x801CB868: sh          $t7, 0x4($v0)
        MEM_H(0X4, ctx->r2) = ctx->r15;
            goto L_801CB878;
    }
    // 0x801CB868: sh          $t7, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r15;
    // 0x801CB86C: jal         0x8003521C
    // 0x801CB870: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x801CB870: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x801CB874: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
L_801CB878:
    // 0x801CB878: sh          $zero, 0xE2($v0)
    MEM_H(0XE2, ctx->r2) = 0;
    // 0x801CB87C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CB880: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801CB884: jr          $ra
    // 0x801CB888: nop

    TRACE_RETURN()
    return;
    // 0x801CB888: nop

;}
RECOMP_FUNC void func_801CE8A4_63D6F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CE8A4: lb          $t8, 0x9F($a0)
    ctx->r24 = MEM_B(ctx->r4, 0X9F);
    // 0x801CE8A8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801CE8AC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801CE8B0: andi        $t9, $t8, 0xFFF7
    ctx->r25 = ctx->r24 & 0XFFF7;
    // 0x801CE8B4: sb          $t6, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = ctx->r14;
    // 0x801CE8B8: sb          $t7, 0xC4($a0)
    MEM_B(0XC4, ctx->r4) = ctx->r15;
    // 0x801CE8BC: sw          $zero, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = 0;
    // 0x801CE8C0: sb          $t9, 0x9F($a0)
    MEM_B(0X9F, ctx->r4) = ctx->r25;
    // 0x801CE8C4: jr          $ra
    // 0x801CE8C8: sh          $zero, 0x358($a1)
    MEM_H(0X358, ctx->r5) = 0;
    TRACE_RETURN()
    return;
    // 0x801CE8C8: sh          $zero, 0x358($a1)
    MEM_H(0X358, ctx->r5) = 0;
;}
RECOMP_FUNC void func_801CCAFC_63B94C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CCAFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CCB00: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801CCB04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CCB08: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801CCB0C: addiu       $a0, $a0, -0xA10
    ctx->r4 = ADD32(ctx->r4, -0XA10);
    // 0x801CCB10: jal         0x80034DD8
    // 0x801CCB14: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034DD8_359D8(rdram, ctx);
        goto after_0;
    // 0x801CCB14: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x801CCB18: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x801CCB1C: sw          $v1, 0xEC($v0)
    MEM_W(0XEC, ctx->r2) = ctx->r3;
    // 0x801CCB20: sw          $v0, 0xD4($v1)
    MEM_W(0XD4, ctx->r3) = ctx->r2;
    // 0x801CCB24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CCB28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CCB2C: jr          $ra
    // 0x801CCB30: nop

    TRACE_RETURN()
    return;
    // 0x801CCB30: nop

;}
RECOMP_FUNC void func_801DE94C_64D79C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DE94C: addiu       $sp, $sp, -0xE0
    ctx->r29 = ADD32(ctx->r29, -0XE0);
    // 0x801DE950: sw          $ra, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r31;
    // 0x801DE954: sw          $s4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r20;
    // 0x801DE958: sw          $s3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r19;
    // 0x801DE95C: sw          $s2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r18;
    // 0x801DE960: sw          $s1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r17;
    // 0x801DE964: sw          $s0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r16;
    // 0x801DE968: sdc1        $f30, 0x70($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X70, ctx->r29);
    // 0x801DE96C: sdc1        $f28, 0x68($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X68, ctx->r29);
    // 0x801DE970: sdc1        $f26, 0x60($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X60, ctx->r29);
    // 0x801DE974: sdc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X58, ctx->r29);
    // 0x801DE978: sdc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X50, ctx->r29);
    // 0x801DE97C: sdc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X48, ctx->r29);
    // 0x801DE980: lwc1        $f4, 0x1C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x801DE984: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x801DE988: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x801DE98C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DE990: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801DE994: lui         $at, 0xC387
    ctx->r1 = S32(0XC387 << 16);
    // 0x801DE998: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801DE99C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x801DE9A0: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x801DE9A4: or          $s4, $a1, $zero
    ctx->r20 = ctx->r5 | 0;
    // 0x801DE9A8: addiu       $t9, $sp, 0xCC
    ctx->r25 = ADD32(ctx->r29, 0XCC);
    // 0x801DE9AC: addiu       $t0, $sp, 0xD0
    ctx->r8 = ADD32(ctx->r29, 0XD0);
    // 0x801DE9B0: addiu       $a3, $sp, 0xC8
    ctx->r7 = ADD32(ctx->r29, 0XC8);
    // 0x801DE9B4: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801DE9B8: swc1        $f10, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f10.u32l;
    // 0x801DE9BC: lwc1        $f16, 0x20($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X20);
    // 0x801DE9C0: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801DE9C4: mul.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x801DE9C8: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801DE9CC: swc1        $f6, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f6.u32l;
    // 0x801DE9D0: lwc1        $f8, 0x24($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X24);
    // 0x801DE9D4: cvt.d.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f16.d = CVT_D_S(ctx->f8.fl);
    // 0x801DE9D8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801DE9DC: mul.d       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f0.d);
    // 0x801DE9E0: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x801DE9E4: mul.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x801DE9E8: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x801DE9EC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801DE9F0: swc1        $f4, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f4.u32l;
    // 0x801DE9F4: lhu         $t6, 0x14($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X14);
    // 0x801DE9F8: mul.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x801DE9FC: sh          $t6, 0xA4($sp)
    MEM_H(0XA4, ctx->r29) = ctx->r14;
    // 0x801DEA00: lhu         $t7, 0x16($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X16);
    // 0x801DEA04: mul.s       $f8, $f4, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x801DEA08: andi        $a0, $t6, 0xFFFF
    ctx->r4 = ctx->r14 & 0XFFFF;
    // 0x801DEA0C: sh          $t7, 0xA6($sp)
    MEM_H(0XA6, ctx->r29) = ctx->r15;
    // 0x801DEA10: lhu         $t8, 0x18($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X18);
    // 0x801DEA14: swc1        $f16, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f16.u32l;
    // 0x801DEA18: swc1        $f10, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f10.u32l;
    // 0x801DEA1C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x801DEA20: swc1        $f8, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f8.u32l;
    // 0x801DEA24: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x801DEA28: andi        $a1, $t7, 0xFFFF
    ctx->r5 = ctx->r15 & 0XFFFF;
    // 0x801DEA2C: sh          $t8, 0xA8($sp)
    MEM_H(0XA8, ctx->r29) = ctx->r24;
    // 0x801DEA30: jal         0x80033898
    // 0x801DEA34: andi        $a2, $t8, 0xFFFF
    ctx->r6 = ctx->r24 & 0XFFFF;
    func_80033898_34498(rdram, ctx);
        goto after_0;
    // 0x801DEA34: andi        $a2, $t8, 0xFFFF
    ctx->r6 = ctx->r24 & 0XFFFF;
    after_0:
    // 0x801DEA38: lwc1        $f16, 0xC8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x801DEA3C: lwc1        $f6, 0x5C($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X5C);
    // 0x801DEA40: lwc1        $f10, 0xCC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x801DEA44: lui         $at, 0x4407
    ctx->r1 = S32(0X4407 << 16);
    // 0x801DEA48: add.s       $f18, $f16, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x801DEA4C: lwc1        $f16, 0xD0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x801DEA50: addiu       $t1, $sp, 0xC0
    ctx->r9 = ADD32(ctx->r29, 0XC0);
    // 0x801DEA54: addiu       $t2, $sp, 0xC4
    ctx->r10 = ADD32(ctx->r29, 0XC4);
    // 0x801DEA58: swc1        $f18, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f18.u32l;
    // 0x801DEA5C: lwc1        $f4, 0x60($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X60);
    // 0x801DEA60: lhu         $a0, 0xA4($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0XA4);
    // 0x801DEA64: lhu         $a1, 0xA6($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0XA6);
    // 0x801DEA68: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x801DEA6C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801DEA70: lhu         $a2, 0xA8($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0XA8);
    // 0x801DEA74: addiu       $a3, $sp, 0xBC
    ctx->r7 = ADD32(ctx->r29, 0XBC);
    // 0x801DEA78: swc1        $f8, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f8.u32l;
    // 0x801DEA7C: lwc1        $f6, 0x64($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X64);
    // 0x801DEA80: swc1        $f20, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f20.u32l;
    // 0x801DEA84: swc1        $f20, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f20.u32l;
    // 0x801DEA88: add.s       $f18, $f16, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x801DEA8C: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x801DEA90: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x801DEA94: swc1        $f10, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f10.u32l;
    // 0x801DEA98: jal         0x80033898
    // 0x801DEA9C: swc1        $f18, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f18.u32l;
    func_80033898_34498(rdram, ctx);
        goto after_1;
    // 0x801DEA9C: swc1        $f18, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f18.u32l;
    after_1:
    // 0x801DEAA0: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
    // 0x801DEAA4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x801DEAA8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x801DEAAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801DEAB0: jal         0x801DFBE0
    // 0x801DEAB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_801DFBE0_64EA30(rdram, ctx);
        goto after_2;
    // 0x801DEAB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x801DEAB8: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x801DEABC: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x801DEAC0: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x801DEAC4: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x801DEAC8: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_801DEACC:
    // 0x801DEACC: lwc1        $f22, 0xC8($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x801DEAD0: lwc1        $f24, 0xCC($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x801DEAD4: lwc1        $f26, 0xD0($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x801DEAD8: mfc1        $a2, $f28
    ctx->r6 = (int32_t)ctx->f28.u32l;
    // 0x801DEADC: addiu       $t3, $zero, 0x99
    ctx->r11 = ADD32(0, 0X99);
    // 0x801DEAE0: addiu       $t4, $zero, 0x99
    ctx->r12 = ADD32(0, 0X99);
    // 0x801DEAE4: addiu       $t5, $zero, 0x99
    ctx->r13 = ADD32(0, 0X99);
    // 0x801DEAE8: addiu       $t6, $zero, 0x80
    ctx->r14 = ADD32(0, 0X80);
    // 0x801DEAEC: addiu       $t7, $zero, 0xC0
    ctx->r15 = ADD32(0, 0XC0);
    // 0x801DEAF0: addiu       $t8, $zero, 0x300
    ctx->r24 = ADD32(0, 0X300);
    // 0x801DEAF4: sw          $t8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r24;
    // 0x801DEAF8: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
    // 0x801DEAFC: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x801DEB00: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x801DEB04: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x801DEB08: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x801DEB0C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x801DEB10: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x801DEB14: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    // 0x801DEB18: swc1        $f30, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f30.u32l;
    // 0x801DEB1C: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x801DEB20: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801DEB24: swc1        $f22, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f22.u32l;
    // 0x801DEB28: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x801DEB2C: jal         0x801CDA88
    // 0x801DEB30: swc1        $f26, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f26.u32l;
    func_801CDA88_63C8D8(rdram, ctx);
        goto after_3;
    // 0x801DEB30: swc1        $f26, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f26.u32l;
    after_3:
    // 0x801DEB34: lwc1        $f22, 0xC8($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x801DEB38: lwc1        $f24, 0xCC($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x801DEB3C: lwc1        $f26, 0xD0($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x801DEB40: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x801DEB44: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x801DEB48: lui         $a1, 0x42B4
    ctx->r5 = S32(0X42B4 << 16);
    // 0x801DEB4C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801DEB50: addiu       $a3, $zero, 0xC0
    ctx->r7 = ADD32(0, 0XC0);
    // 0x801DEB54: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x801DEB58: swc1        $f20, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f20.u32l;
    // 0x801DEB5C: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x801DEB60: swc1        $f22, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f22.u32l;
    // 0x801DEB64: swc1        $f24, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f24.u32l;
    // 0x801DEB68: jal         0x801DFC60
    // 0x801DEB6C: swc1        $f26, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f26.u32l;
    func_801DFC60_64EAB0(rdram, ctx);
        goto after_4;
    // 0x801DEB6C: swc1        $f26, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f26.u32l;
    after_4:
    // 0x801DEB70: lwc1        $f22, 0xC8($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x801DEB74: lwc1        $f24, 0xCC($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x801DEB78: lwc1        $f26, 0xD0($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x801DEB7C: lwc1        $f4, 0xBC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x801DEB80: lwc1        $f8, 0xC0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x801DEB84: lwc1        $f16, 0xC4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x801DEB88: add.s       $f22, $f22, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f4.fl;
    // 0x801DEB8C: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x801DEB90: andi        $t9, $s0, 0xFF
    ctx->r25 = ctx->r16 & 0XFF;
    // 0x801DEB94: add.s       $f24, $f24, $f8
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f24.fl = ctx->f24.fl + ctx->f8.fl;
    // 0x801DEB98: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    // 0x801DEB9C: swc1        $f22, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f22.u32l;
    // 0x801DEBA0: add.s       $f26, $f26, $f16
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f26.fl = ctx->f26.fl + ctx->f16.fl;
    // 0x801DEBA4: swc1        $f24, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f24.u32l;
    // 0x801DEBA8: bne         $t9, $zero, L_801DEACC
    if (ctx->r25 != 0) {
        // 0x801DEBAC: swc1        $f26, 0xD0($sp)
        MEM_W(0XD0, ctx->r29) = ctx->f26.u32l;
            goto L_801DEACC;
    }
    // 0x801DEBAC: swc1        $f26, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f26.u32l;
    // 0x801DEBB0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x801DEBB4: sb          $a0, 0x9C($s3)
    MEM_B(0X9C, ctx->r19) = ctx->r4;
    // 0x801DEBB8: sb          $zero, 0x74($s3)
    MEM_B(0X74, ctx->r19) = 0;
    // 0x801DEBBC: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x801DEBC0: sb          $a0, 0x64($s4)
    MEM_B(0X64, ctx->r20) = ctx->r4;
    // 0x801DEBC4: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x801DEBC8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801DEBCC: lwc1        $f6, 0x1C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x801DEBD0: addiu       $t0, $zero, 0x9
    ctx->r8 = ADD32(0, 0X9);
    // 0x801DEBD4: sb          $t0, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r8;
    // 0x801DEBD8: div.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f18.fl);
    // 0x801DEBDC: lbu         $t1, 0xA0($s3)
    ctx->r9 = MEM_BU(ctx->r19, 0XA0);
    // 0x801DEBE0: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x801DEBE4: lbu         $t4, 0xA2($s3)
    ctx->r12 = MEM_BU(ctx->r19, 0XA2);
    // 0x801DEBE8: subu        $t2, $a1, $t1
    ctx->r10 = SUB32(ctx->r5, ctx->r9);
    // 0x801DEBEC: lw          $v1, 0xEC($s3)
    ctx->r3 = MEM_W(ctx->r19, 0XEC);
    // 0x801DEBF0: subu        $t5, $a1, $t4
    ctx->r13 = SUB32(ctx->r5, ctx->r12);
    // 0x801DEBF4: swc1        $f10, 0xA4($s3)
    MEM_W(0XA4, ctx->r19) = ctx->f10.u32l;
    // 0x801DEBF8: bgez        $t2, L_801DEC08
    if (SIGNED(ctx->r10) >= 0) {
        // 0x801DEBFC: sra         $t3, $t2, 4
        ctx->r11 = S32(SIGNED(ctx->r10) >> 4);
            goto L_801DEC08;
    }
    // 0x801DEBFC: sra         $t3, $t2, 4
    ctx->r11 = S32(SIGNED(ctx->r10) >> 4);
    // 0x801DEC00: addiu       $at, $t2, 0xF
    ctx->r1 = ADD32(ctx->r10, 0XF);
    // 0x801DEC04: sra         $t3, $at, 4
    ctx->r11 = S32(SIGNED(ctx->r1) >> 4);
L_801DEC08:
    // 0x801DEC08: sb          $t3, 0xA1($s3)
    MEM_B(0XA1, ctx->r19) = ctx->r11;
    // 0x801DEC0C: bgez        $t5, L_801DEC1C
    if (SIGNED(ctx->r13) >= 0) {
        // 0x801DEC10: sra         $t6, $t5, 4
        ctx->r14 = S32(SIGNED(ctx->r13) >> 4);
            goto L_801DEC1C;
    }
    // 0x801DEC10: sra         $t6, $t5, 4
    ctx->r14 = S32(SIGNED(ctx->r13) >> 4);
    // 0x801DEC14: addiu       $at, $t5, 0xF
    ctx->r1 = ADD32(ctx->r13, 0XF);
    // 0x801DEC18: sra         $t6, $at, 4
    ctx->r14 = S32(SIGNED(ctx->r1) >> 4);
L_801DEC1C:
    // 0x801DEC1C: sb          $t6, 0xA3($s3)
    MEM_B(0XA3, ctx->r19) = ctx->r14;
    // 0x801DEC20: lhu         $t7, 0xE2($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0XE2);
    // 0x801DEC24: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x801DEC28: bnel        $t8, $zero, L_801DEC80
    if (ctx->r24 != 0) {
        // 0x801DEC2C: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_801DEC80;
    }
    goto skip_0;
    // 0x801DEC2C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    skip_0:
    // 0x801DEC30: lhu         $t9, 0xE4($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0XE4);
    // 0x801DEC34: addiu       $at, $zero, 0x298
    ctx->r1 = ADD32(0, 0X298);
    // 0x801DEC38: bne         $t9, $at, L_801DEC58
    if (ctx->r25 != ctx->r1) {
        // 0x801DEC3C: nop
    
            goto L_801DEC58;
    }
    // 0x801DEC3C: nop

    // 0x801DEC40: jal         0x80038B98
    // 0x801DEC44: addiu       $a0, $zero, 0x299
    ctx->r4 = ADD32(0, 0X299);
    func_80038B98_39798(rdram, ctx);
        goto after_5;
    // 0x801DEC44: addiu       $a0, $zero, 0x299
    ctx->r4 = ADD32(0, 0X299);
    after_5:
    // 0x801DEC48: lw          $t1, 0xEC($s3)
    ctx->r9 = MEM_W(ctx->r19, 0XEC);
    // 0x801DEC4C: addiu       $t0, $zero, 0x299
    ctx->r8 = ADD32(0, 0X299);
    // 0x801DEC50: b           L_801DEC6C
    // 0x801DEC54: sh          $t0, 0xE4($t1)
    MEM_H(0XE4, ctx->r9) = ctx->r8;
        goto L_801DEC6C;
    // 0x801DEC54: sh          $t0, 0xE4($t1)
    MEM_H(0XE4, ctx->r9) = ctx->r8;
L_801DEC58:
    // 0x801DEC58: jal         0x80038B98
    // 0x801DEC5C: addiu       $a0, $zero, 0x298
    ctx->r4 = ADD32(0, 0X298);
    func_80038B98_39798(rdram, ctx);
        goto after_6;
    // 0x801DEC5C: addiu       $a0, $zero, 0x298
    ctx->r4 = ADD32(0, 0X298);
    after_6:
    // 0x801DEC60: lw          $t3, 0xEC($s3)
    ctx->r11 = MEM_W(ctx->r19, 0XEC);
    // 0x801DEC64: addiu       $t2, $zero, 0x298
    ctx->r10 = ADD32(0, 0X298);
    // 0x801DEC68: sh          $t2, 0xE4($t3)
    MEM_H(0XE4, ctx->r11) = ctx->r10;
L_801DEC6C:
    // 0x801DEC6C: lw          $v1, 0xEC($s3)
    ctx->r3 = MEM_W(ctx->r19, 0XEC);
    // 0x801DEC70: lhu         $t4, 0xE2($v1)
    ctx->r12 = MEM_HU(ctx->r3, 0XE2);
    // 0x801DEC74: ori         $t5, $t4, 0x1
    ctx->r13 = ctx->r12 | 0X1;
    // 0x801DEC78: sh          $t5, 0xE2($v1)
    MEM_H(0XE2, ctx->r3) = ctx->r13;
    // 0x801DEC7C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
L_801DEC80:
    // 0x801DEC80: jal         0x801E8850
    // 0x801DEC84: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_801E8850_6576A0(rdram, ctx);
        goto after_7;
    // 0x801DEC84: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_7:
    // 0x801DEC88: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x801DEC8C: jal         0x801DECCC
    // 0x801DEC90: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_801DECCC_64DB1C(rdram, ctx);
        goto after_8;
    // 0x801DEC90: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_8:
    // 0x801DEC94: lw          $ra, 0x8C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X8C);
    // 0x801DEC98: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x801DEC9C: ldc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X50);
    // 0x801DECA0: ldc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X58);
    // 0x801DECA4: ldc1        $f26, 0x60($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X60);
    // 0x801DECA8: ldc1        $f28, 0x68($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X68);
    // 0x801DECAC: ldc1        $f30, 0x70($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X70);
    // 0x801DECB0: lw          $s0, 0x78($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X78);
    // 0x801DECB4: lw          $s1, 0x7C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X7C);
    // 0x801DECB8: lw          $s2, 0x80($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X80);
    // 0x801DECBC: lw          $s3, 0x84($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X84);
    // 0x801DECC0: lw          $s4, 0x88($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X88);
    // 0x801DECC4: jr          $ra
    // 0x801DECC8: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
    TRACE_RETURN()
    return;
    // 0x801DECC8: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
;}
RECOMP_FUNC void func_801DB180_649FD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DB180: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801DB184: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801DB188: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x801DB18C: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x801DB190: addiu       $t6, $t6, 0x850
    ctx->r14 = ADD32(ctx->r14, 0X850);
    // 0x801DB194: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801DB198: lui         $t8, 0x801F
    ctx->r24 = S32(0X801F << 16);
    // 0x801DB19C: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
    // 0x801DB1A0: addiu       $t8, $t8, -0x1BE8
    ctx->r24 = ADD32(ctx->r24, -0X1BE8);
    // 0x801DB1A4: sw          $t7, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r15;
    // 0x801DB1A8: sw          $t8, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r24;
    // 0x801DB1AC: sh          $zero, 0x14($a1)
    MEM_H(0X14, ctx->r5) = 0;
    // 0x801DB1B0: lbu         $t9, 0x9E($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X9E);
    // 0x801DB1B4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DB1B8: addiu       $t2, $zero, 0x200
    ctx->r10 = ADD32(0, 0X200);
    // 0x801DB1BC: sll         $t0, $t9, 10
    ctx->r8 = S32(ctx->r25 << 10);
    // 0x801DB1C0: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801DB1C4: bgez        $t0, L_801DB1D4
    if (SIGNED(ctx->r8) >= 0) {
        // 0x801DB1C8: sra         $t1, $t0, 2
        ctx->r9 = S32(SIGNED(ctx->r8) >> 2);
            goto L_801DB1D4;
    }
    // 0x801DB1C8: sra         $t1, $t0, 2
    ctx->r9 = S32(SIGNED(ctx->r8) >> 2);
    // 0x801DB1CC: addiu       $at, $t0, 0x3
    ctx->r1 = ADD32(ctx->r8, 0X3);
    // 0x801DB1D0: sra         $t1, $at, 2
    ctx->r9 = S32(SIGNED(ctx->r1) >> 2);
L_801DB1D4:
    // 0x801DB1D4: subu        $t3, $t2, $t1
    ctx->r11 = SUB32(ctx->r10, ctx->r9);
    // 0x801DB1D8: andi        $t4, $t3, 0x3FF
    ctx->r12 = ctx->r11 & 0X3FF;
    // 0x801DB1DC: sh          $t4, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r12;
    // 0x801DB1E0: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x801DB1E4: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x801DB1E8: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x801DB1EC: lui         $a3, 0x425C
    ctx->r7 = S32(0X425C << 16);
    // 0x801DB1F0: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801DB1F4: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801DB1F8: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801DB1FC: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801DB200: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x801DB204: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801DB208: jal         0x801E8378
    // 0x801DB20C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    func_801E8378_6571C8(rdram, ctx);
        goto after_0;
    // 0x801DB20C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x801DB210: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DB214: jal         0x800352EC
    // 0x801DB218: addiu       $a0, $a0, -0x4DD0
    ctx->r4 = ADD32(ctx->r4, -0X4DD0);
    func_800352EC_35EEC(rdram, ctx);
        goto after_1;
    // 0x801DB218: addiu       $a0, $a0, -0x4DD0
    ctx->r4 = ADD32(ctx->r4, -0X4DD0);
    after_1:
    // 0x801DB21C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801DB220: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x801DB224: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x801DB228: jr          $ra
    // 0x801DB22C: nop

    TRACE_RETURN()
    return;
    // 0x801DB22C: nop

;}
RECOMP_FUNC void func_801D7E0C_646C5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D7E0C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801D7E10: lw          $v0, 0xBC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XBC);
    // 0x801D7E14: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801D7E18: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D7E1C: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x801D7E20: lwc1        $f16, 0x60($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X60);
    // 0x801D7E24: lw          $t6, 0xC0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC0);
    // 0x801D7E28: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801D7E2C: addiu       $t7, $zero, 0xF
    ctx->r15 = ADD32(0, 0XF);
    // 0x801D7E30: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x801D7E34: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x801D7E38: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801D7E3C: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x801D7E40: bgez        $v0, L_801D7E50
    if (SIGNED(ctx->r2) >= 0) {
        // 0x801D7E44: swc1        $f18, 0x60($a0)
        MEM_W(0X60, ctx->r4) = ctx->f18.u32l;
            goto L_801D7E50;
    }
    // 0x801D7E44: swc1        $f18, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f18.u32l;
    // 0x801D7E48: b           L_801D7E50
    // 0x801D7E4C: negu        $v1, $v0
    ctx->r3 = SUB32(0, ctx->r2);
        goto L_801D7E50;
    // 0x801D7E4C: negu        $v1, $v0
    ctx->r3 = SUB32(0, ctx->r2);
L_801D7E50:
    // 0x801D7E50: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x801D7E54: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D7E58: ldc1        $f8, -0xDE8($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0XDE8);
    // 0x801D7E5C: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x801D7E60: c.le.d      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.d <= ctx->f6.d;
    // 0x801D7E64: nop

    // 0x801D7E68: bc1f        L_801D7E78
    if (!c1cs) {
        // 0x801D7E6C: nop
    
            goto L_801D7E78;
    }
    // 0x801D7E6C: nop

    // 0x801D7E70: sb          $zero, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = 0;
    // 0x801D7E74: sh          $t7, 0xAA($a0)
    MEM_H(0XAA, ctx->r4) = ctx->r15;
L_801D7E78:
    // 0x801D7E78: jr          $ra
    // 0x801D7E7C: sw          $v0, 0xBC($a0)
    MEM_W(0XBC, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x801D7E7C: sw          $v0, 0xBC($a0)
    MEM_W(0XBC, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_801E0760_64F5B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E0760: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E0764: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801E0768: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E076C: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E0770: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E0774: jal         0x800352EC
    // 0x801E0778: addiu       $a0, $a0, 0x78C
    ctx->r4 = ADD32(ctx->r4, 0X78C);
    func_800352EC_35EEC(rdram, ctx);
        goto after_0;
    // 0x801E0778: addiu       $a0, $a0, 0x78C
    ctx->r4 = ADD32(ctx->r4, 0X78C);
    after_0:
    // 0x801E077C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E0780: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E0784: jr          $ra
    // 0x801E0788: nop

    TRACE_RETURN()
    return;
    // 0x801E0788: nop

;}
RECOMP_FUNC void func_801DEECC_64DD1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DEECC: addiu       $sp, $sp, -0x108
    ctx->r29 = ADD32(ctx->r29, -0X108);
    // 0x801DEED0: sw          $ra, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r31;
    // 0x801DEED4: sw          $s6, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r22;
    // 0x801DEED8: sw          $s5, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r21;
    // 0x801DEEDC: sw          $s4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r20;
    // 0x801DEEE0: sw          $s3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r19;
    // 0x801DEEE4: sw          $s2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r18;
    // 0x801DEEE8: sw          $s1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r17;
    // 0x801DEEEC: sw          $s0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r16;
    // 0x801DEEF0: sdc1        $f30, 0x70($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X70, ctx->r29);
    // 0x801DEEF4: sdc1        $f28, 0x68($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X68, ctx->r29);
    // 0x801DEEF8: sdc1        $f26, 0x60($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X60, ctx->r29);
    // 0x801DEEFC: sdc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X58, ctx->r29);
    // 0x801DEF00: sdc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X50, ctx->r29);
    // 0x801DEF04: sdc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X48, ctx->r29);
    // 0x801DEF08: lwc1        $f4, 0x1C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x801DEF0C: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x801DEF10: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x801DEF14: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DEF18: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801DEF1C: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x801DEF20: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801DEF24: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x801DEF28: lui         $at, 0x43DC
    ctx->r1 = S32(0X43DC << 16);
    // 0x801DEF2C: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x801DEF30: addiu       $t9, $sp, 0xF0
    ctx->r25 = ADD32(ctx->r29, 0XF0);
    // 0x801DEF34: addiu       $t0, $sp, 0xF4
    ctx->r8 = ADD32(ctx->r29, 0XF4);
    // 0x801DEF38: addiu       $a3, $sp, 0xEC
    ctx->r7 = ADD32(ctx->r29, 0XEC);
    // 0x801DEF3C: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801DEF40: swc1        $f10, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f10.u32l;
    // 0x801DEF44: lwc1        $f16, 0x20($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X20);
    // 0x801DEF48: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801DEF4C: mul.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x801DEF50: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801DEF54: swc1        $f6, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f6.u32l;
    // 0x801DEF58: lwc1        $f8, 0x24($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X24);
    // 0x801DEF5C: cvt.d.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f16.d = CVT_D_S(ctx->f8.fl);
    // 0x801DEF60: mul.d       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f0.d);
    // 0x801DEF64: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801DEF68: mul.s       $f8, $f10, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f30.fl);
    // 0x801DEF6C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801DEF70: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x801DEF74: mul.s       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x801DEF78: swc1        $f4, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f4.u32l;
    // 0x801DEF7C: lhu         $t6, 0x14($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X14);
    // 0x801DEF80: sh          $t6, 0xA8($sp)
    MEM_H(0XA8, ctx->r29) = ctx->r14;
    // 0x801DEF84: lhu         $t7, 0x16($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X16);
    // 0x801DEF88: andi        $a0, $t6, 0xFFFF
    ctx->r4 = ctx->r14 & 0XFFFF;
    // 0x801DEF8C: sh          $t7, 0xAA($sp)
    MEM_H(0XAA, ctx->r29) = ctx->r15;
    // 0x801DEF90: lhu         $t8, 0x18($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X18);
    // 0x801DEF94: swc1        $f8, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f8.u32l;
    // 0x801DEF98: mul.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x801DEF9C: swc1        $f18, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f18.u32l;
    // 0x801DEFA0: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x801DEFA4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x801DEFA8: andi        $a1, $t7, 0xFFFF
    ctx->r5 = ctx->r15 & 0XFFFF;
    // 0x801DEFAC: sh          $t8, 0xAC($sp)
    MEM_H(0XAC, ctx->r29) = ctx->r24;
    // 0x801DEFB0: andi        $a2, $t8, 0xFFFF
    ctx->r6 = ctx->r24 & 0XFFFF;
    // 0x801DEFB4: jal         0x80033898
    // 0x801DEFB8: swc1        $f8, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f8.u32l;
    func_80033898_34498(rdram, ctx);
        goto after_0;
    // 0x801DEFB8: swc1        $f8, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x801DEFBC: lwc1        $f6, 0xEC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x801DEFC0: lwc1        $f16, 0x5C($s4)
    ctx->f16.u32l = MEM_W(ctx->r20, 0X5C);
    // 0x801DEFC4: lwc1        $f4, 0xF0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x801DEFC8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DEFCC: add.s       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x801DEFD0: lwc1        $f6, 0xF4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x801DEFD4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801DEFD8: addiu       $t1, $sp, 0xA0
    ctx->r9 = ADD32(ctx->r29, 0XA0);
    // 0x801DEFDC: swc1        $f18, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f18.u32l;
    // 0x801DEFE0: lwc1        $f10, 0x60($s4)
    ctx->f10.u32l = MEM_W(ctx->r20, 0X60);
    // 0x801DEFE4: addiu       $t2, $sp, 0xA4
    ctx->r10 = ADD32(ctx->r29, 0XA4);
    // 0x801DEFE8: lhu         $a0, 0xA8($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0XA8);
    // 0x801DEFEC: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x801DEFF0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801DEFF4: lhu         $a1, 0xAA($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0XAA);
    // 0x801DEFF8: lhu         $a2, 0xAC($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0XAC);
    // 0x801DEFFC: swc1        $f8, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f8.u32l;
    // 0x801DF000: lwc1        $f16, 0x64($s4)
    ctx->f16.u32l = MEM_W(ctx->r20, 0X64);
    // 0x801DF004: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x801DF008: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x801DF00C: add.s       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x801DF010: addiu       $a3, $sp, 0x9C
    ctx->r7 = ADD32(ctx->r29, 0X9C);
    // 0x801DF014: swc1        $f0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f0.u32l;
    // 0x801DF018: swc1        $f0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f0.u32l;
    // 0x801DF01C: swc1        $f18, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f18.u32l;
    // 0x801DF020: jal         0x80033898
    // 0x801DF024: swc1        $f4, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f4.u32l;
    func_80033898_34498(rdram, ctx);
        goto after_1;
    // 0x801DF024: swc1        $f4, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x801DF028: lwc1        $f12, 0x9C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x801DF02C: jal         0x800040A8
    // 0x801DF030: lwc1        $f14, 0xA4($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XA4);
    func_800040A8_4CA8(rdram, ctx);
        goto after_2;
    // 0x801DF030: lwc1        $f14, 0xA4($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XA4);
    after_2:
    // 0x801DF034: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DF038: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    // 0x801DF03C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801DF040: addiu       $s6, $v0, 0x180
    ctx->r22 = ADD32(ctx->r2, 0X180);
    // 0x801DF044: andi        $t3, $s6, 0xFFFF
    ctx->r11 = ctx->r22 & 0XFFFF;
    // 0x801DF048: addiu       $t4, $sp, 0xE4
    ctx->r12 = ADD32(ctx->r29, 0XE4);
    // 0x801DF04C: addiu       $t5, $sp, 0xE8
    ctx->r13 = ADD32(ctx->r29, 0XE8);
    // 0x801DF050: or          $s6, $t3, $zero
    ctx->r22 = ctx->r11 | 0;
    // 0x801DF054: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x801DF058: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x801DF05C: lhu         $a0, 0xA8($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0XA8);
    // 0x801DF060: lhu         $a1, 0xAA($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0XAA);
    // 0x801DF064: lhu         $a2, 0xAC($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0XAC);
    // 0x801DF068: addiu       $a3, $sp, 0xE0
    ctx->r7 = ADD32(ctx->r29, 0XE0);
    // 0x801DF06C: swc1        $f0, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f0.u32l;
    // 0x801DF070: swc1        $f0, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f0.u32l;
    // 0x801DF074: jal         0x80033898
    // 0x801DF078: swc1        $f10, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f10.u32l;
    func_80033898_34498(rdram, ctx);
        goto after_3;
    // 0x801DF078: swc1        $f10, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x801DF07C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DF080: lui         $at, 0xC2B0
    ctx->r1 = S32(0XC2B0 << 16);
    // 0x801DF084: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801DF088: addiu       $t6, $sp, 0xD8
    ctx->r14 = ADD32(ctx->r29, 0XD8);
    // 0x801DF08C: addiu       $t7, $sp, 0xDC
    ctx->r15 = ADD32(ctx->r29, 0XDC);
    // 0x801DF090: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801DF094: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801DF098: lhu         $a0, 0xA8($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0XA8);
    // 0x801DF09C: lhu         $a1, 0xAA($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0XAA);
    // 0x801DF0A0: lhu         $a2, 0xAC($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0XAC);
    // 0x801DF0A4: addiu       $a3, $sp, 0xD4
    ctx->r7 = ADD32(ctx->r29, 0XD4);
    // 0x801DF0A8: swc1        $f0, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f0.u32l;
    // 0x801DF0AC: swc1        $f0, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f0.u32l;
    // 0x801DF0B0: jal         0x80033898
    // 0x801DF0B4: swc1        $f8, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f8.u32l;
    func_80033898_34498(rdram, ctx);
        goto after_4;
    // 0x801DF0B4: swc1        $f8, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x801DF0B8: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x801DF0BC: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x801DF0C0: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x801DF0C4: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x801DF0C8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801DF0CC: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x801DF0D0: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x801DF0D4: mtc1        $at, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r1;
    // 0x801DF0D8: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x801DF0DC: addiu       $s3, $zero, 0x340
    ctx->r19 = ADD32(0, 0X340);
    // 0x801DF0E0: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x801DF0E4: addiu       $s5, $zero, 0x5
    ctx->r21 = ADD32(0, 0X5);
L_801DF0E8:
    // 0x801DF0E8: lwc1        $f0, 0xEC($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x801DF0EC: lwc1        $f2, 0xF0($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x801DF0F0: lwc1        $f12, 0xF4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x801DF0F4: andi        $s0, $s6, 0xFFFF
    ctx->r16 = ctx->r22 & 0XFFFF;
    // 0x801DF0F8: addiu       $s1, $zero, 0x5
    ctx->r17 = ADD32(0, 0X5);
    // 0x801DF0FC: swc1        $f0, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f0.u32l;
    // 0x801DF100: swc1        $f2, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f2.u32l;
    // 0x801DF104: swc1        $f12, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f12.u32l;
L_801DF108:
    // 0x801DF108: jal         0x8000DD58
    // 0x801DF10C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_8000DD58_E958(rdram, ctx);
        goto after_5;
    // 0x801DF10C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_5:
    // 0x801DF110: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x801DF114: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x801DF118: cvt.s.w     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    ctx->f16.fl = CVT_S_W(ctx->f6.u32l);
    // 0x801DF11C: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801DF120: add.d       $f4, $f18, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f22.d); 
    ctx->f4.d = ctx->f18.d + ctx->f22.d;
    // 0x801DF124: cvt.s.d     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f10.fl = CVT_S_D(ctx->f4.d);
    // 0x801DF128: jal         0x8000DD58
    // 0x801DF12C: div.s       $f20, $f10, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f20.fl = DIV_S(ctx->f10.fl, ctx->f24.fl);
    func_8000DD58_E958(rdram, ctx);
        goto after_6;
    // 0x801DF12C: div.s       $f20, $f10, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f20.fl = DIV_S(ctx->f10.fl, ctx->f24.fl);
    after_6:
    // 0x801DF130: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x801DF134: lwc1        $f10, 0xF8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x801DF138: mfc1        $a2, $f26
    ctx->r6 = (int32_t)ctx->f26.u32l;
    // 0x801DF13C: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x801DF140: lwc1        $f8, 0xE0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x801DF144: addiu       $t8, $zero, 0x33
    ctx->r24 = ADD32(0, 0X33);
    // 0x801DF148: addiu       $t9, $zero, 0x3A
    ctx->r25 = ADD32(0, 0X3A);
    // 0x801DF14C: addiu       $t0, $zero, 0x4A
    ctx->r8 = ADD32(0, 0X4A);
    // 0x801DF150: addiu       $t1, $zero, 0x80
    ctx->r9 = ADD32(0, 0X80);
    // 0x801DF154: cvt.d.s     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f16.d = CVT_D_S(ctx->f6.fl);
    // 0x801DF158: mul.s       $f6, $f8, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x801DF15C: add.d       $f18, $f16, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f22.d); 
    ctx->f18.d = ctx->f16.d + ctx->f22.d;
    // 0x801DF160: addiu       $t2, $zero, 0x33
    ctx->r10 = ADD32(0, 0X33);
    // 0x801DF164: addiu       $t3, $zero, 0x19
    ctx->r11 = ADD32(0, 0X19);
    // 0x801DF168: sw          $t3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r11;
    // 0x801DF16C: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x801DF170: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x801DF174: lwc1        $f18, 0xD4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x801DF178: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x801DF17C: add.s       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x801DF180: lwc1        $f6, 0xE4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x801DF184: lwc1        $f10, 0xFC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XFC);
    // 0x801DF188: div.s       $f0, $f4, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f0.fl = DIV_S(ctx->f4.fl, ctx->f24.fl);
    // 0x801DF18C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x801DF190: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x801DF194: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801DF198: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x801DF19C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x801DF1A0: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x801DF1A4: swc1        $f28, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f28.u32l;
    // 0x801DF1A8: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x801DF1AC: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x801DF1B0: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x801DF1B4: add.s       $f8, $f4, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x801DF1B8: mul.s       $f18, $f6, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x801DF1BC: lwc1        $f16, 0xD8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x801DF1C0: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x801DF1C4: mul.s       $f8, $f16, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x801DF1C8: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x801DF1CC: lwc1        $f18, 0xE8($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x801DF1D0: lwc1        $f10, 0x100($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X100);
    // 0x801DF1D4: add.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x801DF1D8: mul.s       $f16, $f18, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x801DF1DC: lwc1        $f4, 0xDC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x801DF1E0: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x801DF1E4: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x801DF1E8: add.s       $f8, $f10, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801DF1EC: add.s       $f18, $f6, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801DF1F0: jal         0x801CDA88
    // 0x801DF1F4: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    func_801CDA88_63C8D8(rdram, ctx);
        goto after_7;
    // 0x801DF1F4: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    after_7:
    // 0x801DF1F8: lwc1        $f10, 0xF8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x801DF1FC: lwc1        $f16, 0xE0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x801DF200: lwc1        $f6, 0xFC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XFC);
    // 0x801DF204: lwc1        $f8, 0xE4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x801DF208: add.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801DF20C: lwc1        $f16, 0xE8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x801DF210: lwc1        $f10, 0x100($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X100);
    // 0x801DF214: add.s       $f18, $f6, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801DF218: swc1        $f4, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f4.u32l;
    // 0x801DF21C: addiu       $s0, $s0, 0x33
    ctx->r16 = ADD32(ctx->r16, 0X33);
    // 0x801DF220: add.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801DF224: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x801DF228: andi        $t4, $s0, 0xFFFF
    ctx->r12 = ctx->r16 & 0XFFFF;
    // 0x801DF22C: andi        $t5, $s1, 0xFF
    ctx->r13 = ctx->r17 & 0XFF;
    // 0x801DF230: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x801DF234: swc1        $f18, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f18.u32l;
    // 0x801DF238: swc1        $f4, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f4.u32l;
    // 0x801DF23C: or          $s0, $t4, $zero
    ctx->r16 = ctx->r12 | 0;
    // 0x801DF240: bne         $t5, $zero, L_801DF108
    if (ctx->r13 != 0) {
        // 0x801DF244: or          $s1, $t5, $zero
        ctx->r17 = ctx->r13 | 0;
            goto L_801DF108;
    }
    // 0x801DF244: or          $s1, $t5, $zero
    ctx->r17 = ctx->r13 | 0;
    // 0x801DF248: lwc1        $f0, 0xEC($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x801DF24C: lwc1        $f2, 0xF0($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x801DF250: lwc1        $f12, 0xF4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x801DF254: lwc1        $f6, 0xD4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x801DF258: lwc1        $f8, 0xD8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x801DF25C: lwc1        $f18, 0xDC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x801DF260: add.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x801DF264: addiu       $s3, $s3, 0x19
    ctx->r19 = ADD32(ctx->r19, 0X19);
    // 0x801DF268: addiu       $s5, $s5, -0x1
    ctx->r21 = ADD32(ctx->r21, -0X1);
    // 0x801DF26C: add.s       $f2, $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f8.fl;
    // 0x801DF270: andi        $t6, $s3, 0xFFFF
    ctx->r14 = ctx->r19 & 0XFFFF;
    // 0x801DF274: andi        $t7, $s5, 0xFF
    ctx->r15 = ctx->r21 & 0XFF;
    // 0x801DF278: add.s       $f12, $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f18.fl;
    // 0x801DF27C: or          $s3, $t6, $zero
    ctx->r19 = ctx->r14 | 0;
    // 0x801DF280: or          $s5, $t7, $zero
    ctx->r21 = ctx->r15 | 0;
    // 0x801DF284: swc1        $f2, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f2.u32l;
    // 0x801DF288: swc1        $f12, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f12.u32l;
    // 0x801DF28C: bne         $t7, $zero, L_801DF0E8
    if (ctx->r15 != 0) {
        // 0x801DF290: swc1        $f0, 0xEC($sp)
        MEM_W(0XEC, ctx->r29) = ctx->f0.u32l;
            goto L_801DF0E8;
    }
    // 0x801DF290: swc1        $f0, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f0.u32l;
    // 0x801DF294: lwc1        $f10, 0xB0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x801DF298: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x801DF29C: lwc1        $f16, 0xB4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x801DF2A0: mul.s       $f0, $f10, $f30
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f0.fl = MUL_S(ctx->f10.fl, ctx->f30.fl);
    // 0x801DF2A4: lwc1        $f4, 0xB8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x801DF2A8: addiu       $t8, $sp, 0xF0
    ctx->r24 = ADD32(ctx->r29, 0XF0);
    // 0x801DF2AC: mul.s       $f2, $f16, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x801DF2B0: addiu       $t9, $sp, 0xF4
    ctx->r25 = ADD32(ctx->r29, 0XF4);
    // 0x801DF2B4: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x801DF2B8: mul.s       $f12, $f4, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f14.fl);
    // 0x801DF2BC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801DF2C0: swc1        $f0, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f0.u32l;
    // 0x801DF2C4: lhu         $a0, 0xA8($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0XA8);
    // 0x801DF2C8: swc1        $f2, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f2.u32l;
    // 0x801DF2CC: lhu         $a1, 0xAA($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0XAA);
    // 0x801DF2D0: lhu         $a2, 0xAC($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0XAC);
    // 0x801DF2D4: swc1        $f12, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f12.u32l;
    // 0x801DF2D8: jal         0x80033898
    // 0x801DF2DC: addiu       $a3, $sp, 0xEC
    ctx->r7 = ADD32(ctx->r29, 0XEC);
    func_80033898_34498(rdram, ctx);
        goto after_8;
    // 0x801DF2DC: addiu       $a3, $sp, 0xEC
    ctx->r7 = ADD32(ctx->r29, 0XEC);
    after_8:
    // 0x801DF2E0: lwc1        $f6, 0xEC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x801DF2E4: lwc1        $f8, 0x5C($s4)
    ctx->f8.u32l = MEM_W(ctx->r20, 0X5C);
    // 0x801DF2E8: lwc1        $f10, 0xF0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x801DF2EC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DF2F0: add.s       $f18, $f6, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801DF2F4: lwc1        $f6, 0xF4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x801DF2F8: lui         $at, 0xC2FA
    ctx->r1 = S32(0XC2FA << 16);
    // 0x801DF2FC: addiu       $t0, $sp, 0xE4
    ctx->r8 = ADD32(ctx->r29, 0XE4);
    // 0x801DF300: swc1        $f18, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f18.u32l;
    // 0x801DF304: lwc1        $f16, 0x60($s4)
    ctx->f16.u32l = MEM_W(ctx->r20, 0X60);
    // 0x801DF308: addiu       $t1, $sp, 0xE8
    ctx->r9 = ADD32(ctx->r29, 0XE8);
    // 0x801DF30C: lhu         $a0, 0xA8($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0XA8);
    // 0x801DF310: add.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801DF314: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801DF318: lhu         $a1, 0xAA($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0XAA);
    // 0x801DF31C: lhu         $a2, 0xAC($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0XAC);
    // 0x801DF320: swc1        $f4, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f4.u32l;
    // 0x801DF324: lwc1        $f8, 0x64($s4)
    ctx->f8.u32l = MEM_W(ctx->r20, 0X64);
    // 0x801DF328: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x801DF32C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x801DF330: add.s       $f18, $f6, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801DF334: addiu       $a3, $sp, 0xE0
    ctx->r7 = ADD32(ctx->r29, 0XE0);
    // 0x801DF338: swc1        $f0, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f0.u32l;
    // 0x801DF33C: swc1        $f0, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f0.u32l;
    // 0x801DF340: swc1        $f18, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f18.u32l;
    // 0x801DF344: jal         0x80033898
    // 0x801DF348: swc1        $f10, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f10.u32l;
    func_80033898_34498(rdram, ctx);
        goto after_9;
    // 0x801DF348: swc1        $f10, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f10.u32l;
    after_9:
    // 0x801DF34C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DF350: lui         $at, 0x42DC
    ctx->r1 = S32(0X42DC << 16);
    // 0x801DF354: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801DF358: addiu       $t2, $sp, 0xD8
    ctx->r10 = ADD32(ctx->r29, 0XD8);
    // 0x801DF35C: addiu       $t3, $sp, 0xDC
    ctx->r11 = ADD32(ctx->r29, 0XDC);
    // 0x801DF360: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x801DF364: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x801DF368: lhu         $a0, 0xA8($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0XA8);
    // 0x801DF36C: lhu         $a1, 0xAA($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0XAA);
    // 0x801DF370: lhu         $a2, 0xAC($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0XAC);
    // 0x801DF374: addiu       $a3, $sp, 0xD4
    ctx->r7 = ADD32(ctx->r29, 0XD4);
    // 0x801DF378: swc1        $f0, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f0.u32l;
    // 0x801DF37C: swc1        $f0, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f0.u32l;
    // 0x801DF380: jal         0x80033898
    // 0x801DF384: swc1        $f16, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f16.u32l;
    func_80033898_34498(rdram, ctx);
        goto after_10;
    // 0x801DF384: swc1        $f16, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f16.u32l;
    after_10:
    // 0x801DF388: addiu       $s5, $zero, 0x4
    ctx->r21 = ADD32(0, 0X4);
    // 0x801DF38C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x801DF390: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801DF394: jal         0x801DFBE0
    // 0x801DF398: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_801DFBE0_64EA30(rdram, ctx);
        goto after_11;
    // 0x801DF398: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_11:
    // 0x801DF39C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x801DF3A0: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x801DF3A4: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801DF3A8: ldc1        $f28, -0xCB0($at)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r1, -0XCB0);
    // 0x801DF3AC: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801DF3B0: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x801DF3B4: ldc1        $f26, -0xCA8($at)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r1, -0XCA8);
    // 0x801DF3B8: addiu       $s0, $zero, -0x2
    ctx->r16 = ADD32(0, -0X2);
L_801DF3BC:
    // 0x801DF3BC: lwc1        $f0, 0xEC($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x801DF3C0: lwc1        $f2, 0xF0($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x801DF3C4: lwc1        $f12, 0xF4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x801DF3C8: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
    // 0x801DF3CC: swc1        $f0, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f0.u32l;
    // 0x801DF3D0: swc1        $f2, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f2.u32l;
    // 0x801DF3D4: swc1        $f12, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f12.u32l;
L_801DF3D8:
    // 0x801DF3D8: jal         0x8000DD58
    // 0x801DF3DC: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_8000DD58_E958(rdram, ctx);
        goto after_12;
    // 0x801DF3DC: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_12:
    // 0x801DF3E0: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x801DF3E4: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x801DF3E8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801DF3EC: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801DF3F0: mul.d       $f18, $f8, $f26
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f26.d); 
    ctx->f18.d = MUL_D(ctx->f8.d, ctx->f26.d);
    // 0x801DF3F4: cvt.s.d     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f10.fl = CVT_S_D(ctx->f18.d);
    // 0x801DF3F8: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x801DF3FC: add.d       $f4, $f16, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f28.d); 
    ctx->f4.d = ctx->f16.d + ctx->f28.d;
    // 0x801DF400: jal         0x8000DD58
    // 0x801DF404: cvt.s.d     $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f20.fl = CVT_S_D(ctx->f4.d);
    func_8000DD58_E958(rdram, ctx);
        goto after_13;
    // 0x801DF404: cvt.s.d     $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f20.fl = CVT_S_D(ctx->f4.d);
    after_13:
    // 0x801DF408: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x801DF40C: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x801DF410: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x801DF414: cvt.d.s     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f18.d = CVT_D_S(ctx->f8.fl);
    // 0x801DF418: mul.d       $f10, $f18, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f26.d); 
    ctx->f10.d = MUL_D(ctx->f18.d, ctx->f26.d);
    // 0x801DF41C: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801DF420: cvt.d.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.d = CVT_D_S(ctx->f16.fl);
    // 0x801DF424: add.d       $f6, $f4, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f28.d); 
    ctx->f6.d = ctx->f4.d + ctx->f28.d;
    // 0x801DF428: jal         0x8000DD58
    // 0x801DF42C: cvt.s.d     $f24, $f6
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f24.fl = CVT_S_D(ctx->f6.d);
    func_8000DD58_E958(rdram, ctx);
        goto after_14;
    // 0x801DF42C: cvt.s.d     $f24, $f6
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f24.fl = CVT_S_D(ctx->f6.d);
    after_14:
    // 0x801DF430: addiu       $t4, $v0, 0x1
    ctx->r12 = ADD32(ctx->r2, 0X1);
    // 0x801DF434: and         $t5, $t4, $s0
    ctx->r13 = ctx->r12 & ctx->r16;
    // 0x801DF438: addiu       $t6, $t5, -0xA
    ctx->r14 = ADD32(ctx->r13, -0XA);
    // 0x801DF43C: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x801DF440: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x801DF444: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x801DF448: cvt.s.w     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.fl = CVT_S_W(ctx->f8.u32l);
    // 0x801DF44C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801DF450: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801DF454: ldc1        $f6, -0xCA0($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0XCA0);
    // 0x801DF458: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DF45C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x801DF460: add.s       $f22, $f30, $f18
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f22.fl = ctx->f30.fl + ctx->f18.fl;
    // 0x801DF464: lwc1        $f18, 0xF8($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x801DF468: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801DF46C: addiu       $a3, $zero, 0xC0
    ctx->r7 = ADD32(0, 0XC0);
    // 0x801DF470: cvt.d.s     $f10, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f10.d = CVT_D_S(ctx->f22.fl);
    // 0x801DF474: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801DF478: div.d       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = DIV_D(ctx->f10.d, ctx->f16.d);
    // 0x801DF47C: lwc1        $f10, 0xE0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x801DF480: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801DF484: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801DF488: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x801DF48C: lwc1        $f6, 0xD4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x801DF490: mul.s       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x801DF494: cvt.s.d     $f22, $f8
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f22.fl = CVT_S_D(ctx->f8.d);
    // 0x801DF498: mul.s       $f8, $f6, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f24.fl);
    // 0x801DF49C: add.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x801DF4A0: lwc1        $f16, 0xE4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x801DF4A4: lwc1        $f18, 0xFC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XFC);
    // 0x801DF4A8: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x801DF4AC: mul.s       $f6, $f16, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x801DF4B0: add.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x801DF4B4: lwc1        $f4, 0xD8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x801DF4B8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x801DF4BC: mul.s       $f10, $f4, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f24.fl);
    // 0x801DF4C0: add.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x801DF4C4: lwc1        $f6, 0xE8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x801DF4C8: lwc1        $f18, 0x100($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X100);
    // 0x801DF4CC: mul.s       $f4, $f6, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x801DF4D0: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x801DF4D4: lwc1        $f8, 0xDC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x801DF4D8: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x801DF4DC: mul.s       $f16, $f8, $f24
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f24.fl);
    // 0x801DF4E0: add.s       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801DF4E4: add.s       $f6, $f16, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x801DF4E8: jal         0x801DFC60
    // 0x801DF4EC: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    func_801DFC60_64EAB0(rdram, ctx);
        goto after_15;
    // 0x801DF4EC: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    after_15:
    // 0x801DF4F0: lwc1        $f18, 0xF8($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x801DF4F4: lwc1        $f4, 0xE0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x801DF4F8: lwc1        $f16, 0xFC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XFC);
    // 0x801DF4FC: lwc1        $f10, 0xE4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x801DF500: add.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801DF504: lwc1        $f4, 0xE8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x801DF508: lwc1        $f18, 0x100($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X100);
    // 0x801DF50C: add.s       $f6, $f16, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x801DF510: swc1        $f8, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f8.u32l;
    // 0x801DF514: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x801DF518: add.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801DF51C: andi        $t7, $s1, 0xFF
    ctx->r15 = ctx->r17 & 0XFF;
    // 0x801DF520: swc1        $f6, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f6.u32l;
    // 0x801DF524: or          $s1, $t7, $zero
    ctx->r17 = ctx->r15 | 0;
    // 0x801DF528: bne         $t7, $zero, L_801DF3D8
    if (ctx->r15 != 0) {
        // 0x801DF52C: swc1        $f8, 0x100($sp)
        MEM_W(0X100, ctx->r29) = ctx->f8.u32l;
            goto L_801DF3D8;
    }
    // 0x801DF52C: swc1        $f8, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f8.u32l;
    // 0x801DF530: lwc1        $f0, 0xEC($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x801DF534: lwc1        $f2, 0xF0($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x801DF538: lwc1        $f12, 0xF4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x801DF53C: lwc1        $f16, 0xD4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x801DF540: lwc1        $f10, 0xD8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x801DF544: lwc1        $f6, 0xDC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x801DF548: add.s       $f0, $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f16.fl;
    // 0x801DF54C: addiu       $s5, $s5, -0x1
    ctx->r21 = ADD32(ctx->r21, -0X1);
    // 0x801DF550: andi        $t8, $s5, 0xFF
    ctx->r24 = ctx->r21 & 0XFF;
    // 0x801DF554: add.s       $f2, $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f10.fl;
    // 0x801DF558: or          $s5, $t8, $zero
    ctx->r21 = ctx->r24 | 0;
    // 0x801DF55C: swc1        $f0, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f0.u32l;
    // 0x801DF560: add.s       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f6.fl;
    // 0x801DF564: swc1        $f2, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f2.u32l;
    // 0x801DF568: bne         $t8, $zero, L_801DF3BC
    if (ctx->r24 != 0) {
        // 0x801DF56C: swc1        $f12, 0xF4($sp)
        MEM_W(0XF4, ctx->r29) = ctx->f12.u32l;
            goto L_801DF3BC;
    }
    // 0x801DF56C: swc1        $f12, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f12.u32l;
    // 0x801DF570: lw          $t9, 0xEC($s4)
    ctx->r25 = MEM_W(ctx->r20, 0XEC);
    // 0x801DF574: lhu         $t0, 0xE2($t9)
    ctx->r8 = MEM_HU(ctx->r25, 0XE2);
    // 0x801DF578: andi        $t1, $t0, 0x4
    ctx->r9 = ctx->r8 & 0X4;
    // 0x801DF57C: bnel        $t1, $zero, L_801DF5A0
    if (ctx->r9 != 0) {
        // 0x801DF580: or          $a0, $s4, $zero
        ctx->r4 = ctx->r20 | 0;
            goto L_801DF5A0;
    }
    goto skip_0;
    // 0x801DF580: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    skip_0:
    // 0x801DF584: jal         0x80038B98
    // 0x801DF588: addiu       $a0, $zero, 0x14D
    ctx->r4 = ADD32(0, 0X14D);
    func_80038B98_39798(rdram, ctx);
        goto after_16;
    // 0x801DF588: addiu       $a0, $zero, 0x14D
    ctx->r4 = ADD32(0, 0X14D);
    after_16:
    // 0x801DF58C: lw          $v0, 0xEC($s4)
    ctx->r2 = MEM_W(ctx->r20, 0XEC);
    // 0x801DF590: lhu         $t2, 0xE2($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0XE2);
    // 0x801DF594: ori         $t3, $t2, 0x4
    ctx->r11 = ctx->r10 | 0X4;
    // 0x801DF598: sh          $t3, 0xE2($v0)
    MEM_H(0XE2, ctx->r2) = ctx->r11;
    // 0x801DF59C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
L_801DF5A0:
    // 0x801DF5A0: jal         0x801E8850
    // 0x801DF5A4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_801E8850_6576A0(rdram, ctx);
        goto after_17;
    // 0x801DF5A4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_17:
    // 0x801DF5A8: jal         0x801DBEB0
    // 0x801DF5AC: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_801DBEB0_64AD00(rdram, ctx);
        goto after_18;
    // 0x801DF5AC: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_18:
    // 0x801DF5B0: lw          $ra, 0x94($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X94);
    // 0x801DF5B4: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x801DF5B8: ldc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X50);
    // 0x801DF5BC: ldc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X58);
    // 0x801DF5C0: ldc1        $f26, 0x60($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X60);
    // 0x801DF5C4: ldc1        $f28, 0x68($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X68);
    // 0x801DF5C8: ldc1        $f30, 0x70($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X70);
    // 0x801DF5CC: lw          $s0, 0x78($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X78);
    // 0x801DF5D0: lw          $s1, 0x7C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X7C);
    // 0x801DF5D4: lw          $s2, 0x80($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X80);
    // 0x801DF5D8: lw          $s3, 0x84($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X84);
    // 0x801DF5DC: lw          $s4, 0x88($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X88);
    // 0x801DF5E0: lw          $s5, 0x8C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X8C);
    // 0x801DF5E4: lw          $s6, 0x90($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X90);
    // 0x801DF5E8: jr          $ra
    // 0x801DF5EC: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
    TRACE_RETURN()
    return;
    // 0x801DF5EC: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
;}
RECOMP_FUNC void func_801E21B8_651008(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E21B8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801E21BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E21C0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801E21C4: lw          $a2, 0xEC($a0)
    ctx->r6 = MEM_W(ctx->r4, 0XEC);
    // 0x801E21C8: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801E21CC: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x801E21D0: lh          $v0, 0x0($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X0);
    // 0x801E21D4: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x801E21D8: beq         $t6, $zero, L_801E238C
    if (ctx->r14 == 0) {
        // 0x801E21DC: andi        $t7, $v0, 0x2
        ctx->r15 = ctx->r2 & 0X2;
            goto L_801E238C;
    }
    // 0x801E21DC: andi        $t7, $v0, 0x2
    ctx->r15 = ctx->r2 & 0X2;
    // 0x801E21E0: beq         $t7, $zero, L_801E21EC
    if (ctx->r15 == 0) {
        // 0x801E21E4: addiu       $t8, $zero, 0x5DC0
        ctx->r24 = ADD32(0, 0X5DC0);
            goto L_801E21EC;
    }
    // 0x801E21E4: addiu       $t8, $zero, 0x5DC0
    ctx->r24 = ADD32(0, 0X5DC0);
    // 0x801E21E8: sw          $t8, 0x318($a2)
    MEM_W(0X318, ctx->r6) = ctx->r24;
L_801E21EC:
    // 0x801E21EC: lw          $t9, 0x31C($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X31C);
    // 0x801E21F0: lw          $t1, 0x318($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X318);
    // 0x801E21F4: lui         $at, 0x4049
    ctx->r1 = S32(0X4049 << 16);
    // 0x801E21F8: mtc1        $at, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r1;
    // 0x801E21FC: addu        $v0, $t9, $t1
    ctx->r2 = ADD32(ctx->r25, ctx->r9);
    // 0x801E2200: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x801E2204: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801E2208: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801E220C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801E2210: sw          $v0, 0x31C($a2)
    MEM_W(0X31C, ctx->r6) = ctx->r2;
    // 0x801E2214: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801E2218: ldc1        $f18, -0xBE0($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0XBE0);
    // 0x801E221C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801E2220: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x801E2224: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801E2228: lbu         $v1, 0x317($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X317);
    // 0x801E222C: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x801E2230: addiu       $t4, $v1, 0x1
    ctx->r12 = ADD32(ctx->r3, 0X1);
    // 0x801E2234: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x801E2238: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x801E223C: cvt.s.d     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f0.fl = CVT_S_D(ctx->f4.d);
    // 0x801E2240: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x801E2244: swc1        $f0, 0x320($a2)
    MEM_W(0X320, ctx->r6) = ctx->f0.u32l;
    // 0x801E2248: div.d       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = DIV_D(ctx->f6.d, ctx->f2.d);
    // 0x801E224C: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x801E2250: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x801E2254: nop

    // 0x801E2258: cvt.w.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_D(ctx->f8.d);
    // 0x801E225C: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x801E2260: nop

    // 0x801E2264: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x801E2268: beql        $t0, $zero, L_801E22BC
    if (ctx->r8 == 0) {
        // 0x801E226C: mfc1        $t0, $f10
        ctx->r8 = (int32_t)ctx->f10.u32l;
            goto L_801E22BC;
    }
    goto skip_0;
    // 0x801E226C: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    skip_0:
    // 0x801E2270: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x801E2274: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801E2278: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x801E227C: sub.d       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f10.d = ctx->f8.d - ctx->f10.d;
    // 0x801E2280: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x801E2284: nop

    // 0x801E2288: cvt.w.d     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_D(ctx->f10.d);
    // 0x801E228C: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x801E2290: nop

    // 0x801E2294: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x801E2298: bne         $t0, $zero, L_801E22B0
    if (ctx->r8 != 0) {
        // 0x801E229C: nop
    
            goto L_801E22B0;
    }
    // 0x801E229C: nop

    // 0x801E22A0: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x801E22A4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E22A8: b           L_801E22C8
    // 0x801E22AC: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
        goto L_801E22C8;
    // 0x801E22AC: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
L_801E22B0:
    // 0x801E22B0: b           L_801E22C8
    // 0x801E22B4: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
        goto L_801E22C8;
    // 0x801E22B4: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x801E22B8: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
L_801E22BC:
    // 0x801E22BC: nop

    // 0x801E22C0: bltz        $t0, L_801E22B0
    if (SIGNED(ctx->r8) < 0) {
        // 0x801E22C4: nop
    
            goto L_801E22B0;
    }
    // 0x801E22C4: nop

L_801E22C8:
    // 0x801E22C8: andi        $t3, $t0, 0xFF
    ctx->r11 = ctx->r8 & 0XFF;
    // 0x801E22CC: slt         $at, $v1, $t3
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x801E22D0: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x801E22D4: beq         $at, $zero, L_801E238C
    if (ctx->r1 == 0) {
        // 0x801E22D8: or          $t0, $t3, $zero
        ctx->r8 = ctx->r11 | 0;
            goto L_801E238C;
    }
    // 0x801E22D8: or          $t0, $t3, $zero
    ctx->r8 = ctx->r11 | 0;
    // 0x801E22DC: sb          $t4, 0x317($a2)
    MEM_B(0X317, ctx->r6) = ctx->r12;
    // 0x801E22E0: lbu         $v0, 0x5C($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X5C);
    // 0x801E22E4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x801E22E8: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E22EC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x801E22F0: bne         $v0, $zero, L_801E2330
    if (ctx->r2 != 0) {
        // 0x801E22F4: sb          $v0, 0x5C($a3)
        MEM_B(0X5C, ctx->r7) = ctx->r2;
            goto L_801E2330;
    }
    // 0x801E22F4: sb          $v0, 0x5C($a3)
    MEM_B(0X5C, ctx->r7) = ctx->r2;
    // 0x801E22F8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x801E22FC: sb          $a1, 0x33($sp)
    MEM_B(0X33, ctx->r29) = ctx->r5;
    // 0x801E2300: addiu       $a0, $a0, 0x23A0
    ctx->r4 = ADD32(ctx->r4, 0X23A0);
    // 0x801E2304: sw          $a2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r6;
    // 0x801E2308: sw          $a3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r7;
    // 0x801E230C: jal         0x8003521C
    // 0x801E2310: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x801E2310: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    after_0:
    // 0x801E2314: lui         $at, 0x4049
    ctx->r1 = S32(0X4049 << 16);
    // 0x801E2318: mtc1        $at, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r1;
    // 0x801E231C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801E2320: lb          $a1, 0x33($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X33);
    // 0x801E2324: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x801E2328: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x801E232C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
L_801E2330:
    // 0x801E2330: lw          $t5, 0x328($a2)
    ctx->r13 = MEM_W(ctx->r6, 0X328);
    // 0x801E2334: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x801E2338: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x801E233C: addu        $a0, $t5, $t6
    ctx->r4 = ADD32(ctx->r13, ctx->r14);
    // 0x801E2340: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x801E2344: cvt.d.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.d = CVT_D_W(ctx->f16.u32l);
    // 0x801E2348: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E234C: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x801E2350: sw          $t8, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r24;
    // 0x801E2354: sw          $s0, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->r16;
    // 0x801E2358: mul.d       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f2.d);
    // 0x801E235C: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x801E2360: sw          $v1, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->r3;
    // 0x801E2364: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801E2368: beq         $v0, $zero, L_801E2380
    if (ctx->r2 == 0) {
        // 0x801E236C: cvt.s.d     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
            goto L_801E2380;
    }
    // 0x801E236C: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801E2370: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_801E2374:
    // 0x801E2374: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x801E2378: bnel        $v0, $zero, L_801E2374
    if (ctx->r2 != 0) {
        // 0x801E237C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_801E2374;
    }
    goto skip_1;
    // 0x801E237C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    skip_1:
L_801E2380:
    // 0x801E2380: sw          $s0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r16;
    // 0x801E2384: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x801E2388: swc1        $f6, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f6.u32l;
L_801E238C:
    // 0x801E238C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801E2390: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801E2394: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x801E2398: jr          $ra
    // 0x801E239C: nop

    TRACE_RETURN()
    return;
    // 0x801E239C: nop

;}
RECOMP_FUNC void func_801E2D04_651B54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E2D04: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801E2D08: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E2D0C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801E2D10: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801E2D14: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801E2D18: lw          $s0, 0xEC($a0)
    ctx->r16 = MEM_W(ctx->r4, 0XEC);
    // 0x801E2D1C: jal         0x801CC148
    // 0x801E2D20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801CC148_63AF98(rdram, ctx);
        goto after_0;
    // 0x801E2D20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x801E2D24: jal         0x801CC69C
    // 0x801E2D28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801CC69C_63B4EC(rdram, ctx);
        goto after_1;
    // 0x801E2D28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801E2D2C: jal         0x801CC7E0
    // 0x801E2D30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801CC7E0_63B630(rdram, ctx);
        goto after_2;
    // 0x801E2D30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801E2D34: sh          $zero, 0x358($s0)
    MEM_H(0X358, ctx->r16) = 0;
    // 0x801E2D38: jal         0x801CC5CC
    // 0x801E2D3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801CC5CC_63B41C(rdram, ctx);
        goto after_3;
    // 0x801E2D3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801E2D40: sh          $v0, 0x35A($s0)
    MEM_H(0X35A, ctx->r16) = ctx->r2;
    // 0x801E2D44: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x801E2D48: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x801E2D4C: lui         $t7, 0x4
    ctx->r15 = S32(0X4 << 16);
    // 0x801E2D50: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801E2D54: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x801E2D58: lhu         $t7, -0x520C($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X520C);
    // 0x801E2D5C: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E2D60: bne         $t7, $at, L_801E2D7C
    if (ctx->r15 != ctx->r1) {
        // 0x801E2D64: nop
    
            goto L_801E2D7C;
    }
    // 0x801E2D64: nop

    // 0x801E2D68: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E2D6C: jal         0x800352EC
    // 0x801E2D70: addiu       $a0, $a0, 0x2DE4
    ctx->r4 = ADD32(ctx->r4, 0X2DE4);
    func_800352EC_35EEC(rdram, ctx);
        goto after_4;
    // 0x801E2D70: addiu       $a0, $a0, 0x2DE4
    ctx->r4 = ADD32(ctx->r4, 0X2DE4);
    after_4:
    // 0x801E2D74: b           L_801E2D88
    // 0x801E2D78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E2D88;
    // 0x801E2D78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E2D7C:
    // 0x801E2D7C: jal         0x800352EC
    // 0x801E2D80: addiu       $a0, $a0, 0x2D98
    ctx->r4 = ADD32(ctx->r4, 0X2D98);
    func_800352EC_35EEC(rdram, ctx);
        goto after_5;
    // 0x801E2D80: addiu       $a0, $a0, 0x2D98
    ctx->r4 = ADD32(ctx->r4, 0X2D98);
    after_5:
    // 0x801E2D84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E2D88:
    // 0x801E2D88: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801E2D8C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801E2D90: jr          $ra
    // 0x801E2D94: nop

    TRACE_RETURN()
    return;
    // 0x801E2D94: nop

;}
RECOMP_FUNC void func_801DA008_648E58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DA008: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DA00C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DA010: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801DA014: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801DA018: lb          $t6, 0x74($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X74);
    // 0x801DA01C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x801DA020: bgezl       $t6, L_801DA048
    if (SIGNED(ctx->r14) >= 0) {
        // 0x801DA024: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_801DA048;
    }
    goto skip_0;
    // 0x801DA024: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    skip_0:
    // 0x801DA028: sb          $zero, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = 0;
    // 0x801DA02C: sb          $zero, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = 0;
    // 0x801DA030: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DA034: jal         0x800352EC
    // 0x801DA038: addiu       $a0, $a0, -0x5F70
    ctx->r4 = ADD32(ctx->r4, -0X5F70);
    func_800352EC_35EEC(rdram, ctx);
        goto after_0;
    // 0x801DA038: addiu       $a0, $a0, -0x5F70
    ctx->r4 = ADD32(ctx->r4, -0X5F70);
    after_0:
    // 0x801DA03C: b           L_801DA084
    // 0x801DA040: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801DA084;
    // 0x801DA040: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DA044: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
L_801DA048:
    // 0x801DA048: jal         0x801CD504
    // 0x801DA04C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_801CD504_63C354(rdram, ctx);
        goto after_1;
    // 0x801DA04C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_1:
    // 0x801DA050: beq         $v0, $zero, L_801DA068
    if (ctx->r2 == 0) {
        // 0x801DA054: lw          $a1, 0x18($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X18);
            goto L_801DA068;
    }
    // 0x801DA054: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x801DA058: jal         0x801D8BF0
    // 0x801DA05C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_801D8BF0_647A40(rdram, ctx);
        goto after_2;
    // 0x801DA05C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_2:
    // 0x801DA060: b           L_801DA084
    // 0x801DA064: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801DA084;
    // 0x801DA064: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DA068:
    // 0x801DA068: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801DA06C: jal         0x801CD634
    // 0x801DA070: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_801CD634_63C484(rdram, ctx);
        goto after_3;
    // 0x801DA070: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_3:
    // 0x801DA074: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x801DA078: jal         0x801CD780
    // 0x801DA07C: lwc1        $f12, 0x64($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X64);
    func_801CD780_63C5D0(rdram, ctx);
        goto after_4;
    // 0x801DA07C: lwc1        $f12, 0x64($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X64);
    after_4:
    // 0x801DA080: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DA084:
    // 0x801DA084: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DA088: jr          $ra
    // 0x801DA08C: nop

    TRACE_RETURN()
    return;
    // 0x801DA08C: nop

;}
RECOMP_FUNC void func_801CE304_63D154(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CE304: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801CE308: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x801CE30C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801CE310: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x801CE314: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x801CE318: lb          $a3, 0xA3($a0)
    ctx->r7 = MEM_B(ctx->r4, 0XA3);
    // 0x801CE31C: lwc1        $f4, 0x5C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X5C);
    // 0x801CE320: lwc1        $f6, 0x60($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X60);
    // 0x801CE324: lwc1        $f8, 0x64($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X64);
    // 0x801CE328: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801CE32C: lw          $s1, 0xEC($a0)
    ctx->r17 = MEM_W(ctx->r4, 0XEC);
    // 0x801CE330: swc1        $f4, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f4.u32l;
    // 0x801CE334: swc1        $f6, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f6.u32l;
    // 0x801CE338: beq         $a3, $zero, L_801CE350
    if (ctx->r7 == 0) {
        // 0x801CE33C: swc1        $f8, 0x70($a0)
        MEM_W(0X70, ctx->r4) = ctx->f8.u32l;
            goto L_801CE350;
    }
    // 0x801CE33C: swc1        $f8, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f8.u32l;
    // 0x801CE340: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
    // 0x801CE344: sll         $t6, $a3, 16
    ctx->r14 = S32(ctx->r7 << 16);
    // 0x801CE348: sra         $a3, $t6, 16
    ctx->r7 = S32(SIGNED(ctx->r14) >> 16);
    // 0x801CE34C: sb          $a3, 0xA3($a0)
    MEM_B(0XA3, ctx->r4) = ctx->r7;
L_801CE350:
    // 0x801CE350: lh          $t8, 0x0($s1)
    ctx->r24 = MEM_H(ctx->r17, 0X0);
    // 0x801CE354: slt         $t1, $zero, $a3
    ctx->r9 = SIGNED(0) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x801CE358: sll         $t2, $t1, 7
    ctx->r10 = S32(ctx->r9 << 7);
    // 0x801CE35C: andi        $t9, $t8, 0xFF7F
    ctx->r25 = ctx->r24 & 0XFF7F;
    // 0x801CE360: sh          $t9, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r25;
    // 0x801CE364: lh          $t0, 0x0($s1)
    ctx->r8 = MEM_H(ctx->r17, 0X0);
    // 0x801CE368: lui         $v0, 0x801F
    ctx->r2 = S32(0X801F << 16);
    // 0x801CE36C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801CE370: or          $t3, $t0, $t2
    ctx->r11 = ctx->r8 | ctx->r10;
    // 0x801CE374: sh          $t3, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r11;
    // 0x801CE378: lbu         $v1, 0x9C($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9C);
    // 0x801CE37C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x801CE380: sll         $a2, $v1, 2
    ctx->r6 = S32(ctx->r3 << 2);
    // 0x801CE384: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x801CE388: lw          $v0, -0x7668($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7668);
    // 0x801CE38C: beq         $v0, $zero, L_801CE3A8
    if (ctx->r2 == 0) {
        // 0x801CE390: nop
    
            goto L_801CE3A8;
    }
    // 0x801CE390: nop

    // 0x801CE394: jalr        $v0
    // 0x801CE398: sh          $a3, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x801CE398: sh          $a3, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x801CE39C: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x801CE3A0: sll         $a2, $v1, 2
    ctx->r6 = S32(ctx->r3 << 2);
    // 0x801CE3A4: lh          $a3, 0x24($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X24);
L_801CE3A8:
    // 0x801CE3A8: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801CE3AC: addu        $t9, $t9, $a2
    ctx->r25 = ADD32(ctx->r25, ctx->r6);
    // 0x801CE3B0: lw          $t9, -0x768C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X768C);
    // 0x801CE3B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801CE3B8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x801CE3BC: jalr        $t9
    // 0x801CE3C0: sh          $a3, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x801CE3C0: sh          $a3, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r7;
    after_1:
    // 0x801CE3C4: lw          $t4, 0xB4($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XB4);
    // 0x801CE3C8: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801CE3CC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801CE3D0: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x801CE3D4: lbu         $v1, 0xA0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA0);
    // 0x801CE3D8: lh          $a3, 0x24($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X24);
    // 0x801CE3DC: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x801CE3E0: lui         $v0, 0x801F
    ctx->r2 = S32(0X801F << 16);
    // 0x801CE3E4: sll         $a2, $v1, 2
    ctx->r6 = S32(ctx->r3 << 2);
    // 0x801CE3E8: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x801CE3EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801CE3F0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x801CE3F4: div.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f16.fl, ctx->f18.fl);
    // 0x801CE3F8: swc1        $f4, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f4.u32l;
    // 0x801CE3FC: lw          $v0, -0x7638($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7638);
    // 0x801CE400: beq         $v0, $zero, L_801CE41C
    if (ctx->r2 == 0) {
        // 0x801CE404: nop
    
            goto L_801CE41C;
    }
    // 0x801CE404: nop

    // 0x801CE408: jalr        $v0
    // 0x801CE40C: sh          $a3, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x801CE40C: sh          $a3, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r7;
    after_2:
    // 0x801CE410: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x801CE414: sll         $a2, $v1, 2
    ctx->r6 = S32(ctx->r3 << 2);
    // 0x801CE418: lh          $a3, 0x24($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X24);
L_801CE41C:
    // 0x801CE41C: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801CE420: addu        $t9, $t9, $a2
    ctx->r25 = ADD32(ctx->r25, ctx->r6);
    // 0x801CE424: lw          $t9, -0x7644($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X7644);
    // 0x801CE428: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801CE42C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x801CE430: jalr        $t9
    // 0x801CE434: sh          $a3, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x801CE434: sh          $a3, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r7;
    after_3:
    // 0x801CE438: lw          $t5, 0xB8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XB8);
    // 0x801CE43C: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801CE440: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801CE444: mtc1        $t5, $f6
    ctx->f6.u32l = ctx->r13;
    // 0x801CE448: lh          $a3, 0x24($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X24);
    // 0x801CE44C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801CE450: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x801CE454: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x801CE458: div.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x801CE45C: swc1        $f16, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = ctx->f16.u32l;
    // 0x801CE460: lh          $t6, 0x0($s1)
    ctx->r14 = MEM_H(ctx->r17, 0X0);
    // 0x801CE464: andi        $t7, $t6, 0x40
    ctx->r15 = ctx->r14 & 0X40;
    // 0x801CE468: beql        $t7, $zero, L_801CE480
    if (ctx->r15 == 0) {
        // 0x801CE46C: lb          $v0, 0x9F($s0)
        ctx->r2 = MEM_B(ctx->r16, 0X9F);
            goto L_801CE480;
    }
    goto skip_0;
    // 0x801CE46C: lb          $v0, 0x9F($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X9F);
    skip_0:
    // 0x801CE470: jal         0x801E4764
    // 0x801CE474: sh          $a3, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r7;
    func_801E4764_6535B4(rdram, ctx);
        goto after_4;
    // 0x801CE474: sh          $a3, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r7;
    after_4:
    // 0x801CE478: lh          $a3, 0x24($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X24);
    // 0x801CE47C: lb          $v0, 0x9F($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X9F);
L_801CE480:
    // 0x801CE480: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x801CE484: andi        $t8, $v0, 0x40
    ctx->r24 = ctx->r2 & 0X40;
    // 0x801CE488: beql        $t8, $zero, L_801CE580
    if (ctx->r24 == 0) {
        // 0x801CE48C: lb          $t0, 0xC4($s0)
        ctx->r8 = MEM_B(ctx->r16, 0XC4);
            goto L_801CE580;
    }
    goto skip_1;
    // 0x801CE48C: lb          $t0, 0xC4($s0)
    ctx->r8 = MEM_B(ctx->r16, 0XC4);
    skip_1:
    // 0x801CE490: lwc1        $f12, 0x64($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X64);
    // 0x801CE494: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x801CE498: jal         0x801CBC94
    // 0x801CE49C: sh          $a3, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r7;
    func_801CBC94_63AAE4(rdram, ctx);
        goto after_5;
    // 0x801CE49C: sh          $a3, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r7;
    after_5:
    // 0x801CE4A0: lb          $t1, 0x9F($s0)
    ctx->r9 = MEM_B(ctx->r16, 0X9F);
    // 0x801CE4A4: lh          $a3, 0x24($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X24);
    // 0x801CE4A8: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x801CE4AC: andi        $t0, $t1, 0xFFFD
    ctx->r8 = ctx->r9 & 0XFFFD;
    // 0x801CE4B0: sb          $t0, 0x9F($s0)
    MEM_B(0X9F, ctx->r16) = ctx->r8;
    // 0x801CE4B4: lb          $v0, 0x9F($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X9F);
    // 0x801CE4B8: andi        $t2, $v0, 0x1
    ctx->r10 = ctx->r2 & 0X1;
    // 0x801CE4BC: beql        $t2, $zero, L_801CE504
    if (ctx->r10 == 0) {
        // 0x801CE4C0: lh          $t5, 0x0($s1)
        ctx->r13 = MEM_H(ctx->r17, 0X0);
            goto L_801CE504;
    }
    goto skip_2;
    // 0x801CE4C0: lh          $t5, 0x0($s1)
    ctx->r13 = MEM_H(ctx->r17, 0X0);
    skip_2:
    // 0x801CE4C4: lh          $t3, 0x0($s1)
    ctx->r11 = MEM_H(ctx->r17, 0X0);
    // 0x801CE4C8: andi        $t4, $t3, 0x80
    ctx->r12 = ctx->r11 & 0X80;
    // 0x801CE4CC: bnel        $t4, $zero, L_801CE4F8
    if (ctx->r12 != 0) {
        // 0x801CE4D0: swc1        $f2, 0x60($s0)
        MEM_W(0X60, ctx->r16) = ctx->f2.u32l;
            goto L_801CE4F8;
    }
    goto skip_3;
    // 0x801CE4D0: swc1        $f2, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->f2.u32l;
    skip_3:
    // 0x801CE4D4: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x801CE4D8: ori         $t9, $v0, 0x2
    ctx->r25 = ctx->r2 | 0X2;
    // 0x801CE4DC: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x801CE4E0: nop

    // 0x801CE4E4: bc1fl       L_801CE4F8
    if (!c1cs) {
        // 0x801CE4E8: swc1        $f2, 0x60($s0)
        MEM_W(0X60, ctx->r16) = ctx->f2.u32l;
            goto L_801CE4F8;
    }
    goto skip_4;
    // 0x801CE4E8: swc1        $f2, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->f2.u32l;
    skip_4:
    // 0x801CE4EC: sb          $t9, 0x9F($s0)
    MEM_B(0X9F, ctx->r16) = ctx->r25;
    // 0x801CE4F0: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x801CE4F4: swc1        $f2, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->f2.u32l;
L_801CE4F8:
    // 0x801CE4F8: b           L_801CE57C
    // 0x801CE4FC: lb          $v0, 0x9F($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X9F);
        goto L_801CE57C;
    // 0x801CE4FC: lb          $v0, 0x9F($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X9F);
    // 0x801CE500: lh          $t5, 0x0($s1)
    ctx->r13 = MEM_H(ctx->r17, 0X0);
L_801CE504:
    // 0x801CE504: andi        $t6, $t5, 0x80
    ctx->r14 = ctx->r13 & 0X80;
    // 0x801CE508: bnel        $t6, $zero, L_801CE550
    if (ctx->r14 != 0) {
        // 0x801CE50C: lwc1        $f4, 0x60($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0X60);
            goto L_801CE550;
    }
    goto skip_5;
    // 0x801CE50C: lwc1        $f4, 0x60($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X60);
    skip_5:
    // 0x801CE510: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x801CE514: nop

    // 0x801CE518: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x801CE51C: nop

    // 0x801CE520: bc1fl       L_801CE550
    if (!c1cs) {
        // 0x801CE524: lwc1        $f4, 0x60($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0X60);
            goto L_801CE550;
    }
    goto skip_6;
    // 0x801CE524: lwc1        $f4, 0x60($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X60);
    skip_6:
    // 0x801CE528: lwc1        $f18, 0x60($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X60);
    // 0x801CE52C: ori         $t7, $v0, 0x2
    ctx->r15 = ctx->r2 | 0X2;
    // 0x801CE530: c.lt.s      $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f18.fl < ctx->f12.fl;
    // 0x801CE534: nop

    // 0x801CE538: bc1fl       L_801CE580
    if (!c1cs) {
        // 0x801CE53C: lb          $t0, 0xC4($s0)
        ctx->r8 = MEM_B(ctx->r16, 0XC4);
            goto L_801CE580;
    }
    goto skip_7;
    // 0x801CE53C: lb          $t0, 0xC4($s0)
    ctx->r8 = MEM_B(ctx->r16, 0XC4);
    skip_7:
    // 0x801CE540: sb          $t7, 0x9F($s0)
    MEM_B(0X9F, ctx->r16) = ctx->r15;
    // 0x801CE544: b           L_801CE57C
    // 0x801CE548: lb          $v0, 0x9F($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X9F);
        goto L_801CE57C;
    // 0x801CE548: lb          $v0, 0x9F($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X9F);
    // 0x801CE54C: lwc1        $f4, 0x60($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X60);
L_801CE550:
    // 0x801CE550: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x801CE554: nop

    // 0x801CE558: bc1fl       L_801CE580
    if (!c1cs) {
        // 0x801CE55C: lb          $t0, 0xC4($s0)
        ctx->r8 = MEM_B(ctx->r16, 0XC4);
            goto L_801CE580;
    }
    goto skip_8;
    // 0x801CE55C: lb          $t0, 0xC4($s0)
    ctx->r8 = MEM_B(ctx->r16, 0XC4);
    skip_8:
    // 0x801CE560: lw          $t8, 0xB0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XB0);
    // 0x801CE564: ori         $t1, $v0, 0x1
    ctx->r9 = ctx->r2 | 0X1;
    // 0x801CE568: bgezl       $t8, L_801CE578
    if (SIGNED(ctx->r24) >= 0) {
        // 0x801CE56C: swc1        $f0, 0x60($s0)
        MEM_W(0X60, ctx->r16) = ctx->f0.u32l;
            goto L_801CE578;
    }
    goto skip_9;
    // 0x801CE56C: swc1        $f0, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->f0.u32l;
    skip_9:
    // 0x801CE570: sb          $t1, 0x9F($s0)
    MEM_B(0X9F, ctx->r16) = ctx->r9;
    // 0x801CE574: swc1        $f0, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->f0.u32l;
L_801CE578:
    // 0x801CE578: lb          $v0, 0x9F($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X9F);
L_801CE57C:
    // 0x801CE57C: lb          $t0, 0xC4($s0)
    ctx->r8 = MEM_B(ctx->r16, 0XC4);
L_801CE580:
    // 0x801CE580: lb          $t2, 0xC5($s0)
    ctx->r10 = MEM_B(ctx->r16, 0XC5);
    // 0x801CE584: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
    // 0x801CE588: sll         $t3, $a3, 16
    ctx->r11 = S32(ctx->r7 << 16);
    // 0x801CE58C: andi        $t9, $v0, 0x80
    ctx->r25 = ctx->r2 & 0X80;
    // 0x801CE590: sra         $t4, $t3, 16
    ctx->r12 = S32(SIGNED(ctx->r11) >> 16);
    // 0x801CE594: sb          $t0, 0xC6($s0)
    MEM_B(0XC6, ctx->r16) = ctx->r8;
    // 0x801CE598: beq         $t9, $zero, L_801CE5A8
    if (ctx->r25 == 0) {
        // 0x801CE59C: sb          $t2, 0xC7($s0)
        MEM_B(0XC7, ctx->r16) = ctx->r10;
            goto L_801CE5A8;
    }
    // 0x801CE59C: sb          $t2, 0xC7($s0)
    MEM_B(0XC7, ctx->r16) = ctx->r10;
    // 0x801CE5A0: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x801CE5A4: bne         $t5, $zero, L_801CE5B4
    if (ctx->r13 != 0) {
        // 0x801CE5A8: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_801CE5B4;
    }
L_801CE5A8:
    // 0x801CE5A8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x801CE5AC: sb          $v0, 0xC6($s0)
    MEM_B(0XC6, ctx->r16) = ctx->r2;
    // 0x801CE5B0: sb          $v0, 0xC7($s0)
    MEM_B(0XC7, ctx->r16) = ctx->r2;
L_801CE5B4:
    // 0x801CE5B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801CE5B8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x801CE5BC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x801CE5C0: jr          $ra
    // 0x801CE5C4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x801CE5C4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_801DFFA0_64EDF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DFFA0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801DFFA4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x801DFFA8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x801DFFAC: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801DFFB0: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801DFFB4: beq         $a1, $zero, L_801E001C
    if (ctx->r5 == 0) {
        // 0x801DFFB8: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_801E001C;
    }
    // 0x801DFFB8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801DFFBC: lwc1        $f4, 0x88($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X88);
L_801DFFC0:
    // 0x801DFFC0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801DFFC4: swc1        $f4, 0x5C($s1)
    MEM_W(0X5C, ctx->r17) = ctx->f4.u32l;
    // 0x801DFFC8: lwc1        $f6, 0x8C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x801DFFCC: swc1        $f6, 0x60($s1)
    MEM_W(0X60, ctx->r17) = ctx->f6.u32l;
    // 0x801DFFD0: lwc1        $f8, 0x90($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X90);
    // 0x801DFFD4: jal         0x801CD504
    // 0x801DFFD8: swc1        $f8, 0x64($s1)
    MEM_W(0X64, ctx->r17) = ctx->f8.u32l;
    func_801CD504_63C354(rdram, ctx);
        goto after_0;
    // 0x801DFFD8: swc1        $f8, 0x64($s1)
    MEM_W(0X64, ctx->r17) = ctx->f8.u32l;
    after_0:
    // 0x801DFFDC: beq         $v0, $zero, L_801E0008
    if (ctx->r2 == 0) {
        // 0x801DFFE0: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_801E0008;
    }
    // 0x801DFFE0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801DFFE4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801DFFE8: jal         0x801CDFE4
    // 0x801DFFEC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_801CDFE4_63CE34(rdram, ctx);
        goto after_1;
    // 0x801DFFEC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x801DFFF0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801DFFF4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x801DFFF8: jal         0x80036158
    // 0x801DFFFC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80036158_36D58(rdram, ctx);
        goto after_2;
    // 0x801DFFFC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x801E0000: b           L_801E0014
    // 0x801E0004: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
        goto L_801E0014;
    // 0x801E0004: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_801E0008:
    // 0x801E0008: jal         0x801CE068
    // 0x801E000C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_801CE068_63CEB8(rdram, ctx);
        goto after_3;
    // 0x801E000C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
    // 0x801E0010: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_801E0014:
    // 0x801E0014: bnel        $s0, $zero, L_801DFFC0
    if (ctx->r16 != 0) {
        // 0x801E0018: lwc1        $f4, 0x88($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0X88);
            goto L_801DFFC0;
    }
    goto skip_0;
    // 0x801E0018: lwc1        $f4, 0x88($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X88);
    skip_0:
L_801E001C:
    // 0x801E001C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801E0020: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x801E0024: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x801E0028: jr          $ra
    // 0x801E002C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x801E002C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_801D60F8_644F48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D60F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D60FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D6100: lw          $v0, 0xB4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XB4);
    // 0x801D6104: lw          $t6, 0xB0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XB0);
    // 0x801D6108: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D610C: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x801D6110: addu        $v1, $t6, $v0
    ctx->r3 = ADD32(ctx->r14, ctx->r2);
    // 0x801D6114: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x801D6118: sw          $v1, 0xB0($a0)
    MEM_W(0XB0, ctx->r4) = ctx->r3;
    // 0x801D611C: ldc1        $f8, -0xEA0($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0XEA0);
    // 0x801D6120: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x801D6124: addiu       $t3, $zero, 0x1E
    ctx->r11 = ADD32(0, 0X1E);
    // 0x801D6128: addiu       $t4, $zero, 0x50
    ctx->r12 = ADD32(0, 0X50);
    // 0x801D612C: addiu       $t5, $zero, 0x6E
    ctx->r13 = ADD32(0, 0X6E);
    // 0x801D6130: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x801D6134: trunc.w.d   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_D(ctx->f10.d);
    // 0x801D6138: mfc1        $v1, $f16
    ctx->r3 = (int32_t)ctx->f16.u32l;
    // 0x801D613C: nop

    // 0x801D6140: beql        $v1, $zero, L_801D6184
    if (ctx->r3 == 0) {
        // 0x801D6144: lb          $t1, 0x9F($a0)
        ctx->r9 = MEM_B(ctx->r4, 0X9F);
            goto L_801D6184;
    }
    goto skip_0;
    // 0x801D6144: lb          $t1, 0x9F($a0)
    ctx->r9 = MEM_B(ctx->r4, 0X9F);
    skip_0:
    // 0x801D6148: mtc1        $v1, $f18
    ctx->f18.u32l = ctx->r3;
    // 0x801D614C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x801D6150: bgez        $v1, L_801D6168
    if (SIGNED(ctx->r3) >= 0) {
        // 0x801D6154: cvt.d.w     $f4, $f18
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.d = CVT_D_W(ctx->f18.u32l);
            goto L_801D6168;
    }
    // 0x801D6154: cvt.d.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.d = CVT_D_W(ctx->f18.u32l);
    // 0x801D6158: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x801D615C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801D6160: nop

    // 0x801D6164: add.d       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f4.d = ctx->f4.d + ctx->f6.d;
L_801D6168:
    // 0x801D6168: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D616C: ldc1        $f8, -0xE98($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0XE98);
    // 0x801D6170: c.le.d      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.d <= ctx->f4.d;
    // 0x801D6174: nop

    // 0x801D6178: bc1f        L_801D61B8
    if (!c1cs) {
        // 0x801D617C: nop
    
            goto L_801D61B8;
    }
    // 0x801D617C: nop

    // 0x801D6180: lb          $t1, 0x9F($a0)
    ctx->r9 = MEM_B(ctx->r4, 0X9F);
L_801D6184:
    // 0x801D6184: sb          $t8, 0xA1($a0)
    MEM_B(0XA1, ctx->r4) = ctx->r24;
    // 0x801D6188: bgez        $v0, L_801D6198
    if (SIGNED(ctx->r2) >= 0) {
        // 0x801D618C: sra         $t9, $v0, 2
        ctx->r25 = S32(SIGNED(ctx->r2) >> 2);
            goto L_801D6198;
    }
    // 0x801D618C: sra         $t9, $v0, 2
    ctx->r25 = S32(SIGNED(ctx->r2) >> 2);
    // 0x801D6190: addiu       $at, $v0, 0x3
    ctx->r1 = ADD32(ctx->r2, 0X3);
    // 0x801D6194: sra         $t9, $at, 2
    ctx->r25 = S32(SIGNED(ctx->r1) >> 2);
L_801D6198:
    // 0x801D6198: negu        $t0, $t9
    ctx->r8 = SUB32(0, ctx->r25);
    // 0x801D619C: ori         $t2, $t1, 0x2
    ctx->r10 = ctx->r9 | 0X2;
    // 0x801D61A0: sw          $t0, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->r8;
    // 0x801D61A4: sb          $t2, 0x9F($a0)
    MEM_B(0X9F, ctx->r4) = ctx->r10;
    // 0x801D61A8: sh          $zero, 0xCC($a0)
    MEM_H(0XCC, ctx->r4) = 0;
    // 0x801D61AC: sh          $t3, 0xCE($a0)
    MEM_H(0XCE, ctx->r4) = ctx->r11;
    // 0x801D61B0: sh          $t4, 0xD0($a0)
    MEM_H(0XD0, ctx->r4) = ctx->r12;
    // 0x801D61B4: sh          $t5, 0xD2($a0)
    MEM_H(0XD2, ctx->r4) = ctx->r13;
L_801D61B8:
    // 0x801D61B8: jal         0x801D6934
    // 0x801D61BC: nop

    func_801D6934_645784(rdram, ctx);
        goto after_0;
    // 0x801D61BC: nop

    after_0:
    // 0x801D61C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D61C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D61C8: jr          $ra
    // 0x801D61CC: nop

    TRACE_RETURN()
    return;
    // 0x801D61CC: nop

;}
RECOMP_FUNC void func_801E0740_64F590(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E0740: beq         $a0, $zero, L_801E0754
    if (ctx->r4 == 0) {
        // 0x801E0744: nop
    
            goto L_801E0754;
    }
    // 0x801E0744: nop

    // 0x801E0748: lb          $t6, 0x78($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X78);
    // 0x801E074C: andi        $t7, $t6, 0xFFFE
    ctx->r15 = ctx->r14 & 0XFFFE;
    // 0x801E0750: sb          $t7, 0x78($a0)
    MEM_B(0X78, ctx->r4) = ctx->r15;
L_801E0754:
    // 0x801E0754: jr          $ra
    // 0x801E0758: nop

    TRACE_RETURN()
    return;
    // 0x801E0758: nop

;}
RECOMP_FUNC void func_801D1664_6404B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D1664: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801D1668: jr          $ra
    // 0x801D166C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801D166C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801D0B1C_63F96C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D0B1C: lw          $t6, 0x318($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X318);
    // 0x801D0B20: lw          $t7, 0xAC($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XAC);
    // 0x801D0B24: lw          $t9, 0x350($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X350);
    // 0x801D0B28: lw          $t0, 0x354($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X354);
    // 0x801D0B2C: subu        $t8, $t6, $t7
    ctx->r24 = SUB32(ctx->r14, ctx->r15);
    // 0x801D0B30: sw          $t8, 0x318($a1)
    MEM_W(0X318, ctx->r5) = ctx->r24;
    // 0x801D0B34: addu        $v0, $t9, $t0
    ctx->r2 = ADD32(ctx->r25, ctx->r8);
    // 0x801D0B38: sw          $v0, 0x350($a1)
    MEM_W(0X350, ctx->r5) = ctx->r2;
    // 0x801D0B3C: lb          $v1, 0xA2($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XA2);
    // 0x801D0B40: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x801D0B44: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x801D0B48: sll         $t1, $v1, 16
    ctx->r9 = S32(ctx->r3 << 16);
    // 0x801D0B4C: sra         $v1, $t1, 16
    ctx->r3 = S32(SIGNED(ctx->r9) >> 16);
    // 0x801D0B50: bnel        $v1, $zero, L_801D0B74
    if (ctx->r3 != 0) {
        // 0x801D0B54: sb          $v1, 0xA2($a0)
        MEM_B(0XA2, ctx->r4) = ctx->r3;
            goto L_801D0B74;
    }
    goto skip_0;
    // 0x801D0B54: sb          $v1, 0xA2($a0)
    MEM_B(0XA2, ctx->r4) = ctx->r3;
    skip_0:
    // 0x801D0B58: sb          $t3, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = ctx->r11;
    // 0x801D0B5C: lh          $t4, 0x0($a1)
    ctx->r12 = MEM_H(ctx->r5, 0X0);
    // 0x801D0B60: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801D0B64: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
    // 0x801D0B68: ori         $t5, $t4, 0x2
    ctx->r13 = ctx->r12 | 0X2;
    // 0x801D0B6C: sh          $t5, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r13;
    // 0x801D0B70: sb          $v1, 0xA2($a0)
    MEM_B(0XA2, ctx->r4) = ctx->r3;
L_801D0B74:
    // 0x801D0B74: srl         $t6, $v0, 20
    ctx->r14 = S32(U32(ctx->r2) >> 20);
    // 0x801D0B78: jr          $ra
    // 0x801D0B7C: sh          $t6, 0x358($a1)
    MEM_H(0X358, ctx->r5) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x801D0B7C: sh          $t6, 0x358($a1)
    MEM_H(0X358, ctx->r5) = ctx->r14;
;}
RECOMP_FUNC void func_801CDA5C_63C8AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CDA5C: lw          $v0, 0xEC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XEC);
    // 0x801CDA60: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801CDA64: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801CDA68: lw          $t6, 0x31C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X31C);
    // 0x801CDA6C: lwc1        $f10, 0x64($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X64);
    // 0x801CDA70: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x801CDA74: nop

    // 0x801CDA78: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801CDA7C: div.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801CDA80: jr          $ra
    // 0x801CDA84: sub.s       $f0, $f2, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f10.fl;
    TRACE_RETURN()
    return;
    // 0x801CDA84: sub.s       $f0, $f2, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f10.fl;
;}
RECOMP_FUNC void func_801E0514_64F364(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E0514: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801E0518: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x801E051C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801E0520: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801E0524: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801E0528: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x801E052C: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x801E0530: bne         $a0, $zero, L_801E0540
    if (ctx->r4 != 0) {
        // 0x801E0534: sw          $a3, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r7;
            goto L_801E0540;
    }
    // 0x801E0534: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x801E0538: b           L_801E06EC
    // 0x801E053C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801E06EC;
    // 0x801E053C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801E0540:
    // 0x801E0540: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E0544: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801E0548: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801E054C: jal         0x80035EEC
    // 0x801E0550: swc1        $f12, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f12.u32l;
    func_80035EEC_36AEC(rdram, ctx);
        goto after_0;
    // 0x801E0550: swc1        $f12, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x801E0554: lwc1        $f12, 0x34($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801E0558: beq         $v0, $zero, L_801E06EC
    if (ctx->r2 == 0) {
        // 0x801E055C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_801E06EC;
    }
    // 0x801E055C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x801E0560: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E0564: jal         0x801CDF74
    // 0x801E0568: swc1        $f12, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f12.u32l;
    func_801CDF74_63CDC4(rdram, ctx);
        goto after_1;
    // 0x801E0568: swc1        $f12, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f12.u32l;
    after_1:
    // 0x801E056C: bne         $v0, $zero, L_801E058C
    if (ctx->r2 != 0) {
        // 0x801E0570: lwc1        $f12, 0x34($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X34);
            goto L_801E058C;
    }
    // 0x801E0570: lwc1        $f12, 0x34($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801E0574: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E0578: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x801E057C: jal         0x80036158
    // 0x801E0580: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80036158_36D58(rdram, ctx);
        goto after_2;
    // 0x801E0580: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x801E0584: b           L_801E06EC
    // 0x801E0588: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801E06EC;
    // 0x801E0588: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801E058C:
    // 0x801E058C: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801E0590: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    // 0x801E0594: or          $t8, $v0, $a2
    ctx->r24 = ctx->r2 | ctx->r6;
    // 0x801E0598: swc1        $f4, 0x7C($s1)
    MEM_W(0X7C, ctx->r17) = ctx->f4.u32l;
    // 0x801E059C: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x801E05A0: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801E05A4: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x801E05A8: swc1        $f6, 0x80($s1)
    MEM_W(0X80, ctx->r17) = ctx->f6.u32l;
    // 0x801E05AC: lwc1        $f8, 0x54($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801E05B0: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x801E05B4: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x801E05B8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801E05BC: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x801E05C0: swc1        $f8, 0x84($s1)
    MEM_W(0X84, ctx->r17) = ctx->f8.u32l;
    // 0x801E05C4: div.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f4.d, ctx->f6.d);
    // 0x801E05C8: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x801E05CC: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x801E05D0: addiu       $t6, $t6, 0x40
    ctx->r14 = ADD32(ctx->r14, 0X40);
    // 0x801E05D4: swc1        $f10, 0x88($s1)
    MEM_W(0X88, ctx->r17) = ctx->f10.u32l;
    // 0x801E05D8: lwc1        $f16, 0x5C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801E05DC: addu        $t7, $a2, $t6
    ctx->r15 = ADD32(ctx->r6, ctx->r14);
    // 0x801E05E0: lui         $t1, 0x801F
    ctx->r9 = S32(0X801F << 16);
    // 0x801E05E4: swc1        $f16, 0x8C($s1)
    MEM_W(0X8C, ctx->r17) = ctx->f16.u32l;
    // 0x801E05E8: lwc1        $f18, 0x60($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801E05EC: addiu       $t1, $t1, -0x16C0
    ctx->r9 = ADD32(ctx->r9, -0X16C0);
    // 0x801E05F0: lui         $t0, 0x600
    ctx->r8 = S32(0X600 << 16);
    // 0x801E05F4: swc1        $f18, 0x90($s1)
    MEM_W(0X90, ctx->r17) = ctx->f18.u32l;
    // 0x801E05F8: sw          $t7, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r15;
    // 0x801E05FC: sw          $t9, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r25;
    // 0x801E0600: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x801E0604: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x801E0608: addiu       $a1, $v0, 0x8
    ctx->r5 = ADD32(ctx->r2, 0X8);
    // 0x801E060C: lui         $t2, 0xFB00
    ctx->r10 = S32(0XFB00 << 16);
    // 0x801E0610: sw          $t2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r10;
    // 0x801E0614: lbu         $t7, 0x43($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X43);
    // 0x801E0618: lbu         $t4, 0x3F($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X3F);
    // 0x801E061C: lbu         $t1, 0x47($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X47);
    // 0x801E0620: lbu         $t6, 0x4B($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X4B);
    // 0x801E0624: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x801E0628: sll         $t5, $t4, 24
    ctx->r13 = S32(ctx->r12 << 24);
    // 0x801E062C: or          $t9, $t5, $t8
    ctx->r25 = ctx->r13 | ctx->r24;
    // 0x801E0630: sll         $t2, $t1, 8
    ctx->r10 = S32(ctx->r9 << 8);
    // 0x801E0634: or          $t3, $t9, $t2
    ctx->r11 = ctx->r25 | ctx->r10;
    // 0x801E0638: or          $t7, $t3, $t6
    ctx->r15 = ctx->r11 | ctx->r14;
    // 0x801E063C: sw          $t7, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r15;
    // 0x801E0640: addiu       $v1, $a1, 0x8
    ctx->r3 = ADD32(ctx->r5, 0X8);
    // 0x801E0644: lui         $t5, 0xB800
    ctx->r13 = S32(0XB800 << 16);
    // 0x801E0648: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x801E064C: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x801E0650: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801E0654: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    // 0x801E0658: ldc1        $f16, -0xC58($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0XC58);
    // 0x801E065C: ori         $v0, $zero, 0x8000
    ctx->r2 = 0 | 0X8000;
    // 0x801E0660: addiu       $t8, $zero, 0x4AB
    ctx->r24 = ADD32(0, 0X4AB);
    // 0x801E0664: cvt.d.s     $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f10.d = CVT_D_S(ctx->f12.fl);
    // 0x801E0668: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x801E066C: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x801E0670: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x801E0674: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x801E0678: sh          $t8, 0x34($s0)
    MEM_H(0X34, ctx->r16) = ctx->r24;
    // 0x801E067C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E0680: cvt.s.d     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f0.fl = CVT_S_D(ctx->f18.d);
    // 0x801E0684: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x801E0688: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x801E068C: jal         0x80014218
    // 0x801E0690: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    func_80014218_14E18(rdram, ctx);
        goto after_3;
    // 0x801E0690: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    after_3:
    // 0x801E0694: lbu         $t0, 0x3B($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X3B);
    // 0x801E0698: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801E069C: addiu       $t1, $zero, 0x4AB
    ctx->r9 = ADD32(0, 0X4AB);
    // 0x801E06A0: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x801E06A4: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x801E06A8: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x801E06AC: addiu       $a1, $a1, -0x2110
    ctx->r5 = ADD32(ctx->r5, -0X2110);
    // 0x801E06B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E06B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801E06B8: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x801E06BC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801E06C0: jal         0x801CD7C0
    // 0x801E06C4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_801CD7C0_63C610(rdram, ctx);
        goto after_4;
    // 0x801E06C4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_4:
    // 0x801E06C8: lbu         $v0, 0x6A($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6A);
    // 0x801E06CC: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801E06D0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E06D4: sll         $t2, $v0, 2
    ctx->r10 = S32(ctx->r2 << 2);
    // 0x801E06D8: addu        $t9, $t9, $t2
    ctx->r25 = ADD32(ctx->r25, ctx->r10);
    // 0x801E06DC: lw          $t9, -0x20D0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X20D0);
    // 0x801E06E0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x801E06E4: jalr        $t9
    // 0x801E06E8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x801E06E8: nop

    after_5:
L_801E06EC:
    // 0x801E06EC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x801E06F0: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x801E06F4: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x801E06F8: jr          $ra
    // 0x801E06FC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x801E06FC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_801DAED8_649D28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DAED8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DAEDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DAEE0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801DAEE4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801DAEE8: lb          $t6, 0x74($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X74);
    // 0x801DAEEC: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x801DAEF0: bgezl       $t6, L_801DAF18
    if (SIGNED(ctx->r14) >= 0) {
        // 0x801DAEF4: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_801DAF18;
    }
    goto skip_0;
    // 0x801DAEF4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    skip_0:
    // 0x801DAEF8: sb          $zero, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = 0;
    // 0x801DAEFC: sb          $zero, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = 0;
    // 0x801DAF00: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DAF04: jal         0x800352EC
    // 0x801DAF08: addiu       $a0, $a0, -0x50A0
    ctx->r4 = ADD32(ctx->r4, -0X50A0);
    func_800352EC_35EEC(rdram, ctx);
        goto after_0;
    // 0x801DAF08: addiu       $a0, $a0, -0x50A0
    ctx->r4 = ADD32(ctx->r4, -0X50A0);
    after_0:
    // 0x801DAF0C: b           L_801DAF54
    // 0x801DAF10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801DAF54;
    // 0x801DAF10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DAF14: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
L_801DAF18:
    // 0x801DAF18: jal         0x801CD504
    // 0x801DAF1C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_801CD504_63C354(rdram, ctx);
        goto after_1;
    // 0x801DAF1C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_1:
    // 0x801DAF20: beq         $v0, $zero, L_801DAF38
    if (ctx->r2 == 0) {
        // 0x801DAF24: lw          $a1, 0x18($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X18);
            goto L_801DAF38;
    }
    // 0x801DAF24: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x801DAF28: jal         0x801D8BF0
    // 0x801DAF2C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_801D8BF0_647A40(rdram, ctx);
        goto after_2;
    // 0x801DAF2C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_2:
    // 0x801DAF30: b           L_801DAF54
    // 0x801DAF34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801DAF54;
    // 0x801DAF34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DAF38:
    // 0x801DAF38: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801DAF3C: jal         0x801CD634
    // 0x801DAF40: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_801CD634_63C484(rdram, ctx);
        goto after_3;
    // 0x801DAF40: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_3:
    // 0x801DAF44: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x801DAF48: jal         0x801CD780
    // 0x801DAF4C: lwc1        $f12, 0x64($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X64);
    func_801CD780_63C5D0(rdram, ctx);
        goto after_4;
    // 0x801DAF4C: lwc1        $f12, 0x64($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X64);
    after_4:
    // 0x801DAF50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DAF54:
    // 0x801DAF54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DAF58: jr          $ra
    // 0x801DAF5C: nop

    TRACE_RETURN()
    return;
    // 0x801DAF5C: nop

;}
RECOMP_FUNC void func_801D3024_641E74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D3024: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801D3028: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D302C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801D3030: lw          $v0, 0xA0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XA0);
    // 0x801D3034: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801D3038: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D303C: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x801D3040: lwc1        $f16, 0x64($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X64);
    // 0x801D3044: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D3048: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801D304C: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801D3050: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x801D3054: swc1        $f18, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f18.u32l;
    // 0x801D3058: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801D305C: jal         0x801CD96C
    // 0x801D3060: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_801CD96C_63C7BC(rdram, ctx);
        goto after_0;
    // 0x801D3060: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x801D3064: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D3068: ldc1        $f6, -0xFB8($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0XFB8);
    // 0x801D306C: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x801D3070: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x801D3074: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x801D3078: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801D307C: bc1fl       L_801D3098
    if (!c1cs) {
        // 0x801D3080: lw          $t6, 0xA4($a0)
        ctx->r14 = MEM_W(ctx->r4, 0XA4);
            goto L_801D3098;
    }
    goto skip_0;
    // 0x801D3080: lw          $t6, 0xA4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XA4);
    skip_0:
    // 0x801D3084: jal         0x801D3614
    // 0x801D3088: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_801D3614_642464(rdram, ctx);
        goto after_1;
    // 0x801D3088: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x801D308C: b           L_801D30DC
    // 0x801D3090: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801D30DC;
    // 0x801D3090: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D3094: lw          $t6, 0xA4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XA4);
L_801D3098:
    // 0x801D3098: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801D309C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x801D30A0: bgez        $v0, L_801D30B0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x801D30A4: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_801D30B0;
    }
    // 0x801D30A4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x801D30A8: b           L_801D30B0
    // 0x801D30AC: negu        $v1, $v0
    ctx->r3 = SUB32(0, ctx->r2);
        goto L_801D30B0;
    // 0x801D30AC: negu        $v1, $v0
    ctx->r3 = SUB32(0, ctx->r2);
L_801D30B0:
    // 0x801D30B0: mtc1        $v1, $f8
    ctx->f8.u32l = ctx->r3;
    // 0x801D30B4: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D30B8: ldc1        $f10, -0xFB0($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0XFB0);
    // 0x801D30BC: cvt.d.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.d = CVT_D_W(ctx->f8.u32l);
    // 0x801D30C0: c.le.d      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.d <= ctx->f16.d;
    // 0x801D30C4: nop

    // 0x801D30C8: bc1fl       L_801D30D8
    if (!c1cs) {
        // 0x801D30CC: sw          $v0, 0xA0($a0)
        MEM_W(0XA0, ctx->r4) = ctx->r2;
            goto L_801D30D8;
    }
    goto skip_1;
    // 0x801D30CC: sw          $v0, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->r2;
    skip_1:
    // 0x801D30D0: sb          $t7, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = ctx->r15;
    // 0x801D30D4: sw          $v0, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->r2;
L_801D30D8:
    // 0x801D30D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801D30DC:
    // 0x801D30DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801D30E0: jr          $ra
    // 0x801D30E4: nop

    TRACE_RETURN()
    return;
    // 0x801D30E4: nop

;}
RECOMP_FUNC void func_801D9B70_6489C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D9B70: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801D9B74: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x801D9B78: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801D9B7C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x801D9B80: addiu       $t6, $t6, 0x1590
    ctx->r14 = ADD32(ctx->r14, 0X1590);
    // 0x801D9B84: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801D9B88: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801D9B8C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D9B90: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
    // 0x801D9B94: addiu       $t9, $t9, -0x1BE8
    ctx->r25 = ADD32(ctx->r25, -0X1BE8);
    // 0x801D9B98: sw          $t7, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r15;
    // 0x801D9B9C: sw          $t9, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r25;
    // 0x801D9BA0: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x801D9BA4: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x801D9BA8: lui         $a3, 0x425C
    ctx->r7 = S32(0X425C << 16);
    // 0x801D9BAC: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801D9BB0: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801D9BB4: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801D9BB8: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801D9BBC: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x801D9BC0: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801D9BC4: jal         0x801E8378
    // 0x801D9BC8: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    func_801E8378_6571C8(rdram, ctx);
        goto after_0;
    // 0x801D9BC8: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x801D9BCC: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801D9BD0: jal         0x800352EC
    // 0x801D9BD4: addiu       $a0, $a0, -0x6418
    ctx->r4 = ADD32(ctx->r4, -0X6418);
    func_800352EC_35EEC(rdram, ctx);
        goto after_1;
    // 0x801D9BD4: addiu       $a0, $a0, -0x6418
    ctx->r4 = ADD32(ctx->r4, -0X6418);
    after_1:
    // 0x801D9BD8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x801D9BDC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x801D9BE0: jr          $ra
    // 0x801D9BE4: nop

    TRACE_RETURN()
    return;
    // 0x801D9BE4: nop

;}
RECOMP_FUNC void func_801D0E54_63FCA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D0E54: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801D0E58: lw          $v0, 0xB4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XB4);
    // 0x801D0E5C: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D0E60: ldc1        $f6, -0x1088($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X1088);
    // 0x801D0E64: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x801D0E68: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D0E6C: cvt.d.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.d = CVT_D_W(ctx->f4.u32l);
    // 0x801D0E70: c.le.d      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.d <= ctx->f6.d;
    // 0x801D0E74: nop

    // 0x801D0E78: bc1fl       L_801D0E9C
    if (!c1cs) {
        // 0x801D0E7C: lb          $t7, 0xA2($a0)
        ctx->r15 = MEM_B(ctx->r4, 0XA2);
            goto L_801D0E9C;
    }
    goto skip_0;
    // 0x801D0E7C: lb          $t7, 0xA2($a0)
    ctx->r15 = MEM_B(ctx->r4, 0XA2);
    skip_0:
    // 0x801D0E80: ldc1        $f8, -0x1080($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X1080);
    // 0x801D0E84: add.d       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f0.d + ctx->f8.d;
    // 0x801D0E88: trunc.w.d   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_D(ctx->f10.d);
    // 0x801D0E8C: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x801D0E90: jr          $ra
    // 0x801D0E94: sw          $v0, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x801D0E94: sw          $v0, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->r2;
    // 0x801D0E98: lb          $t7, 0xA2($a0)
    ctx->r15 = MEM_B(ctx->r4, 0XA2);
L_801D0E9C:
    // 0x801D0E9C: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x801D0EA0: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x801D0EA4: sb          $t8, 0xA2($a0)
    MEM_B(0XA2, ctx->r4) = ctx->r24;
    // 0x801D0EA8: lb          $t9, 0xA2($a0)
    ctx->r25 = MEM_B(ctx->r4, 0XA2);
    // 0x801D0EAC: bne         $t9, $zero, L_801D0EB8
    if (ctx->r25 != 0) {
        // 0x801D0EB0: nop
    
            goto L_801D0EB8;
    }
    // 0x801D0EB0: nop

    // 0x801D0EB4: sb          $t0, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = ctx->r8;
L_801D0EB8:
    // 0x801D0EB8: jr          $ra
    // 0x801D0EBC: nop

    TRACE_RETURN()
    return;
    // 0x801D0EBC: nop

;}
RECOMP_FUNC void func_801D3198_641FE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D3198: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D319C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D31A0: lh          $v0, 0xA8($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XA8);
    // 0x801D31A4: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x801D31A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D31AC: beq         $v0, $zero, L_801D31C4
    if (ctx->r2 == 0) {
        // 0x801D31B0: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_801D31C4;
    }
    // 0x801D31B0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x801D31B4: sll         $t6, $v0, 16
    ctx->r14 = S32(ctx->r2 << 16);
    // 0x801D31B8: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x801D31BC: bne         $t7, $zero, L_801D3218
    if (ctx->r15 != 0) {
        // 0x801D31C0: sh          $t7, 0xA8($a0)
        MEM_H(0XA8, ctx->r4) = ctx->r15;
            goto L_801D3218;
    }
    // 0x801D31C0: sh          $t7, 0xA8($a0)
    MEM_H(0XA8, ctx->r4) = ctx->r15;
L_801D31C4:
    // 0x801D31C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801D31C8: jal         0x801CD96C
    // 0x801D31CC: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    func_801CD96C_63C7BC(rdram, ctx);
        goto after_0;
    // 0x801D31CC: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_0:
    // 0x801D31D0: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D31D4: ldc1        $f6, -0xFA0($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0XFA0);
    // 0x801D31D8: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x801D31DC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801D31E0: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x801D31E4: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x801D31E8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801D31EC: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x801D31F0: bc1fl       L_801D321C
    if (!c1cs) {
        // 0x801D31F4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801D321C;
    }
    goto skip_0;
    // 0x801D31F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801D31F8: sb          $t8, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = ctx->r24;
    // 0x801D31FC: lwc1        $f8, 0x28($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X28);
    // 0x801D3200: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x801D3204: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801D3208: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801D320C: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x801D3210: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x801D3214: swc1        $f4, 0x28($a2)
    MEM_W(0X28, ctx->r6) = ctx->f4.u32l;
L_801D3218:
    // 0x801D3218: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801D321C:
    // 0x801D321C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D3220: jr          $ra
    // 0x801D3224: nop

    TRACE_RETURN()
    return;
    // 0x801D3224: nop

;}
RECOMP_FUNC void func_801D0EC0_63FD10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D0EC0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801D0EC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D0EC8: lw          $v1, 0xB4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XB4);
    // 0x801D0ECC: lui         $at, 0x4079
    ctx->r1 = S32(0X4079 << 16);
    // 0x801D0ED0: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801D0ED4: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x801D0ED8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801D0EDC: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801D0EE0: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x801D0EE4: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x801D0EE8: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x801D0EEC: trunc.w.d   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_D(ctx->f10.d);
    // 0x801D0EF0: mfc1        $v1, $f16
    ctx->r3 = (int32_t)ctx->f16.u32l;
    // 0x801D0EF4: nop

    // 0x801D0EF8: slti        $at, $v1, 0x61A8
    ctx->r1 = SIGNED(ctx->r3) < 0X61A8 ? 1 : 0;
    // 0x801D0EFC: bnel        $at, $zero, L_801D0F5C
    if (ctx->r1 != 0) {
        // 0x801D0F00: sw          $v1, 0xB4($a2)
        MEM_W(0XB4, ctx->r6) = ctx->r3;
            goto L_801D0F5C;
    }
    goto skip_0;
    // 0x801D0F00: sw          $v1, 0xB4($a2)
    MEM_W(0XB4, ctx->r6) = ctx->r3;
    skip_0:
    // 0x801D0F04: sb          $zero, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = 0;
    // 0x801D0F08: sb          $zero, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = 0;
    // 0x801D0F0C: lh          $t7, 0x0($a1)
    ctx->r15 = MEM_H(ctx->r5, 0X0);
    // 0x801D0F10: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x801D0F14: ori         $t8, $t7, 0x200
    ctx->r24 = ctx->r15 | 0X200;
    // 0x801D0F18: sh          $t8, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r24;
    // 0x801D0F1C: sb          $t9, 0xA0($a0)
    MEM_B(0XA0, ctx->r4) = ctx->r25;
    // 0x801D0F20: lh          $t0, 0x0($a1)
    ctx->r8 = MEM_H(ctx->r5, 0X0);
    // 0x801D0F24: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801D0F28: andi        $t1, $t0, 0xFFFD
    ctx->r9 = ctx->r8 & 0XFFFD;
    // 0x801D0F2C: sh          $t1, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r9;
    // 0x801D0F30: lw          $a1, 0x64($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X64);
    // 0x801D0F34: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x801D0F38: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x801D0F3C: jal         0x801CCD10
    // 0x801D0F40: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_801CCD10_63BB60(rdram, ctx);
        goto after_0;
    // 0x801D0F40: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x801D0F44: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x801D0F48: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x801D0F4C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x801D0F50: sw          $v0, 0x318($a3)
    MEM_W(0X318, ctx->r7) = ctx->r2;
    // 0x801D0F54: sw          $zero, 0xAC($a2)
    MEM_W(0XAC, ctx->r6) = 0;
    // 0x801D0F58: sw          $v1, 0xB4($a2)
    MEM_W(0XB4, ctx->r6) = ctx->r3;
L_801D0F5C:
    // 0x801D0F5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D0F60: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801D0F64: jr          $ra
    // 0x801D0F68: nop

    TRACE_RETURN()
    return;
    // 0x801D0F68: nop

;}
RECOMP_FUNC void func_801CD634_63C484(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CD634: lwc1        $f4, 0x5C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X5C);
    // 0x801CD638: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CD63C: ldc1        $f14, -0x11E8($at)
    CHECK_FR(ctx, 14);
    ctx->f14.u64 = LD(ctx->r1, -0X11E8);
    // 0x801CD640: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801CD644: lwc1        $f10, 0x60($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X60);
    // 0x801CD648: mul.d       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f14.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f14.d);
    // 0x801CD64C: lwc1        $f4, 0x64($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X64);
    // 0x801CD650: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x801CD654: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x801CD658: mul.d       $f18, $f16, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f14.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f14.d);
    // 0x801CD65C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801CD660: cvt.s.d     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f0.fl = CVT_S_D(ctx->f8.d);
    // 0x801CD664: mul.d       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f14.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f14.d);
    // 0x801CD668: cvt.s.d     $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f2.fl = CVT_S_D(ctx->f18.d);
    // 0x801CD66C: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    // 0x801CD670: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
L_801CD674:
    // 0x801CD674: swc1        $f2, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f2.u32l;
    // 0x801CD678: swc1        $f12, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f12.u32l;
    // 0x801CD67C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x801CD680: bnel        $v0, $zero, L_801CD674
    if (ctx->r2 != 0) {
        // 0x801CD684: swc1        $f0, 0x8($v0)
        MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
            goto L_801CD674;
    }
    goto skip_0;
    // 0x801CD684: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    skip_0:
    // 0x801CD688: jr          $ra
    // 0x801CD68C: nop

    TRACE_RETURN()
    return;
    // 0x801CD68C: nop

;}
RECOMP_FUNC void func_801CB95C_63A7AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CB95C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801CB960: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801CB964: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801CB968: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801CB96C: lw          $s0, 0xEC($a0)
    ctx->r16 = MEM_W(ctx->r4, 0XEC);
    // 0x801CB970: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x801CB974: lh          $t6, 0x4($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X4);
    // 0x801CB978: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x801CB97C: sh          $t7, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r15;
    // 0x801CB980: jal         0x80036928
    // 0x801CB984: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_80036928_37528(rdram, ctx);
        goto after_0;
    // 0x801CB984: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x801CB988: bne         $v0, $zero, L_801CB9DC
    if (ctx->r2 != 0) {
        // 0x801CB98C: lui         $a0, 0x801D
        ctx->r4 = S32(0X801D << 16);
            goto L_801CB9DC;
    }
    // 0x801CB98C: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CB990: jal         0x8003521C
    // 0x801CB994: addiu       $a0, $a0, -0x460C
    ctx->r4 = ADD32(ctx->r4, -0X460C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x801CB994: addiu       $a0, $a0, -0x460C
    ctx->r4 = ADD32(ctx->r4, -0X460C);
    after_1:
    // 0x801CB998: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x801CB99C: sh          $t8, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r24;
    // 0x801CB9A0: jal         0x80034F44
    // 0x801CB9A4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_80034F44_35B44(rdram, ctx);
        goto after_2;
    // 0x801CB9A4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x801CB9A8: lhu         $v0, 0xE8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XE8);
    // 0x801CB9AC: addiu       $v0, $v0, 0xF
    ctx->r2 = ADD32(ctx->r2, 0XF);
    // 0x801CB9B0: andi        $t9, $v0, 0xFFFF
    ctx->r25 = ctx->r2 & 0XFFFF;
    // 0x801CB9B4: sra         $t0, $t9, 4
    ctx->r8 = S32(SIGNED(ctx->r25) >> 4);
    // 0x801CB9B8: andi        $v1, $t0, 0xFFFF
    ctx->r3 = ctx->r8 & 0XFFFF;
    // 0x801CB9BC: slti        $at, $v1, 0x2BD
    ctx->r1 = SIGNED(ctx->r3) < 0X2BD ? 1 : 0;
    // 0x801CB9C0: bne         $at, $zero, L_801CB9CC
    if (ctx->r1 != 0) {
        // 0x801CB9C4: lui         $v0, 0x8016
        ctx->r2 = S32(0X8016 << 16);
            goto L_801CB9CC;
    }
    // 0x801CB9C4: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x801CB9C8: addiu       $v1, $zero, 0x2BC
    ctx->r3 = ADD32(0, 0X2BC);
L_801CB9CC:
    // 0x801CB9CC: addiu       $v0, $v0, -0x39F8
    ctx->r2 = ADD32(ctx->r2, -0X39F8);
    // 0x801CB9D0: sw          $v1, 0x29C($v0)
    MEM_W(0X29C, ctx->r2) = ctx->r3;
    // 0x801CB9D4: lhu         $t2, 0xEA($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0XEA);
    // 0x801CB9D8: sw          $t2, 0x2A0($v0)
    MEM_W(0X2A0, ctx->r2) = ctx->r10;
L_801CB9DC:
    // 0x801CB9DC: sh          $zero, 0xE2($s0)
    MEM_H(0XE2, ctx->r16) = 0;
    // 0x801CB9E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801CB9E4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801CB9E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801CB9EC: jr          $ra
    // 0x801CB9F0: nop

    TRACE_RETURN()
    return;
    // 0x801CB9F0: nop

;}
RECOMP_FUNC void func_801D1790_6405E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D1790: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801D1794: sb          $t6, 0xA0($a0)
    MEM_B(0XA0, ctx->r4) = ctx->r14;
    // 0x801D1798: lh          $t7, 0x0($a1)
    ctx->r15 = MEM_H(ctx->r5, 0X0);
    // 0x801D179C: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x801D17A0: ori         $t8, $t7, 0x400
    ctx->r24 = ctx->r15 | 0X400;
    // 0x801D17A4: sh          $t8, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r24;
    // 0x801D17A8: lb          $t0, 0x9F($a0)
    ctx->r8 = MEM_B(ctx->r4, 0X9F);
    // 0x801D17AC: sb          $t9, 0xC5($a0)
    MEM_B(0XC5, ctx->r4) = ctx->r25;
    // 0x801D17B0: sw          $zero, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = 0;
    // 0x801D17B4: andi        $t1, $t0, 0xFFFB
    ctx->r9 = ctx->r8 & 0XFFFB;
    // 0x801D17B8: jr          $ra
    // 0x801D17BC: sb          $t1, 0x9F($a0)
    MEM_B(0X9F, ctx->r4) = ctx->r9;
    TRACE_RETURN()
    return;
    // 0x801D17BC: sb          $t1, 0x9F($a0)
    MEM_B(0X9F, ctx->r4) = ctx->r9;
;}
RECOMP_FUNC void func_801DE840_64D690(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DE840: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801DE844: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x801DE848: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801DE84C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801DE850: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x801DE854: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x801DE858: lbu         $t6, 0x9C($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X9C);
    // 0x801DE85C: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801DE860: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x801DE864: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x801DE868: lw          $t9, -0x2790($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X2790);
    // 0x801DE86C: jalr        $t9
    // 0x801DE870: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x801DE870: nop

    after_0:
    // 0x801DE874: bne         $v0, $zero, L_801DE88C
    if (ctx->r2 != 0) {
        // 0x801DE878: nop
    
            goto L_801DE88C;
    }
    // 0x801DE878: nop

    // 0x801DE87C: jal         0x801CD504
    // 0x801DE880: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801CD504_63C354(rdram, ctx);
        goto after_1;
    // 0x801DE880: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x801DE884: beq         $v0, $zero, L_801DE89C
    if (ctx->r2 == 0) {
        // 0x801DE888: nop
    
            goto L_801DE89C;
    }
    // 0x801DE888: nop

L_801DE88C:
    // 0x801DE88C: jal         0x801DBEB0
    // 0x801DE890: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801DBEB0_64AD00(rdram, ctx);
        goto after_2;
    // 0x801DE890: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x801DE894: b           L_801DE93C
    // 0x801DE898: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801DE93C;
    // 0x801DE898: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801DE89C:
    // 0x801DE89C: jal         0x801CD634
    // 0x801DE8A0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801CD634_63C484(rdram, ctx);
        goto after_3;
    // 0x801DE8A0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x801DE8A4: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
    // 0x801DE8A8: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801DE8AC: ldc1        $f4, -0xCB8($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0XCB8);
    // 0x801DE8B0: lwc1        $f6, 0x20($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X20);
    // 0x801DE8B4: lw          $s0, 0x0($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X0);
    // 0x801DE8B8: lw          $v1, 0xEC($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XEC);
    // 0x801DE8BC: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801DE8C0: lwc1        $f16, 0xC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801DE8C4: mul.d       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f4.d, ctx->f8.d);
    // 0x801DE8C8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DE8CC: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801DE8D0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801DE8D4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801DE8D8: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x801DE8DC: add.d       $f6, $f18, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f10.d); 
    ctx->f6.d = ctx->f18.d + ctx->f10.d;
    // 0x801DE8E0: cvt.s.d     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f4.fl = CVT_S_D(ctx->f6.d);
    // 0x801DE8E4: swc1        $f4, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f4.u32l;
    // 0x801DE8E8: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    // 0x801DE8EC: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x801DE8F0: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x801DE8F4: jal         0x8001D394
    // 0x801DE8F8: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    func_8001D394_1DF94(rdram, ctx);
        goto after_4;
    // 0x801DE8F8: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x801DE8FC: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x801DE900: addiu       $s1, $sp, 0x2C
    ctx->r17 = ADD32(ctx->r29, 0X2C);
    // 0x801DE904: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x801DE908: lwc1        $f16, 0x36C($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X36C);
    // 0x801DE90C: lw          $a2, 0x364($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X364);
    // 0x801DE910: lw          $a3, 0x368($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X368);
    // 0x801DE914: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DE918: jal         0x8001D14C
    // 0x801DE91C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_8001D14C_1DD4C(rdram, ctx);
        goto after_5;
    // 0x801DE91C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_5:
    // 0x801DE920: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x801DE924: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x801DE928: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801DE92C: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
    // 0x801DE930: jal         0x8001DB04
    // 0x801DE934: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8001DB04_1E704(rdram, ctx);
        goto after_6;
    // 0x801DE934: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_6:
    // 0x801DE938: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801DE93C:
    // 0x801DE93C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x801DE940: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x801DE944: jr          $ra
    // 0x801DE948: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x801DE948: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_801D8808_647658(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D8808: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801D880C: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801D8810: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x801D8814: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x801D8818: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x801D881C: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x801D8820: lw          $a0, 0xEC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XEC);
    // 0x801D8824: jal         0x801D84D4
    // 0x801D8828: sw          $a0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r4;
    func_801D84D4_647324(rdram, ctx);
        goto after_0;
    // 0x801D8828: sw          $a0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r4;
    after_0:
    // 0x801D882C: beq         $v0, $zero, L_801D883C
    if (ctx->r2 == 0) {
        // 0x801D8830: lbu         $t7, 0x57($sp)
        ctx->r15 = MEM_BU(ctx->r29, 0X57);
            goto L_801D883C;
    }
    // 0x801D8830: lbu         $t7, 0x57($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X57);
    // 0x801D8834: b           L_801D892C
    // 0x801D8838: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801D892C;
    // 0x801D8838: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D883C:
    // 0x801D883C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x801D8840: lui         $a2, 0x801F
    ctx->r6 = S32(0X801F << 16);
    // 0x801D8844: addu        $a2, $a2, $t8
    ctx->r6 = ADD32(ctx->r6, ctx->r24);
    // 0x801D8848: lw          $a2, -0x6160($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X6160);
    // 0x801D884C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801D8850: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x801D8854: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
    // 0x801D8858: lui         $at, 0x4054
    ctx->r1 = S32(0X4054 << 16);
    // 0x801D885C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801D8860: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801D8864: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801D8868: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D886C: div.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = DIV_D(ctx->f6.d, ctx->f8.d);
    // 0x801D8870: ldc1        $f4, -0xDD8($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0XDD8);
    // 0x801D8874: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x801D8878: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801D887C: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x801D8880: lw          $a0, 0xD0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0XD0);
    // 0x801D8884: lui         $a3, 0x801F
    ctx->r7 = S32(0X801F << 16);
    // 0x801D8888: ori         $t9, $zero, 0x8000
    ctx->r25 = 0 | 0X8000;
    // 0x801D888C: ori         $t0, $zero, 0x8000
    ctx->r8 = 0 | 0X8000;
    // 0x801D8890: ori         $t1, $zero, 0x8000
    ctx->r9 = 0 | 0X8000;
    // 0x801D8894: addiu       $t2, $zero, 0x4B3
    ctx->r10 = ADD32(0, 0X4B3);
    // 0x801D8898: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
    // 0x801D889C: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x801D88A0: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x801D88A4: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x801D88A8: addiu       $a3, $a3, -0x18A0
    ctx->r7 = ADD32(ctx->r7, -0X18A0);
    // 0x801D88AC: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x801D88B0: addiu       $a1, $a1, -0x7AF0
    ctx->r5 = ADD32(ctx->r5, -0X7AF0);
    // 0x801D88B4: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    // 0x801D88B8: swc1        $f2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f2.u32l;
    // 0x801D88BC: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    // 0x801D88C0: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801D88C4: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801D88C8: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x801D88CC: cvt.s.d     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f0.fl = CVT_S_D(ctx->f6.d);
    // 0x801D88D0: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801D88D4: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x801D88D8: jal         0x800358E8
    // 0x801D88DC: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    func_800358E8_364E8(rdram, ctx);
        goto after_1;
    // 0x801D88DC: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x801D88E0: beq         $v0, $zero, L_801D892C
    if (ctx->r2 == 0) {
        // 0x801D88E4: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_801D892C;
    }
    // 0x801D88E4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801D88E8: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x801D88EC: sw          $t3, 0xEC($a0)
    MEM_W(0XEC, ctx->r4) = ctx->r11;
    // 0x801D88F0: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801D88F4: swc1        $f8, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f8.u32l;
    // 0x801D88F8: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801D88FC: swc1        $f10, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->f10.u32l;
    // 0x801D8900: lwc1        $f16, 0x70($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X70);
    // 0x801D8904: swc1        $f16, 0xA8($a0)
    MEM_W(0XA8, ctx->r4) = ctx->f16.u32l;
    // 0x801D8908: lwc1        $f18, 0x5C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801D890C: swc1        $f18, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f18.u32l;
    // 0x801D8910: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801D8914: swc1        $f4, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f4.u32l;
    // 0x801D8918: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801D891C: swc1        $f6, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f6.u32l;
    // 0x801D8920: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x801D8924: jal         0x801D84E8
    // 0x801D8928: swc1        $f8, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->f8.u32l;
    func_801D84E8_647338(rdram, ctx);
        goto after_2;
    // 0x801D8928: swc1        $f8, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->f8.u32l;
    after_2:
L_801D892C:
    // 0x801D892C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801D8930: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x801D8934: jr          $ra
    // 0x801D8938: nop

    TRACE_RETURN()
    return;
    // 0x801D8938: nop

;}
RECOMP_FUNC void func_801D83F0_647240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D83F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D83F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801D83F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D83FC: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801D8400: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801D8404: jal         0x8003521C
    // 0x801D8408: addiu       $a0, $a0, -0x7BE4
    ctx->r4 = ADD32(ctx->r4, -0X7BE4);
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x801D8408: addiu       $a0, $a0, -0x7BE4
    ctx->r4 = ADD32(ctx->r4, -0X7BE4);
    after_0:
    // 0x801D840C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D8410: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D8414: jr          $ra
    // 0x801D8418: nop

    TRACE_RETURN()
    return;
    // 0x801D8418: nop

;}
RECOMP_FUNC void func_801D2480_6412D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D2480: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D2484: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D2488: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801D248C: jal         0x801CD504
    // 0x801D2490: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801CD504_63C354(rdram, ctx);
        goto after_0;
    // 0x801D2490: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801D2494: beq         $v0, $zero, L_801D24AC
    if (ctx->r2 == 0) {
        // 0x801D2498: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_801D24AC;
    }
    // 0x801D2498: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801D249C: jal         0x801D2078
    // 0x801D24A0: nop

    func_801D2078_640EC8(rdram, ctx);
        goto after_1;
    // 0x801D24A0: nop

    after_1:
    // 0x801D24A4: b           L_801D24D0
    // 0x801D24A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801D24D0;
    // 0x801D24A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801D24AC:
    // 0x801D24AC: lbu         $t6, 0x9C($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X9C);
    // 0x801D24B0: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801D24B4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x801D24B8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x801D24BC: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x801D24C0: lw          $t9, -0x7580($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X7580);
    // 0x801D24C4: jalr        $t9
    // 0x801D24C8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x801D24C8: nop

    after_2:
    // 0x801D24CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801D24D0:
    // 0x801D24D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D24D4: jr          $ra
    // 0x801D24D8: nop

    TRACE_RETURN()
    return;
    // 0x801D24D8: nop

;}
RECOMP_FUNC void func_801CCDD0_63BC20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CCDD0: lw          $t6, 0x31C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X31C);
    // 0x801CCDD4: lw          $t7, 0x318($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X318);
    // 0x801CCDD8: sll         $t8, $a1, 5
    ctx->r24 = S32(ctx->r5 << 5);
    // 0x801CCDDC: subu        $t8, $t8, $a1
    ctx->r24 = SUB32(ctx->r24, ctx->r5);
    // 0x801CCDE0: lui         $at, 0xFFCF
    ctx->r1 = S32(0XFFCF << 16);
    // 0x801CCDE4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x801CCDE8: ori         $at, $at, 0x7A20
    ctx->r1 = ctx->r1 | 0X7A20;
    // 0x801CCDEC: addu        $t8, $t8, $a1
    ctx->r24 = ADD32(ctx->r24, ctx->r5);
    // 0x801CCDF0: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x801CCDF4: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x801CCDF8: sll         $t8, $t8, 6
    ctx->r24 = S32(ctx->r24 << 6);
    // 0x801CCDFC: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x801CCE00: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x801CCE04: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801CCE08: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801CCE0C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801CCE10: jr          $ra
    // 0x801CCE14: div.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    TRACE_RETURN()
    return;
    // 0x801CCE14: div.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
;}
RECOMP_FUNC void func_801CBA40_63A890(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CBA40: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801CBA44: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801CBA48: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x801CBA4C: lwc1        $f0, 0x320($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X320);
    // 0x801CBA50: lui         $at, 0x4049
    ctx->r1 = S32(0X4049 << 16);
    // 0x801CBA54: mtc1        $at, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r1;
    // 0x801CBA58: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801CBA5C: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x801CBA60: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x801CBA64: div.d       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f2.d); 
    ctx->f6.d = DIV_D(ctx->f4.d, ctx->f2.d);
    // 0x801CBA68: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x801CBA6C: lui         $t2, 0x4
    ctx->r10 = S32(0X4 << 16);
    // 0x801CBA70: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801CBA74: addu        $t2, $t2, $t6
    ctx->r10 = ADD32(ctx->r10, ctx->r14);
    // 0x801CBA78: lbu         $t2, -0x520B($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X520B);
    // 0x801CBA7C: lui         $v0, 0x801F
    ctx->r2 = S32(0X801F << 16);
    // 0x801CBA80: lui         $t0, 0x801F
    ctx->r8 = S32(0X801F << 16);
    // 0x801CBA84: sll         $v1, $t2, 2
    ctx->r3 = S32(ctx->r10 << 2);
    // 0x801CBA88: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x801CBA8C: addu        $t0, $t0, $v1
    ctx->r8 = ADD32(ctx->r8, ctx->r3);
    // 0x801CBA90: lw          $v0, -0x2038($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2038);
    // 0x801CBA94: lw          $t0, -0x1EE4($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1EE4);
    // 0x801CBA98: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CBA9C: lwc1        $f12, -0x1250($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X1250);
    // 0x801CBAA0: sw          $v0, 0x328($a0)
    MEM_W(0X328, ctx->r4) = ctx->r2;
    // 0x801CBAA4: sw          $t0, 0x32C($a0)
    MEM_W(0X32C, ctx->r4) = ctx->r8;
    // 0x801CBAA8: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x801CBAAC: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801CBAB0: lui         $a2, 0x801F
    ctx->r6 = S32(0X801F << 16);
    // 0x801CBAB4: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x801CBAB8: addiu       $a2, $a2, -0x1BE8
    ctx->r6 = ADD32(ctx->r6, -0X1BE8);
    // 0x801CBABC: addiu       $a0, $a0, 0x1CD0
    ctx->r4 = ADD32(ctx->r4, 0X1CD0);
    // 0x801CBAC0: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x801CBAC4: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x801CBAC8: nop

    // 0x801CBACC: cvt.w.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_D(ctx->f6.d);
    // 0x801CBAD0: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x801CBAD4: nop

    // 0x801CBAD8: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x801CBADC: beql        $t1, $zero, L_801CBB30
    if (ctx->r9 == 0) {
        // 0x801CBAE0: mfc1        $t1, $f8
        ctx->r9 = (int32_t)ctx->f8.u32l;
            goto L_801CBB30;
    }
    goto skip_0;
    // 0x801CBAE0: mfc1        $t1, $f8
    ctx->r9 = (int32_t)ctx->f8.u32l;
    skip_0:
    // 0x801CBAE4: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801CBAE8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801CBAEC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801CBAF0: sub.d       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f8.d = ctx->f6.d - ctx->f8.d;
    // 0x801CBAF4: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x801CBAF8: nop

    // 0x801CBAFC: cvt.w.d     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_D(ctx->f8.d);
    // 0x801CBB00: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x801CBB04: nop

    // 0x801CBB08: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x801CBB0C: bne         $t1, $zero, L_801CBB24
    if (ctx->r9 != 0) {
        // 0x801CBB10: nop
    
            goto L_801CBB24;
    }
    // 0x801CBB10: nop

    // 0x801CBB14: mfc1        $t1, $f8
    ctx->r9 = (int32_t)ctx->f8.u32l;
    // 0x801CBB18: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801CBB1C: b           L_801CBB3C
    // 0x801CBB20: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
        goto L_801CBB3C;
    // 0x801CBB20: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
L_801CBB24:
    // 0x801CBB24: b           L_801CBB3C
    // 0x801CBB28: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
        goto L_801CBB3C;
    // 0x801CBB28: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x801CBB2C: mfc1        $t1, $f8
    ctx->r9 = (int32_t)ctx->f8.u32l;
L_801CBB30:
    // 0x801CBB30: nop

    // 0x801CBB34: bltz        $t1, L_801CBB24
    if (SIGNED(ctx->r9) < 0) {
        // 0x801CBB38: nop
    
            goto L_801CBB24;
    }
    // 0x801CBB38: nop

L_801CBB3C:
    // 0x801CBB3C: andi        $t9, $t1, 0xFF
    ctx->r25 = ctx->r9 & 0XFF;
    // 0x801CBB40: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x801CBB44: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x801CBB48: andi        $t3, $t1, 0xFF
    ctx->r11 = ctx->r9 & 0XFF;
    // 0x801CBB4C: bgez        $t9, L_801CBB68
    if (SIGNED(ctx->r25) >= 0) {
        // 0x801CBB50: cvt.d.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.d = CVT_D_W(ctx->f10.u32l);
            goto L_801CBB68;
    }
    // 0x801CBB50: cvt.d.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.d = CVT_D_W(ctx->f10.u32l);
    // 0x801CBB54: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x801CBB58: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x801CBB5C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801CBB60: nop

    // 0x801CBB64: add.d       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f16.d = ctx->f16.d + ctx->f18.d;
L_801CBB68:
    // 0x801CBB68: addu        $t5, $t0, $t3
    ctx->r13 = ADD32(ctx->r8, ctx->r11);
    // 0x801CBB6C: lb          $t6, 0x0($t5)
    ctx->r14 = MEM_B(ctx->r13, 0X0);
    // 0x801CBB70: lui         $t8, 0x801F
    ctx->r24 = S32(0X801F << 16);
    // 0x801CBB74: addu        $t8, $t8, $v1
    ctx->r24 = ADD32(ctx->r24, ctx->r3);
    // 0x801CBB78: lw          $t8, -0x770C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X770C);
    // 0x801CBB7C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x801CBB80: mul.d       $f4, $f16, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f2.d);
    // 0x801CBB84: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x801CBB88: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x801CBB8C: lhu         $t4, 0x4($t8)
    ctx->r12 = MEM_HU(ctx->r24, 0X4);
    // 0x801CBB90: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801CBB94: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x801CBB98: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801CBB9C: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    // 0x801CBBA0: cvt.s.d     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f0.fl = CVT_S_D(ctx->f4.d);
    // 0x801CBBA4: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    // 0x801CBBA8: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    // 0x801CBBAC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801CBBB0: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801CBBB4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801CBBB8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801CBBBC: swc1        $f14, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f14.u32l;
    // 0x801CBBC0: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801CBBC4: jal         0x80035854
    // 0x801CBBC8: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
    func_80035854_36454(rdram, ctx);
        goto after_0;
    // 0x801CBBC8: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
    after_0:
    // 0x801CBBCC: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x801CBBD0: sw          $t9, 0xEC($v0)
    MEM_W(0XEC, ctx->r2) = ctx->r25;
    // 0x801CBBD4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801CBBD8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x801CBBDC: jr          $ra
    // 0x801CBBE0: nop

    TRACE_RETURN()
    return;
    // 0x801CBBE0: nop

;}
RECOMP_FUNC void func_801D9120_647F70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D9120: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D9124: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D9128: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801D912C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801D9130: lb          $t6, 0x74($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X74);
    // 0x801D9134: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x801D9138: bgezl       $t6, L_801D9160
    if (SIGNED(ctx->r14) >= 0) {
        // 0x801D913C: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_801D9160;
    }
    goto skip_0;
    // 0x801D913C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    skip_0:
    // 0x801D9140: sb          $zero, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = 0;
    // 0x801D9144: sb          $zero, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = 0;
    // 0x801D9148: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801D914C: jal         0x800352EC
    // 0x801D9150: addiu       $a0, $a0, -0x6E58
    ctx->r4 = ADD32(ctx->r4, -0X6E58);
    func_800352EC_35EEC(rdram, ctx);
        goto after_0;
    // 0x801D9150: addiu       $a0, $a0, -0x6E58
    ctx->r4 = ADD32(ctx->r4, -0X6E58);
    after_0:
    // 0x801D9154: b           L_801D919C
    // 0x801D9158: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801D919C;
    // 0x801D9158: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D915C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
L_801D9160:
    // 0x801D9160: jal         0x801CD504
    // 0x801D9164: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_801CD504_63C354(rdram, ctx);
        goto after_1;
    // 0x801D9164: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_1:
    // 0x801D9168: beq         $v0, $zero, L_801D9180
    if (ctx->r2 == 0) {
        // 0x801D916C: lw          $a1, 0x18($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X18);
            goto L_801D9180;
    }
    // 0x801D916C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x801D9170: jal         0x801D8BF0
    // 0x801D9174: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_801D8BF0_647A40(rdram, ctx);
        goto after_2;
    // 0x801D9174: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_2:
    // 0x801D9178: b           L_801D919C
    // 0x801D917C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801D919C;
    // 0x801D917C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801D9180:
    // 0x801D9180: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801D9184: jal         0x801CD634
    // 0x801D9188: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_801CD634_63C484(rdram, ctx);
        goto after_3;
    // 0x801D9188: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_3:
    // 0x801D918C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x801D9190: jal         0x801CD780
    // 0x801D9194: lwc1        $f12, 0x64($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X64);
    func_801CD780_63C5D0(rdram, ctx);
        goto after_4;
    // 0x801D9194: lwc1        $f12, 0x64($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X64);
    after_4:
    // 0x801D9198: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801D919C:
    // 0x801D919C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D91A0: jr          $ra
    // 0x801D91A4: nop

    TRACE_RETURN()
    return;
    // 0x801D91A4: nop

;}
RECOMP_FUNC void func_801DBEB0_64AD00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DBEB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DBEB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DBEB8: lw          $a3, 0xEC($a0)
    ctx->r7 = MEM_W(ctx->r4, 0XEC);
    // 0x801DBEBC: ori         $t6, $zero, 0xFFFF
    ctx->r14 = 0 | 0XFFFF;
    // 0x801DBEC0: sh          $t6, 0x76($a0)
    MEM_H(0X76, ctx->r4) = ctx->r14;
    // 0x801DBEC4: lw          $t7, 0x290($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X290);
    // 0x801DBEC8: addiu       $a1, $a3, 0x290
    ctx->r5 = ADD32(ctx->r7, 0X290);
    // 0x801DBECC: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801DBED0: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x801DBED4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801DBED8: beq         $a0, $t7, L_801DBF00
    if (ctx->r4 == ctx->r15) {
        // 0x801DBEDC: lbu         $t0, 0x314($a3)
        ctx->r8 = MEM_BU(ctx->r7, 0X314);
            goto L_801DBF00;
    }
    // 0x801DBEDC: lbu         $t0, 0x314($a3)
    ctx->r8 = MEM_BU(ctx->r7, 0X314);
    // 0x801DBEE0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_801DBEE4:
    // 0x801DBEE4: andi        $t8, $v0, 0xFF
    ctx->r24 = ctx->r2 & 0XFF;
    // 0x801DBEE8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x801DBEEC: addu        $t1, $v1, $t9
    ctx->r9 = ADD32(ctx->r3, ctx->r25);
    // 0x801DBEF0: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x801DBEF4: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x801DBEF8: bnel        $a2, $t2, L_801DBEE4
    if (ctx->r6 != ctx->r10) {
        // 0x801DBEFC: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_801DBEE4;
    }
    goto skip_0;
    // 0x801DBEFC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_0:
L_801DBF00:
    // 0x801DBF00: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x801DBF04: andi        $a0, $t0, 0xFF
    ctx->r4 = ctx->r8 & 0XFF;
    // 0x801DBF08: slt         $at, $v0, $a0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x801DBF0C: sb          $a0, 0x314($a3)
    MEM_B(0X314, ctx->r7) = ctx->r4;
    // 0x801DBF10: beq         $at, $zero, L_801DBF44
    if (ctx->r1 == 0) {
        // 0x801DBF14: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_801DBF44;
    }
    // 0x801DBF14: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_801DBF18:
    // 0x801DBF18: sll         $t4, $v1, 2
    ctx->r12 = S32(ctx->r3 << 2);
    // 0x801DBF1C: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x801DBF20: addu        $t5, $a1, $t4
    ctx->r13 = ADD32(ctx->r5, ctx->r12);
    // 0x801DBF24: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x801DBF28: lw          $t6, 0x4($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X4);
    // 0x801DBF2C: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x801DBF30: addu        $t8, $a1, $t7
    ctx->r24 = ADD32(ctx->r5, ctx->r15);
    // 0x801DBF34: slt         $at, $v1, $a0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x801DBF38: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x801DBF3C: bne         $at, $zero, L_801DBF18
    if (ctx->r1 != 0) {
        // 0x801DBF40: sw          $t6, 0x0($t8)
        MEM_W(0X0, ctx->r24) = ctx->r14;
            goto L_801DBF18;
    }
    // 0x801DBF40: sw          $t6, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r14;
L_801DBF44:
    // 0x801DBF44: jal         0x80034EF8
    // 0x801DBF48: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_0;
    // 0x801DBF48: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x801DBF4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DBF50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DBF54: jr          $ra
    // 0x801DBF58: nop

    TRACE_RETURN()
    return;
    // 0x801DBF58: nop

;}
RECOMP_FUNC void func_801D6224_645074(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D6224: addiu       $sp, $sp, -0x100
    ctx->r29 = ADD32(ctx->r29, -0X100);
    // 0x801D6228: sw          $ra, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r31;
    // 0x801D622C: sw          $fp, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r30;
    // 0x801D6230: sw          $s7, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r23;
    // 0x801D6234: sw          $s6, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r22;
    // 0x801D6238: sw          $s5, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r21;
    // 0x801D623C: sw          $s4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r20;
    // 0x801D6240: sw          $s3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r19;
    // 0x801D6244: sw          $s2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r18;
    // 0x801D6248: sw          $s1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r17;
    // 0x801D624C: sw          $s0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r16;
    // 0x801D6250: sdc1        $f30, 0x70($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X70, ctx->r29);
    // 0x801D6254: sdc1        $f28, 0x68($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X68, ctx->r29);
    // 0x801D6258: sdc1        $f26, 0x60($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X60, ctx->r29);
    // 0x801D625C: sdc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X58, ctx->r29);
    // 0x801D6260: sdc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X50, ctx->r29);
    // 0x801D6264: sdc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X48, ctx->r29);
    // 0x801D6268: lwc1        $f4, 0x1C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x801D626C: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x801D6270: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x801D6274: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D6278: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801D627C: lui         $at, 0xC20C
    ctx->r1 = S32(0XC20C << 16);
    // 0x801D6280: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801D6284: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x801D6288: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x801D628C: addiu       $t9, $sp, 0xF0
    ctx->r25 = ADD32(ctx->r29, 0XF0);
    // 0x801D6290: addiu       $t0, $sp, 0xF4
    ctx->r8 = ADD32(ctx->r29, 0XF4);
    // 0x801D6294: addiu       $a3, $sp, 0xEC
    ctx->r7 = ADD32(ctx->r29, 0XEC);
    // 0x801D6298: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801D629C: swc1        $f10, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f10.u32l;
    // 0x801D62A0: lwc1        $f16, 0x20($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X20);
    // 0x801D62A4: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801D62A8: mul.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x801D62AC: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801D62B0: swc1        $f6, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f6.u32l;
    // 0x801D62B4: lwc1        $f8, 0x24($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X24);
    // 0x801D62B8: cvt.d.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f16.d = CVT_D_S(ctx->f8.fl);
    // 0x801D62BC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D62C0: mul.d       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f0.d);
    // 0x801D62C4: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D62C8: mul.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x801D62CC: ldc1        $f10, -0xE90($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0XE90);
    // 0x801D62D0: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x801D62D4: cvt.d.s     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f18.d = CVT_D_S(ctx->f6.fl);
    // 0x801D62D8: swc1        $f4, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f4.u32l;
    // 0x801D62DC: lhu         $t6, 0x14($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X14);
    // 0x801D62E0: mul.d       $f8, $f18, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f10.d); 
    ctx->f8.d = MUL_D(ctx->f18.d, ctx->f10.d);
    // 0x801D62E4: sh          $t6, 0xB4($sp)
    MEM_H(0XB4, ctx->r29) = ctx->r14;
    // 0x801D62E8: lhu         $t7, 0x16($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X16);
    // 0x801D62EC: mul.s       $f6, $f4, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f22.fl);
    // 0x801D62F0: andi        $a0, $t6, 0xFFFF
    ctx->r4 = ctx->r14 & 0XFFFF;
    // 0x801D62F4: sh          $t7, 0xB6($sp)
    MEM_H(0XB6, ctx->r29) = ctx->r15;
    // 0x801D62F8: lhu         $t8, 0x18($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X18);
    // 0x801D62FC: swc1        $f16, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f16.u32l;
    // 0x801D6300: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x801D6304: cvt.s.d     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f16.fl = CVT_S_D(ctx->f8.d);
    // 0x801D6308: swc1        $f6, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f6.u32l;
    // 0x801D630C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x801D6310: andi        $a1, $t7, 0xFFFF
    ctx->r5 = ctx->r15 & 0XFFFF;
    // 0x801D6314: swc1        $f16, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f16.u32l;
    // 0x801D6318: sh          $t8, 0xB8($sp)
    MEM_H(0XB8, ctx->r29) = ctx->r24;
    // 0x801D631C: jal         0x80033898
    // 0x801D6320: andi        $a2, $t8, 0xFFFF
    ctx->r6 = ctx->r24 & 0XFFFF;
    func_80033898_34498(rdram, ctx);
        goto after_0;
    // 0x801D6320: andi        $a2, $t8, 0xFFFF
    ctx->r6 = ctx->r24 & 0XFFFF;
    after_0:
    // 0x801D6324: lwc1        $f18, 0xEC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x801D6328: lwc1        $f10, 0x5C($s6)
    ctx->f10.u32l = MEM_W(ctx->r22, 0X5C);
    // 0x801D632C: lwc1        $f16, 0xF0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x801D6330: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801D6334: add.s       $f8, $f18, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x801D6338: lwc1        $f18, 0xF4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x801D633C: addiu       $t1, $sp, 0xAC
    ctx->r9 = ADD32(ctx->r29, 0XAC);
    // 0x801D6340: addiu       $t2, $sp, 0xB0
    ctx->r10 = ADD32(ctx->r29, 0XB0);
    // 0x801D6344: swc1        $f8, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f8.u32l;
    // 0x801D6348: lwc1        $f4, 0x60($s6)
    ctx->f4.u32l = MEM_W(ctx->r22, 0X60);
    // 0x801D634C: lhu         $a0, 0xB4($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0XB4);
    // 0x801D6350: lhu         $a1, 0xB6($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0XB6);
    // 0x801D6354: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x801D6358: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801D635C: lhu         $a2, 0xB8($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0XB8);
    // 0x801D6360: addiu       $a3, $sp, 0xA8
    ctx->r7 = ADD32(ctx->r29, 0XA8);
    // 0x801D6364: swc1        $f6, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f6.u32l;
    // 0x801D6368: lwc1        $f10, 0x64($s6)
    ctx->f10.u32l = MEM_W(ctx->r22, 0X64);
    // 0x801D636C: swc1        $f22, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f22.u32l;
    // 0x801D6370: swc1        $f22, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f22.u32l;
    // 0x801D6374: add.s       $f8, $f18, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x801D6378: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x801D637C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x801D6380: swc1        $f16, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f16.u32l;
    // 0x801D6384: jal         0x80033898
    // 0x801D6388: swc1        $f8, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f8.u32l;
    func_80033898_34498(rdram, ctx);
        goto after_1;
    // 0x801D6388: swc1        $f8, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x801D638C: lwc1        $f12, 0xA8($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x801D6390: jal         0x800040A8
    // 0x801D6394: lwc1        $f14, 0xB0($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XB0);
    func_800040A8_4CA8(rdram, ctx);
        goto after_2;
    // 0x801D6394: lwc1        $f14, 0xB0($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XB0);
    after_2:
    // 0x801D6398: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x801D639C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D63A0: lwc1        $f4, 0xBC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x801D63A4: lwc1        $f8, 0xC0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x801D63A8: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D63AC: mul.s       $f18, $f4, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801D63B0: ldc1        $f4, -0xE88($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0XE88);
    // 0x801D63B4: cvt.d.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f16.d = CVT_D_S(ctx->f8.fl);
    // 0x801D63B8: addiu       $s5, $v0, 0x380
    ctx->r21 = ADD32(ctx->r2, 0X380);
    // 0x801D63BC: mul.d       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f16.d, ctx->f4.d);
    // 0x801D63C0: andi        $t3, $s5, 0xFFFF
    ctx->r11 = ctx->r21 & 0XFFFF;
    // 0x801D63C4: or          $s5, $t3, $zero
    ctx->r21 = ctx->r11 | 0;
    // 0x801D63C8: neg.s       $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = -ctx->f18.fl;
    // 0x801D63CC: addiu       $s3, $zero, 0x8
    ctx->r19 = ADD32(0, 0X8);
    // 0x801D63D0: swc1        $f10, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f10.u32l;
    // 0x801D63D4: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x801D63D8: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x801D63DC: cvt.s.d     $f30, $f6
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f30.fl = CVT_S_D(ctx->f6.d);
    // 0x801D63E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D63E4: jal         0x801DFBE0
    // 0x801D63E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_801DFBE0_64EA30(rdram, ctx);
        goto after_3;
    // 0x801D63E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x801D63EC: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D63F0: ldc1        $f28, -0xE80($at)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r1, -0XE80);
    // 0x801D63F4: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x801D63F8: mtc1        $at, $f27
    ctx->f_odd[(27 - 1) * 2] = ctx->r1;
    // 0x801D63FC: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x801D6400: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x801D6404: mtc1        $zero, $f26
    ctx->f26.u32l = 0;
    // 0x801D6408: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x801D640C: addiu       $fp, $sp, 0xE0
    ctx->r30 = ADD32(ctx->r29, 0XE0);
    // 0x801D6410: addiu       $s2, $zero, -0x2
    ctx->r18 = ADD32(0, -0X2);
L_801D6414:
    // 0x801D6414: andi        $s4, $s3, 0x3
    ctx->r20 = ctx->r19 & 0X3;
    // 0x801D6418: bne         $s4, $zero, L_801D6494
    if (ctx->r20 != 0) {
        // 0x801D641C: addiu       $s0, $zero, 0x80
        ctx->r16 = ADD32(0, 0X80);
            goto L_801D6494;
    }
    // 0x801D641C: addiu       $s0, $zero, 0x80
    ctx->r16 = ADD32(0, 0X80);
    // 0x801D6420: lwc1        $f0, 0xDC($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x801D6424: addiu       $t4, $sp, 0xE4
    ctx->r12 = ADD32(ctx->r29, 0XE4);
    // 0x801D6428: addiu       $t5, $sp, 0xE8
    ctx->r13 = ADD32(ctx->r29, 0XE8);
    // 0x801D642C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x801D6430: addiu       $s0, $zero, 0x100
    ctx->r16 = ADD32(0, 0X100);
    // 0x801D6434: neg.s       $f30, $f30
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f30.fl); 
    ctx->f30.fl = -ctx->f30.fl;
    // 0x801D6438: swc1        $f0, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f0.u32l;
    // 0x801D643C: swc1        $f22, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f22.u32l;
    // 0x801D6440: swc1        $f22, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f22.u32l;
    // 0x801D6444: swc1        $f0, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f0.u32l;
    // 0x801D6448: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x801D644C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x801D6450: lhu         $a0, 0xB4($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0XB4);
    // 0x801D6454: lhu         $a1, 0xB6($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0XB6);
    // 0x801D6458: lhu         $a2, 0xB8($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0XB8);
    // 0x801D645C: jal         0x80033898
    // 0x801D6460: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    func_80033898_34498(rdram, ctx);
        goto after_4;
    // 0x801D6460: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    after_4:
    // 0x801D6464: lwc1        $f18, 0xEC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x801D6468: lwc1        $f10, 0xE0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x801D646C: lwc1        $f16, 0xF0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x801D6470: lwc1        $f4, 0xE4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x801D6474: add.s       $f8, $f18, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x801D6478: lwc1        $f10, 0xE8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x801D647C: lwc1        $f18, 0xF4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x801D6480: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x801D6484: swc1        $f8, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f8.u32l;
    // 0x801D6488: add.s       $f8, $f18, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x801D648C: swc1        $f6, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f6.u32l;
    // 0x801D6490: swc1        $f8, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f8.u32l;
L_801D6494:
    // 0x801D6494: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x801D6498: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801D649C: lwc1        $f16, 0xEC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x801D64A0: lwc1        $f4, 0xF0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x801D64A4: lwc1        $f6, 0xF4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x801D64A8: addiu       $t6, $zero, 0x27
    ctx->r14 = ADD32(0, 0X27);
    // 0x801D64AC: addiu       $t7, $zero, 0x15
    ctx->r15 = ADD32(0, 0X15);
    // 0x801D64B0: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x801D64B4: addiu       $t9, $zero, 0x80
    ctx->r25 = ADD32(0, 0X80);
    // 0x801D64B8: addiu       $t0, $zero, 0x180
    ctx->r8 = ADD32(0, 0X180);
    // 0x801D64BC: addiu       $t1, $zero, 0x300
    ctx->r9 = ADD32(0, 0X300);
    // 0x801D64C0: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x801D64C4: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x801D64C8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x801D64CC: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x801D64D0: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801D64D4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801D64D8: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x801D64DC: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x801D64E0: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x801D64E4: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x801D64E8: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x801D64EC: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x801D64F0: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x801D64F4: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
    // 0x801D64F8: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x801D64FC: jal         0x801CDA88
    // 0x801D6500: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    func_801CDA88_63C8D8(rdram, ctx);
        goto after_5;
    // 0x801D6500: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    after_5:
    // 0x801D6504: or          $s7, $v0, $zero
    ctx->r23 = ctx->r2 | 0;
    // 0x801D6508: jal         0x8000DD58
    // 0x801D650C: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    func_8000DD58_E958(rdram, ctx);
        goto after_6;
    // 0x801D650C: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_6:
    // 0x801D6510: addiu       $t2, $v0, 0x1
    ctx->r10 = ADD32(ctx->r2, 0X1);
    // 0x801D6514: and         $t3, $t2, $s2
    ctx->r11 = ctx->r10 & ctx->r18;
    // 0x801D6518: addiu       $t4, $t3, -0xA
    ctx->r12 = ADD32(ctx->r11, -0XA);
    // 0x801D651C: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x801D6520: lwc1        $f18, 0xEC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x801D6524: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801D6528: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x801D652C: lwc1        $f10, 0xF0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x801D6530: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801D6534: addiu       $a3, $zero, 0xC0
    ctx->r7 = ADD32(0, 0XC0);
    // 0x801D6538: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x801D653C: swc1        $f22, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f22.u32l;
    // 0x801D6540: add.s       $f20, $f24, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = ctx->f24.fl + ctx->f8.fl;
    // 0x801D6544: lwc1        $f8, 0xF4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x801D6548: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x801D654C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x801D6550: cvt.d.s     $f16, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f16.d = CVT_D_S(ctx->f20.fl);
    // 0x801D6554: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x801D6558: div.d       $f4, $f16, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f26.d); 
    ctx->f4.d = DIV_D(ctx->f16.d, ctx->f26.d);
    // 0x801D655C: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x801D6560: mul.d       $f6, $f4, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f28.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f28.d);
    // 0x801D6564: cvt.s.d     $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f20.fl = CVT_S_D(ctx->f6.d);
    // 0x801D6568: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x801D656C: jal         0x801DFC60
    // 0x801D6570: nop

    func_801DFC60_64EAB0(rdram, ctx);
        goto after_7;
    // 0x801D6570: nop

    after_7:
    // 0x801D6574: bne         $s4, $zero, L_801D65E4
    if (ctx->r20 != 0) {
        // 0x801D6578: lwc1        $f16, 0xEC($sp)
        ctx->f16.u32l = MEM_W(ctx->r29, 0XEC);
            goto L_801D65E4;
    }
    // 0x801D6578: lwc1        $f16, 0xEC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x801D657C: lwc1        $f4, 0xE0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x801D6580: lwc1        $f18, 0xF0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x801D6584: lwc1        $f10, 0xE4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x801D6588: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x801D658C: lwc1        $f4, 0xE8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x801D6590: lwc1        $f16, 0xF4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x801D6594: add.s       $f8, $f18, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x801D6598: swc1        $f6, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f6.u32l;
    // 0x801D659C: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x801D65A0: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x801D65A4: andi        $t5, $s3, 0xFF
    ctx->r13 = ctx->r19 & 0XFF;
    // 0x801D65A8: addiu       $t6, $sp, 0xE4
    ctx->r14 = ADD32(ctx->r29, 0XE4);
    // 0x801D65AC: addiu       $t7, $sp, 0xE8
    ctx->r15 = ADD32(ctx->r29, 0XE8);
    // 0x801D65B0: or          $s3, $t5, $zero
    ctx->r19 = ctx->r13 | 0;
    // 0x801D65B4: swc1        $f8, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f8.u32l;
    // 0x801D65B8: swc1        $f6, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f6.u32l;
    // 0x801D65BC: swc1        $f22, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f22.u32l;
    // 0x801D65C0: swc1        $f30, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f30.u32l;
    // 0x801D65C4: swc1        $f22, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f22.u32l;
    // 0x801D65C8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801D65CC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801D65D0: lhu         $a0, 0xB4($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0XB4);
    // 0x801D65D4: lhu         $a1, 0xB6($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0XB6);
    // 0x801D65D8: lhu         $a2, 0xB8($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0XB8);
    // 0x801D65DC: jal         0x80033898
    // 0x801D65E0: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    func_80033898_34498(rdram, ctx);
        goto after_8;
    // 0x801D65E0: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    after_8:
L_801D65E4:
    // 0x801D65E4: lwc1        $f18, 0xEC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x801D65E8: lwc1        $f10, 0xE0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x801D65EC: lwc1        $f16, 0xF0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x801D65F0: lwc1        $f4, 0xE4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x801D65F4: add.s       $f8, $f18, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x801D65F8: lwc1        $f10, 0xE8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x801D65FC: lwc1        $f18, 0xF4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x801D6600: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x801D6604: swc1        $f8, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f8.u32l;
    // 0x801D6608: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x801D660C: add.s       $f8, $f18, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x801D6610: addu        $t8, $s5, $s0
    ctx->r24 = ADD32(ctx->r21, ctx->r16);
    // 0x801D6614: andi        $t0, $s3, 0xFF
    ctx->r8 = ctx->r19 & 0XFF;
    // 0x801D6618: swc1        $f6, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f6.u32l;
    // 0x801D661C: swc1        $f8, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f8.u32l;
    // 0x801D6620: andi        $s5, $t8, 0x3FF
    ctx->r21 = ctx->r24 & 0X3FF;
    // 0x801D6624: bne         $t0, $zero, L_801D6414
    if (ctx->r8 != 0) {
        // 0x801D6628: or          $s3, $t0, $zero
        ctx->r19 = ctx->r8 | 0;
            goto L_801D6414;
    }
    // 0x801D6628: or          $s3, $t0, $zero
    ctx->r19 = ctx->r8 | 0;
    // 0x801D662C: lui         $at, 0x430C
    ctx->r1 = S32(0X430C << 16);
    // 0x801D6630: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801D6634: addiu       $t1, $sp, 0xE4
    ctx->r9 = ADD32(ctx->r29, 0XE4);
    // 0x801D6638: addiu       $t2, $sp, 0xE8
    ctx->r10 = ADD32(ctx->r29, 0XE8);
    // 0x801D663C: swc1        $f22, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f22.u32l;
    // 0x801D6640: swc1        $f22, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f22.u32l;
    // 0x801D6644: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x801D6648: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x801D664C: lhu         $a0, 0xB4($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0XB4);
    // 0x801D6650: lhu         $a1, 0xB6($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0XB6);
    // 0x801D6654: lhu         $a2, 0xB8($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0XB8);
    // 0x801D6658: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    // 0x801D665C: jal         0x80033898
    // 0x801D6660: swc1        $f16, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f16.u32l;
    func_80033898_34498(rdram, ctx);
        goto after_9;
    // 0x801D6660: swc1        $f16, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f16.u32l;
    after_9:
    // 0x801D6664: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x801D6668: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x801D666C: addiu       $s3, $zero, 0x2
    ctx->r19 = ADD32(0, 0X2);
L_801D6670:
    // 0x801D6670: lwc1        $f4, 0xBC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x801D6674: lwc1        $f18, 0xC0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x801D6678: lui         $at, 0xC28C
    ctx->r1 = S32(0XC28C << 16);
    // 0x801D667C: mul.s       $f6, $f4, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f22.fl);
    // 0x801D6680: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801D6684: lwc1        $f8, 0xC4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x801D6688: mul.s       $f10, $f18, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f30.fl);
    // 0x801D668C: addiu       $t3, $sp, 0xF0
    ctx->r11 = ADD32(ctx->r29, 0XF0);
    // 0x801D6690: addiu       $t4, $sp, 0xF4
    ctx->r12 = ADD32(ctx->r29, 0XF4);
    // 0x801D6694: mul.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x801D6698: swc1        $f6, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f6.u32l;
    // 0x801D669C: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x801D66A0: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x801D66A4: swc1        $f10, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f10.u32l;
    // 0x801D66A8: lhu         $a0, 0xB4($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0XB4);
    // 0x801D66AC: lhu         $a1, 0xB6($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0XB6);
    // 0x801D66B0: swc1        $f4, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f4.u32l;
    // 0x801D66B4: lhu         $a2, 0xB8($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0XB8);
    // 0x801D66B8: jal         0x80033898
    // 0x801D66BC: addiu       $a3, $sp, 0xEC
    ctx->r7 = ADD32(ctx->r29, 0XEC);
    func_80033898_34498(rdram, ctx);
        goto after_10;
    // 0x801D66BC: addiu       $a3, $sp, 0xEC
    ctx->r7 = ADD32(ctx->r29, 0XEC);
    after_10:
    // 0x801D66C0: lwc1        $f6, 0xEC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x801D66C4: lwc1        $f18, 0x5C($s6)
    ctx->f18.u32l = MEM_W(ctx->r22, 0X5C);
    // 0x801D66C8: lwc1        $f8, 0xF0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x801D66CC: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
    // 0x801D66D0: add.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x801D66D4: lwc1        $f6, 0xF4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x801D66D8: swc1        $f10, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f10.u32l;
    // 0x801D66DC: lwc1        $f16, 0x60($s6)
    ctx->f16.u32l = MEM_W(ctx->r22, 0X60);
    // 0x801D66E0: add.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x801D66E4: swc1        $f4, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f4.u32l;
    // 0x801D66E8: lwc1        $f18, 0x64($s6)
    ctx->f18.u32l = MEM_W(ctx->r22, 0X64);
    // 0x801D66EC: add.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x801D66F0: swc1        $f10, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f10.u32l;
L_801D66F4:
    // 0x801D66F4: jal         0x8000DD58
    // 0x801D66F8: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    func_8000DD58_E958(rdram, ctx);
        goto after_11;
    // 0x801D66F8: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_11:
    // 0x801D66FC: addiu       $t5, $v0, 0x1
    ctx->r13 = ADD32(ctx->r2, 0X1);
    // 0x801D6700: and         $t6, $t5, $s2
    ctx->r14 = ctx->r13 & ctx->r18;
    // 0x801D6704: addiu       $t7, $t6, -0xA
    ctx->r15 = ADD32(ctx->r14, -0XA);
    // 0x801D6708: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x801D670C: lwc1        $f10, 0xEC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x801D6710: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801D6714: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x801D6718: lwc1        $f8, 0xF0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x801D671C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801D6720: addiu       $a3, $zero, 0xC0
    ctx->r7 = ADD32(0, 0XC0);
    // 0x801D6724: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x801D6728: swc1        $f22, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f22.u32l;
    // 0x801D672C: add.s       $f20, $f24, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f20.fl = ctx->f24.fl + ctx->f16.fl;
    // 0x801D6730: lwc1        $f16, 0xF4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x801D6734: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x801D6738: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x801D673C: cvt.d.s     $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f4.d = CVT_D_S(ctx->f20.fl);
    // 0x801D6740: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x801D6744: div.d       $f6, $f4, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f26.d); 
    ctx->f6.d = DIV_D(ctx->f4.d, ctx->f26.d);
    // 0x801D6748: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x801D674C: mul.d       $f18, $f6, $f28
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f28.d); 
    ctx->f18.d = MUL_D(ctx->f6.d, ctx->f28.d);
    // 0x801D6750: cvt.s.d     $f20, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f20.fl = CVT_S_D(ctx->f18.d);
    // 0x801D6754: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x801D6758: jal         0x801DFC60
    // 0x801D675C: nop

    func_801DFC60_64EAB0(rdram, ctx);
        goto after_12;
    // 0x801D675C: nop

    after_12:
    // 0x801D6760: lwc1        $f4, 0xEC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x801D6764: lwc1        $f6, 0xE0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x801D6768: lwc1        $f10, 0xF0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x801D676C: lwc1        $f8, 0xE4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x801D6770: add.s       $f18, $f4, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801D6774: lwc1        $f6, 0xE8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x801D6778: lwc1        $f4, 0xF4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x801D677C: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x801D6780: swc1        $f18, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f18.u32l;
    // 0x801D6784: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x801D6788: add.s       $f18, $f4, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801D678C: andi        $t8, $s0, 0xFF
    ctx->r24 = ctx->r16 & 0XFF;
    // 0x801D6790: swc1        $f16, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f16.u32l;
    // 0x801D6794: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x801D6798: bne         $t8, $zero, L_801D66F4
    if (ctx->r24 != 0) {
        // 0x801D679C: swc1        $f18, 0xF4($sp)
        MEM_W(0XF4, ctx->r29) = ctx->f18.u32l;
            goto L_801D66F4;
    }
    // 0x801D679C: swc1        $f18, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f18.u32l;
    // 0x801D67A0: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x801D67A4: andi        $t9, $s3, 0xFF
    ctx->r25 = ctx->r19 & 0XFF;
    // 0x801D67A8: neg.s       $f30, $f30
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f30.fl); 
    ctx->f30.fl = -ctx->f30.fl;
    // 0x801D67AC: bne         $t9, $zero, L_801D6670
    if (ctx->r25 != 0) {
        // 0x801D67B0: or          $s3, $t9, $zero
        ctx->r19 = ctx->r25 | 0;
            goto L_801D6670;
    }
    // 0x801D67B0: or          $s3, $t9, $zero
    ctx->r19 = ctx->r25 | 0;
    // 0x801D67B4: jal         0x8000DD58
    // 0x801D67B8: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    func_8000DD58_E958(rdram, ctx);
        goto after_13;
    // 0x801D67B8: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_13:
    // 0x801D67BC: addiu       $t0, $v0, 0x1
    ctx->r8 = ADD32(ctx->r2, 0X1);
    // 0x801D67C0: and         $t1, $t0, $s2
    ctx->r9 = ctx->r8 & ctx->r18;
    // 0x801D67C4: addiu       $t2, $t1, -0xA
    ctx->r10 = ADD32(ctx->r9, -0XA);
    // 0x801D67C8: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x801D67CC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801D67D0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801D67D4: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x801D67D8: lwc1        $f18, 0xE0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x801D67DC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801D67E0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801D67E4: addiu       $a3, $zero, 0xC0
    ctx->r7 = ADD32(0, 0XC0);
    // 0x801D67E8: div.s       $f10, $f18, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f18.fl, ctx->f0.fl);
    // 0x801D67EC: add.s       $f20, $f24, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = ctx->f24.fl + ctx->f8.fl;
    // 0x801D67F0: lwc1        $f8, 0x5C($s6)
    ctx->f8.u32l = MEM_W(ctx->r22, 0X5C);
    // 0x801D67F4: cvt.d.s     $f16, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f16.d = CVT_D_S(ctx->f20.fl);
    // 0x801D67F8: div.d       $f4, $f16, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f26.d); 
    ctx->f4.d = DIV_D(ctx->f16.d, ctx->f26.d);
    // 0x801D67FC: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x801D6800: lwc1        $f8, 0xE8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x801D6804: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x801D6808: lwc1        $f18, 0x60($s6)
    ctx->f18.u32l = MEM_W(ctx->r22, 0X60);
    // 0x801D680C: div.s       $f16, $f8, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x801D6810: mul.d       $f6, $f4, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f28.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f28.d);
    // 0x801D6814: lwc1        $f4, 0xE4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x801D6818: cvt.s.d     $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f20.fl = CVT_S_D(ctx->f6.d);
    // 0x801D681C: div.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x801D6820: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x801D6824: add.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x801D6828: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x801D682C: lwc1        $f4, 0x64($s6)
    ctx->f4.u32l = MEM_W(ctx->r22, 0X64);
    // 0x801D6830: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x801D6834: swc1        $f22, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f22.u32l;
    // 0x801D6838: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x801D683C: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x801D6840: jal         0x801DFC60
    // 0x801D6844: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    func_801DFC60_64EAB0(rdram, ctx);
        goto after_14;
    // 0x801D6844: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    after_14:
    // 0x801D6848: lw          $t3, 0xEC($s6)
    ctx->r11 = MEM_W(ctx->r22, 0XEC);
    // 0x801D684C: lhu         $t4, 0xE2($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0XE2);
    // 0x801D6850: andi        $t5, $t4, 0x4
    ctx->r13 = ctx->r12 & 0X4;
    // 0x801D6854: bnel        $t5, $zero, L_801D6878
    if (ctx->r13 != 0) {
        // 0x801D6858: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_801D6878;
    }
    goto skip_0;
    // 0x801D6858: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    skip_0:
    // 0x801D685C: jal         0x80038B98
    // 0x801D6860: addiu       $a0, $zero, 0x14D
    ctx->r4 = ADD32(0, 0X14D);
    func_80038B98_39798(rdram, ctx);
        goto after_15;
    // 0x801D6860: addiu       $a0, $zero, 0x14D
    ctx->r4 = ADD32(0, 0X14D);
    after_15:
    // 0x801D6864: lw          $v0, 0xEC($s6)
    ctx->r2 = MEM_W(ctx->r22, 0XEC);
    // 0x801D6868: lhu         $t6, 0xE2($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0XE2);
    // 0x801D686C: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x801D6870: sh          $t7, 0xE2($v0)
    MEM_H(0XE2, ctx->r2) = ctx->r15;
    // 0x801D6874: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
L_801D6878:
    // 0x801D6878: jal         0x801E8824
    // 0x801D687C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_801E8824_657674(rdram, ctx);
        goto after_16;
    // 0x801D687C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_16:
    // 0x801D6880: jal         0x801DFE68
    // 0x801D6884: lw          $a0, 0xC4($s6)
    ctx->r4 = MEM_W(ctx->r22, 0XC4);
    func_801DFE68_64ECB8(rdram, ctx);
        goto after_17;
    // 0x801D6884: lw          $a0, 0xC4($s6)
    ctx->r4 = MEM_W(ctx->r22, 0XC4);
    after_17:
    // 0x801D6888: jal         0x801DFE68
    // 0x801D688C: lw          $a0, 0xC8($s6)
    ctx->r4 = MEM_W(ctx->r22, 0XC8);
    func_801DFE68_64ECB8(rdram, ctx);
        goto after_18;
    // 0x801D688C: lw          $a0, 0xC8($s6)
    ctx->r4 = MEM_W(ctx->r22, 0XC8);
    after_18:
    // 0x801D6890: jal         0x801D2B90
    // 0x801D6894: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    func_801D2B90_6419E0(rdram, ctx);
        goto after_19;
    // 0x801D6894: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_19:
    // 0x801D6898: lw          $ra, 0x9C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X9C);
    // 0x801D689C: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x801D68A0: ldc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X50);
    // 0x801D68A4: ldc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X58);
    // 0x801D68A8: ldc1        $f26, 0x60($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X60);
    // 0x801D68AC: ldc1        $f28, 0x68($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X68);
    // 0x801D68B0: ldc1        $f30, 0x70($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X70);
    // 0x801D68B4: lw          $s0, 0x78($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X78);
    // 0x801D68B8: lw          $s1, 0x7C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X7C);
    // 0x801D68BC: lw          $s2, 0x80($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X80);
    // 0x801D68C0: lw          $s3, 0x84($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X84);
    // 0x801D68C4: lw          $s4, 0x88($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X88);
    // 0x801D68C8: lw          $s5, 0x8C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X8C);
    // 0x801D68CC: lw          $s6, 0x90($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X90);
    // 0x801D68D0: lw          $s7, 0x94($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X94);
    // 0x801D68D4: lw          $fp, 0x98($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X98);
    // 0x801D68D8: jr          $ra
    // 0x801D68DC: addiu       $sp, $sp, 0x100
    ctx->r29 = ADD32(ctx->r29, 0X100);
    TRACE_RETURN()
    return;
    // 0x801D68DC: addiu       $sp, $sp, 0x100
    ctx->r29 = ADD32(ctx->r29, 0X100);
;}
RECOMP_FUNC void func_801DD79C_64C5EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DD79C: addiu       $sp, $sp, -0xF8
    ctx->r29 = ADD32(ctx->r29, -0XF8);
    // 0x801DD7A0: sw          $ra, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r31;
    // 0x801DD7A4: sw          $s3, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r19;
    // 0x801DD7A8: sw          $s2, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r18;
    // 0x801DD7AC: sw          $s1, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r17;
    // 0x801DD7B0: sw          $s0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r16;
    // 0x801DD7B4: sdc1        $f30, 0x68($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X68, ctx->r29);
    // 0x801DD7B8: sdc1        $f28, 0x60($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X60, ctx->r29);
    // 0x801DD7BC: sdc1        $f26, 0x58($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X58, ctx->r29);
    // 0x801DD7C0: sdc1        $f24, 0x50($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X50, ctx->r29);
    // 0x801DD7C4: sdc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X48, ctx->r29);
    // 0x801DD7C8: sdc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X40, ctx->r29);
    // 0x801DD7CC: lwc1        $f4, 0x1C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x801DD7D0: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x801DD7D4: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x801DD7D8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DD7DC: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801DD7E0: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x801DD7E4: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801DD7E8: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x801DD7EC: lui         $at, 0xC387
    ctx->r1 = S32(0XC387 << 16);
    // 0x801DD7F0: addiu       $s2, $sp, 0xE8
    ctx->r18 = ADD32(ctx->r29, 0XE8);
    // 0x801DD7F4: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x801DD7F8: addiu       $t9, $sp, 0xEC
    ctx->r25 = ADD32(ctx->r29, 0XEC);
    // 0x801DD7FC: addiu       $t0, $sp, 0xF0
    ctx->r8 = ADD32(ctx->r29, 0XF0);
    // 0x801DD800: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x801DD804: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801DD808: swc1        $f10, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f10.u32l;
    // 0x801DD80C: lwc1        $f16, 0x20($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X20);
    // 0x801DD810: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801DD814: mul.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x801DD818: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801DD81C: swc1        $f6, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f6.u32l;
    // 0x801DD820: lwc1        $f8, 0x24($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X24);
    // 0x801DD824: cvt.d.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f16.d = CVT_D_S(ctx->f8.fl);
    // 0x801DD828: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801DD82C: mul.d       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f0.d);
    // 0x801DD830: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x801DD834: mul.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x801DD838: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801DD83C: swc1        $f4, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f4.u32l;
    // 0x801DD840: lhu         $t6, 0x14($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X14);
    // 0x801DD844: mul.s       $f18, $f6, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f24.fl);
    // 0x801DD848: sh          $t6, 0x98($sp)
    MEM_H(0X98, ctx->r29) = ctx->r14;
    // 0x801DD84C: lhu         $t7, 0x16($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X16);
    // 0x801DD850: mul.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x801DD854: andi        $a0, $t6, 0xFFFF
    ctx->r4 = ctx->r14 & 0XFFFF;
    // 0x801DD858: sh          $t7, 0x9A($sp)
    MEM_H(0X9A, ctx->r29) = ctx->r15;
    // 0x801DD85C: lhu         $t8, 0x18($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X18);
    // 0x801DD860: swc1        $f16, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f16.u32l;
    // 0x801DD864: swc1        $f18, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f18.u32l;
    // 0x801DD868: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x801DD86C: swc1        $f8, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f8.u32l;
    // 0x801DD870: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x801DD874: andi        $a1, $t7, 0xFFFF
    ctx->r5 = ctx->r15 & 0XFFFF;
    // 0x801DD878: sh          $t8, 0x9C($sp)
    MEM_H(0X9C, ctx->r29) = ctx->r24;
    // 0x801DD87C: jal         0x80033898
    // 0x801DD880: andi        $a2, $t8, 0xFFFF
    ctx->r6 = ctx->r24 & 0XFFFF;
    func_80033898_34498(rdram, ctx);
        goto after_0;
    // 0x801DD880: andi        $a2, $t8, 0xFFFF
    ctx->r6 = ctx->r24 & 0XFFFF;
    after_0:
    // 0x801DD884: lwc1        $f16, 0xE8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x801DD888: lwc1        $f6, 0x5C($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X5C);
    // 0x801DD88C: lwc1        $f4, 0xEC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x801DD890: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DD894: add.s       $f18, $f16, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x801DD898: lwc1        $f16, 0xF0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x801DD89C: lui         $at, 0x4407
    ctx->r1 = S32(0X4407 << 16);
    // 0x801DD8A0: addiu       $t1, $sp, 0xE0
    ctx->r9 = ADD32(ctx->r29, 0XE0);
    // 0x801DD8A4: swc1        $f18, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f18.u32l;
    // 0x801DD8A8: lwc1        $f10, 0x60($s3)
    ctx->f10.u32l = MEM_W(ctx->r19, 0X60);
    // 0x801DD8AC: addiu       $t2, $sp, 0xE4
    ctx->r10 = ADD32(ctx->r29, 0XE4);
    // 0x801DD8B0: lhu         $a0, 0x98($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X98);
    // 0x801DD8B4: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x801DD8B8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801DD8BC: lhu         $a1, 0x9A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X9A);
    // 0x801DD8C0: lhu         $a2, 0x9C($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X9C);
    // 0x801DD8C4: swc1        $f8, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f8.u32l;
    // 0x801DD8C8: lwc1        $f6, 0x64($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X64);
    // 0x801DD8CC: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x801DD8D0: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x801DD8D4: add.s       $f18, $f16, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x801DD8D8: addiu       $a3, $sp, 0xDC
    ctx->r7 = ADD32(ctx->r29, 0XDC);
    // 0x801DD8DC: swc1        $f0, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f0.u32l;
    // 0x801DD8E0: swc1        $f0, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f0.u32l;
    // 0x801DD8E4: swc1        $f18, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f18.u32l;
    // 0x801DD8E8: jal         0x80033898
    // 0x801DD8EC: swc1        $f4, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f4.u32l;
    func_80033898_34498(rdram, ctx);
        goto after_1;
    // 0x801DD8EC: swc1        $f4, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x801DD8F0: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x801DD8F4: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x801DD8F8: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x801DD8FC: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x801DD900: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
    // 0x801DD904: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_801DD908:
    // 0x801DD908: lwc1        $f10, 0xE8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x801DD90C: lwc1        $f8, 0xEC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x801DD910: lwc1        $f16, 0xF0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x801DD914: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x801DD918: addiu       $t3, $zero, 0x21
    ctx->r11 = ADD32(0, 0X21);
    // 0x801DD91C: addiu       $t4, $zero, 0x21
    ctx->r12 = ADD32(0, 0X21);
    // 0x801DD920: addiu       $t5, $zero, 0x21
    ctx->r13 = ADD32(0, 0X21);
    // 0x801DD924: addiu       $t6, $zero, 0x80
    ctx->r14 = ADD32(0, 0X80);
    // 0x801DD928: addiu       $t7, $zero, 0xC0
    ctx->r15 = ADD32(0, 0XC0);
    // 0x801DD92C: addiu       $t8, $zero, 0x300
    ctx->r24 = ADD32(0, 0X300);
    // 0x801DD930: sw          $t8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r24;
    // 0x801DD934: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
    // 0x801DD938: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x801DD93C: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x801DD940: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x801DD944: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x801DD948: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x801DD94C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x801DD950: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    // 0x801DD954: swc1        $f22, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f22.u32l;
    // 0x801DD958: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x801DD95C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801DD960: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x801DD964: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x801DD968: jal         0x801CDA88
    // 0x801DD96C: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    func_801CDA88_63C8D8(rdram, ctx);
        goto after_2;
    // 0x801DD96C: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x801DD970: lwc1        $f6, 0xE8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x801DD974: lwc1        $f18, 0xDC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x801DD978: lwc1        $f10, 0xEC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x801DD97C: lwc1        $f8, 0xE0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x801DD980: add.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x801DD984: lwc1        $f18, 0xE4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x801DD988: lwc1        $f6, 0xF0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x801DD98C: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x801DD990: swc1        $f4, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f4.u32l;
    // 0x801DD994: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x801DD998: add.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x801DD99C: andi        $t9, $s0, 0xFF
    ctx->r25 = ctx->r16 & 0XFF;
    // 0x801DD9A0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x801DD9A4: swc1        $f16, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f16.u32l;
    // 0x801DD9A8: swc1        $f4, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f4.u32l;
    // 0x801DD9AC: bne         $t9, $zero, L_801DD908
    if (ctx->r25 != 0) {
        // 0x801DD9B0: or          $s0, $t9, $zero
        ctx->r16 = ctx->r25 | 0;
            goto L_801DD908;
    }
    // 0x801DD9B0: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    // 0x801DD9B4: lui         $at, 0xC396
    ctx->r1 = S32(0XC396 << 16);
    // 0x801DD9B8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801DD9BC: lwc1        $f10, 0xA0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x801DD9C0: lwc1        $f6, 0xA4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x801DD9C4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801DD9C8: mul.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x801DD9CC: lui         $at, 0xC1C8
    ctx->r1 = S32(0XC1C8 << 16);
    // 0x801DD9D0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801DD9D4: mul.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x801DD9D8: lwc1        $f10, 0xA8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x801DD9DC: addiu       $t0, $sp, 0xEC
    ctx->r8 = ADD32(ctx->r29, 0XEC);
    // 0x801DD9E0: addiu       $t1, $sp, 0xF0
    ctx->r9 = ADD32(ctx->r29, 0XF0);
    // 0x801DD9E4: swc1        $f16, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f16.u32l;
    // 0x801DD9E8: mul.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x801DD9EC: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x801DD9F0: swc1        $f4, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f4.u32l;
    // 0x801DD9F4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x801DD9F8: lhu         $a0, 0x98($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X98);
    // 0x801DD9FC: lhu         $a1, 0x9A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X9A);
    // 0x801DDA00: lhu         $a2, 0x9C($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X9C);
    // 0x801DDA04: swc1        $f16, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f16.u32l;
    // 0x801DDA08: jal         0x80033898
    // 0x801DDA0C: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    func_80033898_34498(rdram, ctx);
        goto after_3;
    // 0x801DDA0C: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    after_3:
    // 0x801DDA10: lwc1        $f6, 0xE8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x801DDA14: lwc1        $f18, 0x5C($s3)
    ctx->f18.u32l = MEM_W(ctx->r19, 0X5C);
    // 0x801DDA18: lwc1        $f10, 0xEC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x801DDA1C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DDA20: add.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x801DDA24: lwc1        $f6, 0xF0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x801DDA28: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x801DDA2C: addiu       $t2, $sp, 0xE0
    ctx->r10 = ADD32(ctx->r29, 0XE0);
    // 0x801DDA30: swc1        $f4, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f4.u32l;
    // 0x801DDA34: lwc1        $f8, 0x60($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0X60);
    // 0x801DDA38: addiu       $t3, $sp, 0xE4
    ctx->r11 = ADD32(ctx->r29, 0XE4);
    // 0x801DDA3C: lhu         $a0, 0x98($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X98);
    // 0x801DDA40: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x801DDA44: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801DDA48: lhu         $a1, 0x9A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X9A);
    // 0x801DDA4C: lhu         $a2, 0x9C($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X9C);
    // 0x801DDA50: swc1        $f16, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f16.u32l;
    // 0x801DDA54: lwc1        $f18, 0x64($s3)
    ctx->f18.u32l = MEM_W(ctx->r19, 0X64);
    // 0x801DDA58: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x801DDA5C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x801DDA60: add.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x801DDA64: addiu       $a3, $sp, 0xDC
    ctx->r7 = ADD32(ctx->r29, 0XDC);
    // 0x801DDA68: swc1        $f0, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f0.u32l;
    // 0x801DDA6C: swc1        $f0, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f0.u32l;
    // 0x801DDA70: swc1        $f4, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f4.u32l;
    // 0x801DDA74: jal         0x80033898
    // 0x801DDA78: swc1        $f10, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f10.u32l;
    func_80033898_34498(rdram, ctx);
        goto after_4;
    // 0x801DDA78: swc1        $f10, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f10.u32l;
    after_4:
    // 0x801DDA7C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DDA80: addiu       $t4, $sp, 0xD4
    ctx->r12 = ADD32(ctx->r29, 0XD4);
    // 0x801DDA84: addiu       $t5, $sp, 0xD8
    ctx->r13 = ADD32(ctx->r29, 0XD8);
    // 0x801DDA88: swc1        $f20, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f20.u32l;
    // 0x801DDA8C: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x801DDA90: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x801DDA94: lhu         $a0, 0x98($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X98);
    // 0x801DDA98: lhu         $a1, 0x9A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X9A);
    // 0x801DDA9C: lhu         $a2, 0x9C($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X9C);
    // 0x801DDAA0: addiu       $a3, $sp, 0xD0
    ctx->r7 = ADD32(ctx->r29, 0XD0);
    // 0x801DDAA4: swc1        $f0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f0.u32l;
    // 0x801DDAA8: jal         0x80033898
    // 0x801DDAAC: swc1        $f0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f0.u32l;
    func_80033898_34498(rdram, ctx);
        goto after_5;
    // 0x801DDAAC: swc1        $f0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x801DDAB0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DDAB4: addiu       $t6, $sp, 0xC8
    ctx->r14 = ADD32(ctx->r29, 0XC8);
    // 0x801DDAB8: addiu       $t7, $sp, 0xCC
    ctx->r15 = ADD32(ctx->r29, 0XCC);
    // 0x801DDABC: swc1        $f24, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f24.u32l;
    // 0x801DDAC0: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801DDAC4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801DDAC8: lhu         $a0, 0x98($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X98);
    // 0x801DDACC: lhu         $a1, 0x9A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X9A);
    // 0x801DDAD0: lhu         $a2, 0x9C($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X9C);
    // 0x801DDAD4: addiu       $a3, $sp, 0xC4
    ctx->r7 = ADD32(ctx->r29, 0XC4);
    // 0x801DDAD8: swc1        $f0, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f0.u32l;
    // 0x801DDADC: jal         0x80033898
    // 0x801DDAE0: swc1        $f0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f0.u32l;
    func_80033898_34498(rdram, ctx);
        goto after_6;
    // 0x801DDAE0: swc1        $f0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f0.u32l;
    after_6:
    // 0x801DDAE4: addiu       $s0, $zero, 0x5
    ctx->r16 = ADD32(0, 0X5);
    // 0x801DDAE8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x801DDAEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801DDAF0: jal         0x801DFBE0
    // 0x801DDAF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_801DFBE0_64EA30(rdram, ctx);
        goto after_7;
    // 0x801DDAF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x801DDAF8: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801DDAFC: ldc1        $f30, -0xD10($at)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r1, -0XD10);
    // 0x801DDB00: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801DDB04: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x801DDB08: ldc1        $f28, -0xD08($at)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r1, -0XD08);
    // 0x801DDB0C: addiu       $s2, $zero, -0x2
    ctx->r18 = ADD32(0, -0X2);
L_801DDB10:
    // 0x801DDB10: jal         0x8000DD58
    // 0x801DDB14: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_8000DD58_E958(rdram, ctx);
        goto after_8;
    // 0x801DDB14: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_8:
    // 0x801DDB18: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x801DDB1C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x801DDB20: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x801DDB24: cvt.d.s     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f6.d = CVT_D_S(ctx->f16.fl);
    // 0x801DDB28: mul.d       $f18, $f6, $f28
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f28.d); 
    ctx->f18.d = MUL_D(ctx->f6.d, ctx->f28.d);
    // 0x801DDB2C: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x801DDB30: cvt.d.s     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f10.d = CVT_D_S(ctx->f4.fl);
    // 0x801DDB34: add.d       $f8, $f10, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f30.d); 
    ctx->f8.d = ctx->f10.d + ctx->f30.d;
    // 0x801DDB38: jal         0x8000DD58
    // 0x801DDB3C: cvt.s.d     $f22, $f8
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f22.fl = CVT_S_D(ctx->f8.d);
    func_8000DD58_E958(rdram, ctx);
        goto after_9;
    // 0x801DDB3C: cvt.s.d     $f22, $f8
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f22.fl = CVT_S_D(ctx->f8.d);
    after_9:
    // 0x801DDB40: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x801DDB44: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x801DDB48: cvt.s.w     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    ctx->f6.fl = CVT_S_W(ctx->f16.u32l);
    // 0x801DDB4C: cvt.d.s     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f18.d = CVT_D_S(ctx->f6.fl);
    // 0x801DDB50: mul.d       $f4, $f18, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f28.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f28.d);
    // 0x801DDB54: cvt.s.d     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f10.fl = CVT_S_D(ctx->f4.d);
    // 0x801DDB58: cvt.d.s     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f8.d = CVT_D_S(ctx->f10.fl);
    // 0x801DDB5C: add.d       $f16, $f8, $f30
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f30.d); 
    ctx->f16.d = ctx->f8.d + ctx->f30.d;
    // 0x801DDB60: jal         0x8000DD58
    // 0x801DDB64: cvt.s.d     $f24, $f16
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f24.fl = CVT_S_D(ctx->f16.d);
    func_8000DD58_E958(rdram, ctx);
        goto after_10;
    // 0x801DDB64: cvt.s.d     $f24, $f16
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f24.fl = CVT_S_D(ctx->f16.d);
    after_10:
    // 0x801DDB68: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x801DDB6C: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x801DDB70: cvt.s.w     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    ctx->f18.fl = CVT_S_W(ctx->f6.u32l);
    // 0x801DDB74: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801DDB78: mul.d       $f10, $f4, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f28.d); 
    ctx->f10.d = MUL_D(ctx->f4.d, ctx->f28.d);
    // 0x801DDB7C: cvt.s.d     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f8.fl = CVT_S_D(ctx->f10.d);
    // 0x801DDB80: cvt.d.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f16.d = CVT_D_S(ctx->f8.fl);
    // 0x801DDB84: add.d       $f6, $f16, $f30
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f30.d); 
    ctx->f6.d = ctx->f16.d + ctx->f30.d;
    // 0x801DDB88: jal         0x8000DD58
    // 0x801DDB8C: cvt.s.d     $f26, $f6
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f26.fl = CVT_S_D(ctx->f6.d);
    func_8000DD58_E958(rdram, ctx);
        goto after_11;
    // 0x801DDB8C: cvt.s.d     $f26, $f6
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f26.fl = CVT_S_D(ctx->f6.d);
    after_11:
    // 0x801DDB90: addiu       $t8, $v0, 0x1
    ctx->r24 = ADD32(ctx->r2, 0X1);
    // 0x801DDB94: and         $t9, $t8, $s2
    ctx->r25 = ctx->r24 & ctx->r18;
    // 0x801DDB98: addiu       $t0, $t9, -0xA
    ctx->r8 = ADD32(ctx->r25, -0XA);
    // 0x801DDB9C: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x801DDBA0: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x801DDBA4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801DDBA8: cvt.s.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801DDBAC: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x801DDBB0: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x801DDBB4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801DDBB8: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801DDBBC: ldc1        $f4, -0xD00($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0XD00);
    // 0x801DDBC0: add.s       $f20, $f18, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x801DDBC4: lwc1        $f10, 0xE8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x801DDBC8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DDBCC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801DDBD0: cvt.d.s     $f8, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f8.d = CVT_D_S(ctx->f20.fl);
    // 0x801DDBD4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801DDBD8: div.d       $f6, $f8, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f6.d = DIV_D(ctx->f8.d, ctx->f16.d);
    // 0x801DDBDC: lwc1        $f8, 0xDC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x801DDBE0: addiu       $a3, $zero, 0xC0
    ctx->r7 = ADD32(0, 0XC0);
    // 0x801DDBE4: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801DDBE8: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801DDBEC: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801DDBF0: mul.d       $f18, $f6, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f4.d); 
    ctx->f18.d = MUL_D(ctx->f6.d, ctx->f4.d);
    // 0x801DDBF4: lwc1        $f4, 0xD0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x801DDBF8: mul.s       $f16, $f8, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f22.fl);
    // 0x801DDBFC: cvt.s.d     $f20, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f20.fl = CVT_S_D(ctx->f18.d);
    // 0x801DDC00: mul.s       $f18, $f4, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f18.fl = MUL_S(ctx->f4.fl, ctx->f24.fl);
    // 0x801DDC04: add.s       $f6, $f10, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801DDC08: lwc1        $f10, 0xC4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x801DDC0C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x801DDC10: mul.s       $f16, $f10, $f26
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f26.fl);
    // 0x801DDC14: add.s       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x801DDC18: lwc1        $f18, 0xE0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x801DDC1C: lwc1        $f6, 0xEC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x801DDC20: mul.s       $f10, $f18, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f22.fl);
    // 0x801DDC24: add.s       $f4, $f16, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x801DDC28: lwc1        $f8, 0xD4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x801DDC2C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801DDC30: mul.s       $f4, $f8, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f24.fl);
    // 0x801DDC34: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x801DDC38: lwc1        $f6, 0xC8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x801DDC3C: mul.s       $f10, $f6, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f26.fl);
    // 0x801DDC40: add.s       $f18, $f16, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x801DDC44: lwc1        $f4, 0xE4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x801DDC48: lwc1        $f16, 0xF0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x801DDC4C: mul.s       $f6, $f4, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f22.fl);
    // 0x801DDC50: add.s       $f8, $f10, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x801DDC54: lwc1        $f18, 0xD8($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x801DDC58: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x801DDC5C: mul.s       $f8, $f18, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f24.fl);
    // 0x801DDC60: add.s       $f10, $f16, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x801DDC64: lwc1        $f16, 0xCC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x801DDC68: mul.s       $f6, $f16, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f26.fl);
    // 0x801DDC6C: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x801DDC70: add.s       $f18, $f6, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x801DDC74: jal         0x801DFC60
    // 0x801DDC78: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    func_801DFC60_64EAB0(rdram, ctx);
        goto after_12;
    // 0x801DDC78: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    after_12:
    // 0x801DDC7C: lwc1        $f10, 0xE8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x801DDC80: lwc1        $f8, 0xDC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x801DDC84: lwc1        $f6, 0xEC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x801DDC88: lwc1        $f4, 0xE0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x801DDC8C: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x801DDC90: lwc1        $f8, 0xE4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x801DDC94: lwc1        $f10, 0xF0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x801DDC98: add.s       $f18, $f6, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x801DDC9C: swc1        $f16, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f16.u32l;
    // 0x801DDCA0: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x801DDCA4: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x801DDCA8: andi        $t1, $s0, 0xFF
    ctx->r9 = ctx->r16 & 0XFF;
    // 0x801DDCAC: swc1        $f18, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f18.u32l;
    // 0x801DDCB0: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
    // 0x801DDCB4: bne         $t1, $zero, L_801DDB10
    if (ctx->r9 != 0) {
        // 0x801DDCB8: swc1        $f16, 0xF0($sp)
        MEM_W(0XF0, ctx->r29) = ctx->f16.u32l;
            goto L_801DDB10;
    }
    // 0x801DDCB8: swc1        $f16, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f16.u32l;
    // 0x801DDCBC: lw          $v0, 0xEC($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XEC);
    // 0x801DDCC0: lhu         $t2, 0xE2($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0XE2);
    // 0x801DDCC4: andi        $t3, $t2, 0x2
    ctx->r11 = ctx->r10 & 0X2;
    // 0x801DDCC8: bnel        $t3, $zero, L_801DDD20
    if (ctx->r11 != 0) {
        // 0x801DDCCC: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_801DDD20;
    }
    goto skip_0;
    // 0x801DDCCC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    skip_0:
    // 0x801DDCD0: lhu         $t4, 0xE6($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0XE6);
    // 0x801DDCD4: addiu       $at, $zero, 0x29A
    ctx->r1 = ADD32(0, 0X29A);
    // 0x801DDCD8: bne         $t4, $at, L_801DDCF8
    if (ctx->r12 != ctx->r1) {
        // 0x801DDCDC: nop
    
            goto L_801DDCF8;
    }
    // 0x801DDCDC: nop

    // 0x801DDCE0: jal         0x80038B98
    // 0x801DDCE4: addiu       $a0, $zero, 0x29B
    ctx->r4 = ADD32(0, 0X29B);
    func_80038B98_39798(rdram, ctx);
        goto after_13;
    // 0x801DDCE4: addiu       $a0, $zero, 0x29B
    ctx->r4 = ADD32(0, 0X29B);
    after_13:
    // 0x801DDCE8: lw          $t6, 0xEC($s3)
    ctx->r14 = MEM_W(ctx->r19, 0XEC);
    // 0x801DDCEC: addiu       $t5, $zero, 0x29B
    ctx->r13 = ADD32(0, 0X29B);
    // 0x801DDCF0: b           L_801DDD0C
    // 0x801DDCF4: sh          $t5, 0xE6($t6)
    MEM_H(0XE6, ctx->r14) = ctx->r13;
        goto L_801DDD0C;
    // 0x801DDCF4: sh          $t5, 0xE6($t6)
    MEM_H(0XE6, ctx->r14) = ctx->r13;
L_801DDCF8:
    // 0x801DDCF8: jal         0x80038B98
    // 0x801DDCFC: addiu       $a0, $zero, 0x29A
    ctx->r4 = ADD32(0, 0X29A);
    func_80038B98_39798(rdram, ctx);
        goto after_14;
    // 0x801DDCFC: addiu       $a0, $zero, 0x29A
    ctx->r4 = ADD32(0, 0X29A);
    after_14:
    // 0x801DDD00: lw          $t8, 0xEC($s3)
    ctx->r24 = MEM_W(ctx->r19, 0XEC);
    // 0x801DDD04: addiu       $t7, $zero, 0x29A
    ctx->r15 = ADD32(0, 0X29A);
    // 0x801DDD08: sh          $t7, 0xE6($t8)
    MEM_H(0XE6, ctx->r24) = ctx->r15;
L_801DDD0C:
    // 0x801DDD0C: lw          $v0, 0xEC($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XEC);
    // 0x801DDD10: lhu         $t9, 0xE2($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0XE2);
    // 0x801DDD14: ori         $t0, $t9, 0x2
    ctx->r8 = ctx->r25 | 0X2;
    // 0x801DDD18: sh          $t0, 0xE2($v0)
    MEM_H(0XE2, ctx->r2) = ctx->r8;
    // 0x801DDD1C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
L_801DDD20:
    // 0x801DDD20: jal         0x801E8850
    // 0x801DDD24: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_801E8850_6576A0(rdram, ctx);
        goto after_15;
    // 0x801DDD24: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_15:
    // 0x801DDD28: jal         0x801DBEB0
    // 0x801DDD2C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_801DBEB0_64AD00(rdram, ctx);
        goto after_16;
    // 0x801DDD2C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_16:
    // 0x801DDD30: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
    // 0x801DDD34: ldc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X40);
    // 0x801DDD38: ldc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X48);
    // 0x801DDD3C: ldc1        $f24, 0x50($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X50);
    // 0x801DDD40: ldc1        $f26, 0x58($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X58);
    // 0x801DDD44: ldc1        $f28, 0x60($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X60);
    // 0x801DDD48: ldc1        $f30, 0x68($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X68);
    // 0x801DDD4C: lw          $s0, 0x74($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X74);
    // 0x801DDD50: lw          $s1, 0x78($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X78);
    // 0x801DDD54: lw          $s2, 0x7C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X7C);
    // 0x801DDD58: lw          $s3, 0x80($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X80);
    // 0x801DDD5C: jr          $ra
    // 0x801DDD60: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
    TRACE_RETURN()
    return;
    // 0x801DDD60: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
;}
RECOMP_FUNC void func_801E309C_651EEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E309C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801E30A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E30A4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801E30A8: lw          $v0, 0xEC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XEC);
    // 0x801E30AC: lh          $t6, 0x0($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X0);
    // 0x801E30B0: andi        $t7, $t6, 0x2000
    ctx->r15 = ctx->r14 & 0X2000;
    // 0x801E30B4: beql        $t7, $zero, L_801E31BC
    if (ctx->r15 == 0) {
        // 0x801E30B8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E31BC;
    }
    goto skip_0;
    // 0x801E30B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801E30BC: lwc1        $f0, 0x324($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X324);
    // 0x801E30C0: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801E30C4: ldc1        $f6, -0xB98($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0XB98);
    // 0x801E30C8: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x801E30CC: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    // 0x801E30D0: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x801E30D4: lwc1        $f10, 0x64($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X64);
    // 0x801E30D8: cvt.s.d     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f0.fl = CVT_S_D(ctx->f8.d);
    // 0x801E30DC: c.le.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl <= ctx->f10.fl;
    // 0x801E30E0: nop

    // 0x801E30E4: bc1fl       L_801E31BC
    if (!c1cs) {
        // 0x801E30E8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E31BC;
    }
    goto skip_1;
    // 0x801E30E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x801E30EC: jal         0x80036260
    // 0x801E30F0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_80036260_36E60(rdram, ctx);
        goto after_0;
    // 0x801E30F0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x801E30F4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x801E30F8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x801E30FC: jal         0x80035EEC
    // 0x801E3100: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80035EEC_36AEC(rdram, ctx);
        goto after_1;
    // 0x801E3100: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x801E3104: beq         $v0, $zero, L_801E31B8
    if (ctx->r2 == 0) {
        // 0x801E3108: addiu       $t8, $zero, 0x4BA
        ctx->r24 = ADD32(0, 0X4BA);
            goto L_801E31B8;
    }
    // 0x801E3108: addiu       $t8, $zero, 0x4BA
    ctx->r24 = ADD32(0, 0X4BA);
    // 0x801E310C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E3110: addiu       $t9, $zero, 0x19
    ctx->r25 = ADD32(0, 0X19);
    // 0x801E3114: addiu       $t0, $zero, 0x280
    ctx->r8 = ADD32(0, 0X280);
    // 0x801E3118: addiu       $t1, $zero, 0xF0
    ctx->r9 = ADD32(0, 0XF0);
    // 0x801E311C: sb          $zero, 0x5($v0)
    MEM_B(0X5, ctx->r2) = 0;
    // 0x801E3120: sh          $t8, 0xC($v0)
    MEM_H(0XC, ctx->r2) = ctx->r24;
    // 0x801E3124: sh          $t9, 0xE($v0)
    MEM_H(0XE, ctx->r2) = ctx->r25;
    // 0x801E3128: sh          $t0, 0x10($v0)
    MEM_H(0X10, ctx->r2) = ctx->r8;
    // 0x801E312C: sh          $t1, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r9;
    // 0x801E3130: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801E3134: swc1        $f0, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f0.u32l;
    // 0x801E3138: swc1        $f0, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f0.u32l;
    // 0x801E313C: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x801E3140: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x801E3144: lwc1        $f16, -0xB90($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0XB90);
    // 0x801E3148: lui         $at, 0x436F
    ctx->r1 = S32(0X436F << 16);
    // 0x801E314C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801E3150: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x801E3154: addiu       $t3, $zero, 0x13F
    ctx->r11 = ADD32(0, 0X13F);
    // 0x801E3158: addiu       $t4, $zero, 0xEF
    ctx->r12 = ADD32(0, 0XEF);
    // 0x801E315C: sb          $t2, 0x2C($v0)
    MEM_B(0X2C, ctx->r2) = ctx->r10;
    // 0x801E3160: sh          $zero, 0x2E($v0)
    MEM_H(0X2E, ctx->r2) = 0;
    // 0x801E3164: sh          $zero, 0x32($v0)
    MEM_H(0X32, ctx->r2) = 0;
    // 0x801E3168: sh          $t3, 0x30($v0)
    MEM_H(0X30, ctx->r2) = ctx->r11;
    // 0x801E316C: sh          $t4, 0x34($v0)
    MEM_H(0X34, ctx->r2) = ctx->r12;
    // 0x801E3170: lui         $a0, 0x800
    ctx->r4 = S32(0X800 << 16);
    // 0x801E3174: swc1        $f16, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f16.u32l;
    // 0x801E3178: swc1        $f18, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f18.u32l;
    // 0x801E317C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x801E3180: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x801E3184: jal         0x80014840
    // 0x801E3188: addiu       $a1, $zero, 0x4BA
    ctx->r5 = ADD32(0, 0X4BA);
    func_80014840_15440(rdram, ctx);
        goto after_2;
    // 0x801E3188: addiu       $a1, $zero, 0x4BA
    ctx->r5 = ADD32(0, 0X4BA);
    after_2:
    // 0x801E318C: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x801E3190: lui         $a0, 0x802
    ctx->r4 = S32(0X802 << 16);
    // 0x801E3194: addiu       $a0, $a0, 0x5800
    ctx->r4 = ADD32(ctx->r4, 0X5800);
    // 0x801E3198: addiu       $a1, $zero, 0x4BA
    ctx->r5 = ADD32(0, 0X4BA);
    // 0x801E319C: jal         0x80014840
    // 0x801E31A0: sw          $v0, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->r2;
    func_80014840_15440(rdram, ctx);
        goto after_3;
    // 0x801E31A0: sw          $v0, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->r2;
    after_3:
    // 0x801E31A4: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x801E31A8: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E31AC: addiu       $a0, $a0, 0x31C8
    ctx->r4 = ADD32(ctx->r4, 0X31C8);
    // 0x801E31B0: jal         0x8003521C
    // 0x801E31B4: sw          $v0, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->r2;
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801E31B4: sw          $v0, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->r2;
    after_4:
L_801E31B8:
    // 0x801E31B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E31BC:
    // 0x801E31BC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801E31C0: jr          $ra
    // 0x801E31C4: nop

    TRACE_RETURN()
    return;
    // 0x801E31C4: nop

;}
