#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_801E3400_59F310(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E3400: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801E3404: lbu         $t6, -0x3594($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X3594);
    // 0x801E3408: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801E340C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801E3410: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E3414: beq         $t6, $zero, L_801E342C
    if (ctx->r14 == 0) {
        // 0x801E3418: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_801E342C;
    }
    // 0x801E3418: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E341C: jal         0x801DD720
    // 0x801E3420: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    func_801DD720_599630(rdram, ctx);
        goto after_0;
    // 0x801E3420: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_0:
    // 0x801E3424: b           L_801E348C
    // 0x801E3428: nop

        goto L_801E348C;
    // 0x801E3428: nop

L_801E342C:
    // 0x801E342C: jal         0x801E7DE8
    // 0x801E3430: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E7DE8_5A3CF8(rdram, ctx);
        goto after_1;
    // 0x801E3430: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801E3434: beq         $v0, $zero, L_801E344C
    if (ctx->r2 == 0) {
        // 0x801E3438: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801E344C;
    }
    // 0x801E3438: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E343C: jal         0x801DD720
    // 0x801E3440: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    func_801DD720_599630(rdram, ctx);
        goto after_2;
    // 0x801E3440: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_2:
    // 0x801E3444: b           L_801E348C
    // 0x801E3448: nop

        goto L_801E348C;
    // 0x801E3448: nop

L_801E344C:
    // 0x801E344C: lw          $t7, 0x5C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X5C);
    // 0x801E3450: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E3454: lw          $v0, 0x80($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X80);
    // 0x801E3458: beq         $v0, $zero, L_801E3484
    if (ctx->r2 == 0) {
        // 0x801E345C: nop
    
            goto L_801E3484;
    }
    // 0x801E345C: nop

    // 0x801E3460: lw          $t8, 0x64($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X64);
    // 0x801E3464: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x801E3468: sll         $t9, $t8, 9
    ctx->r25 = S32(ctx->r24 << 9);
    // 0x801E346C: bgez        $t9, L_801E3484
    if (SIGNED(ctx->r25) >= 0) {
        // 0x801E3470: nop
    
            goto L_801E3484;
    }
    // 0x801E3470: nop

    // 0x801E3474: jal         0x801DD720
    // 0x801E3478: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801DD720_599630(rdram, ctx);
        goto after_3;
    // 0x801E3478: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801E347C: b           L_801E348C
    // 0x801E3480: nop

        goto L_801E348C;
    // 0x801E3480: nop

L_801E3484:
    // 0x801E3484: jal         0x801DD720
    // 0x801E3488: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_801DD720_599630(rdram, ctx);
        goto after_4;
    // 0x801E3488: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
L_801E348C:
    // 0x801E348C: jal         0x801E5328
    // 0x801E3490: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E5328_5A1238(rdram, ctx);
        goto after_5;
    // 0x801E3490: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x801E3494: beq         $v0, $zero, L_801E34B8
    if (ctx->r2 == 0) {
        // 0x801E3498: nop
    
            goto L_801E34B8;
    }
    // 0x801E3498: nop

    // 0x801E349C: jal         0x801E20A0
    // 0x801E34A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E20A0_59DFB0(rdram, ctx);
        goto after_6;
    // 0x801E34A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x801E34A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E34A8: jal         0x801DACDC
    // 0x801E34AC: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_7;
    // 0x801E34AC: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    after_7:
    // 0x801E34B0: b           L_801E3740
    // 0x801E34B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E3740;
    // 0x801E34B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E34B8:
    // 0x801E34B8: jal         0x801E8390
    // 0x801E34BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E8390_5A42A0(rdram, ctx);
        goto after_8;
    // 0x801E34BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x801E34C0: bnel        $v0, $zero, L_801E3740
    if (ctx->r2 != 0) {
        // 0x801E34C4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801E3740;
    }
    goto skip_0;
    // 0x801E34C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801E34C8: lhu         $t0, 0x98($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X98);
    // 0x801E34CC: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x801E34D0: bnel        $t0, $zero, L_801E350C
    if (ctx->r8 != 0) {
        // 0x801E34D4: lbu         $t2, 0x90($s0)
        ctx->r10 = MEM_BU(ctx->r16, 0X90);
            goto L_801E350C;
    }
    goto skip_1;
    // 0x801E34D4: lbu         $t2, 0x90($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X90);
    skip_1:
    // 0x801E34D8: lbu         $t1, 0x7AE0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X7AE0);
    // 0x801E34DC: bnel        $t1, $zero, L_801E350C
    if (ctx->r9 != 0) {
        // 0x801E34E0: lbu         $t2, 0x90($s0)
        ctx->r10 = MEM_BU(ctx->r16, 0X90);
            goto L_801E350C;
    }
    goto skip_2;
    // 0x801E34E0: lbu         $t2, 0x90($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X90);
    skip_2:
    // 0x801E34E4: jal         0x801E3324
    // 0x801E34E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E3324_59F234(rdram, ctx);
        goto after_9;
    // 0x801E34E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x801E34EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E34F0: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x801E34F4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x801E34F8: jal         0x801DAC7C
    // 0x801E34FC: lbu         $a3, 0xDB($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XDB);
    func_801DAC7C_596B8C(rdram, ctx);
        goto after_10;
    // 0x801E34FC: lbu         $a3, 0xDB($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XDB);
    after_10:
    // 0x801E3500: b           L_801E3740
    // 0x801E3504: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E3740;
    // 0x801E3504: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801E3508: lbu         $t2, 0x90($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X90);
L_801E350C:
    // 0x801E350C: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x801E3510: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E3514: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x801E3518: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x801E351C: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x801E3520: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x801E3524: lhu         $t4, 0x7DB4($t4)
    ctx->r12 = MEM_HU(ctx->r12, 0X7DB4);
    // 0x801E3528: andi        $t5, $t4, 0x4000
    ctx->r13 = ctx->r12 & 0X4000;
    // 0x801E352C: bne         $t5, $zero, L_801E3548
    if (ctx->r13 != 0) {
        // 0x801E3530: nop
    
            goto L_801E3548;
    }
    // 0x801E3530: nop

    // 0x801E3534: lw          $t6, 0x5C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X5C);
    // 0x801E3538: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801E353C: lbu         $t7, 0x68($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X68);
    // 0x801E3540: bne         $t7, $at, L_801E3558
    if (ctx->r15 != ctx->r1) {
        // 0x801E3544: nop
    
            goto L_801E3558;
    }
    // 0x801E3544: nop

L_801E3548:
    // 0x801E3548: jal         0x801E4624
    // 0x801E354C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_801E4624_5A0534(rdram, ctx);
        goto after_11;
    // 0x801E354C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
    // 0x801E3550: b           L_801E3740
    // 0x801E3554: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E3740;
    // 0x801E3554: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E3558:
    // 0x801E3558: jal         0x801E79F4
    // 0x801E355C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E79F4_5A3904(rdram, ctx);
        goto after_12;
    // 0x801E355C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x801E3560: bne         $v0, $zero, L_801E373C
    if (ctx->r2 != 0) {
        // 0x801E3564: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801E373C;
    }
    // 0x801E3564: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E3568: jal         0x801E5788
    // 0x801E356C: addiu       $a1, $zero, 0x244
    ctx->r5 = ADD32(0, 0X244);
    func_801E5788_5A1698(rdram, ctx);
        goto after_13;
    // 0x801E356C: addiu       $a1, $zero, 0x244
    ctx->r5 = ADD32(0, 0X244);
    after_13:
    // 0x801E3570: beq         $v0, $zero, L_801E359C
    if (ctx->r2 == 0) {
        // 0x801E3574: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801E359C;
    }
    // 0x801E3574: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E3578: lw          $t8, 0x5C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X5C);
    // 0x801E357C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E3580: jal         0x801E5B6C
    // 0x801E3584: lw          $a1, 0x7C($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X7C);
    func_801E5B6C_5A1A7C(rdram, ctx);
        goto after_14;
    // 0x801E3584: lw          $a1, 0x7C($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X7C);
    after_14:
    // 0x801E3588: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E358C: jal         0x801DACDC
    // 0x801E3590: addiu       $a1, $zero, 0x46
    ctx->r5 = ADD32(0, 0X46);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_15;
    // 0x801E3590: addiu       $a1, $zero, 0x46
    ctx->r5 = ADD32(0, 0X46);
    after_15:
    // 0x801E3594: b           L_801E3740
    // 0x801E3598: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E3740;
    // 0x801E3598: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E359C:
    // 0x801E359C: jal         0x801E572C
    // 0x801E35A0: addiu       $a1, $zero, 0x245
    ctx->r5 = ADD32(0, 0X245);
    func_801E572C_5A163C(rdram, ctx);
        goto after_16;
    // 0x801E35A0: addiu       $a1, $zero, 0x245
    ctx->r5 = ADD32(0, 0X245);
    after_16:
    // 0x801E35A4: beq         $v0, $zero, L_801E35D0
    if (ctx->r2 == 0) {
        // 0x801E35A8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801E35D0;
    }
    // 0x801E35A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E35AC: lw          $t9, 0x5C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X5C);
    // 0x801E35B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E35B4: jal         0x801E5B6C
    // 0x801E35B8: lw          $a1, 0x7C($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X7C);
    func_801E5B6C_5A1A7C(rdram, ctx);
        goto after_17;
    // 0x801E35B8: lw          $a1, 0x7C($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X7C);
    after_17:
    // 0x801E35BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E35C0: jal         0x801DACDC
    // 0x801E35C4: addiu       $a1, $zero, 0x46
    ctx->r5 = ADD32(0, 0X46);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_18;
    // 0x801E35C4: addiu       $a1, $zero, 0x46
    ctx->r5 = ADD32(0, 0X46);
    after_18:
    // 0x801E35C8: b           L_801E3740
    // 0x801E35CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E3740;
    // 0x801E35CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E35D0:
    // 0x801E35D0: jal         0x801E5788
    // 0x801E35D4: addiu       $a1, $zero, 0x329
    ctx->r5 = ADD32(0, 0X329);
    func_801E5788_5A1698(rdram, ctx);
        goto after_19;
    // 0x801E35D4: addiu       $a1, $zero, 0x329
    ctx->r5 = ADD32(0, 0X329);
    after_19:
    // 0x801E35D8: beql        $v0, $zero, L_801E3608
    if (ctx->r2 == 0) {
        // 0x801E35DC: lhu         $t1, 0x96($s0)
        ctx->r9 = MEM_HU(ctx->r16, 0X96);
            goto L_801E3608;
    }
    goto skip_3;
    // 0x801E35DC: lhu         $t1, 0x96($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X96);
    skip_3:
    // 0x801E35E0: lw          $t0, 0x5C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X5C);
    // 0x801E35E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E35E8: jal         0x801E5B6C
    // 0x801E35EC: lw          $a1, 0x7C($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X7C);
    func_801E5B6C_5A1A7C(rdram, ctx);
        goto after_20;
    // 0x801E35EC: lw          $a1, 0x7C($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X7C);
    after_20:
    // 0x801E35F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E35F4: jal         0x801DACDC
    // 0x801E35F8: addiu       $a1, $zero, 0x46
    ctx->r5 = ADD32(0, 0X46);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_21;
    // 0x801E35F8: addiu       $a1, $zero, 0x46
    ctx->r5 = ADD32(0, 0X46);
    after_21:
    // 0x801E35FC: b           L_801E3740
    // 0x801E3600: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E3740;
    // 0x801E3600: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801E3604: lhu         $t1, 0x96($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X96);
L_801E3608:
    // 0x801E3608: addiu       $at, $zero, 0x30
    ctx->r1 = ADD32(0, 0X30);
    // 0x801E360C: bne         $t1, $at, L_801E363C
    if (ctx->r9 != ctx->r1) {
        // 0x801E3610: nop
    
            goto L_801E363C;
    }
    // 0x801E3610: nop

    // 0x801E3614: lw          $t2, 0x9C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X9C);
    // 0x801E3618: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E361C: beq         $t2, $zero, L_801E363C
    if (ctx->r10 == 0) {
        // 0x801E3620: nop
    
            goto L_801E363C;
    }
    // 0x801E3620: nop

    // 0x801E3624: lw          $t3, 0x5C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X5C);
    // 0x801E3628: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801E362C: jal         0x801E3750
    // 0x801E3630: lw          $a1, 0x7C($t3)
    ctx->r5 = MEM_W(ctx->r11, 0X7C);
    func_801E3750_59F660(rdram, ctx);
        goto after_22;
    // 0x801E3630: lw          $a1, 0x7C($t3)
    ctx->r5 = MEM_W(ctx->r11, 0X7C);
    after_22:
    // 0x801E3634: b           L_801E3740
    // 0x801E3638: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E3740;
    // 0x801E3638: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E363C:
    // 0x801E363C: jal         0x801E1C90
    // 0x801E3640: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E1C90_59DBA0(rdram, ctx);
        goto after_23;
    // 0x801E3640: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_23:
    // 0x801E3644: beq         $v0, $zero, L_801E36F0
    if (ctx->r2 == 0) {
        // 0x801E3648: andi        $a2, $v0, 0xFF
        ctx->r6 = ctx->r2 & 0XFF;
            goto L_801E36F0;
    }
    // 0x801E3648: andi        $a2, $v0, 0xFF
    ctx->r6 = ctx->r2 & 0XFF;
    // 0x801E364C: lbu         $t4, 0xCC($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0XCC);
    // 0x801E3650: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x801E3654: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E3658: beql        $t4, $at, L_801E3698
    if (ctx->r12 == ctx->r1) {
        // 0x801E365C: lbu         $t5, 0xCC($s0)
        ctx->r13 = MEM_BU(ctx->r16, 0XCC);
            goto L_801E3698;
    }
    goto skip_4;
    // 0x801E365C: lbu         $t5, 0xCC($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0XCC);
    skip_4:
    // 0x801E3660: jal         0x801E26AC
    // 0x801E3664: sb          $a2, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r6;
    func_801E26AC_59E5BC(rdram, ctx);
        goto after_24;
    // 0x801E3664: sb          $a2, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r6;
    after_24:
    // 0x801E3668: lbu         $a2, 0x27($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X27);
    // 0x801E366C: beq         $v0, $zero, L_801E3694
    if (ctx->r2 == 0) {
        // 0x801E3670: andi        $a1, $v0, 0xFF
        ctx->r5 = ctx->r2 & 0XFF;
            goto L_801E3694;
    }
    // 0x801E3670: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    // 0x801E3674: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E3678: jal         0x801E276C
    // 0x801E367C: sb          $a1, 0x26($sp)
    MEM_B(0X26, ctx->r29) = ctx->r5;
    func_801E276C_59E67C(rdram, ctx);
        goto after_25;
    // 0x801E367C: sb          $a1, 0x26($sp)
    MEM_B(0X26, ctx->r29) = ctx->r5;
    after_25:
    // 0x801E3680: lbu         $a1, 0x26($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X26);
    // 0x801E3684: jal         0x801DACDC
    // 0x801E3688: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_26;
    // 0x801E3688: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_26:
    // 0x801E368C: b           L_801E3740
    // 0x801E3690: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E3740;
    // 0x801E3690: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E3694:
    // 0x801E3694: lbu         $t5, 0xCC($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0XCC);
L_801E3698:
    // 0x801E3698: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E369C: beql        $a2, $t5, L_801E36C0
    if (ctx->r6 == ctx->r13) {
        // 0x801E36A0: lw          $v0, 0x5C($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X5C);
            goto L_801E36C0;
    }
    goto skip_5;
    // 0x801E36A0: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
    skip_5:
    // 0x801E36A4: lw          $t6, 0x5C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X5C);
    // 0x801E36A8: andi        $a1, $a2, 0xFF
    ctx->r5 = ctx->r6 & 0XFF;
    // 0x801E36AC: jal         0x801DABFC
    // 0x801E36B0: sb          $zero, 0x85($t6)
    MEM_B(0X85, ctx->r14) = 0;
    func_801DABFC_596B0C(rdram, ctx);
        goto after_27;
    // 0x801E36B0: sb          $zero, 0x85($t6)
    MEM_B(0X85, ctx->r14) = 0;
    after_27:
    // 0x801E36B4: b           L_801E3740
    // 0x801E36B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E3740;
    // 0x801E36B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801E36BC: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
L_801E36C0:
    // 0x801E36C0: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x801E36C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E36C8: lbu         $t7, 0x85($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X85);
    // 0x801E36CC: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x801E36D0: sb          $t8, 0x85($v0)
    MEM_B(0X85, ctx->r2) = ctx->r24;
    // 0x801E36D4: lbu         $v1, 0xCC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XCC);
    // 0x801E36D8: beql        $v1, $at, L_801E3740
    if (ctx->r3 == ctx->r1) {
        // 0x801E36DC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801E3740;
    }
    goto skip_6;
    // 0x801E36DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_6:
    // 0x801E36E0: jal         0x801E2568
    // 0x801E36E4: addiu       $a1, $v1, -0xC
    ctx->r5 = ADD32(ctx->r3, -0XC);
    func_801E2568_59E478(rdram, ctx);
        goto after_28;
    // 0x801E36E4: addiu       $a1, $v1, -0xC
    ctx->r5 = ADD32(ctx->r3, -0XC);
    after_28:
    // 0x801E36E8: b           L_801E3740
    // 0x801E36EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E3740;
    // 0x801E36EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E36F0:
    // 0x801E36F0: lbu         $t9, 0xCC($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0XCC);
    // 0x801E36F4: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x801E36F8: beql        $t9, $at, L_801E3734
    if (ctx->r25 == ctx->r1) {
        // 0x801E36FC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801E3734;
    }
    goto skip_7;
    // 0x801E36FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_7:
    // 0x801E3700: jal         0x801E26AC
    // 0x801E3704: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E26AC_59E5BC(rdram, ctx);
        goto after_29;
    // 0x801E3704: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_29:
    // 0x801E3708: beq         $v0, $zero, L_801E3730
    if (ctx->r2 == 0) {
        // 0x801E370C: andi        $a1, $v0, 0xFF
        ctx->r5 = ctx->r2 & 0XFF;
            goto L_801E3730;
    }
    // 0x801E370C: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    // 0x801E3710: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E3714: jal         0x801E276C
    // 0x801E3718: sb          $a1, 0x26($sp)
    MEM_B(0X26, ctx->r29) = ctx->r5;
    func_801E276C_59E67C(rdram, ctx);
        goto after_30;
    // 0x801E3718: sb          $a1, 0x26($sp)
    MEM_B(0X26, ctx->r29) = ctx->r5;
    after_30:
    // 0x801E371C: lbu         $a1, 0x26($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X26);
    // 0x801E3720: jal         0x801DACDC
    // 0x801E3724: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_31;
    // 0x801E3724: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_31:
    // 0x801E3728: b           L_801E3740
    // 0x801E372C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E3740;
    // 0x801E372C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E3730:
    // 0x801E3730: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_801E3734:
    // 0x801E3734: jal         0x801DACDC
    // 0x801E3738: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_32;
    // 0x801E3738: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_32:
L_801E373C:
    // 0x801E373C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E3740:
    // 0x801E3740: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801E3744: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801E3748: jr          $ra
    // 0x801E374C: nop

    TRACE_RETURN()
    return;
    // 0x801E374C: nop

;}
RECOMP_FUNC void func_801ECF0C_5A8E1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801ECF0C: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x801ECF10: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801ECF14: lwc1        $f0, -0x4564($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4564);
    // 0x801ECF18: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x801ECF1C: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x801ECF20: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x801ECF24: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x801ECF28: lw          $s0, 0x18($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X18);
    // 0x801ECF2C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801ECF30: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x801ECF34: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801ECF38: lui         $a1, 0x900
    ctx->r5 = S32(0X900 << 16);
    // 0x801ECF3C: addiu       $a1, $a1, 0x2790
    ctx->r5 = ADD32(ctx->r5, 0X2790);
    // 0x801ECF40: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x801ECF44: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801ECF48: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801ECF4C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801ECF50: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x801ECF54: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801ECF58: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801ECF5C: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801ECF60: addiu       $v0, $s1, 0xBC
    ctx->r2 = ADD32(ctx->r17, 0XBC);
    // 0x801ECF64: ori         $t6, $zero, 0x8000
    ctx->r14 = 0 | 0X8000;
    // 0x801ECF68: ori         $t7, $zero, 0x8000
    ctx->r15 = 0 | 0X8000;
    // 0x801ECF6C: ori         $t8, $zero, 0x8000
    ctx->r24 = 0 | 0X8000;
    // 0x801ECF70: addiu       $t9, $zero, 0x80
    ctx->r25 = ADD32(0, 0X80);
    // 0x801ECF74: addiu       $t0, $zero, 0x152
    ctx->r8 = ADD32(0, 0X152);
    // 0x801ECF78: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801ECF7C: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x801ECF80: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x801ECF84: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x801ECF88: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x801ECF8C: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x801ECF90: or          $a2, $v0, $at
    ctx->r6 = ctx->r2 | ctx->r1;
    // 0x801ECF94: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    // 0x801ECF98: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x801ECF9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801ECFA0: jal         0x80034680
    // 0x801ECFA4: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    func_80034680_35280(rdram, ctx);
        goto after_0;
    // 0x801ECFA4: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x801ECFA8: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801ECFAC: addiu       $a2, $a2, 0x4B28
    ctx->r6 = ADD32(ctx->r6, 0X4B28);
    // 0x801ECFB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801ECFB4: jal         0x801E8820
    // 0x801ECFB8: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_801E8820_5A4730(rdram, ctx);
        goto after_1;
    // 0x801ECFB8: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_1:
    // 0x801ECFBC: addiu       $t1, $zero, 0x7
    ctx->r9 = ADD32(0, 0X7);
    // 0x801ECFC0: sb          $t1, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r9;
    // 0x801ECFC4: addiu       $v0, $s1, 0xB8
    ctx->r2 = ADD32(ctx->r17, 0XB8);
    // 0x801ECFC8: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x801ECFCC: sb          $t2, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r10;
    // 0x801ECFD0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801ECFD4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801ECFD8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801ECFDC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801ECFE0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801ECFE4: lbu         $t3, 0x0($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X0);
    // 0x801ECFE8: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801ECFEC: addiu       $a2, $a2, 0x49C0
    ctx->r6 = ADD32(ctx->r6, 0X49C0);
    // 0x801ECFF0: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x801ECFF4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801ECFF8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801ECFFC: jal         0x801DC554
    // 0x801ED000: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    func_801DC554_598464(rdram, ctx);
        goto after_2;
    // 0x801ED000: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    after_2:
    // 0x801ED004: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801ED008: lwc1        $f16, 0x6C($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X6C);
    // 0x801ED00C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x801ED010: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801ED014: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x801ED018: lwc1        $f10, 0xC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801ED01C: swc1        $f18, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f18.u32l;
    // 0x801ED020: lwc1        $f4, 0x70($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X70);
    // 0x801ED024: lwc1        $f18, 0x10($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801ED028: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801ED02C: sub.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x801ED030: swc1        $f16, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f16.u32l;
    // 0x801ED034: lwc1        $f4, 0x74($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X74);
    // 0x801ED038: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x801ED03C: swc1        $f6, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f6.u32l;
    // 0x801ED040: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x801ED044: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x801ED048: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x801ED04C: jr          $ra
    // 0x801ED050: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x801ED050: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_801E3134_59F044(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E3134: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E3138: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E313C: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801E3140: jal         0x801E3158
    // 0x801E3144: sh          $zero, 0x0($t6)
    MEM_H(0X0, ctx->r14) = 0;
    func_801E3158_59F068(rdram, ctx);
        goto after_0;
    // 0x801E3144: sh          $zero, 0x0($t6)
    MEM_H(0X0, ctx->r14) = 0;
    after_0:
    // 0x801E3148: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E314C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E3150: jr          $ra
    // 0x801E3154: nop

    TRACE_RETURN()
    return;
    // 0x801E3154: nop

