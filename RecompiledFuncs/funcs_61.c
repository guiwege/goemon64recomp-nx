#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_801F3950_61ED30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F3950: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F3954: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F3958: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F395C: lw          $v0, 0x9C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X9C);
    // 0x801F3960: addiu       $at, $zero, 0x5B
    ctx->r1 = ADD32(0, 0X5B);
    // 0x801F3964: lhu         $t6, 0x5C($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X5C);
    // 0x801F3968: beql        $t6, $at, L_801F399C
    if (ctx->r14 == ctx->r1) {
        // 0x801F396C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801F399C;
    }
    goto skip_0;
    // 0x801F396C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801F3970: jal         0x801D31F0
    // 0x801F3974: lui         $a1, 0xC270
    ctx->r5 = S32(0XC270 << 16);
    func_801D31F0_5FE5D0(rdram, ctx);
        goto after_0;
    // 0x801F3974: lui         $a1, 0xC270
    ctx->r5 = S32(0XC270 << 16);
    after_0:
    // 0x801F3978: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801F397C: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F3980: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x801F3984: nop

    // 0x801F3988: bc1fl       L_801F399C
    if (!c1cs) {
        // 0x801F398C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801F399C;
    }
    goto skip_1;
    // 0x801F398C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x801F3990: jal         0x8003521C
    // 0x801F3994: addiu       $a0, $a0, 0x39A8
    ctx->r4 = ADD32(ctx->r4, 0X39A8);
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x801F3994: addiu       $a0, $a0, 0x39A8
    ctx->r4 = ADD32(ctx->r4, 0X39A8);
    after_1:
    // 0x801F3998: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F399C:
    // 0x801F399C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F39A0: jr          $ra
    // 0x801F39A4: nop

    TRACE_RETURN()
    return;
    // 0x801F39A4: nop

;}
RECOMP_FUNC void func_802007D4_62BBB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802007D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802007D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802007DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802007E0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x802007E4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802007E8: jal         0x8003521C
    // 0x802007EC: addiu       $a0, $a0, 0x818
    ctx->r4 = ADD32(ctx->r4, 0X818);
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x802007EC: addiu       $a0, $a0, 0x818
    ctx->r4 = ADD32(ctx->r4, 0X818);
    after_0:
    // 0x802007F0: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x802007F4: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x802007F8: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x802007FC: swc1        $f4, 0x90($v0)
    MEM_W(0X90, ctx->r2) = ctx->f4.u32l;
    // 0x80200800: lwc1        $f6, 0x10($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X10);
    // 0x80200804: swc1        $f6, 0x94($v0)
    MEM_W(0X94, ctx->r2) = ctx->f6.u32l;
    // 0x80200808: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020080C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80200810: jr          $ra
    // 0x80200814: nop

    TRACE_RETURN()
    return;
    // 0x80200814: nop

;}
RECOMP_FUNC void func_801FC75C_627B3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FC75C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801FC760: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x801FC764: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x801FC768: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801FC76C: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x801FC770: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x801FC774: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x801FC778: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801FC77C: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x801FC780: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801FC784: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    // 0x801FC788: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x801FC78C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x801FC790: jal         0x801D46B8
    // 0x801FC794: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    func_801D46B8_5FFA98(rdram, ctx);
        goto after_0;
    // 0x801FC794: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    after_0:
    // 0x801FC798: jal         0x801D614C
    // 0x801FC79C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D614C_60152C(rdram, ctx);
        goto after_1;
    // 0x801FC79C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801FC7A0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801FC7A4: jal         0x801D3018
    // 0x801FC7A8: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    func_801D3018_5FE3F8(rdram, ctx);
        goto after_2;
    // 0x801FC7A8: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    after_2:
    // 0x801FC7AC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801FC7B0: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    // 0x801FC7B4: jal         0x801D3118
    // 0x801FC7B8: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_801D3118_5FE4F8(rdram, ctx);
        goto after_3;
    // 0x801FC7B8: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_3:
    // 0x801FC7BC: beq         $v0, $zero, L_801FC7E0
    if (ctx->r2 == 0) {
        // 0x801FC7C0: addiu       $a0, $zero, 0x248
        ctx->r4 = ADD32(0, 0X248);
            goto L_801FC7E0;
    }
    // 0x801FC7C0: addiu       $a0, $zero, 0x248
    ctx->r4 = ADD32(0, 0X248);
    // 0x801FC7C4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801FC7C8: lw          $a1, -0x1130($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1130);
    // 0x801FC7CC: lui         $a3, 0x44BB
    ctx->r7 = S32(0X44BB << 16);
    // 0x801FC7D0: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x801FC7D4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x801FC7D8: jal         0x8000F3D8
    // 0x801FC7DC: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    func_8000F3D8_FFD8(rdram, ctx);
        goto after_4;
    // 0x801FC7DC: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    after_4:
L_801FC7E0:
    // 0x801FC7E0: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x801FC7E4: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x801FC7E8: lwc1        $f12, 0x70($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X70);
    // 0x801FC7EC: jal         0x8000EB08
    // 0x801FC7F0: lwc1        $f14, 0x78($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X78);
    func_8000EB08_F708(rdram, ctx);
        goto after_5;
    // 0x801FC7F0: lwc1        $f14, 0x78($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X78);
    after_5:
    // 0x801FC7F4: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x801FC7F8: sh          $zero, 0x14($s1)
    MEM_H(0X14, ctx->r17) = 0;
    // 0x801FC7FC: sh          $zero, 0x18($s1)
    MEM_H(0X18, ctx->r17) = 0;
    // 0x801FC800: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801FC804: lw          $t7, -0x1130($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1130);
    // 0x801FC808: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801FC80C: jal         0x8000ED00
    // 0x801FC810: lw          $a1, 0x1CC($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X1CC);
    func_8000ED00_F900(rdram, ctx);
        goto after_6;
    // 0x801FC810: lw          $a1, 0x1CC($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X1CC);
    after_6:
    // 0x801FC814: lui         $at, 0x4064
    ctx->r1 = S32(0X4064 << 16);
    // 0x801FC818: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x801FC81C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801FC820: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x801FC824: addiu       $t8, $zero, 0x64
    ctx->r24 = ADD32(0, 0X64);
    // 0x801FC828: c.le.d      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.d <= ctx->f4.d;
    // 0x801FC82C: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x801FC830: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801FC834: addiu       $t0, $s0, 0x70
    ctx->r8 = ADD32(ctx->r16, 0X70);
    // 0x801FC838: bc1f        L_801FC88C
    if (!c1cs) {
        // 0x801FC83C: addiu       $t1, $s0, 0x74
        ctx->r9 = ADD32(ctx->r16, 0X74);
            goto L_801FC88C;
    }
    // 0x801FC83C: addiu       $t1, $s0, 0x74
    ctx->r9 = ADD32(ctx->r16, 0X74);
    // 0x801FC840: swc1        $f20, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f20.u32l;
    // 0x801FC844: swc1        $f20, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f20.u32l;
    // 0x801FC848: swc1        $f20, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f20.u32l;
    // 0x801FC84C: sw          $t8, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r24;
    // 0x801FC850: sw          $t9, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r25;
    // 0x801FC854: lw          $a3, 0x10($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X10);
    // 0x801FC858: lwc1        $f14, 0x8($s1)
    ctx->f14.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801FC85C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801FC860: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x801FC864: addiu       $t2, $s0, 0x78
    ctx->r10 = ADD32(ctx->r16, 0X78);
    // 0x801FC868: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x801FC86C: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x801FC870: jal         0x8000E4E4
    // 0x801FC874: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_8000E4E4_F0E4(rdram, ctx);
        goto after_7;
    // 0x801FC874: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_7:
    // 0x801FC878: addiu       $t3, $zero, 0x7
    ctx->r11 = ADD32(0, 0X7);
    // 0x801FC87C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FC880: sw          $t3, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = ctx->r11;
    // 0x801FC884: jal         0x8003521C
    // 0x801FC888: addiu       $a0, $a0, -0x375C
    ctx->r4 = ADD32(ctx->r4, -0X375C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_8;
    // 0x801FC888: addiu       $a0, $a0, -0x375C
    ctx->r4 = ADD32(ctx->r4, -0X375C);
    after_8:
L_801FC88C:
    // 0x801FC88C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x801FC890: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x801FC894: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x801FC898: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x801FC89C: jr          $ra
    // 0x801FC8A0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x801FC8A0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80202598_62D978(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80202598: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8020259C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802025A0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802025A4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802025A8: jal         0x80203F88
    // 0x802025AC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_80203F88_62F368(rdram, ctx);
        goto after_0;
    // 0x802025AC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x802025B0: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x802025B4: lw          $t6, -0x10C0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X10C0);
    // 0x802025B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802025BC: lbu         $t7, 0xF($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0XF);
    // 0x802025C0: beql        $t7, $zero, L_80202634
    if (ctx->r15 == 0) {
        // 0x802025C4: sw          $v0, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r2;
            goto L_80202634;
    }
    goto skip_0;
    // 0x802025C4: sw          $v0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r2;
    skip_0:
    // 0x802025C8: lw          $t8, 0x80($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X80);
    // 0x802025CC: addiu       $t1, $zero, 0x2E
    ctx->r9 = ADD32(0, 0X2E);
    // 0x802025D0: addiu       $a0, $zero, 0x151
    ctx->r4 = ADD32(0, 0X151);
    // 0x802025D4: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x802025D8: bne         $t9, $zero, L_802025F8
    if (ctx->r25 != 0) {
        // 0x802025DC: sw          $t9, 0x80($s0)
        MEM_W(0X80, ctx->r16) = ctx->r25;
            goto L_802025F8;
    }
    // 0x802025DC: sw          $t9, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r25;
    // 0x802025E0: sw          $t1, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r9;
    // 0x802025E4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x802025E8: lw          $a1, -0x1130($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1130);
    // 0x802025EC: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x802025F0: jal         0x8000F240
    // 0x802025F4: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    func_8000F240_FE40(rdram, ctx);
        goto after_1;
    // 0x802025F4: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    after_1:
L_802025F8:
    // 0x802025F8: lw          $t2, 0x7C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X7C);
    // 0x802025FC: addiu       $t5, $zero, 0x3C
    ctx->r13 = ADD32(0, 0X3C);
    // 0x80202600: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80202604: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x80202608: bne         $t3, $zero, L_80202638
    if (ctx->r11 != 0) {
        // 0x8020260C: sw          $t3, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r11;
            goto L_80202638;
    }
    // 0x8020260C: sw          $t3, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r11;
    // 0x80202610: sw          $t5, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r13;
    // 0x80202614: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80202618: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8020261C: lui         $a2, 0x4296
    ctx->r6 = S32(0X4296 << 16);
    // 0x80202620: jal         0x80204A58
    // 0x80202624: lui         $a3, 0x4302
    ctx->r7 = S32(0X4302 << 16);
    func_80204A58_62FE38(rdram, ctx);
        goto after_2;
    // 0x80202624: lui         $a3, 0x4302
    ctx->r7 = S32(0X4302 << 16);
    after_2:
    // 0x80202628: b           L_80202638
    // 0x8020262C: nop

        goto L_80202638;
    // 0x8020262C: nop

    // 0x80202630: sw          $v0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r2;
L_80202634:
    // 0x80202634: sw          $v0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r2;
L_80202638:
    // 0x80202638: jal         0x802043E4
    // 0x8020263C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_802043E4_62F7C4(rdram, ctx);
        goto after_3;
    // 0x8020263C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80202640: beq         $v0, $zero, L_80202688
    if (ctx->r2 == 0) {
        // 0x80202644: addiu       $t6, $zero, 0x50
        ctx->r14 = ADD32(0, 0X50);
            goto L_80202688;
    }
    // 0x80202644: addiu       $t6, $zero, 0x50
    ctx->r14 = ADD32(0, 0X50);
    // 0x80202648: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x8020264C: sb          $zero, 0x30($s0)
    MEM_B(0X30, ctx->r16) = 0;
    // 0x80202650: sw          $t6, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r14;
    // 0x80202654: sw          $t7, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r15;
    // 0x80202658: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8020265C: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x80202660: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80202664: sw          $zero, 0x2C($t8)
    MEM_W(0X2C, ctx->r24) = 0;
    // 0x80202668: lw          $t0, -0x10C0($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X10C0);
    // 0x8020266C: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x80202670: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80202674: sb          $t9, 0x10($t0)
    MEM_B(0X10, ctx->r8) = ctx->r25;
    // 0x80202678: lw          $t1, -0x10C0($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X10C0);
    // 0x8020267C: addiu       $a0, $a0, 0x269C
    ctx->r4 = ADD32(ctx->r4, 0X269C);
    // 0x80202680: jal         0x8003521C
    // 0x80202684: sb          $zero, 0xF($t1)
    MEM_B(0XF, ctx->r9) = 0;
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x80202684: sb          $zero, 0xF($t1)
    MEM_B(0XF, ctx->r9) = 0;
    after_4:
L_80202688:
    // 0x80202688: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8020268C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80202690: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80202694: jr          $ra
    // 0x80202698: nop

    TRACE_RETURN()
    return;
    // 0x80202698: nop

;}
RECOMP_FUNC void func_801DB5B0_606990(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DB5B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DB5B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DB5B8: sb          $zero, 0x30($a0)
    MEM_B(0X30, ctx->r4) = 0;
    // 0x801DB5BC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801DB5C0: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DB5C4: sb          $t6, 0x64($a1)
    MEM_B(0X64, ctx->r5) = ctx->r14;
    // 0x801DB5C8: jal         0x8003521C
    // 0x801DB5CC: addiu       $a0, $a0, -0x4A20
    ctx->r4 = ADD32(ctx->r4, -0X4A20);
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x801DB5CC: addiu       $a0, $a0, -0x4A20
    ctx->r4 = ADD32(ctx->r4, -0X4A20);
    after_0:
    // 0x801DB5D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DB5D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DB5D8: jr          $ra
    // 0x801DB5DC: nop

    TRACE_RETURN()
    return;
    // 0x801DB5DC: nop

;}
RECOMP_FUNC void func_801F7258_622638(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F7258: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F725C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F7260: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801F7264: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801F7268: addiu       $a1, $a1, 0x728C
    ctx->r5 = ADD32(ctx->r5, 0X728C);
    // 0x801F726C: jal         0x80034E08
    // 0x801F7270: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x801F7270: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x801F7274: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x801F7278: sw          $t6, 0x90($v0)
    MEM_W(0X90, ctx->r2) = ctx->r14;
    // 0x801F727C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F7280: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F7284: jr          $ra
    // 0x801F7288: nop

    TRACE_RETURN()
    return;
    // 0x801F7288: nop

;}
RECOMP_FUNC void func_801F1074_61C454(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F1074: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F1078: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F107C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801F1080: jal         0x801F76D0
    // 0x801F1084: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801F76D0_622AB0(rdram, ctx);
        goto after_0;
    // 0x801F1084: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F1088: jal         0x801D619C
    // 0x801F108C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801D619C_60157C(rdram, ctx);
        goto after_1;
    // 0x801F108C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x801F1090: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x801F1094: lui         $at, 0x43AF
    ctx->r1 = S32(0X43AF << 16);
    // 0x801F1098: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F109C: lwc1        $f4, 0x20($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X20);
    // 0x801F10A0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801F10A4: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801F10A8: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x801F10AC: jal         0x801F718C
    // 0x801F10B0: nop

    func_801F718C_62256C(rdram, ctx);
        goto after_2;
    // 0x801F10B0: nop

    after_2:
    // 0x801F10B4: beq         $v0, $zero, L_801F1100
    if (ctx->r2 == 0) {
        // 0x801F10B8: addiu       $a0, $zero, 0x281
        ctx->r4 = ADD32(0, 0X281);
            goto L_801F1100;
    }
    // 0x801F10B8: addiu       $a0, $zero, 0x281
    ctx->r4 = ADD32(0, 0X281);
    // 0x801F10BC: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F10C0: lw          $a1, -0x1130($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1130);
    // 0x801F10C4: lui         $a3, 0x44BB
    ctx->r7 = S32(0X44BB << 16);
    // 0x801F10C8: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x801F10CC: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x801F10D0: jal         0x8000F3D8
    // 0x801F10D4: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    func_8000F3D8_FFD8(rdram, ctx);
        goto after_3;
    // 0x801F10D4: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    after_3:
    // 0x801F10D8: lui         $a2, 0x3ECC
    ctx->r6 = S32(0X3ECC << 16);
    // 0x801F10DC: lui         $a3, 0x3E99
    ctx->r7 = S32(0X3E99 << 16);
    // 0x801F10E0: ori         $a3, $a3, 0x999A
    ctx->r7 = ctx->r7 | 0X999A;
    // 0x801F10E4: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x801F10E8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801F10EC: jal         0x801F74E4
    // 0x801F10F0: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    func_801F74E4_6228C4(rdram, ctx);
        goto after_4;
    // 0x801F10F0: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    after_4:
    // 0x801F10F4: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F10F8: jal         0x8003521C
    // 0x801F10FC: addiu       $a0, $a0, 0x1110
    ctx->r4 = ADD32(ctx->r4, 0X1110);
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x801F10FC: addiu       $a0, $a0, 0x1110
    ctx->r4 = ADD32(ctx->r4, 0X1110);
    after_5:
L_801F1100:
    // 0x801F1100: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F1104: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F1108: jr          $ra
    // 0x801F110C: nop

    TRACE_RETURN()
    return;
    // 0x801F110C: nop

;}
RECOMP_FUNC void func_801FC510_6278F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FC510: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801FC514: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801FC518: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801FC51C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801FC520: jal         0x801D60E4
    // 0x801FC524: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_801D60E4_6014C4(rdram, ctx);
        goto after_0;
    // 0x801FC524: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x801FC528: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801FC52C: jal         0x801D6330
    // 0x801FC530: lui         $a1, 0xC2A0
    ctx->r5 = S32(0XC2A0 << 16);
    func_801D6330_601710(rdram, ctx);
        goto after_1;
    // 0x801FC530: lui         $a1, 0xC2A0
    ctx->r5 = S32(0XC2A0 << 16);
    after_1:
    // 0x801FC534: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801FC538: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801FC53C: jal         0x801D3F00
    // 0x801FC540: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_801D3F00_5FF2E0(rdram, ctx);
        goto after_2;
    // 0x801FC540: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_2:
    // 0x801FC544: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801FC548: jal         0x801D31F0
    // 0x801FC54C: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    func_801D31F0_5FE5D0(rdram, ctx);
        goto after_3;
    // 0x801FC54C: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    after_3:
    // 0x801FC550: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801FC554: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801FC558: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801FC55C: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x801FC560: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801FC564: bc1fl       L_801FC628
    if (!c1cs) {
        // 0x801FC568: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801FC628;
    }
    goto skip_0;
    // 0x801FC568: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801FC56C: lw          $t6, -0x10C0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X10C0);
    // 0x801FC570: addiu       $a1, $a1, -0x4BB0
    ctx->r5 = ADD32(ctx->r5, -0X4BB0);
    // 0x801FC574: jal         0x801D31CC
    // 0x801FC578: sb          $zero, 0x815($t6)
    MEM_B(0X815, ctx->r14) = 0;
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_4;
    // 0x801FC578: sb          $zero, 0x815($t6)
    MEM_B(0X815, ctx->r14) = 0;
    after_4:
    // 0x801FC57C: jal         0x801FFE34
    // 0x801FC580: nop

    func_801FFE34_62B214(rdram, ctx);
        goto after_5;
    // 0x801FC580: nop

    after_5:
    // 0x801FC584: lwc1        $f6, 0x70($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X70);
    // 0x801FC588: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801FC58C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801FC590: lwc1        $f18, 0x78($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X78);
    // 0x801FC594: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x801FC598: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801FC59C: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x801FC5A0: neg.s       $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = -ctx->f18.fl;
    // 0x801FC5A4: swc1        $f16, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f16.u32l;
    // 0x801FC5A8: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x801FC5AC: swc1        $f10, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f10.u32l;
    // 0x801FC5B0: jal         0x8000DDC0
    // 0x801FC5B4: swc1        $f6, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f6.u32l;
    func_8000DDC0_E9C0(rdram, ctx);
        goto after_6;
    // 0x801FC5B4: swc1        $f6, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f6.u32l;
    after_6:
    // 0x801FC5B8: beq         $v0, $zero, L_801FC5CC
    if (ctx->r2 == 0) {
        // 0x801FC5BC: addiu       $t8, $zero, -0x3E8
        ctx->r24 = ADD32(0, -0X3E8);
            goto L_801FC5CC;
    }
    // 0x801FC5BC: addiu       $t8, $zero, -0x3E8
    ctx->r24 = ADD32(0, -0X3E8);
    // 0x801FC5C0: addiu       $t7, $zero, 0x3E8
    ctx->r15 = ADD32(0, 0X3E8);
    // 0x801FC5C4: b           L_801FC5D0
    // 0x801FC5C8: sw          $t7, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->r15;
        goto L_801FC5D0;
    // 0x801FC5C8: sw          $t7, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->r15;
L_801FC5CC:
    // 0x801FC5CC: sw          $t8, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->r24;
L_801FC5D0:
    // 0x801FC5D0: jal         0x8000DDC0
    // 0x801FC5D4: nop

    func_8000DDC0_E9C0(rdram, ctx);
        goto after_7;
    // 0x801FC5D4: nop

    after_7:
    // 0x801FC5D8: beq         $v0, $zero, L_801FC5EC
    if (ctx->r2 == 0) {
        // 0x801FC5DC: addiu       $a2, $zero, 0x0
        ctx->r6 = ADD32(0, 0X0);
            goto L_801FC5EC;
    }
    // 0x801FC5DC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x801FC5E0: addiu       $t9, $zero, -0x1E0
    ctx->r25 = ADD32(0, -0X1E0);
    // 0x801FC5E4: b           L_801FC5F4
    // 0x801FC5E8: sw          $t9, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->r25;
        goto L_801FC5F4;
    // 0x801FC5E8: sw          $t9, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->r25;
L_801FC5EC:
    // 0x801FC5EC: addiu       $t0, $zero, 0x140
    ctx->r8 = ADD32(0, 0X140);
    // 0x801FC5F0: sw          $t0, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->r8;
L_801FC5F4:
    // 0x801FC5F4: lwc1        $f12, 0x70($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X70);
    // 0x801FC5F8: lwc1        $f14, 0x78($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X78);
    // 0x801FC5FC: jal         0x8000EB08
    // 0x801FC600: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_8000EB08_F708(rdram, ctx);
        goto after_8;
    // 0x801FC600: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_8:
    // 0x801FC604: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x801FC608: sh          $v0, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r2;
    // 0x801FC60C: sh          $zero, 0x14($v1)
    MEM_H(0X14, ctx->r3) = 0;
    // 0x801FC610: jal         0x80200088
    // 0x801FC614: sh          $zero, 0x18($v1)
    MEM_H(0X18, ctx->r3) = 0;
    func_80200088_62B468(rdram, ctx);
        goto after_9;
    // 0x801FC614: sh          $zero, 0x18($v1)
    MEM_H(0X18, ctx->r3) = 0;
    after_9:
    // 0x801FC618: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FC61C: jal         0x8003521C
    // 0x801FC620: addiu       $a0, $a0, -0x39C8
    ctx->r4 = ADD32(ctx->r4, -0X39C8);
    func_8003521C_35E1C(rdram, ctx);
        goto after_10;
    // 0x801FC620: addiu       $a0, $a0, -0x39C8
    ctx->r4 = ADD32(ctx->r4, -0X39C8);
    after_10:
    // 0x801FC624: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801FC628:
    // 0x801FC628: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801FC62C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801FC630: jr          $ra
    // 0x801FC634: nop

    TRACE_RETURN()
    return;
    // 0x801FC634: nop

;}
RECOMP_FUNC void func_801E57AC_610B8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E57AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E57B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E57B4: lw          $t6, 0xD0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD0);
    // 0x801E57B8: sltiu       $at, $t6, 0xB
    ctx->r1 = ctx->r14 < 0XB ? 1 : 0;
    // 0x801E57BC: beq         $at, $zero, L_801E57D8
    if (ctx->r1 == 0) {
        // 0x801E57C0: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_801E57D8;
    }
    // 0x801E57C0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x801E57C4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E57C8: addu        $at, $at, $t6
    gpr jr_addend_801E57D0 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x801E57CC: lw          $t6, -0x2080($at)
    ctx->r14 = ADD32(ctx->r1, -0X2080);
    // 0x801E57D0: jr          $t6
    // 0x801E57D4: nop

    switch (jr_addend_801E57D0 >> 2) {
        case 0: goto L_801E57D8; break;
        case 1: goto L_801E57EC; break;
        case 2: goto L_801E5800; break;
        case 3: goto L_801E5814; break;
        case 4: goto L_801E5828; break;
        case 5: goto L_801E583C; break;
        case 6: goto L_801E5850; break;
        case 7: goto L_801E5864; break;
        case 8: goto L_801E5878; break;
        case 9: goto L_801E588C; break;
        case 10: goto L_801E58A0; break;
        default: switch_error(__func__, 0x801E57D0, 0x8020DF80);
    }
    // 0x801E57D4: nop

L_801E57D8:
    // 0x801E57D8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x801E57DC: jal         0x801E58C8
    // 0x801E57E0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_801E58C8_610CA8(rdram, ctx);
        goto after_0;
    // 0x801E57E0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x801E57E4: b           L_801E58BC
    // 0x801E57E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E58BC;
    // 0x801E57E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E57EC:
    // 0x801E57EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801E57F0: jal         0x801E58C8
    // 0x801E57F4: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    func_801E58C8_610CA8(rdram, ctx);
        goto after_1;
    // 0x801E57F4: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    after_1:
    // 0x801E57F8: b           L_801E58BC
    // 0x801E57FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E58BC;
    // 0x801E57FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E5800:
    // 0x801E5800: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801E5804: jal         0x801E58C8
    // 0x801E5808: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    func_801E58C8_610CA8(rdram, ctx);
        goto after_2;
    // 0x801E5808: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    after_2:
    // 0x801E580C: b           L_801E58BC
    // 0x801E5810: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E58BC;
    // 0x801E5810: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E5814:
    // 0x801E5814: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801E5818: jal         0x801E58C8
    // 0x801E581C: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    func_801E58C8_610CA8(rdram, ctx);
        goto after_3;
    // 0x801E581C: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    after_3:
    // 0x801E5820: b           L_801E58BC
    // 0x801E5824: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E58BC;
    // 0x801E5824: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E5828:
    // 0x801E5828: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x801E582C: jal         0x801E58C8
    // 0x801E5830: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_801E58C8_610CA8(rdram, ctx);
        goto after_4;
    // 0x801E5830: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x801E5834: b           L_801E58BC
    // 0x801E5838: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E58BC;
    // 0x801E5838: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E583C:
    // 0x801E583C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x801E5840: jal         0x801E58C8
    // 0x801E5844: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    func_801E58C8_610CA8(rdram, ctx);
        goto after_5;
    // 0x801E5844: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    after_5:
    // 0x801E5848: b           L_801E58BC
    // 0x801E584C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E58BC;
    // 0x801E584C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E5850:
    // 0x801E5850: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801E5854: jal         0x801E58C8
    // 0x801E5858: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_801E58C8_610CA8(rdram, ctx);
        goto after_6;
    // 0x801E5858: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_6:
    // 0x801E585C: b           L_801E58BC
    // 0x801E5860: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E58BC;
    // 0x801E5860: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E5864:
    // 0x801E5864: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x801E5868: jal         0x801E58C8
    // 0x801E586C: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    func_801E58C8_610CA8(rdram, ctx);
        goto after_7;
    // 0x801E586C: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    after_7:
    // 0x801E5870: b           L_801E58BC
    // 0x801E5874: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E58BC;
    // 0x801E5874: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E5878:
    // 0x801E5878: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x801E587C: jal         0x801E58C8
    // 0x801E5880: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    func_801E58C8_610CA8(rdram, ctx);
        goto after_8;
    // 0x801E5880: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    after_8:
    // 0x801E5884: b           L_801E58BC
    // 0x801E5888: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E58BC;
    // 0x801E5888: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E588C:
    // 0x801E588C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801E5890: jal         0x801E58C8
    // 0x801E5894: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    func_801E58C8_610CA8(rdram, ctx);
        goto after_9;
    // 0x801E5894: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    after_9:
    // 0x801E5898: b           L_801E58BC
    // 0x801E589C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E58BC;
    // 0x801E589C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E58A0:
    // 0x801E58A0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x801E58A4: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x801E58A8: jal         0x801E58C8
    // 0x801E58AC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801E58C8_610CA8(rdram, ctx);
        goto after_10;
    // 0x801E58AC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_10:
    // 0x801E58B0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801E58B4: sw          $zero, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = 0;
    // 0x801E58B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E58BC:
    // 0x801E58BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E58C0: jr          $ra
    // 0x801E58C4: nop

    TRACE_RETURN()
    return;
    // 0x801E58C4: nop

