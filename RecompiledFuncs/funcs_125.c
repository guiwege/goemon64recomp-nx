#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_08000340_6F0550(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000340: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08000344: addiu       $a0, $a0, 0x5C
    ctx->r4 = ADD32(ctx->r4, 0X5C);
    // 0x08000348: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x0800034C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000350: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x08000354: or          $t6, $a0, $at
    ctx->r14 = ctx->r4 | ctx->r1;
    // 0x08000358: addiu       $t9, $t9, 0x8BC
    ctx->r25 = ADD32(ctx->r25, 0X8BC);
    // 0x0800035C: jalr        $t9
    // 0x08000360: sw          $t6, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000360: sw          $t6, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r14;
    after_0:
    // 0x08000364: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000368: addiu       $t9, $t9, 0x8E4
    ctx->r25 = ADD32(ctx->r25, 0X8E4);
    // 0x0800036C: addiu       $t7, $zero, 0xF0
    ctx->r15 = ADD32(0, 0XF0);
    // 0x08000370: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x08000374: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x08000378: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x0800037C: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x08000380: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x08000384: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x08000388: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x0800038C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x08000390: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x08000394: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08000398: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800039C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080003A0: jalr        $t9
    // 0x080003A4: addiu       $a3, $zero, 0x140
    ctx->r7 = ADD32(0, 0X140);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080003A4: addiu       $a3, $zero, 0x140
    ctx->r7 = ADD32(0, 0X140);
    after_1:
    // 0x080003A8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x080003AC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x080003B0: jr          $ra
    // 0x080003B4: nop

    TRACE_RETURN()
    return;
    // 0x080003B4: nop

    // 0x080003B8: jr          $ra
    // 0x080003BC: nop

    TRACE_RETURN()
    return;
    // 0x080003BC: nop

;}
RECOMP_FUNC void func_080008CC_6F0ADC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080008CC: lw          $v0, 0x80($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X80);
    // 0x080008D0: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x080008D4: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x080008D8: mflo        $v0
    ctx->r2 = lo;
    // 0x080008DC: jr          $ra
    // 0x080008E0: nop

    TRACE_RETURN()
    return;
    // 0x080008E0: nop

;}
RECOMP_FUNC void func_080002D8_6F04E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080002D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080002DC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080002E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080002E4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080002E8: andi        $a1, $a0, 0xFF
    ctx->r5 = ctx->r4 & 0XFF;
    // 0x080002EC: addiu       $t9, $t9, -0x6360
    ctx->r25 = ADD32(ctx->r25, -0X6360);
    // 0x080002F0: jalr        $t9
    // 0x080002F4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080002F4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x080002F8: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x080002FC: lhu         $v1, 0x20($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X20);
    // 0x08000300: beql        $a0, $zero, L_0800032C
    if (ctx->r4 == 0) {
        // 0x08000304: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_0800032C;
    }
    goto skip_0;
    // 0x08000304: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08000308: lhu         $t6, 0x20($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X20);
    // 0x0800030C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000310: addiu       $t9, $t9, 0x4EF8
    ctx->r25 = ADD32(ctx->r25, 0X4EF8);
    // 0x08000314: slt         $at, $v1, $t6
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x08000318: beql        $at, $zero, L_0800032C
    if (ctx->r1 == 0) {
        // 0x0800031C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_0800032C;
    }
    goto skip_1;
    // 0x0800031C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x08000320: jalr        $t9
    // 0x08000324: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000324: nop

    after_1:
    // 0x08000328: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_0800032C:
    // 0x0800032C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000330: jr          $ra
    // 0x08000334: nop

    TRACE_RETURN()
    return;
    // 0x08000334: nop

    // 0x08000338: jr          $ra
    // 0x0800033C: nop

    TRACE_RETURN()
    return;
    // 0x0800033C: nop

;}
RECOMP_FUNC void func_080003C0_6F05D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080003C0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x080003C4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x080003C8: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x080003CC: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x080003D0: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x080003D4: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x080003D8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x080003DC: or          $s1, $a3, $zero
    ctx->r17 = ctx->r7 | 0;
    // 0x080003E0: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x080003E4: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x080003E8: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x080003EC: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x080003F0: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x080003F4: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x080003F8: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x080003FC: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x08000400: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x08000404: bne         $s0, $at, L_08000414
    if (ctx->r16 != ctx->r1) {
        // 0x08000408: or          $fp, $zero, $zero
        ctx->r30 = 0 | 0;
            goto L_08000414;
    }
    // 0x08000408: or          $fp, $zero, $zero
    ctx->r30 = 0 | 0;
    // 0x0800040C: addiu       $fp, $zero, 0x1
    ctx->r30 = ADD32(0, 0X1);
    // 0x08000410: addiu       $s0, $zero, 0xA
    ctx->r16 = ADD32(0, 0XA);
L_08000414:
    // 0x08000414: blez        $s0, L_080005AC
    if (SIGNED(ctx->r16) <= 0) {
        // 0x08000418: lui         $s7, 0x800
        ctx->r23 = S32(RELOC_HI16(33, 0X32E0) << 16);
            goto L_080005AC;
    }
    // 0x08000418: lui         $s7, 0x800
    ctx->r23 = S32(RELOC_HI16(33, 0X32E0) << 16);
    // 0x0800041C: lui         $s6, 0x800
    ctx->r22 = S32(RELOC_HI16(33, 0X32E4) << 16);
    // 0x08000420: lui         $s5, 0x800
    ctx->r21 = S32(RELOC_HI16(33, 0X32E8) << 16);
    // 0x08000424: lui         $s4, 0x800
    ctx->r20 = S32(RELOC_HI16(33, 0X32EC) << 16);
    // 0x08000428: lui         $s3, 0x800
    ctx->r19 = S32(RELOC_HI16(33, 0X32DC) << 16);
    // 0x0800042C: addiu       $s3, $s3, 0x32DC
    ctx->r19 = ADD32(ctx->r19, (int16_t)RELOC_LO16(33, 0X32DC));
    // 0x08000430: addiu       $s4, $s4, 0x32EC
    ctx->r20 = ADD32(ctx->r20, (int16_t)RELOC_LO16(33, 0X32EC));
    // 0x08000434: addiu       $s5, $s5, 0x32E8
    ctx->r21 = ADD32(ctx->r21, (int16_t)RELOC_LO16(33, 0X32E8));
    // 0x08000438: addiu       $s6, $s6, 0x32E4
    ctx->r22 = ADD32(ctx->r22, (int16_t)RELOC_LO16(33, 0X32E4));
    // 0x0800043C: addiu       $s7, $s7, 0x32E0
    ctx->r23 = ADD32(ctx->r23, (int16_t)RELOC_LO16(33, 0X32E0));
L_08000440:
    // 0x08000440: div         $zero, $s1, $s0
    lo = S32(S64(S32(ctx->r17)) / S64(S32(ctx->r16))); hi = S32(S64(S32(ctx->r17)) % S64(S32(ctx->r16)));
    // 0x08000444: bne         $s0, $zero, L_08000450
    if (ctx->r16 != 0) {
        // 0x08000448: nop
    
            goto L_08000450;
    }
    // 0x08000448: nop

    // 0x0800044C: break       7
    do_break(134218828);
L_08000450:
    // 0x08000450: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x08000454: bne         $s0, $at, L_08000468
    if (ctx->r16 != ctx->r1) {
        // 0x08000458: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_08000468;
    }
    // 0x08000458: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x0800045C: bne         $s1, $at, L_08000468
    if (ctx->r17 != ctx->r1) {
        // 0x08000460: nop
    
            goto L_08000468;
    }
    // 0x08000460: nop

    // 0x08000464: break       6
    do_break(134218852);
L_08000468:
    // 0x08000468: mflo        $v0
    ctx->r2 = lo;
    // 0x0800046C: mfhi        $s1
    ctx->r17 = hi;
    // 0x08000470: sltiu       $at, $v0, 0xA
    ctx->r1 = ctx->r2 < 0XA ? 1 : 0;
    // 0x08000474: beq         $at, $zero, L_08000494
    if (ctx->r1 == 0) {
        // 0x08000478: nop
    
            goto L_08000494;
    }
    // 0x08000478: nop

    // 0x0800047C: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x08000480: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(33, 0X3234) << 16);
    // 0x08000484: addu        $at, $at, $t6
    gpr jr_addend_0800048C = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x08000488: lw          $t6, 0x3234($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(33, 0X3234));
    // 0x0800048C: jr          $t6
    // 0x08000490: nop

    switch (jr_addend_0800048C >> 2) {
        case 0: goto L_08000494; break;
        case 1: goto L_080004B8; break;
        case 2: goto L_080004CC; break;
        case 3: goto L_080004E0; break;
        case 4: goto L_080004F4; break;
        case 5: goto L_08000508; break;
        case 6: goto L_0800051C; break;
        case 7: goto L_08000530; break;
        case 8: goto L_08000544; break;
        case 9: goto L_08000558; break;
        default: switch_error(__func__, 0x0800048C, 0x08003234);
    }
    // 0x08000490: nop

L_08000494:
    // 0x08000494: bne         $fp, $zero, L_080004A4
    if (ctx->r30 != 0) {
        // 0x08000498: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_080004A4;
    }
    // 0x08000498: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x0800049C: bnel        $s0, $at, L_08000598
    if (ctx->r16 != ctx->r1) {
        // 0x080004A0: addiu       $at, $zero, 0xA
        ctx->r1 = ADD32(0, 0XA);
            goto L_08000598;
    }
    goto skip_0;
    // 0x080004A0: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    skip_0:
L_080004A4:
    // 0x080004A4: lui         $t0, 0x8001
    ctx->r8 = S32(0X8001 << 16);
    // 0x080004A8: addiu       $t0, $t0, 0x6F0
    ctx->r8 = ADD32(ctx->r8, 0X6F0);
    // 0x080004AC: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x080004B0: b           L_08000568
    // 0x080004B4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_08000568;
    // 0x080004B4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_080004B8:
    // 0x080004B8: lui         $t0, 0x8001
    ctx->r8 = S32(0X8001 << 16);
    // 0x080004BC: addiu       $t0, $t0, 0x6F0
    ctx->r8 = ADD32(ctx->r8, 0X6F0);
    // 0x080004C0: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x080004C4: b           L_08000568
    // 0x080004C8: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
        goto L_08000568;
    // 0x080004C8: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
L_080004CC:
    // 0x080004CC: lui         $t0, 0x8001
    ctx->r8 = S32(0X8001 << 16);
    // 0x080004D0: addiu       $t0, $t0, 0x6F0
    ctx->r8 = ADD32(ctx->r8, 0X6F0);
    // 0x080004D4: lw          $v0, 0x0($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X0);
    // 0x080004D8: b           L_08000568
    // 0x080004DC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_08000568;
    // 0x080004DC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_080004E0:
    // 0x080004E0: lui         $t0, 0x8001
    ctx->r8 = S32(0X8001 << 16);
    // 0x080004E4: addiu       $t0, $t0, 0x6F0
    ctx->r8 = ADD32(ctx->r8, 0X6F0);
    // 0x080004E8: lw          $v0, 0x0($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X0);
    // 0x080004EC: b           L_08000568
    // 0x080004F0: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
        goto L_08000568;
    // 0x080004F0: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
L_080004F4:
    // 0x080004F4: lui         $t0, 0x8001
    ctx->r8 = S32(0X8001 << 16);
    // 0x080004F8: addiu       $t0, $t0, 0x6F0
    ctx->r8 = ADD32(ctx->r8, 0X6F0);
    // 0x080004FC: lw          $v0, 0x0($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X0);
    // 0x08000500: b           L_08000568
    // 0x08000504: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_08000568;
    // 0x08000504: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_08000508:
    // 0x08000508: lui         $t0, 0x8001
    ctx->r8 = S32(0X8001 << 16);
    // 0x0800050C: addiu       $t0, $t0, 0x6F0
    ctx->r8 = ADD32(ctx->r8, 0X6F0);
    // 0x08000510: lw          $v0, 0x0($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X0);
    // 0x08000514: b           L_08000568
    // 0x08000518: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
        goto L_08000568;
    // 0x08000518: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
L_0800051C:
    // 0x0800051C: lui         $t0, 0x8001
    ctx->r8 = S32(0X8001 << 16);
    // 0x08000520: addiu       $t0, $t0, 0x6F0
    ctx->r8 = ADD32(ctx->r8, 0X6F0);
    // 0x08000524: lw          $v0, 0x0($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X0);
    // 0x08000528: b           L_08000568
    // 0x0800052C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_08000568;
    // 0x0800052C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_08000530:
    // 0x08000530: lui         $t0, 0x8001
    ctx->r8 = S32(0X8001 << 16);
    // 0x08000534: addiu       $t0, $t0, 0x6F0
    ctx->r8 = ADD32(ctx->r8, 0X6F0);
    // 0x08000538: lw          $v0, 0x0($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X0);
    // 0x0800053C: b           L_08000568
    // 0x08000540: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
        goto L_08000568;
    // 0x08000540: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
L_08000544:
    // 0x08000544: lui         $t0, 0x8001
    ctx->r8 = S32(0X8001 << 16);
    // 0x08000548: addiu       $t0, $t0, 0x6F0
    ctx->r8 = ADD32(ctx->r8, 0X6F0);
    // 0x0800054C: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x08000550: b           L_08000568
    // 0x08000554: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_08000568;
    // 0x08000554: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_08000558:
    // 0x08000558: lui         $t0, 0x8001
    ctx->r8 = S32(0X8001 << 16);
    // 0x0800055C: addiu       $t0, $t0, 0x6F0
    ctx->r8 = ADD32(ctx->r8, 0X6F0);
    // 0x08000560: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x08000564: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
L_08000568:
    // 0x08000568: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x0800056C: addiu       $t8, $zero, 0x30
    ctx->r24 = ADD32(0, 0X30);
    // 0x08000570: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x08000574: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x08000578: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x0800057C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x08000580: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    // 0x08000584: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x08000588: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0800058C: jalr        $t0
    // 0x08000590: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r8)(rdram, ctx);
        goto after_0;
    // 0x08000590: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x08000594: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
L_08000598:
    // 0x08000598: div         $zero, $s0, $at
    lo = S32(S64(S32(ctx->r16)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r16)) % S64(S32(ctx->r1)));
    // 0x0800059C: mflo        $t9
    ctx->r25 = lo;
    // 0x080005A0: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    // 0x080005A4: bgtz        $t9, L_08000440
    if (SIGNED(ctx->r25) > 0) {
        // 0x080005A8: addiu       $s2, $s2, 0x10
        ctx->r18 = ADD32(ctx->r18, 0X10);
            goto L_08000440;
    }
    // 0x080005A8: addiu       $s2, $s2, 0x10
    ctx->r18 = ADD32(ctx->r18, 0X10);
L_080005AC:
    // 0x080005AC: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x080005B0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x080005B4: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x080005B8: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x080005BC: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x080005C0: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x080005C4: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x080005C8: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x080005CC: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x080005D0: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x080005D4: jr          $ra
    // 0x080005D8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x080005D8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_08001570_6F1780(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001570: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08001574: lui         $at, 0x438C
    ctx->r1 = S32(0X438C << 16);
    // 0x08001578: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x0800157C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001580: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x08001584: swc1        $f2, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->f2.u32l;
    // 0x08001588: lui         $at, 0x4034
    ctx->r1 = S32(0X4034 << 16);
    // 0x0800158C: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08001590: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x08001594: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x08001598: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x0800159C: addiu       $v0, $a0, 0xD0
    ctx->r2 = ADD32(ctx->r4, 0XD0);
    // 0x080015A0: bc1fl       L_080015C0
    if (!c1cs) {
        // 0x080015A4: lwc1        $f6, 0x8($v0)
        ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
            goto L_080015C0;
    }
    goto skip_0;
    // 0x080015A4: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    skip_0:
    // 0x080015A8: addiu       $v0, $a0, 0xD0
    ctx->r2 = ADD32(ctx->r4, 0XD0);
    // 0x080015AC: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x080015B0: sub.s       $f2, $f4, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x080015B4: b           L_080015C4
    // 0x080015B8: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_080015C4;
    // 0x080015B8: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x080015BC: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
L_080015C0:
    // 0x080015C0: sub.s       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f0.fl;
L_080015C4:
    // 0x080015C4: cvt.d.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
    // 0x080015C8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080015CC: div.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x080015D0: addiu       $t9, $t9, 0x33D4
    ctx->r25 = ADD32(ctx->r25, 0X33D4);
    // 0x080015D4: lw          $a0, 0x10($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X10);
    // 0x080015D8: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    // 0x080015DC: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x080015E0: swc1        $f18, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f18.u32l;
    // 0x080015E4: jalr        $t9
    // 0x080015E8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080015E8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_0:
    // 0x080015EC: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x080015F0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080015F4: addiu       $t9, $t9, 0x35D4
    ctx->r25 = ADD32(ctx->r25, 0X35D4);
    // 0x080015F8: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x080015FC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08001600: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x08001604: jalr        $t9
    // 0x08001608: lw          $a0, 0x10($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001608: lw          $a0, 0x10($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X10);
    after_1:
    // 0x0800160C: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x08001610: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(33, 0X1318) << 16);
    // 0x08001614: addiu       $t9, $t9, 0x1318
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(33, 0X1318));
    // 0x08001618: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x0800161C: beq         $a0, $zero, L_0800162C
    if (ctx->r4 == 0) {
        // 0x08001620: nop
    
            goto L_0800162C;
    }
    // 0x08001620: nop

    // 0x08001624: jalr        $t9
    // 0x08001628: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001628: nop

    after_2:
L_0800162C:
    // 0x0800162C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001630: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08001634: jalr        $t9
    // 0x08001638: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001638: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_3:
    // 0x0800163C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001640: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08001644: jr          $ra
    // 0x08001648: nop

    TRACE_RETURN()
    return;
    // 0x08001648: nop

;}
RECOMP_FUNC void func_08001318_6F1528(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001318: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800131C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001320: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x08001324: lui         $at, 0xFEFF
    ctx->r1 = S32(0XFEFF << 16);
    // 0x08001328: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x0800132C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001330: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08001334: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x08001338: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x0800133C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001340: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x08001344: jalr        $t9
    // 0x08001348: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001348: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x0800134C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001350: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001354: jr          $ra
    // 0x08001358: nop

    TRACE_RETURN()
    return;
    // 0x08001358: nop

;}
RECOMP_FUNC void func_08001030_6F1240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001030: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x08001034: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08001038: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0800103C: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x08001040: lbu         $v0, 0xD0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD0);
    // 0x08001044: lui         $t6, 0x2C0
    ctx->r14 = S32(0X2C0 << 16);
    // 0x08001048: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x0800104C: beq         $v0, $zero, L_08001070
    if (ctx->r2 == 0) {
        // 0x08001050: ori         $t6, $t6, 0x7E0
        ctx->r14 = ctx->r14 | 0X7E0;
            goto L_08001070;
    }
    // 0x08001050: ori         $t6, $t6, 0x7E0
    ctx->r14 = ctx->r14 | 0X7E0;
    // 0x08001054: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08001058: beq         $v0, $at, L_08001104
    if (ctx->r2 == ctx->r1) {
        // 0x0800105C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_08001104;
    }
    // 0x0800105C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08001060: beq         $v0, $at, L_080011F8
    if (ctx->r2 == ctx->r1) {
        // 0x08001064: addiu       $a0, $zero, 0x26C
        ctx->r4 = ADD32(0, 0X26C);
            goto L_080011F8;
    }
    // 0x08001064: addiu       $a0, $zero, 0x26C
    ctx->r4 = ADD32(0, 0X26C);
    // 0x08001068: b           L_08001240
    // 0x0800106C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_08001240;
    // 0x0800106C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08001070:
    // 0x08001070: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001074: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08001078: sw          $t6, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r14;
    // 0x0800107C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001080: jalr        $t9
    // 0x08001084: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001084: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x08001088: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800108C: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x08001090: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001094: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x08001098: jalr        $t9
    // 0x0800109C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800109C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x080010A0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080010A4: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x080010A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080010AC: addiu       $a1, $zero, 0x3E8
    ctx->r5 = ADD32(0, 0X3E8);
    // 0x080010B0: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    // 0x080010B4: jalr        $t9
    // 0x080010B8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080010B8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x080010BC: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
    // 0x080010C0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x080010C4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080010C8: lw          $t7, 0x30($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X30);
    // 0x080010CC: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x080010D0: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x080010D4: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x080010D8: addiu       $t9, $t9, -0x5CF0
    ctx->r25 = ADD32(ctx->r25, -0X5CF0);
    // 0x080010DC: sw          $t8, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r24;
    // 0x080010E0: sb          $t0, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r8;
    // 0x080010E4: sb          $t1, 0x75($s0)
    MEM_B(0X75, ctx->r16) = ctx->r9;
    // 0x080010E8: jalr        $t9
    // 0x080010EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080010EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x080010F0: addiu       $t2, $zero, 0x10E
    ctx->r10 = ADD32(0, 0X10E);
    // 0x080010F4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x080010F8: sh          $t2, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r10;
    // 0x080010FC: b           L_0800123C
    // 0x08001100: sb          $t3, 0xD0($s0)
    MEM_B(0XD0, ctx->r16) = ctx->r11;
        goto L_0800123C;
    // 0x08001100: sb          $t3, 0xD0($s0)
    MEM_B(0XD0, ctx->r16) = ctx->r11;
L_08001104:
    // 0x08001104: addiu       $v0, $s0, 0xD0
    ctx->r2 = ADD32(ctx->r16, 0XD0);
    // 0x08001108: lbu         $t4, 0x1($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X1);
    // 0x0800110C: bnel        $t4, $zero, L_0800116C
    if (ctx->r12 != 0) {
        // 0x08001110: lw          $t0, 0x68($s0)
        ctx->r8 = MEM_W(ctx->r16, 0X68);
            goto L_0800116C;
    }
    goto skip_0;
    // 0x08001110: lw          $t0, 0x68($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X68);
    skip_0:
    // 0x08001114: lw          $t5, 0x68($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X68);
    // 0x08001118: addiu       $a0, $zero, 0x2A5
    ctx->r4 = ADD32(0, 0X2A5);
    // 0x0800111C: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(33, 0X32D0) << 16);
    // 0x08001120: andi        $t6, $t5, 0x20
    ctx->r14 = ctx->r13 & 0X20;
    // 0x08001124: bne         $t6, $zero, L_08001168
    if (ctx->r14 != 0) {
        // 0x08001128: lw          $t7, 0x44($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X44);
            goto L_08001168;
    }
    // 0x08001128: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x0800112C: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x08001130: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08001134: lwc1        $f4, 0x10($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X10);
    // 0x08001138: lw          $a2, 0x8($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X8);
    // 0x0800113C: lw          $a3, 0xC($t7)
    ctx->r7 = MEM_W(ctx->r15, 0XC);
    // 0x08001140: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001144: addiu       $t9, $t9, -0xA08
    ctx->r25 = ADD32(ctx->r25, -0XA08);
    // 0x08001148: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x0800114C: lw          $a1, 0x32D0($a1)
    ctx->r5 = MEM_W(ctx->r5, (int16_t)RELOC_LO16(33, 0X32D0));
    // 0x08001150: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x08001154: jalr        $t9
    // 0x08001158: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001158: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_4:
    // 0x0800115C: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x08001160: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x08001164: sb          $t8, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r24;
L_08001168:
    // 0x08001168: lw          $t0, 0x68($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X68);
L_0800116C:
    // 0x0800116C: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x08001170: andi        $t1, $t0, 0x200
    ctx->r9 = ctx->r8 & 0X200;
    // 0x08001174: beql        $t1, $zero, L_08001184
    if (ctx->r9 == 0) {
        // 0x08001178: lhu         $v1, 0x8A($s0)
        ctx->r3 = MEM_HU(ctx->r16, 0X8A);
            goto L_08001184;
    }
    goto skip_1;
    // 0x08001178: lhu         $v1, 0x8A($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X8A);
    skip_1:
    // 0x0800117C: sb          $t2, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r10;
    // 0x08001180: lhu         $v1, 0x8A($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X8A);
L_08001184:
    // 0x08001184: slti        $v0, $v1, 0x78
    ctx->r2 = SIGNED(ctx->r3) < 0X78 ? 1 : 0;
    // 0x08001188: addiu       $t3, $v1, -0x1
    ctx->r11 = ADD32(ctx->r3, -0X1);
    // 0x0800118C: beq         $v0, $zero, L_0800123C
    if (ctx->r2 == 0) {
        // 0x08001190: sh          $t3, 0x8A($s0)
        MEM_H(0X8A, ctx->r16) = ctx->r11;
            goto L_0800123C;
    }
    // 0x08001190: sh          $t3, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r11;
    // 0x08001194: andi        $t4, $t3, 0xFFFF
    ctx->r12 = ctx->r11 & 0XFFFF;
    // 0x08001198: bgez        $t4, L_080011AC
    if (SIGNED(ctx->r12) >= 0) {
        // 0x0800119C: andi        $t5, $t4, 0x1
        ctx->r13 = ctx->r12 & 0X1;
            goto L_080011AC;
    }
    // 0x0800119C: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x080011A0: beq         $t5, $zero, L_080011AC
    if (ctx->r13 == 0) {
        // 0x080011A4: nop
    
            goto L_080011AC;
    }
    // 0x080011A4: nop

    // 0x080011A8: addiu       $t5, $t5, -0x2
    ctx->r13 = ADD32(ctx->r13, -0X2);
L_080011AC:
    // 0x080011AC: bgtzl       $t5, L_080011CC
    if (SIGNED(ctx->r13) > 0) {
        // 0x080011B0: lw          $t9, 0x60($s0)
        ctx->r25 = MEM_W(ctx->r16, 0X60);
            goto L_080011CC;
    }
    goto skip_2;
    // 0x080011B0: lw          $t9, 0x60($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X60);
    skip_2:
    // 0x080011B4: lw          $t6, 0x60($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X60);
    // 0x080011B8: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x080011BC: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x080011C0: b           L_080011D4
    // 0x080011C4: sw          $t7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r15;
        goto L_080011D4;
    // 0x080011C4: sw          $t7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r15;
    // 0x080011C8: lw          $t9, 0x60($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X60);
L_080011CC:
    // 0x080011CC: ori         $t8, $t9, 0x20
    ctx->r24 = ctx->r25 | 0X20;
    // 0x080011D0: sw          $t8, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r24;
L_080011D4:
    // 0x080011D4: lhu         $t0, 0x8A($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X8A);
    // 0x080011D8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080011DC: addiu       $t9, $t9, 0x4EF8
    ctx->r25 = ADD32(ctx->r25, 0X4EF8);
    // 0x080011E0: bnel        $t0, $zero, L_08001240
    if (ctx->r8 != 0) {
        // 0x080011E4: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_08001240;
    }
    goto skip_3;
    // 0x080011E4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_3:
    // 0x080011E8: jalr        $t9
    // 0x080011EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080011EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x080011F0: b           L_08001240
    // 0x080011F4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_08001240;
    // 0x080011F4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_080011F8:
    // 0x080011F8: lui         $v0, 0x800
    ctx->r2 = S32(RELOC_HI16(33, 0X32F4) << 16);
    // 0x080011FC: addiu       $v0, $v0, 0x32F4
    ctx->r2 = ADD32(ctx->r2, (int16_t)RELOC_LO16(33, 0X32F4));
    // 0x08001200: lbu         $t1, 0x0($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X0);
    // 0x08001204: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001208: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x0800120C: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x08001210: jalr        $t9
    // 0x08001214: sb          $t2, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r10;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08001214: sb          $t2, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r10;
    after_6:
    // 0x08001218: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800121C: addiu       $t9, $t9, -0x7FB4
    ctx->r25 = ADD32(ctx->r25, -0X7FB4);
    // 0x08001220: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001224: jalr        $t9
    // 0x08001228: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08001228: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x0800122C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001230: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08001234: jalr        $t9
    // 0x08001238: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08001238: nop

    after_8:
L_0800123C:
    // 0x0800123C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08001240:
    // 0x08001240: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08001244: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x08001248: jr          $ra
    // 0x0800124C: nop

    TRACE_RETURN()
    return;
    // 0x0800124C: nop