;}
RECOMP_FUNC void func_801DE51C_59A42C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DE51C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DE520: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DE524: jal         0x801E3AC0
    // 0x801DE528: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801E3AC0_59F9D0(rdram, ctx);
        goto after_0;
    // 0x801DE528: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801DE52C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DE530: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DE534: jr          $ra
    // 0x801DE538: nop

    TRACE_RETURN()
    return;
    // 0x801DE538: nop

;}
RECOMP_FUNC void func_801EE530_5AA440(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EE530: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801EE534: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x801EE538: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x801EE53C: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x801EE540: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801EE544: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801EE548: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801EE54C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x801EE550: swc1        $f12, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f12.u32l;
    // 0x801EE554: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x801EE558: swc1        $f14, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f14.u32l;
    // 0x801EE55C: lhu         $a2, 0x18($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X18);
    // 0x801EE560: lhu         $a1, 0x16($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X16);
    // 0x801EE564: lhu         $a0, 0x14($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X14);
    // 0x801EE568: addiu       $t6, $sp, 0x30
    ctx->r14 = ADD32(ctx->r29, 0X30);
    // 0x801EE56C: addiu       $t7, $sp, 0x2C
    ctx->r15 = ADD32(ctx->r29, 0X2C);
    // 0x801EE570: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801EE574: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801EE578: jal         0x80033898
    // 0x801EE57C: addiu       $a3, $sp, 0x34
    ctx->r7 = ADD32(ctx->r29, 0X34);
    func_80033898_34498(rdram, ctx);
        goto after_0;
    // 0x801EE57C: addiu       $a3, $sp, 0x34
    ctx->r7 = ADD32(ctx->r29, 0X34);
    after_0:
    // 0x801EE580: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801EE584: lwc1        $f8, 0x1C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801EE588: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x801EE58C: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x801EE590: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801EE594: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x801EE598: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    // 0x801EE59C: lwc1        $f18, 0x20($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X20);
    // 0x801EE5A0: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x801EE5A4: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x801EE5A8: lwc1        $f8, 0x24($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X24);
    // 0x801EE5AC: mul.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801EE5B0: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x801EE5B4: lwc1        $f18, 0x8($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801EE5B8: add.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x801EE5BC: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x801EE5C0: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x801EE5C4: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801EE5C8: add.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801EE5CC: swc1        $f16, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f16.u32l;
    // 0x801EE5D0: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x801EE5D4: lwc1        $f18, 0x10($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801EE5D8: add.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x801EE5DC: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
    // 0x801EE5E0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801EE5E4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801EE5E8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x801EE5EC: jr          $ra
    // 0x801EE5F0: nop

    TRACE_RETURN()
    return;
    // 0x801EE5F0: nop

;}
RECOMP_FUNC void func_801DEBC0_59AAD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DEBC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DEBC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DEBC8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801DEBCC: jal         0x801E5090
    // 0x801DEBD0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801E5090_5A0FA0(rdram, ctx);
        goto after_0;
    // 0x801DEBD0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801DEBD4: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801DEBD8: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801DEBDC: jalr        $t9
    // 0x801DEBE0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x801DEBE0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x801DEBE4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801DEBE8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DEBEC: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x801DEBF0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801DEBF4: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x801DEBF8: lwc1        $f4, 0x28($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X28);
    // 0x801DEBFC: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x801DEC00: nop

    // 0x801DEC04: bc1fl       L_801DEC18
    if (!c1cs) {
        // 0x801DEC08: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801DEC18;
    }
    goto skip_0;
    // 0x801DEC08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801DEC0C: jal         0x801DACDC
    // 0x801DEC10: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_2;
    // 0x801DEC10: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    after_2:
    // 0x801DEC14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DEC18:
    // 0x801DEC18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DEC1C: jr          $ra
    // 0x801DEC20: nop

    TRACE_RETURN()
    return;
    // 0x801DEC20: nop

;}
RECOMP_FUNC void func_801F2048_5ADF58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F2048: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x801F204C: sw          $a0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r4;
    // 0x801F2050: sw          $a2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r6;
    // 0x801F2054: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x801F2058: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x801F205C: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x801F2060: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x801F2064: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x801F2068: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x801F206C: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x801F2070: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x801F2074: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x801F2078: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x801F207C: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x801F2080: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x801F2084: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x801F2088: sw          $a3, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r7;
    // 0x801F208C: lw          $fp, 0x18($a0)
    ctx->r30 = MEM_W(ctx->r4, 0X18);
    // 0x801F2090: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801F2094: lhu         $t0, 0x20($a1)
    ctx->r8 = MEM_HU(ctx->r5, 0X20);
    // 0x801F2098: addiu       $a0, $sp, 0x84
    ctx->r4 = ADD32(ctx->r29, 0X84);
    // 0x801F209C: addiu       $a2, $sp, 0x84
    ctx->r6 = ADD32(ctx->r29, 0X84);
    // 0x801F20A0: addiu       $v0, $sp, 0x78
    ctx->r2 = ADD32(ctx->r29, 0X78);
    // 0x801F20A4: lw          $v1, 0xBC($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XBC);
L_801F20A8:
    // 0x801F20A8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x801F20AC: swc1        $f0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f0.u32l;
    // 0x801F20B0: sw          $zero, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = 0;
    // 0x801F20B4: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x801F20B8: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x801F20BC: bne         $v0, $a0, L_801F20A8
    if (ctx->r2 != ctx->r4) {
        // 0x801F20C0: sw          $zero, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = 0;
            goto L_801F20A8;
    }
    // 0x801F20C0: sw          $zero, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = 0;
    // 0x801F20C4: lw          $s0, 0x0($a1)
    ctx->r16 = MEM_W(ctx->r5, 0X0);
    // 0x801F20C8: or          $s7, $t0, $zero
    ctx->r23 = ctx->r8 | 0;
    // 0x801F20CC: lwc1        $f22, 0xB8($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x801F20D0: beq         $s0, $zero, L_801F2178
    if (ctx->r16 == 0) {
        // 0x801F20D4: addiu       $s6, $sp, 0x78
        ctx->r22 = ADD32(ctx->r29, 0X78);
            goto L_801F2178;
    }
    // 0x801F20D4: addiu       $s6, $sp, 0x78
    ctx->r22 = ADD32(ctx->r29, 0X78);
    // 0x801F20D8: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x801F20DC: lui         $s5, 0x80
    ctx->r21 = S32(0X80 << 16);
    // 0x801F20E0: addiu       $s4, $sp, 0x84
    ctx->r20 = ADD32(ctx->r29, 0X84);
    // 0x801F20E4: lhu         $t7, 0x20($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X20);
L_801F20E8:
    // 0x801F20E8: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    // 0x801F20EC: slt         $at, $s7, $t7
    ctx->r1 = SIGNED(ctx->r23) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x801F20F0: beql        $at, $zero, L_801F217C
    if (ctx->r1 == 0) {
        // 0x801F20F4: addiu       $v0, $sp, 0x78
        ctx->r2 = ADD32(ctx->r29, 0X78);
            goto L_801F217C;
    }
    goto skip_0;
    // 0x801F20F4: addiu       $v0, $sp, 0x78
    ctx->r2 = ADD32(ctx->r29, 0X78);
    skip_0:
    // 0x801F20F8: lw          $t8, 0x64($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X64);
    // 0x801F20FC: lw          $s2, 0x18($s0)
    ctx->r18 = MEM_W(ctx->r16, 0X18);
    // 0x801F2100: and         $t9, $t8, $s5
    ctx->r25 = ctx->r24 & ctx->r21;
    // 0x801F2104: bnel        $t9, $zero, L_801F2170
    if (ctx->r25 != 0) {
        // 0x801F2108: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_801F2170;
    }
    goto skip_1;
    // 0x801F2108: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_1:
    // 0x801F210C: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x801F2110: jal         0x801F21D4
    // 0x801F2114: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_801F21D4_5AE0E4(rdram, ctx);
        goto after_0;
    // 0x801F2114: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_0:
    // 0x801F2118: c.lt.s      $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f0.fl < ctx->f24.fl;
    // 0x801F211C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x801F2120: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x801F2124: bc1tl       L_801F2170
    if (c1cs) {
        // 0x801F2128: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_801F2170;
    }
    goto skip_2;
    // 0x801F2128: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_2:
    // 0x801F212C: jal         0x801F236C
    // 0x801F2130: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_801F236C_5AE27C(rdram, ctx);
        goto after_1;
    // 0x801F2130: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_1:
    // 0x801F2134: bltz        $v0, L_801F216C
    if (SIGNED(ctx->r2) < 0) {
        // 0x801F2138: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_801F216C;
    }
    // 0x801F2138: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x801F213C: lw          $a0, 0xA8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA8);
    // 0x801F2140: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x801F2144: jal         0x801F22E0
    // 0x801F2148: lhu         $s3, 0xB6($sp)
    ctx->r19 = MEM_HU(ctx->r29, 0XB6);
    func_801F22E0_5AE1F0(rdram, ctx);
        goto after_2;
    // 0x801F2148: lhu         $s3, 0xB6($sp)
    ctx->r19 = MEM_HU(ctx->r29, 0XB6);
    after_2:
    // 0x801F214C: slt         $at, $s3, $v0
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x801F2150: bne         $at, $zero, L_801F216C
    if (ctx->r1 != 0) {
        // 0x801F2154: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_801F216C;
    }
    // 0x801F2154: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801F2158: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x801F215C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x801F2160: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    // 0x801F2164: jal         0x801F23C8
    // 0x801F2168: sw          $s6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r22;
    func_801F23C8_5AE2D8(rdram, ctx);
        goto after_3;
    // 0x801F2168: sw          $s6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r22;
    after_3:
L_801F216C:
    // 0x801F216C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_801F2170:
    // 0x801F2170: bnel        $s0, $zero, L_801F20E8
    if (ctx->r16 != 0) {
        // 0x801F2174: lhu         $t7, 0x20($s0)
        ctx->r15 = MEM_HU(ctx->r16, 0X20);
            goto L_801F20E8;
    }
    goto skip_3;
    // 0x801F2174: lhu         $t7, 0x20($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X20);
    skip_3:
L_801F2178:
    // 0x801F2178: addiu       $v0, $sp, 0x78
    ctx->r2 = ADD32(ctx->r29, 0X78);
L_801F217C:
    // 0x801F217C: lw          $v1, 0xBC($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XBC);
    // 0x801F2180: addiu       $a0, $sp, 0x84
    ctx->r4 = ADD32(ctx->r29, 0X84);
L_801F2184:
    // 0x801F2184: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x801F2188: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x801F218C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x801F2190: bne         $v0, $a0, L_801F2184
    if (ctx->r2 != ctx->r4) {
        // 0x801F2194: sw          $t2, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = ctx->r10;
            goto L_801F2184;
    }
    // 0x801F2194: sw          $t2, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r10;
    // 0x801F2198: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x801F219C: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x801F21A0: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x801F21A4: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x801F21A8: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x801F21AC: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x801F21B0: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x801F21B4: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x801F21B8: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x801F21BC: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x801F21C0: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x801F21C4: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x801F21C8: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x801F21CC: jr          $ra
    // 0x801F21D0: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    TRACE_RETURN()
    return;
    // 0x801F21D0: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
;}
RECOMP_FUNC void func_801F23F0_5AE300(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F23F0: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x801F23F4: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x801F23F8: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x801F23FC: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x801F2400: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801F2404: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x801F2408: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x801F240C: beq         $t6, $at, L_801F2434
    if (ctx->r14 == ctx->r1) {
        // 0x801F2410: sw          $a0, 0x68($sp)
        MEM_W(0X68, ctx->r29) = ctx->r4;
            goto L_801F2434;
    }
    // 0x801F2410: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x801F2414: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
    // 0x801F2418: beq         $t6, $at, L_801F2440
    if (ctx->r14 == ctx->r1) {
        // 0x801F241C: lui         $t0, 0x8020
        ctx->r8 = S32(0X8020 << 16);
            goto L_801F2440;
    }
    // 0x801F241C: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x801F2420: addiu       $at, $zero, 0x2A
    ctx->r1 = ADD32(0, 0X2A);
    // 0x801F2424: beq         $t6, $at, L_801F2448
    if (ctx->r14 == ctx->r1) {
        // 0x801F2428: lui         $t0, 0x8020
        ctx->r8 = S32(0X8020 << 16);
            goto L_801F2448;
    }
    // 0x801F2428: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x801F242C: b           L_801F25C8
    // 0x801F2430: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
        goto L_801F25C8;
    // 0x801F2430: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
L_801F2434:
    // 0x801F2434: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x801F2438: b           L_801F244C
    // 0x801F243C: addiu       $t0, $t0, 0x5078
    ctx->r8 = ADD32(ctx->r8, 0X5078);
        goto L_801F244C;
    // 0x801F243C: addiu       $t0, $t0, 0x5078
    ctx->r8 = ADD32(ctx->r8, 0X5078);
L_801F2440:
    // 0x801F2440: b           L_801F244C
    // 0x801F2444: addiu       $t0, $t0, 0x5084
    ctx->r8 = ADD32(ctx->r8, 0X5084);
        goto L_801F244C;
    // 0x801F2444: addiu       $t0, $t0, 0x5084
    ctx->r8 = ADD32(ctx->r8, 0X5084);
L_801F2448:
    // 0x801F2448: addiu       $t0, $t0, 0x5090
    ctx->r8 = ADD32(ctx->r8, 0X5090);
L_801F244C:
    // 0x801F244C: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x801F2450: sb          $a1, 0x6F($sp)
    MEM_B(0X6F, ctx->r29) = ctx->r5;
    // 0x801F2454: jal         0x801E8C44
    // 0x801F2458: sw          $t0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r8;
    func_801E8C44_5A4B54(rdram, ctx);
        goto after_0;
    // 0x801F2458: sw          $t0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r8;
    after_0:
    // 0x801F245C: bne         $v0, $zero, L_801F25C4
    if (ctx->r2 != 0) {
        // 0x801F2460: lw          $t0, 0x64($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X64);
            goto L_801F25C4;
    }
    // 0x801F2460: lw          $t0, 0x64($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X64);
    // 0x801F2464: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x801F2468: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x801F246C: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x801F2470: lw          $t7, -0x39FC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X39FC);
    // 0x801F2474: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801F2478: lw          $a1, 0x0($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X0);
    // 0x801F247C: lui         $a2, 0xA00
    ctx->r6 = S32(0XA00 << 16);
    // 0x801F2480: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801F2484: lw          $v1, 0x5C($t7)
    ctx->r3 = MEM_W(ctx->r15, 0X5C);
    // 0x801F2488: lwc1        $f0, 0x20($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X20);
    // 0x801F248C: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801F2490: lbu         $t8, 0x58($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X58);
    // 0x801F2494: lwc1        $f8, 0x54($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X54);
    // 0x801F2498: addiu       $a2, $a2, 0x800
    ctx->r6 = ADD32(ctx->r6, 0X800);
    // 0x801F249C: addiu       $t9, $t8, -0x28
    ctx->r25 = ADD32(ctx->r24, -0X28);
    // 0x801F24A0: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x801F24A4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801F24A8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801F24AC: addiu       $t1, $zero, 0x80
    ctx->r9 = ADD32(0, 0X80);
    // 0x801F24B0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x801F24B4: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
    // 0x801F24B8: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x801F24BC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801F24C0: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x801F24C4: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x801F24C8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801F24CC: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801F24D0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x801F24D4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801F24D8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801F24DC: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x801F24E0: lwc1        $f16, 0x1C($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x801F24E4: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x801F24E8: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    // 0x801F24EC: lwc1        $f18, 0x24($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X24);
    // 0x801F24F0: sw          $t0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r8;
    // 0x801F24F4: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x801F24F8: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801F24FC: jal         0x800358E8
    // 0x801F2500: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    func_800358E8_364E8(rdram, ctx);
        goto after_1;
    // 0x801F2500: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    after_1:
    // 0x801F2504: lw          $t0, 0x64($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X64);
    // 0x801F2508: beq         $v0, $zero, L_801F25C4
    if (ctx->r2 == 0) {
        // 0x801F250C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_801F25C4;
    }
    // 0x801F250C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801F2510: lw          $s0, 0x18($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X18);
    // 0x801F2514: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x801F2518: lbu         $a2, 0x6F($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X6F);
    // 0x801F251C: beql        $s0, $zero, L_801F25C8
    if (ctx->r16 == 0) {
        // 0x801F2520: lw          $ra, 0x4C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X4C);
            goto L_801F25C8;
    }
    goto skip_0;
    // 0x801F2520: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    skip_0:
    // 0x801F2524: sw          $v0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r2;
    // 0x801F2528: jal         0x801EE4AC
    // 0x801F252C: sw          $t0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r8;
    func_801EE4AC_5AA3BC(rdram, ctx);
        goto after_2;
    // 0x801F252C: sw          $t0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r8;
    after_2:
    // 0x801F2530: lw          $t0, 0x64($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X64);
    // 0x801F2534: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x801F2538: lui         $a2, 0x8007
    ctx->r6 = S32(0X8007 << 16);
    // 0x801F253C: lbu         $t2, 0x5($t0)
    ctx->r10 = MEM_BU(ctx->r8, 0X5);
    // 0x801F2540: lbu         $a3, 0x4($t0)
    ctx->r7 = MEM_BU(ctx->r8, 0X4);
    // 0x801F2544: addiu       $a1, $a1, 0xB8
    ctx->r5 = ADD32(ctx->r5, 0XB8);
    // 0x801F2548: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x801F254C: lbu         $t3, 0x6($t0)
    ctx->r11 = MEM_BU(ctx->r8, 0X6);
    // 0x801F2550: addiu       $a2, $a2, -0x2218
    ctx->r6 = ADD32(ctx->r6, -0X2218);
    // 0x801F2554: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801F2558: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x801F255C: lbu         $t4, 0x7($t0)
    ctx->r12 = MEM_BU(ctx->r8, 0X7);
    // 0x801F2560: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x801F2564: lbu         $t5, 0x8($t0)
    ctx->r13 = MEM_BU(ctx->r8, 0X8);
    // 0x801F2568: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x801F256C: lbu         $t6, 0x9($t0)
    ctx->r14 = MEM_BU(ctx->r8, 0X9);
    // 0x801F2570: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x801F2574: lbu         $t7, 0xA($t0)
    ctx->r15 = MEM_BU(ctx->r8, 0XA);
    // 0x801F2578: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x801F257C: jal         0x801DC554
    // 0x801F2580: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    func_801DC554_598464(rdram, ctx);
        goto after_3;
    // 0x801F2580: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    after_3:
    // 0x801F2584: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x801F2588: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801F258C: addiu       $t9, $zero, 0x152
    ctx->r25 = ADD32(0, 0X152);
    // 0x801F2590: or          $t8, $a1, $at
    ctx->r24 = ctx->r5 | ctx->r1;
    // 0x801F2594: sw          $t8, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r24;
    // 0x801F2598: sh          $t9, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r25;
    // 0x801F259C: jal         0x80014218
    // 0x801F25A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80014218_14E18(rdram, ctx);
        goto after_4;
    // 0x801F25A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x801F25A4: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801F25A8: addiu       $a2, $a2, 0x5000
    ctx->r6 = ADD32(ctx->r6, 0X5000);
    // 0x801F25AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F25B0: jal         0x801E8820
    // 0x801F25B4: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_801E8820_5A4730(rdram, ctx);
        goto after_5;
    // 0x801F25B4: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_5:
    // 0x801F25B8: addiu       $t1, $zero, 0x7
    ctx->r9 = ADD32(0, 0X7);
    // 0x801F25BC: sb          $t1, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r9;
    // 0x801F25C0: sb          $zero, 0x65($s0)
    MEM_B(0X65, ctx->r16) = 0;
L_801F25C4:
    // 0x801F25C4: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
L_801F25C8:
    // 0x801F25C8: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x801F25CC: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x801F25D0: jr          $ra
    // 0x801F25D4: nop

    TRACE_RETURN()
    return;
    // 0x801F25D4: nop

;}
RECOMP_FUNC void func_801F6374_5B2284(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F6374: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F6378: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F637C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F6380: jal         0x801F64E8
    // 0x801F6384: addiu       $a1, $zero, 0x9E
    ctx->r5 = ADD32(0, 0X9E);
    func_801F64E8_5B23F8(rdram, ctx);
        goto after_0;
    // 0x801F6384: addiu       $a1, $zero, 0x9E
    ctx->r5 = ADD32(0, 0X9E);
    after_0:
    // 0x801F6388: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F638C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F6390: jr          $ra
    // 0x801F6394: nop

    TRACE_RETURN()
    return;
    // 0x801F6394: nop

;}
RECOMP_FUNC void func_801DE4DC_59A3EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DE4DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DE4E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DE4E4: jal         0x801E3AC0
    // 0x801DE4E8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801E3AC0_59F9D0(rdram, ctx);
        goto after_0;
    // 0x801DE4E8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801DE4EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DE4F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DE4F4: jr          $ra
    // 0x801DE4F8: nop

    TRACE_RETURN()
    return;
    // 0x801DE4F8: nop