;}
RECOMP_FUNC void func_801E6DE0_6121C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E6DE0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801E6DE4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801E6DE8: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x801E6DEC: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x801E6DF0: lw          $t6, 0x7C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X7C);
    // 0x801E6DF4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E6DF8: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x801E6DFC: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x801E6E00: bgez        $t7, L_801E6EB8
    if (SIGNED(ctx->r15) >= 0) {
        // 0x801E6E04: sw          $t7, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r15;
            goto L_801E6EB8;
    }
    // 0x801E6E04: sw          $t7, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r15;
    // 0x801E6E08: jal         0x801D31F0
    // 0x801E6E0C: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    func_801D31F0_5FE5D0(rdram, ctx);
        goto after_0;
    // 0x801E6E0C: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    after_0:
    // 0x801E6E10: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E6E14: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x801E6E18: jal         0x801D3118
    // 0x801E6E1C: lui         $a2, 0x41E0
    ctx->r6 = S32(0X41E0 << 16);
    func_801D3118_5FE4F8(rdram, ctx);
        goto after_1;
    // 0x801E6E1C: lui         $a2, 0x41E0
    ctx->r6 = S32(0X41E0 << 16);
    after_1:
    // 0x801E6E20: beq         $v0, $zero, L_801E6E30
    if (ctx->r2 == 0) {
        // 0x801E6E24: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801E6E30;
    }
    // 0x801E6E24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E6E28: jal         0x801EB220
    // 0x801E6E2C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_801EB220_616600(rdram, ctx);
        goto after_2;
    // 0x801E6E2C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
L_801E6E30:
    // 0x801E6E30: lwc1        $f4, 0x28($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X28);
    // 0x801E6E34: lui         $at, 0x403D
    ctx->r1 = S32(0X403D << 16);
    // 0x801E6E38: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801E6E3C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801E6E40: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801E6E44: lui         $a3, 0xC483
    ctx->r7 = S32(0XC483 << 16);
    // 0x801E6E48: c.le.d      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.d <= ctx->f6.d;
    // 0x801E6E4C: lui         $at, 0x41E8
    ctx->r1 = S32(0X41E8 << 16);
    // 0x801E6E50: ori         $a3, $a3, 0x4000
    ctx->r7 = ctx->r7 | 0X4000;
    // 0x801E6E54: bc1fl       L_801E6E94
    if (!c1cs) {
        // 0x801E6E58: lw          $t0, 0x9C($s0)
        ctx->r8 = MEM_W(ctx->r16, 0X9C);
            goto L_801E6E94;
    }
    goto skip_0;
    // 0x801E6E58: lw          $t0, 0x9C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X9C);
    skip_0:
    // 0x801E6E5C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801E6E60: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801E6E64: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801E6E68: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x801E6E6C: lw          $a2, 0xC($s1)
    ctx->r6 = MEM_W(ctx->r17, 0XC);
    // 0x801E6E70: swc1        $f10, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->f10.u32l;
    // 0x801E6E74: jal         0x8000E39C
    // 0x801E6E78: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8000E39C_EF9C(rdram, ctx);
        goto after_3;
    // 0x801E6E78: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_3:
    // 0x801E6E7C: addiu       $t9, $zero, 0x1E
    ctx->r25 = ADD32(0, 0X1E);
    // 0x801E6E80: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E6E84: sw          $t9, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r25;
    // 0x801E6E88: jal         0x8003521C
    // 0x801E6E8C: addiu       $a0, $a0, 0x6ECC
    ctx->r4 = ADD32(ctx->r4, 0X6ECC);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801E6E8C: addiu       $a0, $a0, 0x6ECC
    ctx->r4 = ADD32(ctx->r4, 0X6ECC);
    after_4:
    // 0x801E6E90: lw          $t0, 0x9C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X9C);
L_801E6E94:
    // 0x801E6E94: addiu       $v0, $t0, -0x8
    ctx->r2 = ADD32(ctx->r8, -0X8);
    // 0x801E6E98: slti        $at, $v0, -0x27
    ctx->r1 = SIGNED(ctx->r2) < -0X27 ? 1 : 0;
    // 0x801E6E9C: beq         $at, $zero, L_801E6EAC
    if (ctx->r1 == 0) {
        // 0x801E6EA0: sw          $v0, 0x9C($s0)
        MEM_W(0X9C, ctx->r16) = ctx->r2;
            goto L_801E6EAC;
    }
    // 0x801E6EA0: sw          $v0, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->r2;
    // 0x801E6EA4: addiu       $v0, $zero, -0x28
    ctx->r2 = ADD32(0, -0X28);
    // 0x801E6EA8: sw          $v0, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->r2;
L_801E6EAC:
    // 0x801E6EAC: lw          $t3, 0x98($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X98);
    // 0x801E6EB0: addu        $t4, $v0, $t3
    ctx->r12 = ADD32(ctx->r2, ctx->r11);
    // 0x801E6EB4: sh          $t4, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r12;
L_801E6EB8:
    // 0x801E6EB8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801E6EBC: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x801E6EC0: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x801E6EC4: jr          $ra
    // 0x801E6EC8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x801E6EC8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_801D609C_60147C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D609C: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x801D60A0: lwc1        $f6, 0x70($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X70);
    // 0x801D60A4: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801D60A8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801D60AC: jr          $ra
    // 0x801D60B0: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x801D60B0: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_801D572C_600B0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D572C: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x801D5730: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x801D5734: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x801D5738: sll         $v0, $t6, 2
    ctx->r2 = S32(ctx->r14 << 2);
    // 0x801D573C: subu        $v0, $v0, $t6
    ctx->r2 = SUB32(ctx->r2, ctx->r14);
    // 0x801D5740: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x801D5744: lui         $v1, 0x4
    ctx->r3 = S32(0X4 << 16);
    // 0x801D5748: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x801D574C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801D5750: addu        $v1, $v1, $t8
    ctx->r3 = ADD32(ctx->r3, ctx->r24);
    // 0x801D5754: lhu         $v1, -0x4F86($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X4F86);
    // 0x801D5758: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801D575C: andi        $t9, $v1, 0x800
    ctx->r25 = ctx->r3 & 0X800;
    // 0x801D5760: beql        $t9, $zero, L_801D5794
    if (ctx->r25 == 0) {
        // 0x801D5764: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_801D5794;
    }
    goto skip_0;
    // 0x801D5764: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_0:
    // 0x801D5768: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801D576C: lwc1        $f4, 0x10($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X10);
    // 0x801D5770: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x801D5774: lui         $v1, 0x4
    ctx->r3 = S32(0X4 << 16);
    // 0x801D5778: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x801D577C: swc1        $f6, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f6.u32l;
    // 0x801D5780: lw          $t0, -0x3A38($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3A38);
    // 0x801D5784: addu        $t1, $t0, $v0
    ctx->r9 = ADD32(ctx->r8, ctx->r2);
    // 0x801D5788: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
    // 0x801D578C: lhu         $v1, -0x4F86($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X4F86);
    // 0x801D5790: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_801D5794:
    // 0x801D5794: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801D5798: andi        $t2, $v1, 0x400
    ctx->r10 = ctx->r3 & 0X400;
    // 0x801D579C: beql        $t2, $zero, L_801D57CC
    if (ctx->r10 == 0) {
        // 0x801D57A0: andi        $t5, $v1, 0x100
        ctx->r13 = ctx->r3 & 0X100;
            goto L_801D57CC;
    }
    goto skip_1;
    // 0x801D57A0: andi        $t5, $v1, 0x100
    ctx->r13 = ctx->r3 & 0X100;
    skip_1:
    // 0x801D57A4: lwc1        $f8, 0x10($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X10);
    // 0x801D57A8: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x801D57AC: lui         $v1, 0x4
    ctx->r3 = S32(0X4 << 16);
    // 0x801D57B0: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x801D57B4: swc1        $f10, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f10.u32l;
    // 0x801D57B8: lw          $t3, -0x3A38($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X3A38);
    // 0x801D57BC: addu        $t4, $t3, $v0
    ctx->r12 = ADD32(ctx->r11, ctx->r2);
    // 0x801D57C0: addu        $v1, $v1, $t4
    ctx->r3 = ADD32(ctx->r3, ctx->r12);
    // 0x801D57C4: lhu         $v1, -0x4F86($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X4F86);
    // 0x801D57C8: andi        $t5, $v1, 0x100
    ctx->r13 = ctx->r3 & 0X100;
L_801D57CC:
    // 0x801D57CC: beql        $t5, $zero, L_801D57FC
    if (ctx->r13 == 0) {
        // 0x801D57D0: andi        $t8, $v1, 0x200
        ctx->r24 = ctx->r3 & 0X200;
            goto L_801D57FC;
    }
    goto skip_2;
    // 0x801D57D0: andi        $t8, $v1, 0x200
    ctx->r24 = ctx->r3 & 0X200;
    skip_2:
    // 0x801D57D4: lwc1        $f16, 0x8($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X8);
    // 0x801D57D8: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x801D57DC: lui         $v1, 0x4
    ctx->r3 = S32(0X4 << 16);
    // 0x801D57E0: add.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x801D57E4: swc1        $f18, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f18.u32l;
    // 0x801D57E8: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x801D57EC: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x801D57F0: addu        $v1, $v1, $t7
    ctx->r3 = ADD32(ctx->r3, ctx->r15);
    // 0x801D57F4: lhu         $v1, -0x4F86($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X4F86);
    // 0x801D57F8: andi        $t8, $v1, 0x200
    ctx->r24 = ctx->r3 & 0X200;
L_801D57FC:
    // 0x801D57FC: beql        $t8, $zero, L_801D582C
    if (ctx->r24 == 0) {
        // 0x801D5800: andi        $t1, $v1, 0x8
        ctx->r9 = ctx->r3 & 0X8;
            goto L_801D582C;
    }
    goto skip_3;
    // 0x801D5800: andi        $t1, $v1, 0x8
    ctx->r9 = ctx->r3 & 0X8;
    skip_3:
    // 0x801D5804: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x801D5808: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x801D580C: lui         $v1, 0x4
    ctx->r3 = S32(0X4 << 16);
    // 0x801D5810: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x801D5814: swc1        $f6, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f6.u32l;
    // 0x801D5818: lw          $t9, -0x3A38($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3A38);
    // 0x801D581C: addu        $t0, $t9, $v0
    ctx->r8 = ADD32(ctx->r25, ctx->r2);
    // 0x801D5820: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x801D5824: lhu         $v1, -0x4F86($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X4F86);
    // 0x801D5828: andi        $t1, $v1, 0x8
    ctx->r9 = ctx->r3 & 0X8;
L_801D582C:
    // 0x801D582C: beql        $t1, $zero, L_801D585C
    if (ctx->r9 == 0) {
        // 0x801D5830: andi        $t4, $v1, 0x4
        ctx->r12 = ctx->r3 & 0X4;
            goto L_801D585C;
    }
    goto skip_4;
    // 0x801D5830: andi        $t4, $v1, 0x4
    ctx->r12 = ctx->r3 & 0X4;
    skip_4:
    // 0x801D5834: lwc1        $f8, 0xC($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0XC);
    // 0x801D5838: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x801D583C: lui         $v1, 0x4
    ctx->r3 = S32(0X4 << 16);
    // 0x801D5840: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x801D5844: swc1        $f10, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f10.u32l;
    // 0x801D5848: lw          $t2, -0x3A38($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X3A38);
    // 0x801D584C: addu        $t3, $t2, $v0
    ctx->r11 = ADD32(ctx->r10, ctx->r2);
    // 0x801D5850: addu        $v1, $v1, $t3
    ctx->r3 = ADD32(ctx->r3, ctx->r11);
    // 0x801D5854: lhu         $v1, -0x4F86($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X4F86);
    // 0x801D5858: andi        $t4, $v1, 0x4
    ctx->r12 = ctx->r3 & 0X4;
L_801D585C:
    // 0x801D585C: beql        $t4, $zero, L_801D588C
    if (ctx->r12 == 0) {
        // 0x801D5860: andi        $t7, $v1, 0x1
        ctx->r15 = ctx->r3 & 0X1;
            goto L_801D588C;
    }
    goto skip_5;
    // 0x801D5860: andi        $t7, $v1, 0x1
    ctx->r15 = ctx->r3 & 0X1;
    skip_5:
    // 0x801D5864: lwc1        $f16, 0xC($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0XC);
    // 0x801D5868: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x801D586C: lui         $v1, 0x4
    ctx->r3 = S32(0X4 << 16);
    // 0x801D5870: sub.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f0.fl;
    // 0x801D5874: swc1        $f18, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f18.u32l;
    // 0x801D5878: lw          $t5, -0x3A38($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X3A38);
    // 0x801D587C: addu        $t6, $t5, $v0
    ctx->r14 = ADD32(ctx->r13, ctx->r2);
    // 0x801D5880: addu        $v1, $v1, $t6
    ctx->r3 = ADD32(ctx->r3, ctx->r14);
    // 0x801D5884: lhu         $v1, -0x4F86($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X4F86);
    // 0x801D5888: andi        $t7, $v1, 0x1
    ctx->r15 = ctx->r3 & 0X1;
L_801D588C:
    // 0x801D588C: beql        $t7, $zero, L_801D58BC
    if (ctx->r15 == 0) {
        // 0x801D5890: andi        $t0, $v1, 0x2
        ctx->r8 = ctx->r3 & 0X2;
            goto L_801D58BC;
    }
    goto skip_6;
    // 0x801D5890: andi        $t0, $v1, 0x2
    ctx->r8 = ctx->r3 & 0X2;
    skip_6:
    // 0x801D5894: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x801D5898: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x801D589C: lui         $v1, 0x4
    ctx->r3 = S32(0X4 << 16);
    // 0x801D58A0: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x801D58A4: swc1        $f6, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f6.u32l;
    // 0x801D58A8: lw          $t8, -0x3A38($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3A38);
    // 0x801D58AC: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x801D58B0: addu        $v1, $v1, $t9
    ctx->r3 = ADD32(ctx->r3, ctx->r25);
    // 0x801D58B4: lhu         $v1, -0x4F86($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X4F86);
    // 0x801D58B8: andi        $t0, $v1, 0x2
    ctx->r8 = ctx->r3 & 0X2;
L_801D58BC:
    // 0x801D58BC: beql        $t0, $zero, L_801D58EC
    if (ctx->r8 == 0) {
        // 0x801D58C0: andi        $t3, $v1, 0x10
        ctx->r11 = ctx->r3 & 0X10;
            goto L_801D58EC;
    }
    goto skip_7;
    // 0x801D58C0: andi        $t3, $v1, 0x10
    ctx->r11 = ctx->r3 & 0X10;
    skip_7:
    // 0x801D58C4: lwc1        $f8, 0x8($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X8);
    // 0x801D58C8: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x801D58CC: lui         $v1, 0x4
    ctx->r3 = S32(0X4 << 16);
    // 0x801D58D0: sub.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x801D58D4: swc1        $f10, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f10.u32l;
    // 0x801D58D8: lw          $t1, -0x3A38($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X3A38);
    // 0x801D58DC: addu        $t2, $t1, $v0
    ctx->r10 = ADD32(ctx->r9, ctx->r2);
    // 0x801D58E0: addu        $v1, $v1, $t2
    ctx->r3 = ADD32(ctx->r3, ctx->r10);
    // 0x801D58E4: lhu         $v1, -0x4F86($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X4F86);
    // 0x801D58E8: andi        $t3, $v1, 0x10
    ctx->r11 = ctx->r3 & 0X10;
L_801D58EC:
    // 0x801D58EC: beql        $t3, $zero, L_801D591C
    if (ctx->r11 == 0) {
        // 0x801D58F0: andi        $t8, $v1, 0x20
        ctx->r24 = ctx->r3 & 0X20;
            goto L_801D591C;
    }
    goto skip_8;
    // 0x801D58F0: andi        $t8, $v1, 0x20
    ctx->r24 = ctx->r3 & 0X20;
    skip_8:
    // 0x801D58F4: lhu         $t4, 0x16($a0)
    ctx->r12 = MEM_HU(ctx->r4, 0X16);
    // 0x801D58F8: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x801D58FC: lui         $v1, 0x4
    ctx->r3 = S32(0X4 << 16);
    // 0x801D5900: addiu       $t5, $t4, 0x8
    ctx->r13 = ADD32(ctx->r12, 0X8);
    // 0x801D5904: sh          $t5, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r13;
    // 0x801D5908: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x801D590C: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x801D5910: addu        $v1, $v1, $t7
    ctx->r3 = ADD32(ctx->r3, ctx->r15);
    // 0x801D5914: lhu         $v1, -0x4F86($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X4F86);
    // 0x801D5918: andi        $t8, $v1, 0x20
    ctx->r24 = ctx->r3 & 0X20;
L_801D591C:
    // 0x801D591C: beq         $t8, $zero, L_801D5930
    if (ctx->r24 == 0) {
        // 0x801D5920: nop
    
            goto L_801D5930;
    }
    // 0x801D5920: nop

    // 0x801D5924: lhu         $t9, 0x16($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X16);
    // 0x801D5928: addiu       $t0, $t9, -0x8
    ctx->r8 = ADD32(ctx->r25, -0X8);
    // 0x801D592C: sh          $t0, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r8;
L_801D5930:
    // 0x801D5930: jr          $ra
    // 0x801D5934: nop

    TRACE_RETURN()
    return;
    // 0x801D5934: nop

;}
RECOMP_FUNC void func_8020247C_62D85C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020247C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80202480: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80202484: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x80202488: lui         $a2, 0x801
    ctx->r6 = S32(0X801 << 16);
    // 0x8020248C: addiu       $a2, $a2, 0x7870
    ctx->r6 = ADD32(ctx->r6, 0X7870);
    // 0x80202490: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80202494: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80202498: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8020249C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x802024A0: lwc1        $f6, 0xC($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0XC);
    // 0x802024A4: lui         $a3, 0x8021
    ctx->r7 = S32(0X8021 << 16);
    // 0x802024A8: addiu       $t9, $zero, 0x4B5
    ctx->r25 = ADD32(0, 0X4B5);
    // 0x802024AC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x802024B0: lwc1        $f8, 0x10($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X10);
    // 0x802024B4: addiu       $a3, $a3, -0x5198
    ctx->r7 = ADD32(ctx->r7, -0X5198);
    // 0x802024B8: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
    // 0x802024BC: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x802024C0: lhu         $t6, 0x14($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X14);
    // 0x802024C4: addiu       $a1, $a1, 0x2598
    ctx->r5 = ADD32(ctx->r5, 0X2598);
    // 0x802024C8: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x802024CC: lhu         $t7, 0x16($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X16);
    // 0x802024D0: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x802024D4: lhu         $t8, 0x18($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X18);
    // 0x802024D8: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x802024DC: lwc1        $f10, 0x1C($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x802024E0: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x802024E4: lwc1        $f16, 0x20($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X20);
    // 0x802024E8: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x802024EC: lwc1        $f18, 0x24($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X24);
    // 0x802024F0: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x802024F4: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x802024F8: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x802024FC: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    // 0x80202500: jal         0x800358E8
    // 0x80202504: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    func_800358E8_364E8(rdram, ctx);
        goto after_0;
    // 0x80202504: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80202508: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x8020250C: beq         $v0, $zero, L_80202588
    if (ctx->r2 == 0) {
        // 0x80202510: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80202588;
    }
    // 0x80202510: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80202514: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x80202518: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8020251C: addiu       $t2, $zero, 0x98
    ctx->r10 = ADD32(0, 0X98);
    // 0x80202520: sb          $zero, 0x65($v0)
    MEM_B(0X65, ctx->r2) = 0;
    // 0x80202524: lbu         $t1, 0x5($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X5);
    // 0x80202528: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8020252C: addiu       $t4, $zero, 0x64
    ctx->r12 = ADD32(0, 0X64);
    // 0x80202530: sb          $t1, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r9;
    // 0x80202534: addiu       $t5, $zero, 0x96
    ctx->r13 = ADD32(0, 0X96);
    // 0x80202538: addiu       $t6, $zero, 0x96
    ctx->r14 = ADD32(0, 0X96);
    // 0x8020253C: sh          $t2, 0x5C($a0)
    MEM_H(0X5C, ctx->r4) = ctx->r10;
    // 0x80202540: sw          $t0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r8;
    // 0x80202544: sw          $t0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->r8;
    // 0x80202548: sb          $t3, 0x30($a0)
    MEM_B(0X30, ctx->r4) = ctx->r11;
    // 0x8020254C: sh          $t4, 0x3C($a0)
    MEM_H(0X3C, ctx->r4) = ctx->r12;
    // 0x80202550: sh          $t5, 0x3E($a0)
    MEM_H(0X3E, ctx->r4) = ctx->r13;
    // 0x80202554: sh          $zero, 0x40($a0)
    MEM_H(0X40, ctx->r4) = 0;
    // 0x80202558: sw          $t6, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->r14;
    // 0x8020255C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80202560: lwc1        $f4, -0x133C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X133C);
    // 0x80202564: lui         $a3, 0x430E
    ctx->r7 = S32(0X430E << 16);
    // 0x80202568: ori         $a3, $a3, 0xAA16
    ctx->r7 = ctx->r7 | 0XAA16;
    // 0x8020256C: sw          $a0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r4;
    // 0x80202570: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x80202574: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80202578: jal         0x80203F5C
    // 0x8020257C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_80203F5C_62F33C(rdram, ctx);
        goto after_1;
    // 0x8020257C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x80202580: jal         0x80203F88
    // 0x80202584: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    func_80203F88_62F368(rdram, ctx);
        goto after_2;
    // 0x80202584: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    after_2:
L_80202588:
    // 0x80202588: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8020258C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x80202590: jr          $ra
    // 0x80202594: nop

    TRACE_RETURN()
    return;
    // 0x80202594: nop

;}
RECOMP_FUNC void func_801DC84C_607C2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DC84C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DC850: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DC854: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801DC858: jal         0x801D614C
    // 0x801DC85C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801D614C_60152C(rdram, ctx);
        goto after_0;
    // 0x801DC85C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801DC860: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801DC864: lw          $v0, 0x7C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X7C);
    // 0x801DC868: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x801DC86C: bgtz        $v0, L_801DC880
    if (SIGNED(ctx->r2) > 0) {
        // 0x801DC870: sw          $t6, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r14;
            goto L_801DC880;
    }
    // 0x801DC870: sw          $t6, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r14;
    // 0x801DC874: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DC878: jal         0x8003521C
    // 0x801DC87C: addiu       $a0, $a0, -0x3770
    ctx->r4 = ADD32(ctx->r4, -0X3770);
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x801DC87C: addiu       $a0, $a0, -0x3770
    ctx->r4 = ADD32(ctx->r4, -0X3770);
    after_1:
L_801DC880:
    // 0x801DC880: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DC884: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DC888: jr          $ra
    // 0x801DC88C: nop

    TRACE_RETURN()
    return;
    // 0x801DC88C: nop

