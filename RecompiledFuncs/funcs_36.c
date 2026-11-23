#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_801E62D0_5A21E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E62D0: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801E62D4: sh          $zero, 0x0($t6)
    MEM_H(0X0, ctx->r14) = 0;
    // 0x801E62D8: lw          $t7, 0x5C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X5C);
    // 0x801E62DC: lw          $v0, 0x90($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X90);
    // 0x801E62E0: beq         $v0, $zero, L_801E6304
    if (ctx->r2 == 0) {
        // 0x801E62E4: nop
    
            goto L_801E6304;
    }
    // 0x801E62E4: nop

    // 0x801E62E8: lw          $t8, 0x68($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X68);
    // 0x801E62EC: lui         $at, 0xFFFE
    ctx->r1 = S32(0XFFFE << 16);
    // 0x801E62F0: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x801E62F4: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x801E62F8: sw          $t9, 0x68($v0)
    MEM_W(0X68, ctx->r2) = ctx->r25;
    // 0x801E62FC: lw          $t0, 0x5C($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X5C);
    // 0x801E6300: sw          $zero, 0x90($t0)
    MEM_W(0X90, ctx->r8) = 0;
L_801E6304:
    // 0x801E6304: jr          $ra
    // 0x801E6308: nop

    TRACE_RETURN()
    return;
    // 0x801E6308: nop

;}
RECOMP_FUNC void func_801E0628_59C538(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E0628: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E062C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E0630: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x801E0634: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801E0638: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E063C: jal         0x801E7338
    // 0x801E0640: sw          $zero, -0x383C($at)
    MEM_W(-0X383C, ctx->r1) = 0;
    func_801E7338_5A3248(rdram, ctx);
        goto after_0;
    // 0x801E0640: sw          $zero, -0x383C($at)
    MEM_W(-0X383C, ctx->r1) = 0;
    after_0:
    // 0x801E0644: beq         $v0, $zero, L_801E0654
    if (ctx->r2 == 0) {
        // 0x801E0648: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_801E0654;
    }
    // 0x801E0648: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801E064C: jal         0x801DAD08
    // 0x801E0650: addiu       $a1, $zero, 0x3A
    ctx->r5 = ADD32(0, 0X3A);
    func_801DAD08_596C18(rdram, ctx);
        goto after_1;
    // 0x801E0650: addiu       $a1, $zero, 0x3A
    ctx->r5 = ADD32(0, 0X3A);
    after_1:
L_801E0654:
    // 0x801E0654: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E0658: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E065C: jr          $ra
    // 0x801E0660: nop

    TRACE_RETURN()
    return;
    // 0x801E0660: nop

;}
RECOMP_FUNC void func_801E08BC_59C7CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E08BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E08C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E08C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801E08C8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E08CC: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
    // 0x801E08D0: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801E08D4: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801E08D8: lbu         $v1, 0x18($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X18);
    // 0x801E08DC: andi        $t7, $v1, 0x1
    ctx->r15 = ctx->r3 & 0X1;
    // 0x801E08E0: beq         $t7, $zero, L_801E08EC
    if (ctx->r15 == 0) {
        // 0x801E08E4: ori         $t8, $v1, 0x8
        ctx->r24 = ctx->r3 | 0X8;
            goto L_801E08EC;
    }
    // 0x801E08E4: ori         $t8, $v1, 0x8
    ctx->r24 = ctx->r3 | 0X8;
    // 0x801E08E8: sb          $t8, 0x18($v0)
    MEM_B(0X18, ctx->r2) = ctx->r24;
L_801E08EC:
    // 0x801E08EC: jalr        $t9
    // 0x801E08F0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x801E08F0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_0:
    // 0x801E08F4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E08F8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E08FC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x801E0900: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x801E0904: lwc1        $f4, 0x28($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X28);
    // 0x801E0908: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x801E090C: nop

    // 0x801E0910: bc1f        L_801E092C
    if (!c1cs) {
        // 0x801E0914: nop
    
            goto L_801E092C;
    }
    // 0x801E0914: nop

    // 0x801E0918: jal         0x801E759C
    // 0x801E091C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801E759C_5A34AC(rdram, ctx);
        goto after_1;
    // 0x801E091C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x801E0920: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801E0924: jal         0x801DACDC
    // 0x801E0928: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_2;
    // 0x801E0928: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
L_801E092C:
    // 0x801E092C: jal         0x801E84A4
    // 0x801E0930: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801E84A4_5A43B4(rdram, ctx);
        goto after_3;
    // 0x801E0930: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x801E0934: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E0938: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E093C: jr          $ra
    // 0x801E0940: nop

    TRACE_RETURN()
    return;
    // 0x801E0940: nop

;}
RECOMP_FUNC void func_801D80F4_594004(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D80F4: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x801D80F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801D80FC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x801D8100: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x801D8104: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    // 0x801D8108: lhu         $t6, 0xA8($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XA8);
    // 0x801D810C: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x801D8110: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801D8114: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x801D8118: beq         $t7, $zero, L_801D8128
    if (ctx->r15 == 0) {
        // 0x801D811C: lw          $a1, 0x78($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X78);
            goto L_801D8128;
    }
    // 0x801D811C: lw          $a1, 0x78($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X78);
    // 0x801D8120: b           L_801D827C
    // 0x801D8124: sb          $zero, 0xBD($a0)
    MEM_B(0XBD, ctx->r4) = 0;
        goto L_801D827C;
    // 0x801D8124: sb          $zero, 0xBD($a0)
    MEM_B(0XBD, ctx->r4) = 0;
L_801D8128:
    // 0x801D8128: jal         0x801D8290
    // 0x801D812C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D8290_5941A0(rdram, ctx);
        goto after_0;
    // 0x801D812C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x801D8130: bnel        $v0, $zero, L_801D8180
    if (ctx->r2 != 0) {
        // 0x801D8134: lbu         $t4, 0xBD($s0)
        ctx->r12 = MEM_BU(ctx->r16, 0XBD);
            goto L_801D8180;
    }
    goto skip_0;
    // 0x801D8134: lbu         $t4, 0xBD($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0XBD);
    skip_0:
    // 0x801D8138: lbu         $t8, 0xBD($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XBD);
    // 0x801D813C: or          $t3, $s1, $zero
    ctx->r11 = ctx->r17 | 0;
    // 0x801D8140: andi        $t9, $t8, 0x7F
    ctx->r25 = ctx->r24 & 0X7F;
    // 0x801D8144: sb          $t9, 0xBD($s0)
    MEM_B(0XBD, ctx->r16) = ctx->r25;
    // 0x801D8148: lw          $t0, 0x78($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X78);
    // 0x801D814C: addiu       $t2, $t0, 0x60
    ctx->r10 = ADD32(ctx->r8, 0X60);
L_801D8150:
    // 0x801D8150: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x801D8154: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x801D8158: addiu       $t3, $t3, 0xC
    ctx->r11 = ADD32(ctx->r11, 0XC);
    // 0x801D815C: sw          $at, -0xC($t3)
    MEM_W(-0XC, ctx->r11) = ctx->r1;
    // 0x801D8160: lw          $at, -0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X8);
    // 0x801D8164: sw          $at, -0x8($t3)
    MEM_W(-0X8, ctx->r11) = ctx->r1;
    // 0x801D8168: lw          $at, -0x4($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X4);
    // 0x801D816C: bne         $t0, $t2, L_801D8150
    if (ctx->r8 != ctx->r10) {
        // 0x801D8170: sw          $at, -0x4($t3)
        MEM_W(-0X4, ctx->r11) = ctx->r1;
            goto L_801D8150;
    }
    // 0x801D8170: sw          $at, -0x4($t3)
    MEM_W(-0X4, ctx->r11) = ctx->r1;
    // 0x801D8174: b           L_801D8280
    // 0x801D8178: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801D8280;
    // 0x801D8178: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801D817C: lbu         $t4, 0xBD($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0XBD);
L_801D8180:
    // 0x801D8180: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D8184: andi        $t5, $t4, 0x80
    ctx->r13 = ctx->r12 & 0X80;
    // 0x801D8188: bnel        $t5, $zero, L_801D8250
    if (ctx->r13 != 0) {
        // 0x801D818C: lw          $t4, 0x78($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X78);
            goto L_801D8250;
    }
    goto skip_1;
    // 0x801D818C: lw          $t4, 0x78($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X78);
    skip_1:
    // 0x801D8190: jal         0x801D8290
    // 0x801D8194: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_801D8290_5941A0(rdram, ctx);
        goto after_1;
    // 0x801D8194: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_1:
    // 0x801D8198: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    // 0x801D819C: beq         $a1, $zero, L_801D824C
    if (ctx->r5 == 0) {
        // 0x801D81A0: andi        $a0, $v0, 0xFFFF
        ctx->r4 = ctx->r2 & 0XFFFF;
            goto L_801D824C;
    }
    // 0x801D81A0: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    // 0x801D81A4: andi        $t6, $a1, 0x80
    ctx->r14 = ctx->r5 & 0X80;
    // 0x801D81A8: beq         $t6, $zero, L_801D8234
    if (ctx->r14 == 0) {
        // 0x801D81AC: lui         $v1, 0x8020
        ctx->r3 = S32(0X8020 << 16);
            goto L_801D8234;
    }
    // 0x801D81AC: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x801D81B0: lw          $v1, -0x39EC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X39EC);
    // 0x801D81B4: lwc1        $f6, 0x8($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801D81B8: lwc1        $f10, 0x0($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X0);
    // 0x801D81BC: lwc1        $f4, 0x10($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X10);
    // 0x801D81C0: lwc1        $f8, 0x8($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801D81C4: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801D81C8: jal         0x80003A94
    // 0x801D81CC: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    func_80003A94_4694(rdram, ctx);
        goto after_2;
    // 0x801D81CC: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    after_2:
    // 0x801D81D0: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x801D81D4: lw          $t7, -0x39FC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X39FC);
    // 0x801D81D8: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    // 0x801D81DC: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x801D81E0: lw          $v1, -0x39EC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X39EC);
    // 0x801D81E4: lw          $a0, 0x5C($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X5C);
    // 0x801D81E8: lwc1        $f6, 0x8($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801D81EC: lwc1        $f16, 0x10($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X10);
    // 0x801D81F0: lwc1        $f18, 0x14($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X14);
    // 0x801D81F4: lwc1        $f8, 0x8($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801D81F8: lwc1        $f10, 0xC($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0XC);
    // 0x801D81FC: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801D8200: lwc1        $f18, 0x0($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X0);
    // 0x801D8204: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801D8208: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801D820C: jal         0x80003A94
    // 0x801D8210: sub.s       $f14, $f16, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f18.fl;
    func_80003A94_4694(rdram, ctx);
        goto after_3;
    // 0x801D8210: sub.s       $f14, $f16, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f18.fl;
    after_3:
    // 0x801D8214: lhu         $t8, 0x24($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X24);
    // 0x801D8218: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x801D821C: subu        $t9, $t8, $v0
    ctx->r25 = SUB32(ctx->r24, ctx->r2);
    // 0x801D8220: andi        $t1, $t9, 0x8000
    ctx->r9 = ctx->r25 & 0X8000;
    // 0x801D8224: beq         $t1, $zero, L_801D8234
    if (ctx->r9 == 0) {
        // 0x801D8228: nop
    
            goto L_801D8234;
    }
    // 0x801D8228: nop

    // 0x801D822C: b           L_801D8234
    // 0x801D8230: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_801D8234;
    // 0x801D8230: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_801D8234:
    // 0x801D8234: lbu         $t0, 0xAA($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XAA);
    // 0x801D8238: ori         $t2, $a0, 0x80
    ctx->r10 = ctx->r4 | 0X80;
    // 0x801D823C: sb          $t2, 0xBD($s0)
    MEM_B(0XBD, ctx->r16) = ctx->r10;
    // 0x801D8240: or          $t3, $t0, $a0
    ctx->r11 = ctx->r8 | ctx->r4;
    // 0x801D8244: b           L_801D827C
    // 0x801D8248: sb          $t3, 0xAA($s0)
    MEM_B(0XAA, ctx->r16) = ctx->r11;
        goto L_801D827C;
    // 0x801D8248: sb          $t3, 0xAA($s0)
    MEM_B(0XAA, ctx->r16) = ctx->r11;
L_801D824C:
    // 0x801D824C: lw          $t4, 0x78($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X78);
L_801D8250:
    // 0x801D8250: or          $t7, $s1, $zero
    ctx->r15 = ctx->r17 | 0;
    // 0x801D8254: addiu       $t6, $t4, 0x60
    ctx->r14 = ADD32(ctx->r12, 0X60);
L_801D8258:
    // 0x801D8258: lw          $at, 0x0($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X0);
    // 0x801D825C: addiu       $t4, $t4, 0xC
    ctx->r12 = ADD32(ctx->r12, 0XC);
    // 0x801D8260: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x801D8264: sw          $at, -0xC($t7)
    MEM_W(-0XC, ctx->r15) = ctx->r1;
    // 0x801D8268: lw          $at, -0x8($t4)
    ctx->r1 = MEM_W(ctx->r12, -0X8);
    // 0x801D826C: sw          $at, -0x8($t7)
    MEM_W(-0X8, ctx->r15) = ctx->r1;
    // 0x801D8270: lw          $at, -0x4($t4)
    ctx->r1 = MEM_W(ctx->r12, -0X4);
    // 0x801D8274: bne         $t4, $t6, L_801D8258
    if (ctx->r12 != ctx->r14) {
        // 0x801D8278: sw          $at, -0x4($t7)
        MEM_W(-0X4, ctx->r15) = ctx->r1;
            goto L_801D8258;
    }
    // 0x801D8278: sw          $at, -0x4($t7)
    MEM_W(-0X4, ctx->r15) = ctx->r1;
L_801D827C:
    // 0x801D827C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801D8280:
    // 0x801D8280: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x801D8284: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x801D8288: jr          $ra
    // 0x801D828C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    TRACE_RETURN()
    return;
    // 0x801D828C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_801DC554_598464(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DC554: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801DC558: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801DC55C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801DC560: addiu       $t0, $a1, 0x8
    ctx->r8 = ADD32(ctx->r5, 0X8);
    // 0x801DC564: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x801DC568: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801DC56C: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x801DC570: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x801DC574: beq         $a0, $zero, L_801DC5B0
    if (ctx->r4 == 0) {
        // 0x801DC578: sw          $a2, 0x4($a1)
        MEM_W(0X4, ctx->r5) = ctx->r6;
            goto L_801DC5B0;
    }
    // 0x801DC578: sw          $a2, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r6;
    // 0x801DC57C: lui         $t7, 0xFA00
    ctx->r15 = S32(0XFA00 << 16);
    // 0x801DC580: sw          $t7, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r15;
    // 0x801DC584: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x801DC588: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x801DC58C: sll         $t9, $a3, 24
    ctx->r25 = S32(ctx->r7 << 24);
    // 0x801DC590: andi        $t2, $t1, 0xFF
    ctx->r10 = ctx->r9 & 0XFF;
    // 0x801DC594: sll         $t3, $t2, 16
    ctx->r11 = S32(ctx->r10 << 16);
    // 0x801DC598: andi        $t6, $t5, 0xFF
    ctx->r14 = ctx->r13 & 0XFF;
    // 0x801DC59C: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x801DC5A0: or          $t4, $t9, $t3
    ctx->r12 = ctx->r25 | ctx->r11;
    // 0x801DC5A4: or          $t8, $t4, $t7
    ctx->r24 = ctx->r12 | ctx->r15;
    // 0x801DC5A8: sw          $t8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r24;
    // 0x801DC5AC: addiu       $v0, $t0, 0x8
    ctx->r2 = ADD32(ctx->r8, 0X8);
L_801DC5B0:
    // 0x801DC5B0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x801DC5B4: lui         $t1, 0xFB00
    ctx->r9 = S32(0XFB00 << 16);
    // 0x801DC5B8: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x801DC5BC: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x801DC5C0: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x801DC5C4: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x801DC5C8: andi        $t6, $t5, 0xFF
    ctx->r14 = ctx->r13 & 0XFF;
    // 0x801DC5CC: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x801DC5D0: sll         $t4, $t6, 16
    ctx->r12 = S32(ctx->r14 << 16);
    // 0x801DC5D4: andi        $t1, $t8, 0xFF
    ctx->r9 = ctx->r24 & 0XFF;
    // 0x801DC5D8: sll         $t3, $t9, 24
    ctx->r11 = S32(ctx->r25 << 24);
    // 0x801DC5DC: or          $t7, $t3, $t4
    ctx->r15 = ctx->r11 | ctx->r12;
    // 0x801DC5E0: sll         $t2, $t1, 8
    ctx->r10 = S32(ctx->r9 << 8);
    // 0x801DC5E4: or          $t9, $t7, $t2
    ctx->r25 = ctx->r15 | ctx->r10;
    // 0x801DC5E8: andi        $t6, $t5, 0xFF
    ctx->r14 = ctx->r13 & 0XFF;
    // 0x801DC5EC: or          $t3, $t9, $t6
    ctx->r11 = ctx->r25 | ctx->r14;
    // 0x801DC5F0: addiu       $a2, $v0, 0x8
    ctx->r6 = ADD32(ctx->r2, 0X8);
    // 0x801DC5F4: sw          $t3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r11;
    // 0x801DC5F8: addiu       $v0, $a2, 0x8
    ctx->r2 = ADD32(ctx->r6, 0X8);
    // 0x801DC5FC: lui         $t4, 0xB800
    ctx->r12 = S32(0XB800 << 16);
    // 0x801DC600: sw          $t4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r12;
    // 0x801DC604: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x801DC608: subu        $a1, $v0, $s0
    ctx->r5 = SUB32(ctx->r2, ctx->r16);
    // 0x801DC60C: jal         0x80040620
    // 0x801DC610: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_0;
    // 0x801DC610: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x801DC614: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801DC618: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x801DC61C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801DC620: jr          $ra
    // 0x801DC624: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x801DC624: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_801D3494_58F3A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D3494: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x801D3498: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x801D349C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801D34A0: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801D34A4: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x801D34A8: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x801D34AC: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x801D34B0: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x801D34B4: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x801D34B8: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x801D34BC: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x801D34C0: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x801D34C4: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    // 0x801D34C8: sb          $zero, 0x4A($sp)
    MEM_B(0X4A, ctx->r29) = 0;
    // 0x801D34CC: jal         0x801D416C
    // 0x801D34D0: swc1        $f4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f4.u32l;
    func_801D416C_59007C(rdram, ctx);
        goto after_0;
    // 0x801D34D0: swc1        $f4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x801D34D4: jal         0x801D3A04
    // 0x801D34D8: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    func_801D3A04_58F914(rdram, ctx);
        goto after_1;
    // 0x801D34D8: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    after_1:
    // 0x801D34DC: bne         $v0, $zero, L_801D34EC
    if (ctx->r2 != 0) {
        // 0x801D34E0: lui         $t6, 0x8021
        ctx->r14 = S32(0X8021 << 16);
            goto L_801D34EC;
    }
    // 0x801D34E0: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801D34E4: b           L_801D39D8
    // 0x801D34E8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_801D39D8;
    // 0x801D34E8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_801D34EC:
    // 0x801D34EC: lbu         $t6, -0x2F80($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X2F80);
    // 0x801D34F0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D34F4: lwc1        $f20, -0x53D0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X53D0);
    // 0x801D34F8: blez        $t6, L_801D364C
    if (SIGNED(ctx->r14) <= 0) {
        // 0x801D34FC: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_801D364C;
    }
    // 0x801D34FC: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x801D3500: lui         $s2, 0x8021
    ctx->r18 = S32(0X8021 << 16);
    // 0x801D3504: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x801D3508: addiu       $s2, $s2, -0x3078
    ctx->r18 = ADD32(ctx->r18, -0X3078);
    // 0x801D350C: lwc1        $f24, 0x50($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X50);
    // 0x801D3510: lbu         $s4, 0x63($sp)
    ctx->r20 = MEM_BU(ctx->r29, 0X63);
L_801D3514:
    // 0x801D3514: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x801D3518: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801D351C: sll         $t4, $s3, 2
    ctx->r12 = S32(ctx->r19 << 2);
    // 0x801D3520: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x801D3524: bne         $at, $zero, L_801D35C4
    if (ctx->r1 != 0) {
        // 0x801D3528: lui         $t5, 0x8021
        ctx->r13 = S32(0X8021 << 16);
            goto L_801D35C4;
    }
    // 0x801D3528: lui         $t5, 0x8021
    ctx->r13 = S32(0X8021 << 16);
    // 0x801D352C: blez        $v0, L_801D3628
    if (SIGNED(ctx->r2) <= 0) {
        // 0x801D3530: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_801D3628;
    }
    // 0x801D3530: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x801D3534: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x801D3538: addiu       $t8, $t8, -0x2F78
    ctx->r24 = ADD32(ctx->r24, -0X2F78);
    // 0x801D353C: sll         $t7, $s3, 2
    ctx->r15 = S32(ctx->r19 << 2);
    // 0x801D3540: addu        $s1, $t7, $t8
    ctx->r17 = ADD32(ctx->r15, ctx->r24);
L_801D3544:
    // 0x801D3544: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x801D3548: jal         0x801D4078
    // 0x801D354C: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    func_801D4078_58FF88(rdram, ctx);
        goto after_2;
    // 0x801D354C: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    after_2:
    // 0x801D3550: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
    // 0x801D3554: nop

    // 0x801D3558: bc1fl       L_801D356C
    if (!c1cs) {
        // 0x801D355C: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_801D356C;
    }
    goto skip_0;
    // 0x801D355C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_0:
    // 0x801D3560: b           L_801D356C
    // 0x801D3564: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_801D356C;
    // 0x801D3564: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    // 0x801D3568: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_801D356C:
    // 0x801D356C: c.lt.s      $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f20.fl < ctx->f22.fl;
    // 0x801D3570: nop

    // 0x801D3574: bc1fl       L_801D3588
    if (!c1cs) {
        // 0x801D3578: mov.s       $f12, $f20
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
            goto L_801D3588;
    }
    goto skip_1;
    // 0x801D3578: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    skip_1:
    // 0x801D357C: b           L_801D3588
    // 0x801D3580: neg.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = -ctx->f20.fl;
        goto L_801D3588;
    // 0x801D3580: neg.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = -ctx->f20.fl;
    // 0x801D3584: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
L_801D3588:
    // 0x801D3588: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x801D358C: nop

    // 0x801D3590: bc1fl       L_801D35A8
    if (!c1cs) {
        // 0x801D3594: lbu         $t3, 0x0($s2)
        ctx->r11 = MEM_BU(ctx->r18, 0X0);
            goto L_801D35A8;
    }
    goto skip_2;
    // 0x801D3594: lbu         $t3, 0x0($s2)
    ctx->r11 = MEM_BU(ctx->r18, 0X0);
    skip_2:
    // 0x801D3598: andi        $s4, $s0, 0xFF
    ctx->r20 = ctx->r16 & 0XFF;
    // 0x801D359C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x801D35A0: lwc1        $f24, 0x0($s1)
    ctx->f24.u32l = MEM_W(ctx->r17, 0X0);
    // 0x801D35A4: lbu         $t3, 0x0($s2)
    ctx->r11 = MEM_BU(ctx->r18, 0X0);
L_801D35A8:
    // 0x801D35A8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x801D35AC: andi        $t9, $s0, 0xFF
    ctx->r25 = ctx->r16 & 0XFF;
    // 0x801D35B0: slt         $at, $t9, $t3
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x801D35B4: bne         $at, $zero, L_801D3544
    if (ctx->r1 != 0) {
        // 0x801D35B8: or          $s0, $t9, $zero
        ctx->r16 = ctx->r25 | 0;
            goto L_801D3544;
    }
    // 0x801D35B8: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    // 0x801D35BC: b           L_801D3628
    // 0x801D35C0: nop

        goto L_801D3628;
    // 0x801D35C0: nop

L_801D35C4:
    // 0x801D35C4: addiu       $t5, $t5, -0x2F78
    ctx->r13 = ADD32(ctx->r13, -0X2F78);
    // 0x801D35C8: addu        $s1, $t4, $t5
    ctx->r17 = ADD32(ctx->r12, ctx->r13);
    // 0x801D35CC: jal         0x801D4078
    // 0x801D35D0: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    func_801D4078_58FF88(rdram, ctx);
        goto after_3;
    // 0x801D35D0: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    after_3:
    // 0x801D35D4: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
    // 0x801D35D8: nop

    // 0x801D35DC: bc1fl       L_801D35F0
    if (!c1cs) {
        // 0x801D35E0: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_801D35F0;
    }
    goto skip_3;
    // 0x801D35E0: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_3:
    // 0x801D35E4: b           L_801D35F0
    // 0x801D35E8: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_801D35F0;
    // 0x801D35E8: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    // 0x801D35EC: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_801D35F0:
    // 0x801D35F0: c.lt.s      $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f20.fl < ctx->f22.fl;
    // 0x801D35F4: nop

    // 0x801D35F8: bc1fl       L_801D360C
    if (!c1cs) {
        // 0x801D35FC: mov.s       $f12, $f20
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
            goto L_801D360C;
    }
    goto skip_4;
    // 0x801D35FC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    skip_4:
    // 0x801D3600: b           L_801D360C
    // 0x801D3604: neg.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = -ctx->f20.fl;
        goto L_801D360C;
    // 0x801D3604: neg.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = -ctx->f20.fl;
    // 0x801D3608: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
L_801D360C:
    // 0x801D360C: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x801D3610: nop

    // 0x801D3614: bc1f        L_801D3628
    if (!c1cs) {
        // 0x801D3618: nop
    
            goto L_801D3628;
    }
    // 0x801D3618: nop

    // 0x801D361C: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x801D3620: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x801D3624: lwc1        $f24, 0x0($s1)
    ctx->f24.u32l = MEM_W(ctx->r17, 0X0);
L_801D3628:
    // 0x801D3628: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801D362C: lbu         $t7, -0x2F80($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X2F80);
    // 0x801D3630: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x801D3634: andi        $t6, $s3, 0xFF
    ctx->r14 = ctx->r19 & 0XFF;
    // 0x801D3638: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x801D363C: bne         $at, $zero, L_801D3514
    if (ctx->r1 != 0) {
        // 0x801D3640: or          $s3, $t6, $zero
        ctx->r19 = ctx->r14 | 0;
            goto L_801D3514;
    }
    // 0x801D3640: or          $s3, $t6, $zero
    ctx->r19 = ctx->r14 | 0;
    // 0x801D3644: sb          $s4, 0x63($sp)
    MEM_B(0X63, ctx->r29) = ctx->r20;
    // 0x801D3648: swc1        $f24, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f24.u32l;
L_801D364C:
    // 0x801D364C: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x801D3650: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x801D3654: lbu         $s4, 0x63($sp)
    ctx->r20 = MEM_BU(ctx->r29, 0X63);
    // 0x801D3658: lbu         $t8, 0xBD($t1)
    ctx->r24 = MEM_BU(ctx->r9, 0XBD);
    // 0x801D365C: lwc1        $f24, 0x50($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X50);
    // 0x801D3660: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x801D3664: andi        $t9, $t8, 0x80
    ctx->r25 = ctx->r24 & 0X80;
    // 0x801D3668: beql        $t9, $zero, L_801D368C
    if (ctx->r25 == 0) {
        // 0x801D366C: c.lt.s      $f20, $f22
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f20.fl < ctx->f22.fl;
            goto L_801D368C;
    }
    goto skip_5;
    // 0x801D366C: c.lt.s      $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f20.fl < ctx->f22.fl;
    skip_5:
    // 0x801D3670: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D3674: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801D3678: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D367C: nop

    // 0x801D3680: mul.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801D3684: swc1        $f2, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f2.u32l;
    // 0x801D3688: c.lt.s      $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f20.fl < ctx->f22.fl;
L_801D368C:
    // 0x801D368C: lwc1        $f2, 0x6C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801D3690: bc1fl       L_801D36A4
    if (!c1cs) {
        // 0x801D3694: mov.s       $f12, $f20
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
            goto L_801D36A4;
    }
    goto skip_6;
    // 0x801D3694: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    skip_6:
    // 0x801D3698: b           L_801D36A4
    // 0x801D369C: neg.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = -ctx->f20.fl;
        goto L_801D36A4;
    // 0x801D369C: neg.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = -ctx->f20.fl;
    // 0x801D36A0: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
L_801D36A4:
    // 0x801D36A4: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x801D36A8: nop

    // 0x801D36AC: bc1fl       L_801D3954
    if (!c1cs) {
        // 0x801D36B0: sll         $t6, $s4, 2
        ctx->r14 = S32(ctx->r20 << 2);
            goto L_801D3954;
    }
    goto skip_7;
    // 0x801D36B0: sll         $t6, $s4, 2
    ctx->r14 = S32(ctx->r20 << 2);
    skip_7:
    // 0x801D36B4: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x801D36B8: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801D36BC: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x801D36C0: nop

    // 0x801D36C4: bc1fl       L_801D36D4
    if (!c1cs) {
        // 0x801D36C8: c.lt.s      $f2, $f20
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f2.fl < ctx->f20.fl;
            goto L_801D36D4;
    }
    goto skip_8;
    // 0x801D36C8: c.lt.s      $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f2.fl < ctx->f20.fl;
    skip_8:
    // 0x801D36CC: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x801D36D0: c.lt.s      $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f2.fl < ctx->f20.fl;
L_801D36D4:
    // 0x801D36D4: nop

    // 0x801D36D8: bc1fl       L_801D36E8
    if (!c1cs) {
        // 0x801D36DC: add.s       $f0, $f24, $f20
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f24.fl + ctx->f20.fl;
            goto L_801D36E8;
    }
    goto skip_9;
    // 0x801D36DC: add.s       $f0, $f24, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f24.fl + ctx->f20.fl;
    skip_9:
    // 0x801D36E0: mov.s       $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    ctx->f20.fl = ctx->f2.fl;
    // 0x801D36E4: add.s       $f0, $f24, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f24.fl + ctx->f20.fl;
L_801D36E8:
    // 0x801D36E8: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
    // 0x801D36EC: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    // 0x801D36F0: bc1f        L_801D374C
    if (!c1cs) {
        // 0x801D36F4: nop
    
            goto L_801D374C;
    }
    // 0x801D36F4: nop

    // 0x801D36F8: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801D36FC: lbu         $a1, -0x3830($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X3830);
    // 0x801D3700: lui         $t2, 0x8021
    ctx->r10 = S32(0X8021 << 16);
    // 0x801D3704: addiu       $t2, $t2, -0x3350
    ctx->r10 = ADD32(ctx->r10, -0X3350);
    // 0x801D3708: sll         $t3, $a1, 3
    ctx->r11 = S32(ctx->r5 << 3);
    // 0x801D370C: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x801D3710: lbu         $a2, -0x8($t4)
    ctx->r6 = MEM_BU(ctx->r12, -0X8);
    // 0x801D3714: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x801D3718: addiu       $t0, $t0, -0x3260
    ctx->r8 = ADD32(ctx->r8, -0X3260);
    // 0x801D371C: beq         $a2, $zero, L_801D3734
    if (ctx->r6 == 0) {
        // 0x801D3720: sll         $t5, $a1, 2
        ctx->r13 = S32(ctx->r5 << 2);
            goto L_801D3734;
    }
    // 0x801D3720: sll         $t5, $a1, 2
    ctx->r13 = S32(ctx->r5 << 2);
    // 0x801D3724: addu        $t6, $t0, $t5
    ctx->r14 = ADD32(ctx->r8, ctx->r13);
    // 0x801D3728: lwc1        $f10, -0x4($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, -0X4);
    // 0x801D372C: b           L_801D3740
    // 0x801D3730: add.s       $f24, $f10, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f24.fl = ctx->f10.fl + ctx->f0.fl;
        goto L_801D3740;
    // 0x801D3730: add.s       $f24, $f10, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f24.fl = ctx->f10.fl + ctx->f0.fl;
L_801D3734:
    // 0x801D3734: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x801D3738: addiu       $t0, $t0, -0x3260
    ctx->r8 = ADD32(ctx->r8, -0X3260);
    // 0x801D373C: mov.s       $f24, $f22
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 22);
    ctx->f24.fl = ctx->f22.fl;
L_801D3740:
    // 0x801D3740: swc1        $f24, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f24.u32l;
    // 0x801D3744: b           L_801D37BC
    // 0x801D3748: lwc1        $f14, 0x54($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X54);
        goto L_801D37BC;
    // 0x801D3748: lwc1        $f14, 0x54($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X54);