;}
RECOMP_FUNC void func_801E3EBC_59FDCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E3EBC: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x801E3EC0: lw          $t7, -0x3A1C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A1C);
    // 0x801E3EC4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801E3EC8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801E3ECC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801E3ED0: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x801E3ED4: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801E3ED8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E3EDC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E3EE0: bgtz        $t7, L_801E3F14
    if (SIGNED(ctx->r15) > 0) {
        // 0x801E3EE4: sw          $a2, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r6;
            goto L_801E3F14;
    }
    // 0x801E3EE4: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x801E3EE8: jal         0x801E5274
    // 0x801E3EEC: nop

    func_801E5274_5A1184(rdram, ctx);
        goto after_0;
    // 0x801E3EEC: nop

    after_0:
    // 0x801E3EF0: bnel        $v0, $zero, L_801E4068
    if (ctx->r2 != 0) {
        // 0x801E3EF4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801E4068;
    }
    goto skip_0;
    // 0x801E3EF4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801E3EF8: jal         0x801E3098
    // 0x801E3EFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E3098_59EFA8(rdram, ctx);
        goto after_1;
    // 0x801E3EFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801E3F00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E3F04: jal         0x801DACDC
    // 0x801E3F08: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_2;
    // 0x801E3F08: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    after_2:
    // 0x801E3F0C: b           L_801E4068
    // 0x801E3F10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E4068;
    // 0x801E3F10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E3F14:
    // 0x801E3F14: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
    // 0x801E3F18: lhu         $v1, 0x30($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X30);
    // 0x801E3F1C: sltiu       $a0, $v1, 0x1
    ctx->r4 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x801E3F20: addiu       $t8, $v1, 0x1
    ctx->r24 = ADD32(ctx->r3, 0X1);
    // 0x801E3F24: bne         $a0, $zero, L_801E4064
    if (ctx->r4 != 0) {
        // 0x801E3F28: sh          $t8, 0x30($v0)
        MEM_H(0X30, ctx->r2) = ctx->r24;
            goto L_801E4064;
    }
    // 0x801E3F28: sh          $t8, 0x30($v0)
    MEM_H(0X30, ctx->r2) = ctx->r24;
    // 0x801E3F2C: lw          $t0, 0x5C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X5C);
    // 0x801E3F30: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x801E3F34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E3F38: sh          $t9, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r25;
    // 0x801E3F3C: lhu         $t1, 0x98($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X98);
    // 0x801E3F40: bne         $t1, $zero, L_801E3FBC
    if (ctx->r9 != 0) {
        // 0x801E3F44: nop
    
            goto L_801E3FBC;
    }
    // 0x801E3F44: nop

    // 0x801E3F48: lbu         $t2, 0x90($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X90);
    // 0x801E3F4C: lui         $t4, 0x8020
    ctx->r12 = S32(0X8020 << 16);
    // 0x801E3F50: lw          $t9, 0x5C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X5C);
    // 0x801E3F54: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x801E3F58: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x801E3F5C: lw          $t4, -0x39F4($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X39F4);
    // 0x801E3F60: lh          $t0, 0x32($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X32);
    // 0x801E3F64: lwc1        $f4, 0xC($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0XC);
    // 0x801E3F68: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x801E3F6C: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x801E3F70: nop

    // 0x801E3F74: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x801E3F78: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x801E3F7C: slt         $at, $t8, $t0
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x801E3F80: beql        $at, $zero, L_801E4068
    if (ctx->r1 == 0) {
        // 0x801E3F84: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801E4068;
    }
    goto skip_1;
    // 0x801E3F84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x801E3F88: jal         0x801E3324
    // 0x801E3F8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E3324_59F234(rdram, ctx);
        goto after_3;
    // 0x801E3F8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801E3F90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E3F94: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x801E3F98: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x801E3F9C: jal         0x801DAC7C
    // 0x801E3FA0: lbu         $a3, 0xDB($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XDB);
    func_801DAC7C_596B8C(rdram, ctx);
        goto after_4;
    // 0x801E3FA0: lbu         $a3, 0xDB($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XDB);
    after_4:
    // 0x801E3FA4: jal         0x801CC454
    // 0x801E3FA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801CC454_588364(rdram, ctx);
        goto after_5;
    // 0x801E3FA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x801E3FAC: jal         0x801E3134
    // 0x801E3FB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E3134_59F044(rdram, ctx);
        goto after_6;
    // 0x801E3FB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x801E3FB4: b           L_801E4068
    // 0x801E3FB8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E4068;
    // 0x801E3FB8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E3FBC:
    // 0x801E3FBC: jal         0x801E2740
    // 0x801E3FC0: sb          $a1, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r5;
    func_801E2740_59E650(rdram, ctx);
        goto after_7;
    // 0x801E3FC0: sb          $a1, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r5;
    after_7:
    // 0x801E3FC4: bne         $v0, $zero, L_801E3FD4
    if (ctx->r2 != 0) {
        // 0x801E3FC8: lbu         $a1, 0x27($sp)
        ctx->r5 = MEM_BU(ctx->r29, 0X27);
            goto L_801E3FD4;
    }
    // 0x801E3FC8: lbu         $a1, 0x27($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X27);
    // 0x801E3FCC: bnel        $a1, $zero, L_801E3FFC
    if (ctx->r5 != 0) {
        // 0x801E3FD0: lbu         $t1, 0x90($s0)
        ctx->r9 = MEM_BU(ctx->r16, 0X90);
            goto L_801E3FFC;
    }
    goto skip_2;
    // 0x801E3FD0: lbu         $t1, 0x90($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X90);
    skip_2:
L_801E3FD4:
    // 0x801E3FD4: jal         0x801CC454
    // 0x801E3FD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801CC454_588364(rdram, ctx);
        goto after_8;
    // 0x801E3FD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x801E3FDC: jal         0x801E3134
    // 0x801E3FE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E3134_59F044(rdram, ctx);
        goto after_9;
    // 0x801E3FE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x801E3FE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E3FE8: jal         0x801DACDC
    // 0x801E3FEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_10;
    // 0x801E3FEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x801E3FF0: b           L_801E4068
    // 0x801E3FF4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E4068;
    // 0x801E3FF4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801E3FF8: lbu         $t1, 0x90($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X90);
L_801E3FFC:
    // 0x801E3FFC: lui         $t3, 0x8020
    ctx->r11 = S32(0X8020 << 16);
    // 0x801E4000: lw          $t6, 0x5C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X5C);
    // 0x801E4004: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x801E4008: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x801E400C: lw          $t3, -0x39F4($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X39F4);
    // 0x801E4010: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801E4014: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801E4018: lwc1        $f8, 0xC($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0XC);
    // 0x801E401C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x801E4020: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x801E4024: nop

    // 0x801E4028: sh          $t5, 0x32($t6)
    MEM_H(0X32, ctx->r14) = ctx->r13;
    // 0x801E402C: lbu         $v0, 0x60($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X60);
    // 0x801E4030: swc1        $f16, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->f16.u32l;
    // 0x801E4034: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x801E4038: beq         $v0, $at, L_801E404C
    if (ctx->r2 == ctx->r1) {
        // 0x801E403C: swc1        $f18, 0xA4($s0)
        MEM_W(0XA4, ctx->r16) = ctx->f18.u32l;
            goto L_801E404C;
    }
    // 0x801E403C: swc1        $f18, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->f18.u32l;
    // 0x801E4040: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801E4044: bne         $v0, $at, L_801E405C
    if (ctx->r2 != ctx->r1) {
        // 0x801E4048: nop
    
            goto L_801E405C;
    }
    // 0x801E4048: nop

L_801E404C:
    // 0x801E404C: jal         0x801DAD08
    // 0x801E4050: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801DAD08_596C18(rdram, ctx);
        goto after_11;
    // 0x801E4050: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x801E4054: b           L_801E4068
    // 0x801E4058: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E4068;
    // 0x801E4058: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E405C:
    // 0x801E405C: jal         0x801DACDC
    // 0x801E4060: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_12;
    // 0x801E4060: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
L_801E4064:
    // 0x801E4064: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E4068:
    // 0x801E4068: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801E406C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801E4070: jr          $ra
    // 0x801E4074: nop

    TRACE_RETURN()
    return;
    // 0x801E4074: nop

;}
RECOMP_FUNC void func_801E3158_59F068(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E3158: lbu         $t7, 0x30($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X30);
    // 0x801E315C: addiu       $t6, $zero, 0x3C
    ctx->r14 = ADD32(0, 0X3C);
    // 0x801E3160: sb          $t6, 0xD4($a0)
    MEM_B(0XD4, ctx->r4) = ctx->r14;
    // 0x801E3164: andi        $t9, $t7, 0xFFFE
    ctx->r25 = ctx->r15 & 0XFFFE;
    // 0x801E3168: sb          $t9, 0x30($a0)
    MEM_B(0X30, ctx->r4) = ctx->r25;
    // 0x801E316C: ori         $t0, $t9, 0x4
    ctx->r8 = ctx->r25 | 0X4;
    // 0x801E3170: jr          $ra
    // 0x801E3174: sb          $t0, 0x30($a0)
    MEM_B(0X30, ctx->r4) = ctx->r8;
    TRACE_RETURN()
    return;
    // 0x801E3174: sb          $t0, 0x30($a0)
    MEM_B(0X30, ctx->r4) = ctx->r8;
;}
RECOMP_FUNC void func_801E8724_5A4634(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E8724: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801E8728: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E872C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x801E8730: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x801E8734: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801E8738: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x801E873C: lwc1        $f4, 0x1C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x801E8740: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801E8744: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801E8748: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x801E874C: lbu         $t7, 0x60($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X60);
    // 0x801E8750: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x801E8754: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x801E8758: lhu         $t9, -0x3998($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X3998);
    // 0x801E875C: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x801E8760: bgez        $t9, L_801E8774
    if (SIGNED(ctx->r25) >= 0) {
        // 0x801E8764: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_801E8774;
    }
    // 0x801E8764: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x801E8768: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801E876C: nop

    // 0x801E8770: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
L_801E8774:
    // 0x801E8774: lui         $at, 0xBF40
    ctx->r1 = S32(0XBF40 << 16);
    // 0x801E8778: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801E877C: lwc1        $f8, 0x1C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x801E8780: lui         $at, 0xC334
    ctx->r1 = S32(0XC334 << 16);
    // 0x801E8784: mul.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x801E8788: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801E878C: addiu       $t0, $sp, 0x24
    ctx->r8 = ADD32(ctx->r29, 0X24);
    // 0x801E8790: addiu       $t1, $sp, 0x20
    ctx->r9 = ADD32(ctx->r29, 0X20);
    // 0x801E8794: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    // 0x801E8798: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801E879C: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x801E87A0: lwc1        $f18, 0x1C($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x801E87A4: mul.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x801E87A8: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x801E87AC: lhu         $a2, 0x18($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0X18);
    // 0x801E87B0: lhu         $a1, 0x16($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X16);
    // 0x801E87B4: lhu         $a0, 0x14($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X14);
    // 0x801E87B8: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x801E87BC: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x801E87C0: jal         0x80033898
    // 0x801E87C4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_80033898_34498(rdram, ctx);
        goto after_0;
    // 0x801E87C4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_0:
    // 0x801E87C8: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x801E87CC: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x801E87D0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x801E87D4: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801E87D8: lwc1        $f18, 0xC($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801E87DC: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801E87E0: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801E87E4: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
    // 0x801E87E8: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x801E87EC: add.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x801E87F0: swc1        $f4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f4.u32l;
    // 0x801E87F4: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x801E87F8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801E87FC: swc1        $f10, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f10.u32l;
    // 0x801E8800: jal         0x801E7398
    // 0x801E8804: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_801E7398_5A32A8(rdram, ctx);
        goto after_1;
    // 0x801E8804: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_1:
    // 0x801E8808: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801E880C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801E8810: jr          $ra
    // 0x801E8814: nop

    TRACE_RETURN()
    return;
    // 0x801E8814: nop

;}
RECOMP_FUNC void func_801FA03C_5B5F4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FA03C: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x801FA040: addiu       $a1, $a1, -0x3A38
    ctx->r5 = ADD32(ctx->r5, -0X3A38);
    // 0x801FA044: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x801FA048: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801FA04C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801FA050: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801FA054: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801FA058: addu        $v0, $v1, $at
    ctx->r2 = ADD32(ctx->r3, ctx->r1);
    // 0x801FA05C: lbu         $t6, 0x2DE4($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X2DE4);
    // 0x801FA060: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FA064: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x801FA068: sb          $t6, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r14;
    // 0x801FA06C: lbu         $t7, 0x2DF6($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X2DF6);
    // 0x801FA070: sb          $t7, 0x26($sp)
    MEM_B(0X26, ctx->r29) = ctx->r15;
    // 0x801FA074: lhu         $t8, 0x2DF2($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X2DF2);
    // 0x801FA078: sh          $t8, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r24;
    // 0x801FA07C: lhu         $t9, 0x2DF4($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X2DF4);
    // 0x801FA080: sh          $t9, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r25;
    // 0x801FA084: lhu         $t0, 0x2DF8($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X2DF8);
    // 0x801FA088: sh          $t0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r8;
    // 0x801FA08C: lhu         $t1, 0x2FE0($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X2FE0);
    // 0x801FA090: jal         0x8000B3E4
    // 0x801FA094: sh          $t1, -0x520E($at)
    MEM_H(-0X520E, ctx->r1) = ctx->r9;
    func_8000B3E4_BFE4(rdram, ctx);
        goto after_0;
    // 0x801FA094: sh          $t1, -0x520E($at)
    MEM_H(-0X520E, ctx->r1) = ctx->r9;
    after_0:
    // 0x801FA098: jal         0x801F8F0C
    // 0x801FA09C: nop

    func_801F8F0C_5B4E1C(rdram, ctx);
        goto after_1;
    // 0x801FA09C: nop

    after_1:
    // 0x801FA0A0: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x801FA0A4: jal         0x801F9EE4
    // 0x801FA0A8: lhu         $a0, 0x7AC6($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X7AC6);
    func_801F9EE4_5B5DF4(rdram, ctx);
        goto after_2;
    // 0x801FA0A8: lhu         $a0, 0x7AC6($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X7AC6);
    after_2:
    // 0x801FA0AC: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x801FA0B0: addiu       $a1, $a1, -0x3A38
    ctx->r5 = ADD32(ctx->r5, -0X3A38);
    // 0x801FA0B4: lw          $t3, 0x0($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X0);
    // 0x801FA0B8: lbu         $t2, 0x27($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X27);
    // 0x801FA0BC: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FA0C0: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x801FA0C4: sb          $t2, -0x521C($at)
    MEM_B(-0X521C, ctx->r1) = ctx->r10;
    // 0x801FA0C8: lw          $t5, 0x0($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X0);
    // 0x801FA0CC: lbu         $t4, 0x26($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X26);
    // 0x801FA0D0: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FA0D4: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x801FA0D8: sb          $t4, -0x520A($at)
    MEM_B(-0X520A, ctx->r1) = ctx->r12;
    // 0x801FA0DC: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x801FA0E0: lhu         $t6, 0x24($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X24);
    // 0x801FA0E4: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FA0E8: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x801FA0EC: sh          $t6, -0x520E($at)
    MEM_H(-0X520E, ctx->r1) = ctx->r14;
    // 0x801FA0F0: lw          $t9, 0x0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X0);
    // 0x801FA0F4: lhu         $t8, 0x22($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X22);
    // 0x801FA0F8: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FA0FC: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x801FA100: sh          $t8, -0x520C($at)
    MEM_H(-0X520C, ctx->r1) = ctx->r24;
    // 0x801FA104: lw          $t1, 0x0($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X0);
    // 0x801FA108: lhu         $t0, 0x1E($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X1E);
    // 0x801FA10C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FA110: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x801FA114: sh          $t0, -0x5208($at)
    MEM_H(-0X5208, ctx->r1) = ctx->r8;
    // 0x801FA118: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801FA11C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801FA120: jr          $ra
    // 0x801FA124: nop

    TRACE_RETURN()
    return;
    // 0x801FA124: nop

;}
RECOMP_FUNC void func_801CBD88_587C98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CBD88: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801CBD8C: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x801CBD90: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801CBD94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CBD98: beql        $a0, $zero, L_801CBF00
    if (ctx->r4 == 0) {
        // 0x801CBD9C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801CBF00;
    }
    goto skip_0;
    // 0x801CBD9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801CBDA0: jal         0x801DC988
    // 0x801CBDA4: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_801DC988_598898(rdram, ctx);
        goto after_0;
    // 0x801CBDA4: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x801CBDA8: jal         0x801E7FB4
    // 0x801CBDAC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_801E7FB4_5A3EC4(rdram, ctx);
        goto after_1;
    // 0x801CBDAC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x801CBDB0: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x801CBDB4: addiu       $v0, $v0, -0x3A38
    ctx->r2 = ADD32(ctx->r2, -0X3A38);
    // 0x801CBDB8: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x801CBDBC: lui         $a1, 0x3
    ctx->r5 = S32(0X3 << 16);
    // 0x801CBDC0: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x801CBDC4: addu        $t7, $t6, $a1
    ctx->r15 = ADD32(ctx->r14, ctx->r5);
    // 0x801CBDC8: lh          $t8, 0x2FE4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X2FE4);
    // 0x801CBDCC: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x801CBDD0: addiu       $v1, $v1, -0x39F4
    ctx->r3 = ADD32(ctx->r3, -0X39F4);
    // 0x801CBDD4: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x801CBDD8: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x801CBDDC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x801CBDE0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801CBDE4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801CBDE8: swc1        $f6, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->f6.u32l;
    // 0x801CBDEC: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x801CBDF0: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x801CBDF4: addu        $t1, $t0, $a1
    ctx->r9 = ADD32(ctx->r8, ctx->r5);
    // 0x801CBDF8: lh          $t2, 0x2FE6($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X2FE6);
    // 0x801CBDFC: addiu       $t3, $t2, -0x2
    ctx->r11 = ADD32(ctx->r10, -0X2);
    // 0x801CBE00: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x801CBE04: nop

    // 0x801CBE08: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x801CBE0C: swc1        $f10, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->f10.u32l;
    // 0x801CBE10: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x801CBE14: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x801CBE18: addu        $t6, $t5, $a1
    ctx->r14 = ADD32(ctx->r13, ctx->r5);
    // 0x801CBE1C: lh          $t7, 0x2FE8($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2FE8);
    // 0x801CBE20: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x801CBE24: nop

    // 0x801CBE28: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x801CBE2C: swc1        $f18, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f18.u32l;
    // 0x801CBE30: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x801CBE34: lw          $t4, 0x5C($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X5C);
    // 0x801CBE38: addu        $t0, $t9, $a1
    ctx->r8 = ADD32(ctx->r25, ctx->r5);
    // 0x801CBE3C: lhu         $t2, 0x2FEA($t0)
    ctx->r10 = MEM_HU(ctx->r8, 0X2FEA);
    // 0x801CBE40: sh          $t2, 0x94($a0)
    MEM_H(0X94, ctx->r4) = ctx->r10;
    // 0x801CBE44: sll         $t3, $t2, 6
    ctx->r11 = S32(ctx->r10 << 6);
    // 0x801CBE48: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x801CBE4C: lbu         $t5, 0x60($a0)
    ctx->r13 = MEM_BU(ctx->r4, 0X60);
    // 0x801CBE50: bne         $t5, $at, L_801CBE68
    if (ctx->r13 != ctx->r1) {
        // 0x801CBE54: nop
    
            goto L_801CBE68;
    }
    // 0x801CBE54: nop

    // 0x801CBE58: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801CBE5C: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x801CBE60: lhu         $t7, 0x86($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X86);
    // 0x801CBE64: beq         $t7, $at, L_801CBE8C
    if (ctx->r15 == ctx->r1) {
        // 0x801CBE68: lui         $at, 0x8021
        ctx->r1 = S32(0X8021 << 16);
            goto L_801CBE8C;
    }
L_801CBE68:
    // 0x801CBE68: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CBE6C: lwc1        $f4, -0x5828($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5828);
    // 0x801CBE70: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x801CBE74: swc1        $f4, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->f4.u32l;
    // 0x801CBE78: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801CBE7C: lwc1        $f0, 0x24($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X24);
    // 0x801CBE80: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x801CBE84: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x801CBE88: swc1        $f0, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f0.u32l;
L_801CBE8C:
    // 0x801CBE8C: jal         0x801CBF0C
    // 0x801CBE90: nop

    func_801CBF0C_587E1C(rdram, ctx);
        goto after_2;
    // 0x801CBE90: nop

    after_2:
    // 0x801CBE94: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x801CBE98: addiu       $v1, $v1, -0x39F4
    ctx->r3 = ADD32(ctx->r3, -0X39F4);
    // 0x801CBE9C: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x801CBEA0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x801CBEA4: addiu       $v0, $v0, -0x39E4
    ctx->r2 = ADD32(ctx->r2, -0X39E4);
    // 0x801CBEA8: sb          $zero, 0x64($t0)
    MEM_B(0X64, ctx->r8) = 0;
    // 0x801CBEAC: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x801CBEB0: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x801CBEB4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801CBEB8: lwc1        $f0, 0x8($t1)
    ctx->f0.u32l = MEM_W(ctx->r9, 0X8);
    // 0x801CBEBC: addiu       $a0, $a0, -0x39EC
    ctx->r4 = ADD32(ctx->r4, -0X39EC);
    // 0x801CBEC0: swc1        $f0, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->f0.u32l;
    // 0x801CBEC4: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x801CBEC8: swc1        $f0, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->f0.u32l;
    // 0x801CBECC: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x801CBED0: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x801CBED4: lwc1        $f0, 0xC($t4)
    ctx->f0.u32l = MEM_W(ctx->r12, 0XC);
    // 0x801CBED8: swc1        $f0, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->f0.u32l;
    // 0x801CBEDC: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x801CBEE0: swc1        $f0, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f0.u32l;
    // 0x801CBEE4: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x801CBEE8: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x801CBEEC: lwc1        $f0, 0x10($t7)
    ctx->f0.u32l = MEM_W(ctx->r15, 0X10);
    // 0x801CBEF0: swc1        $f0, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f0.u32l;
    // 0x801CBEF4: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x801CBEF8: swc1        $f0, 0x10($t9)
    MEM_W(0X10, ctx->r25) = ctx->f0.u32l;
    // 0x801CBEFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801CBF00:
    // 0x801CBF00: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801CBF04: jr          $ra
    // 0x801CBF08: nop

    TRACE_RETURN()
    return;
    // 0x801CBF08: nop

;}
RECOMP_FUNC void func_801F1CC4_5ADBD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F1CC4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801F1CC8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801F1CCC: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x801F1CD0: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x801F1CD4: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x801F1CD8: lw          $v1, 0x5C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X5C);
    // 0x801F1CDC: addiu       $at, $zero, 0x82
    ctx->r1 = ADD32(0, 0X82);
    // 0x801F1CE0: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801F1CE4: lw          $t6, 0x18($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X18);
    // 0x801F1CE8: sw          $t6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r14;
    // 0x801F1CEC: lbu         $v0, 0xCC($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XCC);
    // 0x801F1CF0: bne         $v0, $at, L_801F1D0C
    if (ctx->r2 != ctx->r1) {
        // 0x801F1CF4: lui         $at, 0x4130
        ctx->r1 = S32(0X4130 << 16);
            goto L_801F1D0C;
    }
    // 0x801F1CF4: lui         $at, 0x4130
    ctx->r1 = S32(0X4130 << 16);
    // 0x801F1CF8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F1CFC: lwc1        $f4, 0x28($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X28);
    // 0x801F1D00: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x801F1D04: nop

    // 0x801F1D08: bc1t        L_801F1D14
    if (c1cs) {
        // 0x801F1D0C: addiu       $at, $zero, 0x83
        ctx->r1 = ADD32(0, 0X83);
            goto L_801F1D14;
    }
L_801F1D0C:
    // 0x801F1D0C: addiu       $at, $zero, 0x83
    ctx->r1 = ADD32(0, 0X83);
    // 0x801F1D10: bne         $v0, $at, L_801F1D24
    if (ctx->r2 != ctx->r1) {
        // 0x801F1D14: lui         $at, 0x4000
        ctx->r1 = S32(0X4000 << 16);
            goto L_801F1D24;
    }
