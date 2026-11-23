#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_802279E0_6913C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802279E0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802279E4: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x802279E8: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x802279EC: swc1        $f12, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f12.u32l;
    // 0x802279F0: swc1        $f14, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f14.u32l;
    // 0x802279F4: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x802279F8: jr          $ra
    // 0x802279FC: swc1        $f4, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x802279FC: swc1        $f4, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_802132D8_67CCB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802132D8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x802132DC: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x802132E0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x802132E4: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x802132E8: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x802132EC: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x802132F0: addiu       $a1, $a1, 0x3264
    ctx->r5 = ADD32(ctx->r5, 0X3264);
    // 0x802132F4: jal         0x80034E08
    // 0x802132F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x802132F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x802132FC: bne         $v0, $zero, L_8021330C
    if (ctx->r2 != 0) {
        // 0x80213300: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8021330C;
    }
    // 0x80213300: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80213304: b           L_802133A4
    // 0x80213308: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802133A4;
    // 0x80213308: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8021330C:
    // 0x8021330C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80213310: lwc1        $f2, -0x574C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X574C);
    // 0x80213314: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80213318: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x8021331C: addiu       $a1, $a1, 0xB08
    ctx->r5 = ADD32(ctx->r5, 0XB08);
    // 0x80213320: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x80213324: lui         $a2, 0x8007
    ctx->r6 = S32(0X8007 << 16);
    // 0x80213328: addiu       $t6, $zero, 0x27B
    ctx->r14 = ADD32(0, 0X27B);
    // 0x8021332C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80213330: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x80213334: addiu       $a2, $a2, -0x2768
    ctx->r6 = ADD32(ctx->r6, -0X2768);
    // 0x80213338: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x8021333C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80213340: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80213344: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80213348: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x8021334C: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    // 0x80213350: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    // 0x80213354: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x80213358: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x8021335C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x80213360: jal         0x8000DBF0
    // 0x80213364: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x80213364: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x80213368: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8021336C: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x80213370: lw          $t7, 0x38($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X38);
    // 0x80213374: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x80213378: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8021337C: lui         $at, 0xF800
    ctx->r1 = S32(0XF800 << 16);
    // 0x80213380: lui         $t9, 0x800
    ctx->r25 = S32(0X800 << 16);
    // 0x80213384: swc1        $f6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f6.u32l;
    // 0x80213388: lwc1        $f8, 0x54($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8021338C: addiu       $t9, $t9, 0x2090
    ctx->r25 = ADD32(ctx->r25, 0X2090);
    // 0x80213390: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x80213394: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x80213398: sw          $t0, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->r8;
    // 0x8021339C: swc1        $f8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f8.u32l;
    // 0x802133A0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_802133A4:
    // 0x802133A4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x802133A8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x802133AC: jr          $ra
    // 0x802133B0: nop

    TRACE_RETURN()
    return;
    // 0x802133B0: nop

;}
RECOMP_FUNC void func_80229C08_6935E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229C08: lbu         $v0, 0x5C($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X5C);
    // 0x80229C0C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80229C10: beql        $v0, $zero, L_80229C2C
    if (ctx->r2 == 0) {
        // 0x80229C14: addiu       $v0, $a0, 0x5C
        ctx->r2 = ADD32(ctx->r4, 0X5C);
            goto L_80229C2C;
    }
    goto skip_0;
    // 0x80229C14: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    skip_0:
    // 0x80229C18: beq         $v0, $at, L_80229CB0
    if (ctx->r2 == ctx->r1) {
        // 0x80229C1C: nop
    
            goto L_80229CB0;
    }
    // 0x80229C1C: nop

    // 0x80229C20: jr          $ra
    // 0x80229C24: nop

    TRACE_RETURN()
    return;
    // 0x80229C24: nop

    // 0x80229C28: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
L_80229C2C:
    // 0x80229C2C: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80229C30: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80229C34: ldc1        $f8, -0x4D58($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X4D58);
    // 0x80229C38: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80229C3C: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80229C40: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x80229C44: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80229C48: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80229C4C: swc1        $f16, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f16.u32l;
    // 0x80229C50: lwc1        $f18, 0x8($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80229C54: lwc1        $f8, 0xC($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0XC);
    // 0x80229C58: lhu         $t6, 0x14($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X14);
    // 0x80229C5C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80229C60: lwc1        $f18, 0x10($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X10);
    // 0x80229C64: lhu         $t8, 0x18($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X18);
    // 0x80229C68: addiu       $t7, $t6, 0x10
    ctx->r15 = ADD32(ctx->r14, 0X10);
    // 0x80229C6C: swc1        $f6, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f6.u32l;
    // 0x80229C70: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80229C74: addiu       $t9, $t8, 0x4
    ctx->r25 = ADD32(ctx->r24, 0X4);
    // 0x80229C78: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80229C7C: swc1        $f16, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f16.u32l;
    // 0x80229C80: lwc1        $f8, 0xC($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0XC);
    // 0x80229C84: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80229C88: sh          $t7, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r15;
    // 0x80229C8C: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x80229C90: sh          $t9, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r25;
    // 0x80229C94: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80229C98: bc1f        L_80229CB0
    if (!c1cs) {
        // 0x80229C9C: swc1        $f6, 0x10($a1)
        MEM_W(0X10, ctx->r5) = ctx->f6.u32l;
            goto L_80229CB0;
    }
    // 0x80229C9C: swc1        $f6, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f6.u32l;
    // 0x80229CA0: swc1        $f0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f0.u32l;
    // 0x80229CA4: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x80229CA8: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
    // 0x80229CAC: swc1        $f0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f0.u32l;
L_80229CB0:
    // 0x80229CB0: jr          $ra
    // 0x80229CB4: nop

    TRACE_RETURN()
    return;
    // 0x80229CB4: nop

;}
RECOMP_FUNC void func_802142EC_67DCCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802142EC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802142F0: jr          $ra
    // 0x802142F4: swc1        $f12, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f12.u32l;
    TRACE_RETURN()
    return;
    // 0x802142F4: swc1        $f12, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_80226520_68FF00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226520: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80226524: jr          $ra
    // 0x80226528: swc1        $f12, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f12.u32l;
    TRACE_RETURN()
    return;
    // 0x80226528: swc1        $f12, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_8021DA38_687418(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021DA38: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8021DA3C: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x8021DA40: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8021DA44: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x8021DA48: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x8021DA4C: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x8021DA50: addiu       $a1, $a1, -0x2A24
    ctx->r5 = ADD32(ctx->r5, -0X2A24);
    // 0x8021DA54: jal         0x80034E08
    // 0x8021DA58: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x8021DA58: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8021DA5C: bne         $v0, $zero, L_8021DA6C
    if (ctx->r2 != 0) {
        // 0x8021DA60: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8021DA6C;
    }
    // 0x8021DA60: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8021DA64: b           L_8021DAEC
    // 0x8021DA68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021DAEC;
    // 0x8021DA68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8021DA6C:
    // 0x8021DA6C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021DA70: lwc1        $f0, -0x52D8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X52D8);
    // 0x8021DA74: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8021DA78: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8021DA7C: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x8021DA80: lui         $t7, 0x8023
    ctx->r15 = S32(0X8023 << 16);
    // 0x8021DA84: lui         $v0, 0x1000
    ctx->r2 = S32(0X1000 << 16);
    // 0x8021DA88: addiu       $t7, $t7, -0x5D90
    ctx->r15 = ADD32(ctx->r15, -0X5D90);
    // 0x8021DA8C: addiu       $t6, $t6, 0x1F90
    ctx->r14 = ADD32(ctx->r14, 0X1F90);
    // 0x8021DA90: addiu       $t8, $zero, 0x4E1
    ctx->r24 = ADD32(0, 0X4E1);
    // 0x8021DA94: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x8021DA98: addu        $a1, $v0, $t6
    ctx->r5 = ADD32(ctx->r2, ctx->r14);
    // 0x8021DA9C: or          $a2, $t7, $v0
    ctx->r6 = ctx->r15 | ctx->r2;
    // 0x8021DAA0: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x8021DAA4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8021DAA8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8021DAAC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8021DAB0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x8021DAB4: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    // 0x8021DAB8: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x8021DABC: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x8021DAC0: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x8021DAC4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8021DAC8: jal         0x8000DBF0
    // 0x8021DACC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x8021DACC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x8021DAD0: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x8021DAD4: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x8021DAD8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8021DADC: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x8021DAE0: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x8021DAE4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8021DAE8: swc1        $f8, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f8.u32l;
L_8021DAEC:
    // 0x8021DAEC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8021DAF0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8021DAF4: jr          $ra
    // 0x8021DAF8: nop

    TRACE_RETURN()
    return;
    // 0x8021DAF8: nop

;}
RECOMP_FUNC void func_80225D84_68F764(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225D84: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x80225D88: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80225D8C: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x80225D90: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80225D94: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
    // 0x80225D98: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80225D9C: jr          $ra
    // 0x80225DA0: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x80225DA0: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_8021DED0_6878B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021DED0: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8021DED4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8021DED8: lwc1        $f6, 0x6C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X6C);
    // 0x8021DEDC: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8021DEE0: swc1        $f12, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f12.u32l;
    // 0x8021DEE4: c.lt.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl < ctx->f6.fl;
    // 0x8021DEE8: swc1        $f14, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f14.u32l;
    // 0x8021DEEC: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x8021DEF0: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8021DEF4: bc1f        L_8021DF14
    if (!c1cs) {
        // 0x8021DEF8: swc1        $f4, 0x88($a0)
        MEM_W(0X88, ctx->r4) = ctx->f4.u32l;
            goto L_8021DF14;
    }
    // 0x8021DEF8: swc1        $f4, 0x88($a0)
    MEM_W(0X88, ctx->r4) = ctx->f4.u32l;
    // 0x8021DEFC: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8021DF00: lwc1        $f8, 0x14($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8021DF04: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021DF08: sub.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8021DF0C: b           L_8021DF20
    // 0x8021DF10: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8021DF20;
    // 0x8021DF10: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_8021DF14:
    // 0x8021DF14: lwc1        $f16, 0x14($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8021DF18: lwc1        $f18, 0x10($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021DF1C: sub.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f18.fl;
L_8021DF20:
    // 0x8021DF20: lwc1        $f14, 0x8($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8021DF24: lwc1        $f2, 0x20($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X20);
    // 0x8021DF28: lwc1        $f12, 0x1C($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x8021DF2C: div.s       $f4, $f0, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
    // 0x8021DF30: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x8021DF34: nop

    // 0x8021DF38: bc1f        L_8021DF4C
    if (!c1cs) {
        // 0x8021DF3C: swc1        $f4, 0x18($v0)
        MEM_W(0X18, ctx->r2) = ctx->f4.u32l;
            goto L_8021DF4C;
    }
    // 0x8021DF3C: swc1        $f4, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f4.u32l;
    // 0x8021DF40: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x8021DF44: b           L_8021DF50
    // 0x8021DF48: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8021DF50;
    // 0x8021DF48: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_8021DF4C:
    // 0x8021DF4C: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_8021DF50:
    // 0x8021DF50: div.s       $f6, $f0, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
    // 0x8021DF54: lwc1        $f2, 0x2C($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X2C);
    // 0x8021DF58: lwc1        $f12, 0x28($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X28);
    // 0x8021DF5C: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x8021DF60: nop

    // 0x8021DF64: bc1f        L_8021DF78
    if (!c1cs) {
        // 0x8021DF68: swc1        $f6, 0x24($v0)
        MEM_W(0X24, ctx->r2) = ctx->f6.u32l;
            goto L_8021DF78;
    }
    // 0x8021DF68: swc1        $f6, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f6.u32l;
    // 0x8021DF6C: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x8021DF70: b           L_8021DF7C
    // 0x8021DF74: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8021DF7C;
    // 0x8021DF74: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_8021DF78:
    // 0x8021DF78: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_8021DF7C:
    // 0x8021DF7C: div.s       $f8, $f0, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
    // 0x8021DF80: jr          $ra
    // 0x8021DF84: swc1        $f8, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x8021DF84: swc1        $f8, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_80215EFC_67F8DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80215EFC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80215F00: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x80215F04: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80215F08: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x80215F0C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80215F10: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x80215F14: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x80215F18: addiu       $a1, $a1, 0x5918
    ctx->r5 = ADD32(ctx->r5, 0X5918);
    // 0x80215F1C: jal         0x80034E08
    // 0x80215F20: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x80215F20: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80215F24: lwc1        $f12, 0x4C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80215F28: lwc1        $f14, 0x50($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80215F2C: lwc1        $f16, 0x54($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80215F30: bne         $v0, $zero, L_80215F40
    if (ctx->r2 != 0) {
        // 0x80215F34: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80215F40;
    }
    // 0x80215F34: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80215F38: b           L_8021611C
    // 0x80215F3C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021611C;
    // 0x80215F3C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80215F40:
    // 0x80215F40: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80215F44: lwc1        $f0, -0x5638($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5638);
    // 0x80215F48: swc1        $f16, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->f16.u32l;
    // 0x80215F4C: swc1        $f14, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f14.u32l;
    // 0x80215F50: swc1        $f12, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->f12.u32l;
    // 0x80215F54: lbu         $t6, 0x5B($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X5B);
    // 0x80215F58: lui         $t0, 0x8023
    ctx->r8 = S32(0X8023 << 16);
    // 0x80215F5C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80215F60: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80215F64: addiu       $t0, $t0, -0x4CDC
    ctx->r8 = ADD32(ctx->r8, -0X4CDC);
    // 0x80215F68: bgez        $t6, L_80215F80
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80215F6C: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80215F80;
    }
    // 0x80215F6C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80215F70: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80215F74: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80215F78: nop

    // 0x80215F7C: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_80215F80:
    // 0x80215F80: swc1        $f6, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->f6.u32l;
    // 0x80215F84: lbu         $t7, 0x5F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X5F);
    // 0x80215F88: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x80215F8C: addiu       $a1, $a1, 0x40
    ctx->r5 = ADD32(ctx->r5, 0X40);
    // 0x80215F90: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x80215F94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80215F98: bgez        $t7, L_80215FB0
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80215F9C: cvt.s.w     $f18, $f10
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
            goto L_80215FB0;
    }
    // 0x80215F9C: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80215FA0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80215FA4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80215FA8: nop

    // 0x80215FAC: add.s       $f18, $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f4.fl;
L_80215FB0:
    // 0x80215FB0: swc1        $f18, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->f18.u32l;
    // 0x80215FB4: lbu         $t8, 0x63($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X63);
    // 0x80215FB8: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x80215FBC: ori         $t6, $zero, 0x8000
    ctx->r14 = 0 | 0X8000;
    // 0x80215FC0: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x80215FC4: ori         $t7, $zero, 0x8000
    ctx->r15 = 0 | 0X8000;
    // 0x80215FC8: bgez        $t8, L_80215FE0
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80215FCC: cvt.s.w     $f6, $f8
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
            goto L_80215FE0;
    }
    // 0x80215FCC: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80215FD0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80215FD4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80215FD8: nop

    // 0x80215FDC: add.s       $f6, $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f10.fl;
L_80215FE0:
    // 0x80215FE0: swc1        $f6, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->f6.u32l;
    // 0x80215FE4: lbu         $t9, 0x67($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X67);
    // 0x80215FE8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80215FEC: ori         $t8, $zero, 0x8000
    ctx->r24 = 0 | 0X8000;
    // 0x80215FF0: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x80215FF4: bgez        $t9, L_80216008
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80215FF8: cvt.s.w     $f18, $f4
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80216008;
    }
    // 0x80215FF8: cvt.s.w     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80215FFC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80216000: nop

    // 0x80216004: add.s       $f18, $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f8.fl;
L_80216008:
    // 0x80216008: swc1        $f18, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f18.u32l;
    // 0x8021600C: swc1        $f0, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->f0.u32l;
    // 0x80216010: swc1        $f2, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f2.u32l;
    // 0x80216014: lw          $a2, 0x0($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X0);
    // 0x80216018: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8021601C: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x80216020: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x80216024: addiu       $t9, $zero, 0x4DA
    ctx->r25 = ADD32(0, 0X4DA);
    // 0x80216028: or          $t5, $a2, $at
    ctx->r13 = ctx->r6 | ctx->r1;
    // 0x8021602C: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    // 0x80216030: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x80216034: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x80216038: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x8021603C: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x80216040: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80216044: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x80216048: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x8021604C: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x80216050: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x80216054: jal         0x8000DBF0
    // 0x80216058: swc1        $f14, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f14.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x80216058: swc1        $f14, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f14.u32l;
    after_1:
    // 0x8021605C: addiu       $a2, $s0, 0x5C
    ctx->r6 = ADD32(ctx->r16, 0X5C);
    // 0x80216060: sw          $v0, 0x38($a2)
    MEM_W(0X38, ctx->r6) = ctx->r2;
    // 0x80216064: lbu         $t5, 0x5($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X5);
    // 0x80216068: lui         $t0, 0x8023
    ctx->r8 = S32(0X8023 << 16);
    // 0x8021606C: addiu       $t0, $t0, -0x4CDC
    ctx->r8 = ADD32(ctx->r8, -0X4CDC);
    // 0x80216070: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80216074: sb          $t6, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r14;
    // 0x80216078: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x8021607C: lui         $t9, 0x8023
    ctx->r25 = S32(0X8023 << 16);
    // 0x80216080: addiu       $t9, $t9, -0x60E0
    ctx->r25 = ADD32(ctx->r25, -0X60E0);
    // 0x80216084: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x80216088: sw          $t7, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r15;
    // 0x8021608C: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x80216090: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80216094: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x80216098: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x8021609C: lui         $t6, 0xFB00
    ctx->r14 = S32(0XFB00 << 16);
    // 0x802160A0: lui         $t4, 0x8FFF
    ctx->r12 = S32(0X8FFF << 16);
    // 0x802160A4: addiu       $t5, $v1, 0x8
    ctx->r13 = ADD32(ctx->r3, 0X8);
    // 0x802160A8: sw          $t5, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r13;
    // 0x802160AC: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x802160B0: lbu         $t6, 0x5F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X5F);
    // 0x802160B4: lbu         $t8, 0x5B($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X5B);
    // 0x802160B8: lui         $t5, 0xB800
    ctx->r13 = S32(0XB800 << 16);
    // 0x802160BC: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x802160C0: lbu         $t6, 0x63($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X63);
    // 0x802160C4: sll         $t9, $t8, 24
    ctx->r25 = S32(ctx->r24 << 24);
    // 0x802160C8: or          $t8, $t9, $t7
    ctx->r24 = ctx->r25 | ctx->r15;
    // 0x802160CC: sll         $t9, $t6, 8
    ctx->r25 = S32(ctx->r14 << 8);
    // 0x802160D0: lbu         $t6, 0x67($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X67);
    // 0x802160D4: or          $t7, $t8, $t9
    ctx->r15 = ctx->r24 | ctx->r25;
    // 0x802160D8: ori         $t4, $t4, 0xFFFF
    ctx->r12 = ctx->r12 | 0XFFFF;
    // 0x802160DC: or          $t8, $t7, $t6
    ctx->r24 = ctx->r15 | ctx->r14;
    // 0x802160E0: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x802160E4: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x802160E8: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x802160EC: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x802160F0: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x802160F4: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x802160F8: lw          $t7, 0x38($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X38);
    // 0x802160FC: lw          $t6, 0x0($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X0);
    // 0x80216100: lw          $t3, 0x30($t7)
    ctx->r11 = MEM_W(ctx->r15, 0X30);
    // 0x80216104: subu        $t8, $t4, $t3
    ctx->r24 = SUB32(ctx->r12, ctx->r11);
    // 0x80216108: and         $t9, $t6, $t8
    ctx->r25 = ctx->r14 & ctx->r24;
    // 0x8021610C: and         $a1, $t9, $t4
    ctx->r5 = ctx->r25 & ctx->r12;
    // 0x80216110: jal         0x80040620
    // 0x80216114: and         $a0, $t3, $t4
    ctx->r4 = ctx->r11 & ctx->r12;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_2;
    // 0x80216114: and         $a0, $t3, $t4
    ctx->r4 = ctx->r11 & ctx->r12;
    after_2:
    // 0x80216118: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_8021611C:
    // 0x8021611C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80216120: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x80216124: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80216128: jr          $ra
    // 0x8021612C: nop

    TRACE_RETURN()
    return;
    // 0x8021612C: nop

