#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_801D61D0_645020(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D61D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D61D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D61D8: lw          $v1, 0xB4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XB4);
    // 0x801D61DC: lw          $t6, 0xB0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XB0);
    // 0x801D61E0: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x801D61E4: addu        $v0, $t6, $v1
    ctx->r2 = ADD32(ctx->r14, ctx->r3);
    // 0x801D61E8: beq         $v0, $zero, L_801D61F8
    if (ctx->r2 == 0) {
        // 0x801D61EC: xor         $t7, $v0, $v1
        ctx->r15 = ctx->r2 ^ ctx->r3;
            goto L_801D61F8;
    }
    // 0x801D61EC: xor         $t7, $v0, $v1
    ctx->r15 = ctx->r2 ^ ctx->r3;
    // 0x801D61F0: bltz        $t7, L_801D6200
    if (SIGNED(ctx->r15) < 0) {
        // 0x801D61F4: nop
    
            goto L_801D6200;
    }
    // 0x801D61F4: nop

L_801D61F8:
    // 0x801D61F8: sb          $t8, 0xA1($a0)
    MEM_B(0XA1, ctx->r4) = ctx->r24;
    // 0x801D61FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D6200:
    // 0x801D6200: jal         0x801D6934
    // 0x801D6204: sw          $v0, 0xB0($a0)
    MEM_W(0XB0, ctx->r4) = ctx->r2;
    func_801D6934_645784(rdram, ctx);
        goto after_0;
    // 0x801D6204: sw          $v0, 0xB0($a0)
    MEM_W(0XB0, ctx->r4) = ctx->r2;
    after_0:
    // 0x801D6208: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D620C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D6210: jr          $ra
    // 0x801D6214: nop

    TRACE_RETURN()
    return;
    // 0x801D6214: nop

;}
RECOMP_FUNC void func_801DDEFC_64CD4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DDEFC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801DDF00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DDF04: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x801DDF08: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801DDF0C: lw          $v0, 0xA0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XA0);
    // 0x801DDF10: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801DDF14: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801DDF18: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x801DDF1C: lwc1        $f16, 0x60($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X60);
    // 0x801DDF20: addiu       $t6, $v0, -0xFA0
    ctx->r14 = ADD32(ctx->r2, -0XFA0);
    // 0x801DDF24: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801DDF28: sw          $t6, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->r14;
    // 0x801DDF2C: lwc1        $f12, 0x64($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X64);
    // 0x801DDF30: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x801DDF34: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x801DDF38: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801DDF3C: add.s       $f2, $f16, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x801DDF40: jal         0x801CBC94
    // 0x801DDF44: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    func_801CBC94_63AAE4(rdram, ctx);
        goto after_0;
    // 0x801DDF44: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    after_0:
    // 0x801DDF48: lwc1        $f2, 0x1C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x801DDF4C: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x801DDF50: addiu       $v1, $zero, 0xC
    ctx->r3 = ADD32(0, 0XC);
    // 0x801DDF54: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x801DDF58: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x801DDF5C: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801DDF60: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x801DDF64: bc1fl       L_801DDFCC
    if (!c1cs) {
        // 0x801DDF68: swc1        $f2, 0x60($a1)
        MEM_W(0X60, ctx->r5) = ctx->f2.u32l;
            goto L_801DDFCC;
    }
    goto skip_0;
    // 0x801DDF68: swc1        $f2, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->f2.u32l;
    skip_0:
    // 0x801DDF6C: lw          $v0, 0xEC($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XEC);
    // 0x801DDF70: sb          $t7, 0x9C($a1)
    MEM_B(0X9C, ctx->r5) = ctx->r15;
    // 0x801DDF74: lwc1        $f18, -0xCF0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0XCF0);
    // 0x801DDF78: sh          $t8, 0xE0($v0)
    MEM_H(0XE0, ctx->r2) = ctx->r24;
    // 0x801DDF7C: sh          $v1, 0xDE($v0)
    MEM_H(0XDE, ctx->r2) = ctx->r3;
    // 0x801DDF80: sh          $v1, 0xDC($v0)
    MEM_H(0XDC, ctx->r2) = ctx->r3;
    // 0x801DDF84: swc1        $f18, 0xD8($v0)
    MEM_W(0XD8, ctx->r2) = ctx->f18.u32l;
    // 0x801DDF88: lw          $t9, 0xEC($a1)
    ctx->r25 = MEM_W(ctx->r5, 0XEC);
    // 0x801DDF8C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x801DDF90: addiu       $a0, $zero, 0x2A0
    ctx->r4 = ADD32(0, 0X2A0);
    // 0x801DDF94: lhu         $t0, 0xE2($t9)
    ctx->r8 = MEM_HU(ctx->r25, 0XE2);
    // 0x801DDF98: andi        $t1, $t0, 0x8
    ctx->r9 = ctx->r8 & 0X8;
    // 0x801DDF9C: bnel        $t1, $zero, L_801DDFCC
    if (ctx->r9 != 0) {
        // 0x801DDFA0: swc1        $f2, 0x60($a1)
        MEM_W(0X60, ctx->r5) = ctx->f2.u32l;
            goto L_801DDFCC;
    }
    goto skip_1;
    // 0x801DDFA0: swc1        $f2, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->f2.u32l;
    skip_1:
    // 0x801DDFA4: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    // 0x801DDFA8: jal         0x80038B98
    // 0x801DDFAC: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    func_80038B98_39798(rdram, ctx);
        goto after_1;
    // 0x801DDFAC: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    after_1:
    // 0x801DDFB0: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x801DDFB4: lwc1        $f2, 0x1C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x801DDFB8: lw          $v0, 0xEC($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XEC);
    // 0x801DDFBC: lhu         $t2, 0xE2($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0XE2);
    // 0x801DDFC0: ori         $t3, $t2, 0x8
    ctx->r11 = ctx->r10 | 0X8;
    // 0x801DDFC4: sh          $t3, 0xE2($v0)
    MEM_H(0XE2, ctx->r2) = ctx->r11;
    // 0x801DDFC8: swc1        $f2, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->f2.u32l;
L_801DDFCC:
    // 0x801DDFCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DDFD0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801DDFD4: jr          $ra
    // 0x801DDFD8: nop

    TRACE_RETURN()
    return;
    // 0x801DDFD8: nop

;}
RECOMP_FUNC void func_801D19D4_640824(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D19D4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801D19D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D19DC: lw          $v0, 0xE8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XE8);
    // 0x801D19E0: lb          $a2, 0xC6($v0)
    ctx->r6 = MEM_B(ctx->r2, 0XC6);
    // 0x801D19E4: slti        $t6, $a2, 0x0
    ctx->r14 = SIGNED(ctx->r6) < 0X0 ? 1 : 0;
    // 0x801D19E8: andi        $a2, $t6, 0xFF
    ctx->r6 = ctx->r14 & 0XFF;
    // 0x801D19EC: sb          $a2, 0x64($a1)
    MEM_B(0X64, ctx->r5) = ctx->r6;
    // 0x801D19F0: lb          $v1, 0xC4($v0)
    ctx->r3 = MEM_B(ctx->r2, 0XC4);
    // 0x801D19F4: bltz        $v1, L_801D1A78
    if (SIGNED(ctx->r3) < 0) {
        // 0x801D19F8: nop
    
            goto L_801D1A78;
    }
    // 0x801D19F8: nop

    // 0x801D19FC: lb          $t8, 0xD8($a0)
    ctx->r24 = MEM_B(ctx->r4, 0XD8);
    // 0x801D1A00: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x801D1A04: lui         $t0, 0x801F
    ctx->r8 = S32(0X801F << 16);
    // 0x801D1A08: beq         $v1, $t8, L_801D1A1C
    if (ctx->r3 == ctx->r24) {
        // 0x801D1A0C: addu        $t0, $t0, $t9
        ctx->r8 = ADD32(ctx->r8, ctx->r25);
            goto L_801D1A1C;
    }
    // 0x801D1A0C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x801D1A10: sb          $v1, 0xD8($a0)
    MEM_B(0XD8, ctx->r4) = ctx->r3;
    // 0x801D1A14: lw          $t0, -0x76F0($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X76F0);
    // 0x801D1A18: sw          $t0, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r8;
L_801D1A1C:
    // 0x801D1A1C: lwc1        $f4, 0xBC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XBC);
    // 0x801D1A20: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D1A24: ldc1        $f0, -0x1020($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X1020);
    // 0x801D1A28: swc1        $f4, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f4.u32l;
    // 0x801D1A2C: lwc1        $f2, 0x5C($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X5C);
    // 0x801D1A30: lwc1        $f12, 0x60($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X60);
    // 0x801D1A34: lwc1        $f14, 0x64($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X64);
    // 0x801D1A38: cvt.d.s     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.d = CVT_D_S(ctx->f2.fl);
    // 0x801D1A3C: cvt.d.s     $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f16.d = CVT_D_S(ctx->f12.fl);
    // 0x801D1A40: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801D1A44: cvt.d.s     $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f6.d = CVT_D_S(ctx->f14.fl);
    // 0x801D1A48: swc1        $f2, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f2.u32l;
    // 0x801D1A4C: swc1        $f12, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f12.u32l;
    // 0x801D1A50: mul.d       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f0.d);
    // 0x801D1A54: swc1        $f14, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f14.u32l;
    // 0x801D1A58: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801D1A5C: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801D1A60: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x801D1A64: swc1        $f10, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f10.u32l;
    // 0x801D1A68: swc1        $f4, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f4.u32l;
    // 0x801D1A6C: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801D1A70: swc1        $f10, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f10.u32l;
    // 0x801D1A74: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
L_801D1A78:
    // 0x801D1A78: bne         $a2, $zero, L_801D1A8C
    if (ctx->r6 != 0) {
        // 0x801D1A7C: lwc1        $f14, 0x1C($sp)
        ctx->f14.u32l = MEM_W(ctx->r29, 0X1C);
            goto L_801D1A8C;
    }
    // 0x801D1A7C: lwc1        $f14, 0x1C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x801D1A80: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    // 0x801D1A84: jal         0x801CD780
    // 0x801D1A88: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    func_801CD780_63C5D0(rdram, ctx);
        goto after_0;
    // 0x801D1A88: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    after_0:
L_801D1A8C:
    // 0x801D1A8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D1A90: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801D1A94: jr          $ra
    // 0x801D1A98: nop

    TRACE_RETURN()
    return;
    // 0x801D1A98: nop

;}
RECOMP_FUNC void func_801CD124_63BF74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CD124: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CD128: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CD12C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801CD130: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801CD134: lh          $a0, 0x1E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1E);
    // 0x801CD138: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x801CD13C: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    // 0x801CD140: jal         0x801CCBD0
    // 0x801CD144: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_801CCBD0_63BA20(rdram, ctx);
        goto after_0;
    // 0x801CD144: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x801CD148: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801CD14C: jal         0x801CD164
    // 0x801CD150: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_801CD164_63BFB4(rdram, ctx);
        goto after_1;
    // 0x801CD150: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_1:
    // 0x801CD154: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CD158: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CD15C: jr          $ra
    // 0x801CD160: nop

    TRACE_RETURN()
    return;
    // 0x801CD160: nop

;}
RECOMP_FUNC void func_801E6348_655198(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E6348: addiu       $sp, $sp, -0x110
    ctx->r29 = ADD32(ctx->r29, -0X110);
    // 0x801E634C: sw          $s6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r22;
    // 0x801E6350: sw          $s5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r21;
    // 0x801E6354: sw          $s4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r20;
    // 0x801E6358: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x801E635C: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x801E6360: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x801E6364: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x801E6368: sdc1        $f28, 0x20($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X20, ctx->r29);
    // 0x801E636C: sdc1        $f26, 0x18($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X18, ctx->r29);
    // 0x801E6370: sdc1        $f24, 0x10($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X10, ctx->r29);
    // 0x801E6374: sdc1        $f22, 0x8($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X8, ctx->r29);
    // 0x801E6378: sdc1        $f20, 0x0($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X0, ctx->r29);
    // 0x801E637C: sw          $a0, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->r4;
    // 0x801E6380: sw          $a1, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->r5;
    // 0x801E6384: lwc1        $f4, 0x4($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X4);
    // 0x801E6388: lw          $a1, 0x120($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X120);
    // 0x801E638C: lw          $s0, 0x124($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X124);
    // 0x801E6390: swc1        $f4, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f4.u32l;
    // 0x801E6394: lwc1        $f6, 0x4($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X4);
    // 0x801E6398: lwc1        $f8, 0xA0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x801E639C: lwc1        $f10, 0x8($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X8);
    // 0x801E63A0: swc1        $f6, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f6.u32l;
    // 0x801E63A4: lwc1        $f4, 0x8($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X8);
    // 0x801E63A8: sub.s       $f22, $f10, $f8
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f22.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x801E63AC: lwc1        $f8, 0x4($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X4);
    // 0x801E63B0: lwc1        $f10, 0x9C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x801E63B4: lw          $s1, 0x128($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X128);
    // 0x801E63B8: swc1        $f8, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f8.u32l;
    // 0x801E63BC: sub.s       $f24, $f4, $f10
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f24.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x801E63C0: lwc1        $f10, 0x4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4);
    // 0x801E63C4: lwc1        $f4, 0x98($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X98);
    // 0x801E63C8: lwc1        $f6, 0x8($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X8);
    // 0x801E63CC: swc1        $f10, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f10.u32l;
    // 0x801E63D0: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801E63D4: sub.s       $f26, $f6, $f4
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f26.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x801E63D8: lwc1        $f4, 0x4($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X4);
    // 0x801E63DC: lwc1        $f6, 0x94($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X94);
    // 0x801E63E0: lw          $s2, 0x12C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X12C);
    // 0x801E63E4: swc1        $f4, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f4.u32l;
    // 0x801E63E8: sub.s       $f16, $f8, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x801E63EC: lwc1        $f8, 0x90($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X90);
    // 0x801E63F0: lwc1        $f10, 0x8($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801E63F4: lwc1        $f6, 0x4($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X4);
    // 0x801E63F8: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x801E63FC: sub.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x801E6400: mul.s       $f8, $f22, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f22.fl, ctx->f22.fl);
    // 0x801E6404: swc1        $f6, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f6.u32l;
    // 0x801E6408: lwc1        $f10, 0x8C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x801E640C: mul.s       $f6, $f24, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = MUL_S(ctx->f24.fl, ctx->f24.fl);
    // 0x801E6410: lwc1        $f4, 0x8($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X8);
    // 0x801E6414: swc1        $f8, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f8.u32l;
    // 0x801E6418: sub.s       $f20, $f4, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x801E641C: mul.s       $f4, $f26, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = MUL_S(ctx->f26.fl, ctx->f26.fl);
    // 0x801E6420: swc1        $f6, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f6.u32l;
    // 0x801E6424: lwc1        $f8, 0x84($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X84);
    // 0x801E6428: lwc1        $f10, 0x88($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X88);
    // 0x801E642C: add.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x801E6430: swc1        $f4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f4.u32l;
    // 0x801E6434: lwc1        $f4, 0x80($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X80);
    // 0x801E6438: mul.s       $f10, $f16, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x801E643C: add.s       $f28, $f6, $f4
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f28.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x801E6440: mul.s       $f8, $f18, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x801E6444: swc1        $f28, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f28.u32l;
    // 0x801E6448: swc1        $f10, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f10.u32l;
    // 0x801E644C: mul.s       $f14, $f20, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f14.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x801E6450: lwc1        $f6, 0x78($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X78);
    // 0x801E6454: swc1        $f8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f8.u32l;
    // 0x801E6458: lwc1        $f4, 0x74($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X74);
    // 0x801E645C: mul.s       $f10, $f22, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f22.fl, ctx->f16.fl);
    // 0x801E6460: add.s       $f12, $f6, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x801E6464: mul.s       $f8, $f24, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f24.fl, ctx->f18.fl);
    // 0x801E6468: swc1        $f14, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f14.u32l;
    // 0x801E646C: swc1        $f12, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f12.u32l;
    // 0x801E6470: swc1        $f10, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f10.u32l;
    // 0x801E6474: add.s       $f2, $f12, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f12.fl + ctx->f14.fl;
    // 0x801E6478: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801E647C: swc1        $f8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f8.u32l;
    // 0x801E6480: sqrt.s      $f0, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f28.fl); 
    ctx->f0.fl = sqrtf(ctx->f28.fl);
    // 0x801E6484: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801E6488: swc1        $f2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f2.u32l;
    // 0x801E648C: mul.s       $f8, $f26, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f26.fl, ctx->f20.fl);
    // 0x801E6490: swc1        $f0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f0.u32l;
    // 0x801E6494: add.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x801E6498: lwc1        $f28, 0xAC($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x801E649C: sqrt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = sqrtf(ctx->f2.fl);
    // 0x801E64A0: swc1        $f10, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f10.u32l;
    // 0x801E64A4: swc1        $f8, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f8.u32l;
    // 0x801E64A8: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x801E64AC: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801E64B0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801E64B4: add.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x801E64B8: mul.s       $f6, $f0, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f28.fl);
    // 0x801E64BC: swc1        $f10, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f10.u32l;
    // 0x801E64C0: lwc1        $f8, 0x54($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801E64C4: div.s       $f14, $f8, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = DIV_S(ctx->f8.fl, ctx->f6.fl);
    // 0x801E64C8: mtc1        $at, $f15
    ctx->f_odd[(15 - 1) * 2] = ctx->r1;
    // 0x801E64CC: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801E64D0: c.lt.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl < ctx->f2.fl;
    // 0x801E64D4: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    // 0x801E64D8: bc1fl       L_801E64EC
    if (!c1cs) {
        // 0x801E64DC: mov.s       $f28, $f12
        CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 12);
    ctx->f28.fl = ctx->f12.fl;
            goto L_801E64EC;
    }
    goto skip_0;
    // 0x801E64DC: mov.s       $f28, $f12
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 12);
    ctx->f28.fl = ctx->f12.fl;
    skip_0:
    // 0x801E64E0: b           L_801E64EC
    // 0x801E64E4: neg.s       $f28, $f14
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f28.fl = -ctx->f14.fl;
        goto L_801E64EC;
    // 0x801E64E4: neg.s       $f28, $f14
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f28.fl = -ctx->f14.fl;
    // 0x801E64E8: mov.s       $f28, $f12
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 12);
    ctx->f28.fl = ctx->f12.fl;
L_801E64EC:
    // 0x801E64EC: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x801E64F0: cvt.d.s     $f4, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f28.fl); 
    ctx->f4.d = CVT_D_S(ctx->f28.fl);
    // 0x801E64F4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x801E64F8: c.lt.d      $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f4.d < ctx->f14.d;
    // 0x801E64FC: nop

    // 0x801E6500: bc1fl       L_801E653C
    if (!c1cs) {
        // 0x801E6504: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_801E653C;
    }
    goto skip_1;
    // 0x801E6504: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_1:
    // 0x801E6508: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x801E650C: nop

    // 0x801E6510: bc1fl       L_801E6524
    if (!c1cs) {
        // 0x801E6514: mov.s       $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
            goto L_801E6524;
    }
    goto skip_2;
    // 0x801E6514: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    skip_2:
    // 0x801E6518: b           L_801E6524
    // 0x801E651C: neg.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = -ctx->f12.fl;
        goto L_801E6524;
    // 0x801E651C: neg.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = -ctx->f12.fl;
    // 0x801E6520: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_801E6524:
    // 0x801E6524: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x801E6528: sub.d       $f8, $f10, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f14.d); 
    ctx->f8.d = ctx->f10.d - ctx->f14.d;
    // 0x801E652C: neg.d       $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = -ctx->f8.d;
    // 0x801E6530: b           L_801E6560
    // 0x801E6534: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
        goto L_801E6560;
    // 0x801E6534: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    // 0x801E6538: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_801E653C:
    // 0x801E653C: nop

    // 0x801E6540: bc1fl       L_801E6554
    if (!c1cs) {
        // 0x801E6544: mov.s       $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
            goto L_801E6554;
    }
    goto skip_3;
    // 0x801E6544: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    skip_3:
    // 0x801E6548: b           L_801E6554
    // 0x801E654C: neg.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = -ctx->f12.fl;
        goto L_801E6554;
    // 0x801E654C: neg.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = -ctx->f12.fl;
    // 0x801E6550: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_801E6554:
    // 0x801E6554: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x801E6558: sub.d       $f10, $f4, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f14.d); 
    ctx->f10.d = ctx->f4.d - ctx->f14.d;
    // 0x801E655C: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
L_801E6560:
    // 0x801E6560: ldc1        $f6, -0xB50($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0XB50);
    // 0x801E6564: cvt.d.s     $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f8.d = CVT_D_S(ctx->f12.fl);
    // 0x801E6568: lwc1        $f4, 0x74($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X74);
    // 0x801E656C: c.lt.d      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.d < ctx->f6.d;
    // 0x801E6570: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801E6574: bc1f        L_801E68D4
    if (!c1cs) {
        // 0x801E6578: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_801E68D4;
    }
    // 0x801E6578: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x801E657C: addiu       $t2, $s2, 0x8
    ctx->r10 = ADD32(ctx->r18, 0X8);
    // 0x801E6580: addiu       $t3, $s0, 0x8
    ctx->r11 = ADD32(ctx->r16, 0X8);
    // 0x801E6584: addiu       $t4, $s1, 0x8
    ctx->r12 = ADD32(ctx->r17, 0X8);
    // 0x801E6588: addiu       $t5, $a1, 0x8
    ctx->r13 = ADD32(ctx->r5, 0X8);
    // 0x801E658C: addiu       $s3, $a2, 0x8
    ctx->r19 = ADD32(ctx->r6, 0X8);
    // 0x801E6590: addiu       $s4, $a3, 0x8
    ctx->r20 = ADD32(ctx->r7, 0X8);
    // 0x801E6594: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801E6598: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_801E659C:
    // 0x801E659C: lwc1        $f4, 0x4($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X4);
    // 0x801E65A0: lwc1        $f10, 0x0($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X0);
    // 0x801E65A4: addiu       $t0, $v0, -0x1
    ctx->r8 = ADD32(ctx->r2, -0X1);
    // 0x801E65A8: sll         $t9, $t0, 3
    ctx->r25 = S32(ctx->r8 << 3);
    // 0x801E65AC: sub.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x801E65B0: lwc1        $f10, 0x0($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X0);
    // 0x801E65B4: lwc1        $f4, 0x4($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X4);
    // 0x801E65B8: addu        $t6, $sp, $t9
    ctx->r14 = ADD32(ctx->r29, ctx->r25);
    // 0x801E65BC: mul.s       $f6, $f22, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f22.fl, ctx->f8.fl);
    // 0x801E65C0: sub.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x801E65C4: addu        $t7, $sp, $t9
    ctx->r15 = ADD32(ctx->r29, ctx->r25);
    // 0x801E65C8: addiu       $t9, $sp, 0xE8
    ctx->r25 = ADD32(ctx->r29, 0XE8);
    // 0x801E65CC: sll         $t8, $t0, 3
    ctx->r24 = S32(ctx->r8 << 3);
    // 0x801E65D0: mul.s       $f4, $f24, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f24.fl, ctx->f8.fl);
    // 0x801E65D4: lwc1        $f8, 0x4($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X4);
    // 0x801E65D8: addu        $s5, $t8, $t9
    ctx->r21 = ADD32(ctx->r24, ctx->r25);
    // 0x801E65DC: c.eq.s      $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f22.fl == ctx->f2.fl;
    // 0x801E65E0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x801E65E4: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    // 0x801E65E8: mov.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.fl = ctx->f2.fl;
    // 0x801E65EC: add.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x801E65F0: lwc1        $f6, 0x0($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X0);
    // 0x801E65F4: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x801E65F8: addiu       $t2, $t2, -0x4
    ctx->r10 = ADD32(ctx->r10, -0X4);
    // 0x801E65FC: sub.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x801E6600: addiu       $t3, $t3, -0x4
    ctx->r11 = ADD32(ctx->r11, -0X4);
    // 0x801E6604: addiu       $t4, $t4, -0x4
    ctx->r12 = ADD32(ctx->r12, -0X4);
    // 0x801E6608: addiu       $t5, $t5, -0x4
    ctx->r13 = ADD32(ctx->r13, -0X4);
    // 0x801E660C: mul.s       $f8, $f4, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f26.fl);
    // 0x801E6610: lwc1        $f4, 0x7C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x801E6614: addiu       $s3, $s3, -0x4
    ctx->r19 = ADD32(ctx->r19, -0X4);
    // 0x801E6618: addiu       $s4, $s4, -0x4
    ctx->r20 = ADD32(ctx->r20, -0X4);
    // 0x801E661C: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801E6620: div.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f4.fl);
    // 0x801E6624: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x801E6628: swc1        $f10, 0xE8($t6)
    MEM_W(0XE8, ctx->r14) = ctx->f10.u32l;
    // 0x801E662C: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x801E6630: lwc1        $f4, 0x4($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X4);
    // 0x801E6634: addiu       $t6, $sp, 0xD8
    ctx->r14 = ADD32(ctx->r29, 0XD8);
    // 0x801E6638: addu        $s6, $t8, $t6
    ctx->r22 = ADD32(ctx->r24, ctx->r14);
    // 0x801E663C: sub.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x801E6640: lwc1        $f4, 0x4($s4)
    ctx->f4.u32l = MEM_W(ctx->r20, 0X4);
    // 0x801E6644: lwc1        $f6, 0x4($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X4);
    // 0x801E6648: mul.s       $f10, $f16, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f8.fl);
    // 0x801E664C: sub.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x801E6650: mul.s       $f6, $f18, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f8.fl);
    // 0x801E6654: lwc1        $f8, 0x4($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X4);
    // 0x801E6658: add.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x801E665C: lwc1        $f10, 0x4($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X4);
    // 0x801E6660: sub.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x801E6664: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x801E6668: lwc1        $f6, 0x68($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801E666C: add.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x801E6670: div.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f10.fl, ctx->f6.fl);
    // 0x801E6674: neg.s       $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = -ctx->f8.fl;
    // 0x801E6678: swc1        $f4, 0xD8($t7)
    MEM_W(0XD8, ctx->r15) = ctx->f4.u32l;
    // 0x801E667C: lwc1        $f6, 0x0($s5)
    ctx->f6.u32l = MEM_W(ctx->r21, 0X0);
    // 0x801E6680: lwc1        $f10, 0x4($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X4);
    // 0x801E6684: mul.s       $f8, $f22, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f22.fl, ctx->f6.fl);
    // 0x801E6688: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x801E668C: swc1        $f4, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f4.u32l;
    // 0x801E6690: lwc1        $f10, 0x0($s5)
    ctx->f10.u32l = MEM_W(ctx->r21, 0X0);
    // 0x801E6694: lwc1        $f6, 0x4($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X4);
    // 0x801E6698: mul.s       $f8, $f24, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f24.fl, ctx->f10.fl);
    // 0x801E669C: add.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801E66A0: swc1        $f4, 0xC($a3)
    MEM_W(0XC, ctx->r7) = ctx->f4.u32l;
    // 0x801E66A4: lwc1        $f6, 0x0($s5)
    ctx->f6.u32l = MEM_W(ctx->r21, 0X0);
    // 0x801E66A8: lwc1        $f10, 0x4($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X4);
    // 0x801E66AC: mul.s       $f8, $f26, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f26.fl, ctx->f6.fl);
    // 0x801E66B0: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x801E66B4: swc1        $f4, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f4.u32l;
    // 0x801E66B8: lwc1        $f10, 0x0($s6)
    ctx->f10.u32l = MEM_W(ctx->r22, 0X0);
    // 0x801E66BC: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x801E66C0: mul.s       $f8, $f16, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f10.fl);
    // 0x801E66C4: add.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801E66C8: swc1        $f4, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f4.u32l;
    // 0x801E66CC: lwc1        $f6, 0x0($s6)
    ctx->f6.u32l = MEM_W(ctx->r22, 0X0);
    // 0x801E66D0: lwc1        $f10, 0x4($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X4);
    // 0x801E66D4: mul.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x801E66D8: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x801E66DC: swc1        $f4, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f4.u32l;
    // 0x801E66E0: lwc1        $f10, 0x0($s6)
    ctx->f10.u32l = MEM_W(ctx->r22, 0X0);
    // 0x801E66E4: lwc1        $f6, 0x4($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X4);
    // 0x801E66E8: mul.s       $f8, $f20, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f10.fl);
    // 0x801E66EC: add.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801E66F0: bc1t        L_801E670C
    if (c1cs) {
        // 0x801E66F4: swc1        $f4, 0xC($s2)
        MEM_W(0XC, ctx->r18) = ctx->f4.u32l;
            goto L_801E670C;
    }
    // 0x801E66F4: swc1        $f4, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->f4.u32l;
    // 0x801E66F8: lwc1        $f10, 0xC($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0XC);
    // 0x801E66FC: lwc1        $f6, 0x8($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X8);
    // 0x801E6700: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x801E6704: sub.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x801E6708: div.s       $f0, $f8, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = DIV_S(ctx->f8.fl, ctx->f22.fl);
L_801E670C:
    // 0x801E670C: c.eq.s      $f24, $f2
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f24.fl == ctx->f2.fl;
    // 0x801E6710: nop

    // 0x801E6714: bc1tl       L_801E6734
    if (c1cs) {
        // 0x801E6718: c.eq.s      $f26, $f2
        CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f26.fl == ctx->f2.fl;
            goto L_801E6734;
    }
    goto skip_4;
    // 0x801E6718: c.eq.s      $f26, $f2
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f26.fl == ctx->f2.fl;
    skip_4:
    // 0x801E671C: lwc1        $f4, 0xC($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0XC);
    // 0x801E6720: lwc1        $f10, 0x8($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X8);
    // 0x801E6724: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x801E6728: sub.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x801E672C: div.s       $f12, $f6, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f12.fl = DIV_S(ctx->f6.fl, ctx->f24.fl);
    // 0x801E6730: c.eq.s      $f26, $f2
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f26.fl == ctx->f2.fl;
L_801E6734:
    // 0x801E6734: add.s       $f6, $f0, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f12.fl;
    // 0x801E6738: bc1tl       L_801E6758
    if (c1cs) {
        // 0x801E673C: mtc1        $a0, $f4
        ctx->f4.u32l = ctx->r4;
            goto L_801E6758;
    }
    goto skip_5;
    // 0x801E673C: mtc1        $a0, $f4
    ctx->f4.u32l = ctx->r4;
    skip_5:
    // 0x801E6740: lwc1        $f8, 0xC($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0XC);
    // 0x801E6744: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x801E6748: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x801E674C: sub.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x801E6750: div.s       $f14, $f10, $f26
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f14.fl = DIV_S(ctx->f10.fl, ctx->f26.fl);
    // 0x801E6754: mtc1        $a0, $f4
    ctx->f4.u32l = ctx->r4;
L_801E6758:
    // 0x801E6758: add.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f14.fl;
    // 0x801E675C: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x801E6760: cvt.s.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801E6764: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    // 0x801E6768: c.eq.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl == ctx->f2.fl;
    // 0x801E676C: mov.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.fl = ctx->f2.fl;
    // 0x801E6770: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801E6774: div.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x801E6778: bc1t        L_801E6794
    if (c1cs) {
        // 0x801E677C: swc1        $f6, 0x4($s5)
        MEM_W(0X4, ctx->r21) = ctx->f6.u32l;
            goto L_801E6794;
    }
    // 0x801E677C: swc1        $f6, 0x4($s5)
    MEM_W(0X4, ctx->r21) = ctx->f6.u32l;
    // 0x801E6780: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801E6784: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801E6788: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x801E678C: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x801E6790: div.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
L_801E6794:
    // 0x801E6794: c.eq.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl == ctx->f2.fl;
    // 0x801E6798: nop

    // 0x801E679C: bc1tl       L_801E67BC
    if (c1cs) {
        // 0x801E67A0: c.eq.s      $f20, $f2
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f20.fl == ctx->f2.fl;
            goto L_801E67BC;
    }
    goto skip_6;
    // 0x801E67A0: c.eq.s      $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f20.fl == ctx->f2.fl;
    skip_6:
    // 0x801E67A4: lwc1        $f6, 0xC($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0XC);
    // 0x801E67A8: lwc1        $f4, 0x8($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801E67AC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x801E67B0: sub.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x801E67B4: div.s       $f12, $f8, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = DIV_S(ctx->f8.fl, ctx->f18.fl);
    // 0x801E67B8: c.eq.s      $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f20.fl == ctx->f2.fl;
L_801E67BC:
    // 0x801E67BC: add.s       $f8, $f0, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f12.fl;
    // 0x801E67C0: bc1tl       L_801E67E0
    if (c1cs) {
        // 0x801E67C4: mtc1        $v1, $f6
        ctx->f6.u32l = ctx->r3;
            goto L_801E67E0;
    }
    goto skip_7;
    // 0x801E67C4: mtc1        $v1, $f6
    ctx->f6.u32l = ctx->r3;
    skip_7:
    // 0x801E67C8: lwc1        $f10, 0xC($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0XC);
    // 0x801E67CC: lwc1        $f6, 0x8($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X8);
    // 0x801E67D0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x801E67D4: sub.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x801E67D8: div.s       $f14, $f4, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f14.fl = DIV_S(ctx->f4.fl, ctx->f20.fl);
    // 0x801E67DC: mtc1        $v1, $f6
    ctx->f6.u32l = ctx->r3;
L_801E67E0:
    // 0x801E67E0: add.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f14.fl;
    // 0x801E67E4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x801E67E8: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x801E67EC: div.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = DIV_S(ctx->f10.fl, ctx->f4.fl);
    // 0x801E67F0: bne         $v0, $zero, L_801E659C
    if (ctx->r2 != 0) {
        // 0x801E67F4: swc1        $f8, 0x4($s6)
        MEM_W(0X4, ctx->r22) = ctx->f8.u32l;
            goto L_801E659C;
    }
    // 0x801E67F4: swc1        $f8, 0x4($s6)
    MEM_W(0X4, ctx->r22) = ctx->f8.u32l;
    // 0x801E67F8: lwc1        $f0, 0xE8($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x801E67FC: lwc1        $f6, 0xEC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x801E6800: lwc1        $f8, 0xF4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x801E6804: mtc1        $zero, $f29
    ctx->f_odd[(29 - 1) * 2] = 0;
    // 0x801E6808: mul.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x801E680C: lwc1        $f6, 0xF0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x801E6810: mtc1        $zero, $f28
    ctx->f28.u32l = 0;
    // 0x801E6814: lwc1        $f2, 0xD8($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x801E6818: cvt.d.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.d = CVT_D_S(ctx->f10.fl);
    // 0x801E681C: mul.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x801E6820: c.le.d      $f4, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f4.d <= ctx->f28.d;
    // 0x801E6824: lwc1        $f8, 0xDC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x801E6828: mul.s       $f6, $f8, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x801E682C: bc1f        L_801E6838
    if (!c1cs) {
        // 0x801E6830: cvt.d.s     $f4, $f10
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.d = CVT_D_S(ctx->f10.fl);
            goto L_801E6838;
    }
    // 0x801E6830: cvt.d.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.d = CVT_D_S(ctx->f10.fl);
    // 0x801E6834: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_801E6838:
    // 0x801E6838: c.le.d      $f4, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f4.d <= ctx->f28.d;
    // 0x801E683C: lwc1        $f4, 0xE4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x801E6840: lwc1        $f8, 0xE0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x801E6844: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x801E6848: ori         $t7, $a0, 0x1
    ctx->r15 = ctx->r4 | 0X1;
    // 0x801E684C: mul.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x801E6850: bc1fl       L_801E6860
    if (!c1cs) {
        // 0x801E6854: c.le.d      $f10, $f28
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f10.d <= ctx->f28.d;
            goto L_801E6860;
    }
    goto skip_8;
    // 0x801E6854: c.le.d      $f10, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f10.d <= ctx->f28.d;
    skip_8:
    // 0x801E6858: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x801E685C: c.le.d      $f10, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f10.d <= ctx->f28.d;