L_801F1D14:
    // 0x801F1D14: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801F1D18: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801F1D1C: b           L_801F1D34
    // 0x801F1D20: lbu         $v0, 0x60($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X60);
        goto L_801F1D34;
    // 0x801F1D20: lbu         $v0, 0x60($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X60);
L_801F1D24:
    // 0x801F1D24: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801F1D28: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801F1D2C: nop

    // 0x801F1D30: lbu         $v0, 0x60($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X60);
L_801F1D34:
    // 0x801F1D34: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801F1D38: beql        $v0, $zero, L_801F1D60
    if (ctx->r2 == 0) {
        // 0x801F1D3C: lhu         $t8, 0x62($s1)
        ctx->r24 = MEM_HU(ctx->r17, 0X62);
            goto L_801F1D60;
    }
    goto skip_0;
    // 0x801F1D3C: lhu         $t8, 0x62($s1)
    ctx->r24 = MEM_HU(ctx->r17, 0X62);
    skip_0:
    // 0x801F1D40: beq         $v0, $at, L_801F1D80
    if (ctx->r2 == ctx->r1) {
        // 0x801F1D44: addiu       $a2, $zero, 0x10
        ctx->r6 = ADD32(0, 0X10);
            goto L_801F1D80;
    }
    // 0x801F1D44: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x801F1D48: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801F1D4C: beq         $v0, $at, L_801F1E94
    if (ctx->r2 == ctx->r1) {
        // 0x801F1D50: lw          $a0, 0x4C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X4C);
            goto L_801F1E94;
    }
    // 0x801F1D50: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x801F1D54: b           L_801F1EBC
    // 0x801F1D58: addiu       $s0, $s1, 0x9C
    ctx->r16 = ADD32(ctx->r17, 0X9C);
        goto L_801F1EBC;
    // 0x801F1D58: addiu       $s0, $s1, 0x9C
    ctx->r16 = ADD32(ctx->r17, 0X9C);
    // 0x801F1D5C: lhu         $t8, 0x62($s1)
    ctx->r24 = MEM_HU(ctx->r17, 0X62);
L_801F1D60:
    // 0x801F1D60: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801F1D64: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x801F1D68: andi        $t0, $t9, 0xFFFF
    ctx->r8 = ctx->r25 & 0XFFFF;
    // 0x801F1D6C: bne         $t0, $zero, L_801F1D78
    if (ctx->r8 != 0) {
        // 0x801F1D70: sh          $t9, 0x62($s1)
        MEM_H(0X62, ctx->r17) = ctx->r25;
            goto L_801F1D78;
    }
    // 0x801F1D70: sh          $t9, 0x62($s1)
    MEM_H(0X62, ctx->r17) = ctx->r25;
    // 0x801F1D74: sb          $t1, 0x60($s1)
    MEM_B(0X60, ctx->r17) = ctx->r9;
L_801F1D78:
    // 0x801F1D78: b           L_801F1EBC
    // 0x801F1D7C: addiu       $s0, $s1, 0x9C
    ctx->r16 = ADD32(ctx->r17, 0X9C);
        goto L_801F1EBC;
    // 0x801F1D7C: addiu       $s0, $s1, 0x9C
    ctx->r16 = ADD32(ctx->r17, 0X9C);
L_801F1D80:
    // 0x801F1D80: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F1D84: lwc1        $f8, -0x4128($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X4128);
    // 0x801F1D88: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801F1D8C: addiu       $s0, $s1, 0x9C
    ctx->r16 = ADD32(ctx->r17, 0X9C);
    // 0x801F1D90: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x801F1D94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F1D98: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801F1D9C: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x801F1DA0: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x801F1DA4: nop

    // 0x801F1DA8: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x801F1DAC: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x801F1DB0: nop

    // 0x801F1DB4: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x801F1DB8: beql        $a1, $zero, L_801F1E08
    if (ctx->r5 == 0) {
        // 0x801F1DBC: mfc1        $a1, $f16
        ctx->r5 = (int32_t)ctx->f16.u32l;
            goto L_801F1E08;
    }
    goto skip_1;
    // 0x801F1DBC: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    skip_1:
    // 0x801F1DC0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801F1DC4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801F1DC8: sub.s       $f16, $f10, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x801F1DCC: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x801F1DD0: nop

    // 0x801F1DD4: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x801F1DD8: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x801F1DDC: nop

    // 0x801F1DE0: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x801F1DE4: bne         $a1, $zero, L_801F1DFC
    if (ctx->r5 != 0) {
        // 0x801F1DE8: nop
    
            goto L_801F1DFC;
    }
    // 0x801F1DE8: nop

    // 0x801F1DEC: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x801F1DF0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801F1DF4: b           L_801F1E14
    // 0x801F1DF8: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
        goto L_801F1E14;
    // 0x801F1DF8: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
L_801F1DFC:
    // 0x801F1DFC: b           L_801F1E14
    // 0x801F1E00: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
        goto L_801F1E14;
    // 0x801F1E00: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x801F1E04: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
L_801F1E08:
    // 0x801F1E08: nop

    // 0x801F1E0C: bltz        $a1, L_801F1DFC
    if (SIGNED(ctx->r5) < 0) {
        // 0x801F1E10: nop
    
            goto L_801F1DFC;
    }
    // 0x801F1E10: nop

L_801F1E14:
    // 0x801F1E14: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x801F1E18: andi        $t3, $a1, 0xFF
    ctx->r11 = ctx->r5 & 0XFF;
    // 0x801F1E1C: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    // 0x801F1E20: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
    // 0x801F1E24: jal         0x801EE330
    // 0x801F1E28: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    func_801EE330_5AA240(rdram, ctx);
        goto after_0;
    // 0x801F1E28: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x801F1E2C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801F1E30: lwc1        $f0, 0x38($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X38);
    // 0x801F1E34: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801F1E38: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x801F1E3C: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x801F1E40: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x801F1E44: jal         0x801EE5F4
    // 0x801F1E48: nop

    func_801EE5F4_5AA504(rdram, ctx);
        goto after_1;
    // 0x801F1E48: nop

    after_1:
    // 0x801F1E4C: beq         $v0, $zero, L_801F1E5C
    if (ctx->r2 == 0) {
        // 0x801F1E50: lw          $v1, 0x44($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X44);
            goto L_801F1E5C;
    }
    // 0x801F1E50: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x801F1E54: addiu       $t4, $zero, 0xF0
    ctx->r12 = ADD32(0, 0XF0);
    // 0x801F1E58: sb          $t4, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r12;
L_801F1E5C:
    // 0x801F1E5C: lbu         $t5, 0xCC($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0XCC);
    // 0x801F1E60: addiu       $at, $zero, 0x82
    ctx->r1 = ADD32(0, 0X82);
    // 0x801F1E64: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x801F1E68: bne         $t5, $at, L_801F1EBC
    if (ctx->r13 != ctx->r1) {
        // 0x801F1E6C: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_801F1EBC;
    }
    // 0x801F1E6C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801F1E70: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801F1E74: lwc1        $f6, 0x28($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X28);
    // 0x801F1E78: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x801F1E7C: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x801F1E80: nop

    // 0x801F1E84: bc1fl       L_801F1EC0
    if (!c1cs) {
        // 0x801F1E88: lw          $a0, 0x40($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X40);
            goto L_801F1EC0;
    }
    goto skip_2;
    // 0x801F1E88: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    skip_2:
    // 0x801F1E8C: b           L_801F1EBC
    // 0x801F1E90: sb          $t7, 0x60($s1)
    MEM_B(0X60, ctx->r17) = ctx->r15;
        goto L_801F1EBC;
    // 0x801F1E90: sb          $t7, 0x60($s1)
    MEM_B(0X60, ctx->r17) = ctx->r15;
L_801F1E94:
    // 0x801F1E94: jal         0x801EE5F4
    // 0x801F1E98: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    func_801EE5F4_5AA504(rdram, ctx);
        goto after_2;
    // 0x801F1E98: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    after_2:
    // 0x801F1E9C: addiu       $s0, $s1, 0x9C
    ctx->r16 = ADD32(ctx->r17, 0X9C);
    // 0x801F1EA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F1EA4: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x801F1EA8: jal         0x801EE330
    // 0x801F1EAC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_801EE330_5AA240(rdram, ctx);
        goto after_3;
    // 0x801F1EAC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_3:
    // 0x801F1EB0: beq         $v0, $zero, L_801F1EBC
    if (ctx->r2 == 0) {
        // 0x801F1EB4: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_801F1EBC;
    }
    // 0x801F1EB4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801F1EB8: sb          $t8, 0x65($s1)
    MEM_B(0X65, ctx->r17) = ctx->r24;
L_801F1EBC:
    // 0x801F1EBC: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
L_801F1EC0:
    // 0x801F1EC0: jal         0x801EE25C
    // 0x801F1EC4: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    func_801EE25C_5AA16C(rdram, ctx);
        goto after_4;
    // 0x801F1EC4: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    after_4:
    // 0x801F1EC8: lbu         $t1, 0x2($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X2);
    // 0x801F1ECC: lbu         $a3, 0x1($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X1);
    // 0x801F1ED0: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801F1ED4: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x801F1ED8: lbu         $t2, 0x3($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X3);
    // 0x801F1EDC: addiu       $a2, $a2, 0x4C28
    ctx->r6 = ADD32(ctx->r6, 0X4C28);
    // 0x801F1EE0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801F1EE4: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x801F1EE8: lbu         $t3, 0x4($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X4);
    // 0x801F1EEC: or          $t9, $a2, $at
    ctx->r25 = ctx->r6 | ctx->r1;
    // 0x801F1EF0: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801F1EF4: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x801F1EF8: lbu         $t4, 0x5($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X5);
    // 0x801F1EFC: or          $a2, $t9, $at
    ctx->r6 = ctx->r25 | ctx->r1;
    // 0x801F1F00: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x801F1F04: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x801F1F08: lbu         $t5, 0x6($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X6);
    // 0x801F1F0C: addiu       $a1, $s1, 0xA4
    ctx->r5 = ADD32(ctx->r17, 0XA4);
    // 0x801F1F10: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x801F1F14: lbu         $t6, 0x0($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X0);
    // 0x801F1F18: jal         0x801DC554
    // 0x801F1F1C: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    func_801DC554_598464(rdram, ctx);
        goto after_5;
    // 0x801F1F1C: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    after_5:
    // 0x801F1F20: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x801F1F24: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x801F1F28: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x801F1F2C: jr          $ra
    // 0x801F1F30: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x801F1F30: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_801DEFE8_59AEF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DEFE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DEFEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DEFF0: jal         0x801E4530
    // 0x801DEFF4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801E4530_5A0440(rdram, ctx);
        goto after_0;
    // 0x801DEFF4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801DEFF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DEFFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DF000: jr          $ra
    // 0x801DF004: nop

    TRACE_RETURN()
    return;
    // 0x801DF004: nop

;}
RECOMP_FUNC void func_801D8E94_594DA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D8E94: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801D8E98: addiu       $a2, $a2, -0x39D4
    ctx->r6 = ADD32(ctx->r6, -0X39D4);
    // 0x801D8E9C: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x801D8EA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D8EA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D8EA8: sh          $zero, 0x82($t6)
    MEM_H(0X82, ctx->r14) = 0;
    // 0x801D8EAC: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x801D8EB0: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D8EB4: addiu       $v0, $v0, -0x3410
    ctx->r2 = ADD32(ctx->r2, -0X3410);
    // 0x801D8EB8: lhu         $t7, 0x82($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X82);
    // 0x801D8EBC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801D8EC0: sh          $t7, 0x80($v1)
    MEM_H(0X80, ctx->r3) = ctx->r15;
    // 0x801D8EC4: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x801D8EC8: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801D8ECC: lw          $t8, 0x0($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X0);
    // 0x801D8ED0: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801D8ED4: swc1        $f8, 0x84($t8)
    MEM_W(0X84, ctx->r24) = ctx->f8.u32l;
    // 0x801D8ED8: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801D8EDC: lwc1        $f10, 0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4);
    // 0x801D8EE0: lw          $t9, 0x0($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X0);
    // 0x801D8EE4: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x801D8EE8: swc1        $f18, 0x88($t9)
    MEM_W(0X88, ctx->r25) = ctx->f18.u32l;
    // 0x801D8EEC: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801D8EF0: lwc1        $f6, 0x14($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X14);
    // 0x801D8EF4: lw          $t0, 0x0($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X0);
    // 0x801D8EF8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801D8EFC: swc1        $f8, 0x8C($t0)
    MEM_W(0X8C, ctx->r8) = ctx->f8.u32l;
    // 0x801D8F00: lw          $a1, -0x39F4($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X39F4);
    // 0x801D8F04: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x801D8F08: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801D8F0C: lwc1        $f16, 0x10($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X10);
    // 0x801D8F10: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x801D8F14: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801D8F18: sub.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x801D8F1C: jal         0x80003A94
    // 0x801D8F20: sub.s       $f14, $f18, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f18.fl - ctx->f4.fl;
    func_80003A94_4694(rdram, ctx);
        goto after_0;
    // 0x801D8F20: sub.s       $f14, $f18, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f18.fl - ctx->f4.fl;
    after_0:
    // 0x801D8F24: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801D8F28: addiu       $a2, $a2, -0x39D4
    ctx->r6 = ADD32(ctx->r6, -0X39D4);
    // 0x801D8F2C: lw          $t1, 0x0($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X0);
    // 0x801D8F30: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801D8F34: lui         $t2, 0x8020
    ctx->r10 = S32(0X8020 << 16);
    // 0x801D8F38: sh          $v0, 0x90($t1)
    MEM_H(0X90, ctx->r9) = ctx->r2;
    // 0x801D8F3C: lw          $t2, -0x39DC($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X39DC);
    // 0x801D8F40: lw          $t4, 0x0($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X0);
    // 0x801D8F44: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x801D8F48: lhu         $t3, 0xB0($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0XB0);
    // 0x801D8F4C: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x801D8F50: sh          $t3, 0x92($t4)
    MEM_H(0X92, ctx->r12) = ctx->r11;
    // 0x801D8F54: sb          $zero, 0xE1($a0)
    MEM_B(0XE1, ctx->r4) = 0;
    // 0x801D8F58: sb          $t5, 0xD2($a0)
    MEM_B(0XD2, ctx->r4) = ctx->r13;
    // 0x801D8F5C: jal         0x80221F70
    // 0x801D8F60: sb          $t6, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = ctx->r14;
    func_80221F70_5DD440(rdram, ctx);
        goto after_1;
    // 0x801D8F60: sb          $t6, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = ctx->r14;
    after_1:
    // 0x801D8F64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D8F68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D8F6C: jr          $ra
    // 0x801D8F70: nop

    TRACE_RETURN()
    return;
    // 0x801D8F70: nop

;}
RECOMP_FUNC void func_801F0180_5AC090(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F0180: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x801F0184: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F0188: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x801F018C: lwc1        $f0, -0x4138($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4138);
    // 0x801F0190: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x801F0194: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x801F0198: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    // 0x801F019C: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x801F01A0: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    // 0x801F01A4: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    // 0x801F01A8: addiu       $t7, $t7, 0x4F7C
    ctx->r15 = ADD32(ctx->r15, 0X4F7C);
    // 0x801F01AC: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x801F01B0: lw          $s0, 0x18($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X18);
    // 0x801F01B4: addiu       $v1, $sp, 0x58
    ctx->r3 = ADD32(ctx->r29, 0X58);
    // 0x801F01B8: sw          $at, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r1;
    // 0x801F01BC: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x801F01C0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801F01C4: ori         $t5, $zero, 0x8000
    ctx->r13 = 0 | 0X8000;
    // 0x801F01C8: sw          $t0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r8;
    // 0x801F01CC: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x801F01D0: ori         $t6, $zero, 0x8000
    ctx->r14 = 0 | 0X8000;
    // 0x801F01D4: ori         $t9, $zero, 0x8000
    ctx->r25 = 0 | 0X8000;
    // 0x801F01D8: sw          $at, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r1;
    // 0x801F01DC: lw          $t0, 0xC($t7)
    ctx->r8 = MEM_W(ctx->r15, 0XC);
    // 0x801F01E0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801F01E4: addiu       $t7, $zero, 0x152
    ctx->r15 = ADD32(0, 0X152);
    // 0x801F01E8: sw          $t0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r8;
    // 0x801F01EC: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x801F01F0: lw          $v0, 0x70($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X70);
    // 0x801F01F4: addiu       $t8, $zero, 0x80
    ctx->r24 = ADD32(0, 0X80);
    // 0x801F01F8: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x801F01FC: addu        $t3, $v1, $t2
    ctx->r11 = ADD32(ctx->r3, ctx->r10);
    // 0x801F0200: lw          $a1, 0x0($t3)
    ctx->r5 = MEM_W(ctx->r11, 0X0);
    // 0x801F0204: addiu       $v0, $v0, 0xA0
    ctx->r2 = ADD32(ctx->r2, 0XA0);
    // 0x801F0208: or          $a2, $v0, $at
    ctx->r6 = ctx->r2 | ctx->r1;
    // 0x801F020C: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801F0210: or          $t4, $a2, $at
    ctx->r12 = ctx->r6 | ctx->r1;
    // 0x801F0214: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801F0218: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    // 0x801F021C: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    // 0x801F0220: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
    // 0x801F0224: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x801F0228: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x801F022C: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x801F0230: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x801F0234: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x801F0238: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801F023C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x801F0240: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F0244: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    // 0x801F0248: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    // 0x801F024C: jal         0x80034680
    // 0x801F0250: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    func_80034680_35280(rdram, ctx);
        goto after_0;
    // 0x801F0250: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    after_0:
    // 0x801F0254: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801F0258: addiu       $a2, $a2, 0x4AB0
    ctx->r6 = ADD32(ctx->r6, 0X4AB0);
    // 0x801F025C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F0260: jal         0x801E8820
    // 0x801F0264: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_801E8820_5A4730(rdram, ctx);
        goto after_1;
    // 0x801F0264: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_1:
    // 0x801F0268: addiu       $t0, $zero, 0x128
    ctx->r8 = ADD32(0, 0X128);
    // 0x801F026C: sh          $t0, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r8;
    // 0x801F0270: lw          $t1, 0x74($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X74);
    // 0x801F0274: lui         $t4, 0x8021
    ctx->r12 = S32(0X8021 << 16);
    // 0x801F0278: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801F027C: lbu         $t2, 0x90($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X90);
    // 0x801F0280: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x801F0284: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x801F0288: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x801F028C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x801F0290: lw          $t4, -0x2DE0($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X2DE0);
    // 0x801F0294: sb          $t5, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r13;
    // 0x801F0298: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x801F029C: sw          $t4, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r12;
    // 0x801F02A0: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x801F02A4: lui         $a3, 0xC248
    ctx->r7 = S32(0XC248 << 16);
    // 0x801F02A8: jal         0x801EE530
    // 0x801F02AC: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    func_801EE530_5AA440(rdram, ctx);
        goto after_2;
    // 0x801F02AC: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    after_2:
    // 0x801F02B0: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x801F02B4: sb          $t6, 0x94($s0)
    MEM_B(0X94, ctx->r16) = ctx->r14;
    // 0x801F02B8: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801F02BC: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x801F02C0: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x801F02C4: addiu       $t1, $zero, 0xBA
    ctx->r9 = ADD32(0, 0XBA);
    // 0x801F02C8: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x801F02CC: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x801F02D0: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x801F02D4: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x801F02D8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x801F02DC: addiu       $a2, $a2, 0x4C28
    ctx->r6 = ADD32(ctx->r6, 0X4C28);
    // 0x801F02E0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801F02E4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801F02E8: lbu         $t3, 0x94($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X94);
    // 0x801F02EC: or          $t9, $a2, $at
    ctx->r25 = ctx->r6 | ctx->r1;
    // 0x801F02F0: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801F02F4: or          $a2, $t9, $at
    ctx->r6 = ctx->r25 | ctx->r1;
    // 0x801F02F8: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x801F02FC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x801F0300: addiu       $a3, $zero, 0xD1
    ctx->r7 = ADD32(0, 0XD1);
    // 0x801F0304: jal         0x801DC554
    // 0x801F0308: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    func_801DC554_598464(rdram, ctx);
        goto after_3;
    // 0x801F0308: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    after_3:
    // 0x801F030C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x801F0310: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x801F0314: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x801F0318: jr          $ra
    // 0x801F031C: nop

    TRACE_RETURN()
    return;
    // 0x801F031C: nop

;}
RECOMP_FUNC void func_801E28B0_59E7C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E28B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E28B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E28B8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E28BC: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x801E28C0: jal         0x801E3834
    // 0x801E28C4: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    func_801E3834_59F744(rdram, ctx);
        goto after_0;
    // 0x801E28C4: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    after_0:
    // 0x801E28C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E28CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E28D0: jr          $ra
    // 0x801E28D4: nop

    TRACE_RETURN()
    return;
    // 0x801E28D4: nop

;}
RECOMP_FUNC void func_801EF9F4_5AB904(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EF9F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801EF9F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801EF9FC: jal         0x801E8C44
    // 0x801EFA00: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    func_801E8C44_5A4B54(rdram, ctx);
        goto after_0;
    // 0x801EFA00: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    after_0:
    // 0x801EFA04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801EFA08: slti        $t6, $v0, 0x3
    ctx->r14 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x801EFA0C: xori        $v0, $t6, 0x1
    ctx->r2 = ctx->r14 ^ 0X1;
    // 0x801EFA10: jr          $ra
    // 0x801EFA14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x801EFA14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_801DAC7C_596B8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DAC7C: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x801DAC80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DAC84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DAC88: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801DAC8C: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x801DAC90: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x801DAC94: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801DAC98: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x801DAC9C: jal         0x801DAD68
    // 0x801DACA0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801DAD68_596C78(rdram, ctx);
        goto after_0;
    // 0x801DACA0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801DACA4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x801DACA8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801DACAC: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x801DACB0: andi        $t8, $t7, 0x81
    ctx->r24 = ctx->r15 & 0X81;
    // 0x801DACB4: beq         $t8, $zero, L_801DACC4
    if (ctx->r24 == 0) {
        // 0x801DACB8: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_801DACC4;
    }
    // 0x801DACB8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801DACBC: b           L_801DACC8
    // 0x801DACC0: sb          $t9, 0xDB($a0)
    MEM_B(0XDB, ctx->r4) = ctx->r25;
        goto L_801DACC8;
    // 0x801DACC0: sb          $t9, 0xDB($a0)
    MEM_B(0XDB, ctx->r4) = ctx->r25;
L_801DACC4:
    // 0x801DACC4: sb          $zero, 0xDB($a0)
    MEM_B(0XDB, ctx->r4) = 0;
L_801DACC8:
    // 0x801DACC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DACCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DACD0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x801DACD4: jr          $ra
    // 0x801DACD8: nop

    TRACE_RETURN()
    return;
    // 0x801DACD8: nop

;}
RECOMP_FUNC void func_801E132C_59D23C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E132C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E1330: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E1334: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E1338: lbu         $v0, 0x60($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X60);
    // 0x801E133C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801E1340: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801E1344: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x801E1348: addu        $a1, $a1, $t6
    ctx->r5 = ADD32(ctx->r5, ctx->r14);
    // 0x801E134C: addu        $a2, $a2, $t6
    ctx->r6 = ADD32(ctx->r6, ctx->r14);
    // 0x801E1350: lw          $a2, 0x4370($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X4370);
    // 0x801E1354: lw          $a1, 0x4340($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4340);
    // 0x801E1358: jal         0x801E54E0
    // 0x801E135C: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    func_801E54E0_5A13F0(rdram, ctx);
        goto after_0;
    // 0x801E135C: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    after_0:
    // 0x801E1360: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E1364: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E1368: jr          $ra
    // 0x801E136C: nop

    TRACE_RETURN()
    return;
    // 0x801E136C: nop