L_801D374C:
    // 0x801D374C: lbu         $a1, -0x3830($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X3830);
    // 0x801D3750: lui         $t2, 0x8021
    ctx->r10 = S32(0X8021 << 16);
    // 0x801D3754: addiu       $t2, $t2, -0x3350
    ctx->r10 = ADD32(ctx->r10, -0X3350);
    // 0x801D3758: sll         $t7, $a1, 3
    ctx->r15 = S32(ctx->r5 << 3);
    // 0x801D375C: addu        $t8, $t2, $t7
    ctx->r24 = ADD32(ctx->r10, ctx->r15);
    // 0x801D3760: lbu         $a2, -0x8($t8)
    ctx->r6 = MEM_BU(ctx->r24, -0X8);
    // 0x801D3764: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x801D3768: addiu       $t0, $t0, -0x3260
    ctx->r8 = ADD32(ctx->r8, -0X3260);
    // 0x801D376C: beq         $a2, $zero, L_801D37A0
    if (ctx->r6 == 0) {
        // 0x801D3770: sll         $t4, $a1, 2
        ctx->r12 = S32(ctx->r5 << 2);
            goto L_801D37A0;
    }
    // 0x801D3770: sll         $t4, $a1, 2
    ctx->r12 = S32(ctx->r5 << 2);
    // 0x801D3774: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x801D3778: addiu       $t0, $t0, -0x3260
    ctx->r8 = ADD32(ctx->r8, -0X3260);
    // 0x801D377C: sll         $t9, $a1, 2
    ctx->r25 = S32(ctx->r5 << 2);
    // 0x801D3780: addu        $t3, $t0, $t9
    ctx->r11 = ADD32(ctx->r8, ctx->r25);
    // 0x801D3784: lwc1        $f2, -0x4($t3)
    ctx->f2.u32l = MEM_W(ctx->r11, -0X4);
    // 0x801D3788: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x801D378C: nop

    // 0x801D3790: bc1fl       L_801D37C0
    if (!c1cs) {
        // 0x801D3794: mov.s       $f20, $f22
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    ctx->f20.fl = ctx->f22.fl;
            goto L_801D37C0;
    }
    goto skip_10;
    // 0x801D3794: mov.s       $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    ctx->f20.fl = ctx->f22.fl;
    skip_10:
    // 0x801D3798: b           L_801D37BC
    // 0x801D379C: sub.s       $f14, $f0, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = ctx->f0.fl - ctx->f2.fl;
        goto L_801D37BC;
    // 0x801D379C: sub.s       $f14, $f0, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = ctx->f0.fl - ctx->f2.fl;
L_801D37A0:
    // 0x801D37A0: addu        $t5, $t0, $t4
    ctx->r13 = ADD32(ctx->r8, ctx->r12);
    // 0x801D37A4: lwc1        $f2, -0x8($t5)
    ctx->f2.u32l = MEM_W(ctx->r13, -0X8);
    // 0x801D37A8: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x801D37AC: nop

    // 0x801D37B0: bc1fl       L_801D37C0
    if (!c1cs) {
        // 0x801D37B4: mov.s       $f20, $f22
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    ctx->f20.fl = ctx->f22.fl;
            goto L_801D37C0;
    }
    goto skip_11;
    // 0x801D37B4: mov.s       $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    ctx->f20.fl = ctx->f22.fl;
    skip_11:
    // 0x801D37B8: mov.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.fl = ctx->f2.fl;
L_801D37BC:
    // 0x801D37BC: mov.s       $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    ctx->f20.fl = ctx->f22.fl;
L_801D37C0:
    // 0x801D37C0: blez        $a1, L_801D383C
    if (SIGNED(ctx->r5) <= 0) {
        // 0x801D37C4: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_801D383C;
    }
    // 0x801D37C4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x801D37C8: addiu       $a0, $a1, -0x1
    ctx->r4 = ADD32(ctx->r5, -0X1);
    // 0x801D37CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801D37D0: lbu         $a3, 0x69($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X69);
L_801D37D4:
    // 0x801D37D4: bne         $a0, $v0, L_801D37F4
    if (ctx->r4 != ctx->r2) {
        // 0x801D37D8: sll         $t7, $v1, 2
        ctx->r15 = S32(ctx->r3 << 2);
            goto L_801D37F4;
    }
    // 0x801D37D8: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x801D37DC: beq         $a2, $zero, L_801D37EC
    if (ctx->r6 == 0) {
        // 0x801D37E0: nop
    
            goto L_801D37EC;
    }
    // 0x801D37E0: nop

    // 0x801D37E4: b           L_801D3800
    // 0x801D37E8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
        goto L_801D3800;
    // 0x801D37E8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_801D37EC:
    // 0x801D37EC: b           L_801D383C
    // 0x801D37F0: sb          $a3, 0x69($sp)
    MEM_B(0X69, ctx->r29) = ctx->r7;
        goto L_801D383C;
    // 0x801D37F0: sb          $a3, 0x69($sp)
    MEM_B(0X69, ctx->r29) = ctx->r7;
L_801D37F4:
    // 0x801D37F4: addiu       $a3, $v0, 0x1
    ctx->r7 = ADD32(ctx->r2, 0X1);
    // 0x801D37F8: andi        $t6, $a3, 0xFF
    ctx->r14 = ctx->r7 & 0XFF;
    // 0x801D37FC: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
L_801D3800:
    // 0x801D3800: addu        $t8, $t0, $t7
    ctx->r24 = ADD32(ctx->r8, ctx->r15);
    // 0x801D3804: lwc1        $f0, 0x0($t8)
    ctx->f0.u32l = MEM_W(ctx->r24, 0X0);
    // 0x801D3808: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x801D380C: nop

    // 0x801D3810: bc1fl       L_801D3824
    if (!c1cs) {
        // 0x801D3814: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_801D3824;
    }
    goto skip_12;
    // 0x801D3814: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_12:
    // 0x801D3818: b           L_801D383C
    // 0x801D381C: sb          $a3, 0x69($sp)
    MEM_B(0X69, ctx->r29) = ctx->r7;
        goto L_801D383C;
    // 0x801D381C: sb          $a3, 0x69($sp)
    MEM_B(0X69, ctx->r29) = ctx->r7;
    // 0x801D3820: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_801D3824:
    // 0x801D3824: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x801D3828: slt         $at, $v0, $a1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x801D382C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x801D3830: bne         $at, $zero, L_801D37D4
    if (ctx->r1 != 0) {
        // 0x801D3834: mov.s       $f20, $f0
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
            goto L_801D37D4;
    }
    // 0x801D3834: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x801D3838: sb          $a3, 0x69($sp)
    MEM_B(0X69, ctx->r29) = ctx->r7;
L_801D383C:
    // 0x801D383C: sll         $t3, $v1, 2
    ctx->r11 = S32(ctx->r3 << 2);
    // 0x801D3840: addu        $t4, $t0, $t3
    ctx->r12 = ADD32(ctx->r8, ctx->r11);
    // 0x801D3844: lbu         $a3, 0x69($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X69);
    // 0x801D3848: lwc1        $f0, 0x0($t4)
    ctx->f0.u32l = MEM_W(ctx->r12, 0X0);
    // 0x801D384C: beq         $v1, $zero, L_801D3868
    if (ctx->r3 == 0) {
        // 0x801D3850: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_801D3868;
    }
    // 0x801D3850: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x801D3854: sll         $t5, $v0, 2
    ctx->r13 = S32(ctx->r2 << 2);
    // 0x801D3858: addu        $t6, $t0, $t5
    ctx->r14 = ADD32(ctx->r8, ctx->r13);
    // 0x801D385C: lwc1        $f12, -0x4($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, -0X4);
    // 0x801D3860: b           L_801D3870
    // 0x801D3864: swc1        $f14, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f14.u32l;
        goto L_801D3870;
    // 0x801D3864: swc1        $f14, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f14.u32l;
L_801D3868:
    // 0x801D3868: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    // 0x801D386C: swc1        $f14, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f14.u32l;
L_801D3870:
    // 0x801D3870: lwc1        $f24, 0x54($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801D3874: sub.s       $f6, $f0, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x801D3878: sll         $t9, $a3, 3
    ctx->r25 = S32(ctx->r7 << 3);
    // 0x801D387C: sll         $t3, $v1, 3
    ctx->r11 = S32(ctx->r3 << 3);
    // 0x801D3880: sub.s       $f4, $f24, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = ctx->f24.fl - ctx->f20.fl;
    // 0x801D3884: addu        $a2, $t2, $t3
    ctx->r6 = ADD32(ctx->r10, ctx->r11);
    // 0x801D3888: addu        $a1, $t2, $t9
    ctx->r5 = ADD32(ctx->r10, ctx->r25);
    // 0x801D388C: lh          $t5, 0x2($a1)
    ctx->r13 = MEM_H(ctx->r5, 0X2);
    // 0x801D3890: div.s       $f18, $f4, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801D3894: lh          $t4, 0x2($a2)
    ctx->r12 = MEM_H(ctx->r6, 0X2);
    // 0x801D3898: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x801D389C: sll         $t7, $s4, 2
    ctx->r15 = S32(ctx->r20 << 2);
    // 0x801D38A0: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x801D38A4: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x801D38A8: subu        $t7, $t7, $s4
    ctx->r15 = SUB32(ctx->r15, ctx->r20);
    // 0x801D38AC: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x801D38B0: addiu       $t8, $t8, -0x3070
    ctx->r24 = ADD32(ctx->r24, -0X3070);
    // 0x801D38B4: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x801D38B8: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    // 0x801D38BC: lh          $t7, 0x4($a1)
    ctx->r15 = MEM_H(ctx->r5, 0X4);
    // 0x801D38C0: lh          $t6, 0x4($a2)
    ctx->r14 = MEM_H(ctx->r6, 0X4);
    // 0x801D38C4: lh          $t8, 0x6($a2)
    ctx->r24 = MEM_H(ctx->r6, 0X6);
    // 0x801D38C8: lh          $t9, 0x6($a1)
    ctx->r25 = MEM_H(ctx->r5, 0X6);
    // 0x801D38CC: sll         $t3, $v0, 2
    ctx->r11 = S32(ctx->r2 << 2);
    // 0x801D38D0: addu        $t4, $t0, $t3
    ctx->r12 = ADD32(ctx->r8, ctx->r11);
    // 0x801D38D4: cvt.s.w     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    ctx->f2.fl = CVT_S_W(ctx->f8.u32l);
    // 0x801D38D8: sub.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f2.fl;
    // 0x801D38DC: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x801D38E0: mul.s       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x801D38E4: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x801D38E8: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801D38EC: add.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f2.fl;
    // 0x801D38F0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x801D38F4: swc1        $f10, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f10.u32l;
    // 0x801D38F8: sub.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f14.fl;
    // 0x801D38FC: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x801D3900: mul.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x801D3904: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x801D3908: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x801D390C: add.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f14.fl;
    // 0x801D3910: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x801D3914: swc1        $f6, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f6.u32l;
    // 0x801D3918: sub.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f16.fl;
    // 0x801D391C: mul.s       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x801D3920: add.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x801D3924: beq         $v1, $zero, L_801D3934
    if (ctx->r3 == 0) {
        // 0x801D3928: swc1        $f10, 0xC($a0)
        MEM_W(0XC, ctx->r4) = ctx->f10.u32l;
            goto L_801D3934;
    }
    // 0x801D3928: swc1        $f10, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f10.u32l;
    // 0x801D392C: b           L_801D3938
    // 0x801D3930: lwc1        $f12, -0x4($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, -0X4);
        goto L_801D3938;
    // 0x801D3930: lwc1        $f12, -0x4($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, -0X4);
L_801D3934:
    // 0x801D3934: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
L_801D3938:
    // 0x801D3938: sub.s       $f4, $f0, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x801D393C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x801D3940: sb          $v0, 0x14($a0)
    MEM_B(0X14, ctx->r4) = ctx->r2;
    // 0x801D3944: sb          $t5, 0x4A($sp)
    MEM_B(0X4A, ctx->r29) = ctx->r13;
    // 0x801D3948: mul.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x801D394C: swc1        $f6, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f6.u32l;
    // 0x801D3950: sll         $t6, $s4, 2
    ctx->r14 = S32(ctx->r20 << 2);
L_801D3954:
    // 0x801D3954: subu        $t6, $t6, $s4
    ctx->r14 = SUB32(ctx->r14, ctx->r20);
    // 0x801D3958: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801D395C: addiu       $t7, $t7, -0x3070
    ctx->r15 = ADD32(ctx->r15, -0X3070);
    // 0x801D3960: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x801D3964: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    // 0x801D3968: lwc1        $f8, 0x4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4);
    // 0x801D396C: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x801D3970: addiu       $t0, $t0, -0x3260
    ctx->r8 = ADD32(ctx->r8, -0X3260);
    // 0x801D3974: swc1        $f8, 0xC0($t1)
    MEM_W(0XC0, ctx->r9) = ctx->f8.u32l;
    // 0x801D3978: lwc1        $f10, 0x8($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X8);
    // 0x801D397C: swc1        $f10, 0xC4($t1)
    MEM_W(0XC4, ctx->r9) = ctx->f10.u32l;
    // 0x801D3980: lwc1        $f4, 0xC($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XC);
    // 0x801D3984: swc1        $f4, 0xC8($t1)
    MEM_W(0XC8, ctx->r9) = ctx->f4.u32l;
    // 0x801D3988: lbu         $v1, 0x14($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X14);
    // 0x801D398C: beq         $v1, $zero, L_801D39A0
    if (ctx->r3 == 0) {
        // 0x801D3990: sll         $t8, $v1, 2
        ctx->r24 = S32(ctx->r3 << 2);
            goto L_801D39A0;
    }
    // 0x801D3990: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x801D3994: addu        $t9, $t0, $t8
    ctx->r25 = ADD32(ctx->r8, ctx->r24);
    // 0x801D3998: b           L_801D39A4
    // 0x801D399C: lwc1        $f12, -0x4($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, -0X4);
        goto L_801D39A4;
    // 0x801D399C: lwc1        $f12, -0x4($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, -0X4);
L_801D39A0:
    // 0x801D39A0: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
L_801D39A4:
    // 0x801D39A4: lwc1        $f6, 0x10($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X10);
    // 0x801D39A8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D39AC: add.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f12.fl;
    // 0x801D39B0: swc1        $f8, 0xD8($t1)
    MEM_W(0XD8, ctx->r9) = ctx->f8.u32l;
    // 0x801D39B4: lwc1        $f2, -0x31E8($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X31E8);
    // 0x801D39B8: lwc1        $f0, 0xD8($t1)
    ctx->f0.u32l = MEM_W(ctx->r9, 0XD8);
    // 0x801D39BC: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x801D39C0: nop

    // 0x801D39C4: bc1fl       L_801D39D8
    if (!c1cs) {
        // 0x801D39C8: lb          $v0, 0x4A($sp)
        ctx->r2 = MEM_B(ctx->r29, 0X4A);
            goto L_801D39D8;
    }
    goto skip_13;
    // 0x801D39C8: lb          $v0, 0x4A($sp)
    ctx->r2 = MEM_B(ctx->r29, 0X4A);
    skip_13:
    // 0x801D39CC: sub.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x801D39D0: swc1        $f10, 0xD8($t1)
    MEM_W(0XD8, ctx->r9) = ctx->f10.u32l;
    // 0x801D39D4: lb          $v0, 0x4A($sp)
    ctx->r2 = MEM_B(ctx->r29, 0X4A);
L_801D39D8:
    // 0x801D39D8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801D39DC: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x801D39E0: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x801D39E4: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x801D39E8: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x801D39EC: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x801D39F0: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x801D39F4: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x801D39F8: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x801D39FC: jr          $ra
    // 0x801D3A00: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    TRACE_RETURN()
    return;
    // 0x801D3A00: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_801F4578_5B0488(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F4578: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F457C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F4580: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F4584: jal         0x801F4C20
    // 0x801F4588: addiu       $a1, $zero, 0x74
    ctx->r5 = ADD32(0, 0X74);
    func_801F4C20_5B0B30(rdram, ctx);
        goto after_0;
    // 0x801F4588: addiu       $a1, $zero, 0x74
    ctx->r5 = ADD32(0, 0X74);
    after_0:
    // 0x801F458C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F4590: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F4594: jr          $ra
    // 0x801F4598: nop

    TRACE_RETURN()
    return;
    // 0x801F4598: nop

;}
RECOMP_FUNC void func_801DD50C_59941C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DD50C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801DD510: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801DD514: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801DD518: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801DD51C: lbu         $a3, 0x60($a0)
    ctx->r7 = MEM_BU(ctx->r4, 0X60);
    // 0x801DD520: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x801DD524: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x801DD528: addiu       $a0, $a0, -0x39F8
    ctx->r4 = ADD32(ctx->r4, -0X39F8);
    // 0x801DD52C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801DD530: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x801DD534: addu        $v1, $a3, $a1
    ctx->r3 = ADD32(ctx->r7, ctx->r5);
L_801DD538:
    // 0x801DD538: slti        $at, $v1, 0x4
    ctx->r1 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x801DD53C: bne         $at, $zero, L_801DD54C
    if (ctx->r1 != 0) {
        // 0x801DD540: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_801DD54C;
    }
    // 0x801DD540: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x801DD544: b           L_801DD550
    // 0x801DD548: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801DD550;
    // 0x801DD548: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801DD54C:
    // 0x801DD54C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_801DD550:
    // 0x801DD550: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x801DD554: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x801DD558: lw          $t8, 0x94($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X94);
    // 0x801DD55C: beq         $t8, $zero, L_801DD56C
    if (ctx->r24 == 0) {
        // 0x801DD560: nop
    
            goto L_801DD56C;
    }
    // 0x801DD560: nop

    // 0x801DD564: b           L_801DD574
    // 0x801DD568: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
        goto L_801DD574;
    // 0x801DD568: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
L_801DD56C:
    // 0x801DD56C: bnel        $a1, $a2, L_801DD538
    if (ctx->r5 != ctx->r6) {
        // 0x801DD570: addu        $v1, $a3, $a1
        ctx->r3 = ADD32(ctx->r7, ctx->r5);
            goto L_801DD538;
    }
    goto skip_0;
    // 0x801DD570: addu        $v1, $a3, $a1
    ctx->r3 = ADD32(ctx->r7, ctx->r5);
    skip_0:
L_801DD574:
    // 0x801DD574: bgez        $t0, L_801DD584
    if (SIGNED(ctx->r8) >= 0) {
        // 0x801DD578: lui         $v0, 0x8016
        ctx->r2 = S32(0X8016 << 16);
            goto L_801DD584;
    }
    // 0x801DD578: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x801DD57C: b           L_801DD5AC
    // 0x801DD580: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801DD5AC;
    // 0x801DD580: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801DD584:
    // 0x801DD584: addiu       $v0, $v0, -0x3A28
    ctx->r2 = ADD32(ctx->r2, -0X3A28);
    // 0x801DD588: sb          $t0, 0x60($s0)
    MEM_B(0X60, ctx->r16) = ctx->r8;
    // 0x801DD58C: andi        $t9, $t0, 0xFF
    ctx->r25 = ctx->r8 & 0XFF;
    // 0x801DD590: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801DD594: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x801DD598: sw          $t1, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r9;
    // 0x801DD59C: lbu         $a1, 0x60($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X60);
    // 0x801DD5A0: jal         0x801DD5C0
    // 0x801DD5A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801DD5C0_5994D0(rdram, ctx);
        goto after_0;
    // 0x801DD5A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x801DD5A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801DD5AC:
    // 0x801DD5AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801DD5B0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801DD5B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801DD5B8: jr          $ra
    // 0x801DD5BC: nop

    TRACE_RETURN()
    return;
    // 0x801DD5BC: nop

;}
RECOMP_FUNC void func_801F0DA8_5ACCB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F0DA8: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x801F0DAC: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x801F0DB0: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x801F0DB4: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x801F0DB8: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x801F0DBC: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x801F0DC0: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x801F0DC4: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x801F0DC8: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x801F0DCC: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x801F0DD0: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x801F0DD4: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x801F0DD8: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x801F0DDC: or          $s5, $a1, $zero
    ctx->r21 = ctx->r5 | 0;
    // 0x801F0DE0: or          $s6, $a3, $zero
    ctx->r22 = ctx->r7 | 0;
    // 0x801F0DE4: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x801F0DE8: beq         $t6, $zero, L_801F0ED0
    if (ctx->r14 == 0) {
        // 0x801F0DEC: lw          $s4, 0x18($a1)
        ctx->r20 = MEM_W(ctx->r5, 0X18);
            goto L_801F0ED0;
    }
    // 0x801F0DEC: lw          $s4, 0x18($a1)
    ctx->r20 = MEM_W(ctx->r5, 0X18);
    // 0x801F0DF0: lui         $fp, 0x8021
    ctx->r30 = S32(0X8021 << 16);
    // 0x801F0DF4: lui         $s7, 0x8020
    ctx->r23 = S32(0X8020 << 16);
    // 0x801F0DF8: addiu       $s7, $s7, 0x4E00
    ctx->r23 = ADD32(ctx->r23, 0X4E00);
    // 0x801F0DFC: addiu       $fp, $fp, -0x2DE0
    ctx->r30 = ADD32(ctx->r30, -0X2DE0);
    // 0x801F0E00: lbu         $t7, 0x90($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X90);
L_801F0E04:
    // 0x801F0E04: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801F0E08: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x801F0E0C: bne         $t7, $zero, L_801F0EC0
    if (ctx->r15 != 0) {
        // 0x801F0E10: addiu       $a2, $zero, 0x2
        ctx->r6 = ADD32(0, 0X2);
            goto L_801F0EC0;
    }
    // 0x801F0E10: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x801F0E14: addiu       $s2, $s3, 0xA0
    ctx->r18 = ADD32(ctx->r19, 0XA0);
    // 0x801F0E18: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x801F0E1C: jal         0x801EE750
    // 0x801F0E20: addiu       $s0, $s3, 0x9C
    ctx->r16 = ADD32(ctx->r19, 0X9C);
    func_801EE750_5AA660(rdram, ctx);
        goto after_0;
    // 0x801F0E20: addiu       $s0, $s3, 0x9C
    ctx->r16 = ADD32(ctx->r19, 0X9C);
    after_0:
    // 0x801F0E24: lbu         $t8, 0x90($s6)
    ctx->r24 = MEM_BU(ctx->r22, 0X90);
    // 0x801F0E28: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x801F0E2C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x801F0E30: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x801F0E34: addu        $t0, $fp, $t9
    ctx->r8 = ADD32(ctx->r30, ctx->r25);
    // 0x801F0E38: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x801F0E3C: jal         0x801EE25C
    // 0x801F0E40: sw          $t1, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r9;
    func_801EE25C_5AA16C(rdram, ctx);
        goto after_1;
    // 0x801F0E40: sw          $t1, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r9;
    after_1:
    // 0x801F0E44: lbu         $t2, 0x90($s1)
    ctx->r10 = MEM_BU(ctx->r17, 0X90);
    // 0x801F0E48: sw          $s5, 0x8C($s1)
    MEM_W(0X8C, ctx->r17) = ctx->r21;
    // 0x801F0E4C: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x801F0E50: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x801F0E54: sb          $t3, 0x90($s1)
    MEM_B(0X90, ctx->r17) = ctx->r11;
    // 0x801F0E58: sb          $t4, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r12;
    // 0x801F0E5C: lui         $t5, 0x8020
    ctx->r13 = S32(0X8020 << 16);
    // 0x801F0E60: lbu         $t5, 0x4EA8($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X4EA8);
    // 0x801F0E64: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x801F0E68: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x801F0E6C: sb          $t5, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r13;
    // 0x801F0E70: lbu         $t6, 0x4EAC($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X4EAC);
    // 0x801F0E74: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801F0E78: addiu       $a2, $a2, 0x49C0
    ctx->r6 = ADD32(ctx->r6, 0X49C0);
    // 0x801F0E7C: sb          $t6, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r14;
    // 0x801F0E80: lbu         $t7, 0x4EB0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X4EB0);
    // 0x801F0E84: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801F0E88: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x801F0E8C: sb          $t7, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r15;
    // 0x801F0E90: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801F0E94: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801F0E98: lbu         $t8, 0x1($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X1);
    // 0x801F0E9C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801F0EA0: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x801F0EA4: lbu         $t9, 0x2($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X2);
    // 0x801F0EA8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x801F0EAC: lbu         $t0, 0x3($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X3);
    // 0x801F0EB0: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x801F0EB4: lbu         $t1, 0x0($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X0);
    // 0x801F0EB8: jal         0x801DC554
    // 0x801F0EBC: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    func_801DC554_598464(rdram, ctx);
        goto after_2;
    // 0x801F0EBC: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    after_2:
L_801F0EC0:
    // 0x801F0EC0: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x801F0EC4: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
    // 0x801F0EC8: bnel        $t2, $zero, L_801F0E04
    if (ctx->r10 != 0) {
        // 0x801F0ECC: lbu         $t7, 0x90($s1)
        ctx->r15 = MEM_BU(ctx->r17, 0X90);
            goto L_801F0E04;
    }
    goto skip_0;
    // 0x801F0ECC: lbu         $t7, 0x90($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X90);
    skip_0:
L_801F0ED0:
    // 0x801F0ED0: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x801F0ED4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x801F0ED8: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x801F0EDC: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x801F0EE0: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x801F0EE4: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x801F0EE8: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x801F0EEC: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x801F0EF0: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x801F0EF4: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x801F0EF8: jr          $ra
    // 0x801F0EFC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x801F0EFC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_801D8F94_594EA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D8F94: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801D8F98: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x801D8F9C: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x801D8FA0: lw          $s0, -0x39FC($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X39FC);
    // 0x801D8FA4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801D8FA8: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x801D8FAC: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x801D8FB0: lbu         $v0, 0xCC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XCC);
    // 0x801D8FB4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801D8FB8: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x801D8FBC: bne         $at, $zero, L_801D8FDC
    if (ctx->r1 != 0) {
        // 0x801D8FC0: slti        $at, $v0, 0xC
        ctx->r1 = SIGNED(ctx->r2) < 0XC ? 1 : 0;
            goto L_801D8FDC;
    }
    // 0x801D8FC0: slti        $at, $v0, 0xC
    ctx->r1 = SIGNED(ctx->r2) < 0XC ? 1 : 0;
    // 0x801D8FC4: beq         $at, $zero, L_801D8FDC
    if (ctx->r1 == 0) {
        // 0x801D8FC8: lui         $t6, 0x800C
        ctx->r14 = S32(0X800C << 16);
            goto L_801D8FDC;
    }
    // 0x801D8FC8: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x801D8FCC: lbu         $t6, 0x7AE0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X7AE0);
    // 0x801D8FD0: andi        $t7, $t6, 0x3
    ctx->r15 = ctx->r14 & 0X3;
    // 0x801D8FD4: beql        $t7, $zero, L_801D8FEC
    if (ctx->r15 == 0) {
        // 0x801D8FD8: lhu         $v1, 0xE2($s1)
        ctx->r3 = MEM_HU(ctx->r17, 0XE2);
            goto L_801D8FEC;
    }
    goto skip_0;
    // 0x801D8FD8: lhu         $v1, 0xE2($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0XE2);
    skip_0:
L_801D8FDC:
    // 0x801D8FDC: lhu         $t8, 0x94($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X94);
    // 0x801D8FE0: b           L_801D90C4
    // 0x801D8FE4: sh          $t8, 0xE2($s1)
    MEM_H(0XE2, ctx->r17) = ctx->r24;
        goto L_801D90C4;
    // 0x801D8FE4: sh          $t8, 0xE2($s1)
    MEM_H(0XE2, ctx->r17) = ctx->r24;
    // 0x801D8FE8: lhu         $v1, 0xE2($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0XE2);
L_801D8FEC:
    // 0x801D8FEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D8FF0: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x801D8FF4: andi        $t9, $v1, 0x400
    ctx->r25 = ctx->r3 & 0X400;
    // 0x801D8FF8: bne         $t9, $zero, L_801D9030
    if (ctx->r25 != 0) {
        // 0x801D8FFC: addiu       $t1, $sp, 0x3C
        ctx->r9 = ADD32(ctx->r29, 0X3C);
            goto L_801D9030;
    }
    // 0x801D8FFC: addiu       $t1, $sp, 0x3C
    ctx->r9 = ADD32(ctx->r29, 0X3C);
    // 0x801D9000: lw          $a1, 0x0($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X0);
    // 0x801D9004: lw          $a2, 0x4($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X4);
    // 0x801D9008: lw          $a3, 0x8($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X8);
    // 0x801D900C: addiu       $t2, $sp, 0x38
    ctx->r10 = ADD32(ctx->r29, 0X38);
    // 0x801D9010: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x801D9014: jal         0x801CF564
    // 0x801D9018: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    func_801CF564_58B474(rdram, ctx);
        goto after_0;
    // 0x801D9018: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_0:
    // 0x801D901C: ori         $t3, $v0, 0x400
    ctx->r11 = ctx->r2 | 0X400;
    // 0x801D9020: sh          $t3, 0xE2($s1)
    MEM_H(0XE2, ctx->r17) = ctx->r11;
    // 0x801D9024: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x801D9028: lw          $s0, -0x39FC($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X39FC);
    // 0x801D902C: andi        $v1, $t3, 0xFFFF
    ctx->r3 = ctx->r11 & 0XFFFF;
L_801D9030:
    // 0x801D9030: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801D9034: lw          $a0, -0x39EC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39EC);
    // 0x801D9038: lw          $a1, 0x5C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X5C);
    // 0x801D903C: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    // 0x801D9040: andi        $t4, $a3, 0x3FF
    ctx->r12 = ctx->r7 & 0X3FF;
    // 0x801D9044: or          $a3, $t4, $zero
    ctx->r7 = ctx->r12 | 0;
    // 0x801D9048: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801D904C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D9050: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x801D9054: jal         0x8001DB04
    // 0x801D9058: addiu       $a1, $a1, 0x3C
    ctx->r5 = ADD32(ctx->r5, 0X3C);
    func_8001DB04_1E704(rdram, ctx);
        goto after_1;
    // 0x801D9058: addiu       $a1, $a1, 0x3C
    ctx->r5 = ADD32(ctx->r5, 0X3C);
    after_1:
    // 0x801D905C: lui         $t5, 0x8020
    ctx->r13 = S32(0X8020 << 16);
    // 0x801D9060: lw          $t5, -0x39FC($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X39FC);
    // 0x801D9064: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801D9068: lw          $a0, -0x39F4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39F4);
    // 0x801D906C: lhu         $t6, 0xE2($s1)
    ctx->r14 = MEM_HU(ctx->r17, 0XE2);
    // 0x801D9070: lw          $a1, 0x5C($t5)
    ctx->r5 = MEM_W(ctx->r13, 0X5C);
    // 0x801D9074: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801D9078: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D907C: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x801D9080: andi        $a3, $t6, 0x3FF
    ctx->r7 = ctx->r14 & 0X3FF;
    // 0x801D9084: jal         0x8001DB04
    // 0x801D9088: addiu       $a1, $a1, 0x3C
    ctx->r5 = ADD32(ctx->r5, 0X3C);
    func_8001DB04_1E704(rdram, ctx);
        goto after_2;
    // 0x801D9088: addiu       $a1, $a1, 0x3C
    ctx->r5 = ADD32(ctx->r5, 0X3C);
    after_2:
    // 0x801D908C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801D9090: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801D9094: lw          $a1, -0x39FC($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X39FC);
    // 0x801D9098: lw          $a0, -0x39E4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39E4);
    // 0x801D909C: lhu         $t8, 0xE2($s1)
    ctx->r24 = MEM_HU(ctx->r17, 0XE2);
    // 0x801D90A0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801D90A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D90A8: addiu       $a1, $a1, 0x84
    ctx->r5 = ADD32(ctx->r5, 0X84);
    // 0x801D90AC: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x801D90B0: jal         0x8001DB04
    // 0x801D90B4: andi        $a3, $t8, 0x3FF
    ctx->r7 = ctx->r24 & 0X3FF;
    func_8001DB04_1E704(rdram, ctx);
        goto after_3;
    // 0x801D90B4: andi        $a3, $t8, 0x3FF
    ctx->r7 = ctx->r24 & 0X3FF;
    after_3:
    // 0x801D90B8: lhu         $t0, 0xE2($s1)
    ctx->r8 = MEM_HU(ctx->r17, 0XE2);
    // 0x801D90BC: ori         $t1, $t0, 0x8000
    ctx->r9 = ctx->r8 | 0X8000;
    // 0x801D90C0: sh          $t1, 0xE2($s1)
    MEM_H(0XE2, ctx->r17) = ctx->r9;
L_801D90C4:
    // 0x801D90C4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801D90C8: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x801D90CC: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x801D90D0: jr          $ra
    // 0x801D90D4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x801D90D4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_801DB330_597240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DB330: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801DB334: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x801DB338: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DB33C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DB340: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x801DB344: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x801DB348: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801DB34C: jal         0x801CF51C
    // 0x801DB350: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    func_801CF51C_58B42C(rdram, ctx);
        goto after_0;
    // 0x801DB350: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x801DB354: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x801DB358: lhu         $t6, 0x2A($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X2A);
    // 0x801DB35C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DB360: lhu         $t9, 0x94($t7)
    ctx->r25 = MEM_HU(ctx->r15, 0X94);
    // 0x801DB364: addiu       $t5, $zero, 0x400
    ctx->r13 = ADD32(0, 0X400);
    // 0x801DB368: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DB36C: subu        $t1, $v0, $t9
    ctx->r9 = SUB32(ctx->r2, ctx->r25);
    // 0x801DB370: andi        $t2, $t1, 0x3FF
    ctx->r10 = ctx->r9 & 0X3FF;
    // 0x801DB374: sll         $t3, $t2, 16
    ctx->r11 = S32(ctx->r10 << 16);
    // 0x801DB378: sra         $t4, $t3, 16
    ctx->r12 = S32(SIGNED(ctx->r11) >> 16);
    // 0x801DB37C: slti        $at, $t4, 0x201
    ctx->r1 = SIGNED(ctx->r12) < 0X201 ? 1 : 0;
    // 0x801DB380: bne         $at, $zero, L_801DB394
    if (ctx->r1 != 0) {
        // 0x801DB384: or          $v1, $t4, $zero
        ctx->r3 = ctx->r12 | 0;
            goto L_801DB394;
    }
    // 0x801DB384: or          $v1, $t4, $zero
    ctx->r3 = ctx->r12 | 0;
    // 0x801DB388: subu        $v1, $t5, $t4
    ctx->r3 = SUB32(ctx->r13, ctx->r12);
    // 0x801DB38C: sll         $t7, $v1, 16
    ctx->r15 = S32(ctx->r3 << 16);
    // 0x801DB390: sra         $v1, $t7, 16
    ctx->r3 = S32(SIGNED(ctx->r15) >> 16);