;}
RECOMP_FUNC void func_80212310_67BCF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80212310: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80212314: nop

    // 0x80212318: swc1        $f0, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f0.u32l;
    // 0x8021231C: jr          $ra
    // 0x80212320: swc1        $f0, 0x88($a0)
    MEM_W(0X88, ctx->r4) = ctx->f0.u32l;
    TRACE_RETURN()
    return;
    // 0x80212320: swc1        $f0, 0x88($a0)
    MEM_W(0X88, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_80225D78_68F758(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225D78: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80225D7C: jr          $ra
    // 0x80225D80: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x80225D80: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_80227CB8_691698(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227CB8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80227CBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227CC0: lbu         $t6, 0x5C($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X5C);
    // 0x80227CC4: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80227CC8: bnel        $t6, $zero, L_80227E0C
    if (ctx->r14 != 0) {
        // 0x80227CCC: lwc1        $f10, 0x70($a1)
        ctx->f10.u32l = MEM_W(ctx->r5, 0X70);
            goto L_80227E0C;
    }
    goto skip_0;
    // 0x80227CCC: lwc1        $f10, 0x70($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X70);
    skip_0:
    // 0x80227CD0: lwc1        $f14, 0x14($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X14);
    // 0x80227CD4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227CD8: ldc1        $f16, -0x4E18($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0X4E18);
    // 0x80227CDC: cvt.d.s     $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f4.d = CVT_D_S(ctx->f14.fl);
    // 0x80227CE0: c.lt.d      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.d < ctx->f4.d;
    // 0x80227CE4: nop

    // 0x80227CE8: bc1fl       L_80227D60
    if (!c1cs) {
        // 0x80227CEC: lwc1        $f14, 0x2C($v0)
        ctx->f14.u32l = MEM_W(ctx->r2, 0X2C);
            goto L_80227D60;
    }
    goto skip_1;
    // 0x80227CEC: lwc1        $f14, 0x2C($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X2C);
    skip_1:
    // 0x80227CF0: lwc1        $f12, 0x10($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80227CF4: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80227CF8: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x80227CFC: nop

    // 0x80227D00: bc1fl       L_80227D18
    if (!c1cs) {
        // 0x80227D04: sub.s       $f2, $f12, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
            goto L_80227D18;
    }
    goto skip_2;
    // 0x80227D04: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
    skip_2:
    // 0x80227D08: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x80227D0C: b           L_80227D18
    // 0x80227D10: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_80227D18;
    // 0x80227D10: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x80227D14: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
L_80227D18:
    // 0x80227D18: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    // 0x80227D1C: nop

    // 0x80227D20: bc1fl       L_80227D3C
    if (!c1cs) {
        // 0x80227D24: c.lt.s      $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
            goto L_80227D3C;
    }
    goto skip_3;
    // 0x80227D24: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    skip_3:
    // 0x80227D28: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80227D2C: swc1        $f12, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f12.u32l;
    // 0x80227D30: b           L_80227D5C
    // 0x80227D34: swc1        $f6, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f6.u32l;
        goto L_80227D5C;
    // 0x80227D34: swc1        $f6, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f6.u32l;
    // 0x80227D38: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
L_80227D3C:
    // 0x80227D3C: nop

    // 0x80227D40: bc1fl       L_80227D58
    if (!c1cs) {
        // 0x80227D44: add.s       $f10, $f0, $f14
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f14.fl;
            goto L_80227D58;
    }
    goto skip_4;
    // 0x80227D44: add.s       $f10, $f0, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f14.fl;
    skip_4:
    // 0x80227D48: sub.s       $f8, $f0, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f14.fl;
    // 0x80227D4C: b           L_80227D5C
    // 0x80227D50: swc1        $f8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f8.u32l;
        goto L_80227D5C;
    // 0x80227D50: swc1        $f8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f8.u32l;
    // 0x80227D54: add.s       $f10, $f0, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f14.fl;
L_80227D58:
    // 0x80227D58: swc1        $f10, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f10.u32l;
L_80227D5C:
    // 0x80227D5C: lwc1        $f14, 0x2C($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X2C);
L_80227D60:
    // 0x80227D60: cvt.d.s     $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f18.d = CVT_D_S(ctx->f14.fl);
    // 0x80227D64: c.lt.d      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.d < ctx->f18.d;
    // 0x80227D68: nop

    // 0x80227D6C: bc1fl       L_80227DE4
    if (!c1cs) {
        // 0x80227D70: lh          $v1, 0x32($v0)
        ctx->r3 = MEM_H(ctx->r2, 0X32);
            goto L_80227DE4;
    }
    goto skip_5;
    // 0x80227D70: lh          $v1, 0x32($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X32);
    skip_5:
    // 0x80227D74: lwc1        $f12, 0x28($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X28);
    // 0x80227D78: lwc1        $f0, 0x24($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X24);
    // 0x80227D7C: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x80227D80: nop

    // 0x80227D84: bc1fl       L_80227D9C
    if (!c1cs) {
        // 0x80227D88: sub.s       $f2, $f12, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
            goto L_80227D9C;
    }
    goto skip_6;
    // 0x80227D88: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
    skip_6:
    // 0x80227D8C: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x80227D90: b           L_80227D9C
    // 0x80227D94: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_80227D9C;
    // 0x80227D94: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x80227D98: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
L_80227D9C:
    // 0x80227D9C: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    // 0x80227DA0: nop

    // 0x80227DA4: bc1fl       L_80227DC0
    if (!c1cs) {
        // 0x80227DA8: c.lt.s      $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
            goto L_80227DC0;
    }
    goto skip_7;
    // 0x80227DA8: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    skip_7:
    // 0x80227DAC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80227DB0: swc1        $f12, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f12.u32l;
    // 0x80227DB4: b           L_80227DE0
    // 0x80227DB8: swc1        $f4, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f4.u32l;
        goto L_80227DE0;
    // 0x80227DB8: swc1        $f4, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f4.u32l;
    // 0x80227DBC: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
L_80227DC0:
    // 0x80227DC0: nop

    // 0x80227DC4: bc1fl       L_80227DDC
    if (!c1cs) {
        // 0x80227DC8: add.s       $f8, $f0, $f14
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f14.fl;
            goto L_80227DDC;
    }
    goto skip_8;
    // 0x80227DC8: add.s       $f8, $f0, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f14.fl;
    skip_8:
    // 0x80227DCC: sub.s       $f6, $f0, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f14.fl;
    // 0x80227DD0: b           L_80227DE0
    // 0x80227DD4: swc1        $f6, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f6.u32l;
        goto L_80227DE0;
    // 0x80227DD4: swc1        $f6, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f6.u32l;
    // 0x80227DD8: add.s       $f8, $f0, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f14.fl;
L_80227DDC:
    // 0x80227DDC: swc1        $f8, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f8.u32l;
L_80227DE0:
    // 0x80227DE0: lh          $v1, 0x32($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X32);
L_80227DE4:
    // 0x80227DE4: beql        $v1, $zero, L_80227E0C
    if (ctx->r3 == 0) {
        // 0x80227DE8: lwc1        $f10, 0x70($a1)
        ctx->f10.u32l = MEM_W(ctx->r5, 0X70);
            goto L_80227E0C;
    }
    goto skip_9;
    // 0x80227DE8: lwc1        $f10, 0x70($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X70);
    skip_9:
    // 0x80227DEC: lhu         $t7, 0x30($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X30);
    // 0x80227DF0: lh          $t8, 0x34($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X34);
    // 0x80227DF4: addiu       $t1, $v1, -0x1
    ctx->r9 = ADD32(ctx->r3, -0X1);
    // 0x80227DF8: sh          $t1, 0x32($v0)
    MEM_H(0X32, ctx->r2) = ctx->r9;
    // 0x80227DFC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80227E00: andi        $t0, $t9, 0x3FF
    ctx->r8 = ctx->r25 & 0X3FF;
    // 0x80227E04: sh          $t0, 0x30($v0)
    MEM_H(0X30, ctx->r2) = ctx->r8;
    // 0x80227E08: lwc1        $f10, 0x70($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X70);
L_80227E0C:
    // 0x80227E0C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227E10: ldc1        $f4, -0x4E10($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X4E10);
    // 0x80227E14: cvt.d.s     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f18.d = CVT_D_S(ctx->f10.fl);
    // 0x80227E18: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80227E1C: c.lt.d      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.d < ctx->f4.d;
    // 0x80227E20: nop

    // 0x80227E24: bc1fl       L_80227E98
    if (!c1cs) {
        // 0x80227E28: lhu         $t3, 0x30($v0)
        ctx->r11 = MEM_HU(ctx->r2, 0X30);
            goto L_80227E98;
    }
    goto skip_10;
    // 0x80227E28: lhu         $t3, 0x30($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X30);
    skip_10:
    // 0x80227E2C: lwc1        $f6, 0x28($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X28);
    // 0x80227E30: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80227E34: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80227E38: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80227E3C: swc1        $f10, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f10.u32l;
    // 0x80227E40: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80227E44: jal         0x8001B5AC
    // 0x80227E48: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_0;
    // 0x80227E48: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_0:
    // 0x80227E4C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80227E50: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80227E54: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x80227E58: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x80227E5C: sub.s       $f2, $f0, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f18.fl;
    // 0x80227E60: lwc1        $f4, 0x28($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X28);
    // 0x80227E64: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x80227E68: nop

    // 0x80227E6C: bc1fl       L_80227E98
    if (!c1cs) {
        // 0x80227E70: lhu         $t3, 0x30($v0)
        ctx->r11 = MEM_HU(ctx->r2, 0X30);
            goto L_80227E98;
    }
    goto skip_11;
    // 0x80227E70: lhu         $t3, 0x30($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X30);
    skip_11:
    // 0x80227E74: lbu         $t2, 0x1($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X1);
    // 0x80227E78: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80227E7C: bnel        $t2, $at, L_80227E94
    if (ctx->r10 != ctx->r1) {
        // 0x80227E80: swc1        $f2, 0x28($a1)
        MEM_W(0X28, ctx->r5) = ctx->f2.u32l;
            goto L_80227E94;
    }
    goto skip_12;
    // 0x80227E80: swc1        $f2, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f2.u32l;
    skip_12:
    // 0x80227E84: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80227E88: b           L_80227E94
    // 0x80227E8C: swc1        $f6, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f6.u32l;
        goto L_80227E94;
    // 0x80227E8C: swc1        $f6, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f6.u32l;
    // 0x80227E90: swc1        $f2, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f2.u32l;
L_80227E94:
    // 0x80227E94: lhu         $t3, 0x30($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X30);
L_80227E98:
    // 0x80227E98: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80227E9C: sh          $t3, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r11;
    // 0x80227EA0: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80227EA4: addiu       $t3, $zero, 0x80
    ctx->r11 = ADD32(0, 0X80);
    // 0x80227EA8: swc1        $f8, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f8.u32l;
    // 0x80227EAC: lwc1        $f10, 0x18($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X18);
    // 0x80227EB0: swc1        $f10, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f10.u32l;
    // 0x80227EB4: lwc1        $f18, 0x24($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X24);
    // 0x80227EB8: swc1        $f18, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f18.u32l;
    // 0x80227EBC: lw          $t4, 0x38($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X38);
    // 0x80227EC0: swc1        $f4, 0x20($t4)
    MEM_W(0X20, ctx->r12) = ctx->f4.u32l;
    // 0x80227EC4: lw          $t6, 0x38($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X38);
    // 0x80227EC8: lhu         $t5, 0x30($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X30);
    // 0x80227ECC: sh          $t5, 0x16($t6)
    MEM_H(0X16, ctx->r14) = ctx->r13;
    // 0x80227ED0: lw          $t7, 0x38($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X38);
    // 0x80227ED4: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80227ED8: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x80227EDC: lui         $t6, 0xC
    ctx->r14 = S32(0XC << 16);
    // 0x80227EE0: swc1        $f6, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f6.u32l;
    // 0x80227EE4: lw          $t8, 0x38($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X38);
    // 0x80227EE8: lwc1        $f8, 0x18($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X18);
    // 0x80227EEC: swc1        $f8, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->f8.u32l;
    // 0x80227EF0: lw          $t9, 0x38($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X38);
    // 0x80227EF4: lwc1        $f10, 0x24($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X24);
    // 0x80227EF8: swc1        $f10, 0x10($t9)
    MEM_W(0X10, ctx->r25) = ctx->f10.u32l;
    // 0x80227EFC: lw          $t0, 0x38($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X38);
    // 0x80227F00: lw          $at, 0x34($a1)
    ctx->r1 = MEM_W(ctx->r5, 0X34);
    // 0x80227F04: sw          $at, 0x34($t0)
    MEM_W(0X34, ctx->r8) = ctx->r1;
    // 0x80227F08: lw          $t2, 0x38($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X38);
    // 0x80227F0C: sw          $t2, 0x38($t0)
    MEM_W(0X38, ctx->r8) = ctx->r10;
    // 0x80227F10: lw          $t4, 0x38($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X38);
    // 0x80227F14: sh          $t3, 0x3C($t4)
    MEM_H(0X3C, ctx->r12) = ctx->r11;
    // 0x80227F18: lw          $t5, -0x3A38($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X3A38);
    // 0x80227F1C: lw          $t7, 0x38($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X38);
    // 0x80227F20: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80227F24: lhu         $t6, 0x2D90($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X2D90);
    // 0x80227F28: sh          $t6, 0x44($t7)
    MEM_H(0X44, ctx->r15) = ctx->r14;
    // 0x80227F2C: lw          $t8, 0x38($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X38);
    // 0x80227F30: sh          $zero, 0x4C($t8)
    MEM_H(0X4C, ctx->r24) = 0;
    // 0x80227F34: lw          $t9, 0x38($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X38);
    // 0x80227F38: sh          $zero, 0x54($t9)
    MEM_H(0X54, ctx->r25) = 0;
    // 0x80227F3C: lw          $t1, 0x38($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X38);
    // 0x80227F40: sh          $zero, 0x5C($t1)
    MEM_H(0X5C, ctx->r9) = 0;
    // 0x80227F44: lw          $a0, 0x38($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X38);
    // 0x80227F48: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80227F4C: jal         0x80014218
    // 0x80227F50: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80014218_14E18(rdram, ctx);
        goto after_1;
    // 0x80227F50: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x80227F54: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x80227F58: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x80227F5C: lui         $t4, 0x8020
    ctx->r12 = S32(0X8020 << 16);
    // 0x80227F60: lw          $t0, 0x2C($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X2C);
    // 0x80227F64: lw          $t3, 0x38($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X38);
    // 0x80227F68: addiu       $t2, $t0, 0x1
    ctx->r10 = ADD32(ctx->r8, 0X1);
    // 0x80227F6C: sw          $t2, 0x2C($t3)
    MEM_W(0X2C, ctx->r11) = ctx->r10;
    // 0x80227F70: lw          $t4, -0x39E4($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X39E4);
    // 0x80227F74: lw          $t6, 0x38($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X38);
    // 0x80227F78: lw          $t5, 0x30($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X30);
    // 0x80227F7C: sw          $t5, 0x30($t6)
    MEM_W(0X30, ctx->r14) = ctx->r13;
    // 0x80227F80: lwc1        $f18, 0x28($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X28);
    // 0x80227F84: lw          $t7, 0x38($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X38);
    // 0x80227F88: swc1        $f18, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f18.u32l;
    // 0x80227F8C: lwc1        $f4, 0x70($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X70);
    // 0x80227F90: lw          $t8, 0x38($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X38);
    // 0x80227F94: swc1        $f4, 0x70($t8)
    MEM_W(0X70, ctx->r24) = ctx->f4.u32l;
    // 0x80227F98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227F9C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80227FA0: jr          $ra
    // 0x80227FA4: nop

    TRACE_RETURN()
    return;
    // 0x80227FA4: nop

;}
RECOMP_FUNC void func_802291F8_692BD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802291F8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802291FC: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x80229200: swc1        $f12, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f12.u32l;
    // 0x80229204: lw          $v0, 0x90($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X90);
    // 0x80229208: lwc1        $f0, 0x24($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X24);
    // 0x8022920C: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x80229210: lw          $t7, 0x90($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X90);
    // 0x80229214: jr          $ra
    // 0x80229218: swc1        $f0, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f0.u32l;
    TRACE_RETURN()
    return;
    // 0x80229218: swc1        $f0, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_8021EEB0_688890(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021EEB0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8021EEB4: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8021EEB8: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8021EEBC: swc1        $f12, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f12.u32l;
    // 0x8021EEC0: swc1        $f14, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f14.u32l;
    // 0x8021EEC4: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x8021EEC8: jr          $ra
    // 0x8021EECC: swc1        $f4, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x8021EECC: swc1        $f4, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_80224110_68DAF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80224110: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80224114: lw          $t6, 0xB8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XB8);
    // 0x80224118: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8022411C: swc1        $f12, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f12.u32l;
    // 0x80224120: lw          $v0, 0xB8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XB8);
    // 0x80224124: lwc1        $f0, 0x24($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X24);
    // 0x80224128: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x8022412C: lw          $t7, 0xB8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XB8);
    // 0x80224130: swc1        $f0, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f0.u32l;
    // 0x80224134: jr          $ra
    // 0x80224138: swc1        $f4, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x80224138: swc1        $f4, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_80217BAC_68158C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80217BAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80217BB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80217BB4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80217BB8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80217BBC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80217BC0: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x80217BC4: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80217BC8: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80217BCC: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80217BD0: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80217BD4: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80217BD8: jal         0x800040A8
    // 0x80217BDC: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    func_800040A8_4CA8(rdram, ctx);
        goto after_0;
    // 0x80217BDC: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    after_0:
    // 0x80217BE0: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x80217BE4: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80217BE8: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80217BEC: lwc1        $f16, 0x5C($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X5C);
    // 0x80217BF0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80217BF4: lhu         $t1, 0x68($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X68);
    // 0x80217BF8: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80217BFC: andi        $t9, $v0, 0x3FF
    ctx->r25 = ctx->r2 & 0X3FF;
    // 0x80217C00: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x80217C04: andi        $t0, $t9, 0xFFFF
    ctx->r8 = ctx->r25 & 0XFFFF;
    // 0x80217C08: subu        $t2, $t0, $t1
    ctx->r10 = SUB32(ctx->r8, ctx->r9);
    // 0x80217C0C: addiu       $v1, $v1, 0x5C
    ctx->r3 = ADD32(ctx->r3, 0X5C);
    // 0x80217C10: trunc.w.d   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_D(ctx->f6.d);
    // 0x80217C14: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x80217C18: nop

    // 0x80217C1C: sh          $t8, 0xE($v1)
    MEM_H(0XE, ctx->r3) = ctx->r24;
    // 0x80217C20: lh          $t3, 0xE($v1)
    ctx->r11 = MEM_H(ctx->r3, 0XE);
    // 0x80217C24: div         $zero, $t2, $t3
    lo = S32(S64(S32(ctx->r10)) / S64(S32(ctx->r11))); hi = S32(S64(S32(ctx->r10)) % S64(S32(ctx->r11)));
    // 0x80217C28: mflo        $t4
    ctx->r12 = lo;
    // 0x80217C2C: sh          $t4, 0x10($v1)
    MEM_H(0X10, ctx->r3) = ctx->r12;
    // 0x80217C30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80217C34: bne         $t3, $zero, L_80217C40
    if (ctx->r11 != 0) {
        // 0x80217C38: nop
    
            goto L_80217C40;
    }
    // 0x80217C38: nop

    // 0x80217C3C: break       7
    do_break(2149678140);
L_80217C40:
    // 0x80217C40: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80217C44: bne         $t3, $at, L_80217C58
    if (ctx->r11 != ctx->r1) {
        // 0x80217C48: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80217C58;
    }
    // 0x80217C48: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80217C4C: bne         $t2, $at, L_80217C58
    if (ctx->r10 != ctx->r1) {
        // 0x80217C50: nop
    
            goto L_80217C58;
    }
    // 0x80217C50: nop

    // 0x80217C54: break       6
    do_break(2149678164);
L_80217C58:
    // 0x80217C58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80217C5C: jr          $ra
    // 0x80217C60: nop

    TRACE_RETURN()
    return;
    // 0x80217C60: nop

;}
RECOMP_FUNC void func_80225B00_68F4E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225B00: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80225B04: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80225B08: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x80225B0C: swc1        $f12, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f12.u32l;
    // 0x80225B10: swc1        $f14, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f14.u32l;
    // 0x80225B14: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x80225B18: jr          $ra
    // 0x80225B1C: swc1        $f4, 0x88($a0)
    MEM_W(0X88, ctx->r4) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x80225B1C: swc1        $f4, 0x88($a0)
    MEM_W(0X88, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_80227298_690C78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227298: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8022729C: nop

    // 0x802272A0: swc1        $f0, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f0.u32l;
    // 0x802272A4: jr          $ra
    // 0x802272A8: swc1        $f0, 0x88($a0)
    MEM_W(0X88, ctx->r4) = ctx->f0.u32l;
    TRACE_RETURN()
    return;
    // 0x802272A8: swc1        $f0, 0x88($a0)
    MEM_W(0X88, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_802147AC_67E18C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802147AC: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x802147B0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802147B4: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x802147B8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802147BC: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x802147C0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x802147C4: cvt.w.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    ctx->f4.u32l = CVT_W_S(ctx->f12.fl);
    // 0x802147C8: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x802147CC: nop

    // 0x802147D0: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x802147D4: beql        $t7, $zero, L_80214824
    if (ctx->r15 == 0) {
        // 0x802147D8: mfc1        $t7, $f4
        ctx->r15 = (int32_t)ctx->f4.u32l;
            goto L_80214824;
    }
    goto skip_0;
    // 0x802147D8: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    skip_0:
    // 0x802147DC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802147E0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802147E4: sub.s       $f4, $f12, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f12.fl - ctx->f4.fl;
    // 0x802147E8: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x802147EC: nop

    // 0x802147F0: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x802147F4: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x802147F8: nop

    // 0x802147FC: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x80214800: bne         $t7, $zero, L_80214818
    if (ctx->r15 != 0) {
        // 0x80214804: nop
    
            goto L_80214818;
    }
    // 0x80214804: nop

    // 0x80214808: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x8021480C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80214810: b           L_80214830
    // 0x80214814: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_80214830;
    // 0x80214814: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_80214818:
    // 0x80214818: b           L_80214830
    // 0x8021481C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_80214830;
    // 0x8021481C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x80214820: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
L_80214824:
    // 0x80214824: nop

    // 0x80214828: bltz        $t7, L_80214818
    if (SIGNED(ctx->r15) < 0) {
        // 0x8021482C: nop
    
            goto L_80214818;
    }
    // 0x8021482C: nop

L_80214830:
    // 0x80214830: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80214834: jr          $ra
    // 0x80214838: sh          $t7, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r15;
    TRACE_RETURN()
    return;
    // 0x80214838: sh          $t7, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r15;
;}
RECOMP_FUNC void func_80212D78_67C758(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80212D78: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x80212D7C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80212D80: sb          $v1, 0x64($v0)
    MEM_B(0X64, ctx->r2) = ctx->r3;
    // 0x80212D84: lw          $t6, 0x94($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X94);
    // 0x80212D88: jr          $ra
    // 0x80212D8C: sb          $v1, 0x64($t6)
    MEM_B(0X64, ctx->r14) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x80212D8C: sb          $v1, 0x64($t6)
    MEM_B(0X64, ctx->r14) = ctx->r3;
;}
RECOMP_FUNC void func_8021F864_689244(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021F864: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8021F868: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021F86C: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8021F870: lui         $t7, 0x8023
    ctx->r15 = S32(0X8023 << 16);
    // 0x8021F874: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021F878: addiu       $t7, $t7, -0x5C50
    ctx->r15 = ADD32(ctx->r15, -0X5C50);
    // 0x8021F87C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8021F880: jal         0x80013AC4
    // 0x8021F884: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8021F884: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    after_0:
    // 0x8021F888: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021F88C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8021F890: jr          $ra
    // 0x8021F894: nop

    TRACE_RETURN()
    return;
    // 0x8021F894: nop

;}
RECOMP_FUNC void func_8021C2B4_685C94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021C2B4: lw          $t6, 0x7C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X7C);
    // 0x8021C2B8: lwc1        $f4, 0x8($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8);
    // 0x8021C2BC: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x8021C2C0: lw          $t7, 0x7C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X7C);
    // 0x8021C2C4: lwc1        $f6, 0xC($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0XC);
    // 0x8021C2C8: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
    // 0x8021C2CC: lw          $t8, 0x7C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X7C);
    // 0x8021C2D0: lwc1        $f8, 0x10($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X10);
    // 0x8021C2D4: jr          $ra
    // 0x8021C2D8: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x8021C2D8: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_8020D4B8_676E98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020D4B8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8020D4BC: jr          $ra
    // 0x8020D4C0: swc1        $f12, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f12.u32l;
    TRACE_RETURN()
    return;
    // 0x8020D4C0: swc1        $f12, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_8021B318_684CF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021B318: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x8021B31C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8021B320: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8021B324: bgez        $t6, L_8021B33C
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8021B328: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8021B33C;
    }
    // 0x8021B328: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8021B32C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8021B330: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8021B334: nop

    // 0x8021B338: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_8021B33C:
    // 0x8021B33C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8021B340: swc1        $f6, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->f6.u32l;
    // 0x8021B344: jr          $ra
    // 0x8021B348: sb          $t7, 0x5E($a0)
    MEM_B(0X5E, ctx->r4) = ctx->r15;
    TRACE_RETURN()
    return;
    // 0x8021B348: sb          $t7, 0x5E($a0)
    MEM_B(0X5E, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_8021C2DC_685CBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021C2DC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8021C2E0: lwc1        $f4, 0x6C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X6C);
    // 0x8021C2E4: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8021C2E8: swc1        $f12, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f12.u32l;
    // 0x8021C2EC: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x8021C2F0: nop

    // 0x8021C2F4: bc1fl       L_8021C318
    if (!c1cs) {
        // 0x8021C2F8: lwc1        $f10, 0x18($v0)
        ctx->f10.u32l = MEM_W(ctx->r2, 0X18);
            goto L_8021C318;
    }
    goto skip_0;
    // 0x8021C2F8: lwc1        $f10, 0x18($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X18);
    skip_0:
    // 0x8021C2FC: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8021C300: lwc1        $f6, 0x18($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X18);
    // 0x8021C304: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021C308: sub.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8021C30C: b           L_8021C320
    // 0x8021C310: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8021C320;
    // 0x8021C310: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x8021C314: lwc1        $f10, 0x18($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X18);