;}
RECOMP_FUNC void func_801FE050_629430(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FE050: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801FE054: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801FE058: jal         0x801FFE6C
    // 0x801FE05C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801FFE6C_62B24C(rdram, ctx);
        goto after_0;
    // 0x801FE05C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801FE060: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801FE064: lw          $t6, -0x10C0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X10C0);
    // 0x801FE068: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x801FE06C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801FE070: sb          $zero, 0x815($t6)
    MEM_B(0X815, ctx->r14) = 0;
    // 0x801FE074: lhu         $t7, 0x16($a2)
    ctx->r15 = MEM_HU(ctx->r6, 0X16);
    // 0x801FE078: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x801FE07C: slti        $at, $t7, 0x201
    ctx->r1 = SIGNED(ctx->r15) < 0X201 ? 1 : 0;
    // 0x801FE080: beq         $at, $zero, L_801FE0A0
    if (ctx->r1 == 0) {
        // 0x801FE084: nop
    
            goto L_801FE0A0;
    }
    // 0x801FE084: nop

    // 0x801FE088: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801FE08C: addiu       $a1, $a1, -0x4C08
    ctx->r5 = ADD32(ctx->r5, -0X4C08);
    // 0x801FE090: jal         0x801D2EE4
    // 0x801FE094: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_1;
    // 0x801FE094: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_1:
    // 0x801FE098: b           L_801FE0A8
    // 0x801FE09C: nop

        goto L_801FE0A8;
    // 0x801FE09C: nop

L_801FE0A0:
    // 0x801FE0A0: jal         0x801D2EE4
    // 0x801FE0A4: addiu       $a1, $a1, -0x4C00
    ctx->r5 = ADD32(ctx->r5, -0X4C00);
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_2;
    // 0x801FE0A4: addiu       $a1, $a1, -0x4C00
    ctx->r5 = ADD32(ctx->r5, -0X4C00);
    after_2:
L_801FE0A8:
    // 0x801FE0A8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FE0AC: jal         0x8003521C
    // 0x801FE0B0: addiu       $a0, $a0, -0x1F3C
    ctx->r4 = ADD32(ctx->r4, -0X1F3C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801FE0B0: addiu       $a0, $a0, -0x1F3C
    ctx->r4 = ADD32(ctx->r4, -0X1F3C);
    after_3:
    // 0x801FE0B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801FE0B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801FE0BC: jr          $ra
    // 0x801FE0C0: nop

    TRACE_RETURN()
    return;
    // 0x801FE0C0: nop

;}
RECOMP_FUNC void func_801EB800_616BE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EB800: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x801EB804: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x801EB808: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801EB80C: sw          $s1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r17;
    // 0x801EB810: sw          $s0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r16;
    // 0x801EB814: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x801EB818: sw          $a2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r6;
    // 0x801EB81C: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x801EB820: swc1        $f14, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f14.u32l;
    // 0x801EB824: swc1        $f14, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f14.u32l;
    // 0x801EB828: lhu         $t6, 0x14($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X14);
    // 0x801EB82C: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x801EB830: addiu       $a1, $a1, 0xBEC
    ctx->r5 = ADD32(ctx->r5, 0XBEC);
    // 0x801EB834: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x801EB838: lhu         $t7, 0x16($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X16);
    // 0x801EB83C: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801EB840: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x801EB844: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x801EB848: lhu         $t8, 0x18($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X18);
    // 0x801EB84C: addiu       $t9, $zero, 0x4B0
    ctx->r25 = ADD32(0, 0X4B0);
    // 0x801EB850: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x801EB854: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x801EB858: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801EB85C: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801EB860: addiu       $a0, $a0, -0x4458
    ctx->r4 = ADD32(ctx->r4, -0X4458);
    // 0x801EB864: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801EB868: swc1        $f14, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f14.u32l;
    // 0x801EB86C: swc1        $f14, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f14.u32l;
    // 0x801EB870: swc1        $f14, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f14.u32l;
    // 0x801EB874: sw          $v1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r3;
    // 0x801EB878: jal         0x80035854
    // 0x801EB87C: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    func_80035854_36454(rdram, ctx);
        goto after_0;
    // 0x801EB87C: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    after_0:
    // 0x801EB880: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x801EB884: lw          $v1, 0x54($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X54);
    // 0x801EB888: lwc1        $f0, 0x6C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801EB88C: bne         $v0, $zero, L_801EB89C
    if (ctx->r2 != 0) {
        // 0x801EB890: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_801EB89C;
    }
    // 0x801EB890: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x801EB894: b           L_801EBB94
    // 0x801EB898: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801EBB94;
    // 0x801EB898: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801EB89C:
    // 0x801EB89C: swc1        $f0, 0x90($s1)
    MEM_W(0X90, ctx->r17) = ctx->f0.u32l;
    // 0x801EB8A0: lbu         $t0, 0x73($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X73);
    // 0x801EB8A4: swc1        $f14, 0x98($s1)
    MEM_W(0X98, ctx->r17) = ctx->f14.u32l;
    // 0x801EB8A8: lw          $s0, 0x18($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X18);
    // 0x801EB8AC: sw          $t0, 0x94($s1)
    MEM_W(0X94, ctx->r17) = ctx->r8;
    // 0x801EB8B0: lwc1        $f4, 0x1C($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x801EB8B4: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x801EB8B8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801EB8BC: mul.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f14.fl);
    // 0x801EB8C0: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x801EB8C4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801EB8C8: addiu       $t1, $sp, 0x60
    ctx->r9 = ADD32(ctx->r29, 0X60);
    // 0x801EB8CC: addiu       $t2, $sp, 0x5C
    ctx->r10 = ADD32(ctx->r29, 0X5C);
    // 0x801EB8D0: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    // 0x801EB8D4: swc1        $f6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f6.u32l;
    // 0x801EB8D8: lwc1        $f8, 0x20($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X20);
    // 0x801EB8DC: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x801EB8E0: swc1        $f16, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f16.u32l;
    // 0x801EB8E4: lwc1        $f18, 0x24($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X24);
    // 0x801EB8E8: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x801EB8EC: swc1        $f6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f6.u32l;
    // 0x801EB8F0: lhu         $a2, 0x18($v1)
    ctx->r6 = MEM_HU(ctx->r3, 0X18);
    // 0x801EB8F4: lhu         $a1, 0x16($v1)
    ctx->r5 = MEM_HU(ctx->r3, 0X16);
    // 0x801EB8F8: lhu         $a0, 0x14($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X14);
    // 0x801EB8FC: sw          $v1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r3;
    // 0x801EB900: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x801EB904: jal         0x8000E808
    // 0x801EB908: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    func_8000E808_F408(rdram, ctx);
        goto after_1;
    // 0x801EB908: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_1:
    // 0x801EB90C: lw          $v1, 0x54($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X54);
    // 0x801EB910: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801EB914: lwc1        $f18, 0x60($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801EB918: lwc1        $f10, 0x8($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801EB91C: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x801EB920: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x801EB924: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801EB928: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801EB92C: lwc1        $f0, 0x6C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801EB930: swc1        $f16, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f16.u32l;
    // 0x801EB934: lwc1        $f4, 0xC($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0XC);
    // 0x801EB938: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801EB93C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801EB940: swc1        $f6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f6.u32l;
    // 0x801EB944: lwc1        $f10, 0x10($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X10);
    // 0x801EB948: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801EB94C: swc1        $f16, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f16.u32l;
    // 0x801EB950: swc1        $f14, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f14.u32l;
    // 0x801EB954: swc1        $f14, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f14.u32l;
    // 0x801EB958: swc1        $f18, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f18.u32l;
    // 0x801EB95C: lbu         $t3, 0x73($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X73);
    // 0x801EB960: sltiu       $at, $t3, 0x5
    ctx->r1 = ctx->r11 < 0X5 ? 1 : 0;
    // 0x801EB964: beq         $at, $zero, L_801EB980
    if (ctx->r1 == 0) {
        // 0x801EB968: sll         $t3, $t3, 2
        ctx->r11 = S32(ctx->r11 << 2);
            goto L_801EB980;
    }
    // 0x801EB968: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x801EB96C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EB970: addu        $at, $at, $t3
    gpr jr_addend_801EB978 = ctx->r11;
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x801EB974: lw          $t3, -0x1E80($at)
    ctx->r11 = ADD32(ctx->r1, -0X1E80);
    // 0x801EB978: jr          $t3
    // 0x801EB97C: nop

    switch (jr_addend_801EB978 >> 2) {
        case 0: goto L_801EB980; break;
        case 1: goto L_801EB9CC; break;
        case 2: goto L_801EBA20; break;
        case 3: goto L_801EBA80; break;
        case 4: goto L_801EBAE0; break;
        default: switch_error(__func__, 0x801EB978, 0x8020E180);
    }
    // 0x801EB97C: nop

L_801EB980:
    // 0x801EB980: lui         $at, 0x4300
    ctx->r1 = S32(0X4300 << 16);
    // 0x801EB984: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801EB988: addiu       $t4, $zero, 0x12C
    ctx->r12 = ADD32(0, 0X12C);
    // 0x801EB98C: sw          $t4, 0x7C($s1)
    MEM_W(0X7C, ctx->r17) = ctx->r12;
    // 0x801EB990: swc1        $f4, 0x98($s1)
    MEM_W(0X98, ctx->r17) = ctx->f4.u32l;
    // 0x801EB994: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801EB998: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x801EB99C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801EB9A0: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
    // 0x801EB9A4: lwc1        $f8, 0x60($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801EB9A8: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x801EB9AC: lui         $a3, 0xC1A0
    ctx->r7 = S32(0XC1A0 << 16);
    // 0x801EB9B0: swc1        $f8, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f8.u32l;
    // 0x801EB9B4: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801EB9B8: swc1        $f10, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f10.u32l;
    // 0x801EB9BC: jal         0x8000E39C
    // 0x801EB9C0: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    func_8000E39C_EF9C(rdram, ctx);
        goto after_2;
    // 0x801EB9C0: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    after_2:
    // 0x801EB9C4: b           L_801EBB3C
    // 0x801EB9C8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
        goto L_801EBB3C;
    // 0x801EB9C8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
L_801EB9CC:
    // 0x801EB9CC: addiu       $t5, $zero, 0xC8
    ctx->r13 = ADD32(0, 0XC8);
    // 0x801EB9D0: sw          $t5, 0x7C($s1)
    MEM_W(0X7C, ctx->r17) = ctx->r13;
    // 0x801EB9D4: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x801EB9D8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801EB9DC: addiu       $t6, $s0, 0x8
    ctx->r14 = ADD32(ctx->r16, 0X8);
    // 0x801EB9E0: addiu       $t7, $s0, 0xC
    ctx->r15 = ADD32(ctx->r16, 0XC);
    // 0x801EB9E4: addiu       $t8, $s0, 0x10
    ctx->r24 = ADD32(ctx->r16, 0X10);
    // 0x801EB9E8: mul.s       $f12, $f16, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x801EB9EC: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x801EB9F0: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801EB9F4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801EB9F8: lw          $a3, 0x5C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X5C);
    // 0x801EB9FC: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    // 0x801EBA00: jal         0x8000E4E4
    // 0x801EBA04: lwc1        $f14, 0x64($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X64);
    func_8000E4E4_F0E4(rdram, ctx);
        goto after_3;
    // 0x801EBA04: lwc1        $f14, 0x64($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X64);
    after_3:
    // 0x801EBA08: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801EBA0C: addiu       $a1, $a1, -0x434C
    ctx->r5 = ADD32(ctx->r5, -0X434C);
    // 0x801EBA10: jal         0x8003522C
    // 0x801EBA14: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8003522C_35E2C(rdram, ctx);
        goto after_4;
    // 0x801EBA14: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x801EBA18: b           L_801EBB3C
    // 0x801EBA1C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
        goto L_801EBB3C;
    // 0x801EBA1C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
L_801EBA20:
    // 0x801EBA20: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x801EBA24: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801EBA28: addiu       $t9, $zero, 0x96
    ctx->r25 = ADD32(0, 0X96);
    // 0x801EBA2C: sw          $t9, 0x7C($s1)
    MEM_W(0X7C, ctx->r17) = ctx->r25;
    // 0x801EBA30: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x801EBA34: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x801EBA38: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801EBA3C: addiu       $t0, $s0, 0x8
    ctx->r8 = ADD32(ctx->r16, 0X8);
    // 0x801EBA40: addiu       $t1, $s0, 0xC
    ctx->r9 = ADD32(ctx->r16, 0XC);
    // 0x801EBA44: addiu       $t2, $s0, 0x10
    ctx->r10 = ADD32(ctx->r16, 0X10);
    // 0x801EBA48: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x801EBA4C: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x801EBA50: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x801EBA54: lw          $a3, 0x5C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X5C);
    // 0x801EBA58: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    // 0x801EBA5C: lwc1        $f14, 0x64($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801EBA60: jal         0x8000E4E4
    // 0x801EBA64: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    func_8000E4E4_F0E4(rdram, ctx);
        goto after_5;
    // 0x801EBA64: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_5:
    // 0x801EBA68: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801EBA6C: addiu       $a1, $a1, -0x434C
    ctx->r5 = ADD32(ctx->r5, -0X434C);
    // 0x801EBA70: jal         0x8003522C
    // 0x801EBA74: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8003522C_35E2C(rdram, ctx);
        goto after_6;
    // 0x801EBA74: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_6:
    // 0x801EBA78: b           L_801EBB3C
    // 0x801EBA7C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
        goto L_801EBB3C;
    // 0x801EBA7C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
L_801EBA80:
    // 0x801EBA80: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x801EBA84: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801EBA88: addiu       $t3, $zero, 0xFA
    ctx->r11 = ADD32(0, 0XFA);
    // 0x801EBA8C: sw          $t3, 0x7C($s1)
    MEM_W(0X7C, ctx->r17) = ctx->r11;
    // 0x801EBA90: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x801EBA94: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801EBA98: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801EBA9C: addiu       $t4, $s0, 0x8
    ctx->r12 = ADD32(ctx->r16, 0X8);
    // 0x801EBAA0: addiu       $t5, $s0, 0xC
    ctx->r13 = ADD32(ctx->r16, 0XC);
    // 0x801EBAA4: addiu       $t6, $s0, 0x10
    ctx->r14 = ADD32(ctx->r16, 0X10);
    // 0x801EBAA8: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x801EBAAC: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x801EBAB0: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x801EBAB4: lw          $a3, 0x5C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X5C);
    // 0x801EBAB8: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    // 0x801EBABC: lwc1        $f14, 0x64($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801EBAC0: jal         0x8000E4E4
    // 0x801EBAC4: add.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f16.fl;
    func_8000E4E4_F0E4(rdram, ctx);
        goto after_7;
    // 0x801EBAC4: add.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f16.fl;
    after_7:
    // 0x801EBAC8: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801EBACC: addiu       $a1, $a1, -0x434C
    ctx->r5 = ADD32(ctx->r5, -0X434C);
    // 0x801EBAD0: jal         0x8003522C
    // 0x801EBAD4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8003522C_35E2C(rdram, ctx);
        goto after_8;
    // 0x801EBAD4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_8:
    // 0x801EBAD8: b           L_801EBB3C
    // 0x801EBADC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
        goto L_801EBB3C;
    // 0x801EBADC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
L_801EBAE0:
    // 0x801EBAE0: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x801EBAE4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801EBAE8: addiu       $t7, $zero, 0x118
    ctx->r15 = ADD32(0, 0X118);
    // 0x801EBAEC: sw          $t7, 0x7C($s1)
    MEM_W(0X7C, ctx->r17) = ctx->r15;
    // 0x801EBAF0: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x801EBAF4: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x801EBAF8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801EBAFC: addiu       $t8, $s0, 0x8
    ctx->r24 = ADD32(ctx->r16, 0X8);
    // 0x801EBB00: addiu       $t9, $s0, 0xC
    ctx->r25 = ADD32(ctx->r16, 0XC);
    // 0x801EBB04: addiu       $t0, $s0, 0x10
    ctx->r8 = ADD32(ctx->r16, 0X10);
    // 0x801EBB08: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x801EBB0C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x801EBB10: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801EBB14: lw          $a3, 0x5C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X5C);
    // 0x801EBB18: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    // 0x801EBB1C: lwc1        $f14, 0x64($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801EBB20: jal         0x8000E4E4
    // 0x801EBB24: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    func_8000E4E4_F0E4(rdram, ctx);
        goto after_9;
    // 0x801EBB24: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_9:
    // 0x801EBB28: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801EBB2C: addiu       $a1, $a1, -0x434C
    ctx->r5 = ADD32(ctx->r5, -0X434C);
    // 0x801EBB30: jal         0x8003522C
    // 0x801EBB34: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8003522C_35E2C(rdram, ctx);
        goto after_10;
    // 0x801EBB34: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_10:
    // 0x801EBB38: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
L_801EBB3C:
    // 0x801EBB3C: lwc1        $f8, 0x98($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X98);
    // 0x801EBB40: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801EBB44: addiu       $a1, $a1, -0x54E0
    ctx->r5 = ADD32(ctx->r5, -0X54E0);
    // 0x801EBB48: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x801EBB4C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801EBB50: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801EBB54: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801EBB58: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x801EBB5C: jal         0x8000DF10
    // 0x801EBB60: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    func_8000DF10_EB10(rdram, ctx);
        goto after_11;
    // 0x801EBB60: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    after_11:
    // 0x801EBB64: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801EBB68: or          $t3, $v0, $at
    ctx->r11 = ctx->r2 | ctx->r1;
    // 0x801EBB6C: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801EBB70: or          $t4, $t3, $at
    ctx->r12 = ctx->r11 | ctx->r1;
    // 0x801EBB74: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x801EBB78: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801EBB7C: sw          $t4, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r12;
    // 0x801EBB80: sb          $t5, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r13;
    // 0x801EBB84: addiu       $a1, $a1, -0x4DB8
    ctx->r5 = ADD32(ctx->r5, -0X4DB8);
    // 0x801EBB88: jal         0x801D2EE4
    // 0x801EBB8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_12;
    // 0x801EBB8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x801EBB90: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_801EBB94:
    // 0x801EBB94: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801EBB98: lw          $s0, 0x3C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X3C);
    // 0x801EBB9C: lw          $s1, 0x40($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X40);
    // 0x801EBBA0: jr          $ra
    // 0x801EBBA4: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    TRACE_RETURN()
    return;
    // 0x801EBBA4: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_801F9568_624948(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F9568: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F956C: lw          $a1, -0x1130($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1130);
    // 0x801F9570: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F9574: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F9578: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x801F957C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F9580: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x801F9584: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F9588: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801F958C: addiu       $t0, $zero, 0x77
    ctx->r8 = ADD32(0, 0X77);
    // 0x801F9590: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x801F9594: addiu       $t7, $zero, 0x136
    ctx->r15 = ADD32(0, 0X136);
    // 0x801F9598: lui         $at, 0xC3C8
    ctx->r1 = S32(0XC3C8 << 16);
    // 0x801F959C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801F95A0: addiu       $v1, $a1, 0xA0
    ctx->r3 = ADD32(ctx->r5, 0XA0);
    // 0x801F95A4: sb          $a3, 0x2C0($a1)
    MEM_B(0X2C0, ctx->r5) = ctx->r7;
    // 0x801F95A8: sb          $zero, 0x2C1($a1)
    MEM_B(0X2C1, ctx->r5) = 0;
    // 0x801F95AC: sb          $a3, 0x2C2($a1)
    MEM_B(0X2C2, ctx->r5) = ctx->r7;
    // 0x801F95B0: sb          $zero, 0x2C3($a1)
    MEM_B(0X2C3, ctx->r5) = 0;
    // 0x801F95B4: sw          $t6, 0x1EC($a1)
    MEM_W(0X1EC, ctx->r5) = ctx->r14;
    // 0x801F95B8: sw          $t0, 0x1F0($a1)
    MEM_W(0X1F0, ctx->r5) = ctx->r8;
    // 0x801F95BC: sw          $t7, 0x1F4($a1)
    MEM_W(0X1F4, ctx->r5) = ctx->r15;
    // 0x801F95C0: sw          $t0, 0x1F8($a1)
    MEM_W(0X1F8, ctx->r5) = ctx->r8;
    // 0x801F95C4: lui         $at, 0xC348
    ctx->r1 = S32(0XC348 << 16);
    // 0x801F95C8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801F95CC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801F95D0: lui         $at, 0x43C3
    ctx->r1 = S32(0X43C3 << 16);
    // 0x801F95D4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801F95D8: addiu       $a2, $a1, 0x178
    ctx->r6 = ADD32(ctx->r5, 0X178);
    // 0x801F95DC: swc1        $f4, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f4.u32l;
    // 0x801F95E0: swc1        $f6, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f6.u32l;
    // 0x801F95E4: swc1        $f8, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f8.u32l;
    // 0x801F95E8: swc1        $f0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f0.u32l;
    // 0x801F95EC: swc1        $f0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f0.u32l;
    // 0x801F95F0: swc1        $f10, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f10.u32l;
    // 0x801F95F4: addiu       $a0, $zero, 0x60
    ctx->r4 = ADD32(0, 0X60);
    // 0x801F95F8: jal         0x80038BC8
    // 0x801F95FC: swc1        $f16, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f16.u32l;
    func_80038BC8_397C8(rdram, ctx);
        goto after_0;
    // 0x801F95FC: swc1        $f16, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f16.u32l;
    after_0:
    // 0x801F9600: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801F9604: addiu       $a0, $a0, -0x69DC
    ctx->r4 = ADD32(ctx->r4, -0X69DC);
    // 0x801F9608: jal         0x80034DD8
    // 0x801F960C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034DD8_359D8(rdram, ctx);
        goto after_1;
    // 0x801F960C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x801F9610: sw          $zero, 0x90($v0)
    MEM_W(0X90, ctx->r2) = 0;
    // 0x801F9614: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F9618: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F961C: jr          $ra
    // 0x801F9620: nop

    TRACE_RETURN()
    return;
    // 0x801F9620: nop

;}
RECOMP_FUNC void func_801FBA34_626E14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FBA34: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x801FBA38: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x801FBA3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801FBA40: lui         $t7, 0x4
    ctx->r15 = S32(0X4 << 16);
    // 0x801FBA44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801FBA48: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x801FBA4C: lh          $t7, -0x5250($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X5250);
    // 0x801FBA50: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801FBA54: lw          $v1, -0x1130($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1130);
    // 0x801FBA58: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801FBA5C: beq         $t7, $zero, L_801FBA6C
    if (ctx->r15 == 0) {
        // 0x801FBA60: addiu       $v1, $v1, 0x140
        ctx->r3 = ADD32(ctx->r3, 0X140);
            goto L_801FBA6C;
    }
    // 0x801FBA60: addiu       $v1, $v1, 0x140
    ctx->r3 = ADD32(ctx->r3, 0X140);
    // 0x801FBA64: b           L_801FBA70
    // 0x801FBA68: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_801FBA70;
    // 0x801FBA68: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_801FBA6C:
    // 0x801FBA6C: addiu       $v0, $zero, -0x3
    ctx->r2 = ADD32(0, -0X3);
L_801FBA70:
    // 0x801FBA70: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x801FBA74: lwc1        $f4, 0x90($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X90);
    // 0x801FBA78: addiu       $t9, $zero, 0x3C
    ctx->r25 = ADD32(0, 0X3C);
    // 0x801FBA7C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x801FBA80: addiu       $a0, $zero, 0x34E
    ctx->r4 = ADD32(0, 0X34E);
    // 0x801FBA84: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x801FBA88: swc1        $f10, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f10.u32l;
    // 0x801FBA8C: lbu         $t8, 0xE($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0XE);
    // 0x801FBA90: slti        $at, $t8, 0xA
    ctx->r1 = SIGNED(ctx->r24) < 0XA ? 1 : 0;
    // 0x801FBA94: bnel        $at, $zero, L_801FBACC
    if (ctx->r1 != 0) {
        // 0x801FBA98: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801FBACC;
    }
    goto skip_0;
    // 0x801FBA98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801FBA9C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801FBAA0: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x801FBAA4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801FBAA8: sw          $t9, 0x7C($a2)
    MEM_W(0X7C, ctx->r6) = ctx->r25;
    // 0x801FBAAC: swc1        $f0, 0x70($a2)
    MEM_W(0X70, ctx->r6) = ctx->f0.u32l;
    // 0x801FBAB0: swc1        $f0, 0x74($a2)
    MEM_W(0X74, ctx->r6) = ctx->f0.u32l;
    // 0x801FBAB4: jal         0x80038BC8
    // 0x801FBAB8: swc1        $f16, 0x78($a2)
    MEM_W(0X78, ctx->r6) = ctx->f16.u32l;
    func_80038BC8_397C8(rdram, ctx);
        goto after_0;
    // 0x801FBAB8: swc1        $f16, 0x78($a2)
    MEM_W(0X78, ctx->r6) = ctx->f16.u32l;
    after_0:
    // 0x801FBABC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FBAC0: jal         0x8003521C
    // 0x801FBAC4: addiu       $a0, $a0, -0x4528
    ctx->r4 = ADD32(ctx->r4, -0X4528);
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x801FBAC4: addiu       $a0, $a0, -0x4528
    ctx->r4 = ADD32(ctx->r4, -0X4528);
    after_1:
    // 0x801FBAC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FBACC:
    // 0x801FBACC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801FBAD0: jr          $ra
    // 0x801FBAD4: nop

    TRACE_RETURN()
    return;
    // 0x801FBAD4: nop

;}
RECOMP_FUNC void func_802070C0_6324A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802070C0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802070C4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802070C8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802070CC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802070D0: lw          $t6, 0x7C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X7C);
    // 0x802070D4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802070D8: slti        $at, $t6, 0x14
    ctx->r1 = SIGNED(ctx->r14) < 0X14 ? 1 : 0;
    // 0x802070DC: beql        $at, $zero, L_802070F0
    if (ctx->r1 == 0) {
        // 0x802070E0: lw          $t7, 0x2C($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X2C);
            goto L_802070F0;
    }
    goto skip_0;
    // 0x802070E0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x802070E4: jal         0x801D614C
    // 0x802070E8: nop

    func_801D614C_60152C(rdram, ctx);
        goto after_0;
    // 0x802070E8: nop

    after_0:
    // 0x802070EC: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
L_802070F0:
    // 0x802070F0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x802070F4: lwc1        $f6, -0x1178($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1178);
    // 0x802070F8: lwc1        $f4, 0x10($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X10);
    // 0x802070FC: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x80207100: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x80207104: nop

    // 0x80207108: bc1f        L_80207134
    if (!c1cs) {
        // 0x8020710C: nop
    
            goto L_80207134;
    }
    // 0x8020710C: nop

    // 0x80207110: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80207114: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80207118: lui         $a3, 0x42A0
    ctx->r7 = S32(0X42A0 << 16);
    // 0x8020711C: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x80207120: jal         0x8000E39C
    // 0x80207124: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8000E39C_EF9C(rdram, ctx);
        goto after_1;
    // 0x80207124: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_1:
    // 0x80207128: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8020712C: jal         0x8003521C
    // 0x80207130: addiu       $a0, $a0, 0x7158
    ctx->r4 = ADD32(ctx->r4, 0X7158);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x80207130: addiu       $a0, $a0, 0x7158
    ctx->r4 = ADD32(ctx->r4, 0X7158);
    after_2:
L_80207134:
    // 0x80207134: jal         0x80207698
    // 0x80207138: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80207698_632A78(rdram, ctx);
        goto after_3;
    // 0x80207138: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8020713C: jal         0x802074EC
    // 0x80207140: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_802074EC_6328CC(rdram, ctx);
        goto after_4;
    // 0x80207140: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80207144: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80207148: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8020714C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80207150: jr          $ra
    // 0x80207154: nop

    TRACE_RETURN()
    return;
    // 0x80207154: nop

;}
RECOMP_FUNC void func_801E5064_610444(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E5064: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801E5068: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E506C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801E5070: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801E5074: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E5078: jal         0x801D31F0
    // 0x801E507C: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    func_801D31F0_5FE5D0(rdram, ctx);
        goto after_0;
    // 0x801E507C: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    after_0:
    // 0x801E5080: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E5084: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x801E5088: jal         0x801D3B18
    // 0x801E508C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_801D3B18_5FEEF8(rdram, ctx);
        goto after_1;
    // 0x801E508C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_1:
    // 0x801E5090: sb          $v0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r2;
    // 0x801E5094: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E5098: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801E509C: jal         0x801D3F00
    // 0x801E50A0: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_801D3F00_5FF2E0(rdram, ctx);
        goto after_2;
    // 0x801E50A0: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_2:
    // 0x801E50A4: lbu         $t6, 0x27($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X27);
    // 0x801E50A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E50AC: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x801E50B0: jal         0x801D60E4
    // 0x801E50B4: sb          $t7, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r15;
    func_801D60E4_6014C4(rdram, ctx);
        goto after_3;
    // 0x801E50B4: sb          $t7, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r15;
    after_3:
    // 0x801E50B8: jal         0x801EEEC0
    // 0x801E50BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801EEEC0_61A2A0(rdram, ctx);
        goto after_4;
    // 0x801E50BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x801E50C0: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x801E50C4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E50C8: ldc1        $f6, -0x20E8($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X20E8);
    // 0x801E50CC: lwc1        $f4, 0x10($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X10);
    // 0x801E50D0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E50D4: cvt.d.s     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f0.d = CVT_D_S(ctx->f4.fl);
    // 0x801E50D8: c.lt.d      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.d < ctx->f6.d;
    // 0x801E50DC: nop

    // 0x801E50E0: bc1fl       L_801E5134
    if (!c1cs) {
        // 0x801E50E4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801E5134;
    }
    goto skip_0;
    // 0x801E50E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801E50E8: ldc1        $f8, -0x20E0($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X20E0);
    // 0x801E50EC: c.lt.d      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.d < ctx->f0.d;
    // 0x801E50F0: nop

    // 0x801E50F4: bc1fl       L_801E5134
    if (!c1cs) {
        // 0x801E50F8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801E5134;
    }
    goto skip_1;
    // 0x801E50F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x801E50FC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E5100: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801E5104: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E5108: swc1        $f0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f0.u32l;
    // 0x801E510C: swc1        $f0, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f0.u32l;
    // 0x801E5110: swc1        $f0, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f0.u32l;
    // 0x801E5114: lbu         $t9, 0x27($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X27);
    // 0x801E5118: addiu       $t0, $zero, 0x64
    ctx->r8 = ADD32(0, 0X64);
    // 0x801E511C: addiu       $a0, $a0, 0x5144
    ctx->r4 = ADD32(ctx->r4, 0X5144);
    // 0x801E5120: bnel        $t9, $at, L_801E5134
    if (ctx->r25 != ctx->r1) {
        // 0x801E5124: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801E5134;
    }
    goto skip_2;
    // 0x801E5124: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x801E5128: jal         0x8003521C
    // 0x801E512C: sw          $t0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r8;
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x801E512C: sw          $t0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r8;
    after_5:
    // 0x801E5130: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E5134:
    // 0x801E5134: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801E5138: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801E513C: jr          $ra
    // 0x801E5140: nop

    TRACE_RETURN()
    return;
    // 0x801E5140: nop

;}
RECOMP_FUNC void func_80205244_630624(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80205244: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80205248: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x8020524C: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x80205250: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x80205254: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80205258: lui         $a2, 0x802
    ctx->r6 = S32(0X802 << 16);
    // 0x8020525C: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80205260: addiu       $a2, $a2, -0x6BD0
    ctx->r6 = ADD32(ctx->r6, -0X6BD0);
    // 0x80205264: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80205268: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8020526C: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80205270: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80205274: lui         $a3, 0x8021
    ctx->r7 = S32(0X8021 << 16);
    // 0x80205278: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x8020527C: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80205280: ori         $t6, $zero, 0x8000
    ctx->r14 = 0 | 0X8000;
    // 0x80205284: ori         $t7, $zero, 0x8000
    ctx->r15 = 0 | 0X8000;
    // 0x80205288: ori         $t8, $zero, 0x8000
    ctx->r24 = 0 | 0X8000;
    // 0x8020528C: addiu       $t9, $zero, 0x4B5
    ctx->r25 = ADD32(0, 0X4B5);
    // 0x80205290: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80205294: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x80205298: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x8020529C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x802052A0: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x802052A4: addiu       $a3, $a3, -0x5238
    ctx->r7 = ADD32(ctx->r7, -0X5238);
    // 0x802052A8: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
    // 0x802052AC: addiu       $a1, $a1, 0x5380
    ctx->r5 = ADD32(ctx->r5, 0X5380);
    // 0x802052B0: swc1        $f12, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f12.u32l;
    // 0x802052B4: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    // 0x802052B8: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    // 0x802052BC: jal         0x800358E8
    // 0x802052C0: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    func_800358E8_364E8(rdram, ctx);
        goto after_0;
    // 0x802052C0: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x802052C4: beq         $v0, $zero, L_8020536C
    if (ctx->r2 == 0) {
        // 0x802052C8: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_8020536C;
    }
    // 0x802052C8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x802052CC: addiu       $t0, $zero, 0x14
    ctx->r8 = ADD32(0, 0X14);
    // 0x802052D0: sw          $t0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r8;
    // 0x802052D4: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x802052D8: lw          $v1, 0x18($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X18);
    // 0x802052DC: addiu       $v0, $v0, -0x47A0
    ctx->r2 = ADD32(ctx->r2, -0X47A0);
    // 0x802052E0: lbu         $t1, 0xA($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0XA);
    // 0x802052E4: lbu         $t3, 0xB($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0XB);
    // 0x802052E8: lbu         $t4, 0xC($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0XC);
    // 0x802052EC: lbu         $t5, 0xD($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0XD);
    // 0x802052F0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x802052F4: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x802052F8: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x802052FC: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x80205300: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x80205304: addiu       $a1, $a1, -0x5238
    ctx->r5 = ADD32(ctx->r5, -0X5238);
    // 0x80205308: lbu         $a2, 0x8($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X8);
    // 0x8020530C: lbu         $a3, 0x9($v0)
    ctx->r7 = MEM_BU(ctx->r2, 0X9);
    // 0x80205310: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80205314: sw          $v1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r3;
    // 0x80205318: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8020531C: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x80205320: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x80205324: jal         0x8000E030
    // 0x80205328: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    func_8000E030_EC30(rdram, ctx);
        goto after_1;
    // 0x80205328: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    after_1:
    // 0x8020532C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80205330: lw          $v1, 0x54($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X54);
    // 0x80205334: or          $t7, $v0, $at
    ctx->r15 = ctx->r2 | ctx->r1;
    // 0x80205338: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x8020533C: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x80205340: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x80205344: addiu       $a0, $zero, 0x400
    ctx->r4 = ADD32(0, 0X400);
    // 0x80205348: sw          $t8, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r24;
    // 0x8020534C: jal         0x8000DD58
    // 0x80205350: sb          $t9, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r25;
    func_8000DD58_E958(rdram, ctx);
        goto after_2;
    // 0x80205350: sb          $t9, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r25;
    after_2:
    // 0x80205354: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80205358: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8020535C: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    // 0x80205360: addiu       $a2, $s0, 0x70
    ctx->r6 = ADD32(ctx->r16, 0X70);
    // 0x80205364: jal         0x8000E630
    // 0x80205368: addiu       $a3, $s0, 0x74
    ctx->r7 = ADD32(ctx->r16, 0X74);
    func_8000E630_F230(rdram, ctx);
        goto after_3;
    // 0x80205368: addiu       $a3, $s0, 0x74
    ctx->r7 = ADD32(ctx->r16, 0X74);
    after_3:
L_8020536C:
    // 0x8020536C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80205370: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x80205374: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x80205378: jr          $ra
    // 0x8020537C: nop

    TRACE_RETURN()
    return;
    // 0x8020537C: nop

;}
RECOMP_FUNC void func_801F0398_61B778(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F0398: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F039C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F03A0: jal         0x801F76D0
    // 0x801F03A4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801F76D0_622AB0(rdram, ctx);
        goto after_0;
    // 0x801F03A4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F03A8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x801F03AC: jal         0x801D2F40
    // 0x801F03B0: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    func_801D2F40_5FE320(rdram, ctx);
        goto after_1;
    // 0x801F03B0: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_1:
    // 0x801F03B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F03B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F03BC: jr          $ra
    // 0x801F03C0: nop

    TRACE_RETURN()
    return;
    // 0x801F03C0: nop

;}
RECOMP_FUNC void func_801D5B70_600F50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D5B70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D5B74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D5B78: lw          $v0, 0x7C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X7C);
    // 0x801D5B7C: beq         $v0, $zero, L_801D5B94
    if (ctx->r2 == 0) {
        // 0x801D5B80: addiu       $t6, $v0, -0x1
        ctx->r14 = ADD32(ctx->r2, -0X1);
            goto L_801D5B94;
    }
    // 0x801D5B80: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x801D5B84: jal         0x801D614C
    // 0x801D5B88: sw          $t6, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r14;
    func_801D614C_60152C(rdram, ctx);
        goto after_0;
    // 0x801D5B88: sw          $t6, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r14;
    after_0:
    // 0x801D5B8C: b           L_801D5B98
    // 0x801D5B90: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801D5B98;
    // 0x801D5B90: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D5B94:
    // 0x801D5B94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801D5B98:
    // 0x801D5B98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D5B9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D5BA0: jr          $ra
    // 0x801D5BA4: nop

    TRACE_RETURN()
    return;
    // 0x801D5BA4: nop