L_801DB394:
    // 0x801DB394: slt         $v0, $t6, $v1
    ctx->r2 = SIGNED(ctx->r14) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x801DB398: jr          $ra
    // 0x801DB39C: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    TRACE_RETURN()
    return;
    // 0x801DB39C: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
;}
RECOMP_FUNC void func_801FB9AC_5B78BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FB9AC: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x801FB9B0: mtc1        $at, $f15
    ctx->f_odd[(15 - 1) * 2] = ctx->r1;
    // 0x801FB9B4: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x801FB9B8: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    // 0x801FB9BC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801FB9C0: c.lt.d      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.d < ctx->f12.d;
    // 0x801FB9C4: addiu       $v1, $zero, 0x18
    ctx->r3 = ADD32(0, 0X18);
    // 0x801FB9C8: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    // 0x801FB9CC: addiu       $a2, $zero, 0x2F
    ctx->r6 = ADD32(0, 0X2F);
    // 0x801FB9D0: bc1f        L_801FB9E4
    if (!c1cs) {
        // 0x801FB9D4: addiu       $t0, $zero, 0x2D
        ctx->r8 = ADD32(0, 0X2D);
            goto L_801FB9E4;
    }
    // 0x801FB9D4: addiu       $t0, $zero, 0x2D
    ctx->r8 = ADD32(0, 0X2D);
    // 0x801FB9D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801FB9DC: b           L_801FBA10
    // 0x801FB9E0: div.d       $f12, $f14, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.d); NAN_CHECK(ctx->f12.d); 
    ctx->f12.d = DIV_D(ctx->f14.d, ctx->f12.d);
        goto L_801FBA10;
    // 0x801FB9E0: div.d       $f12, $f14, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.d); NAN_CHECK(ctx->f12.d); 
    ctx->f12.d = DIV_D(ctx->f14.d, ctx->f12.d);
L_801FB9E4:
    // 0x801FB9E4: lui         $at, 0xBFF0
    ctx->r1 = S32(0XBFF0 << 16);
    // 0x801FB9E8: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x801FB9EC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801FB9F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801FB9F4: c.lt.d      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.d < ctx->f4.d;
    // 0x801FB9F8: nop

    // 0x801FB9FC: bc1f        L_801FBA10
    if (!c1cs) {
        // 0x801FBA00: nop
    
            goto L_801FBA10;
    }
    // 0x801FBA00: nop

    // 0x801FBA04: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x801FBA08: b           L_801FBA10
    // 0x801FBA0C: div.d       $f12, $f14, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.d); NAN_CHECK(ctx->f12.d); 
    ctx->f12.d = DIV_D(ctx->f14.d, ctx->f12.d);
        goto L_801FBA10;
    // 0x801FBA0C: div.d       $f12, $f14, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.d); NAN_CHECK(ctx->f12.d); 
    ctx->f12.d = DIV_D(ctx->f14.d, ctx->f12.d);
L_801FBA10:
    // 0x801FBA10: addiu       $t2, $zero, 0x2B
    ctx->r10 = ADD32(0, 0X2B);
L_801FBA14:
    // 0x801FBA14: multu       $v1, $v1
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801FBA18: mtc1        $a0, $f18
    ctx->f18.u32l = ctx->r4;
    // 0x801FBA1C: addiu       $a1, $v1, -0x1
    ctx->r5 = ADD32(ctx->r3, -0X1);
    // 0x801FBA20: addiu       $a3, $v1, -0x2
    ctx->r7 = ADD32(ctx->r3, -0X2);
    // 0x801FBA24: cvt.d.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.d = CVT_D_W(ctx->f18.u32l);
    // 0x801FBA28: addiu       $t1, $v1, -0x3
    ctx->r9 = ADD32(ctx->r3, -0X3);
    // 0x801FBA2C: addiu       $v1, $v1, -0x4
    ctx->r3 = ADD32(ctx->r3, -0X4);
    // 0x801FBA30: addiu       $a0, $a0, -0x8
    ctx->r4 = ADD32(ctx->r4, -0X8);
    // 0x801FBA34: mflo        $t6
    ctx->r14 = lo;
    // 0x801FBA38: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x801FBA3C: nop

    // 0x801FBA40: multu       $a1, $a1
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801FBA44: cvt.d.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
    // 0x801FBA48: add.d       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f2.d); 
    ctx->f6.d = ctx->f4.d + ctx->f2.d;
    // 0x801FBA4C: mul.d       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f12.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f12.d);
    // 0x801FBA50: mflo        $t7
    ctx->r15 = lo;
    // 0x801FBA54: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x801FBA58: nop

    // 0x801FBA5C: multu       $a3, $a3
    result = U64(U32(ctx->r7)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801FBA60: mul.d       $f16, $f10, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f12.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f12.d);
    // 0x801FBA64: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x801FBA68: mflo        $t8
    ctx->r24 = lo;
    // 0x801FBA6C: div.d       $f2, $f16, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f6.d); 
    ctx->f2.d = DIV_D(ctx->f16.d, ctx->f6.d);
    // 0x801FBA70: mul.d       $f18, $f10, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f12.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f12.d);
    // 0x801FBA74: mtc1        $a2, $f16
    ctx->f16.u32l = ctx->r6;
    // 0x801FBA78: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x801FBA7C: multu       $t1, $t1
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801FBA80: addiu       $a2, $a2, -0x8
    ctx->r6 = ADD32(ctx->r6, -0X8);
    // 0x801FBA84: cvt.d.w     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    ctx->f6.d = CVT_D_W(ctx->f16.u32l);
    // 0x801FBA88: mul.d       $f4, $f18, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f12.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f12.d);
    // 0x801FBA8C: mflo        $t9
    ctx->r25 = lo;
    // 0x801FBA90: cvt.d.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.d = CVT_D_W(ctx->f10.u32l);
    // 0x801FBA94: mul.d       $f16, $f18, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f12.d); 
    ctx->f16.d = MUL_D(ctx->f18.d, ctx->f12.d);
    // 0x801FBA98: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x801FBA9C: add.d       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = ctx->f6.d + ctx->f2.d;
    // 0x801FBAA0: mul.d       $f6, $f16, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f12.d); 
    ctx->f6.d = MUL_D(ctx->f16.d, ctx->f12.d);
    // 0x801FBAA4: div.d       $f2, $f4, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f2.d = DIV_D(ctx->f4.d, ctx->f8.d);
    // 0x801FBAA8: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x801FBAAC: addiu       $t0, $t0, -0x8
    ctx->r8 = ADD32(ctx->r8, -0X8);
    // 0x801FBAB0: cvt.d.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.d = CVT_D_W(ctx->f4.u32l);
    // 0x801FBAB4: cvt.d.w     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.d = CVT_D_W(ctx->f18.u32l);
    // 0x801FBAB8: mul.d       $f4, $f16, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f12.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f12.d);
    // 0x801FBABC: add.d       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f2.d); 
    ctx->f10.d = ctx->f8.d + ctx->f2.d;
    // 0x801FBAC0: mul.d       $f8, $f4, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f12.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f12.d);
    // 0x801FBAC4: div.d       $f2, $f6, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f2.d = DIV_D(ctx->f6.d, ctx->f10.d);
    // 0x801FBAC8: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x801FBACC: addiu       $t2, $t2, -0x8
    ctx->r10 = ADD32(ctx->r10, -0X8);
    // 0x801FBAD0: cvt.d.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.d = CVT_D_W(ctx->f6.u32l);
    // 0x801FBAD4: add.d       $f18, $f10, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f2.d); 
    ctx->f18.d = ctx->f10.d + ctx->f2.d;
    // 0x801FBAD8: bne         $v1, $zero, L_801FBA14
    if (ctx->r3 != 0) {
        // 0x801FBADC: div.d       $f2, $f8, $f18
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f18.d); 
    ctx->f2.d = DIV_D(ctx->f8.d, ctx->f18.d);
            goto L_801FBA14;
    }
    // 0x801FBADC: div.d       $f2, $f8, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f18.d); 
    ctx->f2.d = DIV_D(ctx->f8.d, ctx->f18.d);
    // 0x801FBAE0: blez        $v0, L_801FBB00
    if (SIGNED(ctx->r2) <= 0) {
        // 0x801FBAE4: nop
    
            goto L_801FBB00;
    }
    // 0x801FBAE4: nop

    // 0x801FBAE8: add.d       $f4, $f14, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = ctx->f14.d + ctx->f2.d;
    // 0x801FBAEC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801FBAF0: ldc1        $f16, -0x37D8($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0X37D8);
    // 0x801FBAF4: div.d       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = DIV_D(ctx->f12.d, ctx->f4.d);
    // 0x801FBAF8: jr          $ra
    // 0x801FBAFC: sub.d       $f0, $f16, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f6.d); 
    ctx->f0.d = ctx->f16.d - ctx->f6.d;
    TRACE_RETURN()
    return;
    // 0x801FBAFC: sub.d       $f0, $f16, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f6.d); 
    ctx->f0.d = ctx->f16.d - ctx->f6.d;
L_801FBB00:
    // 0x801FBB00: bgezl       $v0, L_801FBB24
    if (SIGNED(ctx->r2) >= 0) {
        // 0x801FBB04: add.d       $f4, $f14, $f2
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = ctx->f14.d + ctx->f2.d;
            goto L_801FBB24;
    }
    goto skip_0;
    // 0x801FBB04: add.d       $f4, $f14, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = ctx->f14.d + ctx->f2.d;
    skip_0:
    // 0x801FBB08: add.d       $f8, $f14, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = ctx->f14.d + ctx->f2.d;
    // 0x801FBB0C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801FBB10: ldc1        $f10, -0x37D0($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X37D0);
    // 0x801FBB14: div.d       $f18, $f12, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f8.d); 
    ctx->f18.d = DIV_D(ctx->f12.d, ctx->f8.d);
    // 0x801FBB18: jr          $ra
    // 0x801FBB1C: sub.d       $f0, $f10, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f0.d = ctx->f10.d - ctx->f18.d;
    TRACE_RETURN()
    return;
    // 0x801FBB1C: sub.d       $f0, $f10, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f0.d = ctx->f10.d - ctx->f18.d;
    // 0x801FBB20: add.d       $f4, $f14, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = ctx->f14.d + ctx->f2.d;
L_801FBB24:
    // 0x801FBB24: div.d       $f0, $f12, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f4.d); 
    ctx->f0.d = DIV_D(ctx->f12.d, ctx->f4.d);
    // 0x801FBB28: jr          $ra
    // 0x801FBB2C: nop

    TRACE_RETURN()
    return;
    // 0x801FBB2C: nop

;}
RECOMP_FUNC void func_801F6170_5B2080(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F6170: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F6174: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F6178: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F617C: addiu       $a1, $zero, 0x1B
    ctx->r5 = ADD32(0, 0X1B);
    // 0x801F6180: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x801F6184: jal         0x801F50A4
    // 0x801F6188: lui         $a3, 0x40E0
    ctx->r7 = S32(0X40E0 << 16);
    func_801F50A4_5B0FB4(rdram, ctx);
        goto after_0;
    // 0x801F6188: lui         $a3, 0x40E0
    ctx->r7 = S32(0X40E0 << 16);
    after_0:
    // 0x801F618C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F6190: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F6194: jr          $ra
    // 0x801F6198: nop

    TRACE_RETURN()
    return;
    // 0x801F6198: nop

;}
RECOMP_FUNC void func_801D65FC_59250C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D65FC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801D6600: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801D6604: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x801D6608: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x801D660C: lw          $s1, 0x2C($a1)
    ctx->r17 = MEM_W(ctx->r5, 0X2C);
    // 0x801D6610: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D6614: addiu       $v0, $v0, -0x2E28
    ctx->r2 = ADD32(ctx->r2, -0X2E28);
    // 0x801D6618: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x801D661C: lhu         $t7, 0x0($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X0);
    // 0x801D6620: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x801D6624: and         $t6, $s1, $at
    ctx->r14 = ctx->r17 & ctx->r1;
    // 0x801D6628: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x801D662C: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x801D6630: sh          $t8, 0x6A($a0)
    MEM_H(0X6A, ctx->r4) = ctx->r24;
    // 0x801D6634: lhu         $t0, 0x0($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X0);
    // 0x801D6638: lhu         $t9, 0x66($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X66);
    // 0x801D663C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801D6640: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    // 0x801D6644: subu        $t1, $t9, $t0
    ctx->r9 = SUB32(ctx->r25, ctx->r8);
    // 0x801D6648: andi        $t2, $t1, 0x8000
    ctx->r10 = ctx->r9 & 0X8000;
    // 0x801D664C: beq         $t2, $zero, L_801D6664
    if (ctx->r10 == 0) {
        // 0x801D6650: lui         $v0, 0x8020
        ctx->r2 = S32(0X8020 << 16);
            goto L_801D6664;
    }
    // 0x801D6650: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x801D6654: lhu         $t4, 0xCC($a0)
    ctx->r12 = MEM_HU(ctx->r4, 0XCC);
    // 0x801D6658: addu        $t5, $t8, $t4
    ctx->r13 = ADD32(ctx->r24, ctx->r12);
    // 0x801D665C: b           L_801D6674
    // 0x801D6660: sh          $t5, 0x6A($a0)
    MEM_H(0X6A, ctx->r4) = ctx->r13;
        goto L_801D6674;
    // 0x801D6660: sh          $t5, 0x6A($a0)
    MEM_H(0X6A, ctx->r4) = ctx->r13;
L_801D6664:
    // 0x801D6664: lhu         $t6, 0x6A($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X6A);
    // 0x801D6668: lhu         $t7, 0xCC($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0XCC);
    // 0x801D666C: subu        $t8, $t6, $t7
    ctx->r24 = SUB32(ctx->r14, ctx->r15);
    // 0x801D6670: sh          $t8, 0x6A($s0)
    MEM_H(0X6A, ctx->r16) = ctx->r24;
L_801D6674:
    // 0x801D6674: lw          $v0, -0x39FC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39FC);
    // 0x801D6678: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D667C: ldc1        $f4, -0x5348($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X5348);
    // 0x801D6680: lwc1        $f0, 0x70($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X70);
    // 0x801D6684: lwc1        $f2, 0x68($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X68);
    // 0x801D6688: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D668C: mul.s       $f6, $f0, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x801D6690: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x801D6694: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801D6698: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x801D669C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801D66A0: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x801D66A4: c.lt.d      $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.d < ctx->f16.d;
    // 0x801D66A8: nop

    // 0x801D66AC: bc1fl       L_801D66C0
    if (!c1cs) {
        // 0x801D66B0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801D66C0;
    }
    goto skip_0;
    // 0x801D66B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x801D66B4: jal         0x801D7B74
    // 0x801D66B8: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    func_801D7B74_593A84(rdram, ctx);
        goto after_0;
    // 0x801D66B8: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    after_0:
    // 0x801D66BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_801D66C0:
    // 0x801D66C0: jal         0x801D7F20
    // 0x801D66C4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_801D7F20_593E30(rdram, ctx);
        goto after_1;
    // 0x801D66C4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_1:
    // 0x801D66C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D66CC: jal         0x801D5DC0
    // 0x801D66D0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_801D5DC0_591CD0(rdram, ctx);
        goto after_2;
    // 0x801D66D0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_2:
    // 0x801D66D4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D66D8: lwc1        $f6, -0x2E24($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X2E24);
    // 0x801D66DC: lwc1        $f18, 0x74($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X74);
    // 0x801D66E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D66E4: c.lt.s      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.fl < ctx->f6.fl;
    // 0x801D66E8: nop

    // 0x801D66EC: bc1fl       L_801D6700
    if (!c1cs) {
        // 0x801D66F0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801D6700;
    }
    goto skip_1;
    // 0x801D66F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x801D66F4: jal         0x801D5ECC
    // 0x801D66F8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_801D5ECC_591DDC(rdram, ctx);
        goto after_3;
    // 0x801D66F8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_3:
    // 0x801D66FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801D6700:
    // 0x801D6700: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x801D6704: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x801D6708: jr          $ra
    // 0x801D670C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x801D670C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_801EB5DC_5A74EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EB5DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801EB5E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801EB5E4: jal         0x801EB6BC
    // 0x801EB5E8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801EB6BC_5A75CC(rdram, ctx);
        goto after_0;
    // 0x801EB5E8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801EB5EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801EB5F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801EB5F4: jr          $ra
    // 0x801EB5F8: nop

    TRACE_RETURN()
    return;
    // 0x801EB5F8: nop

;}
RECOMP_FUNC void func_801F6D68_5B2C78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F6D68: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801F6D6C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F6D70: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801F6D74: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F6D78: jal         0x801E7F50
    // 0x801F6D7C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_801E7F50_5A3E60(rdram, ctx);
        goto after_0;
    // 0x801F6D7C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F6D80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F6D84: jal         0x801F7140
    // 0x801F6D88: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    func_801F7140_5B3050(rdram, ctx);
        goto after_1;
    // 0x801F6D88: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    after_1:
    // 0x801F6D8C: lbu         $t6, 0x90($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X90);
    // 0x801F6D90: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x801F6D94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F6D98: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x801F6D9C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x801F6DA0: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x801F6DA4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x801F6DA8: lhu         $t8, 0x7DB2($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X7DB2);
    // 0x801F6DAC: andi        $t9, $t8, 0x4000
    ctx->r25 = ctx->r24 & 0X4000;
    // 0x801F6DB0: beql        $t9, $zero, L_801F6DC4
    if (ctx->r25 == 0) {
        // 0x801F6DB4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801F6DC4;
    }
    goto skip_0;
    // 0x801F6DB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x801F6DB8: jal         0x801DACDC
    // 0x801F6DBC: addiu       $a1, $zero, 0xB2
    ctx->r5 = ADD32(0, 0XB2);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_2;
    // 0x801F6DBC: addiu       $a1, $zero, 0xB2
    ctx->r5 = ADD32(0, 0XB2);
    after_2:
    // 0x801F6DC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_801F6DC4:
    // 0x801F6DC4: jal         0x801F70B0
    // 0x801F6DC8: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    func_801F70B0_5B2FC0(rdram, ctx);
        goto after_3;
    // 0x801F6DC8: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    after_3:
    // 0x801F6DCC: beq         $v0, $zero, L_801F6DDC
    if (ctx->r2 == 0) {
        // 0x801F6DD0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801F6DDC;
    }
    // 0x801F6DD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F6DD4: jal         0x801DACDC
    // 0x801F6DD8: addiu       $a1, $zero, 0xB5
    ctx->r5 = ADD32(0, 0XB5);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_4;
    // 0x801F6DD8: addiu       $a1, $zero, 0xB5
    ctx->r5 = ADD32(0, 0XB5);
    after_4:
L_801F6DDC:
    // 0x801F6DDC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801F6DE0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801F6DE4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801F6DE8: jr          $ra
    // 0x801F6DEC: nop

    TRACE_RETURN()
    return;
    // 0x801F6DEC: nop

;}
RECOMP_FUNC void func_801E2EF0_59EE00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E2EF0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E2EF4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801E2EF8: lw          $t7, 0x5C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X5C);
    // 0x801E2EFC: addiu       $t6, $zero, 0x14
    ctx->r14 = ADD32(0, 0X14);
    // 0x801E2F00: sb          $t6, 0x4C($a0)
    MEM_B(0X4C, ctx->r4) = ctx->r14;
    // 0x801E2F04: swc1        $f0, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->f0.u32l;
    // 0x801E2F08: swc1        $f0, 0xE4($a0)
    MEM_W(0XE4, ctx->r4) = ctx->f0.u32l;
    // 0x801E2F0C: jr          $ra
    // 0x801E2F10: sb          $zero, 0x2C($t7)
    MEM_B(0X2C, ctx->r15) = 0;
    TRACE_RETURN()
    return;
    // 0x801E2F10: sb          $zero, 0x2C($t7)
    MEM_B(0X2C, ctx->r15) = 0;
;}
RECOMP_FUNC void func_801F728C_5B319C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F728C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801F7290: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801F7294: sw          $s1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r17;
    // 0x801F7298: sw          $s0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r16;
    // 0x801F729C: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x801F72A0: jal         0x80004240
    // 0x801F72A4: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    func_80004240_4E40(rdram, ctx);
        goto after_0;
    // 0x801F72A4: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F72A8: jal         0x8003FF50
    // 0x801F72AC: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    osViSetSpecialFeatures_recomp(rdram, ctx);
        goto after_1;
    // 0x801F72AC: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    after_1:
    // 0x801F72B0: jal         0x801DC630
    // 0x801F72B4: nop

    func_801DC630_598540(rdram, ctx);
        goto after_2;
    // 0x801F72B4: nop

    after_2:
    // 0x801F72B8: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    // 0x801F72BC: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x801F72C0: jal         0x8001B6A4
    // 0x801F72C4: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    func_8001B6A4_1C2A4(rdram, ctx);
        goto after_3;
    // 0x801F72C4: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    after_3:
    // 0x801F72C8: jal         0x801F91F0
    // 0x801F72CC: nop

    func_801F91F0_5B5100(rdram, ctx);
        goto after_4;
    // 0x801F72CC: nop

    after_4:
    // 0x801F72D0: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x801F72D4: addiu       $a0, $a0, -0x2FE4
    ctx->r4 = ADD32(ctx->r4, -0X2FE4);
    // 0x801F72D8: jal         0x80034DD8
    // 0x801F72DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034DD8_359D8(rdram, ctx);
        goto after_5;
    // 0x801F72DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x801F72E0: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x801F72E4: addiu       $s0, $s0, -0x3340
    ctx->r16 = ADD32(ctx->r16, -0X3340);
    // 0x801F72E8: addiu       $at, $s0, 0x7FFF
    ctx->r1 = ADD32(ctx->r16, 0X7FFF);
    // 0x801F72EC: jal         0x801F97D4
    // 0x801F72F0: sw          $v0, 0x78ED($at)
    MEM_W(0X78ED, ctx->r1) = ctx->r2;
    func_801F97D4_5B56E4(rdram, ctx);
        goto after_6;
    // 0x801F72F0: sw          $v0, 0x78ED($at)
    MEM_W(0X78ED, ctx->r1) = ctx->r2;
    after_6:
    // 0x801F72F4: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x801F72F8: addiu       $t7, $t7, 0x7D38
    ctx->r15 = ADD32(ctx->r15, 0X7D38);
    // 0x801F72FC: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x801F7300: lw          $t9, 0x4($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X4);
    // 0x801F7304: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801F7308: addiu       $t6, $t6, -0x2D80
    ctx->r14 = ADD32(ctx->r14, -0X2D80);
    // 0x801F730C: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x801F7310: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x801F7314: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x801F7318: lw          $t9, 0xC($t7)
    ctx->r25 = MEM_W(ctx->r15, 0XC);
    // 0x801F731C: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x801F7320: lw          $at, 0x10($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X10);
    // 0x801F7324: sw          $t9, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->r25;
    // 0x801F7328: lw          $t9, 0x14($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X14);
    // 0x801F732C: lui         $s1, 0x800C
    ctx->r17 = S32(0X800C << 16);
    // 0x801F7330: addiu       $s1, $s1, -0x3340
    ctx->r17 = ADD32(ctx->r17, -0X3340);
    // 0x801F7334: sw          $at, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->r1;
    // 0x801F7338: addiu       $at, $s1, 0x7FFF
    ctx->r1 = ADD32(ctx->r17, 0X7FFF);
    // 0x801F733C: sw          $t9, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->r25;
    // 0x801F7340: sb          $zero, 0x2DFB($at)
    MEM_B(0X2DFB, ctx->r1) = 0;
    // 0x801F7344: sh          $zero, 0x2DFD($at)
    MEM_H(0X2DFD, ctx->r1) = 0;
    // 0x801F7348: sh          $zero, 0x2DFF($at)
    MEM_H(0X2DFF, ctx->r1) = 0;
    // 0x801F734C: jal         0x801CBD14
    // 0x801F7350: sh          $zero, 0x2E01($at)
    MEM_H(0X2E01, ctx->r1) = 0;
    func_801CBD14_587C24(rdram, ctx);
        goto after_7;
    // 0x801F7350: sh          $zero, 0x2E01($at)
    MEM_H(0X2E01, ctx->r1) = 0;
    after_7:
    // 0x801F7354: jal         0x801CBCE4
    // 0x801F7358: nop

    func_801CBCE4_587BF4(rdram, ctx);
        goto after_8;
    // 0x801F7358: nop

    after_8:
    // 0x801F735C: jal         0x801F8790
    // 0x801F7360: nop

    func_801F8790_5B46A0(rdram, ctx);
        goto after_9;
    // 0x801F7360: nop

    after_9:
    // 0x801F7364: jal         0x801F87F8
    // 0x801F7368: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_801F87F8_5B4708(rdram, ctx);
        goto after_10;
    // 0x801F7368: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_10:
    // 0x801F736C: jal         0x8020D6BC
    // 0x801F7370: nop

    func_8020D6BC_5C8B8C(rdram, ctx);
        goto after_11;
    // 0x801F7370: nop

    after_11:
    // 0x801F7374: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801F7378: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801F737C: addiu       $at, $s1, 0x7FFF
    ctx->r1 = ADD32(ctx->r17, 0X7FFF);
    // 0x801F7380: addiu       $t0, $zero, 0x80
    ctx->r8 = ADD32(0, 0X80);
    // 0x801F7384: sw          $t0, 0x3055($at)
    MEM_W(0X3055, ctx->r1) = ctx->r8;
    // 0x801F7388: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801F738C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F7390: addiu       $a1, $a1, -0x6614
    ctx->r5 = ADD32(ctx->r5, -0X6614);
    // 0x801F7394: lui         $at, 0x3000
    ctx->r1 = S32(0X3000 << 16);
    // 0x801F7398: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801F739C: lui         $a2, 0x8007
    ctx->r6 = S32(0X8007 << 16);
    // 0x801F73A0: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801F73A4: addiu       $a2, $a2, -0x26E0
    ctx->r6 = ADD32(ctx->r6, -0X26E0);
    // 0x801F73A8: addiu       $a0, $a0, -0x5EB0
    ctx->r4 = ADD32(ctx->r4, -0X5EB0);
    // 0x801F73AC: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801F73B0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801F73B4: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x801F73B8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801F73BC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801F73C0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801F73C4: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x801F73C8: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x801F73CC: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    // 0x801F73D0: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x801F73D4: jal         0x80035854
    // 0x801F73D8: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    func_80035854_36454(rdram, ctx);
        goto after_12;
    // 0x801F73D8: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_12:
    // 0x801F73DC: addiu       $at, $s0, 0x7FFF
    ctx->r1 = ADD32(ctx->r16, 0X7FFF);
    // 0x801F73E0: sw          $v0, 0x78E9($at)
    MEM_W(0X78E9, ctx->r1) = ctx->r2;
    // 0x801F73E4: addiu       $t1, $s1, 0x7FFF
    ctx->r9 = ADD32(ctx->r17, 0X7FFF);
    // 0x801F73E8: lbu         $t1, 0x2DF7($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X2DF7);
    // 0x801F73EC: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x801F73F0: addiu       $t4, $s1, 0x7FFF
    ctx->r12 = ADD32(ctx->r17, 0X7FFF);
    // 0x801F73F4: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x801F73F8: lhu         $t4, 0x2DF9($t4)
    ctx->r12 = MEM_HU(ctx->r12, 0X2DF9);
    // 0x801F73FC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x801F7400: lw          $t3, -0x66F4($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X66F4);
    // 0x801F7404: sll         $t5, $t4, 3
    ctx->r13 = S32(ctx->r12 << 3);
    // 0x801F7408: addu        $t8, $t3, $t5
    ctx->r24 = ADD32(ctx->r11, ctx->r13);
    // 0x801F740C: lhu         $t6, 0x6($t8)
    ctx->r14 = MEM_HU(ctx->r24, 0X6);
    // 0x801F7410: beq         $t6, $zero, L_801F742C
    if (ctx->r14 == 0) {
        // 0x801F7414: lui         $a0, 0x8020
        ctx->r4 = S32(0X8020 << 16);
            goto L_801F742C;
    }
    // 0x801F7414: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801F7418: addiu       $a0, $a0, -0x7B6C
    ctx->r4 = ADD32(ctx->r4, -0X7B6C);
    // 0x801F741C: jal         0x80034DD8
    // 0x801F7420: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034DD8_359D8(rdram, ctx);
        goto after_13;
    // 0x801F7420: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_13:
    // 0x801F7424: addiu       $at, $s0, 0x7FFF
    ctx->r1 = ADD32(ctx->r16, 0X7FFF);
    // 0x801F7428: sw          $v0, 0x78E5($at)
    MEM_W(0X78E5, ctx->r1) = ctx->r2;
L_801F742C:
    // 0x801F742C: jal         0x801F8C4C
    // 0x801F7430: nop

    func_801F8C4C_5B4B5C(rdram, ctx);
        goto after_14;
    // 0x801F7430: nop

    after_14:
    // 0x801F7434: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801F7438: addiu       $a0, $a0, -0x7BA4
    ctx->r4 = ADD32(ctx->r4, -0X7BA4);
    // 0x801F743C: jal         0x80034E68
    // 0x801F7440: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034E68_35A68(rdram, ctx);
        goto after_15;
    // 0x801F7440: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_15:
    // 0x801F7444: addiu       $at, $s0, 0x7FFF
    ctx->r1 = ADD32(ctx->r16, 0X7FFF);
    // 0x801F7448: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801F744C: sw          $v0, 0x78F5($at)
    MEM_W(0X78F5, ctx->r1) = ctx->r2;
    // 0x801F7450: addiu       $a0, $a0, -0x44D0
    ctx->r4 = ADD32(ctx->r4, -0X44D0);
    // 0x801F7454: jal         0x80034DD8
    // 0x801F7458: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034DD8_359D8(rdram, ctx);
        goto after_16;
    // 0x801F7458: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_16:
    // 0x801F745C: addiu       $at, $s0, 0x7FFF
    ctx->r1 = ADD32(ctx->r16, 0X7FFF);
    // 0x801F7460: jal         0x80218E04
    // 0x801F7464: sw          $v0, 0x78F1($at)
    MEM_W(0X78F1, ctx->r1) = ctx->r2;
    func_80218E04_5D42D4(rdram, ctx);
        goto after_17;
    // 0x801F7464: sw          $v0, 0x78F1($at)
    MEM_W(0X78F1, ctx->r1) = ctx->r2;
    after_17:
    // 0x801F7468: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x801F746C: addiu       $a0, $a0, 0x3C50
    ctx->r4 = ADD32(ctx->r4, 0X3C50);
    // 0x801F7470: jal         0x80034DD8
    // 0x801F7474: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034DD8_359D8(rdram, ctx);
        goto after_18;
    // 0x801F7474: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_18:
    // 0x801F7478: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x801F747C: addiu       $v1, $v1, -0x33D0
    ctx->r3 = ADD32(ctx->r3, -0X33D0);
    // 0x801F7480: sw          $v0, 0x90($v1)
    MEM_W(0X90, ctx->r3) = ctx->r2;
    // 0x801F7484: addiu       $at, $s0, 0x7FFF
    ctx->r1 = ADD32(ctx->r16, 0X7FFF);
    // 0x801F7488: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801F748C: sw          $v0, 0x78DD($at)
    MEM_W(0X78DD, ctx->r1) = ctx->r2;
    // 0x801F7490: addiu       $a0, $a0, -0x4A30
    ctx->r4 = ADD32(ctx->r4, -0X4A30);
    // 0x801F7494: jal         0x80034DD8
    // 0x801F7498: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034DD8_359D8(rdram, ctx);
        goto after_19;
    // 0x801F7498: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_19:
    // 0x801F749C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x801F74A0: addiu       $v1, $v1, -0x3A00
    ctx->r3 = ADD32(ctx->r3, -0X3A00);
    // 0x801F74A4: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x801F74A8: addiu       $at, $s0, 0x7FFF
    ctx->r1 = ADD32(ctx->r16, 0X7FFF);
    // 0x801F74AC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x801F74B0: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x801F74B4: sw          $v0, 0x78D9($at)
    MEM_W(0X78D9, ctx->r1) = ctx->r2;
    // 0x801F74B8: sb          $t0, 0x788D($at)
    MEM_B(0X788D, ctx->r1) = ctx->r8;
    // 0x801F74BC: addiu       $a0, $a0, -0x28DC
    ctx->r4 = ADD32(ctx->r4, -0X28DC);
    // 0x801F74C0: jal         0x80034DD8
    // 0x801F74C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034DD8_359D8(rdram, ctx);
        goto after_20;
    // 0x801F74C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_20:
    // 0x801F74C8: addiu       $at, $s0, 0x7FFF
    ctx->r1 = ADD32(ctx->r16, 0X7FFF);
    // 0x801F74CC: sw          $v0, 0x78E1($at)
    MEM_W(0X78E1, ctx->r1) = ctx->r2;
    // 0x801F74D0: jal         0x800369B4
    // 0x801F74D4: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    func_800369B4_375B4(rdram, ctx);
        goto after_21;
    // 0x801F74D4: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    after_21:
    // 0x801F74D8: jal         0x80041770
    // 0x801F74DC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osViBlack_recomp(rdram, ctx);
        goto after_22;
    // 0x801F74DC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_22:
    // 0x801F74E0: addiu       $t1, $zero, 0x14
    ctx->r9 = ADD32(0, 0X14);
    // 0x801F74E4: addiu       $at, $s1, 0x7FFF
    ctx->r1 = ADD32(ctx->r17, 0X7FFF);
    // 0x801F74E8: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F74EC: sh          $t1, 0x2E25($at)
    MEM_H(0X2E25, ctx->r1) = ctx->r9;
    // 0x801F74F0: jal         0x8003521C
    // 0x801F74F4: addiu       $a0, $a0, 0x750C
    ctx->r4 = ADD32(ctx->r4, 0X750C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_23;
    // 0x801F74F4: addiu       $a0, $a0, 0x750C
    ctx->r4 = ADD32(ctx->r4, 0X750C);
    after_23:
    // 0x801F74F8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801F74FC: lw          $s0, 0x3C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X3C);
    // 0x801F7500: lw          $s1, 0x40($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X40);
    // 0x801F7504: jr          $ra
    // 0x801F7508: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x801F7508: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_801CBD14_587C24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CBD14: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x801CBD18: sw          $zero, -0x3A00($at)
    MEM_W(-0X3A00, ctx->r1) = 0;
    // 0x801CBD1C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x801CBD20: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x801CBD24: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801CBD28: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801CBD2C: addiu       $a1, $a1, -0x39E4
    ctx->r5 = ADD32(ctx->r5, -0X39E4);
    // 0x801CBD30: addiu       $a0, $a0, -0x39EC
    ctx->r4 = ADD32(ctx->r4, -0X39EC);
    // 0x801CBD34: addiu       $v1, $v1, -0x39F4
    ctx->r3 = ADD32(ctx->r3, -0X39F4);
    // 0x801CBD38: addiu       $v0, $v0, -0x39FC
    ctx->r2 = ADD32(ctx->r2, -0X39FC);
    // 0x801CBD3C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x801CBD40: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x801CBD44: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x801CBD48: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x801CBD4C: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x801CBD50: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x801CBD54: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x801CBD58: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    // 0x801CBD5C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x801CBD60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CBD64: sw          $zero, -0x39DC($at)
    MEM_W(-0X39DC, ctx->r1) = 0;
    // 0x801CBD68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CBD6C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x801CBD70: jal         0x801DC988
    // 0x801CBD74: sw          $zero, -0x39D8($at)
    MEM_W(-0X39D8, ctx->r1) = 0;
    func_801DC988_598898(rdram, ctx);
        goto after_0;
    // 0x801CBD74: sw          $zero, -0x39D8($at)
    MEM_W(-0X39D8, ctx->r1) = 0;
    after_0:
    // 0x801CBD78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CBD7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CBD80: jr          $ra
    // 0x801CBD84: nop

    TRACE_RETURN()
    return;
    // 0x801CBD84: nop

;}
RECOMP_FUNC void func_801E3278_59F188(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E3278: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E327C: lwc1        $f0, -0x4CA0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4CA0);
    // 0x801E3280: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x801E3284: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801E3288: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x801E328C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E3290: lwc1        $f6, -0x4C9C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X4C9C);
    // 0x801E3294: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x801E3298: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801E329C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E32A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E32A4: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x801E32A8: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x801E32AC: div.s       $f2, $f10, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x801E32B0: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x801E32B4: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x801E32B8: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x801E32BC: jal         0x801E32D4
    // 0x801E32C0: nop

    func_801E32D4_59F1E4(rdram, ctx);
        goto after_0;
    // 0x801E32C0: nop

    after_0:
    // 0x801E32C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E32C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E32CC: jr          $ra
    // 0x801E32D0: nop

    TRACE_RETURN()
    return;
    // 0x801E32D0: nop