L_8021C318:
    // 0x8021C318: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021C31C: sub.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f16.fl;
L_8021C320:
    // 0x8021C320: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8021C324: div.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f18.fl);
    // 0x8021C328: jr          $ra
    // 0x8021C32C: swc1        $f4, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x8021C32C: swc1        $f4, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_80212D90_67C770(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80212D90: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x80212D94: sb          $zero, 0x64($v0)
    MEM_B(0X64, ctx->r2) = 0;
    // 0x80212D98: lw          $t6, 0x94($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X94);
    // 0x80212D9C: jr          $ra
    // 0x80212DA0: sb          $zero, 0x64($t6)
    MEM_B(0X64, ctx->r14) = 0;
    TRACE_RETURN()
    return;
    // 0x80212DA0: sb          $zero, 0x64($t6)
    MEM_B(0X64, ctx->r14) = 0;
;}
RECOMP_FUNC void func_80211F60_67B940(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80211F60: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80211F64: lbu         $t6, 0x5C($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X5C);
    // 0x80211F68: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80211F6C: bnel        $t6, $zero, L_802121B8
    if (ctx->r14 != 0) {
        // 0x80211F70: addiu       $v0, $a0, 0x5C
        ctx->r2 = ADD32(ctx->r4, 0X5C);
            goto L_802121B8;
    }
    goto skip_0;
    // 0x80211F70: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    skip_0:
    // 0x80211F74: lwc1        $f14, 0x14($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X14);
    // 0x80211F78: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80211F7C: ldc1        $f18, -0x57B8($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0X57B8);
    // 0x80211F80: cvt.d.s     $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f4.d = CVT_D_S(ctx->f14.fl);
    // 0x80211F84: c.lt.d      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.d < ctx->f4.d;
    // 0x80211F88: nop

    // 0x80211F8C: bc1fl       L_80212004
    if (!c1cs) {
        // 0x80211F90: lwc1        $f16, 0x20($v0)
        ctx->f16.u32l = MEM_W(ctx->r2, 0X20);
            goto L_80212004;
    }
    goto skip_1;
    // 0x80211F90: lwc1        $f16, 0x20($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X20);
    skip_1:
    // 0x80211F94: lwc1        $f12, 0x10($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80211F98: lwc1        $f2, 0xC($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80211F9C: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x80211FA0: nop

    // 0x80211FA4: bc1fl       L_80211FBC
    if (!c1cs) {
        // 0x80211FA8: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_80211FBC;
    }
    goto skip_2;
    // 0x80211FA8: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_2:
    // 0x80211FAC: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x80211FB0: b           L_80211FBC
    // 0x80211FB4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80211FBC;
    // 0x80211FB4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80211FB8: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_80211FBC:
    // 0x80211FBC: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x80211FC0: nop

    // 0x80211FC4: bc1fl       L_80211FE0
    if (!c1cs) {
        // 0x80211FC8: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_80211FE0;
    }
    goto skip_3;
    // 0x80211FC8: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_3:
    // 0x80211FCC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80211FD0: swc1        $f12, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f12.u32l;
    // 0x80211FD4: b           L_80212000
    // 0x80211FD8: swc1        $f2, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f2.u32l;
        goto L_80212000;
    // 0x80211FD8: swc1        $f2, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f2.u32l;
    // 0x80211FDC: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_80211FE0:
    // 0x80211FE0: nop

    // 0x80211FE4: bc1fl       L_80211FFC
    if (!c1cs) {
        // 0x80211FE8: add.s       $f8, $f2, $f14
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_80211FFC;
    }
    goto skip_4;
    // 0x80211FE8: add.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f14.fl;
    skip_4:
    // 0x80211FEC: sub.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x80211FF0: b           L_80212000
    // 0x80211FF4: swc1        $f6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f6.u32l;
        goto L_80212000;
    // 0x80211FF4: swc1        $f6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f6.u32l;
    // 0x80211FF8: add.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f14.fl;
L_80211FFC:
    // 0x80211FFC: swc1        $f8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f8.u32l;
L_80212000:
    // 0x80212000: lwc1        $f16, 0x20($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X20);
L_80212004:
    // 0x80212004: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80212008: cvt.d.s     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f10.d = CVT_D_S(ctx->f16.fl);
    // 0x8021200C: c.lt.d      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.d < ctx->f10.d;
    // 0x80212010: nop

    // 0x80212014: bc1fl       L_80212088
    if (!c1cs) {
        // 0x80212018: lwc1        $f16, 0x2C($v0)
        ctx->f16.u32l = MEM_W(ctx->r2, 0X2C);
            goto L_80212088;
    }
    goto skip_5;
    // 0x80212018: lwc1        $f16, 0x2C($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X2C);
    skip_5:
    // 0x8021201C: lwc1        $f12, 0x1C($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x80212020: lwc1        $f14, 0x18($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X18);
    // 0x80212024: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x80212028: nop

    // 0x8021202C: bc1fl       L_80212044
    if (!c1cs) {
        // 0x80212030: sub.s       $f0, $f12, $f14
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f14.fl;
            goto L_80212044;
    }
    goto skip_6;
    // 0x80212030: sub.s       $f0, $f12, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f14.fl;
    skip_6:
    // 0x80212034: sub.s       $f0, $f12, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f14.fl;
    // 0x80212038: b           L_80212044
    // 0x8021203C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80212044;
    // 0x8021203C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80212040: sub.s       $f0, $f12, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f14.fl;
L_80212044:
    // 0x80212044: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x80212048: nop

    // 0x8021204C: bc1fl       L_80212064
    if (!c1cs) {
        // 0x80212050: c.lt.s      $f12, $f14
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
            goto L_80212064;
    }
    goto skip_7;
    // 0x80212050: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    skip_7:
    // 0x80212054: swc1        $f12, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f12.u32l;
    // 0x80212058: b           L_80212084
    // 0x8021205C: swc1        $f2, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f2.u32l;
        goto L_80212084;
    // 0x8021205C: swc1        $f2, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f2.u32l;
    // 0x80212060: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
L_80212064:
    // 0x80212064: nop

    // 0x80212068: bc1fl       L_80212080
    if (!c1cs) {
        // 0x8021206C: add.s       $f6, $f14, $f16
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f14.fl + ctx->f16.fl;
            goto L_80212080;
    }
    goto skip_8;
    // 0x8021206C: add.s       $f6, $f14, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f14.fl + ctx->f16.fl;
    skip_8:
    // 0x80212070: sub.s       $f4, $f14, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f14.fl - ctx->f16.fl;
    // 0x80212074: b           L_80212084
    // 0x80212078: swc1        $f4, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f4.u32l;
        goto L_80212084;
    // 0x80212078: swc1        $f4, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f4.u32l;
    // 0x8021207C: add.s       $f6, $f14, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f14.fl + ctx->f16.fl;
L_80212080:
    // 0x80212080: swc1        $f6, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f6.u32l;
L_80212084:
    // 0x80212084: lwc1        $f16, 0x2C($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X2C);
L_80212088:
    // 0x80212088: cvt.d.s     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f8.d = CVT_D_S(ctx->f16.fl);
    // 0x8021208C: c.lt.d      $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f18.d < ctx->f8.d;
    // 0x80212090: nop

    // 0x80212094: bc1fl       L_80212108
    if (!c1cs) {
        // 0x80212098: lwc1        $f16, 0x38($v0)
        ctx->f16.u32l = MEM_W(ctx->r2, 0X38);
            goto L_80212108;
    }
    goto skip_9;
    // 0x80212098: lwc1        $f16, 0x38($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X38);
    skip_9:
    // 0x8021209C: lwc1        $f12, 0x28($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X28);
    // 0x802120A0: lwc1        $f14, 0x24($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X24);
    // 0x802120A4: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x802120A8: nop

    // 0x802120AC: bc1fl       L_802120C4
    if (!c1cs) {
        // 0x802120B0: sub.s       $f0, $f12, $f14
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f14.fl;
            goto L_802120C4;
    }
    goto skip_10;
    // 0x802120B0: sub.s       $f0, $f12, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f14.fl;
    skip_10:
    // 0x802120B4: sub.s       $f0, $f12, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f14.fl;
    // 0x802120B8: b           L_802120C4
    // 0x802120BC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_802120C4;
    // 0x802120BC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x802120C0: sub.s       $f0, $f12, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f14.fl;
L_802120C4:
    // 0x802120C4: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x802120C8: nop

    // 0x802120CC: bc1fl       L_802120E4
    if (!c1cs) {
        // 0x802120D0: c.lt.s      $f12, $f14
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
            goto L_802120E4;
    }
    goto skip_11;
    // 0x802120D0: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    skip_11:
    // 0x802120D4: swc1        $f12, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f12.u32l;
    // 0x802120D8: b           L_80212104
    // 0x802120DC: swc1        $f2, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f2.u32l;
        goto L_80212104;
    // 0x802120DC: swc1        $f2, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f2.u32l;
    // 0x802120E0: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
L_802120E4:
    // 0x802120E4: nop

    // 0x802120E8: bc1fl       L_80212100
    if (!c1cs) {
        // 0x802120EC: add.s       $f4, $f14, $f16
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f14.fl + ctx->f16.fl;
            goto L_80212100;
    }
    goto skip_12;
    // 0x802120EC: add.s       $f4, $f14, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f14.fl + ctx->f16.fl;
    skip_12:
    // 0x802120F0: sub.s       $f10, $f14, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f14.fl - ctx->f16.fl;
    // 0x802120F4: b           L_80212104
    // 0x802120F8: swc1        $f10, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f10.u32l;
        goto L_80212104;
    // 0x802120F8: swc1        $f10, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f10.u32l;
    // 0x802120FC: add.s       $f4, $f14, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f14.fl + ctx->f16.fl;
L_80212100:
    // 0x80212100: swc1        $f4, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f4.u32l;
L_80212104:
    // 0x80212104: lwc1        $f16, 0x38($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X38);
L_80212108:
    // 0x80212108: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021210C: ldc1        $f6, -0x57B0($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X57B0);
    // 0x80212110: cvt.d.s     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f8.d = CVT_D_S(ctx->f16.fl);
    // 0x80212114: c.lt.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d < ctx->f8.d;
    // 0x80212118: nop

    // 0x8021211C: bc1fl       L_80212190
    if (!c1cs) {
        // 0x80212120: lh          $v1, 0x4($v0)
        ctx->r3 = MEM_H(ctx->r2, 0X4);
            goto L_80212190;
    }
    goto skip_13;
    // 0x80212120: lh          $v1, 0x4($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X4);
    skip_13:
    // 0x80212124: lwc1        $f12, 0x34($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X34);
    // 0x80212128: lwc1        $f14, 0x30($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X30);
    // 0x8021212C: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x80212130: nop

    // 0x80212134: bc1fl       L_8021214C
    if (!c1cs) {
        // 0x80212138: sub.s       $f0, $f12, $f14
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f14.fl;
            goto L_8021214C;
    }
    goto skip_14;
    // 0x80212138: sub.s       $f0, $f12, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f14.fl;
    skip_14:
    // 0x8021213C: sub.s       $f0, $f12, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f14.fl;
    // 0x80212140: b           L_8021214C
    // 0x80212144: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8021214C;
    // 0x80212144: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80212148: sub.s       $f0, $f12, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f14.fl;
L_8021214C:
    // 0x8021214C: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x80212150: nop

    // 0x80212154: bc1fl       L_8021216C
    if (!c1cs) {
        // 0x80212158: c.lt.s      $f12, $f14
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
            goto L_8021216C;
    }
    goto skip_15;
    // 0x80212158: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    skip_15:
    // 0x8021215C: swc1        $f12, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f12.u32l;
    // 0x80212160: b           L_8021218C
    // 0x80212164: swc1        $f2, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->f2.u32l;
        goto L_8021218C;
    // 0x80212164: swc1        $f2, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->f2.u32l;
    // 0x80212168: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
L_8021216C:
    // 0x8021216C: nop

    // 0x80212170: bc1fl       L_80212188
    if (!c1cs) {
        // 0x80212174: add.s       $f4, $f14, $f16
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f14.fl + ctx->f16.fl;
            goto L_80212188;
    }
    goto skip_16;
    // 0x80212174: add.s       $f4, $f14, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f14.fl + ctx->f16.fl;
    skip_16:
    // 0x80212178: sub.s       $f10, $f14, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f14.fl - ctx->f16.fl;
    // 0x8021217C: b           L_8021218C
    // 0x80212180: swc1        $f10, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f10.u32l;
        goto L_8021218C;
    // 0x80212180: swc1        $f10, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f10.u32l;
    // 0x80212184: add.s       $f4, $f14, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f14.fl + ctx->f16.fl;
L_80212188:
    // 0x80212188: swc1        $f4, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f4.u32l;
L_8021218C:
    // 0x8021218C: lh          $v1, 0x4($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X4);
L_80212190:
    // 0x80212190: beql        $v1, $zero, L_802121B8
    if (ctx->r3 == 0) {
        // 0x80212194: addiu       $v0, $a0, 0x5C
        ctx->r2 = ADD32(ctx->r4, 0X5C);
            goto L_802121B8;
    }
    goto skip_17;
    // 0x80212194: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    skip_17:
    // 0x80212198: lhu         $t7, 0x2($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X2);
    // 0x8021219C: lh          $t8, 0x6($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X6);
    // 0x802121A0: addiu       $t1, $v1, -0x1
    ctx->r9 = ADD32(ctx->r3, -0X1);
    // 0x802121A4: sh          $t1, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r9;
    // 0x802121A8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x802121AC: andi        $t0, $t9, 0x3FF
    ctx->r8 = ctx->r25 & 0X3FF;
    // 0x802121B0: sh          $t0, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r8;
    // 0x802121B4: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
L_802121B8:
    // 0x802121B8: lbu         $t2, 0x3C($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X3C);
    // 0x802121BC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x802121C0: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x802121C4: beq         $t2, $zero, L_802121EC
    if (ctx->r10 == 0) {
        // 0x802121C8: addiu       $v1, $v1, -0x39F4
        ctx->r3 = ADD32(ctx->r3, -0X39F4);
            goto L_802121EC;
    }
    // 0x802121C8: addiu       $v1, $v1, -0x39F4
    ctx->r3 = ADD32(ctx->r3, -0X39F4);
    // 0x802121CC: lwc1        $f6, 0x40($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X40);
    // 0x802121D0: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x802121D4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x802121D8: addiu       $a0, $a0, -0x39E4
    ctx->r4 = ADD32(ctx->r4, -0X39E4);
    // 0x802121DC: swc1        $f6, 0x28($t3)
    MEM_W(0X28, ctx->r11) = ctx->f6.u32l;
    // 0x802121E0: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x802121E4: lwc1        $f8, 0x40($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X40);
    // 0x802121E8: swc1        $f8, 0x20($t4)
    MEM_W(0X20, ctx->r12) = ctx->f8.u32l;
L_802121EC:
    // 0x802121EC: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x802121F0: addiu       $v1, $v1, -0x39F4
    ctx->r3 = ADD32(ctx->r3, -0X39F4);
    // 0x802121F4: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x802121F8: lwc1        $f12, 0x30($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X30);
    // 0x802121FC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80212200: addiu       $a0, $a0, -0x39E4
    ctx->r4 = ADD32(ctx->r4, -0X39E4);
    // 0x80212204: swc1        $f12, 0x24($t5)
    MEM_W(0X24, ctx->r13) = ctx->f12.u32l;
    // 0x80212208: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x8021220C: swc1        $f12, 0x20($t6)
    MEM_W(0X20, ctx->r14) = ctx->f12.u32l;
    // 0x80212210: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x80212214: swc1        $f12, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f12.u32l;
    // 0x80212218: lhu         $t8, 0x2($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X2);
    // 0x8021221C: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x80212220: sh          $t8, 0x16($t9)
    MEM_H(0X16, ctx->r25) = ctx->r24;
    // 0x80212224: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80212228: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x8021222C: swc1        $f10, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f10.u32l;
    // 0x80212230: lwc1        $f4, 0x18($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X18);
    // 0x80212234: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x80212238: swc1        $f4, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->f4.u32l;
    // 0x8021223C: lwc1        $f6, 0x24($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X24);
    // 0x80212240: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x80212244: addiu       $t1, $zero, 0x9
    ctx->r9 = ADD32(0, 0X9);
    // 0x80212248: swc1        $f6, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->f6.u32l;
    // 0x8021224C: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x80212250: swc1        $f2, 0x20($t3)
    MEM_W(0X20, ctx->r11) = ctx->f2.u32l;
    // 0x80212254: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x80212258: lwc1        $f0, 0x30($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X30);
    // 0x8021225C: swc1        $f0, 0x24($t4)
    MEM_W(0X24, ctx->r12) = ctx->f0.u32l;
    // 0x80212260: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x80212264: swc1        $f0, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->f0.u32l;
    // 0x80212268: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8021226C: lhu         $t6, 0x2($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X2);
    // 0x80212270: sh          $t6, 0x16($t7)
    MEM_H(0X16, ctx->r15) = ctx->r14;
    // 0x80212274: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x80212278: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8021227C: swc1        $f8, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f8.u32l;
    // 0x80212280: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x80212284: lwc1        $f10, 0x18($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X18);
    // 0x80212288: swc1        $f10, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->f10.u32l;
    // 0x8021228C: lw          $t0, 0x0($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X0);
    // 0x80212290: lwc1        $f4, 0x24($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X24);
    // 0x80212294: swc1        $f4, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->f4.u32l;
    // 0x80212298: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8021229C: jr          $ra
    // 0x802122A0: sb          $t1, 0x5($t2)
    MEM_B(0X5, ctx->r10) = ctx->r9;
    TRACE_RETURN()
    return;
    // 0x802122A0: sb          $t1, 0x5($t2)
    MEM_B(0X5, ctx->r10) = ctx->r9;
;}
RECOMP_FUNC void func_802240A0_68DA80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802240A0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802240A4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802240A8: jr          $ra
    // 0x802240AC: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    TRACE_RETURN()
    return;
    // 0x802240AC: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void func_8021371C_67D0FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021371C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80213720: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80213724: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80213728: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8021372C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80213730: lhu         $t6, 0x74($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X74);
    // 0x80213734: lw          $t3, 0x60($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X60);
    // 0x80213738: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8021373C: addiu       $t8, $t6, 0x4
    ctx->r24 = ADD32(ctx->r14, 0X4);
    // 0x80213740: andi        $t0, $t8, 0x3FF
    ctx->r8 = ctx->r24 & 0X3FF;
    // 0x80213744: sh          $t8, 0x74($a0)
    MEM_H(0X74, ctx->r4) = ctx->r24;
    // 0x80213748: negu        $t1, $t0
    ctx->r9 = SUB32(0, ctx->r8);
    // 0x8021374C: sh          $t0, 0x74($a0)
    MEM_H(0X74, ctx->r4) = ctx->r8;
    // 0x80213750: andi        $t2, $t1, 0x3FF
    ctx->r10 = ctx->r9 & 0X3FF;
    // 0x80213754: sh          $t2, 0x16($t3)
    MEM_H(0X16, ctx->r11) = ctx->r10;
    // 0x80213758: lhu         $a0, 0x74($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X74);
    // 0x8021375C: jal         0x80003EA0
    // 0x80213760: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    func_80003EA0_4AA0(rdram, ctx);
        goto after_0;
    // 0x80213760: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    after_0:
    // 0x80213764: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80213768: addiu       $s0, $a1, 0x5C
    ctx->r16 = ADD32(ctx->r5, 0X5C);
    // 0x8021376C: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x80213770: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x80213774: lw          $t4, 0x4($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X4);
    // 0x80213778: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8021377C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80213780: swc1        $f10, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->f10.u32l;
    // 0x80213784: jal         0x80003E10
    // 0x80213788: lhu         $a0, 0x18($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X18);
    func_80003E10_4A10(rdram, ctx);
        goto after_1;
    // 0x80213788: lhu         $a0, 0x18($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X18);
    after_1:
    // 0x8021378C: lwc1        $f16, 0x14($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X14);
    // 0x80213790: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x80213794: lw          $t5, 0x4($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X4);
    // 0x80213798: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x8021379C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802137A0: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x802137A4: swc1        $f6, 0x10($t5)
    MEM_W(0X10, ctx->r13) = ctx->f6.u32l;
    // 0x802137A8: lw          $t6, 0x4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X4);
    // 0x802137AC: lwc1        $f8, 0xC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC);
    // 0x802137B0: swc1        $f8, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f8.u32l;
    // 0x802137B4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802137B8: beql        $v0, $zero, L_802137D4
    if (ctx->r2 == 0) {
        // 0x802137BC: lw          $v0, 0x4($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X4);
            goto L_802137D4;
    }
    goto skip_0;
    // 0x802137BC: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    skip_0:
    // 0x802137C0: beql        $v0, $at, L_80213850
    if (ctx->r2 == ctx->r1) {
        // 0x802137C4: lw          $v0, 0x4($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X4);
            goto L_80213850;
    }
    goto skip_1;
    // 0x802137C4: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    skip_1:
    // 0x802137C8: b           L_802138B0
    // 0x802137CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802138B0;
    // 0x802137CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802137D0: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