;}
RECOMP_FUNC void func_801EDE98_619278(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EDE98: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801EDE9C: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801EDEA0: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801EDEA4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801EDEA8: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x801EDEAC: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x801EDEB0: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x801EDEB4: lw          $t8, 0x7C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X7C);
    // 0x801EDEB8: lw          $t7, 0x1D8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X1D8);
    // 0x801EDEBC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801EDEC0: addiu       $v1, $t8, -0x1
    ctx->r3 = ADD32(ctx->r24, -0X1);
    // 0x801EDEC4: slti        $at, $v1, -0x64
    ctx->r1 = SIGNED(ctx->r3) < -0X64 ? 1 : 0;
    // 0x801EDEC8: lw          $s1, 0x18($t7)
    ctx->r17 = MEM_W(ctx->r15, 0X18);
    // 0x801EDECC: beq         $at, $zero, L_801EDEDC
    if (ctx->r1 == 0) {
        // 0x801EDED0: sw          $v1, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r3;
            goto L_801EDEDC;
    }
    // 0x801EDED0: sw          $v1, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r3;
    // 0x801EDED4: addiu       $v1, $zero, -0x64
    ctx->r3 = ADD32(0, -0X64);
    // 0x801EDED8: sw          $v1, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r3;
L_801EDEDC:
    // 0x801EDEDC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x801EDEE0: bne         $v1, $at, L_801EDF08
    if (ctx->r3 != ctx->r1) {
        // 0x801EDEE4: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_801EDF08;
    }
    // 0x801EDEE4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801EDEE8: jal         0x80037C9C
    // 0x801EDEEC: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    func_80037C9C_3889C(rdram, ctx);
        goto after_0;
    // 0x801EDEEC: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    after_0:
    // 0x801EDEF0: lui         $a2, 0x3333
    ctx->r6 = S32(0X3333 << 16);
    // 0x801EDEF4: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x801EDEF8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801EDEFC: jal         0x80037C20
    // 0x801EDF00: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80037C20_38820(rdram, ctx);
        goto after_1;
    // 0x801EDF00: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x801EDF04: lw          $v1, 0x7C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X7C);
L_801EDF08:
    // 0x801EDF08: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x801EDF0C: bne         $v1, $at, L_801EDF60
    if (ctx->r3 != ctx->r1) {
        // 0x801EDF10: lui         $at, 0x8021
        ctx->r1 = S32(0X8021 << 16);
            goto L_801EDF60;
    }
    // 0x801EDF10: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EDF14: lwc1        $f4, -0x1DD8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1DD8);
    // 0x801EDF18: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x801EDF1C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801EDF20: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801EDF24: lwc1        $f6, 0x8($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801EDF28: lui         $at, 0xC28C
    ctx->r1 = S32(0XC28C << 16);
    // 0x801EDF2C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801EDF30: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x801EDF34: lui         $a1, 0x4013
    ctx->r5 = S32(0X4013 << 16);
    // 0x801EDF38: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x801EDF3C: ori         $a1, $a1, 0x3333
    ctx->r5 = ctx->r5 | 0X3333;
    // 0x801EDF40: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x801EDF44: lwc1        $f18, 0x10($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801EDF48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EDF4C: addiu       $a2, $zero, 0x17
    ctx->r6 = ADD32(0, 0X17);
    // 0x801EDF50: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    // 0x801EDF54: jal         0x801E006C
    // 0x801EDF58: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_2;
    // 0x801EDF58: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    after_2:
    // 0x801EDF5C: lw          $v1, 0x7C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X7C);
L_801EDF60:
    // 0x801EDF60: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x801EDF64: bne         $v1, $at, L_801EDFCC
    if (ctx->r3 != ctx->r1) {
        // 0x801EDF68: lui         $at, 0x8021
        ctx->r1 = S32(0X8021 << 16);
            goto L_801EDFCC;
    }
    // 0x801EDF68: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EDF6C: lwc1        $f4, -0x1DD4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1DD4);
    // 0x801EDF70: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x801EDF74: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801EDF78: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801EDF7C: lwc1        $f6, 0x8($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801EDF80: lui         $at, 0xC28C
    ctx->r1 = S32(0XC28C << 16);
    // 0x801EDF84: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801EDF88: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x801EDF8C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EDF90: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x801EDF94: ldc1        $f6, -0x1DD0($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X1DD0);
    // 0x801EDF98: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x801EDF9C: lwc1        $f18, 0x10($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801EDFA0: lui         $a1, 0x4006
    ctx->r5 = S32(0X4006 << 16);
    // 0x801EDFA4: ori         $a1, $a1, 0x6666
    ctx->r5 = ctx->r5 | 0X6666;
    // 0x801EDFA8: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801EDFAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EDFB0: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x801EDFB4: addiu       $a2, $zero, 0x17
    ctx->r6 = ADD32(0, 0X17);
    // 0x801EDFB8: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    // 0x801EDFBC: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801EDFC0: jal         0x801E006C
    // 0x801EDFC4: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_3;
    // 0x801EDFC4: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x801EDFC8: lw          $v1, 0x7C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X7C);
L_801EDFCC:
    // 0x801EDFCC: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x801EDFD0: bne         $v1, $at, L_801EE034
    if (ctx->r3 != ctx->r1) {
        // 0x801EDFD4: lui         $at, 0x8021
        ctx->r1 = S32(0X8021 << 16);
            goto L_801EE034;
    }
    // 0x801EDFD4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EDFD8: lwc1        $f16, -0x1DC8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1DC8);
    // 0x801EDFDC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x801EDFE0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801EDFE4: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x801EDFE8: lwc1        $f18, 0x8($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801EDFEC: lui         $at, 0xC28C
    ctx->r1 = S32(0XC28C << 16);
    // 0x801EDFF0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801EDFF4: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x801EDFF8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EDFFC: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x801EE000: ldc1        $f18, -0x1DC0($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0X1DC0);
    // 0x801EE004: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801EE008: lwc1        $f10, 0x10($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801EE00C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EE010: lui         $a1, 0x3FC0
    ctx->r5 = S32(0X3FC0 << 16);
    // 0x801EE014: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x801EE018: addiu       $a2, $zero, 0x17
    ctx->r6 = ADD32(0, 0X17);
    // 0x801EE01C: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x801EE020: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    // 0x801EE024: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801EE028: jal         0x801E006C
    // 0x801EE02C: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_4;
    // 0x801EE02C: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x801EE030: lw          $v1, 0x7C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X7C);
L_801EE034:
    // 0x801EE034: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x801EE038: bne         $v1, $at, L_801EE0A0
    if (ctx->r3 != ctx->r1) {
        // 0x801EE03C: lui         $at, 0x8021
        ctx->r1 = S32(0X8021 << 16);
            goto L_801EE0A0;
    }
    // 0x801EE03C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EE040: lwc1        $f8, -0x1DB8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1DB8);
    // 0x801EE044: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x801EE048: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801EE04C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x801EE050: lwc1        $f10, 0x8($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801EE054: lui         $at, 0xC28C
    ctx->r1 = S32(0XC28C << 16);
    // 0x801EE058: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801EE05C: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x801EE060: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EE064: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x801EE068: ldc1        $f10, -0x1DB0($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X1DB0);
    // 0x801EE06C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x801EE070: lwc1        $f6, 0x10($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801EE074: lui         $a1, 0x3FE6
    ctx->r5 = S32(0X3FE6 << 16);
    // 0x801EE078: ori         $a1, $a1, 0x6666
    ctx->r5 = ctx->r5 | 0X6666;
    // 0x801EE07C: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801EE080: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EE084: sub.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d - ctx->f10.d;
    // 0x801EE088: addiu       $a2, $zero, 0x17
    ctx->r6 = ADD32(0, 0X17);
    // 0x801EE08C: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    // 0x801EE090: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801EE094: jal         0x801E006C
    // 0x801EE098: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_5;
    // 0x801EE098: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    after_5:
    // 0x801EE09C: lw          $v1, 0x7C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X7C);
L_801EE0A0:
    // 0x801EE0A0: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x801EE0A4: bne         $v1, $at, L_801EE108
    if (ctx->r3 != ctx->r1) {
        // 0x801EE0A8: lui         $at, 0x8021
        ctx->r1 = S32(0X8021 << 16);
            goto L_801EE108;
    }
    // 0x801EE0A8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EE0AC: lwc1        $f4, -0x1DA8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1DA8);
    // 0x801EE0B0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x801EE0B4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801EE0B8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801EE0BC: lwc1        $f6, 0x8($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801EE0C0: lui         $at, 0xC28C
    ctx->r1 = S32(0XC28C << 16);
    // 0x801EE0C4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801EE0C8: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x801EE0CC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EE0D0: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x801EE0D4: ldc1        $f6, -0x1DA0($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X1DA0);
    // 0x801EE0D8: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x801EE0DC: lwc1        $f18, 0x10($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801EE0E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EE0E4: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    // 0x801EE0E8: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801EE0EC: addiu       $a2, $zero, 0x17
    ctx->r6 = ADD32(0, 0X17);
    // 0x801EE0F0: sub.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d - ctx->f6.d;
    // 0x801EE0F4: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    // 0x801EE0F8: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801EE0FC: jal         0x801E006C
    // 0x801EE100: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_6;
    // 0x801EE100: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    after_6:
    // 0x801EE104: lw          $v1, 0x7C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X7C);
L_801EE108:
    // 0x801EE108: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x801EE10C: bne         $v1, $at, L_801EE150
    if (ctx->r3 != ctx->r1) {
        // 0x801EE110: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801EE150;
    }
    // 0x801EE110: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EE114: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EE118: lwc1        $f16, -0x1D98($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1D98);
    // 0x801EE11C: lui         $at, 0xC28C
    ctx->r1 = S32(0XC28C << 16);
    // 0x801EE120: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801EE124: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x801EE128: lwc1        $f18, 0x8($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801EE12C: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x801EE130: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    // 0x801EE134: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x801EE138: lwc1        $f6, 0x10($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801EE13C: addiu       $a2, $zero, 0x17
    ctx->r6 = ADD32(0, 0X17);
    // 0x801EE140: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    // 0x801EE144: jal         0x801E006C
    // 0x801EE148: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_7;
    // 0x801EE148: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    after_7:
    // 0x801EE14C: lw          $v1, 0x7C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X7C);
L_801EE150:
    // 0x801EE150: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x801EE154: bne         $v1, $at, L_801EE1B0
    if (ctx->r3 != ctx->r1) {
        // 0x801EE158: lui         $at, 0x8021
        ctx->r1 = S32(0X8021 << 16);
            goto L_801EE1B0;
    }
    // 0x801EE158: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EE15C: lwc1        $f8, -0x1D94($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1D94);
    // 0x801EE160: lui         $at, 0xC28C
    ctx->r1 = S32(0XC28C << 16);
    // 0x801EE164: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801EE168: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x801EE16C: lwc1        $f10, 0x8($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801EE170: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x801EE174: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EE178: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x801EE17C: lwc1        $f18, 0x10($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801EE180: ldc1        $f6, -0x1D90($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X1D90);
    // 0x801EE184: lui         $a1, 0x3FCC
    ctx->r5 = S32(0X3FCC << 16);
    // 0x801EE188: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801EE18C: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x801EE190: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x801EE194: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EE198: addiu       $a2, $zero, 0x17
    ctx->r6 = ADD32(0, 0X17);
    // 0x801EE19C: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    // 0x801EE1A0: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801EE1A4: jal         0x801E006C
    // 0x801EE1A8: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_8;
    // 0x801EE1A8: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    after_8:
    // 0x801EE1AC: lw          $v1, 0x7C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X7C);
L_801EE1B0:
    // 0x801EE1B0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801EE1B4: bne         $v1, $at, L_801EE20C
    if (ctx->r3 != ctx->r1) {
        // 0x801EE1B8: lui         $at, 0x8021
        ctx->r1 = S32(0X8021 << 16);
            goto L_801EE20C;
    }
    // 0x801EE1B8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EE1BC: lwc1        $f16, -0x1D88($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1D88);
    // 0x801EE1C0: lui         $at, 0xC28C
    ctx->r1 = S32(0XC28C << 16);
    // 0x801EE1C4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801EE1C8: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x801EE1CC: lwc1        $f18, 0x8($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801EE1D0: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x801EE1D4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EE1D8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x801EE1DC: lwc1        $f6, 0x10($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801EE1E0: ldc1        $f10, -0x1D80($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X1D80);
    // 0x801EE1E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EE1E8: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801EE1EC: lui         $a1, 0x3FC0
    ctx->r5 = S32(0X3FC0 << 16);
    // 0x801EE1F0: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x801EE1F4: addiu       $a2, $zero, 0x17
    ctx->r6 = ADD32(0, 0X17);
    // 0x801EE1F8: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    // 0x801EE1FC: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801EE200: jal         0x801E006C
    // 0x801EE204: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_9;
    // 0x801EE204: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    after_9:
    // 0x801EE208: lw          $v1, 0x7C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X7C);
L_801EE20C:
    // 0x801EE20C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801EE210: bne         $v1, $at, L_801EE26C
    if (ctx->r3 != ctx->r1) {
        // 0x801EE214: lui         $at, 0x8021
        ctx->r1 = S32(0X8021 << 16);
            goto L_801EE26C;
    }
    // 0x801EE214: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EE218: lwc1        $f4, -0x1D78($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1D78);
    // 0x801EE21C: lui         $at, 0xC28C
    ctx->r1 = S32(0XC28C << 16);
    // 0x801EE220: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801EE224: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801EE228: lwc1        $f6, 0x8($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801EE22C: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x801EE230: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EE234: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801EE238: lwc1        $f10, 0x10($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801EE23C: ldc1        $f18, -0x1D70($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0X1D70);
    // 0x801EE240: lui         $a1, 0x3FF3
    ctx->r5 = S32(0X3FF3 << 16);
    // 0x801EE244: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x801EE248: ori         $a1, $a1, 0x3333
    ctx->r5 = ctx->r5 | 0X3333;
    // 0x801EE24C: sub.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d - ctx->f18.d;
    // 0x801EE250: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EE254: addiu       $a2, $zero, 0x17
    ctx->r6 = ADD32(0, 0X17);
    // 0x801EE258: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    // 0x801EE25C: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801EE260: jal         0x801E006C
    // 0x801EE264: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_10;
    // 0x801EE264: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    after_10:
    // 0x801EE268: lw          $v1, 0x7C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X7C);
L_801EE26C:
    // 0x801EE26C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801EE270: bne         $v1, $at, L_801EE2CC
    if (ctx->r3 != ctx->r1) {
        // 0x801EE274: lui         $at, 0x8021
        ctx->r1 = S32(0X8021 << 16);
            goto L_801EE2CC;
    }
    // 0x801EE274: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EE278: lwc1        $f8, -0x1D68($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1D68);
    // 0x801EE27C: lui         $at, 0xC28C
    ctx->r1 = S32(0XC28C << 16);
    // 0x801EE280: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801EE284: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x801EE288: lwc1        $f10, 0x8($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801EE28C: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x801EE290: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EE294: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x801EE298: lwc1        $f18, 0x10($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801EE29C: ldc1        $f6, -0x1D60($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X1D60);
    // 0x801EE2A0: lui         $a1, 0x3FE6
    ctx->r5 = S32(0X3FE6 << 16);
    // 0x801EE2A4: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801EE2A8: ori         $a1, $a1, 0x6666
    ctx->r5 = ctx->r5 | 0X6666;
    // 0x801EE2AC: sub.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d - ctx->f6.d;
    // 0x801EE2B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EE2B4: addiu       $a2, $zero, 0x17
    ctx->r6 = ADD32(0, 0X17);
    // 0x801EE2B8: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    // 0x801EE2BC: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801EE2C0: jal         0x801E006C
    // 0x801EE2C4: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_11;
    // 0x801EE2C4: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    after_11:
    // 0x801EE2C8: lw          $v1, 0x7C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X7C);
L_801EE2CC:
    // 0x801EE2CC: addiu       $at, $zero, -0x1E
    ctx->r1 = ADD32(0, -0X1E);
    // 0x801EE2D0: bnel        $v1, $at, L_801EE344
    if (ctx->r3 != ctx->r1) {
        // 0x801EE2D4: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_801EE344;
    }
    goto skip_0;
    // 0x801EE2D4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x801EE2D8: jal         0x80038BC8
    // 0x801EE2DC: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    func_80038BC8_397C8(rdram, ctx);
        goto after_12;
    // 0x801EE2DC: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    after_12:
    // 0x801EE2E0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801EE2E4: jal         0x80037C9C
    // 0x801EE2E8: addiu       $a1, $zero, 0x3E8
    ctx->r5 = ADD32(0, 0X3E8);
    func_80037C9C_3889C(rdram, ctx);
        goto after_13;
    // 0x801EE2E8: addiu       $a1, $zero, 0x3E8
    ctx->r5 = ADD32(0, 0X3E8);
    after_13:
    // 0x801EE2EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801EE2F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801EE2F4: jal         0x80037C20
    // 0x801EE2F8: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_80037C20_38820(rdram, ctx);
        goto after_14;
    // 0x801EE2F8: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_14:
    // 0x801EE2FC: lui         $at, 0x4296
    ctx->r1 = S32(0X4296 << 16);
    // 0x801EE300: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801EE304: lwc1        $f16, 0x10($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801EE308: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801EE30C: lw          $a1, 0x8($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X8);
    // 0x801EE310: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801EE314: lui         $a2, 0xC2B4
    ctx->r6 = S32(0XC2B4 << 16);
    // 0x801EE318: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x801EE31C: jal         0x801E0950
    // 0x801EE320: nop

    func_801E0950_60BD30(rdram, ctx);
        goto after_15;
    // 0x801EE320: nop

    after_15:
    // 0x801EE324: lw          $t1, 0x18($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X18);
    // 0x801EE328: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801EE32C: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801EE330: addiu       $a0, $a0, -0x1CAC
    ctx->r4 = ADD32(ctx->r4, -0X1CAC);
    // 0x801EE334: sw          $t1, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r9;
    // 0x801EE338: jal         0x8003521C
    // 0x801EE33C: swc1        $f6, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->f6.u32l;
    func_8003521C_35E1C(rdram, ctx);
        goto after_16;
    // 0x801EE33C: swc1        $f6, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->f6.u32l;
    after_16:
    // 0x801EE340: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_801EE344:
    // 0x801EE344: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x801EE348: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x801EE34C: jr          $ra
    // 0x801EE350: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x801EE350: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_801F07E4_61BBC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F07E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801F07E8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801F07EC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F07F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F07F4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801F07F8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801F07FC: jal         0x801D3018
    // 0x801F0800: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    func_801D3018_5FE3F8(rdram, ctx);
        goto after_0;
    // 0x801F0800: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_0:
    // 0x801F0804: jal         0x801F76D0
    // 0x801F0808: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801F76D0_622AB0(rdram, ctx);
        goto after_1;
    // 0x801F0808: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801F080C: lwc1        $f12, 0xB0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XB0);
    // 0x801F0810: lwc1        $f14, 0xB8($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0XB8);
    // 0x801F0814: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x801F0818: jal         0x801D4944
    // 0x801F081C: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    func_801D4944_5FFD24(rdram, ctx);
        goto after_2;
    // 0x801F081C: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    after_2:
    // 0x801F0820: jal         0x801F7168
    // 0x801F0824: nop

    func_801F7168_622548(rdram, ctx);
        goto after_3;
    // 0x801F0824: nop

    after_3:
    // 0x801F0828: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x801F082C: lui         $at, 0x43D7
    ctx->r1 = S32(0X43D7 << 16);
    // 0x801F0830: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F0834: lwc1        $f6, 0x20($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X20);
    // 0x801F0838: lui         $a2, 0x3CA3
    ctx->r6 = S32(0X3CA3 << 16);
    // 0x801F083C: lui         $a3, 0x3ECC
    ctx->r7 = S32(0X3ECC << 16);
    // 0x801F0840: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801F0844: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x801F0848: ori         $a2, $a2, 0xD70A
    ctx->r6 = ctx->r6 | 0XD70A;
    // 0x801F084C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F0850: sub.s       $f2, $f0, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x801F0854: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x801F0858: jal         0x801D6A30
    // 0x801F085C: nop

    func_801D6A30_601E10(rdram, ctx);
        goto after_4;
    // 0x801F085C: nop

    after_4:
    // 0x801F0860: jal         0x801D6124
    // 0x801F0864: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D6124_601504(rdram, ctx);
        goto after_5;
    // 0x801F0864: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x801F0868: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801F086C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x801F0870: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x801F0874: sh          $zero, 0x14($t7)
    MEM_H(0X14, ctx->r15) = 0;
    // 0x801F0878: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801F087C: lwc1        $f14, 0x78($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X78);
    // 0x801F0880: jal         0x8000EB08
    // 0x801F0884: lwc1        $f12, 0x70($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X70);
    func_8000EB08_F708(rdram, ctx);
        goto after_6;
    // 0x801F0884: lwc1        $f12, 0x70($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X70);
    after_6:
    // 0x801F0888: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x801F088C: lui         $at, 0x43E1
    ctx->r1 = S32(0X43E1 << 16);
    // 0x801F0890: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801F0894: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801F0898: sh          $v0, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r2;
    // 0x801F089C: sh          $zero, 0x18($v1)
    MEM_H(0X18, ctx->r3) = 0;
    // 0x801F08A0: c.le.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl <= ctx->f0.fl;
    // 0x801F08A4: nop

    // 0x801F08A8: bc1fl       L_801F08FC
    if (!c1cs) {
        // 0x801F08AC: lui         $at, 0xC3E1
        ctx->r1 = S32(0XC3E1 << 16);
            goto L_801F08FC;
    }
    goto skip_0;
    // 0x801F08AC: lui         $at, 0xC3E1
    ctx->r1 = S32(0XC3E1 << 16);
    skip_0:
    // 0x801F08B0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801F08B4: lwc1        $f18, 0xB0($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XB0);
    // 0x801F08B8: lui         $at, 0xC3FA
    ctx->r1 = S32(0XC3FA << 16);
    // 0x801F08BC: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x801F08C0: nop

    // 0x801F08C4: bc1fl       L_801F08FC
    if (!c1cs) {
        // 0x801F08C8: lui         $at, 0xC3E1
        ctx->r1 = S32(0XC3E1 << 16);
            goto L_801F08FC;
    }
    goto skip_1;
    // 0x801F08C8: lui         $at, 0xC3E1
    ctx->r1 = S32(0XC3E1 << 16);
    skip_1:
    // 0x801F08CC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F08D0: addiu       $a0, $zero, 0xC8
    ctx->r4 = ADD32(0, 0XC8);
    // 0x801F08D4: jal         0x8000DD58
    // 0x801F08D8: swc1        $f4, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->f4.u32l;
    func_8000DD58_E958(rdram, ctx);
        goto after_7;
    // 0x801F08D8: swc1        $f4, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->f4.u32l;
    after_7:
    // 0x801F08DC: addiu       $t8, $v0, -0x258
    ctx->r24 = ADD32(ctx->r2, -0X258);
    // 0x801F08E0: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x801F08E4: nop

    // 0x801F08E8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x801F08EC: swc1        $f8, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f8.u32l;
    // 0x801F08F0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x801F08F4: lwc1        $f0, 0x8($t9)
    ctx->f0.u32l = MEM_W(ctx->r25, 0X8);
    // 0x801F08F8: lui         $at, 0xC3E1
    ctx->r1 = S32(0XC3E1 << 16);
L_801F08FC:
    // 0x801F08FC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801F0900: nop

    // 0x801F0904: c.le.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl <= ctx->f10.fl;
    // 0x801F0908: nop

    // 0x801F090C: bc1f        L_801F0954
    if (!c1cs) {
        // 0x801F0910: nop
    
            goto L_801F0954;
    }
    // 0x801F0910: nop

    // 0x801F0914: lwc1        $f16, 0xB0($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XB0);
    // 0x801F0918: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801F091C: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x801F0920: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x801F0924: nop

    // 0x801F0928: bc1f        L_801F0954
    if (!c1cs) {
        // 0x801F092C: nop
    
            goto L_801F0954;
    }
    // 0x801F092C: nop

    // 0x801F0930: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F0934: addiu       $a0, $zero, 0xC8
    ctx->r4 = ADD32(0, 0XC8);
    // 0x801F0938: jal         0x8000DD58
    // 0x801F093C: swc1        $f4, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->f4.u32l;
    func_8000DD58_E958(rdram, ctx);
        goto after_8;
    // 0x801F093C: swc1        $f4, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->f4.u32l;
    after_8:
    // 0x801F0940: addiu       $t0, $v0, -0x258
    ctx->r8 = ADD32(ctx->r2, -0X258);
    // 0x801F0944: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x801F0948: nop

    // 0x801F094C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x801F0950: swc1        $f8, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f8.u32l;