;}
RECOMP_FUNC void func_801F5AE0_5B19F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F5AE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F5AE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F5AE8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F5AEC: jal         0x801F5BF0
    // 0x801F5AF0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_801F5BF0_5B1B00(rdram, ctx);
        goto after_0;
    // 0x801F5AF0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_0:
    // 0x801F5AF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F5AF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F5AFC: jr          $ra
    // 0x801F5B00: nop

    TRACE_RETURN()
    return;
    // 0x801F5B00: nop

;}
RECOMP_FUNC void func_801E1210_59D120(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E1210: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801E1214: jr          $ra
    // 0x801E1218: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801E1218: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801E147C_59D38C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E147C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801E1480: jr          $ra
    // 0x801E1484: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801E1484: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801E7E90_5A3DA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E7E90: lbu         $v0, 0x60($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X60);
    // 0x801E7E94: xori        $t6, $v0, 0x3
    ctx->r14 = ctx->r2 ^ 0X3;
    // 0x801E7E98: sltiu       $v0, $t6, 0x1
    ctx->r2 = ctx->r14 < 0X1 ? 1 : 0;
    // 0x801E7E9C: beq         $v0, $zero, L_801E7ED8
    if (ctx->r2 == 0) {
        // 0x801E7EA0: nop
    
            goto L_801E7ED8;
    }
    // 0x801E7EA0: nop

    // 0x801E7EA4: lw          $t7, 0x5C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X5C);
    // 0x801E7EA8: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x801E7EAC: lhu         $v0, 0x86($t7)
    ctx->r2 = MEM_HU(ctx->r15, 0X86);
    // 0x801E7EB0: xor         $t8, $v0, $at
    ctx->r24 = ctx->r2 ^ ctx->r1;
    // 0x801E7EB4: sltiu       $v0, $t8, 0x1
    ctx->r2 = ctx->r24 < 0X1 ? 1 : 0;
    // 0x801E7EB8: beq         $v0, $zero, L_801E7ED8
    if (ctx->r2 == 0) {
        // 0x801E7EBC: nop
    
            goto L_801E7ED8;
    }
    // 0x801E7EBC: nop

    // 0x801E7EC0: lbu         $v1, 0xCC($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XCC);
    // 0x801E7EC4: slti        $v0, $v1, 0xAA
    ctx->r2 = SIGNED(ctx->r3) < 0XAA ? 1 : 0;
    // 0x801E7EC8: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x801E7ECC: beq         $v0, $zero, L_801E7ED8
    if (ctx->r2 == 0) {
        // 0x801E7ED0: nop
    
            goto L_801E7ED8;
    }
    // 0x801E7ED0: nop

    // 0x801E7ED4: slti        $v0, $v1, 0xBA
    ctx->r2 = SIGNED(ctx->r3) < 0XBA ? 1 : 0;
L_801E7ED8:
    // 0x801E7ED8: jr          $ra
    // 0x801E7EDC: nop

    TRACE_RETURN()
    return;
    // 0x801E7EDC: nop

;}
RECOMP_FUNC void func_801DEFC8_59AED8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DEFC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DEFCC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DEFD0: jal         0x801E4530
    // 0x801DEFD4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801E4530_5A0440(rdram, ctx);
        goto after_0;
    // 0x801DEFD4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801DEFD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DEFDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DEFE0: jr          $ra
    // 0x801DEFE4: nop

    TRACE_RETURN()
    return;
    // 0x801DEFE4: nop

;}
RECOMP_FUNC void func_801F5F2C_5B1E3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F5F2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F5F30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F5F34: jal         0x801F5F4C
    // 0x801F5F38: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801F5F4C_5B1E5C(rdram, ctx);
        goto after_0;
    // 0x801F5F38: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F5F3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F5F40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F5F44: jr          $ra
    // 0x801F5F48: nop

    TRACE_RETURN()
    return;
    // 0x801F5F48: nop

;}
RECOMP_FUNC void func_801E99CC_5A58DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E99CC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801E99D0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801E99D4: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x801E99D8: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x801E99DC: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x801E99E0: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x801E99E4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x801E99E8: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x801E99EC: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x801E99F0: lw          $s0, 0x0($a1)
    ctx->r16 = MEM_W(ctx->r5, 0X0);
    // 0x801E99F4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801E99F8: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x801E99FC: beq         $s0, $zero, L_801E9AB8
    if (ctx->r16 == 0) {
        // 0x801E9A00: or          $s4, $a2, $zero
        ctx->r20 = ctx->r6 | 0;
            goto L_801E9AB8;
    }
    // 0x801E9A00: or          $s4, $a2, $zero
    ctx->r20 = ctx->r6 | 0;
    // 0x801E9A04: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E9A08: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x801E9A0C: lwc1        $f20, -0x47CC($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X47CC);
    // 0x801E9A10: addiu       $s2, $zero, 0x2
    ctx->r18 = ADD32(0, 0X2);
    // 0x801E9A14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_801E9A18:
    // 0x801E9A18: jal         0x801E8858
    // 0x801E9A1C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_801E8858_5A4768(rdram, ctx);
        goto after_0;
    // 0x801E9A1C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_0:
    // 0x801E9A20: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801E9A24: lwc1        $f8, 0x20($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X20);
    // 0x801E9A28: lwc1        $f16, 0x24($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X24);
    // 0x801E9A2C: sub.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f20.fl;
    // 0x801E9A30: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801E9A34: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E9A38: sub.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f20.fl;
    // 0x801E9A3C: swc1        $f6, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f6.u32l;
    // 0x801E9A40: lwc1        $f6, 0x8C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x801E9A44: sub.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f20.fl;
    // 0x801E9A48: swc1        $f10, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f10.u32l;
    // 0x801E9A4C: lwc1        $f10, 0xC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801E9A50: lwc1        $f16, 0x90($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X90);
    // 0x801E9A54: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801E9A58: swc1        $f18, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f18.u32l;
    // 0x801E9A5C: lwc1        $f6, 0x94($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X94);
    // 0x801E9A60: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801E9A64: lwc1        $f10, 0x1C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801E9A68: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801E9A6C: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
    // 0x801E9A70: c.le.s      $f10, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f10.fl <= ctx->f22.fl;
    // 0x801E9A74: swc1        $f18, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f18.u32l;
    // 0x801E9A78: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801E9A7C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801E9A80: bc1f        L_801E9AAC
    if (!c1cs) {
        // 0x801E9A84: swc1        $f8, 0x10($s0)
        MEM_W(0X10, ctx->r16) = ctx->f8.u32l;
            goto L_801E9AAC;
    }
    // 0x801E9A84: swc1        $f8, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f8.u32l;
    // 0x801E9A88: jal         0x80036158
    // 0x801E9A8C: lw          $a1, 0x0($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X0);
    func_80036158_36D58(rdram, ctx);
        goto after_1;
    // 0x801E9A8C: lw          $a1, 0x0($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X0);
    after_1:
    // 0x801E9A90: lbu         $t6, 0x61($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X61);
    // 0x801E9A94: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x801E9A98: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x801E9A9C: bne         $s4, $zero, L_801E9AB0
    if (ctx->r20 != 0) {
        // 0x801E9AA0: sb          $t7, 0x61($s1)
        MEM_B(0X61, ctx->r17) = ctx->r15;
            goto L_801E9AB0;
    }
    // 0x801E9AA0: sb          $t7, 0x61($s1)
    MEM_B(0X61, ctx->r17) = ctx->r15;
    // 0x801E9AA4: b           L_801E9AB0
    // 0x801E9AA8: sh          $s2, 0xAA($s1)
    MEM_H(0XAA, ctx->r17) = ctx->r18;
        goto L_801E9AB0;
    // 0x801E9AA8: sh          $s2, 0xAA($s1)
    MEM_H(0XAA, ctx->r17) = ctx->r18;
L_801E9AAC:
    // 0x801E9AAC: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_801E9AB0:
    // 0x801E9AB0: bnel        $s0, $zero, L_801E9A18
    if (ctx->r16 != 0) {
        // 0x801E9AB4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801E9A18;
    }
    goto skip_0;
    // 0x801E9AB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
L_801E9AB8:
    // 0x801E9AB8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801E9ABC: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x801E9AC0: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x801E9AC4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x801E9AC8: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x801E9ACC: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x801E9AD0: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x801E9AD4: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x801E9AD8: jr          $ra
    // 0x801E9ADC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x801E9ADC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_801F15E0_5AD4F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F15E0: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x801F15E4: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x801F15E8: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x801F15EC: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x801F15F0: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x801F15F4: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x801F15F8: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x801F15FC: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x801F1600: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x801F1604: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x801F1608: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x801F160C: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x801F1610: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x801F1614: sw          $a1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r5;
    // 0x801F1618: addiu       $t6, $t6, 0x4FEC
    ctx->r14 = ADD32(ctx->r14, 0X4FEC);
    // 0x801F161C: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x801F1620: addiu       $s1, $sp, 0x78
    ctx->r17 = ADD32(ctx->r29, 0X78);
    // 0x801F1624: lw          $fp, 0x5C($a0)
    ctx->r30 = MEM_W(ctx->r4, 0X5C);
    // 0x801F1628: sw          $at, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r1;
    // 0x801F162C: lwr         $at, 0x6($t6)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r14, 0X6);
    // 0x801F1630: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x801F1634: addiu       $t1, $t1, 0x4FF4
    ctx->r9 = ADD32(ctx->r9, 0X4FF4);
    // 0x801F1638: swr         $at, 0x6($s1)
    do_swr(rdram, 0X6, ctx->r17, ctx->r1);
    // 0x801F163C: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x801F1640: addiu       $t0, $sp, 0x70
    ctx->r8 = ADD32(ctx->r29, 0X70);
    // 0x801F1644: andi        $s0, $a1, 0xFF
    ctx->r16 = ctx->r5 & 0XFF;
    // 0x801F1648: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x801F164C: lwr         $at, 0x6($t1)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r9, 0X6);
    // 0x801F1650: or          $s7, $a0, $zero
    ctx->r23 = ctx->r4 | 0;
    // 0x801F1654: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    // 0x801F1658: jal         0x801E8C44
    // 0x801F165C: swr         $at, 0x6($t0)
    do_swr(rdram, 0X6, ctx->r8, ctx->r1);
    func_801E8C44_5A4B54(rdram, ctx);
        goto after_0;
    // 0x801F165C: swr         $at, 0x6($t0)
    do_swr(rdram, 0X6, ctx->r8, ctx->r1);
    after_0:
    // 0x801F1660: bne         $v0, $zero, L_801F1898
    if (ctx->r2 != 0) {
        // 0x801F1664: or          $a0, $s7, $zero
        ctx->r4 = ctx->r23 | 0;
            goto L_801F1898;
    }
    // 0x801F1664: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x801F1668: sll         $t5, $s0, 2
    ctx->r13 = S32(ctx->r16 << 2);
    // 0x801F166C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801F1670: addu        $a1, $a1, $t5
    ctx->r5 = ADD32(ctx->r5, ctx->r13);
    // 0x801F1674: lw          $a1, 0x4868($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4868);
    // 0x801F1678: jal         0x80034E08
    // 0x801F167C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_1;
    // 0x801F167C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x801F1680: beq         $v0, $zero, L_801F1898
    if (ctx->r2 == 0) {
        // 0x801F1684: or          $s4, $v0, $zero
        ctx->r20 = ctx->r2 | 0;
            goto L_801F1898;
    }
    // 0x801F1684: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x801F1688: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801F168C: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x801F1690: jal         0x801EE4AC
    // 0x801F1694: andi        $a2, $s0, 0xFF
    ctx->r6 = ctx->r16 & 0XFF;
    func_801EE4AC_5AA3BC(rdram, ctx);
        goto after_2;
    // 0x801F1694: andi        $a2, $s0, 0xFF
    ctx->r6 = ctx->r16 & 0XFF;
    after_2:
    // 0x801F1698: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x801F169C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801F16A0: jal         0x80035EEC
    // 0x801F16A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80035EEC_36AEC(rdram, ctx);
        goto after_3;
    // 0x801F16A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x801F16A8: bne         $v0, $zero, L_801F16C0
    if (ctx->r2 != 0) {
        // 0x801F16AC: or          $a0, $s4, $zero
        ctx->r4 = ctx->r20 | 0;
            goto L_801F16C0;
    }
    // 0x801F16AC: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x801F16B0: lw          $s1, 0x94($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X94);
    // 0x801F16B4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801F16B8: b           L_801F1898
    // 0x801F16BC: sb          $t8, 0x65($s1)
    MEM_B(0X65, ctx->r17) = ctx->r24;
        goto L_801F1898;
    // 0x801F16BC: sb          $t8, 0x65($s1)
    MEM_B(0X65, ctx->r17) = ctx->r24;
L_801F16C0:
    // 0x801F16C0: jal         0x801F18CC
    // 0x801F16C4: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    func_801F18CC_5AD7DC(rdram, ctx);
        goto after_4;
    // 0x801F16C4: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    after_4:
    // 0x801F16C8: addiu       $s0, $s4, 0x9C
    ctx->r16 = ADD32(ctx->r20, 0X9C);
    // 0x801F16CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F16D0: jal         0x801EE3AC
    // 0x801F16D4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_801EE3AC_5AA2BC(rdram, ctx);
        goto after_5;
    // 0x801F16D4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_5:
    // 0x801F16D8: lbu         $t9, 0x2($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X2);
    // 0x801F16DC: lbu         $a3, 0x1($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X1);
    // 0x801F16E0: lui         $s5, 0x8020
    ctx->r21 = S32(0X8020 << 16);
    // 0x801F16E4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x801F16E8: lbu         $t3, 0x3($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X3);
    // 0x801F16EC: addiu       $s5, $s5, 0x4C28
    ctx->r21 = ADD32(ctx->r21, 0X4C28);
    // 0x801F16F0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801F16F4: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x801F16F8: lbu         $t2, 0x4($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X4);
    // 0x801F16FC: or          $t7, $s5, $at
    ctx->r15 = ctx->r21 | ctx->r1;
    // 0x801F1700: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801F1704: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x801F1708: lbu         $t0, 0x5($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X5);
    // 0x801F170C: or          $a2, $t7, $at
    ctx->r6 = ctx->r15 | ctx->r1;
    // 0x801F1710: or          $s5, $a2, $zero
    ctx->r21 = ctx->r6 | 0;
    // 0x801F1714: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x801F1718: lbu         $t1, 0x6($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X6);
    // 0x801F171C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x801F1720: addiu       $a1, $s4, 0xA4
    ctx->r5 = ADD32(ctx->r20, 0XA4);
    // 0x801F1724: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x801F1728: lbu         $t4, 0x0($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X0);
    // 0x801F172C: jal         0x801DC554
    // 0x801F1730: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    func_801DC554_598464(rdram, ctx);
        goto after_6;
    // 0x801F1730: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    after_6:
    // 0x801F1734: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x801F1738: lui         $s6, 0x801F
    ctx->r22 = S32(0X801F << 16);
    // 0x801F173C: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x801F1740: addiu       $s6, $s6, 0x1CC4
    ctx->r22 = ADD32(ctx->r22, 0X1CC4);
    // 0x801F1744: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x801F1748: addiu       $s3, $zero, 0x5
    ctx->r19 = ADD32(0, 0X5);
    // 0x801F174C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
L_801F1750:
    // 0x801F1750: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x801F1754: jal         0x80034E08
    // 0x801F1758: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_7;
    // 0x801F1758: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x801F175C: beq         $v0, $zero, L_801F1898
    if (ctx->r2 == 0) {
        // 0x801F1760: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_801F1898;
    }
    // 0x801F1760: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x801F1764: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801F1768: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x801F176C: jal         0x801EE4AC
    // 0x801F1770: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_801EE4AC_5AA3BC(rdram, ctx);
        goto after_8;
    // 0x801F1770: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_8:
    // 0x801F1774: mtc1        $s2, $f4
    ctx->f4.u32l = ctx->r18;
    // 0x801F1778: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801F177C: sb          $s2, 0x61($s1)
    MEM_B(0X61, ctx->r17) = ctx->r18;
    // 0x801F1780: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801F1784: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801F1788: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801F178C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801F1790: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801F1794: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x801F1798: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x801F179C: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x801F17A0: nop

    // 0x801F17A4: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x801F17A8: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x801F17AC: nop

    // 0x801F17B0: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x801F17B4: beql        $t8, $zero, L_801F1804
    if (ctx->r24 == 0) {
        // 0x801F17B8: mfc1        $t8, $f10
        ctx->r24 = (int32_t)ctx->f10.u32l;
            goto L_801F1804;
    }
    goto skip_0;
    // 0x801F17B8: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    skip_0:
    // 0x801F17BC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801F17C0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801F17C4: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x801F17C8: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x801F17CC: nop

    // 0x801F17D0: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x801F17D4: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x801F17D8: nop

    // 0x801F17DC: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x801F17E0: bne         $t8, $zero, L_801F17F8
    if (ctx->r24 != 0) {
        // 0x801F17E4: nop
    
            goto L_801F17F8;
    }
    // 0x801F17E4: nop

    // 0x801F17E8: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x801F17EC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801F17F0: b           L_801F1810
    // 0x801F17F4: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_801F1810;
    // 0x801F17F4: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_801F17F8:
    // 0x801F17F8: b           L_801F1810
    // 0x801F17FC: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_801F1810;
    // 0x801F17FC: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x801F1800: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
L_801F1804:
    // 0x801F1804: nop

    // 0x801F1808: bltz        $t8, L_801F17F8
    if (SIGNED(ctx->r24) < 0) {
        // 0x801F180C: nop
    
            goto L_801F17F8;
    }
    // 0x801F180C: nop

L_801F1810:
    // 0x801F1810: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x801F1814: jal         0x80035EEC
    // 0x801F1818: sh          $t8, 0x62($s1)
    MEM_H(0X62, ctx->r17) = ctx->r24;
    func_80035EEC_36AEC(rdram, ctx);
        goto after_9;
    // 0x801F1818: sh          $t8, 0x62($s1)
    MEM_H(0X62, ctx->r17) = ctx->r24;
    after_9:
    // 0x801F181C: bne         $v0, $zero, L_801F1830
    if (ctx->r2 != 0) {
        // 0x801F1820: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_801F1830;
    }
    // 0x801F1820: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801F1824: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801F1828: b           L_801F1898
    // 0x801F182C: sb          $t7, 0x65($s1)
    MEM_B(0X65, ctx->r17) = ctx->r15;
        goto L_801F1898;
    // 0x801F182C: sb          $t7, 0x65($s1)
    MEM_B(0X65, ctx->r17) = ctx->r15;
L_801F1830:
    // 0x801F1830: jal         0x801F1BD0
    // 0x801F1834: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    func_801F1BD0_5ADAE0(rdram, ctx);
        goto after_10;
    // 0x801F1834: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    after_10:
    // 0x801F1838: addiu       $s0, $s1, 0x9C
    ctx->r16 = ADD32(ctx->r17, 0X9C);
    // 0x801F183C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F1840: jal         0x801EE3AC
    // 0x801F1844: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    func_801EE3AC_5AA2BC(rdram, ctx);
        goto after_11;
    // 0x801F1844: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    after_11:
    // 0x801F1848: lbu         $t6, 0x2($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X2);
    // 0x801F184C: lbu         $a3, 0x1($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X1);
    // 0x801F1850: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x801F1854: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801F1858: lbu         $t9, 0x3($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X3);
    // 0x801F185C: addiu       $a1, $s1, 0xA4
    ctx->r5 = ADD32(ctx->r17, 0XA4);
    // 0x801F1860: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x801F1864: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x801F1868: lbu         $t3, 0x4($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X4);
    // 0x801F186C: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x801F1870: lbu         $t2, 0x5($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X5);
    // 0x801F1874: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x801F1878: lbu         $t0, 0x6($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X6);
    // 0x801F187C: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x801F1880: lbu         $t1, 0x0($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X0);
    // 0x801F1884: jal         0x801DC554
    // 0x801F1888: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    func_801DC554_598464(rdram, ctx);
        goto after_12;
    // 0x801F1888: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    after_12:
    // 0x801F188C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x801F1890: bnel        $s2, $s3, L_801F1750
    if (ctx->r18 != ctx->r19) {
        // 0x801F1894: or          $a0, $s4, $zero
        ctx->r4 = ctx->r20 | 0;
            goto L_801F1750;
    }
    goto skip_1;
    // 0x801F1894: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    skip_1:
L_801F1898:
    // 0x801F1898: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x801F189C: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x801F18A0: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x801F18A4: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x801F18A8: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x801F18AC: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x801F18B0: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x801F18B4: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x801F18B8: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x801F18BC: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x801F18C0: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x801F18C4: jr          $ra
    // 0x801F18C8: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    TRACE_RETURN()
    return;
    // 0x801F18C8: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_801F7034_5B2F44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F7034: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F7038: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F703C: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801F7040: sh          $zero, 0x86($t6)
    MEM_H(0X86, ctx->r14) = 0;
    // 0x801F7044: lbu         $t7, 0x30($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X30);
    // 0x801F7048: sb          $zero, 0x61($a0)
    MEM_B(0X61, ctx->r4) = 0;
    // 0x801F704C: sh          $zero, 0x40($a0)
    MEM_H(0X40, ctx->r4) = 0;
    // 0x801F7050: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x801F7054: jal         0x801E8178
    // 0x801F7058: sb          $t8, 0x30($a0)
    MEM_B(0X30, ctx->r4) = ctx->r24;
    func_801E8178_5A4088(rdram, ctx);
        goto after_0;
    // 0x801F7058: sb          $t8, 0x30($a0)
    MEM_B(0X30, ctx->r4) = ctx->r24;
    after_0:
    // 0x801F705C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F7060: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F7064: jr          $ra
    // 0x801F7068: nop

    TRACE_RETURN()
    return;
    // 0x801F7068: nop

;}
RECOMP_FUNC void func_801E7B24_5A3A34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E7B24: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x801E7B28: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E7B2C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801E7B30: sw          $a1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r5;
    // 0x801E7B34: sw          $a2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r6;
    // 0x801E7B38: lw          $t6, 0x18($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X18);
    // 0x801E7B3C: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x801E7B40: addiu       $t8, $t8, 0x4758
    ctx->r24 = ADD32(ctx->r24, 0X4758);
    // 0x801E7B44: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E7B48: addiu       $t2, $t8, 0x3C
    ctx->r10 = ADD32(ctx->r24, 0X3C);
    // 0x801E7B4C: addiu       $t7, $sp, 0x34
    ctx->r15 = ADD32(ctx->r29, 0X34);
    // 0x801E7B50: sw          $t6, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r14;
L_801E7B54:
    // 0x801E7B54: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x801E7B58: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x801E7B5C: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x801E7B60: sw          $at, -0xC($t7)
    MEM_W(-0XC, ctx->r15) = ctx->r1;
    // 0x801E7B64: lw          $at, -0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X8);
    // 0x801E7B68: sw          $at, -0x8($t7)
    MEM_W(-0X8, ctx->r15) = ctx->r1;
    // 0x801E7B6C: lw          $at, -0x4($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X4);
    // 0x801E7B70: bne         $t8, $t2, L_801E7B54
    if (ctx->r24 != ctx->r10) {
        // 0x801E7B74: sw          $at, -0x4($t7)
        MEM_W(-0X4, ctx->r15) = ctx->r1;
            goto L_801E7B54;
    }
    // 0x801E7B74: sw          $at, -0x4($t7)
    MEM_W(-0X4, ctx->r15) = ctx->r1;
    // 0x801E7B78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E7B7C: jal         0x801DD720
    // 0x801E7B80: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_801DD720_599630(rdram, ctx);
        goto after_0;
    // 0x801E7B80: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_0:
    // 0x801E7B84: jal         0x801E7A80
    // 0x801E7B88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E7A80_5A3990(rdram, ctx);
        goto after_1;
    // 0x801E7B88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801E7B8C: bne         $v0, $zero, L_801E7BA8
    if (ctx->r2 != 0) {
        // 0x801E7B90: lui         $t3, 0x8020
        ctx->r11 = S32(0X8020 << 16);
            goto L_801E7BA8;
    }
    // 0x801E7B90: lui         $t3, 0x8020
    ctx->r11 = S32(0X8020 << 16);
    // 0x801E7B94: lw          $t3, -0x39DC($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X39DC);
    // 0x801E7B98: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801E7B9C: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801E7BA0: lbu         $t4, 0xD2($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0XD2);
    // 0x801E7BA4: beq         $t4, $zero, L_801E7BCC
    if (ctx->r12 == 0) {
        // 0x801E7BA8: lui         $t6, 0x8020
        ctx->r14 = S32(0X8020 << 16);
            goto L_801E7BCC;
    }
L_801E7BA8:
    // 0x801E7BA8: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x801E7BAC: lw          $t6, -0x39DC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39DC);
    // 0x801E7BB0: addiu       $t5, $zero, 0x100
    ctx->r13 = ADD32(0, 0X100);
    // 0x801E7BB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E7BB8: sh          $t5, 0xB2($t6)
    MEM_H(0XB2, ctx->r14) = ctx->r13;
    // 0x801E7BBC: jal         0x801DACDC
    // 0x801E7BC0: lbu         $a1, 0x8B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X8B);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_2;
    // 0x801E7BC0: lbu         $a1, 0x8B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X8B);
    after_2:
    // 0x801E7BC4: b           L_801E7CB0
    // 0x801E7BC8: sh          $zero, 0xEE($s0)
    MEM_H(0XEE, ctx->r16) = 0;
        goto L_801E7CB0;
    // 0x801E7BC8: sh          $zero, 0xEE($s0)
    MEM_H(0XEE, ctx->r16) = 0;
L_801E7BCC:
    // 0x801E7BCC: jalr        $t9
    // 0x801E7BD0: lw          $a0, 0x7C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X7C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x801E7BD0: lw          $a0, 0x7C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X7C);
    after_3:
    // 0x801E7BD4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E7BD8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E7BDC: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x801E7BE0: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x801E7BE4: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x801E7BE8: lwc1        $f4, 0x28($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X28);
    // 0x801E7BEC: sll         $t3, $t7, 2
    ctx->r11 = S32(ctx->r15 << 2);
    // 0x801E7BF0: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x801E7BF4: nop

    // 0x801E7BF8: bc1fl       L_801E7CB4
    if (!c1cs) {
        // 0x801E7BFC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801E7CB4;
    }
    goto skip_0;
    // 0x801E7BFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801E7C00: lbu         $a2, 0x60($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X60);
    // 0x801E7C04: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801E7C08: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801E7C0C: bne         $a2, $at, L_801E7C24
    if (ctx->r6 != ctx->r1) {
        // 0x801E7C10: nop
    
            goto L_801E7C24;
    }
    // 0x801E7C10: nop

    // 0x801E7C14: lhu         $a3, 0xEE($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0XEE);
    // 0x801E7C18: andi        $t2, $a3, 0x1
    ctx->r10 = ctx->r7 & 0X1;
    // 0x801E7C1C: b           L_801E7C24
    // 0x801E7C20: or          $a3, $t2, $zero
    ctx->r7 = ctx->r10 | 0;
        goto L_801E7C24;
    // 0x801E7C20: or          $a3, $t2, $zero
    ctx->r7 = ctx->r10 | 0;
L_801E7C24:
    // 0x801E7C24: addu        $v0, $a3, $a2
    ctx->r2 = ADD32(ctx->r7, ctx->r6);
    // 0x801E7C28: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x801E7C2C: subu        $t8, $t8, $v0
    ctx->r24 = SUB32(ctx->r24, ctx->r2);
    // 0x801E7C30: lw          $a0, 0x5C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X5C);
    // 0x801E7C34: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x801E7C38: addu        $t4, $t8, $t3
    ctx->r12 = ADD32(ctx->r24, ctx->r11);
    // 0x801E7C3C: addu        $v1, $sp, $t4
    ctx->r3 = ADD32(ctx->r29, ctx->r12);
    // 0x801E7C40: lw          $v1, 0x34($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X34);
    // 0x801E7C44: lhu         $t0, 0x30($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0X30);
    // 0x801E7C48: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x801E7C4C: addu        $t5, $t0, $v1
    ctx->r13 = ADD32(ctx->r8, ctx->r3);
    // 0x801E7C50: lbu         $t6, 0x0($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X0);
    // 0x801E7C54: andi        $a1, $t6, 0xFF
    ctx->r5 = ctx->r14 & 0XFF;
    // 0x801E7C58: bne         $a1, $at, L_801E7C74
    if (ctx->r5 != ctx->r1) {
        // 0x801E7C5C: sb          $t6, 0x77($sp)
        MEM_B(0X77, ctx->r29) = ctx->r14;
            goto L_801E7C74;
    }
    // 0x801E7C5C: sb          $t6, 0x77($sp)
    MEM_B(0X77, ctx->r29) = ctx->r14;
    // 0x801E7C60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E7C64: jal         0x801DACDC
    // 0x801E7C68: lbu         $a1, 0xCC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XCC);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_4;
    // 0x801E7C68: lbu         $a1, 0xCC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XCC);
    after_4:
    // 0x801E7C6C: b           L_801E7CB4
    // 0x801E7C70: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E7CB4;
    // 0x801E7C70: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E7C74:
    // 0x801E7C74: addiu       $at, $zero, 0xFE
    ctx->r1 = ADD32(0, 0XFE);
    // 0x801E7C78: beql        $a1, $at, L_801E7CB4
    if (ctx->r5 == ctx->r1) {
        // 0x801E7C7C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801E7CB4;
    }
    goto skip_1;
    // 0x801E7C7C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x801E7C80: bne         $a1, $zero, L_801E7CA0
    if (ctx->r5 != 0) {
        // 0x801E7C84: addiu       $t2, $t0, 0x1
        ctx->r10 = ADD32(ctx->r8, 0X1);
            goto L_801E7CA0;
    }
    // 0x801E7C84: addiu       $t2, $t0, 0x1
    ctx->r10 = ADD32(ctx->r8, 0X1);
    // 0x801E7C88: sh          $zero, 0x30($a0)
    MEM_H(0X30, ctx->r4) = 0;
    // 0x801E7C8C: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x801E7C90: lw          $t1, -0x39DC($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X39DC);
    // 0x801E7C94: addiu       $t9, $zero, 0x100
    ctx->r25 = ADD32(0, 0X100);
    // 0x801E7C98: b           L_801E7CA4
    // 0x801E7C9C: sh          $t9, 0xB2($t1)
    MEM_H(0XB2, ctx->r9) = ctx->r25;
        goto L_801E7CA4;
    // 0x801E7C9C: sh          $t9, 0xB2($t1)
    MEM_H(0XB2, ctx->r9) = ctx->r25;
L_801E7CA0:
    // 0x801E7CA0: sh          $t2, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r10;