L_802137D4:
    // 0x802137D4: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x802137D8: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x802137DC: lwc1        $f10, 0x28($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X28);
    // 0x802137E0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802137E4: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x802137E8: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x802137EC: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x802137F0: swc1        $f6, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f6.u32l;
    // 0x802137F4: jal         0x8001B5AC
    // 0x802137F8: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_2;
    // 0x802137F8: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_2:
    // 0x802137FC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80213800: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80213804: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x80213808: sub.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x8021380C: lwc1        $f16, 0x28($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X28);
    // 0x80213810: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x80213814: nop

    // 0x80213818: bc1fl       L_802138B0
    if (!c1cs) {
        // 0x8021381C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802138B0;
    }
    goto skip_2;
    // 0x8021381C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x80213820: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80213824: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80213828: swc1        $f18, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f18.u32l;
    // 0x8021382C: lh          $v1, 0x2($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2);
    // 0x80213830: blezl       $v1, L_80213844
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80213834: addiu       $t8, $v1, 0x1
        ctx->r24 = ADD32(ctx->r3, 0X1);
            goto L_80213844;
    }
    goto skip_3;
    // 0x80213834: addiu       $t8, $v1, 0x1
    ctx->r24 = ADD32(ctx->r3, 0X1);
    skip_3:
    // 0x80213838: sb          $t7, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r15;
    // 0x8021383C: lh          $v1, 0x2($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2);
    // 0x80213840: addiu       $t8, $v1, 0x1
    ctx->r24 = ADD32(ctx->r3, 0X1);
L_80213844:
    // 0x80213844: b           L_802138AC
    // 0x80213848: sh          $t8, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r24;
        goto L_802138AC;
    // 0x80213848: sh          $t8, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r24;
    // 0x8021384C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
L_80213850:
    // 0x80213850: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80213854: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80213858: lwc1        $f4, 0x28($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X28);
    // 0x8021385C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80213860: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80213864: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x80213868: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x8021386C: swc1        $f16, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f16.u32l;
    // 0x80213870: jal         0x8001B5AC
    // 0x80213874: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_3;
    // 0x80213874: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_3:
    // 0x80213878: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8021387C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80213880: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x80213884: lui         $at, 0x4198
    ctx->r1 = S32(0X4198 << 16);
    // 0x80213888: sub.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f18.fl;
    // 0x8021388C: lwc1        $f6, 0x28($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X28);
    // 0x80213890: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80213894: nop

    // 0x80213898: bc1fl       L_802138B0
    if (!c1cs) {
        // 0x8021389C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802138B0;
    }
    goto skip_4;
    // 0x8021389C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_4:
    // 0x802138A0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802138A4: nop

    // 0x802138A8: swc1        $f8, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f8.u32l;
L_802138AC:
    // 0x802138AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802138B0:
    // 0x802138B0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802138B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802138B8: jr          $ra
    // 0x802138BC: nop

    TRACE_RETURN()
    return;
    // 0x802138BC: nop

;}
RECOMP_FUNC void func_80215E08_67F7E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80215E08: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80215E0C: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x80215E10: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80215E14: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80215E18: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x80215E1C: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x80215E20: lwc1        $f6, 0x60($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X60);
    // 0x80215E24: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80215E28: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80215E2C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80215E30: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80215E34: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80215E38: lw          $a3, 0x5C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X5C);
    // 0x80215E3C: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    // 0x80215E40: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    // 0x80215E44: lwc1        $f16, 0x64($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X64);
    // 0x80215E48: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x80215E4C: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80215E50: lwc1        $f10, 0x60($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X60);
    // 0x80215E54: swc1        $f18, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f18.u32l;
    // 0x80215E58: lwc1        $f6, 0x68($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X68);
    // 0x80215E5C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80215E60: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    // 0x80215E64: lw          $a0, 0x94($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X94);
    // 0x80215E68: jal         0x8001D14C
    // 0x80215E6C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_8001D14C_1DD4C(rdram, ctx);
        goto after_0;
    // 0x80215E6C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x80215E70: addiu       $v1, $s0, 0x5C
    ctx->r3 = ADD32(ctx->r16, 0X5C);
    // 0x80215E74: lwc1        $f18, 0x4($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X4);
    // 0x80215E78: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80215E7C: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80215E80: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x80215E84: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80215E88: lwc1        $f16, 0x54($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80215E8C: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x80215E90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80215E94: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x80215E98: lwc1        $f8, 0x8($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80215E9C: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
    // 0x80215EA0: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80215EA4: swc1        $f10, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f10.u32l;
    // 0x80215EA8: lwc1        $f18, 0xC($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XC);
    // 0x80215EAC: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    // 0x80215EB0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80215EB4: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80215EB8: jal         0x8001DB04
    // 0x80215EBC: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
    func_8001DB04_1E704(rdram, ctx);
        goto after_1;
    // 0x80215EBC: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x80215EC0: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x80215EC4: lhu         $t6, 0x30($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X30);
    // 0x80215EC8: lw          $t7, 0x38($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X38);
    // 0x80215ECC: sh          $t6, 0x14($t7)
    MEM_H(0X14, ctx->r15) = ctx->r14;
    // 0x80215ED0: lhu         $t8, 0x32($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X32);
    // 0x80215ED4: lw          $t9, 0x38($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X38);
    // 0x80215ED8: sh          $t8, 0x16($t9)
    MEM_H(0X16, ctx->r25) = ctx->r24;
    // 0x80215EDC: lhu         $t0, 0x34($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X34);
    // 0x80215EE0: lw          $t1, 0x38($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X38);
    // 0x80215EE4: sh          $t0, 0x18($t1)
    MEM_H(0X18, ctx->r9) = ctx->r8;
    // 0x80215EE8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80215EEC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80215EF0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80215EF4: jr          $ra
    // 0x80215EF8: nop

    TRACE_RETURN()
    return;
    // 0x80215EF8: nop