L_801F0954:
    // 0x801F0954: jal         0x801F1AF8
    // 0x801F0958: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801F1AF8_61CED8(rdram, ctx);
        goto after_9;
    // 0x801F0958: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x801F095C: jal         0x801D39E0
    // 0x801F0960: nop

    func_801D39E0_5FEDC0(rdram, ctx);
        goto after_10;
    // 0x801F0960: nop

    after_10:
    // 0x801F0964: slti        $at, $v0, 0xC9
    ctx->r1 = SIGNED(ctx->r2) < 0XC9 ? 1 : 0;
    // 0x801F0968: beq         $at, $zero, L_801F099C
    if (ctx->r1 == 0) {
        // 0x801F096C: nop
    
            goto L_801F099C;
    }
    // 0x801F096C: nop

    // 0x801F0970: jal         0x801F701C
    // 0x801F0974: nop

    func_801F701C_6223FC(rdram, ctx);
        goto after_11;
    // 0x801F0974: nop

    after_11:
    // 0x801F0978: lui         $t2, 0x8021
    ctx->r10 = S32(0X8021 << 16);
    // 0x801F097C: lw          $t2, -0x1130($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1130);
    // 0x801F0980: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801F0984: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F0988: addiu       $a0, $a0, 0x1738
    ctx->r4 = ADD32(ctx->r4, 0X1738);
    // 0x801F098C: jal         0x8003521C
    // 0x801F0990: sb          $t1, 0x2C5($t2)
    MEM_B(0X2C5, ctx->r10) = ctx->r9;
    func_8003521C_35E1C(rdram, ctx);
        goto after_12;
    // 0x801F0990: sb          $t1, 0x2C5($t2)
    MEM_B(0X2C5, ctx->r10) = ctx->r9;
    after_12:
    // 0x801F0994: b           L_801F09FC
    // 0x801F0998: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801F09FC;
    // 0x801F0998: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801F099C:
    // 0x801F099C: jal         0x801D3A44
    // 0x801F09A0: nop

    func_801D3A44_5FEE24(rdram, ctx);
        goto after_13;
    // 0x801F09A0: nop

    after_13:
    // 0x801F09A4: slti        $at, $v0, 0x4B1
    ctx->r1 = SIGNED(ctx->r2) < 0X4B1 ? 1 : 0;
    // 0x801F09A8: beql        $at, $zero, L_801F09E0
    if (ctx->r1 == 0) {
        // 0x801F09AC: lw          $t5, 0x7C($s0)
        ctx->r13 = MEM_W(ctx->r16, 0X7C);
            goto L_801F09E0;
    }
    goto skip_2;
    // 0x801F09AC: lw          $t5, 0x7C($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X7C);
    skip_2:
    // 0x801F09B0: jal         0x801F701C
    // 0x801F09B4: nop

    func_801F701C_6223FC(rdram, ctx);
        goto after_14;
    // 0x801F09B4: nop

    after_14:
    // 0x801F09B8: lui         $t4, 0x8021
    ctx->r12 = S32(0X8021 << 16);
    // 0x801F09BC: lw          $t4, -0x1130($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1130);
    // 0x801F09C0: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x801F09C4: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F09C8: addiu       $a0, $a0, 0x1738
    ctx->r4 = ADD32(ctx->r4, 0X1738);
    // 0x801F09CC: jal         0x8003521C
    // 0x801F09D0: sb          $t3, 0x2C5($t4)
    MEM_B(0X2C5, ctx->r12) = ctx->r11;
    func_8003521C_35E1C(rdram, ctx);
        goto after_15;
    // 0x801F09D0: sb          $t3, 0x2C5($t4)
    MEM_B(0X2C5, ctx->r12) = ctx->r11;
    after_15:
    // 0x801F09D4: b           L_801F09FC
    // 0x801F09D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801F09FC;
    // 0x801F09D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801F09DC: lw          $t5, 0x7C($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X7C);
L_801F09E0:
    // 0x801F09E0: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F09E4: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x801F09E8: bgtz        $t6, L_801F09F8
    if (SIGNED(ctx->r14) > 0) {
        // 0x801F09EC: sw          $t6, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r14;
            goto L_801F09F8;
    }
    // 0x801F09EC: sw          $t6, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r14;
    // 0x801F09F0: jal         0x8003521C
    // 0x801F09F4: addiu       $a0, $a0, 0xF3C
    ctx->r4 = ADD32(ctx->r4, 0XF3C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_16;
    // 0x801F09F4: addiu       $a0, $a0, 0xF3C
    ctx->r4 = ADD32(ctx->r4, 0XF3C);
    after_16:
L_801F09F8:
    // 0x801F09F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801F09FC:
    // 0x801F09FC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801F0A00: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801F0A04: jr          $ra
    // 0x801F0A08: nop

    TRACE_RETURN()
    return;
    // 0x801F0A08: nop

;}
RECOMP_FUNC void func_801D389C_5FEC7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D389C: jr          $ra
    // 0x801D38A0: sw          $zero, 0x38($a0)
    MEM_W(0X38, ctx->r4) = 0;
    TRACE_RETURN()
    return;
    // 0x801D38A0: sw          $zero, 0x38($a0)
    MEM_W(0X38, ctx->r4) = 0;
;}
RECOMP_FUNC void func_801D8C84_604064(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D8C84: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801D8C88: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801D8C8C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801D8C90: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801D8C94: lw          $v0, 0x98($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X98);
    // 0x801D8C98: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801D8C9C: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x801D8CA0: bgtz        $v0, L_801D8CB8
    if (SIGNED(ctx->r2) > 0) {
        // 0x801D8CA4: sw          $t6, 0x98($a0)
        MEM_W(0X98, ctx->r4) = ctx->r14;
            goto L_801D8CB8;
    }
    // 0x801D8CA4: sw          $t6, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->r14;
    // 0x801D8CA8: sb          $zero, 0x30($a0)
    MEM_B(0X30, ctx->r4) = 0;
    // 0x801D8CAC: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801D8CB0: jal         0x8003521C
    // 0x801D8CB4: addiu       $a0, $a0, -0x72D4
    ctx->r4 = ADD32(ctx->r4, -0X72D4);
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x801D8CB4: addiu       $a0, $a0, -0x72D4
    ctx->r4 = ADD32(ctx->r4, -0X72D4);
    after_0:
L_801D8CB8:
    // 0x801D8CB8: lw          $a1, 0x34($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X34);
    // 0x801D8CBC: beq         $a1, $zero, L_801D8D10
    if (ctx->r5 == 0) {
        // 0x801D8CC0: nop
    
            goto L_801D8D10;
    }
    // 0x801D8CC0: nop

    // 0x801D8CC4: lbu         $t7, 0x4C($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X4C);
    // 0x801D8CC8: addiu       $at, $zero, 0x3D
    ctx->r1 = ADD32(0, 0X3D);
    // 0x801D8CCC: bne         $t7, $at, L_801D8CF4
    if (ctx->r15 != ctx->r1) {
        // 0x801D8CD0: nop
    
            goto L_801D8CF4;
    }
    // 0x801D8CD0: nop

    // 0x801D8CD4: jal         0x801D8E08
    // 0x801D8CD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D8E08_6041E8(rdram, ctx);
        goto after_1;
    // 0x801D8CD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801D8CDC: sb          $zero, 0x30($s0)
    MEM_B(0X30, ctx->r16) = 0;
    // 0x801D8CE0: jal         0x801D36BC
    // 0x801D8CE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D36BC_5FEA9C(rdram, ctx);
        goto after_2;
    // 0x801D8CE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801D8CE8: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x801D8CEC: b           L_801D8D10
    // 0x801D8CF0: sw          $t8, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->r24;
        goto L_801D8D10;
    // 0x801D8CF0: sw          $t8, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->r24;
L_801D8CF4:
    // 0x801D8CF4: jal         0x801D8F20
    // 0x801D8CF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D8F20_604300(rdram, ctx);
        goto after_3;
    // 0x801D8CF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801D8CFC: sb          $zero, 0x30($s0)
    MEM_B(0X30, ctx->r16) = 0;
    // 0x801D8D00: jal         0x801D36BC
    // 0x801D8D04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D36BC_5FEA9C(rdram, ctx);
        goto after_4;
    // 0x801D8D04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x801D8D08: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x801D8D0C: sw          $t9, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->r25;
L_801D8D10:
    // 0x801D8D10: jal         0x801D9030
    // 0x801D8D14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D9030_604410(rdram, ctx);
        goto after_5;
    // 0x801D8D14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x801D8D18: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801D8D1C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801D8D20: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801D8D24: jr          $ra
    // 0x801D8D28: nop

    TRACE_RETURN()
    return;
    // 0x801D8D28: nop

;}
RECOMP_FUNC void func_802082D8_6336B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802082D8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802082DC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802082E0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802082E4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802082E8: lw          $v0, 0x7C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X7C);
    // 0x802082EC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802082F0: bnel        $v0, $zero, L_80208320
    if (ctx->r2 != 0) {
        // 0x802082F4: addiu       $t8, $v0, -0x1
        ctx->r24 = ADD32(ctx->r2, -0X1);
            goto L_80208320;
    }
    goto skip_0;
    // 0x802082F4: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
    skip_0:
    // 0x802082F8: jal         0x80038BC8
    // 0x802082FC: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
    func_80038BC8_397C8(rdram, ctx);
        goto after_0;
    // 0x802082FC: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
    after_0:
    // 0x80208300: jal         0x80038BC8
    // 0x80208304: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_80038BC8_397C8(rdram, ctx);
        goto after_1;
    // 0x80208304: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_1:
    // 0x80208308: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x8020830C: lw          $t7, -0x1130($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1130);
    // 0x80208310: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80208314: sb          $t6, 0x2C1($t7)
    MEM_B(0X2C1, ctx->r15) = ctx->r14;
    // 0x80208318: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
    // 0x8020831C: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
L_80208320:
    // 0x80208320: bgez        $t8, L_8020842C
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80208324: sw          $t8, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r24;
            goto L_8020842C;
    }
    // 0x80208324: sw          $t8, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r24;
    // 0x80208328: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x8020832C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80208330: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80208334: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80208338: lwc1        $f4, 0x94($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X94);
    // 0x8020833C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80208340: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80208344: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80208348: addiu       $t2, $zero, 0xB
    ctx->r10 = ADD32(0, 0XB);
    // 0x8020834C: swc1        $f8, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->f8.u32l;
    // 0x80208350: lwc1        $f0, 0x94($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X94);
    // 0x80208354: c.le.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl <= ctx->f0.fl;
    // 0x80208358: nop

    // 0x8020835C: bc1fl       L_80208370
    if (!c1cs) {
        // 0x80208360: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_80208370;
    }
    goto skip_1;
    // 0x80208360: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_1:
    // 0x80208364: b           L_80208370
    // 0x80208368: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
        goto L_80208370;
    // 0x80208368: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x8020836C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_80208370:
    // 0x80208370: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x80208374: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x80208378: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x8020837C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x80208380: cvt.w.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    ctx->f10.u32l = CVT_W_S(ctx->f2.fl);
    // 0x80208384: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x80208388: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x8020838C: nop

    // 0x80208390: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x80208394: beql        $a3, $zero, L_802083E4
    if (ctx->r7 == 0) {
        // 0x80208398: mfc1        $a3, $f10
        ctx->r7 = (int32_t)ctx->f10.u32l;
            goto L_802083E4;
    }
    goto skip_2;
    // 0x80208398: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    skip_2:
    // 0x8020839C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802083A0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x802083A4: sub.s       $f10, $f2, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f10.fl;
    // 0x802083A8: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x802083AC: nop

    // 0x802083B0: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x802083B4: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x802083B8: nop

    // 0x802083BC: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x802083C0: bne         $a3, $zero, L_802083D8
    if (ctx->r7 != 0) {
        // 0x802083C4: nop
    
            goto L_802083D8;
    }
    // 0x802083C4: nop

    // 0x802083C8: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x802083CC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802083D0: b           L_802083F0
    // 0x802083D4: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
        goto L_802083F0;
    // 0x802083D4: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
L_802083D8:
    // 0x802083D8: b           L_802083F0
    // 0x802083DC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
        goto L_802083F0;
    // 0x802083DC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x802083E0: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
L_802083E4:
    // 0x802083E4: nop

    // 0x802083E8: bltz        $a3, L_802083D8
    if (SIGNED(ctx->r7) < 0) {
        // 0x802083EC: nop
    
            goto L_802083D8;
    }
    // 0x802083EC: nop

L_802083F0:
    // 0x802083F0: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x802083F4: andi        $t1, $a3, 0xFFFF
    ctx->r9 = ctx->r7 & 0XFFFF;
    // 0x802083F8: or          $a3, $t1, $zero
    ctx->r7 = ctx->r9 | 0;
    // 0x802083FC: jal         0x801D15BC
    // 0x80208400: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    func_801D15BC_5FC99C(rdram, ctx);
        goto after_2;
    // 0x80208400: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_2:
    // 0x80208404: lui         $at, 0x43AF
    ctx->r1 = S32(0X43AF << 16);
    // 0x80208408: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8020840C: lwc1        $f18, 0x94($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X94);
    // 0x80208410: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80208414: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x80208418: nop

    // 0x8020841C: bc1fl       L_80208430
    if (!c1cs) {
        // 0x80208420: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80208430;
    }
    goto skip_3;
    // 0x80208420: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_3:
    // 0x80208424: jal         0x8003521C
    // 0x80208428: addiu       $a0, $a0, -0x7BC0
    ctx->r4 = ADD32(ctx->r4, -0X7BC0);
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x80208428: addiu       $a0, $a0, -0x7BC0
    ctx->r4 = ADD32(ctx->r4, -0X7BC0);
    after_3:
L_8020842C:
    // 0x8020842C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80208430:
    // 0x80208430: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80208434: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80208438: jr          $ra
    // 0x8020843C: nop

    TRACE_RETURN()
    return;
    // 0x8020843C: nop

;}
RECOMP_FUNC void func_801DE898_609C78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DE898: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801DE89C: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801DE8A0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801DE8A4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801DE8A8: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x801DE8AC: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x801DE8B0: addiu       $t0, $v0, 0x140
    ctx->r8 = ADD32(ctx->r2, 0X140);
    // 0x801DE8B4: lbu         $t7, 0xE($t0)
    ctx->r15 = MEM_BU(ctx->r8, 0XE);
    // 0x801DE8B8: lw          $t6, 0x1D8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X1D8);
    // 0x801DE8BC: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x801DE8C0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801DE8C4: bne         $t7, $at, L_801DE950
    if (ctx->r15 != ctx->r1) {
        // 0x801DE8C8: lw          $v1, 0x18($t6)
        ctx->r3 = MEM_W(ctx->r14, 0X18);
            goto L_801DE950;
    }
    // 0x801DE8C8: lw          $v1, 0x18($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X18);
    // 0x801DE8CC: lw          $t8, 0x80($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X80);
    // 0x801DE8D0: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x801DE8D4: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x801DE8D8: bne         $t9, $zero, L_801DE934
    if (ctx->r25 != 0) {
        // 0x801DE8DC: sw          $t9, 0x80($a0)
        MEM_W(0X80, ctx->r4) = ctx->r25;
            goto L_801DE934;
    }
    // 0x801DE8DC: sw          $t9, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->r25;
    // 0x801DE8E0: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801DE8E4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801DE8E8: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x801DE8EC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801DE8F0: lwc1        $f6, 0xC($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0XC);
    // 0x801DE8F4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801DE8F8: lui         $a2, 0x3ECC
    ctx->r6 = S32(0X3ECC << 16);
    // 0x801DE8FC: lui         $a3, 0x3E99
    ctx->r7 = S32(0X3E99 << 16);
    // 0x801DE900: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801DE904: ori         $a3, $a3, 0x999A
    ctx->r7 = ctx->r7 | 0X999A;
    // 0x801DE908: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x801DE90C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801DE910: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x801DE914: lwc1        $f16, 0x10($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X10);
    // 0x801DE918: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    // 0x801DE91C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801DE920: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801DE924: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801DE928: jal         0x801DFB90
    // 0x801DE92C: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    func_801DFB90_60AF70(rdram, ctx);
        goto after_0;
    // 0x801DE92C: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x801DE930: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
L_801DE934:
    // 0x801DE934: lw          $a1, 0xAC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XAC);
    // 0x801DE938: lw          $a2, 0xB0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XB0);
    // 0x801DE93C: lhu         $a3, 0xB6($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0XB6);
    // 0x801DE940: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    // 0x801DE944: jal         0x801D53EC
    // 0x801DE948: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    func_801D53EC_6007CC(rdram, ctx);
        goto after_1;
    // 0x801DE948: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    after_1:
    // 0x801DE94C: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
L_801DE950:
    // 0x801DE950: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
    // 0x801DE954: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x801DE958: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x801DE95C: bltz        $v0, L_801DE96C
    if (SIGNED(ctx->r2) < 0) {
        // 0x801DE960: addiu       $t2, $v0, -0x1
        ctx->r10 = ADD32(ctx->r2, -0X1);
            goto L_801DE96C;
    }
    // 0x801DE960: addiu       $t2, $v0, -0x1
    ctx->r10 = ADD32(ctx->r2, -0X1);
    // 0x801DE964: b           L_801DE9BC
    // 0x801DE968: sw          $t2, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r10;
        goto L_801DE9BC;
    // 0x801DE968: sw          $t2, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r10;
L_801DE96C:
    // 0x801DE96C: jal         0x801D6D40
    // 0x801DE970: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    func_801D6D40_602120(rdram, ctx);
        goto after_2;
    // 0x801DE970: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    after_2:
    // 0x801DE974: beq         $v0, $zero, L_801DE9BC
    if (ctx->r2 == 0) {
        // 0x801DE978: lw          $t0, 0x3C($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X3C);
            goto L_801DE9BC;
    }
    // 0x801DE978: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x801DE97C: lbu         $t3, 0xE($t0)
    ctx->r11 = MEM_BU(ctx->r8, 0XE);
    // 0x801DE980: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x801DE984: lui         $t4, 0x8021
    ctx->r12 = S32(0X8021 << 16);
    // 0x801DE988: bne         $t3, $at, L_801DE9B4
    if (ctx->r11 != ctx->r1) {
        // 0x801DE98C: nop
    
            goto L_801DE9B4;
    }
    // 0x801DE98C: nop

    // 0x801DE990: lw          $t4, -0x1130($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1130);
    // 0x801DE994: lui         $t5, 0x8021
    ctx->r13 = S32(0X8021 << 16);
    // 0x801DE998: sb          $zero, 0x2C0($t4)
    MEM_B(0X2C0, ctx->r12) = 0;
    // 0x801DE99C: lw          $t5, -0x1130($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1130);
    // 0x801DE9A0: sb          $zero, 0x2C2($t5)
    MEM_B(0X2C2, ctx->r13) = 0;
    // 0x801DE9A4: jal         0x80034ED4
    // 0x801DE9A8: sb          $zero, 0xE($t0)
    MEM_B(0XE, ctx->r8) = 0;
    func_80034ED4_35AD4(rdram, ctx);
        goto after_3;
    // 0x801DE9A8: sb          $zero, 0xE($t0)
    MEM_B(0XE, ctx->r8) = 0;
    after_3:
    // 0x801DE9AC: b           L_801DE9C0
    // 0x801DE9B0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_801DE9C0;
    // 0x801DE9B0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_801DE9B4:
    // 0x801DE9B4: jal         0x80034ED4
    // 0x801DE9B8: sb          $zero, 0xE($t0)
    MEM_B(0XE, ctx->r8) = 0;
    func_80034ED4_35AD4(rdram, ctx);
        goto after_4;
    // 0x801DE9B8: sb          $zero, 0xE($t0)
    MEM_B(0XE, ctx->r8) = 0;
    after_4:
L_801DE9BC:
    // 0x801DE9BC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_801DE9C0:
    // 0x801DE9C0: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x801DE9C4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x801DE9C8: jr          $ra
    // 0x801DE9CC: nop

    TRACE_RETURN()
    return;
    // 0x801DE9CC: nop

;}
RECOMP_FUNC void func_801FE008_6293E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FE008: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801FE00C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801FE010: jal         0x801FFE6C
    // 0x801FE014: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801FFE6C_62B24C(rdram, ctx);
        goto after_0;
    // 0x801FE014: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801FE018: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801FE01C: lw          $t6, -0x10C0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X10C0);
    // 0x801FE020: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801FE024: addiu       $a1, $a1, -0x4BF8
    ctx->r5 = ADD32(ctx->r5, -0X4BF8);
    // 0x801FE028: sb          $zero, 0x815($t6)
    MEM_B(0X815, ctx->r14) = 0;
    // 0x801FE02C: jal         0x801D2EE4
    // 0x801FE030: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_1;
    // 0x801FE030: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x801FE034: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FE038: jal         0x8003521C
    // 0x801FE03C: addiu       $a0, $a0, -0x1F3C
    ctx->r4 = ADD32(ctx->r4, -0X1F3C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801FE03C: addiu       $a0, $a0, -0x1F3C
    ctx->r4 = ADD32(ctx->r4, -0X1F3C);
    after_2:
    // 0x801FE040: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801FE044: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801FE048: jr          $ra
    // 0x801FE04C: nop

    TRACE_RETURN()
    return;
    // 0x801FE04C: nop

;}
RECOMP_FUNC void func_801D33D8_5FE7B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D33D8: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x801D33DC: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x801D33E0: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x801D33E4: andi        $t7, $a3, 0xFF
    ctx->r15 = ctx->r7 & 0XFF;
    // 0x801D33E8: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x801D33EC: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x801D33F0: bne         $a0, $zero, L_801D3400
    if (ctx->r4 != 0) {
        // 0x801D33F4: sw          $a1, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r5;
            goto L_801D3400;
    }
    // 0x801D33F4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801D33F8: jr          $ra
    // 0x801D33FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x801D33FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D3400:
    // 0x801D3400: addu        $v1, $a0, $a2
    ctx->r3 = ADD32(ctx->r4, ctx->r6);
    // 0x801D3404: lbu         $a1, 0x8C($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0X8C);
    // 0x801D3408: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801D340C: slt         $at, $a1, $a3
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x801D3410: bne         $at, $zero, L_801D34C4
    if (ctx->r1 != 0) {
        // 0x801D3414: addiu       $t3, $a1, 0x1
        ctx->r11 = ADD32(ctx->r5, 0X1);
            goto L_801D34C4;
    }
    // 0x801D3414: addiu       $t3, $a1, 0x1
    ctx->r11 = ADD32(ctx->r5, 0X1);
    // 0x801D3418: lbu         $a3, 0x90($v1)
    ctx->r7 = MEM_BU(ctx->r3, 0X90);
    // 0x801D341C: sb          $zero, 0x8C($v1)
    MEM_B(0X8C, ctx->r3) = 0;
    // 0x801D3420: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x801D3424: addiu       $a1, $a3, 0x1
    ctx->r5 = ADD32(ctx->r7, 0X1);
    // 0x801D3428: andi        $t8, $a1, 0xFF
    ctx->r24 = ctx->r5 & 0XFF;
    // 0x801D342C: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x801D3430: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x801D3434: lw          $t0, 0x0($t2)
    ctx->r8 = MEM_W(ctx->r10, 0X0);
    // 0x801D3438: andi        $a1, $zero, 0xFF
    ctx->r5 = 0 & 0XFF;
    // 0x801D343C: sll         $t3, $a1, 2
    ctx->r11 = S32(ctx->r5 << 2);
    // 0x801D3440: beq         $t0, $zero, L_801D3484
    if (ctx->r8 == 0) {
        // 0x801D3444: lui         $at, 0xF800
        ctx->r1 = S32(0XF800 << 16);
            goto L_801D3484;
    }
    // 0x801D3444: lui         $at, 0xF800
    ctx->r1 = S32(0XF800 << 16);
    // 0x801D3448: addiu       $t3, $a3, 0x1
    ctx->r11 = ADD32(ctx->r7, 0X1);
    // 0x801D344C: sb          $t3, 0x90($v1)
    MEM_B(0X90, ctx->r3) = ctx->r11;
    // 0x801D3450: sll         $t7, $a2, 2
    ctx->r15 = S32(ctx->r6 << 2);
    // 0x801D3454: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x801D3458: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x801D345C: lw          $t8, -0x6320($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X6320);
    // 0x801D3460: lw          $t4, 0x38($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X38);
    // 0x801D3464: lui         $at, 0xF800
    ctx->r1 = S32(0XF800 << 16);
    // 0x801D3468: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x801D346C: addu        $t5, $t4, $t0
    ctx->r13 = ADD32(ctx->r12, ctx->r8);
    // 0x801D3470: addu        $t6, $t5, $at
    ctx->r14 = ADD32(ctx->r13, ctx->r1);
    // 0x801D3474: addu        $t1, $a0, $t9
    ctx->r9 = ADD32(ctx->r4, ctx->r25);
    // 0x801D3478: sw          $t6, 0x38($t1)
    MEM_W(0X38, ctx->r9) = ctx->r14;
    // 0x801D347C: jr          $ra
    // 0x801D3480: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x801D3480: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801D3484:
    // 0x801D3484: sb          $zero, 0x90($v1)
    MEM_B(0X90, ctx->r3) = 0;
    // 0x801D3488: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x801D348C: sll         $t9, $a2, 2
    ctx->r25 = S32(ctx->r6 << 2);
    // 0x801D3490: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801D3494: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x801D3498: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x801D349C: lw          $t0, 0x0($t4)
    ctx->r8 = MEM_W(ctx->r12, 0X0);
    // 0x801D34A0: lw          $t6, -0x6320($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X6320);
    // 0x801D34A4: lw          $t5, 0x38($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X38);
    // 0x801D34A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801D34AC: sll         $t1, $t6, 3
    ctx->r9 = S32(ctx->r14 << 3);
    // 0x801D34B0: addu        $t7, $t5, $t0
    ctx->r15 = ADD32(ctx->r13, ctx->r8);
    // 0x801D34B4: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x801D34B8: addu        $t2, $a0, $t1
    ctx->r10 = ADD32(ctx->r4, ctx->r9);
    // 0x801D34BC: jr          $ra
    // 0x801D34C0: sw          $t8, 0x38($t2)
    MEM_W(0X38, ctx->r10) = ctx->r24;
    TRACE_RETURN()
    return;
    // 0x801D34C0: sw          $t8, 0x38($t2)
    MEM_W(0X38, ctx->r10) = ctx->r24;
L_801D34C4:
    // 0x801D34C4: sb          $t3, 0x8C($v1)
    MEM_B(0X8C, ctx->r3) = ctx->r11;
    // 0x801D34C8: jr          $ra
    // 0x801D34CC: nop

    TRACE_RETURN()
    return;
    // 0x801D34CC: nop