L_801E7CA4:
    // 0x801E7CA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E7CA8: jal         0x801DACDC
    // 0x801E7CAC: lbu         $a1, 0x77($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X77);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_5;
    // 0x801E7CAC: lbu         $a1, 0x77($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X77);
    after_5:
L_801E7CB0:
    // 0x801E7CB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E7CB4:
    // 0x801E7CB4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801E7CB8: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    // 0x801E7CBC: jr          $ra
    // 0x801E7CC0: nop

    TRACE_RETURN()
    return;
    // 0x801E7CC0: nop

;}
RECOMP_FUNC void func_801EE25C_5AA16C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EE25C: beq         $a0, $zero, L_801EE284
    if (ctx->r4 == 0) {
        // 0x801EE260: nop
    
            goto L_801EE284;
    }
    // 0x801EE260: nop

    // 0x801EE264: beq         $a1, $zero, L_801EE284
    if (ctx->r5 == 0) {
        // 0x801EE268: nop
    
            goto L_801EE284;
    }
    // 0x801EE268: nop

    // 0x801EE26C: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x801EE270: swc1        $f4, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f4.u32l;
    // 0x801EE274: lwc1        $f6, 0xC($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XC);
    // 0x801EE278: swc1        $f6, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f6.u32l;
    // 0x801EE27C: lwc1        $f8, 0x10($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X10);
    // 0x801EE280: swc1        $f8, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f8.u32l;
L_801EE284:
    // 0x801EE284: jr          $ra
    // 0x801EE288: nop

    TRACE_RETURN()
    return;
    // 0x801EE288: nop

;}
RECOMP_FUNC void func_801E1B60_59DA70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E1B60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E1B64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E1B68: lbu         $t6, 0xCD($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XCD);
    // 0x801E1B6C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x801E1B70: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x801E1B74: bnel        $t6, $at, L_801E1BF8
    if (ctx->r14 != ctx->r1) {
        // 0x801E1B78: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E1BF8;
    }
    goto skip_0;
    // 0x801E1B78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801E1B7C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801E1B80: lwc1        $f6, 0x70($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X70);
    // 0x801E1B84: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x801E1B88: nop

    // 0x801E1B8C: bc1fl       L_801E1BF8
    if (!c1cs) {
        // 0x801E1B90: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E1BF8;
    }
    goto skip_1;
    // 0x801E1B90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x801E1B94: jal         0x8003F1D8
    // 0x801E1B98: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8003F1D8_3FDD8(rdram, ctx);
        goto after_0;
    // 0x801E1B98: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801E1B9C: bne         $v0, $zero, L_801E1BF4
    if (ctx->r2 != 0) {
        // 0x801E1BA0: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_801E1BF4;
    }
    // 0x801E1BA0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801E1BA4: jal         0x80221ED4
    // 0x801E1BA8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80221ED4_5DD3A4(rdram, ctx);
        goto after_1;
    // 0x801E1BA8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x801E1BAC: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x801E1BB0: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x801E1BB4: lui         $t8, 0x4
    ctx->r24 = S32(0X4 << 16);
    // 0x801E1BB8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801E1BBC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x801E1BC0: lbu         $t8, -0x51DE($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X51DE);
    // 0x801E1BC4: bnel        $t8, $zero, L_801E1BF8
    if (ctx->r24 != 0) {
        // 0x801E1BC8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E1BF8;
    }
    goto skip_2;
    // 0x801E1BC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x801E1BCC: lw          $t9, 0x5C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X5C);
    // 0x801E1BD0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x801E1BD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801E1BD8: sh          $zero, 0x0($t9)
    MEM_H(0X0, ctx->r25) = 0;
    // 0x801E1BDC: sb          $zero, 0xCD($a0)
    MEM_B(0XCD, ctx->r4) = 0;
    // 0x801E1BE0: sb          $zero, 0x7AE3($at)
    MEM_B(0X7AE3, ctx->r1) = 0;
    // 0x801E1BE4: lw          $t0, 0x5C($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X5C);
    // 0x801E1BE8: sw          $zero, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = 0;
    // 0x801E1BEC: jal         0x801DACDC
    // 0x801E1BF0: sw          $zero, 0x38($t0)
    MEM_W(0X38, ctx->r8) = 0;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_2;
    // 0x801E1BF0: sw          $zero, 0x38($t0)
    MEM_W(0X38, ctx->r8) = 0;
    after_2:
L_801E1BF4:
    // 0x801E1BF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E1BF8:
    // 0x801E1BF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E1BFC: jr          $ra
    // 0x801E1C00: nop

    TRACE_RETURN()
    return;
    // 0x801E1C00: nop

;}
RECOMP_FUNC void func_801F22E0_5AE1F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F22E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F22E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F22E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801F22EC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F22F0: or          $t6, $a1, $zero
    ctx->r14 = ctx->r5 | 0;
    // 0x801F22F4: lw          $a2, 0xC($t6)
    ctx->r6 = MEM_W(ctx->r14, 0XC);
    // 0x801F22F8: lw          $a3, 0x10($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X10);
    // 0x801F22FC: jal         0x801CF51C
    // 0x801F2300: lw          $a1, 0x8($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X8);
    func_801CF51C_58B42C(rdram, ctx);
        goto after_0;
    // 0x801F2300: lw          $a1, 0x8($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X8);
    after_0:
    // 0x801F2304: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x801F2308: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F230C: lhu         $t8, 0x94($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X94);
    // 0x801F2310: addiu       $t7, $zero, 0x400
    ctx->r15 = ADD32(0, 0X400);
    // 0x801F2314: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F2318: andi        $t1, $t8, 0x3FF
    ctx->r9 = ctx->r24 & 0X3FF;
    // 0x801F231C: subu        $a0, $t1, $v0
    ctx->r4 = SUB32(ctx->r9, ctx->r2);
    // 0x801F2320: sll         $t2, $a0, 16
    ctx->r10 = S32(ctx->r4 << 16);
    // 0x801F2324: sra         $t3, $t2, 16
    ctx->r11 = S32(SIGNED(ctx->r10) >> 16);
    // 0x801F2328: bgez        $t3, L_801F2340
    if (SIGNED(ctx->r11) >= 0) {
        // 0x801F232C: or          $a0, $t3, $zero
        ctx->r4 = ctx->r11 | 0;
            goto L_801F2340;
    }
    // 0x801F232C: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x801F2330: negu        $v1, $t3
    ctx->r3 = SUB32(0, ctx->r11);
    // 0x801F2334: sll         $t4, $v1, 16
    ctx->r12 = S32(ctx->r3 << 16);
    // 0x801F2338: b           L_801F234C
    // 0x801F233C: sra         $v1, $t4, 16
    ctx->r3 = S32(SIGNED(ctx->r12) >> 16);
        goto L_801F234C;
    // 0x801F233C: sra         $v1, $t4, 16
    ctx->r3 = S32(SIGNED(ctx->r12) >> 16);
L_801F2340:
    // 0x801F2340: sll         $v1, $a0, 16
    ctx->r3 = S32(ctx->r4 << 16);
    // 0x801F2344: sra         $t6, $v1, 16
    ctx->r14 = S32(SIGNED(ctx->r3) >> 16);
    // 0x801F2348: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
L_801F234C:
    // 0x801F234C: slti        $at, $v1, 0x201
    ctx->r1 = SIGNED(ctx->r3) < 0X201 ? 1 : 0;
    // 0x801F2350: bne         $at, $zero, L_801F2364
    if (ctx->r1 != 0) {
        // 0x801F2354: nop
    
            goto L_801F2364;
    }
    // 0x801F2354: nop

    // 0x801F2358: subu        $v1, $t7, $v1
    ctx->r3 = SUB32(ctx->r15, ctx->r3);
    // 0x801F235C: sll         $t8, $v1, 16
    ctx->r24 = S32(ctx->r3 << 16);
    // 0x801F2360: sra         $v1, $t8, 16
    ctx->r3 = S32(SIGNED(ctx->r24) >> 16);
L_801F2364:
    // 0x801F2364: jr          $ra
    // 0x801F2368: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    TRACE_RETURN()
    return;
    // 0x801F2368: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_801D0C64_58CB74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D0C64: addiu       $sp, $sp, -0x120
    ctx->r29 = ADD32(ctx->r29, -0X120);
    // 0x801D0C68: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x801D0C6C: sw          $s5, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r21;
    // 0x801D0C70: sw          $s4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r20;
    // 0x801D0C74: sw          $s3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r19;
    // 0x801D0C78: sw          $s2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r18;
    // 0x801D0C7C: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x801D0C80: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x801D0C84: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x801D0C88: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x801D0C8C: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x801D0C90: lw          $s4, 0x130($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X130);
    // 0x801D0C94: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801D0C98: swc1        $f4, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f4.u32l;
    // 0x801D0C9C: lwc1        $f6, 0x4($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X4);
    // 0x801D0CA0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D0CA4: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x801D0CA8: swc1        $f6, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f6.u32l;
    // 0x801D0CAC: lwc1        $f8, 0x8($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X8);
    // 0x801D0CB0: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x801D0CB4: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x801D0CB8: swc1        $f8, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f8.u32l;
    // 0x801D0CBC: lwc1        $f0, 0x0($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X0);
    // 0x801D0CC0: swc1        $f0, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->f0.u32l;
    // 0x801D0CC4: swc1        $f0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->f0.u32l;
    // 0x801D0CC8: lwc1        $f0, 0x8($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X8);
    // 0x801D0CCC: swc1        $f0, 0x24($s4)
    MEM_W(0X24, ctx->r20) = ctx->f0.u32l;
    // 0x801D0CD0: swc1        $f0, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->f0.u32l;
    // 0x801D0CD4: lwc1        $f0, 0x0($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X0);
    // 0x801D0CD8: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x801D0CDC: swc1        $f0, 0x2C($s4)
    MEM_W(0X2C, ctx->r20) = ctx->f0.u32l;
    // 0x801D0CE0: swc1        $f0, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->f0.u32l;
    // 0x801D0CE4: lwc1        $f0, 0x8($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X8);
    // 0x801D0CE8: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x801D0CEC: swc1        $f0, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->f0.u32l;
    // 0x801D0CF0: ldc1        $f12, -0x5540($at)
    CHECK_FR(ctx, 12);
    ctx->f12.u64 = LD(ctx->r1, -0X5540);
    // 0x801D0CF4: swc1        $f0, 0x20($s4)
    MEM_W(0X20, ctx->r20) = ctx->f0.u32l;
    // 0x801D0CF8: swc1        $f16, 0x30($s4)
    MEM_W(0X30, ctx->r20) = ctx->f16.u32l;
    // 0x801D0CFC: swc1        $f16, 0x38($s4)
    MEM_W(0X38, ctx->r20) = ctx->f16.u32l;
    // 0x801D0D00: swc1        $f16, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->f16.u32l;
    // 0x801D0D04: swc1        $f16, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->f16.u32l;
    // 0x801D0D08: swc1        $f16, 0x1C($s4)
    MEM_W(0X1C, ctx->r20) = ctx->f16.u32l;
    // 0x801D0D0C: swc1        $f16, 0x28($s4)
    MEM_W(0X28, ctx->r20) = ctx->f16.u32l;
    // 0x801D0D10: swc1        $f16, 0x34($s4)
    MEM_W(0X34, ctx->r20) = ctx->f16.u32l;
    // 0x801D0D14: lwc1        $f10, 0x1C($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x801D0D18: lwc1        $f8, 0x24($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X24);
    // 0x801D0D1C: lui         $at, 0x4339
    ctx->r1 = S32(0X4339 << 16);
    // 0x801D0D20: cvt.d.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.d = CVT_D_S(ctx->f10.fl);
    // 0x801D0D24: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801D0D28: mul.d       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f12.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f12.d);
    // 0x801D0D2C: lwc1        $f2, 0x20($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X20);
    // 0x801D0D30: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801D0D34: mul.d       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f12.d); 
    ctx->f4.d = MUL_D(ctx->f10.d, ctx->f12.d);
    // 0x801D0D38: cvt.s.d     $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f20.fl = CVT_S_D(ctx->f6.d);
    // 0x801D0D3C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D0D40: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801D0D44: cvt.s.d     $f22, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f22.fl = CVT_S_D(ctx->f4.d);
    // 0x801D0D48: mul.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x801D0D4C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x801D0D50: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x801D0D54: nop

    // 0x801D0D58: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x801D0D5C: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x801D0D60: nop

    // 0x801D0D64: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x801D0D68: beql        $a1, $zero, L_801D0DB8
    if (ctx->r5 == 0) {
        // 0x801D0D6C: mfc1        $a1, $f10
        ctx->r5 = (int32_t)ctx->f10.u32l;
            goto L_801D0DB8;
    }
    goto skip_0;
    // 0x801D0D6C: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    skip_0:
    // 0x801D0D70: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801D0D74: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801D0D78: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x801D0D7C: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x801D0D80: nop

    // 0x801D0D84: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x801D0D88: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x801D0D8C: nop

    // 0x801D0D90: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x801D0D94: bne         $a1, $zero, L_801D0DAC
    if (ctx->r5 != 0) {
        // 0x801D0D98: nop
    
            goto L_801D0DAC;
    }
    // 0x801D0D98: nop

    // 0x801D0D9C: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x801D0DA0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801D0DA4: b           L_801D0DC4
    // 0x801D0DA8: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
        goto L_801D0DC4;
    // 0x801D0DA8: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
L_801D0DAC:
    // 0x801D0DAC: b           L_801D0DC4
    // 0x801D0DB0: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
        goto L_801D0DC4;
    // 0x801D0DB0: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x801D0DB4: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
L_801D0DB8:
    // 0x801D0DB8: nop

    // 0x801D0DBC: bltz        $a1, L_801D0DAC
    if (SIGNED(ctx->r5) < 0) {
        // 0x801D0DC0: nop
    
            goto L_801D0DAC;
    }
    // 0x801D0DC0: nop

L_801D0DC4:
    // 0x801D0DC4: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x801D0DC8: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x801D0DCC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801D0DD0: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x801D0DD4: lhu         $t8, -0x34B4($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X34B4);
    // 0x801D0DD8: mul.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x801D0DDC: swc1        $f16, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f16.u32l;
    // 0x801D0DE0: lwc1        $f8, 0xA0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x801D0DE4: andi        $t7, $a1, 0xFFFF
    ctx->r15 = ctx->r5 & 0XFFFF;
    // 0x801D0DE8: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x801D0DEC: swc1        $f8, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f8.u32l;
    // 0x801D0DF0: beq         $t8, $zero, L_801D0E18
    if (ctx->r24 == 0) {
        // 0x801D0DF4: swc1        $f6, 0x9C($sp)
        MEM_W(0X9C, ctx->r29) = ctx->f6.u32l;
            goto L_801D0E18;
    }
    // 0x801D0DF4: swc1        $f6, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f6.u32l;
    // 0x801D0DF8: lwc1        $f10, 0xA4($s5)
    ctx->f10.u32l = MEM_W(ctx->r21, 0XA4);
    // 0x801D0DFC: c.lt.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl < ctx->f10.fl;
    // 0x801D0E00: nop

    // 0x801D0E04: bc1tl       L_801D0E1C
    if (c1cs) {
        // 0x801D0E08: swc1        $f16, 0x9C($sp)
        MEM_W(0X9C, ctx->r29) = ctx->f16.u32l;
            goto L_801D0E1C;
    }
    goto skip_1;
    // 0x801D0E08: swc1        $f16, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f16.u32l;
    skip_1:
    // 0x801D0E0C: lbu         $t9, 0x61($s5)
    ctx->r25 = MEM_BU(ctx->r21, 0X61);
    // 0x801D0E10: beql        $t9, $zero, L_801D0E20
    if (ctx->r25 == 0) {
        // 0x801D0E14: lw          $t0, 0x5C($s5)
        ctx->r8 = MEM_W(ctx->r21, 0X5C);
            goto L_801D0E20;
    }
    goto skip_2;
    // 0x801D0E14: lw          $t0, 0x5C($s5)
    ctx->r8 = MEM_W(ctx->r21, 0X5C);
    skip_2:
L_801D0E18:
    // 0x801D0E18: swc1        $f16, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f16.u32l;
L_801D0E1C:
    // 0x801D0E1C: lw          $t0, 0x5C($s5)
    ctx->r8 = MEM_W(ctx->r21, 0X5C);
L_801D0E20:
    // 0x801D0E20: sll         $a0, $a1, 2
    ctx->r4 = S32(ctx->r5 << 2);
    // 0x801D0E24: subu        $a0, $a0, $a1
    ctx->r4 = SUB32(ctx->r4, ctx->r5);
    // 0x801D0E28: sh          $zero, 0xA($t0)
    MEM_H(0XA, ctx->r8) = 0;
    // 0x801D0E2C: lwc1        $f4, 0x30($s4)
    ctx->f4.u32l = MEM_W(ctx->r20, 0X30);
    // 0x801D0E30: lwc1        $f8, 0x38($s4)
    ctx->f8.u32l = MEM_W(ctx->r20, 0X38);
    // 0x801D0E34: sll         $a0, $a0, 1
    ctx->r4 = S32(ctx->r4 << 1);
    // 0x801D0E38: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x801D0E3C: slt         $at, $a1, $a0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x801D0E40: andi        $v0, $a1, 0xFFFF
    ctx->r2 = ctx->r5 & 0XFFFF;
    // 0x801D0E44: mul.s       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f22.fl);
    // 0x801D0E48: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x801D0E4C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x801D0E50: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x801D0E54: swc1        $f6, 0x30($s4)
    MEM_W(0X30, ctx->r20) = ctx->f6.u32l;
    // 0x801D0E58: lwc1        $f6, 0x30($s4)
    ctx->f6.u32l = MEM_W(ctx->r20, 0X30);
    // 0x801D0E5C: swc1        $f10, 0x38($s4)
    MEM_W(0X38, ctx->r20) = ctx->f10.u32l;
    // 0x801D0E60: lwc1        $f4, 0x8($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X8);
    // 0x801D0E64: lwc1        $f10, 0x0($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X0);
    // 0x801D0E68: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801D0E6C: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x801D0E70: swc1        $f4, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f4.u32l;
    // 0x801D0E74: lwc1        $f10, 0x34($s4)
    ctx->f10.u32l = MEM_W(ctx->r20, 0X34);
    // 0x801D0E78: lwc1        $f6, 0xC($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0XC);
    // 0x801D0E7C: lwc1        $f4, 0x4($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X4);
    // 0x801D0E80: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x801D0E84: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x801D0E88: swc1        $f6, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f6.u32l;
    // 0x801D0E8C: lwc1        $f4, 0x38($s4)
    ctx->f4.u32l = MEM_W(ctx->r20, 0X38);
    // 0x801D0E90: lwc1        $f10, 0x10($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X10);
    // 0x801D0E94: lwc1        $f6, 0x8($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801D0E98: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x801D0E9C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801D0EA0: beq         $at, $zero, L_801D0F10
    if (ctx->r1 == 0) {
        // 0x801D0EA4: swc1        $f10, 0xC8($sp)
        MEM_W(0XC8, ctx->r29) = ctx->f10.u32l;
            goto L_801D0F10;
    }
    // 0x801D0EA4: swc1        $f10, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f10.u32l;
L_801D0EA8:
    // 0x801D0EA8: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x801D0EAC: lwc1        $f12, 0xC0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x801D0EB0: lwc1        $f4, 0xC4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x801D0EB4: bgez        $v0, L_801D0ECC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x801D0EB8: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_801D0ECC;
    }
    // 0x801D0EB8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x801D0EBC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801D0EC0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801D0EC4: nop

    // 0x801D0EC8: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_801D0ECC:
    // 0x801D0ECC: add.s       $f14, $f4, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x801D0ED0: lw          $a2, 0xC8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XC8);
    // 0x801D0ED4: sw          $v1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r3;
    // 0x801D0ED8: jal         0x80029E08
    // 0x801D0EDC: sw          $a0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r4;
    func_80029E08_2AA08(rdram, ctx);
        goto after_0;
    // 0x801D0EDC: sw          $a0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r4;
    after_0:
    // 0x801D0EE0: lw          $v1, 0x70($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X70);
    // 0x801D0EE4: bne         $v0, $zero, L_801D0EFC
    if (ctx->r2 != 0) {
        // 0x801D0EE8: lw          $a0, 0x6C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X6C);
            goto L_801D0EFC;
    }
    // 0x801D0EE8: lw          $a0, 0x6C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X6C);
    // 0x801D0EEC: addiu       $v0, $s0, 0x1
    ctx->r2 = ADD32(ctx->r16, 0X1);
    // 0x801D0EF0: andi        $t1, $v0, 0xFFFF
    ctx->r9 = ctx->r2 & 0XFFFF;
    // 0x801D0EF4: b           L_801D0F10
    // 0x801D0EF8: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
        goto L_801D0F10;
    // 0x801D0EF8: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
L_801D0EFC:
    // 0x801D0EFC: addu        $v0, $s0, $v1
    ctx->r2 = ADD32(ctx->r16, ctx->r3);
    // 0x801D0F00: andi        $s0, $v0, 0xFFFF
    ctx->r16 = ctx->r2 & 0XFFFF;
    // 0x801D0F04: slt         $at, $s0, $a0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x801D0F08: bne         $at, $zero, L_801D0EA8
    if (ctx->r1 != 0) {
        // 0x801D0F0C: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_801D0EA8;
    }
    // 0x801D0F0C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_801D0F10:
    // 0x801D0F10: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x801D0F14: lw          $v1, 0x134($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X134);
    // 0x801D0F18: addiu       $a0, $sp, 0xD8
    ctx->r4 = ADD32(ctx->r29, 0XD8);
    // 0x801D0F1C: lw          $a1, 0xC0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XC0);
    // 0x801D0F20: bgez        $v0, L_801D0F38
    if (SIGNED(ctx->r2) >= 0) {
        // 0x801D0F24: cvt.s.w     $f2, $f6
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    ctx->f2.fl = CVT_S_W(ctx->f6.u32l);
            goto L_801D0F38;
    }
    // 0x801D0F24: cvt.s.w     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    ctx->f2.fl = CVT_S_W(ctx->f6.u32l);
    // 0x801D0F28: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801D0F2C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801D0F30: nop

    // 0x801D0F34: add.s       $f2, $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f10.fl;
L_801D0F38:
    // 0x801D0F38: lwc1        $f18, 0x0($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X0);
    // 0x801D0F3C: lwc1        $f16, 0xC4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x801D0F40: lwc1        $f14, 0x9C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x801D0F44: addiu       $t3, $v0, 0x2
    ctx->r11 = ADD32(ctx->r2, 0X2);
    // 0x801D0F48: add.s       $f16, $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f2.fl;
    // 0x801D0F4C: mtc1        $t3, $f12
    ctx->f12.u32l = ctx->r11;
    // 0x801D0F50: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x801D0F54: lwc1        $f18, 0x4($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X4);
    // 0x801D0F58: cvt.s.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.fl = CVT_S_W(ctx->f12.u32l);
    // 0x801D0F5C: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x801D0F60: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x801D0F64: lwc1        $f18, 0x8($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801D0F68: lw          $a3, 0xC8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC8);
    // 0x801D0F6C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x801D0F70: sub.s       $f14, $f12, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = ctx->f12.fl - ctx->f14.fl;
    // 0x801D0F74: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x801D0F78: swc1        $f2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f2.u32l;
    // 0x801D0F7C: jal         0x8002C9D4
    // 0x801D0F80: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    func_8002C9D4_2D5D4(rdram, ctx);
        goto after_1;
    // 0x801D0F80: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    after_1:
    // 0x801D0F84: lwc1        $f0, 0x100($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X100);
    // 0x801D0F88: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801D0F8C: lwc1        $f2, 0x70($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X70);
    // 0x801D0F90: lh          $t4, 0x110($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X110);
    // 0x801D0F94: c.eq.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl == ctx->f8.fl;
    // 0x801D0F98: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x801D0F9C: bc1tl       L_801D1220
    if (c1cs) {
        // 0x801D0FA0: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_801D1220;
    }
    goto skip_3;
    // 0x801D0FA0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    skip_3:
    // 0x801D0FA4: bne         $t4, $at, L_801D121C
    if (ctx->r12 != ctx->r1) {
        // 0x801D0FA8: negu        $t5, $s0
        ctx->r13 = SUB32(0, ctx->r16);
            goto L_801D121C;
    }
    // 0x801D0FA8: negu        $t5, $s0
    ctx->r13 = SUB32(0, ctx->r16);
    // 0x801D0FAC: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x801D0FB0: lwc1        $f10, 0x9C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x801D0FB4: lwc1        $f6, 0xF4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x801D0FB8: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801D0FBC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D0FC0: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x801D0FC4: c.le.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl <= ctx->f6.fl;
    // 0x801D0FC8: nop

    // 0x801D0FCC: bc1fl       L_801D1220
    if (!c1cs) {
        // 0x801D0FD0: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_801D1220;
    }
    goto skip_4;
    // 0x801D0FD0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    skip_4:
    // 0x801D0FD4: ldc1        $f8, -0x5538($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X5538);
    // 0x801D0FD8: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x801D0FDC: c.le.d      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.d <= ctx->f10.d;
    // 0x801D0FE0: nop

    // 0x801D0FE4: bc1fl       L_801D1220
    if (!c1cs) {
        // 0x801D0FE8: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_801D1220;
    }
    goto skip_5;
    // 0x801D0FE8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    skip_5:
    // 0x801D0FEC: lw          $v0, 0x5C($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X5C);
    // 0x801D0FF0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801D0FF4: lui         $a3, 0x8021
    ctx->r7 = S32(0X8021 << 16);
    // 0x801D0FF8: lhu         $t6, 0xA($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0XA);
    // 0x801D0FFC: addiu       $a3, $a3, -0x35A4
    ctx->r7 = ADD32(ctx->r7, -0X35A4);
    // 0x801D1000: addiu       $a1, $a1, -0x35B0
    ctx->r5 = ADD32(ctx->r5, -0X35B0);
    // 0x801D1004: ori         $t7, $t6, 0x10
    ctx->r15 = ctx->r14 | 0X10;
    // 0x801D1008: sh          $t7, 0xA($v0)
    MEM_H(0XA, ctx->r2) = ctx->r15;
    // 0x801D100C: lwc1        $f6, 0xF4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x801D1010: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    // 0x801D1014: sw          $zero, 0x0($a3)
    MEM_W(0X0, ctx->r7) = 0;
    // 0x801D1018: add.s       $f4, $f2, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f6.fl;
    // 0x801D101C: lwc1        $f8, 0xF0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x801D1020: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x801D1024: addiu       $a0, $a0, -0x3590
    ctx->r4 = ADD32(ctx->r4, -0X3590);
    // 0x801D1028: swc1        $f4, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f4.u32l;
    // 0x801D102C: lwc1        $f10, 0x0($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X0);
    // 0x801D1030: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801D1034: addiu       $v1, $v1, -0x3580
    ctx->r3 = ADD32(ctx->r3, -0X3580);
    // 0x801D1038: add.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x801D103C: lwc1        $f10, 0xF4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x801D1040: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801D1044: addiu       $a2, $a2, -0x3574
    ctx->r6 = ADD32(ctx->r6, -0X3574);
    // 0x801D1048: swc1        $f6, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f6.u32l;
    // 0x801D104C: lwc1        $f4, 0x4($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X4);
    // 0x801D1050: lwc1        $f0, 0x0($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X0);
    // 0x801D1054: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D1058: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x801D105C: lwc1        $f4, 0xF8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x801D1060: swc1        $f8, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f8.u32l;
    // 0x801D1064: lwc1        $f6, 0x8($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801D1068: lwc1        $f8, 0xFC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XFC);
    // 0x801D106C: add.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x801D1070: lwc1        $f6, 0x100($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X100);
    // 0x801D1074: swc1        $f8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f8.u32l;
    // 0x801D1078: lwc1        $f4, 0x104($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X104);
    // 0x801D107C: swc1        $f10, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f10.u32l;
    // 0x801D1080: lwc1        $f10, 0xC0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x801D1084: lwc1        $f8, 0xF0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x801D1088: swc1        $f6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f6.u32l;
    // 0x801D108C: swc1        $f4, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f4.u32l;
    // 0x801D1090: add.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x801D1094: lwc1        $f10, 0xF4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x801D1098: lwc1        $f4, 0xC4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x801D109C: swc1        $f6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f6.u32l;
    // 0x801D10A0: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x801D10A4: lwc1        $f4, 0xF8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x801D10A8: lwc1        $f6, 0xC8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x801D10AC: swc1        $f8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f8.u32l;
    // 0x801D10B0: lwc1        $f8, 0x0($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X0);
    // 0x801D10B4: add.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x801D10B8: swc1        $f8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f8.u32l;
    // 0x801D10BC: lwc1        $f6, 0x68($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801D10C0: swc1        $f10, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f10.u32l;
    // 0x801D10C4: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x801D10C8: nop

    // 0x801D10CC: bc1fl       L_801D119C
    if (!c1cs) {
        // 0x801D10D0: lwc1        $f8, 0x68($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
            goto L_801D119C;
    }
    goto skip_6;
    // 0x801D10D0: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    skip_6:
    // 0x801D10D4: lwc1        $f14, -0x3570($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X3570);
    // 0x801D10D8: lwc1        $f16, 0x4($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X4);
    // 0x801D10DC: c.eq.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl == ctx->f16.fl;
    // 0x801D10E0: nop

    // 0x801D10E4: bc1fl       L_801D119C
    if (!c1cs) {
        // 0x801D10E8: lwc1        $f8, 0x68($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
            goto L_801D119C;
    }
    goto skip_7;
    // 0x801D10E8: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    skip_7:
    // 0x801D10EC: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x801D10F0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D10F4: lwc1        $f18, -0x356C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X356C);
    // 0x801D10F8: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
    // 0x801D10FC: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801D1100: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D1104: c.eq.s      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.fl == ctx->f10.fl;
    // 0x801D1108: nop

    // 0x801D110C: bc1fl       L_801D119C
    if (!c1cs) {
        // 0x801D1110: lwc1        $f8, 0x68($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
            goto L_801D119C;
    }
    goto skip_8;
    // 0x801D1110: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    skip_8:
    // 0x801D1114: lwc1        $f8, -0x3568($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X3568);
    // 0x801D1118: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D111C: mul.s       $f4, $f0, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x801D1120: lwc1        $f8, -0x3564($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X3564);
    // 0x801D1124: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D1128: mul.s       $f8, $f14, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f8.fl);
    // 0x801D112C: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x801D1130: lwc1        $f8, -0x3560($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X3560);
    // 0x801D1134: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D1138: mul.s       $f8, $f18, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f8.fl);
    // 0x801D113C: add.s       $f2, $f4, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x801D1140: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801D1144: mul.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x801D1148: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x801D114C: mul.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x801D1150: lwc1        $f6, 0x4($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X4);
    // 0x801D1154: mul.s       $f4, $f16, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x801D1158: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x801D115C: add.s       $f12, $f8, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x801D1160: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x801D1164: nop

    // 0x801D1168: bc1fl       L_801D1180
    if (!c1cs) {
        // 0x801D116C: sub.s       $f0, $f2, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
            goto L_801D1180;
    }
    goto skip_9;
    // 0x801D116C: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    skip_9:
    // 0x801D1170: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x801D1174: b           L_801D1180
    // 0x801D1178: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_801D1180;
    // 0x801D1178: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x801D117C: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_801D1180:
    // 0x801D1180: ldc1        $f4, -0x5530($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X5530);
    // 0x801D1184: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x801D1188: c.lt.d      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.d < ctx->f4.d;
    // 0x801D118C: nop

    // 0x801D1190: bc1tl       L_801D11E0
    if (c1cs) {
        // 0x801D1194: lw          $t8, 0x0($a1)
        ctx->r24 = MEM_W(ctx->r5, 0X0);
            goto L_801D11E0;
    }
    goto skip_10;
    // 0x801D1194: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    skip_10:
    // 0x801D1198: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
L_801D119C:
    // 0x801D119C: lwc1        $f6, 0x4($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4);
    // 0x801D11A0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D11A4: swc1        $f8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f8.u32l;
    // 0x801D11A8: swc1        $f6, -0x3570($at)
    MEM_W(-0X3570, ctx->r1) = ctx->f6.u32l;
    // 0x801D11AC: lwc1        $f10, 0x8($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X8);
    // 0x801D11B0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D11B4: swc1        $f10, -0x356C($at)
    MEM_W(-0X356C, ctx->r1) = ctx->f10.u32l;
    // 0x801D11B8: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x801D11BC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D11C0: swc1        $f4, -0x3568($at)
    MEM_W(-0X3568, ctx->r1) = ctx->f4.u32l;
    // 0x801D11C4: lwc1        $f8, 0x4($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X4);
    // 0x801D11C8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D11CC: swc1        $f8, -0x3564($at)
    MEM_W(-0X3564, ctx->r1) = ctx->f8.u32l;
    // 0x801D11D0: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801D11D4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D11D8: swc1        $f6, -0x3560($at)
    MEM_W(-0X3560, ctx->r1) = ctx->f6.u32l;
    // 0x801D11DC: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
L_801D11E0:
    // 0x801D11E0: lhu         $t9, 0x10E($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X10E);
    // 0x801D11E4: bne         $t8, $zero, L_801D121C
    if (ctx->r24 != 0) {
        // 0x801D11E8: andi        $t0, $t9, 0xFFFF
        ctx->r8 = ctx->r25 & 0XFFFF;
            goto L_801D121C;
    }
    // 0x801D11E8: andi        $t0, $t9, 0xFFFF
    ctx->r8 = ctx->r25 & 0XFFFF;
    // 0x801D11EC: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x801D11F0: addiu       $a0, $a0, -0x359A
    ctx->r4 = ADD32(ctx->r4, -0X359A);
    // 0x801D11F4: bne         $t0, $zero, L_801D1204
    if (ctx->r8 != 0) {
        // 0x801D11F8: sh          $t9, 0x0($a0)
        MEM_H(0X0, ctx->r4) = ctx->r25;
            goto L_801D1204;
    }
    // 0x801D11F8: sh          $t9, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r25;
    // 0x801D11FC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801D1200: sh          $t1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r9;