;}
RECOMP_FUNC void func_801F365C_5AF56C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F365C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F3660: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F3664: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F3668: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801F366C: jal         0x801E8C44
    // 0x801F3670: lbu         $a1, 0x1F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1F);
    func_801E8C44_5A4B54(rdram, ctx);
        goto after_0;
    // 0x801F3670: lbu         $a1, 0x1F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1F);
    after_0:
    // 0x801F3674: bne         $v0, $zero, L_801F36B8
    if (ctx->r2 != 0) {
        // 0x801F3678: lui         $t6, 0x8021
        ctx->r14 = S32(0X8021 << 16);
            goto L_801F36B8;
    }
    // 0x801F3678: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801F367C: lbu         $t6, -0x3594($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X3594);
    // 0x801F3680: lbu         $t7, 0x1F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X1F);
    // 0x801F3684: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801F3688: bne         $t6, $zero, L_801F36B8
    if (ctx->r14 != 0) {
        // 0x801F368C: sll         $t8, $t7, 2
        ctx->r24 = S32(ctx->r15 << 2);
            goto L_801F36B8;
    }
    // 0x801F368C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x801F3690: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801F3694: addu        $a1, $a1, $t8
    ctx->r5 = ADD32(ctx->r5, ctx->r24);
    // 0x801F3698: lw          $a1, 0x4868($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4868);
    // 0x801F369C: jal         0x80034E08
    // 0x801F36A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_1;
    // 0x801F36A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x801F36A4: beq         $v0, $zero, L_801F36B8
    if (ctx->r2 == 0) {
        // 0x801F36A8: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_801F36B8;
    }
    // 0x801F36A8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801F36AC: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x801F36B0: jal         0x801EE4AC
    // 0x801F36B4: lbu         $a2, 0x1F($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X1F);
    func_801EE4AC_5AA3BC(rdram, ctx);
        goto after_2;
    // 0x801F36B4: lbu         $a2, 0x1F($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X1F);
    after_2:
L_801F36B8:
    // 0x801F36B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F36BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F36C0: jr          $ra
    // 0x801F36C4: nop

    TRACE_RETURN()
    return;
    // 0x801F36C4: nop

;}
RECOMP_FUNC void func_801F19A4_5AD8B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F19A4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801F19A8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801F19AC: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x801F19B0: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x801F19B4: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x801F19B8: lw          $v1, 0x5C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X5C);
    // 0x801F19BC: addiu       $at, $zero, 0x82
    ctx->r1 = ADD32(0, 0X82);
    // 0x801F19C0: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801F19C4: lw          $t6, 0x18($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X18);
    // 0x801F19C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801F19CC: sw          $t6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r14;
    // 0x801F19D0: lbu         $v0, 0xCC($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XCC);
    // 0x801F19D4: bne         $v0, $at, L_801F19F0
    if (ctx->r2 != ctx->r1) {
        // 0x801F19D8: lui         $at, 0x4130
        ctx->r1 = S32(0X4130 << 16);
            goto L_801F19F0;
    }
    // 0x801F19D8: lui         $at, 0x4130
    ctx->r1 = S32(0X4130 << 16);
    // 0x801F19DC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F19E0: lwc1        $f4, 0x28($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X28);
    // 0x801F19E4: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x801F19E8: nop

    // 0x801F19EC: bc1t        L_801F19F8
    if (c1cs) {
        // 0x801F19F0: addiu       $at, $zero, 0x83
        ctx->r1 = ADD32(0, 0X83);
            goto L_801F19F8;
    }
L_801F19F0:
    // 0x801F19F0: addiu       $at, $zero, 0x83
    ctx->r1 = ADD32(0, 0X83);
    // 0x801F19F4: bne         $v0, $at, L_801F1A08
    if (ctx->r2 != ctx->r1) {
        // 0x801F19F8: lui         $at, 0x4000
        ctx->r1 = S32(0X4000 << 16);
            goto L_801F1A08;
    }
L_801F19F8:
    // 0x801F19F8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801F19FC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801F1A00: b           L_801F1A18
    // 0x801F1A04: lbu         $v0, 0x60($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X60);
        goto L_801F1A18;
    // 0x801F1A04: lbu         $v0, 0x60($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X60);
L_801F1A08:
    // 0x801F1A08: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801F1A0C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801F1A10: nop

    // 0x801F1A14: lbu         $v0, 0x60($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X60);
L_801F1A18:
    // 0x801F1A18: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F1A1C: beq         $v0, $zero, L_801F1A38
    if (ctx->r2 == 0) {
        // 0x801F1A20: nop
    
            goto L_801F1A38;
    }
    // 0x801F1A20: nop

    // 0x801F1A24: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801F1A28: beq         $v0, $at, L_801F1B30
    if (ctx->r2 == ctx->r1) {
        // 0x801F1A2C: lw          $a0, 0x4C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X4C);
            goto L_801F1B30;
    }
    // 0x801F1A2C: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x801F1A30: b           L_801F1B58
    // 0x801F1A34: addiu       $s0, $s1, 0x9C
    ctx->r16 = ADD32(ctx->r17, 0X9C);
        goto L_801F1B58;
    // 0x801F1A34: addiu       $s0, $s1, 0x9C
    ctx->r16 = ADD32(ctx->r17, 0X9C);
L_801F1A38:
    // 0x801F1A38: lwc1        $f8, -0x4130($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X4130);
    // 0x801F1A3C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801F1A40: addiu       $s0, $s1, 0x9C
    ctx->r16 = ADD32(ctx->r17, 0X9C);
    // 0x801F1A44: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x801F1A48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F1A4C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801F1A50: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x801F1A54: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x801F1A58: nop

    // 0x801F1A5C: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x801F1A60: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x801F1A64: nop

    // 0x801F1A68: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x801F1A6C: beql        $a1, $zero, L_801F1ABC
    if (ctx->r5 == 0) {
        // 0x801F1A70: mfc1        $a1, $f16
        ctx->r5 = (int32_t)ctx->f16.u32l;
            goto L_801F1ABC;
    }
    goto skip_0;
    // 0x801F1A70: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    skip_0:
    // 0x801F1A74: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801F1A78: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801F1A7C: sub.s       $f16, $f10, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x801F1A80: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x801F1A84: nop

    // 0x801F1A88: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x801F1A8C: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x801F1A90: nop

    // 0x801F1A94: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x801F1A98: bne         $a1, $zero, L_801F1AB0
    if (ctx->r5 != 0) {
        // 0x801F1A9C: nop
    
            goto L_801F1AB0;
    }
    // 0x801F1A9C: nop

    // 0x801F1AA0: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x801F1AA4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801F1AA8: b           L_801F1AC8
    // 0x801F1AAC: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
        goto L_801F1AC8;
    // 0x801F1AAC: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
L_801F1AB0:
    // 0x801F1AB0: b           L_801F1AC8
    // 0x801F1AB4: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
        goto L_801F1AC8;
    // 0x801F1AB4: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x801F1AB8: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
L_801F1ABC:
    // 0x801F1ABC: nop

    // 0x801F1AC0: bltz        $a1, L_801F1AB0
    if (SIGNED(ctx->r5) < 0) {
        // 0x801F1AC4: nop
    
            goto L_801F1AB0;
    }
    // 0x801F1AC4: nop

L_801F1AC8:
    // 0x801F1AC8: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x801F1ACC: andi        $t9, $a1, 0xFF
    ctx->r25 = ctx->r5 & 0XFF;
    // 0x801F1AD0: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x801F1AD4: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
    // 0x801F1AD8: jal         0x801EE330
    // 0x801F1ADC: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    func_801EE330_5AA240(rdram, ctx);
        goto after_0;
    // 0x801F1ADC: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x801F1AE0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801F1AE4: lwc1        $f0, 0x38($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X38);
    // 0x801F1AE8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801F1AEC: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x801F1AF0: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x801F1AF4: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x801F1AF8: jal         0x801EE5F4
    // 0x801F1AFC: nop

    func_801EE5F4_5AA504(rdram, ctx);
        goto after_1;
    // 0x801F1AFC: nop

    after_1:
    // 0x801F1B00: beq         $v0, $zero, L_801F1B10
    if (ctx->r2 == 0) {
        // 0x801F1B04: lw          $v1, 0x44($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X44);
            goto L_801F1B10;
    }
    // 0x801F1B04: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x801F1B08: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x801F1B0C: sb          $t0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r8;
L_801F1B10:
    // 0x801F1B10: lbu         $v0, 0xCC($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XCC);
    // 0x801F1B14: addiu       $at, $zero, 0x82
    ctx->r1 = ADD32(0, 0X82);
    // 0x801F1B18: beq         $v0, $at, L_801F1B58
    if (ctx->r2 == ctx->r1) {
        // 0x801F1B1C: addiu       $at, $zero, 0x83
        ctx->r1 = ADD32(0, 0X83);
            goto L_801F1B58;
    }
    // 0x801F1B1C: addiu       $at, $zero, 0x83
    ctx->r1 = ADD32(0, 0X83);
    // 0x801F1B20: beq         $v0, $at, L_801F1B58
    if (ctx->r2 == ctx->r1) {
        // 0x801F1B24: addiu       $t1, $zero, 0x1
        ctx->r9 = ADD32(0, 0X1);
            goto L_801F1B58;
    }
    // 0x801F1B24: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801F1B28: b           L_801F1B58
    // 0x801F1B2C: sb          $t1, 0x60($s1)
    MEM_B(0X60, ctx->r17) = ctx->r9;
        goto L_801F1B58;
    // 0x801F1B2C: sb          $t1, 0x60($s1)
    MEM_B(0X60, ctx->r17) = ctx->r9;
L_801F1B30:
    // 0x801F1B30: jal         0x801EE5F4
    // 0x801F1B34: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    func_801EE5F4_5AA504(rdram, ctx);
        goto after_2;
    // 0x801F1B34: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    after_2:
    // 0x801F1B38: addiu       $s0, $s1, 0x9C
    ctx->r16 = ADD32(ctx->r17, 0X9C);
    // 0x801F1B3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F1B40: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x801F1B44: jal         0x801EE330
    // 0x801F1B48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_801EE330_5AA240(rdram, ctx);
        goto after_3;
    // 0x801F1B48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x801F1B4C: beq         $v0, $zero, L_801F1B58
    if (ctx->r2 == 0) {
        // 0x801F1B50: addiu       $t2, $zero, 0x1
        ctx->r10 = ADD32(0, 0X1);
            goto L_801F1B58;
    }
    // 0x801F1B50: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x801F1B54: sb          $t2, 0x65($s1)
    MEM_B(0X65, ctx->r17) = ctx->r10;
L_801F1B58:
    // 0x801F1B58: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x801F1B5C: jal         0x801EE25C
    // 0x801F1B60: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    func_801EE25C_5AA16C(rdram, ctx);
        goto after_4;
    // 0x801F1B60: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    after_4:
    // 0x801F1B64: lbu         $t5, 0x2($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X2);
    // 0x801F1B68: lbu         $a3, 0x1($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X1);
    // 0x801F1B6C: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801F1B70: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x801F1B74: lbu         $t6, 0x3($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X3);
    // 0x801F1B78: addiu       $a2, $a2, 0x4C28
    ctx->r6 = ADD32(ctx->r6, 0X4C28);
    // 0x801F1B7C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801F1B80: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x801F1B84: lbu         $t7, 0x4($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X4);
    // 0x801F1B88: or          $t3, $a2, $at
    ctx->r11 = ctx->r6 | ctx->r1;
    // 0x801F1B8C: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801F1B90: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x801F1B94: lbu         $t8, 0x5($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X5);
    // 0x801F1B98: or          $a2, $t3, $at
    ctx->r6 = ctx->r11 | ctx->r1;
    // 0x801F1B9C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x801F1BA0: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x801F1BA4: lbu         $t9, 0x6($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X6);
    // 0x801F1BA8: addiu       $a1, $s1, 0xA4
    ctx->r5 = ADD32(ctx->r17, 0XA4);
    // 0x801F1BAC: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x801F1BB0: lbu         $t0, 0x0($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X0);
    // 0x801F1BB4: jal         0x801DC554
    // 0x801F1BB8: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    func_801DC554_598464(rdram, ctx);
        goto after_5;
    // 0x801F1BB8: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    after_5:
    // 0x801F1BBC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x801F1BC0: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x801F1BC4: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x801F1BC8: jr          $ra
    // 0x801F1BCC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x801F1BCC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_801DE55C_59A46C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DE55C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DE560: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DE564: jal         0x801E3AC0
    // 0x801DE568: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801E3AC0_59F9D0(rdram, ctx);
        goto after_0;
    // 0x801DE568: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801DE56C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DE570: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DE574: jr          $ra
    // 0x801DE578: nop

    TRACE_RETURN()
    return;
    // 0x801DE578: nop

;}
RECOMP_FUNC void func_801F5A9C_5B19AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F5A9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F5AA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F5AA4: jal         0x801E3AC0
    // 0x801F5AA8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801E3AC0_59F9D0(rdram, ctx);
        goto after_0;
    // 0x801F5AA8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F5AAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F5AB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F5AB4: jr          $ra
    // 0x801F5AB8: nop

    TRACE_RETURN()
    return;
    // 0x801F5AB8: nop

;}
RECOMP_FUNC void func_801E05D4_59C4E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E05D4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E05D8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E05DC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801E05E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E05E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E05E8: swc1        $f6, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->f6.u32l;
    // 0x801E05EC: swc1        $f4, 0xE4($a0)
    MEM_W(0XE4, ctx->r4) = ctx->f4.u32l;
    // 0x801E05F0: lwc1        $f10, 0x28($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X28);
    // 0x801E05F4: mtc1        $zero, $f9
    ctx->f_odd[(9 - 1) * 2] = 0;
    // 0x801E05F8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801E05FC: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x801E0600: c.le.d      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.d <= ctx->f8.d;
    // 0x801E0604: nop

    // 0x801E0608: bc1fl       L_801E061C
    if (!c1cs) {
        // 0x801E060C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E061C;
    }
    goto skip_0;
    // 0x801E060C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801E0610: jal         0x801DACDC
    // 0x801E0614: addiu       $a1, $zero, 0x47
    ctx->r5 = ADD32(0, 0X47);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_0;
    // 0x801E0614: addiu       $a1, $zero, 0x47
    ctx->r5 = ADD32(0, 0X47);
    after_0:
    // 0x801E0618: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E061C:
    // 0x801E061C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E0620: jr          $ra
    // 0x801E0624: nop

    TRACE_RETURN()
    return;
    // 0x801E0624: nop