;}
RECOMP_FUNC void func_80226E40_690820(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226E40: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80226E44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226E48: lbu         $t6, 0x5C($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X5C);
    // 0x80226E4C: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80226E50: bnel        $t6, $zero, L_80226F94
    if (ctx->r14 != 0) {
        // 0x80226E54: lwc1        $f10, 0x70($a1)
        ctx->f10.u32l = MEM_W(ctx->r5, 0X70);
            goto L_80226F94;
    }
    goto skip_0;
    // 0x80226E54: lwc1        $f10, 0x70($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X70);
    skip_0:
    // 0x80226E58: lwc1        $f14, 0x14($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X14);
    // 0x80226E5C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226E60: ldc1        $f16, -0x4E88($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0X4E88);
    // 0x80226E64: cvt.d.s     $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f4.d = CVT_D_S(ctx->f14.fl);
    // 0x80226E68: c.lt.d      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.d < ctx->f4.d;
    // 0x80226E6C: nop

    // 0x80226E70: bc1fl       L_80226EE8
    if (!c1cs) {
        // 0x80226E74: lwc1        $f14, 0x2C($v0)
        ctx->f14.u32l = MEM_W(ctx->r2, 0X2C);
            goto L_80226EE8;
    }
    goto skip_1;
    // 0x80226E74: lwc1        $f14, 0x2C($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X2C);
    skip_1:
    // 0x80226E78: lwc1        $f12, 0x10($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80226E7C: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80226E80: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x80226E84: nop

    // 0x80226E88: bc1fl       L_80226EA0
    if (!c1cs) {
        // 0x80226E8C: sub.s       $f2, $f12, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
            goto L_80226EA0;
    }
    goto skip_2;
    // 0x80226E8C: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
    skip_2:
    // 0x80226E90: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x80226E94: b           L_80226EA0
    // 0x80226E98: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_80226EA0;
    // 0x80226E98: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x80226E9C: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
L_80226EA0:
    // 0x80226EA0: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    // 0x80226EA4: nop

    // 0x80226EA8: bc1fl       L_80226EC4
    if (!c1cs) {
        // 0x80226EAC: c.lt.s      $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
            goto L_80226EC4;
    }
    goto skip_3;
    // 0x80226EAC: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    skip_3:
    // 0x80226EB0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80226EB4: swc1        $f12, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f12.u32l;
    // 0x80226EB8: b           L_80226EE4
    // 0x80226EBC: swc1        $f6, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f6.u32l;
        goto L_80226EE4;
    // 0x80226EBC: swc1        $f6, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f6.u32l;
    // 0x80226EC0: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
L_80226EC4:
    // 0x80226EC4: nop

    // 0x80226EC8: bc1fl       L_80226EE0
    if (!c1cs) {
        // 0x80226ECC: add.s       $f10, $f0, $f14
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f14.fl;
            goto L_80226EE0;
    }
    goto skip_4;
    // 0x80226ECC: add.s       $f10, $f0, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f14.fl;
    skip_4:
    // 0x80226ED0: sub.s       $f8, $f0, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f14.fl;
    // 0x80226ED4: b           L_80226EE4
    // 0x80226ED8: swc1        $f8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f8.u32l;
        goto L_80226EE4;
    // 0x80226ED8: swc1        $f8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f8.u32l;
    // 0x80226EDC: add.s       $f10, $f0, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f14.fl;
L_80226EE0:
    // 0x80226EE0: swc1        $f10, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f10.u32l;
L_80226EE4:
    // 0x80226EE4: lwc1        $f14, 0x2C($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X2C);
L_80226EE8:
    // 0x80226EE8: cvt.d.s     $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f18.d = CVT_D_S(ctx->f14.fl);
    // 0x80226EEC: c.lt.d      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.d < ctx->f18.d;
    // 0x80226EF0: nop

    // 0x80226EF4: bc1fl       L_80226F6C
    if (!c1cs) {
        // 0x80226EF8: lh          $v1, 0x32($v0)
        ctx->r3 = MEM_H(ctx->r2, 0X32);
            goto L_80226F6C;
    }
    goto skip_5;
    // 0x80226EF8: lh          $v1, 0x32($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X32);
    skip_5:
    // 0x80226EFC: lwc1        $f12, 0x28($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X28);
    // 0x80226F00: lwc1        $f0, 0x24($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X24);
    // 0x80226F04: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x80226F08: nop

    // 0x80226F0C: bc1fl       L_80226F24
    if (!c1cs) {
        // 0x80226F10: sub.s       $f2, $f12, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
            goto L_80226F24;
    }
    goto skip_6;
    // 0x80226F10: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
    skip_6:
    // 0x80226F14: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x80226F18: b           L_80226F24
    // 0x80226F1C: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_80226F24;
    // 0x80226F1C: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x80226F20: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
L_80226F24:
    // 0x80226F24: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    // 0x80226F28: nop

    // 0x80226F2C: bc1fl       L_80226F48
    if (!c1cs) {
        // 0x80226F30: c.lt.s      $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
            goto L_80226F48;
    }
    goto skip_7;
    // 0x80226F30: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    skip_7:
    // 0x80226F34: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80226F38: swc1        $f12, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f12.u32l;
    // 0x80226F3C: b           L_80226F68
    // 0x80226F40: swc1        $f4, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f4.u32l;
        goto L_80226F68;
    // 0x80226F40: swc1        $f4, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f4.u32l;
    // 0x80226F44: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
L_80226F48:
    // 0x80226F48: nop

    // 0x80226F4C: bc1fl       L_80226F64
    if (!c1cs) {
        // 0x80226F50: add.s       $f8, $f0, $f14
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f14.fl;
            goto L_80226F64;
    }
    goto skip_8;
    // 0x80226F50: add.s       $f8, $f0, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f14.fl;
    skip_8:
    // 0x80226F54: sub.s       $f6, $f0, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f14.fl;
    // 0x80226F58: b           L_80226F68
    // 0x80226F5C: swc1        $f6, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f6.u32l;
        goto L_80226F68;
    // 0x80226F5C: swc1        $f6, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f6.u32l;
    // 0x80226F60: add.s       $f8, $f0, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f14.fl;
L_80226F64:
    // 0x80226F64: swc1        $f8, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f8.u32l;
L_80226F68:
    // 0x80226F68: lh          $v1, 0x32($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X32);
L_80226F6C:
    // 0x80226F6C: beql        $v1, $zero, L_80226F94
    if (ctx->r3 == 0) {
        // 0x80226F70: lwc1        $f10, 0x70($a1)
        ctx->f10.u32l = MEM_W(ctx->r5, 0X70);
            goto L_80226F94;
    }
    goto skip_9;
    // 0x80226F70: lwc1        $f10, 0x70($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X70);
    skip_9:
    // 0x80226F74: lhu         $t7, 0x30($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X30);
    // 0x80226F78: lh          $t8, 0x34($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X34);
    // 0x80226F7C: addiu       $t1, $v1, -0x1
    ctx->r9 = ADD32(ctx->r3, -0X1);
    // 0x80226F80: sh          $t1, 0x32($v0)
    MEM_H(0X32, ctx->r2) = ctx->r9;
    // 0x80226F84: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80226F88: andi        $t0, $t9, 0x3FF
    ctx->r8 = ctx->r25 & 0X3FF;
    // 0x80226F8C: sh          $t0, 0x30($v0)
    MEM_H(0X30, ctx->r2) = ctx->r8;
    // 0x80226F90: lwc1        $f10, 0x70($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X70);
L_80226F94:
    // 0x80226F94: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226F98: ldc1        $f4, -0x4E80($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X4E80);
    // 0x80226F9C: cvt.d.s     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f18.d = CVT_D_S(ctx->f10.fl);
    // 0x80226FA0: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80226FA4: c.lt.d      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.d < ctx->f4.d;
    // 0x80226FA8: nop

    // 0x80226FAC: bc1fl       L_80227020
    if (!c1cs) {
        // 0x80226FB0: lhu         $t3, 0x30($v0)
        ctx->r11 = MEM_HU(ctx->r2, 0X30);
            goto L_80227020;
    }
    goto skip_10;
    // 0x80226FB0: lhu         $t3, 0x30($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X30);
    skip_10:
    // 0x80226FB4: lwc1        $f6, 0x28($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X28);
    // 0x80226FB8: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80226FBC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80226FC0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80226FC4: swc1        $f10, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f10.u32l;
    // 0x80226FC8: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80226FCC: jal         0x8001B5AC
    // 0x80226FD0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_0;
    // 0x80226FD0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_0:
    // 0x80226FD4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80226FD8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80226FDC: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x80226FE0: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x80226FE4: sub.s       $f2, $f0, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f18.fl;
    // 0x80226FE8: lwc1        $f4, 0x28($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X28);
    // 0x80226FEC: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x80226FF0: nop

    // 0x80226FF4: bc1fl       L_80227020
    if (!c1cs) {
        // 0x80226FF8: lhu         $t3, 0x30($v0)
        ctx->r11 = MEM_HU(ctx->r2, 0X30);
            goto L_80227020;
    }
    goto skip_11;
    // 0x80226FF8: lhu         $t3, 0x30($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X30);
    skip_11:
    // 0x80226FFC: lbu         $t2, 0x1($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X1);
    // 0x80227000: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80227004: bnel        $t2, $at, L_8022701C
    if (ctx->r10 != ctx->r1) {
        // 0x80227008: swc1        $f2, 0x28($a1)
        MEM_W(0X28, ctx->r5) = ctx->f2.u32l;
            goto L_8022701C;
    }
    goto skip_12;
    // 0x80227008: swc1        $f2, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f2.u32l;
    skip_12:
    // 0x8022700C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80227010: b           L_8022701C
    // 0x80227014: swc1        $f6, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f6.u32l;
        goto L_8022701C;
    // 0x80227014: swc1        $f6, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f6.u32l;
    // 0x80227018: swc1        $f2, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f2.u32l;
L_8022701C:
    // 0x8022701C: lhu         $t3, 0x30($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X30);
L_80227020:
    // 0x80227020: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80227024: sh          $t3, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r11;
    // 0x80227028: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8022702C: addiu       $t3, $zero, 0x80
    ctx->r11 = ADD32(0, 0X80);
    // 0x80227030: swc1        $f8, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f8.u32l;
    // 0x80227034: lwc1        $f10, 0x18($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X18);
    // 0x80227038: swc1        $f10, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f10.u32l;
    // 0x8022703C: lwc1        $f18, 0x24($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X24);
    // 0x80227040: swc1        $f18, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f18.u32l;
    // 0x80227044: lw          $t4, 0x38($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X38);
    // 0x80227048: swc1        $f4, 0x20($t4)
    MEM_W(0X20, ctx->r12) = ctx->f4.u32l;
    // 0x8022704C: lw          $t6, 0x38($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X38);
    // 0x80227050: lhu         $t5, 0x30($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X30);
    // 0x80227054: sh          $t5, 0x16($t6)
    MEM_H(0X16, ctx->r14) = ctx->r13;
    // 0x80227058: lw          $t7, 0x38($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X38);
    // 0x8022705C: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80227060: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x80227064: lui         $t6, 0xC
    ctx->r14 = S32(0XC << 16);
    // 0x80227068: swc1        $f6, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f6.u32l;
    // 0x8022706C: lw          $t8, 0x38($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X38);
    // 0x80227070: lwc1        $f8, 0x18($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X18);
    // 0x80227074: swc1        $f8, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->f8.u32l;
    // 0x80227078: lw          $t9, 0x38($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X38);
    // 0x8022707C: lwc1        $f10, 0x24($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X24);
    // 0x80227080: swc1        $f10, 0x10($t9)
    MEM_W(0X10, ctx->r25) = ctx->f10.u32l;
    // 0x80227084: lw          $t0, 0x38($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X38);
    // 0x80227088: lw          $at, 0x34($a1)
    ctx->r1 = MEM_W(ctx->r5, 0X34);
    // 0x8022708C: sw          $at, 0x34($t0)
    MEM_W(0X34, ctx->r8) = ctx->r1;
    // 0x80227090: lw          $t2, 0x38($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X38);
    // 0x80227094: sw          $t2, 0x38($t0)
    MEM_W(0X38, ctx->r8) = ctx->r10;
    // 0x80227098: lw          $t4, 0x38($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X38);
    // 0x8022709C: sh          $t3, 0x3C($t4)
    MEM_H(0X3C, ctx->r12) = ctx->r11;
    // 0x802270A0: lw          $t5, -0x3A38($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X3A38);
    // 0x802270A4: lw          $t7, 0x38($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X38);
    // 0x802270A8: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x802270AC: lhu         $t6, 0x2D90($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X2D90);
    // 0x802270B0: sh          $t6, 0x44($t7)
    MEM_H(0X44, ctx->r15) = ctx->r14;
    // 0x802270B4: lw          $t8, 0x38($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X38);
    // 0x802270B8: sh          $zero, 0x4C($t8)
    MEM_H(0X4C, ctx->r24) = 0;
    // 0x802270BC: lw          $t9, 0x38($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X38);
    // 0x802270C0: sh          $zero, 0x54($t9)
    MEM_H(0X54, ctx->r25) = 0;
    // 0x802270C4: lw          $t1, 0x38($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X38);
    // 0x802270C8: sh          $zero, 0x5C($t1)
    MEM_H(0X5C, ctx->r9) = 0;
    // 0x802270CC: lw          $a0, 0x38($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X38);
    // 0x802270D0: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x802270D4: jal         0x80014218
    // 0x802270D8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80014218_14E18(rdram, ctx);
        goto after_1;
    // 0x802270D8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x802270DC: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x802270E0: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x802270E4: lui         $t4, 0x8020
    ctx->r12 = S32(0X8020 << 16);
    // 0x802270E8: lw          $t0, 0x2C($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X2C);
    // 0x802270EC: lw          $t3, 0x38($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X38);
    // 0x802270F0: addiu       $t2, $t0, 0x1
    ctx->r10 = ADD32(ctx->r8, 0X1);
    // 0x802270F4: sw          $t2, 0x2C($t3)
    MEM_W(0X2C, ctx->r11) = ctx->r10;
    // 0x802270F8: lw          $t4, -0x39E4($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X39E4);
    // 0x802270FC: lw          $t6, 0x38($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X38);
    // 0x80227100: lw          $t5, 0x30($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X30);
    // 0x80227104: sw          $t5, 0x30($t6)
    MEM_W(0X30, ctx->r14) = ctx->r13;
    // 0x80227108: lwc1        $f18, 0x28($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X28);
    // 0x8022710C: lw          $t7, 0x38($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X38);
    // 0x80227110: swc1        $f18, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f18.u32l;
    // 0x80227114: lwc1        $f4, 0x70($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X70);
    // 0x80227118: lw          $t8, 0x38($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X38);
    // 0x8022711C: swc1        $f4, 0x70($t8)
    MEM_W(0X70, ctx->r24) = ctx->f4.u32l;
    // 0x80227120: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227124: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80227128: jr          $ra
    // 0x8022712C: nop

    TRACE_RETURN()
    return;
    // 0x8022712C: nop

;}
RECOMP_FUNC void func_80226B88_690568(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226B88: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80226B8C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80226B90: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80226B94: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80226B98: lwc1        $f6, 0x68($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X68);
    // 0x80226B9C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226BA0: ldc1        $f4, -0x4EE0($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X4EE0);
    // 0x80226BA4: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80226BA8: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x80226BAC: c.lt.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d < ctx->f8.d;
    // 0x80226BB0: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80226BB4: addiu       $v1, $v1, -0x4CDC
    ctx->r3 = ADD32(ctx->r3, -0X4CDC);
    // 0x80226BB8: bc1fl       L_80226C34
    if (!c1cs) {
        // 0x80226BBC: lw          $t7, 0x0($v1)
        ctx->r15 = MEM_W(ctx->r3, 0X0);
            goto L_80226C34;
    }
    goto skip_0;
    // 0x80226BBC: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    skip_0:
    // 0x80226BC0: lwc1        $f2, 0x8($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80226BC4: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80226BC8: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x80226BCC: nop

    // 0x80226BD0: bc1fl       L_80226BE8
    if (!c1cs) {
        // 0x80226BD4: sub.s       $f14, $f2, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
            goto L_80226BE8;
    }
    goto skip_1;
    // 0x80226BD4: sub.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
    skip_1:
    // 0x80226BD8: sub.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x80226BDC: b           L_80226BE8
    // 0x80226BE0: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
        goto L_80226BE8;
    // 0x80226BE0: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    // 0x80226BE4: sub.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
L_80226BE8:
    // 0x80226BE8: lwc1        $f12, 0xC($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80226BEC: c.lt.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
    // 0x80226BF0: nop

    // 0x80226BF4: bc1fl       L_80226C10
    if (!c1cs) {
        // 0x80226BF8: c.lt.s      $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
            goto L_80226C10;
    }
    goto skip_2;
    // 0x80226BF8: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    skip_2:
    // 0x80226BFC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80226C00: swc1        $f2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f2.u32l;
    // 0x80226C04: b           L_80226C30
    // 0x80226C08: swc1        $f10, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f10.u32l;
        goto L_80226C30;
    // 0x80226C08: swc1        $f10, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f10.u32l;
    // 0x80226C0C: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
L_80226C10:
    // 0x80226C10: nop

    // 0x80226C14: bc1fl       L_80226C2C
    if (!c1cs) {
        // 0x80226C18: add.s       $f18, $f0, $f12
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f12.fl;
            goto L_80226C2C;
    }
    goto skip_3;
    // 0x80226C18: add.s       $f18, $f0, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f12.fl;
    skip_3:
    // 0x80226C1C: sub.s       $f16, $f0, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x80226C20: b           L_80226C30
    // 0x80226C24: swc1        $f16, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f16.u32l;
        goto L_80226C30;
    // 0x80226C24: swc1        $f16, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f16.u32l;
    // 0x80226C28: add.s       $f18, $f0, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f12.fl;
L_80226C2C:
    // 0x80226C2C: swc1        $f18, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f18.u32l;
L_80226C30:
    // 0x80226C30: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
L_80226C34:
    // 0x80226C34: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80226C38: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x80226C3C: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x80226C40: sw          $t8, 0x30($t9)
    MEM_W(0X30, ctx->r25) = ctx->r24;
    // 0x80226C44: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x80226C48: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x80226C4C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80226C50: lbu         $t0, 0x6F($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X6F);
    // 0x80226C54: lbu         $a3, 0x6E($v0)
    ctx->r7 = MEM_BU(ctx->r2, 0X6E);
    // 0x80226C58: lbu         $a2, 0x6D($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X6D);
    // 0x80226C5C: lbu         $a1, 0x6C($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X6C);
    // 0x80226C60: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80226C64: lbu         $t1, 0x70($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X70);
    // 0x80226C68: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x80226C6C: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x80226C70: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x80226C74: lbu         $t2, 0x71($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X71);
    // 0x80226C78: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80226C7C: addiu       $v0, $v0, 0x5C
    ctx->r2 = ADD32(ctx->r2, 0X5C);
    // 0x80226C80: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x80226C84: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80226C88: cvt.w.s     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80226C8C: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x80226C90: nop

    // 0x80226C94: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x80226C98: beql        $t4, $zero, L_80226CE8
    if (ctx->r12 == 0) {
        // 0x80226C9C: mfc1        $t4, $f4
        ctx->r12 = (int32_t)ctx->f4.u32l;
            goto L_80226CE8;
    }
    goto skip_4;
    // 0x80226C9C: mfc1        $t4, $f4
    ctx->r12 = (int32_t)ctx->f4.u32l;
    skip_4:
    // 0x80226CA0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80226CA4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80226CA8: sub.s       $f4, $f6, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x80226CAC: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x80226CB0: nop

    // 0x80226CB4: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80226CB8: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x80226CBC: nop

    // 0x80226CC0: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x80226CC4: bne         $t4, $zero, L_80226CDC
    if (ctx->r12 != 0) {
        // 0x80226CC8: nop
    
            goto L_80226CDC;
    }
    // 0x80226CC8: nop

    // 0x80226CCC: mfc1        $t4, $f4
    ctx->r12 = (int32_t)ctx->f4.u32l;
    // 0x80226CD0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80226CD4: b           L_80226CF4
    // 0x80226CD8: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
        goto L_80226CF4;
    // 0x80226CD8: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
L_80226CDC:
    // 0x80226CDC: b           L_80226CF4
    // 0x80226CE0: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
        goto L_80226CF4;
    // 0x80226CE0: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x80226CE4: mfc1        $t4, $f4
    ctx->r12 = (int32_t)ctx->f4.u32l;
L_80226CE8:
    // 0x80226CE8: nop

    // 0x80226CEC: bltz        $t4, L_80226CDC
    if (SIGNED(ctx->r12) < 0) {
        // 0x80226CF0: nop
    
            goto L_80226CDC;
    }
    // 0x80226CF0: nop

L_80226CF4:
    // 0x80226CF4: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x80226CF8: jal         0x80226888
    // 0x80226CFC: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    func_80226888_690268(rdram, ctx);
        goto after_0;
    // 0x80226CFC: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    after_0:
    // 0x80226D00: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80226D04: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x80226D08: addiu       $v1, $v1, -0x4CDC
    ctx->r3 = ADD32(ctx->r3, -0X4CDC);
    // 0x80226D0C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80226D10: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80226D14: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80226D18: jr          $ra
    // 0x80226D1C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80226D1C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8021E490_687E70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021E490: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8021E494: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x8021E498: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8021E49C: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x8021E4A0: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x8021E4A4: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x8021E4A8: addiu       $a1, $a1, -0x1C28
    ctx->r5 = ADD32(ctx->r5, -0X1C28);
    // 0x8021E4AC: jal         0x80034E08
    // 0x8021E4B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x8021E4B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8021E4B4: bne         $v0, $zero, L_8021E4C4
    if (ctx->r2 != 0) {
        // 0x8021E4B8: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8021E4C4;
    }
    // 0x8021E4B8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8021E4BC: b           L_8021E550
    // 0x8021E4C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021E550;
    // 0x8021E4C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8021E4C4:
    // 0x8021E4C4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021E4C8: lwc1        $f0, -0x52B0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X52B0);
    // 0x8021E4CC: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x8021E4D0: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8021E4D4: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8021E4D8: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x8021E4DC: addiu       $a1, $a1, 0x164
    ctx->r5 = ADD32(ctx->r5, 0X164);
    // 0x8021E4E0: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x8021E4E4: lui         $a2, 0x8007
    ctx->r6 = S32(0X8007 << 16);
    // 0x8021E4E8: addiu       $t8, $zero, 0x269
    ctx->r24 = ADD32(0, 0X269);
    // 0x8021E4EC: addiu       $t9, $zero, 0x16B
    ctx->r25 = ADD32(0, 0X16B);
    // 0x8021E4F0: andi        $t7, $t6, 0x3FF
    ctx->r15 = ctx->r14 & 0X3FF;
    // 0x8021E4F4: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x8021E4F8: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x8021E4FC: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x8021E500: addiu       $a2, $a2, -0x26E0
    ctx->r6 = ADD32(ctx->r6, -0X26E0);
    // 0x8021E504: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x8021E508: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x8021E50C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8021E510: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8021E514: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    // 0x8021E518: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x8021E51C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x8021E520: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x8021E524: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8021E528: jal         0x8000DBF0
    // 0x8021E52C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x8021E52C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x8021E530: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
    // 0x8021E534: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8021E538: addiu       $v1, $v0, 0x5C
    ctx->r3 = ADD32(ctx->r2, 0X5C);
    // 0x8021E53C: swc1        $f8, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f8.u32l;
    // 0x8021E540: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8021E544: swc1        $f10, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f10.u32l;
    // 0x8021E548: lwc1        $f16, 0x54($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8021E54C: swc1        $f16, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->f16.u32l;
L_8021E550:
    // 0x8021E550: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8021E554: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8021E558: jr          $ra
    // 0x8021E55C: nop

    TRACE_RETURN()
    return;
    // 0x8021E55C: nop

;}
RECOMP_FUNC void func_8021B120_684B00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021B120: lw          $t6, 0xB4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XB4);
    // 0x8021B124: sb          $a1, 0x5($t6)
    MEM_B(0X5, ctx->r14) = ctx->r5;
    // 0x8021B128: lw          $t7, 0xB0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XB0);
    // 0x8021B12C: jr          $ra
    // 0x8021B130: sb          $a1, 0x5($t7)
    MEM_B(0X5, ctx->r15) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x8021B130: sb          $a1, 0x5($t7)
    MEM_B(0X5, ctx->r15) = ctx->r5;