;}
RECOMP_FUNC void func_08000254_6F0464(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000254: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000258: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800025C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000260: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000264: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000268: addiu       $t9, $t9, -0x6360
    ctx->r25 = ADD32(ctx->r25, -0X6360);
    // 0x0800026C: lbu         $a1, 0x1B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1B);
    // 0x08000270: jalr        $t9
    // 0x08000274: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000274: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x08000278: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x0800027C: lhu         $a1, 0x20($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X20);
    // 0x08000280: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x08000284: beq         $v1, $zero, L_080002CC
    if (ctx->r3 == 0) {
        // 0x08000288: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_080002CC;
    }
    // 0x08000288: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800028C: lhu         $t6, 0x20($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X20);
    // 0x08000290: lhu         $v0, 0x1E($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X1E);
    // 0x08000294: slt         $at, $a1, $t6
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x08000298: beql        $at, $zero, L_080002D0
    if (ctx->r1 == 0) {
        // 0x0800029C: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_080002D0;
    }
    goto skip_0;
    // 0x0800029C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    skip_0:
    // 0x080002A0: lhu         $t7, 0x5C($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X5C);
L_080002A4:
    // 0x080002A4: bnel        $v0, $t7, L_080002B4
    if (ctx->r2 != ctx->r15) {
        // 0x080002A8: lw          $v1, 0x0($v1)
        ctx->r3 = MEM_W(ctx->r3, 0X0);
            goto L_080002B4;
    }
    goto skip_1;
    // 0x080002A8: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    skip_1:
    // 0x080002AC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x080002B0: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
L_080002B4:
    // 0x080002B4: beql        $v1, $zero, L_080002D0
    if (ctx->r3 == 0) {
        // 0x080002B8: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_080002D0;
    }
    goto skip_2;
    // 0x080002B8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    skip_2:
    // 0x080002BC: lhu         $t8, 0x20($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X20);
    // 0x080002C0: slt         $at, $a1, $t8
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x080002C4: bnel        $at, $zero, L_080002A4
    if (ctx->r1 != 0) {
        // 0x080002C8: lhu         $t7, 0x5C($v1)
        ctx->r15 = MEM_HU(ctx->r3, 0X5C);
            goto L_080002A4;
    }
    goto skip_3;
    // 0x080002C8: lhu         $t7, 0x5C($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X5C);
    skip_3:
L_080002CC:
    // 0x080002CC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_080002D0:
    // 0x080002D0: jr          $ra
    // 0x080002D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x080002D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_08001954_6F1B64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001954: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x08001958: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x0800195C: lw          $t6, -0x39D8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39D8);
    // 0x08001960: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x08001964: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x08001968: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x0800196C: sw          $a0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r4;
    // 0x08001970: lui         $at, 0xC2E0
    ctx->r1 = S32(0XC2E0 << 16);
    // 0x08001974: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08001978: lw          $t7, 0x2C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X2C);
    // 0x0800197C: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x08001980: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x08001984: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x08001988: lw          $v1, -0x39F4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X39F4);
    // 0x0800198C: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x08001990: sw          $t8, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r24;
    // 0x08001994: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x08001998: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x0800199C: lwc1        $f4, 0xC($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0XC);
    // 0x080019A0: lwc1        $f18, 0x8($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X8);
    // 0x080019A4: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x080019A8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x080019AC: lui         $at, 0x42E0
    ctx->r1 = S32(0X42E0 << 16);
    // 0x080019B0: lw          $s1, 0x90($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X90);
    // 0x080019B4: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x080019B8: swc1        $f8, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f8.u32l;
    // 0x080019BC: lwc1        $f10, 0x10($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X10);
    // 0x080019C0: bc1f        L_080019D0
    if (!c1cs) {
        // 0x080019C4: swc1        $f10, 0x74($sp)
        MEM_W(0X74, ctx->r29) = ctx->f10.u32l;
            goto L_080019D0;
    }
    // 0x080019C4: swc1        $f10, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f10.u32l;
    // 0x080019C8: b           L_080019EC
    // 0x080019CC: mov.s       $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.fl = ctx->f0.fl;
        goto L_080019EC;
    // 0x080019CC: mov.s       $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.fl = ctx->f0.fl;
L_080019D0:
    // 0x080019D0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x080019D4: nop

    // 0x080019D8: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x080019DC: nop

    // 0x080019E0: bc1fl       L_080019F0
    if (!c1cs) {
        // 0x080019E4: lbu         $t9, 0xDC($s1)
        ctx->r25 = MEM_BU(ctx->r17, 0XDC);
            goto L_080019F0;
    }
    goto skip_0;
    // 0x080019E4: lbu         $t9, 0xDC($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0XDC);
    skip_0:
    // 0x080019E8: mov.s       $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.fl = ctx->f0.fl;
L_080019EC:
    // 0x080019EC: lbu         $t9, 0xDC($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0XDC);
L_080019F0:
    // 0x080019F0: addiu       $s1, $s1, 0xD0
    ctx->r17 = ADD32(ctx->r17, 0XD0);
    // 0x080019F4: sltiu       $at, $t9, 0xB
    ctx->r1 = ctx->r25 < 0XB ? 1 : 0;
    // 0x080019F8: beq         $at, $zero, L_08002CA4
    if (ctx->r1 == 0) {
        // 0x080019FC: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_08002CA4;
    }
    // 0x080019FC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x08001A00: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(33, 0X3280) << 16);
    // 0x08001A04: addu        $at, $at, $t9
    gpr jr_addend_08001A0C = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x08001A08: lw          $t9, 0x3280($at)
    ctx->r25 = ADD32(ctx->r1, (int16_t)RELOC_LO16(33, 0X3280));
    // 0x08001A0C: jr          $t9
    // 0x08001A10: nop

    switch (jr_addend_08001A0C >> 2) {
        case 0: goto L_08001A14; break;
        case 1: goto L_08001C5C; break;
        case 2: goto L_08001EE4; break;
        case 3: goto L_08002014; break;
        case 4: goto L_08002108; break;
        case 5: goto L_080025F0; break;
        case 6: goto L_0800230C; break;
        case 7: goto L_080026CC; break;
        case 8: goto L_08002920; break;
        case 9: goto L_08002BAC; break;
        case 10: goto L_08002E74; break;
        default: switch_error(__func__, 0x08001A0C, 0x08003280);
    }
    // 0x08001A10: nop

L_08001A14:
    // 0x08001A14: lh          $t0, 0xE($s1)
    ctx->r8 = MEM_H(ctx->r17, 0XE);
    // 0x08001A18: lui         $t1, 0x20
    ctx->r9 = S32(0X20 << 16);
    // 0x08001A1C: ori         $t1, $t1, 0x86E1
    ctx->r9 = ctx->r9 | 0X86E1;
    // 0x08001A20: slti        $at, $t0, 0x2
    ctx->r1 = SIGNED(ctx->r8) < 0X2 ? 1 : 0;
    // 0x08001A24: bne         $at, $zero, L_08002CA4
    if (ctx->r1 != 0) {
        // 0x08001A28: lw          $t2, 0x90($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X90);
            goto L_08002CA4;
    }
    // 0x08001A28: lw          $t2, 0x90($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X90);
    // 0x08001A2C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001A30: addiu       $t9, $t9, -0x6D4C
    ctx->r25 = ADD32(ctx->r25, -0X6D4C);
    // 0x08001A34: sw          $t1, 0x60($t2)
    MEM_W(0X60, ctx->r10) = ctx->r9;
    // 0x08001A38: jalr        $t9
    // 0x08001A3C: addiu       $a0, $zero, 0xC8
    ctx->r4 = ADD32(0, 0XC8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001A3C: addiu       $a0, $zero, 0xC8
    ctx->r4 = ADD32(0, 0XC8);
    after_0:
    // 0x08001A40: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(33, 0X8) << 16);
    // 0x08001A44: addiu       $t3, $v0, 0x32
    ctx->r11 = ADD32(ctx->r2, 0X32);
    // 0x08001A48: addiu       $t9, $t9, 0x8
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(33, 0X8));
    // 0x08001A4C: jalr        $t9
    // 0x08001A50: sh          $t3, 0x12($s1)
    MEM_H(0X12, ctx->r17) = ctx->r11;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001A50: sh          $t3, 0x12($s1)
    MEM_H(0X12, ctx->r17) = ctx->r11;
    after_1:
    // 0x08001A54: lw          $t4, 0x30($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X30);
    // 0x08001A58: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08001A5C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08001A60: or          $t5, $t4, $at
    ctx->r13 = ctx->r12 | ctx->r1;
    // 0x08001A64: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08001A68: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x08001A6C: lui         $at, 0xC320
    ctx->r1 = S32(0XC320 << 16);
    // 0x08001A70: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08001A74: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x08001A78: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08001A7C: sw          $t6, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r14;
    // 0x08001A80: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(33, 0X32F4) << 16);
    // 0x08001A84: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
    // 0x08001A88: swc1        $f6, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f6.u32l;
    // 0x08001A8C: swc1        $f8, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f8.u32l;
    // 0x08001A90: sb          $zero, 0x32F4($at)
    MEM_B((int16_t)RELOC_LO16(33, 0X32F4), ctx->r1) = 0;
    // 0x08001A94: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x08001A98: sh          $t7, 0x10($s1)
    MEM_H(0X10, ctx->r17) = ctx->r15;
    // 0x08001A9C: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x08001AA0: lw          $t0, -0x3A38($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3A38);
    // 0x08001AA4: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08001AA8: addiu       $v0, $v0, -0x3A28
    ctx->r2 = ADD32(ctx->r2, -0X3A28);
    // 0x08001AAC: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x08001AB0: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x08001AB4: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x08001AB8: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x08001ABC: sb          $t8, -0x51E0($at)
    MEM_B(-0X51E0, ctx->r1) = ctx->r24;
    // 0x08001AC0: addiu       $t1, $t1, -0x3994
    ctx->r9 = ADD32(ctx->r9, -0X3994);
    // 0x08001AC4: or          $t9, $v0, $zero
    ctx->r25 = ctx->r2 | 0;
    // 0x08001AC8: addiu       $t3, $v0, 0x30
    ctx->r11 = ADD32(ctx->r2, 0X30);
L_08001ACC:
    // 0x08001ACC: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x08001AD0: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x08001AD4: addiu       $t1, $t1, 0xC
    ctx->r9 = ADD32(ctx->r9, 0XC);
    // 0x08001AD8: sw          $at, -0xC($t1)
    MEM_W(-0XC, ctx->r9) = ctx->r1;
    // 0x08001ADC: lw          $at, -0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X8);
    // 0x08001AE0: sw          $at, -0x8($t1)
    MEM_W(-0X8, ctx->r9) = ctx->r1;
    // 0x08001AE4: lw          $at, -0x4($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X4);
    // 0x08001AE8: bne         $t9, $t3, L_08001ACC
    if (ctx->r25 != ctx->r11) {
        // 0x08001AEC: sw          $at, -0x4($t1)
        MEM_W(-0X4, ctx->r9) = ctx->r1;
            goto L_08001ACC;
    }
    // 0x08001AEC: sw          $at, -0x4($t1)
    MEM_W(-0X4, ctx->r9) = ctx->r1;
    // 0x08001AF0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001AF4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x08001AF8: addiu       $t5, $zero, 0x14
    ctx->r13 = ADD32(0, 0X14);
    // 0x08001AFC: addiu       $t6, $zero, 0x14
    ctx->r14 = ADD32(0, 0X14);
    // 0x08001B00: addiu       $t9, $t9, 0x1C04
    ctx->r25 = ADD32(ctx->r25, 0X1C04);
    // 0x08001B04: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x08001B08: sw          $t5, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r13;
    // 0x08001B0C: sw          $t6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r14;
    // 0x08001B10: sw          $zero, 0x10($v0)
    MEM_W(0X10, ctx->r2) = 0;
    // 0x08001B14: sw          $zero, 0x18($v0)
    MEM_W(0X18, ctx->r2) = 0;
    // 0x08001B18: sw          $zero, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = 0;
    // 0x08001B1C: jalr        $t9
    // 0x08001B20: sw          $zero, 0x24($v0)
    MEM_W(0X24, ctx->r2) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001B20: sw          $zero, 0x24($v0)
    MEM_W(0X24, ctx->r2) = 0;
    after_2:
    // 0x08001B24: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001B28: addiu       $t9, $t9, 0x1B60
    ctx->r25 = ADD32(ctx->r25, 0X1B60);
    // 0x08001B2C: jalr        $t9
    // 0x08001B30: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001B30: nop

    after_3:
    // 0x08001B34: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001B38: addiu       $t9, $t9, 0x1FB0
    ctx->r25 = ADD32(ctx->r25, 0X1FB0);
    // 0x08001B3C: jalr        $t9
    // 0x08001B40: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001B40: nop

    after_4:
    // 0x08001B44: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x08001B48: lw          $v1, -0x39F4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X39F4);
    // 0x08001B4C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08001B50: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08001B54: lw          $t7, 0x30($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X30);
    // 0x08001B58: addiu       $t9, $t9, -0x3A40
    ctx->r25 = ADD32(ctx->r25, -0X3A40);
    // 0x08001B5C: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x08001B60: jalr        $t9
    // 0x08001B64: sw          $t8, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r24;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08001B64: sw          $t8, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r24;
    after_5:
    // 0x08001B68: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001B6C: addiu       $t9, $t9, 0x2940
    ctx->r25 = ADD32(ctx->r25, 0X2940);
    // 0x08001B70: lw          $a0, 0x90($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X90);
    // 0x08001B74: jalr        $t9
    // 0x08001B78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08001B78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x08001B7C: lui         $at, 0xC33A
    ctx->r1 = S32(0XC33A << 16);
    // 0x08001B80: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08001B84: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001B88: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x08001B8C: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x08001B90: sw          $v0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r2;
    // 0x08001B94: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08001B98: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x08001B9C: jalr        $t9
    // 0x08001BA0: lui         $a2, 0xC1A0
    ctx->r6 = S32(0XC1A0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08001BA0: lui         $a2, 0xC1A0
    ctx->r6 = S32(0XC1A0 << 16);
    after_7:
    // 0x08001BA4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001BA8: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x08001BAC: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x08001BB0: jalr        $t9
    // 0x08001BB4: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08001BB4: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    after_8:
    // 0x08001BB8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001BBC: addiu       $t9, $t9, 0x2938
    ctx->r25 = ADD32(ctx->r25, 0X2938);
    // 0x08001BC0: jalr        $t9
    // 0x08001BC4: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08001BC4: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    after_9:
    // 0x08001BC8: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(33, 0X32D0) << 16);
    // 0x08001BCC: sw          $v0, 0x32D0($at)
    MEM_W((int16_t)RELOC_LO16(33, 0X32D0), ctx->r1) = ctx->r2;
    // 0x08001BD0: lw          $t3, 0x4($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X4);
    // 0x08001BD4: lui         $t0, 0x800
    ctx->r8 = S32(RELOC_HI16(33, 0X2E98) << 16);
    // 0x08001BD8: addiu       $t0, $t0, 0x2E98
    ctx->r8 = ADD32(ctx->r8, (int16_t)RELOC_LO16(33, 0X2E98));
    // 0x08001BDC: lw          $t1, 0x18($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X18);
    // 0x08001BE0: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08001BE4: or          $t2, $t0, $at
    ctx->r10 = ctx->r8 | ctx->r1;
    // 0x08001BE8: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(33, 0X8F4) << 16);
    // 0x08001BEC: addiu       $t9, $t9, 0x8F4
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(33, 0X8F4));
    // 0x08001BF0: sw          $t2, 0x30($t1)
    MEM_W(0X30, ctx->r9) = ctx->r10;
    // 0x08001BF4: lw          $a0, 0x90($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X90);
    // 0x08001BF8: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x08001BFC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x08001C00: jalr        $t9
    // 0x08001C04: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08001C04: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    after_10:
    // 0x08001C08: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(33, 0X8B8) << 16);
    // 0x08001C0C: addiu       $t9, $t9, 0x8B8
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(33, 0X8B8));
    // 0x08001C10: sw          $v0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r2;
    // 0x08001C14: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08001C18: jalr        $t9
    // 0x08001C1C: addiu       $a1, $zero, 0x63
    ctx->r5 = ADD32(0, 0X63);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08001C1C: addiu       $a1, $zero, 0x63
    ctx->r5 = ADD32(0, 0X63);
    after_11:
    // 0x08001C20: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001C24: addiu       $t9, $t9, 0x7360
    ctx->r25 = ADD32(ctx->r25, 0X7360);
    // 0x08001C28: lw          $a0, 0x90($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X90);
    // 0x08001C2C: addiu       $a1, $zero, 0x1AE
    ctx->r5 = ADD32(0, 0X1AE);
    // 0x08001C30: jalr        $t9
    // 0x08001C34: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x08001C34: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_12:
    // 0x08001C38: bne         $v0, $zero, L_08001C4C
    if (ctx->r2 != 0) {
        // 0x08001C3C: sw          $v0, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->r2;
            goto L_08001C4C;
    }
    // 0x08001C3C: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x08001C40: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x08001C44: b           L_08002CA4
    // 0x08001C48: sb          $t4, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r12;
        goto L_08002CA4;
    // 0x08001C48: sb          $t4, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r12;
L_08001C4C:
    // 0x08001C4C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x08001C50: sh          $zero, 0xE($s1)
    MEM_H(0XE, ctx->r17) = 0;
    // 0x08001C54: b           L_08002CA4
    // 0x08001C58: sb          $t5, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r13;
        goto L_08002CA4;
    // 0x08001C58: sb          $t5, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r13;
L_08001C5C:
    // 0x08001C5C: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x08001C60: mtc1        $at, $f15
    ctx->f_odd[(15 - 1) * 2] = ctx->r1;
    // 0x08001C64: lui         $at, 0xC33A
    ctx->r1 = S32(0XC33A << 16);
    // 0x08001C68: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08001C6C: lwc1        $f10, 0x74($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X74);
    // 0x08001C70: lui         $at, 0x4022
    ctx->r1 = S32(0X4022 << 16);
    // 0x08001C74: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x08001C78: div.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x08001C7C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x08001C80: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x08001C84: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001C88: cvt.d.s     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f12.d = CVT_D_S(ctx->f4.fl);
    // 0x08001C8C: mul.d       $f0, $f12, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f6.d); 
    ctx->f0.d = MUL_D(ctx->f12.d, ctx->f6.d);
    // 0x08001C90: c.lt.d      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.d < ctx->f0.d;
    // 0x08001C94: nop

    // 0x08001C98: bc1fl       L_08001CB0
    if (!c1cs) {
        // 0x08001C9C: sub.d       $f2, $f14, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = ctx->f14.d - ctx->f0.d;
            goto L_08001CB0;
    }
    goto skip_1;
    // 0x08001C9C: sub.d       $f2, $f14, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = ctx->f14.d - ctx->f0.d;
    skip_1:
    // 0x08001CA0: sub.d       $f2, $f14, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = ctx->f14.d - ctx->f0.d;
    // 0x08001CA4: b           L_08001CB0
    // 0x08001CA8: neg.d       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f2.d = -ctx->f2.d;
        goto L_08001CB0;
    // 0x08001CA8: neg.d       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f2.d = -ctx->f2.d;
    // 0x08001CAC: sub.d       $f2, $f14, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = ctx->f14.d - ctx->f0.d;
L_08001CB0:
    // 0x08001CB0: cvt.s.d     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f8.fl = CVT_S_D(ctx->f2.d);
    // 0x08001CB4: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x08001CB8: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x08001CBC: swc1        $f18, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f18.u32l;
    // 0x08001CC0: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x08001CC4: jalr        $t9
    // 0x08001CC8: sdc1        $f12, 0x40($sp)
    CHECK_FR(ctx, 12);
    SD(ctx->f12.u64, 0X40, ctx->r29);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x08001CC8: sdc1        $f12, 0x40($sp)
    CHECK_FR(ctx, 12);
    SD(ctx->f12.u64, 0X40, ctx->r29);
    after_13:
    // 0x08001CCC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001CD0: addiu       $t9, $t9, 0x24AC
    ctx->r25 = ADD32(ctx->r25, 0X24AC);
    // 0x08001CD4: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x08001CD8: jalr        $t9
    // 0x08001CDC: lui         $a1, 0x4520
    ctx->r5 = S32(0X4520 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x08001CDC: lui         $a1, 0x4520
    ctx->r5 = S32(0X4520 << 16);
    after_14:
    // 0x08001CE0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001CE4: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x08001CE8: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x08001CEC: lw          $a1, 0x7C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X7C);
    // 0x08001CF0: lw          $a2, 0x78($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X78);
    // 0x08001CF4: jalr        $t9
    // 0x08001CF8: lw          $a3, 0x74($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X74);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x08001CF8: lw          $a3, 0x74($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X74);
    after_15:
    // 0x08001CFC: lui         $at, 0xC33A
    ctx->r1 = S32(0XC33A << 16);
    // 0x08001D00: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08001D04: lui         $at, 0xC034
    ctx->r1 = S32(0XC034 << 16);
    // 0x08001D08: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x08001D0C: lui         $at, 0x4049
    ctx->r1 = S32(0X4049 << 16);
    // 0x08001D10: ldc1        $f12, 0x40($sp)
    CHECK_FR(ctx, 12);
    ctx->f12.u64 = LD(ctx->r29, 0X40);
    // 0x08001D14: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x08001D18: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08001D1C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x08001D20: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001D24: mul.d       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f12.d, ctx->f4.d);
    // 0x08001D28: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x08001D2C: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x08001D30: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x08001D34: lw          $a1, 0x7C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X7C);
    // 0x08001D38: sub.d       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f10.d - ctx->f6.d;
    // 0x08001D3C: cvt.s.d     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f4.fl = CVT_S_D(ctx->f8.d);
    // 0x08001D40: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x08001D44: jalr        $t9
    // 0x08001D48: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x08001D48: nop

    after_16:
    // 0x08001D4C: lh          $t6, 0x12($s1)
    ctx->r14 = MEM_H(ctx->r17, 0X12);
    // 0x08001D50: lh          $t7, 0xE($s1)
    ctx->r15 = MEM_H(ctx->r17, 0XE);
    // 0x08001D54: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001D58: addiu       $t9, $t9, -0x6D4C
    ctx->r25 = ADD32(ctx->r25, -0X6D4C);
    // 0x08001D5C: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x08001D60: beql        $at, $zero, L_08001D98
    if (ctx->r1 == 0) {
        // 0x08001D64: lh          $t3, 0x10($s1)
        ctx->r11 = MEM_H(ctx->r17, 0X10);
            goto L_08001D98;
    }
    goto skip_2;
    // 0x08001D64: lh          $t3, 0x10($s1)
    ctx->r11 = MEM_H(ctx->r17, 0X10);
    skip_2:
    // 0x08001D68: jalr        $t9
    // 0x08001D6C: addiu       $a0, $zero, 0xC8
    ctx->r4 = ADD32(0, 0XC8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x08001D6C: addiu       $a0, $zero, 0xC8
    ctx->r4 = ADD32(0, 0XC8);
    after_17:
    // 0x08001D70: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(33, 0X1738) << 16);
    // 0x08001D74: addiu       $t8, $v0, 0x28
    ctx->r24 = ADD32(ctx->r2, 0X28);
    // 0x08001D78: addiu       $t9, $t9, 0x1738
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(33, 0X1738));
    // 0x08001D7C: sh          $t8, 0x12($s1)
    MEM_H(0X12, ctx->r17) = ctx->r24;
    // 0x08001D80: jalr        $t9
    // 0x08001D84: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x08001D84: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    after_18:
    // 0x08001D88: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x08001D8C: sh          $zero, 0xE($s1)
    MEM_H(0XE, ctx->r17) = 0;
    // 0x08001D90: sb          $t0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r8;
    // 0x08001D94: lh          $t3, 0x10($s1)
    ctx->r11 = MEM_H(ctx->r17, 0X10);
L_08001D98:
    // 0x08001D98: addiu       $at, $zero, 0xC9
    ctx->r1 = ADD32(0, 0XC9);
    // 0x08001D9C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x08001DA0: div         $zero, $t3, $at
    lo = S32(S64(S32(ctx->r11)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r11)) % S64(S32(ctx->r1)));
    // 0x08001DA4: mfhi        $t2
    ctx->r10 = hi;
    // 0x08001DA8: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x08001DAC: bne         $t2, $at, L_08002CA4
    if (ctx->r10 != ctx->r1) {
        // 0x08001DB0: lui         $t9, 0x800
        ctx->r25 = S32(RELOC_HI16(33, 0X254) << 16);
            goto L_08002CA4;
    }
    // 0x08001DB0: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(33, 0X254) << 16);
    // 0x08001DB4: addiu       $t9, $t9, 0x254
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(33, 0X254));
    // 0x08001DB8: jalr        $t9
    // 0x08001DBC: addiu       $a1, $zero, 0xFB
    ctx->r5 = ADD32(0, 0XFB);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_19;
    // 0x08001DBC: addiu       $a1, $zero, 0xFB
    ctx->r5 = ADD32(0, 0XFB);
    after_19:
    // 0x08001DC0: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x08001DC4: beq         $at, $zero, L_08002CA4
    if (ctx->r1 == 0) {
        // 0x08001DC8: lw          $a0, 0x90($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X90);
            goto L_08002CA4;
    }
    // 0x08001DC8: lw          $a0, 0x90($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X90);
    // 0x08001DCC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001DD0: addiu       $t9, $t9, 0x7360
    ctx->r25 = ADD32(ctx->r25, 0X7360);
    // 0x08001DD4: addiu       $a1, $zero, 0xFB
    ctx->r5 = ADD32(0, 0XFB);
    // 0x08001DD8: jalr        $t9
    // 0x08001DDC: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_20;
    // 0x08001DDC: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_20:
    // 0x08001DE0: beq         $v0, $zero, L_08002CA4
    if (ctx->r2 == 0) {
        // 0x08001DE4: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_08002CA4;
    }
    // 0x08001DE4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08001DE8: lui         $t1, 0x8022
    ctx->r9 = S32(0X8022 << 16);
    // 0x08001DEC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001DF0: addiu       $t9, $t9, 0x7144
    ctx->r25 = ADD32(ctx->r25, 0X7144);
    // 0x08001DF4: addiu       $t1, $t1, -0x6D4C
    ctx->r9 = ADD32(ctx->r9, -0X6D4C);
    // 0x08001DF8: sw          $t1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r9;
    // 0x08001DFC: jalr        $t9
    // 0x08001E00: sw          $v0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_21;
    // 0x08001E00: sw          $v0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r2;
    after_21:
    // 0x08001E04: lw          $a1, 0x84($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X84);
    // 0x08001E08: lui         $t7, 0x8004
    ctx->r15 = S32(0X8004 << 16);
    // 0x08001E0C: addiu       $t7, $t7, 0x17E0
    ctx->r15 = ADD32(ctx->r15, 0X17E0);
    // 0x08001E10: lw          $t4, 0x64($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X64);
    // 0x08001E14: lw          $t6, 0x18($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X18);
    // 0x08001E18: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x08001E1C: ori         $t5, $t4, 0x8000
    ctx->r13 = ctx->r12 | 0X8000;
    // 0x08001E20: sw          $t5, 0x64($a1)
    MEM_W(0X64, ctx->r5) = ctx->r13;
    // 0x08001E24: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    // 0x08001E28: sw          $t6, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r14;
    // 0x08001E2C: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
L_08001E30:
    // 0x08001E30: addiu       $a0, $zero, 0xDC
    ctx->r4 = ADD32(0, 0XDC);
    // 0x08001E34: jalr        $t9
    // 0x08001E38: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_22;
    // 0x08001E38: nop

    after_22:
    // 0x08001E3C: addiu       $t8, $v0, -0x6E
    ctx->r24 = ADD32(ctx->r2, -0X6E);
    // 0x08001E40: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x08001E44: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x08001E48: addiu       $a0, $zero, 0xB4
    ctx->r4 = ADD32(0, 0XB4);
    // 0x08001E4C: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x08001E50: jalr        $t9
    // 0x08001E54: swc1        $f6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_23;
    // 0x08001E54: swc1        $f6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f6.u32l;
    after_23:
    // 0x08001E58: addiu       $t0, $v0, -0x46
    ctx->r8 = ADD32(ctx->r2, -0X46);
    // 0x08001E5C: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x08001E60: lw          $t3, 0x80($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X80);
    // 0x08001E64: lwc1        $f10, 0x70($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X70);
    // 0x08001E68: cvt.s.w     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
    // 0x08001E6C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x08001E70: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    // 0x08001E74: lwc1        $f4, 0x8($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X8);
    // 0x08001E78: lwc1        $f6, 0x10($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X10);
    // 0x08001E7C: sub.s       $f2, $f4, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x08001E80: sub.s       $f14, $f6, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x08001E84: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x08001E88: nop

    // 0x08001E8C: mul.s       $f4, $f14, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x08001E90: jalr        $t9
    // 0x08001E94: add.s       $f12, $f8, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f4.fl;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_24;
    // 0x08001E94: add.s       $f12, $f8, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f4.fl;
    after_24:
    // 0x08001E98: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x08001E9C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08001EA0: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x08001EA4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x08001EA8: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x08001EAC: nop

    // 0x08001EB0: bc1tl       L_08001EC4
    if (c1cs) {
        // 0x08001EB4: lw          $t2, 0x80($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X80);
            goto L_08001EC4;
    }
    goto skip_3;
    // 0x08001EB4: lw          $t2, 0x80($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X80);
    skip_3:
    // 0x08001EB8: bnel        $s0, $at, L_08001E30
    if (ctx->r16 != ctx->r1) {
        // 0x08001EBC: lw          $t9, 0x4C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X4C);
            goto L_08001E30;
    }
    goto skip_4;
    // 0x08001EBC: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    skip_4:
    // 0x08001EC0: lw          $t2, 0x80($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X80);
L_08001EC4:
    // 0x08001EC4: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x08001EC8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08001ECC: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x08001ED0: swc1        $f8, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->f8.u32l;
    // 0x08001ED4: swc1        $f6, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->f6.u32l;
    // 0x08001ED8: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x08001EDC: b           L_08002CA4
    // 0x08001EE0: swc1        $f4, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->f4.u32l;
        goto L_08002CA4;
    // 0x08001EE0: swc1        $f4, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->f4.u32l;
L_08001EE4:
    // 0x08001EE4: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x08001EE8: mtc1        $at, $f15
    ctx->f_odd[(15 - 1) * 2] = ctx->r1;
    // 0x08001EEC: lui         $at, 0xC33A
    ctx->r1 = S32(0XC33A << 16);
    // 0x08001EF0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08001EF4: lwc1        $f10, 0x74($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X74);
    // 0x08001EF8: lui         $at, 0x4022
    ctx->r1 = S32(0X4022 << 16);
    // 0x08001EFC: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x08001F00: div.s       $f6, $f10, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x08001F04: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x08001F08: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x08001F0C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001F10: cvt.d.s     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f12.d = CVT_D_S(ctx->f6.fl);
    // 0x08001F14: mul.d       $f0, $f12, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f8.d); 
    ctx->f0.d = MUL_D(ctx->f12.d, ctx->f8.d);
    // 0x08001F18: c.lt.d      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.d < ctx->f0.d;
    // 0x08001F1C: nop

    // 0x08001F20: bc1fl       L_08001F38
    if (!c1cs) {
        // 0x08001F24: sub.d       $f2, $f14, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = ctx->f14.d - ctx->f0.d;
            goto L_08001F38;
    }
    goto skip_5;
    // 0x08001F24: sub.d       $f2, $f14, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = ctx->f14.d - ctx->f0.d;
    skip_5:
    // 0x08001F28: sub.d       $f2, $f14, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = ctx->f14.d - ctx->f0.d;
    // 0x08001F2C: b           L_08001F38
    // 0x08001F30: neg.d       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f2.d = -ctx->f2.d;
        goto L_08001F38;
    // 0x08001F30: neg.d       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f2.d = -ctx->f2.d;
    // 0x08001F34: sub.d       $f2, $f14, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = ctx->f14.d - ctx->f0.d;