;}
RECOMP_FUNC void func_801E9D64_615144(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E9D64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E9D68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E9D6C: lhu         $v0, 0x16($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X16);
    // 0x801E9D70: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x801E9D74: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x801E9D78: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x801E9D7C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x801E9D80: bgez        $v0, L_801E9D98
    if (SIGNED(ctx->r2) >= 0) {
        // 0x801E9D84: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_801E9D98;
    }
    // 0x801E9D84: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801E9D88: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801E9D8C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801E9D90: nop

    // 0x801E9D94: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_801E9D98:
    // 0x801E9D98: lwc1        $f10, 0x90($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X90);
    // 0x801E9D9C: addiu       $t6, $v0, 0x20
    ctx->r14 = ADD32(ctx->r2, 0X20);
    // 0x801E9DA0: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    // 0x801E9DA4: c.eq.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl == ctx->f10.fl;
    // 0x801E9DA8: nop

    // 0x801E9DAC: bc1tl       L_801E9DBC
    if (c1cs) {
        // 0x801E9DB0: sw          $a2, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r6;
            goto L_801E9DBC;
    }
    goto skip_0;
    // 0x801E9DB0: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    skip_0:
    // 0x801E9DB4: sh          $t6, 0x16($a2)
    MEM_H(0X16, ctx->r6) = ctx->r14;
    // 0x801E9DB8: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
L_801E9DBC:
    // 0x801E9DBC: jal         0x801D2F40
    // 0x801E9DC0: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_801D2F40_5FE320(rdram, ctx);
        goto after_0;
    // 0x801E9DC0: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_0:
    // 0x801E9DC4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801E9DC8: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x801E9DCC: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E9DD0: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x801E9DD4: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x801E9DD8: addiu       $a1, $a1, -0x4E90
    ctx->r5 = ADD32(ctx->r5, -0X4E90);
    // 0x801E9DDC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x801E9DE0: bc1fl       L_801E9E04
    if (!c1cs) {
        // 0x801E9DE4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E9E04;
    }
    goto skip_1;
    // 0x801E9DE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x801E9DE8: swc1        $f2, 0x70($a3)
    MEM_W(0X70, ctx->r7) = ctx->f2.u32l;
    // 0x801E9DEC: jal         0x801D2EE4
    // 0x801E9DF0: swc1        $f2, 0x78($a3)
    MEM_W(0X78, ctx->r7) = ctx->f2.u32l;
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_1;
    // 0x801E9DF0: swc1        $f2, 0x78($a3)
    MEM_W(0X78, ctx->r7) = ctx->f2.u32l;
    after_1:
    // 0x801E9DF4: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E9DF8: jal         0x8003521C
    // 0x801E9DFC: addiu       $a0, $a0, 0x52D8
    ctx->r4 = ADD32(ctx->r4, 0X52D8);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801E9DFC: addiu       $a0, $a0, 0x52D8
    ctx->r4 = ADD32(ctx->r4, 0X52D8);
    after_2:
    // 0x801E9E00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E9E04:
    // 0x801E9E04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E9E08: jr          $ra
    // 0x801E9E0C: nop

    TRACE_RETURN()
    return;
    // 0x801E9E0C: nop

;}
RECOMP_FUNC void func_801EB03C_61641C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EB03C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801EB040: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x801EB044: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801EB048: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    // 0x801EB04C: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    // 0x801EB050: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    // 0x801EB054: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x801EB058: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x801EB05C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801EB060: lwc1        $f14, 0x8($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801EB064: lw          $a2, 0xC($v1)
    ctx->r6 = MEM_W(ctx->r3, 0XC);
    // 0x801EB068: lw          $a3, 0x10($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X10);
    // 0x801EB06C: addiu       $t6, $sp, 0x58
    ctx->r14 = ADD32(ctx->r29, 0X58);
    // 0x801EB070: addiu       $t7, $sp, 0x54
    ctx->r15 = ADD32(ctx->r29, 0X54);
    // 0x801EB074: addiu       $t8, $sp, 0x50
    ctx->r24 = ADD32(ctx->r29, 0X50);
    // 0x801EB078: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x801EB07C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801EB080: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801EB084: jal         0x8000E4E4
    // 0x801EB088: sw          $v1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r3;
    func_8000E4E4_F0E4(rdram, ctx);
        goto after_0;
    // 0x801EB088: sw          $v1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r3;
    after_0:
    // 0x801EB08C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x801EB090: lw          $t9, -0x1130($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1130);
    // 0x801EB094: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x801EB098: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801EB09C: lw          $a0, 0x1D8($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X1D8);
    // 0x801EB0A0: lwc1        $f8, 0x50($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X50);
    // 0x801EB0A4: lw          $v1, 0x60($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X60);
    // 0x801EB0A8: ori         $t0, $zero, 0x8000
    ctx->r8 = 0 | 0X8000;
    // 0x801EB0AC: ori         $t1, $zero, 0x8000
    ctx->r9 = 0 | 0X8000;
    // 0x801EB0B0: ori         $t2, $zero, 0x8000
    ctx->r10 = 0 | 0X8000;
    // 0x801EB0B4: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x801EB0B8: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x801EB0BC: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x801EB0C0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801EB0C4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801EB0C8: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x801EB0CC: lwc1        $f10, 0x1C($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x801EB0D0: lui         $a2, 0x801
    ctx->r6 = S32(0X801 << 16);
    // 0x801EB0D4: addiu       $a2, $a2, -0xC50
    ctx->r6 = ADD32(ctx->r6, -0XC50);
    // 0x801EB0D8: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x801EB0DC: lwc1        $f16, 0x20($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X20);
    // 0x801EB0E0: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801EB0E4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801EB0E8: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x801EB0EC: lwc1        $f18, 0x24($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X24);
    // 0x801EB0F0: lui         $a3, 0x8021
    ctx->r7 = S32(0X8021 << 16);
    // 0x801EB0F4: addiu       $t3, $zero, 0x4B0
    ctx->r11 = ADD32(0, 0X4B0);
    // 0x801EB0F8: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
    // 0x801EB0FC: addiu       $a3, $a3, -0x54E0
    ctx->r7 = ADD32(ctx->r7, -0X54E0);
    // 0x801EB100: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x801EB104: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
    // 0x801EB108: addiu       $a1, $a1, -0x4E80
    ctx->r5 = ADD32(ctx->r5, -0X4E80);
    // 0x801EB10C: jal         0x800358E8
    // 0x801EB110: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    func_800358E8_364E8(rdram, ctx);
        goto after_1;
    // 0x801EB110: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    after_1:
    // 0x801EB114: beq         $v0, $zero, L_801EB170
    if (ctx->r2 == 0) {
        // 0x801EB118: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_801EB170;
    }
    // 0x801EB118: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801EB11C: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x801EB120: addiu       $t4, $zero, 0xE6
    ctx->r12 = ADD32(0, 0XE6);
    // 0x801EB124: sw          $t4, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r12;
    // 0x801EB128: sw          $zero, 0x94($a0)
    MEM_W(0X94, ctx->r4) = 0;
    // 0x801EB12C: addiu       $t5, $zero, 0x9
    ctx->r13 = ADD32(0, 0X9);
    // 0x801EB130: sb          $t5, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r13;
    // 0x801EB134: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801EB138: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x801EB13C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801EB140: addiu       $a1, $a1, -0x5BF8
    ctx->r5 = ADD32(ctx->r5, -0X5BF8);
    // 0x801EB144: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x801EB148: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801EB14C: sw          $v1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r3;
    // 0x801EB150: jal         0x8000DF10
    // 0x801EB154: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    func_8000DF10_EB10(rdram, ctx);
        goto after_2;
    // 0x801EB154: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    after_2:
    // 0x801EB158: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801EB15C: lw          $v1, 0x5C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X5C);
    // 0x801EB160: or          $t7, $v0, $at
    ctx->r15 = ctx->r2 | ctx->r1;
    // 0x801EB164: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801EB168: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x801EB16C: sw          $t8, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r24;
L_801EB170:
    // 0x801EB170: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801EB174: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x801EB178: jr          $ra
    // 0x801EB17C: nop

    TRACE_RETURN()
    return;
    // 0x801EB17C: nop

;}
RECOMP_FUNC void func_801FFDFC_62B1DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FFDFC: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801FFE00: lw          $t7, -0x1130($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1130);
    // 0x801FFE04: addiu       $t6, $zero, 0x40
    ctx->r14 = ADD32(0, 0X40);
    // 0x801FFE08: lw          $t8, 0x1D8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X1D8);
    // 0x801FFE0C: jr          $ra
    // 0x801FFE10: sw          $t6, 0x64($t8)
    MEM_W(0X64, ctx->r24) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x801FFE10: sw          $t6, 0x64($t8)
    MEM_W(0X64, ctx->r24) = ctx->r14;
;}
RECOMP_FUNC void func_801ECC10_617FF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801ECC10: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801ECC14: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801ECC18: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x801ECC1C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x801ECC20: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801ECC24: jal         0x801ECEDC
    // 0x801ECC28: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    func_801ECEDC_6182BC(rdram, ctx);
        goto after_0;
    // 0x801ECC28: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    after_0:
    // 0x801ECC2C: bne         $v0, $zero, L_801ECD40
    if (ctx->r2 != 0) {
        // 0x801ECC30: addiu       $a2, $s1, 0x8
        ctx->r6 = ADD32(ctx->r17, 0X8);
            goto L_801ECD40;
    }
    // 0x801ECC30: addiu       $a2, $s1, 0x8
    ctx->r6 = ADD32(ctx->r17, 0X8);
    // 0x801ECC34: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x801ECC38: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x801ECC3C: addiu       $a3, $s1, 0x10
    ctx->r7 = ADD32(ctx->r17, 0X10);
    // 0x801ECC40: beql        $v0, $zero, L_801ECC78
    if (ctx->r2 == 0) {
        // 0x801ECC44: lwc1        $f12, 0x90($s0)
        ctx->f12.u32l = MEM_W(ctx->r16, 0X90);
            goto L_801ECC78;
    }
    goto skip_0;
    // 0x801ECC44: lwc1        $f12, 0x90($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X90);
    skip_0:
    // 0x801ECC48: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801ECC4C: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x801ECC50: lwc1        $f4, 0xA0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x801ECC54: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801ECC58: lwc1        $f10, 0x90($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X90);
    // 0x801ECC5C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801ECC60: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x801ECC64: sw          $t6, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r14;
    // 0x801ECC68: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801ECC6C: swc1        $f8, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f8.u32l;
    // 0x801ECC70: swc1        $f18, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f18.u32l;
    // 0x801ECC74: lwc1        $f12, 0x90($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X90);
L_801ECC78:
    // 0x801ECC78: jal         0x8000E630
    // 0x801ECC7C: lhu         $a1, 0x96($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X96);
    func_8000E630_F230(rdram, ctx);
        goto after_1;
    // 0x801ECC7C: lhu         $a1, 0x96($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X96);
    after_1:
    // 0x801ECC80: addiu       $t7, $zero, 0xA1
    ctx->r15 = ADD32(0, 0XA1);
    // 0x801ECC84: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x801ECC88: lwc1        $f4, 0xA0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x801ECC8C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801ECC90: addiu       $a1, $a1, -0x5288
    ctx->r5 = ADD32(ctx->r5, -0X5288);
    // 0x801ECC94: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x801ECC98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801ECC9C: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    // 0x801ECCA0: addiu       $a3, $zero, 0x19
    ctx->r7 = ADD32(0, 0X19);
    // 0x801ECCA4: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x801ECCA8: jal         0x8000DF10
    // 0x801ECCAC: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    func_8000DF10_EB10(rdram, ctx);
        goto after_2;
    // 0x801ECCAC: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    after_2:
    // 0x801ECCB0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801ECCB4: or          $t0, $v0, $at
    ctx->r8 = ctx->r2 | ctx->r1;
    // 0x801ECCB8: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801ECCBC: or          $t1, $t0, $at
    ctx->r9 = ctx->r8 | ctx->r1;
    // 0x801ECCC0: sw          $t1, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r9;
    // 0x801ECCC4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801ECCC8: jal         0x801D2F40
    // 0x801ECCCC: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    func_801D2F40_5FE320(rdram, ctx);
        goto after_3;
    // 0x801ECCCC: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_3:
    // 0x801ECCD0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801ECCD4: nop

    // 0x801ECCD8: c.eq.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl == ctx->f8.fl;
    // 0x801ECCDC: nop

    // 0x801ECCE0: bc1fl       L_801ECD44
    if (!c1cs) {
        // 0x801ECCE4: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_801ECD44;
    }
    goto skip_1;
    // 0x801ECCE4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x801ECCE8: lw          $v0, 0xAC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XAC);
    // 0x801ECCEC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801ECCF0: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801ECCF4: sltiu       $v1, $v0, 0x2
    ctx->r3 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x801ECCF8: addiu       $t2, $v0, 0x1
    ctx->r10 = ADD32(ctx->r2, 0X1);
    // 0x801ECCFC: beq         $v1, $zero, L_801ECD30
    if (ctx->r3 == 0) {
        // 0x801ECD00: sw          $t2, 0xAC($s0)
        MEM_W(0XAC, ctx->r16) = ctx->r10;
            goto L_801ECD30;
    }
    // 0x801ECD00: sw          $t2, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->r10;
    // 0x801ECD04: jal         0x801D3894
    // 0x801ECD08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D3894_5FEC74(rdram, ctx);
        goto after_4;
    // 0x801ECD08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x801ECD0C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801ECD10: addiu       $a1, $a1, -0x4E58
    ctx->r5 = ADD32(ctx->r5, -0X4E58);
    // 0x801ECD14: jal         0x801D2EE4
    // 0x801ECD18: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_5;
    // 0x801ECD18: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_5:
    // 0x801ECD1C: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801ECD20: jal         0x8003521C
    // 0x801ECD24: addiu       $a0, $a0, -0x3B78
    ctx->r4 = ADD32(ctx->r4, -0X3B78);
    func_8003521C_35E1C(rdram, ctx);
        goto after_6;
    // 0x801ECD24: addiu       $a0, $a0, -0x3B78
    ctx->r4 = ADD32(ctx->r4, -0X3B78);
    after_6:
    // 0x801ECD28: b           L_801ECD44
    // 0x801ECD2C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801ECD44;
    // 0x801ECD2C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801ECD30:
    // 0x801ECD30: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801ECD34: addiu       $a0, $a0, -0x32AC
    ctx->r4 = ADD32(ctx->r4, -0X32AC);
    // 0x801ECD38: jal         0x8003521C
    // 0x801ECD3C: swc1        $f10, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->f10.u32l;
    func_8003521C_35E1C(rdram, ctx);
        goto after_7;
    // 0x801ECD3C: swc1        $f10, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->f10.u32l;
    after_7:
L_801ECD40:
    // 0x801ECD40: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801ECD44:
    // 0x801ECD44: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x801ECD48: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x801ECD4C: jr          $ra
    // 0x801ECD50: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x801ECD50: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_801EA3F0_6157D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EA3F0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801EA3F4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801EA3F8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x801EA3FC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801EA400: jal         0x801D614C
    // 0x801EA404: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    func_801D614C_60152C(rdram, ctx);
        goto after_0;
    // 0x801EA404: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_0:
    // 0x801EA408: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
    // 0x801EA40C: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801EA410: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x801EA414: bgez        $v0, L_801EA4F8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x801EA418: sw          $t6, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r14;
            goto L_801EA4F8;
    }
    // 0x801EA418: sw          $t6, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r14;
    // 0x801EA41C: lw          $t7, -0x1130($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1130);
    // 0x801EA420: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x801EA424: jal         0x8000ED00
    // 0x801EA428: lw          $a0, 0x1CC($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X1CC);
    func_8000ED00_F900(rdram, ctx);
        goto after_1;
    // 0x801EA428: lw          $a0, 0x1CC($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X1CC);
    after_1:
    // 0x801EA42C: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x801EA430: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801EA434: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801EA438: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x801EA43C: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x801EA440: lui         $a3, 0xC120
    ctx->r7 = S32(0XC120 << 16);
    // 0x801EA444: bc1fl       L_801EA474
    if (!c1cs) {
        // 0x801EA448: mtc1        $at, $f12
        ctx->f12.u32l = ctx->r1;
            goto L_801EA474;
    }
    goto skip_0;
    // 0x801EA448: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    skip_0:
    // 0x801EA44C: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x801EA450: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x801EA454: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801EA458: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x801EA45C: lui         $a3, 0xC120
    ctx->r7 = S32(0XC120 << 16);
    // 0x801EA460: jal         0x8000E39C
    // 0x801EA464: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8000E39C_EF9C(rdram, ctx);
        goto after_2;
    // 0x801EA464: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_2:
    // 0x801EA468: b           L_801EA484
    // 0x801EA46C: lw          $a1, 0x70($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X70);
        goto L_801EA484;
    // 0x801EA46C: lw          $a1, 0x70($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X70);
    // 0x801EA470: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
L_801EA474:
    // 0x801EA474: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x801EA478: jal         0x8000E39C
    // 0x801EA47C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8000E39C_EF9C(rdram, ctx);
        goto after_3;
    // 0x801EA47C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_3:
    // 0x801EA480: lw          $a1, 0x70($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X70);
L_801EA484:
    // 0x801EA484: lw          $a2, 0x74($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X74);
    // 0x801EA488: lw          $a3, 0x78($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X78);
    // 0x801EA48C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801EA490: jal         0x8000EE50
    // 0x801EA494: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_8000EE50_FA50(rdram, ctx);
        goto after_4;
    // 0x801EA494: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_4:
    // 0x801EA498: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x801EA49C: addiu       $t8, $zero, 0xC8
    ctx->r24 = ADD32(0, 0XC8);
    // 0x801EA4A0: sw          $t8, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r24;
    // 0x801EA4A4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801EA4A8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801EA4AC: lwc1        $f6, 0x1C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x801EA4B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EA4B4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x801EA4B8: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801EA4BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801EA4C0: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x801EA4C4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x801EA4C8: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801EA4CC: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x801EA4D0: lwc1        $f18, 0xC($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801EA4D4: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x801EA4D8: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801EA4DC: jal         0x801E006C
    // 0x801EA4E0: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_5;
    // 0x801EA4E0: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    after_5:
    // 0x801EA4E4: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801EA4E8: jal         0x8003521C
    // 0x801EA4EC: addiu       $a0, $a0, -0x5ACC
    ctx->r4 = ADD32(ctx->r4, -0X5ACC);
    func_8003521C_35E1C(rdram, ctx);
        goto after_6;
    // 0x801EA4EC: addiu       $a0, $a0, -0x5ACC
    ctx->r4 = ADD32(ctx->r4, -0X5ACC);
    after_6:
    // 0x801EA4F0: b           L_801EA524
    // 0x801EA4F4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_801EA524;
    // 0x801EA4F4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_801EA4F8:
    // 0x801EA4F8: jal         0x801D365C
    // 0x801EA4FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D365C_5FEA3C(rdram, ctx);
        goto after_7;
    // 0x801EA4FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x801EA500: bne         $v0, $zero, L_801EA518
    if (ctx->r2 != 0) {
        // 0x801EA504: nop
    
            goto L_801EA518;
    }
    // 0x801EA504: nop

    // 0x801EA508: jal         0x801D36CC
    // 0x801EA50C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D36CC_5FEAAC(rdram, ctx);
        goto after_8;
    // 0x801EA50C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x801EA510: beql        $v0, $zero, L_801EA524
    if (ctx->r2 == 0) {
        // 0x801EA514: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_801EA524;
    }
    goto skip_1;
    // 0x801EA514: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_1:
L_801EA518:
    // 0x801EA518: jal         0x801EA614
    // 0x801EA51C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801EA614_6159F4(rdram, ctx);
        goto after_9;
    // 0x801EA51C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x801EA520: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_801EA524:
    // 0x801EA524: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x801EA528: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801EA52C: jr          $ra
    // 0x801EA530: nop

    TRACE_RETURN()
    return;
    // 0x801EA530: nop

;}
RECOMP_FUNC void func_80207E7C_63325C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80207E7C: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x80207E80: addiu       $a2, $a2, -0x1130
    ctx->r6 = ADD32(ctx->r6, -0X1130);
    // 0x80207E84: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    // 0x80207E88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80207E8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80207E90: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x80207E94: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80207E98: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80207E9C: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x80207EA0: addiu       $t7, $zero, 0x36
    ctx->r15 = ADD32(0, 0X36);
    // 0x80207EA4: addiu       $t8, $zero, 0x136
    ctx->r24 = ADD32(0, 0X136);
    // 0x80207EA8: addiu       $t9, $zero, 0xB8
    ctx->r25 = ADD32(0, 0XB8);
    // 0x80207EAC: lui         $at, 0xC47A
    ctx->r1 = S32(0XC47A << 16);
    // 0x80207EB0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80207EB4: addiu       $v1, $a1, 0xA0
    ctx->r3 = ADD32(ctx->r5, 0XA0);
    // 0x80207EB8: sb          $a3, 0x2C0($a1)
    MEM_B(0X2C0, ctx->r5) = ctx->r7;
    // 0x80207EBC: sb          $zero, 0x2C1($a1)
    MEM_B(0X2C1, ctx->r5) = 0;
    // 0x80207EC0: sb          $a3, 0x2C2($a1)
    MEM_B(0X2C2, ctx->r5) = ctx->r7;
    // 0x80207EC4: sb          $zero, 0x2C3($a1)
    MEM_B(0X2C3, ctx->r5) = 0;
    // 0x80207EC8: sw          $t6, 0x1EC($a1)
    MEM_W(0X1EC, ctx->r5) = ctx->r14;
    // 0x80207ECC: sw          $t7, 0x1F0($a1)
    MEM_W(0X1F0, ctx->r5) = ctx->r15;
    // 0x80207ED0: sw          $t8, 0x1F4($a1)
    MEM_W(0X1F4, ctx->r5) = ctx->r24;
    // 0x80207ED4: sw          $t9, 0x1F8($a1)
    MEM_W(0X1F8, ctx->r5) = ctx->r25;
    // 0x80207ED8: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x80207EDC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80207EE0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80207EE4: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    // 0x80207EE8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80207EEC: addiu       $t0, $zero, 0x1380
    ctx->r8 = ADD32(0, 0X1380);
    // 0x80207EF0: sh          $t0, 0x1A($v1)
    MEM_H(0X1A, ctx->r3) = ctx->r8;
    // 0x80207EF4: swc1        $f4, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f4.u32l;
    // 0x80207EF8: swc1        $f6, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f6.u32l;
    // 0x80207EFC: swc1        $f8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f8.u32l;
    // 0x80207F00: swc1        $f0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f0.u32l;
    // 0x80207F04: swc1        $f0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f0.u32l;
    // 0x80207F08: swc1        $f10, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f10.u32l;
    // 0x80207F0C: lw          $t1, 0x0($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X0);
    // 0x80207F10: jal         0x80034EF8
    // 0x80207F14: lw          $a0, 0x1D4($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X1D4);
    func_80034EF8_35AF8(rdram, ctx);
        goto after_0;
    // 0x80207F14: lw          $a0, 0x1D4($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X1D4);
    after_0:
    // 0x80207F18: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80207F1C: addiu       $a0, $a0, 0x7F4C
    ctx->r4 = ADD32(ctx->r4, 0X7F4C);
    // 0x80207F20: jal         0x80034DD8
    // 0x80207F24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034DD8_359D8(rdram, ctx);
        goto after_1;
    // 0x80207F24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80207F28: lui         $t2, 0x8021
    ctx->r10 = S32(0X8021 << 16);
    // 0x80207F2C: lw          $t2, -0x1130($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1130);
    // 0x80207F30: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x80207F34: jal         0x80038BC8
    // 0x80207F38: sw          $zero, 0x1D4($t2)
    MEM_W(0X1D4, ctx->r10) = 0;
    func_80038BC8_397C8(rdram, ctx);
        goto after_2;
    // 0x80207F38: sw          $zero, 0x1D4($t2)
    MEM_W(0X1D4, ctx->r10) = 0;
    after_2:
    // 0x80207F3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80207F40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80207F44: jr          $ra
    // 0x80207F48: nop

    TRACE_RETURN()
    return;
    // 0x80207F48: nop

;}
RECOMP_FUNC void func_8020679C_631B7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020679C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802067A0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802067A4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802067A8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802067AC: lw          $t6, 0x7C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X7C);
    // 0x802067B0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802067B4: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x802067B8: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x802067BC: beq         $t7, $zero, L_80206838
    if (ctx->r15 == 0) {
        // 0x802067C0: sw          $t7, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r15;
            goto L_80206838;
    }
    // 0x802067C0: sw          $t7, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r15;
    // 0x802067C4: addiu       $t9, $s0, 0xC0
    ctx->r25 = ADD32(ctx->r16, 0XC0);
    // 0x802067C8: addiu       $t0, $s0, 0xC4
    ctx->r8 = ADD32(ctx->r16, 0XC4);
    // 0x802067CC: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x802067D0: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x802067D4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802067D8: addiu       $a1, $zero, 0x3F0
    ctx->r5 = ADD32(0, 0X3F0);
    // 0x802067DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802067E0: jal         0x8000E808
    // 0x802067E4: addiu       $a3, $s0, 0xBC
    ctx->r7 = ADD32(ctx->r16, 0XBC);
    func_8000E808_F408(rdram, ctx);
        goto after_0;
    // 0x802067E4: addiu       $a3, $s0, 0xBC
    ctx->r7 = ADD32(ctx->r16, 0XBC);
    after_0:
    // 0x802067E8: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x802067EC: lw          $t1, -0x1130($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1130);
    // 0x802067F0: lwc1        $f4, 0xC4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC4);
    // 0x802067F4: lw          $a2, 0xBC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XBC);
    // 0x802067F8: lw          $a3, 0xC0($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC0);
    // 0x802067FC: lw          $a1, 0x1D8($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X1D8);
    // 0x80206800: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80206804: jal         0x80203F5C
    // 0x80206808: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_80203F5C_62F33C(rdram, ctx);
        goto after_1;
    // 0x80206808: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x8020680C: jal         0x80203F88
    // 0x80206810: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80203F88_62F368(rdram, ctx);
        goto after_2;
    // 0x80206810: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80206814: lw          $t2, 0x90($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X90);
    // 0x80206818: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x8020681C: addiu       $t3, $t2, 0x3F0
    ctx->r11 = ADD32(ctx->r10, 0X3F0);
    // 0x80206820: andi        $t4, $t3, 0x3FF
    ctx->r12 = ctx->r11 & 0X3FF;
    // 0x80206824: sw          $t4, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r12;
    // 0x80206828: lhu         $t5, 0x16($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X16);
    // 0x8020682C: addu        $t7, $t5, $t4
    ctx->r15 = ADD32(ctx->r13, ctx->r12);
    // 0x80206830: b           L_80206880
    // 0x80206834: sh          $t7, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r15;
        goto L_80206880;
    // 0x80206834: sh          $t7, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r15;
L_80206838:
    // 0x80206838: lw          $t8, -0x1130($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1130);
    // 0x8020683C: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x80206840: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80206844: lw          $a1, 0x1D8($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X1D8);
    // 0x80206848: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8020684C: lui         $a2, 0xC31C
    ctx->r6 = S32(0XC31C << 16);
    // 0x80206850: lui         $a3, 0x42A2
    ctx->r7 = S32(0X42A2 << 16);
    // 0x80206854: jal         0x80203F5C
    // 0x80206858: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_80203F5C_62F33C(rdram, ctx);
        goto after_3;
    // 0x80206858: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x8020685C: jal         0x80203F88
    // 0x80206860: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80203F88_62F368(rdram, ctx);
        goto after_4;
    // 0x80206860: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80206864: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80206868: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8020686C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80206870: addiu       $a0, $a0, 0x65B8
    ctx->r4 = ADD32(ctx->r4, 0X65B8);
    // 0x80206874: sw          $zero, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = 0;
    // 0x80206878: jal         0x8003521C
    // 0x8020687C: sb          $t0, 0x64($t9)
    MEM_B(0X64, ctx->r25) = ctx->r8;
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x8020687C: sb          $t0, 0x64($t9)
    MEM_B(0X64, ctx->r25) = ctx->r8;
    after_5:
L_80206880:
    // 0x80206880: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80206884: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80206888: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8020688C: jr          $ra
    // 0x80206890: nop

    TRACE_RETURN()
    return;
    // 0x80206890: nop