;}
RECOMP_FUNC void func_80225AB0_68F490(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225AB0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80225AB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225AB8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80225ABC: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80225AC0: lw          $t6, 0x18($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X18);
    // 0x80225AC4: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80225AC8: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80225ACC: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x80225AD0: lwc1        $f10, 0x88($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X88);
    // 0x80225AD4: lwc1        $f6, 0x70($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X70);
    // 0x80225AD8: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80225ADC: jal         0x800040A8
    // 0x80225AE0: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    func_800040A8_4CA8(rdram, ctx);
        goto after_0;
    // 0x80225AE0: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    after_0:
    // 0x80225AE4: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x80225AE8: andi        $t7, $v0, 0x3FF
    ctx->r15 = ctx->r2 & 0X3FF;
    // 0x80225AEC: sh          $t7, 0x16($t8)
    MEM_H(0X16, ctx->r24) = ctx->r15;
    // 0x80225AF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225AF4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80225AF8: jr          $ra
    // 0x80225AFC: nop

    TRACE_RETURN()
    return;
    // 0x80225AFC: nop

;}
RECOMP_FUNC void func_8021EFB4_688994(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021EFB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021EFB8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8021EFBC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8021EFC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021EFC4: lwc1        $f10, 0x80($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X80);
    // 0x8021EFC8: lwc1        $f6, 0x68($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X68);
    // 0x8021EFCC: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8021EFD0: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8021EFD4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8021EFD8: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8021EFDC: jal         0x800040A8
    // 0x8021EFE0: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    func_800040A8_4CA8(rdram, ctx);
        goto after_0;
    // 0x8021EFE0: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    after_0:
    // 0x8021EFE4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8021EFE8: andi        $t6, $v0, 0x3FF
    ctx->r14 = ctx->r2 & 0X3FF;
    // 0x8021EFEC: sh          $t6, 0x98($a0)
    MEM_H(0X98, ctx->r4) = ctx->r14;
    // 0x8021EFF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021EFF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8021EFF8: jr          $ra
    // 0x8021EFFC: nop

    TRACE_RETURN()
    return;
    // 0x8021EFFC: nop

;}
RECOMP_FUNC void func_80212684_67C064(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80212684: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80212688: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8021268C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80212690: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80212694: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80212698: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8021269C: addiu       $a1, $a1, 0x1F60
    ctx->r5 = ADD32(ctx->r5, 0X1F60);
    // 0x802126A0: jal         0x80034E08
    // 0x802126A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x802126A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x802126A8: bne         $v0, $zero, L_802126B8
    if (ctx->r2 != 0) {
        // 0x802126AC: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_802126B8;
    }
    // 0x802126AC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x802126B0: b           L_802126EC
    // 0x802126B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802126EC;
    // 0x802126B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802126B8:
    // 0x802126B8: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x802126BC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802126C0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802126C4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x802126C8: swc1        $f4, 0x64($v1)
    MEM_W(0X64, ctx->r3) = ctx->f4.u32l;
    // 0x802126CC: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802126D0: swc1        $f6, 0x68($v1)
    MEM_W(0X68, ctx->r3) = ctx->f6.u32l;
    // 0x802126D4: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x802126D8: swc1        $f8, 0x74($v1)
    MEM_W(0X74, ctx->r3) = ctx->f8.u32l;
    // 0x802126DC: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802126E0: swc1        $f10, 0x80($v1)
    MEM_W(0X80, ctx->r3) = ctx->f10.u32l;
    // 0x802126E4: lwc1        $f16, -0x57A8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X57A8);
    // 0x802126E8: swc1        $f16, 0x8C($v1)
    MEM_W(0X8C, ctx->r3) = ctx->f16.u32l;
L_802126EC:
    // 0x802126EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802126F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802126F4: jr          $ra
    // 0x802126F8: nop

    TRACE_RETURN()
    return;
    // 0x802126F8: nop

;}
RECOMP_FUNC void func_8021F944_689324(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021F944: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021F948: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021F94C: jal         0x80013A24
    // 0x8021F950: addiu       $a0, $zero, 0x4E2
    ctx->r4 = ADD32(0, 0X4E2);
    func_80013A24_14624(rdram, ctx);
        goto after_0;
    // 0x8021F950: addiu       $a0, $zero, 0x4E2
    ctx->r4 = ADD32(0, 0X4E2);
    after_0:
    // 0x8021F954: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021F958: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8021F95C: jr          $ra
    // 0x8021F960: nop

    TRACE_RETURN()
    return;
    // 0x8021F960: nop

;}
RECOMP_FUNC void func_802180D0_681AB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802180D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802180D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802180D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802180DC: lwc1        $f4, 0x28($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X28);
    // 0x802180E0: lwc1        $f6, 0x60($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X60);
    // 0x802180E4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x802180E8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802180EC: swc1        $f8, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f8.u32l;
    // 0x802180F0: jal         0x8001B5AC
    // 0x802180F4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_0;
    // 0x802180F4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x802180F8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802180FC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80218100: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80218104: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80218108: sub.s       $f2, $f0, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x8021810C: lwc1        $f16, 0x28($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X28);
    // 0x80218110: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
    // 0x80218114: nop

    // 0x80218118: bc1fl       L_80218144
    if (!c1cs) {
        // 0x8021811C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80218144;
    }
    goto skip_0;
    // 0x8021811C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80218120: lbu         $t8, 0x5D($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X5D);
    // 0x80218124: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80218128: bnel        $t8, $at, L_80218140
    if (ctx->r24 != ctx->r1) {
        // 0x8021812C: swc1        $f2, 0x28($a1)
        MEM_W(0X28, ctx->r5) = ctx->f2.u32l;
            goto L_80218140;
    }
    goto skip_1;
    // 0x8021812C: swc1        $f2, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f2.u32l;
    skip_1:
    // 0x80218130: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80218134: b           L_80218140
    // 0x80218138: swc1        $f18, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f18.u32l;
        goto L_80218140;
    // 0x80218138: swc1        $f18, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f18.u32l;
    // 0x8021813C: swc1        $f2, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f2.u32l;
L_80218140:
    // 0x80218140: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80218144:
    // 0x80218144: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80218148: jr          $ra
    // 0x8021814C: nop

    TRACE_RETURN()
    return;
    // 0x8021814C: nop

;}
RECOMP_FUNC void func_8021BEC8_6858A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021BEC8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8021BECC: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x8021BED0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8021BED4: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x8021BED8: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x8021BEDC: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x8021BEE0: addiu       $a1, $a1, -0x41F8
    ctx->r5 = ADD32(ctx->r5, -0X41F8);
    // 0x8021BEE4: jal         0x80034E08
    // 0x8021BEE8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x8021BEE8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8021BEEC: bne         $v0, $zero, L_8021BEFC
    if (ctx->r2 != 0) {
        // 0x8021BEF0: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8021BEFC;
    }
    // 0x8021BEF0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8021BEF4: b           L_8021BF60
    // 0x8021BEF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021BF60;
    // 0x8021BEF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8021BEFC:
    // 0x8021BEFC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021BF00: lwc1        $f0, -0x5338($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5338);
    // 0x8021BF04: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8021BF08: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8021BF0C: lui         $a1, 0x801
    ctx->r5 = S32(0X801 << 16);
    // 0x8021BF10: addiu       $a1, $a1, 0x46D0
    ctx->r5 = ADD32(ctx->r5, 0X46D0);
    // 0x8021BF14: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8021BF18: lui         $a2, 0x8023
    ctx->r6 = S32(0X8023 << 16);
    // 0x8021BF1C: addiu       $t6, $zero, 0x4E1
    ctx->r14 = ADD32(0, 0X4E1);
    // 0x8021BF20: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x8021BF24: addiu       $a2, $a2, -0x5E30
    ctx->r6 = ADD32(ctx->r6, -0X5E30);
    // 0x8021BF28: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x8021BF2C: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x8021BF30: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8021BF34: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8021BF38: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8021BF3C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x8021BF40: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    // 0x8021BF44: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x8021BF48: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x8021BF4C: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x8021BF50: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8021BF54: jal         0x8000DBF0
    // 0x8021BF58: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x8021BF58: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x8021BF5C: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
L_8021BF60:
    // 0x8021BF60: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8021BF64: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8021BF68: jr          $ra
    // 0x8021BF6C: nop

    TRACE_RETURN()
    return;
    // 0x8021BF6C: nop

;}
RECOMP_FUNC void func_8021DAFC_6874DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021DAFC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8021DB00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021DB04: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8021DB08: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8021DB0C: lw          $v0, 0x94($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X94);
    // 0x8021DB10: lwc1        $f6, 0x68($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X68);
    // 0x8021DB14: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8021DB18: lwc1        $f4, 0x28($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X28);
    // 0x8021DB1C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8021DB20: swc1        $f8, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f8.u32l;
    // 0x8021DB24: lw          $a0, 0x94($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X94);
    // 0x8021DB28: jal         0x8001B5AC
    // 0x8021DB2C: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_0;
    // 0x8021DB2C: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    after_0:
    // 0x8021DB30: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x8021DB34: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8021DB38: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8021DB3C: addiu       $v1, $a1, 0x5C
    ctx->r3 = ADD32(ctx->r5, 0X5C);
    // 0x8021DB40: lw          $v0, 0x38($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X38);
    // 0x8021DB44: sub.s       $f12, $f0, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x8021DB48: lwc1        $f2, 0x28($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X28);
    // 0x8021DB4C: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x8021DB50: nop

    // 0x8021DB54: bc1fl       L_8021DB94
    if (!c1cs) {
        // 0x8021DB58: lw          $t9, 0x3C($v1)
        ctx->r25 = MEM_W(ctx->r3, 0X3C);
            goto L_8021DB94;
    }
    goto skip_0;
    // 0x8021DB58: lw          $t9, 0x3C($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X3C);
    skip_0:
    // 0x8021DB5C: lbu         $t6, 0x1($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X1);
    // 0x8021DB60: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8021DB64: bnel        $t6, $at, L_8021DB88
    if (ctx->r14 != ctx->r1) {
        // 0x8021DB68: swc1        $f12, 0x28($v0)
        MEM_W(0X28, ctx->r2) = ctx->f12.u32l;
            goto L_8021DB88;
    }
    goto skip_1;
    // 0x8021DB68: swc1        $f12, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f12.u32l;
    skip_1:
    // 0x8021DB6C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8021DB70: nop

    // 0x8021DB74: swc1        $f18, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f18.u32l;
    // 0x8021DB78: lw          $t7, 0x38($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X38);
    // 0x8021DB7C: b           L_8021DB90
    // 0x8021DB80: lwc1        $f2, 0x28($t7)
    ctx->f2.u32l = MEM_W(ctx->r15, 0X28);
        goto L_8021DB90;
    // 0x8021DB80: lwc1        $f2, 0x28($t7)
    ctx->f2.u32l = MEM_W(ctx->r15, 0X28);
    // 0x8021DB84: swc1        $f12, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f12.u32l;
L_8021DB88:
    // 0x8021DB88: lw          $t8, 0x38($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X38);
    // 0x8021DB8C: lwc1        $f2, 0x28($t8)
    ctx->f2.u32l = MEM_W(ctx->r24, 0X28);
L_8021DB90:
    // 0x8021DB90: lw          $t9, 0x3C($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X3C);
L_8021DB94:
    // 0x8021DB94: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021DB98: ldc1        $f16, -0x52D0($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0X52D0);
    // 0x8021DB9C: swc1        $f2, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f2.u32l;
    // 0x8021DBA0: lw          $t0, 0x40($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X40);
    // 0x8021DBA4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8021DBA8: swc1        $f2, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f2.u32l;
    // 0x8021DBAC: lwc1        $f14, 0x18($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X18);
    // 0x8021DBB0: cvt.d.s     $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f4.d = CVT_D_S(ctx->f14.fl);
    // 0x8021DBB4: c.lt.d      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.d < ctx->f4.d;
    // 0x8021DBB8: nop

    // 0x8021DBBC: bc1fl       L_8021DC30
    if (!c1cs) {
        // 0x8021DBC0: lwc1        $f14, 0x24($v1)
        ctx->f14.u32l = MEM_W(ctx->r3, 0X24);
            goto L_8021DC30;
    }
    goto skip_2;
    // 0x8021DBC0: lwc1        $f14, 0x24($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X24);
    skip_2:
    // 0x8021DBC4: lwc1        $f12, 0x14($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X14);
    // 0x8021DBC8: lwc1        $f2, 0x10($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X10);
    // 0x8021DBCC: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x8021DBD0: nop

    // 0x8021DBD4: bc1fl       L_8021DBEC
    if (!c1cs) {
        // 0x8021DBD8: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_8021DBEC;
    }
    goto skip_3;
    // 0x8021DBD8: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_3:
    // 0x8021DBDC: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x8021DBE0: b           L_8021DBEC
    // 0x8021DBE4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8021DBEC;
    // 0x8021DBE4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x8021DBE8: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_8021DBEC:
    // 0x8021DBEC: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x8021DBF0: nop

    // 0x8021DBF4: bc1fl       L_8021DC0C
    if (!c1cs) {
        // 0x8021DBF8: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_8021DC0C;
    }
    goto skip_4;
    // 0x8021DBF8: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_4:
    // 0x8021DBFC: swc1        $f12, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f12.u32l;
    // 0x8021DC00: b           L_8021DC2C
    // 0x8021DC04: swc1        $f18, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->f18.u32l;
        goto L_8021DC2C;
    // 0x8021DC04: swc1        $f18, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->f18.u32l;
    // 0x8021DC08: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_8021DC0C:
    // 0x8021DC0C: nop

    // 0x8021DC10: bc1fl       L_8021DC28
    if (!c1cs) {
        // 0x8021DC14: add.s       $f8, $f2, $f14
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_8021DC28;
    }
    goto skip_5;
    // 0x8021DC14: add.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f14.fl;
    skip_5:
    // 0x8021DC18: sub.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x8021DC1C: b           L_8021DC2C
    // 0x8021DC20: swc1        $f6, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f6.u32l;
        goto L_8021DC2C;
    // 0x8021DC20: swc1        $f6, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f6.u32l;
    // 0x8021DC24: add.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f14.fl;