L_801E6860:
    // 0x801E6860: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x801E6864: bc1fl       L_801E6874
    if (!c1cs) {
        // 0x801E6868: c.le.d      $f10, $f28
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f10.d <= ctx->f28.d;
            goto L_801E6874;
    }
    goto skip_9;
    // 0x801E6868: c.le.d      $f10, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f10.d <= ctx->f28.d;
    skip_9:
    // 0x801E686C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x801E6870: c.le.d      $f10, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f10.d <= ctx->f28.d;
L_801E6874:
    // 0x801E6874: ori         $t8, $v1, 0x1
    ctx->r24 = ctx->r3 | 0X1;
    // 0x801E6878: bc1fl       L_801E6888
    if (!c1cs) {
        // 0x801E687C: or          $t9, $a0, $v1
        ctx->r25 = ctx->r4 | ctx->r3;
            goto L_801E6888;
    }
    goto skip_10;
    // 0x801E687C: or          $t9, $a0, $v1
    ctx->r25 = ctx->r4 | ctx->r3;
    skip_10:
    // 0x801E6880: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
    // 0x801E6884: or          $t9, $a0, $v1
    ctx->r25 = ctx->r4 | ctx->r3;
L_801E6888:
    // 0x801E6888: beq         $t9, $zero, L_801E6898
    if (ctx->r25 == 0) {
        // 0x801E688C: addiu       $a0, $zero, 0x3
        ctx->r4 = ADD32(0, 0X3);
            goto L_801E6898;
    }
    // 0x801E688C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x801E6890: b           L_801E6EE4
    // 0x801E6894: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_801E6EE4;
    // 0x801E6894: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_801E6898:
    // 0x801E6898: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x801E689C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801E68A0: c.lt.d      $f28, $f4
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f28.d < ctx->f4.d;
    // 0x801E68A4: cvt.d.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
    // 0x801E68A8: bc1fl       L_801E68B8
    if (!c1cs) {
        // 0x801E68AC: c.lt.d      $f28, $f8
        CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f28.d < ctx->f8.d;
            goto L_801E68B8;
    }
    goto skip_11;
    // 0x801E68AC: c.lt.d      $f28, $f8
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f28.d < ctx->f8.d;
    skip_11:
    // 0x801E68B0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x801E68B4: c.lt.d      $f28, $f8
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f28.d < ctx->f8.d;
L_801E68B8:
    // 0x801E68B8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x801E68BC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x801E68C0: bc1f        L_801E68CC
    if (!c1cs) {
        // 0x801E68C4: nop
    
            goto L_801E68CC;
    }
    // 0x801E68C4: nop

    // 0x801E68C8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_801E68CC:
    // 0x801E68CC: b           L_801E6EE4
    // 0x801E68D0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
        goto L_801E6EE4;
    // 0x801E68D0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_801E68D4:
    // 0x801E68D4: lwc1        $f6, 0x60($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801E68D8: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x801E68DC: add.s       $f12, $f4, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x801E68E0: lwc1        $f4, 0x78($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X78);
    // 0x801E68E4: swc1        $f6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f6.u32l;
    // 0x801E68E8: add.s       $f0, $f6, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x801E68EC: lwc1        $f6, 0x94($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X94);
    // 0x801E68F0: lwc1        $f28, 0x70($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X70);
    // 0x801E68F4: add.s       $f14, $f4, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x801E68F8: mul.s       $f4, $f0, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x801E68FC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E6900: c.eq.s      $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f22.fl == ctx->f2.fl;
    // 0x801E6904: mul.s       $f8, $f12, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f22.fl);
    // 0x801E6908: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801E690C: sub.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x801E6910: lwc1        $f8, 0xA0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x801E6914: sub.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x801E6918: mul.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x801E691C: lwc1        $f4, 0x64($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801E6920: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x801E6924: mul.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x801E6928: nop

    // 0x801E692C: mul.s       $f10, $f14, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f24.fl);
    // 0x801E6930: sub.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x801E6934: lwc1        $f10, 0x90($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X90);
    // 0x801E6938: lwc1        $f4, 0x9C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x801E693C: sub.s       $f4, $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x801E6940: mul.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x801E6944: lwc1        $f4, 0x98($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X98);
    // 0x801E6948: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x801E694C: lwc1        $f6, 0x8C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x801E6950: sub.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801E6954: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801E6958: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x801E695C: nop

    // 0x801E6960: mul.s       $f4, $f28, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = MUL_S(ctx->f28.fl, ctx->f26.fl);
    // 0x801E6964: sub.s       $f6, $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x801E6968: mul.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x801E696C: lwc1        $f6, 0x88($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X88);
    // 0x801E6970: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x801E6974: mul.s       $f4, $f6, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x801E6978: lwc1        $f8, 0x84($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X84);
    // 0x801E697C: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    // 0x801E6980: mul.s       $f6, $f8, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x801E6984: mov.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.fl = ctx->f2.fl;
    // 0x801E6988: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801E698C: lwc1        $f4, 0x80($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X80);
    // 0x801E6990: mul.s       $f6, $f4, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f28.fl);
    // 0x801E6994: add.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x801E6998: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801E699C: mul.s       $f6, $f8, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x801E69A0: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x801E69A4: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x801E69A8: mul.s       $f8, $f8, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f26.fl);
    // 0x801E69AC: nop

    // 0x801E69B0: mul.s       $f8, $f8, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x801E69B4: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801E69B8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801E69BC: nop

    // 0x801E69C0: mul.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x801E69C4: sub.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x801E69C8: lwc1        $f8, 0x54($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801E69CC: div.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f6.fl);
    // 0x801E69D0: swc1        $f4, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f4.u32l;
    // 0x801E69D4: lwc1        $f10, 0xEC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x801E69D8: lwc1        $f4, 0x4($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X4);
    // 0x801E69DC: mul.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x801E69E0: lwc1        $f8, 0x4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4);
    // 0x801E69E4: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x801E69E8: mul.s       $f4, $f16, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f10.fl);
    // 0x801E69EC: lwc1        $f10, 0x4($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X4);
    // 0x801E69F0: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x801E69F4: lwc1        $f6, 0x4($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X4);
    // 0x801E69F8: sub.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x801E69FC: mul.s       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x801E6A00: lwc1        $f4, 0x4($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X4);
    // 0x801E6A04: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801E6A08: lwc1        $f8, 0x4($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X4);
    // 0x801E6A0C: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x801E6A10: mul.s       $f4, $f10, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x801E6A14: lwc1        $f10, 0x68($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801E6A18: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801E6A1C: div.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x801E6A20: lwc1        $f8, 0xEC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x801E6A24: mul.s       $f10, $f22, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f22.fl, ctx->f8.fl);
    // 0x801E6A28: swc1        $f4, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f4.u32l;
    // 0x801E6A2C: lwc1        $f6, 0x4($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X4);
    // 0x801E6A30: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x801E6A34: swc1        $f4, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f4.u32l;
    // 0x801E6A38: lwc1        $f6, 0xEC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x801E6A3C: lwc1        $f8, 0x4($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X4);
    // 0x801E6A40: mul.s       $f10, $f24, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f24.fl, ctx->f6.fl);
    // 0x801E6A44: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801E6A48: swc1        $f4, 0xC($a3)
    MEM_W(0XC, ctx->r7) = ctx->f4.u32l;
    // 0x801E6A4C: lwc1        $f8, 0xEC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x801E6A50: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x801E6A54: mul.s       $f10, $f26, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f26.fl, ctx->f8.fl);
    // 0x801E6A58: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x801E6A5C: swc1        $f4, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f4.u32l;
    // 0x801E6A60: lwc1        $f6, 0xDC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x801E6A64: lwc1        $f8, 0x4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4);
    // 0x801E6A68: mul.s       $f10, $f16, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x801E6A6C: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801E6A70: swc1        $f4, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f4.u32l;
    // 0x801E6A74: lwc1        $f8, 0xDC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x801E6A78: lwc1        $f6, 0x4($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X4);
    // 0x801E6A7C: mul.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f8.fl);
    // 0x801E6A80: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x801E6A84: swc1        $f4, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f4.u32l;
    // 0x801E6A88: lwc1        $f6, 0xDC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x801E6A8C: lwc1        $f8, 0x4($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X4);
    // 0x801E6A90: mul.s       $f10, $f20, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f6.fl);
    // 0x801E6A94: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801E6A98: bc1t        L_801E6AB4
    if (c1cs) {
        // 0x801E6A9C: swc1        $f4, 0xC($s2)
        MEM_W(0XC, ctx->r18) = ctx->f4.u32l;
            goto L_801E6AB4;
    }
    // 0x801E6A9C: swc1        $f4, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->f4.u32l;
    // 0x801E6AA0: lwc1        $f6, 0xC($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0XC);
    // 0x801E6AA4: lwc1        $f8, 0x8($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X8);
    // 0x801E6AA8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x801E6AAC: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x801E6AB0: div.s       $f0, $f10, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = DIV_S(ctx->f10.fl, ctx->f22.fl);
L_801E6AB4:
    // 0x801E6AB4: c.eq.s      $f24, $f2
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f24.fl == ctx->f2.fl;
    // 0x801E6AB8: nop

    // 0x801E6ABC: bc1tl       L_801E6ADC
    if (c1cs) {
        // 0x801E6AC0: c.eq.s      $f26, $f2
        CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f26.fl == ctx->f2.fl;
            goto L_801E6ADC;
    }
    goto skip_12;
    // 0x801E6AC0: c.eq.s      $f26, $f2
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f26.fl == ctx->f2.fl;
    skip_12:
    // 0x801E6AC4: lwc1        $f4, 0xC($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0XC);
    // 0x801E6AC8: lwc1        $f6, 0x8($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X8);
    // 0x801E6ACC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x801E6AD0: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801E6AD4: div.s       $f12, $f8, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f12.fl = DIV_S(ctx->f8.fl, ctx->f24.fl);
    // 0x801E6AD8: c.eq.s      $f26, $f2
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f26.fl == ctx->f2.fl;
L_801E6ADC:
    // 0x801E6ADC: add.s       $f8, $f0, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f12.fl;
    // 0x801E6AE0: bc1tl       L_801E6B00
    if (c1cs) {
        // 0x801E6AE4: mtc1        $a0, $f4
        ctx->f4.u32l = ctx->r4;
            goto L_801E6B00;
    }
    goto skip_13;
    // 0x801E6AE4: mtc1        $a0, $f4
    ctx->f4.u32l = ctx->r4;
    skip_13:
    // 0x801E6AE8: lwc1        $f10, 0xC($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0XC);
    // 0x801E6AEC: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x801E6AF0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x801E6AF4: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x801E6AF8: div.s       $f14, $f6, $f26
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f14.fl = DIV_S(ctx->f6.fl, ctx->f26.fl);
    // 0x801E6AFC: mtc1        $a0, $f4
    ctx->f4.u32l = ctx->r4;
L_801E6B00:
    // 0x801E6B00: add.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f14.fl;
    // 0x801E6B04: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x801E6B08: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801E6B0C: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    // 0x801E6B10: c.eq.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl == ctx->f2.fl;
    // 0x801E6B14: mov.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.fl = ctx->f2.fl;
    // 0x801E6B18: div.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f10.fl, ctx->f6.fl);
    // 0x801E6B1C: bc1t        L_801E6B38
    if (c1cs) {
        // 0x801E6B20: swc1        $f8, 0xF0($sp)
        MEM_W(0XF0, ctx->r29) = ctx->f8.u32l;
            goto L_801E6B38;
    }
    // 0x801E6B20: swc1        $f8, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f8.u32l;
    // 0x801E6B24: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801E6B28: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801E6B2C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x801E6B30: sub.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x801E6B34: div.s       $f0, $f6, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f16.fl);
L_801E6B38:
    // 0x801E6B38: c.eq.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl == ctx->f2.fl;
    // 0x801E6B3C: nop

    // 0x801E6B40: bc1tl       L_801E6B60
    if (c1cs) {
        // 0x801E6B44: c.eq.s      $f20, $f2
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f20.fl == ctx->f2.fl;
            goto L_801E6B60;
    }
    goto skip_14;
    // 0x801E6B44: c.eq.s      $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f20.fl == ctx->f2.fl;
    skip_14:
    // 0x801E6B48: lwc1        $f8, 0xC($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0XC);
    // 0x801E6B4C: lwc1        $f4, 0x8($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801E6B50: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x801E6B54: sub.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x801E6B58: div.s       $f12, $f10, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = DIV_S(ctx->f10.fl, ctx->f18.fl);
    // 0x801E6B5C: c.eq.s      $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f20.fl == ctx->f2.fl;
L_801E6B60:
    // 0x801E6B60: add.s       $f10, $f0, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f12.fl;
    // 0x801E6B64: bc1tl       L_801E6B84
    if (c1cs) {
        // 0x801E6B68: mtc1        $v1, $f8
        ctx->f8.u32l = ctx->r3;
            goto L_801E6B84;
    }
    goto skip_15;
    // 0x801E6B68: mtc1        $v1, $f8
    ctx->f8.u32l = ctx->r3;
    skip_15:
    // 0x801E6B6C: lwc1        $f6, 0xC($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0XC);
    // 0x801E6B70: lwc1        $f8, 0x8($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X8);
    // 0x801E6B74: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x801E6B78: sub.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x801E6B7C: div.s       $f14, $f4, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f14.fl = DIV_S(ctx->f4.fl, ctx->f20.fl);
    // 0x801E6B80: mtc1        $v1, $f8
    ctx->f8.u32l = ctx->r3;
L_801E6B84:
    // 0x801E6B84: add.s       $f6, $f10, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f14.fl;
    // 0x801E6B88: mtc1        $zero, $f29
    ctx->f_odd[(29 - 1) * 2] = 0;
    // 0x801E6B8C: mtc1        $zero, $f28
    ctx->f28.u32l = 0;
    // 0x801E6B90: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x801E6B94: lwc1        $f8, 0xF0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x801E6B98: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x801E6B9C: div.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f4.fl);
    // 0x801E6BA0: lwc1        $f6, 0xEC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x801E6BA4: mul.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x801E6BA8: swc1        $f10, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f10.u32l;
    // 0x801E6BAC: cvt.d.s     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f10.d = CVT_D_S(ctx->f4.fl);
    // 0x801E6BB0: lwc1        $f4, 0xE0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x801E6BB4: c.lt.d      $f28, $f10
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f28.d < ctx->f10.d;
    // 0x801E6BB8: lwc1        $f10, 0xDC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x801E6BBC: bc1f        L_801E6BE0
    if (!c1cs) {
        // 0x801E6BC0: nop
    
            goto L_801E6BE0;
    }
    // 0x801E6BC0: nop

    // 0x801E6BC4: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801E6BC8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x801E6BCC: c.le.d      $f8, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f8.d <= ctx->f28.d;
    // 0x801E6BD0: nop

    // 0x801E6BD4: bc1f        L_801E6BE0
    if (!c1cs) {
        // 0x801E6BD8: nop
    
            goto L_801E6BE0;
    }
    // 0x801E6BD8: nop

    // 0x801E6BDC: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
L_801E6BE0:
    // 0x801E6BE0: mul.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x801E6BE4: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x801E6BE8: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801E6BEC: c.lt.d      $f28, $f8
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f28.d < ctx->f8.d;
    // 0x801E6BF0: nop

    // 0x801E6BF4: bc1fl       L_801E6C1C
    if (!c1cs) {
        // 0x801E6BF8: addu        $t6, $a0, $v1
        ctx->r14 = ADD32(ctx->r4, ctx->r3);
            goto L_801E6C1C;
    }
    goto skip_16;
    // 0x801E6BF8: addu        $t6, $a0, $v1
    ctx->r14 = ADD32(ctx->r4, ctx->r3);
    skip_16:
    // 0x801E6BFC: cvt.d.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.d = CVT_D_S(ctx->f10.fl);
    // 0x801E6C00: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x801E6C04: c.le.d      $f4, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f4.d <= ctx->f28.d;
    // 0x801E6C08: nop

    // 0x801E6C0C: bc1fl       L_801E6C1C
    if (!c1cs) {
        // 0x801E6C10: addu        $t6, $a0, $v1
        ctx->r14 = ADD32(ctx->r4, ctx->r3);
            goto L_801E6C1C;
    }
    goto skip_17;
    // 0x801E6C10: addu        $t6, $a0, $v1
    ctx->r14 = ADD32(ctx->r4, ctx->r3);
    skip_17:
    // 0x801E6C14: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x801E6C18: addu        $t6, $a0, $v1
    ctx->r14 = ADD32(ctx->r4, ctx->r3);
L_801E6C1C:
    // 0x801E6C1C: slti        $at, $t6, 0x6
    ctx->r1 = SIGNED(ctx->r14) < 0X6 ? 1 : 0;
    // 0x801E6C20: beq         $at, $zero, L_801E6EE4
    if (ctx->r1 == 0) {
        // 0x801E6C24: slti        $at, $a0, 0x3
        ctx->r1 = SIGNED(ctx->r4) < 0X3 ? 1 : 0;
            goto L_801E6EE4;
    }
    // 0x801E6C24: slti        $at, $a0, 0x3
    ctx->r1 = SIGNED(ctx->r4) < 0X3 ? 1 : 0;
    // 0x801E6C28: beq         $at, $zero, L_801E6D84
    if (ctx->r1 == 0) {
        // 0x801E6C2C: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_801E6D84;
    }
    // 0x801E6C2C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x801E6C30: sll         $t0, $a0, 2
    ctx->r8 = S32(ctx->r4 << 2);
    // 0x801E6C34: addu        $t7, $a2, $t0
    ctx->r15 = ADD32(ctx->r6, ctx->r8);
    // 0x801E6C38: lwc1        $f8, 0x0($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X0);
    // 0x801E6C3C: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x801E6C40: addu        $t8, $a3, $t0
    ctx->r24 = ADD32(ctx->r7, ctx->r8);
    // 0x801E6C44: addu        $t9, $a1, $t0
    ctx->r25 = ADD32(ctx->r5, ctx->r8);
    // 0x801E6C48: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x801E6C4C: lwc1        $f8, 0x0($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X0);
    // 0x801E6C50: lwc1        $f6, 0x4($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X4);
    // 0x801E6C54: c.eq.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl == ctx->f2.fl;
    // 0x801E6C58: mul.s       $f4, $f16, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f10.fl);
    // 0x801E6C5C: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x801E6C60: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x801E6C64: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    // 0x801E6C68: mov.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.fl = ctx->f2.fl;
    // 0x801E6C6C: mul.s       $f6, $f18, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x801E6C70: lwc1        $f10, 0x4($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X4);
    // 0x801E6C74: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x801E6C78: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801E6C7C: lwc1        $f4, 0x0($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X0);
    // 0x801E6C80: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x801E6C84: mul.s       $f10, $f6, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x801E6C88: lwc1        $f6, 0x68($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801E6C8C: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x801E6C90: div.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801E6C94: neg.s       $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = -ctx->f10.fl;
    // 0x801E6C98: mul.s       $f4, $f16, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f8.fl);
    // 0x801E6C9C: swc1        $f8, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f8.u32l;
    // 0x801E6CA0: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x801E6CA4: add.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x801E6CA8: swc1        $f10, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f10.u32l;
    // 0x801E6CAC: lwc1        $f6, 0xDC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x801E6CB0: lwc1        $f8, 0x4($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X4);
    // 0x801E6CB4: mul.s       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x801E6CB8: add.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x801E6CBC: swc1        $f10, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f10.u32l;
    // 0x801E6CC0: lwc1        $f8, 0xDC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x801E6CC4: lwc1        $f6, 0x4($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X4);
    // 0x801E6CC8: mul.s       $f4, $f20, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f8.fl);
    // 0x801E6CCC: add.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x801E6CD0: bc1t        L_801E6CEC
    if (c1cs) {
        // 0x801E6CD4: swc1        $f10, 0xC($s2)
        MEM_W(0XC, ctx->r18) = ctx->f10.u32l;
            goto L_801E6CEC;
    }
    // 0x801E6CD4: swc1        $f10, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->f10.u32l;
    // 0x801E6CD8: lwc1        $f8, 0xC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801E6CDC: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801E6CE0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x801E6CE4: sub.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x801E6CE8: div.s       $f0, $f4, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = DIV_S(ctx->f4.fl, ctx->f16.fl);
L_801E6CEC:
    // 0x801E6CEC: c.eq.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl == ctx->f2.fl;
    // 0x801E6CF0: nop

    // 0x801E6CF4: bc1tl       L_801E6D14
    if (c1cs) {
        // 0x801E6CF8: c.eq.s      $f20, $f2
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f20.fl == ctx->f2.fl;
            goto L_801E6D14;
    }
    goto skip_18;
    // 0x801E6CF8: c.eq.s      $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f20.fl == ctx->f2.fl;
    skip_18:
    // 0x801E6CFC: lwc1        $f10, 0xC($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0XC);
    // 0x801E6D00: lwc1        $f8, 0x8($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801E6D04: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x801E6D08: sub.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x801E6D0C: div.s       $f12, $f6, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = DIV_S(ctx->f6.fl, ctx->f18.fl);
    // 0x801E6D10: c.eq.s      $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f20.fl == ctx->f2.fl;
L_801E6D14:
    // 0x801E6D14: add.s       $f6, $f0, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f12.fl;
    // 0x801E6D18: bc1tl       L_801E6D38
    if (c1cs) {
        // 0x801E6D1C: mtc1        $v1, $f10
        ctx->f10.u32l = ctx->r3;
            goto L_801E6D38;
    }
    goto skip_19;
    // 0x801E6D1C: mtc1        $v1, $f10
    ctx->f10.u32l = ctx->r3;
    skip_19:
    // 0x801E6D20: lwc1        $f4, 0xC($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0XC);
    // 0x801E6D24: lwc1        $f10, 0x8($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X8);
    // 0x801E6D28: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x801E6D2C: sub.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x801E6D30: div.s       $f14, $f8, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f14.fl = DIV_S(ctx->f8.fl, ctx->f20.fl);
    // 0x801E6D34: mtc1        $v1, $f10
    ctx->f10.u32l = ctx->r3;
L_801E6D38:
    // 0x801E6D38: add.s       $f4, $f6, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f14.fl;
    // 0x801E6D3C: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x801E6D40: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x801E6D44: lwc1        $f10, 0xDC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x801E6D48: div.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x801E6D4C: mul.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x801E6D50: swc1        $f6, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f6.u32l;
    // 0x801E6D54: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x801E6D58: c.lt.d      $f28, $f8
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f28.d < ctx->f8.d;
    // 0x801E6D5C: nop

    // 0x801E6D60: bc1fl       L_801E6D88
    if (!c1cs) {
        // 0x801E6D64: slti        $at, $v0, 0x3
        ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
            goto L_801E6D88;
    }
    goto skip_20;
    // 0x801E6D64: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    skip_20:
    // 0x801E6D68: cvt.d.s     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f6.d = CVT_D_S(ctx->f10.fl);
    // 0x801E6D6C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x801E6D70: c.le.d      $f6, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f6.d <= ctx->f28.d;
    // 0x801E6D74: nop

    // 0x801E6D78: bc1fl       L_801E6D88
    if (!c1cs) {
        // 0x801E6D7C: slti        $at, $v0, 0x3
        ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
            goto L_801E6D88;
    }
    goto skip_21;
    // 0x801E6D7C: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    skip_21:
    // 0x801E6D80: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
L_801E6D84:
    // 0x801E6D84: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
L_801E6D88:
    // 0x801E6D88: beql        $at, $zero, L_801E6EE8
    if (ctx->r1 == 0) {
        // 0x801E6D8C: sll         $t0, $a0, 2
        ctx->r8 = S32(ctx->r4 << 2);
            goto L_801E6EE8;
    }
    goto skip_22;
    // 0x801E6D8C: sll         $t0, $a0, 2
    ctx->r8 = S32(ctx->r4 << 2);
    skip_22:
    // 0x801E6D90: sll         $a0, $v0, 2
    ctx->r4 = S32(ctx->r2 << 2);
    // 0x801E6D94: addu        $t6, $s0, $a0
    ctx->r14 = ADD32(ctx->r16, ctx->r4);
    // 0x801E6D98: lwc1        $f8, 0x0($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X0);
    // 0x801E6D9C: lwc1        $f4, 0x4($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X4);
    // 0x801E6DA0: addu        $t7, $s1, $a0
    ctx->r15 = ADD32(ctx->r17, ctx->r4);
    // 0x801E6DA4: addu        $t8, $s2, $a0
    ctx->r24 = ADD32(ctx->r18, ctx->r4);
    // 0x801E6DA8: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x801E6DAC: lwc1        $f8, 0x0($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X0);
    // 0x801E6DB0: lwc1        $f4, 0x4($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X4);
    // 0x801E6DB4: c.eq.s      $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f22.fl == ctx->f2.fl;
    // 0x801E6DB8: mul.s       $f6, $f22, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f22.fl, ctx->f10.fl);
    // 0x801E6DBC: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x801E6DC0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x801E6DC4: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    // 0x801E6DC8: mov.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.fl = ctx->f2.fl;
    // 0x801E6DCC: mul.s       $f4, $f24, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f24.fl, ctx->f10.fl);
    // 0x801E6DD0: lwc1        $f10, 0x4($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X4);
    // 0x801E6DD4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801E6DD8: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x801E6DDC: lwc1        $f6, 0x0($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X0);
    // 0x801E6DE0: sub.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x801E6DE4: mul.s       $f10, $f4, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f26.fl);
    // 0x801E6DE8: lwc1        $f4, 0x7C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x801E6DEC: add.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x801E6DF0: div.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f4.fl);
    // 0x801E6DF4: neg.s       $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = -ctx->f10.fl;
    // 0x801E6DF8: mul.s       $f6, $f22, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f22.fl, ctx->f8.fl);
    // 0x801E6DFC: swc1        $f8, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f8.u32l;
    // 0x801E6E00: lwc1        $f4, 0x4($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X4);
    // 0x801E6E04: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801E6E08: swc1        $f10, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f10.u32l;
    // 0x801E6E0C: lwc1        $f4, 0xEC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x801E6E10: lwc1        $f8, 0x4($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X4);
    // 0x801E6E14: mul.s       $f6, $f24, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f24.fl, ctx->f4.fl);
    // 0x801E6E18: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x801E6E1C: swc1        $f10, 0xC($a3)
    MEM_W(0XC, ctx->r7) = ctx->f10.u32l;
    // 0x801E6E20: lwc1        $f8, 0xEC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x801E6E24: lwc1        $f4, 0x4($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X4);
    // 0x801E6E28: mul.s       $f6, $f26, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f26.fl, ctx->f8.fl);
    // 0x801E6E2C: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801E6E30: bc1t        L_801E6E4C
    if (c1cs) {
        // 0x801E6E34: swc1        $f10, 0xC($a1)
        MEM_W(0XC, ctx->r5) = ctx->f10.u32l;
            goto L_801E6E4C;
    }
    // 0x801E6E34: swc1        $f10, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f10.u32l;
    // 0x801E6E38: lwc1        $f8, 0xC($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0XC);
    // 0x801E6E3C: lwc1        $f4, 0x8($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X8);
    // 0x801E6E40: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x801E6E44: sub.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x801E6E48: div.s       $f0, $f6, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f22.fl);
L_801E6E4C:
    // 0x801E6E4C: c.eq.s      $f24, $f2
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f24.fl == ctx->f2.fl;
    // 0x801E6E50: nop

    // 0x801E6E54: bc1tl       L_801E6E74
    if (c1cs) {
        // 0x801E6E58: c.eq.s      $f26, $f2
        CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f26.fl == ctx->f2.fl;
            goto L_801E6E74;
    }
    goto skip_23;
    // 0x801E6E58: c.eq.s      $f26, $f2
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f26.fl == ctx->f2.fl;
    skip_23:
    // 0x801E6E5C: lwc1        $f10, 0xC($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0XC);
    // 0x801E6E60: lwc1        $f8, 0x8($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X8);
    // 0x801E6E64: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x801E6E68: sub.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x801E6E6C: div.s       $f12, $f4, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f12.fl = DIV_S(ctx->f4.fl, ctx->f24.fl);
    // 0x801E6E70: c.eq.s      $f26, $f2
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f26.fl == ctx->f2.fl;
L_801E6E74:
    // 0x801E6E74: add.s       $f4, $f0, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f12.fl;
    // 0x801E6E78: bc1tl       L_801E6E98
    if (c1cs) {
        // 0x801E6E7C: mtc1        $a0, $f10
        ctx->f10.u32l = ctx->r4;
            goto L_801E6E98;
    }
    goto skip_24;
    // 0x801E6E7C: mtc1        $a0, $f10
    ctx->f10.u32l = ctx->r4;
    skip_24:
    // 0x801E6E80: lwc1        $f6, 0xC($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0XC);
    // 0x801E6E84: lwc1        $f10, 0x8($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X8);
    // 0x801E6E88: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x801E6E8C: sub.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x801E6E90: div.s       $f14, $f8, $f26
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f14.fl = DIV_S(ctx->f8.fl, ctx->f26.fl);
    // 0x801E6E94: mtc1        $a0, $f10
    ctx->f10.u32l = ctx->r4;
L_801E6E98:
    // 0x801E6E98: add.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f14.fl;
    // 0x801E6E9C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x801E6EA0: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x801E6EA4: lwc1        $f10, 0xEC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x801E6EA8: div.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801E6EAC: mul.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x801E6EB0: swc1        $f4, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f4.u32l;
    // 0x801E6EB4: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801E6EB8: c.lt.d      $f28, $f8
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f28.d < ctx->f8.d;
    // 0x801E6EBC: nop

    // 0x801E6EC0: bc1fl       L_801E6EE8
    if (!c1cs) {
        // 0x801E6EC4: sll         $t0, $a0, 2
        ctx->r8 = S32(ctx->r4 << 2);
            goto L_801E6EE8;
    }
    goto skip_25;
    // 0x801E6EC4: sll         $t0, $a0, 2
    ctx->r8 = S32(ctx->r4 << 2);
    skip_25:
    // 0x801E6EC8: cvt.d.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.d = CVT_D_S(ctx->f10.fl);
    // 0x801E6ECC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x801E6ED0: c.le.d      $f4, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f4.d <= ctx->f28.d;
    // 0x801E6ED4: nop

    // 0x801E6ED8: bc1fl       L_801E6EE8
    if (!c1cs) {
        // 0x801E6EDC: sll         $t0, $a0, 2
        ctx->r8 = S32(ctx->r4 << 2);
            goto L_801E6EE8;
    }
    goto skip_26;
    // 0x801E6EDC: sll         $t0, $a0, 2
    ctx->r8 = S32(ctx->r4 << 2);
    skip_26:
    // 0x801E6EE0: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
L_801E6EE4:
    // 0x801E6EE4: sll         $t0, $a0, 2
    ctx->r8 = S32(ctx->r4 << 2);
L_801E6EE8:
    // 0x801E6EE8: sll         $t1, $v1, 2
    ctx->r9 = S32(ctx->r3 << 2);
    // 0x801E6EEC: addu        $t6, $s0, $t1
    ctx->r14 = ADD32(ctx->r16, ctx->r9);
    // 0x801E6EF0: addu        $t9, $a2, $t0
    ctx->r25 = ADD32(ctx->r6, ctx->r8);
    // 0x801E6EF4: lwc1        $f6, 0x0($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X0);
    // 0x801E6EF8: lwc1        $f8, 0x0($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X0);
    // 0x801E6EFC: addu        $t8, $s1, $t1
    ctx->r24 = ADD32(ctx->r17, ctx->r9);
    // 0x801E6F00: addu        $t7, $a3, $t0
    ctx->r15 = ADD32(ctx->r7, ctx->r8);
    // 0x801E6F04: lwc1        $f10, 0x0($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X0);
    // 0x801E6F08: lwc1        $f4, 0x0($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X0);
    // 0x801E6F0C: sub.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x801E6F10: addu        $t6, $s2, $t1
    ctx->r14 = ADD32(ctx->r18, ctx->r9);
    // 0x801E6F14: addu        $t9, $a1, $t0
    ctx->r25 = ADD32(ctx->r5, ctx->r8);
    // 0x801E6F18: sub.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x801E6F1C: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x801E6F20: lwc1        $f6, 0x0($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X0);
    // 0x801E6F24: lwc1        $f8, 0x0($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X0);
    // 0x801E6F28: mul.s       $f4, $f12, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x801E6F2C: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x801E6F30: sub.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x801E6F34: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x801E6F38: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x801E6F3C: ldc1        $f20, 0x0($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X0);
    // 0x801E6F40: mul.s       $f8, $f14, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x801E6F44: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x801E6F48: lwc1        $f10, 0x130($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X130);
    // 0x801E6F4C: ldc1        $f22, 0x8($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X8);
    // 0x801E6F50: ldc1        $f24, 0x10($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X10);
    // 0x801E6F54: ldc1        $f26, 0x18($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X18);
    // 0x801E6F58: ldc1        $f28, 0x20($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X20);
    // 0x801E6F5C: add.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801E6F60: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x801E6F64: lw          $s4, 0x3C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3C);
    // 0x801E6F68: lw          $s5, 0x40($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X40);
    // 0x801E6F6C: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x801E6F70: lw          $s6, 0x44($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X44);
    // 0x801E6F74: addiu       $sp, $sp, 0x110
    ctx->r29 = ADD32(ctx->r29, 0X110);
    // 0x801E6F78: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801E6F7C: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x801E6F80: nop

    // 0x801E6F84: bc1fl       L_801E6F94
    if (!c1cs) {
        // 0x801E6F88: andi        $t7, $v0, 0xFF
        ctx->r15 = ctx->r2 & 0XFF;
            goto L_801E6F94;
    }
    goto skip_27;
    // 0x801E6F88: andi        $t7, $v0, 0xFF
    ctx->r15 = ctx->r2 & 0XFF;
    skip_27:
    // 0x801E6F8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801E6F90: andi        $t7, $v0, 0xFF
    ctx->r15 = ctx->r2 & 0XFF;