;}
RECOMP_FUNC void func_801D2D68_5FE148(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D2D68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D2D6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D2D70: jal         0x800141C4
    // 0x801D2D74: addiu       $a0, $zero, 0x4B5
    ctx->r4 = ADD32(0, 0X4B5);
    func_800141C4_14DC4(rdram, ctx);
        goto after_0;
    // 0x801D2D74: addiu       $a0, $zero, 0x4B5
    ctx->r4 = ADD32(0, 0X4B5);
    after_0:
    // 0x801D2D78: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801D2D7C: addiu       $v1, $v1, -0x1120
    ctx->r3 = ADD32(ctx->r3, -0X1120);
    // 0x801D2D80: lui         $a0, 0x800
    ctx->r4 = S32(0X800 << 16);
    // 0x801D2D84: lui         $t6, 0x802
    ctx->r14 = S32(0X802 << 16);
    // 0x801D2D88: addiu       $t6, $t6, -0x6490
    ctx->r14 = ADD32(ctx->r14, -0X6490);
    // 0x801D2D8C: subu        $t7, $t6, $a0
    ctx->r15 = SUB32(ctx->r14, ctx->r4);
    // 0x801D2D90: lui         $t9, 0x802
    ctx->r25 = S32(0X802 << 16);
    // 0x801D2D94: lui         $t2, 0x802
    ctx->r10 = S32(0X802 << 16);
    // 0x801D2D98: lui         $t5, 0x802
    ctx->r13 = S32(0X802 << 16);
    // 0x801D2D9C: addiu       $t9, $t9, -0x57FC
    ctx->r25 = ADD32(ctx->r25, -0X57FC);
    // 0x801D2DA0: addiu       $t2, $t2, -0x4F60
    ctx->r10 = ADD32(ctx->r10, -0X4F60);
    // 0x801D2DA4: addiu       $t5, $t5, -0x41C8
    ctx->r13 = ADD32(ctx->r13, -0X41C8);
    // 0x801D2DA8: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x801D2DAC: subu        $t0, $t9, $a0
    ctx->r8 = SUB32(ctx->r25, ctx->r4);
    // 0x801D2DB0: subu        $t3, $t2, $a0
    ctx->r11 = SUB32(ctx->r10, ctx->r4);
    // 0x801D2DB4: subu        $t6, $t5, $a0
    ctx->r14 = SUB32(ctx->r13, ctx->r4);
    // 0x801D2DB8: addu        $t1, $t0, $v0
    ctx->r9 = ADD32(ctx->r8, ctx->r2);
    // 0x801D2DBC: addu        $t4, $t3, $v0
    ctx->r12 = ADD32(ctx->r11, ctx->r2);
    // 0x801D2DC0: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x801D2DC4: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x801D2DC8: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x801D2DCC: sw          $t4, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r12;
    // 0x801D2DD0: sw          $t7, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r15;
    // 0x801D2DD4: sw          $zero, 0x10($v1)
    MEM_W(0X10, ctx->r3) = 0;
    // 0x801D2DD8: sw          $zero, 0x14($v1)
    MEM_W(0X14, ctx->r3) = 0;
    // 0x801D2DDC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x801D2DE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D2DE4: sw          $t8, -0x70A0($at)
    MEM_W(-0X70A0, ctx->r1) = ctx->r24;
    // 0x801D2DE8: lw          $t9, 0x4($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X4);
    // 0x801D2DEC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x801D2DF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D2DF4: jr          $ra
    // 0x801D2DF8: sw          $t9, -0x709C($at)
    MEM_W(-0X709C, ctx->r1) = ctx->r25;
    TRACE_RETURN()
    return;
    // 0x801D2DF8: sw          $t9, -0x709C($at)
    MEM_W(-0X709C, ctx->r1) = ctx->r25;
;}
RECOMP_FUNC void func_801FB50C_6268EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FB50C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801FB510: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801FB514: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x801FB518: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x801FB51C: lw          $t6, 0x7C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X7C);
    // 0x801FB520: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801FB524: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801FB528: addiu       $v0, $t6, 0x1
    ctx->r2 = ADD32(ctx->r14, 0X1);
    // 0x801FB52C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801FB530: bne         $v0, $at, L_801FB620
    if (ctx->r2 != ctx->r1) {
        // 0x801FB534: sw          $v0, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r2;
            goto L_801FB620;
    }
    // 0x801FB534: sw          $v0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r2;
    // 0x801FB538: jal         0x8003D310
    // 0x801FB53C: addiu       $a0, $zero, 0x29C
    ctx->r4 = ADD32(0, 0X29C);
    func_8003D310_3DF10(rdram, ctx);
        goto after_0;
    // 0x801FB53C: addiu       $a0, $zero, 0x29C
    ctx->r4 = ADD32(0, 0X29C);
    after_0:
    // 0x801FB540: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x801FB544: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x801FB548: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x801FB54C: jal         0x801E4194
    // 0x801FB550: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_801E4194_60F574(rdram, ctx);
        goto after_1;
    // 0x801FB550: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_1:
    // 0x801FB554: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x801FB558: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801FB55C: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801FB560: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801FB564: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801FB568: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801FB56C: lwc1        $f4, -0x162C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X162C);
    // 0x801FB570: lwc1        $f18, 0x20($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X20);
    // 0x801FB574: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x801FB578: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801FB57C: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x801FB580: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801FB584: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801FB588: lwc1        $f8, 0xC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801FB58C: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x801FB590: lwc1        $f16, 0x24($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X24);
    // 0x801FB594: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801FB598: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801FB59C: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x801FB5A0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801FB5A4: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x801FB5A8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801FB5AC: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x801FB5B0: jal         0x80205DEC
    // 0x801FB5B4: nop

    func_80205DEC_6311CC(rdram, ctx);
        goto after_2;
    // 0x801FB5B4: nop

    after_2:
    // 0x801FB5B8: lui         $at, 0xC170
    ctx->r1 = S32(0XC170 << 16);
    // 0x801FB5BC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801FB5C0: lwc1        $f10, 0x1C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801FB5C4: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801FB5C8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801FB5CC: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x801FB5D0: lwc1        $f10, -0x1628($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1628);
    // 0x801FB5D4: lwc1        $f8, 0x20($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X20);
    // 0x801FB5D8: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x801FB5DC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801FB5E0: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x801FB5E4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801FB5E8: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801FB5EC: lwc1        $f18, 0xC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801FB5F0: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x801FB5F4: lwc1        $f6, 0x24($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X24);
    // 0x801FB5F8: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801FB5FC: lwc1        $f16, 0x10($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801FB600: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801FB604: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801FB608: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x801FB60C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801FB610: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x801FB614: jal         0x80205DEC
    // 0x801FB618: nop

    func_80205DEC_6311CC(rdram, ctx);
        goto after_3;
    // 0x801FB618: nop

    after_3:
    // 0x801FB61C: lw          $v0, 0x7C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X7C);
L_801FB620:
    // 0x801FB620: addiu       $at, $zero, 0x118
    ctx->r1 = ADD32(0, 0X118);
    // 0x801FB624: bne         $v0, $at, L_801FB644
    if (ctx->r2 != ctx->r1) {
        // 0x801FB628: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_801FB644;
    }
    // 0x801FB628: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801FB62C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x801FB630: lw          $t9, -0x1130($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1130);
    // 0x801FB634: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FB638: addiu       $a0, $a0, -0x49A8
    ctx->r4 = ADD32(ctx->r4, -0X49A8);
    // 0x801FB63C: jal         0x8003521C
    // 0x801FB640: sb          $t8, 0x2C1($t9)
    MEM_B(0X2C1, ctx->r25) = ctx->r24;
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801FB640: sb          $t8, 0x2C1($t9)
    MEM_B(0X2C1, ctx->r25) = ctx->r24;
    after_4:
L_801FB644:
    // 0x801FB644: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801FB648: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x801FB64C: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x801FB650: jr          $ra
    // 0x801FB654: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x801FB654: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_801F728C_62266C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F728C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F7290: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F7294: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801F7298: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F729C: jal         0x801F7214
    // 0x801F72A0: lw          $a0, 0x90($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X90);
    func_801F7214_6225F4(rdram, ctx);
        goto after_0;
    // 0x801F72A0: lw          $a0, 0x90($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X90);
    after_0:
    // 0x801F72A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F72A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F72AC: jr          $ra
    // 0x801F72B0: nop

    TRACE_RETURN()
    return;
    // 0x801F72B0: nop

;}
RECOMP_FUNC void func_801E4A40_60FE20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E4A40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E4A44: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801E4A48: lw          $t7, -0x1130($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1130);
    // 0x801E4A4C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E4A50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E4A54: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x801E4A58: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E4A5C: addiu       $a1, $a1, -0x4E48
    ctx->r5 = ADD32(ctx->r5, -0X4E48);
    // 0x801E4A60: jal         0x801D31CC
    // 0x801E4A64: sb          $t6, 0x2C1($t7)
    MEM_B(0X2C1, ctx->r15) = ctx->r14;
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_0;
    // 0x801E4A64: sb          $t6, 0x2C1($t7)
    MEM_B(0X2C1, ctx->r15) = ctx->r14;
    after_0:
    // 0x801E4A68: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E4A6C: addiu       $a1, $a1, -0x4F6C
    ctx->r5 = ADD32(ctx->r5, -0X4F6C);
    // 0x801E4A70: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x801E4A74: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801E4A78: jal         0x801D34D0
    // 0x801E4A7C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_801D34D0_5FE8B0(rdram, ctx);
        goto after_1;
    // 0x801E4A7C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x801E4A80: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E4A84: jal         0x8003521C
    // 0x801E4A88: addiu       $a0, $a0, 0x4A9C
    ctx->r4 = ADD32(ctx->r4, 0X4A9C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801E4A88: addiu       $a0, $a0, 0x4A9C
    ctx->r4 = ADD32(ctx->r4, 0X4A9C);
    after_2:
    // 0x801E4A8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E4A90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E4A94: jr          $ra
    // 0x801E4A98: nop

    TRACE_RETURN()
    return;
    // 0x801E4A98: nop

;}
RECOMP_FUNC void func_801CB65C_5F6A3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CB65C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CB660: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801CB664: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CB668: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x801CB66C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801CB670: jal         0x80013C70
    // 0x801CB674: addiu       $a0, $a0, -0x6518
    ctx->r4 = ADD32(ctx->r4, -0X6518);
    func_80013C70_14870(rdram, ctx);
        goto after_0;
    // 0x801CB674: addiu       $a0, $a0, -0x6518
    ctx->r4 = ADD32(ctx->r4, -0X6518);
    after_0:
    // 0x801CB678: beq         $v0, $zero, L_801CB69C
    if (ctx->r2 == 0) {
        // 0x801CB67C: lui         $t6, 0x8016
        ctx->r14 = S32(0X8016 << 16);
            goto L_801CB69C;
    }
    // 0x801CB67C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x801CB680: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x801CB684: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801CB688: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CB68C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x801CB690: sh          $zero, -0x524A($at)
    MEM_H(-0X524A, ctx->r1) = 0;
    // 0x801CB694: jal         0x8003521C
    // 0x801CB698: addiu       $a0, $a0, -0x4954
    ctx->r4 = ADD32(ctx->r4, -0X4954);
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x801CB698: addiu       $a0, $a0, -0x4954
    ctx->r4 = ADD32(ctx->r4, -0X4954);
    after_1:
L_801CB69C:
    // 0x801CB69C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CB6A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CB6A4: jr          $ra
    // 0x801CB6A8: nop

    TRACE_RETURN()
    return;
    // 0x801CB6A8: nop

;}
RECOMP_FUNC void func_80208998_633D78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80208998: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x8020899C: addiu       $t0, $t0, -0x1130
    ctx->r8 = ADD32(ctx->r8, -0X1130);
    // 0x802089A0: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x802089A4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802089A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802089AC: lw          $a3, 0x1D8($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X1D8);
    // 0x802089B0: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x802089B4: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x802089B8: lw          $a1, 0x18($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X18);
    // 0x802089BC: addiu       $t7, $zero, 0x36
    ctx->r15 = ADD32(0, 0X36);
    // 0x802089C0: addiu       $t8, $zero, 0x136
    ctx->r24 = ADD32(0, 0X136);
    // 0x802089C4: addiu       $t9, $zero, 0xB8
    ctx->r25 = ADD32(0, 0XB8);
    // 0x802089C8: sb          $t1, 0x2C0($v1)
    MEM_B(0X2C0, ctx->r3) = ctx->r9;
    // 0x802089CC: sb          $zero, 0x2C1($v1)
    MEM_B(0X2C1, ctx->r3) = 0;
    // 0x802089D0: sb          $t1, 0x2C2($v1)
    MEM_B(0X2C2, ctx->r3) = ctx->r9;
    // 0x802089D4: sb          $zero, 0x2C3($v1)
    MEM_B(0X2C3, ctx->r3) = 0;
    // 0x802089D8: sw          $t6, 0x1EC($v1)
    MEM_W(0X1EC, ctx->r3) = ctx->r14;
    // 0x802089DC: sw          $t7, 0x1F0($v1)
    MEM_W(0X1F0, ctx->r3) = ctx->r15;
    // 0x802089E0: sw          $t8, 0x1F4($v1)
    MEM_W(0X1F4, ctx->r3) = ctx->r24;
    // 0x802089E4: sw          $t9, 0x1F8($v1)
    MEM_W(0X1F8, ctx->r3) = ctx->r25;
    // 0x802089E8: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x802089EC: addiu       $v0, $v1, 0xA0
    ctx->r2 = ADD32(ctx->r3, 0XA0);
    // 0x802089F0: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x802089F4: swc1        $f4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f4.u32l;
    // 0x802089F8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802089FC: lwc1        $f6, 0xC($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0XC);
    // 0x80208A00: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80208A04: addiu       $t2, $zero, 0x1380
    ctx->r10 = ADD32(0, 0X1380);
    // 0x80208A08: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80208A0C: swc1        $f10, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f10.u32l;
    // 0x80208A10: lwc1        $f16, 0x10($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X10);
    // 0x80208A14: sh          $t2, 0x1A($v0)
    MEM_H(0X1A, ctx->r2) = ctx->r10;
    // 0x80208A18: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x80208A1C: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
    // 0x80208A20: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x80208A24: swc1        $f16, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f16.u32l;
    // 0x80208A28: lw          $t3, 0x0($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X0);
    // 0x80208A2C: lw          $a0, 0x1D4($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X1D4);
    // 0x80208A30: jal         0x80034EF8
    // 0x80208A34: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_0;
    // 0x80208A34: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x80208A38: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80208A3C: addiu       $a0, $a0, -0x7580
    ctx->r4 = ADD32(ctx->r4, -0X7580);
    // 0x80208A40: jal         0x80034DD8
    // 0x80208A44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034DD8_359D8(rdram, ctx);
        goto after_1;
    // 0x80208A44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80208A48: lui         $t4, 0x8021
    ctx->r12 = S32(0X8021 << 16);
    // 0x80208A4C: lw          $t4, -0x1130($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1130);
    // 0x80208A50: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x80208A54: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80208A58: sw          $zero, 0x1D4($t4)
    MEM_W(0X1D4, ctx->r12) = 0;
    // 0x80208A5C: addiu       $a1, $a1, -0x4918
    ctx->r5 = ADD32(ctx->r5, -0X4918);
    // 0x80208A60: jal         0x8003522C
    // 0x80208A64: lw          $a0, 0x1D8($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X1D8);
    func_8003522C_35E2C(rdram, ctx);
        goto after_2;
    // 0x80208A64: lw          $a0, 0x1D8($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X1D8);
    after_2:
    // 0x80208A68: jal         0x80038BC8
    // 0x80208A6C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_80038BC8_397C8(rdram, ctx);
        goto after_3;
    // 0x80208A6C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_3:
    // 0x80208A70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80208A74: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80208A78: jr          $ra
    // 0x80208A7C: nop

    TRACE_RETURN()
    return;
    // 0x80208A7C: nop

;}
RECOMP_FUNC void func_801FBEE4_6272C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FBEE4: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801FBEE8: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801FBEEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801FBEF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801FBEF4: lw          $v1, 0x60($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X60);
    // 0x801FBEF8: slti        $at, $v1, 0x5DD
    ctx->r1 = SIGNED(ctx->r3) < 0X5DD ? 1 : 0;
    // 0x801FBEFC: bnel        $at, $zero, L_801FBF24
    if (ctx->r1 != 0) {
        // 0x801FBF00: slti        $at, $v1, 0x3E9
        ctx->r1 = SIGNED(ctx->r3) < 0X3E9 ? 1 : 0;
            goto L_801FBF24;
    }
    goto skip_0;
    // 0x801FBF00: slti        $at, $v1, 0x3E9
    ctx->r1 = SIGNED(ctx->r3) < 0X3E9 ? 1 : 0;
    skip_0:
    // 0x801FBF04: lw          $t6, 0xCC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XCC);
    // 0x801FBF08: beq         $t6, $zero, L_801FBF18
    if (ctx->r14 == 0) {
        // 0x801FBF0C: nop
    
            goto L_801FBF18;
    }
    // 0x801FBF0C: nop

    // 0x801FBF10: sw          $zero, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = 0;
    // 0x801FBF14: sw          $zero, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = 0;
L_801FBF18:
    // 0x801FBF18: b           L_801FBF64
    // 0x801FBF1C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
        goto L_801FBF64;
    // 0x801FBF1C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801FBF20: slti        $at, $v1, 0x3E9
    ctx->r1 = SIGNED(ctx->r3) < 0X3E9 ? 1 : 0;
L_801FBF24:
    // 0x801FBF24: bnel        $at, $zero, L_801FBF50
    if (ctx->r1 != 0) {
        // 0x801FBF28: lw          $t8, 0xCC($a0)
        ctx->r24 = MEM_W(ctx->r4, 0XCC);
            goto L_801FBF50;
    }
    goto skip_1;
    // 0x801FBF28: lw          $t8, 0xCC($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XCC);
    skip_1:
    // 0x801FBF2C: lw          $t7, 0xCC($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XCC);
    // 0x801FBF30: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x801FBF34: beq         $v1, $t7, L_801FBF44
    if (ctx->r3 == ctx->r15) {
        // 0x801FBF38: nop
    
            goto L_801FBF44;
    }
    // 0x801FBF38: nop

    // 0x801FBF3C: sw          $zero, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = 0;
    // 0x801FBF40: sw          $v1, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = ctx->r3;
L_801FBF44:
    // 0x801FBF44: b           L_801FBF64
    // 0x801FBF48: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
        goto L_801FBF64;
    // 0x801FBF48: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801FBF4C: lw          $t8, 0xCC($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XCC);
L_801FBF50:
    // 0x801FBF50: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801FBF54: beql        $a1, $t8, L_801FBF68
    if (ctx->r5 == ctx->r24) {
        // 0x801FBF58: lw          $t9, 0xD4($a0)
        ctx->r25 = MEM_W(ctx->r4, 0XD4);
            goto L_801FBF68;
    }
    goto skip_2;
    // 0x801FBF58: lw          $t9, 0xD4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XD4);
    skip_2:
    // 0x801FBF5C: sw          $zero, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = 0;
    // 0x801FBF60: sw          $a1, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = ctx->r5;
L_801FBF64:
    // 0x801FBF64: lw          $t9, 0xD4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XD4);
L_801FBF68:
    // 0x801FBF68: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x801FBF6C: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x801FBF70: bgtz        $t0, L_801FBFC4
    if (SIGNED(ctx->r8) > 0) {
        // 0x801FBF74: sw          $t0, 0xD4($a0)
        MEM_W(0XD4, ctx->r4) = ctx->r8;
            goto L_801FBFC4;
    }
    // 0x801FBF74: sw          $t0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r8;
    // 0x801FBF78: lw          $v0, 0xCC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XCC);
    // 0x801FBF7C: beq         $v0, $zero, L_801FBF9C
    if (ctx->r2 == 0) {
        // 0x801FBF80: nop
    
            goto L_801FBF9C;
    }
    // 0x801FBF80: nop

    // 0x801FBF84: beq         $v0, $v1, L_801FBFAC
    if (ctx->r2 == ctx->r3) {
        // 0x801FBF88: nop
    
            goto L_801FBFAC;
    }
    // 0x801FBF88: nop

    // 0x801FBF8C: beq         $v0, $a1, L_801FBFBC
    if (ctx->r2 == ctx->r5) {
        // 0x801FBF90: nop
    
            goto L_801FBFBC;
    }
    // 0x801FBF90: nop

    // 0x801FBF94: b           L_801FBFBC
    // 0x801FBF98: nop

        goto L_801FBFBC;
    // 0x801FBF98: nop

L_801FBF9C:
    // 0x801FBF9C: jal         0x801FBFD4
    // 0x801FBFA0: nop

    func_801FBFD4_6273B4(rdram, ctx);
        goto after_0;
    // 0x801FBFA0: nop

    after_0:
    // 0x801FBFA4: b           L_801FBFC8
    // 0x801FBFA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801FBFC8;
    // 0x801FBFA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FBFAC:
    // 0x801FBFAC: jal         0x801FC0F0
    // 0x801FBFB0: nop

    func_801FC0F0_6274D0(rdram, ctx);
        goto after_1;
    // 0x801FBFB0: nop

    after_1:
    // 0x801FBFB4: b           L_801FBFC8
    // 0x801FBFB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801FBFC8;
    // 0x801FBFB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FBFBC:
    // 0x801FBFBC: jal         0x801FC20C
    // 0x801FBFC0: nop

    func_801FC20C_6275EC(rdram, ctx);
        goto after_2;
    // 0x801FBFC0: nop

    after_2:
L_801FBFC4:
    // 0x801FBFC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FBFC8:
    // 0x801FBFC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801FBFCC: jr          $ra
    // 0x801FBFD0: nop

    TRACE_RETURN()
    return;
    // 0x801FBFD0: nop

;}
RECOMP_FUNC void func_801EC85C_617C3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EC85C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801EC860: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801EC864: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801EC868: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801EC86C: jal         0x801ECEDC
    // 0x801EC870: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_801ECEDC_6182BC(rdram, ctx);
        goto after_0;
    // 0x801EC870: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x801EC874: bnel        $v0, $zero, L_801EC8F8
    if (ctx->r2 != 0) {
        // 0x801EC878: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801EC8F8;
    }
    goto skip_0;
    // 0x801EC878: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801EC87C: jal         0x801ECE48
    // 0x801EC880: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801ECE48_618228(rdram, ctx);
        goto after_1;
    // 0x801EC880: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801EC884: bne         $v0, $zero, L_801EC8F4
    if (ctx->r2 != 0) {
        // 0x801EC888: lw          $a0, 0x24($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X24);
            goto L_801EC8F4;
    }
    // 0x801EC888: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x801EC88C: jal         0x801D2F40
    // 0x801EC890: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    func_801D2F40_5FE320(rdram, ctx);
        goto after_2;
    // 0x801EC890: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    after_2:
    // 0x801EC894: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x801EC898: lui         $at, 0x4036
    ctx->r1 = S32(0X4036 << 16);
    // 0x801EC89C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801EC8A0: lwc1        $f4, 0x28($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X28);
    // 0x801EC8A4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801EC8A8: lui         $at, 0x41B0
    ctx->r1 = S32(0X41B0 << 16);
    // 0x801EC8AC: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801EC8B0: c.le.d      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.d <= ctx->f6.d;
    // 0x801EC8B4: nop

    // 0x801EC8B8: bc1fl       L_801EC8F8
    if (!c1cs) {
        // 0x801EC8BC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801EC8F8;
    }
    goto skip_1;
    // 0x801EC8BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x801EC8C0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801EC8C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EC8C8: swc1        $f10, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f10.u32l;
    // 0x801EC8CC: lbu         $t7, 0x30($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X30);
    // 0x801EC8D0: ori         $t8, $t7, 0x2
    ctx->r24 = ctx->r15 | 0X2;
    // 0x801EC8D4: jal         0x801D36C4
    // 0x801EC8D8: sb          $t8, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r24;
    func_801D36C4_5FEAA4(rdram, ctx);
        goto after_3;
    // 0x801EC8D8: sb          $t8, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r24;
    after_3:
    // 0x801EC8DC: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x801EC8E0: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801EC8E4: sw          $t9, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r25;
    // 0x801EC8E8: sw          $zero, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = 0;
    // 0x801EC8EC: jal         0x8003521C
    // 0x801EC8F0: addiu       $a0, $a0, -0x36F8
    ctx->r4 = ADD32(ctx->r4, -0X36F8);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801EC8F0: addiu       $a0, $a0, -0x36F8
    ctx->r4 = ADD32(ctx->r4, -0X36F8);
    after_4:
L_801EC8F4:
    // 0x801EC8F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801EC8F8:
    // 0x801EC8F8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801EC8FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801EC900: jr          $ra
    // 0x801EC904: nop

    TRACE_RETURN()
    return;
    // 0x801EC904: nop

;}
RECOMP_FUNC void func_801DDF8C_60936C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DDF8C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801DDF90: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801DDF94: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801DDF98: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801DDF9C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801DDFA0: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x801DDFA4: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x801DDFA8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801DDFAC: addiu       $t7, $v0, 0x140
    ctx->r15 = ADD32(ctx->r2, 0X140);
    // 0x801DDFB0: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x801DDFB4: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x801DDFB8: jal         0x801CEE80
    // 0x801DDFBC: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
    func_801CEE80_5FA260(rdram, ctx);
        goto after_0;
    // 0x801DDFBC: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
    after_0:
    // 0x801DDFC0: jal         0x801D614C
    // 0x801DDFC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D614C_60152C(rdram, ctx);
        goto after_1;
    // 0x801DDFC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801DDFC8: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x801DDFCC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801DDFD0: ldc1        $f8, -0x2520($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X2520);
    // 0x801DDFD4: lwc1        $f4, 0x20($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X20);
    // 0x801DDFD8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801DDFDC: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801DDFE0: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x801DDFE4: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801DDFE8: swc1        $f16, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f16.u32l;
    // 0x801DDFEC: lwc1        $f18, 0x20($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X20);
    // 0x801DDFF0: ldc1        $f6, -0x2518($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X2518);
    // 0x801DDFF4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801DDFF8: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801DDFFC: c.le.d      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.d <= ctx->f4.d;
    // 0x801DE000: nop

    // 0x801DE004: bc1fl       L_801DE018
    if (!c1cs) {
        // 0x801DE008: lw          $t8, 0x94($s0)
        ctx->r24 = MEM_W(ctx->r16, 0X94);
            goto L_801DE018;
    }
    goto skip_0;
    // 0x801DE008: lw          $t8, 0x94($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X94);
    skip_0:
    // 0x801DE00C: lwc1        $f8, -0x2510($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X2510);
    // 0x801DE010: swc1        $f8, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f8.u32l;
    // 0x801DE014: lw          $t8, 0x94($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X94);