L_08001F38:
    // 0x08001F38: cvt.s.d     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f4.fl = CVT_S_D(ctx->f2.d);
    // 0x08001F3C: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x08001F40: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x08001F44: swc1        $f18, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f18.u32l;
    // 0x08001F48: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x08001F4C: jalr        $t9
    // 0x08001F50: sdc1        $f12, 0x40($sp)
    CHECK_FR(ctx, 12);
    SD(ctx->f12.u64, 0X40, ctx->r29);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_25;
    // 0x08001F50: sdc1        $f12, 0x40($sp)
    CHECK_FR(ctx, 12);
    SD(ctx->f12.u64, 0X40, ctx->r29);
    after_25:
    // 0x08001F54: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001F58: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x08001F5C: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x08001F60: lw          $a1, 0x7C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X7C);
    // 0x08001F64: lw          $a2, 0x78($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X78);
    // 0x08001F68: jalr        $t9
    // 0x08001F6C: lw          $a3, 0x74($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X74);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_26;
    // 0x08001F6C: lw          $a3, 0x74($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X74);
    after_26:
    // 0x08001F70: lui         $at, 0xC33A
    ctx->r1 = S32(0XC33A << 16);
    // 0x08001F74: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08001F78: lui         $at, 0xC034
    ctx->r1 = S32(0XC034 << 16);
    // 0x08001F7C: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x08001F80: lui         $at, 0x4049
    ctx->r1 = S32(0X4049 << 16);
    // 0x08001F84: ldc1        $f12, 0x40($sp)
    CHECK_FR(ctx, 12);
    ctx->f12.u64 = LD(ctx->r29, 0X40);
    // 0x08001F88: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x08001F8C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x08001F90: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x08001F94: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001F98: mul.d       $f8, $f12, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f12.d, ctx->f6.d);
    // 0x08001F9C: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x08001FA0: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x08001FA4: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x08001FA8: lw          $a1, 0x7C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X7C);
    // 0x08001FAC: sub.d       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f4.d = ctx->f10.d - ctx->f8.d;
    // 0x08001FB0: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08001FB4: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x08001FB8: jalr        $t9
    // 0x08001FBC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_27;
    // 0x08001FBC: nop

    after_27:
    // 0x08001FC0: lh          $t1, 0xE($s1)
    ctx->r9 = MEM_H(ctx->r17, 0XE);
    // 0x08001FC4: lw          $a0, 0x90($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X90);
    // 0x08001FC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001FCC: slti        $at, $t1, 0x51
    ctx->r1 = SIGNED(ctx->r9) < 0X51 ? 1 : 0;
    // 0x08001FD0: bne         $at, $zero, L_08002CA4
    if (ctx->r1 != 0) {
        // 0x08001FD4: lui         $a2, 0x3E00
        ctx->r6 = S32(0X3E00 << 16);
            goto L_08002CA4;
    }
    // 0x08001FD4: lui         $a2, 0x3E00
    ctx->r6 = S32(0X3E00 << 16);
    // 0x08001FD8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001FDC: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08001FE0: jalr        $t9
    // 0x08001FE4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_28;
    // 0x08001FE4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_28:
    // 0x08001FE8: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(33, 0X1770) << 16);
    // 0x08001FEC: addiu       $t9, $t9, 0x1770
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(33, 0X1770));
    // 0x08001FF0: jalr        $t9
    // 0x08001FF4: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_29;
    // 0x08001FF4: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    after_29:
    // 0x08001FF8: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(33, 0X1570) << 16);
    // 0x08001FFC: addiu       $t9, $t9, 0x1570
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(33, 0X1570));
    // 0x08002000: jalr        $t9
    // 0x08002004: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_30;
    // 0x08002004: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    after_30:
    // 0x08002008: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x0800200C: b           L_08002CA4
    // 0x08002010: sb          $t4, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r12;
        goto L_08002CA4;
    // 0x08002010: sb          $t4, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r12;
L_08002014:
    // 0x08002014: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(33, 0X32B0) << 16);
    // 0x08002018: ldc1        $f8, 0x32B0($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(33, 0X32B0));
    // 0x0800201C: cvt.d.s     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f10.d = CVT_D_S(ctx->f18.fl);
    // 0x08002020: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002024: div.d       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f4.d = DIV_D(ctx->f10.d, ctx->f8.d);
    // 0x08002028: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x0800202C: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x08002030: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    // 0x08002034: cvt.s.d     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f18.fl = CVT_S_D(ctx->f4.d);
    // 0x08002038: jalr        $t9
    // 0x0800203C: swc1        $f18, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f18.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_31;
    // 0x0800203C: swc1        $f18, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f18.u32l;
    after_31:
    // 0x08002040: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002044: addiu       $t9, $t9, 0x24AC
    ctx->r25 = ADD32(ctx->r25, 0X24AC);
    // 0x08002048: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x0800204C: jalr        $t9
    // 0x08002050: lui         $a1, 0x45A0
    ctx->r5 = S32(0X45A0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_32;
    // 0x08002050: lui         $a1, 0x45A0
    ctx->r5 = S32(0X45A0 << 16);
    after_32:
    // 0x08002054: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002058: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x0800205C: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x08002060: lw          $a1, 0x7C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X7C);
    // 0x08002064: lui         $a2, 0xC220
    ctx->r6 = S32(0XC220 << 16);
    // 0x08002068: jalr        $t9
    // 0x0800206C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_33;
    // 0x0800206C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_33:
    // 0x08002070: lui         $at, 0xC33A
    ctx->r1 = S32(0XC33A << 16);
    // 0x08002074: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08002078: lwc1        $f6, 0x74($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X74);
    // 0x0800207C: lui         $at, 0x4034
    ctx->r1 = S32(0X4034 << 16);
    // 0x08002080: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x08002084: div.s       $f10, $f6, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f16.fl);
    // 0x08002088: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x0800208C: lui         $at, 0xC034
    ctx->r1 = S32(0XC034 << 16);
    // 0x08002090: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x08002094: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002098: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x0800209C: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x080020A0: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x080020A4: lw          $a1, 0x7C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X7C);
    // 0x080020A8: cvt.d.s     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f8.d = CVT_D_S(ctx->f10.fl);
    // 0x080020AC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x080020B0: mul.d       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f8.d, ctx->f4.d);
    // 0x080020B4: sub.d       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f10.d - ctx->f6.d;
    // 0x080020B8: cvt.s.d     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f4.fl = CVT_S_D(ctx->f8.d);
    // 0x080020BC: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x080020C0: jalr        $t9
    // 0x080020C4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_34;
    // 0x080020C4: nop

    after_34:
    // 0x080020C8: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(33, 0X17A4) << 16);
    // 0x080020CC: addiu       $t9, $t9, 0x17A4
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(33, 0X17A4));
    // 0x080020D0: jalr        $t9
    // 0x080020D4: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_35;
    // 0x080020D4: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    after_35:
    // 0x080020D8: bne         $v0, $zero, L_08002CA4
    if (ctx->r2 != 0) {
        // 0x080020DC: lw          $a0, 0x90($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X90);
            goto L_08002CA4;
    }
    // 0x080020DC: lw          $a0, 0x90($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X90);
    // 0x080020E0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080020E4: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080020E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x080020EC: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x080020F0: jalr        $t9
    // 0x080020F4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_36;
    // 0x080020F4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_36:
    // 0x080020F8: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x080020FC: sh          $zero, 0xE($s1)
    MEM_H(0XE, ctx->r17) = 0;
    // 0x08002100: b           L_08002CA4
    // 0x08002104: sb          $t5, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r13;
        goto L_08002CA4;
    // 0x08002104: sb          $t5, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r13;
L_08002108:
    // 0x08002108: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(33, 0X32B8) << 16);
    // 0x0800210C: ldc1        $f6, 0x32B8($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(33, 0X32B8));
    // 0x08002110: cvt.d.s     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f10.d = CVT_D_S(ctx->f18.fl);
    // 0x08002114: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002118: div.d       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f10.d, ctx->f6.d);
    // 0x0800211C: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x08002120: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x08002124: lui         $a2, 0xC220
    ctx->r6 = S32(0XC220 << 16);
    // 0x08002128: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x0800212C: cvt.s.d     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f18.fl = CVT_S_D(ctx->f8.d);
    // 0x08002130: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x08002134: jalr        $t9
    // 0x08002138: swc1        $f18, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f18.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_37;
    // 0x08002138: swc1        $f18, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f18.u32l;
    after_37:
    // 0x0800213C: lui         $at, 0xC33A
    ctx->r1 = S32(0XC33A << 16);
    // 0x08002140: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08002144: lwc1        $f4, 0x74($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X74);
    // 0x08002148: lui         $at, 0x4034
    ctx->r1 = S32(0X4034 << 16);
    // 0x0800214C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x08002150: div.s       $f10, $f4, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = DIV_S(ctx->f4.fl, ctx->f16.fl);
    // 0x08002154: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x08002158: lui         $at, 0xC034
    ctx->r1 = S32(0XC034 << 16);
    // 0x0800215C: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x08002160: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002164: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x08002168: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x0800216C: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x08002170: lw          $a1, 0x7C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X7C);
    // 0x08002174: cvt.d.s     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f6.d = CVT_D_S(ctx->f10.fl);
    // 0x08002178: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x0800217C: mul.d       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f4.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x08002180: sub.d       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f10.d - ctx->f4.d;
    // 0x08002184: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x08002188: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x0800218C: jalr        $t9
    // 0x08002190: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_38;
    // 0x08002190: nop

    after_38:
    // 0x08002194: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x08002198: lw          $v1, -0x39F4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X39F4);
    // 0x0800219C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x080021A0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080021A4: lwc1        $f10, 0xC($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0XC);
    // 0x080021A8: lwc1        $f14, 0x8($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X8);
    // 0x080021AC: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x080021B0: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x080021B4: addiu       $a0, $a0, 0x17E0
    ctx->r4 = ADD32(ctx->r4, 0X17E0);
    // 0x080021B8: lui         $v0, 0x800
    ctx->r2 = S32(RELOC_HI16(33, 0X2EB8) << 16);
    // 0x080021BC: lui         $s0, 0x800
    ctx->r16 = S32(RELOC_HI16(33, 0X2EC8) << 16);
    // 0x080021C0: swc1        $f6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f6.u32l;
    // 0x080021C4: lwc1        $f16, 0x10($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X10);
    // 0x080021C8: sw          $a0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r4;
    // 0x080021CC: addiu       $s0, $s0, 0x2EC8
    ctx->r16 = ADD32(ctx->r16, (int16_t)RELOC_LO16(33, 0X2EC8));
    // 0x080021D0: addiu       $v0, $v0, 0x2EB8
    ctx->r2 = ADD32(ctx->r2, (int16_t)RELOC_LO16(33, 0X2EB8));
    // 0x080021D4: swc1        $f14, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f14.u32l;
    // 0x080021D8: swc1        $f16, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f16.u32l;
    // 0x080021DC: lh          $t6, 0x2($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X2);
L_080021E0:
    // 0x080021E0: lh          $t7, 0x0($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X0);
    // 0x080021E4: lwc1        $f16, 0x74($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X74);
    // 0x080021E8: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x080021EC: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x080021F0: lwc1        $f14, 0x7C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x080021F4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x080021F8: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x080021FC: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x08002200: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08002204: sub.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x08002208: sub.s       $f2, $f6, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f14.fl;
    // 0x0800220C: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x08002210: nop

    // 0x08002214: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x08002218: jalr        $a0
    // 0x0800221C: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    LOOKUP_FUNC(ctx->r4)(rdram, ctx);
        goto after_39;
    // 0x0800221C: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    after_39:
    // 0x08002220: lui         $at, 0x4160
    ctx->r1 = S32(0X4160 << 16);
    // 0x08002224: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08002228: lw          $v0, 0x4C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4C);
    // 0x0800222C: lui         $at, 0xC220
    ctx->r1 = S32(0XC220 << 16);
    // 0x08002230: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x08002234: lwc1        $f6, 0x78($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X78);
    // 0x08002238: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x0800223C: bc1f        L_0800225C
    if (!c1cs) {
        // 0x08002240: nop
    
            goto L_0800225C;
    }
    // 0x08002240: nop

    // 0x08002244: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08002248: nop

    // 0x0800224C: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x08002250: nop

    // 0x08002254: bc1tl       L_08002294
    if (c1cs) {
        // 0x08002258: lh          $v1, 0xE($s1)
        ctx->r3 = MEM_H(ctx->r17, 0XE);
            goto L_08002294;
    }
    goto skip_6;
    // 0x08002258: lh          $v1, 0xE($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XE);
    skip_6:
L_0800225C:
    // 0x0800225C: bnel        $v0, $s0, L_080021E0
    if (ctx->r2 != ctx->r16) {
        // 0x08002260: lh          $t6, 0x2($v0)
        ctx->r14 = MEM_H(ctx->r2, 0X2);
            goto L_080021E0;
    }
    goto skip_7;
    // 0x08002260: lh          $t6, 0x2($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X2);
    skip_7:
    // 0x08002264: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002268: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x0800226C: lw          $a0, 0x90($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X90);
    // 0x08002270: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08002274: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08002278: jalr        $t9
    // 0x0800227C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_40;
    // 0x0800227C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_40:
    // 0x08002280: addiu       $t8, $zero, 0x6
    ctx->r24 = ADD32(0, 0X6);
    // 0x08002284: sh          $zero, 0xE($s1)
    MEM_H(0XE, ctx->r17) = 0;
    // 0x08002288: b           L_08002CA4
    // 0x0800228C: sb          $t8, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r24;
        goto L_08002CA4;
    // 0x0800228C: sb          $t8, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r24;
    // 0x08002290: lh          $v1, 0xE($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XE);
L_08002294:
    // 0x08002294: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x08002298: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800229C: div         $zero, $v1, $at
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r1)));
    // 0x080022A0: mfhi        $t0
    ctx->r8 = hi;
    // 0x080022A4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x080022A8: bne         $t0, $at, L_080022BC
    if (ctx->r8 != ctx->r1) {
        // 0x080022AC: addiu       $t9, $t9, -0x7468
        ctx->r25 = ADD32(ctx->r25, -0X7468);
            goto L_080022BC;
    }
    // 0x080022AC: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x080022B0: jalr        $t9
    // 0x080022B4: addiu       $a0, $zero, 0x296
    ctx->r4 = ADD32(0, 0X296);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_41;
    // 0x080022B4: addiu       $a0, $zero, 0x296
    ctx->r4 = ADD32(0, 0X296);
    after_41:
    // 0x080022B8: lh          $v1, 0xE($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XE);
L_080022BC:
    // 0x080022BC: slti        $at, $v1, 0x79
    ctx->r1 = SIGNED(ctx->r3) < 0X79 ? 1 : 0;
    // 0x080022C0: bne         $at, $zero, L_08002CA4
    if (ctx->r1 != 0) {
        // 0x080022C4: lw          $a0, 0x90($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X90);
            goto L_08002CA4;
    }
    // 0x080022C4: lw          $a0, 0x90($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X90);
    // 0x080022C8: lw          $t2, 0x60($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X60);
    // 0x080022CC: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x080022D0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080022D4: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080022D8: or          $t1, $t2, $at
    ctx->r9 = ctx->r10 | ctx->r1;
    // 0x080022DC: sw          $t1, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r9;
    // 0x080022E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080022E4: lui         $a2, 0x3E00
    ctx->r6 = S32(0X3E00 << 16);
    // 0x080022E8: jalr        $t9
    // 0x080022EC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_42;
    // 0x080022EC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_42:
    // 0x080022F0: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(33, 0X164C) << 16);
    // 0x080022F4: addiu       $t9, $t9, 0x164C
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(33, 0X164C));
    // 0x080022F8: jalr        $t9
    // 0x080022FC: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_43;
    // 0x080022FC: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    after_43:
    // 0x08002300: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x08002304: b           L_08002CA4
    // 0x08002308: sb          $t4, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r12;
        goto L_08002CA4;
    // 0x08002308: sb          $t4, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r12;
L_0800230C:
    // 0x0800230C: lh          $v1, 0xE($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XE);
    // 0x08002310: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x08002314: addiu       $a0, $zero, 0x163
    ctx->r4 = ADD32(0, 0X163);
    // 0x08002318: div         $zero, $v1, $at
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r1)));
    // 0x0800231C: mfhi        $t5
    ctx->r13 = hi;
    // 0x08002320: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x08002324: bne         $t5, $at, L_08002340
    if (ctx->r13 != ctx->r1) {
        // 0x08002328: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_08002340;
    }
    // 0x08002328: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800232C: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08002330: jalr        $t9
    // 0x08002334: swc1        $f18, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f18.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_44;
    // 0x08002334: swc1        $f18, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f18.u32l;
    after_44:
    // 0x08002338: lh          $v1, 0xE($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XE);
    // 0x0800233C: lwc1        $f18, 0x7C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X7C);
L_08002340:
    // 0x08002340: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(33, 0X32C0) << 16);
    // 0x08002344: ldc1        $f4, 0x32C0($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(33, 0X32C0));
    // 0x08002348: cvt.d.s     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f10.d = CVT_D_S(ctx->f18.fl);
    // 0x0800234C: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x08002350: div.d       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = DIV_D(ctx->f10.d, ctx->f4.d);
    // 0x08002354: addiu       $v0, $v0, 0x24A0
    ctx->r2 = ADD32(ctx->r2, 0X24A0);
    // 0x08002358: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x0800235C: andi        $s0, $v1, 0x4
    ctx->r16 = ctx->r3 & 0X4;
    // 0x08002360: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x08002364: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    // 0x08002368: cvt.s.d     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f18.fl = CVT_S_D(ctx->f6.d);
    // 0x0800236C: jalr        $v0
    // 0x08002370: swc1        $f18, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f18.u32l;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_45;
    // 0x08002370: swc1        $f18, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f18.u32l;
    after_45:
    // 0x08002374: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002378: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x0800237C: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x08002380: lw          $a1, 0x7C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X7C);
    // 0x08002384: lui         $a2, 0xC220
    ctx->r6 = S32(0XC220 << 16);
    // 0x08002388: jalr        $t9
    // 0x0800238C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_46;
    // 0x0800238C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_46:
    // 0x08002390: lui         $at, 0xC33A
    ctx->r1 = S32(0XC33A << 16);
    // 0x08002394: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08002398: lwc1        $f8, 0x74($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X74);
    // 0x0800239C: lui         $at, 0x4034
    ctx->r1 = S32(0X4034 << 16);
    // 0x080023A0: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x080023A4: div.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f16.fl);
    // 0x080023A8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x080023AC: lui         $at, 0xC034
    ctx->r1 = S32(0XC034 << 16);
    // 0x080023B0: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x080023B4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080023B8: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x080023BC: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x080023C0: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x080023C4: lw          $a1, 0x7C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X7C);
    // 0x080023C8: cvt.d.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.d = CVT_D_S(ctx->f10.fl);
    // 0x080023CC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x080023D0: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x080023D4: sub.d       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f4.d = ctx->f10.d - ctx->f8.d;
    // 0x080023D8: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x080023DC: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x080023E0: jalr        $t9
    // 0x080023E4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_47;
    // 0x080023E4: nop

    after_47:
    // 0x080023E8: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x080023EC: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x080023F0: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    // 0x080023F4: jalr        $t9
    // 0x080023F8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_48;
    // 0x080023F8: nop

    after_48:
    // 0x080023FC: sll         $t6, $s0, 2
    ctx->r14 = S32(ctx->r16 << 2);
    // 0x08002400: addiu       $t7, $t6, -0x28
    ctx->r15 = ADD32(ctx->r14, -0X28);
    // 0x08002404: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x08002408: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800240C: addiu       $t9, $t9, 0x2764
    ctx->r25 = ADD32(ctx->r25, 0X2764);
    // 0x08002410: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x08002414: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x08002418: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x0800241C: jalr        $t9
    // 0x08002420: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_49;
    // 0x08002420: nop

    after_49:
    // 0x08002424: lh          $v1, 0xE($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XE);
    // 0x08002428: lw          $a0, 0x90($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X90);
    // 0x0800242C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002430: slti        $at, $v1, 0x79
    ctx->r1 = SIGNED(ctx->r3) < 0X79 ? 1 : 0;
    // 0x08002434: bne         $at, $zero, L_08002478
    if (ctx->r1 != 0) {
        // 0x08002438: lui         $a2, 0x3E00
        ctx->r6 = S32(0X3E00 << 16);
            goto L_08002478;
    }
    // 0x08002438: lui         $a2, 0x3E00
    ctx->r6 = S32(0X3E00 << 16);
    // 0x0800243C: lw          $t8, 0x60($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X60);
    // 0x08002440: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x08002444: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002448: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x0800244C: or          $t0, $t8, $at
    ctx->r8 = ctx->r24 | ctx->r1;
    // 0x08002450: sw          $t0, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r8;
    // 0x08002454: jalr        $t9
    // 0x08002458: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_50;
    // 0x08002458: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_50:
    // 0x0800245C: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(33, 0X164C) << 16);
    // 0x08002460: addiu       $t9, $t9, 0x164C
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(33, 0X164C));
    // 0x08002464: jalr        $t9
    // 0x08002468: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_51;
    // 0x08002468: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    after_51:
    // 0x0800246C: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x08002470: sb          $t2, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r10;
    // 0x08002474: lh          $v1, 0xE($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XE);
L_08002478:
    // 0x08002478: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x0800247C: div         $zero, $v1, $at
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r1)));
    // 0x08002480: mfhi        $v0
    ctx->r2 = hi;
    // 0x08002484: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08002488: bne         $v0, $at, L_08002540
    if (ctx->r2 != ctx->r1) {
        // 0x0800248C: lw          $a0, 0x90($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X90);
            goto L_08002540;
    }
    // 0x0800248C: lw          $a0, 0x90($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X90);
    // 0x08002490: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002494: addiu       $t9, $t9, 0x7360
    ctx->r25 = ADD32(ctx->r25, 0X7360);
    // 0x08002498: addiu       $a1, $zero, 0x1AC
    ctx->r5 = ADD32(0, 0X1AC);
    // 0x0800249C: jalr        $t9
    // 0x080024A0: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_52;
    // 0x080024A0: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_52:
    // 0x080024A4: beq         $v0, $zero, L_08002CA4
    if (ctx->r2 == 0) {
        // 0x080024A8: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_08002CA4;
    }
    // 0x080024A8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x080024AC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080024B0: addiu       $t9, $t9, 0x7144
    ctx->r25 = ADD32(ctx->r25, 0X7144);
    // 0x080024B4: jalr        $t9
    // 0x080024B8: sw          $v0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_53;
    // 0x080024B8: sw          $v0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r2;
    after_53:
    // 0x080024BC: lw          $a1, 0x84($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X84);
    // 0x080024C0: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x080024C4: addiu       $v0, $v0, -0x6D4C
    ctx->r2 = ADD32(ctx->r2, -0X6D4C);
    // 0x080024C8: lw          $t1, 0x18($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X18);
    // 0x080024CC: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x080024D0: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x080024D4: jalr        $v0
    // 0x080024D8: sw          $t1, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r9;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_54;
    // 0x080024D8: sw          $t1, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r9;
    after_54:
    // 0x080024DC: addiu       $t3, $v0, -0xA
    ctx->r11 = ADD32(ctx->r2, -0XA);
    // 0x080024E0: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x080024E4: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x080024E8: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x080024EC: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x080024F0: jalr        $t9
    // 0x080024F4: swc1        $f4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_55;
    // 0x080024F4: swc1        $f4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f4.u32l;
    after_55:
    // 0x080024F8: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x080024FC: lw          $v1, -0x39F4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X39F4);
    // 0x08002500: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x08002504: addiu       $t5, $v0, -0xA
    ctx->r13 = ADD32(ctx->r2, -0XA);
    // 0x08002508: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x0800250C: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x08002510: lw          $t4, 0x80($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X80);
    // 0x08002514: add.s       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x08002518: lwc1        $f2, 0x10($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X10);
    // 0x0800251C: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x08002520: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08002524: swc1        $f10, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->f10.u32l;
    // 0x08002528: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x0800252C: nop

    // 0x08002530: swc1        $f8, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->f8.u32l;
    // 0x08002534: add.s       $f10, $f2, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f6.fl;
    // 0x08002538: b           L_08002CA4
    // 0x0800253C: swc1        $f10, 0x10($t4)
    MEM_W(0X10, ctx->r12) = ctx->f10.u32l;
        goto L_08002CA4;
    // 0x0800253C: swc1        $f10, 0x10($t4)
    MEM_W(0X10, ctx->r12) = ctx->f10.u32l;
L_08002540:
    // 0x08002540: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x08002544: bne         $v0, $at, L_08002CA4
    if (ctx->r2 != ctx->r1) {
        // 0x08002548: lw          $a0, 0x90($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X90);
            goto L_08002CA4;
    }
    // 0x08002548: lw          $a0, 0x90($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X90);
    // 0x0800254C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002550: addiu       $t9, $t9, 0x7360
    ctx->r25 = ADD32(ctx->r25, 0X7360);
    // 0x08002554: addiu       $a1, $zero, 0x1AC
    ctx->r5 = ADD32(0, 0X1AC);
    // 0x08002558: jalr        $t9
    // 0x0800255C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_56;
    // 0x0800255C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_56:
    // 0x08002560: beq         $v0, $zero, L_08002CA4
    if (ctx->r2 == 0) {
        // 0x08002564: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_08002CA4;
    }
    // 0x08002564: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08002568: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800256C: addiu       $t9, $t9, 0x7144
    ctx->r25 = ADD32(ctx->r25, 0X7144);
    // 0x08002570: jalr        $t9
    // 0x08002574: sw          $v0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_57;
    // 0x08002574: sw          $v0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r2;
    after_57:
    // 0x08002578: lw          $a1, 0x84($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X84);
    // 0x0800257C: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x08002580: addiu       $v0, $v0, -0x6D4C
    ctx->r2 = ADD32(ctx->r2, -0X6D4C);
    // 0x08002584: lw          $t6, 0x18($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X18);
    // 0x08002588: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x0800258C: addiu       $a0, $zero, 0xC8
    ctx->r4 = ADD32(0, 0XC8);
    // 0x08002590: jalr        $v0
    // 0x08002594: sw          $t6, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r14;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_58;
    // 0x08002594: sw          $t6, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r14;
    after_58:
    // 0x08002598: addiu       $t7, $v0, -0x64
    ctx->r15 = ADD32(ctx->r2, -0X64);
    // 0x0800259C: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x080025A0: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x080025A4: addiu       $a0, $zero, 0xC8
    ctx->r4 = ADD32(0, 0XC8);
    // 0x080025A8: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x080025AC: jalr        $t9
    // 0x080025B0: swc1        $f4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_59;
    // 0x080025B0: swc1        $f4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f4.u32l;
    after_59:
    // 0x080025B4: lwc1        $f6, 0x7C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x080025B8: lwc1        $f10, 0x70($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X70);
    // 0x080025BC: lw          $t8, 0x80($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X80);
    // 0x080025C0: addiu       $t0, $v0, -0x64
    ctx->r8 = ADD32(ctx->r2, -0X64);
    // 0x080025C4: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x080025C8: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x080025CC: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x080025D0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080025D4: swc1        $f8, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f8.u32l;
    // 0x080025D8: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x080025DC: swc1        $f4, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->f4.u32l;
    // 0x080025E0: lwc1        $f6, 0x74($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X74);
    // 0x080025E4: add.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x080025E8: b           L_08002CA4
    // 0x080025EC: swc1        $f4, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f4.u32l;
        goto L_08002CA4;
    // 0x080025EC: swc1        $f4, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f4.u32l;
L_080025F0:
    // 0x080025F0: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(33, 0X32C8) << 16);
    // 0x080025F4: ldc1        $f6, 0x32C8($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(33, 0X32C8));
    // 0x080025F8: cvt.d.s     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f10.d = CVT_D_S(ctx->f18.fl);
    // 0x080025FC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002600: div.d       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f10.d, ctx->f6.d);
    // 0x08002604: addiu       $t9, $t9, 0x24AC
    ctx->r25 = ADD32(ctx->r25, 0X24AC);
    // 0x08002608: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x0800260C: lui         $a1, 0x4520
    ctx->r5 = S32(0X4520 << 16);
    // 0x08002610: cvt.s.d     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f18.fl = CVT_S_D(ctx->f8.d);
    // 0x08002614: jalr        $t9
    // 0x08002618: swc1        $f18, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f18.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_60;
    // 0x08002618: swc1        $f18, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f18.u32l;
    after_60:
    // 0x0800261C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002620: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x08002624: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x08002628: lw          $a1, 0x7C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X7C);
    // 0x0800262C: lui         $a2, 0xC220
    ctx->r6 = S32(0XC220 << 16);
    // 0x08002630: jalr        $t9
    // 0x08002634: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_61;
    // 0x08002634: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_61:
    // 0x08002638: lui         $at, 0xC33A
    ctx->r1 = S32(0XC33A << 16);
    // 0x0800263C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08002640: lwc1        $f4, 0x74($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X74);
    // 0x08002644: lui         $at, 0x4034
    ctx->r1 = S32(0X4034 << 16);
    // 0x08002648: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x0800264C: div.s       $f10, $f4, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = DIV_S(ctx->f4.fl, ctx->f16.fl);
    // 0x08002650: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x08002654: lui         $at, 0xC034
    ctx->r1 = S32(0XC034 << 16);
    // 0x08002658: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x0800265C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002660: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x08002664: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x08002668: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x0800266C: lw          $a1, 0x7C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X7C);
    // 0x08002670: cvt.d.s     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f6.d = CVT_D_S(ctx->f10.fl);
    // 0x08002674: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x08002678: mul.d       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f4.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x0800267C: sub.d       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f10.d - ctx->f4.d;
    // 0x08002680: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x08002684: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x08002688: jalr        $t9
    // 0x0800268C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_62;
    // 0x0800268C: nop

    after_62:
    // 0x08002690: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(33, 0X17A4) << 16);
    // 0x08002694: addiu       $t9, $t9, 0x17A4
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(33, 0X17A4));
    // 0x08002698: jalr        $t9
    // 0x0800269C: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_63;
    // 0x0800269C: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    after_63:
    // 0x080026A0: bne         $v0, $zero, L_08002CA4
    if (ctx->r2 != 0) {
        // 0x080026A4: lw          $t2, 0x90($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X90);
            goto L_08002CA4;
    }
    // 0x080026A4: lw          $t2, 0x90($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X90);
    // 0x080026A8: lw          $t1, 0x60($t2)
    ctx->r9 = MEM_W(ctx->r10, 0X60);
    // 0x080026AC: lui         $at, 0xFEFF
    ctx->r1 = S32(0XFEFF << 16);
    // 0x080026B0: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x080026B4: and         $t3, $t1, $at
    ctx->r11 = ctx->r9 & ctx->r1;
    // 0x080026B8: sw          $t3, 0x60($t2)
    MEM_W(0X60, ctx->r10) = ctx->r11;
    // 0x080026BC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x080026C0: sh          $zero, 0xE($s1)
    MEM_H(0XE, ctx->r17) = 0;
    // 0x080026C4: b           L_08002CA4
    // 0x080026C8: sb          $t5, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r13;
        goto L_08002CA4;
    // 0x080026C8: sb          $t5, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r13;