L_801E6F94:
    // 0x801E6F94: jr          $ra
    // 0x801E6F98: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    TRACE_RETURN()
    return;
    // 0x801E6F98: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
;}
RECOMP_FUNC void func_801E078C_64F5DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E078C: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x801E0790: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801E0794: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x801E0798: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x801E079C: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x801E07A0: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x801E07A4: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x801E07A8: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x801E07AC: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x801E07B0: lw          $s0, 0x18($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X18);
    // 0x801E07B4: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x801E07B8: lui         $at, 0x4160
    ctx->r1 = S32(0X4160 << 16);
    // 0x801E07BC: beql        $s0, $zero, L_801E0820
    if (ctx->r16 == 0) {
        // 0x801E07C0: lbu         $t6, 0x6A($s3)
        ctx->r14 = MEM_BU(ctx->r19, 0X6A);
            goto L_801E0820;
    }
    goto skip_0;
    // 0x801E07C0: lbu         $t6, 0x6A($s3)
    ctx->r14 = MEM_BU(ctx->r19, 0X6A);
    skip_0:
    // 0x801E07C4: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x801E07C8: nop

    // 0x801E07CC: lwc1        $f4, 0x94($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X94);
L_801E07D0:
    // 0x801E07D0: lwc1        $f6, 0x28($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X28);
    // 0x801E07D4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x801E07D8: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801E07DC: c.le.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl <= ctx->f0.fl;
    // 0x801E07E0: swc1        $f0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f0.u32l;
    // 0x801E07E4: bc1fl       L_801E0810
    if (!c1cs) {
        // 0x801E07E8: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_801E0810;
    }
    goto skip_1;
    // 0x801E07E8: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_1:
    // 0x801E07EC: jal         0x801CDFE4
    // 0x801E07F0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_801CDFE4_63CE34(rdram, ctx);
        goto after_0;
    // 0x801E07F0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x801E07F4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x801E07F8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x801E07FC: jal         0x80036158
    // 0x801E0800: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80036158_36D58(rdram, ctx);
        goto after_1;
    // 0x801E0800: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x801E0804: b           L_801E0810
    // 0x801E0808: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
        goto L_801E0810;
    // 0x801E0808: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x801E080C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_801E0810:
    // 0x801E0810: bnel        $s0, $zero, L_801E07D0
    if (ctx->r16 != 0) {
        // 0x801E0814: lwc1        $f4, 0x94($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0X94);
            goto L_801E07D0;
    }
    goto skip_2;
    // 0x801E0814: lwc1        $f4, 0x94($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X94);
    skip_2:
    // 0x801E0818: lw          $s0, 0x18($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X18);
    // 0x801E081C: lbu         $t6, 0x6A($s3)
    ctx->r14 = MEM_BU(ctx->r19, 0X6A);
L_801E0820:
    // 0x801E0820: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801E0824: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x801E0828: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x801E082C: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x801E0830: lw          $t9, -0x20B8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X20B8);
    // 0x801E0834: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x801E0838: jalr        $t9
    // 0x801E083C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x801E083C: nop

    after_2:
    // 0x801E0840: lb          $t8, 0x6B($s3)
    ctx->r24 = MEM_B(ctx->r19, 0X6B);
    // 0x801E0844: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801E0848: lw          $a1, 0x18($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X18);
    // 0x801E084C: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x801E0850: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x801E0854: lw          $t9, -0x20B0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X20B0);
    // 0x801E0858: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x801E085C: jalr        $t9
    // 0x801E0860: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x801E0860: nop

    after_3:
    // 0x801E0864: lw          $v0, 0x18($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X18);
    // 0x801E0868: lw          $s2, 0xEC($s3)
    ctx->r18 = MEM_W(ctx->r19, 0XEC);
    // 0x801E086C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E0870: beq         $v0, $zero, L_801E08DC
    if (ctx->r2 == 0) {
        // 0x801E0874: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_801E08DC;
    }
    // 0x801E0874: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x801E0878: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x801E087C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x801E0880: addiu       $s1, $sp, 0x4C
    ctx->r17 = ADD32(ctx->r29, 0X4C);
    // 0x801E0884: swc1        $f20, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f20.u32l;
L_801E0888:
    // 0x801E0888: swc1        $f22, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f22.u32l;
    // 0x801E088C: swc1        $f20, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f20.u32l;
    // 0x801E0890: jal         0x8001D394
    // 0x801E0894: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8001D394_1DF94(rdram, ctx);
        goto after_4;
    // 0x801E0894: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x801E0898: lwc1        $f8, 0x36C($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X36C);
    // 0x801E089C: lw          $a2, 0x364($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X364);
    // 0x801E08A0: lw          $a3, 0x368($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X368);
    // 0x801E08A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E08A8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x801E08AC: jal         0x8001D14C
    // 0x801E08B0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_8001D14C_1DD4C(rdram, ctx);
        goto after_5;
    // 0x801E08B0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_5:
    // 0x801E08B4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x801E08B8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x801E08BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801E08C0: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
    // 0x801E08C4: jal         0x8001DB04
    // 0x801E08C8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8001DB04_1E704(rdram, ctx);
        goto after_6;
    // 0x801E08C8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_6:
    // 0x801E08CC: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x801E08D0: bnel        $s0, $zero, L_801E0888
    if (ctx->r16 != 0) {
        // 0x801E08D4: swc1        $f20, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->f20.u32l;
            goto L_801E0888;
    }
    goto skip_3;
    // 0x801E08D4: swc1        $f20, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f20.u32l;
    skip_3:
    // 0x801E08D8: lw          $v0, 0x18($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X18);
L_801E08DC:
    // 0x801E08DC: bnel        $v0, $zero, L_801E0900
    if (ctx->r2 != 0) {
        // 0x801E08E0: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_801E0900;
    }
    goto skip_4;
    // 0x801E08E0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_4:
    // 0x801E08E4: lb          $t1, 0x78($s3)
    ctx->r9 = MEM_B(ctx->r19, 0X78);
    // 0x801E08E8: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x801E08EC: bnel        $t2, $zero, L_801E0900
    if (ctx->r10 != 0) {
        // 0x801E08F0: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_801E0900;
    }
    goto skip_5;
    // 0x801E08F0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_5:
    // 0x801E08F4: jal         0x80034ED4
    // 0x801E08F8: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_7;
    // 0x801E08F8: nop

    after_7:
    // 0x801E08FC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_801E0900:
    // 0x801E0900: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x801E0904: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x801E0908: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x801E090C: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x801E0910: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x801E0914: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x801E0918: jr          $ra
    // 0x801E091C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x801E091C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_801E14F0_650340(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E14F0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x801E14F4: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x801E14F8: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x801E14FC: lui         $t7, 0x4
    ctx->r15 = S32(0X4 << 16);
    // 0x801E1500: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801E1504: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x801E1508: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x801E150C: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x801E1510: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x801E1514: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x801E1518: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x801E151C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x801E1520: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x801E1524: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801E1528: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x801E152C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x801E1530: lhu         $t7, -0x520C($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X520C);
    // 0x801E1534: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801E1538: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801E153C: bne         $t7, $at, L_801E1550
    if (ctx->r15 != ctx->r1) {
        // 0x801E1540: or          $s1, $a0, $zero
        ctx->r17 = ctx->r4 | 0;
            goto L_801E1550;
    }
    // 0x801E1540: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801E1544: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x801E1548: b           L_801E1558
    // 0x801E154C: sb          $t8, 0x4F($sp)
    MEM_B(0X4F, ctx->r29) = ctx->r24;
        goto L_801E1558;
    // 0x801E154C: sb          $t8, 0x4F($sp)
    MEM_B(0X4F, ctx->r29) = ctx->r24;
L_801E1550:
    // 0x801E1550: addiu       $t9, $zero, 0x9
    ctx->r25 = ADD32(0, 0X9);
    // 0x801E1554: sb          $t9, 0x4F($sp)
    MEM_B(0X4F, ctx->r29) = ctx->r25;
L_801E1558:
    // 0x801E1558: beq         $s0, $zero, L_801E1694
    if (ctx->r16 == 0) {
        // 0x801E155C: lui         $at, 0x4024
        ctx->r1 = S32(0X4024 << 16);
            goto L_801E1694;
    }
    // 0x801E155C: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x801E1560: lui         $s5, 0x801F
    ctx->r21 = S32(0X801F << 16);
    // 0x801E1564: lui         $s3, 0x8FFF
    ctx->r19 = S32(0X8FFF << 16);
    // 0x801E1568: mtc1        $at, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r1;
    // 0x801E156C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x801E1570: ori         $s3, $s3, 0xFFFF
    ctx->r19 = ctx->r19 | 0XFFFF;
    // 0x801E1574: addiu       $s5, $s5, -0x1A80
    ctx->r21 = ADD32(ctx->r21, -0X1A80);
    // 0x801E1578: lui         $fp, 0xB800
    ctx->r30 = S32(0XB800 << 16);
    // 0x801E157C: lui         $s7, 0xFA00
    ctx->r23 = S32(0XFA00 << 16);
    // 0x801E1580: lui         $s6, 0xFB00
    ctx->r22 = S32(0XFB00 << 16);
    // 0x801E1584: lui         $s4, 0x600
    ctx->r20 = S32(0X600 << 16);
    // 0x801E1588: addiu       $s2, $zero, 0x100
    ctx->r18 = ADD32(0, 0X100);
    // 0x801E158C: lbu         $v1, 0x80($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X80);
L_801E1590:
    // 0x801E1590: bnel        $v1, $zero, L_801E15EC
    if (ctx->r3 != 0) {
        // 0x801E1594: lbu         $t0, 0x81($s0)
        ctx->r8 = MEM_BU(ctx->r16, 0X81);
            goto L_801E15EC;
    }
    goto skip_0;
    // 0x801E1594: lbu         $t0, 0x81($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X81);
    skip_0:
    // 0x801E1598: lh          $t1, 0x82($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X82);
    // 0x801E159C: subu        $t2, $s2, $v1
    ctx->r10 = SUB32(ctx->r18, ctx->r3);
    // 0x801E15A0: beq         $t1, $zero, L_801E15CC
    if (ctx->r9 == 0) {
        // 0x801E15A4: nop
    
            goto L_801E15CC;
    }
    // 0x801E15A4: nop

    // 0x801E15A8: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801E15AC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x801E15B0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801E15B4: mul.d       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f20.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f20.d);
    // 0x801E15B8: jal         0x801CD690
    // 0x801E15BC: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    func_801CD690_63C4E0(rdram, ctx);
        goto after_0;
    // 0x801E15BC: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    after_0:
    // 0x801E15C0: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
    // 0x801E15C4: b           L_801E168C
    // 0x801E15C8: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
        goto L_801E168C;
    // 0x801E15C8: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_801E15CC:
    // 0x801E15CC: bgez        $t2, L_801E15DC
    if (SIGNED(ctx->r10) >= 0) {
        // 0x801E15D0: sra         $t3, $t2, 3
        ctx->r11 = S32(SIGNED(ctx->r10) >> 3);
            goto L_801E15DC;
    }
    // 0x801E15D0: sra         $t3, $t2, 3
    ctx->r11 = S32(SIGNED(ctx->r10) >> 3);
    // 0x801E15D4: addiu       $at, $t2, 0x7
    ctx->r1 = ADD32(ctx->r10, 0X7);
    // 0x801E15D8: sra         $t3, $at, 3
    ctx->r11 = S32(SIGNED(ctx->r1) >> 3);
L_801E15DC:
    // 0x801E15DC: sb          $t3, 0x81($s0)
    MEM_B(0X81, ctx->r16) = ctx->r11;
    // 0x801E15E0: lbu         $t4, 0x4F($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X4F);
    // 0x801E15E4: sb          $t4, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r12;
    // 0x801E15E8: lbu         $t0, 0x81($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X81);
L_801E15EC:
    // 0x801E15EC: subu        $t5, $s2, $v1
    ctx->r13 = SUB32(ctx->r18, ctx->r3);
    // 0x801E15F0: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    // 0x801E15F4: slt         $at, $t0, $t5
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x801E15F8: bne         $at, $zero, L_801E1624
    if (ctx->r1 != 0) {
        // 0x801E15FC: addu        $t6, $a3, $t0
        ctx->r14 = ADD32(ctx->r7, ctx->r8);
            goto L_801E1624;
    }
    // 0x801E15FC: addu        $t6, $a3, $t0
    ctx->r14 = ADD32(ctx->r7, ctx->r8);
    // 0x801E1600: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E1604: jal         0x801CDFE4
    // 0x801E1608: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_801CDFE4_63CE34(rdram, ctx);
        goto after_1;
    // 0x801E1608: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x801E160C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E1610: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x801E1614: jal         0x80036158
    // 0x801E1618: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80036158_36D58(rdram, ctx);
        goto after_2;
    // 0x801E1618: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x801E161C: b           L_801E168C
    // 0x801E1620: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
        goto L_801E168C;
    // 0x801E1620: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_801E1624:
    // 0x801E1624: lw          $t7, 0x30($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X30);
    // 0x801E1628: sb          $t6, 0x80($s0)
    MEM_B(0X80, ctx->r16) = ctx->r14;
    // 0x801E162C: andi        $t8, $t6, 0xFF
    ctx->r24 = ctx->r14 & 0XFF;
    // 0x801E1630: and         $a0, $t7, $s3
    ctx->r4 = ctx->r15 & ctx->r19;
    // 0x801E1634: addiu       $a1, $a0, 0x8
    ctx->r5 = ADD32(ctx->r4, 0X8);
    // 0x801E1638: sw          $s4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r20;
    // 0x801E163C: sw          $s5, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r21;
    // 0x801E1640: sw          $t8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r24;
    // 0x801E1644: sw          $s6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r22;
    // 0x801E1648: addiu       $a2, $a1, 0x8
    ctx->r6 = ADD32(ctx->r5, 0X8);
    // 0x801E164C: sw          $s7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r23;
    // 0x801E1650: lbu         $t3, 0x70($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X70);
    // 0x801E1654: lbu         $t1, 0x73($s1)
    ctx->r9 = MEM_BU(ctx->r17, 0X73);
    // 0x801E1658: lbu         $t7, 0x71($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X71);
    // 0x801E165C: sll         $t4, $t3, 24
    ctx->r12 = S32(ctx->r11 << 24);
    // 0x801E1660: lbu         $t3, 0x72($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X72);
    // 0x801E1664: or          $t5, $t1, $t4
    ctx->r13 = ctx->r9 | ctx->r12;
    // 0x801E1668: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x801E166C: or          $t9, $t5, $t8
    ctx->r25 = ctx->r13 | ctx->r24;
    // 0x801E1670: sll         $t1, $t3, 8
    ctx->r9 = S32(ctx->r11 << 8);
    // 0x801E1674: or          $t4, $t9, $t1
    ctx->r12 = ctx->r25 | ctx->r9;
    // 0x801E1678: sw          $t4, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r12;
    // 0x801E167C: addiu       $v0, $a2, 0x8
    ctx->r2 = ADD32(ctx->r6, 0X8);
    // 0x801E1680: sw          $fp, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r30;
    // 0x801E1684: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x801E1688: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_801E168C:
    // 0x801E168C: bnel        $s0, $zero, L_801E1590
    if (ctx->r16 != 0) {
        // 0x801E1690: lbu         $v1, 0x80($s0)
        ctx->r3 = MEM_BU(ctx->r16, 0X80);
            goto L_801E1590;
    }
    goto skip_1;
    // 0x801E1690: lbu         $v1, 0x80($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X80);
    skip_1:
L_801E1694:
    // 0x801E1694: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801E1698: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x801E169C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801E16A0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x801E16A4: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x801E16A8: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x801E16AC: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x801E16B0: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x801E16B4: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x801E16B8: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x801E16BC: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x801E16C0: jr          $ra
    // 0x801E16C4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x801E16C4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_801E0F30_64FD80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E0F30: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801E0F34: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801E0F38: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801E0F3C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E0F40: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E0F44: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x801E0F48: bne         $a0, $zero, L_801E0F58
    if (ctx->r4 != 0) {
        // 0x801E0F4C: sw          $a3, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r7;
            goto L_801E0F58;
    }
    // 0x801E0F4C: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x801E0F50: b           L_801E1168
    // 0x801E0F54: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801E1168;
    // 0x801E0F54: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801E0F58:
    // 0x801E0F58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E0F5C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801E0F60: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801E0F64: jal         0x80035EEC
    // 0x801E0F68: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    func_80035EEC_36AEC(rdram, ctx);
        goto after_0;
    // 0x801E0F68: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x801E0F6C: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x801E0F70: beq         $v0, $zero, L_801E1168
    if (ctx->r2 == 0) {
        // 0x801E0F74: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_801E1168;
    }
    // 0x801E0F74: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x801E0F78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E0F7C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801E0F80: jal         0x801CDF74
    // 0x801E0F84: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    func_801CDF74_63CDC4(rdram, ctx);
        goto after_1;
    // 0x801E0F84: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    after_1:
    // 0x801E0F88: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x801E0F8C: bne         $v0, $zero, L_801E0FA8
    if (ctx->r2 != 0) {
        // 0x801E0F90: lwc1        $f12, 0x2C($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
            goto L_801E0FA8;
    }
    // 0x801E0F90: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x801E0F94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E0F98: jal         0x80036158
    // 0x801E0F9C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80036158_36D58(rdram, ctx);
        goto after_2;
    // 0x801E0F9C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x801E0FA0: b           L_801E1168
    // 0x801E0FA4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801E1168;
    // 0x801E0FA4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801E0FA8:
    // 0x801E0FA8: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801E0FAC: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x801E0FB0: addiu       $t6, $t6, 0x58
    ctx->r14 = ADD32(ctx->r14, 0X58);
    // 0x801E0FB4: swc1        $f4, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f4.u32l;
    // 0x801E0FB8: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x801E0FBC: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x801E0FC0: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
    // 0x801E0FC4: swc1        $f6, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f6.u32l;
    // 0x801E0FC8: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801E0FCC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E0FD0: or          $t8, $v0, $at
    ctx->r24 = ctx->r2 | ctx->r1;
    // 0x801E0FD4: swc1        $f8, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->f8.u32l;
    // 0x801E0FD8: lwc1        $f10, 0x60($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801E0FDC: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801E0FE0: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x801E0FE4: swc1        $f10, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->f10.u32l;
    // 0x801E0FE8: lwc1        $f16, 0x64($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801E0FEC: lui         $t1, 0x801F
    ctx->r9 = S32(0X801F << 16);
    // 0x801E0FF0: addiu       $t1, $t1, -0x1828
    ctx->r9 = ADD32(ctx->r9, -0X1828);
    // 0x801E0FF4: swc1        $f16, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->f16.u32l;
    // 0x801E0FF8: lwc1        $f18, 0x68($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801E0FFC: lui         $t0, 0x600
    ctx->r8 = S32(0X600 << 16);
    // 0x801E1000: addiu       $a2, $v0, 0x8
    ctx->r6 = ADD32(ctx->r2, 0X8);
    // 0x801E1004: swc1        $f18, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f18.u32l;
    // 0x801E1008: sw          $t7, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r15;
    // 0x801E100C: sw          $t9, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r25;
    // 0x801E1010: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x801E1014: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x801E1018: lui         $t2, 0xFA00
    ctx->r10 = S32(0XFA00 << 16);
    // 0x801E101C: sw          $t2, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r10;
    // 0x801E1020: lbu         $t7, 0x3B($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X3B);
    // 0x801E1024: lbu         $t4, 0x37($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X37);
    // 0x801E1028: lbu         $t1, 0x3F($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X3F);
    // 0x801E102C: lbu         $t6, 0x43($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X43);
    // 0x801E1030: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x801E1034: sll         $t5, $t4, 24
    ctx->r13 = S32(ctx->r12 << 24);
    // 0x801E1038: or          $t9, $t5, $t8
    ctx->r25 = ctx->r13 | ctx->r24;
    // 0x801E103C: sll         $t2, $t1, 8
    ctx->r10 = S32(ctx->r9 << 8);
    // 0x801E1040: or          $t3, $t9, $t2
    ctx->r11 = ctx->r25 | ctx->r10;
    // 0x801E1044: or          $t7, $t3, $t6
    ctx->r15 = ctx->r11 | ctx->r14;
    // 0x801E1048: sw          $t7, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r15;
    // 0x801E104C: addiu       $v0, $a2, 0x8
    ctx->r2 = ADD32(ctx->r6, 0X8);
    // 0x801E1050: lui         $t5, 0xFB00
    ctx->r13 = S32(0XFB00 << 16);
    // 0x801E1054: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x801E1058: lbu         $t2, 0x4B($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X4B);
    // 0x801E105C: lbu         $t0, 0x47($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X47);
    // 0x801E1060: lbu         $t7, 0x4F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X4F);
    // 0x801E1064: lbu         $t9, 0x53($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X53);
    // 0x801E1068: sll         $t4, $t2, 16
    ctx->r12 = S32(ctx->r10 << 16);
    // 0x801E106C: sll         $t1, $t0, 24
    ctx->r9 = S32(ctx->r8 << 24);
    // 0x801E1070: or          $t3, $t1, $t4
    ctx->r11 = ctx->r9 | ctx->r12;
    // 0x801E1074: sll         $t5, $t7, 8
    ctx->r13 = S32(ctx->r15 << 8);
    // 0x801E1078: or          $t8, $t3, $t5
    ctx->r24 = ctx->r11 | ctx->r13;
    // 0x801E107C: or          $t2, $t8, $t9
    ctx->r10 = ctx->r24 | ctx->r25;
    // 0x801E1080: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
    // 0x801E1084: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x801E1088: lui         $t1, 0xB800
    ctx->r9 = S32(0XB800 << 16);
    // 0x801E108C: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x801E1090: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x801E1094: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801E1098: ldc1        $f6, -0xC38($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0XC38);
    // 0x801E109C: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x801E10A0: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801E10A4: div.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f4.d, ctx->f6.d);
    // 0x801E10A8: ldc1        $f16, -0xC30($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0XC30);
    // 0x801E10AC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801E10B0: ori         $v0, $zero, 0x8000
    ctx->r2 = 0 | 0X8000;
    // 0x801E10B4: addiu       $t4, $zero, 0x4AC
    ctx->r12 = ADD32(0, 0X4AC);
    // 0x801E10B8: sh          $v0, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r2;
    // 0x801E10BC: sh          $v0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r2;
    // 0x801E10C0: sh          $v0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r2;
    // 0x801E10C4: sh          $t4, 0x34($a1)
    MEM_H(0X34, ctx->r5) = ctx->r12;
    // 0x801E10C8: swc1        $f4, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f4.u32l;
    // 0x801E10CC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801E10D0: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    // 0x801E10D4: cvt.d.s     $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f10.d = CVT_D_S(ctx->f12.fl);
    // 0x801E10D8: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x801E10DC: cvt.s.d     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f0.fl = CVT_S_D(ctx->f18.d);
    // 0x801E10E0: swc1        $f0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f0.u32l;
    // 0x801E10E4: swc1        $f0, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f0.u32l;
    // 0x801E10E8: swc1        $f0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f0.u32l;
    // 0x801E10EC: jal         0x80014218
    // 0x801E10F0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_80014218_14E18(rdram, ctx);
        goto after_3;
    // 0x801E10F0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_3:
    // 0x801E10F4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x801E10F8: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x801E10FC: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x801E1100: sb          $t6, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r14;
    // 0x801E1104: swc1        $f6, 0x94($a1)
    MEM_W(0X94, ctx->r5) = ctx->f6.u32l;
    // 0x801E1108: lbu         $t7, 0x37($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X37);
    // 0x801E110C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E1110: sb          $t7, 0x8C($a1)
    MEM_B(0X8C, ctx->r5) = ctx->r15;
    // 0x801E1114: lbu         $t3, 0x3B($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X3B);
    // 0x801E1118: sb          $t3, 0x8D($a1)
    MEM_B(0X8D, ctx->r5) = ctx->r11;
    // 0x801E111C: lbu         $t5, 0x3F($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X3F);
    // 0x801E1120: sb          $t5, 0x8E($a1)
    MEM_B(0X8E, ctx->r5) = ctx->r13;
    // 0x801E1124: lbu         $t0, 0x47($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X47);
    // 0x801E1128: sb          $t0, 0x90($a1)
    MEM_B(0X90, ctx->r5) = ctx->r8;
    // 0x801E112C: lbu         $t8, 0x4B($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X4B);
    // 0x801E1130: sb          $t8, 0x91($a1)
    MEM_B(0X91, ctx->r5) = ctx->r24;
    // 0x801E1134: lbu         $t9, 0x4F($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X4F);
    // 0x801E1138: sb          $t9, 0x92($a1)
    MEM_B(0X92, ctx->r5) = ctx->r25;
    // 0x801E113C: lbu         $t2, 0x43($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X43);
    // 0x801E1140: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801E1144: sb          $t2, 0x8F($a1)
    MEM_B(0X8F, ctx->r5) = ctx->r10;
    // 0x801E1148: lbu         $t1, 0x53($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X53);
    // 0x801E114C: sb          $t1, 0x93($a1)
    MEM_B(0X93, ctx->r5) = ctx->r9;
    // 0x801E1150: lbu         $v1, 0x6A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X6A);
    // 0x801E1154: sll         $t4, $v1, 2
    ctx->r12 = S32(ctx->r3 << 2);
    // 0x801E1158: addu        $t9, $t9, $t4
    ctx->r25 = ADD32(ctx->r25, ctx->r12);
    // 0x801E115C: lw          $t9, -0x20C0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X20C0);
    // 0x801E1160: jalr        $t9
    // 0x801E1164: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x801E1164: nop

    after_4:
L_801E1168:
    // 0x801E1168: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801E116C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801E1170: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801E1174: jr          $ra
    // 0x801E1178: nop

    TRACE_RETURN()
    return;
    // 0x801E1178: nop

;}
RECOMP_FUNC void func_801E11BC_65000C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E11BC: beq         $a0, $zero, L_801E11D0
    if (ctx->r4 == 0) {
        // 0x801E11C0: nop
    
            goto L_801E11D0;
    }
    // 0x801E11C0: nop

    // 0x801E11C4: lb          $t6, 0x78($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X78);
    // 0x801E11C8: andi        $t7, $t6, 0xFFFE
    ctx->r15 = ctx->r14 & 0XFFFE;
    // 0x801E11CC: sb          $t7, 0x78($a0)
    MEM_B(0X78, ctx->r4) = ctx->r15;
L_801E11D0:
    // 0x801E11D0: jr          $ra
    // 0x801E11D4: nop

    TRACE_RETURN()
    return;
    // 0x801E11D4: nop

;}
RECOMP_FUNC void func_801E5C74_654AC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E5C74: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801E5C78: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x801E5C7C: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x801E5C80: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x801E5C84: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x801E5C88: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x801E5C8C: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x801E5C90: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x801E5C94: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801E5C98: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x801E5C9C: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x801E5CA0: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x801E5CA4: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801E5CA8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801E5CAC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x801E5CB0: jal         0x801E5328
    // 0x801E5CB4: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    func_801E5328_654178(rdram, ctx);
        goto after_0;
    // 0x801E5CB4: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x801E5CB8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x801E5CBC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801E5CC0: jr          $ra
    // 0x801E5CC4: nop

    TRACE_RETURN()
    return;
    // 0x801E5CC4: nop

;}
RECOMP_FUNC void func_801CEAB8_63D908(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CEAB8: lbu         $v0, 0x3($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X3);
    // 0x801CEABC: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x801CEAC0: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x801CEAC4: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x801CEAC8: subu        $t7, $t7, $v0
    ctx->r15 = SUB32(ctx->r15, ctx->r2);
    // 0x801CEACC: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x801CEAD0: lui         $t9, 0x4
    ctx->r25 = S32(0X4 << 16);
    // 0x801CEAD4: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x801CEAD8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x801CEADC: lhu         $t9, -0x4F84($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X4F84);
    // 0x801CEAE0: andi        $t0, $t9, 0x8000
    ctx->r8 = ctx->r25 & 0X8000;
    // 0x801CEAE4: beql        $t0, $zero, L_801CEAFC
    if (ctx->r8 == 0) {
        // 0x801CEAE8: lw          $t3, 0xB4($a0)
        ctx->r11 = MEM_W(ctx->r4, 0XB4);
            goto L_801CEAFC;
    }
    goto skip_0;
    // 0x801CEAE8: lw          $t3, 0xB4($a0)
    ctx->r11 = MEM_W(ctx->r4, 0XB4);
    skip_0:
    // 0x801CEAEC: lb          $t1, 0x9F($a0)
    ctx->r9 = MEM_B(ctx->r4, 0X9F);
    // 0x801CEAF0: ori         $t2, $t1, 0x8
    ctx->r10 = ctx->r9 | 0X8;
    // 0x801CEAF4: sb          $t2, 0x9F($a0)
    MEM_B(0X9F, ctx->r4) = ctx->r10;
    // 0x801CEAF8: lw          $t3, 0xB4($a0)
    ctx->r11 = MEM_W(ctx->r4, 0XB4);
L_801CEAFC:
    // 0x801CEAFC: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CEB00: ldc1        $f8, -0x1180($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X1180);
    // 0x801CEB04: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x801CEB08: nop

    // 0x801CEB0C: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x801CEB10: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x801CEB14: trunc.w.d   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_D(ctx->f10.d);
    // 0x801CEB18: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x801CEB1C: nop

    // 0x801CEB20: slti        $at, $v0, 0x61A8
    ctx->r1 = SIGNED(ctx->r2) < 0X61A8 ? 1 : 0;
    // 0x801CEB24: bne         $at, $zero, L_801CEB68
    if (ctx->r1 != 0) {
        // 0x801CEB28: nop
    
            goto L_801CEB68;
    }
    // 0x801CEB28: nop

    // 0x801CEB2C: lh          $t5, 0x0($a1)
    ctx->r13 = MEM_H(ctx->r5, 0X0);
    // 0x801CEB30: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801CEB34: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
    // 0x801CEB38: andi        $t6, $t5, 0x8000
    ctx->r14 = ctx->r13 & 0X8000;
    // 0x801CEB3C: beql        $t6, $zero, L_801CEB54
    if (ctx->r14 == 0) {
        // 0x801CEB40: lb          $t8, 0x9F($a0)
        ctx->r24 = MEM_B(ctx->r4, 0X9F);
            goto L_801CEB54;
    }
    goto skip_1;
    // 0x801CEB40: lb          $t8, 0x9F($a0)
    ctx->r24 = MEM_B(ctx->r4, 0X9F);
    skip_1:
    // 0x801CEB44: sb          $t7, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = ctx->r15;
    // 0x801CEB48: b           L_801CEB68
    // 0x801CEB4C: sb          $zero, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = 0;
        goto L_801CEB68;
    // 0x801CEB4C: sb          $zero, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = 0;
    // 0x801CEB50: lb          $t8, 0x9F($a0)
    ctx->r24 = MEM_B(ctx->r4, 0X9F);
L_801CEB54:
    // 0x801CEB54: andi        $t9, $t8, 0x8
    ctx->r25 = ctx->r24 & 0X8;
    // 0x801CEB58: bnel        $t9, $zero, L_801CEB68
    if (ctx->r25 != 0) {
        // 0x801CEB5C: sb          $zero, 0x9D($a0)
        MEM_B(0X9D, ctx->r4) = 0;
            goto L_801CEB68;
    }
    goto skip_2;
    // 0x801CEB5C: sb          $zero, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = 0;
    skip_2:
    // 0x801CEB60: sb          $zero, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = 0;
    // 0x801CEB64: sb          $zero, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = 0;
L_801CEB68:
    // 0x801CEB68: jr          $ra
    // 0x801CEB6C: sw          $v0, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x801CEB6C: sw          $v0, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_801CCB34_63B984(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CCB34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CCB38: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801CCB3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CCB40: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801CCB44: addiu       $a0, $a0, 0x35D0
    ctx->r4 = ADD32(ctx->r4, 0X35D0);
    // 0x801CCB48: jal         0x80034DD8
    // 0x801CCB4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034DD8_359D8(rdram, ctx);
        goto after_0;
    // 0x801CCB4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x801CCB50: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x801CCB54: sw          $t6, 0xEC($v0)
    MEM_W(0XEC, ctx->r2) = ctx->r14;
    // 0x801CCB58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CCB5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CCB60: jr          $ra
    // 0x801CCB64: nop

    TRACE_RETURN()
    return;
    // 0x801CCB64: nop

;}
RECOMP_FUNC void func_801DFE68_64ECB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DFE68: beq         $a0, $zero, L_801DFE7C
    if (ctx->r4 == 0) {
        // 0x801DFE6C: nop
    
            goto L_801DFE7C;
    }
    // 0x801DFE6C: nop

    // 0x801DFE70: lb          $t6, 0x78($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X78);
    // 0x801DFE74: andi        $t7, $t6, 0xFFFE
    ctx->r15 = ctx->r14 & 0XFFFE;
    // 0x801DFE78: sb          $t7, 0x78($a0)
    MEM_B(0X78, ctx->r4) = ctx->r15;
L_801DFE7C:
    // 0x801DFE7C: jr          $ra
    // 0x801DFE80: nop

    TRACE_RETURN()
    return;
    // 0x801DFE80: nop