;}
RECOMP_FUNC void func_801E3834_59F744(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E3834: addiu       $sp, $sp, -0x1E8
    ctx->r29 = ADD32(ctx->r29, -0X1E8);
    // 0x801E3838: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x801E383C: addiu       $a3, $sp, 0xA8
    ctx->r7 = ADD32(ctx->r29, 0XA8);
    // 0x801E3840: addiu       $t6, $t6, 0x452C
    ctx->r14 = ADD32(ctx->r14, 0X452C);
    // 0x801E3844: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E3848: sw          $a1, 0x1EC($sp)
    MEM_W(0X1EC, ctx->r29) = ctx->r5;
    // 0x801E384C: addiu       $t0, $sp, 0x48
    ctx->r8 = ADD32(ctx->r29, 0X48);
    // 0x801E3850: addiu       $t1, $sp, 0x44
    ctx->r9 = ADD32(ctx->r29, 0X44);
    // 0x801E3854: addiu       $t2, $sp, 0x4C
    ctx->r10 = ADD32(ctx->r29, 0X4C);
    // 0x801E3858: addiu       $t3, $sp, 0x40
    ctx->r11 = ADD32(ctx->r29, 0X40);
    // 0x801E385C: addiu       $t4, $sp, 0x2C
    ctx->r12 = ADD32(ctx->r29, 0X2C);
    // 0x801E3860: addiu       $t9, $t6, 0x138
    ctx->r25 = ADD32(ctx->r14, 0X138);
    // 0x801E3864: or          $t5, $a3, $zero
    ctx->r13 = ctx->r7 | 0;
L_801E3868:
    // 0x801E3868: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x801E386C: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x801E3870: addiu       $t5, $t5, 0xC
    ctx->r13 = ADD32(ctx->r13, 0XC);
    // 0x801E3874: sw          $at, -0xC($t5)
    MEM_W(-0XC, ctx->r13) = ctx->r1;
    // 0x801E3878: lw          $at, -0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X8);
    // 0x801E387C: sw          $at, -0x8($t5)
    MEM_W(-0X8, ctx->r13) = ctx->r1;
    // 0x801E3880: lw          $at, -0x4($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X4);
    // 0x801E3884: bne         $t6, $t9, L_801E3868
    if (ctx->r14 != ctx->r25) {
        // 0x801E3888: sw          $at, -0x4($t5)
        MEM_W(-0X4, ctx->r13) = ctx->r1;
            goto L_801E3868;
    }
    // 0x801E3888: sw          $at, -0x4($t5)
    MEM_W(-0X4, ctx->r13) = ctx->r1;
    // 0x801E388C: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x801E3890: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x801E3894: addiu       $t7, $t7, 0x466C
    ctx->r15 = ADD32(ctx->r15, 0X466C);
    // 0x801E3898: sw          $at, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r1;
    // 0x801E389C: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x801E38A0: addiu       $t8, $sp, 0x58
    ctx->r24 = ADD32(ctx->r29, 0X58);
    // 0x801E38A4: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x801E38A8: sw          $t9, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r25;
    // 0x801E38AC: addiu       $t5, $t7, 0x48
    ctx->r13 = ADD32(ctx->r15, 0X48);
L_801E38B0:
    // 0x801E38B0: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x801E38B4: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x801E38B8: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x801E38BC: sw          $at, -0xC($t8)
    MEM_W(-0XC, ctx->r24) = ctx->r1;
    // 0x801E38C0: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x801E38C4: sw          $at, -0x8($t8)
    MEM_W(-0X8, ctx->r24) = ctx->r1;
    // 0x801E38C8: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x801E38CC: bne         $t7, $t5, L_801E38B0
    if (ctx->r15 != ctx->r13) {
        // 0x801E38D0: sw          $at, -0x4($t8)
        MEM_W(-0X4, ctx->r24) = ctx->r1;
            goto L_801E38B0;
    }
    // 0x801E38D0: sw          $at, -0x4($t8)
    MEM_W(-0X4, ctx->r24) = ctx->r1;
    // 0x801E38D4: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x801E38D8: lw          $t5, 0x4($t7)
    ctx->r13 = MEM_W(ctx->r15, 0X4);
    // 0x801E38DC: addiu       $t6, $t6, 0x46BC
    ctx->r14 = ADD32(ctx->r14, 0X46BC);
    // 0x801E38E0: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x801E38E4: sw          $t5, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r13;
    // 0x801E38E8: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x801E38EC: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x801E38F0: addiu       $t8, $t8, 0x46C8
    ctx->r24 = ADD32(ctx->r24, 0X46C8);
    // 0x801E38F4: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    // 0x801E38F8: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x801E38FC: sw          $t7, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r15;
    // 0x801E3900: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x801E3904: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x801E3908: addiu       $t7, $t7, 0x46CC
    ctx->r15 = ADD32(ctx->r15, 0X46CC);
    // 0x801E390C: sw          $at, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r1;
    // 0x801E3910: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x801E3914: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x801E3918: addiu       $t6, $t6, 0x46D0
    ctx->r14 = ADD32(ctx->r14, 0X46D0);
    // 0x801E391C: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x801E3920: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x801E3924: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x801E3928: addiu       $t8, $t8, 0x46D4
    ctx->r24 = ADD32(ctx->r24, 0X46D4);
    // 0x801E392C: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x801E3930: lwr         $at, 0x2($t6)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r14, 0X2);
    // 0x801E3934: swr         $at, 0x2($t3)
    do_swr(rdram, 0X2, ctx->r11, ctx->r1);
    // 0x801E3938: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x801E393C: sw          $at, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r1;
    // 0x801E3940: lw          $t6, 0x4($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X4);
    // 0x801E3944: sw          $t6, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r14;
    // 0x801E3948: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x801E394C: sw          $at, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r1;
    // 0x801E3950: lw          $t6, 0xC($t8)
    ctx->r14 = MEM_W(ctx->r24, 0XC);
    // 0x801E3954: sw          $t6, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->r14;
    // 0x801E3958: lw          $at, 0x10($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X10);
    // 0x801E395C: sw          $at, 0x10($t4)
    MEM_W(0X10, ctx->r12) = ctx->r1;
    // 0x801E3960: lbu         $a2, 0x60($a0)
    ctx->r6 = MEM_BU(ctx->r4, 0X60);
    // 0x801E3964: lbu         $t8, 0x1EF($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X1EF);
    // 0x801E3968: sltiu       $v0, $a2, 0x1
    ctx->r2 = ctx->r6 < 0X1 ? 1 : 0;
    // 0x801E396C: beq         $v0, $zero, L_801E3994
    if (ctx->r2 == 0) {
        // 0x801E3970: sll         $t5, $a2, 2
        ctx->r13 = S32(ctx->r6 << 2);
            goto L_801E3994;
    }
    // 0x801E3970: sll         $t5, $a2, 2
    ctx->r13 = S32(ctx->r6 << 2);
    // 0x801E3974: lw          $t7, 0x5C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X5C);
    // 0x801E3978: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x801E397C: lhu         $v1, 0x86($t7)
    ctx->r3 = MEM_HU(ctx->r15, 0X86);
    // 0x801E3980: sltu        $v0, $zero, $v1
    ctx->r2 = 0 < ctx->r3 ? 1 : 0;
    // 0x801E3984: beql        $v0, $zero, L_801E3998
    if (ctx->r2 == 0) {
        // 0x801E3988: addu        $t5, $t5, $a2
        ctx->r13 = ADD32(ctx->r13, ctx->r6);
            goto L_801E3998;
    }
    goto skip_0;
    // 0x801E3988: addu        $t5, $t5, $a2
    ctx->r13 = ADD32(ctx->r13, ctx->r6);
    skip_0:
    // 0x801E398C: xor         $v0, $v1, $at
    ctx->r2 = ctx->r3 ^ ctx->r1;
    // 0x801E3990: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
L_801E3994:
    // 0x801E3994: addu        $t5, $t5, $a2
    ctx->r13 = ADD32(ctx->r13, ctx->r6);
L_801E3998:
    // 0x801E3998: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x801E399C: addu        $t9, $a3, $t5
    ctx->r25 = ADD32(ctx->r7, ctx->r13);
    // 0x801E39A0: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x801E39A4: addu        $t7, $t9, $t6
    ctx->r15 = ADD32(ctx->r25, ctx->r14);
    // 0x801E39A8: lw          $t5, 0x0($t7)
    ctx->r13 = MEM_W(ctx->r15, 0X0);
    // 0x801E39AC: beq         $v0, $zero, L_801E3A00
    if (ctx->r2 == 0) {
        // 0x801E39B0: sw          $t5, 0x48($a0)
        MEM_W(0X48, ctx->r4) = ctx->r13;
            goto L_801E3A00;
    }
    // 0x801E39B0: sw          $t5, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->r13;
    // 0x801E39B4: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x801E39B8: lw          $v0, -0x39FC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39FC);
    // 0x801E39BC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801E39C0: sll         $t8, $a2, 2
    ctx->r24 = S32(ctx->r6 << 2);
    // 0x801E39C4: beq         $v0, $at, L_801E39DC
    if (ctx->r2 == ctx->r1) {
        // 0x801E39C8: lui         $t9, 0x8016
        ctx->r25 = S32(0X8016 << 16);
            goto L_801E39DC;
    }
    // 0x801E39C8: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x801E39CC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801E39D0: beq         $v0, $at, L_801E39F4
    if (ctx->r2 == ctx->r1) {
        // 0x801E39D4: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_801E39F4;
    }
    // 0x801E39D4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801E39D8: beq         $v0, $at, L_801E39F4
    if (ctx->r2 == ctx->r1) {
        // 0x801E39DC: addu        $t9, $t9, $t8
        ctx->r25 = ADD32(ctx->r25, ctx->r24);
            goto L_801E39F4;
    }
L_801E39DC:
    // 0x801E39DC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x801E39E0: lw          $t9, -0x3954($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3954);
    // 0x801E39E4: addu        $t6, $t3, $t9
    ctx->r14 = ADD32(ctx->r11, ctx->r25);
    // 0x801E39E8: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x801E39EC: b           L_801E3A68
    // 0x801E39F0: sb          $t7, 0x4C($a0)
    MEM_B(0X4C, ctx->r4) = ctx->r15;
        goto L_801E3A68;
    // 0x801E39F0: sb          $t7, 0x4C($a0)
    MEM_B(0X4C, ctx->r4) = ctx->r15;
L_801E39F4:
    // 0x801E39F4: addiu       $t5, $zero, 0x16
    ctx->r13 = ADD32(0, 0X16);
    // 0x801E39F8: b           L_801E3A68
    // 0x801E39FC: sb          $t5, 0x4C($a0)
    MEM_B(0X4C, ctx->r4) = ctx->r13;
        goto L_801E3A68;
    // 0x801E39FC: sb          $t5, 0x4C($a0)
    MEM_B(0X4C, ctx->r4) = ctx->r13;
L_801E3A00:
    // 0x801E3A00: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x801E3A04: lw          $v0, -0x39FC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39FC);
    // 0x801E3A08: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801E3A0C: sll         $t8, $a2, 2
    ctx->r24 = S32(ctx->r6 << 2);
    // 0x801E3A10: beq         $v0, $at, L_801E3A28
    if (ctx->r2 == ctx->r1) {
        // 0x801E3A14: sll         $t6, $a2, 2
        ctx->r14 = S32(ctx->r6 << 2);
            goto L_801E3A28;
    }
    // 0x801E3A14: sll         $t6, $a2, 2
    ctx->r14 = S32(ctx->r6 << 2);
    // 0x801E3A18: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801E3A1C: beq         $v0, $at, L_801E3A4C
    if (ctx->r2 == ctx->r1) {
        // 0x801E3A20: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_801E3A4C;
    }
    // 0x801E3A20: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801E3A24: beq         $v0, $at, L_801E3A5C
    if (ctx->r2 == ctx->r1) {
        // 0x801E3A28: lui         $t7, 0x8016
        ctx->r15 = S32(0X8016 << 16);
            goto L_801E3A5C;
    }
L_801E3A28:
    // 0x801E3A28: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x801E3A2C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x801E3A30: lw          $t7, -0x3954($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3954);
    // 0x801E3A34: subu        $t8, $t8, $a2
    ctx->r24 = SUB32(ctx->r24, ctx->r6);
    // 0x801E3A38: addu        $t9, $t2, $t8
    ctx->r25 = ADD32(ctx->r10, ctx->r24);
    // 0x801E3A3C: addu        $t5, $t9, $t7
    ctx->r13 = ADD32(ctx->r25, ctx->r15);
    // 0x801E3A40: lbu         $t8, 0x0($t5)
    ctx->r24 = MEM_BU(ctx->r13, 0X0);
    // 0x801E3A44: b           L_801E3A68
    // 0x801E3A48: sb          $t8, 0x4C($a0)
    MEM_B(0X4C, ctx->r4) = ctx->r24;
        goto L_801E3A68;
    // 0x801E3A48: sb          $t8, 0x4C($a0)
    MEM_B(0X4C, ctx->r4) = ctx->r24;
L_801E3A4C:
    // 0x801E3A4C: addu        $t6, $t0, $a2
    ctx->r14 = ADD32(ctx->r8, ctx->r6);
    // 0x801E3A50: lbu         $t9, 0x0($t6)
    ctx->r25 = MEM_BU(ctx->r14, 0X0);
    // 0x801E3A54: b           L_801E3A68
    // 0x801E3A58: sb          $t9, 0x4C($a0)
    MEM_B(0X4C, ctx->r4) = ctx->r25;
        goto L_801E3A68;
    // 0x801E3A58: sb          $t9, 0x4C($a0)
    MEM_B(0X4C, ctx->r4) = ctx->r25;
L_801E3A5C:
    // 0x801E3A5C: addu        $t7, $t1, $a2
    ctx->r15 = ADD32(ctx->r9, ctx->r6);
    // 0x801E3A60: lbu         $t5, 0x0($t7)
    ctx->r13 = MEM_BU(ctx->r15, 0X0);
    // 0x801E3A64: sb          $t5, 0x4C($a0)
    MEM_B(0X4C, ctx->r4) = ctx->r13;
L_801E3A68:
    // 0x801E3A68: lbu         $t8, 0x1EF($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X1EF);
    // 0x801E3A6C: addu        $t6, $t4, $t8
    ctx->r14 = ADD32(ctx->r12, ctx->r24);
    // 0x801E3A70: lbu         $a1, 0x0($t6)
    ctx->r5 = MEM_BU(ctx->r14, 0X0);
    // 0x801E3A74: jal         0x801DD830
    // 0x801E3A78: sw          $a0, 0x1E8($sp)
    MEM_W(0X1E8, ctx->r29) = ctx->r4;
    func_801DD830_599740(rdram, ctx);
        goto after_0;
    // 0x801E3A78: sw          $a0, 0x1E8($sp)
    MEM_W(0X1E8, ctx->r29) = ctx->r4;
    after_0:
    // 0x801E3A7C: lw          $a0, 0x1E8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1E8);
    // 0x801E3A80: lbu         $t5, 0x1EF($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X1EF);
    // 0x801E3A84: lbu         $t9, 0x60($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X60);
    // 0x801E3A88: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x801E3A8C: addu        $t7, $t7, $t9
    ctx->r15 = ADD32(ctx->r15, ctx->r25);
    // 0x801E3A90: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x801E3A94: addu        $t8, $t7, $t5
    ctx->r24 = ADD32(ctx->r15, ctx->r13);
    // 0x801E3A98: addu        $t6, $sp, $t8
    ctx->r14 = ADD32(ctx->r29, ctx->r24);
    // 0x801E3A9C: lbu         $t6, 0x58($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X58);
    // 0x801E3AA0: beql        $t6, $zero, L_801E3AB4
    if (ctx->r14 == 0) {
        // 0x801E3AA4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E3AB4;
    }
    goto skip_1;
    // 0x801E3AA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x801E3AA8: jal         0x801E8964
    // 0x801E3AAC: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    func_801E8964_5A4874(rdram, ctx);
        goto after_1;
    // 0x801E3AAC: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    after_1:
    // 0x801E3AB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E3AB4:
    // 0x801E3AB4: addiu       $sp, $sp, 0x1E8
    ctx->r29 = ADD32(ctx->r29, 0X1E8);
    // 0x801E3AB8: jr          $ra
    // 0x801E3ABC: nop

    TRACE_RETURN()
    return;
    // 0x801E3ABC: nop

;}
RECOMP_FUNC void func_801DC87C_59878C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DC87C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801DC880: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DC884: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x801DC888: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x801DC88C: lw          $t4, 0x18($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X18);
    // 0x801DC890: bne         $a1, $zero, L_801DC8A0
    if (ctx->r5 != 0) {
        // 0x801DC894: lbu         $a3, 0x90($a0)
        ctx->r7 = MEM_BU(ctx->r4, 0X90);
            goto L_801DC8A0;
    }
    // 0x801DC894: lbu         $a3, 0x90($a0)
    ctx->r7 = MEM_BU(ctx->r4, 0X90);
    // 0x801DC898: b           L_801DC978
    // 0x801DC89C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801DC978;
    // 0x801DC89C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801DC8A0:
    // 0x801DC8A0: lbu         $v0, 0x43($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X43);
    // 0x801DC8A4: sll         $t7, $a3, 1
    ctx->r15 = S32(ctx->r7 << 1);
    // 0x801DC8A8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x801DC8AC: addiu       $t9, $t9, -0x2DC8
    ctx->r25 = ADD32(ctx->r25, -0X2DC8);
    // 0x801DC8B0: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x801DC8B4: addu        $a2, $t8, $t9
    ctx->r6 = ADD32(ctx->r24, ctx->r25);
    // 0x801DC8B8: lbu         $t1, -0x3($a2)
    ctx->r9 = MEM_BU(ctx->r6, -0X3);
    // 0x801DC8BC: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801DC8C0: addiu       $t6, $t6, -0x2DC0
    ctx->r14 = ADD32(ctx->r14, -0X2DC0);
    // 0x801DC8C4: sll         $t5, $a3, 4
    ctx->r13 = S32(ctx->r7 << 4);
    // 0x801DC8C8: addu        $t2, $t5, $t6
    ctx->r10 = ADD32(ctx->r13, ctx->r14);
    // 0x801DC8CC: sll         $t8, $t1, 3
    ctx->r24 = S32(ctx->r9 << 3);
    // 0x801DC8D0: addu        $t9, $t2, $t8
    ctx->r25 = ADD32(ctx->r10, ctx->r24);
    // 0x801DC8D4: sll         $t0, $v0, 2
    ctx->r8 = S32(ctx->r2 << 2);
    // 0x801DC8D8: addu        $t5, $t9, $t0
    ctx->r13 = ADD32(ctx->r25, ctx->r8);
    // 0x801DC8DC: lw          $t6, -0xC($t5)
    ctx->r14 = MEM_W(ctx->r13, -0XC);
    // 0x801DC8E0: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x801DC8E4: xori        $t8, $t1, 0x1
    ctx->r24 = ctx->r9 ^ 0X1;
    // 0x801DC8E8: andi        $v1, $t8, 0xFF
    ctx->r3 = ctx->r24 & 0XFF;
    // 0x801DC8EC: bne         $t7, $t6, L_801DC8FC
    if (ctx->r15 != ctx->r14) {
        // 0x801DC8F0: sll         $t9, $a3, 4
        ctx->r25 = S32(ctx->r7 << 4);
            goto L_801DC8FC;
    }
    // 0x801DC8F0: sll         $t9, $a3, 4
    ctx->r25 = S32(ctx->r7 << 4);
    // 0x801DC8F4: b           L_801DC978
    // 0x801DC8F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801DC978;
    // 0x801DC8F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801DC8FC:
    // 0x801DC8FC: sb          $t8, -0x3($a2)
    MEM_B(-0X3, ctx->r6) = ctx->r24;
    // 0x801DC900: sll         $t5, $v1, 3
    ctx->r13 = S32(ctx->r3 << 3);
    // 0x801DC904: addu        $t7, $t9, $t5
    ctx->r15 = ADD32(ctx->r25, ctx->r13);
    // 0x801DC908: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x801DC90C: addiu       $t8, $t8, -0x2DD8
    ctx->r24 = ADD32(ctx->r24, -0X2DD8);
    // 0x801DC910: addu        $t6, $t7, $t0
    ctx->r14 = ADD32(ctx->r15, ctx->r8);
    // 0x801DC914: addu        $t3, $t6, $t8
    ctx->r11 = ADD32(ctx->r14, ctx->r24);
    // 0x801DC918: lw          $a1, -0xC($t3)
    ctx->r5 = MEM_W(ctx->r11, -0XC);
    // 0x801DC91C: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x801DC920: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x801DC924: sb          $v1, 0x32($sp)
    MEM_B(0X32, ctx->r29) = ctx->r3;
    // 0x801DC928: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x801DC92C: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x801DC930: jal         0x800145B4
    // 0x801DC934: sw          $t4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r12;
    func_800145B4_151B4(rdram, ctx);
        goto after_0;
    // 0x801DC934: sw          $t4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r12;
    after_0:
    // 0x801DC938: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x801DC93C: lbu         $t5, 0x43($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X43);
    // 0x801DC940: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x801DC944: lw          $t9, -0xC($t3)
    ctx->r25 = MEM_W(ctx->r11, -0XC);
    // 0x801DC948: lbu         $v1, 0x32($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X32);
    // 0x801DC94C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x801DC950: sll         $t7, $t5, 3
    ctx->r15 = S32(ctx->r13 << 3);
    // 0x801DC954: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x801DC958: addu        $t6, $t4, $t7
    ctx->r14 = ADD32(ctx->r12, ctx->r15);
    // 0x801DC95C: sw          $t9, 0x38($t6)
    MEM_W(0X38, ctx->r14) = ctx->r25;
    // 0x801DC960: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x801DC964: sll         $t5, $v1, 3
    ctx->r13 = S32(ctx->r3 << 3);
    // 0x801DC968: addu        $t7, $t2, $t5
    ctx->r15 = ADD32(ctx->r10, ctx->r13);
    // 0x801DC96C: addu        $t9, $t7, $t0
    ctx->r25 = ADD32(ctx->r15, ctx->r8);
    // 0x801DC970: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801DC974: sw          $t8, -0xC($t9)
    MEM_W(-0XC, ctx->r25) = ctx->r24;
L_801DC978:
    // 0x801DC978: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DC97C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x801DC980: jr          $ra
    // 0x801DC984: nop

    TRACE_RETURN()
    return;
    // 0x801DC984: nop

;}
RECOMP_FUNC void func_801D9C54_595B64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D9C54: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801D9C58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D9C5C: beq         $a0, $zero, L_801D9CD8
    if (ctx->r4 == 0) {
        // 0x801D9C60: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_801D9CD8;
    }
    // 0x801D9C60: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x801D9C64: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x801D9C68: beql        $v0, $zero, L_801D9CDC
    if (ctx->r2 == 0) {
        // 0x801D9C6C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801D9CDC;
    }
    goto skip_0;
    // 0x801D9C6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801D9C70: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x801D9C74: beql        $v1, $zero, L_801D9CDC
    if (ctx->r3 == 0) {
        // 0x801D9C78: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801D9CDC;
    }
    goto skip_1;
    // 0x801D9C78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x801D9C7C: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x801D9C80: beql        $a0, $zero, L_801D9CDC
    if (ctx->r4 == 0) {
        // 0x801D9C84: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801D9CDC;
    }
    goto skip_2;
    // 0x801D9C84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x801D9C88: lw          $t6, 0x5C($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X5C);
    // 0x801D9C8C: lbu         $t7, 0x69($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X69);
    // 0x801D9C90: bnel        $t7, $zero, L_801D9CDC
    if (ctx->r15 != 0) {
        // 0x801D9C94: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801D9CDC;
    }
    goto skip_3;
    // 0x801D9C94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x801D9C98: lw          $at, 0x34($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X34);
    // 0x801D9C9C: sw          $at, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->r1;
    // 0x801D9CA0: lw          $t9, 0x38($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X38);
    // 0x801D9CA4: sw          $t9, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->r25;
    // 0x801D9CA8: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    // 0x801D9CAC: jal         0x80014218
    // 0x801D9CB0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_80014218_14E18(rdram, ctx);
        goto after_0;
    // 0x801D9CB0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_0:
    // 0x801D9CB4: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x801D9CB8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x801D9CBC: lw          $t0, 0x2C($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X2C);
    // 0x801D9CC0: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x801D9CC4: sw          $t1, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r9;
    // 0x801D9CC8: lwc1        $f4, 0x28($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X28);
    // 0x801D9CCC: swc1        $f4, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f4.u32l;
    // 0x801D9CD0: lwc1        $f6, 0x70($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X70);
    // 0x801D9CD4: swc1        $f6, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f6.u32l;
L_801D9CD8:
    // 0x801D9CD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801D9CDC:
    // 0x801D9CDC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801D9CE0: jr          $ra
    // 0x801D9CE4: nop

    TRACE_RETURN()
    return;
    // 0x801D9CE4: nop

;}
RECOMP_FUNC void func_801F71D0_5B30E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F71D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F71D4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x801F71D8: addiu       $v0, $v0, -0x3340
    ctx->r2 = ADD32(ctx->r2, -0X3340);
    // 0x801F71DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F71E0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801F71E4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F71E8: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x801F71EC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801F71F0: sh          $t6, 0x2DB7($at)
    MEM_H(0X2DB7, ctx->r1) = ctx->r14;
    // 0x801F71F4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x801F71F8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x801F71FC: sb          $v1, -0x3A9E($at)
    MEM_B(-0X3A9E, ctx->r1) = ctx->r3;
    // 0x801F7200: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x801F7204: sb          $v1, 0x2DCB($at)
    MEM_B(0X2DCB, ctx->r1) = ctx->r3;
    // 0x801F7208: addiu       $t7, $v0, 0x7FFF
    ctx->r15 = ADD32(ctx->r2, 0X7FFF);
    // 0x801F720C: lhu         $t7, 0x2FE1($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X2FE1);
    // 0x801F7210: jal         0x801F8DE4
    // 0x801F7214: sh          $t7, 0x2DF3($at)
    MEM_H(0X2DF3, ctx->r1) = ctx->r15;
    func_801F8DE4_5B4CF4(rdram, ctx);
        goto after_0;
    // 0x801F7214: sh          $t7, 0x2DF3($at)
    MEM_H(0X2DF3, ctx->r1) = ctx->r15;
    after_0:
    // 0x801F7218: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x801F721C: addiu       $v0, $v0, -0x3340
    ctx->r2 = ADD32(ctx->r2, -0X3340);
    // 0x801F7220: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x801F7224: sb          $zero, 0x2E2A($at)
    MEM_B(0X2E2A, ctx->r1) = 0;
    // 0x801F7228: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x801F722C: sb          $zero, -0x3AA8($at)
    MEM_B(-0X3AA8, ctx->r1) = 0;
    // 0x801F7230: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x801F7234: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x801F7238: sh          $t8, 0x2E25($at)
    MEM_H(0X2E25, ctx->r1) = ctx->r24;
    // 0x801F723C: sh          $zero, 0x2E27($at)
    MEM_H(0X2E27, ctx->r1) = 0;
    // 0x801F7240: sb          $zero, 0x2E24($at)
    MEM_B(0X2E24, ctx->r1) = 0;
    // 0x801F7244: sw          $zero, 0x303D($at)
    MEM_W(0X303D, ctx->r1) = 0;
    // 0x801F7248: jal         0x801F8EDC
    // 0x801F724C: sw          $zero, 0x2E09($at)
    MEM_W(0X2E09, ctx->r1) = 0;
    func_801F8EDC_5B4DEC(rdram, ctx);
        goto after_1;
    // 0x801F724C: sw          $zero, 0x2E09($at)
    MEM_W(0X2E09, ctx->r1) = 0;
    after_1:
    // 0x801F7250: jal         0x80038BC8
    // 0x801F7254: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80038BC8_397C8(rdram, ctx);
        goto after_2;
    // 0x801F7254: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x801F7258: jal         0x801F9E8C
    // 0x801F725C: nop

    func_801F9E8C_5B5D9C(rdram, ctx);
        goto after_3;
    // 0x801F725C: nop

    after_3:
    // 0x801F7260: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801F7264: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801F7268: jal         0x80034AB8
    // 0x801F726C: addiu       $a2, $zero, 0x46
    ctx->r6 = ADD32(0, 0X46);
    func_80034AB8_356B8(rdram, ctx);
        goto after_4;
    // 0x801F726C: addiu       $a2, $zero, 0x46
    ctx->r6 = ADD32(0, 0X46);
    after_4:
    // 0x801F7270: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F7274: jal         0x8003521C
    // 0x801F7278: addiu       $a0, $a0, 0x728C
    ctx->r4 = ADD32(ctx->r4, 0X728C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x801F7278: addiu       $a0, $a0, 0x728C
    ctx->r4 = ADD32(ctx->r4, 0X728C);
    after_5:
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
RECOMP_FUNC void func_801DD458_599368(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DD458: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DD45C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DD460: jal         0x801E307C
    // 0x801DD464: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801E307C_59EF8C(rdram, ctx);
        goto after_0;
    // 0x801DD464: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801DD468: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801DD46C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801DD470: lw          $t7, 0x5C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X5C);
    // 0x801DD474: sh          $t6, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r14;
    // 0x801DD478: lbu         $t8, 0x30($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X30);
    // 0x801DD47C: sb          $zero, 0xD4($a0)
    MEM_B(0XD4, ctx->r4) = 0;
    // 0x801DD480: andi        $t9, $t8, 0xFFFE
    ctx->r25 = ctx->r24 & 0XFFFE;
    // 0x801DD484: sb          $t9, 0x30($a0)
    MEM_B(0X30, ctx->r4) = ctx->r25;
    // 0x801DD488: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DD48C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DD490: jr          $ra
    // 0x801DD494: nop

    TRACE_RETURN()
    return;
    // 0x801DD494: nop

;}
RECOMP_FUNC void func_801F683C_5B274C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F683C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F6840: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F6844: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F6848: lbu         $t6, 0x30($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X30);
    // 0x801F684C: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x801F6850: andi        $t7, $t6, 0xFFFE
    ctx->r15 = ctx->r14 & 0XFFFE;
    // 0x801F6854: sb          $t7, 0x30($a0)
    MEM_B(0X30, ctx->r4) = ctx->r15;
    // 0x801F6858: jal         0x801DD720
    // 0x801F685C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801DD720_599630(rdram, ctx);
        goto after_0;
    // 0x801F685C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801F6860: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801F6864: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801F6868: jalr        $t9
    // 0x801F686C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x801F686C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x801F6870: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801F6874: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F6878: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x801F687C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801F6880: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x801F6884: lwc1        $f4, 0x28($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X28);
    // 0x801F6888: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x801F688C: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x801F6890: nop

    // 0x801F6894: bc1fl       L_801F68A8
    if (!c1cs) {
        // 0x801F6898: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801F68A8;
    }
    goto skip_0;
    // 0x801F6898: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801F689C: jal         0x801DACDC
    // 0x801F68A0: addiu       $a1, $zero, 0xAB
    ctx->r5 = ADD32(0, 0XAB);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_2;
    // 0x801F68A0: addiu       $a1, $zero, 0xAB
    ctx->r5 = ADD32(0, 0XAB);
    after_2:
    // 0x801F68A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F68A8:
    // 0x801F68A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F68AC: jr          $ra
    // 0x801F68B0: nop

    TRACE_RETURN()
    return;
    // 0x801F68B0: nop

;}
RECOMP_FUNC void func_801F64E8_5B23F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F64E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F64EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F64F0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F64F4: lw          $t7, 0x5C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X5C);
    // 0x801F64F8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801F64FC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x801F6500: sh          $t6, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r14;
    // 0x801F6504: jal         0x801E3D04
    // 0x801F6508: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801E3D04_59FC14(rdram, ctx);
        goto after_0;
    // 0x801F6508: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801F650C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801F6510: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x801F6514: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x801F6518: lbu         $t8, 0x90($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X90);
    // 0x801F651C: lbu         $a1, 0x1F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1F);
    // 0x801F6520: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x801F6524: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x801F6528: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x801F652C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x801F6530: lhu         $t0, 0x7DB2($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0X7DB2);
    // 0x801F6534: andi        $t1, $t0, 0x4000
    ctx->r9 = ctx->r8 & 0X4000;
    // 0x801F6538: beq         $t1, $zero, L_801F6550
    if (ctx->r9 == 0) {
        // 0x801F653C: nop
    
            goto L_801F6550;
    }
    // 0x801F653C: nop

    // 0x801F6540: lw          $t2, -0x39FC($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X39FC);
    // 0x801F6544: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801F6548: beql        $t2, $at, L_801F6560
    if (ctx->r10 == ctx->r1) {
        // 0x801F654C: lbu         $v0, 0x60($a0)
        ctx->r2 = MEM_BU(ctx->r4, 0X60);
            goto L_801F6560;
    }
    goto skip_0;
    // 0x801F654C: lbu         $v0, 0x60($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X60);
    skip_0:
L_801F6550:
    // 0x801F6550: jal         0x801DACDC
    // 0x801F6554: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_1;
    // 0x801F6554: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x801F6558: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801F655C: lbu         $v0, 0x60($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X60);
L_801F6560:
    // 0x801F6560: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x801F6564: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801F6568: sll         $t4, $v0, 2
    ctx->r12 = S32(ctx->r2 << 2);
    // 0x801F656C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x801F6570: lw          $t5, -0x3954($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X3954);
    // 0x801F6574: sll         $t3, $v0, 2
    ctx->r11 = S32(ctx->r2 << 2);
    // 0x801F6578: subu        $t3, $t3, $v0
    ctx->r11 = SUB32(ctx->r11, ctx->r2);
    // 0x801F657C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x801F6580: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x801F6584: addu        $t7, $t3, $t6
    ctx->r15 = ADD32(ctx->r11, ctx->r14);
    // 0x801F6588: addu        $a1, $a1, $t7
    ctx->r5 = ADD32(ctx->r5, ctx->r15);
    // 0x801F658C: jal         0x801E8078
    // 0x801F6590: lw          $a1, 0x448C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X448C);
    func_801E8078_5A3F88(rdram, ctx);
        goto after_2;
    // 0x801F6590: lw          $a1, 0x448C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X448C);
    after_2:
    // 0x801F6594: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F6598: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F659C: jr          $ra
    // 0x801F65A0: nop

    TRACE_RETURN()
    return;
    // 0x801F65A0: nop

;}
RECOMP_FUNC void func_801F82FC_5B420C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F82FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F8300: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F8304: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801F8308: jal         0x801F9354
    // 0x801F830C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801F9354_5B5264(rdram, ctx);
        goto after_0;
    // 0x801F830C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F8310: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x801F8314: lbu         $t6, -0x3AB3($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X3AB3);
    // 0x801F8318: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x801F831C: beq         $t6, $zero, L_801F833C
    if (ctx->r14 == 0) {
        // 0x801F8320: nop
    
            goto L_801F833C;
    }
    // 0x801F8320: nop

    // 0x801F8324: lbu         $t7, 0x7ACC($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X7ACC);
    // 0x801F8328: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801F832C: beq         $t7, $zero, L_801F833C
    if (ctx->r15 == 0) {
        // 0x801F8330: nop
    
            goto L_801F833C;
    }
    // 0x801F8330: nop

    // 0x801F8334: jal         0x801E75D4
    // 0x801F8338: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    func_801E75D4_5A34E4(rdram, ctx);
        goto after_1;
    // 0x801F8338: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    after_1:
L_801F833C:
    // 0x801F833C: jal         0x801F9470
    // 0x801F8340: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_801F9470_5B5380(rdram, ctx);
        goto after_2;
    // 0x801F8340: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x801F8344: jal         0x801FB2A4
    // 0x801F8348: nop

    func_801FB2A4_5B71B4(rdram, ctx);
        goto after_3;
    // 0x801F8348: nop

    after_3:
    // 0x801F834C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x801F8350: addiu       $v0, $v0, -0x3340
    ctx->r2 = ADD32(ctx->r2, -0X3340);
    // 0x801F8354: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x801F8358: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x801F835C: sb          $zero, 0x2E24($at)
    MEM_B(0X2E24, ctx->r1) = 0;
    // 0x801F8360: jal         0x801F9E8C
    // 0x801F8364: sh          $t8, 0x2E25($at)
    MEM_H(0X2E25, ctx->r1) = ctx->r24;
    func_801F9E8C_5B5D9C(rdram, ctx);
        goto after_4;
    // 0x801F8364: sh          $t8, 0x2E25($at)
    MEM_H(0X2E25, ctx->r1) = ctx->r24;
    after_4:
    // 0x801F8368: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x801F836C: lbu         $v1, -0x3AB3($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3AB3);
    // 0x801F8370: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x801F8374: beq         $v1, $zero, L_801F83AC
    if (ctx->r3 == 0) {
        // 0x801F8378: nop
    
            goto L_801F83AC;
    }
    // 0x801F8378: nop

    // 0x801F837C: jal         0x80038BC8
    // 0x801F8380: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80038BC8_397C8(rdram, ctx);
        goto after_5;
    // 0x801F8380: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_5:
    // 0x801F8384: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x801F8388: addiu       $v0, $v0, -0x3340
    ctx->r2 = ADD32(ctx->r2, -0X3340);
    // 0x801F838C: addiu       $a0, $v0, 0x7FFF
    ctx->r4 = ADD32(ctx->r2, 0X7FFF);
    // 0x801F8390: addiu       $a1, $v0, 0x7FFF
    ctx->r5 = ADD32(ctx->r2, 0X7FFF);
    // 0x801F8394: lhu         $a1, 0x2E0B($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X2E0B);
    // 0x801F8398: jal         0x801F9E18
    // 0x801F839C: lhu         $a0, 0x2E07($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X2E07);
    func_801F9E18_5B5D28(rdram, ctx);
        goto after_6;
    // 0x801F839C: lhu         $a0, 0x2E07($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X2E07);
    after_6:
    // 0x801F83A0: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x801F83A4: b           L_801F83E8
    // 0x801F83A8: lbu         $v1, -0x3AB3($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3AB3);
        goto L_801F83E8;
    // 0x801F83A8: lbu         $v1, -0x3AB3($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3AB3);
L_801F83AC:
    // 0x801F83AC: lw          $v0, -0x3A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A38);
    // 0x801F83B0: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801F83B4: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801F83B8: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x801F83BC: lw          $t9, 0x2E04($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X2E04);
    // 0x801F83C0: lw          $t0, 0x2E08($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X2E08);
    // 0x801F83C4: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x801F83C8: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x801F83CC: beq         $t9, $t0, L_801F83E8
    if (ctx->r25 == ctx->r8) {
        // 0x801F83D0: nop
    
            goto L_801F83E8;
    }
    // 0x801F83D0: nop

    // 0x801F83D4: lhu         $a0, 0x7AC6($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X7AC6);
    // 0x801F83D8: jal         0x801F9E18
    // 0x801F83DC: lhu         $a1, 0x7ACA($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X7ACA);
    func_801F9E18_5B5D28(rdram, ctx);
        goto after_7;
    // 0x801F83DC: lhu         $a1, 0x7ACA($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X7ACA);
    after_7:
    // 0x801F83E0: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x801F83E4: lbu         $v1, -0x3AB3($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3AB3);
L_801F83E8:
    // 0x801F83E8: beq         $v1, $zero, L_801F83FC
    if (ctx->r3 == 0) {
        // 0x801F83EC: lui         $a0, 0x8020
        ctx->r4 = S32(0X8020 << 16);
            goto L_801F83FC;
    }
    // 0x801F83EC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801F83F0: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x801F83F4: jal         0x801DD6E0
    // 0x801F83F8: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    func_801DD6E0_5995F0(rdram, ctx);
        goto after_8;
    // 0x801F83F8: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_8:
L_801F83FC:
    // 0x801F83FC: jal         0x801F8D94
    // 0x801F8400: nop

    func_801F8D94_5B4CA4(rdram, ctx);
        goto after_9;
    // 0x801F8400: nop

    after_9:
    // 0x801F8404: jal         0x80037B10
    // 0x801F8408: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80037B10_38710(rdram, ctx);
        goto after_10;
    // 0x801F8408: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_10:
    // 0x801F840C: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F8410: jal         0x8003521C
    // 0x801F8414: addiu       $a0, $a0, 0x7690
    ctx->r4 = ADD32(ctx->r4, 0X7690);
    func_8003521C_35E1C(rdram, ctx);
        goto after_11;
    // 0x801F8414: addiu       $a0, $a0, 0x7690
    ctx->r4 = ADD32(ctx->r4, 0X7690);
    after_11:
    // 0x801F8418: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F841C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F8420: jr          $ra
    // 0x801F8424: nop

    TRACE_RETURN()
    return;
    // 0x801F8424: nop

;}
RECOMP_FUNC void func_801F65A4_5B24B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F65A4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801F65A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F65AC: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801F65B0: lw          $t7, 0x5C($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X5C);
    // 0x801F65B4: lw          $a0, 0x18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X18);
    // 0x801F65B8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801F65BC: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801F65C0: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801F65C4: sh          $t6, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r14;
    // 0x801F65C8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x801F65CC: jalr        $t9
    // 0x801F65D0: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x801F65D0: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x801F65D4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801F65D8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F65DC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x801F65E0: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x801F65E4: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x801F65E8: lwc1        $f4, 0x28($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X28);
    // 0x801F65EC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x801F65F0: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x801F65F4: nop

    // 0x801F65F8: bc1fl       L_801F6624
    if (!c1cs) {
        // 0x801F65FC: lbu         $v0, 0x60($a2)
        ctx->r2 = MEM_BU(ctx->r6, 0X60);
            goto L_801F6624;
    }
    goto skip_0;
    // 0x801F65FC: lbu         $v0, 0x60($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X60);
    skip_0:
    // 0x801F6600: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x801F6604: jal         0x801E244C
    // 0x801F6608: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_801E244C_59E35C(rdram, ctx);
        goto after_1;
    // 0x801F6608: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_1:
    // 0x801F660C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801F6610: jal         0x801DACDC
    // 0x801F6614: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_2;
    // 0x801F6614: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x801F6618: b           L_801F665C
    // 0x801F661C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F665C;
    // 0x801F661C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F6620: lbu         $v0, 0x60($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X60);
L_801F6624:
    // 0x801F6624: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x801F6628: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801F662C: sll         $t0, $v0, 2
    ctx->r8 = S32(ctx->r2 << 2);
    // 0x801F6630: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x801F6634: lw          $t1, -0x3954($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X3954);
    // 0x801F6638: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x801F663C: subu        $t8, $t8, $v0
    ctx->r24 = SUB32(ctx->r24, ctx->r2);
    // 0x801F6640: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x801F6644: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x801F6648: addu        $t3, $t8, $t2
    ctx->r11 = ADD32(ctx->r24, ctx->r10);
    // 0x801F664C: addu        $a1, $a1, $t3
    ctx->r5 = ADD32(ctx->r5, ctx->r11);
    // 0x801F6650: jal         0x801E8078
    // 0x801F6654: lw          $a1, 0x448C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X448C);
    func_801E8078_5A3F88(rdram, ctx);
        goto after_3;
    // 0x801F6654: lw          $a1, 0x448C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X448C);
    after_3:
    // 0x801F6658: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F665C:
    // 0x801F665C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801F6660: jr          $ra
    // 0x801F6664: nop

    TRACE_RETURN()
    return;
    // 0x801F6664: nop

;}
RECOMP_FUNC void func_801F4634_5B0544(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F4634: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F4638: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F463C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F4640: jal         0x801F4C20
    // 0x801F4644: addiu       $a1, $zero, 0x7B
    ctx->r5 = ADD32(0, 0X7B);
    func_801F4C20_5B0B30(rdram, ctx);
        goto after_0;
    // 0x801F4644: addiu       $a1, $zero, 0x7B
    ctx->r5 = ADD32(0, 0X7B);
    after_0:
    // 0x801F4648: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F464C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F4650: jr          $ra
    // 0x801F4654: nop

    TRACE_RETURN()
    return;
    // 0x801F4654: nop

;}
RECOMP_FUNC void func_801F6144_5B2054(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F6144: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F6148: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F614C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F6150: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x801F6154: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x801F6158: jal         0x801F50A4
    // 0x801F615C: lui         $a3, 0x40E0
    ctx->r7 = S32(0X40E0 << 16);
    func_801F50A4_5B0FB4(rdram, ctx);
        goto after_0;
    // 0x801F615C: lui         $a3, 0x40E0
    ctx->r7 = S32(0X40E0 << 16);
    after_0:
    // 0x801F6160: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F6164: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F6168: jr          $ra
    // 0x801F616C: nop

    TRACE_RETURN()
    return;
    // 0x801F616C: nop

;}
RECOMP_FUNC void func_801EB61C_5A752C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EB61C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801EB620: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801EB624: jal         0x801EB6BC
    // 0x801EB628: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801EB6BC_5A75CC(rdram, ctx);
        goto after_0;
    // 0x801EB628: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801EB62C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801EB630: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801EB634: jr          $ra
    // 0x801EB638: nop

    TRACE_RETURN()
    return;
    // 0x801EB638: nop

;}
RECOMP_FUNC void func_801E6BC8_5A2AD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E6BC8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801E6BCC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801E6BD0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801E6BD4: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x801E6BD8: lw          $t7, 0x5C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X5C);
    // 0x801E6BDC: lw          $t0, 0x18($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X18);
    // 0x801E6BE0: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x801E6BE4: sw          $a1, 0x94($t7)
    MEM_W(0X94, ctx->r15) = ctx->r5;
    // 0x801E6BE8: lw          $t8, 0x5C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X5C);
    // 0x801E6BEC: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x801E6BF0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E6BF4: lw          $v1, 0x94($t8)
    ctx->r3 = MEM_W(ctx->r24, 0X94);
    // 0x801E6BF8: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x801E6BFC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x801E6C00: beq         $v1, $zero, L_801E6D1C
    if (ctx->r3 == 0) {
        // 0x801E6C04: addiu       $a3, $sp, 0x3C
        ctx->r7 = ADD32(ctx->r29, 0X3C);
            goto L_801E6D1C;
    }
    // 0x801E6C04: addiu       $a3, $sp, 0x3C
    ctx->r7 = ADD32(ctx->r29, 0X3C);
    // 0x801E6C08: lw          $t1, 0x68($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X68);
    // 0x801E6C0C: lw          $v0, 0x18($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X18);
    // 0x801E6C10: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E6C14: or          $t2, $t1, $at
    ctx->r10 = ctx->r9 | ctx->r1;
    // 0x801E6C18: sw          $t2, 0x68($v1)
    MEM_W(0X68, ctx->r3) = ctx->r10;
    // 0x801E6C1C: swc1        $f12, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f12.u32l;
    // 0x801E6C20: swc1        $f14, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f14.u32l;
    // 0x801E6C24: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x801E6C28: lhu         $a2, 0x18($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0X18);
    // 0x801E6C2C: lhu         $a1, 0x16($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X16);
    // 0x801E6C30: lhu         $a0, 0x14($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X14);
    // 0x801E6C34: addiu       $t3, $sp, 0x38
    ctx->r11 = ADD32(ctx->r29, 0X38);
    // 0x801E6C38: addiu       $t4, $sp, 0x34
    ctx->r12 = ADD32(ctx->r29, 0X34);
    // 0x801E6C3C: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x801E6C40: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x801E6C44: sw          $t0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r8;
    // 0x801E6C48: jal         0x80033898
    // 0x801E6C4C: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    func_80033898_34498(rdram, ctx);
        goto after_0;
    // 0x801E6C4C: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    after_0:
    // 0x801E6C50: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x801E6C54: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801E6C58: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x801E6C5C: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801E6C60: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801E6C64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E6C68: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801E6C6C: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    // 0x801E6C70: lwc1        $f10, 0xC($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0XC);
    // 0x801E6C74: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x801E6C78: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
    // 0x801E6C7C: lwc1        $f18, 0x10($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801E6C80: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x801E6C84: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801E6C88: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x801E6C8C: jal         0x801CF51C
    // 0x801E6C90: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    func_801CF51C_58B42C(rdram, ctx);
        goto after_1;
    // 0x801E6C90: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x801E6C94: lw          $t6, 0x5C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X5C);
    // 0x801E6C98: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x801E6C9C: andi        $t7, $v0, 0x3FF
    ctx->r15 = ctx->r2 & 0X3FF;
    // 0x801E6CA0: sh          $t5, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r13;
    // 0x801E6CA4: lw          $t9, 0x5C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X5C);
    // 0x801E6CA8: ori         $t8, $t7, 0x400
    ctx->r24 = ctx->r15 | 0X400;
    // 0x801E6CAC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E6CB0: sh          $t8, 0x2($t9)
    MEM_H(0X2, ctx->r25) = ctx->r24;
    // 0x801E6CB4: lw          $t1, 0x5C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X5C);
    // 0x801E6CB8: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x801E6CBC: addiu       $v1, $v1, 0x4700
    ctx->r3 = ADD32(ctx->r3, 0X4700);
    // 0x801E6CC0: swc1        $f0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f0.u32l;
    // 0x801E6CC4: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801E6CC8: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x801E6CCC: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801E6CD0: swc1        $f6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f6.u32l;
    // 0x801E6CD4: swc1        $f10, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f10.u32l;
    // 0x801E6CD8: swc1        $f16, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f16.u32l;
    // 0x801E6CDC: lw          $t2, 0x5C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X5C);
    // 0x801E6CE0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E6CE4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801E6CE8: swc1        $f0, 0x48($t2)
    MEM_W(0X48, ctx->r10) = ctx->f0.u32l;
    // 0x801E6CEC: lw          $t3, 0x5C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X5C);
    // 0x801E6CF0: swc1        $f0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->f0.u32l;
    // 0x801E6CF4: swc1        $f0, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->f0.u32l;
    // 0x801E6CF8: swc1        $f0, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->f0.u32l;
    // 0x801E6CFC: swc1        $f0, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->f0.u32l;
    // 0x801E6D00: swc1        $f0, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f0.u32l;
    // 0x801E6D04: swc1        $f18, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->f18.u32l;
    // 0x801E6D08: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801E6D0C: sh          $zero, 0x36($t3)
    MEM_H(0X36, ctx->r11) = 0;
    // 0x801E6D10: lw          $a0, -0x39DC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39DC);
    // 0x801E6D14: jal         0x801E7398
    // 0x801E6D18: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_801E7398_5A32A8(rdram, ctx);
        goto after_2;
    // 0x801E6D18: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_2:
L_801E6D1C:
    // 0x801E6D1C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801E6D20: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801E6D24: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x801E6D28: jr          $ra
    // 0x801E6D2C: nop

    TRACE_RETURN()
    return;
    // 0x801E6D2C: nop