L_080026CC:
    // 0x080026CC: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x080026D0: addiu       $v0, $v0, 0x24A0
    ctx->r2 = ADD32(ctx->r2, 0X24A0);
    // 0x080026D4: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x080026D8: swc1        $f18, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f18.u32l;
    // 0x080026DC: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x080026E0: jalr        $v0
    // 0x080026E4: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_64;
    // 0x080026E4: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_64:
    // 0x080026E8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x080026EC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080026F0: lwc1        $f10, 0x78($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X78);
    // 0x080026F4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080026F8: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x080026FC: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x08002700: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x08002704: lw          $a1, 0x7C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X7C);
    // 0x08002708: lw          $a3, 0x74($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X74);
    // 0x0800270C: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x08002710: jalr        $t9
    // 0x08002714: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_65;
    // 0x08002714: nop

    after_65:
    // 0x08002718: lh          $v1, 0xE($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XE);
    // 0x0800271C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08002720: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08002724: bne         $v1, $at, L_080028F8
    if (ctx->r3 != ctx->r1) {
        // 0x08002728: addiu       $t9, $t9, 0x4038
        ctx->r25 = ADD32(ctx->r25, 0X4038);
            goto L_080028F8;
    }
    // 0x08002728: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x0800272C: jalr        $t9
    // 0x08002730: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_66;
    // 0x08002730: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    after_66:
    // 0x08002734: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x08002738: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x0800273C: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x08002740: jalr        $t9
    // 0x08002744: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_67;
    // 0x08002744: nop

    after_67:
    // 0x08002748: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800274C: addiu       $t9, $t9, 0x24AC
    ctx->r25 = ADD32(ctx->r25, 0X24AC);
    // 0x08002750: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x08002754: jalr        $t9
    // 0x08002758: lui         $a1, 0x44A0
    ctx->r5 = S32(0X44A0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_68;
    // 0x08002758: lui         $a1, 0x44A0
    ctx->r5 = S32(0X44A0 << 16);
    after_68:
    // 0x0800275C: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(33, 0X17D8) << 16);
    // 0x08002760: addiu       $t9, $t9, 0x17D8
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(33, 0X17D8));
    // 0x08002764: lwc1        $f12, 0x7C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x08002768: lwc1        $f14, 0x78($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X78);
    // 0x0800276C: jalr        $t9
    // 0x08002770: lw          $a2, 0x74($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X74);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_69;
    // 0x08002770: lw          $a2, 0x74($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X74);
    after_69:
    // 0x08002774: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08002778: beq         $v0, $at, L_080027A8
    if (ctx->r2 == ctx->r1) {
        // 0x0800277C: lwc1        $f8, 0x7C($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X7C);
            goto L_080027A8;
    }
    // 0x0800277C: lwc1        $f8, 0x7C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x08002780: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08002784: beq         $v0, $at, L_080027A8
    if (ctx->r2 == ctx->r1) {
        // 0x08002788: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_080027A8;
    }
    // 0x08002788: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x0800278C: beq         $v0, $at, L_080027FC
    if (ctx->r2 == ctx->r1) {
        // 0x08002790: lwc1        $f10, 0x7C($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X7C);
            goto L_080027FC;
    }
    // 0x08002790: lwc1        $f10, 0x7C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x08002794: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x08002798: beq         $v0, $at, L_080027FC
    if (ctx->r2 == ctx->r1) {
        // 0x0800279C: lwc1        $f4, 0x78($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X78);
            goto L_080027FC;
    }
    // 0x0800279C: lwc1        $f4, 0x78($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X78);
    // 0x080027A0: b           L_08002850
    // 0x080027A4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
        goto L_08002850;
    // 0x080027A4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
L_080027A8:
    // 0x080027A8: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x080027AC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x080027B0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x080027B4: lwc1        $f6, 0x78($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X78);
    // 0x080027B8: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x080027BC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080027C0: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x080027C4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080027C8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x080027CC: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x080027D0: lwc1        $f4, 0x74($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X74);
    // 0x080027D4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080027D8: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x080027DC: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x080027E0: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x080027E4: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x080027E8: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x080027EC: jalr        $t9
    // 0x080027F0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_70;
    // 0x080027F0: nop

    after_70:
    // 0x080027F4: b           L_08002888
    // 0x080027F8: nop

        goto L_08002888;
    // 0x080027F8: nop

L_080027FC:
    // 0x080027FC: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x08002800: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08002804: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x08002808: lwc1        $f8, 0x78($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X78);
    // 0x0800280C: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x08002810: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08002814: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x08002818: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800281C: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x08002820: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x08002824: lwc1        $f6, 0x74($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X74);
    // 0x08002828: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x0800282C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x08002830: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x08002834: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x08002838: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x0800283C: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x08002840: jalr        $t9
    // 0x08002844: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_71;
    // 0x08002844: nop

    after_71:
    // 0x08002848: b           L_08002888
    // 0x0800284C: nop

        goto L_08002888;
    // 0x0800284C: nop

L_08002850:
    // 0x08002850: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08002854: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x08002858: lwc1        $f10, 0x74($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X74);
    // 0x0800285C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08002860: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08002864: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002868: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x0800286C: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x08002870: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x08002874: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x08002878: lw          $a1, 0x7C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X7C);
    // 0x0800287C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x08002880: jalr        $t9
    // 0x08002884: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_72;
    // 0x08002884: nop

    after_72:
L_08002888:
    // 0x08002888: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800288C: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08002890: jalr        $t9
    // 0x08002894: ori         $a0, $zero, 0x8294
    ctx->r4 = 0 | 0X8294;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_73;
    // 0x08002894: ori         $a0, $zero, 0x8294
    ctx->r4 = 0 | 0X8294;
    after_73:
    // 0x08002898: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(33, 0X2D8) << 16);
    // 0x0800289C: addiu       $t9, $t9, 0x2D8
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(33, 0X2D8));
    // 0x080028A0: jalr        $t9
    // 0x080028A4: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_74;
    // 0x080028A4: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_74:
    // 0x080028A8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080028AC: addiu       $t9, $t9, 0x1F70
    ctx->r25 = ADD32(ctx->r25, 0X1F70);
    // 0x080028B0: jalr        $t9
    // 0x080028B4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_75;
    // 0x080028B4: nop

    after_75:
    // 0x080028B8: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x080028BC: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x080028C0: addiu       $s0, $s0, -0x39FC
    ctx->r16 = ADD32(ctx->r16, -0X39FC);
    // 0x080028C4: addiu       $t9, $t9, 0x307C
    ctx->r25 = ADD32(ctx->r25, 0X307C);
    // 0x080028C8: jalr        $t9
    // 0x080028CC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_76;
    // 0x080028CC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_76:
    // 0x080028D0: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x080028D4: addiu       $t9, $t9, -0x5324
    ctx->r25 = ADD32(ctx->r25, -0X5324);
    // 0x080028D8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x080028DC: jalr        $t9
    // 0x080028E0: addiu       $a1, $zero, 0xCE
    ctx->r5 = ADD32(0, 0XCE);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_77;
    // 0x080028E0: addiu       $a1, $zero, 0xCE
    ctx->r5 = ADD32(0, 0XCE);
    after_77:
    // 0x080028E4: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x080028E8: addiu       $t4, $zero, 0x200
    ctx->r12 = ADD32(0, 0X200);
    // 0x080028EC: sh          $t4, 0x94($t6)
    MEM_H(0X94, ctx->r14) = ctx->r12;
    // 0x080028F0: b           L_08002914
    // 0x080028F4: lh          $v1, 0xE($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XE);
        goto L_08002914;
    // 0x080028F4: lh          $v1, 0xE($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XE);
L_080028F8:
    // 0x080028F8: addiu       $at, $zero, 0x78
    ctx->r1 = ADD32(0, 0X78);
    // 0x080028FC: bnel        $v1, $at, L_08002918
    if (ctx->r3 != ctx->r1) {
        // 0x08002900: addiu       $t0, $v1, 0x1
        ctx->r8 = ADD32(ctx->r3, 0X1);
            goto L_08002918;
    }
    goto skip_8;
    // 0x08002900: addiu       $t0, $v1, 0x1
    ctx->r8 = ADD32(ctx->r3, 0X1);
    skip_8:
    // 0x08002904: sh          $zero, 0xE($s1)
    MEM_H(0XE, ctx->r17) = 0;
    // 0x08002908: addiu       $t7, $zero, 0x9
    ctx->r15 = ADD32(0, 0X9);
    // 0x0800290C: sb          $t7, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r15;
    // 0x08002910: lh          $v1, 0xE($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XE);
L_08002914:
    // 0x08002914: addiu       $t0, $v1, 0x1
    ctx->r8 = ADD32(ctx->r3, 0X1);
L_08002918:
    // 0x08002918: b           L_08002E74
    // 0x0800291C: sh          $t0, 0xE($s1)
    MEM_H(0XE, ctx->r17) = ctx->r8;
        goto L_08002E74;
    // 0x0800291C: sh          $t0, 0xE($s1)
    MEM_H(0XE, ctx->r17) = ctx->r8;
L_08002920:
    // 0x08002920: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x08002924: addiu       $v0, $v0, 0x24A0
    ctx->r2 = ADD32(ctx->r2, 0X24A0);
    // 0x08002928: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x0800292C: swc1        $f18, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f18.u32l;
    // 0x08002930: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x08002934: jalr        $v0
    // 0x08002938: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_78;
    // 0x08002938: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_78:
    // 0x0800293C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x08002940: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08002944: lwc1        $f8, 0x78($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X78);
    // 0x08002948: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800294C: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x08002950: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x08002954: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x08002958: lw          $a1, 0x7C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X7C);
    // 0x0800295C: lw          $a3, 0x74($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X74);
    // 0x08002960: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x08002964: jalr        $t9
    // 0x08002968: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_79;
    // 0x08002968: nop

    after_79:
    // 0x0800296C: lh          $v1, 0xE($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XE);
    // 0x08002970: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08002974: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08002978: bne         $v1, $at, L_08002B68
    if (ctx->r3 != ctx->r1) {
        // 0x0800297C: addiu       $t9, $t9, 0x4038
        ctx->r25 = ADD32(ctx->r25, 0X4038);
            goto L_08002B68;
    }
    // 0x0800297C: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x08002980: jalr        $t9
    // 0x08002984: addiu       $a0, $zero, 0x2F
    ctx->r4 = ADD32(0, 0X2F);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_80;
    // 0x08002984: addiu       $a0, $zero, 0x2F
    ctx->r4 = ADD32(0, 0X2F);
    after_80:
    // 0x08002988: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x0800298C: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x08002990: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x08002994: jalr        $t9
    // 0x08002998: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_81;
    // 0x08002998: nop

    after_81:
    // 0x0800299C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080029A0: addiu       $t9, $t9, 0x24AC
    ctx->r25 = ADD32(ctx->r25, 0X24AC);
    // 0x080029A4: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x080029A8: jalr        $t9
    // 0x080029AC: lui         $a1, 0x44A0
    ctx->r5 = S32(0X44A0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_82;
    // 0x080029AC: lui         $a1, 0x44A0
    ctx->r5 = S32(0X44A0 << 16);
    after_82:
    // 0x080029B0: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(33, 0X17D8) << 16);
    // 0x080029B4: addiu       $t9, $t9, 0x17D8
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(33, 0X17D8));
    // 0x080029B8: lwc1        $f12, 0x7C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x080029BC: lwc1        $f14, 0x78($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X78);
    // 0x080029C0: jalr        $t9
    // 0x080029C4: lw          $a2, 0x74($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X74);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_83;
    // 0x080029C4: lw          $a2, 0x74($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X74);
    after_83:
    // 0x080029C8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x080029CC: beq         $v0, $at, L_080029FC
    if (ctx->r2 == ctx->r1) {
        // 0x080029D0: lwc1        $f6, 0x7C($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X7C);
            goto L_080029FC;
    }
    // 0x080029D0: lwc1        $f6, 0x7C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x080029D4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x080029D8: beq         $v0, $at, L_080029FC
    if (ctx->r2 == ctx->r1) {
        // 0x080029DC: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_080029FC;
    }
    // 0x080029DC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x080029E0: beq         $v0, $at, L_08002A50
    if (ctx->r2 == ctx->r1) {
        // 0x080029E4: lwc1        $f8, 0x7C($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X7C);
            goto L_08002A50;
    }
    // 0x080029E4: lwc1        $f8, 0x7C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x080029E8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x080029EC: beq         $v0, $at, L_08002A50
    if (ctx->r2 == ctx->r1) {
        // 0x080029F0: lwc1        $f10, 0x78($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X78);
            goto L_08002A50;
    }
    // 0x080029F0: lwc1        $f10, 0x78($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X78);
    // 0x080029F4: b           L_08002AA4
    // 0x080029F8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
        goto L_08002AA4;
    // 0x080029F8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
L_080029FC:
    // 0x080029FC: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x08002A00: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08002A04: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x08002A08: lwc1        $f4, 0x78($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X78);
    // 0x08002A0C: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x08002A10: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08002A14: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x08002A18: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002A1C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08002A20: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x08002A24: lwc1        $f10, 0x74($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X74);
    // 0x08002A28: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08002A2C: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x08002A30: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x08002A34: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x08002A38: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x08002A3C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x08002A40: jalr        $t9
    // 0x08002A44: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_84;
    // 0x08002A44: nop

    after_84:
    // 0x08002A48: b           L_08002ADC
    // 0x08002A4C: nop

        goto L_08002ADC;
    // 0x08002A4C: nop

L_08002A50:
    // 0x08002A50: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x08002A54: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08002A58: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x08002A5C: lwc1        $f6, 0x78($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X78);
    // 0x08002A60: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x08002A64: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08002A68: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x08002A6C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002A70: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x08002A74: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x08002A78: lwc1        $f4, 0x74($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X74);
    // 0x08002A7C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08002A80: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x08002A84: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x08002A88: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x08002A8C: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x08002A90: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x08002A94: jalr        $t9
    // 0x08002A98: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_85;
    // 0x08002A98: nop

    after_85:
    // 0x08002A9C: b           L_08002ADC
    // 0x08002AA0: nop

        goto L_08002ADC;
    // 0x08002AA0: nop

L_08002AA4:
    // 0x08002AA4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08002AA8: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x08002AAC: lwc1        $f8, 0x74($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X74);
    // 0x08002AB0: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x08002AB4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08002AB8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002ABC: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x08002AC0: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x08002AC4: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x08002AC8: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x08002ACC: lw          $a1, 0x7C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X7C);
    // 0x08002AD0: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x08002AD4: jalr        $t9
    // 0x08002AD8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_86;
    // 0x08002AD8: nop

    after_86:
L_08002ADC:
    // 0x08002ADC: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x08002AE0: addiu       $v0, $v0, -0x7468
    ctx->r2 = ADD32(ctx->r2, -0X7468);
    // 0x08002AE4: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x08002AE8: jalr        $v0
    // 0x08002AEC: ori         $a0, $zero, 0x8294
    ctx->r4 = 0 | 0X8294;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_87;
    // 0x08002AEC: ori         $a0, $zero, 0x8294
    ctx->r4 = 0 | 0X8294;
    after_87:
    // 0x08002AF0: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(33, 0X2D8) << 16);
    // 0x08002AF4: addiu       $t9, $t9, 0x2D8
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(33, 0X2D8));
    // 0x08002AF8: jalr        $t9
    // 0x08002AFC: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_88;
    // 0x08002AFC: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_88:
    // 0x08002B00: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002B04: addiu       $t9, $t9, 0x1F70
    ctx->r25 = ADD32(ctx->r25, 0X1F70);
    // 0x08002B08: jalr        $t9
    // 0x08002B0C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_89;
    // 0x08002B0C: nop

    after_89:
    // 0x08002B10: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x08002B14: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x08002B18: addiu       $s0, $s0, -0x39FC
    ctx->r16 = ADD32(ctx->r16, -0X39FC);
    // 0x08002B1C: addiu       $t9, $t9, 0x307C
    ctx->r25 = ADD32(ctx->r25, 0X307C);
    // 0x08002B20: jalr        $t9
    // 0x08002B24: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_90;
    // 0x08002B24: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_90:
    // 0x08002B28: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x08002B2C: addiu       $t9, $t9, -0x5324
    ctx->r25 = ADD32(ctx->r25, -0X5324);
    // 0x08002B30: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x08002B34: jalr        $t9
    // 0x08002B38: addiu       $a1, $zero, 0xDC
    ctx->r5 = ADD32(0, 0XDC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_91;
    // 0x08002B38: addiu       $a1, $zero, 0xDC
    ctx->r5 = ADD32(0, 0XDC);
    after_91:
    // 0x08002B3C: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x08002B40: addiu       $a0, $zero, 0x156
    ctx->r4 = ADD32(0, 0X156);
    // 0x08002B44: jalr        $t9
    // 0x08002B48: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_92;
    // 0x08002B48: nop

    after_92:
    // 0x08002B4C: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x08002B50: addiu       $t9, $t9, -0x2920
    ctx->r25 = ADD32(ctx->r25, -0X2920);
    // 0x08002B54: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x08002B58: jalr        $t9
    // 0x08002B5C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_93;
    // 0x08002B5C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_93:
    // 0x08002B60: b           L_08002BA0
    // 0x08002B64: lh          $v1, 0xE($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XE);
        goto L_08002BA0;
    // 0x08002B64: lh          $v1, 0xE($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XE);
L_08002B68:
    // 0x08002B68: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x08002B6C: bne         $v1, $at, L_08002B88
    if (ctx->r3 != ctx->r1) {
        // 0x08002B70: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_08002B88;
    }
    // 0x08002B70: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08002B74: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08002B78: jalr        $t9
    // 0x08002B7C: addiu       $a0, $zero, 0x202
    ctx->r4 = ADD32(0, 0X202);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_94;
    // 0x08002B7C: addiu       $a0, $zero, 0x202
    ctx->r4 = ADD32(0, 0X202);
    after_94:
    // 0x08002B80: b           L_08002BA0
    // 0x08002B84: lh          $v1, 0xE($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XE);
        goto L_08002BA0;
    // 0x08002B84: lh          $v1, 0xE($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XE);
L_08002B88:
    // 0x08002B88: addiu       $at, $zero, 0x78
    ctx->r1 = ADD32(0, 0X78);
    // 0x08002B8C: bne         $v1, $at, L_08002BA0
    if (ctx->r3 != ctx->r1) {
        // 0x08002B90: addiu       $t8, $zero, 0x9
        ctx->r24 = ADD32(0, 0X9);
            goto L_08002BA0;
    }
    // 0x08002B90: addiu       $t8, $zero, 0x9
    ctx->r24 = ADD32(0, 0X9);
    // 0x08002B94: sh          $zero, 0xE($s1)
    MEM_H(0XE, ctx->r17) = 0;
    // 0x08002B98: lh          $v1, 0xE($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XE);
    // 0x08002B9C: sb          $t8, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r24;
L_08002BA0:
    // 0x08002BA0: addiu       $t1, $v1, 0x1
    ctx->r9 = ADD32(ctx->r3, 0X1);
    // 0x08002BA4: b           L_08002E74
    // 0x08002BA8: sh          $t1, 0xE($s1)
    MEM_H(0XE, ctx->r17) = ctx->r9;
        goto L_08002E74;
    // 0x08002BA8: sh          $t1, 0xE($s1)
    MEM_H(0XE, ctx->r17) = ctx->r9;
L_08002BAC:
    // 0x08002BAC: lh          $v1, 0xE($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XE);
    // 0x08002BB0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08002BB4: lw          $a0, 0x90($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X90);
    // 0x08002BB8: bne         $v1, $at, L_08002BE4
    if (ctx->r3 != ctx->r1) {
        // 0x08002BBC: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_08002BE4;
    }
    // 0x08002BBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002BC0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002BC4: addiu       $t9, $t9, 0x6CB4
    ctx->r25 = ADD32(ctx->r25, 0X6CB4);
    // 0x08002BC8: addiu       $t3, $zero, 0x8
    ctx->r11 = ADD32(0, 0X8);
    // 0x08002BCC: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x08002BD0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08002BD4: jalr        $t9
    // 0x08002BD8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_95;
    // 0x08002BD8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_95:
    // 0x08002BDC: b           L_08002C98
    // 0x08002BE0: lh          $v1, 0xE($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XE);
        goto L_08002C98;
    // 0x08002BE0: lh          $v1, 0xE($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XE);
L_08002BE4:
    // 0x08002BE4: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x08002BE8: bne         $v1, $at, L_08002C98
    if (ctx->r3 != ctx->r1) {
        // 0x08002BEC: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_08002C98;
    }
    // 0x08002BEC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002BF0: addiu       $t9, $t9, 0x1FB0
    ctx->r25 = ADD32(ctx->r25, 0X1FB0);
    // 0x08002BF4: jalr        $t9
    // 0x08002BF8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_96;
    // 0x08002BF8: nop

    after_96:
    // 0x08002BFC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002C00: addiu       $t9, $t9, 0x1C58
    ctx->r25 = ADD32(ctx->r25, 0X1C58);
    // 0x08002C04: jalr        $t9
    // 0x08002C08: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_97;
    // 0x08002C08: nop

    after_97:
    // 0x08002C0C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002C10: addiu       $t9, $t9, 0x1BB4
    ctx->r25 = ADD32(ctx->r25, 0X1BB4);
    // 0x08002C14: jalr        $t9
    // 0x08002C18: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_98;
    // 0x08002C18: nop

    after_98:
    // 0x08002C1C: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x08002C20: addiu       $t5, $t5, -0x3994
    ctx->r13 = ADD32(ctx->r13, -0X3994);
    // 0x08002C24: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x08002C28: addiu       $t2, $t2, -0x3A28
    ctx->r10 = ADD32(ctx->r10, -0X3A28);
    // 0x08002C2C: addiu       $t6, $t5, 0x30
    ctx->r14 = ADD32(ctx->r13, 0X30);
L_08002C30:
    // 0x08002C30: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x08002C34: addiu       $t5, $t5, 0xC
    ctx->r13 = ADD32(ctx->r13, 0XC);
    // 0x08002C38: addiu       $t2, $t2, 0xC
    ctx->r10 = ADD32(ctx->r10, 0XC);
    // 0x08002C3C: sw          $at, -0xC($t2)
    MEM_W(-0XC, ctx->r10) = ctx->r1;
    // 0x08002C40: lw          $at, -0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, -0X8);
    // 0x08002C44: sw          $at, -0x8($t2)
    MEM_W(-0X8, ctx->r10) = ctx->r1;
    // 0x08002C48: lw          $at, -0x4($t5)
    ctx->r1 = MEM_W(ctx->r13, -0X4);
    // 0x08002C4C: bne         $t5, $t6, L_08002C30
    if (ctx->r13 != ctx->r14) {
        // 0x08002C50: sw          $at, -0x4($t2)
        MEM_W(-0X4, ctx->r10) = ctx->r1;
            goto L_08002C30;
    }
    // 0x08002C50: sw          $at, -0x4($t2)
    MEM_W(-0X4, ctx->r10) = ctx->r1;
    // 0x08002C54: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08002C58: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x08002C5C: jalr        $t9
    // 0x08002C60: addiu       $a0, $zero, 0x9C
    ctx->r4 = ADD32(0, 0X9C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_99;
    // 0x08002C60: addiu       $a0, $zero, 0x9C
    ctx->r4 = ADD32(0, 0X9C);
    after_99:
    // 0x08002C64: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08002C68: addiu       $t9, $t9, -0x5BE0
    ctx->r25 = ADD32(ctx->r25, -0X5BE0);
    // 0x08002C6C: addiu       $t7, $zero, 0x100
    ctx->r15 = ADD32(0, 0X100);
    // 0x08002C70: addiu       $t0, $zero, 0xA0
    ctx->r8 = ADD32(0, 0XA0);
    // 0x08002C74: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x08002C78: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x08002C7C: addiu       $a0, $zero, 0x16D
    ctx->r4 = ADD32(0, 0X16D);
    // 0x08002C80: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002C84: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x08002C88: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x08002C8C: jalr        $t9
    // 0x08002C90: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_100;
    // 0x08002C90: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_100:
    // 0x08002C94: lh          $v1, 0xE($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XE);
L_08002C98:
    // 0x08002C98: addiu       $t8, $v1, 0x1
    ctx->r24 = ADD32(ctx->r3, 0X1);
    // 0x08002C9C: b           L_08002E74
    // 0x08002CA0: sh          $t8, 0xE($s1)
    MEM_H(0XE, ctx->r17) = ctx->r24;
        goto L_08002E74;
    // 0x08002CA0: sh          $t8, 0xE($s1)
    MEM_H(0XE, ctx->r17) = ctx->r24;
L_08002CA4:
    // 0x08002CA4: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x08002CA8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002CAC: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x08002CB0: beql        $a0, $zero, L_08002CC4
    if (ctx->r4 == 0) {
        // 0x08002CB4: lw          $t1, 0x8($s1)
        ctx->r9 = MEM_W(ctx->r17, 0X8);
            goto L_08002CC4;
    }
    goto skip_9;
    // 0x08002CB4: lw          $t1, 0x8($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X8);
    skip_9:
    // 0x08002CB8: jalr        $t9
    // 0x08002CBC: lw          $a1, 0x88($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X88);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_101;
    // 0x08002CBC: lw          $a1, 0x88($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X88);
    after_101:
    // 0x08002CC0: lw          $t1, 0x8($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X8);
L_08002CC4:
    // 0x08002CC4: lui         $t3, 0x800
    ctx->r11 = S32(RELOC_HI16(33, 0X32F4) << 16);
    // 0x08002CC8: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x08002CCC: beql        $t1, $zero, L_08002E60
    if (ctx->r9 == 0) {
        // 0x08002CD0: lh          $t5, 0x10($s1)
        ctx->r13 = MEM_H(ctx->r17, 0X10);
            goto L_08002E60;
    }
    goto skip_10;
    // 0x08002CD0: lh          $t5, 0x10($s1)
    ctx->r13 = MEM_H(ctx->r17, 0X10);
    skip_10:
    // 0x08002CD4: lbu         $t3, 0x32F4($t3)
    ctx->r11 = MEM_BU(ctx->r11, (int16_t)RELOC_LO16(33, 0X32F4));
    // 0x08002CD8: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(33, 0X8CC) << 16);
    // 0x08002CDC: addiu       $t4, $zero, 0x7
    ctx->r12 = ADD32(0, 0X7);
    // 0x08002CE0: slti        $at, $t3, 0x8
    ctx->r1 = SIGNED(ctx->r11) < 0X8 ? 1 : 0;
    // 0x08002CE4: bne         $at, $zero, L_08002CF4
    if (ctx->r1 != 0) {
        // 0x08002CE8: addiu       $t9, $t9, 0x8CC
        ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(33, 0X8CC));
            goto L_08002CF4;
    }
    // 0x08002CE8: addiu       $t9, $t9, 0x8CC
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(33, 0X8CC));
    // 0x08002CEC: sh          $zero, 0xE($s1)
    MEM_H(0XE, ctx->r17) = 0;
    // 0x08002CF0: sb          $t4, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r12;
L_08002CF4:
    // 0x08002CF4: lw          $t6, -0x3A1C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A1C);
    // 0x08002CF8: addiu       $t5, $t6, -0x11
    ctx->r13 = ADD32(ctx->r14, -0X11);
    // 0x08002CFC: blezl       $t5, L_08002D14
    if (SIGNED(ctx->r13) <= 0) {
        // 0x08002D00: addiu       $t2, $zero, 0x8
        ctx->r10 = ADD32(0, 0X8);
            goto L_08002D14;
    }
    goto skip_11;
    // 0x08002D00: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    skip_11:
    // 0x08002D04: jalr        $t9
    // 0x08002D08: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_102;
    // 0x08002D08: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
    after_102:
    // 0x08002D0C: bgtz        $v0, L_08002D1C
    if (SIGNED(ctx->r2) > 0) {
        // 0x08002D10: addiu       $t2, $zero, 0x8
        ctx->r10 = ADD32(0, 0X8);
            goto L_08002D1C;
    }
    // 0x08002D10: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
L_08002D14:
    // 0x08002D14: sh          $zero, 0xE($s1)
    MEM_H(0XE, ctx->r17) = 0;
    // 0x08002D18: sb          $t2, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r10;