L_801DE018:
    // 0x801DE018: lw          $a1, 0x70($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X70);
    // 0x801DE01C: lw          $a2, 0x74($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X74);
    // 0x801DE020: addiu       $t9, $t8, 0x20
    ctx->r25 = ADD32(ctx->r24, 0X20);
    // 0x801DE024: sw          $t9, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r25;
    // 0x801DE028: lw          $a3, 0x78($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X78);
    // 0x801DE02C: jal         0x8000EE50
    // 0x801DE030: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_8000EE50_FA50(rdram, ctx);
        goto after_2;
    // 0x801DE030: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_2:
    // 0x801DE034: lw          $t1, 0x98($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X98);
    // 0x801DE038: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DE03C: addiu       $t2, $t1, 0x14
    ctx->r10 = ADD32(ctx->r9, 0X14);
    // 0x801DE040: jal         0x801DF5C4
    // 0x801DE044: sw          $t2, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->r10;
    func_801DF5C4_60A9A4(rdram, ctx);
        goto after_3;
    // 0x801DE044: sw          $t2, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->r10;
    after_3:
    // 0x801DE048: jal         0x801DF060
    // 0x801DE04C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801DF060_60A440(rdram, ctx);
        goto after_4;
    // 0x801DE04C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x801DE050: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801DE054: bne         $v0, $at, L_801DE13C
    if (ctx->r2 != ctx->r1) {
        // 0x801DE058: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_801DE13C;
    }
    // 0x801DE058: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801DE05C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801DE060: lwc1        $f10, 0x70($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X70);
    // 0x801DE064: lwc1        $f18, 0x74($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X74);
    // 0x801DE068: lwc1        $f6, 0x78($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X78);
    // 0x801DE06C: div.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x801DE070: addiu       $t3, $zero, 0x96
    ctx->r11 = ADD32(0, 0X96);
    // 0x801DE074: sw          $t3, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r11;
    // 0x801DE078: sw          $zero, 0x80($s0)
    MEM_W(0X80, ctx->r16) = 0;
    // 0x801DE07C: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801DE080: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x801DE084: addiu       $v0, $v0, -0x1130
    ctx->r2 = ADD32(ctx->r2, -0X1130);
    // 0x801DE088: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x801DE08C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801DE090: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x801DE094: addiu       $t2, $zero, 0x36
    ctx->r10 = ADD32(0, 0X36);
    // 0x801DE098: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DE09C: div.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f18.fl, ctx->f0.fl);
    // 0x801DE0A0: swc1        $f16, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f16.u32l;
    // 0x801DE0A4: div.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x801DE0A8: swc1        $f4, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f4.u32l;
    // 0x801DE0AC: swc1        $f8, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f8.u32l;
    // 0x801DE0B0: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x801DE0B4: sb          $t4, 0xE($t5)
    MEM_B(0XE, ctx->r13) = ctx->r12;
    // 0x801DE0B8: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x801DE0BC: addiu       $t4, $zero, 0x136
    ctx->r12 = ADD32(0, 0X136);
    // 0x801DE0C0: sb          $t6, 0x2C0($t7)
    MEM_B(0X2C0, ctx->r15) = ctx->r14;
    // 0x801DE0C4: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x801DE0C8: addiu       $t6, $zero, 0xB8
    ctx->r14 = ADD32(0, 0XB8);
    // 0x801DE0CC: sb          $t8, 0x2C2($t9)
    MEM_B(0X2C2, ctx->r25) = ctx->r24;
    // 0x801DE0D0: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x801DE0D4: sw          $t0, 0x1EC($t1)
    MEM_W(0X1EC, ctx->r9) = ctx->r8;
    // 0x801DE0D8: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x801DE0DC: sw          $t2, 0x1F0($t3)
    MEM_W(0X1F0, ctx->r11) = ctx->r10;
    // 0x801DE0E0: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x801DE0E4: sw          $t4, 0x1F4($t5)
    MEM_W(0X1F4, ctx->r13) = ctx->r12;
    // 0x801DE0E8: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x801DE0EC: jal         0x801DF200
    // 0x801DE0F0: sw          $t6, 0x1F8($t7)
    MEM_W(0X1F8, ctx->r15) = ctx->r14;
    func_801DF200_60A5E0(rdram, ctx);
        goto after_5;
    // 0x801DE0F0: sw          $t6, 0x1F8($t7)
    MEM_W(0X1F8, ctx->r15) = ctx->r14;
    after_5:
    // 0x801DE0F4: jal         0x801DF3E8
    // 0x801DE0F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801DF3E8_60A7C8(rdram, ctx);
        goto after_6;
    // 0x801DE0F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x801DE0FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DE100: jal         0x801E03F8
    // 0x801DE104: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_801E03F8_60B7D8(rdram, ctx);
        goto after_7;
    // 0x801DE104: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_7:
    // 0x801DE108: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801DE10C: jal         0x80037C9C
    // 0x801DE110: addiu       $a1, $zero, 0x96
    ctx->r5 = ADD32(0, 0X96);
    func_80037C9C_3889C(rdram, ctx);
        goto after_8;
    // 0x801DE110: addiu       $a1, $zero, 0x96
    ctx->r5 = ADD32(0, 0X96);
    after_8:
    // 0x801DE114: lui         $a2, 0xAAAA
    ctx->r6 = S32(0XAAAA << 16);
    // 0x801DE118: ori         $a2, $a2, 0xAAAA
    ctx->r6 = ctx->r6 | 0XAAAA;
    // 0x801DE11C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801DE120: jal         0x80037C20
    // 0x801DE124: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80037C20_38820(rdram, ctx);
        goto after_9;
    // 0x801DE124: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
    // 0x801DE128: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DE12C: jal         0x8003521C
    // 0x801DE130: addiu       $a0, $a0, -0x1CAC
    ctx->r4 = ADD32(ctx->r4, -0X1CAC);
    func_8003521C_35E1C(rdram, ctx);
        goto after_10;
    // 0x801DE130: addiu       $a0, $a0, -0x1CAC
    ctx->r4 = ADD32(ctx->r4, -0X1CAC);
    after_10:
    // 0x801DE134: b           L_801DE344
    // 0x801DE138: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801DE344;
    // 0x801DE138: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801DE13C:
    // 0x801DE13C: jal         0x801DF060
    // 0x801DE140: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801DF060_60A440(rdram, ctx);
        goto after_11;
    // 0x801DE140: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x801DE144: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801DE148: bne         $v0, $at, L_801DE1A4
    if (ctx->r2 != ctx->r1) {
        // 0x801DE14C: addiu       $t8, $zero, 0x96
        ctx->r24 = ADD32(0, 0X96);
            goto L_801DE1A4;
    }
    // 0x801DE14C: addiu       $t8, $zero, 0x96
    ctx->r24 = ADD32(0, 0X96);
    // 0x801DE150: sw          $t8, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r24;
    // 0x801DE154: sw          $zero, 0x80($s0)
    MEM_W(0X80, ctx->r16) = 0;
    // 0x801DE158: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x801DE15C: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x801DE160: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DE164: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x801DE168: jal         0x801E03F8
    // 0x801DE16C: sb          $t9, 0xE($t0)
    MEM_B(0XE, ctx->r8) = ctx->r25;
    func_801E03F8_60B7D8(rdram, ctx);
        goto after_12;
    // 0x801DE16C: sb          $t9, 0xE($t0)
    MEM_B(0XE, ctx->r8) = ctx->r25;
    after_12:
    // 0x801DE170: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801DE174: jal         0x80037C9C
    // 0x801DE178: addiu       $a1, $zero, 0x96
    ctx->r5 = ADD32(0, 0X96);
    func_80037C9C_3889C(rdram, ctx);
        goto after_13;
    // 0x801DE178: addiu       $a1, $zero, 0x96
    ctx->r5 = ADD32(0, 0X96);
    after_13:
    // 0x801DE17C: lui         $a2, 0xAAAA
    ctx->r6 = S32(0XAAAA << 16);
    // 0x801DE180: ori         $a2, $a2, 0xAAAA
    ctx->r6 = ctx->r6 | 0XAAAA;
    // 0x801DE184: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801DE188: jal         0x80037C20
    // 0x801DE18C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80037C20_38820(rdram, ctx);
        goto after_14;
    // 0x801DE18C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_14:
    // 0x801DE190: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DE194: jal         0x8003521C
    // 0x801DE198: addiu       $a0, $a0, -0x1630
    ctx->r4 = ADD32(ctx->r4, -0X1630);
    func_8003521C_35E1C(rdram, ctx);
        goto after_15;
    // 0x801DE198: addiu       $a0, $a0, -0x1630
    ctx->r4 = ADD32(ctx->r4, -0X1630);
    after_15:
    // 0x801DE19C: b           L_801DE344
    // 0x801DE1A0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801DE344;
    // 0x801DE1A0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801DE1A4:
    // 0x801DE1A4: jal         0x801DF060
    // 0x801DE1A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801DF060_60A440(rdram, ctx);
        goto after_16;
    // 0x801DE1A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x801DE1AC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801DE1B0: bne         $v0, $at, L_801DE230
    if (ctx->r2 != ctx->r1) {
        // 0x801DE1B4: nop
    
            goto L_801DE230;
    }
    // 0x801DE1B4: nop

    // 0x801DE1B8: lw          $a2, 0xAC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XAC);
    // 0x801DE1BC: addiu       $t1, $zero, 0x5B
    ctx->r9 = ADD32(0, 0X5B);
    // 0x801DE1C0: sb          $t1, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r9;
    // 0x801DE1C4: blez        $a2, L_801DE1F8
    if (SIGNED(ctx->r6) <= 0) {
        // 0x801DE1C8: addiu       $t2, $zero, 0x78
        ctx->r10 = ADD32(0, 0X78);
            goto L_801DE1F8;
    }
    // 0x801DE1C8: addiu       $t2, $zero, 0x78
    ctx->r10 = ADD32(0, 0X78);
    // 0x801DE1CC: sw          $a2, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r6;
    // 0x801DE1D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801DE1D4: jal         0x80037C9C
    // 0x801DE1D8: addiu       $a1, $a2, 0x32
    ctx->r5 = ADD32(ctx->r6, 0X32);
    func_80037C9C_3889C(rdram, ctx);
        goto after_17;
    // 0x801DE1D8: addiu       $a1, $a2, 0x32
    ctx->r5 = ADD32(ctx->r6, 0X32);
    after_17:
    // 0x801DE1DC: lui         $a2, 0xAAAA
    ctx->r6 = S32(0XAAAA << 16);
    // 0x801DE1E0: ori         $a2, $a2, 0xAAAA
    ctx->r6 = ctx->r6 | 0XAAAA;
    // 0x801DE1E4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801DE1E8: jal         0x80037C20
    // 0x801DE1EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80037C20_38820(rdram, ctx);
        goto after_18;
    // 0x801DE1EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_18:
    // 0x801DE1F0: b           L_801DE21C
    // 0x801DE1F4: nop

        goto L_801DE21C;
    // 0x801DE1F4: nop

L_801DE1F8:
    // 0x801DE1F8: sw          $t2, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r10;
    // 0x801DE1FC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801DE200: jal         0x80037C9C
    // 0x801DE204: addiu       $a1, $zero, 0xAA
    ctx->r5 = ADD32(0, 0XAA);
    func_80037C9C_3889C(rdram, ctx);
        goto after_19;
    // 0x801DE204: addiu       $a1, $zero, 0xAA
    ctx->r5 = ADD32(0, 0XAA);
    after_19:
    // 0x801DE208: lui         $a2, 0xAAAA
    ctx->r6 = S32(0XAAAA << 16);
    // 0x801DE20C: ori         $a2, $a2, 0xAAAA
    ctx->r6 = ctx->r6 | 0XAAAA;
    // 0x801DE210: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801DE214: jal         0x80037C20
    // 0x801DE218: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80037C20_38820(rdram, ctx);
        goto after_20;
    // 0x801DE218: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_20:
L_801DE21C:
    // 0x801DE21C: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DE220: jal         0x8003521C
    // 0x801DE224: addiu       $a0, $a0, -0x1A74
    ctx->r4 = ADD32(ctx->r4, -0X1A74);
    func_8003521C_35E1C(rdram, ctx);
        goto after_21;
    // 0x801DE224: addiu       $a0, $a0, -0x1A74
    ctx->r4 = ADD32(ctx->r4, -0X1A74);
    after_21:
    // 0x801DE228: b           L_801DE344
    // 0x801DE22C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801DE344;
    // 0x801DE22C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801DE230:
    // 0x801DE230: jal         0x801DF060
    // 0x801DE234: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801DF060_60A440(rdram, ctx);
        goto after_22;
    // 0x801DE234: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x801DE238: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x801DE23C: bne         $v0, $at, L_801DE2A0
    if (ctx->r2 != ctx->r1) {
        // 0x801DE240: addiu       $t3, $zero, 0x5B
        ctx->r11 = ADD32(0, 0X5B);
            goto L_801DE2A0;
    }
    // 0x801DE240: addiu       $t3, $zero, 0x5B
    ctx->r11 = ADD32(0, 0X5B);
    // 0x801DE244: addiu       $t4, $zero, 0x96
    ctx->r12 = ADD32(0, 0X96);
    // 0x801DE248: sb          $t3, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r11;
    // 0x801DE24C: sw          $t4, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r12;
    // 0x801DE250: sw          $zero, 0x80($s0)
    MEM_W(0X80, ctx->r16) = 0;
    // 0x801DE254: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x801DE258: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x801DE25C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DE260: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x801DE264: jal         0x801E03F8
    // 0x801DE268: sb          $t5, 0xE($t6)
    MEM_B(0XE, ctx->r14) = ctx->r13;
    func_801E03F8_60B7D8(rdram, ctx);
        goto after_23;
    // 0x801DE268: sb          $t5, 0xE($t6)
    MEM_B(0XE, ctx->r14) = ctx->r13;
    after_23:
    // 0x801DE26C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801DE270: jal         0x80037C9C
    // 0x801DE274: addiu       $a1, $zero, 0x96
    ctx->r5 = ADD32(0, 0X96);
    func_80037C9C_3889C(rdram, ctx);
        goto after_24;
    // 0x801DE274: addiu       $a1, $zero, 0x96
    ctx->r5 = ADD32(0, 0X96);
    after_24:
    // 0x801DE278: lui         $a2, 0xAAAA
    ctx->r6 = S32(0XAAAA << 16);
    // 0x801DE27C: ori         $a2, $a2, 0xAAAA
    ctx->r6 = ctx->r6 | 0XAAAA;
    // 0x801DE280: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801DE284: jal         0x80037C20
    // 0x801DE288: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80037C20_38820(rdram, ctx);
        goto after_25;
    // 0x801DE288: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_25:
    // 0x801DE28C: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DE290: jal         0x8003521C
    // 0x801DE294: addiu       $a0, $a0, -0x1630
    ctx->r4 = ADD32(ctx->r4, -0X1630);
    func_8003521C_35E1C(rdram, ctx);
        goto after_26;
    // 0x801DE294: addiu       $a0, $a0, -0x1630
    ctx->r4 = ADD32(ctx->r4, -0X1630);
    after_26:
    // 0x801DE298: b           L_801DE344
    // 0x801DE29C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801DE344;
    // 0x801DE29C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801DE2A0:
    // 0x801DE2A0: jal         0x801D36BC
    // 0x801DE2A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D36BC_5FEA9C(rdram, ctx);
        goto after_27;
    // 0x801DE2A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_27:
    // 0x801DE2A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DE2AC: jal         0x8000ED00
    // 0x801DE2B0: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    func_8000ED00_F900(rdram, ctx);
        goto after_28;
    // 0x801DE2B0: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    after_28:
    // 0x801DE2B4: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x801DE2B8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801DE2BC: nop

    // 0x801DE2C0: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x801DE2C4: nop

    // 0x801DE2C8: bc1fl       L_801DE344
    if (!c1cs) {
        // 0x801DE2CC: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_801DE344;
    }
    goto skip_1;
    // 0x801DE2CC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x801DE2D0: lw          $a2, 0xAC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XAC);
    // 0x801DE2D4: addiu       $t7, $zero, 0x5B
    ctx->r15 = ADD32(0, 0X5B);
    // 0x801DE2D8: sb          $t7, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r15;
    // 0x801DE2DC: blez        $a2, L_801DE310
    if (SIGNED(ctx->r6) <= 0) {
        // 0x801DE2E0: addiu       $t8, $zero, 0x32
        ctx->r24 = ADD32(0, 0X32);
            goto L_801DE310;
    }
    // 0x801DE2E0: addiu       $t8, $zero, 0x32
    ctx->r24 = ADD32(0, 0X32);
    // 0x801DE2E4: sw          $a2, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r6;
    // 0x801DE2E8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801DE2EC: jal         0x80037C9C
    // 0x801DE2F0: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_80037C9C_3889C(rdram, ctx);
        goto after_29;
    // 0x801DE2F0: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_29:
    // 0x801DE2F4: lui         $a2, 0x2222
    ctx->r6 = S32(0X2222 << 16);
    // 0x801DE2F8: ori         $a2, $a2, 0x2222
    ctx->r6 = ctx->r6 | 0X2222;
    // 0x801DE2FC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801DE300: jal         0x80037C20
    // 0x801DE304: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80037C20_38820(rdram, ctx);
        goto after_30;
    // 0x801DE304: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_30:
    // 0x801DE308: b           L_801DE334
    // 0x801DE30C: nop

        goto L_801DE334;
    // 0x801DE30C: nop

L_801DE310:
    // 0x801DE310: sw          $t8, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r24;
    // 0x801DE314: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801DE318: jal         0x80037C9C
    // 0x801DE31C: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    func_80037C9C_3889C(rdram, ctx);
        goto after_31;
    // 0x801DE31C: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    after_31:
    // 0x801DE320: lui         $a2, 0x2222
    ctx->r6 = S32(0X2222 << 16);
    // 0x801DE324: ori         $a2, $a2, 0x2222
    ctx->r6 = ctx->r6 | 0X2222;
    // 0x801DE328: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801DE32C: jal         0x80037C20
    // 0x801DE330: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80037C20_38820(rdram, ctx);
        goto after_32;
    // 0x801DE330: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_32:
L_801DE334:
    // 0x801DE334: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DE338: jal         0x8003521C
    // 0x801DE33C: addiu       $a0, $a0, -0x1A74
    ctx->r4 = ADD32(ctx->r4, -0X1A74);
    func_8003521C_35E1C(rdram, ctx);
        goto after_33;
    // 0x801DE33C: addiu       $a0, $a0, -0x1A74
    ctx->r4 = ADD32(ctx->r4, -0X1A74);
    after_33:
    // 0x801DE340: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801DE344:
    // 0x801DE344: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801DE348: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x801DE34C: jr          $ra
    // 0x801DE350: nop

    TRACE_RETURN()
    return;
    // 0x801DE350: nop

;}
RECOMP_FUNC void func_801E5A88_610E68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E5A88: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801E5A8C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801E5A90: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E5A94: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801E5A98: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x801E5A9C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x801E5AA0: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x801E5AA4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801E5AA8: lwc1        $f8, 0x10($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X10);
    // 0x801E5AAC: lwc1        $f4, 0xC($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0XC);
    // 0x801E5AB0: lwc1        $f12, 0x8($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X8);
    // 0x801E5AB4: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801E5AB8: addiu       $t6, $zero, 0xE
    ctx->r14 = ADD32(0, 0XE);
    // 0x801E5ABC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E5AC0: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x801E5AC4: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x801E5AC8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801E5ACC: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x801E5AD0: jal         0x801D3CE4
    // 0x801E5AD4: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    func_801D3CE4_5FF0C4(rdram, ctx);
        goto after_0;
    // 0x801E5AD4: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    after_0:
    // 0x801E5AD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E5ADC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801E5AE0: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    // 0x801E5AE4: jal         0x801D3F00
    // 0x801E5AE8: sb          $v0, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r2;
    func_801D3F00_5FF2E0(rdram, ctx);
        goto after_1;
    // 0x801E5AE8: sb          $v0, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r2;
    after_1:
    // 0x801E5AEC: lui         $at, 0xC396
    ctx->r1 = S32(0XC396 << 16);
    // 0x801E5AF0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801E5AF4: lwc1        $f18, 0x10($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801E5AF8: lbu         $v1, 0x2F($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X2F);
    // 0x801E5AFC: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x801E5B00: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x801E5B04: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x801E5B08: andi        $t7, $v1, 0xFF
    ctx->r15 = ctx->r3 & 0XFF;
    // 0x801E5B0C: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
    // 0x801E5B10: bc1fl       L_801E5B2C
    if (!c1cs) {
        // 0x801E5B14: mtc1        $at, $f4
        ctx->f4.u32l = ctx->r1;
            goto L_801E5B2C;
    }
    goto skip_0;
    // 0x801E5B14: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    skip_0:
    // 0x801E5B18: addiu       $v1, $t7, 0x1
    ctx->r3 = ADD32(ctx->r15, 0X1);
    // 0x801E5B1C: andi        $t8, $v1, 0xFF
    ctx->r24 = ctx->r3 & 0XFF;
    // 0x801E5B20: b           L_801E5B50
    // 0x801E5B24: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
        goto L_801E5B50;
    // 0x801E5B24: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
    // 0x801E5B28: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
L_801E5B2C:
    // 0x801E5B2C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x801E5B30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E5B34: swc1        $f4, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f4.u32l;
    // 0x801E5B38: jal         0x801D641C
    // 0x801E5B3C: sb          $v1, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r3;
    func_801D641C_6017FC(rdram, ctx);
        goto after_2;
    // 0x801E5B3C: sb          $v1, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r3;
    after_2:
    // 0x801E5B40: lbu         $v1, 0x2F($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X2F);
    // 0x801E5B44: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x801E5B48: andi        $t9, $v1, 0xFF
    ctx->r25 = ctx->r3 & 0XFF;
    // 0x801E5B4C: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
L_801E5B50:
    // 0x801E5B50: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E5B54: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    // 0x801E5B58: jal         0x801D2F40
    // 0x801E5B5C: sb          $v1, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r3;
    func_801D2F40_5FE320(rdram, ctx);
        goto after_3;
    // 0x801E5B5C: sb          $v1, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r3;
    after_3:
    // 0x801E5B60: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x801E5B64: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801E5B68: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801E5B6C: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x801E5B70: lbu         $v1, 0x2F($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X2F);
    // 0x801E5B74: c.le.d      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.d <= ctx->f6.d;
    // 0x801E5B78: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801E5B7C: bc1fl       L_801E5BCC
    if (!c1cs) {
        // 0x801E5B80: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_801E5BCC;
    }
    goto skip_1;
    // 0x801E5B80: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x801E5B84: bne         $v1, $at, L_801E5BC8
    if (ctx->r3 != ctx->r1) {
        // 0x801E5B88: addiu       $t0, $zero, 0x8
        ctx->r8 = ADD32(0, 0X8);
            goto L_801E5BC8;
    }
    // 0x801E5B88: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x801E5B8C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801E5B90: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801E5B94: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x801E5B98: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801E5B9C: lui         $at, 0xC080
    ctx->r1 = S32(0XC080 << 16);
    // 0x801E5BA0: swc1        $f10, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->f10.u32l;
    // 0x801E5BA4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801E5BA8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801E5BAC: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E5BB0: sw          $t0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r8;
    // 0x801E5BB4: addiu       $a0, $a0, 0x5BDC
    ctx->r4 = ADD32(ctx->r4, 0X5BDC);
    // 0x801E5BB8: swc1        $f18, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f18.u32l;
    // 0x801E5BBC: swc1        $f16, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f16.u32l;
    // 0x801E5BC0: jal         0x8003521C
    // 0x801E5BC4: swc1        $f4, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f4.u32l;
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801E5BC4: swc1        $f4, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f4.u32l;
    after_4:
L_801E5BC8:
    // 0x801E5BC8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801E5BCC:
    // 0x801E5BCC: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x801E5BD0: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x801E5BD4: jr          $ra
    // 0x801E5BD8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x801E5BD8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_801D0998_5FBD78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D0998: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D099C: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801D09A0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801D09A4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801D09A8: lbu         $v1, 0x190($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X190);
    // 0x801D09AC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801D09B0: addiu       $v0, $v0, 0x178
    ctx->r2 = ADD32(ctx->r2, 0X178);
    // 0x801D09B4: beq         $v1, $at, L_801D09D4
    if (ctx->r3 == ctx->r1) {
        // 0x801D09B8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_801D09D4;
    }
    // 0x801D09B8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801D09BC: beq         $v1, $at, L_801D0A14
    if (ctx->r3 == ctx->r1) {
        // 0x801D09C0: addiu       $at, $zero, 0xB
        ctx->r1 = ADD32(0, 0XB);
            goto L_801D0A14;
    }
    // 0x801D09C0: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x801D09C4: beql        $v1, $at, L_801D0A58
    if (ctx->r3 == ctx->r1) {
        // 0x801D09C8: mtc1        $zero, $f2
        ctx->f2.u32l = 0;
            goto L_801D0A58;
    }
    goto skip_0;
    // 0x801D09C8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    skip_0:
    // 0x801D09CC: b           L_801D0A90
    // 0x801D09D0: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
        goto L_801D0A90;
    // 0x801D09D0: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
L_801D09D4:
    // 0x801D09D4: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801D09D8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801D09DC: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801D09E0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D09E4: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x801D09E8: nop

    // 0x801D09EC: bc1f        L_801D09FC
    if (!c1cs) {
        // 0x801D09F0: nop
    
            goto L_801D09FC;
    }
    // 0x801D09F0: nop

    // 0x801D09F4: jr          $ra
    // 0x801D09F8: swc1        $f2, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f2.u32l;
    TRACE_RETURN()
    return;
    // 0x801D09F8: swc1        $f2, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f2.u32l;
L_801D09FC:
    // 0x801D09FC: ldc1        $f6, -0x2E28($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X2E28);
    // 0x801D0A00: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x801D0A04: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x801D0A08: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801D0A0C: jr          $ra
    // 0x801D0A10: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
    TRACE_RETURN()
    return;
    // 0x801D0A10: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
L_801D0A14:
    // 0x801D0A14: lui         $at, 0xC080
    ctx->r1 = S32(0XC080 << 16);
    // 0x801D0A18: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801D0A1C: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801D0A20: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D0A24: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x801D0A28: nop

    // 0x801D0A2C: bc1f        L_801D0A3C
    if (!c1cs) {
        // 0x801D0A30: nop
    
            goto L_801D0A3C;
    }
    // 0x801D0A30: nop

    // 0x801D0A34: jr          $ra
    // 0x801D0A38: swc1        $f2, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f2.u32l;
    TRACE_RETURN()
    return;
    // 0x801D0A38: swc1        $f2, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f2.u32l;
L_801D0A3C:
    // 0x801D0A3C: ldc1        $f18, -0x2E20($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0X2E20);
    // 0x801D0A40: cvt.d.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.d = CVT_D_S(ctx->f0.fl);
    // 0x801D0A44: sub.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d - ctx->f18.d;
    // 0x801D0A48: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801D0A4C: jr          $ra
    // 0x801D0A50: swc1        $f6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f6.u32l;
    TRACE_RETURN()
    return;
    // 0x801D0A50: swc1        $f6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f6.u32l;
    // 0x801D0A54: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
L_801D0A58:
    // 0x801D0A58: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801D0A5C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D0A60: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x801D0A64: nop

    // 0x801D0A68: bc1f        L_801D0A78
    if (!c1cs) {
        // 0x801D0A6C: nop
    
            goto L_801D0A78;
    }
    // 0x801D0A6C: nop

    // 0x801D0A70: jr          $ra
    // 0x801D0A74: swc1        $f2, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f2.u32l;
    TRACE_RETURN()
    return;
    // 0x801D0A74: swc1        $f2, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f2.u32l;
L_801D0A78:
    // 0x801D0A78: ldc1        $f10, -0x2E18($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X2E18);
    // 0x801D0A7C: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x801D0A80: sub.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d - ctx->f10.d;
    // 0x801D0A84: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801D0A88: jr          $ra
    // 0x801D0A8C: swc1        $f18, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f18.u32l;
    TRACE_RETURN()
    return;
    // 0x801D0A8C: swc1        $f18, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f18.u32l;
L_801D0A90:
    // 0x801D0A90: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801D0A94: nop

    // 0x801D0A98: swc1        $f2, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f2.u32l;
    // 0x801D0A9C: jr          $ra
    // 0x801D0AA0: nop

    TRACE_RETURN()
    return;
    // 0x801D0AA0: nop

;}
RECOMP_FUNC void func_801E4800_60FBE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E4800: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801E4804: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x801E4808: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E480C: lwc1        $f0, -0x20F8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X20F8);
    // 0x801E4810: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x801E4814: addiu       $a1, $a1, 0xEEC
    ctx->r5 = ADD32(ctx->r5, 0XEEC);
    // 0x801E4818: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x801E481C: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801E4820: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x801E4824: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801E4828: lui         $at, 0xC3FA
    ctx->r1 = S32(0XC3FA << 16);
    // 0x801E482C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E4830: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801E4834: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x801E4838: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801E483C: addiu       $t6, $zero, 0x4B0
    ctx->r14 = ADD32(0, 0X4B0);
    // 0x801E4840: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E4844: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x801E4848: addiu       $a2, $a2, -0x5830
    ctx->r6 = ADD32(ctx->r6, -0X5830);
    // 0x801E484C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801E4850: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801E4854: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801E4858: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801E485C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x801E4860: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801E4864: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801E4868: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x801E486C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801E4870: jal         0x8000DBF0
    // 0x801E4874: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_0;
    // 0x801E4874: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x801E4878: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x801E487C: sb          $zero, 0x65($v0)
    MEM_B(0X65, ctx->r2) = 0;
    // 0x801E4880: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801E4884: lw          $t7, -0x1130($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1130);
    // 0x801E4888: addiu       $t8, $zero, 0x50
    ctx->r24 = ADD32(0, 0X50);
    // 0x801E488C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801E4890: sw          $v0, 0x1E0($t7)
    MEM_W(0X1E0, ctx->r15) = ctx->r2;
    // 0x801E4894: addiu       $t0, $zero, 0xC8
    ctx->r8 = ADD32(0, 0XC8);
    // 0x801E4898: addiu       $t1, $zero, 0x1F4
    ctx->r9 = ADD32(0, 0X1F4);
    // 0x801E489C: addiu       $t2, $zero, 0x64
    ctx->r10 = ADD32(0, 0X64);
    // 0x801E48A0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E48A4: sh          $t8, 0x5C($s0)
    MEM_H(0X5C, ctx->r16) = ctx->r24;
    // 0x801E48A8: sb          $t9, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r25;
    // 0x801E48AC: sh          $t0, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r8;
    // 0x801E48B0: sh          $t1, 0x3E($s0)
    MEM_H(0X3E, ctx->r16) = ctx->r9;
    // 0x801E48B4: sh          $zero, 0x40($s0)
    MEM_H(0X40, ctx->r16) = 0;
    // 0x801E48B8: sw          $zero, 0x90($s0)
    MEM_W(0X90, ctx->r16) = 0;
    // 0x801E48BC: sw          $zero, 0x94($s0)
    MEM_W(0X94, ctx->r16) = 0;
    // 0x801E48C0: sw          $zero, 0x98($s0)
    MEM_W(0X98, ctx->r16) = 0;
    // 0x801E48C4: sw          $zero, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = 0;
    // 0x801E48C8: sw          $zero, 0xCC($s0)
    MEM_W(0XCC, ctx->r16) = 0;
    // 0x801E48CC: sw          $t2, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r10;
    // 0x801E48D0: sw          $zero, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = 0;
    // 0x801E48D4: sw          $zero, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = 0;
    // 0x801E48D8: sw          $zero, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = 0;
    // 0x801E48DC: sw          $zero, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = 0;
    // 0x801E48E0: sw          $zero, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = 0;
    // 0x801E48E4: addiu       $a1, $a1, -0x4E90
    ctx->r5 = ADD32(ctx->r5, -0X4E90);
    // 0x801E48E8: jal         0x801D2EE4
    // 0x801E48EC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_1;
    // 0x801E48EC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x801E48F0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E48F4: addiu       $a1, $a1, -0x4F6C
    ctx->r5 = ADD32(ctx->r5, -0X4F6C);
    // 0x801E48F8: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x801E48FC: jal         0x801D32D4
    // 0x801E4900: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_801D32D4_5FE6B4(rdram, ctx);
        goto after_2;
    // 0x801E4900: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x801E4904: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x801E4908: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801E490C: sw          $t3, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->r11;
    // 0x801E4910: addiu       $a0, $a0, -0x30D0
    ctx->r4 = ADD32(ctx->r4, -0X30D0);
    // 0x801E4914: jal         0x80034DD8
    // 0x801E4918: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034DD8_359D8(rdram, ctx);
        goto after_3;
    // 0x801E4918: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x801E491C: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E4920: jal         0x8003521C
    // 0x801E4924: addiu       $a0, $a0, 0x493C
    ctx->r4 = ADD32(ctx->r4, 0X493C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801E4924: addiu       $a0, $a0, 0x493C
    ctx->r4 = ADD32(ctx->r4, 0X493C);
    after_4:
    // 0x801E4928: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801E492C: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x801E4930: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x801E4934: jr          $ra
    // 0x801E4938: nop

    TRACE_RETURN()
    return;
    // 0x801E4938: nop

;}