;}
RECOMP_FUNC void func_801DBCD0_64AB20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DBCD0: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x801DBCD4: sw          $ra, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r31;
    // 0x801DBCD8: sw          $s5, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r21;
    // 0x801DBCDC: sw          $s4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r20;
    // 0x801DBCE0: sw          $s3, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r19;
    // 0x801DBCE4: sw          $s2, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r18;
    // 0x801DBCE8: sw          $s1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r17;
    // 0x801DBCEC: sw          $s0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r16;
    // 0x801DBCF0: sdc1        $f28, 0x58($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X58, ctx->r29);
    // 0x801DBCF4: sdc1        $f26, 0x50($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X50, ctx->r29);
    // 0x801DBCF8: sdc1        $f24, 0x48($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X48, ctx->r29);
    // 0x801DBCFC: sdc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X40, ctx->r29);
    // 0x801DBD00: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x801DBD04: sw          $a0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r4;
    // 0x801DBD08: sw          $a1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r5;
    // 0x801DBD0C: lw          $s2, 0xEC($a0)
    ctx->r18 = MEM_W(ctx->r4, 0XEC);
    // 0x801DBD10: lw          $s1, 0x5C($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X5C);
    // 0x801DBD14: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801DBD18: lw          $t7, 0x31C($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X31C);
    // 0x801DBD1C: lb          $v0, 0x0($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X0);
    // 0x801DBD20: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801DBD24: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x801DBD28: lhu         $s5, 0x60($a0)
    ctx->r21 = MEM_HU(ctx->r4, 0X60);
    // 0x801DBD2C: lbu         $s3, 0x314($s2)
    ctx->r19 = MEM_BU(ctx->r18, 0X314);
    // 0x801DBD30: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801DBD34: bltz        $v0, L_801DBE6C
    if (SIGNED(ctx->r2) < 0) {
        // 0x801DBD38: div.s       $f28, $f6, $f8
        CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f28.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
            goto L_801DBE6C;
    }
    // 0x801DBD38: div.s       $f28, $f6, $f8
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f28.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801DBD3C: lwc1        $f10, 0xC($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0XC);
    // 0x801DBD40: lui         $s4, 0x801F
    ctx->r20 = S32(0X801F << 16);
    // 0x801DBD44: addiu       $s4, $s4, -0x2780
    ctx->r20 = ADD32(ctx->r20, -0X2780);
    // 0x801DBD48: c.le.s      $f10, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f10.fl <= ctx->f28.fl;
    // 0x801DBD4C: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801DBD50: bc1fl       L_801DBE70
    if (!c1cs) {
        // 0x801DBD54: lw          $t7, 0x80($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X80);
            goto L_801DBE70;
    }
    goto skip_0;
    // 0x801DBD54: lw          $t7, 0x80($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X80);
    skip_0:
    // 0x801DBD58: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x801DBD5C: lwc1        $f26, -0xD7C($at)
    ctx->f26.u32l = MEM_W(ctx->r1, -0XD7C);
    // 0x801DBD60: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
L_801DBD64:
    // 0x801DBD64: addu        $t9, $s4, $t8
    ctx->r25 = ADD32(ctx->r20, ctx->r24);
    // 0x801DBD68: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    // 0x801DBD6C: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x801DBD70: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801DBD74: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x801DBD78: swc1        $f26, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f26.u32l;
    // 0x801DBD7C: swc1        $f26, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f26.u32l;
    // 0x801DBD80: swc1        $f26, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f26.u32l;
    // 0x801DBD84: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801DBD88: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801DBD8C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801DBD90: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x801DBD94: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x801DBD98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801DBD9C: jal         0x80035854
    // 0x801DBDA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80035854_36454(rdram, ctx);
        goto after_0;
    // 0x801DBDA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x801DBDA4: beq         $v0, $zero, L_801DBE48
    if (ctx->r2 == 0) {
        // 0x801DBDA8: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_801DBE48;
    }
    // 0x801DBDA8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x801DBDAC: sll         $t0, $s3, 2
    ctx->r8 = S32(ctx->r19 << 2);
    // 0x801DBDB0: addu        $t1, $s2, $t0
    ctx->r9 = ADD32(ctx->r18, ctx->r8);
    // 0x801DBDB4: sw          $v0, 0x290($t1)
    MEM_W(0X290, ctx->r9) = ctx->r2;
    // 0x801DBDB8: lb          $t3, 0x1($s1)
    ctx->r11 = MEM_B(ctx->r17, 0X1);
    // 0x801DBDBC: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x801DBDC0: andi        $t2, $s3, 0xFF
    ctx->r10 = ctx->r19 & 0XFF;
    // 0x801DBDC4: sb          $t3, 0x9E($v0)
    MEM_B(0X9E, ctx->r2) = ctx->r11;
    // 0x801DBDC8: lwc1        $f16, 0x4($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X4);
    // 0x801DBDCC: or          $s3, $t2, $zero
    ctx->r19 = ctx->r10 | 0;
    // 0x801DBDD0: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    // 0x801DBDD4: swc1        $f16, 0x5C($v0)
    MEM_W(0X5C, ctx->r2) = ctx->f16.u32l;
    // 0x801DBDD8: lwc1        $f24, 0xC($s1)
    ctx->f24.u32l = MEM_W(ctx->r17, 0XC);
    // 0x801DBDDC: lwc1        $f22, 0x8($s1)
    ctx->f22.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801DBDE0: jal         0x801CBC94
    // 0x801DBDE4: mov.s       $f12, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    ctx->f12.fl = ctx->f24.fl;
    func_801CBC94_63AAE4(rdram, ctx);
        goto after_1;
    // 0x801DBDE4: mov.s       $f12, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    ctx->f12.fl = ctx->f24.fl;
    after_1:
    // 0x801DBDE8: add.s       $f22, $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f0.fl;
    // 0x801DBDEC: swc1        $f24, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f24.u32l;
    // 0x801DBDF0: sb          $zero, 0x9F($s0)
    MEM_B(0X9F, ctx->r16) = 0;
    // 0x801DBDF4: sb          $zero, 0x9C($s0)
    MEM_B(0X9C, ctx->r16) = 0;
    // 0x801DBDF8: swc1        $f22, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->f22.u32l;
    // 0x801DBDFC: sb          $zero, 0x9D($s0)
    MEM_B(0X9D, ctx->r16) = 0;
    // 0x801DBE00: sw          $s2, 0xEC($s0)
    MEM_W(0XEC, ctx->r16) = ctx->r18;
    // 0x801DBE04: jal         0x801CD634
    // 0x801DBE08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801CD634_63C484(rdram, ctx);
        goto after_2;
    // 0x801DBE08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801DBE0C: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
    // 0x801DBE10: lh          $t4, 0x310($s2)
    ctx->r12 = MEM_H(ctx->r18, 0X310);
    // 0x801DBE14: sh          $t4, 0x76($s0)
    MEM_H(0X76, ctx->r16) = ctx->r12;
    // 0x801DBE18: lh          $t5, 0x310($s2)
    ctx->r13 = MEM_H(ctx->r18, 0X310);
    // 0x801DBE1C: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x801DBE20: sh          $t6, 0x310($s2)
    MEM_H(0X310, ctx->r18) = ctx->r14;
    // 0x801DBE24: swc1        $f20, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f20.u32l;
    // 0x801DBE28: swc1        $f20, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f20.u32l;
    // 0x801DBE2C: swc1        $f20, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f20.u32l;
    // 0x801DBE30: swc1        $f20, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->f20.u32l;
    // 0x801DBE34: swc1        $f20, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->f20.u32l;
    // 0x801DBE38: swc1        $f20, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->f20.u32l;
    // 0x801DBE3C: swc1        $f20, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f20.u32l;
    // 0x801DBE40: swc1        $f20, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->f20.u32l;
    // 0x801DBE44: swc1        $f20, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f20.u32l;
L_801DBE48:
    // 0x801DBE48: lb          $v0, 0x10($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X10);
    // 0x801DBE4C: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    // 0x801DBE50: bltzl       $v0, L_801DBE70
    if (SIGNED(ctx->r2) < 0) {
        // 0x801DBE54: lw          $t7, 0x80($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X80);
            goto L_801DBE70;
    }
    goto skip_1;
    // 0x801DBE54: lw          $t7, 0x80($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X80);
    skip_1:
    // 0x801DBE58: lwc1        $f18, 0xC($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0XC);
    // 0x801DBE5C: c.le.s      $f18, $f28
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f18.fl <= ctx->f28.fl;
    // 0x801DBE60: nop

    // 0x801DBE64: bc1tl       L_801DBD64
    if (c1cs) {
        // 0x801DBE68: sll         $t8, $v0, 2
        ctx->r24 = S32(ctx->r2 << 2);
            goto L_801DBD64;
    }
    goto skip_2;
    // 0x801DBE68: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    skip_2:
L_801DBE6C:
    // 0x801DBE6C: lw          $t7, 0x80($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X80);
L_801DBE70:
    // 0x801DBE70: sw          $s1, 0x5C($t7)
    MEM_W(0X5C, ctx->r15) = ctx->r17;
    // 0x801DBE74: sb          $s3, 0x314($s2)
    MEM_B(0X314, ctx->r18) = ctx->r19;
    // 0x801DBE78: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    // 0x801DBE7C: lw          $s5, 0x78($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X78);
    // 0x801DBE80: lw          $s4, 0x74($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X74);
    // 0x801DBE84: lw          $s3, 0x70($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X70);
    // 0x801DBE88: lw          $s2, 0x6C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X6C);
    // 0x801DBE8C: lw          $s1, 0x68($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X68);
    // 0x801DBE90: lw          $s0, 0x64($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X64);
    // 0x801DBE94: ldc1        $f28, 0x58($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X58);
    // 0x801DBE98: ldc1        $f26, 0x50($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X50);
    // 0x801DBE9C: ldc1        $f24, 0x48($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X48);
    // 0x801DBEA0: ldc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X40);
    // 0x801DBEA4: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x801DBEA8: jr          $ra
    // 0x801DBEAC: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    TRACE_RETURN()
    return;
    // 0x801DBEAC: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_801D0FCC_63FE1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D0FCC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D0FD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D0FD4: lh          $t6, 0x0($a1)
    ctx->r14 = MEM_H(ctx->r5, 0X0);
    // 0x801D0FD8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801D0FDC: addiu       $t9, $zero, 0x2710
    ctx->r25 = ADD32(0, 0X2710);
    // 0x801D0FE0: ori         $t7, $t6, 0x2000
    ctx->r15 = ctx->r14 | 0X2000;
    // 0x801D0FE4: sh          $t7, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r15;
    // 0x801D0FE8: lb          $t8, 0xC4($a0)
    ctx->r24 = MEM_B(ctx->r4, 0XC4);
    // 0x801D0FEC: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x801D0FF0: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x801D0FF4: beq         $t8, $zero, L_801D1004
    if (ctx->r24 == 0) {
        // 0x801D0FF8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_801D1004;
    }
    // 0x801D0FF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801D0FFC: sb          $zero, 0xC4($a0)
    MEM_B(0XC4, ctx->r4) = 0;
    // 0x801D1000: sw          $t9, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->r25;
L_801D1004:
    // 0x801D1004: sb          $zero, 0xA3($a2)
    MEM_B(0XA3, ctx->r6) = 0;
    // 0x801D1008: lw          $t0, -0x3A38($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3A38);
    // 0x801D100C: lui         $t1, 0x4
    ctx->r9 = S32(0X4 << 16);
    // 0x801D1010: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801D1014: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x801D1018: lhu         $t1, -0x520C($t1)
    ctx->r9 = MEM_HU(ctx->r9, -0X520C);
    // 0x801D101C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x801D1020: bnel        $t1, $at, L_801D1048
    if (ctx->r9 != ctx->r1) {
        // 0x801D1024: sb          $v0, 0x9D($a2)
        MEM_B(0X9D, ctx->r6) = ctx->r2;
            goto L_801D1048;
    }
    goto skip_0;
    // 0x801D1024: sb          $v0, 0x9D($a2)
    MEM_B(0X9D, ctx->r6) = ctx->r2;
    skip_0:
    // 0x801D1028: sb          $t2, 0x9D($a2)
    MEM_B(0X9D, ctx->r6) = ctx->r10;
    // 0x801D102C: sb          $zero, 0x9E($a2)
    MEM_B(0X9E, ctx->r6) = 0;
    // 0x801D1030: sw          $zero, 0xC8($a2)
    MEM_W(0XC8, ctx->r6) = 0;
    // 0x801D1034: jal         0x801D11B4
    // 0x801D1038: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_801D11B4_640004(rdram, ctx);
        goto after_0;
    // 0x801D1038: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x801D103C: b           L_801D1070
    // 0x801D1040: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801D1070;
    // 0x801D1040: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D1044: sb          $v0, 0x9D($a2)
    MEM_B(0X9D, ctx->r6) = ctx->r2;
L_801D1048:
    // 0x801D1048: sb          $v0, 0x9E($a2)
    MEM_B(0X9E, ctx->r6) = ctx->r2;
    // 0x801D104C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x801D1050: jal         0x80038B98
    // 0x801D1054: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80038B98_39798(rdram, ctx);
        goto after_1;
    // 0x801D1054: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_1:
    // 0x801D1058: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801D105C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x801D1060: addiu       $t3, $zero, 0x3C
    ctx->r11 = ADD32(0, 0X3C);
    // 0x801D1064: jal         0x801D107C
    // 0x801D1068: sb          $t3, 0xA2($a0)
    MEM_B(0XA2, ctx->r4) = ctx->r11;
    func_801D107C_63FECC(rdram, ctx);
        goto after_2;
    // 0x801D1068: sb          $t3, 0xA2($a0)
    MEM_B(0XA2, ctx->r4) = ctx->r11;
    after_2:
    // 0x801D106C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801D1070:
    // 0x801D1070: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D1074: jr          $ra
    // 0x801D1078: nop

    TRACE_RETURN()
    return;
    // 0x801D1078: nop

;}
RECOMP_FUNC void func_801E1A60_6508B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E1A60: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x801E1A64: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x801E1A68: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801E1A6C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801E1A70: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801E1A74: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x801E1A78: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x801E1A7C: bne         $a0, $zero, L_801E1A8C
    if (ctx->r4 != 0) {
        // 0x801E1A80: sw          $a3, 0x6C($sp)
        MEM_W(0X6C, ctx->r29) = ctx->r7;
            goto L_801E1A8C;
    }
    // 0x801E1A80: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    // 0x801E1A84: b           L_801E1CB0
    // 0x801E1A88: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801E1CB0;
    // 0x801E1A88: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801E1A8C:
    // 0x801E1A8C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E1A90: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801E1A94: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801E1A98: jal         0x80035EEC
    // 0x801E1A9C: swc1        $f12, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f12.u32l;
    func_80035EEC_36AEC(rdram, ctx);
        goto after_0;
    // 0x801E1A9C: swc1        $f12, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x801E1AA0: lwc1        $f12, 0x64($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801E1AA4: beq         $v0, $zero, L_801E1CAC
    if (ctx->r2 == 0) {
        // 0x801E1AA8: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_801E1CAC;
    }
    // 0x801E1AA8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x801E1AAC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E1AB0: jal         0x801CDF74
    // 0x801E1AB4: swc1        $f12, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f12.u32l;
    func_801CDF74_63CDC4(rdram, ctx);
        goto after_1;
    // 0x801E1AB4: swc1        $f12, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f12.u32l;
    after_1:
    // 0x801E1AB8: bne         $v0, $zero, L_801E1AD8
    if (ctx->r2 != 0) {
        // 0x801E1ABC: lwc1        $f12, 0x64($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X64);
            goto L_801E1AD8;
    }
    // 0x801E1ABC: lwc1        $f12, 0x64($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801E1AC0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E1AC4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x801E1AC8: jal         0x80036158
    // 0x801E1ACC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80036158_36D58(rdram, ctx);
        goto after_2;
    // 0x801E1ACC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x801E1AD0: b           L_801E1CB0
    // 0x801E1AD4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801E1CB0;
    // 0x801E1AD4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801E1AD8:
    // 0x801E1AD8: lbu         $a2, 0x6B($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X6B);
    // 0x801E1ADC: lui         $v1, 0x4000
    ctx->r3 = S32(0X4000 << 16);
    // 0x801E1AE0: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x801E1AE4: addiu       $t6, $t6, 0x100
    ctx->r14 = ADD32(ctx->r14, 0X100);
    // 0x801E1AE8: or          $t8, $v0, $v1
    ctx->r24 = ctx->r2 | ctx->r3;
    // 0x801E1AEC: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801E1AF0: addu        $t7, $v1, $t6
    ctx->r15 = ADD32(ctx->r3, ctx->r14);
    // 0x801E1AF4: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x801E1AF8: sw          $t7, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r15;
    // 0x801E1AFC: beq         $a2, $zero, L_801E1B38
    if (ctx->r6 == 0) {
        // 0x801E1B00: sw          $t9, 0x30($s0)
        MEM_W(0X30, ctx->r16) = ctx->r25;
            goto L_801E1B38;
    }
    // 0x801E1B00: sw          $t9, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r25;
    // 0x801E1B04: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x801E1B08: lui         $t1, 0x801F
    ctx->r9 = S32(0X801F << 16);
    // 0x801E1B0C: addiu       $t1, $t1, -0x1A80
    ctx->r9 = ADD32(ctx->r9, -0X1A80);
    // 0x801E1B10: lui         $t0, 0x600
    ctx->r8 = S32(0X600 << 16);
    // 0x801E1B14: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x801E1B18: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x801E1B1C: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x801E1B20: lui         $t2, 0xFB00
    ctx->r10 = S32(0XFB00 << 16);
    // 0x801E1B24: andi        $t3, $a2, 0xFF
    ctx->r11 = ctx->r6 & 0XFF;
    // 0x801E1B28: sw          $t3, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r11;
    // 0x801E1B2C: sw          $t2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r10;
    // 0x801E1B30: b           L_801E1B50
    // 0x801E1B34: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
        goto L_801E1B50;
    // 0x801E1B34: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
L_801E1B38:
    // 0x801E1B38: lui         $t5, 0x801F
    ctx->r13 = S32(0X801F << 16);
    // 0x801E1B3C: addiu       $t5, $t5, -0x1B70
    ctx->r13 = ADD32(ctx->r13, -0X1B70);
    // 0x801E1B40: lui         $t4, 0x600
    ctx->r12 = S32(0X600 << 16);
    // 0x801E1B44: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x801E1B48: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x801E1B4C: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
L_801E1B50:
    // 0x801E1B50: lui         $at, 0x402E
    ctx->r1 = S32(0X402E << 16);
    // 0x801E1B54: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x801E1B58: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801E1B5C: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x801E1B60: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x801E1B64: div.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f4.d, ctx->f6.d);
    // 0x801E1B68: lui         $t6, 0xFA00
    ctx->r14 = S32(0XFA00 << 16);
    // 0x801E1B6C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x801E1B70: lbu         $t0, 0x70($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X70);
    // 0x801E1B74: lbu         $t4, 0x71($s1)
    ctx->r12 = MEM_BU(ctx->r17, 0X71);
    // 0x801E1B78: lbu         $t8, 0x73($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X73);
    // 0x801E1B7C: lbu         $t9, 0x72($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X72);
    // 0x801E1B80: sll         $t1, $t0, 24
    ctx->r9 = S32(ctx->r8 << 24);
    // 0x801E1B84: sll         $t5, $t4, 16
    ctx->r13 = S32(ctx->r12 << 16);
    // 0x801E1B88: or          $t2, $t8, $t1
    ctx->r10 = ctx->r24 | ctx->r9;
    // 0x801E1B8C: or          $t6, $t2, $t5
    ctx->r14 = ctx->r10 | ctx->r13;
    // 0x801E1B90: sll         $t0, $t9, 8
    ctx->r8 = S32(ctx->r25 << 8);
    // 0x801E1B94: or          $t8, $t6, $t0
    ctx->r24 = ctx->r14 | ctx->r8;
    // 0x801E1B98: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x801E1B9C: lui         $t1, 0xB800
    ctx->r9 = S32(0XB800 << 16);
    // 0x801E1BA0: sw          $t1, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r9;
    // 0x801E1BA4: sw          $zero, 0xC($v1)
    MEM_W(0XC, ctx->r3) = 0;
    // 0x801E1BA8: swc1        $f12, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->f12.u32l;
    // 0x801E1BAC: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801E1BB0: ldc1        $f16, -0xC00($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0XC00);
    // 0x801E1BB4: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x801E1BB8: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    // 0x801E1BBC: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    // 0x801E1BC0: cvt.d.s     $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f10.d = CVT_D_S(ctx->f12.fl);
    // 0x801E1BC4: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x801E1BC8: cvt.s.d     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f0.fl = CVT_S_D(ctx->f18.d);
    // 0x801E1BCC: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x801E1BD0: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x801E1BD4: jal         0x8000DD58
    // 0x801E1BD8: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    func_8000DD58_E958(rdram, ctx);
        goto after_3;
    // 0x801E1BD8: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    after_3:
    // 0x801E1BDC: sll         $t4, $v0, 3
    ctx->r12 = S32(ctx->r2 << 3);
    // 0x801E1BE0: sh          $t4, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r12;
    // 0x801E1BE4: jal         0x8000DD58
    // 0x801E1BE8: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    func_8000DD58_E958(rdram, ctx);
        goto after_4;
    // 0x801E1BE8: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    after_4:
    // 0x801E1BEC: sll         $t5, $v0, 3
    ctx->r13 = S32(ctx->r2 << 3);
    // 0x801E1BF0: sh          $t5, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r13;
    // 0x801E1BF4: jal         0x8000DD58
    // 0x801E1BF8: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    func_8000DD58_E958(rdram, ctx);
        goto after_5;
    // 0x801E1BF8: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    after_5:
    // 0x801E1BFC: sll         $t9, $v0, 3
    ctx->r25 = S32(ctx->r2 << 3);
    // 0x801E1C00: addiu       $t6, $zero, 0x4BE
    ctx->r14 = ADD32(0, 0X4BE);
    // 0x801E1C04: sh          $t9, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r25;
    // 0x801E1C08: sh          $t6, 0x34($s0)
    MEM_H(0X34, ctx->r16) = ctx->r14;
    // 0x801E1C0C: jal         0x80014218
    // 0x801E1C10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80014218_14E18(rdram, ctx);
        goto after_6;
    // 0x801E1C10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x801E1C14: lbu         $t0, 0x6B($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X6B);
    // 0x801E1C18: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801E1C1C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E1C20: sb          $t0, 0x80($s0)
    MEM_B(0X80, ctx->r16) = ctx->r8;
    // 0x801E1C24: lh          $t8, 0x6E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X6E);
    // 0x801E1C28: addiu       $t1, $sp, 0x4C
    ctx->r9 = ADD32(ctx->r29, 0X4C);
    // 0x801E1C2C: addiu       $t3, $sp, 0x50
    ctx->r11 = ADD32(ctx->r29, 0X50);
    // 0x801E1C30: sh          $t8, 0x82($s0)
    MEM_H(0X82, ctx->r16) = ctx->r24;
    // 0x801E1C34: lwc1        $f4, 0x78($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X78);
    // 0x801E1C38: ldc1        $f8, -0xBF8($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0XBF8);
    // 0x801E1C3C: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x801E1C40: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801E1C44: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x801E1C48: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x801E1C4C: lhu         $a1, 0x72($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X72);
    // 0x801E1C50: lhu         $a0, 0x76($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X76);
    // 0x801E1C54: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801E1C58: addiu       $a3, $sp, 0x48
    ctx->r7 = ADD32(ctx->r29, 0X48);
    // 0x801E1C5C: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    // 0x801E1C60: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    // 0x801E1C64: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801E1C68: jal         0x80033898
    // 0x801E1C6C: swc1        $f16, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f16.u32l;
    func_80033898_34498(rdram, ctx);
        goto after_7;
    // 0x801E1C6C: swc1        $f16, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f16.u32l;
    after_7:
    // 0x801E1C70: lwc1        $f18, 0x48($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X48);
    // 0x801E1C74: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801E1C78: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E1C7C: swc1        $f18, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->f18.u32l;
    // 0x801E1C80: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801E1C84: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x801E1C88: swc1        $f4, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->f4.u32l;
    // 0x801E1C8C: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x801E1C90: swc1        $f6, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f6.u32l;
    // 0x801E1C94: lbu         $v0, 0x6A($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6A);
    // 0x801E1C98: sll         $t4, $v0, 2
    ctx->r12 = S32(ctx->r2 << 2);
    // 0x801E1C9C: addu        $t9, $t9, $t4
    ctx->r25 = ADD32(ctx->r25, ctx->r12);
    // 0x801E1CA0: lw          $t9, -0x20A0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X20A0);
    // 0x801E1CA4: jalr        $t9
    // 0x801E1CA8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x801E1CA8: nop

    after_8:
L_801E1CAC:
    // 0x801E1CAC: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_801E1CB0:
    // 0x801E1CB0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801E1CB4: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x801E1CB8: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x801E1CBC: jr          $ra
    // 0x801E1CC0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x801E1CC0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_801CEB70_63D9C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CEB70: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801CEB74: lb          $v0, 0x9F($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X9F);
    // 0x801CEB78: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x801CEB7C: andi        $t6, $v0, 0x10
    ctx->r14 = ctx->r2 & 0X10;
    // 0x801CEB80: beq         $t6, $zero, L_801CEB98
    if (ctx->r14 == 0) {
        // 0x801CEB84: andi        $t8, $v0, 0x20
        ctx->r24 = ctx->r2 & 0X20;
            goto L_801CEB98;
    }
    // 0x801CEB84: andi        $t8, $v0, 0x20
    ctx->r24 = ctx->r2 & 0X20;
    // 0x801CEB88: sb          $t7, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = ctx->r15;
    // 0x801CEB8C: sb          $zero, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = 0;
    // 0x801CEB90: jr          $ra
    // 0x801CEB94: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    TRACE_RETURN()
    return;
    // 0x801CEB94: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_801CEB98:
    // 0x801CEB98: beq         $t8, $zero, L_801CEBB4
    if (ctx->r24 == 0) {
        // 0x801CEB9C: andi        $t0, $v0, 0x2
        ctx->r8 = ctx->r2 & 0X2;
            goto L_801CEBB4;
    }
    // 0x801CEB9C: andi        $t0, $v0, 0x2
    ctx->r8 = ctx->r2 & 0X2;
    // 0x801CEBA0: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x801CEBA4: sb          $t9, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = ctx->r25;
    // 0x801CEBA8: sb          $zero, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = 0;
    // 0x801CEBAC: jr          $ra
    // 0x801CEBB0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    TRACE_RETURN()
    return;
    // 0x801CEBB0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_801CEBB4:
    // 0x801CEBB4: beq         $t0, $zero, L_801CEBD8
    if (ctx->r8 == 0) {
        // 0x801CEBB8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_801CEBD8;
    }
    // 0x801CEBB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801CEBBC: lbu         $t1, 0x9C($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X9C);
    // 0x801CEBC0: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x801CEBC4: sb          $t2, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = ctx->r10;
    // 0x801CEBC8: sb          $zero, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = 0;
    // 0x801CEBCC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x801CEBD0: jr          $ra
    // 0x801CEBD4: sb          $t1, 0x9E($a0)
    MEM_B(0X9E, ctx->r4) = ctx->r9;
    TRACE_RETURN()
    return;
    // 0x801CEBD4: sb          $t1, 0x9E($a0)
    MEM_B(0X9E, ctx->r4) = ctx->r9;
L_801CEBD8:
    // 0x801CEBD8: jr          $ra
    // 0x801CEBDC: nop

    TRACE_RETURN()
    return;
    // 0x801CEBDC: nop

;}
RECOMP_FUNC void func_801D206C_640EBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D206C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801D2070: jr          $ra
    // 0x801D2074: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801D2074: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801E7D14_656B64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E7D14: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801E7D18: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x801E7D1C: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x801E7D20: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x801E7D24: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x801E7D28: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x801E7D2C: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x801E7D30: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x801E7D34: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x801E7D38: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801E7D3C: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x801E7D40: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x801E7D44: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x801E7D48: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801E7D4C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801E7D50: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x801E7D54: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x801E7D58: jal         0x801E58A4
    // 0x801E7D5C: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    func_801E58A4_6546F4(rdram, ctx);
        goto after_0;
    // 0x801E7D5C: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    after_0:
    // 0x801E7D60: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x801E7D64: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801E7D68: jr          $ra
    // 0x801E7D6C: nop

    TRACE_RETURN()
    return;
    // 0x801E7D6C: nop

;}
RECOMP_FUNC void func_801DBC00_64AA50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DBC00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DBC04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DBC08: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801DBC0C: lw          $v1, 0xEC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XEC);
    // 0x801DBC10: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801DBC14: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801DBC18: lw          $t6, 0x31C($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X31C);
    // 0x801DBC1C: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x801DBC20: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x801DBC24: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x801DBC28: lui         $a1, 0x4
    ctx->r5 = S32(0X4 << 16);
    // 0x801DBC2C: addu        $a1, $a1, $t7
    ctx->r5 = ADD32(ctx->r5, ctx->r15);
    // 0x801DBC30: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801DBC34: lbu         $a1, -0x520B($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X520B);
    // 0x801DBC38: lui         $v0, 0x801F
    ctx->r2 = S32(0X801F << 16);
    // 0x801DBC3C: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801DBC40: sll         $a3, $a1, 2
    ctx->r7 = S32(ctx->r5 << 2);
    // 0x801DBC44: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x801DBC48: div.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801DBC4C: lw          $v0, -0x27B0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X27B0);
    // 0x801DBC50: lwc1        $f10, -0xD80($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0XD80);
    // 0x801DBC54: lui         $t0, 0x801F
    ctx->r8 = S32(0X801F << 16);
    // 0x801DBC58: lb          $t8, 0x0($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X0);
    // 0x801DBC5C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801DBC60: addu        $t0, $t0, $a3
    ctx->r8 = ADD32(ctx->r8, ctx->r7);
    // 0x801DBC64: bltz        $t8, L_801DBCA4
    if (SIGNED(ctx->r24) < 0) {
        // 0x801DBC68: sub.s       $f0, $f0, $f10
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f10.fl;
            goto L_801DBCA4;
    }
    // 0x801DBC68: sub.s       $f0, $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x801DBC6C: lwc1        $f16, 0xC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801DBC70: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x801DBC74: nop

    // 0x801DBC78: bc1fl       L_801DBCA8
    if (!c1cs) {
        // 0x801DBC7C: sw          $v0, 0x5C($a2)
        MEM_W(0X5C, ctx->r6) = ctx->r2;
            goto L_801DBCA8;
    }
    goto skip_0;
    // 0x801DBC7C: sw          $v0, 0x5C($a2)
    MEM_W(0X5C, ctx->r6) = ctx->r2;
    skip_0:
    // 0x801DBC80: lb          $t9, 0x10($v0)
    ctx->r25 = MEM_B(ctx->r2, 0X10);
L_801DBC84:
    // 0x801DBC84: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x801DBC88: bltzl       $t9, L_801DBCA8
    if (SIGNED(ctx->r25) < 0) {
        // 0x801DBC8C: sw          $v0, 0x5C($a2)
        MEM_W(0X5C, ctx->r6) = ctx->r2;
            goto L_801DBCA8;
    }
    goto skip_1;
    // 0x801DBC8C: sw          $v0, 0x5C($a2)
    MEM_W(0X5C, ctx->r6) = ctx->r2;
    skip_1:
    // 0x801DBC90: lwc1        $f18, 0xC($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801DBC94: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x801DBC98: nop

    // 0x801DBC9C: bc1tl       L_801DBC84
    if (c1cs) {
        // 0x801DBCA0: lb          $t9, 0x10($v0)
        ctx->r25 = MEM_B(ctx->r2, 0X10);
            goto L_801DBC84;
    }
    goto skip_2;
    // 0x801DBCA0: lb          $t9, 0x10($v0)
    ctx->r25 = MEM_B(ctx->r2, 0X10);
    skip_2:
L_801DBCA4:
    // 0x801DBCA4: sw          $v0, 0x5C($a2)
    MEM_W(0X5C, ctx->r6) = ctx->r2;
L_801DBCA8:
    // 0x801DBCA8: lw          $t0, -0x770C($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X770C);
    // 0x801DBCAC: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DBCB0: addiu       $a0, $a0, -0x4330
    ctx->r4 = ADD32(ctx->r4, -0X4330);
    // 0x801DBCB4: lhu         $t1, 0xC($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0XC);
    // 0x801DBCB8: jal         0x800352EC
    // 0x801DBCBC: sh          $t1, 0x60($a2)
    MEM_H(0X60, ctx->r6) = ctx->r9;
    func_800352EC_35EEC(rdram, ctx);
        goto after_0;
    // 0x801DBCBC: sh          $t1, 0x60($a2)
    MEM_H(0X60, ctx->r6) = ctx->r9;
    after_0:
    // 0x801DBCC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DBCC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DBCC8: jr          $ra
    // 0x801DBCCC: nop

    TRACE_RETURN()
    return;
    // 0x801DBCCC: nop