L_08002D1C:
    // 0x08002D1C: lh          $t7, 0x10($s1)
    ctx->r15 = MEM_H(ctx->r17, 0X10);
    // 0x08002D20: addiu       $at, $zero, 0xF0
    ctx->r1 = ADD32(0, 0XF0);
    // 0x08002D24: lw          $a0, 0x90($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X90);
    // 0x08002D28: div         $zero, $t7, $at
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r1)));
    // 0x08002D2C: mfhi        $t0
    ctx->r8 = hi;
    // 0x08002D30: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x08002D34: bne         $t0, $at, L_08002E28
    if (ctx->r8 != ctx->r1) {
        // 0x08002D38: addiu       $a1, $zero, 0x1AD
        ctx->r5 = ADD32(0, 0X1AD);
            goto L_08002E28;
    }
    // 0x08002D38: addiu       $a1, $zero, 0x1AD
    ctx->r5 = ADD32(0, 0X1AD);
    // 0x08002D3C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002D40: addiu       $t9, $t9, 0x7360
    ctx->r25 = ADD32(ctx->r25, 0X7360);
    // 0x08002D44: jalr        $t9
    // 0x08002D48: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_103;
    // 0x08002D48: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_103:
    // 0x08002D4C: beq         $v0, $zero, L_08002E74
    if (ctx->r2 == 0) {
        // 0x08002D50: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_08002E74;
    }
    // 0x08002D50: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x08002D54: lw          $t8, 0x18($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X18);
    // 0x08002D58: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x08002D5C: lui         $t1, 0x8004
    ctx->r9 = S32(0X8004 << 16);
    // 0x08002D60: addiu       $t1, $t1, 0x17E0
    ctx->r9 = ADD32(ctx->r9, 0X17E0);
    // 0x08002D64: addiu       $v1, $v1, -0x6D4C
    ctx->r3 = ADD32(ctx->r3, -0X6D4C);
    // 0x08002D68: sw          $v1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r3;
    // 0x08002D6C: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x08002D70: sw          $t8, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r24;
    // 0x08002D74: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
L_08002D78:
    // 0x08002D78: addiu       $a0, $zero, 0xDC
    ctx->r4 = ADD32(0, 0XDC);
    // 0x08002D7C: jalr        $v1
    // 0x08002D80: nop

    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_104;
    // 0x08002D80: nop

    after_104:
    // 0x08002D84: addiu       $t3, $v0, -0x6E
    ctx->r11 = ADD32(ctx->r2, -0X6E);
    // 0x08002D88: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x08002D8C: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x08002D90: addiu       $a0, $zero, 0xB4
    ctx->r4 = ADD32(0, 0XB4);
    // 0x08002D94: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x08002D98: jalr        $t9
    // 0x08002D9C: swc1        $f8, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_105;
    // 0x08002D9C: swc1        $f8, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f8.u32l;
    after_105:
    // 0x08002DA0: addiu       $t4, $v0, -0x46
    ctx->r12 = ADD32(ctx->r2, -0X46);
    // 0x08002DA4: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x08002DA8: lw          $v1, 0x80($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X80);
    // 0x08002DAC: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x08002DB0: cvt.s.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
    // 0x08002DB4: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x08002DB8: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    // 0x08002DBC: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x08002DC0: lwc1        $f8, 0x10($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X10);
    // 0x08002DC4: sub.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x08002DC8: sub.s       $f14, $f8, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x08002DCC: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x08002DD0: nop

    // 0x08002DD4: mul.s       $f4, $f14, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x08002DD8: jalr        $t9
    // 0x08002DDC: add.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f4.fl;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_106;
    // 0x08002DDC: add.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f4.fl;
    after_106:
    // 0x08002DE0: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x08002DE4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08002DE8: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x08002DEC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x08002DF0: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x08002DF4: nop

    // 0x08002DF8: bc1tl       L_08002E0C
    if (c1cs) {
        // 0x08002DFC: lw          $t6, 0x80($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X80);
            goto L_08002E0C;
    }
    goto skip_12;
    // 0x08002DFC: lw          $t6, 0x80($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X80);
    skip_12:
    // 0x08002E00: bnel        $s0, $at, L_08002D78
    if (ctx->r16 != ctx->r1) {
        // 0x08002E04: lw          $v1, 0x4C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X4C);
            goto L_08002D78;
    }
    goto skip_13;
    // 0x08002E04: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
    skip_13:
    // 0x08002E08: lw          $t6, 0x80($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X80);
L_08002E0C:
    // 0x08002E0C: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x08002E10: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08002E14: lwc1        $f8, 0x70($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X70);
    // 0x08002E18: swc1        $f10, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f10.u32l;
    // 0x08002E1C: swc1        $f8, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f8.u32l;
    // 0x08002E20: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x08002E24: swc1        $f4, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->f4.u32l;
L_08002E28:
    // 0x08002E28: lui         $s0, 0x8016
    ctx->r16 = S32(0X8016 << 16);
    // 0x08002E2C: lw          $s0, -0x3A1C($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X3A1C);
    // 0x08002E30: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(33, 0X8E4) << 16);
    // 0x08002E34: addiu       $t9, $t9, 0x8E4
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(33, 0X8E4));
    // 0x08002E38: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
    // 0x08002E3C: jalr        $t9
    // 0x08002E40: addiu       $a1, $s0, -0x11
    ctx->r5 = ADD32(ctx->r16, -0X11);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_107;
    // 0x08002E40: addiu       $a1, $s0, -0x11
    ctx->r5 = ADD32(ctx->r16, -0X11);
    after_107:
    // 0x08002E44: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(33, 0X8EC) << 16);
    // 0x08002E48: addiu       $t9, $t9, 0x8EC
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(33, 0X8EC));
    // 0x08002E4C: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(33, 0X32F4) << 16);
    // 0x08002E50: lbu         $a1, 0x32F4($a1)
    ctx->r5 = MEM_BU(ctx->r5, (int16_t)RELOC_LO16(33, 0X32F4));
    // 0x08002E54: jalr        $t9
    // 0x08002E58: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_108;
    // 0x08002E58: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
    after_108:
    // 0x08002E5C: lh          $t5, 0x10($s1)
    ctx->r13 = MEM_H(ctx->r17, 0X10);
L_08002E60:
    // 0x08002E60: lh          $t7, 0xE($s1)
    ctx->r15 = MEM_H(ctx->r17, 0XE);
    // 0x08002E64: addiu       $t2, $t5, 0x1
    ctx->r10 = ADD32(ctx->r13, 0X1);
    // 0x08002E68: addiu       $t0, $t7, 0x1
    ctx->r8 = ADD32(ctx->r15, 0X1);
    // 0x08002E6C: sh          $t2, 0x10($s1)
    MEM_H(0X10, ctx->r17) = ctx->r10;
    // 0x08002E70: sh          $t0, 0xE($s1)
    MEM_H(0XE, ctx->r17) = ctx->r8;
L_08002E74:
    // 0x08002E74: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x08002E78: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x08002E7C: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x08002E80: jr          $ra
    // 0x08002E84: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    TRACE_RETURN()
    return;
    // 0x08002E84: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void func_08000008_6F0218(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000008: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800000C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000010: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000014: addiu       $t9, $t9, 0x3AC4
    ctx->r25 = ADD32(ctx->r25, 0X3AC4);
    // 0x08000018: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(33, 0X2E90) << 16);
    // 0x0800001C: jalr        $t9
    // 0x08000020: addiu       $a0, $a0, 0x2E90
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(33, 0X2E90));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000020: addiu       $a0, $a0, 0x2E90
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(33, 0X2E90));
    after_0:
    // 0x08000024: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000028: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800002C: jr          $ra
    // 0x08000030: nop

    TRACE_RETURN()
    return;
    // 0x08000030: nop

;}
RECOMP_FUNC void func_080008EC_6F0AFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080008EC: jr          $ra
    // 0x080008F0: sw          $a1, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x080008F0: sw          $a1, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_08000000_6F0210(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000000: jr          $ra
    // 0x08000004: nop

    TRACE_RETURN()
    return;
    // 0x08000004: nop

;}
RECOMP_FUNC void func_080017A4_6F19B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080017A4: lwc1        $f6, 0xDC($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XDC);
    // 0x080017A8: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(33, 0X3278) << 16);
    // 0x080017AC: ldc1        $f4, 0x3278($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(33, 0X3278));
    // 0x080017B0: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x080017B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x080017B8: c.lt.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d < ctx->f8.d;
    // 0x080017BC: nop

    // 0x080017C0: bc1f        L_080017D0
    if (!c1cs) {
        // 0x080017C4: nop
    
            goto L_080017D0;
    }
    // 0x080017C4: nop

    // 0x080017C8: jr          $ra
    // 0x080017CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x080017CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_080017D0:
    // 0x080017D0: jr          $ra
    // 0x080017D4: nop

    TRACE_RETURN()
    return;
    // 0x080017D4: nop

;}
RECOMP_FUNC void func_08001250_6F1460(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001250: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08001254: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08001258: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0800125C: lbu         $v0, 0xD0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD0);
    // 0x08001260: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x08001264: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001268: beq         $v0, $zero, L_08001284
    if (ctx->r2 == 0) {
        // 0x0800126C: lui         $a2, 0x3E80
        ctx->r6 = S32(0X3E80 << 16);
            goto L_08001284;
    }
    // 0x0800126C: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08001270: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08001274: beql        $v0, $at, L_08001308
    if (ctx->r2 == ctx->r1) {
        // 0x08001278: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_08001308;
    }
    goto skip_0;
    // 0x08001278: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x0800127C: b           L_08001308
    // 0x08001280: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_08001308;
    // 0x08001280: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08001284:
    // 0x08001284: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001288: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x0800128C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x08001290: jalr        $t9
    // 0x08001294: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001294: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x08001298: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x0800129C: addiu       $t6, $zero, 0x21
    ctx->r14 = ADD32(0, 0X21);
    // 0x080012A0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080012A4: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x080012A8: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x080012AC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x080012B0: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    // 0x080012B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080012B8: jalr        $t9
    // 0x080012BC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080012BC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x080012C0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x080012C4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x080012C8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x080012CC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x080012D0: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x080012D4: or          $t7, $v0, $at
    ctx->r15 = ctx->r2 | ctx->r1;
    // 0x080012D8: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x080012DC: sw          $t7, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r15;
    // 0x080012E0: sb          $t8, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r24;
    // 0x080012E4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x080012E8: swc1        $f2, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f2.u32l;
    // 0x080012EC: swc1        $f2, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f2.u32l;
    // 0x080012F0: swc1        $f2, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f2.u32l;
    // 0x080012F4: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
    // 0x080012F8: swc1        $f0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f0.u32l;
    // 0x080012FC: swc1        $f0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f0.u32l;
    // 0x08001300: sb          $t0, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = ctx->r8;
    // 0x08001304: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08001308:
    // 0x08001308: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0800130C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08001310: jr          $ra
    // 0x08001314: nop

    TRACE_RETURN()
    return;
    // 0x08001314: nop

;}
RECOMP_FUNC void func_080008B8_6F0AC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080008B8: sll         $t6, $a1, 4
    ctx->r14 = S32(ctx->r5 << 4);
    // 0x080008BC: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x080008C0: sll         $t6, $t6, 1
    ctx->r14 = S32(ctx->r14 << 1);
    // 0x080008C4: jr          $ra
    // 0x080008C8: sw          $t6, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x080008C8: sw          $t6, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void func_0800135C_6F156C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800135C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001360: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001364: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x08001368: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x0800136C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001370: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08001374: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x08001378: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x0800137C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001380: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x08001384: jalr        $t9
    // 0x08001388: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001388: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x0800138C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001390: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001394: jr          $ra
    // 0x08001398: nop

    TRACE_RETURN()
    return;
    // 0x08001398: nop

;}
RECOMP_FUNC void func_08001738_6F1948(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001738: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800173C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001740: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001744: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001748: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x0800174C: jalr        $t9
    // 0x08001750: addiu       $a0, $zero, 0x294
    ctx->r4 = ADD32(0, 0X294);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001750: addiu       $a0, $zero, 0x294
    ctx->r4 = ADD32(0, 0X294);
    after_0:
    // 0x08001754: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x08001758: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x0800175C: sb          $t6, 0xD5($t7)
    MEM_B(0XD5, ctx->r15) = ctx->r14;
    // 0x08001760: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001764: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001768: jr          $ra
    // 0x0800176C: nop

    TRACE_RETURN()
    return;
    // 0x0800176C: nop

;}
RECOMP_FUNC void func_080001D8_6F03E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080001D8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080001DC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080001E0: lui         $s0, 0x8001
    ctx->r16 = S32(0X8001 << 16);
    // 0x080001E4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080001E8: addiu       $s0, $s0, 0x2E0
    ctx->r16 = ADD32(ctx->r16, 0X2E0);
    // 0x080001EC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(33, 0X32D4) << 16);
    // 0x080001F0: jalr        $s0
    // 0x080001F4: lw          $a0, 0x32D4($a0)
    ctx->r4 = MEM_W(ctx->r4, (int16_t)RELOC_LO16(33, 0X32D4));
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_0;
    // 0x080001F4: lw          $a0, 0x32D4($a0)
    ctx->r4 = MEM_W(ctx->r4, (int16_t)RELOC_LO16(33, 0X32D4));
    after_0:
    // 0x080001F8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(33, 0X32D8) << 16);
    // 0x080001FC: jalr        $s0
    // 0x08000200: lw          $a0, 0x32D8($a0)
    ctx->r4 = MEM_W(ctx->r4, (int16_t)RELOC_LO16(33, 0X32D8));
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_1;
    // 0x08000200: lw          $a0, 0x32D8($a0)
    ctx->r4 = MEM_W(ctx->r4, (int16_t)RELOC_LO16(33, 0X32D8));
    after_1:
    // 0x08000204: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(33, 0X32DC) << 16);
    // 0x08000208: jalr        $s0
    // 0x0800020C: lw          $a0, 0x32DC($a0)
    ctx->r4 = MEM_W(ctx->r4, (int16_t)RELOC_LO16(33, 0X32DC));
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_2;
    // 0x0800020C: lw          $a0, 0x32DC($a0)
    ctx->r4 = MEM_W(ctx->r4, (int16_t)RELOC_LO16(33, 0X32DC));
    after_2:
    // 0x08000210: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(33, 0X32E0) << 16);
    // 0x08000214: jalr        $s0
    // 0x08000218: lw          $a0, 0x32E0($a0)
    ctx->r4 = MEM_W(ctx->r4, (int16_t)RELOC_LO16(33, 0X32E0));
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_3;
    // 0x08000218: lw          $a0, 0x32E0($a0)
    ctx->r4 = MEM_W(ctx->r4, (int16_t)RELOC_LO16(33, 0X32E0));
    after_3:
    // 0x0800021C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(33, 0X32E4) << 16);
    // 0x08000220: jalr        $s0
    // 0x08000224: lw          $a0, 0x32E4($a0)
    ctx->r4 = MEM_W(ctx->r4, (int16_t)RELOC_LO16(33, 0X32E4));
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_4;
    // 0x08000224: lw          $a0, 0x32E4($a0)
    ctx->r4 = MEM_W(ctx->r4, (int16_t)RELOC_LO16(33, 0X32E4));
    after_4:
    // 0x08000228: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(33, 0X32E8) << 16);
    // 0x0800022C: jalr        $s0
    // 0x08000230: lw          $a0, 0x32E8($a0)
    ctx->r4 = MEM_W(ctx->r4, (int16_t)RELOC_LO16(33, 0X32E8));
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_5;
    // 0x08000230: lw          $a0, 0x32E8($a0)
    ctx->r4 = MEM_W(ctx->r4, (int16_t)RELOC_LO16(33, 0X32E8));
    after_5:
    // 0x08000234: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(33, 0X32EC) << 16);
    // 0x08000238: jalr        $s0
    // 0x0800023C: lw          $a0, 0x32EC($a0)
    ctx->r4 = MEM_W(ctx->r4, (int16_t)RELOC_LO16(33, 0X32EC));
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_6;
    // 0x0800023C: lw          $a0, 0x32EC($a0)
    ctx->r4 = MEM_W(ctx->r4, (int16_t)RELOC_LO16(33, 0X32EC));
    after_6:
    // 0x08000240: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000244: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000248: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x0800024C: jr          $ra
    // 0x08000250: nop

    TRACE_RETURN()
    return;
    // 0x08000250: nop

;}
RECOMP_FUNC void func_080008E4_6F0AF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080008E4: jr          $ra
    // 0x080008E8: sw          $a1, 0x88($a0)
    MEM_W(0X88, ctx->r4) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x080008E8: sw          $a1, 0x88($a0)
    MEM_W(0X88, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_08000E2C_6F103C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000E2C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x08000E30: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x08000E34: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x08000E38: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x08000E3C: lbu         $v0, 0xD0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD0);
    // 0x08000E40: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000E44: addiu       $a0, $zero, 0x293
    ctx->r4 = ADD32(0, 0X293);
    // 0x08000E48: beq         $v0, $zero, L_08000E64
    if (ctx->r2 == 0) {
        // 0x08000E4C: lui         $a1, 0x800
        ctx->r5 = S32(RELOC_HI16(33, 0X32D0) << 16);
            goto L_08000E64;
    }
    // 0x08000E4C: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(33, 0X32D0) << 16);
    // 0x08000E50: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000E54: beql        $v0, $at, L_08000EF8
    if (ctx->r2 == ctx->r1) {
        // 0x08000E58: lw          $v0, 0x68($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X68);
            goto L_08000EF8;
    }
    goto skip_0;
    // 0x08000E58: lw          $v0, 0x68($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X68);
    skip_0:
    // 0x08000E5C: b           L_08001020
    // 0x08000E60: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_08001020;
    // 0x08000E60: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_08000E64:
    // 0x08000E64: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x08000E68: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x08000E6C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000E70: lwc1        $f4, 0x10($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X10);
    // 0x08000E74: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000E78: addiu       $t9, $t9, -0xA08
    ctx->r25 = ADD32(ctx->r25, -0XA08);
    // 0x08000E7C: lw          $a2, 0x8($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X8);
    // 0x08000E80: lw          $a3, 0xC($t6)
    ctx->r7 = MEM_W(ctx->r14, 0XC);
    // 0x08000E84: lw          $a1, 0x32D0($a1)
    ctx->r5 = MEM_W(ctx->r5, (int16_t)RELOC_LO16(33, 0X32D0));
    // 0x08000E88: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x08000E8C: jalr        $t9
    // 0x08000E90: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000E90: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x08000E94: lw          $t8, 0x64($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X64);
    // 0x08000E98: lui         $t7, 0x2A0
    ctx->r15 = S32(0X2A0 << 16);
    // 0x08000E9C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000EA0: ori         $t7, $t7, 0x87E1
    ctx->r15 = ctx->r15 | 0X87E1;
    // 0x08000EA4: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08000EA8: ori         $t0, $t8, 0x8000
    ctx->r8 = ctx->r24 | 0X8000;
    // 0x08000EAC: sw          $t7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r15;
    // 0x08000EB0: sw          $t0, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r8;
    // 0x08000EB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000EB8: jalr        $t9
    // 0x08000EBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000EBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x08000EC0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000EC4: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x08000EC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000ECC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x08000ED0: jalr        $t9
    // 0x08000ED4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000ED4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x08000ED8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000EDC: addiu       $t9, $t9, -0x5CF0
    ctx->r25 = ADD32(ctx->r25, -0X5CF0);
    // 0x08000EE0: jalr        $t9
    // 0x08000EE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000EE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x08000EE8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x08000EEC: b           L_0800101C
    // 0x08000EF0: sb          $t1, 0xD0($s0)
    MEM_B(0XD0, ctx->r16) = ctx->r9;
        goto L_0800101C;
    // 0x08000EF0: sb          $t1, 0xD0($s0)
    MEM_B(0XD0, ctx->r16) = ctx->r9;
    // 0x08000EF4: lw          $v0, 0x68($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X68);
L_08000EF8:
    // 0x08000EF8: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(33, 0X32D0) << 16);
    // 0x08000EFC: andi        $t2, $v0, 0x20
    ctx->r10 = ctx->r2 & 0X20;
    // 0x08000F00: bnel        $t2, $zero, L_08001020
    if (ctx->r10 != 0) {
        // 0x08000F04: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_08001020;
    }
    goto skip_1;
    // 0x08000F04: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_1:
    // 0x08000F08: lw          $a1, 0x32D0($a1)
    ctx->r5 = MEM_W(ctx->r5, (int16_t)RELOC_LO16(33, 0X32D0));
    // 0x08000F0C: addiu       $a0, $zero, 0x107
    ctx->r4 = ADD32(0, 0X107);
    // 0x08000F10: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x08000F14: beq         $a1, $zero, L_08000F40
    if (ctx->r5 == 0) {
        // 0x08000F18: lui         $at, 0x447A
        ctx->r1 = S32(0X447A << 16);
            goto L_08000F40;
    }
    // 0x08000F18: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x08000F1C: lwc1        $f8, 0x10($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X10);
    // 0x08000F20: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08000F24: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000F28: addiu       $t9, $t9, -0xA08
    ctx->r25 = ADD32(ctx->r25, -0XA08);
    // 0x08000F2C: lw          $a2, 0x8($t3)
    ctx->r6 = MEM_W(ctx->r11, 0X8);
    // 0x08000F30: lw          $a3, 0xC($t3)
    ctx->r7 = MEM_W(ctx->r11, 0XC);
    // 0x08000F34: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x08000F38: jalr        $t9
    // 0x08000F3C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000F3C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_4:
L_08000F40:
    // 0x08000F40: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08000F44: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(33, 0XB58) << 16);
    // 0x08000F48: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x08000F4C: addiu       $v0, $v0, -0x2218
    ctx->r2 = ADD32(ctx->r2, -0X2218);
    // 0x08000F50: addiu       $a1, $a1, 0xB58
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(33, 0XB58));
    // 0x08000F54: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x08000F58: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x08000F5C: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x08000F60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000F64: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000F68: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x08000F6C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x08000F70: jalr        $v0
    // 0x08000F74: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x08000F74: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x08000F78: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08000F7C: beq         $v0, $zero, L_08000FB4
    if (ctx->r2 == 0) {
        // 0x08000F80: addiu       $t6, $zero, 0x2A
        ctx->r14 = ADD32(0, 0X2A);
            goto L_08000FB4;
    }
    // 0x08000F80: addiu       $t6, $zero, 0x2A
    ctx->r14 = ADD32(0, 0X2A);
    // 0x08000F84: lw          $t4, 0xE8($v0)
    ctx->r12 = MEM_W(ctx->r2, 0XE8);
    // 0x08000F88: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000F8C: sh          $t6, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r14;
    // 0x08000F90: ori         $t5, $t4, 0x1
    ctx->r13 = ctx->r12 | 0X1;
    // 0x08000F94: sw          $t5, 0xE8($v0)
    MEM_W(0XE8, ctx->r2) = ctx->r13;
    // 0x08000F98: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000F9C: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x08000FA0: jalr        $t9
    // 0x08000FA4: addiu       $a0, $zero, 0x2A
    ctx->r4 = ADD32(0, 0X2A);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000FA4: addiu       $a0, $zero, 0x2A
    ctx->r4 = ADD32(0, 0X2A);
    after_6:
    // 0x08000FA8: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x08000FAC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08000FB0: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
L_08000FB4:
    // 0x08000FB4: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08000FB8: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x08000FBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000FC0: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x08000FC4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x08000FC8: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x08000FCC: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x08000FD0: jalr        $t9
    // 0x08000FD4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08000FD4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_7:
    // 0x08000FD8: beq         $v0, $zero, L_0800100C
    if (ctx->r2 == 0) {
        // 0x08000FDC: addiu       $t0, $zero, 0x2A
        ctx->r8 = ADD32(0, 0X2A);
            goto L_0800100C;
    }
    // 0x08000FDC: addiu       $t0, $zero, 0x2A
    ctx->r8 = ADD32(0, 0X2A);
    // 0x08000FE0: lw          $t7, 0xE8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XE8);
    // 0x08000FE4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000FE8: sh          $t0, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r8;
    // 0x08000FEC: ori         $t8, $t7, 0x4
    ctx->r24 = ctx->r15 | 0X4;
    // 0x08000FF0: sw          $t8, 0xE8($v0)
    MEM_W(0XE8, ctx->r2) = ctx->r24;
    // 0x08000FF4: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000FF8: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x08000FFC: jalr        $t9
    // 0x08001000: addiu       $a0, $zero, 0x2A
    ctx->r4 = ADD32(0, 0X2A);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08001000: addiu       $a0, $zero, 0x2A
    ctx->r4 = ADD32(0, 0X2A);
    after_8:
    // 0x08001004: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x08001008: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
L_0800100C:
    // 0x0800100C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001010: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08001014: jalr        $t9
    // 0x08001018: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08001018: nop

    after_9:
L_0800101C:
    // 0x0800101C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_08001020:
    // 0x08001020: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x08001024: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x08001028: jr          $ra
    // 0x0800102C: nop

    TRACE_RETURN()
    return;
    // 0x0800102C: nop

;}
RECOMP_FUNC void func_08000B58_6F0D68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000B58: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x08000B5C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x08000B60: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x08000B64: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x08000B68: lbu         $v1, 0xD0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XD0);
    // 0x08000B6C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000B70: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x08000B74: beq         $v1, $zero, L_08000B90
    if (ctx->r3 == 0) {
        // 0x08000B78: lui         $t6, 0x40
        ctx->r14 = S32(0X40 << 16);
            goto L_08000B90;
    }
    // 0x08000B78: lui         $t6, 0x40
    ctx->r14 = S32(0X40 << 16);
    // 0x08000B7C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000B80: beql        $v1, $at, L_08000CBC
    if (ctx->r3 == ctx->r1) {
        // 0x08000B84: addiu       $v1, $s0, 0xD0
        ctx->r3 = ADD32(ctx->r16, 0XD0);
            goto L_08000CBC;
    }
    goto skip_0;
    // 0x08000B84: addiu       $v1, $s0, 0xD0
    ctx->r3 = ADD32(ctx->r16, 0XD0);
    skip_0:
    // 0x08000B88: b           L_08000E1C
    // 0x08000B8C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_08000E1C;
    // 0x08000B8C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_08000B90:
    // 0x08000B90: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000B94: ori         $t6, $t6, 0x6E0
    ctx->r14 = ctx->r14 | 0X6E0;
    // 0x08000B98: addiu       $t7, $zero, 0x7E
    ctx->r15 = ADD32(0, 0X7E);
    // 0x08000B9C: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x08000BA0: sw          $t6, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r14;
    // 0x08000BA4: sh          $t7, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r15;
    // 0x08000BA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000BAC: jalr        $t9
    // 0x08000BB0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000BB0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x08000BB4: lw          $a0, 0xE8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE8);
    // 0x08000BB8: addiu       $v1, $s0, 0xD0
    ctx->r3 = ADD32(ctx->r16, 0XD0);
    // 0x08000BBC: addiu       $t0, $zero, 0x5A
    ctx->r8 = ADD32(0, 0X5A);
    // 0x08000BC0: andi        $t8, $a0, 0x1
    ctx->r24 = ctx->r4 & 0X1;
    // 0x08000BC4: beq         $t8, $zero, L_08000C54
    if (ctx->r24 == 0) {
        // 0x08000BC8: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_08000C54;
    }
    // 0x08000BC8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000BCC: sh          $t0, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r8;
    // 0x08000BD0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000BD4: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08000BD8: lh          $a1, 0x2($v1)
    ctx->r5 = MEM_H(ctx->r3, 0X2);
    // 0x08000BDC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08000BE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000BE4: jalr        $t9
    // 0x08000BE8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000BE8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x08000BEC: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08000BF0: or          $t1, $v0, $at
    ctx->r9 = ctx->r2 | ctx->r1;
    // 0x08000BF4: sw          $t1, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r9;
    // 0x08000BF8: addiu       $t2, $zero, 0x1E
    ctx->r10 = ADD32(0, 0X1E);
    // 0x08000BFC: sb          $zero, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = 0;
    // 0x08000C00: sh          $t2, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r10;
    // 0x08000C04: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000C08: addiu       $t9, $t9, -0x28DC
    ctx->r25 = ADD32(ctx->r25, -0X28DC);
    // 0x08000C0C: addiu       $t3, $zero, 0x28
    ctx->r11 = ADD32(0, 0X28);
    // 0x08000C10: addiu       $t4, $zero, 0x28
    ctx->r12 = ADD32(0, 0X28);
    // 0x08000C14: addiu       $t5, $zero, 0x28
    ctx->r13 = ADD32(0, 0X28);
    // 0x08000C18: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x08000C1C: addiu       $t7, $zero, 0x3C
    ctx->r15 = ADD32(0, 0X3C);
    // 0x08000C20: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x08000C24: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x08000C28: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x08000C2C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x08000C30: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x08000C34: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x08000C38: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x08000C3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000C40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000C44: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000C48: jalr        $t9
    // 0x08000C4C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000C4C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x08000C50: lw          $a0, 0xE8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE8);