L_8021DC28:
    // 0x8021DC28: swc1        $f8, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f8.u32l;
L_8021DC2C:
    // 0x8021DC2C: lwc1        $f14, 0x24($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X24);
L_8021DC30:
    // 0x8021DC30: cvt.d.s     $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f10.d = CVT_D_S(ctx->f14.fl);
    // 0x8021DC34: c.lt.d      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.d < ctx->f10.d;
    // 0x8021DC38: nop

    // 0x8021DC3C: bc1fl       L_8021DCB0
    if (!c1cs) {
        // 0x8021DC40: lwc1        $f14, 0x30($v1)
        ctx->f14.u32l = MEM_W(ctx->r3, 0X30);
            goto L_8021DCB0;
    }
    goto skip_6;
    // 0x8021DC40: lwc1        $f14, 0x30($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X30);
    skip_6:
    // 0x8021DC44: lwc1        $f12, 0x20($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X20);
    // 0x8021DC48: lwc1        $f2, 0x1C($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x8021DC4C: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x8021DC50: nop

    // 0x8021DC54: bc1fl       L_8021DC6C
    if (!c1cs) {
        // 0x8021DC58: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_8021DC6C;
    }
    goto skip_7;
    // 0x8021DC58: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_7:
    // 0x8021DC5C: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x8021DC60: b           L_8021DC6C
    // 0x8021DC64: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8021DC6C;
    // 0x8021DC64: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x8021DC68: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_8021DC6C:
    // 0x8021DC6C: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x8021DC70: nop

    // 0x8021DC74: bc1fl       L_8021DC8C
    if (!c1cs) {
        // 0x8021DC78: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_8021DC8C;
    }
    goto skip_8;
    // 0x8021DC78: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_8:
    // 0x8021DC7C: swc1        $f12, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f12.u32l;
    // 0x8021DC80: b           L_8021DCAC
    // 0x8021DC84: swc1        $f18, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f18.u32l;
        goto L_8021DCAC;
    // 0x8021DC84: swc1        $f18, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f18.u32l;
    // 0x8021DC88: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_8021DC8C:
    // 0x8021DC8C: nop

    // 0x8021DC90: bc1fl       L_8021DCA8
    if (!c1cs) {
        // 0x8021DC94: add.s       $f6, $f2, $f14
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_8021DCA8;
    }
    goto skip_9;
    // 0x8021DC94: add.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
    skip_9:
    // 0x8021DC98: sub.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x8021DC9C: b           L_8021DCAC
    // 0x8021DCA0: swc1        $f4, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f4.u32l;
        goto L_8021DCAC;
    // 0x8021DCA0: swc1        $f4, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f4.u32l;
    // 0x8021DCA4: add.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
L_8021DCA8:
    // 0x8021DCA8: swc1        $f6, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f6.u32l;
L_8021DCAC:
    // 0x8021DCAC: lwc1        $f14, 0x30($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X30);
L_8021DCB0:
    // 0x8021DCB0: cvt.d.s     $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f8.d = CVT_D_S(ctx->f14.fl);
    // 0x8021DCB4: c.lt.d      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.d < ctx->f8.d;
    // 0x8021DCB8: nop

    // 0x8021DCBC: bc1fl       L_8021DD30
    if (!c1cs) {
        // 0x8021DCC0: lhu         $t1, 0x2($v1)
        ctx->r9 = MEM_HU(ctx->r3, 0X2);
            goto L_8021DD30;
    }
    goto skip_10;
    // 0x8021DCC0: lhu         $t1, 0x2($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X2);
    skip_10:
    // 0x8021DCC4: lwc1        $f12, 0x2C($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X2C);
    // 0x8021DCC8: lwc1        $f2, 0x28($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X28);
    // 0x8021DCCC: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x8021DCD0: nop

    // 0x8021DCD4: bc1fl       L_8021DCEC
    if (!c1cs) {
        // 0x8021DCD8: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_8021DCEC;
    }
    goto skip_11;
    // 0x8021DCD8: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_11:
    // 0x8021DCDC: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x8021DCE0: b           L_8021DCEC
    // 0x8021DCE4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8021DCEC;
    // 0x8021DCE4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x8021DCE8: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_8021DCEC:
    // 0x8021DCEC: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x8021DCF0: nop

    // 0x8021DCF4: bc1fl       L_8021DD0C
    if (!c1cs) {
        // 0x8021DCF8: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_8021DD0C;
    }
    goto skip_12;
    // 0x8021DCF8: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_12:
    // 0x8021DCFC: swc1        $f12, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f12.u32l;
    // 0x8021DD00: b           L_8021DD2C
    // 0x8021DD04: swc1        $f18, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->f18.u32l;
        goto L_8021DD2C;
    // 0x8021DD04: swc1        $f18, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->f18.u32l;
    // 0x8021DD08: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_8021DD0C:
    // 0x8021DD0C: nop

    // 0x8021DD10: bc1fl       L_8021DD28
    if (!c1cs) {
        // 0x8021DD14: add.s       $f4, $f2, $f14
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_8021DD28;
    }
    goto skip_13;
    // 0x8021DD14: add.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f14.fl;
    skip_13:
    // 0x8021DD18: sub.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x8021DD1C: b           L_8021DD2C
    // 0x8021DD20: swc1        $f10, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f10.u32l;
        goto L_8021DD2C;
    // 0x8021DD20: swc1        $f10, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f10.u32l;
    // 0x8021DD24: add.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f14.fl;
L_8021DD28:
    // 0x8021DD28: swc1        $f4, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f4.u32l;
L_8021DD2C:
    // 0x8021DD2C: lhu         $t1, 0x2($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X2);
L_8021DD30:
    // 0x8021DD30: lhu         $t2, 0x4($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0X4);
    // 0x8021DD34: lw          $t7, 0x38($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X38);
    // 0x8021DD38: lui         $a2, 0x801
    ctx->r6 = S32(0X801 << 16);
    // 0x8021DD3C: addu        $t4, $t1, $t2
    ctx->r12 = ADD32(ctx->r9, ctx->r10);
    // 0x8021DD40: sh          $t4, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r12;
    // 0x8021DD44: andi        $t6, $t4, 0x3FF
    ctx->r14 = ctx->r12 & 0X3FF;
    // 0x8021DD48: sh          $t6, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r14;
    // 0x8021DD4C: sh          $t6, 0x16($t7)
    MEM_H(0X16, ctx->r15) = ctx->r14;
    // 0x8021DD50: lw          $t8, 0x38($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X38);
    // 0x8021DD54: lwc1        $f6, 0x10($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X10);
    // 0x8021DD58: addiu       $a2, $a2, -0x7BC8
    ctx->r6 = ADD32(ctx->r6, -0X7BC8);
    // 0x8021DD5C: swc1        $f6, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f6.u32l;
    // 0x8021DD60: lw          $t9, 0x38($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X38);
    // 0x8021DD64: lwc1        $f8, 0x1C($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x8021DD68: swc1        $f8, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->f8.u32l;
    // 0x8021DD6C: lw          $t0, 0x38($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X38);
    // 0x8021DD70: lwc1        $f10, 0x28($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X28);
    // 0x8021DD74: swc1        $f10, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->f10.u32l;
    // 0x8021DD78: lw          $a1, 0x38($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X38);
    // 0x8021DD7C: lw          $a0, 0x3C($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X3C);
    // 0x8021DD80: jal         0x8001B918
    // 0x8021DD84: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_8001B918_1C518(rdram, ctx);
        goto after_1;
    // 0x8021DD84: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_1:
    // 0x8021DD88: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x8021DD8C: lui         $a2, 0x801
    ctx->r6 = S32(0X801 << 16);
    // 0x8021DD90: addiu       $a2, $a2, -0x7000
    ctx->r6 = ADD32(ctx->r6, -0X7000);
    // 0x8021DD94: lw          $a0, 0x40($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X40);
    // 0x8021DD98: jal         0x8001B918
    // 0x8021DD9C: lw          $a1, 0x3C($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X3C);
    func_8001B918_1C518(rdram, ctx);
        goto after_2;
    // 0x8021DD9C: lw          $a1, 0x3C($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X3C);
    after_2:
    // 0x8021DDA0: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x8021DDA4: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8021DDA8: addiu       $a0, $a0, -0x3A38
    ctx->r4 = ADD32(ctx->r4, -0X3A38);
    // 0x8021DDAC: lbu         $t1, 0x34($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X34);
    // 0x8021DDB0: beql        $t1, $zero, L_8021DE24
    if (ctx->r9 == 0) {
        // 0x8021DDB4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8021DE24;
    }
    goto skip_14;
    // 0x8021DDB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_14:
    // 0x8021DDB8: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x8021DDBC: lui         $a1, 0x3
    ctx->r5 = S32(0X3 << 16);
    // 0x8021DDC0: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x8021DDC4: addu        $t4, $t3, $a1
    ctx->r12 = ADD32(ctx->r11, ctx->r5);
    // 0x8021DDC8: lh          $t5, 0x307E($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X307E);
    // 0x8021DDCC: lhu         $t2, 0x36($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0X36);
    // 0x8021DDD0: lw          $v0, 0x40($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X40);
    // 0x8021DDD4: andi        $t6, $t5, 0x3FF
    ctx->r14 = ctx->r13 & 0X3FF;
    // 0x8021DDD8: addu        $t9, $t2, $t6
    ctx->r25 = ADD32(ctx->r10, ctx->r14);
    // 0x8021DDDC: sh          $t9, 0x36($v1)
    MEM_H(0X36, ctx->r3) = ctx->r25;
    // 0x8021DDE0: lhu         $t8, 0x16($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X16);
    // 0x8021DDE4: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x8021DDE8: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8021DDEC: sh          $t0, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r8;
    // 0x8021DDF0: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8021DDF4: lw          $v0, 0x40($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X40);
    // 0x8021DDF8: addu        $t3, $t1, $a1
    ctx->r11 = ADD32(ctx->r9, ctx->r5);
    // 0x8021DDFC: lh          $t4, 0x3080($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X3080);
    // 0x8021DE00: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8021DE04: div         $zero, $t4, $at
    lo = S32(S64(S32(ctx->r12)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r12)) % S64(S32(ctx->r1)));
    // 0x8021DE08: mflo        $t5
    ctx->r13 = lo;
    // 0x8021DE0C: mtc1        $t5, $f6
    ctx->f6.u32l = ctx->r13;
    // 0x8021DE10: nop

    // 0x8021DE14: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8021DE18: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x8021DE1C: swc1        $f10, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f10.u32l;
    // 0x8021DE20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8021DE24:
    // 0x8021DE24: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8021DE28: jr          $ra
    // 0x8021DE2C: nop

    TRACE_RETURN()
    return;
    // 0x8021DE2C: nop

;}
RECOMP_FUNC void func_8020D978_677358(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020D978: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020D97C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020D980: jal         0x80013A24
    // 0x8020D984: addiu       $a0, $zero, 0x4DB
    ctx->r4 = ADD32(0, 0X4DB);
    func_80013A24_14624(rdram, ctx);
        goto after_0;
    // 0x8020D984: addiu       $a0, $zero, 0x4DB
    ctx->r4 = ADD32(0, 0X4DB);
    after_0:
    // 0x8020D988: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020D98C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020D990: jr          $ra
    // 0x8020D994: nop

    TRACE_RETURN()
    return;
    // 0x8020D994: nop

;}
RECOMP_FUNC void func_802154F4_67EED4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802154F4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x802154F8: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x802154FC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80215500: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x80215504: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80215508: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x8021550C: addiu       $a1, $a1, 0x4B34
    ctx->r5 = ADD32(ctx->r5, 0X4B34);
    // 0x80215510: jal         0x80034E08
    // 0x80215514: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x80215514: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80215518: bne         $v0, $zero, L_80215528
    if (ctx->r2 != 0) {
        // 0x8021551C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80215528;
    }
    // 0x8021551C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80215520: b           L_80215710
    // 0x80215524: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80215710;
    // 0x80215524: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80215528:
    // 0x80215528: lbu         $t6, 0x5F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X5F);
    // 0x8021552C: lui         $t0, 0x8023
    ctx->r8 = S32(0X8023 << 16);
    // 0x80215530: addiu       $t0, $t0, -0x4CDC
    ctx->r8 = ADD32(ctx->r8, -0X4CDC);
    // 0x80215534: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80215538: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x8021553C: bgez        $t6, L_80215554
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80215540: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80215554;
    }
    // 0x80215540: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80215544: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80215548: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8021554C: nop

    // 0x80215550: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_80215554:
    // 0x80215554: swc1        $f6, 0x80($v0)
    MEM_W(0X80, ctx->r2) = ctx->f6.u32l;
    // 0x80215558: lbu         $t7, 0x63($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X63);
    // 0x8021555C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80215560: lui         $t6, 0x8023
    ctx->r14 = S32(0X8023 << 16);
    // 0x80215564: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x80215568: addiu       $a1, $a1, 0x120
    ctx->r5 = ADD32(ctx->r5, 0X120);
    // 0x8021556C: bgez        $t7, L_80215580
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80215570: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_80215580;
    }
    // 0x80215570: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80215574: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80215578: nop

    // 0x8021557C: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
L_80215580:
    // 0x80215580: swc1        $f16, 0x8C($v0)
    MEM_W(0X8C, ctx->r2) = ctx->f16.u32l;
    // 0x80215584: lbu         $t8, 0x67($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X67);
    // 0x80215588: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8021558C: lui         $t5, 0x8023
    ctx->r13 = S32(0X8023 << 16);
    // 0x80215590: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x80215594: addiu       $t6, $t6, -0x60E0
    ctx->r14 = ADD32(ctx->r14, -0X60E0);
    // 0x80215598: bgez        $t8, L_802155AC
    if (SIGNED(ctx->r24) >= 0) {
        // 0x8021559C: cvt.s.w     $f8, $f4
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
            goto L_802155AC;
    }
    // 0x8021559C: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802155A0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802155A4: nop

    // 0x802155A8: add.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f6.fl;
L_802155AC:
    // 0x802155AC: swc1        $f8, 0x98($v0)
    MEM_W(0X98, ctx->r2) = ctx->f8.u32l;
    // 0x802155B0: lbu         $t9, 0x6B($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X6B);
    // 0x802155B4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802155B8: addiu       $t5, $t5, -0x6098
    ctx->r13 = ADD32(ctx->r13, -0X6098);
    // 0x802155BC: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x802155C0: ori         $t8, $zero, 0x8000
    ctx->r24 = 0 | 0X8000;
    // 0x802155C4: bgez        $t9, L_802155D8
    if (SIGNED(ctx->r25) >= 0) {
        // 0x802155C8: cvt.s.w     $f18, $f10
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
            goto L_802155D8;
    }
    // 0x802155C8: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802155CC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802155D0: nop

    // 0x802155D4: add.s       $f18, $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f16.fl;
L_802155D8:
    // 0x802155D8: swc1        $f18, 0xA4($v0)
    MEM_W(0XA4, ctx->r2) = ctx->f18.u32l;
    // 0x802155DC: lw          $t4, 0x6C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X6C);
    // 0x802155E0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802155E4: ori         $t9, $zero, 0x8000
    ctx->r25 = 0 | 0X8000;
    // 0x802155E8: bnel        $t4, $at, L_802155FC
    if (ctx->r12 != ctx->r1) {
        // 0x802155EC: sw          $t6, 0xB0($v0)
        MEM_W(0XB0, ctx->r2) = ctx->r14;
            goto L_802155FC;
    }
    goto skip_0;
    // 0x802155EC: sw          $t6, 0xB0($v0)
    MEM_W(0XB0, ctx->r2) = ctx->r14;
    skip_0:
    // 0x802155F0: b           L_802155FC
    // 0x802155F4: sw          $t5, 0xB0($v0)
    MEM_W(0XB0, ctx->r2) = ctx->r13;
        goto L_802155FC;
    // 0x802155F4: sw          $t5, 0xB0($v0)
    MEM_W(0XB0, ctx->r2) = ctx->r13;
    // 0x802155F8: sw          $t6, 0xB0($v0)
    MEM_W(0XB0, ctx->r2) = ctx->r14;
L_802155FC:
    // 0x802155FC: lwc1        $f0, 0x58($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80215600: lw          $a2, 0x0($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X0);
    // 0x80215604: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80215608: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x8021560C: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80215610: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80215614: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x80215618: ori         $t4, $zero, 0x8000
    ctx->r12 = 0 | 0X8000;
    // 0x8021561C: addiu       $t5, $zero, 0x4DA
    ctx->r13 = ADD32(0, 0X4DA);
    // 0x80215620: or          $t7, $a2, $at
    ctx->r15 = ctx->r6 | ctx->r1;
    // 0x80215624: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x80215628: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
    // 0x8021562C: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x80215630: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x80215634: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80215638: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8021563C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x80215640: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    // 0x80215644: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80215648: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x8021564C: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80215650: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80215654: jal         0x8000DBF0
    // 0x80215658: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x80215658: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x8021565C: lbu         $t6, 0x5($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X5);
    // 0x80215660: lui         $t0, 0x8023
    ctx->r8 = S32(0X8023 << 16);
    // 0x80215664: addiu       $t0, $t0, -0x4CDC
    ctx->r8 = ADD32(ctx->r8, -0X4CDC);
    // 0x80215668: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8021566C: sb          $t7, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r15;
    // 0x80215670: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x80215674: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x80215678: lui         $t7, 0xFB00
    ctx->r15 = S32(0XFB00 << 16);
    // 0x8021567C: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x80215680: sw          $t8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r24;
    // 0x80215684: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80215688: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x8021568C: lui         $t3, 0x8FFF
    ctx->r11 = S32(0X8FFF << 16);
    // 0x80215690: ori         $t3, $t3, 0xFFFF
    ctx->r11 = ctx->r11 | 0XFFFF;
    // 0x80215694: lw          $t5, 0xB0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0XB0);
    // 0x80215698: sw          $t5, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r13;
    // 0x8021569C: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x802156A0: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x802156A4: sw          $t6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r14;
    // 0x802156A8: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x802156AC: lbu         $t6, 0x63($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X63);
    // 0x802156B0: lbu         $t9, 0x5F($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X5F);
    // 0x802156B4: lbu         $t5, 0x67($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X67);
    // 0x802156B8: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x802156BC: sll         $t4, $t9, 24
    ctx->r12 = S32(ctx->r25 << 24);
    // 0x802156C0: lbu         $t9, 0x6B($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X6B);
    // 0x802156C4: or          $t8, $t4, $t7
    ctx->r24 = ctx->r12 | ctx->r15;
    // 0x802156C8: sll         $t6, $t5, 8
    ctx->r14 = S32(ctx->r13 << 8);
    // 0x802156CC: or          $t4, $t8, $t6
    ctx->r12 = ctx->r24 | ctx->r14;
    // 0x802156D0: or          $t5, $t4, $t9
    ctx->r13 = ctx->r12 | ctx->r25;
    // 0x802156D4: sw          $t5, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r13;
    // 0x802156D8: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x802156DC: lui         $t6, 0xB800
    ctx->r14 = S32(0XB800 << 16);
    // 0x802156E0: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x802156E4: sw          $t8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r24;
    // 0x802156E8: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x802156EC: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x802156F0: lw          $t2, 0x30($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X30);
    // 0x802156F4: lw          $t7, 0x0($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X0);
    // 0x802156F8: subu        $t4, $t3, $t2
    ctx->r12 = SUB32(ctx->r11, ctx->r10);
    // 0x802156FC: and         $t9, $t7, $t4
    ctx->r25 = ctx->r15 & ctx->r12;
    // 0x80215700: and         $a1, $t9, $t3
    ctx->r5 = ctx->r25 & ctx->r11;
    // 0x80215704: jal         0x80040620
    // 0x80215708: and         $a0, $t2, $t3
    ctx->r4 = ctx->r10 & ctx->r11;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_2;
    // 0x80215708: and         $a0, $t2, $t3
    ctx->r4 = ctx->r10 & ctx->r11;
    after_2:
    // 0x8021570C: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