;}
RECOMP_FUNC void func_801D4418_643268(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D4418: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x801D441C: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801D4420: sw          $s1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r17;
    // 0x801D4424: sw          $s0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r16;
    // 0x801D4428: lh          $v0, 0xB6($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XB6);
    // 0x801D442C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801D4430: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x801D4434: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x801D4438: sll         $t6, $v0, 16
    ctx->r14 = S32(ctx->r2 << 16);
    // 0x801D443C: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x801D4440: bne         $t7, $zero, L_801D4640
    if (ctx->r15 != 0) {
        // 0x801D4444: sh          $t7, 0xB6($a0)
        MEM_H(0XB6, ctx->r4) = ctx->r15;
            goto L_801D4640;
    }
    // 0x801D4444: sh          $t7, 0xB6($a0)
    MEM_H(0XB6, ctx->r4) = ctx->r15;
    // 0x801D4448: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x801D444C: sb          $t8, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = ctx->r24;
    // 0x801D4450: lwc1        $f4, 0x1C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x801D4454: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x801D4458: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x801D445C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D4460: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801D4464: lui         $at, 0xC034
    ctx->r1 = S32(0XC034 << 16);
    // 0x801D4468: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801D446C: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x801D4470: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801D4474: lui         $at, 0x4049
    ctx->r1 = S32(0X4049 << 16);
    // 0x801D4478: addiu       $t9, $sp, 0x5C
    ctx->r25 = ADD32(ctx->r29, 0X5C);
    // 0x801D447C: addiu       $t0, $sp, 0x60
    ctx->r8 = ADD32(ctx->r29, 0X60);
    // 0x801D4480: addiu       $a3, $sp, 0x58
    ctx->r7 = ADD32(ctx->r29, 0X58);
    // 0x801D4484: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x801D4488: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801D448C: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x801D4490: lui         $at, 0x4028
    ctx->r1 = S32(0X4028 << 16);
    // 0x801D4494: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801D4498: swc1        $f18, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f18.u32l;
    // 0x801D449C: lwc1        $f4, 0x20($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X20);
    // 0x801D44A0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801D44A4: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801D44A8: nop

    // 0x801D44AC: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x801D44B0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801D44B4: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x801D44B8: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801D44BC: swc1        $f18, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f18.u32l;
    // 0x801D44C0: lwc1        $f4, 0x24($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X24);
    // 0x801D44C4: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801D44C8: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801D44CC: nop

    // 0x801D44D0: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x801D44D4: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801D44D8: swc1        $f18, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f18.u32l;
    // 0x801D44DC: lhu         $a0, 0x14($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X14);
    // 0x801D44E0: lhu         $a1, 0x16($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X16);
    // 0x801D44E4: lhu         $a2, 0x18($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X18);
    // 0x801D44E8: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x801D44EC: jal         0x80033898
    // 0x801D44F0: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_80033898_34498(rdram, ctx);
        goto after_0;
    // 0x801D44F0: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_0:
    // 0x801D44F4: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x801D44F8: lwc1        $f6, 0x5C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x801D44FC: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801D4500: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D4504: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801D4508: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801D450C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x801D4510: addiu       $t1, $sp, 0x50
    ctx->r9 = ADD32(ctx->r29, 0X50);
    // 0x801D4514: swc1        $f8, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f8.u32l;
    // 0x801D4518: lwc1        $f16, 0x60($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X60);
    // 0x801D451C: addiu       $t2, $sp, 0x54
    ctx->r10 = ADD32(ctx->r29, 0X54);
    // 0x801D4520: addiu       $a3, $sp, 0x4C
    ctx->r7 = ADD32(ctx->r29, 0X4C);
    // 0x801D4524: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801D4528: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801D452C: swc1        $f18, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f18.u32l;
    // 0x801D4530: lwc1        $f6, 0x64($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X64);
    // 0x801D4534: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    // 0x801D4538: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    // 0x801D453C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801D4540: swc1        $f10, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f10.u32l;
    // 0x801D4544: swc1        $f8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f8.u32l;
    // 0x801D4548: lhu         $a2, 0x18($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X18);
    // 0x801D454C: lhu         $a1, 0x16($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X16);
    // 0x801D4550: lhu         $a0, 0x14($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X14);
    // 0x801D4554: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x801D4558: jal         0x80033898
    // 0x801D455C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    func_80033898_34498(rdram, ctx);
        goto after_1;
    // 0x801D455C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_1:
    // 0x801D4560: lwc1        $f16, 0x5C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801D4564: lwc1        $f18, 0x60($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801D4568: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801D456C: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x801D4570: lwc1        $f8, 0x54($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801D4574: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D4578: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801D457C: lui         $a2, 0x41C8
    ctx->r6 = S32(0X41C8 << 16);
    // 0x801D4580: lw          $a3, 0x58($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X58);
    // 0x801D4584: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x801D4588: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x801D458C: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x801D4590: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x801D4594: jal         0x801D8808
    // 0x801D4598: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    func_801D8808_647658(rdram, ctx);
        goto after_2;
    // 0x801D4598: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x801D459C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D45A0: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x801D45A4: lwc1        $f16, 0x5C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801D45A8: lwc1        $f18, 0x60($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801D45AC: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x801D45B0: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x801D45B4: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x801D45B8: addiu       $t6, $zero, 0xC0
    ctx->r14 = ADD32(0, 0XC0);
    // 0x801D45BC: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x801D45C0: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x801D45C4: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x801D45C8: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x801D45CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D45D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D45D4: lui         $a2, 0x4316
    ctx->r6 = S32(0X4316 << 16);
    // 0x801D45D8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801D45DC: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x801D45E0: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x801D45E4: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x801D45E8: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x801D45EC: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    // 0x801D45F0: jal         0x801E027C
    // 0x801D45F4: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    func_801E027C_64F0CC(rdram, ctx);
        goto after_3;
    // 0x801D45F4: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    after_3:
    // 0x801D45F8: lw          $v0, 0xEC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XEC);
    // 0x801D45FC: addiu       $a0, $zero, 0x22E
    ctx->r4 = ADD32(0, 0X22E);
    // 0x801D4600: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x801D4604: lhu         $t7, 0xE2($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0XE2);
    // 0x801D4608: addiu       $a1, $v0, 0x364
    ctx->r5 = ADD32(ctx->r2, 0X364);
    // 0x801D460C: andi        $t8, $t7, 0x10
    ctx->r24 = ctx->r15 & 0X10;
    // 0x801D4610: bnel        $t8, $zero, L_801D4634
    if (ctx->r24 != 0) {
        // 0x801D4614: addiu       $t1, $zero, 0x960
        ctx->r9 = ADD32(0, 0X960);
            goto L_801D4634;
    }
    goto skip_0;
    // 0x801D4614: addiu       $t1, $zero, 0x960
    ctx->r9 = ADD32(0, 0X960);
    skip_0:
    // 0x801D4618: jal         0x8000F420
    // 0x801D461C: lui         $a3, 0x43A0
    ctx->r7 = S32(0X43A0 << 16);
    func_8000F420_10020(rdram, ctx);
        goto after_4;
    // 0x801D461C: lui         $a3, 0x43A0
    ctx->r7 = S32(0X43A0 << 16);
    after_4:
    // 0x801D4620: lw          $v0, 0xEC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XEC);
    // 0x801D4624: lhu         $t9, 0xE2($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0XE2);
    // 0x801D4628: ori         $t0, $t9, 0x10
    ctx->r8 = ctx->r25 | 0X10;
    // 0x801D462C: sh          $t0, 0xE2($v0)
    MEM_H(0XE2, ctx->r2) = ctx->r8;
    // 0x801D4630: addiu       $t1, $zero, 0x960
    ctx->r9 = ADD32(0, 0X960);
L_801D4634:
    // 0x801D4634: ori         $t2, $zero, 0x9150
    ctx->r10 = 0 | 0X9150;
    // 0x801D4638: sw          $t1, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->r9;
    // 0x801D463C: sw          $t2, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->r10;
L_801D4640:
    // 0x801D4640: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801D4644: lw          $s0, 0x3C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X3C);
    // 0x801D4648: lw          $s1, 0x40($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X40);
    // 0x801D464C: jr          $ra
    // 0x801D4650: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    TRACE_RETURN()
    return;
    // 0x801D4650: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_801DEE44_64DC94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DEE44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DEE48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DEE4C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801DEE50: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801DEE54: lb          $t6, 0x74($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X74);
    // 0x801DEE58: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x801DEE5C: bgezl       $t6, L_801DEE84
    if (SIGNED(ctx->r14) >= 0) {
        // 0x801DEE60: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_801DEE84;
    }
    goto skip_0;
    // 0x801DEE60: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    skip_0:
    // 0x801DEE64: sb          $zero, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = 0;
    // 0x801DEE68: sb          $zero, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = 0;
    // 0x801DEE6C: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DEE70: jal         0x800352EC
    // 0x801DEE74: addiu       $a0, $a0, -0x1134
    ctx->r4 = ADD32(ctx->r4, -0X1134);
    func_800352EC_35EEC(rdram, ctx);
        goto after_0;
    // 0x801DEE74: addiu       $a0, $a0, -0x1134
    ctx->r4 = ADD32(ctx->r4, -0X1134);
    after_0:
    // 0x801DEE78: b           L_801DEEC0
    // 0x801DEE7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801DEEC0;
    // 0x801DEE7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DEE80: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
L_801DEE84:
    // 0x801DEE84: jal         0x801CD504
    // 0x801DEE88: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_801CD504_63C354(rdram, ctx);
        goto after_1;
    // 0x801DEE88: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_1:
    // 0x801DEE8C: beq         $v0, $zero, L_801DEEA4
    if (ctx->r2 == 0) {
        // 0x801DEE90: lw          $a1, 0x18($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X18);
            goto L_801DEEA4;
    }
    // 0x801DEE90: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x801DEE94: jal         0x801DBEB0
    // 0x801DEE98: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_801DBEB0_64AD00(rdram, ctx);
        goto after_2;
    // 0x801DEE98: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_2:
    // 0x801DEE9C: b           L_801DEEC0
    // 0x801DEEA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801DEEC0;
    // 0x801DEEA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DEEA4:
    // 0x801DEEA4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801DEEA8: jal         0x801CD634
    // 0x801DEEAC: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_801CD634_63C484(rdram, ctx);
        goto after_3;
    // 0x801DEEAC: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_3:
    // 0x801DEEB0: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x801DEEB4: jal         0x801CD780
    // 0x801DEEB8: lwc1        $f12, 0x64($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X64);
    func_801CD780_63C5D0(rdram, ctx);
        goto after_4;
    // 0x801DEEB8: lwc1        $f12, 0x64($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X64);
    after_4:
    // 0x801DEEBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DEEC0:
    // 0x801DEEC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DEEC4: jr          $ra
    // 0x801DEEC8: nop

    TRACE_RETURN()
    return;
    // 0x801DEEC8: nop

;}
RECOMP_FUNC void func_801E7DF8_656C48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E7DF8: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x801E7DFC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801E7E00: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x801E7E04: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x801E7E08: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x801E7E0C: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x801E7E10: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x801E7E14: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801E7E18: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E7E1C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801E7E20: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801E7E24: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E7E28: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801E7E2C: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x801E7E30: addiu       $a3, $sp, 0x4C
    ctx->r7 = ADD32(ctx->r29, 0X4C);
    // 0x801E7E34: addiu       $t9, $sp, 0x50
    ctx->r25 = ADD32(ctx->r29, 0X50);
    // 0x801E7E38: addiu       $t0, $sp, 0x54
    ctx->r8 = ADD32(ctx->r29, 0X54);
    // 0x801E7E3C: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801E7E40: swc1        $f10, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f10.u32l;
    // 0x801E7E44: lwc1        $f16, 0xC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801E7E48: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801E7E4C: mul.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x801E7E50: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801E7E54: swc1        $f6, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f6.u32l;
    // 0x801E7E58: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801E7E5C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801E7E60: mul.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f0.d);
    // 0x801E7E64: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801E7E68: swc1        $f18, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f18.u32l;
    // 0x801E7E6C: lwc1        $f4, 0x1C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x801E7E70: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801E7E74: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801E7E78: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801E7E7C: swc1        $f10, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f10.u32l;
    // 0x801E7E80: lwc1        $f16, 0x20($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X20);
    // 0x801E7E84: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801E7E88: mul.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x801E7E8C: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801E7E90: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    // 0x801E7E94: lwc1        $f8, 0x24($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X24);
    // 0x801E7E98: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801E7E9C: mul.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f0.d);
    // 0x801E7EA0: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801E7EA4: swc1        $f18, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f18.u32l;
    // 0x801E7EA8: lhu         $t6, 0x14($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X14);
    // 0x801E7EAC: sh          $t6, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r14;
    // 0x801E7EB0: lhu         $t7, 0x16($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X16);
    // 0x801E7EB4: sh          $t7, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = ctx->r15;
    // 0x801E7EB8: lhu         $t8, 0x18($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X18);
    // 0x801E7EBC: andi        $a1, $t7, 0xFFFF
    ctx->r5 = ctx->r15 & 0XFFFF;
    // 0x801E7EC0: sh          $t8, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = ctx->r24;
    // 0x801E7EC4: lwc1        $f4, 0x84($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X84);
    // 0x801E7EC8: andi        $a2, $t8, 0xFFFF
    ctx->r6 = ctx->r24 & 0XFFFF;
    // 0x801E7ECC: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    // 0x801E7ED0: lwc1        $f6, 0x88($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X88);
    // 0x801E7ED4: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801E7ED8: swc1        $f6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f6.u32l;
    // 0x801E7EDC: lwc1        $f16, 0x50($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
    // 0x801E7EE0: lwc1        $f8, 0x8C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X8C);
    // 0x801E7EE4: andi        $a0, $t6, 0xFFFF
    ctx->r4 = ctx->r14 & 0XFFFF;
    // 0x801E7EE8: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801E7EEC: swc1        $f8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f8.u32l;
    // 0x801E7EF0: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801E7EF4: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x801E7EF8: c.eq.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl == ctx->f6.fl;
    // 0x801E7EFC: nop

    // 0x801E7F00: bc1tl       L_801E7F58
    if (c1cs) {
        // 0x801E7F04: lwc1        $f4, 0x40($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
            goto L_801E7F58;
    }
    goto skip_0;
    // 0x801E7F04: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    skip_0:
    // 0x801E7F08: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x801E7F0C: jal         0x80033898
    // 0x801E7F10: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    func_80033898_34498(rdram, ctx);
        goto after_0;
    // 0x801E7F10: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_0:
    // 0x801E7F14: lwc1        $f8, 0xB4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x801E7F18: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801E7F1C: lwc1        $f4, 0xB0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x801E7F20: lwc1        $f18, 0x50($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X50);
    // 0x801E7F24: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801E7F28: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801E7F2C: lwc1        $f8, 0xAC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x801E7F30: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x801E7F34: swc1        $f16, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f16.u32l;
    // 0x801E7F38: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x801E7F3C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801E7F40: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x801E7F44: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E7F48: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801E7F4C: swc1        $f16, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f16.u32l;
    // 0x801E7F50: swc1        $f6, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f6.u32l;
    // 0x801E7F54: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
L_801E7F58:
    // 0x801E7F58: lwc1        $f18, 0x78($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X78);
    // 0x801E7F5C: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801E7F60: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E7F64: mul.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x801E7F68: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x801E7F6C: addiu       $a3, $sp, 0x4C
    ctx->r7 = ADD32(ctx->r29, 0X4C);
    // 0x801E7F70: addiu       $t4, $sp, 0x50
    ctx->r12 = ADD32(ctx->r29, 0X50);
    // 0x801E7F74: addiu       $t5, $sp, 0x54
    ctx->r13 = ADD32(ctx->r29, 0X54);
    // 0x801E7F78: swc1        $f6, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f6.u32l;
    // 0x801E7F7C: lwc1        $f10, 0x7C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x801E7F80: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x801E7F84: swc1        $f16, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f16.u32l;
    // 0x801E7F88: lwc1        $f18, 0x80($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X80);
    // 0x801E7F8C: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
    // 0x801E7F90: lwc1        $f12, 0x80($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X80);
    // 0x801E7F94: mul.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x801E7F98: bc1f        L_801E7FAC
    if (!c1cs) {
        // 0x801E7F9C: swc1        $f6, 0x84($sp)
        MEM_W(0X84, ctx->r29) = ctx->f6.u32l;
            goto L_801E7FAC;
    }
    // 0x801E7F9C: swc1        $f6, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f6.u32l;
    // 0x801E7FA0: neg.s       $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = -ctx->f16.fl;
    // 0x801E7FA4: b           L_801E7FC4
    // 0x801E7FA8: swc1        $f12, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f12.u32l;
        goto L_801E7FC4;
    // 0x801E7FA8: swc1        $f12, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f12.u32l;
L_801E7FAC:
    // 0x801E7FAC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801E7FB0: lwc1        $f10, 0xB0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x801E7FB4: div.s       $f12, $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = DIV_S(ctx->f12.fl, ctx->f8.fl);
    // 0x801E7FB8: add.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f12.fl;
    // 0x801E7FBC: swc1        $f12, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f12.u32l;
    // 0x801E7FC0: swc1        $f4, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f4.u32l;
L_801E7FC4:
    // 0x801E7FC4: lw          $v0, 0x18($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X18);
    // 0x801E7FC8: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801E7FCC: cvt.d.s     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f6.d = CVT_D_S(ctx->f18.fl);
    // 0x801E7FD0: mul.d       $f16, $f6, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801E7FD4: cvt.s.d     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f8.fl = CVT_S_D(ctx->f16.d);
    // 0x801E7FD8: swc1        $f8, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f8.u32l;
    // 0x801E7FDC: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801E7FE0: cvt.d.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.d = CVT_D_S(ctx->f10.fl);
    // 0x801E7FE4: mul.d       $f18, $f4, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x801E7FE8: cvt.s.d     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f6.fl = CVT_S_D(ctx->f18.d);
    // 0x801E7FEC: swc1        $f6, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f6.u32l;
    // 0x801E7FF0: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801E7FF4: cvt.d.s     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f8.d = CVT_D_S(ctx->f16.fl);
    // 0x801E7FF8: mul.d       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f0.d);
    // 0x801E7FFC: cvt.s.d     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f4.fl = CVT_S_D(ctx->f10.d);
    // 0x801E8000: swc1        $f4, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f4.u32l;
    // 0x801E8004: lwc1        $f18, 0x1C($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x801E8008: cvt.d.s     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f6.d = CVT_D_S(ctx->f18.fl);
    // 0x801E800C: mul.d       $f16, $f6, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801E8010: cvt.s.d     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f8.fl = CVT_S_D(ctx->f16.d);
    // 0x801E8014: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    // 0x801E8018: lwc1        $f10, 0x20($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X20);
    // 0x801E801C: cvt.d.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.d = CVT_D_S(ctx->f10.fl);
    // 0x801E8020: mul.d       $f18, $f4, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x801E8024: cvt.s.d     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f6.fl = CVT_S_D(ctx->f18.d);
    // 0x801E8028: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    // 0x801E802C: lwc1        $f16, 0x24($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X24);
    // 0x801E8030: cvt.d.s     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f8.d = CVT_D_S(ctx->f16.fl);
    // 0x801E8034: mul.d       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f0.d);
    // 0x801E8038: cvt.s.d     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f4.fl = CVT_S_D(ctx->f10.d);
    // 0x801E803C: swc1        $f4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f4.u32l;
    // 0x801E8040: lhu         $t1, 0x14($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X14);
    // 0x801E8044: sh          $t1, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r9;
    // 0x801E8048: lhu         $t2, 0x16($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X16);
    // 0x801E804C: andi        $a0, $t1, 0xFFFF
    ctx->r4 = ctx->r9 & 0XFFFF;
    // 0x801E8050: sh          $t2, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = ctx->r10;
    // 0x801E8054: lhu         $t3, 0x18($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X18);
    // 0x801E8058: andi        $a1, $t2, 0xFFFF
    ctx->r5 = ctx->r10 & 0XFFFF;
    // 0x801E805C: sh          $t3, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = ctx->r11;
    // 0x801E8060: lwc1        $f18, 0x84($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X84);
    // 0x801E8064: andi        $a2, $t3, 0xFFFF
    ctx->r6 = ctx->r11 & 0XFFFF;
    // 0x801E8068: swc1        $f18, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f18.u32l;
    // 0x801E806C: lwc1        $f6, 0x88($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X88);
    // 0x801E8070: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801E8074: swc1        $f6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f6.u32l;
    // 0x801E8078: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x801E807C: lwc1        $f16, 0x8C($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X8C);
    // 0x801E8080: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801E8084: swc1        $f16, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f16.u32l;
    // 0x801E8088: lwc1        $f18, 0x54($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801E808C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801E8090: c.eq.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl == ctx->f6.fl;
    // 0x801E8094: nop

    // 0x801E8098: bc1tl       L_801E80E4
    if (c1cs) {
        // 0x801E809C: lwc1        $f18, 0x40($sp)
        ctx->f18.u32l = MEM_W(ctx->r29, 0X40);
            goto L_801E80E4;
    }
    goto skip_1;
    // 0x801E809C: lwc1        $f18, 0x40($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X40);
    skip_1:
    // 0x801E80A0: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x801E80A4: jal         0x80033898
    // 0x801E80A8: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    func_80033898_34498(rdram, ctx);
        goto after_1;
    // 0x801E80A8: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    after_1:
    // 0x801E80AC: lwc1        $f16, 0x9C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x801E80B0: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801E80B4: lwc1        $f18, 0x98($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X98);
    // 0x801E80B8: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x801E80BC: add.s       $f10, $f16, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x801E80C0: lwc1        $f8, 0x54($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801E80C4: lwc1        $f16, 0x94($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X94);
    // 0x801E80C8: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801E80CC: swc1        $f10, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f10.u32l;
    // 0x801E80D0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801E80D4: add.s       $f10, $f16, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x801E80D8: swc1        $f6, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f6.u32l;
    // 0x801E80DC: swc1        $f10, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f10.u32l;
    // 0x801E80E0: lwc1        $f18, 0x40($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X40);
L_801E80E4:
    // 0x801E80E4: lwc1        $f4, 0x78($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X78);
    // 0x801E80E8: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801E80EC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E80F0: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x801E80F4: lwc1        $f18, 0x48($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X48);
    // 0x801E80F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E80FC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x801E8100: addiu       $a2, $sp, 0xB4
    ctx->r6 = ADD32(ctx->r29, 0XB4);
    // 0x801E8104: addiu       $a3, $sp, 0xB0
    ctx->r7 = ADD32(ctx->r29, 0XB0);
    // 0x801E8108: addiu       $t6, $sp, 0xAC
    ctx->r14 = ADD32(ctx->r29, 0XAC);
    // 0x801E810C: swc1        $f6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f6.u32l;
    // 0x801E8110: lwc1        $f8, 0x7C($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X7C);
    // 0x801E8114: addiu       $t7, $sp, 0x9C
    ctx->r15 = ADD32(ctx->r29, 0X9C);
    // 0x801E8118: addiu       $t8, $sp, 0x98
    ctx->r24 = ADD32(ctx->r29, 0X98);
    // 0x801E811C: mul.s       $f10, $f16, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f8.fl);
    // 0x801E8120: addiu       $t9, $sp, 0x94
    ctx->r25 = ADD32(ctx->r29, 0X94);
    // 0x801E8124: addiu       $t0, $sp, 0x7C
    ctx->r8 = ADD32(ctx->r29, 0X7C);
    // 0x801E8128: addiu       $t1, $sp, 0x64
    ctx->r9 = ADD32(ctx->r29, 0X64);
    // 0x801E812C: swc1        $f10, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f10.u32l;
    // 0x801E8130: lwc1        $f4, 0x80($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X80);
    // 0x801E8134: c.lt.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl < ctx->f2.fl;
    // 0x801E8138: lwc1        $f0, 0x68($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801E813C: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x801E8140: bc1f        L_801E8154
    if (!c1cs) {
        // 0x801E8144: swc1        $f6, 0x6C($sp)
        MEM_W(0X6C, ctx->r29) = ctx->f6.u32l;
            goto L_801E8154;
    }
    // 0x801E8144: swc1        $f6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f6.u32l;
    // 0x801E8148: neg.s       $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = -ctx->f10.fl;
    // 0x801E814C: b           L_801E816C
    // 0x801E8150: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
        goto L_801E816C;
    // 0x801E8150: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
L_801E8154:
    // 0x801E8154: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801E8158: lwc1        $f8, 0x98($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X98);
    // 0x801E815C: div.s       $f0, $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f16.fl);
    // 0x801E8160: add.s       $f18, $f8, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x801E8164: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    // 0x801E8168: swc1        $f18, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f18.u32l;
L_801E816C:
    // 0x801E816C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801E8170: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801E8174: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x801E8178: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x801E817C: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x801E8180: jal         0x801E819C
    // 0x801E8184: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    func_801E819C_656FEC(rdram, ctx);
        goto after_2;
    // 0x801E8184: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    after_2:
    // 0x801E8188: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x801E818C: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x801E8190: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x801E8194: jr          $ra
    // 0x801E8198: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    TRACE_RETURN()
    return;
    // 0x801E8198: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
;}
RECOMP_FUNC void func_801CCD90_63BBE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CCD90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CCD94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CCD98: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801CCD9C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801CCDA0: lh          $a0, 0x1E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1E);
    // 0x801CCDA4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x801CCDA8: addiu       $a2, $zero, 0x3F
    ctx->r6 = ADD32(0, 0X3F);
    // 0x801CCDAC: jal         0x801CCBD0
    // 0x801CCDB0: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    func_801CCBD0_63BA20(rdram, ctx);
        goto after_0;
    // 0x801CCDB0: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    after_0:
    // 0x801CCDB4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801CCDB8: jal         0x801CCDD0
    // 0x801CCDBC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_801CCDD0_63BC20(rdram, ctx);
        goto after_1;
    // 0x801CCDBC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_1:
    // 0x801CCDC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CCDC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CCDC8: jr          $ra
    // 0x801CCDCC: nop

    TRACE_RETURN()
    return;
    // 0x801CCDCC: nop

;}
RECOMP_FUNC void func_801E7CE8_656B38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E7CE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E7CEC: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x801E7CF0: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x801E7CF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E7CF8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801E7CFC: jal         0x801E5554
    // 0x801E7D00: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_801E5554_6543A4(rdram, ctx);
        goto after_0;
    // 0x801E7D00: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x801E7D04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E7D08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E7D0C: jr          $ra
    // 0x801E7D10: nop

    TRACE_RETURN()
    return;
    // 0x801E7D10: nop

;}
RECOMP_FUNC void func_801D2138_640F88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D2138: lw          $v0, 0xEC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XEC);
    // 0x801D213C: lbu         $v1, 0x315($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X315);
    // 0x801D2140: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x801D2144: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x801D2148: sw          $a0, 0x2D0($t7)
    MEM_W(0X2D0, ctx->r15) = ctx->r4;
    // 0x801D214C: addiu       $t8, $v1, 0x1
    ctx->r24 = ADD32(ctx->r3, 0X1);
    // 0x801D2150: jr          $ra
    // 0x801D2154: sb          $t8, 0x315($v0)
    MEM_B(0X315, ctx->r2) = ctx->r24;
    TRACE_RETURN()
    return;
    // 0x801D2154: sb          $t8, 0x315($v0)
    MEM_B(0X315, ctx->r2) = ctx->r24;
;}
RECOMP_FUNC void func_801D17E8_640638(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D17E8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801D17EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D17F0: lw          $v1, 0xB8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XB8);
    // 0x801D17F4: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D17F8: ldc1        $f8, -0x1030($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X1030);
    // 0x801D17FC: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x801D1800: slti        $t6, $v1, 0x1770
    ctx->r14 = SIGNED(ctx->r3) < 0X1770 ? 1 : 0;
    // 0x801D1804: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801D1808: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x801D180C: lbu         $a3, 0x3($a1)
    ctx->r7 = MEM_BU(ctx->r5, 0X3);
    // 0x801D1810: addiu       $a0, $zero, 0x22C
    ctx->r4 = ADD32(0, 0X22C);
    // 0x801D1814: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x801D1818: trunc.w.d   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_D(ctx->f10.d);
    // 0x801D181C: mfc1        $v1, $f16
    ctx->r3 = (int32_t)ctx->f16.u32l;
    // 0x801D1820: nop

    // 0x801D1824: slti        $t8, $v1, 0x1770
    ctx->r24 = SIGNED(ctx->r3) < 0X1770 ? 1 : 0;
    // 0x801D1828: xori        $t8, $t8, 0x1
    ctx->r24 = ctx->r24 ^ 0X1;
    // 0x801D182C: and         $v0, $t6, $t8
    ctx->r2 = ctx->r14 & ctx->r24;
    // 0x801D1830: andi        $t9, $v0, 0xFF
    ctx->r25 = ctx->r2 & 0XFF;
    // 0x801D1834: beql        $t9, $zero, L_801D1864
    if (ctx->r25 == 0) {
        // 0x801D1838: mtc1        $v1, $f18
        ctx->f18.u32l = ctx->r3;
            goto L_801D1864;
    }
    goto skip_0;
    // 0x801D1838: mtc1        $v1, $f18
    ctx->f18.u32l = ctx->r3;
    skip_0:
    // 0x801D183C: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x801D1840: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801D1844: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x801D1848: jal         0x80038B98
    // 0x801D184C: sb          $a3, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r7;
    func_80038B98_39798(rdram, ctx);
        goto after_0;
    // 0x801D184C: sb          $a3, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r7;
    after_0:
    // 0x801D1850: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x801D1854: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x801D1858: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x801D185C: lbu         $a3, 0x1F($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X1F);
    // 0x801D1860: mtc1        $v1, $f18
    ctx->f18.u32l = ctx->r3;
L_801D1864:
    // 0x801D1864: slti        $at, $v1, 0x2AF8
    ctx->r1 = SIGNED(ctx->r3) < 0X2AF8 ? 1 : 0;
    // 0x801D1868: bne         $at, $zero, L_801D18AC
    if (ctx->r1 != 0) {
        // 0x801D186C: cvt.d.w     $f4, $f18
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.d = CVT_D_W(ctx->f18.u32l);
            goto L_801D18AC;
    }
    // 0x801D186C: cvt.d.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.d = CVT_D_W(ctx->f18.u32l);
    // 0x801D1870: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x801D1874: lw          $t0, -0x3A38($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3A38);
    // 0x801D1878: sll         $t1, $a3, 2
    ctx->r9 = S32(ctx->r7 << 2);
    // 0x801D187C: subu        $t1, $t1, $a3
    ctx->r9 = SUB32(ctx->r9, ctx->r7);
    // 0x801D1880: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x801D1884: lui         $t3, 0x4
    ctx->r11 = S32(0X4 << 16);
    // 0x801D1888: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x801D188C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x801D1890: lhu         $t3, -0x4F84($t3)
    ctx->r11 = MEM_HU(ctx->r11, -0X4F84);
    // 0x801D1894: andi        $t4, $t3, 0x4000
    ctx->r12 = ctx->r11 & 0X4000;
    // 0x801D1898: beq         $t4, $zero, L_801D18AC
    if (ctx->r12 == 0) {
        // 0x801D189C: nop
    
            goto L_801D18AC;
    }
    // 0x801D189C: nop

    // 0x801D18A0: lb          $t5, 0x9F($a2)
    ctx->r13 = MEM_B(ctx->r6, 0X9F);
    // 0x801D18A4: ori         $t6, $t5, 0x4
    ctx->r14 = ctx->r13 | 0X4;
    // 0x801D18A8: sb          $t6, 0x9F($a2)
    MEM_B(0X9F, ctx->r6) = ctx->r14;
L_801D18AC:
    // 0x801D18AC: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D18B0: ldc1        $f6, -0x1028($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X1028);
    // 0x801D18B4: c.le.d      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.d <= ctx->f4.d;
    // 0x801D18B8: nop

    // 0x801D18BC: bc1fl       L_801D1908
    if (!c1cs) {
        // 0x801D18C0: sw          $v1, 0xB8($a2)
        MEM_W(0XB8, ctx->r6) = ctx->r3;
            goto L_801D1908;
    }
    goto skip_1;
    // 0x801D18C0: sw          $v1, 0xB8($a2)
    MEM_W(0XB8, ctx->r6) = ctx->r3;
    skip_1:
    // 0x801D18C4: lh          $t7, 0x0($a1)
    ctx->r15 = MEM_H(ctx->r5, 0X0);
    // 0x801D18C8: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x801D18CC: andi        $t8, $t7, 0x2000
    ctx->r24 = ctx->r15 & 0X2000;
    // 0x801D18D0: bnel        $t8, $zero, L_801D18F8
    if (ctx->r24 != 0) {
        // 0x801D18D4: sb          $t1, 0xA0($a2)
        MEM_B(0XA0, ctx->r6) = ctx->r9;
            goto L_801D18F8;
    }
    goto skip_2;
    // 0x801D18D4: sb          $t1, 0xA0($a2)
    MEM_B(0XA0, ctx->r6) = ctx->r9;
    skip_2:
    // 0x801D18D8: lb          $v0, 0x9F($a2)
    ctx->r2 = MEM_B(ctx->r6, 0X9F);
    // 0x801D18DC: andi        $t9, $v0, 0x4
    ctx->r25 = ctx->r2 & 0X4;
    // 0x801D18E0: beq         $t9, $zero, L_801D18F4
    if (ctx->r25 == 0) {
        // 0x801D18E4: andi        $t0, $v0, 0xFFFB
        ctx->r8 = ctx->r2 & 0XFFFB;
            goto L_801D18F4;
    }
    // 0x801D18E4: andi        $t0, $v0, 0xFFFB
    ctx->r8 = ctx->r2 & 0XFFFB;
    // 0x801D18E8: sw          $zero, 0xB8($a2)
    MEM_W(0XB8, ctx->r6) = 0;
    // 0x801D18EC: b           L_801D1908
    // 0x801D18F0: sb          $t0, 0x9F($a2)
    MEM_B(0X9F, ctx->r6) = ctx->r8;
        goto L_801D1908;
    // 0x801D18F0: sb          $t0, 0x9F($a2)
    MEM_B(0X9F, ctx->r6) = ctx->r8;
L_801D18F4:
    // 0x801D18F4: sb          $t1, 0xA0($a2)
    MEM_B(0XA0, ctx->r6) = ctx->r9;
L_801D18F8:
    // 0x801D18F8: lh          $t2, 0x0($a1)
    ctx->r10 = MEM_H(ctx->r5, 0X0);
    // 0x801D18FC: andi        $t3, $t2, 0xFBFF
    ctx->r11 = ctx->r10 & 0XFBFF;
    // 0x801D1900: sh          $t3, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r11;
    // 0x801D1904: sw          $v1, 0xB8($a2)
    MEM_W(0XB8, ctx->r6) = ctx->r3;
L_801D1908:
    // 0x801D1908: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D190C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801D1910: jr          $ra
    // 0x801D1914: nop

    TRACE_RETURN()
    return;
    // 0x801D1914: nop

;}
RECOMP_FUNC void func_801E0030_64EE80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E0030: lwc1        $f0, 0x7C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x801E0034: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801E0038: ldc1        $f2, -0xC70($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, -0XC70);
    // 0x801E003C: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x801E0040: swc1        $f0, 0x88($a1)
    MEM_W(0X88, ctx->r5) = ctx->f0.u32l;
    // 0x801E0044: mul.d       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f2.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f2.d);
    // 0x801E0048: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x801E004C: swc1        $f8, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f8.u32l;
    // 0x801E0050: lwc1        $f0, 0x80($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X80);
    // 0x801E0054: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x801E0058: swc1        $f0, 0x8C($a1)
    MEM_W(0X8C, ctx->r5) = ctx->f0.u32l;
    // 0x801E005C: mul.d       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f2.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f2.d);
    // 0x801E0060: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801E0064: swc1        $f18, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f18.u32l;
    // 0x801E0068: lwc1        $f0, 0x84($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X84);
    // 0x801E006C: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x801E0070: swc1        $f0, 0x90($a1)
    MEM_W(0X90, ctx->r5) = ctx->f0.u32l;
    // 0x801E0074: mul.d       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f2.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f2.d);
    // 0x801E0078: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x801E007C: jr          $ra
    // 0x801E0080: swc1        $f8, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x801E0080: swc1        $f8, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_801CBFCC_65EE7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CBFCC: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801CBFD0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801CBFD4: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x801CBFD8: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x801CBFDC: lw          $t0, 0x18($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X18);
    // 0x801CBFE0: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x801CBFE4: jal         0x8001136C
    // 0x801CBFE8: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    func_8001136C_11F6C(rdram, ctx);
        goto after_0;
    // 0x801CBFE8: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    after_0:
    // 0x801CBFEC: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x801CBFF0: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x801CBFF4: lw          $t6, 0x78($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X78);
    // 0x801CBFF8: sltiu       $at, $t6, 0x8
    ctx->r1 = ctx->r14 < 0X8 ? 1 : 0;
    // 0x801CBFFC: beq         $at, $zero, L_801CC018
    if (ctx->r1 == 0) {
        // 0x801CC000: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_801CC018;
    }
    // 0x801CC000: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x801CC004: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CC008: addu        $at, $at, $t6
    gpr jr_addend_801CC010 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x801CC00C: lw          $t6, 0x4298($at)
    ctx->r14 = ADD32(ctx->r1, 0X4298);
    // 0x801CC010: jr          $t6
    // 0x801CC014: nop

    switch (jr_addend_801CC010 >> 2) {
        case 0: goto L_801CC020; break;
        case 1: goto L_801CC040; break;
        case 2: goto L_801CC040; break;
        case 3: goto L_801CC040; break;
        case 4: goto L_801CC040; break;
        case 5: goto L_801CC040; break;
        case 6: goto L_801CC040; break;
        case 7: goto L_801CC040; break;
        default: switch_error(__func__, 0x801CC010, 0x801D4298);
    }
    // 0x801CC014: nop