L_08000C54:
    // 0x08000C54: andi        $t0, $a0, 0x4
    ctx->r8 = ctx->r4 & 0X4;
    // 0x08000C58: beq         $t0, $zero, L_08000CAC
    if (ctx->r8 == 0) {
        // 0x08000C5C: addiu       $v1, $s0, 0xD0
        ctx->r3 = ADD32(ctx->r16, 0XD0);
            goto L_08000CAC;
    }
    // 0x08000C5C: addiu       $v1, $s0, 0xD0
    ctx->r3 = ADD32(ctx->r16, 0XD0);
    // 0x08000C60: addiu       $t1, $zero, 0x5A
    ctx->r9 = ADD32(0, 0X5A);
    // 0x08000C64: sh          $t1, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r9;
    // 0x08000C68: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000C6C: addiu       $t9, $t9, -0x22B4
    ctx->r25 = ADD32(ctx->r25, -0X22B4);
    // 0x08000C70: lh          $a1, 0x2($v1)
    ctx->r5 = MEM_H(ctx->r3, 0X2);
    // 0x08000C74: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    // 0x08000C78: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08000C7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000C80: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000C84: jalr        $t9
    // 0x08000C88: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000C88: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x08000C8C: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08000C90: or          $t2, $v0, $at
    ctx->r10 = ctx->r2 | ctx->r1;
    // 0x08000C94: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x08000C98: sw          $t2, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r10;
    // 0x08000C9C: addiu       $t3, $zero, 0x1E
    ctx->r11 = ADD32(0, 0X1E);
    // 0x08000CA0: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x08000CA4: sh          $t3, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r11;
    // 0x08000CA8: sb          $t4, 0x6D($s0)
    MEM_B(0X6D, ctx->r16) = ctx->r12;
L_08000CAC:
    // 0x08000CAC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x08000CB0: b           L_08000E18
    // 0x08000CB4: sb          $t5, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r13;
        goto L_08000E18;
    // 0x08000CB4: sb          $t5, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r13;
    // 0x08000CB8: addiu       $v1, $s0, 0xD0
    ctx->r3 = ADD32(ctx->r16, 0XD0);
L_08000CBC:
    // 0x08000CBC: lh          $t6, 0x2($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X2);
    // 0x08000CC0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000CC4: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08000CC8: addiu       $t7, $t6, -0x2
    ctx->r15 = ADD32(ctx->r14, -0X2);
    // 0x08000CCC: sh          $t7, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r15;
    // 0x08000CD0: lw          $a0, 0xE8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE8);
    // 0x08000CD4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000CD8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08000CDC: andi        $t8, $a0, 0x1
    ctx->r24 = ctx->r4 & 0X1;
    // 0x08000CE0: beql        $t8, $zero, L_08000D5C
    if (ctx->r24 == 0) {
        // 0x08000CE4: andi        $t3, $a0, 0x4
        ctx->r11 = ctx->r4 & 0X4;
            goto L_08000D5C;
    }
    goto skip_1;
    // 0x08000CE4: andi        $t3, $a0, 0x4
    ctx->r11 = ctx->r4 & 0X4;
    skip_1:
    // 0x08000CE8: lh          $a1, 0x2($v1)
    ctx->r5 = MEM_H(ctx->r3, 0X2);
    // 0x08000CEC: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    // 0x08000CF0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08000CF4: jalr        $t9
    // 0x08000CF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000CF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x08000CFC: lwc1        $f4, 0x1C($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x08000D00: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(33, 0X3260) << 16);
    // 0x08000D04: ldc1        $f0, 0x3260($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(33, 0X3260));
    // 0x08000D08: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08000D0C: lwc1        $f16, 0x20($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X20);
    // 0x08000D10: add.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = ctx->f6.d + ctx->f0.d;
    // 0x08000D14: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x08000D18: lhu         $t0, 0x16($s1)
    ctx->r8 = MEM_HU(ctx->r17, 0X16);
    // 0x08000D1C: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x08000D20: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08000D24: lwc1        $f8, 0x24($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X24);
    // 0x08000D28: addiu       $t1, $t0, 0x40
    ctx->r9 = ADD32(ctx->r8, 0X40);
    // 0x08000D2C: add.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = ctx->f18.d + ctx->f0.d;
    // 0x08000D30: swc1        $f10, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f10.u32l;
    // 0x08000D34: andi        $t2, $t1, 0x3FF
    ctx->r10 = ctx->r9 & 0X3FF;
    // 0x08000D38: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x08000D3C: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08000D40: sh          $t2, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r10;
    // 0x08000D44: add.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = ctx->f10.d + ctx->f0.d;
    // 0x08000D48: swc1        $f6, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f6.u32l;
    // 0x08000D4C: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08000D50: swc1        $f18, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f18.u32l;
    // 0x08000D54: lw          $a0, 0xE8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE8);
    // 0x08000D58: andi        $t3, $a0, 0x4
    ctx->r11 = ctx->r4 & 0X4;
L_08000D5C:
    // 0x08000D5C: beq         $t3, $zero, L_08000DF8
    if (ctx->r11 == 0) {
        // 0x08000D60: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08000DF8;
    }
    // 0x08000D60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000D64: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000D68: addiu       $t9, $t9, -0x22B4
    ctx->r25 = ADD32(ctx->r25, -0X22B4);
    // 0x08000D6C: lh          $a1, 0x2($v1)
    ctx->r5 = MEM_H(ctx->r3, 0X2);
    // 0x08000D70: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08000D74: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000D78: jalr        $t9
    // 0x08000D7C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000D7C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x08000D80: lwc1        $f4, 0x1C($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x08000D84: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(33, 0X3268) << 16);
    // 0x08000D88: ldc1        $f0, 0x3268($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(33, 0X3268));
    // 0x08000D8C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08000D90: lwc1        $f16, 0x20($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X20);
    // 0x08000D94: add.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = ctx->f6.d + ctx->f0.d;
    // 0x08000D98: lhu         $t4, 0x16($s1)
    ctx->r12 = MEM_HU(ctx->r17, 0X16);
    // 0x08000D9C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000DA0: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x08000DA4: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08000DA8: lwc1        $f8, 0x24($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X24);
    // 0x08000DAC: addiu       $t5, $t4, 0x40
    ctx->r13 = ADD32(ctx->r12, 0X40);
    // 0x08000DB0: add.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = ctx->f18.d + ctx->f0.d;
    // 0x08000DB4: swc1        $f10, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f10.u32l;
    // 0x08000DB8: andi        $t6, $t5, 0x3FF
    ctx->r14 = ctx->r13 & 0X3FF;
    // 0x08000DBC: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x08000DC0: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08000DC4: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08000DC8: sh          $t6, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r14;
    // 0x08000DCC: add.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = ctx->f10.d + ctx->f0.d;
    // 0x08000DD0: swc1        $f6, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f6.u32l;
    // 0x08000DD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000DD8: addiu       $a1, $zero, 0x4B0
    ctx->r5 = ADD32(0, 0X4B0);
    // 0x08000DDC: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08000DE0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000DE4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08000DE8: jalr        $t9
    // 0x08000DEC: swc1        $f18, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f18.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000DEC: swc1        $f18, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f18.u32l;
    after_6:
    // 0x08000DF0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x08000DF4: sb          $t7, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r15;
L_08000DF8:
    // 0x08000DF8: lhu         $v0, 0x8A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8A);
    // 0x08000DFC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000E00: addiu       $t9, $t9, 0x4EF8
    ctx->r25 = ADD32(ctx->r25, 0X4EF8);
    // 0x08000E04: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
    // 0x08000E08: bne         $v0, $zero, L_08000E18
    if (ctx->r2 != 0) {
        // 0x08000E0C: sh          $t8, 0x8A($s0)
        MEM_H(0X8A, ctx->r16) = ctx->r24;
            goto L_08000E18;
    }
    // 0x08000E0C: sh          $t8, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r24;
    // 0x08000E10: jalr        $t9
    // 0x08000E14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08000E14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
L_08000E18:
    // 0x08000E18: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_08000E1C:
    // 0x08000E1C: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x08000E20: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x08000E24: jr          $ra
    // 0x08000E28: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x08000E28: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_080008F4_6F0B04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080008F4: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x080008F8: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x080008FC: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x08000900: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000904: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x08000908: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x0800090C: addiu       $t9, $t9, 0x4E08
    ctx->r25 = ADD32(ctx->r25, 0X4E08);
    // 0x08000910: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(33, 0X5DC) << 16);
    // 0x08000914: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x08000918: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x0800091C: addiu       $a1, $a1, 0x5DC
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(33, 0X5DC));
    // 0x08000920: jalr        $t9
    // 0x08000924: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000924: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    after_0:
    // 0x08000928: bne         $v0, $zero, L_08000938
    if (ctx->r2 != 0) {
        // 0x0800092C: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_08000938;
    }
    // 0x0800092C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x08000930: b           L_08000B44
    // 0x08000934: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_08000B44;
    // 0x08000934: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_08000938:
    // 0x08000938: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800093C: addiu       $t9, $t9, 0x1610
    ctx->r25 = ADD32(ctx->r25, 0X1610);
    // 0x08000940: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000944: jalr        $t9
    // 0x08000948: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000948: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x0800094C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000950: addiu       $t9, $t9, 0x15F8
    ctx->r25 = ADD32(ctx->r25, 0X15F8);
    // 0x08000954: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000958: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x0800095C: jalr        $t9
    // 0x08000960: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000960: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    after_2:
    // 0x08000964: lui         $v0, 0x800
    ctx->r2 = S32(RELOC_HI16(33, 0X840) << 16);
    // 0x08000968: addiu       $v0, $v0, 0x840
    ctx->r2 = ADD32(ctx->r2, (int16_t)RELOC_LO16(33, 0X840));
    // 0x0800096C: addiu       $s0, $s1, 0x5C
    ctx->r16 = ADD32(ctx->r17, 0X5C);
    // 0x08000970: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000974: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x08000978: addiu       $t9, $t9, 0x1AC
    ctx->r25 = ADD32(ctx->r25, 0X1AC);
    // 0x0800097C: jalr        $t9
    // 0x08000980: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000980: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    after_3:
    // 0x08000984: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(33, 0X34) << 16);
    // 0x08000988: addiu       $t9, $t9, 0x34
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(33, 0X34));
    // 0x0800098C: jalr        $t9
    // 0x08000990: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000990: nop

    after_4:
    // 0x08000994: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    // 0x08000998: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800099C: addiu       $t9, $t9, 0x19D4
    ctx->r25 = ADD32(ctx->r25, 0X19D4);
    // 0x080009A0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080009A4: jalr        $t9
    // 0x080009A8: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080009A8: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    after_5:
    // 0x080009AC: bne         $v0, $zero, L_080009CC
    if (ctx->r2 != 0) {
        // 0x080009B0: sw          $v0, 0x20($s0)
        MEM_W(0X20, ctx->r16) = ctx->r2;
            goto L_080009CC;
    }
    // 0x080009B0: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x080009B4: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x080009B8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080009BC: jalr        $t9
    // 0x080009C0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080009C0: nop

    after_6:
    // 0x080009C4: b           L_08000B44
    // 0x080009C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_08000B44;
    // 0x080009C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_080009CC:
    // 0x080009CC: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x080009D0: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x080009D4: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x080009D8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080009DC: addiu       $t9, $t9, 0x48F0
    ctx->r25 = ADD32(ctx->r25, 0X48F0);
    // 0x080009E0: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x080009E4: addiu       $a1, $zero, 0x1F4
    ctx->r5 = ADD32(0, 0X1F4);
    // 0x080009E8: jalr        $t9
    // 0x080009EC: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080009EC: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_7:
    // 0x080009F0: bne         $v0, $zero, L_08000A10
    if (ctx->r2 != 0) {
        // 0x080009F4: sw          $v0, 0x1C($s0)
        MEM_W(0X1C, ctx->r16) = ctx->r2;
            goto L_08000A10;
    }
    // 0x080009F4: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x080009F8: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x080009FC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000A00: jalr        $t9
    // 0x08000A04: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08000A04: nop

    after_8:
    // 0x08000A08: b           L_08000B44
    // 0x08000A0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_08000B44;
    // 0x08000A0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_08000A10:
    // 0x08000A10: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x08000A14: lui         $a3, 0x8001
    ctx->r7 = S32(0X8001 << 16);
    // 0x08000A18: addiu       $a3, $a3, 0x3DC
    ctx->r7 = ADD32(ctx->r7, 0X3DC);
    // 0x08000A1C: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x08000A20: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000A24: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08000A28: jalr        $a3
    // 0x08000A2C: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    LOOKUP_FUNC(ctx->r7)(rdram, ctx);
        goto after_9;
    // 0x08000A2C: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    after_9:
    // 0x08000A30: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x08000A34: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x08000A38: bne         $v0, $at, L_08000A58
    if (ctx->r2 != ctx->r1) {
        // 0x08000A3C: sw          $v0, 0x34($s0)
        MEM_W(0X34, ctx->r16) = ctx->r2;
            goto L_08000A58;
    }
    // 0x08000A3C: sw          $v0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r2;
    // 0x08000A40: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x08000A44: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000A48: jalr        $t9
    // 0x08000A4C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08000A4C: nop

    after_10:
    // 0x08000A50: b           L_08000B44
    // 0x08000A54: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_08000B44;
    // 0x08000A54: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_08000A58:
    // 0x08000A58: lw          $v0, 0x1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C);
    // 0x08000A5C: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x08000A60: addiu       $t0, $zero, 0xA0
    ctx->r8 = ADD32(0, 0XA0);
    // 0x08000A64: lbu         $t6, 0x8($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X8);
    // 0x08000A68: sb          $v1, 0xD($v0)
    MEM_B(0XD, ctx->r2) = ctx->r3;
    // 0x08000A6C: sb          $v1, 0xE($v0)
    MEM_B(0XE, ctx->r2) = ctx->r3;
    // 0x08000A70: andi        $t7, $t6, 0xFF1F
    ctx->r15 = ctx->r14 & 0XFF1F;
    // 0x08000A74: ori         $t8, $t7, 0x40
    ctx->r24 = ctx->r15 | 0X40;
    // 0x08000A78: sb          $t8, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r24;
    // 0x08000A7C: sb          $v1, 0xF($v0)
    MEM_B(0XF, ctx->r2) = ctx->r3;
    // 0x08000A80: sb          $t0, 0x10($v0)
    MEM_B(0X10, ctx->r2) = ctx->r8;
    // 0x08000A84: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x08000A88: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000A8C: jalr        $a3
    // 0x08000A90: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r7)(rdram, ctx);
        goto after_11;
    // 0x08000A90: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_11:
    // 0x08000A94: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x08000A98: bne         $v0, $at, L_08000AB8
    if (ctx->r2 != ctx->r1) {
        // 0x08000A9C: sw          $v0, 0x30($s0)
        MEM_W(0X30, ctx->r16) = ctx->r2;
            goto L_08000AB8;
    }
    // 0x08000A9C: sw          $v0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r2;
    // 0x08000AA0: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x08000AA4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000AA8: jalr        $t9
    // 0x08000AAC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x08000AAC: nop

    after_12:
    // 0x08000AB0: b           L_08000B44
    // 0x08000AB4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_08000B44;
    // 0x08000AB4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_08000AB8:
    // 0x08000AB8: lw          $a0, 0x34($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X34);
    // 0x08000ABC: lui         $t2, 0x800
    ctx->r10 = S32(RELOC_HI16(33, 0X32D8) << 16);
    // 0x08000AC0: lw          $t2, 0x32D8($t2)
    ctx->r10 = MEM_W(ctx->r10, (int16_t)RELOC_LO16(33, 0X32D8));
    // 0x08000AC4: lui         $v1, 0x8001
    ctx->r3 = S32(0X8001 << 16);
    // 0x08000AC8: addiu       $v1, $v1, 0x6F0
    ctx->r3 = ADD32(ctx->r3, 0X6F0);
    // 0x08000ACC: addiu       $t1, $zero, 0x10
    ctx->r9 = ADD32(0, 0X10);
    // 0x08000AD0: addiu       $t3, $zero, 0x20
    ctx->r11 = ADD32(0, 0X20);
    // 0x08000AD4: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x08000AD8: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x08000ADC: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    // 0x08000AE0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x08000AE4: addiu       $a1, $zero, 0x70
    ctx->r5 = ADD32(0, 0X70);
    // 0x08000AE8: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    // 0x08000AEC: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x08000AF0: jalr        $v1
    // 0x08000AF4: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_13;
    // 0x08000AF4: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    after_13:
    // 0x08000AF8: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x08000AFC: lw          $a0, 0x34($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X34);
    // 0x08000B00: lui         $t5, 0x800
    ctx->r13 = S32(RELOC_HI16(33, 0X32D8) << 16);
    // 0x08000B04: lw          $t5, 0x32D8($t5)
    ctx->r13 = MEM_W(ctx->r13, (int16_t)RELOC_LO16(33, 0X32D8));
    // 0x08000B08: addiu       $t4, $zero, 0x10
    ctx->r12 = ADD32(0, 0X10);
    // 0x08000B0C: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x08000B10: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x08000B14: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x08000B18: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x08000B1C: addiu       $a1, $zero, 0x90
    ctx->r5 = ADD32(0, 0X90);
    // 0x08000B20: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    // 0x08000B24: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x08000B28: jalr        $v1
    // 0x08000B2C: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_14;
    // 0x08000B2C: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    after_14:
    // 0x08000B30: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000B34: addiu       $t9, $t9, 0x5AC
    ctx->r25 = ADD32(ctx->r25, 0X5AC);
    // 0x08000B38: jalr        $t9
    // 0x08000B3C: lw          $a0, 0x34($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X34);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x08000B3C: lw          $a0, 0x34($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X34);
    after_15:
    // 0x08000B40: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_08000B44:
    // 0x08000B44: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x08000B48: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x08000B4C: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x08000B50: jr          $ra
    // 0x08000B54: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x08000B54: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_08000034_6F0244(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000034: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08000038: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0800003C: lui         $s0, 0x8001
    ctx->r16 = S32(0X8001 << 16);
    // 0x08000040: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x08000044: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08000048: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x0800004C: addiu       $s0, $s0, 0x230
    ctx->r16 = ADD32(ctx->r16, 0X230);
    // 0x08000050: addiu       $t7, $zero, 0x4D4
    ctx->r15 = ADD32(0, 0X4D4);
    // 0x08000054: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x08000058: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x0800005C: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x08000060: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x08000064: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x08000068: jalr        $s0
    // 0x0800006C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_0;
    // 0x0800006C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08000070: lui         $t8, 0x800
    ctx->r24 = S32(0X800 << 16);
    // 0x08000074: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(33, 0X32D4) << 16);
    // 0x08000078: addiu       $t8, $t8, 0x1000
    ctx->r24 = ADD32(ctx->r24, 0X1000);
    // 0x0800007C: addiu       $t9, $zero, 0x4D4
    ctx->r25 = ADD32(0, 0X4D4);
    // 0x08000080: sw          $v0, 0x32D4($at)
    MEM_W((int16_t)RELOC_LO16(33, 0X32D4), ctx->r1) = ctx->r2;
    // 0x08000084: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x08000088: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x0800008C: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x08000090: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x08000094: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x08000098: jalr        $s0
    // 0x0800009C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_1;
    // 0x0800009C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x080000A0: lui         $t0, 0xA00
    ctx->r8 = S32(0XA00 << 16);
    // 0x080000A4: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(33, 0X32D8) << 16);
    // 0x080000A8: addiu       $t0, $t0, 0x0
    ctx->r8 = ADD32(ctx->r8, 0X0);
    // 0x080000AC: addiu       $t1, $zero, 0x7F
    ctx->r9 = ADD32(0, 0X7F);
    // 0x080000B0: sw          $v0, 0x32D8($at)
    MEM_W((int16_t)RELOC_LO16(33, 0X32D8), ctx->r1) = ctx->r2;
    // 0x080000B4: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x080000B8: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x080000BC: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x080000C0: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x080000C4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x080000C8: jalr        $s0
    // 0x080000CC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_2;
    // 0x080000CC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x080000D0: lui         $t2, 0xA00
    ctx->r10 = S32(0XA00 << 16);
    // 0x080000D4: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(33, 0X32DC) << 16);
    // 0x080000D8: addiu       $t2, $t2, 0x1000
    ctx->r10 = ADD32(ctx->r10, 0X1000);
    // 0x080000DC: addiu       $t3, $zero, 0x7F
    ctx->r11 = ADD32(0, 0X7F);
    // 0x080000E0: sw          $v0, 0x32DC($at)
    MEM_W((int16_t)RELOC_LO16(33, 0X32DC), ctx->r1) = ctx->r2;
    // 0x080000E4: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x080000E8: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x080000EC: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x080000F0: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x080000F4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x080000F8: jalr        $s0
    // 0x080000FC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_3;
    // 0x080000FC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x08000100: lui         $t4, 0xA00
    ctx->r12 = S32(0XA00 << 16);
    // 0x08000104: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(33, 0X32E0) << 16);
    // 0x08000108: addiu       $t4, $t4, 0x2000
    ctx->r12 = ADD32(ctx->r12, 0X2000);
    // 0x0800010C: addiu       $t5, $zero, 0x7F
    ctx->r13 = ADD32(0, 0X7F);
    // 0x08000110: sw          $v0, 0x32E0($at)
    MEM_W((int16_t)RELOC_LO16(33, 0X32E0), ctx->r1) = ctx->r2;
    // 0x08000114: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x08000118: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x0800011C: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x08000120: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x08000124: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x08000128: jalr        $s0
    // 0x0800012C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_4;
    // 0x0800012C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x08000130: lui         $t6, 0xA00
    ctx->r14 = S32(0XA00 << 16);
    // 0x08000134: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(33, 0X32E4) << 16);
    // 0x08000138: addiu       $t6, $t6, 0x3000
    ctx->r14 = ADD32(ctx->r14, 0X3000);
    // 0x0800013C: addiu       $t7, $zero, 0x7F
    ctx->r15 = ADD32(0, 0X7F);
    // 0x08000140: sw          $v0, 0x32E4($at)
    MEM_W((int16_t)RELOC_LO16(33, 0X32E4), ctx->r1) = ctx->r2;
    // 0x08000144: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x08000148: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x0800014C: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x08000150: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x08000154: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x08000158: jalr        $s0
    // 0x0800015C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_5;
    // 0x0800015C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x08000160: lui         $t8, 0xA00
    ctx->r24 = S32(0XA00 << 16);
    // 0x08000164: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(33, 0X32E8) << 16);
    // 0x08000168: addiu       $t8, $t8, 0x4000
    ctx->r24 = ADD32(ctx->r24, 0X4000);
    // 0x0800016C: addiu       $t9, $zero, 0x7F
    ctx->r25 = ADD32(0, 0X7F);
    // 0x08000170: sw          $v0, 0x32E8($at)
    MEM_W((int16_t)RELOC_LO16(33, 0X32E8), ctx->r1) = ctx->r2;
    // 0x08000174: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x08000178: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x0800017C: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x08000180: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x08000184: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x08000188: jalr        $s0
    // 0x0800018C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_6;
    // 0x0800018C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_6:
    // 0x08000190: lui         $t0, 0xA00
    ctx->r8 = S32(0XA00 << 16);
    // 0x08000194: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(33, 0X32EC) << 16);
    // 0x08000198: addiu       $t0, $t0, 0x5000
    ctx->r8 = ADD32(ctx->r8, 0X5000);
    // 0x0800019C: addiu       $t1, $zero, 0x7F
    ctx->r9 = ADD32(0, 0X7F);
    // 0x080001A0: sw          $v0, 0x32EC($at)
    MEM_W((int16_t)RELOC_LO16(33, 0X32EC), ctx->r1) = ctx->r2;
    // 0x080001A4: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x080001A8: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x080001AC: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x080001B0: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x080001B4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x080001B8: jalr        $s0
    // 0x080001BC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_7;
    // 0x080001BC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
    // 0x080001C0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x080001C4: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(33, 0X32F0) << 16);
    // 0x080001C8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x080001CC: sw          $v0, 0x32F0($at)
    MEM_W((int16_t)RELOC_LO16(33, 0X32F0), ctx->r1) = ctx->r2;
    // 0x080001D0: jr          $ra
    // 0x080001D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x080001D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_08000840_6F0A50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000840: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000844: beq         $a0, $zero, L_080008A8
    if (ctx->r4 == 0) {
        // 0x08000848: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_080008A8;
    }
    // 0x08000848: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800084C: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(33, 0X1D8) << 16);
    // 0x08000850: addiu       $t9, $t9, 0x1D8
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(33, 0X1D8));
    // 0x08000854: jalr        $t9
    // 0x08000858: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000858: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x0800085C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x08000860: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000864: addiu       $t9, $t9, 0x374
    ctx->r25 = ADD32(ctx->r25, 0X374);
    // 0x08000868: addiu       $v0, $a1, 0x5C
    ctx->r2 = ADD32(ctx->r5, 0X5C);
    // 0x0800086C: lw          $a0, 0x30($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X30);
    // 0x08000870: jalr        $t9
    // 0x08000874: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000874: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x08000878: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x0800087C: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x08000880: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x08000884: lw          $a1, 0x1C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X1C);
    // 0x08000888: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x0800088C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000890: beql        $a1, $zero, L_080008AC
    if (ctx->r5 == 0) {
        // 0x08000894: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_080008AC;
    }
    goto skip_0;
    // 0x08000894: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08000898: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x0800089C: addiu       $t9, $t9, 0x4B74
    ctx->r25 = ADD32(ctx->r25, 0X4B74);
    // 0x080008A0: jalr        $t9
    // 0x080008A4: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080008A4: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_2:
L_080008A8:
    // 0x080008A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080008AC:
    // 0x080008AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080008B0: jr          $ra
    // 0x080008B4: nop

    TRACE_RETURN()
    return;
    // 0x080008B4: nop

;}
RECOMP_FUNC void func_080017D8_6F19E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080017D8: trunc.w.s   $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    ctx->f4.u32l = TRUNC_W_S(ctx->f12.fl);
    // 0x080017DC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(33, 0X2EB8) << 16);
    // 0x080017E0: lh          $a0, 0x2EB8($a0)
    ctx->r4 = MEM_H(ctx->r4, (int16_t)RELOC_LO16(33, 0X2EB8));
    // 0x080017E4: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x080017E8: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x080017EC: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x080017F0: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x080017F4: subu        $a1, $v1, $a0
    ctx->r5 = SUB32(ctx->r3, ctx->r4);
    // 0x080017F8: slti        $at, $a1, -0xB
    ctx->r1 = SIGNED(ctx->r5) < -0XB ? 1 : 0;
    // 0x080017FC: bne         $at, $zero, L_08001854
    if (ctx->r1 != 0) {
        // 0x08001800: lui         $t1, 0x800
        ctx->r9 = S32(RELOC_HI16(33, 0X2EBC) << 16);
            goto L_08001854;
    }
    // 0x08001800: lui         $t1, 0x800
    ctx->r9 = S32(RELOC_HI16(33, 0X2EBC) << 16);
    // 0x08001804: slti        $at, $a1, 0xC
    ctx->r1 = SIGNED(ctx->r5) < 0XC ? 1 : 0;
    // 0x08001808: beql        $at, $zero, L_08001858
    if (ctx->r1 == 0) {
        // 0x0800180C: trunc.w.s   $f8, $f20
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    ctx->f8.u32l = TRUNC_W_S(ctx->f20.fl);
            goto L_08001858;
    }
    goto skip_0;
    // 0x0800180C: trunc.w.s   $f8, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    ctx->f8.u32l = TRUNC_W_S(ctx->f20.fl);
    skip_0:
    // 0x08001810: trunc.w.s   $f6, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    ctx->f6.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x08001814: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(33, 0X2EBA) << 16);
    // 0x08001818: lh          $t9, 0x2EBA($t9)
    ctx->r25 = MEM_H(ctx->r25, (int16_t)RELOC_LO16(33, 0X2EBA));
    // 0x0800181C: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x08001820: nop

    // 0x08001824: subu        $t0, $t8, $t9
    ctx->r8 = SUB32(ctx->r24, ctx->r25);
    // 0x08001828: slti        $at, $t0, 0xD
    ctx->r1 = SIGNED(ctx->r8) < 0XD ? 1 : 0;
    // 0x0800182C: bne         $at, $zero, L_08001854
    if (ctx->r1 != 0) {
        // 0x08001830: lui         $at, 0xC1F0
        ctx->r1 = S32(0XC1F0 << 16);
            goto L_08001854;
    }
    // 0x08001830: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x08001834: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08001838: nop

    // 0x0800183C: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x08001840: nop

    // 0x08001844: bc1fl       L_08001858
    if (!c1cs) {
        // 0x08001848: trunc.w.s   $f8, $f20
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    ctx->f8.u32l = TRUNC_W_S(ctx->f20.fl);
            goto L_08001858;
    }
    goto skip_1;
    // 0x08001848: trunc.w.s   $f8, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    ctx->f8.u32l = TRUNC_W_S(ctx->f20.fl);
    skip_1:
    // 0x0800184C: b           L_08001948
    // 0x08001850: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_08001948;
    // 0x08001850: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_08001854:
    // 0x08001854: trunc.w.s   $f8, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    ctx->f8.u32l = TRUNC_W_S(ctx->f20.fl);