L_801D1204:
    // 0x801D1204: lw          $t2, 0x118($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X118);
    // 0x801D1208: lw          $t3, 0x11C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X11C);
    // 0x801D120C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D1210: sw          $t2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r10;
    // 0x801D1214: sw          $t3, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r11;
    // 0x801D1218: sw          $zero, -0x34C8($at)
    MEM_W(-0X34C8, ctx->r1) = 0;
L_801D121C:
    // 0x801D121C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_801D1220:
    // 0x801D1220: or          $v1, $s4, $zero
    ctx->r3 = ctx->r20 | 0;
L_801D1224:
    // 0x801D1224: lwc1        $f10, 0x0($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X0);
    // 0x801D1228: lwc1        $f8, 0x8($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801D122C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801D1230: mul.s       $f4, $f10, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x801D1234: nop

    // 0x801D1238: mul.s       $f6, $f8, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f22.fl);
    // 0x801D123C: swc1        $f4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f4.u32l;
    // 0x801D1240: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x801D1244: swc1        $f6, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f6.u32l;
    // 0x801D1248: lwc1        $f10, 0x8($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X8);
    // 0x801D124C: lwc1        $f6, 0x0($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X0);
    // 0x801D1250: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x801D1254: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801D1258: swc1        $f10, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f10.u32l;
    // 0x801D125C: lwc1        $f6, 0x4($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X4);
    // 0x801D1260: lwc1        $f4, 0xC($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0XC);
    // 0x801D1264: lwc1        $f10, 0x4($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X4);
    // 0x801D1268: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801D126C: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x801D1270: swc1        $f4, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f4.u32l;
    // 0x801D1274: lwc1        $f10, 0x8($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801D1278: lwc1        $f6, 0x10($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X10);
    // 0x801D127C: lwc1        $f4, 0x8($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801D1280: sw          $v1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r3;
    // 0x801D1284: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x801D1288: lwc1        $f10, 0x98($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X98);
    // 0x801D128C: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x801D1290: lwc1        $f4, 0xC0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x801D1294: lwc1        $f8, 0x9C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x801D1298: swc1        $f6, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f6.u32l;
    // 0x801D129C: lwc1        $f6, 0xC4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x801D12A0: add.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x801D12A4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801D12A8: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x801D12AC: lwc1        $f6, 0xC8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x801D12B0: lwc1        $f8, 0xA0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x801D12B4: sub.s       $f14, $f10, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x801D12B8: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x801D12BC: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x801D12C0: jal         0x80029E08
    // 0x801D12C4: nop

    func_80029E08_2AA08(rdram, ctx);
        goto after_2;
    // 0x801D12C4: nop

    after_2:
    // 0x801D12C8: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x801D12CC: bne         $v0, $at, L_801D12E4
    if (ctx->r2 != ctx->r1) {
        // 0x801D12D0: lw          $v1, 0x6C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X6C);
            goto L_801D12E4;
    }
    // 0x801D12D0: lw          $v1, 0x6C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X6C);
    // 0x801D12D4: lw          $v0, 0x5C($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X5C);
    // 0x801D12D8: lhu         $t4, 0xA($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0XA);
    // 0x801D12DC: or          $t5, $t4, $s3
    ctx->r13 = ctx->r12 | ctx->r19;
    // 0x801D12E0: sh          $t5, 0xA($v0)
    MEM_H(0XA, ctx->r2) = ctx->r13;
L_801D12E4:
    // 0x801D12E4: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x801D12E8: sll         $t6, $s3, 1
    ctx->r14 = S32(ctx->r19 << 1);
    // 0x801D12EC: addiu       $at, $zero, 0x30
    ctx->r1 = ADD32(0, 0X30);
    // 0x801D12F0: andi        $s3, $t6, 0xFFFF
    ctx->r19 = ctx->r14 & 0XFFFF;
    // 0x801D12F4: bne         $s0, $at, L_801D1224
    if (ctx->r16 != ctx->r1) {
        // 0x801D12F8: addiu       $v1, $v1, 0xC
        ctx->r3 = ADD32(ctx->r3, 0XC);
            goto L_801D1224;
    }
    // 0x801D12F8: addiu       $v1, $v1, 0xC
    ctx->r3 = ADD32(ctx->r3, 0XC);
    // 0x801D12FC: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x801D1300: lhu         $t8, -0x359A($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X359A);
    // 0x801D1304: bnel        $t8, $zero, L_801D1318
    if (ctx->r24 != 0) {
        // 0x801D1308: lwc1        $f4, 0xB4($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0XB4);
            goto L_801D1318;
    }
    goto skip_11;
    // 0x801D1308: lwc1        $f4, 0xB4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB4);
    skip_11:
    // 0x801D130C: lw          $t9, 0x5C($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X5C);
    // 0x801D1310: sh          $zero, 0xA($t9)
    MEM_H(0XA, ctx->r25) = 0;
    // 0x801D1314: lwc1        $f4, 0xB4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB4);
L_801D1318:
    // 0x801D1318: swc1        $f4, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f4.u32l;
    // 0x801D131C: lwc1        $f8, 0xB8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x801D1320: swc1        $f8, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f8.u32l;
    // 0x801D1324: lwc1        $f6, 0xBC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x801D1328: swc1        $f6, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f6.u32l;
    // 0x801D132C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x801D1330: lw          $s5, 0x48($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X48);
    // 0x801D1334: lw          $s4, 0x44($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X44);
    // 0x801D1338: lw          $s3, 0x40($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X40);
    // 0x801D133C: lw          $s2, 0x3C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X3C);
    // 0x801D1340: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x801D1344: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x801D1348: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x801D134C: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x801D1350: jr          $ra
    // 0x801D1354: addiu       $sp, $sp, 0x120
    ctx->r29 = ADD32(ctx->r29, 0X120);
    TRACE_RETURN()
    return;
    // 0x801D1354: addiu       $sp, $sp, 0x120
    ctx->r29 = ADD32(ctx->r29, 0X120);
;}
RECOMP_FUNC void func_801D7900_593810(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D7900: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x801D7904: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x801D7908: addiu       $t0, $t0, -0x2E2A
    ctx->r8 = ADD32(ctx->r8, -0X2E2A);
    // 0x801D790C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801D7910: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801D7914: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x801D7918: lhu         $t6, 0x6A($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X6A);
    // 0x801D791C: lhu         $a2, 0x0($t0)
    ctx->r6 = MEM_HU(ctx->r8, 0X0);
    // 0x801D7920: lbu         $t8, 0xAB($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0XAB);
    // 0x801D7924: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801D7928: subu        $v1, $t6, $a2
    ctx->r3 = SUB32(ctx->r14, ctx->r6);
    // 0x801D792C: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x801D7930: beq         $t8, $zero, L_801D79D0
    if (ctx->r24 == 0) {
        // 0x801D7934: andi        $t7, $v1, 0xFFFF
        ctx->r15 = ctx->r3 & 0XFFFF;
            goto L_801D79D0;
    }
    // 0x801D7934: andi        $t7, $v1, 0xFFFF
    ctx->r15 = ctx->r3 & 0XFFFF;
    // 0x801D7938: addiu       $t9, $t7, 0x20
    ctx->r25 = ADD32(ctx->r15, 0X20);
    // 0x801D793C: andi        $t1, $t9, 0xFFFF
    ctx->r9 = ctx->r25 & 0XFFFF;
    // 0x801D7940: slti        $at, $t1, 0x41
    ctx->r1 = SIGNED(ctx->r9) < 0X41 ? 1 : 0;
    // 0x801D7944: sh          $zero, 0xB8($a0)
    MEM_H(0XB8, ctx->r4) = 0;
    // 0x801D7948: beq         $at, $zero, L_801D7968
    if (ctx->r1 == 0) {
        // 0x801D794C: or          $v0, $t7, $zero
        ctx->r2 = ctx->r15 | 0;
            goto L_801D7968;
    }
    // 0x801D794C: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x801D7950: lhu         $t2, 0x6A($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0X6A);
    // 0x801D7954: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801D7958: sh          $t2, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r10;
    // 0x801D795C: sb          $zero, 0xAB($a0)
    MEM_B(0XAB, ctx->r4) = 0;
    // 0x801D7960: b           L_801D7B60
    // 0x801D7964: sh          $zero, 0xB8($a0)
    MEM_H(0XB8, ctx->r4) = 0;
        goto L_801D7B60;
    // 0x801D7964: sh          $zero, 0xB8($a0)
    MEM_H(0XB8, ctx->r4) = 0;
L_801D7968:
    // 0x801D7968: andi        $t4, $v0, 0x8000
    ctx->r12 = ctx->r2 & 0X8000;
    // 0x801D796C: beq         $t4, $zero, L_801D7980
    if (ctx->r12 == 0) {
        // 0x801D7970: lui         $a0, 0x8021
        ctx->r4 = S32(0X8021 << 16);
            goto L_801D7980;
    }
    // 0x801D7970: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x801D7974: addiu       $t5, $zero, 0x100
    ctx->r13 = ADD32(0, 0X100);
    // 0x801D7978: b           L_801D7988
    // 0x801D797C: sh          $t5, 0xB8($s0)
    MEM_H(0XB8, ctx->r16) = ctx->r13;
        goto L_801D7988;
    // 0x801D797C: sh          $t5, 0xB8($s0)
    MEM_H(0XB8, ctx->r16) = ctx->r13;
L_801D7980:
    // 0x801D7980: ori         $t6, $zero, 0xFF00
    ctx->r14 = 0 | 0XFF00;
    // 0x801D7984: sh          $t6, 0xB8($s0)
    MEM_H(0XB8, ctx->r16) = ctx->r14;
L_801D7988:
    // 0x801D7988: lhu         $t7, 0xB8($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0XB8);
    // 0x801D798C: lhu         $t8, 0x0($t0)
    ctx->r24 = MEM_HU(ctx->r8, 0X0);
    // 0x801D7990: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x801D7994: sh          $t9, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r25;
    // 0x801D7998: lhu         $t1, 0xB8($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0XB8);
    // 0x801D799C: xor         $t2, $t1, $v0
    ctx->r10 = ctx->r9 ^ ctx->r2;
    // 0x801D79A0: andi        $t3, $t2, 0x8000
    ctx->r11 = ctx->r10 & 0X8000;
    // 0x801D79A4: bne         $t3, $zero, L_801D79C8
    if (ctx->r11 != 0) {
        // 0x801D79A8: nop
    
            goto L_801D79C8;
    }
    // 0x801D79A8: nop

    // 0x801D79AC: lhu         $v1, 0x6A($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X6A);
    // 0x801D79B0: subu        $t5, $v1, $t9
    ctx->r13 = SUB32(ctx->r3, ctx->r25);
    // 0x801D79B4: xor         $t6, $t5, $v0
    ctx->r14 = ctx->r13 ^ ctx->r2;
    // 0x801D79B8: andi        $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 & 0X8000;
    // 0x801D79BC: beq         $t7, $zero, L_801D79C8
    if (ctx->r15 == 0) {
        // 0x801D79C0: nop
    
            goto L_801D79C8;
    }
    // 0x801D79C0: nop

    // 0x801D79C4: sh          $v1, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r3;
L_801D79C8:
    // 0x801D79C8: b           L_801D7AC4
    // 0x801D79CC: lhu         $a0, -0x2E2A($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X2E2A);
        goto L_801D7AC4;
    // 0x801D79CC: lhu         $a0, -0x2E2A($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X2E2A);
L_801D79D0:
    // 0x801D79D0: lbu         $v1, 0xA3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA3);
    // 0x801D79D4: beq         $v1, $zero, L_801D7A60
    if (ctx->r3 == 0) {
        // 0x801D79D8: andi        $t8, $v1, 0x1
        ctx->r24 = ctx->r3 & 0X1;
            goto L_801D7A60;
    }
    // 0x801D79D8: andi        $t8, $v1, 0x1
    ctx->r24 = ctx->r3 & 0X1;
    // 0x801D79DC: beq         $t8, $zero, L_801D7A08
    if (ctx->r24 == 0) {
        // 0x801D79E0: or          $a0, $v1, $zero
        ctx->r4 = ctx->r3 | 0;
            goto L_801D7A08;
    }
    // 0x801D79E0: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x801D79E4: beql        $v1, $zero, L_801D7A0C
    if (ctx->r3 == 0) {
        // 0x801D79E8: andi        $t2, $a0, 0x2
        ctx->r10 = ctx->r4 & 0X2;
            goto L_801D7A0C;
    }
    goto skip_0;
    // 0x801D79E8: andi        $t2, $a0, 0x2
    ctx->r10 = ctx->r4 & 0X2;
    skip_0:
    // 0x801D79EC: lhu         $t9, 0xCE($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0XCE);
    // 0x801D79F0: subu        $a1, $t9, $a2
    ctx->r5 = SUB32(ctx->r25, ctx->r6);
    // 0x801D79F4: andi        $t1, $a1, 0xFFFF
    ctx->r9 = ctx->r5 & 0XFFFF;
    // 0x801D79F8: slti        $at, $t1, 0x400
    ctx->r1 = SIGNED(ctx->r9) < 0X400 ? 1 : 0;
    // 0x801D79FC: beql        $at, $zero, L_801D7A0C
    if (ctx->r1 == 0) {
        // 0x801D7A00: andi        $t2, $a0, 0x2
        ctx->r10 = ctx->r4 & 0X2;
            goto L_801D7A0C;
    }
    goto skip_1;
    // 0x801D7A00: andi        $t2, $a0, 0x2
    ctx->r10 = ctx->r4 & 0X2;
    skip_1:
    // 0x801D7A04: andi        $v0, $a1, 0xFFFF
    ctx->r2 = ctx->r5 & 0XFFFF;
L_801D7A08:
    // 0x801D7A08: andi        $t2, $a0, 0x2
    ctx->r10 = ctx->r4 & 0X2;
L_801D7A0C:
    // 0x801D7A0C: beql        $t2, $zero, L_801D7A54
    if (ctx->r10 == 0) {
        // 0x801D7A10: addu        $t7, $a2, $v0
        ctx->r15 = ADD32(ctx->r6, ctx->r2);
            goto L_801D7A54;
    }
    goto skip_2;
    // 0x801D7A10: addu        $t7, $a2, $v0
    ctx->r15 = ADD32(ctx->r6, ctx->r2);
    skip_2:
    // 0x801D7A14: beql        $v1, $zero, L_801D7A48
    if (ctx->r3 == 0) {
        // 0x801D7A18: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_801D7A48;
    }
    goto skip_3;
    // 0x801D7A18: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_3:
    // 0x801D7A1C: lhu         $v1, 0xCE($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XCE);
    // 0x801D7A20: subu        $t3, $a2, $v1
    ctx->r11 = SUB32(ctx->r6, ctx->r3);
    // 0x801D7A24: andi        $t4, $t3, 0xFFFF
    ctx->r12 = ctx->r11 & 0XFFFF;
    // 0x801D7A28: slt         $at, $t4, $v0
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x801D7A2C: beql        $at, $zero, L_801D7A48
    if (ctx->r1 == 0) {
        // 0x801D7A30: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_801D7A48;
    }
    goto skip_4;
    // 0x801D7A30: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_4:
    // 0x801D7A34: subu        $v0, $v1, $a2
    ctx->r2 = SUB32(ctx->r3, ctx->r6);
    // 0x801D7A38: andi        $t5, $v0, 0xFFFF
    ctx->r13 = ctx->r2 & 0XFFFF;
    // 0x801D7A3C: b           L_801D7A50
    // 0x801D7A40: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
        goto L_801D7A50;
    // 0x801D7A40: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
    // 0x801D7A44: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
L_801D7A48:
    // 0x801D7A48: andi        $t6, $v0, 0xFFFF
    ctx->r14 = ctx->r2 & 0XFFFF;
    // 0x801D7A4C: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
L_801D7A50:
    // 0x801D7A50: addu        $t7, $a2, $v0
    ctx->r15 = ADD32(ctx->r6, ctx->r2);
L_801D7A54:
    // 0x801D7A54: sh          $t7, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r15;
    // 0x801D7A58: b           L_801D7AC4
    // 0x801D7A5C: andi        $a0, $t7, 0xFFFF
    ctx->r4 = ctx->r15 & 0XFFFF;
        goto L_801D7AC4;
    // 0x801D7A5C: andi        $a0, $t7, 0xFFFF
    ctx->r4 = ctx->r15 & 0XFFFF;
L_801D7A60:
    // 0x801D7A60: lbu         $v0, 0xBD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XBD);
    // 0x801D7A64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D7A68: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x801D7A6C: andi        $t8, $v0, 0x80
    ctx->r24 = ctx->r2 & 0X80;
    // 0x801D7A70: beq         $t8, $zero, L_801D7ABC
    if (ctx->r24 == 0) {
        // 0x801D7A74: andi        $t9, $v0, 0x1
        ctx->r25 = ctx->r2 & 0X1;
            goto L_801D7ABC;
    }
    // 0x801D7A74: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
    // 0x801D7A78: beq         $t9, $zero, L_801D7A88
    if (ctx->r25 == 0) {
        // 0x801D7A7C: addiu       $a3, $zero, 0x120
        ctx->r7 = ADD32(0, 0X120);
            goto L_801D7A88;
    }
    // 0x801D7A7C: addiu       $a3, $zero, 0x120
    ctx->r7 = ADD32(0, 0X120);
    // 0x801D7A80: b           L_801D7A8C
    // 0x801D7A84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801D7A8C;
    // 0x801D7A84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801D7A88:
    // 0x801D7A88: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
L_801D7A8C:
    // 0x801D7A8C: addiu       $t1, $zero, 0x120
    ctx->r9 = ADD32(0, 0X120);
    // 0x801D7A90: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x801D7A94: jal         0x801D7868
    // 0x801D7A98: andi        $a2, $v0, 0xFFFF
    ctx->r6 = ctx->r2 & 0XFFFF;
    func_801D7868_593778(rdram, ctx);
        goto after_0;
    // 0x801D7A98: andi        $a2, $v0, 0xFFFF
    ctx->r6 = ctx->r2 & 0XFFFF;
    after_0:
    // 0x801D7A9C: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x801D7AA0: addiu       $t0, $t0, -0x2E2A
    ctx->r8 = ADD32(ctx->r8, -0X2E2A);
    // 0x801D7AA4: lhu         $t3, 0x0($t0)
    ctx->r11 = MEM_HU(ctx->r8, 0X0);
    // 0x801D7AA8: lhu         $t2, 0xB8($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0XB8);
    // 0x801D7AAC: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x801D7AB0: sh          $t4, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r12;
    // 0x801D7AB4: b           L_801D7AC4
    // 0x801D7AB8: andi        $a0, $t4, 0xFFFF
    ctx->r4 = ctx->r12 & 0XFFFF;
        goto L_801D7AC4;
    // 0x801D7AB8: andi        $a0, $t4, 0xFFFF
    ctx->r4 = ctx->r12 & 0XFFFF;
L_801D7ABC:
    // 0x801D7ABC: b           L_801D7B60
    // 0x801D7AC0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801D7B60;
    // 0x801D7AC0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D7AC4:
    // 0x801D7AC4: jal         0x80003D88
    // 0x801D7AC8: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    func_80003D88_4988(rdram, ctx);
        goto after_1;
    // 0x801D7AC8: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    after_1:
    // 0x801D7ACC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D7AD0: lwc1        $f2, -0x2E30($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X2E30);
    // 0x801D7AD4: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801D7AD8: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D7ADC: addiu       $v0, $v0, -0x2E40
    ctx->r2 = ADD32(ctx->r2, -0X2E40);
    // 0x801D7AE0: mul.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x801D7AE4: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x801D7AE8: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801D7AEC: mul.s       $f16, $f2, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x801D7AF0: addiu       $t5, $zero, 0x3F00
    ctx->r13 = ADD32(0, 0X3F00);
    // 0x801D7AF4: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x801D7AF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D7AFC: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x801D7B00: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x801D7B04: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801D7B08: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    // 0x801D7B0C: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x801D7B10: swc1        $f10, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f10.u32l;
    // 0x801D7B14: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801D7B18: swc1        $f6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f6.u32l;
    // 0x801D7B1C: jal         0x801D56D0
    // 0x801D7B20: swc1        $f4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f4.u32l;
    func_801D56D0_5915E0(rdram, ctx);
        goto after_2;
    // 0x801D7B20: swc1        $f4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x801D7B24: lbu         $t6, 0xA3($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0XA3);
    // 0x801D7B28: andi        $v1, $v0, 0xFFFF
    ctx->r3 = ctx->r2 & 0XFFFF;
    // 0x801D7B2C: andi        $t7, $v0, 0xFFFF
    ctx->r15 = ctx->r2 & 0XFFFF;
    // 0x801D7B30: beq         $t6, $zero, L_801D7B44
    if (ctx->r14 == 0) {
        // 0x801D7B34: andi        $t8, $v0, 0xFFFF
        ctx->r24 = ctx->r2 & 0XFFFF;
            goto L_801D7B44;
    }
    // 0x801D7B34: andi        $t8, $v0, 0xFFFF
    ctx->r24 = ctx->r2 & 0XFFFF;
    // 0x801D7B38: bne         $t7, $zero, L_801D7B44
    if (ctx->r15 != 0) {
        // 0x801D7B3C: nop
    
            goto L_801D7B44;
    }
    // 0x801D7B3C: nop

    // 0x801D7B40: sb          $zero, 0xA3($s0)
    MEM_B(0XA3, ctx->r16) = 0;
L_801D7B44:
    // 0x801D7B44: beq         $t8, $zero, L_801D7B5C
    if (ctx->r24 == 0) {
        // 0x801D7B48: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801D7B5C;
    }
    // 0x801D7B48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D7B4C: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x801D7B50: jal         0x801D72D4
    // 0x801D7B54: sh          $v1, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r3;
    func_801D72D4_5931E4(rdram, ctx);
        goto after_3;
    // 0x801D7B54: sh          $v1, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r3;
    after_3:
    // 0x801D7B58: lhu         $v1, 0x3E($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X3E);
L_801D7B5C:
    // 0x801D7B5C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_801D7B60:
    // 0x801D7B60: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801D7B64: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801D7B68: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x801D7B6C: jr          $ra
    // 0x801D7B70: nop

    TRACE_RETURN()
    return;
    // 0x801D7B70: nop

;}
RECOMP_FUNC void func_801EA5E4_5A64F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EA5E4: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x801EA5E8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801EA5EC: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x801EA5F0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x801EA5F4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801EA5F8: lbu         $v0, 0xCC($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XCC);
    // 0x801EA5FC: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801EA600: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801EA604: xori        $t2, $v0, 0x77
    ctx->r10 = ctx->r2 ^ 0X77;
    // 0x801EA608: sltiu       $t2, $t2, 0x1
    ctx->r10 = ctx->r10 < 0X1 ? 1 : 0;
    // 0x801EA60C: lw          $s2, 0x18($a0)
    ctx->r18 = MEM_W(ctx->r4, 0X18);
    // 0x801EA610: lw          $t1, 0x18($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X18);
    // 0x801EA614: bne         $t2, $zero, L_801EA624
    if (ctx->r10 != 0) {
        // 0x801EA618: lw          $t0, 0x18($a2)
        ctx->r8 = MEM_W(ctx->r6, 0X18);
            goto L_801EA624;
    }
    // 0x801EA618: lw          $t0, 0x18($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X18);
    // 0x801EA61C: xori        $t2, $v0, 0x78
    ctx->r10 = ctx->r2 ^ 0X78;
    // 0x801EA620: sltiu       $t2, $t2, 0x1
    ctx->r10 = ctx->r10 < 0X1 ? 1 : 0;
L_801EA624:
    // 0x801EA624: lwc1        $f4, 0x8($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X8);
    // 0x801EA628: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801EA62C: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x801EA630: swc1        $f4, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f4.u32l;
    // 0x801EA634: lwc1        $f6, 0xC($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0XC);
    // 0x801EA638: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EA63C: swc1        $f6, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->f6.u32l;
    // 0x801EA640: lwc1        $f8, 0x10($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X10);
    // 0x801EA644: sb          $t6, 0x64($s2)
    MEM_B(0X64, ctx->r18) = ctx->r14;
    // 0x801EA648: swc1        $f8, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->f8.u32l;
    // 0x801EA64C: lw          $t8, 0x5C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X5C);
    // 0x801EA650: sh          $t7, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r15;
    // 0x801EA654: lw          $a3, 0x10($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X10);
    // 0x801EA658: lw          $a2, 0xC($t0)
    ctx->r6 = MEM_W(ctx->r8, 0XC);
    // 0x801EA65C: lw          $a1, 0x8($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X8);
    // 0x801EA660: sw          $t2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r10;
    // 0x801EA664: sw          $t1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r9;
    // 0x801EA668: jal         0x801CF51C
    // 0x801EA66C: sw          $t0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r8;
    func_801CF51C_58B42C(rdram, ctx);
        goto after_0;
    // 0x801EA66C: sw          $t0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r8;
    after_0:
    // 0x801EA670: lw          $t9, 0x5C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X5C);
    // 0x801EA674: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EA678: lwc1        $f2, -0x4798($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X4798);
    // 0x801EA67C: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x801EA680: lw          $t1, 0x60($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X60);
    // 0x801EA684: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x801EA688: sh          $v0, 0x2($t9)
    MEM_H(0X2, ctx->r25) = ctx->r2;
    // 0x801EA68C: lw          $v1, 0x5C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X5C);
    // 0x801EA690: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EA694: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801EA698: lhu         $t3, 0x2($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0X2);
    // 0x801EA69C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801EA6A0: addiu       $a3, $sp, 0x4C
    ctx->r7 = ADD32(ctx->r29, 0X4C);
    // 0x801EA6A4: sh          $t3, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r11;
    // 0x801EA6A8: lwc1        $f10, -0x4794($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X4794);
    // 0x801EA6AC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801EA6B0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801EA6B4: swc1        $f10, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f10.u32l;
    // 0x801EA6B8: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x801EA6BC: swc1        $f2, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->f2.u32l;
    // 0x801EA6C0: swc1        $f2, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->f2.u32l;
    // 0x801EA6C4: swc1        $f16, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->f16.u32l;
    // 0x801EA6C8: swc1        $f16, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->f16.u32l;
    // 0x801EA6CC: swc1        $f16, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f16.u32l;
    // 0x801EA6D0: swc1        $f0, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->f0.u32l;
    // 0x801EA6D4: swc1        $f0, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->f0.u32l;
    // 0x801EA6D8: swc1        $f18, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->f18.u32l;
    // 0x801EA6DC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801EA6E0: lwc1        $f4, 0xC($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0XC);
    // 0x801EA6E4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801EA6E8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801EA6EC: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801EA6F0: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801EA6F4: addiu       $t4, $sp, 0x50
    ctx->r12 = ADD32(ctx->r29, 0X50);
    // 0x801EA6F8: addiu       $t5, $sp, 0x54
    ctx->r13 = ADD32(ctx->r29, 0X54);
    // 0x801EA6FC: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801EA700: swc1        $f18, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->f18.u32l;
    // 0x801EA704: beq         $t2, $zero, L_801EA714
    if (ctx->r10 == 0) {
        // 0x801EA708: sh          $zero, 0x98($s0)
        MEM_H(0X98, ctx->r16) = 0;
            goto L_801EA714;
    }
    // 0x801EA708: sh          $zero, 0x98($s0)
    MEM_H(0X98, ctx->r16) = 0;
    // 0x801EA70C: b           L_801EA718
    // 0x801EA710: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
        goto L_801EA718;
    // 0x801EA710: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
L_801EA714:
    // 0x801EA714: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
L_801EA718:
    // 0x801EA718: beql        $t2, $zero, L_801EA734
    if (ctx->r10 == 0) {
        // 0x801EA71C: mtc1        $at, $f6
        ctx->f6.u32l = ctx->r1;
            goto L_801EA734;
    }
    goto skip_0;
    // 0x801EA71C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    skip_0:
    // 0x801EA720: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801EA724: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801EA728: b           L_801EA73C
    // 0x801EA72C: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
        goto L_801EA73C;
    // 0x801EA72C: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    // 0x801EA730: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
L_801EA734:
    // 0x801EA734: nop

    // 0x801EA738: swc1        $f6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f6.u32l;
L_801EA73C:
    // 0x801EA73C: beq         $t2, $zero, L_801EA754
    if (ctx->r10 == 0) {
        // 0x801EA740: lui         $at, 0x4160
        ctx->r1 = S32(0X4160 << 16);
            goto L_801EA754;
    }
    // 0x801EA740: lui         $at, 0x4160
    ctx->r1 = S32(0X4160 << 16);
    // 0x801EA744: lui         $at, 0x4138
    ctx->r1 = S32(0X4138 << 16);
    // 0x801EA748: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801EA74C: b           L_801EA760
    // 0x801EA750: swc1        $f8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f8.u32l;
        goto L_801EA760;
    // 0x801EA750: swc1        $f8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f8.u32l;
L_801EA754:
    // 0x801EA754: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801EA758: nop

    // 0x801EA75C: swc1        $f10, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f10.u32l;
L_801EA760:
    // 0x801EA760: lhu         $a0, 0x14($t1)
    ctx->r4 = MEM_HU(ctx->r9, 0X14);
    // 0x801EA764: lhu         $a1, 0x16($t1)
    ctx->r5 = MEM_HU(ctx->r9, 0X16);
    // 0x801EA768: lhu         $a2, 0x18($t1)
    ctx->r6 = MEM_HU(ctx->r9, 0X18);
    // 0x801EA76C: sw          $t1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r9;
    // 0x801EA770: sw          $t0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r8;
    // 0x801EA774: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x801EA778: jal         0x80033898
    // 0x801EA77C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    func_80033898_34498(rdram, ctx);
        goto after_1;
    // 0x801EA77C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    after_1:
    // 0x801EA780: lwc1        $f18, 0x4C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801EA784: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x801EA788: lw          $t1, 0x60($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X60);
    // 0x801EA78C: swc1        $f18, 0x9C($s1)
    MEM_W(0X9C, ctx->r17) = ctx->f18.u32l;
    // 0x801EA790: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x801EA794: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801EA798: addiu       $at, $zero, 0x78
    ctx->r1 = ADD32(0, 0X78);
    // 0x801EA79C: swc1        $f4, 0xA0($s1)
    MEM_W(0XA0, ctx->r17) = ctx->f4.u32l;
    // 0x801EA7A0: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801EA7A4: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x801EA7A8: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x801EA7AC: swc1        $f6, 0xA4($s1)
    MEM_W(0XA4, ctx->r17) = ctx->f6.u32l;
    // 0x801EA7B0: lwc1        $f8, 0x8($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X8);
    // 0x801EA7B4: lwc1        $f10, 0x8($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X8);
    // 0x801EA7B8: lwc1        $f18, 0xC($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0XC);
    // 0x801EA7BC: lwc1        $f4, 0xC($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0XC);
    // 0x801EA7C0: sub.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x801EA7C4: lwc1        $f6, 0x10($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X10);
    // 0x801EA7C8: lwc1        $f8, 0x10($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X10);
    // 0x801EA7CC: sub.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x801EA7D0: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x801EA7D4: lbu         $t6, 0xCC($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0XCC);
    // 0x801EA7D8: sub.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x801EA7DC: mul.s       $f18, $f12, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x801EA7E0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x801EA7E4: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x801EA7E8: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x801EA7EC: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801EA7F0: bne         $t6, $at, L_801EA804
    if (ctx->r14 != ctx->r1) {
        // 0x801EA7F4: sqrt.s      $f0, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
            goto L_801EA804;
    }
    // 0x801EA7F4: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x801EA7F8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EA7FC: b           L_801EA80C
    // 0x801EA800: ldc1        $f2, -0x4790($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, -0X4790);
        goto L_801EA80C;
    // 0x801EA800: ldc1        $f2, -0x4790($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, -0X4790);
L_801EA804:
    // 0x801EA804: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EA808: ldc1        $f2, -0x4788($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, -0X4788);
L_801EA80C:
    // 0x801EA80C: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x801EA810: sub.d       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f2.d); 
    ctx->f10.d = ctx->f8.d - ctx->f2.d;
    // 0x801EA814: cvt.s.d     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f18.fl = CVT_S_D(ctx->f10.d);
    // 0x801EA818: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x801EA81C: nop

    // 0x801EA820: bc1fl       L_801EA834
    if (!c1cs) {
        // 0x801EA824: sb          $t8, 0x60($s1)
        MEM_B(0X60, ctx->r17) = ctx->r24;
            goto L_801EA834;
    }
    goto skip_1;
    // 0x801EA824: sb          $t8, 0x60($s1)
    MEM_B(0X60, ctx->r17) = ctx->r24;
    skip_1:
    // 0x801EA828: b           L_801EA834
    // 0x801EA82C: sb          $t7, 0x60($s1)
    MEM_B(0X60, ctx->r17) = ctx->r15;
        goto L_801EA834;
    // 0x801EA82C: sb          $t7, 0x60($s1)
    MEM_B(0X60, ctx->r17) = ctx->r15;
    // 0x801EA830: sb          $t8, 0x60($s1)
    MEM_B(0X60, ctx->r17) = ctx->r24;