L_801CC018:
    // 0x801CC018: b           L_801CC1FC
    // 0x801CC01C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_801CC1FC;
    // 0x801CC01C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_801CC020:
    // 0x801CC020: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x801CC024: addiu       $t7, $zero, 0x38
    ctx->r15 = ADD32(0, 0X38);
    // 0x801CC028: addiu       $t9, $zero, 0x1C
    ctx->r25 = ADD32(0, 0X1C);
    // 0x801CC02C: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x801CC030: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x801CC034: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801CC038: b           L_801CC1FC
    // 0x801CC03C: sw          $t9, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r25;
        goto L_801CC1FC;
    // 0x801CC03C: sw          $t9, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r25;
L_801CC040:
    // 0x801CC040: jal         0x801CBF30
    // 0x801CC044: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    func_801CBF30_65EDE0(rdram, ctx);
        goto after_1;
    // 0x801CC044: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    after_1:
    // 0x801CC048: lh          $t2, 0x20($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X20);
    // 0x801CC04C: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x801CC050: lh          $t3, 0x22($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X22);
    // 0x801CC054: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x801CC058: lwc1        $f8, 0x1C($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x801CC05C: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x801CC060: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801CC064: lwc1        $f16, 0x8($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X8);
    // 0x801CC068: lh          $t4, 0x24($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X24);
    // 0x801CC06C: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801CC070: addiu       $t5, $sp, 0x3C
    ctx->r13 = ADD32(ctx->r29, 0X3C);
    // 0x801CC074: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x801CC078: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801CC07C: lwc1        $f6, 0x20($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X20);
    // 0x801CC080: addiu       $t6, $sp, 0x38
    ctx->r14 = ADD32(ctx->r29, 0X38);
    // 0x801CC084: lw          $a0, -0x7910($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7910);
    // 0x801CC088: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801CC08C: lwc1        $f4, 0x24($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X24);
    // 0x801CC090: add.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801CC094: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x801CC098: lwc1        $f10, 0xC($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0XC);
    // 0x801CC09C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x801CC0A0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x801CC0A4: add.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801CC0A8: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x801CC0AC: lwc1        $f8, 0x10($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X10);
    // 0x801CC0B0: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x801CC0B4: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x801CC0B8: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x801CC0BC: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x801CC0C0: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x801CC0C4: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801CC0C8: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x801CC0CC: jal         0x8001CC38
    // 0x801CC0D0: nop

    func_8001CC38_1D838(rdram, ctx);
        goto after_2;
    // 0x801CC0D0: nop

    after_2:
    // 0x801CC0D4: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
    // 0x801CC0D8: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x801CC0DC: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801CC0E0: lh          $t7, 0x80($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X80);
    // 0x801CC0E4: lwc1        $f18, 0x1C($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x801CC0E8: lh          $t8, 0x82($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X82);
    // 0x801CC0EC: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x801CC0F0: lwc1        $f6, 0x8($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X8);
    // 0x801CC0F4: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x801CC0F8: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x801CC0FC: lh          $t9, 0x84($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X84);
    // 0x801CC100: addiu       $t1, $sp, 0x34
    ctx->r9 = ADD32(ctx->r29, 0X34);
    // 0x801CC104: addiu       $t2, $sp, 0x30
    ctx->r10 = ADD32(ctx->r29, 0X30);
    // 0x801CC108: lw          $a0, -0x7910($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7910);
    // 0x801CC10C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x801CC110: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x801CC114: lwc1        $f16, 0x20($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X20);
    // 0x801CC118: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x801CC11C: lwc1        $f10, 0x24($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X24);
    // 0x801CC120: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801CC124: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x801CC128: lwc1        $f4, 0xC($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0XC);
    // 0x801CC12C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x801CC130: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x801CC134: add.s       $f2, $f18, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801CC138: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x801CC13C: lwc1        $f18, 0x10($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X10);
    // 0x801CC140: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x801CC144: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x801CC148: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x801CC14C: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801CC150: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x801CC154: jal         0x8001CC38
    // 0x801CC158: nop

    func_8001CC38_1D838(rdram, ctx);
        goto after_3;
    // 0x801CC158: nop

    after_3:
    // 0x801CC15C: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801CC160: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801CC164: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801CC168: lwc1        $f18, 0x34($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801CC16C: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x801CC170: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801CC174: bc1fl       L_801CC198
    if (!c1cs) {
        // 0x801CC178: sub.s       $f6, $f16, $f18
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f18.fl;
            goto L_801CC198;
    }
    goto skip_0;
    // 0x801CC178: sub.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f18.fl;
    skip_0:
    // 0x801CC17C: sub.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x801CC180: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x801CC184: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x801CC188: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x801CC18C: b           L_801CC1AC
    // 0x801CC190: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
        goto L_801CC1AC;
    // 0x801CC190: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x801CC194: sub.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f18.fl;
L_801CC198:
    // 0x801CC198: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x801CC19C: trunc.w.s   $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x801CC1A0: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x801CC1A4: nop

    // 0x801CC1A8: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
L_801CC1AC:
    // 0x801CC1AC: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x801CC1B0: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x801CC1B4: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x801CC1B8: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x801CC1BC: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x801CC1C0: nop

    // 0x801CC1C4: bc1fl       L_801CC1E8
    if (!c1cs) {
        // 0x801CC1C8: sub.s       $f10, $f6, $f4
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f4.fl;
            goto L_801CC1E8;
    }
    goto skip_1;
    // 0x801CC1C8: sub.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f4.fl;
    skip_1:
    // 0x801CC1CC: sub.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x801CC1D0: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x801CC1D4: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x801CC1D8: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x801CC1DC: b           L_801CC1FC
    // 0x801CC1E0: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
        goto L_801CC1FC;
    // 0x801CC1E0: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x801CC1E4: sub.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f4.fl;
L_801CC1E8:
    // 0x801CC1E8: lw          $t5, 0x58($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X58);
    // 0x801CC1EC: trunc.w.s   $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x801CC1F0: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    // 0x801CC1F4: nop

    // 0x801CC1F8: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
L_801CC1FC:
    // 0x801CC1FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801CC200: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x801CC204: jr          $ra
    // 0x801CC208: nop

    TRACE_RETURN()
    return;
    // 0x801CC208: nop

;}
RECOMP_FUNC void func_801CD028_65FED8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CD028: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CD02C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CD030: jal         0x801CCCE8
    // 0x801CD034: nop

    func_801CCCE8_65FB98(rdram, ctx);
        goto after_0;
    // 0x801CD034: nop

    after_0:
    // 0x801CD038: lui         $v1, 0x801F
    ctx->r3 = S32(0X801F << 16);
    // 0x801CD03C: lw          $v1, -0x66D0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X66D0);
    // 0x801CD040: lui         $v0, 0x801F
    ctx->r2 = S32(0X801F << 16);
    // 0x801CD044: andi        $t6, $v1, 0x400
    ctx->r14 = ctx->r3 & 0X400;
    // 0x801CD048: beql        $t6, $zero, L_801CD08C
    if (ctx->r14 == 0) {
        // 0x801CD04C: andi        $t0, $v1, 0x800
        ctx->r8 = ctx->r3 & 0X800;
            goto L_801CD08C;
    }
    goto skip_0;
    // 0x801CD04C: andi        $t0, $v1, 0x800
    ctx->r8 = ctx->r3 & 0X800;
    skip_0:
    // 0x801CD050: lw          $v0, -0x66C8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X66C8);
    // 0x801CD054: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801CD058: beq         $v0, $at, L_801CD070
    if (ctx->r2 == ctx->r1) {
        // 0x801CD05C: slti        $at, $v0, 0xB
        ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
            goto L_801CD070;
    }
    // 0x801CD05C: slti        $at, $v0, 0xB
    ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x801CD060: bne         $at, $zero, L_801CD088
    if (ctx->r1 != 0) {
        // 0x801CD064: andi        $t7, $v0, 0x3
        ctx->r15 = ctx->r2 & 0X3;
            goto L_801CD088;
    }
    // 0x801CD064: andi        $t7, $v0, 0x3
    ctx->r15 = ctx->r2 & 0X3;
    // 0x801CD068: bnel        $t7, $zero, L_801CD08C
    if (ctx->r15 != 0) {
        // 0x801CD06C: andi        $t0, $v1, 0x800
        ctx->r8 = ctx->r3 & 0X800;
            goto L_801CD08C;
    }
    goto skip_1;
    // 0x801CD06C: andi        $t0, $v1, 0x800
    ctx->r8 = ctx->r3 & 0X800;
    skip_1:
L_801CD070:
    // 0x801CD070: lui         $v1, 0x801F
    ctx->r3 = S32(0X801F << 16);
    // 0x801CD074: addiu       $v1, $v1, -0x66EC
    ctx->r3 = ADD32(ctx->r3, -0X66EC);
    // 0x801CD078: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x801CD07C: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x801CD080: b           L_801CD0C8
    // 0x801CD084: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
        goto L_801CD0C8;
    // 0x801CD084: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
L_801CD088:
    // 0x801CD088: andi        $t0, $v1, 0x800
    ctx->r8 = ctx->r3 & 0X800;
L_801CD08C:
    // 0x801CD08C: beq         $t0, $zero, L_801CD0C8
    if (ctx->r8 == 0) {
        // 0x801CD090: lui         $v0, 0x801F
        ctx->r2 = S32(0X801F << 16);
            goto L_801CD0C8;
    }
    // 0x801CD090: lui         $v0, 0x801F
    ctx->r2 = S32(0X801F << 16);
    // 0x801CD094: lw          $v0, -0x66C8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X66C8);
    // 0x801CD098: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801CD09C: lui         $v1, 0x801F
    ctx->r3 = S32(0X801F << 16);
    // 0x801CD0A0: beq         $v0, $at, L_801CD0BC
    if (ctx->r2 == ctx->r1) {
        // 0x801CD0A4: addiu       $v1, $v1, -0x66EC
        ctx->r3 = ADD32(ctx->r3, -0X66EC);
            goto L_801CD0BC;
    }
    // 0x801CD0A4: addiu       $v1, $v1, -0x66EC
    ctx->r3 = ADD32(ctx->r3, -0X66EC);
    // 0x801CD0A8: slti        $at, $v0, 0xB
    ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x801CD0AC: bne         $at, $zero, L_801CD0C8
    if (ctx->r1 != 0) {
        // 0x801CD0B0: andi        $t1, $v0, 0x3
        ctx->r9 = ctx->r2 & 0X3;
            goto L_801CD0C8;
    }
    // 0x801CD0B0: andi        $t1, $v0, 0x3
    ctx->r9 = ctx->r2 & 0X3;
    // 0x801CD0B4: bne         $t1, $zero, L_801CD0C8
    if (ctx->r9 != 0) {
        // 0x801CD0B8: nop
    
            goto L_801CD0C8;
    }
    // 0x801CD0B8: nop

L_801CD0BC:
    // 0x801CD0BC: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x801CD0C0: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x801CD0C4: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
L_801CD0C8:
    // 0x801CD0C8: lui         $v1, 0x801F
    ctx->r3 = S32(0X801F << 16);
    // 0x801CD0CC: addiu       $v1, $v1, -0x66EC
    ctx->r3 = ADD32(ctx->r3, -0X66EC);
    // 0x801CD0D0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801CD0D4: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x801CD0D8: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x801CD0DC: beql        $at, $zero, L_801CD0F0
    if (ctx->r1 == 0) {
        // 0x801CD0E0: slti        $at, $v0, 0x6
        ctx->r1 = SIGNED(ctx->r2) < 0X6 ? 1 : 0;
            goto L_801CD0F0;
    }
    goto skip_2;
    // 0x801CD0E0: slti        $at, $v0, 0x6
    ctx->r1 = SIGNED(ctx->r2) < 0X6 ? 1 : 0;
    skip_2:
    // 0x801CD0E4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x801CD0E8: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x801CD0EC: slti        $at, $v0, 0x6
    ctx->r1 = SIGNED(ctx->r2) < 0X6 ? 1 : 0;
L_801CD0F0:
    // 0x801CD0F0: bnel        $at, $zero, L_801CD100
    if (ctx->r1 != 0) {
        // 0x801CD0F4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801CD100;
    }
    goto skip_3;
    // 0x801CD0F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x801CD0F8: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x801CD0FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801CD100:
    // 0x801CD100: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CD104: jr          $ra
    // 0x801CD108: nop

    TRACE_RETURN()
    return;
    // 0x801CD108: nop

;}
RECOMP_FUNC void func_801CE3B4_661264(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CE3B4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801CE3B8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801CE3BC: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x801CE3C0: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801CE3C4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x801CE3C8: jal         0x801CD24C
    // 0x801CE3CC: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    func_801CD24C_6600FC(rdram, ctx);
        goto after_0;
    // 0x801CE3CC: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_0:
    // 0x801CE3D0: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x801CE3D4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801CE3D8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801CE3DC: addiu       $a1, $zero, 0x38
    ctx->r5 = ADD32(0, 0X38);
    // 0x801CE3E0: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    // 0x801CE3E4: jal         0x801CC5C8
    // 0x801CE3E8: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    func_801CC5C8_65F478(rdram, ctx);
        goto after_1;
    // 0x801CE3E8: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    after_1:
    // 0x801CE3EC: addiu       $s0, $s1, 0x5C
    ctx->r16 = ADD32(ctx->r17, 0X5C);
    // 0x801CE3F0: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x801CE3F4: addiu       $t7, $zero, 0x60
    ctx->r15 = ADD32(0, 0X60);
    // 0x801CE3F8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x801CE3FC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801CE400: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801CE404: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x801CE408: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x801CE40C: jal         0x801CC56C
    // 0x801CE410: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_801CC56C_65F41C(rdram, ctx);
        goto after_2;
    // 0x801CE410: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_2:
    // 0x801CE414: lui         $t8, 0x801D
    ctx->r24 = S32(0X801D << 16);
    // 0x801CE418: addiu       $t8, $t8, 0x46A0
    ctx->r24 = ADD32(ctx->r24, 0X46A0);
    // 0x801CE41C: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x801CE420: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801CE424: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x801CE428: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x801CE42C: jal         0x801CB6AC
    // 0x801CE430: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    func_801CB6AC_65E55C(rdram, ctx);
        goto after_3;
    // 0x801CE430: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    after_3:
    // 0x801CE434: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x801CE438: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x801CE43C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x801CE440: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801CE444: addiu       $a1, $zero, 0x38
    ctx->r5 = ADD32(0, 0X38);
    // 0x801CE448: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    // 0x801CE44C: jal         0x801CC5C8
    // 0x801CE450: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    func_801CC5C8_65F478(rdram, ctx);
        goto after_4;
    // 0x801CE450: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    after_4:
    // 0x801CE454: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x801CE458: addiu       $t0, $zero, 0x60
    ctx->r8 = ADD32(0, 0X60);
    // 0x801CE45C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x801CE460: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801CE464: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801CE468: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x801CE46C: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x801CE470: jal         0x801CC56C
    // 0x801CE474: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_801CC56C_65F41C(rdram, ctx);
        goto after_5;
    // 0x801CE474: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_5:
    // 0x801CE478: lui         $t1, 0x801D
    ctx->r9 = S32(0X801D << 16);
    // 0x801CE47C: addiu       $t1, $t1, 0x46B4
    ctx->r9 = ADD32(ctx->r9, 0X46B4);
    // 0x801CE480: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    // 0x801CE484: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x801CE488: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x801CE48C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x801CE490: jal         0x801CB6AC
    // 0x801CE494: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    func_801CB6AC_65E55C(rdram, ctx);
        goto after_6;
    // 0x801CE494: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    after_6:
    // 0x801CE498: jal         0x80023840
    // 0x801CE49C: nop

    func_80023840_24440(rdram, ctx);
        goto after_7;
    // 0x801CE49C: nop

    after_7:
    // 0x801CE4A0: bne         $v0, $zero, L_801CE4DC
    if (ctx->r2 != 0) {
        // 0x801CE4A4: lui         $t5, 0x801D
        ctx->r13 = S32(0X801D << 16);
            goto L_801CE4DC;
    }
    // 0x801CE4A4: lui         $t5, 0x801D
    ctx->r13 = S32(0X801D << 16);
    // 0x801CE4A8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x801CE4AC: jal         0x801CB69C
    // 0x801CE4B0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_801CB69C_65E54C(rdram, ctx);
        goto after_8;
    // 0x801CE4B0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_8:
    // 0x801CE4B4: lui         $t2, 0x801D
    ctx->r10 = S32(0X801D << 16);
    // 0x801CE4B8: lui         $v0, 0x801F
    ctx->r2 = S32(0X801F << 16);
    // 0x801CE4BC: addiu       $t2, $t2, -0x323C
    ctx->r10 = ADD32(ctx->r10, -0X323C);
    // 0x801CE4C0: addiu       $v0, $v0, -0x66E8
    ctx->r2 = ADD32(ctx->r2, -0X66E8);
    // 0x801CE4C4: sw          $t2, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r10;
    // 0x801CE4C8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x801CE4CC: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x801CE4D0: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CE4D4: b           L_801CE4F8
    // 0x801CE4D8: sw          $t3, -0x66EC($at)
    MEM_W(-0X66EC, ctx->r1) = ctx->r11;
        goto L_801CE4F8;
    // 0x801CE4D8: sw          $t3, -0x66EC($at)
    MEM_W(-0X66EC, ctx->r1) = ctx->r11;
L_801CE4DC:
    // 0x801CE4DC: lui         $v0, 0x801F
    ctx->r2 = S32(0X801F << 16);
    // 0x801CE4E0: addiu       $t5, $t5, -0x3234
    ctx->r13 = ADD32(ctx->r13, -0X3234);
    // 0x801CE4E4: addiu       $v0, $v0, -0x66E8
    ctx->r2 = ADD32(ctx->r2, -0X66E8);
    // 0x801CE4E8: sw          $t5, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r13;
    // 0x801CE4EC: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x801CE4F0: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CE4F4: sw          $zero, -0x66EC($at)
    MEM_W(-0X66EC, ctx->r1) = 0;
L_801CE4F8:
    // 0x801CE4F8: lui         $t7, 0x801F
    ctx->r15 = S32(0X801F << 16);
    // 0x801CE4FC: lw          $t7, -0x66EC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X66EC);
    // 0x801CE500: addiu       $t0, $zero, 0x80
    ctx->r8 = ADD32(0, 0X80);
    // 0x801CE504: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801CE508: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x801CE50C: addu        $t9, $s0, $t8
    ctx->r25 = ADD32(ctx->r16, ctx->r24);
    // 0x801CE510: lw          $a0, 0x1C($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X1C);
    // 0x801CE514: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x801CE518: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x801CE51C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801CE520: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CE524: jal         0x801CC56C
    // 0x801CE528: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_801CC56C_65F41C(rdram, ctx);
        goto after_9;
    // 0x801CE528: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_9:
    // 0x801CE52C: lui         $t2, 0x801F
    ctx->r10 = S32(0X801F << 16);
    // 0x801CE530: lw          $t2, -0x66EC($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X66EC);
    // 0x801CE534: lw          $a0, 0x40($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X40);
    // 0x801CE538: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x801CE53C: addu        $t4, $s0, $t3
    ctx->r12 = ADD32(ctx->r16, ctx->r11);
    // 0x801CE540: jal         0x80011610
    // 0x801CE544: lw          $a1, 0x1C($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X1C);
    func_80011610_12210(rdram, ctx);
        goto after_10;
    // 0x801CE544: lw          $a1, 0x1C($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X1C);
    after_10:
    // 0x801CE548: lui         $t5, 0x801F
    ctx->r13 = S32(0X801F << 16);
    // 0x801CE54C: lw          $t5, -0x66EC($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X66EC);
    // 0x801CE550: lw          $a0, 0x40($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X40);
    // 0x801CE554: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x801CE558: addu        $t7, $s0, $t6
    ctx->r15 = ADD32(ctx->r16, ctx->r14);
    // 0x801CE55C: jal         0x801CD3B8
    // 0x801CE560: lw          $a1, 0x1C($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X1C);
    func_801CD3B8_660268(rdram, ctx);
        goto after_11;
    // 0x801CE560: lw          $a1, 0x1C($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X1C);
    after_11:
    // 0x801CE564: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801CE568: addiu       $a1, $a1, -0x1E10
    ctx->r5 = ADD32(ctx->r5, -0X1E10);
    // 0x801CE56C: jal         0x80011734
    // 0x801CE570: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80011734_12334(rdram, ctx);
        goto after_12;
    // 0x801CE570: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_12:
    // 0x801CE574: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801CE578: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x801CE57C: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x801CE580: jr          $ra
    // 0x801CE584: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x801CE584: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_801D1DE4_664C94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D1DE4: jr          $ra
    // 0x801D1DE8: sw          $a1, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801D1DE8: sw          $a1, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_801CD2A8_660158(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CD2A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801CD2AC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801CD2B0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801CD2B4: jal         0x801CD24C
    // 0x801CD2B8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_801CD24C_6600FC(rdram, ctx);
        goto after_0;
    // 0x801CD2B8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x801CD2BC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801CD2C0: addiu       $s0, $s0, 0x5C
    ctx->r16 = ADD32(ctx->r16, 0X5C);
    // 0x801CD2C4: jal         0x800116AC
    // 0x801CD2C8: lw          $a0, 0x40($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X40);
    func_800116AC_122AC(rdram, ctx);
        goto after_1;
    // 0x801CD2C8: lw          $a0, 0x40($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X40);
    after_1:
    // 0x801CD2CC: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    // 0x801CD2D0: jal         0x800116AC
    // 0x801CD2D4: lw          $a0, 0x44($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X44);
    func_800116AC_122AC(rdram, ctx);
        goto after_2;
    // 0x801CD2D4: lw          $a0, 0x44($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X44);
    after_2:
    // 0x801CD2D8: sw          $v0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r2;
    // 0x801CD2DC: jal         0x800116AC
    // 0x801CD2E0: lw          $a0, 0x3C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X3C);
    func_800116AC_122AC(rdram, ctx);
        goto after_3;
    // 0x801CD2E0: lw          $a0, 0x3C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X3C);
    after_3:
    // 0x801CD2E4: sw          $v0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r2;
    // 0x801CD2E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801CD2EC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801CD2F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801CD2F4: jr          $ra
    // 0x801CD2F8: nop

    TRACE_RETURN()
    return;
    // 0x801CD2F8: nop

;}
RECOMP_FUNC void func_801CCB28_65F9D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CCB28: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x801CCB2C: lw          $t8, -0x3A38($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3A38);
    // 0x801CCB30: lui         $t9, 0x4
    ctx->r25 = S32(0X4 << 16);
    // 0x801CCB34: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801CCB38: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801CCB3C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x801CCB40: lh          $t9, -0x524E($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X524E);
    // 0x801CCB44: lui         $t1, 0x801D
    ctx->r9 = S32(0X801D << 16);
    // 0x801CCB48: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801CCB4C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x801CCB50: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x801CCB54: lw          $t1, 0x4CE0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X4CE0);
    // 0x801CCB58: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x801CCB5C: addiu       $v1, $v1, 0x4CE8
    ctx->r3 = ADD32(ctx->r3, 0X4CE8);
    // 0x801CCB60: addiu       $a0, $a0, -0x78F8
    ctx->r4 = ADD32(ctx->r4, -0X78F8);
    // 0x801CCB64: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x801CCB68: jr          $ra
    // 0x801CCB6C: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    TRACE_RETURN()
    return;
    // 0x801CCB6C: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
;}
RECOMP_FUNC void func_801CBBC4_65EA74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CBBC4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801CBBC8: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CBBCC: lwc1        $f2, 0x4278($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X4278);
    // 0x801CBBD0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801CBBD4: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x801CBBD8: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x801CBBDC: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x801CBBE0: lui         $a2, 0x800
    ctx->r6 = S32(0X800 << 16);
    // 0x801CBBE4: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801CBBE8: addiu       $a2, $a2, 0x890
    ctx->r6 = ADD32(ctx->r6, 0X890);
    // 0x801CBBEC: lui         $a3, 0x8007
    ctx->r7 = S32(0X8007 << 16);
    // 0x801CBBF0: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801CBBF4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801CBBF8: addiu       $t6, $zero, 0x4CD
    ctx->r14 = ADD32(0, 0X4CD);
    // 0x801CBBFC: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x801CBC00: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x801CBC04: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
    // 0x801CBC08: addiu       $a1, $a1, -0x446C
    ctx->r5 = ADD32(ctx->r5, -0X446C);
    // 0x801CBC0C: addiu       $a3, $a3, -0x2768
    ctx->r7 = ADD32(ctx->r7, -0X2768);
    // 0x801CBC10: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801CBC14: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801CBC18: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x801CBC1C: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x801CBC20: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x801CBC24: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x801CBC28: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
    // 0x801CBC2C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x801CBC30: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801CBC34: jal         0x800358E8
    // 0x801CBC38: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    func_800358E8_364E8(rdram, ctx);
        goto after_0;
    // 0x801CBC38: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x801CBC3C: bne         $v0, $zero, L_801CBC4C
    if (ctx->r2 != 0) {
        // 0x801CBC40: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_801CBC4C;
    }
    // 0x801CBC40: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801CBC44: b           L_801CBC78
    // 0x801CBC48: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801CBC78;
    // 0x801CBC48: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801CBC4C:
    // 0x801CBC4C: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x801CBC50: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x801CBC54: sb          $t7, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r15;
    // 0x801CBC58: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x801CBC5C: addiu       $t9, $t8, 0x5C
    ctx->r25 = ADD32(ctx->r24, 0X5C);
    // 0x801CBC60: sw          $t9, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->r25;
    // 0x801CBC64: sw          $a0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r4;
    // 0x801CBC68: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    // 0x801CBC6C: jal         0x800115F8
    // 0x801CBC70: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    func_800115F8_121F8(rdram, ctx);
        goto after_1;
    // 0x801CBC70: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    after_1:
    // 0x801CBC74: lw          $v0, 0x4C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4C);
L_801CBC78:
    // 0x801CBC78: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801CBC7C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x801CBC80: jr          $ra
    // 0x801CBC84: nop

    TRACE_RETURN()
    return;
    // 0x801CBC84: nop

;}
RECOMP_FUNC void func_801CFCC8_662B78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CFCC8: lui         $t7, 0x801D
    ctx->r15 = S32(0X801D << 16);
    // 0x801CFCCC: addiu       $t7, $t7, 0x33B0
    ctx->r15 = ADD32(ctx->r15, 0X33B0);
    // 0x801CFCD0: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x801CFCD4: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801CFCD8: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x801CFCDC: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
    // 0x801CFCE0: lui         $t8, 0xB800
    ctx->r24 = S32(0XB800 << 16);
    // 0x801CFCE4: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x801CFCE8: jr          $ra
    // 0x801CFCEC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    TRACE_RETURN()
    return;
    // 0x801CFCEC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
;}
RECOMP_FUNC void func_801D0BE0_663A90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D0BE0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801D0BE4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801D0BE8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801D0BEC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x801D0BF0: jal         0x8001136C
    // 0x801D0BF4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    func_8001136C_11F6C(rdram, ctx);
        goto after_0;
    // 0x801D0BF4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_0:
    // 0x801D0BF8: lui         $s0, 0x801D
    ctx->r16 = S32(0X801D << 16);
    // 0x801D0BFC: addiu       $s0, $s0, 0x4CE8
    ctx->r16 = ADD32(ctx->r16, 0X4CE8);
    // 0x801D0C00: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x801D0C04: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x801D0C08: sw          $t6, 0x30($t7)
    MEM_W(0X30, ctx->r15) = ctx->r14;
    // 0x801D0C0C: jal         0x80010B60
    // 0x801D0C10: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    func_80010B60_11760(rdram, ctx);
        goto after_1;
    // 0x801D0C10: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_1:
    // 0x801D0C14: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x801D0C18: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x801D0C1C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x801D0C20: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801D0C24: jal         0x80010980
    // 0x801D0C28: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    func_80010980_11580(rdram, ctx);
        goto after_2;
    // 0x801D0C28: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_2:
    // 0x801D0C2C: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x801D0C30: lui         $a3, 0x801D
    ctx->r7 = S32(0X801D << 16);
    // 0x801D0C34: lw          $a3, 0x3424($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X3424);
    // 0x801D0C38: lw          $a2, 0x70($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X70);
    // 0x801D0C3C: lw          $a1, 0x6C($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X6C);
    // 0x801D0C40: addiu       $v1, $v1, 0x5C
    ctx->r3 = ADD32(ctx->r3, 0X5C);
    // 0x801D0C44: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    // 0x801D0C48: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x801D0C4C: addiu       $a2, $a2, 0x82
    ctx->r6 = ADD32(ctx->r6, 0X82);
    // 0x801D0C50: jal         0x80010E9C
    // 0x801D0C54: addiu       $a1, $a1, 0x1F
    ctx->r5 = ADD32(ctx->r5, 0X1F);
    func_80010E9C_11A9C(rdram, ctx);
        goto after_3;
    // 0x801D0C54: addiu       $a1, $a1, 0x1F
    ctx->r5 = ADD32(ctx->r5, 0X1F);
    after_3:
    // 0x801D0C58: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x801D0C5C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x801D0C60: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x801D0C64: lw          $t8, 0x1C($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X1C);
    // 0x801D0C68: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x801D0C6C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D0C70: slti        $at, $t8, 0xA
    ctx->r1 = SIGNED(ctx->r24) < 0XA ? 1 : 0;
    // 0x801D0C74: beq         $at, $zero, L_801D0CC4
    if (ctx->r1 == 0) {
        // 0x801D0C78: addiu       $a3, $zero, 0x4
        ctx->r7 = ADD32(0, 0X4);
            goto L_801D0CC4;
    }
    // 0x801D0C78: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x801D0C7C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x801D0C80: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x801D0C84: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D0C88: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x801D0C8C: jal         0x80010980
    // 0x801D0C90: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    func_80010980_11580(rdram, ctx);
        goto after_4;
    // 0x801D0C90: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    after_4:
    // 0x801D0C94: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x801D0C98: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801D0C9C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x801D0CA0: lw          $a1, 0x10($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X10);
    // 0x801D0CA4: lw          $a2, 0x14($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X14);
    // 0x801D0CA8: lw          $a3, 0x1C($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X1C);
    // 0x801D0CAC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x801D0CB0: addiu       $a1, $a1, 0x2F
    ctx->r5 = ADD32(ctx->r5, 0X2F);
    // 0x801D0CB4: jal         0x8001110C
    // 0x801D0CB8: addiu       $a2, $a2, 0xC0
    ctx->r6 = ADD32(ctx->r6, 0XC0);
    func_8001110C_11D0C(rdram, ctx);
        goto after_5;
    // 0x801D0CB8: addiu       $a2, $a2, 0xC0
    ctx->r6 = ADD32(ctx->r6, 0XC0);
    after_5:
    // 0x801D0CBC: b           L_801D0CF8
    // 0x801D0CC0: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
        goto L_801D0CF8;
    // 0x801D0CC0: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
L_801D0CC4:
    // 0x801D0CC4: jal         0x80010980
    // 0x801D0CC8: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    func_80010980_11580(rdram, ctx);
        goto after_6;
    // 0x801D0CC8: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    after_6:
    // 0x801D0CCC: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x801D0CD0: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x801D0CD4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x801D0CD8: lw          $a1, 0x10($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X10);
    // 0x801D0CDC: lw          $a2, 0x14($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X14);
    // 0x801D0CE0: lw          $a3, 0x1C($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X1C);
    // 0x801D0CE4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x801D0CE8: addiu       $a1, $a1, 0x2D
    ctx->r5 = ADD32(ctx->r5, 0X2D);
    // 0x801D0CEC: jal         0x8001110C
    // 0x801D0CF0: addiu       $a2, $a2, 0xC0
    ctx->r6 = ADD32(ctx->r6, 0XC0);
    func_8001110C_11D0C(rdram, ctx);
        goto after_7;
    // 0x801D0CF0: addiu       $a2, $a2, 0xC0
    ctx->r6 = ADD32(ctx->r6, 0XC0);
    after_7:
    // 0x801D0CF4: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
L_801D0CF8:
    // 0x801D0CF8: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x801D0CFC: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x801D0D00: lui         $v1, 0x8FFF
    ctx->r3 = S32(0X8FFF << 16);
    // 0x801D0D04: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x801D0D08: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
    // 0x801D0D0C: lw          $v0, 0x30($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X30);
    // 0x801D0D10: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x801D0D14: subu        $t5, $v1, $v0
    ctx->r13 = SUB32(ctx->r3, ctx->r2);
    // 0x801D0D18: and         $t6, $t2, $t5
    ctx->r14 = ctx->r10 & ctx->r13;
    // 0x801D0D1C: and         $a1, $t6, $v1
    ctx->r5 = ctx->r14 & ctx->r3;
    // 0x801D0D20: jal         0x80040620
    // 0x801D0D24: and         $a0, $v0, $v1
    ctx->r4 = ctx->r2 & ctx->r3;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_8;
    // 0x801D0D24: and         $a0, $v0, $v1
    ctx->r4 = ctx->r2 & ctx->r3;
    after_8:
    // 0x801D0D28: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801D0D2C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801D0D30: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801D0D34: jr          $ra
    // 0x801D0D38: nop

    TRACE_RETURN()
    return;
    // 0x801D0D38: nop

;}
RECOMP_FUNC void func_801CD910_6607C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CD910: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801CD914: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801CD918: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x801CD91C: jal         0x801CD2A8
    // 0x801CD920: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_801CD2A8_660158(rdram, ctx);
        goto after_0;
    // 0x801CD920: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801CD924: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x801CD928: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801CD92C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x801CD930: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x801CD934: addiu       $a2, $zero, 0x5A
    ctx->r6 = ADD32(0, 0X5A);
    // 0x801CD938: jal         0x801CC5C8
    // 0x801CD93C: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    func_801CC5C8_65F478(rdram, ctx);
        goto after_1;
    // 0x801CD93C: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    after_1:
    // 0x801CD940: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x801CD944: addiu       $t7, $zero, 0x80
    ctx->r15 = ADD32(0, 0X80);
    // 0x801CD948: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801CD94C: sw          $v0, 0x78($v1)
    MEM_W(0X78, ctx->r3) = ctx->r2;
    // 0x801CD950: addiu       $v1, $v1, 0x5C
    ctx->r3 = ADD32(ctx->r3, 0X5C);
    // 0x801CD954: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    // 0x801CD958: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x801CD95C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x801CD960: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801CD964: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801CD968: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CD96C: jal         0x801CC56C
    // 0x801CD970: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_801CC56C_65F41C(rdram, ctx);
        goto after_2;
    // 0x801CD970: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_2:
    // 0x801CD974: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x801CD978: lui         $t0, 0x801D
    ctx->r8 = S32(0X801D << 16);
    // 0x801CD97C: lw          $t0, 0x3314($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3314);
    // 0x801CD980: lw          $a0, 0x1C($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X1C);
    // 0x801CD984: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x801CD988: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CD98C: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    // 0x801CD990: jal         0x801CB6AC
    // 0x801CD994: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_801CB6AC_65E55C(rdram, ctx);
        goto after_3;
    // 0x801CD994: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_3:
    // 0x801CD998: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x801CD99C: addiu       $t1, $zero, 0x5A
    ctx->r9 = ADD32(0, 0X5A);
    // 0x801CD9A0: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CD9A4: addiu       $a0, $a0, -0x2740
    ctx->r4 = ADD32(ctx->r4, -0X2740);
    // 0x801CD9A8: jal         0x8003521C
    // 0x801CD9AC: sw          $t1, 0x50($t2)
    MEM_W(0X50, ctx->r10) = ctx->r9;
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801CD9AC: sw          $t1, 0x50($t2)
    MEM_W(0X50, ctx->r10) = ctx->r9;
    after_4:
    // 0x801CD9B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801CD9B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801CD9B8: jr          $ra
    // 0x801CD9BC: nop

    TRACE_RETURN()
    return;
    // 0x801CD9BC: nop