L_08001858:
    // 0x08001858: lh          $t1, 0x2EBC($t1)
    ctx->r9 = MEM_H(ctx->r9, (int16_t)RELOC_LO16(33, 0X2EBC));
    // 0x0800185C: lui         $t3, 0x800
    ctx->r11 = S32(RELOC_HI16(33, 0X2EBE) << 16);
    // 0x08001860: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x08001864: lh          $t3, 0x2EBE($t3)
    ctx->r11 = MEM_H(ctx->r11, (int16_t)RELOC_LO16(33, 0X2EBE));
    // 0x08001868: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x0800186C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08001870: subu        $v0, $v1, $t1
    ctx->r2 = SUB32(ctx->r3, ctx->r9);
    // 0x08001874: slti        $at, $v0, -0xB
    ctx->r1 = SIGNED(ctx->r2) < -0XB ? 1 : 0;
    // 0x08001878: bne         $at, $zero, L_080018AC
    if (ctx->r1 != 0) {
        // 0x0800187C: subu        $a0, $a1, $t3
        ctx->r4 = SUB32(ctx->r5, ctx->r11);
            goto L_080018AC;
    }
    // 0x0800187C: subu        $a0, $a1, $t3
    ctx->r4 = SUB32(ctx->r5, ctx->r11);
    // 0x08001880: slti        $at, $v0, 0xC
    ctx->r1 = SIGNED(ctx->r2) < 0XC ? 1 : 0;
    // 0x08001884: beq         $at, $zero, L_080018AC
    if (ctx->r1 == 0) {
        // 0x08001888: slti        $at, $a0, 0xD
        ctx->r1 = SIGNED(ctx->r4) < 0XD ? 1 : 0;
            goto L_080018AC;
    }
    // 0x08001888: slti        $at, $a0, 0xD
    ctx->r1 = SIGNED(ctx->r4) < 0XD ? 1 : 0;
    // 0x0800188C: bne         $at, $zero, L_080018AC
    if (ctx->r1 != 0) {
        // 0x08001890: nop
    
            goto L_080018AC;
    }
    // 0x08001890: nop

    // 0x08001894: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x08001898: nop

    // 0x0800189C: bc1f        L_080018AC
    if (!c1cs) {
        // 0x080018A0: nop
    
            goto L_080018AC;
    }
    // 0x080018A0: nop

    // 0x080018A4: b           L_08001948
    // 0x080018A8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_08001948;
    // 0x080018A8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_080018AC:
    // 0x080018AC: lui         $t4, 0x800
    ctx->r12 = S32(RELOC_HI16(33, 0X2EC0) << 16);
    // 0x080018B0: lh          $t4, 0x2EC0($t4)
    ctx->r12 = MEM_H(ctx->r12, (int16_t)RELOC_LO16(33, 0X2EC0));
    // 0x080018B4: lui         $t5, 0x800
    ctx->r13 = S32(RELOC_HI16(33, 0X2EC2) << 16);
    // 0x080018B8: lh          $t5, 0x2EC2($t5)
    ctx->r13 = MEM_H(ctx->r13, (int16_t)RELOC_LO16(33, 0X2EC2));
    // 0x080018BC: subu        $v0, $v1, $t4
    ctx->r2 = SUB32(ctx->r3, ctx->r12);
    // 0x080018C0: slti        $at, $v0, -0xB
    ctx->r1 = SIGNED(ctx->r2) < -0XB ? 1 : 0;
    // 0x080018C4: bne         $at, $zero, L_080018F8
    if (ctx->r1 != 0) {
        // 0x080018C8: subu        $a0, $a1, $t5
        ctx->r4 = SUB32(ctx->r5, ctx->r13);
            goto L_080018F8;
    }
    // 0x080018C8: subu        $a0, $a1, $t5
    ctx->r4 = SUB32(ctx->r5, ctx->r13);
    // 0x080018CC: slti        $at, $v0, 0xC
    ctx->r1 = SIGNED(ctx->r2) < 0XC ? 1 : 0;
    // 0x080018D0: beq         $at, $zero, L_080018F8
    if (ctx->r1 == 0) {
        // 0x080018D4: slti        $at, $a0, 0xD
        ctx->r1 = SIGNED(ctx->r4) < 0XD ? 1 : 0;
            goto L_080018F8;
    }
    // 0x080018D4: slti        $at, $a0, 0xD
    ctx->r1 = SIGNED(ctx->r4) < 0XD ? 1 : 0;
    // 0x080018D8: bne         $at, $zero, L_080018F8
    if (ctx->r1 != 0) {
        // 0x080018DC: nop
    
            goto L_080018F8;
    }
    // 0x080018DC: nop

    // 0x080018E0: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x080018E4: nop

    // 0x080018E8: bc1f        L_080018F8
    if (!c1cs) {
        // 0x080018EC: nop
    
            goto L_080018F8;
    }
    // 0x080018EC: nop

    // 0x080018F0: b           L_08001948
    // 0x080018F4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_08001948;
    // 0x080018F4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_080018F8:
    // 0x080018F8: lui         $t6, 0x800
    ctx->r14 = S32(RELOC_HI16(33, 0X2EC4) << 16);
    // 0x080018FC: lh          $t6, 0x2EC4($t6)
    ctx->r14 = MEM_H(ctx->r14, (int16_t)RELOC_LO16(33, 0X2EC4));
    // 0x08001900: lui         $t7, 0x800
    ctx->r15 = S32(RELOC_HI16(33, 0X2EC6) << 16);
    // 0x08001904: lh          $t7, 0x2EC6($t7)
    ctx->r15 = MEM_H(ctx->r15, (int16_t)RELOC_LO16(33, 0X2EC6));
    // 0x08001908: subu        $v0, $v1, $t6
    ctx->r2 = SUB32(ctx->r3, ctx->r14);
    // 0x0800190C: slti        $at, $v0, -0xB
    ctx->r1 = SIGNED(ctx->r2) < -0XB ? 1 : 0;
    // 0x08001910: bne         $at, $zero, L_08001944
    if (ctx->r1 != 0) {
        // 0x08001914: subu        $a0, $a1, $t7
        ctx->r4 = SUB32(ctx->r5, ctx->r15);
            goto L_08001944;
    }
    // 0x08001914: subu        $a0, $a1, $t7
    ctx->r4 = SUB32(ctx->r5, ctx->r15);
    // 0x08001918: slti        $at, $v0, 0xC
    ctx->r1 = SIGNED(ctx->r2) < 0XC ? 1 : 0;
    // 0x0800191C: beq         $at, $zero, L_08001944
    if (ctx->r1 == 0) {
        // 0x08001920: slti        $at, $a0, 0xD
        ctx->r1 = SIGNED(ctx->r4) < 0XD ? 1 : 0;
            goto L_08001944;
    }
    // 0x08001920: slti        $at, $a0, 0xD
    ctx->r1 = SIGNED(ctx->r4) < 0XD ? 1 : 0;
    // 0x08001924: bnel        $at, $zero, L_08001948
    if (ctx->r1 != 0) {
        // 0x08001928: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_08001948;
    }
    goto skip_2;
    // 0x08001928: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_2:
    // 0x0800192C: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x08001930: nop

    // 0x08001934: bc1fl       L_08001948
    if (!c1cs) {
        // 0x08001938: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_08001948;
    }
    goto skip_3;
    // 0x08001938: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_3:
    // 0x0800193C: b           L_08001948
    // 0x08001940: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_08001948;
    // 0x08001940: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_08001944:
    // 0x08001944: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_08001948:
    // 0x08001948: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    // 0x0800194C: jr          $ra
    // 0x08001950: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    TRACE_RETURN()
    return;
    // 0x08001950: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_08001770_6F1980(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001770: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001774: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001778: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800177C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001780: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08001784: jalr        $t9
    // 0x08001788: ori         $a0, $zero, 0x8251
    ctx->r4 = 0 | 0X8251;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001788: ori         $a0, $zero, 0x8251
    ctx->r4 = 0 | 0X8251;
    after_0:
    // 0x0800178C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x08001790: sb          $zero, 0xD5($t6)
    MEM_B(0XD5, ctx->r14) = 0;
    // 0x08001794: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001798: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800179C: jr          $ra
    // 0x080017A0: nop

    TRACE_RETURN()
    return;
    // 0x080017A0: nop

;}
RECOMP_FUNC void func_080022F0_6F57D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080022F0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x080022F4: jr          $ra
    // 0x080022F8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x080022F8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08003F54_6F7434(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003F54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003F58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003F5C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08003F60: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08003F64: lhu         $t6, 0xDA($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XDA);
    // 0x08003F68: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08003F6C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x08003F70: beq         $t6, $zero, L_08003FC8
    if (ctx->r14 == 0) {
        // 0x08003F74: addiu       $v0, $v0, -0x33D0
        ctx->r2 = ADD32(ctx->r2, -0X33D0);
            goto L_08003FC8;
    }
    // 0x08003F74: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x08003F78: lw          $t7, 0xD4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XD4);
    // 0x08003F7C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08003F80: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08003F84: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x08003F88: sw          $t8, 0xD4($v0)
    MEM_W(0XD4, ctx->r2) = ctx->r24;
    // 0x08003F8C: addiu       $a0, $zero, 0x124
    ctx->r4 = ADD32(0, 0X124);
    // 0x08003F90: jalr        $t9
    // 0x08003F94: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003F94: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x08003F98: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x08003F9C: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08003FA0: addiu       $t9, $t9, -0x4DC0
    ctx->r25 = ADD32(ctx->r25, -0X4DC0);
    // 0x08003FA4: lw          $t0, 0x60($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X60);
    // 0x08003FA8: ori         $t1, $t0, 0x1
    ctx->r9 = ctx->r8 | 0X1;
    // 0x08003FAC: jalr        $t9
    // 0x08003FB0: sw          $t1, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003FB0: sw          $t1, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->r9;
    after_1:
    // 0x08003FB4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003FB8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003FBC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X2254) << 16);
    // 0x08003FC0: jalr        $t9
    // 0x08003FC4: addiu       $a0, $a0, 0x2254
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X2254));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003FC4: addiu       $a0, $a0, 0x2254
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X2254));
    after_2:
L_08003FC8:
    // 0x08003FC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08003FCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08003FD0: jr          $ra
    // 0x08003FD4: nop

    TRACE_RETURN()
    return;
    // 0x08003FD4: nop

;}
RECOMP_FUNC void func_080067DC_6F9CBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080067DC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x080067E0: jr          $ra
    // 0x080067E4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x080067E4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_0800552C_6F8A0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800552C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08005530: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08005534: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08005538: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0800553C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08005540: addiu       $t9, $t9, 0x2940
    ctx->r25 = ADD32(ctx->r25, 0X2940);
    // 0x08005544: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08005548: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0800554C: lw          $a0, -0x3344($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3344);
    // 0x08005550: jalr        $t9
    // 0x08005554: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08005554: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x08005558: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0800555C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08005560: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08005564: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x08005568: beq         $v0, $zero, L_080055D8
    if (ctx->r2 == 0) {
        // 0x0800556C: sw          $v0, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r2;
            goto L_080055D8;
    }
    // 0x0800556C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x08005570: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08005574: addiu       $t9, $t9, 0x2938
    ctx->r25 = ADD32(ctx->r25, 0X2938);
    // 0x08005578: jalr        $t9
    // 0x0800557C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800557C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x08005580: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08005584: addiu       $t9, $t9, 0x1F70
    ctx->r25 = ADD32(ctx->r25, 0X1F70);
    // 0x08005588: jalr        $t9
    // 0x0800558C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800558C: nop

    after_2:
    // 0x08005590: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08005594: addiu       $t9, $t9, 0x1EBC
    ctx->r25 = ADD32(ctx->r25, 0X1EBC);
    // 0x08005598: jalr        $t9
    // 0x0800559C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800559C: nop

    after_3:
    // 0x080055A0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080055A4: addiu       $t9, $t9, 0x1B60
    ctx->r25 = ADD32(ctx->r25, 0X1B60);
    // 0x080055A8: jalr        $t9
    // 0x080055AC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080055AC: nop

    after_4:
    // 0x080055B0: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x080055B4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080055B8: addiu       $t6, $zero, 0x5A
    ctx->r14 = ADD32(0, 0X5A);
    // 0x080055BC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080055C0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X5654) << 16);
    // 0x080055C4: addiu       $a0, $a0, 0x5654
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X5654));
    // 0x080055C8: jalr        $t9
    // 0x080055CC: sh          $t6, 0x8A($t7)
    MEM_H(0X8A, ctx->r15) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080055CC: sh          $t6, 0x8A($t7)
    MEM_H(0X8A, ctx->r15) = ctx->r14;
    after_5:
    // 0x080055D0: b           L_080055E8
    // 0x080055D4: addiu       $a1, $zero, 0xB00
    ctx->r5 = ADD32(0, 0XB00);
        goto L_080055E8;
    // 0x080055D4: addiu       $a1, $zero, 0xB00
    ctx->r5 = ADD32(0, 0XB00);
L_080055D8:
    // 0x080055D8: jalr        $t9
    // 0x080055DC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080055DC: nop

    after_6:
    // 0x080055E0: b           L_08005644
    // 0x080055E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08005644;
    // 0x080055E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080055E8:
    // 0x080055E8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080055EC: addiu       $t9, $t9, 0x2500
    ctx->r25 = ADD32(ctx->r25, 0X2500);
    // 0x080055F0: jalr        $t9
    // 0x080055F4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080055F4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_7:
    // 0x080055F8: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x080055FC: addiu       $v0, $v0, -0x3410
    ctx->r2 = ADD32(ctx->r2, -0X3410);
    // 0x08005600: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08005604: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x08005608: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x0800560C: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
    // 0x08005610: lw          $a3, 0x8($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X8);
    // 0x08005614: jalr        $t9
    // 0x08005618: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08005618: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_8:
    // 0x0800561C: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x08005620: addiu       $v0, $v0, -0x3410
    ctx->r2 = ADD32(ctx->r2, -0X3410);
    // 0x08005624: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08005628: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x0800562C: lw          $a1, 0xC($v0)
    ctx->r5 = MEM_W(ctx->r2, 0XC);
    // 0x08005630: lw          $a2, 0x10($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X10);
    // 0x08005634: lw          $a3, 0x14($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X14);
    // 0x08005638: jalr        $t9
    // 0x0800563C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x0800563C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_9:
    // 0x08005640: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08005644:
    // 0x08005644: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08005648: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x0800564C: jr          $ra
    // 0x08005650: nop

    TRACE_RETURN()
    return;
    // 0x08005650: nop

;}
RECOMP_FUNC void func_080045D4_6F7AB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080045D4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080045D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080045DC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080045E0: lbu         $v0, 0xD0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD0);
    // 0x080045E4: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x080045E8: ori         $t6, $t6, 0x6E0
    ctx->r14 = ctx->r14 | 0X6E0;
    // 0x080045EC: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x080045F0: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x080045F4: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x080045F8: bne         $v0, $zero, L_08004644
    if (ctx->r2 != 0) {
        // 0x080045FC: sw          $t7, 0x64($a0)
        MEM_W(0X64, ctx->r4) = ctx->r15;
            goto L_08004644;
    }
    // 0x080045FC: sw          $t7, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r15;
    // 0x08004600: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7C84) << 16);
    // 0x08004604: lwc1        $f0, 0x7C84($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7C84));
    // 0x08004608: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800460C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08004610: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x08004614: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08004618: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x0800461C: jalr        $t9
    // 0x08004620: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004620: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x08004624: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7C88) << 16);
    // 0x08004628: lwc1        $f0, 0x7C88($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7C88));
    // 0x0800462C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08004630: sb          $zero, 0x6C($a0)
    MEM_B(0X6C, ctx->r4) = 0;
    // 0x08004634: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x08004638: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x0800463C: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x08004640: lbu         $v0, 0xD0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD0);
L_08004644:
    // 0x08004644: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7C8C) << 16);
    // 0x08004648: lwc1        $f0, 0x7C8C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7C8C));
    // 0x0800464C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08004650: bne         $v0, $at, L_080046A0
    if (ctx->r2 != ctx->r1) {
        // 0x08004654: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_080046A0;
    }
    // 0x08004654: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08004658: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800465C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08004660: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x08004664: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08004668: jalr        $t9
    // 0x0800466C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800466C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_1:
    // 0x08004670: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7C90) << 16);
    // 0x08004674: lwc1        $f0, 0x7C90($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7C90));
    // 0x08004678: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x0800467C: lui         $t8, 0x8023
    ctx->r24 = S32(0X8023 << 16);
    // 0x08004680: addiu       $t8, $t8, 0x7B58
    ctx->r24 = ADD32(ctx->r24, 0X7B58);
    // 0x08004684: sb          $zero, 0x6C($a0)
    MEM_B(0X6C, ctx->r4) = 0;
    // 0x08004688: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x0800468C: or          $t0, $t8, $at
    ctx->r8 = ctx->r24 | ctx->r1;
    // 0x08004690: sw          $t0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r8;
    // 0x08004694: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x08004698: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x0800469C: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
L_080046A0:
    // 0x080046A0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080046A4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080046A8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X46C8) << 16);
    // 0x080046AC: jalr        $t9
    // 0x080046B0: addiu       $a0, $a0, 0x46C8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X46C8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080046B0: addiu       $a0, $a0, 0x46C8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X46C8));
    after_2:
    // 0x080046B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080046B8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080046BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080046C0: jr          $ra
    // 0x080046C4: nop

    TRACE_RETURN()
    return;
    // 0x080046C4: nop

;}
RECOMP_FUNC void func_080041C0_6F76A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080041C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080041C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080041C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080041CC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080041D0: lhu         $t6, 0xDA($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XDA);
    // 0x080041D4: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x080041D8: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x080041DC: beq         $t6, $zero, L_08004270
    if (ctx->r14 == 0) {
        // 0x080041E0: addiu       $v1, $v1, -0x33D0
        ctx->r3 = ADD32(ctx->r3, -0X33D0);
            goto L_08004270;
    }
    // 0x080041E0: addiu       $v1, $v1, -0x33D0
    ctx->r3 = ADD32(ctx->r3, -0X33D0);
    // 0x080041E4: lw          $t7, 0xD4($v1)
    ctx->r15 = MEM_W(ctx->r3, 0XD4);
    // 0x080041E8: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080041EC: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x080041F0: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x080041F4: sw          $t8, 0xD4($v1)
    MEM_W(0XD4, ctx->r3) = ctx->r24;
    // 0x080041F8: lbu         $v0, 0xD0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD0);
    // 0x080041FC: addiu       $a0, $zero, 0x224
    ctx->r4 = ADD32(0, 0X224);
    // 0x08004200: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08004204: beq         $v0, $zero, L_08004214
    if (ctx->r2 == 0) {
        // 0x08004208: nop
    
            goto L_08004214;
    }
    // 0x08004208: nop

    // 0x0800420C: bne         $v0, $at, L_08004224
    if (ctx->r2 != ctx->r1) {
        // 0x08004210: nop
    
            goto L_08004224;
    }
    // 0x08004210: nop

L_08004214:
    // 0x08004214: jalr        $t9
    // 0x08004218: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004218: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x0800421C: b           L_0800423C
    // 0x08004220: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
        goto L_0800423C;
    // 0x08004220: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
L_08004224:
    // 0x08004224: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08004228: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x0800422C: addiu       $a0, $zero, 0x15E
    ctx->r4 = ADD32(0, 0X15E);
    // 0x08004230: jalr        $t9
    // 0x08004234: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004234: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_1:
    // 0x08004238: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
L_0800423C:
    // 0x0800423C: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08004240: addiu       $t9, $t9, -0x4DC0
    ctx->r25 = ADD32(ctx->r25, -0X4DC0);
    // 0x08004244: jalr        $t9
    // 0x08004248: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08004248: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_2:
    // 0x0800424C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x08004250: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004254: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08004258: lw          $t0, 0x60($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X60);
    // 0x0800425C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X2254) << 16);
    // 0x08004260: addiu       $a0, $a0, 0x2254
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X2254));
    // 0x08004264: ori         $t1, $t0, 0x1
    ctx->r9 = ctx->r8 | 0X1;
    // 0x08004268: jalr        $t9
    // 0x0800426C: sw          $t1, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800426C: sw          $t1, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->r9;
    after_3:
L_08004270:
    // 0x08004270: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08004274: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08004278: jr          $ra
    // 0x0800427C: nop

    TRACE_RETURN()
    return;
    // 0x0800427C: nop

;}
RECOMP_FUNC void func_08005654_6F8B34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08005654: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x08005658: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0800565C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08005660: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08005664: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x08005668: lh          $t8, 0xCC($s0)
    ctx->r24 = MEM_H(ctx->r16, 0XCC);
    // 0x0800566C: lh          $t7, 0xCA($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XCA);
    // 0x08005670: lh          $t6, 0xC8($s0)
    ctx->r14 = MEM_H(ctx->r16, 0XC8);
    // 0x08005674: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x08005678: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x0800567C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x08005680: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x08005684: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08005688: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x0800568C: lw          $a0, 0xD0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XD0);
    // 0x08005690: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x08005694: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x08005698: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x0800569C: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x080056A0: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x080056A4: jalr        $t9
    // 0x080056A8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080056A8: nop

    after_0:
    // 0x080056AC: addiu       $v0, $s0, 0xD0
    ctx->r2 = ADD32(ctx->r16, 0XD0);
    // 0x080056B0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080056B4: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x080056B8: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x080056BC: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x080056C0: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x080056C4: jalr        $t9
    // 0x080056C8: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080056C8: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_1:
    // 0x080056CC: lhu         $v0, 0x8A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8A);
    // 0x080056D0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080056D4: addiu       $t9, $t9, 0x1BB4
    ctx->r25 = ADD32(ctx->r25, 0X1BB4);
    // 0x080056D8: addiu       $t0, $v0, -0x1
    ctx->r8 = ADD32(ctx->r2, -0X1);
    // 0x080056DC: bne         $v0, $zero, L_08005740
    if (ctx->r2 != 0) {
        // 0x080056E0: sh          $t0, 0x8A($s0)
        MEM_H(0X8A, ctx->r16) = ctx->r8;
            goto L_08005740;
    }
    // 0x080056E0: sh          $t0, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r8;
    // 0x080056E4: jalr        $t9
    // 0x080056E8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080056E8: nop

    after_2:
    // 0x080056EC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080056F0: addiu       $t9, $t9, 0x1FB0
    ctx->r25 = ADD32(ctx->r25, 0X1FB0);
    // 0x080056F4: jalr        $t9
    // 0x080056F8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080056F8: nop

    after_3:
    // 0x080056FC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08005700: addiu       $t9, $t9, 0x1ED4
    ctx->r25 = ADD32(ctx->r25, 0X1ED4);
    // 0x08005704: jalr        $t9
    // 0x08005708: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08005708: nop

    after_4:
    // 0x0800570C: lui         $t2, 0x8020
    ctx->r10 = S32(0X8020 << 16);
    // 0x08005710: lw          $t2, -0x39DC($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X39DC);
    // 0x08005714: addiu       $t1, $zero, 0x1E
    ctx->r9 = ADD32(0, 0X1E);
    // 0x08005718: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800571C: sb          $t1, 0xD0($t2)
    MEM_B(0XD0, ctx->r10) = ctx->r9;
    // 0x08005720: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x08005724: addiu       $t9, $t9, 0x2304
    ctx->r25 = ADD32(ctx->r25, 0X2304);
    // 0x08005728: jalr        $t9
    // 0x0800572C: lw          $a0, 0x0($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x0800572C: lw          $a0, 0x0($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X0);
    after_5:
    // 0x08005730: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08005734: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08005738: jalr        $t9
    // 0x0800573C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x0800573C: nop

    after_6:
L_08005740:
    // 0x08005740: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08005744: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08005748: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x0800574C: jr          $ra
    // 0x08005750: nop

    TRACE_RETURN()
    return;
    // 0x08005750: nop

;}
RECOMP_FUNC void func_080016AC_6F4B8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080016AC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x080016B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080016B4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x080016B8: lw          $t6, 0xE0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XE0);
    // 0x080016BC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080016C0: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x080016C4: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x080016C8: lw          $v1, 0xDC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XDC);
    // 0x080016CC: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x080016D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080016D4: lw          $v0, 0x18($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X18);
    // 0x080016D8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x080016DC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x080016E0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x080016E4: jalr        $t9
    // 0x080016E8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080016E8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_0:
    // 0x080016EC: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x080016F0: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x080016F4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X1758) << 16);
    // 0x080016F8: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x080016FC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001700: addiu       $t2, $zero, 0x14
    ctx->r10 = ADD32(0, 0X14);
    // 0x08001704: swc1        $f4, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f4.u32l;
    // 0x08001708: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x0800170C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001710: addiu       $a0, $a0, 0x1758
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X1758));
    // 0x08001714: swc1        $f6, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f6.u32l;
    // 0x08001718: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x0800171C: swc1        $f8, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f8.u32l;
    // 0x08001720: lhu         $t7, 0x16($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X16);
    // 0x08001724: sh          $t7, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r15;
    // 0x08001728: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x0800172C: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x08001730: lw          $t0, 0xEC($t8)
    ctx->r8 = MEM_W(ctx->r24, 0XEC);
    // 0x08001734: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x08001738: beql        $t1, $zero, L_0800174C
    if (ctx->r9 == 0) {
        // 0x0800173C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_0800174C;
    }
    goto skip_0;
    // 0x0800173C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x08001740: jalr        $t9
    // 0x08001744: sh          $t2, 0x8A($t3)
    MEM_H(0X8A, ctx->r11) = ctx->r10;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001744: sh          $t2, 0x8A($t3)
    MEM_H(0X8A, ctx->r11) = ctx->r10;
    after_1:
    // 0x08001748: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_0800174C:
    // 0x0800174C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x08001750: jr          $ra
    // 0x08001754: nop

    TRACE_RETURN()
    return;
    // 0x08001754: nop

;}
RECOMP_FUNC void func_08002350_6F5830(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002350: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08002354: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08002358: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x0800235C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002360: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08002364: addiu       $t9, $t9, -0x2218
    ctx->r25 = ADD32(ctx->r25, -0X2218);
    // 0x08002368: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(34, 0X2674) << 16);
    // 0x0800236C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x08002370: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x08002374: addiu       $a1, $a1, 0x2674
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(34, 0X2674));
    // 0x08002378: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x0800237C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08002380: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x08002384: jalr        $t9
    // 0x08002388: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002388: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x0800238C: beq         $v0, $zero, L_080023C0
    if (ctx->r2 == 0) {
        // 0x08002390: addiu       $t6, $zero, 0x2B
        ctx->r14 = ADD32(0, 0X2B);
            goto L_080023C0;
    }
    // 0x08002390: addiu       $t6, $zero, 0x2B
    ctx->r14 = ADD32(0, 0X2B);
    // 0x08002394: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002398: sh          $t6, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r14;
    // 0x0800239C: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080023A0: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x080023A4: jalr        $t9
    // 0x080023A8: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080023A8: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    after_1:
    // 0x080023AC: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x080023B0: lw          $t7, 0xE8($v1)
    ctx->r15 = MEM_W(ctx->r3, 0XE8);
    // 0x080023B4: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x080023B8: ori         $t8, $t7, 0x8
    ctx->r24 = ctx->r15 | 0X8;
    // 0x080023BC: sw          $t8, 0xE8($v1)
    MEM_W(0XE8, ctx->r3) = ctx->r24;
L_080023C0:
    // 0x080023C0: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x080023C4: lw          $t0, 0x60($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X60);
    // 0x080023C8: andi        $t1, $t0, 0x20
    ctx->r9 = ctx->r8 & 0X20;
    // 0x080023CC: sw          $t1, 0x60($v0)
    MEM_W(0X60, ctx->r2) = ctx->r9;
    // 0x080023D0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x080023D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x080023D8: jr          $ra
    // 0x080023DC: nop

    TRACE_RETURN()
    return;
    // 0x080023DC: nop

;}
RECOMP_FUNC void func_08003E30_6F7310(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003E30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003E34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003E38: lbu         $t6, 0x7C($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X7C);
    // 0x08003E3C: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x08003E40: ori         $t8, $t8, 0x6E0
    ctx->r24 = ctx->r24 | 0X6E0;
    // 0x08003E44: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x08003E48: beq         $t7, $zero, L_08003E80
    if (ctx->r15 == 0) {
        // 0x08003E4C: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_08003E80;
    }
    // 0x08003E4C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08003E50: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08003E54: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08003E58: lui         $a2, 0x3DCC
    ctx->r6 = S32(0X3DCC << 16);
    // 0x08003E5C: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
    // 0x08003E60: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x08003E64: jalr        $t9
    // 0x08003E68: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003E68: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08003E6C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003E70: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003E74: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X3E90) << 16);
    // 0x08003E78: jalr        $t9
    // 0x08003E7C: addiu       $a0, $a0, 0x3E90
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X3E90));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003E7C: addiu       $a0, $a0, 0x3E90
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X3E90));
    after_1:
L_08003E80:
    // 0x08003E80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08003E84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08003E88: jr          $ra
    // 0x08003E8C: nop

    TRACE_RETURN()
    return;
    // 0x08003E8C: nop

;}
RECOMP_FUNC void func_0800398C_6F6E6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800398C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003990: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003994: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08003998: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x0800399C: lhu         $t6, 0xDA($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XDA);
    // 0x080039A0: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x080039A4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x080039A8: beq         $t6, $zero, L_08003A04
    if (ctx->r14 == 0) {
        // 0x080039AC: addiu       $v0, $v0, -0x33D0
        ctx->r2 = ADD32(ctx->r2, -0X33D0);
            goto L_08003A04;
    }
    // 0x080039AC: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x080039B0: lw          $t7, 0xD4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XD4);
    // 0x080039B4: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080039B8: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x080039BC: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x080039C0: sw          $t8, 0xD4($v0)
    MEM_W(0XD4, ctx->r2) = ctx->r24;
    // 0x080039C4: addiu       $a0, $zero, 0x224
    ctx->r4 = ADD32(0, 0X224);
    // 0x080039C8: jalr        $t9
    // 0x080039CC: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080039CC: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x080039D0: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x080039D4: addiu       $t9, $t9, -0x4DC0
    ctx->r25 = ADD32(ctx->r25, -0X4DC0);
    // 0x080039D8: jalr        $t9
    // 0x080039DC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080039DC: nop

    after_1:
    // 0x080039E0: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x080039E4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080039E8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080039EC: lw          $t0, 0x60($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X60);
    // 0x080039F0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X2254) << 16);
    // 0x080039F4: addiu       $a0, $a0, 0x2254
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X2254));
    // 0x080039F8: ori         $t1, $t0, 0x1
    ctx->r9 = ctx->r8 | 0X1;
    // 0x080039FC: jalr        $t9
    // 0x08003A00: sw          $t1, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003A00: sw          $t1, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->r9;
    after_2:
L_08003A04:
    // 0x08003A04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08003A08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08003A0C: jr          $ra
    // 0x08003A10: nop

    TRACE_RETURN()
    return;
    // 0x08003A10: nop