L_801EA834:
    // 0x801EA834: jal         0x801EE25C
    // 0x801EA838: lw          $a1, 0xBC($s1)
    ctx->r5 = MEM_W(ctx->r17, 0XBC);
    func_801EE25C_5AA16C(rdram, ctx);
        goto after_2;
    // 0x801EA838: lw          $a1, 0xBC($s1)
    ctx->r5 = MEM_W(ctx->r17, 0XBC);
    after_2:
    // 0x801EA83C: lw          $t3, 0xBC($s1)
    ctx->r11 = MEM_W(ctx->r17, 0XBC);
    // 0x801EA840: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801EA844: sb          $t9, 0x64($t3)
    MEM_B(0X64, ctx->r11) = ctx->r25;
    // 0x801EA848: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x801EA84C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x801EA850: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x801EA854: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801EA858: jr          $ra
    // 0x801EA85C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    TRACE_RETURN()
    return;
    // 0x801EA85C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_801E241C_59E32C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E241C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E2420: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801E2424: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E2428: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E242C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x801E2430: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801E2434: jal         0x801E32D4
    // 0x801E2438: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_801E32D4_59F1E4(rdram, ctx);
        goto after_0;
    // 0x801E2438: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_0:
    // 0x801E243C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E2440: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E2444: jr          $ra
    // 0x801E2448: nop

    TRACE_RETURN()
    return;
    // 0x801E2448: nop

;}
RECOMP_FUNC void func_801E0794_59C6A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E0794: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E0798: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x801E079C: lw          $t7, -0x39E4($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X39E4);
    // 0x801E07A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E07A4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801E07A8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E07AC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801E07B0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x801E07B4: sb          $t6, 0x64($t7)
    MEM_B(0X64, ctx->r15) = ctx->r14;
    // 0x801E07B8: sw          $zero, -0x383C($at)
    MEM_W(-0X383C, ctx->r1) = 0;
    // 0x801E07BC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801E07C0: jal         0x801DD720
    // 0x801E07C4: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_801DD720_599630(rdram, ctx);
        goto after_0;
    // 0x801E07C4: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_0:
    // 0x801E07C8: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x801E07CC: mtc1        $zero, $f5
    ctx->f_odd[(5 - 1) * 2] = 0;
    // 0x801E07D0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801E07D4: lwc1        $f6, 0x28($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X28);
    // 0x801E07D8: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801E07DC: c.le.d      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.d <= ctx->f4.d;
    // 0x801E07E0: nop

    // 0x801E07E4: bc1fl       L_801E0804
    if (!c1cs) {
        // 0x801E07E8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E0804;
    }
    goto skip_0;
    // 0x801E07E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801E07EC: jal         0x801E6E98
    // 0x801E07F0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801E6E98_5A2DA8(rdram, ctx);
        goto after_1;
    // 0x801E07F0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x801E07F4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801E07F8: jal         0x801DACDC
    // 0x801E07FC: addiu       $a1, $zero, 0x38
    ctx->r5 = ADD32(0, 0X38);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_2;
    // 0x801E07FC: addiu       $a1, $zero, 0x38
    ctx->r5 = ADD32(0, 0X38);
    after_2:
    // 0x801E0800: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E0804:
    // 0x801E0804: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E0808: jr          $ra
    // 0x801E080C: nop

    TRACE_RETURN()
    return;
    // 0x801E080C: nop

;}
RECOMP_FUNC void func_801EDBB8_5A9AC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EDBB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801EDBBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801EDBC0: lw          $v0, 0x38($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X38);
    // 0x801EDBC4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x801EDBC8: beql        $v0, $zero, L_801EDBF4
    if (ctx->r2 == 0) {
        // 0x801EDBCC: sw          $zero, 0x38($a1)
        MEM_W(0X38, ctx->r5) = 0;
            goto L_801EDBF4;
    }
    goto skip_0;
    // 0x801EDBCC: sw          $zero, 0x38($a1)
    MEM_W(0X38, ctx->r5) = 0;
    skip_0:
    // 0x801EDBD0: lbu         $t6, 0x4C($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X4C);
    // 0x801EDBD4: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x801EDBD8: addiu       $a0, $zero, 0x23B
    ctx->r4 = ADD32(0, 0X23B);
    // 0x801EDBDC: bnel        $t6, $at, L_801EDBF4
    if (ctx->r14 != ctx->r1) {
        // 0x801EDBE0: sw          $zero, 0x38($a1)
        MEM_W(0X38, ctx->r5) = 0;
            goto L_801EDBF4;
    }
    goto skip_1;
    // 0x801EDBE0: sw          $zero, 0x38($a1)
    MEM_W(0X38, ctx->r5) = 0;
    skip_1:
    // 0x801EDBE4: jal         0x80038BC8
    // 0x801EDBE8: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_80038BC8_397C8(rdram, ctx);
        goto after_0;
    // 0x801EDBE8: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x801EDBEC: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x801EDBF0: sw          $zero, 0x38($a1)
    MEM_W(0X38, ctx->r5) = 0;
L_801EDBF4:
    // 0x801EDBF4: sw          $zero, 0x34($a1)
    MEM_W(0X34, ctx->r5) = 0;
    // 0x801EDBF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801EDBFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801EDC00: jr          $ra
    // 0x801EDC04: nop

    TRACE_RETURN()
    return;
    // 0x801EDC04: nop

;}
RECOMP_FUNC void func_801DEE08_59AD18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DEE08: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801DEE0C: lbu         $t6, -0x3594($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X3594);
    // 0x801DEE10: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801DEE14: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801DEE18: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801DEE1C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801DEE20: beq         $t6, $zero, L_801DEE30
    if (ctx->r14 == 0) {
        // 0x801DEE24: sw          $a1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r5;
            goto L_801DEE30;
    }
    // 0x801DEE24: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801DEE28: jal         0x801DD720
    // 0x801DEE2C: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    func_801DD720_599630(rdram, ctx);
        goto after_0;
    // 0x801DEE2C: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_0:
L_801DEE30:
    // 0x801DEE30: lhu         $t7, 0x98($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X98);
    // 0x801DEE34: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801DEE38: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801DEE3C: bnel        $t7, $zero, L_801DEE6C
    if (ctx->r15 != 0) {
        // 0x801DEE40: lbu         $t8, 0x90($s0)
        ctx->r24 = MEM_BU(ctx->r16, 0X90);
            goto L_801DEE6C;
    }
    goto skip_0;
    // 0x801DEE40: lbu         $t8, 0x90($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X90);
    skip_0:
    // 0x801DEE44: jal         0x801E3324
    // 0x801DEE48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E3324_59F234(rdram, ctx);
        goto after_1;
    // 0x801DEE48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801DEE4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DEE50: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x801DEE54: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x801DEE58: jal         0x801DAC7C
    // 0x801DEE5C: lbu         $a3, 0xDB($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XDB);
    func_801DAC7C_596B8C(rdram, ctx);
        goto after_2;
    // 0x801DEE5C: lbu         $a3, 0xDB($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XDB);
    after_2:
    // 0x801DEE60: b           L_801DEF08
    // 0x801DEE64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801DEF08;
    // 0x801DEE64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801DEE68: lbu         $t8, 0x90($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X90);
L_801DEE6C:
    // 0x801DEE6C: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x801DEE70: addiu       $t1, $t1, -0x3340
    ctx->r9 = ADD32(ctx->r9, -0X3340);
    // 0x801DEE74: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x801DEE78: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x801DEE7C: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x801DEE80: addu        $t0, $t9, $at
    ctx->r8 = ADD32(ctx->r25, ctx->r1);
    // 0x801DEE84: addu        $v0, $t0, $t1
    ctx->r2 = ADD32(ctx->r8, ctx->r9);
    // 0x801DEE88: lhu         $t2, 0x30F2($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X30F2);
    // 0x801DEE8C: andi        $t3, $t2, 0x2000
    ctx->r11 = ctx->r10 & 0X2000;
    // 0x801DEE90: bnel        $t3, $zero, L_801DEEB8
    if (ctx->r11 != 0) {
        // 0x801DEE94: lhu         $t4, 0x30F4($v0)
        ctx->r12 = MEM_HU(ctx->r2, 0X30F4);
            goto L_801DEEB8;
    }
    goto skip_1;
    // 0x801DEE94: lhu         $t4, 0x30F4($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X30F4);
    skip_1:
    // 0x801DEE98: jal         0x801E3178
    // 0x801DEE9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E3178_59F088(rdram, ctx);
        goto after_3;
    // 0x801DEE9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801DEEA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DEEA4: jal         0x801DACDC
    // 0x801DEEA8: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_4;
    // 0x801DEEA8: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    after_4:
    // 0x801DEEAC: b           L_801DEF08
    // 0x801DEEB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801DEF08;
    // 0x801DEEB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801DEEB4: lhu         $t4, 0x30F4($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X30F4);
L_801DEEB8:
    // 0x801DEEB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DEEBC: andi        $t5, $t4, 0x4000
    ctx->r13 = ctx->r12 & 0X4000;
    // 0x801DEEC0: bne         $t5, $zero, L_801DEEDC
    if (ctx->r13 != 0) {
        // 0x801DEEC4: nop
    
            goto L_801DEEDC;
    }
    // 0x801DEEC4: nop

    // 0x801DEEC8: lw          $t6, 0x5C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X5C);
    // 0x801DEECC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801DEED0: lbu         $t7, 0x68($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X68);
    // 0x801DEED4: bne         $t7, $at, L_801DEEEC
    if (ctx->r15 != ctx->r1) {
        // 0x801DEED8: nop
    
            goto L_801DEEEC;
    }
    // 0x801DEED8: nop

L_801DEEDC:
    // 0x801DEEDC: jal         0x801E4624
    // 0x801DEEE0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_801E4624_5A0534(rdram, ctx);
        goto after_5;
    // 0x801DEEE0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_5:
    // 0x801DEEE4: b           L_801DEF08
    // 0x801DEEE8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801DEF08;
    // 0x801DEEE8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801DEEEC:
    // 0x801DEEEC: jal         0x801E1E10
    // 0x801DEEF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E1E10_59DD20(rdram, ctx);
        goto after_6;
    // 0x801DEEF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x801DEEF4: bne         $v0, $zero, L_801DEF04
    if (ctx->r2 != 0) {
        // 0x801DEEF8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801DEF04;
    }
    // 0x801DEEF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DEEFC: jal         0x801DACDC
    // 0x801DEF00: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_7;
    // 0x801DEF00: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_7:
L_801DEF04:
    // 0x801DEF04: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801DEF08:
    // 0x801DEF08: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801DEF0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801DEF10: jr          $ra
    // 0x801DEF14: nop

    TRACE_RETURN()
    return;
    // 0x801DEF14: nop

;}
RECOMP_FUNC void func_801E77A4_5A36B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E77A4: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x801E77A8: addiu       $t6, $t6, 0x4750
    ctx->r14 = ADD32(ctx->r14, 0X4750);
    // 0x801E77AC: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x801E77B0: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x801E77B4: addiu       $v0, $sp, 0x0
    ctx->r2 = ADD32(ctx->r29, 0X0);
    // 0x801E77B8: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x801E77BC: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x801E77C0: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x801E77C4: lbu         $t0, 0x60($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X60);
    // 0x801E77C8: lw          $t4, 0x5C($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X5C);
    // 0x801E77CC: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x801E77D0: addu        $t2, $v0, $t1
    ctx->r10 = ADD32(ctx->r2, ctx->r9);
    // 0x801E77D4: lhu         $t3, 0x0($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X0);
    // 0x801E77D8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x801E77DC: jr          $ra
    // 0x801E77E0: sh          $t3, 0x86($t4)
    MEM_H(0X86, ctx->r12) = ctx->r11;
    TRACE_RETURN()
    return;
    // 0x801E77E0: sh          $t3, 0x86($t4)
    MEM_H(0X86, ctx->r12) = ctx->r11;
;}
RECOMP_FUNC void func_801DE47C_59A38C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DE47C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DE480: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DE484: jal         0x801E3AC0
    // 0x801DE488: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801E3AC0_59F9D0(rdram, ctx);
        goto after_0;
    // 0x801DE488: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801DE48C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DE490: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DE494: jr          $ra
    // 0x801DE498: nop

    TRACE_RETURN()
    return;
    // 0x801DE498: nop

;}
RECOMP_FUNC void func_801D2C88_58EB98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D2C88: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801D2C8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D2C90: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801D2C94: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x801D2C98: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x801D2C9C: addiu       $v1, $v1, 0x67C4
    ctx->r3 = ADD32(ctx->r3, 0X67C4);
    // 0x801D2CA0: bne         $v1, $v0, L_801D2CC0
    if (ctx->r3 != ctx->r2) {
        // 0x801D2CA4: nop
    
            goto L_801D2CC0;
    }
    // 0x801D2CA4: nop

    // 0x801D2CA8: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x801D2CAC: jal         0x801D313C
    // 0x801D2CB0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_801D313C_58F04C(rdram, ctx);
        goto after_0;
    // 0x801D2CB0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x801D2CB4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801D2CB8: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x801D2CBC: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
L_801D2CC0:
    // 0x801D2CC0: beq         $v1, $v0, L_801D2CD4
    if (ctx->r3 == ctx->r2) {
        // 0x801D2CC4: lui         $t6, 0x801D
        ctx->r14 = S32(0X801D << 16);
            goto L_801D2CD4;
    }
    // 0x801D2CC4: lui         $t6, 0x801D
    ctx->r14 = S32(0X801D << 16);
    // 0x801D2CC8: addiu       $t6, $t6, 0x6710
    ctx->r14 = ADD32(ctx->r14, 0X6710);
    // 0x801D2CCC: bnel        $t6, $v0, L_801D2D00
    if (ctx->r14 != ctx->r2) {
        // 0x801D2CD0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801D2D00;
    }
    goto skip_0;
    // 0x801D2CD0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
L_801D2CD4:
    // 0x801D2CD4: lbu         $a3, 0xBC($a0)
    ctx->r7 = MEM_BU(ctx->r4, 0XBC);
    // 0x801D2CD8: sh          $zero, 0xCC($a0)
    MEM_H(0XCC, ctx->r4) = 0;
    // 0x801D2CDC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x801D2CE0: andi        $t7, $a3, 0x7
    ctx->r15 = ctx->r7 & 0X7;
    // 0x801D2CE4: sll         $t8, $t7, 7
    ctx->r24 = S32(ctx->r15 << 7);
    // 0x801D2CE8: andi        $a3, $t8, 0xFFFF
    ctx->r7 = ctx->r24 & 0XFFFF;
    // 0x801D2CEC: jal         0x801D2E10
    // 0x801D2CF0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_801D2E10_58ED20(rdram, ctx);
        goto after_1;
    // 0x801D2CF0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x801D2CF4: b           L_801D2D00
    // 0x801D2CF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801D2D00;
    // 0x801D2CF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801D2CFC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D2D00:
    // 0x801D2D00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D2D04: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801D2D08: jr          $ra
    // 0x801D2D0C: nop

    TRACE_RETURN()
    return;
    // 0x801D2D0C: nop

;}
RECOMP_FUNC void func_801E71D0_5A30E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E71D0: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801E71D4: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x801E71D8: addiu       $t1, $t1, 0x4700
    ctx->r9 = ADD32(ctx->r9, 0X4700);
    // 0x801E71DC: lw          $v1, 0x94($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X94);
    // 0x801E71E0: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x801E71E4: lwc1        $f4, 0x0($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X0);
    // 0x801E71E8: lw          $a1, 0x18($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X18);
    // 0x801E71EC: lhu         $a2, 0x5C($v1)
    ctx->r6 = MEM_HU(ctx->r3, 0X5C);
    // 0x801E71F0: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x801E71F4: lwc1        $f6, 0x8($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X8);
    // 0x801E71F8: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801E71FC: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801E7200: swc1        $f6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f6.u32l;
    // 0x801E7204: lbu         $t7, 0x90($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X90);
    // 0x801E7208: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x801E720C: addiu       $t2, $t2, -0x3340
    ctx->r10 = ADD32(ctx->r10, -0X3340);
    // 0x801E7210: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x801E7214: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x801E7218: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x801E721C: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x801E7220: addu        $a3, $t9, $t2
    ctx->r7 = ADD32(ctx->r25, ctx->r10);
    // 0x801E7224: lhu         $t0, 0x30F4($a3)
    ctx->r8 = MEM_HU(ctx->r7, 0X30F4);
    // 0x801E7228: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E722C: andi        $t3, $t0, 0x2000
    ctx->r11 = ctx->r8 & 0X2000;
    // 0x801E7230: bne         $t3, $zero, L_801E7254
    if (ctx->r11 != 0) {
        // 0x801E7234: nop
    
            goto L_801E7254;
    }
    // 0x801E7234: nop

    // 0x801E7238: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801E723C: lwc1        $f2, 0xC($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0XC);
    // 0x801E7240: andi        $t4, $t0, 0x8000
    ctx->r12 = ctx->r8 & 0X8000;
    // 0x801E7244: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x801E7248: nop

    // 0x801E724C: bc1f        L_801E725C
    if (!c1cs) {
        // 0x801E7250: nop
    
            goto L_801E725C;
    }
    // 0x801E7250: nop

L_801E7254:
    // 0x801E7254: b           L_801E7330
    // 0x801E7258: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_801E7330;
    // 0x801E7258: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_801E725C:
    // 0x801E725C: beql        $t4, $zero, L_801E7270
    if (ctx->r12 == 0) {
        // 0x801E7260: lh          $v0, 0x30F8($a3)
        ctx->r2 = MEM_H(ctx->r7, 0X30F8);
            goto L_801E7270;
    }
    goto skip_0;
    // 0x801E7260: lh          $v0, 0x30F8($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X30F8);
    skip_0:
    // 0x801E7264: b           L_801E7330
    // 0x801E7268: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_801E7330;
    // 0x801E7268: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x801E726C: lh          $v0, 0x30F8($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X30F8);
L_801E7270:
    // 0x801E7270: addiu       $at, $zero, 0x322
    ctx->r1 = ADD32(0, 0X322);
    // 0x801E7274: blez        $v0, L_801E730C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x801E7278: nop
    
            goto L_801E730C;
    }
    // 0x801E7278: nop

    // 0x801E727C: bne         $a2, $at, L_801E7294
    if (ctx->r6 != ctx->r1) {
        // 0x801E7280: or          $v0, $a2, $zero
        ctx->r2 = ctx->r6 | 0;
            goto L_801E7294;
    }
    // 0x801E7280: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x801E7284: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x801E7288: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801E728C: b           L_801E72C4
    // 0x801E7290: swc1        $f8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f8.u32l;
        goto L_801E72C4;
    // 0x801E7290: swc1        $f8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f8.u32l;
L_801E7294:
    // 0x801E7294: addiu       $at, $zero, 0x33B
    ctx->r1 = ADD32(0, 0X33B);
    // 0x801E7298: bne         $v0, $at, L_801E72AC
    if (ctx->r2 != ctx->r1) {
        // 0x801E729C: lui         $at, 0x42F0
        ctx->r1 = S32(0X42F0 << 16);
            goto L_801E72AC;
    }
    // 0x801E729C: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x801E72A0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801E72A4: b           L_801E72C4
    // 0x801E72A8: swc1        $f10, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f10.u32l;
        goto L_801E72C4;
    // 0x801E72A8: swc1        $f10, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f10.u32l;
L_801E72AC:
    // 0x801E72AC: addiu       $at, $zero, 0x33C
    ctx->r1 = ADD32(0, 0X33C);
    // 0x801E72B0: bne         $v0, $at, L_801E72C4
    if (ctx->r2 != ctx->r1) {
        // 0x801E72B4: lui         $at, 0x4334
        ctx->r1 = S32(0X4334 << 16);
            goto L_801E72C4;
    }
    // 0x801E72B4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x801E72B8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801E72BC: nop

    // 0x801E72C0: swc1        $f16, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f16.u32l;
L_801E72C4:
    // 0x801E72C4: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x801E72C8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E72CC: lwc1        $f18, 0x4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4);
    // 0x801E72D0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E72D4: add.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x801E72D8: add.s       $f4, $f2, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f18.fl;
    // 0x801E72DC: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x801E72E0: nop

    // 0x801E72E4: bc1f        L_801E72FC
    if (!c1cs) {
        // 0x801E72E8: nop
    
            goto L_801E72FC;
    }
    // 0x801E72E8: nop

    // 0x801E72EC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801E72F0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x801E72F4: b           L_801E7330
    // 0x801E72F8: swc1        $f10, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->f10.u32l;
        goto L_801E7330;
    // 0x801E72F8: swc1        $f10, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->f10.u32l;
L_801E72FC:
    // 0x801E72FC: lwc1        $f16, -0x4A38($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X4A38);
    // 0x801E7300: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801E7304: b           L_801E7330
    // 0x801E7308: swc1        $f16, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->f16.u32l;
        goto L_801E7330;
    // 0x801E7308: swc1        $f16, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->f16.u32l;
L_801E730C:
    // 0x801E730C: bgez        $v0, L_801E7324
    if (SIGNED(ctx->r2) >= 0) {
        // 0x801E7310: lui         $at, 0x8021
        ctx->r1 = S32(0X8021 << 16);
            goto L_801E7324;
    }
    // 0x801E7310: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E7314: lwc1        $f18, -0x4A34($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X4A34);
    // 0x801E7318: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x801E731C: b           L_801E7330
    // 0x801E7320: swc1        $f18, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->f18.u32l;
        goto L_801E7330;
    // 0x801E7320: swc1        $f18, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->f18.u32l;
L_801E7324:
    // 0x801E7324: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801E7328: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801E732C: swc1        $f6, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->f6.u32l;
L_801E7330:
    // 0x801E7330: jr          $ra
    // 0x801E7334: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x801E7334: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_801F62B4_5B21C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F62B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F62B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F62BC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F62C0: lbu         $t6, 0x30($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X30);
    // 0x801F62C4: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801F62C8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801F62CC: andi        $t7, $t6, 0xFFFE
    ctx->r15 = ctx->r14 & 0XFFFE;
    // 0x801F62D0: sb          $t7, 0x30($a0)
    MEM_B(0X30, ctx->r4) = ctx->r15;
    // 0x801F62D4: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801F62D8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x801F62DC: jalr        $t9
    // 0x801F62E0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x801F62E0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_0:
    // 0x801F62E4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801F62E8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F62EC: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x801F62F0: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801F62F4: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x801F62F8: lwc1        $f4, 0x28($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X28);
    // 0x801F62FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801F6300: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x801F6304: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x801F6308: nop

    // 0x801F630C: bc1fl       L_801F6340
    if (!c1cs) {
        // 0x801F6310: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801F6340;
    }
    goto skip_0;
    // 0x801F6310: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801F6314: jal         0x801DACDC
    // 0x801F6318: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_1;
    // 0x801F6318: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x801F631C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801F6320: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x801F6324: lbu         $t0, 0x30($a2)
    ctx->r8 = MEM_BU(ctx->r6, 0X30);
    // 0x801F6328: ori         $t1, $t0, 0x1
    ctx->r9 = ctx->r8 | 0X1;
    // 0x801F632C: jal         0x80038BC8
    // 0x801F6330: sb          $t1, 0x30($a2)
    MEM_B(0X30, ctx->r6) = ctx->r9;
    func_80038BC8_397C8(rdram, ctx);
        goto after_2;
    // 0x801F6330: sb          $t1, 0x30($a2)
    MEM_B(0X30, ctx->r6) = ctx->r9;
    after_2:
    // 0x801F6334: jal         0x801E8178
    // 0x801F6338: nop

    func_801E8178_5A4088(rdram, ctx);
        goto after_3;
    // 0x801F6338: nop

    after_3:
    // 0x801F633C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F6340:
    // 0x801F6340: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F6344: jr          $ra
    // 0x801F6348: nop

    TRACE_RETURN()
    return;
    // 0x801F6348: nop

;}
RECOMP_FUNC void func_801F0C60_5ACB70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F0C60: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801F0C64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F0C68: lw          $v1, 0x5C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X5C);
    // 0x801F0C6C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x801F0C70: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x801F0C74: lbu         $t6, 0x60($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X60);
    // 0x801F0C78: bnel        $v0, $t6, L_801F0CD0
    if (ctx->r2 != ctx->r14) {
        // 0x801F0C7C: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_801F0CD0;
    }
    goto skip_0;
    // 0x801F0C7C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    skip_0:
    // 0x801F0C80: lw          $t7, -0x39FC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X39FC);
    // 0x801F0C84: bnel        $v0, $t7, L_801F0CD0
    if (ctx->r2 != ctx->r15) {
        // 0x801F0C88: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_801F0CD0;
    }
    goto skip_1;
    // 0x801F0C88: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    skip_1:
    // 0x801F0C8C: lw          $t8, 0x5C($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X5C);
    // 0x801F0C90: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801F0C94: lbu         $t9, 0x68($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X68);
    // 0x801F0C98: beql        $t9, $at, L_801F0CD8
    if (ctx->r25 == ctx->r1) {
        // 0x801F0C9C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801F0CD8;
    }
    goto skip_2;
    // 0x801F0C9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x801F0CA0: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x801F0CA4: jal         0x801F0CE4
    // 0x801F0CA8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_801F0CE4_5ACBF4(rdram, ctx);
        goto after_0;
    // 0x801F0CA8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x801F0CAC: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x801F0CB0: bne         $v0, $zero, L_801F0CD4
    if (ctx->r2 != 0) {
        // 0x801F0CB4: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_801F0CD4;
    }
    // 0x801F0CB4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801F0CB8: lbu         $v0, 0xCC($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XCC);
    // 0x801F0CBC: slti        $at, $v0, 0xA7
    ctx->r1 = SIGNED(ctx->r2) < 0XA7 ? 1 : 0;
    // 0x801F0CC0: bne         $at, $zero, L_801F0CCC
    if (ctx->r1 != 0) {
        // 0x801F0CC4: slti        $at, $v0, 0xAA
        ctx->r1 = SIGNED(ctx->r2) < 0XAA ? 1 : 0;
            goto L_801F0CCC;
    }
    // 0x801F0CC4: slti        $at, $v0, 0xAA
    ctx->r1 = SIGNED(ctx->r2) < 0XAA ? 1 : 0;
    // 0x801F0CC8: bne         $at, $zero, L_801F0CD4
    if (ctx->r1 != 0) {
        // 0x801F0CCC: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_801F0CD4;
    }
L_801F0CCC:
    // 0x801F0CCC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
L_801F0CD0:
    // 0x801F0CD0: sb          $t0, 0x65($a0)
    MEM_B(0X65, ctx->r4) = ctx->r8;
L_801F0CD4:
    // 0x801F0CD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F0CD8:
    // 0x801F0CD8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801F0CDC: jr          $ra
    // 0x801F0CE0: nop

    TRACE_RETURN()
    return;
    // 0x801F0CE0: nop

;}
RECOMP_FUNC void func_801F8DE4_5B4CF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F8DE4: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x801F8DE8: addiu       $v0, $v0, -0x3A38
    ctx->r2 = ADD32(ctx->r2, -0X3A38);
    // 0x801F8DEC: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x801F8DF0: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x801F8DF4: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x801F8DF8: sw          $zero, -0x728($at)
    MEM_W(-0X728, ctx->r1) = 0;
    // 0x801F8DFC: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x801F8E00: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x801F8E04: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x801F8E08: sw          $zero, -0x724($at)
    MEM_W(-0X724, ctx->r1) = 0;
    // 0x801F8E0C: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x801F8E10: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x801F8E14: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x801F8E18: sw          $zero, -0x720($at)
    MEM_W(-0X720, ctx->r1) = 0;
    // 0x801F8E1C: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x801F8E20: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x801F8E24: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x801F8E28: sw          $zero, -0x71C($at)
    MEM_W(-0X71C, ctx->r1) = 0;
    // 0x801F8E2C: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x801F8E30: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x801F8E34: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x801F8E38: sw          $zero, -0x718($at)
    MEM_W(-0X718, ctx->r1) = 0;
    // 0x801F8E3C: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x801F8E40: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x801F8E44: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x801F8E48: sw          $zero, -0x710($at)
    MEM_W(-0X710, ctx->r1) = 0;
    // 0x801F8E4C: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x801F8E50: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x801F8E54: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x801F8E58: sw          $zero, -0x70C($at)
    MEM_W(-0X70C, ctx->r1) = 0;
    // 0x801F8E5C: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x801F8E60: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x801F8E64: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x801F8E68: sw          $zero, -0x700($at)
    MEM_W(-0X700, ctx->r1) = 0;
    // 0x801F8E6C: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x801F8E70: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x801F8E74: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x801F8E78: jr          $ra
    // 0x801F8E7C: sw          $zero, -0x6FC($at)
    MEM_W(-0X6FC, ctx->r1) = 0;
    TRACE_RETURN()
    return;
    // 0x801F8E7C: sw          $zero, -0x6FC($at)
    MEM_W(-0X6FC, ctx->r1) = 0;
;}
RECOMP_FUNC void func_801E159C_59D4AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E159C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801E15A0: jr          $ra
    // 0x801E15A4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801E15A4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801F2B70_5AEA80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F2B70: lb          $v0, 0xDC($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XDC);
    // 0x801F2B74: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801F2B78: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801F2B7C: beql        $v0, $zero, L_801F2BA4
    if (ctx->r2 == 0) {
        // 0x801F2B80: addiu       $v0, $a0, 0xDC
        ctx->r2 = ADD32(ctx->r4, 0XDC);
            goto L_801F2BA4;
    }
    goto skip_0;
    // 0x801F2B80: addiu       $v0, $a0, 0xDC
    ctx->r2 = ADD32(ctx->r4, 0XDC);
    skip_0:
    // 0x801F2B84: beq         $v0, $at, L_801F2BB0
    if (ctx->r2 == ctx->r1) {
        // 0x801F2B88: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_801F2BB0;
    }
    // 0x801F2B88: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801F2B8C: beq         $v0, $at, L_801F2C84
    if (ctx->r2 == ctx->r1) {
        // 0x801F2B90: lui         $t0, 0x8021
        ctx->r8 = S32(0X8021 << 16);
            goto L_801F2C84;
    }
    // 0x801F2B90: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x801F2B94: addiu       $v0, $a0, 0xDC
    ctx->r2 = ADD32(ctx->r4, 0XDC);
    // 0x801F2B98: b           L_801F2CA4
    // 0x801F2B9C: lh          $v1, 0x2($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X2);
        goto L_801F2CA4;
    // 0x801F2B9C: lh          $v1, 0x2($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X2);
    // 0x801F2BA0: addiu       $v0, $a0, 0xDC
    ctx->r2 = ADD32(ctx->r4, 0XDC);
L_801F2BA4:
    // 0x801F2BA4: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
    // 0x801F2BA8: b           L_801F2CA4
    // 0x801F2BAC: lh          $v1, 0x2($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X2);
        goto L_801F2CA4;
    // 0x801F2BAC: lh          $v1, 0x2($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X2);
L_801F2BB0:
    // 0x801F2BB0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F2BB4: lwc1        $f2, -0x4090($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X4090);
    // 0x801F2BB8: lwc1        $f4, 0x1C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x801F2BBC: lwc1        $f8, 0x24($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X24);
    // 0x801F2BC0: addiu       $v0, $a0, 0xDC
    ctx->r2 = ADD32(ctx->r4, 0XDC);
    // 0x801F2BC4: add.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x801F2BC8: lui         $at, 0x4012
    ctx->r1 = S32(0X4012 << 16);
    // 0x801F2BCC: mtc1        $at, $f13
    ctx->f_odd[(13 - 1) * 2] = ctx->r1;
    // 0x801F2BD0: add.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f2.fl;
    // 0x801F2BD4: swc1        $f6, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f6.u32l;
    // 0x801F2BD8: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x801F2BDC: swc1        $f10, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f10.u32l;
    // 0x801F2BE0: lh          $t7, 0x2($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X2);
    // 0x801F2BE4: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x801F2BE8: nop

    // 0x801F2BEC: cvt.d.w     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.d = CVT_D_W(ctx->f16.u32l);
    // 0x801F2BF0: c.lt.d      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.d < ctx->f12.d;
    // 0x801F2BF4: nop

    // 0x801F2BF8: bc1fl       L_801F2C24
    if (!c1cs) {
        // 0x801F2BFC: c.lt.d      $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.d < ctx->f0.d;
            goto L_801F2C24;
    }
    goto skip_1;
    // 0x801F2BFC: c.lt.d      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.d < ctx->f0.d;
    skip_1:
    // 0x801F2C00: lwc1        $f18, 0x20($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X20);
    // 0x801F2C04: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x801F2C08: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801F2C0C: swc1        $f6, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f6.u32l;
    // 0x801F2C10: lh          $t8, 0x2($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X2);
    // 0x801F2C14: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x801F2C18: nop

    // 0x801F2C1C: cvt.d.w     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.d = CVT_D_W(ctx->f8.u32l);
    // 0x801F2C20: c.lt.d      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.d < ctx->f0.d;
L_801F2C24:
    // 0x801F2C24: nop

    // 0x801F2C28: bc1fl       L_801F2C50
    if (!c1cs) {
        // 0x801F2C2C: lwc1        $f10, 0x20($a1)
        ctx->f10.u32l = MEM_W(ctx->r5, 0X20);
            goto L_801F2C50;
    }
    goto skip_2;
    // 0x801F2C2C: lwc1        $f10, 0x20($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X20);
    skip_2:
    // 0x801F2C30: lwc1        $f10, 0x20($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X20);
    // 0x801F2C34: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F2C38: ldc1        $f18, -0x4088($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0X4088);
    // 0x801F2C3C: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x801F2C40: sub.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d - ctx->f18.d;
    // 0x801F2C44: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801F2C48: swc1        $f6, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f6.u32l;
    // 0x801F2C4C: lwc1        $f10, 0x20($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X20);