;}
RECOMP_FUNC void func_801CEC38_661AE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CEC38: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801CEC3C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801CEC40: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801CEC44: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x801CEC48: jal         0x801CCE18
    // 0x801CEC4C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    func_801CCE18_65FCC8(rdram, ctx);
        goto after_0;
    // 0x801CEC4C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_0:
    // 0x801CEC50: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801CEC54: lui         $t6, 0x801F
    ctx->r14 = S32(0X801F << 16);
    // 0x801CEC58: lw          $t6, -0x66E8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X66E8);
    // 0x801CEC5C: lw          $a1, -0x66EC($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X66EC);
    // 0x801CEC60: beq         $t6, $a1, L_801CEC70
    if (ctx->r14 == ctx->r5) {
        // 0x801CEC64: nop
    
            goto L_801CEC70;
    }
    // 0x801CEC64: nop

    // 0x801CEC68: jal         0x801CD410
    // 0x801CEC6C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_801CD410_6602C0(rdram, ctx);
        goto after_1;
    // 0x801CEC6C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_1:
L_801CEC70:
    // 0x801CEC70: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x801CEC74: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x801CEC78: lui         $s0, 0x3
    ctx->r16 = S32(0X3 << 16);
    // 0x801CEC7C: ori         $s0, $s0, 0x8000
    ctx->r16 = ctx->r16 | 0X8000;
    // 0x801CEC80: addu        $t8, $t7, $s0
    ctx->r24 = ADD32(ctx->r15, ctx->r16);
    // 0x801CEC84: lhu         $t9, 0x307A($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X307A);
    // 0x801CEC88: andi        $t0, $t9, 0x9000
    ctx->r8 = ctx->r25 & 0X9000;
    // 0x801CEC8C: beq         $t0, $zero, L_801CEECC
    if (ctx->r8 == 0) {
        // 0x801CEC90: nop
    
            goto L_801CEECC;
    }
    // 0x801CEC90: nop

    // 0x801CEC94: jal         0x80038B98
    // 0x801CEC98: addiu       $a0, $zero, 0x167
    ctx->r4 = ADD32(0, 0X167);
    func_80038B98_39798(rdram, ctx);
        goto after_2;
    // 0x801CEC98: addiu       $a0, $zero, 0x167
    ctx->r4 = ADD32(0, 0X167);
    after_2:
    // 0x801CEC9C: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801CECA0: lw          $a1, -0x66EC($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X66EC);
    // 0x801CECA4: addiu       $t1, $a1, -0x2
    ctx->r9 = ADD32(ctx->r5, -0X2);
    // 0x801CECA8: sltiu       $at, $t1, 0x5
    ctx->r1 = ctx->r9 < 0X5 ? 1 : 0;
    // 0x801CECAC: beq         $at, $zero, L_801CEECC
    if (ctx->r1 == 0) {
        // 0x801CECB0: sll         $t1, $t1, 2
        ctx->r9 = S32(ctx->r9 << 2);
            goto L_801CEECC;
    }
    // 0x801CECB0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x801CECB4: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CECB8: addu        $at, $at, $t1
    gpr jr_addend_801CECC0 = ctx->r9;
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x801CECBC: lw          $t1, 0x47C0($at)
    ctx->r9 = ADD32(ctx->r1, 0X47C0);
    // 0x801CECC0: jr          $t1
    // 0x801CECC4: nop

    switch (jr_addend_801CECC0 >> 2) {
        case 0: goto L_801CECC8; break;
        case 1: goto L_801CECC8; break;
        case 2: goto L_801CECC8; break;
        case 3: goto L_801CED8C; break;
        case 4: goto L_801CEE30; break;
        default: switch_error(__func__, 0x801CECC0, 0x801D47C0);
    }
    // 0x801CECC4: nop

L_801CECC8:
    // 0x801CECC8: addiu       $t2, $a1, -0x2
    ctx->r10 = ADD32(ctx->r5, -0X2);
    // 0x801CECCC: lui         $t5, 0x801D
    ctx->r13 = S32(0X801D << 16);
    // 0x801CECD0: addiu       $t5, $t5, 0x32F0
    ctx->r13 = ADD32(ctx->r13, 0X32F0);
    // 0x801CECD4: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x801CECD8: addu        $s0, $t4, $t5
    ctx->r16 = ADD32(ctx->r12, ctx->r13);
    // 0x801CECDC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x801CECE0: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x801CECE4: lw          $t6, 0x6C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X6C);
    // 0x801CECE8: beq         $t6, $zero, L_801CED50
    if (ctx->r14 == 0) {
        // 0x801CECEC: nop
    
            goto L_801CED50;
    }
    // 0x801CECEC: nop

    // 0x801CECF0: jal         0x801CCCAC
    // 0x801CECF4: nop

    func_801CCCAC_65FB5C(rdram, ctx);
        goto after_3;
    // 0x801CECF4: nop

    after_3:
    // 0x801CECF8: bne         $v0, $zero, L_801CED10
    if (ctx->r2 != 0) {
        // 0x801CECFC: lui         $a0, 0x801D
        ctx->r4 = S32(0X801D << 16);
            goto L_801CED10;
    }
    // 0x801CECFC: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CED00: jal         0x8003521C
    // 0x801CED04: addiu       $a0, $a0, -0x21DC
    ctx->r4 = ADD32(ctx->r4, -0X21DC);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801CED04: addiu       $a0, $a0, -0x21DC
    ctx->r4 = ADD32(ctx->r4, -0X21DC);
    after_4:
    // 0x801CED08: b           L_801CEEF8
    // 0x801CED0C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801CEEF8;
    // 0x801CED0C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801CED10:
    // 0x801CED10: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x801CED14: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x801CED18: addiu       $t7, $t7, -0x39F8
    ctx->r15 = ADD32(ctx->r15, -0X39F8);
    // 0x801CED1C: addiu       $t0, $t8, 0x300
    ctx->r8 = ADD32(ctx->r24, 0X300);
L_801CED20:
    // 0x801CED20: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x801CED24: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x801CED28: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x801CED2C: sw          $at, -0xC($t7)
    MEM_W(-0XC, ctx->r15) = ctx->r1;
    // 0x801CED30: lw          $at, -0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X8);
    // 0x801CED34: sw          $at, -0x8($t7)
    MEM_W(-0X8, ctx->r15) = ctx->r1;
    // 0x801CED38: lw          $at, -0x4($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X4);
    // 0x801CED3C: bne         $t8, $t0, L_801CED20
    if (ctx->r24 != ctx->r8) {
        // 0x801CED40: sw          $at, -0x4($t7)
        MEM_W(-0X4, ctx->r15) = ctx->r1;
            goto L_801CED20;
    }
    // 0x801CED40: sw          $at, -0x4($t7)
    MEM_W(-0X4, ctx->r15) = ctx->r1;
    // 0x801CED44: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x801CED48: b           L_801CED58
    // 0x801CED4C: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
        goto L_801CED58;
    // 0x801CED4C: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
L_801CED50:
    // 0x801CED50: jal         0x8000B640
    // 0x801CED54: nop

    func_8000B640_C240(rdram, ctx);
        goto after_5;
    // 0x801CED54: nop

    after_5:
L_801CED58:
    // 0x801CED58: jal         0x8000B5D0
    // 0x801CED5C: nop

    func_8000B5D0_C1D0(rdram, ctx);
        goto after_6;
    // 0x801CED5C: nop

    after_6:
    // 0x801CED60: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x801CED64: lw          $t2, -0x3A38($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X3A38);
    // 0x801CED68: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x801CED6C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801CED70: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CED74: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x801CED78: addiu       $a0, $a0, -0x2770
    ctx->r4 = ADD32(ctx->r4, -0X2770);
    // 0x801CED7C: jal         0x8003521C
    // 0x801CED80: sw          $t1, -0x4FC0($at)
    MEM_W(-0X4FC0, ctx->r1) = ctx->r9;
    func_8003521C_35E1C(rdram, ctx);
        goto after_7;
    // 0x801CED80: sw          $t1, -0x4FC0($at)
    MEM_W(-0X4FC0, ctx->r1) = ctx->r9;
    after_7:
    // 0x801CED84: b           L_801CEEF8
    // 0x801CED88: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801CEEF8;
    // 0x801CED88: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801CED8C:
    // 0x801CED8C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x801CED90: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x801CED94: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801CED98: sw          $t3, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->r11;
    // 0x801CED9C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x801CEDA0: jal         0x801CD410
    // 0x801CEDA4: addiu       $s0, $s0, 0x5C
    ctx->r16 = ADD32(ctx->r16, 0X5C);
    func_801CD410_6602C0(rdram, ctx);
        goto after_8;
    // 0x801CEDA4: addiu       $s0, $s0, 0x5C
    ctx->r16 = ADD32(ctx->r16, 0X5C);
    after_8:
    // 0x801CEDA8: lui         $t4, 0x801F
    ctx->r12 = S32(0X801F << 16);
    // 0x801CEDAC: lw          $t4, -0x66EC($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X66EC);
    // 0x801CEDB0: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x801CEDB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CEDB8: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x801CEDBC: addu        $t6, $s0, $t5
    ctx->r14 = ADD32(ctx->r16, ctx->r13);
    // 0x801CEDC0: jal         0x800115B8
    // 0x801CEDC4: lw          $a0, 0x1C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X1C);
    func_800115B8_121B8(rdram, ctx);
        goto after_9;
    // 0x801CEDC4: lw          $a0, 0x1C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X1C);
    after_9:
    // 0x801CEDC8: lui         $t9, 0x801D
    ctx->r25 = S32(0X801D << 16);
    // 0x801CEDCC: lw          $t9, 0x3338($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3338);
    // 0x801CEDD0: lw          $a0, 0x40($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X40);
    // 0x801CEDD4: addiu       $a1, $zero, -0x28
    ctx->r5 = ADD32(0, -0X28);
    // 0x801CEDD8: addiu       $a2, $zero, -0x5
    ctx->r6 = ADD32(0, -0X5);
    // 0x801CEDDC: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    // 0x801CEDE0: jal         0x801CB6AC
    // 0x801CEDE4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_801CB6AC_65E55C(rdram, ctx);
        goto after_10;
    // 0x801CEDE4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_10:
    // 0x801CEDE8: lw          $t0, 0x1C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X1C);
    // 0x801CEDEC: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801CEDF0: lw          $a1, 0x330C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X330C);
    // 0x801CEDF4: lw          $t8, 0x0($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X0);
    // 0x801CEDF8: jal         0x801CB6A4
    // 0x801CEDFC: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    func_801CB6A4_65E554(rdram, ctx);
        goto after_11;
    // 0x801CEDFC: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    after_11:
    // 0x801CEE00: lw          $t7, 0x30($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X30);
    // 0x801CEE04: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801CEE08: lw          $a1, 0x3308($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X3308);
    // 0x801CEE0C: lw          $t1, 0x0($t7)
    ctx->r9 = MEM_W(ctx->r15, 0X0);
    // 0x801CEE10: jal         0x801CB6A4
    // 0x801CEE14: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    func_801CB6A4_65E554(rdram, ctx);
        goto after_12;
    // 0x801CEE14: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    after_12:
    // 0x801CEE18: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801CEE1C: addiu       $a1, $a1, -0x1784
    ctx->r5 = ADD32(ctx->r5, -0X1784);
    // 0x801CEE20: jal         0x80011734
    // 0x801CEE24: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_80011734_12334(rdram, ctx);
        goto after_13;
    // 0x801CEE24: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_13:
    // 0x801CEE28: b           L_801CEEF8
    // 0x801CEE2C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801CEEF8;
    // 0x801CEE2C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801CEE30:
    // 0x801CEE30: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x801CEE34: jal         0x801CD410
    // 0x801CEE38: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_801CD410_6602C0(rdram, ctx);
        goto after_14;
    // 0x801CEE38: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_14:
    // 0x801CEE3C: lui         $t2, 0x801F
    ctx->r10 = S32(0X801F << 16);
    // 0x801CEE40: lw          $t2, -0x66EC($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X66EC);
    // 0x801CEE44: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x801CEE48: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x801CEE4C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x801CEE50: addiu       $s0, $s0, 0x5C
    ctx->r16 = ADD32(ctx->r16, 0X5C);
    // 0x801CEE54: addu        $t4, $s0, $t3
    ctx->r12 = ADD32(ctx->r16, ctx->r11);
    // 0x801CEE58: lw          $a0, 0x1C($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X1C);
    // 0x801CEE5C: jal         0x800115B8
    // 0x801CEE60: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800115B8_121B8(rdram, ctx);
        goto after_15;
    // 0x801CEE60: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_15:
    // 0x801CEE64: lui         $t5, 0x801D
    ctx->r13 = S32(0X801D << 16);
    // 0x801CEE68: lw          $t5, 0x3338($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X3338);
    // 0x801CEE6C: lw          $a0, 0x40($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X40);
    // 0x801CEE70: addiu       $a1, $zero, -0x28
    ctx->r5 = ADD32(0, -0X28);
    // 0x801CEE74: addiu       $a2, $zero, -0x5
    ctx->r6 = ADD32(0, -0X5);
    // 0x801CEE78: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    // 0x801CEE7C: jal         0x801CB6AC
    // 0x801CEE80: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    func_801CB6AC_65E55C(rdram, ctx);
        goto after_16;
    // 0x801CEE80: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_16:
    // 0x801CEE84: lw          $t6, 0x1C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X1C);
    // 0x801CEE88: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801CEE8C: lw          $a1, 0x333C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X333C);
    // 0x801CEE90: lw          $t9, 0x0($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X0);
    // 0x801CEE94: jal         0x801CB6A4
    // 0x801CEE98: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    func_801CB6A4_65E554(rdram, ctx);
        goto after_17;
    // 0x801CEE98: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    after_17:
    // 0x801CEE9C: lw          $t0, 0x30($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X30);
    // 0x801CEEA0: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801CEEA4: lw          $a1, 0x3308($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X3308);
    // 0x801CEEA8: lw          $t8, 0x0($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X0);
    // 0x801CEEAC: jal         0x801CB6A4
    // 0x801CEEB0: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    func_801CB6A4_65E554(rdram, ctx);
        goto after_18;
    // 0x801CEEB0: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    after_18:
    // 0x801CEEB4: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801CEEB8: addiu       $a1, $a1, -0x1784
    ctx->r5 = ADD32(ctx->r5, -0X1784);
    // 0x801CEEBC: jal         0x80011734
    // 0x801CEEC0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_80011734_12334(rdram, ctx);
        goto after_19;
    // 0x801CEEC0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_19:
    // 0x801CEEC4: b           L_801CEEF8
    // 0x801CEEC8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801CEEF8;
    // 0x801CEEC8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801CEECC:
    // 0x801CEECC: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x801CEED0: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x801CEED4: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CEED8: addu        $t1, $t7, $s0
    ctx->r9 = ADD32(ctx->r15, ctx->r16);
    // 0x801CEEDC: lhu         $t2, 0x307A($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X307A);
    // 0x801CEEE0: andi        $t3, $t2, 0x4000
    ctx->r11 = ctx->r10 & 0X4000;
    // 0x801CEEE4: beql        $t3, $zero, L_801CEEF8
    if (ctx->r11 == 0) {
        // 0x801CEEE8: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_801CEEF8;
    }
    goto skip_0;
    // 0x801CEEE8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x801CEEEC: jal         0x8003521C
    // 0x801CEEF0: addiu       $a0, $a0, -0x1C4C
    ctx->r4 = ADD32(ctx->r4, -0X1C4C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_20;
    // 0x801CEEF0: addiu       $a0, $a0, -0x1C4C
    ctx->r4 = ADD32(ctx->r4, -0X1C4C);
    after_20:
    // 0x801CEEF4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801CEEF8:
    // 0x801CEEF8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801CEEFC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801CEF00: jr          $ra
    // 0x801CEF04: nop

    TRACE_RETURN()
    return;
    // 0x801CEF04: nop

;}
RECOMP_FUNC void func_801CFF08_662DB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CFF08: lui         $t7, 0x801D
    ctx->r15 = S32(0X801D << 16);
    // 0x801CFF0C: addiu       $t7, $t7, 0x33B0
    ctx->r15 = ADD32(ctx->r15, 0X33B0);
    // 0x801CFF10: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x801CFF14: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801CFF18: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x801CFF1C: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
    // 0x801CFF20: lui         $t8, 0xB800
    ctx->r24 = S32(0XB800 << 16);
    // 0x801CFF24: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x801CFF28: jr          $ra
    // 0x801CFF2C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    TRACE_RETURN()
    return;
    // 0x801CFF2C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
;}
RECOMP_FUNC void func_801CB754_65E604(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CB754: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801CB758: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801CB75C: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x801CB760: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x801CB764: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x801CB768: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x801CB76C: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x801CB770: jal         0x8001136C
    // 0x801CB774: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    func_8001136C_11F6C(rdram, ctx);
        goto after_0;
    // 0x801CB774: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801CB778: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x801CB77C: lui         $s0, 0x801D
    ctx->r16 = S32(0X801D << 16);
    // 0x801CB780: addiu       $s0, $s0, 0x4CE8
    ctx->r16 = ADD32(ctx->r16, 0X4CE8);
    // 0x801CB784: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x801CB788: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x801CB78C: lw          $s1, 0x6C($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X6C);
    // 0x801CB790: lw          $s3, 0x70($s2)
    ctx->r19 = MEM_W(ctx->r18, 0X70);
    // 0x801CB794: sw          $t6, 0x30($t7)
    MEM_W(0X30, ctx->r15) = ctx->r14;
    // 0x801CB798: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x801CB79C: jal         0x80010B60
    // 0x801CB7A0: addiu       $s2, $s2, 0x5C
    ctx->r18 = ADD32(ctx->r18, 0X5C);
    func_80010B60_11760(rdram, ctx);
        goto after_1;
    // 0x801CB7A0: addiu       $s2, $s2, 0x5C
    ctx->r18 = ADD32(ctx->r18, 0X5C);
    after_1:
    // 0x801CB7A4: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x801CB7A8: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x801CB7AC: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x801CB7B0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x801CB7B4: jal         0x80010980
    // 0x801CB7B8: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    func_80010980_11580(rdram, ctx);
        goto after_2;
    // 0x801CB7B8: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_2:
    // 0x801CB7BC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x801CB7C0: jal         0x800109A4
    // 0x801CB7C4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_800109A4_115A4(rdram, ctx);
        goto after_3;
    // 0x801CB7C4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_3:
    // 0x801CB7C8: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x801CB7CC: lw          $a3, 0x20($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X20);
    // 0x801CB7D0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801CB7D4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801CB7D8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801CB7DC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x801CB7E0: jal         0x8001110C
    // 0x801CB7E4: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    func_8001110C_11D0C(rdram, ctx);
        goto after_4;
    // 0x801CB7E4: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_4:
    // 0x801CB7E8: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x801CB7EC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801CB7F0: jal         0x800109A4
    // 0x801CB7F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800109A4_115A4(rdram, ctx);
        goto after_5;
    // 0x801CB7F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x801CB7F8: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x801CB7FC: lw          $t9, 0x24($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X24);
    // 0x801CB800: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x801CB804: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x801CB808: bne         $t9, $zero, L_801CB844
    if (ctx->r25 != 0) {
        // 0x801CB80C: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_801CB844;
    }
    // 0x801CB80C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801CB810: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x801CB814: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x801CB818: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x801CB81C: jal         0x80010980
    // 0x801CB820: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    func_80010980_11580(rdram, ctx);
        goto after_6;
    // 0x801CB820: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_6:
    // 0x801CB824: lui         $a3, 0x801D
    ctx->r7 = S32(0X801D << 16);
    // 0x801CB828: addiu       $a3, $a3, 0x408C
    ctx->r7 = ADD32(ctx->r7, 0X408C);
    // 0x801CB82C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x801CB830: addiu       $a1, $s1, 0x32
    ctx->r5 = ADD32(ctx->r17, 0X32);
    // 0x801CB834: jal         0x80010E9C
    // 0x801CB838: addiu       $a2, $s3, 0x6
    ctx->r6 = ADD32(ctx->r19, 0X6);
    func_80010E9C_11A9C(rdram, ctx);
        goto after_7;
    // 0x801CB838: addiu       $a2, $s3, 0x6
    ctx->r6 = ADD32(ctx->r19, 0X6);
    after_7:
    // 0x801CB83C: b           L_801CB9AC
    // 0x801CB840: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
        goto L_801CB9AC;
    // 0x801CB840: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
L_801CB844:
    // 0x801CB844: jal         0x80010980
    // 0x801CB848: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    func_80010980_11580(rdram, ctx);
        goto after_8;
    // 0x801CB848: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_8:
    // 0x801CB84C: lw          $v0, 0x2C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X2C);
    // 0x801CB850: beq         $v0, $zero, L_801CB878
    if (ctx->r2 == 0) {
        // 0x801CB854: sll         $t0, $v0, 2
        ctx->r8 = S32(ctx->r2 << 2);
            goto L_801CB878;
    }
    // 0x801CB854: sll         $t0, $v0, 2
    ctx->r8 = S32(ctx->r2 << 2);
    // 0x801CB858: lui         $a3, 0x801D
    ctx->r7 = S32(0X801D << 16);
    // 0x801CB85C: addu        $a3, $a3, $t0
    ctx->r7 = ADD32(ctx->r7, ctx->r8);
    // 0x801CB860: lw          $a3, 0x32A8($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X32A8);
    // 0x801CB864: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x801CB868: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x801CB86C: jal         0x80010E9C
    // 0x801CB870: addiu       $a2, $s3, 0xF
    ctx->r6 = ADD32(ctx->r19, 0XF);
    func_80010E9C_11A9C(rdram, ctx);
        goto after_9;
    // 0x801CB870: addiu       $a2, $s3, 0xF
    ctx->r6 = ADD32(ctx->r19, 0XF);
    after_9:
    // 0x801CB874: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
L_801CB878:
    // 0x801CB878: addiu       $t1, $s3, 0xF
    ctx->r9 = ADD32(ctx->r19, 0XF);
    // 0x801CB87C: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x801CB880: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x801CB884: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x801CB888: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801CB88C: jal         0x80010980
    // 0x801CB890: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    func_80010980_11580(rdram, ctx);
        goto after_10;
    // 0x801CB890: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_10:
    // 0x801CB894: lui         $a3, 0x801D
    ctx->r7 = S32(0X801D << 16);
    // 0x801CB898: addiu       $a3, $a3, 0x40A0
    ctx->r7 = ADD32(ctx->r7, 0X40A0);
    // 0x801CB89C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x801CB8A0: addiu       $a1, $s1, 0xA4
    ctx->r5 = ADD32(ctx->r17, 0XA4);
    // 0x801CB8A4: jal         0x80010E9C
    // 0x801CB8A8: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    func_80010E9C_11A9C(rdram, ctx);
        goto after_11;
    // 0x801CB8A8: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    after_11:
    // 0x801CB8AC: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x801CB8B0: lw          $a3, 0x34($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X34);
    // 0x801CB8B4: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x801CB8B8: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x801CB8BC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801CB8C0: addiu       $a1, $s1, 0xC3
    ctx->r5 = ADD32(ctx->r17, 0XC3);
    // 0x801CB8C4: jal         0x8001110C
    // 0x801CB8C8: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    func_8001110C_11D0C(rdram, ctx);
        goto after_12;
    // 0x801CB8C8: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    after_12:
    // 0x801CB8CC: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x801CB8D0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801CB8D4: addiu       $a1, $s1, 0xD6
    ctx->r5 = ADD32(ctx->r17, 0XD6);
    // 0x801CB8D8: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x801CB8DC: jal         0x80010C6C
    // 0x801CB8E0: addiu       $a3, $zero, 0x3A
    ctx->r7 = ADD32(0, 0X3A);
    func_80010C6C_1186C(rdram, ctx);
        goto after_13;
    // 0x801CB8E0: addiu       $a3, $zero, 0x3A
    ctx->r7 = ADD32(0, 0X3A);
    after_13:
    // 0x801CB8E4: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x801CB8E8: lw          $a3, 0x38($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X38);
    // 0x801CB8EC: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x801CB8F0: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x801CB8F4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801CB8F8: addiu       $a1, $s1, 0xDA
    ctx->r5 = ADD32(ctx->r17, 0XDA);
    // 0x801CB8FC: jal         0x8001110C
    // 0x801CB900: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    func_8001110C_11D0C(rdram, ctx);
        goto after_14;
    // 0x801CB900: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    after_14:
    // 0x801CB904: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x801CB908: lw          $a3, 0x28($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X28);
    // 0x801CB90C: addiu       $t4, $zero, 0x2710
    ctx->r12 = ADD32(0, 0X2710);
    // 0x801CB910: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x801CB914: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801CB918: addiu       $a1, $s1, 0x64
    ctx->r5 = ADD32(ctx->r17, 0X64);
    // 0x801CB91C: jal         0x8001110C
    // 0x801CB920: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    func_8001110C_11D0C(rdram, ctx);
        goto after_15;
    // 0x801CB920: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_15:
    // 0x801CB924: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x801CB928: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x801CB92C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x801CB930: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CB934: jal         0x80010980
    // 0x801CB938: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    func_80010980_11580(rdram, ctx);
        goto after_16;
    // 0x801CB938: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_16:
    // 0x801CB93C: lui         $a3, 0x801D
    ctx->r7 = S32(0X801D << 16);
    // 0x801CB940: addiu       $a3, $a3, 0x40A8
    ctx->r7 = ADD32(ctx->r7, 0X40A8);
    // 0x801CB944: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x801CB948: addiu       $a1, $s1, 0x92
    ctx->r5 = ADD32(ctx->r17, 0X92);
    // 0x801CB94C: jal         0x80010E9C
    // 0x801CB950: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    func_80010E9C_11A9C(rdram, ctx);
        goto after_17;
    // 0x801CB950: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_17:
    // 0x801CB954: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x801CB958: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x801CB95C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x801CB960: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801CB964: jal         0x80010980
    // 0x801CB968: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_80010980_11580(rdram, ctx);
        goto after_18;
    // 0x801CB968: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_18:
    // 0x801CB96C: lui         $a3, 0x801D
    ctx->r7 = S32(0X801D << 16);
    // 0x801CB970: addiu       $a3, $a3, 0x40AC
    ctx->r7 = ADD32(ctx->r7, 0X40AC);
    // 0x801CB974: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x801CB978: addiu       $a1, $s1, 0xB8
    ctx->r5 = ADD32(ctx->r17, 0XB8);
    // 0x801CB97C: jal         0x80010E9C
    // 0x801CB980: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    func_80010E9C_11A9C(rdram, ctx);
        goto after_19;
    // 0x801CB980: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_19:
    // 0x801CB984: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x801CB988: lw          $a3, 0x30($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X30);
    // 0x801CB98C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x801CB990: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x801CB994: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801CB998: addiu       $a1, $s1, 0xE4
    ctx->r5 = ADD32(ctx->r17, 0XE4);
    // 0x801CB99C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x801CB9A0: jal         0x8001110C
    // 0x801CB9A4: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
    func_8001110C_11D0C(rdram, ctx);
        goto after_20;
    // 0x801CB9A4: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
    after_20:
    // 0x801CB9A8: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
L_801CB9AC:
    // 0x801CB9AC: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x801CB9B0: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x801CB9B4: lui         $v1, 0x8FFF
    ctx->r3 = S32(0X8FFF << 16);
    // 0x801CB9B8: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x801CB9BC: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x801CB9C0: lw          $v0, 0x30($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X30);
    // 0x801CB9C4: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x801CB9C8: subu        $t0, $v1, $v0
    ctx->r8 = SUB32(ctx->r3, ctx->r2);
    // 0x801CB9CC: and         $t1, $t7, $t0
    ctx->r9 = ctx->r15 & ctx->r8;
    // 0x801CB9D0: and         $a1, $t1, $v1
    ctx->r5 = ctx->r9 & ctx->r3;
    // 0x801CB9D4: jal         0x80040620
    // 0x801CB9D8: and         $a0, $v0, $v1
    ctx->r4 = ctx->r2 & ctx->r3;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_21;
    // 0x801CB9D8: and         $a0, $v0, $v1
    ctx->r4 = ctx->r2 & ctx->r3;
    after_21:
    // 0x801CB9DC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x801CB9E0: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x801CB9E4: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x801CB9E8: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x801CB9EC: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x801CB9F0: jr          $ra
    // 0x801CB9F4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x801CB9F4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_801D0FF0_663EA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D0FF0: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x801D0FF4: lw          $v0, -0x3A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A38);
    // 0x801D0FF8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801D0FFC: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801D1000: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801D1004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D1008: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x801D100C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801D1010: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x801D1014: lh          $v1, 0x3080($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X3080);
    // 0x801D1018: lui         $a2, 0x801F
    ctx->r6 = S32(0X801F << 16);
    // 0x801D101C: lw          $a1, -0x66B4($a2)
    ctx->r5 = MEM_W(ctx->r6, -0X66B4);
    // 0x801D1020: slti        $at, $v1, -0x28
    ctx->r1 = SIGNED(ctx->r3) < -0X28 ? 1 : 0;
    // 0x801D1024: beq         $at, $zero, L_801D1038
    if (ctx->r1 == 0) {
        // 0x801D1028: lhu         $a2, 0x307A($v0)
        ctx->r6 = MEM_HU(ctx->r2, 0X307A);
            goto L_801D1038;
    }
    // 0x801D1028: lhu         $a2, 0x307A($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0X307A);
    // 0x801D102C: ori         $t6, $a2, 0x400
    ctx->r14 = ctx->r6 | 0X400;
    // 0x801D1030: b           L_801D1048
    // 0x801D1034: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
        goto L_801D1048;
    // 0x801D1034: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
L_801D1038:
    // 0x801D1038: slti        $at, $v1, 0x29
    ctx->r1 = SIGNED(ctx->r3) < 0X29 ? 1 : 0;
    // 0x801D103C: bne         $at, $zero, L_801D1048
    if (ctx->r1 != 0) {
        // 0x801D1040: ori         $t7, $a2, 0x800
        ctx->r15 = ctx->r6 | 0X800;
            goto L_801D1048;
    }
    // 0x801D1040: ori         $t7, $a2, 0x800
    ctx->r15 = ctx->r6 | 0X800;
    // 0x801D1044: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
L_801D1048:
    // 0x801D1048: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D104C: bne         $a1, $a2, L_801D106C
    if (ctx->r5 != ctx->r6) {
        // 0x801D1050: sw          $a1, -0x66B0($at)
        MEM_W(-0X66B0, ctx->r1) = ctx->r5;
            goto L_801D106C;
    }
    // 0x801D1050: sw          $a1, -0x66B0($at)
    MEM_W(-0X66B0, ctx->r1) = ctx->r5;
    // 0x801D1054: lui         $t8, 0x801F
    ctx->r24 = S32(0X801F << 16);
    // 0x801D1058: lw          $t8, -0x66AC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X66AC);
    // 0x801D105C: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D1060: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x801D1064: b           L_801D1078
    // 0x801D1068: sw          $t9, -0x66AC($at)
    MEM_W(-0X66AC, ctx->r1) = ctx->r25;
        goto L_801D1078;
    // 0x801D1068: sw          $t9, -0x66AC($at)
    MEM_W(-0X66AC, ctx->r1) = ctx->r25;
L_801D106C:
    // 0x801D106C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x801D1070: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D1074: sw          $t0, -0x66AC($at)
    MEM_W(-0X66AC, ctx->r1) = ctx->r8;
L_801D1078:
    // 0x801D1078: andi        $t1, $a2, 0x400
    ctx->r9 = ctx->r6 & 0X400;
    // 0x801D107C: beq         $t1, $zero, L_801D10C0
    if (ctx->r9 == 0) {
        // 0x801D1080: lui         $t2, 0x801F
        ctx->r10 = S32(0X801F << 16);
            goto L_801D10C0;
    }
    // 0x801D1080: lui         $t2, 0x801F
    ctx->r10 = S32(0X801F << 16);
    // 0x801D1084: lw          $t2, -0x66AC($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X66AC);
    // 0x801D1088: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801D108C: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x801D1090: beq         $t2, $at, L_801D10A4
    if (ctx->r10 == ctx->r1) {
        // 0x801D1094: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_801D10A4;
    }
    // 0x801D1094: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801D1098: slti        $at, $t2, 0xB
    ctx->r1 = SIGNED(ctx->r10) < 0XB ? 1 : 0;
    // 0x801D109C: bnel        $at, $zero, L_801D10C4
    if (ctx->r1 != 0) {
        // 0x801D10A0: andi        $t4, $a2, 0x800
        ctx->r12 = ctx->r6 & 0X800;
            goto L_801D10C4;
    }
    goto skip_0;
    // 0x801D10A0: andi        $t4, $a2, 0x800
    ctx->r12 = ctx->r6 & 0X800;
    skip_0:
L_801D10A4:
    // 0x801D10A4: lw          $a0, 0x84($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X84);
    // 0x801D10A8: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D10AC: jal         0x801D0698
    // 0x801D10B0: sw          $a2, -0x66B4($at)
    MEM_W(-0X66B4, ctx->r1) = ctx->r6;
    func_801D0698_663548(rdram, ctx);
        goto after_0;
    // 0x801D10B0: sw          $a2, -0x66B4($at)
    MEM_W(-0X66B4, ctx->r1) = ctx->r6;
    after_0:
    // 0x801D10B4: lui         $a2, 0x801F
    ctx->r6 = S32(0X801F << 16);
    // 0x801D10B8: b           L_801D1104
    // 0x801D10BC: lw          $a2, -0x66B4($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X66B4);
        goto L_801D1104;
    // 0x801D10BC: lw          $a2, -0x66B4($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X66B4);
L_801D10C0:
    // 0x801D10C0: andi        $t4, $a2, 0x800
    ctx->r12 = ctx->r6 & 0X800;
L_801D10C4:
    // 0x801D10C4: beq         $t4, $zero, L_801D1104
    if (ctx->r12 == 0) {
        // 0x801D10C8: lui         $t5, 0x801F
        ctx->r13 = S32(0X801F << 16);
            goto L_801D1104;
    }
    // 0x801D10C8: lui         $t5, 0x801F
    ctx->r13 = S32(0X801F << 16);
    // 0x801D10CC: lw          $t5, -0x66AC($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X66AC);
    // 0x801D10D0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801D10D4: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x801D10D8: beq         $t5, $at, L_801D10EC
    if (ctx->r13 == ctx->r1) {
        // 0x801D10DC: addiu       $a1, $zero, -0x1
        ctx->r5 = ADD32(0, -0X1);
            goto L_801D10EC;
    }
    // 0x801D10DC: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x801D10E0: slti        $at, $t5, 0xB
    ctx->r1 = SIGNED(ctx->r13) < 0XB ? 1 : 0;
    // 0x801D10E4: bne         $at, $zero, L_801D1104
    if (ctx->r1 != 0) {
        // 0x801D10E8: nop
    
            goto L_801D1104;
    }
    // 0x801D10E8: nop

L_801D10EC:
    // 0x801D10EC: lw          $a0, 0x84($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X84);
    // 0x801D10F0: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D10F4: jal         0x801D0698
    // 0x801D10F8: sw          $a2, -0x66B4($at)
    MEM_W(-0X66B4, ctx->r1) = ctx->r6;
    func_801D0698_663548(rdram, ctx);
        goto after_1;
    // 0x801D10F8: sw          $a2, -0x66B4($at)
    MEM_W(-0X66B4, ctx->r1) = ctx->r6;
    after_1:
    // 0x801D10FC: lui         $a2, 0x801F
    ctx->r6 = S32(0X801F << 16);
    // 0x801D1100: lw          $a2, -0x66B4($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X66B4);
L_801D1104:
    // 0x801D1104: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D1108: andi        $t7, $a2, 0x8000
    ctx->r15 = ctx->r6 & 0X8000;
    // 0x801D110C: beq         $t7, $zero, L_801D1174
    if (ctx->r15 == 0) {
        // 0x801D1110: sw          $a2, -0x66B4($at)
        MEM_W(-0X66B4, ctx->r1) = ctx->r6;
            goto L_801D1174;
    }
    // 0x801D1110: sw          $a2, -0x66B4($at)
    MEM_W(-0X66B4, ctx->r1) = ctx->r6;
    // 0x801D1114: lui         $t8, 0x801F
    ctx->r24 = S32(0X801F << 16);
    // 0x801D1118: lw          $t8, -0x66AC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X66AC);
    // 0x801D111C: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D1120: sw          $a2, -0x66B4($at)
    MEM_W(-0X66B4, ctx->r1) = ctx->r6;
    // 0x801D1124: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801D1128: bne         $t8, $at, L_801D1174
    if (ctx->r24 != ctx->r1) {
        // 0x801D112C: lw          $v1, 0x28($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X28);
            goto L_801D1174;
    }
    // 0x801D112C: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x801D1130: addiu       $v1, $v1, 0x5C
    ctx->r3 = ADD32(ctx->r3, 0X5C);
    // 0x801D1134: lw          $a0, 0x28($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X28);
    // 0x801D1138: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D113C: sw          $a2, -0x66B4($at)
    MEM_W(-0X66B4, ctx->r1) = ctx->r6;
    // 0x801D1140: jal         0x801D0754
    // 0x801D1144: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_801D0754_663604(rdram, ctx);
        goto after_2;
    // 0x801D1144: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_2:
    // 0x801D1148: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x801D114C: beq         $v0, $at, L_801D1174
    if (ctx->r2 == ctx->r1) {
        // 0x801D1150: lw          $v1, 0x1C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X1C);
            goto L_801D1174;
    }
    // 0x801D1150: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x801D1154: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801D1158: lw          $a1, 0x342C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X342C);
    // 0x801D115C: jal         0x801CB6A4
    // 0x801D1160: lw          $a0, 0x20($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X20);
    func_801CB6A4_65E554(rdram, ctx);
        goto after_3;
    // 0x801D1160: lw          $a0, 0x20($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X20);
    after_3:
    // 0x801D1164: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801D1168: addiu       $a1, $a1, 0xEBC
    ctx->r5 = ADD32(ctx->r5, 0XEBC);
    // 0x801D116C: jal         0x80011734
    // 0x801D1170: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_80011734_12334(rdram, ctx);
        goto after_4;
    // 0x801D1170: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_4:
L_801D1174:
    // 0x801D1174: lui         $a2, 0x801F
    ctx->r6 = S32(0X801F << 16);
    // 0x801D1178: lw          $a2, -0x66B4($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X66B4);
    // 0x801D117C: lui         $t0, 0x801F
    ctx->r8 = S32(0X801F << 16);
    // 0x801D1180: andi        $t9, $a2, 0x4000
    ctx->r25 = ctx->r6 & 0X4000;
    // 0x801D1184: beql        $t9, $zero, L_801D11B0
    if (ctx->r25 == 0) {
        // 0x801D1188: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801D11B0;
    }
    goto skip_1;
    // 0x801D1188: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x801D118C: lw          $t0, -0x66AC($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X66AC);
    // 0x801D1190: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801D1194: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x801D1198: bne         $t0, $at, L_801D11AC
    if (ctx->r8 != ctx->r1) {
        // 0x801D119C: lui         $a0, 0x801D
        ctx->r4 = S32(0X801D << 16);
            goto L_801D11AC;
    }
    // 0x801D119C: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801D11A0: sw          $zero, 0x8C($t1)
    MEM_W(0X8C, ctx->r9) = 0;
    // 0x801D11A4: jal         0x8003521C
    // 0x801D11A8: addiu       $a0, $a0, 0xDC0
    ctx->r4 = ADD32(ctx->r4, 0XDC0);
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x801D11A8: addiu       $a0, $a0, 0xDC0
    ctx->r4 = ADD32(ctx->r4, 0XDC0);
    after_5:
L_801D11AC:
    // 0x801D11AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801D11B0:
    // 0x801D11B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801D11B4: jr          $ra
    // 0x801D11B8: nop

    TRACE_RETURN()
    return;
    // 0x801D11B8: nop

;}
RECOMP_FUNC void func_801D1DEC_664C9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D1DEC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801D1DF0: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x801D1DF4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801D1DF8: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x801D1DFC: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801D1E00: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801D1E04: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x801D1E08: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x801D1E0C: addiu       $a1, $a1, 0x1C24
    ctx->r5 = ADD32(ctx->r5, 0X1C24);
    // 0x801D1E10: jal         0x80034E08
    // 0x801D1E14: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x801D1E14: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x801D1E18: bne         $v0, $zero, L_801D1E28
    if (ctx->r2 != 0) {
        // 0x801D1E1C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_801D1E28;
    }
    // 0x801D1E1C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x801D1E20: b           L_801D1EBC
    // 0x801D1E24: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801D1EBC;
    // 0x801D1E24: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D1E28:
    // 0x801D1E28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D1E2C: jal         0x80011610
    // 0x801D1E30: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    func_80011610_12210(rdram, ctx);
        goto after_1;
    // 0x801D1E30: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    after_1:
    // 0x801D1E34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D1E38: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x801D1E3C: jal         0x800115F8
    // 0x801D1E40: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    func_800115F8_121F8(rdram, ctx);
        goto after_2;
    // 0x801D1E40: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    after_2:
    // 0x801D1E44: lui         $t6, 0x801D
    ctx->r14 = S32(0X801D << 16);
    // 0x801D1E48: addiu       $t6, $t6, 0x1DC4
    ctx->r14 = ADD32(ctx->r14, 0X1DC4);
    // 0x801D1E4C: addiu       $v1, $s0, 0x5C
    ctx->r3 = ADD32(ctx->r16, 0X5C);
    // 0x801D1E50: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x801D1E54: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    // 0x801D1E58: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x801D1E5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D1E60: jal         0x800103DC
    // 0x801D1E64: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800103DC_10FDC(rdram, ctx);
        goto after_3;
    // 0x801D1E64: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x801D1E68: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x801D1E6C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x801D1E70: bne         $v0, $at, L_801D1E80
    if (ctx->r2 != ctx->r1) {
        // 0x801D1E74: sw          $v0, 0x34($v1)
        MEM_W(0X34, ctx->r3) = ctx->r2;
            goto L_801D1E80;
    }
    // 0x801D1E74: sw          $v0, 0x34($v1)
    MEM_W(0X34, ctx->r3) = ctx->r2;
    // 0x801D1E78: b           L_801D1EBC
    // 0x801D1E7C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801D1EBC;
    // 0x801D1E7C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D1E80:
    // 0x801D1E80: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x801D1E84: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x801D1E88: addiu       $t9, $zero, 0xC
    ctx->r25 = ADD32(0, 0XC);
    // 0x801D1E8C: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x801D1E90: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x801D1E94: sw          $t8, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r24;
    // 0x801D1E98: sw          $t9, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r25;
    // 0x801D1E9C: sw          $t0, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r8;
    // 0x801D1EA0: sw          $t1, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r9;
    // 0x801D1EA4: sw          $zero, 0x30($v1)
    MEM_W(0X30, ctx->r3) = 0;
    // 0x801D1EA8: sw          $t7, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r15;
    // 0x801D1EAC: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x801D1EB0: jal         0x800119D4
    // 0x801D1EB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800119D4_125D4(rdram, ctx);
        goto after_4;
    // 0x801D1EB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x801D1EB8: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_801D1EBC:
    // 0x801D1EBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801D1EC0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801D1EC4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801D1EC8: jr          $ra
    // 0x801D1ECC: nop

    TRACE_RETURN()
    return;
    // 0x801D1ECC: nop