L_80215710:
    // 0x80215710: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80215714: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80215718: jr          $ra
    // 0x8021571C: nop

    TRACE_RETURN()
    return;
    // 0x8021571C: nop

;}
RECOMP_FUNC void func_80215380_67ED60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80215380: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x80215384: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80215388: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8021538C: andi        $t7, $a2, 0xFF
    ctx->r15 = ctx->r6 & 0XFF;
    // 0x80215390: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x80215394: andi        $t8, $a3, 0xFF
    ctx->r24 = ctx->r7 & 0XFF;
    // 0x80215398: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    // 0x8021539C: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x802153A0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802153A4: bgez        $t6, L_802153BC
    if (SIGNED(ctx->r14) >= 0) {
        // 0x802153A8: cvt.s.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
            goto L_802153BC;
    }
    // 0x802153A8: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802153AC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802153B0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802153B4: nop

    // 0x802153B8: add.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
L_802153BC:
    // 0x802153BC: mtc1        $a2, $f8
    ctx->f8.u32l = ctx->r6;
    // 0x802153C0: swc1        $f0, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->f0.u32l;
    // 0x802153C4: bgez        $a2, L_802153DC
    if (SIGNED(ctx->r6) >= 0) {
        // 0x802153C8: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_802153DC;
    }
    // 0x802153C8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802153CC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802153D0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802153D4: nop

    // 0x802153D8: add.s       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f16.fl;
L_802153DC:
    // 0x802153DC: mtc1        $a3, $f18
    ctx->f18.u32l = ctx->r7;
    // 0x802153E0: swc1        $f10, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->f10.u32l;
    // 0x802153E4: bgez        $a3, L_802153FC
    if (SIGNED(ctx->r7) >= 0) {
        // 0x802153E8: cvt.s.w     $f4, $f18
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
            goto L_802153FC;
    }
    // 0x802153E8: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x802153EC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802153F0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802153F4: nop

    // 0x802153F8: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_802153FC:
    // 0x802153FC: swc1        $f4, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->f4.u32l;
    // 0x80215400: lbu         $t9, 0x13($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X13);
    // 0x80215404: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80215408: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8021540C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80215410: bgez        $t9, L_80215424
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80215414: cvt.s.w     $f16, $f8
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
            goto L_80215424;
    }
    // 0x80215414: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80215418: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8021541C: nop

    // 0x80215420: add.s       $f16, $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f10.fl;
L_80215424:
    // 0x80215424: lwc1        $f18, 0x80($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X80);
    // 0x80215428: swc1        $f16, 0xA8($a0)
    MEM_W(0XA8, ctx->r4) = ctx->f16.u32l;
    // 0x8021542C: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x80215430: nop

    // 0x80215434: bc1fl       L_80215458
    if (!c1cs) {
        // 0x80215438: lwc1        $f8, 0x28($v0)
        ctx->f8.u32l = MEM_W(ctx->r2, 0X28);
            goto L_80215458;
    }
    goto skip_0;
    // 0x80215438: lwc1        $f8, 0x28($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X28);
    skip_0:
    // 0x8021543C: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80215440: lwc1        $f6, 0x28($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X28);
    // 0x80215444: lwc1        $f4, 0x24($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X24);
    // 0x80215448: sub.s       $f0, $f6, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x8021544C: b           L_80215460
    // 0x80215450: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80215460;
    // 0x80215450: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80215454: lwc1        $f8, 0x28($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X28);
L_80215458:
    // 0x80215458: lwc1        $f10, 0x24($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X24);
    // 0x8021545C: sub.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f10.fl;
L_80215460:
    // 0x80215460: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80215464: lwc1        $f2, 0x34($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X34);
    // 0x80215468: lwc1        $f12, 0x30($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X30);
    // 0x8021546C: div.s       $f16, $f0, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
    // 0x80215470: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x80215474: nop

    // 0x80215478: bc1f        L_8021548C
    if (!c1cs) {
        // 0x8021547C: swc1        $f16, 0x2C($v0)
        MEM_W(0X2C, ctx->r2) = ctx->f16.u32l;
            goto L_8021548C;
    }
    // 0x8021547C: swc1        $f16, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f16.u32l;
    // 0x80215480: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x80215484: b           L_80215490
    // 0x80215488: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80215490;
    // 0x80215488: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_8021548C:
    // 0x8021548C: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_80215490:
    // 0x80215490: div.s       $f18, $f0, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
    // 0x80215494: lwc1        $f2, 0x40($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X40);
    // 0x80215498: lwc1        $f12, 0x3C($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X3C);
    // 0x8021549C: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x802154A0: nop

    // 0x802154A4: bc1f        L_802154B8
    if (!c1cs) {
        // 0x802154A8: swc1        $f18, 0x38($v0)
        MEM_W(0X38, ctx->r2) = ctx->f18.u32l;
            goto L_802154B8;
    }
    // 0x802154A8: swc1        $f18, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->f18.u32l;
    // 0x802154AC: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x802154B0: b           L_802154BC
    // 0x802154B4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_802154BC;
    // 0x802154B4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_802154B8:
    // 0x802154B8: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_802154BC:
    // 0x802154BC: div.s       $f6, $f0, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
    // 0x802154C0: lwc1        $f2, 0x4C($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x802154C4: lwc1        $f12, 0x48($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X48);
    // 0x802154C8: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x802154CC: nop

    // 0x802154D0: bc1f        L_802154E4
    if (!c1cs) {
        // 0x802154D4: swc1        $f6, 0x44($v0)
        MEM_W(0X44, ctx->r2) = ctx->f6.u32l;
            goto L_802154E4;
    }
    // 0x802154D4: swc1        $f6, 0x44($v0)
    MEM_W(0X44, ctx->r2) = ctx->f6.u32l;
    // 0x802154D8: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x802154DC: b           L_802154E8
    // 0x802154E0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_802154E8;
    // 0x802154E0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_802154E4:
    // 0x802154E4: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_802154E8:
    // 0x802154E8: div.s       $f4, $f0, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
    // 0x802154EC: jr          $ra
    // 0x802154F0: swc1        $f4, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x802154F0: swc1        $f4, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_8021F910_6892F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021F910: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021F914: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021F918: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8021F91C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8021F920: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8021F924: sb          $t6, -0x3A2C($at)
    MEM_B(-0X3A2C, ctx->r1) = ctx->r14;
    // 0x8021F928: jal         0x80013AC4
    // 0x8021F92C: addiu       $a0, $a0, -0x5BAC
    ctx->r4 = ADD32(ctx->r4, -0X5BAC);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8021F92C: addiu       $a0, $a0, -0x5BAC
    ctx->r4 = ADD32(ctx->r4, -0X5BAC);
    after_0:
    // 0x8021F930: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021F934: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8021F938: sb          $zero, -0x3A2C($at)
    MEM_B(-0X3A2C, ctx->r1) = 0;
    // 0x8021F93C: jr          $ra
    // 0x8021F940: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8021F940: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229244_692C24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229244: lwc1        $f4, 0x64($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X64);
    // 0x80229248: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x8022924C: lwc1        $f6, 0x70($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X70);
    // 0x80229250: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
    // 0x80229254: lwc1        $f8, 0x7C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x80229258: jr          $ra
    // 0x8022925C: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x8022925C: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_80225434_68EE14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225434: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80225438: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x8022543C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80225440: sw          $a2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r6;
    // 0x80225444: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x80225448: sw          $a3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r7;
    // 0x8022544C: addiu       $a1, $a1, 0x5130
    ctx->r5 = ADD32(ctx->r5, 0X5130);
    // 0x80225450: jal         0x80034E08
    // 0x80225454: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x80225454: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80225458: bne         $v0, $zero, L_80225468
    if (ctx->r2 != 0) {
        // 0x8022545C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80225468;
    }
    // 0x8022545C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80225460: b           L_8022563C
    // 0x80225464: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8022563C;
    // 0x80225464: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80225468:
    // 0x80225468: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8022546C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80225470: lwc1        $f0, 0x78($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80225474: lui         $t6, 0x8006
    ctx->r14 = S32(0X8006 << 16);
    // 0x80225478: addiu       $t6, $t6, 0x36E0
    ctx->r14 = ADD32(ctx->r14, 0X36E0);
    // 0x8022547C: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x80225480: swc1        $f4, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f4.u32l;
    // 0x80225484: lui         $t0, 0x8023
    ctx->r8 = S32(0X8023 << 16);
    // 0x80225488: addiu       $t0, $t0, -0x4CDC
    ctx->r8 = ADD32(ctx->r8, -0X4CDC);
    // 0x8022548C: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x80225490: lw          $a2, 0x0($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X0);
    // 0x80225494: addiu       $a1, $a1, 0x48
    ctx->r5 = ADD32(ctx->r5, 0X48);
    // 0x80225498: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x8022549C: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x802254A0: lwc1        $f8, 0x74($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X74);
    // 0x802254A4: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x802254A8: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x802254AC: addiu       $t8, $zero, 0x4AE
    ctx->r24 = ADD32(0, 0X4AE);
    // 0x802254B0: or          $t7, $a2, $at
    ctx->r15 = ctx->r6 | ctx->r1;
    // 0x802254B4: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x802254B8: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x802254BC: sw          $a0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r4;
    // 0x802254C0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x802254C4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802254C8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802254CC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802254D0: lw          $a3, 0x6C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X6C);
    // 0x802254D4: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x802254D8: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x802254DC: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x802254E0: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x802254E4: jal         0x8000DBF0
    // 0x802254E8: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x802254E8: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x802254EC: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x802254F0: lwc1        $f0, 0x78($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X78);
    // 0x802254F4: lui         $t0, 0x8023
    ctx->r8 = S32(0X8023 << 16);
    // 0x802254F8: addiu       $t4, $a0, 0x5C
    ctx->r12 = ADD32(ctx->r4, 0X5C);
    // 0x802254FC: sw          $v0, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r2;
    // 0x80225500: lbu         $t9, 0x5($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X5);
    // 0x80225504: addiu       $t0, $t0, -0x4CDC
    ctx->r8 = ADD32(ctx->r8, -0X4CDC);
    // 0x80225508: lui         $t7, 0x600
    ctx->r15 = S32(0X600 << 16);
    // 0x8022550C: addiu       $t5, $t9, 0x1
    ctx->r13 = ADD32(ctx->r25, 0X1);
    // 0x80225510: sb          $t5, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r13;
    // 0x80225514: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x80225518: lui         $t5, 0xFB00
    ctx->r13 = S32(0XFB00 << 16);
    // 0x8022551C: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x80225520: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x80225524: sw          $t6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r14;
    // 0x80225528: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8022552C: lw          $t8, 0x4($t4)
    ctx->r24 = MEM_W(ctx->r12, 0X4);
    // 0x80225530: lui         $t6, 0x2020
    ctx->r14 = S32(0X2020 << 16);
    // 0x80225534: ori         $t6, $t6, 0xFF00
    ctx->r14 = ctx->r14 | 0XFF00;
    // 0x80225538: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x8022553C: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x80225540: lui         $t8, 0xB800
    ctx->r24 = S32(0XB800 << 16);
    // 0x80225544: addiu       $a1, $a1, 0x170
    ctx->r5 = ADD32(ctx->r5, 0X170);
    // 0x80225548: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x8022554C: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x80225550: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x80225554: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x80225558: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x8022555C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80225560: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x80225564: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x80225568: sw          $t7, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r15;
    // 0x8022556C: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80225570: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80225574: lw          $a2, 0x0($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X0);
    // 0x80225578: lwc1        $f16, 0x74($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X74);
    // 0x8022557C: lwc1        $f10, 0x70($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80225580: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x80225584: addiu       $t5, $zero, 0x4AE
    ctx->r13 = ADD32(0, 0X4AE);
    // 0x80225588: or          $t9, $a2, $at
    ctx->r25 = ctx->r6 | ctx->r1;
    // 0x8022558C: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x80225590: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
    // 0x80225594: sw          $t4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r12;
    // 0x80225598: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x8022559C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802255A0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802255A4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802255A8: lw          $a3, 0x6C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X6C);
    // 0x802255AC: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x802255B0: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x802255B4: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x802255B8: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x802255BC: jal         0x8000DBF0
    // 0x802255C0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_2;
    // 0x802255C0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_2:
    // 0x802255C4: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x802255C8: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x802255CC: lui         $t0, 0x8023
    ctx->r8 = S32(0X8023 << 16);
    // 0x802255D0: sw          $v0, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->r2;
    // 0x802255D4: lbu         $t6, 0x5($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X5);
    // 0x802255D8: addiu       $t0, $t0, -0x4CDC
    ctx->r8 = ADD32(ctx->r8, -0X4CDC);
    // 0x802255DC: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x802255E0: addiu       $t7, $t6, 0x2
    ctx->r15 = ADD32(ctx->r14, 0X2);
    // 0x802255E4: sb          $t7, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r15;
    // 0x802255E8: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x802255EC: lui         $t7, 0xFB00
    ctx->r15 = S32(0XFB00 << 16);
    // 0x802255F0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x802255F4: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x802255F8: sw          $t8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r24;
    // 0x802255FC: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80225600: lw          $t5, 0x4($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X4);
    // 0x80225604: lui         $t8, 0x6060
    ctx->r24 = S32(0X6060 << 16);
    // 0x80225608: ori         $t8, $t8, 0xFF00
    ctx->r24 = ctx->r24 | 0XFF00;
    // 0x8022560C: sw          $t5, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r13;
    // 0x80225610: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x80225614: lui         $t5, 0xB800
    ctx->r13 = S32(0XB800 << 16);
    // 0x80225618: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x8022561C: sw          $t6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r14;
    // 0x80225620: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x80225624: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80225628: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x8022562C: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x80225630: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x80225634: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80225638: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
L_8022563C:
    // 0x8022563C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80225640: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x80225644: jr          $ra
    // 0x80225648: nop

    TRACE_RETURN()
    return;
    // 0x80225648: nop

;}
RECOMP_FUNC void func_80228130_691B10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228130: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228134: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80228138: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8022813C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228140: lwc1        $f10, 0x80($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X80);
    // 0x80228144: lwc1        $f6, 0x68($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X68);
    // 0x80228148: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8022814C: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80228150: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80228154: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80228158: jal         0x800040A8
    // 0x8022815C: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    func_800040A8_4CA8(rdram, ctx);
        goto after_0;
    // 0x8022815C: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    after_0:
    // 0x80228160: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80228164: andi        $t6, $v0, 0x3FF
    ctx->r14 = ctx->r2 & 0X3FF;
    // 0x80228168: sh          $t6, 0x8C($a0)
    MEM_H(0X8C, ctx->r4) = ctx->r14;
    // 0x8022816C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228170: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80228174: jr          $ra
    // 0x80228178: nop

    TRACE_RETURN()
    return;
    // 0x80228178: nop

;}
RECOMP_FUNC void func_8021D198_686B78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021D198: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8021D19C: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x8021D1A0: swc1        $f12, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f12.u32l;
    // 0x8021D1A4: swc1        $f12, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f12.u32l;
    // 0x8021D1A8: jr          $ra
    // 0x8021D1AC: swc1        $f12, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f12.u32l;
    TRACE_RETURN()
    return;
    // 0x8021D1AC: swc1        $f12, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_802138E8_67D2C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802138E8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x802138EC: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x802138F0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x802138F4: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x802138F8: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x802138FC: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x80213900: addiu       $a1, $a1, 0x371C
    ctx->r5 = ADD32(ctx->r5, 0X371C);
    // 0x80213904: jal         0x80034E08
    // 0x80213908: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x80213908: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8021390C: bne         $v0, $zero, L_8021391C
    if (ctx->r2 != 0) {
        // 0x80213910: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8021391C;
    }
    // 0x80213910: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80213914: b           L_802139B4
    // 0x80213918: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802139B4;
    // 0x80213918: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8021391C:
    // 0x8021391C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80213920: lwc1        $f2, -0x5734($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X5734);
    // 0x80213924: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80213928: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x8021392C: addiu       $a1, $a1, 0x1890
    ctx->r5 = ADD32(ctx->r5, 0X1890);
    // 0x80213930: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x80213934: lui         $a2, 0x8007
    ctx->r6 = S32(0X8007 << 16);
    // 0x80213938: addiu       $t6, $zero, 0x4D8
    ctx->r14 = ADD32(0, 0X4D8);
    // 0x8021393C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80213940: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x80213944: addiu       $a2, $a2, -0x2768
    ctx->r6 = ADD32(ctx->r6, -0X2768);
    // 0x80213948: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x8021394C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80213950: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80213954: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80213958: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x8021395C: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    // 0x80213960: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    // 0x80213964: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x80213968: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x8021396C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x80213970: jal         0x8000DBF0
    // 0x80213974: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x80213974: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x80213978: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x8021397C: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x80213980: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80213984: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x80213988: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x8021398C: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80213990: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x80213994: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80213998: swc1        $f4, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f4.u32l;
    // 0x8021399C: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x802139A0: swc1        $f6, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f6.u32l;
    // 0x802139A4: lwc1        $f8, 0x54($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X54);
    // 0x802139A8: sh          $t7, 0x18($v1)
    MEM_H(0X18, ctx->r3) = ctx->r15;
    // 0x802139AC: swc1        $f10, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f10.u32l;
    // 0x802139B0: swc1        $f8, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f8.u32l;
L_802139B4:
    // 0x802139B4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x802139B8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x802139BC: jr          $ra
    // 0x802139C0: nop

    TRACE_RETURN()
    return;
    // 0x802139C0: nop

;}