L_801F2C50:
    // 0x801F2C50: mtc1        $zero, $f9
    ctx->f_odd[(9 - 1) * 2] = 0;
    // 0x801F2C54: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801F2C58: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x801F2C5C: c.le.d      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.d <= ctx->f8.d;
    // 0x801F2C60: nop

    // 0x801F2C64: bc1f        L_801F2C7C
    if (!c1cs) {
        // 0x801F2C68: nop
    
            goto L_801F2C7C;
    }
    // 0x801F2C68: nop

    // 0x801F2C6C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801F2C70: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x801F2C74: swc1        $f18, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f18.u32l;
    // 0x801F2C78: sb          $t9, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r25;
L_801F2C7C:
    // 0x801F2C7C: b           L_801F2CA4
    // 0x801F2C80: lh          $v1, 0x2($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X2);
        goto L_801F2CA4;
    // 0x801F2C80: lh          $v1, 0x2($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X2);
L_801F2C84:
    // 0x801F2C84: lbu         $t0, -0x3594($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X3594);
    // 0x801F2C88: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801F2C8C: addiu       $v0, $a0, 0xDC
    ctx->r2 = ADD32(ctx->r4, 0XDC);
    // 0x801F2C90: bnel        $t0, $zero, L_801F2CA4
    if (ctx->r8 != 0) {
        // 0x801F2C94: lh          $v1, 0x2($v0)
        ctx->r3 = MEM_H(ctx->r2, 0X2);
            goto L_801F2CA4;
    }
    goto skip_3;
    // 0x801F2C94: lh          $v1, 0x2($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X2);
    skip_3:
    // 0x801F2C98: jr          $ra
    // 0x801F2C9C: sb          $t1, 0x65($a0)
    MEM_B(0X65, ctx->r4) = ctx->r9;
    TRACE_RETURN()
    return;
    // 0x801F2C9C: sb          $t1, 0x65($a0)
    MEM_B(0X65, ctx->r4) = ctx->r9;
    // 0x801F2CA0: lh          $v1, 0x2($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X2);
L_801F2CA4:
    // 0x801F2CA4: addiu       $t2, $v1, 0x1
    ctx->r10 = ADD32(ctx->r3, 0X1);
    // 0x801F2CA8: sh          $t2, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r10;
    // 0x801F2CAC: jr          $ra
    // 0x801F2CB0: nop

    TRACE_RETURN()
    return;
    // 0x801F2CB0: nop

;}
RECOMP_FUNC void func_801FB2D0_5B71E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FB2D0: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x801FB2D4: addiu       $v1, $v1, -0x3340
    ctx->r3 = ADD32(ctx->r3, -0X3340);
    // 0x801FB2D8: addiu       $t6, $v1, 0x7FFF
    ctx->r14 = ADD32(ctx->r3, 0X7FFF);
    // 0x801FB2DC: lbu         $t6, 0x2DE5($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X2DE5);
    // 0x801FB2E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801FB2E4: addiu       $t7, $v1, 0x7FFF
    ctx->r15 = ADD32(ctx->r3, 0X7FFF);
    // 0x801FB2E8: bne         $t6, $zero, L_801FB92C
    if (ctx->r14 != 0) {
        // 0x801FB2EC: nop
    
            goto L_801FB92C;
    }
    // 0x801FB2EC: nop

    // 0x801FB2F0: lhu         $t7, 0x2DF1($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X2DF1);
    // 0x801FB2F4: sltiu       $at, $t7, 0xA
    ctx->r1 = ctx->r15 < 0XA ? 1 : 0;
    // 0x801FB2F8: beq         $at, $zero, L_801FB8A8
    if (ctx->r1 == 0) {
        // 0x801FB2FC: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_801FB8A8;
    }
    // 0x801FB2FC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x801FB300: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801FB304: addu        $at, $at, $t7
    gpr jr_addend_801FB30C = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x801FB308: lw          $t7, -0x3808($at)
    ctx->r15 = ADD32(ctx->r1, -0X3808);
    // 0x801FB30C: jr          $t7
    // 0x801FB310: nop

    switch (jr_addend_801FB30C >> 2) {
        case 0: goto L_801FB314; break;
        case 1: goto L_801FB31C; break;
        case 2: goto L_801FB3A4; break;
        case 3: goto L_801FB42C; break;
        case 4: goto L_801FB4B0; break;
        case 5: goto L_801FB580; break;
        case 6: goto L_801FB604; break;
        case 7: goto L_801FB688; break;
        case 8: goto L_801FB7A4; break;
        case 9: goto L_801FB82C; break;
        default: switch_error(__func__, 0x801FB30C, 0x8020C7F8);
    }
    // 0x801FB310: nop

L_801FB314:
    // 0x801FB314: b           L_801FB8A8
    // 0x801FB318: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801FB8A8;
    // 0x801FB318: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801FB31C:
    // 0x801FB31C: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x801FB320: lw          $t8, -0x39F4($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X39F4);
    // 0x801FB324: lui         $at, 0xC316
    ctx->r1 = S32(0XC316 << 16);
    // 0x801FB328: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801FB32C: lwc1        $f6, 0xC($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0XC);
    // 0x801FB330: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x801FB334: addiu       $a1, $a1, -0x3A38
    ctx->r5 = ADD32(ctx->r5, -0X3A38);
    // 0x801FB338: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x801FB33C: nop

    // 0x801FB340: bc1fl       L_801FB380
    if (!c1cs) {
        // 0x801FB344: lw          $t3, 0x0($a1)
        ctx->r11 = MEM_W(ctx->r5, 0X0);
            goto L_801FB380;
    }
    goto skip_0;
    // 0x801FB344: lw          $t3, 0x0($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X0);
    skip_0:
    // 0x801FB348: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x801FB34C: addiu       $a1, $a1, -0x3A38
    ctx->r5 = ADD32(ctx->r5, -0X3A38);
    // 0x801FB350: lw          $t0, 0x0($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X0);
    // 0x801FB354: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FB358: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801FB35C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x801FB360: sh          $t9, -0x5214($at)
    MEM_H(-0X5214, ctx->r1) = ctx->r25;
    // 0x801FB364: lw          $t2, 0x0($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X0);
    // 0x801FB368: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FB36C: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x801FB370: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x801FB374: b           L_801FB8A8
    // 0x801FB378: sh          $t1, -0x5212($at)
    MEM_H(-0X5212, ctx->r1) = ctx->r9;
        goto L_801FB8A8;
    // 0x801FB378: sh          $t1, -0x5212($at)
    MEM_H(-0X5212, ctx->r1) = ctx->r9;
    // 0x801FB37C: lw          $t3, 0x0($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X0);
L_801FB380:
    // 0x801FB380: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FB384: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x801FB388: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x801FB38C: sh          $zero, -0x5214($at)
    MEM_H(-0X5214, ctx->r1) = 0;
    // 0x801FB390: lw          $t5, 0x0($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X0);
    // 0x801FB394: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FB398: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x801FB39C: b           L_801FB8A8
    // 0x801FB3A0: sh          $t4, -0x5212($at)
    MEM_H(-0X5212, ctx->r1) = ctx->r12;
        goto L_801FB8A8;
    // 0x801FB3A0: sh          $t4, -0x5212($at)
    MEM_H(-0X5212, ctx->r1) = ctx->r12;
L_801FB3A4:
    // 0x801FB3A4: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x801FB3A8: lw          $t6, -0x39F4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39F4);
    // 0x801FB3AC: lui         $at, 0xC2A0
    ctx->r1 = S32(0XC2A0 << 16);
    // 0x801FB3B0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801FB3B4: lwc1        $f10, 0xC($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0XC);
    // 0x801FB3B8: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x801FB3BC: nop

    // 0x801FB3C0: bc1f        L_801FB3F8
    if (!c1cs) {
        // 0x801FB3C4: lui         $a1, 0x8016
        ctx->r5 = S32(0X8016 << 16);
            goto L_801FB3F8;
    }
    // 0x801FB3C4: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x801FB3C8: addiu       $a1, $a1, -0x3A38
    ctx->r5 = ADD32(ctx->r5, -0X3A38);
    // 0x801FB3CC: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x801FB3D0: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FB3D4: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x801FB3D8: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x801FB3DC: sh          $t7, -0x5214($at)
    MEM_H(-0X5214, ctx->r1) = ctx->r15;
    // 0x801FB3E0: lw          $t0, 0x0($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X0);
    // 0x801FB3E4: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FB3E8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801FB3EC: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x801FB3F0: b           L_801FB8A8
    // 0x801FB3F4: sh          $t9, -0x5212($at)
    MEM_H(-0X5212, ctx->r1) = ctx->r25;
        goto L_801FB8A8;
    // 0x801FB3F4: sh          $t9, -0x5212($at)
    MEM_H(-0X5212, ctx->r1) = ctx->r25;
L_801FB3F8:
    // 0x801FB3F8: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x801FB3FC: addiu       $a1, $a1, -0x3A38
    ctx->r5 = ADD32(ctx->r5, -0X3A38);
    // 0x801FB400: lw          $t2, 0x0($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X0);
    // 0x801FB404: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FB408: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801FB40C: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x801FB410: sh          $t1, -0x5214($at)
    MEM_H(-0X5214, ctx->r1) = ctx->r9;
    // 0x801FB414: lw          $t4, 0x0($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X0);
    // 0x801FB418: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FB41C: addiu       $t3, $zero, 0x9
    ctx->r11 = ADD32(0, 0X9);
    // 0x801FB420: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x801FB424: b           L_801FB8A8
    // 0x801FB428: sh          $t3, -0x5212($at)
    MEM_H(-0X5212, ctx->r1) = ctx->r11;
        goto L_801FB8A8;
    // 0x801FB428: sh          $t3, -0x5212($at)
    MEM_H(-0X5212, ctx->r1) = ctx->r11;
L_801FB42C:
    // 0x801FB42C: lui         $t5, 0x8020
    ctx->r13 = S32(0X8020 << 16);
    // 0x801FB430: lw          $t5, -0x39F4($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X39F4);
    // 0x801FB434: lui         $at, 0x4302
    ctx->r1 = S32(0X4302 << 16);
    // 0x801FB438: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801FB43C: lwc1        $f18, 0xC($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0XC);
    // 0x801FB440: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x801FB444: nop

    // 0x801FB448: bc1f        L_801FB47C
    if (!c1cs) {
        // 0x801FB44C: lui         $a1, 0x8016
        ctx->r5 = S32(0X8016 << 16);
            goto L_801FB47C;
    }
    // 0x801FB44C: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x801FB450: addiu       $a1, $a1, -0x3A38
    ctx->r5 = ADD32(ctx->r5, -0X3A38);
    // 0x801FB454: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x801FB458: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FB45C: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x801FB460: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x801FB464: sh          $t6, -0x5214($at)
    MEM_H(-0X5214, ctx->r1) = ctx->r14;
    // 0x801FB468: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x801FB46C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FB470: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x801FB474: b           L_801FB8A8
    // 0x801FB478: sh          $zero, -0x5212($at)
    MEM_H(-0X5212, ctx->r1) = 0;
        goto L_801FB8A8;
    // 0x801FB478: sh          $zero, -0x5212($at)
    MEM_H(-0X5212, ctx->r1) = 0;
L_801FB47C:
    // 0x801FB47C: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x801FB480: addiu       $a1, $a1, -0x3A38
    ctx->r5 = ADD32(ctx->r5, -0X3A38);
    // 0x801FB484: lw          $t0, 0x0($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X0);
    // 0x801FB488: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FB48C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801FB490: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x801FB494: sh          $t9, -0x5214($at)
    MEM_H(-0X5214, ctx->r1) = ctx->r25;
    // 0x801FB498: lw          $t2, 0x0($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X0);
    // 0x801FB49C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FB4A0: addiu       $t1, $zero, 0xC
    ctx->r9 = ADD32(0, 0XC);
    // 0x801FB4A4: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x801FB4A8: b           L_801FB8A8
    // 0x801FB4AC: sh          $t1, -0x5212($at)
    MEM_H(-0X5212, ctx->r1) = ctx->r9;
        goto L_801FB8A8;
    // 0x801FB4AC: sh          $t1, -0x5212($at)
    MEM_H(-0X5212, ctx->r1) = ctx->r9;
L_801FB4B0:
    // 0x801FB4B0: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x801FB4B4: lw          $v1, -0x39F4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X39F4);
    // 0x801FB4B8: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x801FB4BC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801FB4C0: lwc1        $f6, 0xC($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0XC);
    // 0x801FB4C4: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x801FB4C8: nop

    // 0x801FB4CC: bc1f        L_801FB554
    if (!c1cs) {
        // 0x801FB4D0: lui         $at, 0xC2C8
        ctx->r1 = S32(0XC2C8 << 16);
            goto L_801FB554;
    }
    // 0x801FB4D0: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    // 0x801FB4D4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801FB4D8: lwc1        $f10, 0x10($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X10);
    // 0x801FB4DC: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x801FB4E0: addiu       $a1, $a1, -0x3A38
    ctx->r5 = ADD32(ctx->r5, -0X3A38);
    // 0x801FB4E4: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x801FB4E8: nop

    // 0x801FB4EC: bc1fl       L_801FB52C
    if (!c1cs) {
        // 0x801FB4F0: lw          $t8, 0x0($a1)
        ctx->r24 = MEM_W(ctx->r5, 0X0);
            goto L_801FB52C;
    }
    goto skip_1;
    // 0x801FB4F0: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    skip_1:
    // 0x801FB4F4: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x801FB4F8: addiu       $a1, $a1, -0x3A38
    ctx->r5 = ADD32(ctx->r5, -0X3A38);
    // 0x801FB4FC: lw          $t4, 0x0($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X0);
    // 0x801FB500: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FB504: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x801FB508: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x801FB50C: sh          $t3, -0x5214($at)
    MEM_H(-0X5214, ctx->r1) = ctx->r11;
    // 0x801FB510: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x801FB514: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FB518: addiu       $t5, $zero, 0x8
    ctx->r13 = ADD32(0, 0X8);
    // 0x801FB51C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x801FB520: b           L_801FB8A8
    // 0x801FB524: sh          $t5, -0x5212($at)
    MEM_H(-0X5212, ctx->r1) = ctx->r13;
        goto L_801FB8A8;
    // 0x801FB524: sh          $t5, -0x5212($at)
    MEM_H(-0X5212, ctx->r1) = ctx->r13;
    // 0x801FB528: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
L_801FB52C:
    // 0x801FB52C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FB530: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801FB534: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x801FB538: sh          $t7, -0x5214($at)
    MEM_H(-0X5214, ctx->r1) = ctx->r15;
    // 0x801FB53C: lw          $t0, 0x0($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X0);
    // 0x801FB540: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FB544: addiu       $t9, $zero, 0x7
    ctx->r25 = ADD32(0, 0X7);
    // 0x801FB548: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x801FB54C: b           L_801FB8A8
    // 0x801FB550: sh          $t9, -0x5212($at)
    MEM_H(-0X5212, ctx->r1) = ctx->r25;
        goto L_801FB8A8;
    // 0x801FB550: sh          $t9, -0x5212($at)
    MEM_H(-0X5212, ctx->r1) = ctx->r25;
L_801FB554:
    // 0x801FB554: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x801FB558: addiu       $a1, $a1, -0x3A38
    ctx->r5 = ADD32(ctx->r5, -0X3A38);
    // 0x801FB55C: lw          $t1, 0x0($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X0);
    // 0x801FB560: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FB564: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x801FB568: sh          $zero, -0x5214($at)
    MEM_H(-0X5214, ctx->r1) = 0;
    // 0x801FB56C: lw          $t2, 0x0($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X0);
    // 0x801FB570: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FB574: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x801FB578: b           L_801FB8A8
    // 0x801FB57C: sh          $zero, -0x5212($at)
    MEM_H(-0X5212, ctx->r1) = 0;
        goto L_801FB8A8;
    // 0x801FB57C: sh          $zero, -0x5212($at)
    MEM_H(-0X5212, ctx->r1) = 0;
L_801FB580:
    // 0x801FB580: lui         $t3, 0x8020
    ctx->r11 = S32(0X8020 << 16);
    // 0x801FB584: lw          $t3, -0x39F4($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X39F4);
    // 0x801FB588: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801FB58C: lwc1        $f16, -0x37E0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X37E0);
    // 0x801FB590: lwc1        $f18, 0xC($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0XC);
    // 0x801FB594: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x801FB598: nop

    // 0x801FB59C: bc1f        L_801FB5D0
    if (!c1cs) {
        // 0x801FB5A0: lui         $a1, 0x8016
        ctx->r5 = S32(0X8016 << 16);
            goto L_801FB5D0;
    }
    // 0x801FB5A0: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x801FB5A4: addiu       $a1, $a1, -0x3A38
    ctx->r5 = ADD32(ctx->r5, -0X3A38);
    // 0x801FB5A8: lw          $t5, 0x0($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X0);
    // 0x801FB5AC: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FB5B0: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x801FB5B4: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x801FB5B8: sh          $t4, -0x5214($at)
    MEM_H(-0X5214, ctx->r1) = ctx->r12;
    // 0x801FB5BC: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x801FB5C0: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FB5C4: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x801FB5C8: b           L_801FB8A8
    // 0x801FB5CC: sh          $zero, -0x5212($at)
    MEM_H(-0X5212, ctx->r1) = 0;
        goto L_801FB8A8;
    // 0x801FB5CC: sh          $zero, -0x5212($at)
    MEM_H(-0X5212, ctx->r1) = 0;
L_801FB5D0:
    // 0x801FB5D0: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x801FB5D4: addiu       $a1, $a1, -0x3A38
    ctx->r5 = ADD32(ctx->r5, -0X3A38);
    // 0x801FB5D8: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x801FB5DC: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FB5E0: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x801FB5E4: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x801FB5E8: sh          $t7, -0x5214($at)
    MEM_H(-0X5214, ctx->r1) = ctx->r15;
    // 0x801FB5EC: lw          $t0, 0x0($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X0);
    // 0x801FB5F0: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FB5F4: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x801FB5F8: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x801FB5FC: b           L_801FB8A8
    // 0x801FB600: sh          $t9, -0x5212($at)
    MEM_H(-0X5212, ctx->r1) = ctx->r25;
        goto L_801FB8A8;
    // 0x801FB600: sh          $t9, -0x5212($at)
    MEM_H(-0X5212, ctx->r1) = ctx->r25;
L_801FB604:
    // 0x801FB604: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x801FB608: lw          $t1, -0x39F4($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X39F4);
    // 0x801FB60C: lui         $at, 0x43C4
    ctx->r1 = S32(0X43C4 << 16);
    // 0x801FB610: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801FB614: lwc1        $f6, 0xC($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0XC);
    // 0x801FB618: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x801FB61C: nop

    // 0x801FB620: bc1f        L_801FB654
    if (!c1cs) {
        // 0x801FB624: lui         $a1, 0x8016
        ctx->r5 = S32(0X8016 << 16);
            goto L_801FB654;
    }
    // 0x801FB624: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x801FB628: addiu       $a1, $a1, -0x3A38
    ctx->r5 = ADD32(ctx->r5, -0X3A38);
    // 0x801FB62C: lw          $t3, 0x0($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X0);
    // 0x801FB630: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FB634: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x801FB638: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x801FB63C: sh          $t2, -0x5214($at)
    MEM_H(-0X5214, ctx->r1) = ctx->r10;
    // 0x801FB640: lw          $t4, 0x0($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X0);
    // 0x801FB644: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FB648: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x801FB64C: b           L_801FB8A8
    // 0x801FB650: sh          $zero, -0x5212($at)
    MEM_H(-0X5212, ctx->r1) = 0;
        goto L_801FB8A8;
    // 0x801FB650: sh          $zero, -0x5212($at)
    MEM_H(-0X5212, ctx->r1) = 0;
L_801FB654:
    // 0x801FB654: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x801FB658: addiu       $a1, $a1, -0x3A38
    ctx->r5 = ADD32(ctx->r5, -0X3A38);
    // 0x801FB65C: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x801FB660: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FB664: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x801FB668: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x801FB66C: sh          $t5, -0x5214($at)
    MEM_H(-0X5214, ctx->r1) = ctx->r13;
    // 0x801FB670: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x801FB674: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FB678: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x801FB67C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x801FB680: b           L_801FB8A8
    // 0x801FB684: sh          $t7, -0x5212($at)
    MEM_H(-0X5212, ctx->r1) = ctx->r15;
        goto L_801FB8A8;
    // 0x801FB684: sh          $t7, -0x5212($at)
    MEM_H(-0X5212, ctx->r1) = ctx->r15;
L_801FB688:
    // 0x801FB688: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x801FB68C: lw          $v1, -0x39F4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X39F4);
    // 0x801FB690: lui         $at, 0xC2E6
    ctx->r1 = S32(0XC2E6 << 16);
    // 0x801FB694: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801FB698: lwc1        $f0, 0xC($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0XC);
    // 0x801FB69C: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x801FB6A0: nop

    // 0x801FB6A4: bc1f        L_801FB72C
    if (!c1cs) {
        // 0x801FB6A8: lui         $at, 0x8021
        ctx->r1 = S32(0X8021 << 16);
            goto L_801FB72C;
    }
    // 0x801FB6A8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801FB6AC: lwc1        $f10, -0x37DC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X37DC);
    // 0x801FB6B0: lwc1        $f16, 0x8($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801FB6B4: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x801FB6B8: addiu       $a1, $a1, -0x3A38
    ctx->r5 = ADD32(ctx->r5, -0X3A38);
    // 0x801FB6BC: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x801FB6C0: nop

    // 0x801FB6C4: bc1fl       L_801FB704
    if (!c1cs) {
        // 0x801FB6C8: lw          $t4, 0x0($a1)
        ctx->r12 = MEM_W(ctx->r5, 0X0);
            goto L_801FB704;
    }
    goto skip_2;
    // 0x801FB6C8: lw          $t4, 0x0($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X0);
    skip_2:
    // 0x801FB6CC: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x801FB6D0: addiu       $a1, $a1, -0x3A38
    ctx->r5 = ADD32(ctx->r5, -0X3A38);
    // 0x801FB6D4: lw          $t0, 0x0($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X0);
    // 0x801FB6D8: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FB6DC: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x801FB6E0: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x801FB6E4: sh          $t9, -0x5214($at)
    MEM_H(-0X5214, ctx->r1) = ctx->r25;
    // 0x801FB6E8: lw          $t2, 0x0($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X0);
    // 0x801FB6EC: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FB6F0: addiu       $t1, $zero, 0x7
    ctx->r9 = ADD32(0, 0X7);
    // 0x801FB6F4: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x801FB6F8: b           L_801FB8A8
    // 0x801FB6FC: sh          $t1, -0x5212($at)
    MEM_H(-0X5212, ctx->r1) = ctx->r9;
        goto L_801FB8A8;
    // 0x801FB6FC: sh          $t1, -0x5212($at)
    MEM_H(-0X5212, ctx->r1) = ctx->r9;
    // 0x801FB700: lw          $t4, 0x0($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X0);
L_801FB704:
    // 0x801FB704: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FB708: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x801FB70C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x801FB710: sh          $t3, -0x5214($at)
    MEM_H(-0X5214, ctx->r1) = ctx->r11;
    // 0x801FB714: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x801FB718: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FB71C: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x801FB720: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x801FB724: b           L_801FB8A8
    // 0x801FB728: sh          $t5, -0x5212($at)
    MEM_H(-0X5212, ctx->r1) = ctx->r13;
        goto L_801FB8A8;
    // 0x801FB728: sh          $t5, -0x5212($at)
    MEM_H(-0X5212, ctx->r1) = ctx->r13;
L_801FB72C:
    // 0x801FB72C: lui         $at, 0xC3BA
    ctx->r1 = S32(0XC3BA << 16);
    // 0x801FB730: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801FB734: nop

    // 0x801FB738: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x801FB73C: nop

    // 0x801FB740: bc1f        L_801FB778
    if (!c1cs) {
        // 0x801FB744: lui         $a1, 0x8016
        ctx->r5 = S32(0X8016 << 16);
            goto L_801FB778;
    }
    // 0x801FB744: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x801FB748: addiu       $a1, $a1, -0x3A38
    ctx->r5 = ADD32(ctx->r5, -0X3A38);
    // 0x801FB74C: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x801FB750: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FB754: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801FB758: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x801FB75C: sh          $t7, -0x5214($at)
    MEM_H(-0X5214, ctx->r1) = ctx->r15;
    // 0x801FB760: lw          $t0, 0x0($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X0);
    // 0x801FB764: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FB768: addiu       $t9, $zero, 0x7
    ctx->r25 = ADD32(0, 0X7);
    // 0x801FB76C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x801FB770: b           L_801FB8A8
    // 0x801FB774: sh          $t9, -0x5212($at)
    MEM_H(-0X5212, ctx->r1) = ctx->r25;
        goto L_801FB8A8;
    // 0x801FB774: sh          $t9, -0x5212($at)
    MEM_H(-0X5212, ctx->r1) = ctx->r25;
L_801FB778:
    // 0x801FB778: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x801FB77C: addiu       $a1, $a1, -0x3A38
    ctx->r5 = ADD32(ctx->r5, -0X3A38);
    // 0x801FB780: lw          $t1, 0x0($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X0);
    // 0x801FB784: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FB788: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x801FB78C: sh          $zero, -0x5214($at)
    MEM_H(-0X5214, ctx->r1) = 0;
    // 0x801FB790: lw          $t2, 0x0($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X0);
    // 0x801FB794: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FB798: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x801FB79C: b           L_801FB8A8
    // 0x801FB7A0: sh          $zero, -0x5212($at)
    MEM_H(-0X5212, ctx->r1) = 0;
        goto L_801FB8A8;
    // 0x801FB7A0: sh          $zero, -0x5212($at)
    MEM_H(-0X5212, ctx->r1) = 0;
L_801FB7A4:
    // 0x801FB7A4: lui         $t3, 0x8020
    ctx->r11 = S32(0X8020 << 16);
    // 0x801FB7A8: lw          $t3, -0x39F4($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X39F4);
    // 0x801FB7AC: lui         $at, 0xC2F0
    ctx->r1 = S32(0XC2F0 << 16);
    // 0x801FB7B0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801FB7B4: lwc1        $f6, 0xC($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0XC);
    // 0x801FB7B8: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x801FB7BC: nop

    // 0x801FB7C0: bc1f        L_801FB7F8
    if (!c1cs) {
        // 0x801FB7C4: lui         $a1, 0x8016
        ctx->r5 = S32(0X8016 << 16);
            goto L_801FB7F8;
    }
    // 0x801FB7C4: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x801FB7C8: addiu       $a1, $a1, -0x3A38
    ctx->r5 = ADD32(ctx->r5, -0X3A38);
    // 0x801FB7CC: lw          $t5, 0x0($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X0);
    // 0x801FB7D0: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FB7D4: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x801FB7D8: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x801FB7DC: sh          $t4, -0x5214($at)
    MEM_H(-0X5214, ctx->r1) = ctx->r12;
    // 0x801FB7E0: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x801FB7E4: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FB7E8: addiu       $t6, $zero, 0xC
    ctx->r14 = ADD32(0, 0XC);
    // 0x801FB7EC: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x801FB7F0: b           L_801FB8A8
    // 0x801FB7F4: sh          $t6, -0x5212($at)
    MEM_H(-0X5212, ctx->r1) = ctx->r14;
        goto L_801FB8A8;
    // 0x801FB7F4: sh          $t6, -0x5212($at)
    MEM_H(-0X5212, ctx->r1) = ctx->r14;
L_801FB7F8:
    // 0x801FB7F8: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x801FB7FC: addiu       $a1, $a1, -0x3A38
    ctx->r5 = ADD32(ctx->r5, -0X3A38);
    // 0x801FB800: lw          $t9, 0x0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X0);
    // 0x801FB804: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FB808: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801FB80C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x801FB810: sh          $t8, -0x5214($at)
    MEM_H(-0X5214, ctx->r1) = ctx->r24;
    // 0x801FB814: lw          $t1, 0x0($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X0);
    // 0x801FB818: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FB81C: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x801FB820: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x801FB824: b           L_801FB8A8
    // 0x801FB828: sh          $t0, -0x5212($at)
    MEM_H(-0X5212, ctx->r1) = ctx->r8;
        goto L_801FB8A8;
    // 0x801FB828: sh          $t0, -0x5212($at)
    MEM_H(-0X5212, ctx->r1) = ctx->r8;
L_801FB82C:
    // 0x801FB82C: lui         $t2, 0x8020
    ctx->r10 = S32(0X8020 << 16);
    // 0x801FB830: lw          $t2, -0x39F4($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X39F4);
    // 0x801FB834: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x801FB838: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801FB83C: lwc1        $f10, 0xC($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0XC);
    // 0x801FB840: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x801FB844: nop

    // 0x801FB848: bc1f        L_801FB87C
    if (!c1cs) {
        // 0x801FB84C: lui         $a1, 0x8016
        ctx->r5 = S32(0X8016 << 16);
            goto L_801FB87C;
    }
    // 0x801FB84C: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x801FB850: addiu       $a1, $a1, -0x3A38
    ctx->r5 = ADD32(ctx->r5, -0X3A38);
    // 0x801FB854: lw          $t4, 0x0($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X0);
    // 0x801FB858: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FB85C: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x801FB860: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x801FB864: sh          $t3, -0x5214($at)
    MEM_H(-0X5214, ctx->r1) = ctx->r11;
    // 0x801FB868: lw          $t5, 0x0($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X0);
    // 0x801FB86C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FB870: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x801FB874: b           L_801FB8A8
    // 0x801FB878: sh          $zero, -0x5212($at)
    MEM_H(-0X5212, ctx->r1) = 0;
        goto L_801FB8A8;
    // 0x801FB878: sh          $zero, -0x5212($at)
    MEM_H(-0X5212, ctx->r1) = 0;
L_801FB87C:
    // 0x801FB87C: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x801FB880: addiu       $a1, $a1, -0x3A38
    ctx->r5 = ADD32(ctx->r5, -0X3A38);
    // 0x801FB884: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x801FB888: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FB88C: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x801FB890: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x801FB894: sh          $t6, -0x5214($at)
    MEM_H(-0X5214, ctx->r1) = ctx->r14;
    // 0x801FB898: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x801FB89C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FB8A0: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x801FB8A4: sh          $zero, -0x5212($at)
    MEM_H(-0X5212, ctx->r1) = 0;
L_801FB8A8:
    // 0x801FB8A8: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x801FB8AC: beq         $v0, $zero, L_801FB92C
    if (ctx->r2 == 0) {
        // 0x801FB8B0: addiu       $a1, $a1, -0x3A38
        ctx->r5 = ADD32(ctx->r5, -0X3A38);
            goto L_801FB92C;
    }
    // 0x801FB8B0: addiu       $a1, $a1, -0x3A38
    ctx->r5 = ADD32(ctx->r5, -0X3A38);
    // 0x801FB8B4: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x801FB8B8: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801FB8BC: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801FB8C0: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x801FB8C4: lw          $t9, 0x2DE8($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X2DE8);
    // 0x801FB8C8: lhu         $t1, 0x2DEC($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X2DEC);
    // 0x801FB8CC: lhu         $v1, 0x2DEE($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X2DEE);
    // 0x801FB8D0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x801FB8D4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x801FB8D8: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x801FB8DC: sll         $t2, $t1, 3
    ctx->r10 = S32(ctx->r9 << 3);
    // 0x801FB8E0: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x801FB8E4: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x801FB8E8: bgez        $v1, L_801FB8F8
    if (SIGNED(ctx->r3) >= 0) {
        // 0x801FB8EC: sra         $t4, $v1, 3
        ctx->r12 = S32(SIGNED(ctx->r3) >> 3);
            goto L_801FB8F8;
    }
    // 0x801FB8EC: sra         $t4, $v1, 3
    ctx->r12 = S32(SIGNED(ctx->r3) >> 3);
    // 0x801FB8F0: addiu       $at, $v1, 0x7
    ctx->r1 = ADD32(ctx->r3, 0X7);
    // 0x801FB8F4: sra         $t4, $at, 3
    ctx->r12 = S32(SIGNED(ctx->r1) >> 3);
L_801FB8F8:
    // 0x801FB8F8: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x801FB8FC: addiu       $t6, $t6, -0x39F8
    ctx->r14 = ADD32(ctx->r14, -0X39F8);
    // 0x801FB900: addu        $a0, $t5, $t6
    ctx->r4 = ADD32(ctx->r13, ctx->r14);
    // 0x801FB904: lbu         $t7, 0x138($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X138);
    // 0x801FB908: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801FB90C: bgez        $v1, L_801FB920
    if (SIGNED(ctx->r3) >= 0) {
        // 0x801FB910: andi        $t8, $v1, 0x7
        ctx->r24 = ctx->r3 & 0X7;
            goto L_801FB920;
    }
    // 0x801FB910: andi        $t8, $v1, 0x7
    ctx->r24 = ctx->r3 & 0X7;
    // 0x801FB914: beq         $t8, $zero, L_801FB920
    if (ctx->r24 == 0) {
        // 0x801FB918: nop
    
            goto L_801FB920;
    }
    // 0x801FB918: nop

    // 0x801FB91C: addiu       $t8, $t8, -0x8
    ctx->r24 = ADD32(ctx->r24, -0X8);
L_801FB920:
    // 0x801FB920: sllv        $t1, $t9, $t8
    ctx->r9 = S32(ctx->r25 << (ctx->r24 & 31));
    // 0x801FB924: or          $t0, $t7, $t1
    ctx->r8 = ctx->r15 | ctx->r9;
    // 0x801FB928: sb          $t0, 0x138($a0)
    MEM_B(0X138, ctx->r4) = ctx->r8;
L_801FB92C:
    // 0x801FB92C: jr          $ra
    // 0x801FB930: nop

    TRACE_RETURN()
    return;
    // 0x801FB930: nop

;}