;}
RECOMP_FUNC void func_801E0810_59C720(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E0810: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801E0814: jr          $ra
    // 0x801E0818: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801E0818: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801F9470_5B5380(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F9470: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F9474: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F9478: jal         0x801F9988
    // 0x801F947C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801F9988_5B5898(rdram, ctx);
        goto after_0;
    // 0x801F947C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801F9480: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x801F9484: addiu       $a1, $a1, -0x3340
    ctx->r5 = ADD32(ctx->r5, -0X3340);
    // 0x801F9488: addiu       $v0, $a1, 0x7FFF
    ctx->r2 = ADD32(ctx->r5, 0X7FFF);
    // 0x801F948C: lbu         $v0, 0x2DE5($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2DE5);
    // 0x801F9490: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x801F9494: addiu       $v1, $v1, -0x39DC
    ctx->r3 = ADD32(ctx->r3, -0X39DC);
    // 0x801F9498: beq         $v0, $zero, L_801F94BC
    if (ctx->r2 == 0) {
        // 0x801F949C: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_801F94BC;
    }
    // 0x801F949C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801F94A0: beq         $v0, $at, L_801F94EC
    if (ctx->r2 == ctx->r1) {
        // 0x801F94A4: lui         $v1, 0x8020
        ctx->r3 = S32(0X8020 << 16);
            goto L_801F94EC;
    }
    // 0x801F94A4: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x801F94A8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801F94AC: beq         $v0, $at, L_801F9520
    if (ctx->r2 == ctx->r1) {
        // 0x801F94B0: nop
    
            goto L_801F9520;
    }
    // 0x801F94B0: nop

    // 0x801F94B4: b           L_801F9520
    // 0x801F94B8: nop

        goto L_801F9520;
    // 0x801F94B8: nop

L_801F94BC:
    // 0x801F94BC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801F94C0: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x801F94C4: lbu         $t6, 0xBC($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0XBC);
    // 0x801F94C8: bne         $t6, $at, L_801F94DC
    if (ctx->r14 != ctx->r1) {
        // 0x801F94CC: lui         $at, 0x420C
        ctx->r1 = S32(0X420C << 16);
            goto L_801F94DC;
    }
    // 0x801F94CC: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x801F94D0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F94D4: b           L_801F9558
    // 0x801F94D8: swc1        $f4, 0x74($v0)
    MEM_W(0X74, ctx->r2) = ctx->f4.u32l;
        goto L_801F9558;
    // 0x801F94D8: swc1        $f4, 0x74($v0)
    MEM_W(0X74, ctx->r2) = ctx->f4.u32l;
L_801F94DC:
    // 0x801F94DC: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x801F94E0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F94E4: b           L_801F9558
    // 0x801F94E8: swc1        $f6, 0x74($v0)
    MEM_W(0X74, ctx->r2) = ctx->f6.u32l;
        goto L_801F9558;
    // 0x801F94E8: swc1        $f6, 0x74($v0)
    MEM_W(0X74, ctx->r2) = ctx->f6.u32l;
L_801F94EC:
    // 0x801F94EC: addiu       $v1, $v1, -0x39DC
    ctx->r3 = ADD32(ctx->r3, -0X39DC);
    // 0x801F94F0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801F94F4: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x801F94F8: lbu         $t7, 0xBC($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0XBC);
    // 0x801F94FC: bne         $t7, $at, L_801F9510
    if (ctx->r15 != ctx->r1) {
        // 0x801F9500: lui         $at, 0x4234
        ctx->r1 = S32(0X4234 << 16);
            goto L_801F9510;
    }
    // 0x801F9500: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x801F9504: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801F9508: b           L_801F9558
    // 0x801F950C: swc1        $f8, 0x74($v0)
    MEM_W(0X74, ctx->r2) = ctx->f8.u32l;
        goto L_801F9558;
    // 0x801F950C: swc1        $f8, 0x74($v0)
    MEM_W(0X74, ctx->r2) = ctx->f8.u32l;
L_801F9510:
    // 0x801F9510: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x801F9514: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801F9518: b           L_801F9558
    // 0x801F951C: swc1        $f10, 0x74($v0)
    MEM_W(0X74, ctx->r2) = ctx->f10.u32l;
        goto L_801F9558;
    // 0x801F951C: swc1        $f10, 0x74($v0)
    MEM_W(0X74, ctx->r2) = ctx->f10.u32l;
L_801F9520:
    // 0x801F9520: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x801F9524: addiu       $v1, $v1, -0x39DC
    ctx->r3 = ADD32(ctx->r3, -0X39DC);
    // 0x801F9528: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801F952C: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x801F9530: lbu         $t8, 0xBC($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0XBC);
    // 0x801F9534: bne         $t8, $at, L_801F9548
    if (ctx->r24 != ctx->r1) {
        // 0x801F9538: lui         $at, 0x4200
        ctx->r1 = S32(0X4200 << 16);
            goto L_801F9548;
    }
    // 0x801F9538: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x801F953C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801F9540: b           L_801F9558
    // 0x801F9544: swc1        $f16, 0x74($v0)
    MEM_W(0X74, ctx->r2) = ctx->f16.u32l;
        goto L_801F9558;
    // 0x801F9544: swc1        $f16, 0x74($v0)
    MEM_W(0X74, ctx->r2) = ctx->f16.u32l;
L_801F9548:
    // 0x801F9548: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x801F954C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801F9550: nop

    // 0x801F9554: swc1        $f18, 0x74($v0)
    MEM_W(0X74, ctx->r2) = ctx->f18.u32l;
L_801F9558:
    // 0x801F9558: jal         0x801D26FC
    // 0x801F955C: lbu         $a0, 0x1B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1B);
    func_801D26FC_58E60C(rdram, ctx);
        goto after_1;
    // 0x801F955C: lbu         $a0, 0x1B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1B);
    after_1:
    // 0x801F9560: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x801F9564: lw          $t9, -0x3A38($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3A38);
    // 0x801F9568: lui         $t0, 0x4
    ctx->r8 = S32(0X4 << 16);
    // 0x801F956C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x801F9570: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x801F9574: lbu         $t0, -0x51D7($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X51D7);
    // 0x801F9578: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x801F957C: addiu       $a1, $a1, -0x3340
    ctx->r5 = ADD32(ctx->r5, -0X3340);
    // 0x801F9580: andi        $t1, $t0, 0x8
    ctx->r9 = ctx->r8 & 0X8;
    // 0x801F9584: beq         $t1, $zero, L_801F95C8
    if (ctx->r9 == 0) {
        // 0x801F9588: addiu       $v1, $v1, -0x39DC
        ctx->r3 = ADD32(ctx->r3, -0X39DC);
            goto L_801F95C8;
    }
    // 0x801F9588: addiu       $v1, $v1, -0x39DC
    ctx->r3 = ADD32(ctx->r3, -0X39DC);
    // 0x801F958C: addiu       $t2, $a1, 0x7FFF
    ctx->r10 = ADD32(ctx->r5, 0X7FFF);
    // 0x801F9590: lw          $t2, 0x2E2D($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X2E2D);
    // 0x801F9594: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801F9598: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x801F959C: bgez        $t2, L_801F95B0
    if (SIGNED(ctx->r10) >= 0) {
        // 0x801F95A0: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_801F95B0;
    }
    // 0x801F95A0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801F95A4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801F95A8: nop

    // 0x801F95AC: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_801F95B0:
    // 0x801F95B0: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x801F95B4: addiu       $t4, $a1, 0x7FFF
    ctx->r12 = ADD32(ctx->r5, 0X7FFF);
    // 0x801F95B8: swc1        $f6, 0x74($t3)
    MEM_W(0X74, ctx->r11) = ctx->f6.u32l;
    // 0x801F95BC: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x801F95C0: lhu         $t4, 0x2E31($t4)
    ctx->r12 = MEM_HU(ctx->r12, 0X2E31);
    // 0x801F95C4: sb          $t4, 0xBC($t5)
    MEM_B(0XBC, ctx->r13) = ctx->r12;
L_801F95C8:
    // 0x801F95C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F95CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F95D0: jr          $ra
    // 0x801F95D4: nop

    TRACE_RETURN()
    return;
    // 0x801F95D4: nop

;}
RECOMP_FUNC void func_801E3244_59F154(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E3244: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E3248: lwc1        $f0, -0x4CA4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4CA4);
    // 0x801E324C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E3250: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E3254: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x801E3258: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x801E325C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801E3260: jal         0x801E32D4
    // 0x801E3264: nop

    func_801E32D4_59F1E4(rdram, ctx);
        goto after_0;
    // 0x801E3264: nop

    after_0:
    // 0x801E3268: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E326C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E3270: jr          $ra
    // 0x801E3274: nop

    TRACE_RETURN()
    return;
    // 0x801E3274: nop

;}
RECOMP_FUNC void func_801E30E4_59EFF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E30E4: lbu         $t6, 0x30($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X30);
    // 0x801E30E8: lw          $t8, 0x5C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X5C);
    // 0x801E30EC: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x801E30F0: andi        $t7, $t6, 0xFFFE
    ctx->r15 = ctx->r14 & 0XFFFE;
    // 0x801E30F4: sb          $t7, 0x30($a0)
    MEM_B(0X30, ctx->r4) = ctx->r15;
    // 0x801E30F8: sh          $zero, 0x30($t8)
    MEM_H(0X30, ctx->r24) = 0;
    // 0x801E30FC: sb          $zero, 0xD4($a0)
    MEM_B(0XD4, ctx->r4) = 0;
    // 0x801E3100: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E3104: sb          $zero, 0x64($v0)
    MEM_B(0X64, ctx->r2) = 0;
    // 0x801E3108: lw          $t9, 0x5C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X5C);
    // 0x801E310C: swc1        $f0, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->f0.u32l;
    // 0x801E3110: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E3114: swc1        $f0, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f0.u32l;
    // 0x801E3118: swc1        $f0, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f0.u32l;
    // 0x801E311C: swc1        $f0, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f0.u32l;
    // 0x801E3120: swc1        $f0, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f0.u32l;
    // 0x801E3124: lwc1        $f4, -0x4CB4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4CB4);
    // 0x801E3128: lw          $t0, 0x5C($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X5C);
    // 0x801E312C: jr          $ra
    // 0x801E3130: swc1        $f4, 0x48($t0)
    MEM_W(0X48, ctx->r8) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x801E3130: swc1        $f4, 0x48($t0)
    MEM_W(0X48, ctx->r8) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_801F5F4C_5B1E5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F5F4C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801F5F50: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F5F54: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801F5F58: jal         0x801E1F00
    // 0x801F5F5C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_801E1F00_59DE10(rdram, ctx);
        goto after_0;
    // 0x801F5F5C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x801F5F60: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
    // 0x801F5F64: lhu         $v1, 0x30($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X30);
    // 0x801F5F68: sltiu       $a0, $v1, 0x1
    ctx->r4 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x801F5F6C: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x801F5F70: bne         $a0, $zero, L_801F6028
    if (ctx->r4 != 0) {
        // 0x801F5F74: sh          $t6, 0x30($v0)
        MEM_H(0X30, ctx->r2) = ctx->r14;
            goto L_801F6028;
    }
    // 0x801F5F74: sh          $t6, 0x30($v0)
    MEM_H(0X30, ctx->r2) = ctx->r14;
    // 0x801F5F78: lbu         $t7, 0x90($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X90);
    // 0x801F5F7C: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x801F5F80: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x801F5F84: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x801F5F88: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x801F5F8C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x801F5F90: lhu         $t9, 0x7DB2($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0X7DB2);
    // 0x801F5F94: andi        $t0, $t9, 0x8
    ctx->r8 = ctx->r25 & 0X8;
    // 0x801F5F98: beql        $t0, $zero, L_801F5FC0
    if (ctx->r8 == 0) {
        // 0x801F5F9C: lw          $t1, 0x5C($s0)
        ctx->r9 = MEM_W(ctx->r16, 0X5C);
            goto L_801F5FC0;
    }
    goto skip_0;
    // 0x801F5F9C: lw          $t1, 0x5C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X5C);
    skip_0:
    // 0x801F5FA0: lwc1        $f4, 0xA4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XA4);
    // 0x801F5FA4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801F5FA8: nop

    // 0x801F5FAC: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x801F5FB0: nop

    // 0x801F5FB4: bc1fl       L_801F5FFC
    if (!c1cs) {
        // 0x801F5FB8: lhu         $t3, 0x98($s0)
        ctx->r11 = MEM_HU(ctx->r16, 0X98);
            goto L_801F5FFC;
    }
    goto skip_1;
    // 0x801F5FB8: lhu         $t3, 0x98($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X98);
    skip_1:
    // 0x801F5FBC: lw          $t1, 0x5C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X5C);
L_801F5FC0:
    // 0x801F5FC0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F5FC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F5FC8: sh          $zero, 0x86($t1)
    MEM_H(0X86, ctx->r9) = 0;
    // 0x801F5FCC: lw          $t2, 0x5C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X5C);
    // 0x801F5FD0: lwc1        $f8, -0x3D30($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X3D30);
    // 0x801F5FD4: jal         0x801E3324
    // 0x801F5FD8: swc1        $f8, 0x48($t2)
    MEM_W(0X48, ctx->r10) = ctx->f8.u32l;
    func_801E3324_59F234(rdram, ctx);
        goto after_1;
    // 0x801F5FD8: swc1        $f8, 0x48($t2)
    MEM_W(0X48, ctx->r10) = ctx->f8.u32l;
    after_1:
    // 0x801F5FDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F5FE0: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x801F5FE4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x801F5FE8: jal         0x801DAC7C
    // 0x801F5FEC: lbu         $a3, 0xDB($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XDB);
    func_801DAC7C_596B8C(rdram, ctx);
        goto after_2;
    // 0x801F5FEC: lbu         $a3, 0xDB($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XDB);
    after_2:
    // 0x801F5FF0: b           L_801F602C
    // 0x801F5FF4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801F602C;
    // 0x801F5FF4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801F5FF8: lhu         $t3, 0x98($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X98);
L_801F5FFC:
    // 0x801F5FFC: beql        $t3, $zero, L_801F602C
    if (ctx->r11 == 0) {
        // 0x801F6000: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801F602C;
    }
    goto skip_2;
    // 0x801F6000: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x801F6004: lw          $t4, 0x5C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X5C);
    // 0x801F6008: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F600C: sh          $zero, 0x86($t4)
    MEM_H(0X86, ctx->r12) = 0;
    // 0x801F6010: lw          $t5, 0x5C($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X5C);
    // 0x801F6014: jal         0x801E2264
    // 0x801F6018: sh          $zero, 0x0($t5)
    MEM_H(0X0, ctx->r13) = 0;
    func_801E2264_59E174(rdram, ctx);
        goto after_3;
    // 0x801F6018: sh          $zero, 0x0($t5)
    MEM_H(0X0, ctx->r13) = 0;
    after_3:
    // 0x801F601C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F6020: jal         0x801DACDC
    // 0x801F6024: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_4;
    // 0x801F6024: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    after_4:
L_801F6028:
    // 0x801F6028: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801F602C:
    // 0x801F602C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801F6030: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801F6034: jr          $ra
    // 0x801F6038: nop

    TRACE_RETURN()
    return;
    // 0x801F6038: nop

;}
RECOMP_FUNC void func_801DA708_596618(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DA708: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DA70C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DA710: jal         0x801DA758
    // 0x801DA714: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801DA758_596668(rdram, ctx);
        goto after_0;
    // 0x801DA714: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801DA718: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801DA71C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801DA720: lwc1        $f4, -0x50D8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X50D8);
    // 0x801DA724: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801DA728: swc1        $f4, 0x48($t6)
    MEM_W(0X48, ctx->r14) = ctx->f4.u32l;
    // 0x801DA72C: lw          $t7, 0x5C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X5C);
    // 0x801DA730: sh          $zero, 0x0($t7)
    MEM_H(0X0, ctx->r15) = 0;
    // 0x801DA734: lw          $t8, 0x5C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X5C);
    // 0x801DA738: sh          $zero, 0xCE($a0)
    MEM_H(0XCE, ctx->r4) = 0;
    // 0x801DA73C: sh          $zero, 0x34($t8)
    MEM_H(0X34, ctx->r24) = 0;
    // 0x801DA740: lw          $t9, 0x5C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X5C);
    // 0x801DA744: sh          $zero, 0x2($t9)
    MEM_H(0X2, ctx->r25) = 0;
    // 0x801DA748: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DA74C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DA750: jr          $ra
    // 0x801DA754: nop

    TRACE_RETURN()
    return;
    // 0x801DA754: nop

;}
RECOMP_FUNC void func_801F95D8_5B54E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F95D8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801F95DC: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x801F95E0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801F95E4: lw          $v1, -0x3A38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A38);
    // 0x801F95E8: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801F95EC: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801F95F0: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801F95F4: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x801F95F8: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x801F95FC: addu        $v1, $v1, $at
    ctx->r3 = ADD32(ctx->r3, ctx->r1);
    // 0x801F9600: lbu         $t6, 0x2DF6($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X2DF6);
    // 0x801F9604: lhu         $t9, 0x2DF8($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X2DF8);
    // 0x801F9608: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x801F960C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x801F9610: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x801F9614: lw          $t8, -0x6724($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X6724);
    // 0x801F9618: sll         $t3, $t9, 2
    ctx->r11 = S32(ctx->r25 << 2);
    // 0x801F961C: addu        $t3, $t3, $t9
    ctx->r11 = ADD32(ctx->r11, ctx->r25);
    // 0x801F9620: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x801F9624: addu        $v0, $t8, $t3
    ctx->r2 = ADD32(ctx->r24, ctx->r11);
    // 0x801F9628: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801F962C: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
    // 0x801F9630: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x801F9634: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801F9638: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801F963C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801F9640: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801F9644: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x801F9648: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x801F964C: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    // 0x801F9650: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x801F9654: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801F9658: lw          $t5, 0x8($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X8);
    // 0x801F965C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801F9660: or          $t4, $a2, $at
    ctx->r12 = ctx->r6 | ctx->r1;
    // 0x801F9664: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
    // 0x801F9668: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x801F966C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801F9670: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    // 0x801F9674: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x801F9678: lw          $t7, 0x10($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X10);
    // 0x801F967C: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x801F9680: jal         0x80035A5C
    // 0x801F9684: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
    func_80035A5C_3665C(rdram, ctx);
        goto after_0;
    // 0x801F9684: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
    after_0:
    // 0x801F9688: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x801F968C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801F9690: sb          $t9, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r25;
    // 0x801F9694: sb          $zero, 0x65($s0)
    MEM_B(0X65, ctx->r16) = 0;
    // 0x801F9698: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x801F969C: lw          $v1, -0x3A38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A38);
    // 0x801F96A0: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801F96A4: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801F96A8: addu        $v1, $v1, $at
    ctx->r3 = ADD32(ctx->r3, ctx->r1);
    // 0x801F96AC: lbu         $t8, 0x2DF6($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X2DF6);
    // 0x801F96B0: lui         $t4, 0x8021
    ctx->r12 = S32(0X8021 << 16);
    // 0x801F96B4: lhu         $t5, 0x2DF8($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X2DF8);
    // 0x801F96B8: sll         $t3, $t8, 2
    ctx->r11 = S32(ctx->r24 << 2);
    // 0x801F96BC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x801F96C0: lw          $t4, -0x670C($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X670C);
    // 0x801F96C4: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x801F96C8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801F96CC: addu        $t7, $t4, $t6
    ctx->r15 = ADD32(ctx->r12, ctx->r14);
    // 0x801F96D0: lw          $t9, 0x0($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X0);
    // 0x801F96D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801F96D8: beql        $t9, $zero, L_801F97BC
    if (ctx->r25 == 0) {
        // 0x801F96DC: addiu       $t5, $zero, 0x1
        ctx->r13 = ADD32(0, 0X1);
            goto L_801F97BC;
    }
    goto skip_0;
    // 0x801F96DC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    skip_0:
    // 0x801F96E0: jal         0x80035EEC
    // 0x801F96E4: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    func_80035EEC_36AEC(rdram, ctx);
        goto after_1;
    // 0x801F96E4: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    after_1:
    // 0x801F96E8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801F96EC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801F96F0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801F96F4: bne         $v0, $zero, L_801F970C
    if (ctx->r2 != 0) {
        // 0x801F96F8: lw          $a0, 0x50($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X50);
            goto L_801F970C;
    }
    // 0x801F96F8: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x801F96FC: jal         0x80035044
    // 0x801F9700: nop

    func_80035044_35C44(rdram, ctx);
        goto after_2;
    // 0x801F9700: nop

    after_2:
    // 0x801F9704: b           L_801F97C4
    // 0x801F9708: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
        goto L_801F97C4;
    // 0x801F9708: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
L_801F970C:
    // 0x801F970C: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x801F9710: lw          $v1, -0x3A38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A38);
    // 0x801F9714: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801F9718: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801F971C: addu        $v1, $v1, $at
    ctx->r3 = ADD32(ctx->r3, ctx->r1);
    // 0x801F9720: lbu         $t0, 0x2DF6($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X2DF6);
    // 0x801F9724: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x801F9728: lhu         $t1, 0x2DF8($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X2DF8);
    // 0x801F972C: sll         $t8, $t0, 2
    ctx->r24 = S32(ctx->r8 << 2);
    // 0x801F9730: addu        $t3, $t3, $t8
    ctx->r11 = ADD32(ctx->r11, ctx->r24);
    // 0x801F9734: lw          $t3, -0x670C($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X670C);
    // 0x801F9738: sll         $t5, $t1, 3
    ctx->r13 = S32(ctx->r9 << 3);
    // 0x801F973C: lw          $s0, 0x1C($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X1C);
    // 0x801F9740: addu        $t2, $t3, $t5
    ctx->r10 = ADD32(ctx->r11, ctx->r13);
    // 0x801F9744: lw          $a1, 0x0($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X0);
    // 0x801F9748: lw          $a2, 0x4($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X4);
    // 0x801F974C: lui         $t4, 0x8021
    ctx->r12 = S32(0X8021 << 16);
    // 0x801F9750: addu        $t4, $t4, $t8
    ctx->r12 = ADD32(ctx->r12, ctx->r24);
    // 0x801F9754: lw          $t4, -0x6724($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X6724);
    // 0x801F9758: sll         $t6, $t1, 2
    ctx->r14 = S32(ctx->r9 << 2);
    // 0x801F975C: addu        $t6, $t6, $t1
    ctx->r14 = ADD32(ctx->r14, ctx->r9);
    // 0x801F9760: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x801F9764: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x801F9768: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x801F976C: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    // 0x801F9770: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801F9774: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801F9778: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801F977C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801F9780: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x801F9784: addu        $v0, $t4, $t6
    ctx->r2 = ADD32(ctx->r12, ctx->r14);
    // 0x801F9788: lw          $t7, 0x8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X8);
    // 0x801F978C: or          $t0, $t8, $zero
    ctx->r8 = ctx->r24 | 0;
    // 0x801F9790: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801F9794: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x801F9798: lw          $t9, 0xC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XC);
    // 0x801F979C: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x801F97A0: lw          $t8, 0x10($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X10);
    // 0x801F97A4: jal         0x80035A5C
    // 0x801F97A8: sw          $t8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r24;
    func_80035A5C_3665C(rdram, ctx);
        goto after_3;
    // 0x801F97A8: sw          $t8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r24;
    after_3:
    // 0x801F97AC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x801F97B0: sb          $t3, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r11;
    // 0x801F97B4: sb          $zero, 0x65($s0)
    MEM_B(0X65, ctx->r16) = 0;
    // 0x801F97B8: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
L_801F97BC:
    // 0x801F97BC: sh          $t5, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r13;
    // 0x801F97C0: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
L_801F97C4:
    // 0x801F97C4: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x801F97C8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x801F97CC: jr          $ra
    // 0x801F97D0: nop

    TRACE_RETURN()
    return;
    // 0x801F97D0: nop

;}
RECOMP_FUNC void func_801F5D70_5B1C80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F5D70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F5D74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F5D78: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F5D7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801F5D80: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    // 0x801F5D84: jal         0x801F5DF4
    // 0x801F5D88: addiu       $a3, $zero, 0xE
    ctx->r7 = ADD32(0, 0XE);
    func_801F5DF4_5B1D04(rdram, ctx);
        goto after_0;
    // 0x801F5D88: addiu       $a3, $zero, 0xE
    ctx->r7 = ADD32(0, 0XE);
    after_0:
    // 0x801F5D8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F5D90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F5D94: jr          $ra
    // 0x801F5D98: nop

    TRACE_RETURN()
    return;
    // 0x801F5D98: nop

;}
RECOMP_FUNC void func_801DE75C_59A66C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DE75C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DE760: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DE764: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801DE768: jal         0x801E7DE8
    // 0x801DE76C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801E7DE8_5A3CF8(rdram, ctx);
        goto after_0;
    // 0x801DE76C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801DE770: beq         $v0, $zero, L_801DE784
    if (ctx->r2 == 0) {
        // 0x801DE774: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_801DE784;
    }
    // 0x801DE774: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801DE778: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801DE77C: b           L_801DE790
    // 0x801DE780: lwc1        $f0, -0x4E70($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4E70);
        goto L_801DE790;
    // 0x801DE780: lwc1        $f0, -0x4E70($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4E70);
L_801DE784:
    // 0x801DE784: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801DE788: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801DE78C: nop

L_801DE790:
    // 0x801DE790: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x801DE794: jal         0x801E3EBC
    // 0x801DE798: addiu       $a1, $zero, 0x22
    ctx->r5 = ADD32(0, 0X22);
    func_801E3EBC_59FDCC(rdram, ctx);
        goto after_1;
    // 0x801DE798: addiu       $a1, $zero, 0x22
    ctx->r5 = ADD32(0, 0X22);
    after_1:
    // 0x801DE79C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DE7A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DE7A4: jr          $ra
    // 0x801DE7A8: nop

    TRACE_RETURN()
    return;
    // 0x801DE7A8: nop

;}