;}
RECOMP_FUNC void func_080001BC_6F369C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080001BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080001C0: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080001C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080001C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080001CC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080001D0: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x080001D4: jalr        $t9
    // 0x080001D8: lhu         $a0, 0xD4($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XD4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080001D8: lhu         $a0, 0xD4($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XD4);
    after_0:
    // 0x080001DC: beq         $v0, $zero, L_080001FC
    if (ctx->r2 == 0) {
        // 0x080001E0: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(34, 0X21C) << 16);
            goto L_080001FC;
    }
    // 0x080001E0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X21C) << 16);
    // 0x080001E4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080001E8: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x080001EC: jalr        $t9
    // 0x080001F0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080001F0: nop

    after_1:
    // 0x080001F4: b           L_08000210
    // 0x080001F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08000210;
    // 0x080001F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080001FC:
    // 0x080001FC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000200: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000204: jalr        $t9
    // 0x08000208: addiu       $a0, $a0, 0x21C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X21C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000208: addiu       $a0, $a0, 0x21C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X21C));
    after_2:
    // 0x0800020C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000210:
    // 0x08000210: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000214: jr          $ra
    // 0x08000218: nop

    TRACE_RETURN()
    return;
    // 0x08000218: nop

;}
RECOMP_FUNC void func_0800437C_6F785C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800437C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08004380: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08004384: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x08004388: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x0800438C: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x08004390: lbu         $v0, 0xD0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD0);
    // 0x08004394: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x08004398: ori         $t6, $t6, 0x6E0
    ctx->r14 = ctx->r14 | 0X6E0;
    // 0x0800439C: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x080043A0: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x080043A4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x080043A8: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x080043AC: bne         $v0, $zero, L_080043EC
    if (ctx->r2 != 0) {
        // 0x080043B0: sw          $t7, 0x64($a0)
        MEM_W(0X64, ctx->r4) = ctx->r15;
            goto L_080043EC;
    }
    // 0x080043B0: sw          $t7, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r15;
    // 0x080043B4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080043B8: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080043BC: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x080043C0: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x080043C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080043C8: jalr        $t9
    // 0x080043CC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080043CC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x080043D0: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7C70) << 16);
    // 0x080043D4: lwc1        $f20, 0x7C70($at)
    ctx->f20.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7C70));
    // 0x080043D8: sb          $zero, 0x6C($s1)
    MEM_B(0X6C, ctx->r17) = 0;
    // 0x080043DC: swc1        $f20, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f20.u32l;
    // 0x080043E0: swc1        $f20, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f20.u32l;
    // 0x080043E4: b           L_080044F8
    // 0x080043E8: swc1        $f20, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f20.u32l;
        goto L_080044F8;
    // 0x080043E8: swc1        $f20, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f20.u32l;
L_080043EC:
    // 0x080043EC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x080043F0: bne         $v0, $at, L_08004430
    if (ctx->r2 != ctx->r1) {
        // 0x080043F4: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_08004430;
    }
    // 0x080043F4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080043F8: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7C74) << 16);
    // 0x080043FC: lwc1        $f20, 0x7C74($at)
    ctx->f20.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7C74));
    // 0x08004400: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08004404: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08004408: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x0800440C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08004410: jalr        $t9
    // 0x08004414: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004414: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x08004418: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x0800441C: sb          $t8, 0x6C($s1)
    MEM_B(0X6C, ctx->r17) = ctx->r24;
    // 0x08004420: swc1        $f20, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f20.u32l;
    // 0x08004424: swc1        $f20, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f20.u32l;
    // 0x08004428: b           L_080044F8
    // 0x0800442C: swc1        $f20, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f20.u32l;
        goto L_080044F8;
    // 0x0800442C: swc1        $f20, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f20.u32l;
L_08004430:
    // 0x08004430: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08004434: bne         $v0, $at, L_08004474
    if (ctx->r2 != ctx->r1) {
        // 0x08004438: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_08004474;
    }
    // 0x08004438: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x0800443C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7C78) << 16);
    // 0x08004440: lwc1        $f20, 0x7C78($at)
    ctx->f20.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7C78));
    // 0x08004444: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08004448: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x0800444C: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x08004450: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08004454: jalr        $t9
    // 0x08004458: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08004458: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x0800445C: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x08004460: sb          $t0, 0x6C($s1)
    MEM_B(0X6C, ctx->r17) = ctx->r8;
    // 0x08004464: swc1        $f20, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f20.u32l;
    // 0x08004468: swc1        $f20, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f20.u32l;
    // 0x0800446C: b           L_080044F8
    // 0x08004470: swc1        $f20, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f20.u32l;
        goto L_080044F8;
    // 0x08004470: swc1        $f20, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f20.u32l;
L_08004474:
    // 0x08004474: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x08004478: bne         $v0, $at, L_080044B8
    if (ctx->r2 != ctx->r1) {
        // 0x0800447C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_080044B8;
    }
    // 0x0800447C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08004480: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7C7C) << 16);
    // 0x08004484: lwc1        $f20, 0x7C7C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7C7C));
    // 0x08004488: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800448C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08004490: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x08004494: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x08004498: jalr        $t9
    // 0x0800449C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800449C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x080044A0: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x080044A4: sb          $t1, 0x6C($s1)
    MEM_B(0X6C, ctx->r17) = ctx->r9;
    // 0x080044A8: swc1        $f20, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f20.u32l;
    // 0x080044AC: swc1        $f20, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f20.u32l;
    // 0x080044B0: b           L_080044F8
    // 0x080044B4: swc1        $f20, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f20.u32l;
        goto L_080044F8;
    // 0x080044B4: swc1        $f20, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f20.u32l;
L_080044B8:
    // 0x080044B8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x080044BC: bne         $v0, $at, L_080044F8
    if (ctx->r2 != ctx->r1) {
        // 0x080044C0: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_080044F8;
    }
    // 0x080044C0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080044C4: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7C80) << 16);
    // 0x080044C8: lwc1        $f20, 0x7C80($at)
    ctx->f20.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7C80));
    // 0x080044CC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080044D0: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080044D4: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x080044D8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x080044DC: jalr        $t9
    // 0x080044E0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080044E0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x080044E4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x080044E8: sb          $t2, 0x6C($s1)
    MEM_B(0X6C, ctx->r17) = ctx->r10;
    // 0x080044EC: swc1        $f20, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f20.u32l;
    // 0x080044F0: swc1        $f20, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f20.u32l;
    // 0x080044F4: swc1        $f20, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f20.u32l;
L_080044F8:
    // 0x080044F8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080044FC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08004500: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X4524) << 16);
    // 0x08004504: jalr        $t9
    // 0x08004508: addiu       $a0, $a0, 0x4524
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X4524));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08004508: addiu       $a0, $a0, 0x4524
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X4524));
    after_5:
    // 0x0800450C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08004510: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x08004514: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x08004518: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x0800451C: jr          $ra
    // 0x08004520: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x08004520: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_080015B0_6F4A90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080015B0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x080015B4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080015B8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080015BC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x080015C0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x080015C4: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x080015C8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080015CC: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x080015D0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x080015D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080015D8: jalr        $t9
    // 0x080015DC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080015DC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x080015E0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x080015E4: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x080015E8: or          $t6, $v0, $at
    ctx->r14 = ctx->r2 | ctx->r1;
    // 0x080015EC: sw          $t6, 0x30($t7)
    MEM_W(0X30, ctx->r15) = ctx->r14;
    // 0x080015F0: lui         $t8, 0x20
    ctx->r24 = S32(0X20 << 16);
    // 0x080015F4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080015F8: ori         $t8, $t8, 0x6E1
    ctx->r24 = ctx->r24 | 0X6E1;
    // 0x080015FC: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x08001600: addiu       $t1, $zero, 0x194
    ctx->r9 = ADD32(0, 0X194);
    // 0x08001604: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x08001608: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x0800160C: sw          $t8, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r24;
    // 0x08001610: sw          $t0, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r8;
    // 0x08001614: sh          $t1, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r9;
    // 0x08001618: sh          $t2, 0x96($s0)
    MEM_H(0X96, ctx->r16) = ctx->r10;
    // 0x0800161C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001620: jalr        $t9
    // 0x08001624: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001624: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x08001628: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800162C: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08001630: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001634: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001638: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x0800163C: jalr        $t9
    // 0x08001640: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001640: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x08001644: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001648: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x0800164C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001650: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001654: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08001658: jalr        $t9
    // 0x0800165C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800165C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x08001660: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7BA4) << 16);
    // 0x08001664: lwc1        $f0, 0x7BA4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7BA4));
    // 0x08001668: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x0800166C: lui         $t3, 0x800
    ctx->r11 = S32(RELOC_HI16(34, 0X1758) << 16);
    // 0x08001670: addiu       $t3, $t3, 0x1758
    ctx->r11 = ADD32(ctx->r11, (int16_t)RELOC_LO16(34, 0X1758));
    // 0x08001674: sw          $t3, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->r11;
    // 0x08001678: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800167C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001680: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X16AC) << 16);
    // 0x08001684: addiu       $a0, $a0, 0x16AC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X16AC));
    // 0x08001688: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x0800168C: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x08001690: jalr        $t9
    // 0x08001694: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001694: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    after_4:
    // 0x08001698: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0800169C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x080016A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x080016A4: jr          $ra
    // 0x080016A8: nop

    TRACE_RETURN()
    return;
    // 0x080016A8: nop

;}
RECOMP_FUNC void func_080018E4_6F4DC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080018E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080018E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080018EC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080018F0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x080018F4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x080018F8: sh          $t9, 0x96($a0)
    MEM_H(0X96, ctx->r4) = ctx->r25;
    // 0x080018FC: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x08001900: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001904: ori         $t6, $t6, 0x6E1
    ctx->r14 = ctx->r14 | 0X6E1;
    // 0x08001908: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x0800190C: addiu       $t8, $zero, 0x194
    ctx->r24 = ADD32(0, 0X194);
    // 0x08001910: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x08001914: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08001918: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x0800191C: sw          $t7, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r15;
    // 0x08001920: sh          $t8, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r24;
    // 0x08001924: jalr        $t9
    // 0x08001928: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001928: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x0800192C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001930: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08001934: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001938: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800193C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08001940: jalr        $t9
    // 0x08001944: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001944: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x08001948: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800194C: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x08001950: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001954: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001958: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x0800195C: jalr        $t9
    // 0x08001960: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001960: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x08001964: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7BA8) << 16);
    // 0x08001968: lwc1        $f0, 0x7BA8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7BA8));
    // 0x0800196C: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x08001970: sb          $zero, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = 0;
    // 0x08001974: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001978: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800197C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X19AC) << 16);
    // 0x08001980: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x08001984: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x08001988: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x0800198C: sb          $zero, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = 0;
    // 0x08001990: jalr        $t9
    // 0x08001994: addiu       $a0, $a0, 0x19AC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X19AC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001994: addiu       $a0, $a0, 0x19AC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X19AC));
    after_3:
    // 0x08001998: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0800199C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080019A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080019A4: jr          $ra
    // 0x080019A8: nop

    TRACE_RETURN()
    return;
    // 0x080019A8: nop

;}
RECOMP_FUNC void func_08003A14_6F6EF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003A14: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08003A18: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08003A1C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08003A20: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x08003A24: ori         $t6, $t6, 0x6E1
    ctx->r14 = ctx->r14 | 0X6E1;
    // 0x08003A28: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x08003A2C: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08003A30: sw          $t7, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r15;
    // 0x08003A34: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7C60) << 16);
    // 0x08003A38: lwc1        $f4, 0x7C60($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7C60));
    // 0x08003A3C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7C64) << 16);
    // 0x08003A40: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x08003A44: swc1        $f4, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f4.u32l;
    // 0x08003A48: lwc1        $f6, 0x7C64($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7C64));
    // 0x08003A4C: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x08003A50: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08003A54: swc1        $f6, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f6.u32l;
    // 0x08003A58: lw          $t8, 0x60($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X60);
    // 0x08003A5C: lbu         $v0, 0xD0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD0);
    // 0x08003A60: sb          $t0, 0x6C($a0)
    MEM_B(0X6C, ctx->r4) = ctx->r8;
    // 0x08003A64: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x08003A68: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08003A6C: bne         $v0, $at, L_08003AAC
    if (ctx->r2 != ctx->r1) {
        // 0x08003A70: sw          $t9, 0x60($a0)
        MEM_W(0X60, ctx->r4) = ctx->r25;
            goto L_08003AAC;
    }
    // 0x08003A70: sw          $t9, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r25;
    // 0x08003A74: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08003A78: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08003A7C: lui         $a2, 0x3DCC
    ctx->r6 = S32(0X3DCC << 16);
    // 0x08003A80: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x08003A84: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x08003A88: jalr        $t9
    // 0x08003A8C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003A8C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08003A90: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003A94: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003A98: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X3C90) << 16);
    // 0x08003A9C: jalr        $t9
    // 0x08003AA0: addiu       $a0, $a0, 0x3C90
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X3C90));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003AA0: addiu       $a0, $a0, 0x3C90
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X3C90));
    after_1:
    // 0x08003AA4: b           L_08003BDC
    // 0x08003AA8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08003BDC;
    // 0x08003AA8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08003AAC:
    // 0x08003AAC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08003AB0: bne         $v0, $at, L_08003AF0
    if (ctx->r2 != ctx->r1) {
        // 0x08003AB4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08003AF0;
    }
    // 0x08003AB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003AB8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08003ABC: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08003AC0: lui         $a2, 0x3DCC
    ctx->r6 = S32(0X3DCC << 16);
    // 0x08003AC4: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x08003AC8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x08003ACC: jalr        $t9
    // 0x08003AD0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003AD0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x08003AD4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003AD8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003ADC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X3CC8) << 16);
    // 0x08003AE0: jalr        $t9
    // 0x08003AE4: addiu       $a0, $a0, 0x3CC8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X3CC8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08003AE4: addiu       $a0, $a0, 0x3CC8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X3CC8));
    after_3:
    // 0x08003AE8: b           L_08003BDC
    // 0x08003AEC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08003BDC;
    // 0x08003AEC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08003AF0:
    // 0x08003AF0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x08003AF4: bne         $v0, $at, L_08003BA8
    if (ctx->r2 != ctx->r1) {
        // 0x08003AF8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08003BA8;
    }
    // 0x08003AF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003AFC: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08003B00: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08003B04: jalr        $t9
    // 0x08003B08: addiu       $a0, $zero, 0xA4
    ctx->r4 = ADD32(0, 0XA4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08003B08: addiu       $a0, $zero, 0xA4
    ctx->r4 = ADD32(0, 0XA4);
    after_4:
    // 0x08003B0C: beq         $v0, $zero, L_08003B50
    if (ctx->r2 == 0) {
        // 0x08003B10: lui         $at, 0x100
        ctx->r1 = S32(0X100 << 16);
            goto L_08003B50;
    }
    // 0x08003B10: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x08003B14: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08003B18: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08003B1C: lui         $a2, 0x3DCC
    ctx->r6 = S32(0X3DCC << 16);
    // 0x08003B20: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x08003B24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003B28: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x08003B2C: jalr        $t9
    // 0x08003B30: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08003B30: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x08003B34: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003B38: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003B3C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X3F54) << 16);
    // 0x08003B40: jalr        $t9
    // 0x08003B44: addiu       $a0, $a0, 0x3F54
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X3F54));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08003B44: addiu       $a0, $a0, 0x3F54
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X3F54));
    after_6:
    // 0x08003B48: b           L_08003BDC
    // 0x08003B4C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08003BDC;
    // 0x08003B4C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08003B50:
    // 0x08003B50: lw          $t1, 0x60($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X60);
    // 0x08003B54: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08003B58: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08003B5C: lui         $a2, 0x3DCC
    ctx->r6 = S32(0X3DCC << 16);
    // 0x08003B60: or          $t2, $t1, $at
    ctx->r10 = ctx->r9 | ctx->r1;
    // 0x08003B64: sw          $t2, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r10;
    // 0x08003B68: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x08003B6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003B70: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08003B74: jalr        $t9
    // 0x08003B78: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08003B78: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
    // 0x08003B7C: lw          $t3, 0x60($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X60);
    // 0x08003B80: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x08003B84: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003B88: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003B8C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X3DC8) << 16);
    // 0x08003B90: or          $t4, $t3, $at
    ctx->r12 = ctx->r11 | ctx->r1;
    // 0x08003B94: sw          $t4, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r12;
    // 0x08003B98: jalr        $t9
    // 0x08003B9C: addiu       $a0, $a0, 0x3DC8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X3DC8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08003B9C: addiu       $a0, $a0, 0x3DC8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X3DC8));
    after_8:
    // 0x08003BA0: b           L_08003BDC
    // 0x08003BA4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08003BDC;
    // 0x08003BA4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08003BA8:
    // 0x08003BA8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08003BAC: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08003BB0: lui         $a2, 0x3DCC
    ctx->r6 = S32(0X3DCC << 16);
    // 0x08003BB4: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x08003BB8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x08003BBC: jalr        $t9
    // 0x08003BC0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08003BC0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_9:
    // 0x08003BC4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003BC8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003BCC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X3BEC) << 16);
    // 0x08003BD0: jalr        $t9
    // 0x08003BD4: addiu       $a0, $a0, 0x3BEC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X3BEC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08003BD4: addiu       $a0, $a0, 0x3BEC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X3BEC));
    after_10:
    // 0x08003BD8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08003BDC:
    // 0x08003BDC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08003BE0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08003BE4: jr          $ra
    // 0x08003BE8: nop

    TRACE_RETURN()
    return;
    // 0x08003BE8: nop

;}
RECOMP_FUNC void func_08001758_6F4C38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001758: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x0800175C: lhu         $t6, -0x33D0($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X33D0);
    // 0x08001760: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001764: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001768: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x0800176C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001770: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001774: bgez        $t6, L_08001788
    if (SIGNED(ctx->r14) >= 0) {
        // 0x08001778: andi        $t7, $t6, 0x3
        ctx->r15 = ctx->r14 & 0X3;
            goto L_08001788;
    }
    // 0x08001778: andi        $t7, $t6, 0x3
    ctx->r15 = ctx->r14 & 0X3;
    // 0x0800177C: beq         $t7, $zero, L_08001788
    if (ctx->r15 == 0) {
        // 0x08001780: nop
    
            goto L_08001788;
    }
    // 0x08001780: nop

    // 0x08001784: addiu       $t7, $t7, -0x4
    ctx->r15 = ADD32(ctx->r15, -0X4);
L_08001788:
    // 0x08001788: slti        $at, $t7, 0x2
    ctx->r1 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
    // 0x0800178C: beq         $at, $zero, L_080017A8
    if (ctx->r1 == 0) {
        // 0x08001790: addiu       $t3, $zero, 0xF
        ctx->r11 = ADD32(0, 0XF);
            goto L_080017A8;
    }
    // 0x08001790: addiu       $t3, $zero, 0xF
    ctx->r11 = ADD32(0, 0XF);
    // 0x08001794: lw          $t8, 0x60($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X60);
    // 0x08001798: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x0800179C: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x080017A0: b           L_080017B4
    // 0x080017A4: sw          $t9, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->r25;
        goto L_080017B4;
    // 0x080017A4: sw          $t9, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->r25;
L_080017A8:
    // 0x080017A8: lw          $t0, 0x60($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X60);
    // 0x080017AC: ori         $t1, $t0, 0x20
    ctx->r9 = ctx->r8 | 0X20;
    // 0x080017B0: sw          $t1, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->r9;
L_080017B4:
    // 0x080017B4: lhu         $v0, 0x8A($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X8A);
    // 0x080017B8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X17EC) << 16);
    // 0x080017BC: addiu       $a0, $a0, 0x17EC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X17EC));
    // 0x080017C0: addiu       $t2, $v0, -0x1
    ctx->r10 = ADD32(ctx->r2, -0X1);
    // 0x080017C4: bne         $v0, $zero, L_080017DC
    if (ctx->r2 != 0) {
        // 0x080017C8: sh          $t2, 0x8A($a1)
        MEM_H(0X8A, ctx->r5) = ctx->r10;
            goto L_080017DC;
    }
    // 0x080017C8: sh          $t2, 0x8A($a1)
    MEM_H(0X8A, ctx->r5) = ctx->r10;
    // 0x080017CC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080017D0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080017D4: jalr        $t9
    // 0x080017D8: sh          $t3, 0x8A($a1)
    MEM_H(0X8A, ctx->r5) = ctx->r11;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080017D8: sh          $t3, 0x8A($a1)
    MEM_H(0X8A, ctx->r5) = ctx->r11;
    after_0:
L_080017DC:
    // 0x080017DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080017E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080017E4: jr          $ra
    // 0x080017E8: nop

    TRACE_RETURN()
    return;
    // 0x080017E8: nop

;}
RECOMP_FUNC void func_08001888_6F4D68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001888: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800188C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001890: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001894: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x08001898: andi        $t7, $t6, 0x20
    ctx->r15 = ctx->r14 & 0X20;
    // 0x0800189C: bnel        $t7, $zero, L_080018C8
    if (ctx->r15 != 0) {
        // 0x080018A0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_080018C8;
    }
    goto skip_0;
    // 0x080018A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x080018A4: lw          $t8, 0x60($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X60);
    // 0x080018A8: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x080018AC: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x080018B0: sw          $t9, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r25;
    // 0x080018B4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080018B8: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x080018BC: jalr        $t9
    // 0x080018C0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080018C0: nop

    after_0:
    // 0x080018C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080018C8:
    // 0x080018C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080018CC: jr          $ra
    // 0x080018D0: nop

    TRACE_RETURN()
    return;
    // 0x080018D0: nop

    // 0x080018D4: jr          $ra
    // 0x080018D8: nop

    TRACE_RETURN()
    return;
    // 0x080018D8: nop

    // 0x080018DC: jr          $ra
    // 0x080018E0: nop

    TRACE_RETURN()
    return;
    // 0x080018E0: nop

;}
RECOMP_FUNC void func_08003CC0_6F71A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003CC0: jr          $ra
    // 0x08003CC4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    TRACE_RETURN()
    return;
    // 0x08003CC4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_080038A0_6F6D80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080038A0: jr          $ra
    // 0x080038A4: nop

    TRACE_RETURN()
    return;
    // 0x080038A4: nop

;}
RECOMP_FUNC void func_08001AE0_6F4FC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001AE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001AE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001AE8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001AEC: lw          $v0, 0xDC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XDC);
    // 0x08001AF0: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x08001AF4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001AF8: lw          $t6, 0xEC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XEC);
    // 0x08001AFC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001B00: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x08001B04: sw          $t7, 0xEC($v0)
    MEM_W(0XEC, ctx->r2) = ctx->r15;
    // 0x08001B08: lhu         $t8, 0xDA($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0XDA);
    // 0x08001B0C: ori         $t0, $t7, 0x4
    ctx->r8 = ctx->r15 | 0X4;
    // 0x08001B10: beql        $t8, $zero, L_08001B24
    if (ctx->r24 == 0) {
        // 0x08001B14: lw          $t1, 0xEC($v0)
        ctx->r9 = MEM_W(ctx->r2, 0XEC);
            goto L_08001B24;
    }
    goto skip_0;
    // 0x08001B14: lw          $t1, 0xEC($v0)
    ctx->r9 = MEM_W(ctx->r2, 0XEC);
    skip_0:
    // 0x08001B18: sw          $t0, 0xEC($v0)
    MEM_W(0XEC, ctx->r2) = ctx->r8;
    // 0x08001B1C: sh          $zero, 0xDA($a0)
    MEM_H(0XDA, ctx->r4) = 0;
    // 0x08001B20: lw          $t1, 0xEC($v0)
    ctx->r9 = MEM_W(ctx->r2, 0XEC);
L_08001B24:
    // 0x08001B24: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X1B4C) << 16);
    // 0x08001B28: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x08001B2C: beql        $t2, $zero, L_08001B40
    if (ctx->r10 == 0) {
        // 0x08001B30: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08001B40;
    }
    goto skip_1;
    // 0x08001B30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x08001B34: jalr        $t9
    // 0x08001B38: addiu       $a0, $a0, 0x1B4C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X1B4C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001B38: addiu       $a0, $a0, 0x1B4C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X1B4C));
    after_0:
    // 0x08001B3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08001B40:
    // 0x08001B40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001B44: jr          $ra
    // 0x08001B48: nop

    TRACE_RETURN()
    return;
    // 0x08001B48: nop

;}
RECOMP_FUNC void func_08001A18_6F4EF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001A18: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08001A1C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08001A20: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08001A24: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08001A28: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x08001A2C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001A30: ori         $t6, $t6, 0x6E1
    ctx->r14 = ctx->r14 | 0X6E1;
    // 0x08001A34: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x08001A38: addiu       $t8, $zero, 0x194
    ctx->r24 = ADD32(0, 0X194);
    // 0x08001A3C: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x08001A40: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08001A44: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08001A48: sw          $t7, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r15;
    // 0x08001A4C: sh          $t8, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r24;
    // 0x08001A50: jalr        $t9
    // 0x08001A54: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001A54: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x08001A58: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001A5C: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08001A60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001A64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001A68: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08001A6C: jalr        $t9
    // 0x08001A70: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001A70: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x08001A74: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001A78: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x08001A7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001A80: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001A84: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08001A88: jalr        $t9
    // 0x08001A8C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001A8C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x08001A90: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7BAC) << 16);
    // 0x08001A94: lwc1        $f0, 0x7BAC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7BAC));
    // 0x08001A98: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x08001A9C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x08001AA0: sh          $t0, 0x96($s0)
    MEM_H(0X96, ctx->r16) = ctx->r8;
    // 0x08001AA4: sb          $zero, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = 0;
    // 0x08001AA8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001AAC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001AB0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X1AE0) << 16);
    // 0x08001AB4: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x08001AB8: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x08001ABC: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x08001AC0: sb          $zero, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = 0;
    // 0x08001AC4: jalr        $t9
    // 0x08001AC8: addiu       $a0, $a0, 0x1AE0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X1AE0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001AC8: addiu       $a0, $a0, 0x1AE0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X1AE0));
    after_3:
    // 0x08001ACC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08001AD0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08001AD4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08001AD8: jr          $ra
    // 0x08001ADC: nop

    TRACE_RETURN()
    return;
    // 0x08001ADC: nop

;}
RECOMP_FUNC void func_08001430_6F4910(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001430: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x08001434: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x08001438: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x0800143C: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x08001440: lw          $v0, 0xDC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XDC);
    // 0x08001444: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x08001448: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x0800144C: lw          $t6, 0x18($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X18);
    // 0x08001450: addiu       $t7, $zero, 0x194
    ctx->r15 = ADD32(0, 0X194);
    // 0x08001454: ori         $t8, $t8, 0x6E1
    ctx->r24 = ctx->r24 | 0X6E1;
    // 0x08001458: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x0800145C: sw          $t9, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r25;
    // 0x08001460: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001464: sh          $t7, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r15;
    // 0x08001468: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
    // 0x0800146C: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08001470: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08001474: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001478: jalr        $t9
    // 0x0800147C: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800147C: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    after_0:
    // 0x08001480: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7BA0) << 16);
    // 0x08001484: lwc1        $f0, 0x7BA0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7BA0));
    // 0x08001488: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
    // 0x0800148C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x08001490: sb          $zero, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = 0;
    // 0x08001494: sb          $zero, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = 0;
    // 0x08001498: sh          $t0, 0x96($s0)
    MEM_H(0X96, ctx->r16) = ctx->r8;
    // 0x0800149C: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x080014A0: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x080014A4: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x080014A8: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x080014AC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x080014B0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080014B4: lhu         $t2, 0x16($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X16);
    // 0x080014B8: addiu       $t9, $t9, -0x2218
    ctx->r25 = ADD32(ctx->r25, -0X2218);
    // 0x080014BC: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(34, 0X15B0) << 16);
    // 0x080014C0: sh          $t2, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r10;
    // 0x080014C4: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x080014C8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x080014CC: addiu       $a1, $a1, 0x15B0
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(34, 0X15B0));
    // 0x080014D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080014D4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x080014D8: swc1        $f2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f2.u32l;
    // 0x080014DC: jalr        $t9
    // 0x080014E0: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080014E0: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    after_1:
    // 0x080014E4: beq         $v0, $zero, L_08001518
    if (ctx->r2 == 0) {
        // 0x080014E8: addiu       $t3, $zero, 0x2B
        ctx->r11 = ADD32(0, 0X2B);
            goto L_08001518;
    }
    // 0x080014E8: addiu       $t3, $zero, 0x2B
    ctx->r11 = ADD32(0, 0X2B);
    // 0x080014EC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080014F0: sh          $t3, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r11;
    // 0x080014F4: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080014F8: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x080014FC: jalr        $t9
    // 0x08001500: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001500: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    after_2:
    // 0x08001504: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x08001508: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x0800150C: sw          $s0, 0xDC($v1)
    MEM_W(0XDC, ctx->r3) = ctx->r16;
    // 0x08001510: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x08001514: sw          $t4, 0xE0($v1)
    MEM_W(0XE0, ctx->r3) = ctx->r12;
L_08001518:
    // 0x08001518: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800151C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001520: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X1540) << 16);
    // 0x08001524: jalr        $t9
    // 0x08001528: addiu       $a0, $a0, 0x1540
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X1540));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001528: addiu       $a0, $a0, 0x1540
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X1540));
    after_3:
    // 0x0800152C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x08001530: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x08001534: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x08001538: jr          $ra
    // 0x0800153C: nop

    TRACE_RETURN()
    return;
    // 0x0800153C: nop

;}
RECOMP_FUNC void func_08001B90_6F5070(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001B90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001B94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001B98: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001B9C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001BA0: addiu       $t6, $zero, 0x14
    ctx->r14 = ADD32(0, 0X14);
    // 0x08001BA4: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08001BA8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001BAC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001BB0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X1BCC) << 16);
    // 0x08001BB4: jalr        $t9
    // 0x08001BB8: addiu       $a0, $a0, 0x1BCC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X1BCC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001BB8: addiu       $a0, $a0, 0x1BCC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X1BCC));
    after_0:
    // 0x08001BBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001BC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001BC4: jr          $ra
    // 0x08001BC8: nop

    TRACE_RETURN()
    return;
    // 0x08001BC8: nop

;}