;}
RECOMP_FUNC void func_801CF2E0_662190(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CF2E0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801CF2E4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x801CF2E8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801CF2EC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801CF2F0: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CF2F4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x801CF2F8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x801CF2FC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801CF300: addiu       $a0, $a0, -0x3688
    ctx->r4 = ADD32(ctx->r4, -0X3688);
    // 0x801CF304: jal         0x80034DD8
    // 0x801CF308: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034DD8_359D8(rdram, ctx);
        goto after_0;
    // 0x801CF308: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x801CF30C: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x801CF310: addiu       $t6, $zero, 0x9
    ctx->r14 = ADD32(0, 0X9);
    // 0x801CF314: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CF318: addiu       $a0, $a0, -0xE1C
    ctx->r4 = ADD32(ctx->r4, -0XE1C);
    // 0x801CF31C: jal         0x8003521C
    // 0x801CF320: sw          $t6, 0xAC($t7)
    MEM_W(0XAC, ctx->r15) = ctx->r14;
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x801CF320: sw          $t6, 0xAC($t7)
    MEM_W(0XAC, ctx->r15) = ctx->r14;
    after_1:
    // 0x801CF324: jal         0x80023840
    // 0x801CF328: nop

    func_80023840_24440(rdram, ctx);
        goto after_2;
    // 0x801CF328: nop

    after_2:
    // 0x801CF32C: beq         $v0, $zero, L_801CF3BC
    if (ctx->r2 == 0) {
        // 0x801CF330: lui         $t8, 0x8016
        ctx->r24 = S32(0X8016 << 16);
            goto L_801CF3BC;
    }
    // 0x801CF330: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x801CF334: lw          $t8, -0x3A38($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3A38);
    // 0x801CF338: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
    // 0x801CF33C: addiu       $at, $zero, 0x200
    ctx->r1 = ADD32(0, 0X200);
    // 0x801CF340: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x801CF344: lhu         $v0, -0x51EC($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X51EC);
    // 0x801CF348: beq         $v0, $zero, L_801CF36C
    if (ctx->r2 == 0) {
        // 0x801CF34C: nop
    
            goto L_801CF36C;
    }
    // 0x801CF34C: nop

    // 0x801CF350: bne         $v0, $at, L_801CF3B4
    if (ctx->r2 != ctx->r1) {
        // 0x801CF354: lui         $a0, 0x801D
        ctx->r4 = S32(0X801D << 16);
            goto L_801CF3B4;
    }
    // 0x801CF354: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CF358: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CF35C: jal         0x8003521C
    // 0x801CF360: addiu       $a0, $a0, -0x2300
    ctx->r4 = ADD32(ctx->r4, -0X2300);
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801CF360: addiu       $a0, $a0, -0x2300
    ctx->r4 = ADD32(ctx->r4, -0X2300);
    after_3:
    // 0x801CF364: b           L_801CF3C0
    // 0x801CF368: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
        goto L_801CF3C0;
    // 0x801CF368: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
L_801CF36C:
    // 0x801CF36C: jal         0x800232EC
    // 0x801CF370: nop

    func_800232EC_23EEC(rdram, ctx);
        goto after_4;
    // 0x801CF370: nop

    after_4:
    // 0x801CF374: jal         0x80023410
    // 0x801CF378: nop

    func_80023410_24010(rdram, ctx);
        goto after_5;
    // 0x801CF378: nop

    after_5:
    // 0x801CF37C: jal         0x80023480
    // 0x801CF380: nop

    func_80023480_24080(rdram, ctx);
        goto after_6;
    // 0x801CF380: nop

    after_6:
    // 0x801CF384: lui         $s1, 0x801F
    ctx->r17 = S32(0X801F << 16);
    // 0x801CF388: addiu       $s1, $s1, -0x78F0
    ctx->r17 = ADD32(ctx->r17, -0X78F0);
    // 0x801CF38C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x801CF390: addiu       $s2, $zero, 0x3
    ctx->r18 = ADD32(0, 0X3);
L_801CF394:
    // 0x801CF394: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801CF398: jal         0x800234D8
    // 0x801CF39C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800234D8_240D8(rdram, ctx);
        goto after_7;
    // 0x801CF39C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_7:
    // 0x801CF3A0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x801CF3A4: bne         $s0, $s2, L_801CF394
    if (ctx->r16 != ctx->r18) {
        // 0x801CF3A8: addiu       $s1, $s1, 0x500
        ctx->r17 = ADD32(ctx->r17, 0X500);
            goto L_801CF394;
    }
    // 0x801CF3A8: addiu       $s1, $s1, 0x500
    ctx->r17 = ADD32(ctx->r17, 0X500);
    // 0x801CF3AC: b           L_801CF3C0
    // 0x801CF3B0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
        goto L_801CF3C0;
    // 0x801CF3B0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
L_801CF3B4:
    // 0x801CF3B4: jal         0x8003521C
    // 0x801CF3B8: addiu       $a0, $a0, -0x245C
    ctx->r4 = ADD32(ctx->r4, -0X245C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_8;
    // 0x801CF3B8: addiu       $a0, $a0, -0x245C
    ctx->r4 = ADD32(ctx->r4, -0X245C);
    after_8:
L_801CF3BC:
    // 0x801CF3BC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
L_801CF3C0:
    // 0x801CF3C0: lw          $t9, 0xC($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XC);
    // 0x801CF3C4: lw          $a1, 0x18($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X18);
    // 0x801CF3C8: jalr        $t9
    // 0x801CF3CC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x801CF3CC: nop

    after_9:
    // 0x801CF3D0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801CF3D4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801CF3D8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x801CF3DC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x801CF3E0: jr          $ra
    // 0x801CF3E4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x801CF3E4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_801CD3B8_660268(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CD3B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801CD3BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CD3C0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801CD3C4: jal         0x80011610
    // 0x801CD3C8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_80011610_12210(rdram, ctx);
        goto after_0;
    // 0x801CD3C8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x801CD3CC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x801CD3D0: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x801CD3D4: jal         0x801CC5A8
    // 0x801CD3D8: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    func_801CC5A8_65F458(rdram, ctx);
        goto after_1;
    // 0x801CD3D8: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x801CD3DC: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801CD3E0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801CD3E4: addiu       $a1, $zero, -0x10
    ctx->r5 = ADD32(0, -0X10);
    // 0x801CD3E8: bgez        $a2, L_801CD3F8
    if (SIGNED(ctx->r6) >= 0) {
        // 0x801CD3EC: sra         $t6, $a2, 1
        ctx->r14 = S32(SIGNED(ctx->r6) >> 1);
            goto L_801CD3F8;
    }
    // 0x801CD3EC: sra         $t6, $a2, 1
    ctx->r14 = S32(SIGNED(ctx->r6) >> 1);
    // 0x801CD3F0: addiu       $at, $a2, 0x1
    ctx->r1 = ADD32(ctx->r6, 0X1);
    // 0x801CD3F4: sra         $t6, $at, 1
    ctx->r14 = S32(SIGNED(ctx->r1) >> 1);
L_801CD3F8:
    // 0x801CD3F8: jal         0x800115F8
    // 0x801CD3FC: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    func_800115F8_121F8(rdram, ctx);
        goto after_2;
    // 0x801CD3FC: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    after_2:
    // 0x801CD400: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CD404: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801CD408: jr          $ra
    // 0x801CD40C: nop

    TRACE_RETURN()
    return;
    // 0x801CD40C: nop

;}
RECOMP_FUNC void func_801CBF30_65EDE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CBF30: lw          $t6, 0x78($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X78);
    // 0x801CBF34: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x801CBF38: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x801CBF3C: sltiu       $at, $t7, 0x7
    ctx->r1 = ctx->r15 < 0X7 ? 1 : 0;
    // 0x801CBF40: beq         $at, $zero, L_801CBF5C
    if (ctx->r1 == 0) {
        // 0x801CBF44: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_801CBF5C;
    }
    // 0x801CBF44: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x801CBF48: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CBF4C: addu        $at, $at, $t7
    gpr jr_addend_801CBF54 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x801CBF50: lw          $t7, 0x427C($at)
    ctx->r15 = ADD32(ctx->r1, 0X427C);
    // 0x801CBF54: jr          $t7
    // 0x801CBF58: nop

    switch (jr_addend_801CBF54 >> 2) {
        case 0: goto L_801CBF64; break;
        case 1: goto L_801CBF70; break;
        case 2: goto L_801CBF7C; break;
        case 3: goto L_801CBF88; break;
        case 4: goto L_801CBF94; break;
        case 5: goto L_801CBFA0; break;
        case 6: goto L_801CBFAC; break;
        default: switch_error(__func__, 0x801CBF54, 0x801D427C);
    }
    // 0x801CBF58: nop

L_801CBF5C:
    // 0x801CBF5C: jr          $ra
    // 0x801CBF60: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x801CBF60: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801CBF64:
    // 0x801CBF64: lui         $a0, 0x800
    ctx->r4 = S32(0X800 << 16);
    // 0x801CBF68: b           L_801CBFB4
    // 0x801CBF6C: addiu       $a0, $a0, 0x1F0
    ctx->r4 = ADD32(ctx->r4, 0X1F0);
        goto L_801CBFB4;
    // 0x801CBF6C: addiu       $a0, $a0, 0x1F0
    ctx->r4 = ADD32(ctx->r4, 0X1F0);
L_801CBF70:
    // 0x801CBF70: lui         $a0, 0x800
    ctx->r4 = S32(0X800 << 16);
    // 0x801CBF74: b           L_801CBFB4
    // 0x801CBF78: addiu       $a0, $a0, 0x350
    ctx->r4 = ADD32(ctx->r4, 0X350);
        goto L_801CBFB4;
    // 0x801CBF78: addiu       $a0, $a0, 0x350
    ctx->r4 = ADD32(ctx->r4, 0X350);
L_801CBF7C:
    // 0x801CBF7C: lui         $a0, 0x800
    ctx->r4 = S32(0X800 << 16);
    // 0x801CBF80: b           L_801CBFB4
    // 0x801CBF84: addiu       $a0, $a0, 0x4B0
    ctx->r4 = ADD32(ctx->r4, 0X4B0);
        goto L_801CBFB4;
    // 0x801CBF84: addiu       $a0, $a0, 0x4B0
    ctx->r4 = ADD32(ctx->r4, 0X4B0);
L_801CBF88:
    // 0x801CBF88: lui         $a0, 0x800
    ctx->r4 = S32(0X800 << 16);
    // 0x801CBF8C: b           L_801CBFB4
    // 0x801CBF90: addiu       $a0, $a0, 0x610
    ctx->r4 = ADD32(ctx->r4, 0X610);
        goto L_801CBFB4;
    // 0x801CBF90: addiu       $a0, $a0, 0x610
    ctx->r4 = ADD32(ctx->r4, 0X610);
L_801CBF94:
    // 0x801CBF94: lui         $a0, 0x800
    ctx->r4 = S32(0X800 << 16);
    // 0x801CBF98: b           L_801CBFB4
    // 0x801CBF9C: addiu       $a0, $a0, 0x8F0
    ctx->r4 = ADD32(ctx->r4, 0X8F0);
        goto L_801CBFB4;
    // 0x801CBF9C: addiu       $a0, $a0, 0x8F0
    ctx->r4 = ADD32(ctx->r4, 0X8F0);
L_801CBFA0:
    // 0x801CBFA0: lui         $a0, 0x800
    ctx->r4 = S32(0X800 << 16);
    // 0x801CBFA4: b           L_801CBFB4
    // 0x801CBFA8: addiu       $a0, $a0, 0xA50
    ctx->r4 = ADD32(ctx->r4, 0XA50);
        goto L_801CBFB4;
    // 0x801CBFA8: addiu       $a0, $a0, 0xA50
    ctx->r4 = ADD32(ctx->r4, 0XA50);
L_801CBFAC:
    // 0x801CBFAC: lui         $a0, 0x800
    ctx->r4 = S32(0X800 << 16);
    // 0x801CBFB0: addiu       $a0, $a0, 0xBB0
    ctx->r4 = ADD32(ctx->r4, 0XBB0);
L_801CBFB4:
    // 0x801CBFB4: lw          $t8, 0x38($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X38);
    // 0x801CBFB8: lui         $at, 0xF800
    ctx->r1 = S32(0XF800 << 16);
    // 0x801CBFBC: addu        $a0, $t8, $a0
    ctx->r4 = ADD32(ctx->r24, ctx->r4);
    // 0x801CBFC0: addu        $v0, $a0, $at
    ctx->r2 = ADD32(ctx->r4, ctx->r1);
    // 0x801CBFC4: jr          $ra
    // 0x801CBFC8: nop

    TRACE_RETURN()
    return;
    // 0x801CBFC8: nop

;}
RECOMP_FUNC void func_801D1B50_664A00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D1B50: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801D1B54: jr          $ra
    // 0x801D1B58: swc1        $f12, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f12.u32l;
    TRACE_RETURN()
    return;
    // 0x801D1B58: swc1        $f12, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_801D06F8_6635A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D06F8: bne         $a1, $zero, L_801D0724
    if (ctx->r5 != 0) {
        // 0x801D06FC: sw          $a1, 0x84($a0)
        MEM_W(0X84, ctx->r4) = ctx->r5;
            goto L_801D0724;
    }
    // 0x801D06FC: sw          $a1, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->r5;
    // 0x801D0700: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x801D0704: lw          $v1, 0x1C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1C);
    // 0x801D0708: andi        $t6, $v1, 0x1F
    ctx->r14 = ctx->r3 & 0X1F;
    // 0x801D070C: beq         $t6, $zero, L_801D074C
    if (ctx->r14 == 0) {
        // 0x801D0710: nop
    
            goto L_801D074C;
    }
    // 0x801D0710: nop

    // 0x801D0714: lw          $t7, 0x2C($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X2C);
    // 0x801D0718: addu        $t8, $v1, $t7
    ctx->r24 = ADD32(ctx->r3, ctx->r15);
    // 0x801D071C: jr          $ra
    // 0x801D0720: sw          $t8, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r24;
    TRACE_RETURN()
    return;
    // 0x801D0720: sw          $t8, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r24;
L_801D0724:
    // 0x801D0724: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x801D0728: lw          $t9, 0x1C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X1C);
    // 0x801D072C: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x801D0730: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x801D0734: addu        $t0, $t9, $a1
    ctx->r8 = ADD32(ctx->r25, ctx->r5);
    // 0x801D0738: bgez        $a1, L_801D0748
    if (SIGNED(ctx->r5) >= 0) {
        // 0x801D073C: sw          $t0, 0x1C($v0)
        MEM_W(0X1C, ctx->r2) = ctx->r8;
            goto L_801D0748;
    }
    // 0x801D073C: sw          $t0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r8;
    // 0x801D0740: jr          $ra
    // 0x801D0744: sw          $t1, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r9;
    TRACE_RETURN()
    return;
    // 0x801D0744: sw          $t1, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r9;
L_801D0748:
    // 0x801D0748: sw          $t2, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r10;
L_801D074C:
    // 0x801D074C: jr          $ra
    // 0x801D0750: nop

    TRACE_RETURN()
    return;
    // 0x801D0750: nop

;}
RECOMP_FUNC void func_801CCB70_65FA20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CCB70: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801CCB74: jr          $ra
    // 0x801CCB78: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801CCB78: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801CF57C_66242C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CF57C: lw          $t7, 0x14($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X14);
    // 0x801CF580: lw          $t0, 0x10($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X10);
    // 0x801CF584: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801CF588: addu        $t8, $a3, $t7
    ctx->r24 = ADD32(ctx->r7, ctx->r15);
    // 0x801CF58C: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x801CF590: slti        $at, $t9, 0xF0
    ctx->r1 = SIGNED(ctx->r25) < 0XF0 ? 1 : 0;
    // 0x801CF594: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x801CF598: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x801CF59C: bne         $at, $zero, L_801CF5B0
    if (ctx->r1 != 0) {
        // 0x801CF5A0: addiu       $t0, $t0, -0x1
        ctx->r8 = ADD32(ctx->r8, -0X1);
            goto L_801CF5B0;
    }
    // 0x801CF5A0: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x801CF5A4: addiu       $t4, $zero, 0xEF
    ctx->r12 = ADD32(0, 0XEF);
    // 0x801CF5A8: b           L_801CF5B8
    // 0x801CF5AC: subu        $t1, $t4, $a3
    ctx->r9 = SUB32(ctx->r12, ctx->r7);
        goto L_801CF5B8;
    // 0x801CF5AC: subu        $t1, $t4, $a3
    ctx->r9 = SUB32(ctx->r12, ctx->r7);
L_801CF5B0:
    // 0x801CF5B0: lw          $t1, 0x14($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X14);
    // 0x801CF5B4: addiu       $t1, $t1, -0x1
    ctx->r9 = ADD32(ctx->r9, -0X1);
L_801CF5B8:
    // 0x801CF5B8: lui         $t5, 0xFD10
    ctx->r13 = S32(0XFD10 << 16);
    // 0x801CF5BC: ori         $t5, $t5, 0x13F
    ctx->r13 = ctx->r13 | 0X13F;
    // 0x801CF5C0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x801CF5C4: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x801CF5C8: lw          $t8, 0xC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC);
    // 0x801CF5CC: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x801CF5D0: lw          $t5, -0x3A38($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X3A38);
    // 0x801CF5D4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x801CF5D8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x801CF5DC: lui         $t8, 0x4
    ctx->r24 = S32(0X4 << 16);
    // 0x801CF5E0: lw          $t7, 0x8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X8);
    // 0x801CF5E4: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x801CF5E8: lh          $t8, -0x5250($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X5250);
    // 0x801CF5EC: sll         $t9, $t9, 6
    ctx->r25 = S32(ctx->r25 << 6);
    // 0x801CF5F0: addu        $t4, $t7, $t9
    ctx->r12 = ADD32(ctx->r15, ctx->r25);
    // 0x801CF5F4: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x801CF5F8: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x801CF5FC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x801CF600: subu        $t7, $t7, $t8
    ctx->r15 = SUB32(ctx->r15, ctx->r24);
    // 0x801CF604: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x801CF608: sll         $t6, $t4, 1
    ctx->r14 = S32(ctx->r12 << 1);
    // 0x801CF60C: subu        $t7, $t7, $t8
    ctx->r15 = SUB32(ctx->r15, ctx->r24);
    // 0x801CF610: sll         $t7, $t7, 11
    ctx->r15 = S32(ctx->r15 << 11);
    // 0x801CF614: lui         $t4, 0x8026
    ctx->r12 = S32(0X8026 << 16);
    // 0x801CF618: addiu       $t4, $t4, 0x1000
    ctx->r12 = ADD32(ctx->r12, 0X1000);
    // 0x801CF61C: addu        $t9, $t7, $t6
    ctx->r25 = ADD32(ctx->r15, ctx->r14);
    // 0x801CF620: addu        $t5, $t9, $t4
    ctx->r13 = ADD32(ctx->r25, ctx->r12);
    // 0x801CF624: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x801CF628: sll         $t2, $t0, 1
    ctx->r10 = S32(ctx->r8 << 1);
    // 0x801CF62C: addiu       $t2, $t2, 0x9
    ctx->r10 = ADD32(ctx->r10, 0X9);
    // 0x801CF630: and         $t8, $t5, $at
    ctx->r24 = ctx->r13 & ctx->r1;
    // 0x801CF634: sra         $t7, $t2, 3
    ctx->r15 = S32(SIGNED(ctx->r10) >> 3);
    // 0x801CF638: andi        $t6, $t7, 0x1FF
    ctx->r14 = ctx->r15 & 0X1FF;
    // 0x801CF63C: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x801CF640: lui         $t5, 0x708
    ctx->r13 = S32(0X708 << 16);
    // 0x801CF644: ori         $t5, $t5, 0x200
    ctx->r13 = ctx->r13 | 0X200;
    // 0x801CF648: sll         $t9, $t6, 9
    ctx->r25 = S32(ctx->r14 << 9);
    // 0x801CF64C: lui         $at, 0xF510
    ctx->r1 = S32(0XF510 << 16);
    // 0x801CF650: or          $t2, $t9, $at
    ctx->r10 = ctx->r25 | ctx->r1;
    // 0x801CF654: sw          $t5, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r13;
    // 0x801CF658: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x801CF65C: addiu       $a1, $a0, 0x8
    ctx->r5 = ADD32(ctx->r4, 0X8);
    // 0x801CF660: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x801CF664: sll         $a3, $t0, 2
    ctx->r7 = S32(ctx->r8 << 2);
    // 0x801CF668: andi        $t6, $a3, 0xFFF
    ctx->r14 = ctx->r7 & 0XFFF;
    // 0x801CF66C: lui         $t8, 0xE600
    ctx->r24 = S32(0XE600 << 16);
    // 0x801CF670: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x801CF674: sll         $a3, $t6, 12
    ctx->r7 = S32(ctx->r14 << 12);
    // 0x801CF678: addiu       $a2, $a1, 0x8
    ctx->r6 = ADD32(ctx->r5, 0X8);
    // 0x801CF67C: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x801CF680: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x801CF684: andi        $t4, $t3, 0xFFF
    ctx->r12 = ctx->r11 & 0XFFF;
    // 0x801CF688: or          $t5, $a3, $at
    ctx->r13 = ctx->r7 | ctx->r1;
    // 0x801CF68C: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x801CF690: lui         $t7, 0xF400
    ctx->r15 = S32(0XF400 << 16);
    // 0x801CF694: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x801CF698: or          $t8, $t5, $t4
    ctx->r24 = ctx->r13 | ctx->r12;
    // 0x801CF69C: addiu       $v0, $a2, 0x8
    ctx->r2 = ADD32(ctx->r6, 0X8);
    // 0x801CF6A0: sw          $t8, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r24;
    // 0x801CF6A4: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x801CF6A8: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x801CF6AC: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x801CF6B0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x801CF6B4: lui         $t6, 0x8
    ctx->r14 = S32(0X8 << 16);
    // 0x801CF6B8: ori         $t6, $t6, 0x200
    ctx->r14 = ctx->r14 | 0X200;
    // 0x801CF6BC: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x801CF6C0: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    // 0x801CF6C4: addiu       $a0, $v1, 0x8
    ctx->r4 = ADD32(ctx->r3, 0X8);
    // 0x801CF6C8: or          $t4, $a3, $t4
    ctx->r12 = ctx->r7 | ctx->r12;
    // 0x801CF6CC: lui         $t9, 0xF200
    ctx->r25 = S32(0XF200 << 16);
    // 0x801CF6D0: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801CF6D4: sw          $t4, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r12;
    // 0x801CF6D8: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x801CF6DC: lw          $t5, 0x14($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X14);
    // 0x801CF6E0: addiu       $a2, $a0, 0x8
    ctx->r6 = ADD32(ctx->r4, 0X8);
    // 0x801CF6E4: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x801CF6E8: multu       $t5, $t8
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801CF6EC: or          $t7, $a3, $at
    ctx->r15 = ctx->r7 | ctx->r1;
    // 0x801CF6F0: addiu       $v1, $a2, 0x8
    ctx->r3 = ADD32(ctx->r6, 0X8);
    // 0x801CF6F4: addiu       $a1, $v1, 0x8
    ctx->r5 = ADD32(ctx->r3, 0X8);
    // 0x801CF6F8: addiu       $v0, $a1, 0x8
    ctx->r2 = ADD32(ctx->r5, 0X8);
    // 0x801CF6FC: mflo        $t0
    ctx->r8 = lo;
    // 0x801CF700: addu        $t6, $t0, $t5
    ctx->r14 = ADD32(ctx->r8, ctx->r13);
    // 0x801CF704: addiu       $t9, $t6, -0x1
    ctx->r25 = ADD32(ctx->r14, -0X1);
    // 0x801CF708: sll         $t4, $t9, 2
    ctx->r12 = S32(ctx->r25 << 2);
    // 0x801CF70C: andi        $t8, $t4, 0xFFF
    ctx->r24 = ctx->r12 & 0XFFF;
    // 0x801CF710: sll         $t6, $t0, 2
    ctx->r14 = S32(ctx->r8 << 2);
    // 0x801CF714: andi        $t9, $t6, 0xFFF
    ctx->r25 = ctx->r14 & 0XFFF;
    // 0x801CF718: or          $t5, $t7, $t8
    ctx->r13 = ctx->r15 | ctx->r24;
    // 0x801CF71C: sw          $t5, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r13;
    // 0x801CF720: sw          $t9, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r25;
    // 0x801CF724: lui         $t8, 0x1000
    ctx->r24 = S32(0X1000 << 16);
    // 0x801CF728: lui         $t4, 0xB400
    ctx->r12 = S32(0XB400 << 16);
    // 0x801CF72C: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x801CF730: ori         $t8, $t8, 0x400
    ctx->r24 = ctx->r24 | 0X400;
    // 0x801CF734: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x801CF738: lui         $t7, 0xB300
    ctx->r15 = S32(0XB300 << 16);
    // 0x801CF73C: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x801CF740: jr          $ra
    // 0x801CF744: sw          $t8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r24;
    TRACE_RETURN()
    return;
    // 0x801CF744: sw          $t8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r24;
;}
