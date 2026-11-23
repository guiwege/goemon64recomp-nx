#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8003E4C0_3F0C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003E4C0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003E4C4: lhu         $v0, 0x790C($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X790C);
    // 0x8003E4C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003E4CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003E4D0: andi        $t6, $v0, 0x8000
    ctx->r14 = ctx->r2 & 0X8000;
    // 0x8003E4D4: beq         $t6, $zero, L_8003E4EC
    if (ctx->r14 == 0) {
        // 0x8003E4D8: andi        $t8, $v0, 0x4000
        ctx->r24 = ctx->r2 & 0X4000;
            goto L_8003E4EC;
    }
    // 0x8003E4D8: andi        $t8, $v0, 0x4000
    ctx->r24 = ctx->r2 & 0X4000;
    // 0x8003E4DC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8003E4E0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003E4E4: b           L_8003E538
    // 0x8003E4E8: sw          $t7, 0x77E0($at)
    MEM_W(0X77E0, ctx->r1) = ctx->r15;
        goto L_8003E538;
    // 0x8003E4E8: sw          $t7, 0x77E0($at)
    MEM_W(0X77E0, ctx->r1) = ctx->r15;
L_8003E4EC:
    // 0x8003E4EC: beq         $t8, $zero, L_8003E538
    if (ctx->r24 == 0) {
        // 0x8003E4F0: lui         $t9, 0x801C
        ctx->r25 = S32(0X801C << 16);
            goto L_8003E538;
    }
    // 0x8003E4F0: lui         $t9, 0x801C
    ctx->r25 = S32(0X801C << 16);
    // 0x8003E4F4: lw          $t9, 0x7770($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7770);
    // 0x8003E4F8: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003E4FC: bnel        $t9, $zero, L_8003E53C
    if (ctx->r25 != 0) {
        // 0x8003E500: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8003E53C;
    }
    goto skip_0;
    // 0x8003E500: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8003E504: lw          $v0, 0x7774($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7774);
    // 0x8003E508: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003E50C: sw          $zero, 0x77E0($at)
    MEM_W(0X77E0, ctx->r1) = 0;
    // 0x8003E510: bne         $v0, $zero, L_8003E528
    if (ctx->r2 != 0) {
        // 0x8003E514: nop
    
            goto L_8003E528;
    }
    // 0x8003E514: nop

    // 0x8003E518: jal         0x8003E680
    // 0x8003E51C: nop

    func_8003E680_3F280(rdram, ctx);
        goto after_0;
    // 0x8003E51C: nop

    after_0:
    // 0x8003E520: b           L_8003E53C
    // 0x8003E524: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8003E53C;
    // 0x8003E524: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003E528:
    // 0x8003E528: jal         0x8003DE48
    // 0x8003E52C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8003DE48_3EA48(rdram, ctx);
        goto after_1;
    // 0x8003E52C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x8003E530: lui         $at, 0x8007
    ctx->r1 = S32(0X8007 << 16);
    // 0x8003E534: sw          $v0, 0x7858($at)
    MEM_W(0X7858, ctx->r1) = ctx->r2;
L_8003E538:
    // 0x8003E538: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003E53C:
    // 0x8003E53C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003E540: jr          $ra
    // 0x8003E544: nop

    TRACE_RETURN()
    return;
    // 0x8003E544: nop

;}
RECOMP_FUNC void guMtxIdentF(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80043BA0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80043BA4: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80043BA8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80043BAC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80043BB0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80043BB4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80043BB8: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x80043BBC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80043BC0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_80043BC4:
    // 0x80043BC4: bnel        $v0, $zero, L_80043BD8
    if (ctx->r2 != 0) {
        // 0x80043BC8: swc1        $f2, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->f2.u32l;
            goto L_80043BD8;
    }
    goto skip_0;
    // 0x80043BC8: swc1        $f2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f2.u32l;
    skip_0:
    // 0x80043BCC: b           L_80043BD8
    // 0x80043BD0: swc1        $f0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f0.u32l;
        goto L_80043BD8;
    // 0x80043BD0: swc1        $f0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f0.u32l;
    // 0x80043BD4: swc1        $f2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f2.u32l;
L_80043BD8:
    // 0x80043BD8: bnel        $v0, $a0, L_80043BEC
    if (ctx->r2 != ctx->r4) {
        // 0x80043BDC: swc1        $f2, 0x4($v1)
        MEM_W(0X4, ctx->r3) = ctx->f2.u32l;
            goto L_80043BEC;
    }
    goto skip_1;
    // 0x80043BDC: swc1        $f2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f2.u32l;
    skip_1:
    // 0x80043BE0: b           L_80043BEC
    // 0x80043BE4: swc1        $f0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f0.u32l;
        goto L_80043BEC;
    // 0x80043BE4: swc1        $f0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f0.u32l;
    // 0x80043BE8: swc1        $f2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f2.u32l;
L_80043BEC:
    // 0x80043BEC: bnel        $v0, $a1, L_80043C00
    if (ctx->r2 != ctx->r5) {
        // 0x80043BF0: swc1        $f2, 0x8($v1)
        MEM_W(0X8, ctx->r3) = ctx->f2.u32l;
            goto L_80043C00;
    }
    goto skip_2;
    // 0x80043BF0: swc1        $f2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f2.u32l;
    skip_2:
    // 0x80043BF4: b           L_80043C00
    // 0x80043BF8: swc1        $f0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f0.u32l;
        goto L_80043C00;
    // 0x80043BF8: swc1        $f0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f0.u32l;
    // 0x80043BFC: swc1        $f2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f2.u32l;
L_80043C00:
    // 0x80043C00: bnel        $v0, $a2, L_80043C14
    if (ctx->r2 != ctx->r6) {
        // 0x80043C04: swc1        $f2, 0xC($v1)
        MEM_W(0XC, ctx->r3) = ctx->f2.u32l;
            goto L_80043C14;
    }
    goto skip_3;
    // 0x80043C04: swc1        $f2, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f2.u32l;
    skip_3:
    // 0x80043C08: b           L_80043C14
    // 0x80043C0C: swc1        $f0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f0.u32l;
        goto L_80043C14;
    // 0x80043C0C: swc1        $f0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f0.u32l;
    // 0x80043C10: swc1        $f2, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f2.u32l;
L_80043C14:
    // 0x80043C14: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80043C18: bne         $v0, $a3, L_80043BC4
    if (ctx->r2 != ctx->r7) {
        // 0x80043C1C: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_80043BC4;
    }
    // 0x80043C1C: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x80043C20: jr          $ra
    // 0x80043C24: nop

    TRACE_RETURN()
    return;
    // 0x80043C24: nop

;}
RECOMP_FUNC void func_80015118_15D18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80015118: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8001511C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80015120: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80015124: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80015128: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8001512C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80015130: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80015134: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80015138: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8001513C: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x80015140: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x80015144: lw          $s5, 0x0($a2)
    ctx->r21 = MEM_W(ctx->r6, 0X0);
    // 0x80015148: lw          $t7, 0x4($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X4);
    // 0x8001514C: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80015150: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x80015154: and         $t6, $s5, $at
    ctx->r14 = ctx->r21 & ctx->r1;
    // 0x80015158: multu       $t7, $t6
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001515C: lui         $v0, 0x8017
    ctx->r2 = S32(0X8017 << 16);
    // 0x80015160: addiu       $v0, $v0, -0x7B70
    ctx->r2 = ADD32(ctx->r2, -0X7B70);
    // 0x80015164: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x80015168: lw          $t9, 0x10($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X10);
    // 0x8001516C: or          $s6, $a2, $zero
    ctx->r22 = ctx->r6 | 0;
    // 0x80015170: sw          $a1, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->r5;
    // 0x80015174: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80015178: or          $s5, $t6, $zero
    ctx->r21 = ctx->r14 | 0;
    // 0x8001517C: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x80015180: mflo        $s1
    ctx->r17 = lo;
    // 0x80015184: andi        $t1, $s1, 0x1
    ctx->r9 = ctx->r17 & 0X1;
    // 0x80015188: bne         $t9, $at, L_800151C0
    if (ctx->r25 != ctx->r1) {
        // 0x8001518C: addiu       $a0, $zero, 0x10
        ctx->r4 = ADD32(0, 0X10);
            goto L_800151C0;
    }
    // 0x8001518C: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x80015190: lw          $t3, 0x1C($s6)
    ctx->r11 = MEM_W(ctx->r22, 0X1C);
    // 0x80015194: bgez        $s1, L_800151A4
    if (SIGNED(ctx->r17) >= 0) {
        // 0x80015198: sra         $t0, $s1, 1
        ctx->r8 = S32(SIGNED(ctx->r17) >> 1);
            goto L_800151A4;
    }
    // 0x80015198: sra         $t0, $s1, 1
    ctx->r8 = S32(SIGNED(ctx->r17) >> 1);
    // 0x8001519C: addiu       $at, $s1, 0x1
    ctx->r1 = ADD32(ctx->r17, 0X1);
    // 0x800151A0: sra         $t0, $at, 1
    ctx->r8 = S32(SIGNED(ctx->r1) >> 1);
L_800151A4:
    // 0x800151A4: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x800151A8: addu        $t4, $t3, $t2
    ctx->r12 = ADD32(ctx->r11, ctx->r10);
    // 0x800151AC: addiu       $t5, $t4, 0x7
    ctx->r13 = ADD32(ctx->r12, 0X7);
    // 0x800151B0: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x800151B4: and         $t6, $t5, $at
    ctx->r14 = ctx->r13 & ctx->r1;
    // 0x800151B8: jal         0x800153B0
    // 0x800151BC: sw          $t6, 0x20($s6)
    MEM_W(0X20, ctx->r22) = ctx->r14;
    func_800153B0_15FB0(rdram, ctx);
        goto after_0;
    // 0x800151BC: sw          $t6, 0x20($s6)
    MEM_W(0X20, ctx->r22) = ctx->r14;
    after_0:
L_800151C0:
    // 0x800151C0: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x800151C4: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x800151C8: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x800151CC: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x800151D0: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    // 0x800151D4: bgez        $s1, L_800151E4
    if (SIGNED(ctx->r17) >= 0) {
        // 0x800151D8: sra         $s3, $s1, 3
        ctx->r19 = S32(SIGNED(ctx->r17) >> 3);
            goto L_800151E4;
    }
    // 0x800151D8: sra         $s3, $s1, 3
    ctx->r19 = S32(SIGNED(ctx->r17) >> 3);
    // 0x800151DC: addiu       $at, $s1, 0x7
    ctx->r1 = ADD32(ctx->r17, 0X7);
    // 0x800151E0: sra         $s3, $at, 3
    ctx->r19 = S32(SIGNED(ctx->r1) >> 3);
L_800151E4:
    // 0x800151E4: addiu       $s0, $s3, 0x1
    ctx->r16 = ADD32(ctx->r19, 0X1);
    // 0x800151E8: jal         0x800148F0
    // 0x800151EC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800148F0_154F0(rdram, ctx);
        goto after_1;
    // 0x800151EC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x800151F0: lui         $s4, 0x8017
    ctx->r20 = S32(0X8017 << 16);
    // 0x800151F4: addiu       $s4, $s4, -0x7B6C
    ctx->r20 = ADD32(ctx->r20, -0X7B6C);
    // 0x800151F8: bne         $v0, $zero, L_80015270
    if (ctx->r2 != 0) {
        // 0x800151FC: sw          $v0, 0x0($s4)
        MEM_W(0X0, ctx->r20) = ctx->r2;
            goto L_80015270;
    }
    // 0x800151FC: sw          $v0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r2;
    // 0x80015200: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x80015204: lw          $v0, -0x3A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A38);
    // 0x80015208: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8001520C: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x80015210: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x80015214: lh          $t8, 0x2DB6($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X2DB6);
    // 0x80015218: lui         $t0, 0x8026
    ctx->r8 = S32(0X8026 << 16);
    // 0x8001521C: addiu       $t0, $t0, 0x1000
    ctx->r8 = ADD32(ctx->r8, 0X1000);
    // 0x80015220: beq         $t8, $zero, L_80015268
    if (ctx->r24 == 0) {
        // 0x80015224: nop
    
            goto L_80015268;
    }
    // 0x80015224: nop

    // 0x80015228: lh          $v1, 0x2DB0($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X2DB0);
    // 0x8001522C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80015230: bne         $v1, $at, L_80015240
    if (ctx->r3 != ctx->r1) {
        // 0x80015234: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80015240;
    }
    // 0x80015234: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80015238: b           L_80015240
    // 0x8001523C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80015240;
    // 0x8001523C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80015240:
    // 0x80015240: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x80015244: addu        $t9, $t9, $v0
    ctx->r25 = ADD32(ctx->r25, ctx->r2);
    // 0x80015248: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8001524C: subu        $t9, $t9, $v0
    ctx->r25 = SUB32(ctx->r25, ctx->r2);
    // 0x80015250: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80015254: subu        $t9, $t9, $v0
    ctx->r25 = SUB32(ctx->r25, ctx->r2);
    // 0x80015258: sll         $t9, $t9, 11
    ctx->r25 = S32(ctx->r25 << 11);
    // 0x8001525C: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x80015260: b           L_80015278
    // 0x80015264: sw          $t1, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r9;
        goto L_80015278;
    // 0x80015264: sw          $t1, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r9;
L_80015268:
    // 0x80015268: b           L_80015388
    // 0x8001526C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80015388;
    // 0x8001526C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80015270:
    // 0x80015270: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80015274: sw          $t3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r11;
L_80015278:
    // 0x80015278: blez        $s0, L_800152E8
    if (SIGNED(ctx->r16) <= 0) {
        // 0x8001527C: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_800152E8;
    }
    // 0x8001527C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80015280: addiu       $v1, $s3, 0x1
    ctx->r3 = ADD32(ctx->r19, 0X1);
    // 0x80015284: andi        $t2, $v1, 0x3
    ctx->r10 = ctx->r3 & 0X3;
    // 0x80015288: beq         $t2, $zero, L_800152AC
    if (ctx->r10 == 0) {
        // 0x8001528C: or          $v0, $t2, $zero
        ctx->r2 = ctx->r10 | 0;
            goto L_800152AC;
    }
    // 0x8001528C: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
L_80015290:
    // 0x80015290: lw          $t4, 0x0($s4)
    ctx->r12 = MEM_W(ctx->r20, 0X0);
    // 0x80015294: addu        $t5, $t4, $s2
    ctx->r13 = ADD32(ctx->r12, ctx->r18);
    // 0x80015298: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8001529C: bne         $v0, $s2, L_80015290
    if (ctx->r2 != ctx->r18) {
        // 0x800152A0: sb          $zero, 0x0($t5)
        MEM_B(0X0, ctx->r13) = 0;
            goto L_80015290;
    }
    // 0x800152A0: sb          $zero, 0x0($t5)
    MEM_B(0X0, ctx->r13) = 0;
    // 0x800152A4: beql        $s2, $s0, L_800152E8
    if (ctx->r18 == ctx->r16) {
        // 0x800152A8: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_800152E8;
    }
    goto skip_0;
    // 0x800152A8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    skip_0:
L_800152AC:
    // 0x800152AC: lw          $t6, 0x0($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X0);
    // 0x800152B0: addu        $t7, $t6, $s2
    ctx->r15 = ADD32(ctx->r14, ctx->r18);
    // 0x800152B4: sb          $zero, 0x0($t7)
    MEM_B(0X0, ctx->r15) = 0;
    // 0x800152B8: lw          $t8, 0x0($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X0);
    // 0x800152BC: addu        $t9, $t8, $s2
    ctx->r25 = ADD32(ctx->r24, ctx->r18);
    // 0x800152C0: sb          $zero, 0x1($t9)
    MEM_B(0X1, ctx->r25) = 0;
    // 0x800152C4: lw          $t0, 0x0($s4)
    ctx->r8 = MEM_W(ctx->r20, 0X0);
    // 0x800152C8: addu        $t1, $t0, $s2
    ctx->r9 = ADD32(ctx->r8, ctx->r18);
    // 0x800152CC: sb          $zero, 0x2($t1)
    MEM_B(0X2, ctx->r9) = 0;
    // 0x800152D0: lw          $t3, 0x0($s4)
    ctx->r11 = MEM_W(ctx->r20, 0X0);
    // 0x800152D4: addu        $t2, $t3, $s2
    ctx->r10 = ADD32(ctx->r11, ctx->r18);
    // 0x800152D8: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x800152DC: bne         $s2, $s0, L_800152AC
    if (ctx->r18 != ctx->r16) {
        // 0x800152E0: sb          $zero, 0x3($t2)
        MEM_B(0X3, ctx->r10) = 0;
            goto L_800152AC;
    }
    // 0x800152E0: sb          $zero, 0x3($t2)
    MEM_B(0X3, ctx->r10) = 0;
    // 0x800152E4: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_800152E8:
    // 0x800152E8: jal         0x80015AB0
    // 0x800152EC: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    func_80015AB0_166B0(rdram, ctx);
        goto after_2;
    // 0x800152EC: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_2:
    // 0x800152F0: lw          $v0, 0x4($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X4);
    // 0x800152F4: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x800152F8: lw          $s1, 0x40($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X40);
    // 0x800152FC: blezl       $v0, L_80015368
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80015300: lw          $t4, 0x38($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X38);
            goto L_80015368;
    }
    goto skip_1;
    // 0x80015300: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    skip_1:
L_80015304:
    // 0x80015304: blez        $s5, L_80015350
    if (SIGNED(ctx->r21) <= 0) {
        // 0x80015308: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_80015350;
    }
    // 0x80015308: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8001530C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
L_80015310:
    // 0x80015310: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80015314: jal         0x800166AC
    // 0x80015318: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    func_800166AC_172AC(rdram, ctx);
        goto after_3;
    // 0x80015318: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    after_3:
    // 0x8001531C: beq         $v0, $zero, L_80015330
    if (ctx->r2 == 0) {
        // 0x80015320: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80015330;
    }
    // 0x80015320: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80015324: jal         0x800163F8
    // 0x80015328: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_800163F8_16FF8(rdram, ctx);
        goto after_4;
    // 0x80015328: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_4:
    // 0x8001532C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_80015330:
    // 0x80015330: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80015334: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80015338: jal         0x80016480
    // 0x8001533C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_80016480_17080(rdram, ctx);
        goto after_5;
    // 0x8001533C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_5:
    // 0x80015340: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80015344: bnel        $s0, $s5, L_80015310
    if (ctx->r16 != ctx->r21) {
        // 0x80015348: or          $a1, $s2, $zero
        ctx->r5 = ctx->r18 | 0;
            goto L_80015310;
    }
    goto skip_2;
    // 0x80015348: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    skip_2:
    // 0x8001534C: lw          $v0, 0x4($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X4);
L_80015350:
    // 0x80015350: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80015354: slt         $at, $s3, $v0
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80015358: bne         $at, $zero, L_80015304
    if (ctx->r1 != 0) {
        // 0x8001535C: nop
    
            goto L_80015304;
    }
    // 0x8001535C: nop

    // 0x80015360: sw          $s1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r17;
    // 0x80015364: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
L_80015368:
    // 0x80015368: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x8001536C: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x80015370: beq         $t4, $zero, L_80015388
    if (ctx->r12 == 0) {
        // 0x80015374: lui         $a0, 0x8016
        ctx->r4 = S32(0X8016 << 16);
            goto L_80015388;
    }
    // 0x80015374: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80015378: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x8001537C: lw          $a1, 0x0($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X0);
    // 0x80015380: jal         0x80014B74
    // 0x80015384: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_80014B74_15774(rdram, ctx);
        goto after_6;
    // 0x80015384: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_6:
L_80015388:
    // 0x80015388: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8001538C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80015390: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80015394: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80015398: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8001539C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800153A0: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x800153A4: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x800153A8: jr          $ra
    // 0x800153AC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x800153AC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_80029E08_2AA08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80029E08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80029E0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80029E10: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x80029E14: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    // 0x80029E18: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80029E1C: lwc1        $f14, 0x1C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80029E20: jal         0x8003266C
    // 0x80029E24: lwc1        $f12, 0x18($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X18);
    func_8003266C_3326C(rdram, ctx);
        goto after_0;
    // 0x80029E24: lwc1        $f12, 0x18($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x80029E28: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x80029E2C: bne         $v0, $at, L_80029E3C
    if (ctx->r2 != ctx->r1) {
        // 0x80029E30: lwc1        $f12, 0x18($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X18);
            goto L_80029E3C;
    }
    // 0x80029E30: lwc1        $f12, 0x18($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80029E34: b           L_80029E48
    // 0x80029E38: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
        goto L_80029E48;
    // 0x80029E38: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
L_80029E3C:
    // 0x80029E3C: lwc1        $f14, 0x1C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80029E40: jal         0x8002A168
    // 0x80029E44: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    func_8002A168_2AD68(rdram, ctx);
        goto after_1;
    // 0x80029E44: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    after_1:
L_80029E48:
    // 0x80029E48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80029E4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80029E50: jr          $ra
    // 0x80029E54: nop

    TRACE_RETURN()
    return;
    // 0x80029E54: nop

;}
RECOMP_FUNC void func_80022348_22F48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80022348: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8002234C: bgez        $a2, L_800223A0
    if (SIGNED(ctx->r6) >= 0) {
        // 0x80022350: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_800223A0;
    }
    // 0x80022350: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80022354: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x80022358: negu        $t6, $a2
    ctx->r14 = SUB32(0, ctx->r6);
    // 0x8002235C: lh          $v0, 0x10($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X10);
    // 0x80022360: div         $zero, $t6, $v0
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r2)));
    // 0x80022364: mflo        $v1
    ctx->r3 = lo;
    // 0x80022368: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8002236C: bne         $v0, $zero, L_80022378
    if (ctx->r2 != 0) {
        // 0x80022370: nop
    
            goto L_80022378;
    }
    // 0x80022370: nop

    // 0x80022374: break       7
    do_break(2147623796);
L_80022378:
    // 0x80022378: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8002237C: bne         $v0, $at, L_80022390
    if (ctx->r2 != ctx->r1) {
        // 0x80022380: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80022390;
    }
    // 0x80022380: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80022384: bne         $t6, $at, L_80022390
    if (ctx->r14 != ctx->r1) {
        // 0x80022388: nop
    
            goto L_80022390;
    }
    // 0x80022388: nop

    // 0x8002238C: break       6
    do_break(2147623820);
L_80022390:
    // 0x80022390: multu       $v1, $v0
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80022394: mflo        $t7
    ctx->r15 = lo;
    // 0x80022398: addu        $a2, $a2, $t7
    ctx->r6 = ADD32(ctx->r6, ctx->r15);
    // 0x8002239C: nop

L_800223A0:
    // 0x800223A0: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x800223A4: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x800223A8: lh          $t8, 0x10($t0)
    ctx->r24 = MEM_H(ctx->r8, 0X10);
    // 0x800223AC: div         $zero, $a2, $t8
    lo = S32(S64(S32(ctx->r6)) / S64(S32(ctx->r24))); hi = S32(S64(S32(ctx->r6)) % S64(S32(ctx->r24)));
    // 0x800223B0: bne         $t8, $zero, L_800223BC
    if (ctx->r24 != 0) {
        // 0x800223B4: nop
    
            goto L_800223BC;
    }
    // 0x800223B4: nop

    // 0x800223B8: break       7
    do_break(2147623864);
L_800223BC:
    // 0x800223BC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800223C0: bne         $t8, $at, L_800223D4
    if (ctx->r24 != ctx->r1) {
        // 0x800223C4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800223D4;
    }
    // 0x800223C4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800223C8: bne         $a2, $at, L_800223D4
    if (ctx->r6 != ctx->r1) {
        // 0x800223CC: nop
    
            goto L_800223D4;
    }
    // 0x800223CC: nop

    // 0x800223D0: break       6
    do_break(2147623888);
L_800223D4:
    // 0x800223D4: mfhi        $a2
    ctx->r6 = hi;
    // 0x800223D8: bgezl       $a3, L_8002242C
    if (SIGNED(ctx->r7) >= 0) {
        // 0x800223DC: lh          $t4, 0x12($t0)
        ctx->r12 = MEM_H(ctx->r8, 0X12);
            goto L_8002242C;
    }
    goto skip_0;
    // 0x800223DC: lh          $t4, 0x12($t0)
    ctx->r12 = MEM_H(ctx->r8, 0X12);
    skip_0:
    // 0x800223E0: lh          $v0, 0x12($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X12);
    // 0x800223E4: negu        $t9, $a3
    ctx->r25 = SUB32(0, ctx->r7);
    // 0x800223E8: div         $zero, $t9, $v0
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r2)));
    // 0x800223EC: mflo        $v1
    ctx->r3 = lo;
    // 0x800223F0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800223F4: bne         $v0, $zero, L_80022400
    if (ctx->r2 != 0) {
        // 0x800223F8: nop
    
            goto L_80022400;
    }
    // 0x800223F8: nop

    // 0x800223FC: break       7
    do_break(2147623932);
L_80022400:
    // 0x80022400: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80022404: bne         $v0, $at, L_80022418
    if (ctx->r2 != ctx->r1) {
        // 0x80022408: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80022418;
    }
    // 0x80022408: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8002240C: bne         $t9, $at, L_80022418
    if (ctx->r25 != ctx->r1) {
        // 0x80022410: nop
    
            goto L_80022418;
    }
    // 0x80022410: nop

    // 0x80022414: break       6
    do_break(2147623956);
L_80022418:
    // 0x80022418: multu       $v1, $v0
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002241C: mflo        $t3
    ctx->r11 = lo;
    // 0x80022420: addu        $a3, $a3, $t3
    ctx->r7 = ADD32(ctx->r7, ctx->r11);
    // 0x80022424: nop

    // 0x80022428: lh          $t4, 0x12($t0)
    ctx->r12 = MEM_H(ctx->r8, 0X12);
L_8002242C:
    // 0x8002242C: lh          $v1, 0x2E($t0)
    ctx->r3 = MEM_H(ctx->r8, 0X2E);
    // 0x80022430: div         $zero, $a3, $t4
    lo = S32(S64(S32(ctx->r7)) / S64(S32(ctx->r12))); hi = S32(S64(S32(ctx->r7)) % S64(S32(ctx->r12)));
    // 0x80022434: bne         $t4, $zero, L_80022440
    if (ctx->r12 != 0) {
        // 0x80022438: nop
    
            goto L_80022440;
    }
    // 0x80022438: nop

    // 0x8002243C: break       7
    do_break(2147623996);
L_80022440:
    // 0x80022440: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80022444: bne         $t4, $at, L_80022458
    if (ctx->r12 != ctx->r1) {
        // 0x80022448: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80022458;
    }
    // 0x80022448: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8002244C: bne         $a3, $at, L_80022458
    if (ctx->r7 != ctx->r1) {
        // 0x80022450: nop
    
            goto L_80022458;
    }
    // 0x80022450: nop

    // 0x80022454: break       6
    do_break(2147624020);
L_80022458:
    // 0x80022458: mfhi        $a3
    ctx->r7 = hi;
    // 0x8002245C: slt         $at, $a0, $v1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80022460: beq         $at, $zero, L_80022478
    if (ctx->r1 == 0) {
        // 0x80022464: subu        $v0, $v1, $a0
        ctx->r2 = SUB32(ctx->r3, ctx->r4);
            goto L_80022478;
    }
    // 0x80022464: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x80022468: subu        $t2, $t2, $v0
    ctx->r10 = SUB32(ctx->r10, ctx->r2);
    // 0x8002246C: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x80022470: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x80022474: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
L_80022478:
    // 0x80022478: lh          $v0, 0x32($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X32);
    // 0x8002247C: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x80022480: slt         $at, $a0, $v0
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80022484: beq         $at, $zero, L_800224F0
    if (ctx->r1 == 0) {
        // 0x80022488: addu        $t5, $a0, $t2
        ctx->r13 = ADD32(ctx->r4, ctx->r10);
            goto L_800224F0;
    }
    // 0x80022488: addu        $t5, $a0, $t2
    ctx->r13 = ADD32(ctx->r4, ctx->r10);
    // 0x8002248C: slt         $at, $t5, $v0
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80022490: bne         $at, $zero, L_8002249C
    if (ctx->r1 != 0) {
        // 0x80022494: lw          $t1, 0x3C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X3C);
            goto L_8002249C;
    }
    // 0x80022494: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80022498: subu        $t2, $v0, $a0
    ctx->r10 = SUB32(ctx->r2, ctx->r4);
L_8002249C:
    // 0x8002249C: lh          $v1, 0x30($t0)
    ctx->r3 = MEM_H(ctx->r8, 0X30);
    // 0x800224A0: slt         $at, $a1, $v1
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800224A4: beq         $at, $zero, L_800224BC
    if (ctx->r1 == 0) {
        // 0x800224A8: subu        $v0, $v1, $a1
        ctx->r2 = SUB32(ctx->r3, ctx->r5);
            goto L_800224BC;
    }
    // 0x800224A8: subu        $v0, $v1, $a1
    ctx->r2 = SUB32(ctx->r3, ctx->r5);
    // 0x800224AC: subu        $t1, $t1, $v0
    ctx->r9 = SUB32(ctx->r9, ctx->r2);
    // 0x800224B0: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x800224B4: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x800224B8: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
L_800224BC:
    // 0x800224BC: lh          $v0, 0x34($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X34);
    // 0x800224C0: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x800224C4: slt         $at, $a1, $v0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800224C8: beq         $at, $zero, L_800224F0
    if (ctx->r1 == 0) {
        // 0x800224CC: addu        $t6, $a1, $t1
        ctx->r14 = ADD32(ctx->r5, ctx->r9);
            goto L_800224F0;
    }
    // 0x800224CC: addu        $t6, $a1, $t1
    ctx->r14 = ADD32(ctx->r5, ctx->r9);
    // 0x800224D0: slt         $at, $t6, $v0
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800224D4: bnel        $at, $zero, L_800224E4
    if (ctx->r1 != 0) {
        // 0x800224D8: sw          $t2, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r10;
            goto L_800224E4;
    }
    goto skip_1;
    // 0x800224D8: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    skip_1:
    // 0x800224DC: subu        $t1, $v0, $a1
    ctx->r9 = SUB32(ctx->r2, ctx->r5);
    // 0x800224E0: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
L_800224E4:
    // 0x800224E4: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x800224E8: jal         0x80022500
    // 0x800224EC: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    func_80022500_23100(rdram, ctx);
        goto after_0;
    // 0x800224EC: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    after_0:
L_800224F0:
    // 0x800224F0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800224F4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800224F8: jr          $ra
    // 0x800224FC: nop

    TRACE_RETURN()
    return;
    // 0x800224FC: nop

;}
RECOMP_FUNC void memcpy_recomp(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004A4A0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8004A4A4: beq         $a2, $zero, L_8004A4C4
    if (ctx->r6 == 0) {
        // 0x8004A4A8: or          $v1, $a1, $zero
        ctx->r3 = ctx->r5 | 0;
            goto L_8004A4C4;
    }
    // 0x8004A4A8: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
L_8004A4AC:
    // 0x8004A4AC: lbu         $t6, 0x0($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X0);
    // 0x8004A4B0: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x8004A4B4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8004A4B8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8004A4BC: bne         $a2, $zero, L_8004A4AC
    if (ctx->r6 != 0) {
        // 0x8004A4C0: sb          $t6, -0x1($v0)
        MEM_B(-0X1, ctx->r2) = ctx->r14;
            goto L_8004A4AC;
    }
    // 0x8004A4C0: sb          $t6, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r14;
L_8004A4C4:
    // 0x8004A4C4: jr          $ra
    // 0x8004A4C8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    TRACE_RETURN()
    return;
    // 0x8004A4C8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
;}
RECOMP_FUNC void func_8000DA94_E694(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000DA94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000DA98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000DA9C: lw          $t7, 0x14($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X14);
    // 0x8000DAA0: andi        $t9, $t7, 0x2
    ctx->r25 = ctx->r15 & 0X2;
    // 0x8000DAA4: beql        $t9, $zero, L_8000DB2C
    if (ctx->r25 == 0) {
        // 0x8000DAA8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8000DB2C;
    }
    goto skip_0;
    // 0x8000DAA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8000DAAC: lwc1        $f4, 0x48($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X48);
    // 0x8000DAB0: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8000DAB4: ldc1        $f14, -0x53B8($at)
    CHECK_FR(ctx, 14);
    ctx->f14.u64 = LD(ctx->r1, -0X53B8);
    // 0x8000DAB8: cvt.d.s     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f2.d = CVT_D_S(ctx->f4.fl);
    // 0x8000DABC: lwc1        $f12, 0x44($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X44);
    // 0x8000DAC0: sub.d       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f14.d); 
    ctx->f6.d = ctx->f2.d - ctx->f14.d;
    // 0x8000DAC4: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8000DAC8: cvt.d.s     $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.d = CVT_D_S(ctx->f12.fl);
    // 0x8000DACC: c.lt.d      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.d < ctx->f6.d;
    // 0x8000DAD0: nop

    // 0x8000DAD4: bc1fl       L_8000DAF8
    if (!c1cs) {
        // 0x8000DAD8: add.d       $f16, $f2, $f14
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f14.d); 
    ctx->f16.d = ctx->f2.d + ctx->f14.d;
            goto L_8000DAF8;
    }
    goto skip_1;
    // 0x8000DAD8: add.d       $f16, $f2, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f14.d); 
    ctx->f16.d = ctx->f2.d + ctx->f14.d;
    skip_1:
    // 0x8000DADC: lwc1        $f8, -0x53B0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X53B0);
    // 0x8000DAE0: lwc1        $f12, 0x44($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X44);
    // 0x8000DAE4: lwc1        $f10, 0x48($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X48);
    // 0x8000DAE8: swc1        $f8, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f8.u32l;
    // 0x8000DAEC: cvt.d.s     $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.d = CVT_D_S(ctx->f12.fl);
    // 0x8000DAF0: cvt.d.s     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f2.d = CVT_D_S(ctx->f10.fl);
    // 0x8000DAF4: add.d       $f16, $f2, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f14.d); 
    ctx->f16.d = ctx->f2.d + ctx->f14.d;
L_8000DAF8:
    // 0x8000DAF8: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8000DAFC: c.lt.d      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.d < ctx->f0.d;
    // 0x8000DB00: nop

    // 0x8000DB04: bc1fl       L_8000DB1C
    if (!c1cs) {
        // 0x8000DB08: lwc1        $f4, 0x4C($a0)
        ctx->f4.u32l = MEM_W(ctx->r4, 0X4C);
            goto L_8000DB1C;
    }
    goto skip_2;
    // 0x8000DB08: lwc1        $f4, 0x4C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X4C);
    skip_2:
    // 0x8000DB0C: lwc1        $f18, -0x53AC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X53AC);
    // 0x8000DB10: lwc1        $f12, 0x44($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X44);
    // 0x8000DB14: swc1        $f18, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f18.u32l;
    // 0x8000DB18: lwc1        $f4, 0x4C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X4C);
L_8000DB1C:
    // 0x8000DB1C: add.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f12.fl + ctx->f4.fl;
    // 0x8000DB20: jal         0x8000D9F4
    // 0x8000DB24: swc1        $f6, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f6.u32l;
    func_8000D9F4_E5F4(rdram, ctx);
        goto after_0;
    // 0x8000DB24: swc1        $f6, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f6.u32l;
    after_0:
    // 0x8000DB28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8000DB2C:
    // 0x8000DB2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000DB30: jr          $ra
    // 0x8000DB34: nop

    TRACE_RETURN()
    return;
    // 0x8000DB34: nop

;}
RECOMP_FUNC void func_80015BB0_167B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80015BB0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80015BB4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80015BB8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80015BBC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80015BC0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80015BC4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80015BC8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80015BCC: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
    // 0x80015BD0: jal         0x80014CC4
    // 0x80015BD4: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    func_80014CC4_158C4(rdram, ctx);
        goto after_0;
    // 0x80015BD4: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    after_0:
    // 0x80015BD8: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x80015BDC: bne         $v0, $s2, L_80015BFC
    if (ctx->r2 != ctx->r18) {
        // 0x80015BE0: sll         $t6, $s0, 1
        ctx->r14 = S32(ctx->r16 << 1);
            goto L_80015BFC;
    }
    // 0x80015BE0: sll         $t6, $s0, 1
    ctx->r14 = S32(ctx->r16 << 1);
L_80015BE4:
    // 0x80015BE4: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x80015BE8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80015BEC: jal         0x80014CC4
    // 0x80015BF0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80014CC4_158C4(rdram, ctx);
        goto after_1;
    // 0x80015BF0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x80015BF4: beql        $v0, $s2, L_80015BE4
    if (ctx->r2 == ctx->r18) {
        // 0x80015BF8: sll         $t6, $s0, 1
        ctx->r14 = S32(ctx->r16 << 1);
            goto L_80015BE4;
    }
    goto skip_0;
    // 0x80015BF8: sll         $t6, $s0, 1
    ctx->r14 = S32(ctx->r16 << 1);
    skip_0:
L_80015BFC:
    // 0x80015BFC: jal         0x80014CC4
    // 0x80015C00: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80014CC4_158C4(rdram, ctx);
        goto after_2;
    // 0x80015C00: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x80015C04: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80015C08: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x80015C0C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80015C10: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80015C14: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80015C18: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80015C1C: jr          $ra
    // 0x80015C20: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    TRACE_RETURN()
    return;
    // 0x80015C20: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
;}
RECOMP_FUNC void func_8003B634_3C234(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003B634: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B638: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003B63C: lui         $t2, 0x8007
    ctx->r10 = S32(0X8007 << 16);
    // 0x8003B640: addiu       $t2, $t2, -0x1702
    ctx->r10 = ADD32(ctx->r10, -0X1702);
    // 0x8003B644: addiu       $v1, $v1, 0x1728
    ctx->r3 = ADD32(ctx->r3, 0X1728);
    // 0x8003B648: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B64C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003B650: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8003B654: addiu       $a0, $a0, 0x5
    ctx->r4 = ADD32(ctx->r4, 0X5);
    // 0x8003B658: lbu         $t6, 0xC($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0XC);
    // 0x8003B65C: lbu         $t9, 0xD($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0XD);
    // 0x8003B660: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8003B664: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8003B668: lw          $t8, 0x29A8($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X29A8);
    // 0x8003B66C: sll         $t3, $t9, 2
    ctx->r11 = S32(ctx->r25 << 2);
    // 0x8003B670: lw          $a3, 0x4($t8)
    ctx->r7 = MEM_W(ctx->r24, 0X4);
    // 0x8003B674: addu        $t4, $a3, $t3
    ctx->r12 = ADD32(ctx->r7, ctx->r11);
    // 0x8003B678: lw          $t0, 0xC($t4)
    ctx->r8 = MEM_W(ctx->r12, 0XC);
    // 0x8003B67C: lw          $t1, 0x10($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X10);
    // 0x8003B680: lw          $t5, 0x8($t1)
    ctx->r13 = MEM_W(ctx->r9, 0X8);
    // 0x8003B684: sw          $t5, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r13;
    // 0x8003B688: lb          $t6, -0x5($a0)
    ctx->r14 = MEM_B(ctx->r4, -0X5);
    // 0x8003B68C: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x8003B690: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x8003B694: sh          $t7, 0x2C($t8)
    MEM_H(0X2C, ctx->r24) = ctx->r15;
    // 0x8003B698: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003B69C: lb          $t3, -0x4($a0)
    ctx->r11 = MEM_B(ctx->r4, -0X4);
    // 0x8003B6A0: lh          $t9, 0x2C($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X2C);
    // 0x8003B6A4: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8003B6A8: addu        $t5, $t9, $t4
    ctx->r13 = ADD32(ctx->r25, ctx->r12);
    // 0x8003B6AC: sh          $t5, 0x2C($v0)
    MEM_H(0X2C, ctx->r2) = ctx->r13;
    // 0x8003B6B0: lb          $t6, -0x3($a0)
    ctx->r14 = MEM_B(ctx->r4, -0X3);
    // 0x8003B6B4: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x8003B6B8: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x8003B6BC: negu        $t8, $t7
    ctx->r24 = SUB32(0, ctx->r15);
    // 0x8003B6C0: addu        $t3, $t2, $t8
    ctx->r11 = ADD32(ctx->r10, ctx->r24);
    // 0x8003B6C4: lhu         $t9, 0x0($t3)
    ctx->r25 = MEM_HU(ctx->r11, 0X0);
    // 0x8003B6C8: lui         $t3, 0x8007
    ctx->r11 = S32(0X8007 << 16);
    // 0x8003B6CC: sh          $t9, 0x4E($t4)
    MEM_H(0X4E, ctx->r12) = ctx->r25;
    // 0x8003B6D0: lbu         $a1, -0x2($a0)
    ctx->r5 = MEM_BU(ctx->r4, -0X2);
    // 0x8003B6D4: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x8003B6D8: andi        $t5, $a1, 0xF0
    ctx->r13 = ctx->r5 & 0XF0;
    // 0x8003B6DC: sra         $t6, $t5, 2
    ctx->r14 = S32(SIGNED(ctx->r13) >> 2);
    // 0x8003B6E0: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x8003B6E4: negu        $t8, $t7
    ctx->r24 = SUB32(0, ctx->r15);
    // 0x8003B6E8: addu        $t3, $t3, $t8
    ctx->r11 = ADD32(ctx->r11, ctx->r24);
    // 0x8003B6EC: lhu         $t3, -0x1786($t3)
    ctx->r11 = MEM_HU(ctx->r11, -0X1786);
    // 0x8003B6F0: andi        $t4, $a1, 0xF
    ctx->r12 = ctx->r5 & 0XF;
    // 0x8003B6F4: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8003B6F8: sh          $t3, 0x50($t9)
    MEM_H(0X50, ctx->r25) = ctx->r11;
    // 0x8003B6FC: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x8003B700: sh          $t5, 0x54($t6)
    MEM_H(0X54, ctx->r14) = ctx->r13;
    // 0x8003B704: lbu         $a2, -0x1($a0)
    ctx->r6 = MEM_BU(ctx->r4, -0X1);
    // 0x8003B708: bne         $a2, $zero, L_8003B71C
    if (ctx->r6 != 0) {
        // 0x8003B70C: sll         $t8, $a2, 1
        ctx->r24 = S32(ctx->r6 << 1);
            goto L_8003B71C;
    }
    // 0x8003B70C: sll         $t8, $a2, 1
    ctx->r24 = S32(ctx->r6 << 1);
    // 0x8003B710: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x8003B714: b           L_8003B734
    // 0x8003B718: sh          $zero, 0x52($t7)
    MEM_H(0X52, ctx->r15) = 0;
        goto L_8003B734;
    // 0x8003B718: sh          $zero, 0x52($t7)
    MEM_H(0X52, ctx->r15) = 0;
L_8003B71C:
    // 0x8003B71C: negu        $t3, $t8
    ctx->r11 = SUB32(0, ctx->r24);
    // 0x8003B720: addu        $t9, $t2, $t3
    ctx->r25 = ADD32(ctx->r10, ctx->r11);
    // 0x8003B724: lhu         $t4, 0x0($t9)
    ctx->r12 = MEM_HU(ctx->r25, 0X0);
    // 0x8003B728: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x8003B72C: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8003B730: sh          $t5, 0x52($t6)
    MEM_H(0X52, ctx->r14) = ctx->r13;
L_8003B734:
    // 0x8003B734: lb          $t8, 0x0($a0)
    ctx->r24 = MEM_B(ctx->r4, 0X0);
    // 0x8003B738: lui         $t4, 0x8007
    ctx->r12 = S32(0X8007 << 16);
    // 0x8003B73C: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x8003B740: sll         $t3, $t8, 3
    ctx->r11 = S32(ctx->r24 << 3);
    // 0x8003B744: negu        $t9, $t3
    ctx->r25 = SUB32(0, ctx->r11);
    // 0x8003B748: addu        $t4, $t4, $t9
    ctx->r12 = ADD32(ctx->r12, ctx->r25);
    // 0x8003B74C: lhu         $t4, -0x1706($t4)
    ctx->r12 = MEM_HU(ctx->r12, -0X1706);
    // 0x8003B750: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x8003B754: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8003B758: sh          $t4, 0x56($t5)
    MEM_H(0X56, ctx->r13) = ctx->r12;
    // 0x8003B75C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003B760: lhu         $t6, 0x58($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X58);
    // 0x8003B764: slt         $at, $t6, $at
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x8003B768: beq         $at, $zero, L_8003B784
    if (ctx->r1 == 0) {
        // 0x8003B76C: nop
    
            goto L_8003B784;
    }
    // 0x8003B76C: nop

    // 0x8003B770: lb          $t7, 0x0($a0)
    ctx->r15 = MEM_B(ctx->r4, 0X0);
    // 0x8003B774: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x8003B778: sh          $t8, 0x58($v0)
    MEM_H(0X58, ctx->r2) = ctx->r24;
    // 0x8003B77C: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x8003B780: sb          $zero, 0x5B($t3)
    MEM_B(0X5B, ctx->r11) = 0;
L_8003B784:
    // 0x8003B784: jal         0x8003BCFC
    // 0x8003B788: nop

    func_8003BCFC_3C8FC(rdram, ctx);
        goto after_0;
    // 0x8003B788: nop

    after_0:
    // 0x8003B78C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003B790: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003B794: jr          $ra
    // 0x8003B798: nop

    TRACE_RETURN()
    return;
    // 0x8003B798: nop

;}
RECOMP_FUNC void func_80014218_14E18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80014218: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8001421C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80014220: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80014224: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80014228: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8001422C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80014230: lui         $s4, 0xBFFF
    ctx->r20 = S32(0XBFFF << 16);
    // 0x80014234: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80014238: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8001423C: ori         $s4, $s4, 0xFFFF
    ctx->r20 = ctx->r20 | 0XFFFF;
    // 0x80014240: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80014244: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80014248: addiu       $s3, $zero, 0x6
    ctx->r19 = ADD32(0, 0X6);
L_8001424C:
    // 0x8001424C: lhu         $a0, 0x34($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X34);
    // 0x80014250: beql        $a0, $zero, L_80014290
    if (ctx->r4 == 0) {
        // 0x80014254: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80014290;
    }
    goto skip_0;
    // 0x80014254: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x80014258: jal         0x80001E50
    // 0x8001425C: nop

    func_80001E50_2A50(rdram, ctx);
        goto after_0;
    // 0x8001425C: nop

    after_0:
    // 0x80014260: addiu       $t6, $s1, 0x8
    ctx->r14 = ADD32(ctx->r17, 0X8);
    // 0x80014264: bnel        $t6, $v0, L_80014284
    if (ctx->r14 != ctx->r2) {
        // 0x80014268: lhu         $a0, 0x34($s0)
        ctx->r4 = MEM_HU(ctx->r16, 0X34);
            goto L_80014284;
    }
    goto skip_1;
    // 0x80014268: lhu         $a0, 0x34($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X34);
    skip_1:
    // 0x8001426C: jal         0x800141C4
    // 0x80014270: lhu         $a0, 0x34($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X34);
    func_800141C4_14DC4(rdram, ctx);
        goto after_1;
    // 0x80014270: lhu         $a0, 0x34($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X34);
    after_1:
    // 0x80014274: and         $t7, $v0, $s4
    ctx->r15 = ctx->r2 & ctx->r20;
    // 0x80014278: b           L_8001428C
    // 0x8001427C: sw          $t7, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r15;
        goto L_8001428C;
    // 0x8001427C: sw          $t7, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r15;
    // 0x80014280: lhu         $a0, 0x34($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X34);
L_80014284:
    // 0x80014284: jal         0x80001E50
    // 0x80014288: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    func_80001E50_2A50(rdram, ctx);
        goto after_2;
    // 0x80014288: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    after_2:
L_8001428C:
    // 0x8001428C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_80014290:
    // 0x80014290: bne         $s1, $s3, L_8001424C
    if (ctx->r17 != ctx->r19) {
        // 0x80014294: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_8001424C;
    }
    // 0x80014294: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80014298: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8001429C: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x800142A0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800142A4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800142A8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800142AC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800142B0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800142B4: jr          $ra
    // 0x800142B8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x800142B8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8000C878_D478(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000C878: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x8000C87C: addiu       $t7, $t7, 0x7C48
    ctx->r15 = ADD32(ctx->r15, 0X7C48);
    // 0x8000C880: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8000C884: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x8000C888: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x8000C88C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8000C890: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000C894: beq         $v1, $zero, L_8000C8C0
    if (ctx->r3 == 0) {
        // 0x8000C898: or          $a1, $v1, $zero
        ctx->r5 = ctx->r3 | 0;
            goto L_8000C8C0;
    }
    // 0x8000C898: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x8000C89C: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8000C8A0: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x8000C8A4: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x8000C8A8: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x8000C8AC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8000C8B0: jal         0x80014B74
    // 0x8000C8B4: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_80014B74_15774(rdram, ctx);
        goto after_0;
    // 0x8000C8B4: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_0:
    // 0x8000C8B8: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x8000C8BC: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
L_8000C8C0:
    // 0x8000C8C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000C8C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8000C8C8: jr          $ra
    // 0x8000C8CC: nop

    TRACE_RETURN()
    return;
    // 0x8000C8CC: nop

;}
RECOMP_FUNC void func_80033D40_34940(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80033D40: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80033D44: lw          $t6, 0x74($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X74);
    // 0x80033D48: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x80033D4C: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x80033D50: mtc1        $a3, $f20
    ctx->f20.u32l = ctx->r7;
    // 0x80033D54: mtc1        $a2, $f22
    ctx->f22.u32l = ctx->r6;
    // 0x80033D58: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80033D5C: beq         $t6, $zero, L_80033F10
    if (ctx->r14 == 0) {
        // 0x80033D60: swc1        $f14, 0x64($sp)
        MEM_W(0X64, ctx->r29) = ctx->f14.u32l;
            goto L_80033F10;
    }
    // 0x80033D60: swc1        $f14, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f14.u32l;
    // 0x80033D64: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80033D68: lwc1        $f4, 0x64($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80033D6C: addiu       $a3, $sp, 0x5C
    ctx->r7 = ADD32(ctx->r29, 0X5C);
    // 0x80033D70: c.eq.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl == ctx->f0.fl;
    // 0x80033D74: nop

    // 0x80033D78: bc1fl       L_80033DCC
    if (!c1cs) {
        // 0x80033D7C: c.le.s      $f0, $f20
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl <= ctx->f20.fl;
            goto L_80033DCC;
    }
    goto skip_0;
    // 0x80033D7C: c.le.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl <= ctx->f20.fl;
    skip_0:
    // 0x80033D80: mul.s       $f6, $f22, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f22.fl, ctx->f22.fl);
    // 0x80033D84: lwc1        $f14, 0x70($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80033D88: lw          $v1, 0x78($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X78);
    // 0x80033D8C: mul.s       $f8, $f20, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x80033D90: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80033D94: mul.s       $f4, $f14, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80033D98: add.s       $f0, $f10, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80033D9C: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x80033DA0: div.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f12.fl, ctx->f0.fl);
    // 0x80033DA4: mul.s       $f6, $f2, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x80033DA8: nop

    // 0x80033DAC: mul.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x80033DB0: nop

    // 0x80033DB4: mul.s       $f10, $f2, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x80033DB8: swc1        $f6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f6.u32l;
    // 0x80033DBC: swc1        $f8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f8.u32l;
    // 0x80033DC0: b           L_80033ED8
    // 0x80033DC4: swc1        $f10, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f10.u32l;
        goto L_80033ED8;
    // 0x80033DC4: swc1        $f10, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f10.u32l;
    // 0x80033DC8: c.le.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl <= ctx->f20.fl;
L_80033DCC:
    // 0x80033DCC: lwc1        $f4, 0x64($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80033DD0: lwc1        $f14, 0x70($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80033DD4: bc1t        L_80033DF0
    if (c1cs) {
        // 0x80033DD8: nop
    
            goto L_80033DF0;
    }
    // 0x80033DD8: nop

    // 0x80033DDC: c.le.s      $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f20.fl <= ctx->f4.fl;
    // 0x80033DE0: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80033DE4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80033DE8: bc1fl       L_80033E24
    if (!c1cs) {
        // 0x80033DEC: c.lt.s      $f0, $f20
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
            goto L_80033E24;
    }
    goto skip_1;
    // 0x80033DEC: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    skip_1:
L_80033DF0:
    // 0x80033DF0: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80033DF4: swc1        $f20, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f20.u32l;
    // 0x80033DF8: mul.s       $f8, $f22, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f22.fl, ctx->f22.fl);
    // 0x80033DFC: add.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80033E00: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x80033E04: div.s       $f10, $f14, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f14.fl, ctx->f0.fl);
    // 0x80033E08: div.s       $f6, $f22, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f22.fl, ctx->f0.fl);
    // 0x80033E0C: mul.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x80033E10: swc1        $f4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f4.u32l;
    // 0x80033E14: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x80033E18: b           L_80033EA4
    // 0x80033E1C: swc1        $f8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f8.u32l;
        goto L_80033EA4;
    // 0x80033E1C: swc1        $f8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f8.u32l;
    // 0x80033E20: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
L_80033E24:
    // 0x80033E24: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80033E28: lwc1        $f10, 0x64($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80033E2C: bc1fl       L_80033E4C
    if (!c1cs) {
        // 0x80033E30: mtc1        $zero, $f19
        ctx->f_odd[(19 - 1) * 2] = 0;
            goto L_80033E4C;
    }
    goto skip_2;
    // 0x80033E30: mtc1        $zero, $f19
    ctx->f_odd[(19 - 1) * 2] = 0;
    skip_2:
    // 0x80033E34: cvt.d.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.d = CVT_D_S(ctx->f10.fl);
    // 0x80033E38: mtc1        $zero, $f19
    ctx->f_odd[(19 - 1) * 2] = 0;
    // 0x80033E3C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80033E40: b           L_80033E58
    // 0x80033E44: cvt.s.d     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f16.fl = CVT_S_D(ctx->f4.d);
        goto L_80033E58;
    // 0x80033E44: cvt.s.d     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f16.fl = CVT_S_D(ctx->f4.d);
    // 0x80033E48: mtc1        $zero, $f19
    ctx->f_odd[(19 - 1) * 2] = 0;
L_80033E4C:
    // 0x80033E4C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80033E50: nop

    // 0x80033E54: cvt.s.d     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f16.fl = CVT_S_D(ctx->f18.d);
L_80033E58:
    // 0x80033E58: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80033E5C: lwc1        $f14, 0x70($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80033E60: swc1        $f16, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f16.u32l;
    // 0x80033E64: sub.s       $f6, $f16, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f20.fl;
    // 0x80033E68: cvt.d.s     $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f2.d = CVT_D_S(ctx->f14.fl);
    // 0x80033E6C: cvt.d.s     $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f12.d = CVT_D_S(ctx->f22.fl);
    // 0x80033E70: sub.s       $f4, $f10, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f20.fl;
    // 0x80033E74: sub.d       $f10, $f18, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f2.d); 
    ctx->f10.d = ctx->f18.d - ctx->f2.d;
    // 0x80033E78: div.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f4.fl);
    // 0x80033E7C: cvt.d.s     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f0.d = CVT_D_S(ctx->f8.fl);
    // 0x80033E80: mul.d       $f6, $f0, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f10.d); 
    ctx->f6.d = MUL_D(ctx->f0.d, ctx->f10.d);
    // 0x80033E84: sub.d       $f10, $f18, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f12.d); 
    ctx->f10.d = ctx->f18.d - ctx->f12.d;
    // 0x80033E88: add.d       $f4, $f6, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = ctx->f6.d + ctx->f2.d;
    // 0x80033E8C: mul.d       $f6, $f0, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f10.d); 
    ctx->f6.d = MUL_D(ctx->f0.d, ctx->f10.d);
    // 0x80033E90: cvt.s.d     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f8.fl = CVT_S_D(ctx->f4.d);
    // 0x80033E94: add.d       $f4, $f6, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f12.d); 
    ctx->f4.d = ctx->f6.d + ctx->f12.d;
    // 0x80033E98: swc1        $f8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f8.u32l;
    // 0x80033E9C: cvt.s.d     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f8.fl = CVT_S_D(ctx->f4.d);
    // 0x80033EA0: swc1        $f8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f8.u32l;
L_80033EA4:
    // 0x80033EA4: lw          $v1, 0x78($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X78);
    // 0x80033EA8: addiu       $t3, $sp, 0x58
    ctx->r11 = ADD32(ctx->r29, 0X58);
    // 0x80033EAC: addiu       $t4, $sp, 0x54
    ctx->r12 = ADD32(ctx->r29, 0X54);
    // 0x80033EB0: lhu         $t7, 0x14($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X14);
    // 0x80033EB4: lhu         $t9, 0x16($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X16);
    // 0x80033EB8: lhu         $t1, 0x18($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X18);
    // 0x80033EBC: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x80033EC0: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80033EC4: andi        $a0, $t7, 0x3FF
    ctx->r4 = ctx->r15 & 0X3FF;
    // 0x80033EC8: andi        $a1, $t9, 0x3FF
    ctx->r5 = ctx->r25 & 0X3FF;
    // 0x80033ECC: jal         0x80033898
    // 0x80033ED0: andi        $a2, $t1, 0x3FF
    ctx->r6 = ctx->r9 & 0X3FF;
    func_80033898_34498(rdram, ctx);
        goto after_0;
    // 0x80033ED0: andi        $a2, $t1, 0x3FF
    ctx->r6 = ctx->r9 & 0X3FF;
    after_0:
    // 0x80033ED4: lw          $v1, 0x78($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X78);
L_80033ED8:
    // 0x80033ED8: lwc1        $f10, 0x8($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80033EDC: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80033EE0: lw          $v0, 0x74($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X74);
    // 0x80033EE4: add.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x80033EE8: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80033EEC: swc1        $f4, -0x8($v0)
    MEM_W(-0X8, ctx->r2) = ctx->f4.u32l;
    // 0x80033EF0: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80033EF4: lwc1        $f8, 0xC($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0XC);
    // 0x80033EF8: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80033EFC: swc1        $f6, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f6.u32l;
    // 0x80033F00: lwc1        $f8, 0x54($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80033F04: lwc1        $f4, 0x10($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X10);
    // 0x80033F08: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x80033F0C: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
L_80033F10:
    // 0x80033F10: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80033F14: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x80033F18: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x80033F1C: jr          $ra
    // 0x80033F20: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x80033F20: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_80011C58_12858(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80011C58: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80011C5C: addiu       $a0, $a0, -0x3A38
    ctx->r4 = ADD32(ctx->r4, -0X3A38);
    // 0x80011C60: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80011C64: lui         $a1, 0xC
    ctx->r5 = S32(0XC << 16);
    // 0x80011C68: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x80011C6C: addu        $t7, $t6, $a1
    ctx->r15 = ADD32(ctx->r14, ctx->r5);
    // 0x80011C70: lw          $v0, 0x78E8($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X78E8);
    // 0x80011C74: beq         $v0, $zero, L_80011CA4
    if (ctx->r2 == 0) {
        // 0x80011C78: nop
    
            goto L_80011CA4;
    }
    // 0x80011C78: nop

    // 0x80011C7C: lhu         $t8, 0x22($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X22);
    // 0x80011C80: andi        $t9, $t8, 0xFFEB
    ctx->r25 = ctx->r24 & 0XFFEB;
    // 0x80011C84: sh          $t9, 0x22($v0)
    MEM_H(0X22, ctx->r2) = ctx->r25;
    // 0x80011C88: lw          $t0, 0x0($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X0);
    // 0x80011C8C: addu        $t1, $t0, $a1
    ctx->r9 = ADD32(ctx->r8, ctx->r5);
    // 0x80011C90: lw          $t2, 0x78E8($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X78E8);
    // 0x80011C94: lw          $v1, 0x18($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X18);
    // 0x80011C98: lbu         $t3, 0x4($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X4);
    // 0x80011C9C: andi        $t4, $t3, 0xFF7F
    ctx->r12 = ctx->r11 & 0XFF7F;
    // 0x80011CA0: sb          $t4, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r12;
L_80011CA4:
    // 0x80011CA4: jr          $ra
    // 0x80011CA8: nop

    TRACE_RETURN()
    return;
    // 0x80011CA8: nop

;}
RECOMP_FUNC void func_800127E8_133E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800127E8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800127EC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800127F0: swc1        $f12, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->f12.u32l;
    // 0x800127F4: jr          $ra
    // 0x800127F8: swc1        $f4, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x800127F8: swc1        $f4, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_8000FC54_10854(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000FC54: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8000FC58: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8000FC5C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8000FC60: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8000FC64: or          $t7, $a2, $zero
    ctx->r15 = ctx->r6 | 0;
    // 0x8000FC68: lwc1        $f4, 0x10($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X10);
    // 0x8000FC6C: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x8000FC70: lw          $a3, 0xC($t7)
    ctx->r7 = MEM_W(ctx->r15, 0XC);
    // 0x8000FC74: lw          $a2, 0x8($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X8);
    // 0x8000FC78: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8000FC7C: jal         0x8000FC94
    // 0x8000FC80: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8000FC94_10894(rdram, ctx);
        goto after_0;
    // 0x8000FC80: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x8000FC84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8000FC88: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8000FC8C: jr          $ra
    // 0x8000FC90: nop

    TRACE_RETURN()
    return;
    // 0x8000FC90: nop

;}
RECOMP_FUNC void func_8000EDF4_F9F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000EDF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000EDF8: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x8000EDFC: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8000EE00: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8000EE04: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8000EE08: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8000EE0C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8000EE10: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8000EE14: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8000EE18: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8000EE1C: sub.s       $f2, $f14, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f14.fl - ctx->f8.fl;
    // 0x8000EE20: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8000EE24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000EE28: sub.s       $f16, $f10, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x8000EE2C: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8000EE30: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8000EE34: mul.s       $f10, $f16, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x8000EE38: jal         0x800417E0
    // 0x8000EE3C: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    _nsqrtf(rdram, ctx);
        goto after_0;
    // 0x8000EE3C: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    after_0:
    // 0x8000EE40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000EE44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000EE48: jr          $ra
    // 0x8000EE4C: nop

    TRACE_RETURN()
    return;
    // 0x8000EE4C: nop

;}
RECOMP_FUNC void guPosition(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80046AF0: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80046AF4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80046AF8: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80046AFC: mtc1        $a3, $f16
    ctx->f16.u32l = ctx->r7;
    // 0x80046B00: lwc1        $f4, 0x78($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80046B04: lwc1        $f6, 0x7C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x80046B08: lwc1        $f8, 0x80($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X80);
    // 0x80046B0C: lwc1        $f10, 0x84($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X84);
    // 0x80046B10: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80046B14: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x80046B18: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x80046B1C: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x80046B20: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x80046B24: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80046B28: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80046B2C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x80046B30: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x80046B34: jal         0x80046940
    // 0x80046B38: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    guPositionF(rdram, ctx);
        goto after_0;
    // 0x80046B38: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x80046B3C: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80046B40: jal         0x80043AA0
    // 0x80046B44: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    guMtxF2L(rdram, ctx);
        goto after_1;
    // 0x80046B44: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    after_1:
    // 0x80046B48: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80046B4C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x80046B50: jr          $ra
    // 0x80046B54: nop

    TRACE_RETURN()
    return;
    // 0x80046B54: nop

;}
RECOMP_FUNC void func_80035BF8_367F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80035BF8: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x80035BFC: addiu       $t6, $t6, -0x77B0
    ctx->r14 = ADD32(ctx->r14, -0X77B0);
    // 0x80035C00: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80035C04: lui         $t0, 0xB
    ctx->r8 = S32(0XB << 16);
    // 0x80035C08: lui         $a2, 0xB
    ctx->r6 = S32(0XB << 16);
    // 0x80035C0C: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80035C10: sw          $t6, -0x2538($at)
    MEM_W(-0X2538, ctx->r1) = ctx->r14;
    // 0x80035C14: addiu       $a0, $a0, -0x3340
    ctx->r4 = ADD32(ctx->r4, -0X3340);
    // 0x80035C18: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x80035C1C: ori         $t0, $t0, 0xBC28
    ctx->r8 = ctx->r8 | 0XBC28;
    // 0x80035C20: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80035C24: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80035C28: addiu       $a3, $zero, 0x98
    ctx->r7 = ADD32(0, 0X98);
    // 0x80035C2C: addiu       $a1, $zero, 0x98
    ctx->r5 = ADD32(0, 0X98);
L_80035C30:
    // 0x80035C30: multu       $v1, $a3
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80035C34: mflo        $t7
    ctx->r15 = lo;
    // 0x80035C38: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x80035C3C: addu        $t9, $t8, $t0
    ctx->r25 = ADD32(ctx->r24, ctx->r8);
    // 0x80035C40: multu       $v0, $a1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80035C44: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80035C48: andi        $v1, $v0, 0xFFFF
    ctx->r3 = ctx->r2 & 0XFFFF;
    // 0x80035C4C: slti        $at, $v1, 0xC0
    ctx->r1 = SIGNED(ctx->r3) < 0XC0 ? 1 : 0;
    // 0x80035C50: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80035C54: mflo        $t1
    ctx->r9 = lo;
    // 0x80035C58: addu        $t2, $a0, $t1
    ctx->r10 = ADD32(ctx->r4, ctx->r9);
    // 0x80035C5C: addu        $t3, $t2, $a2
    ctx->r11 = ADD32(ctx->r10, ctx->r6);
    // 0x80035C60: bne         $at, $zero, L_80035C30
    if (ctx->r1 != 0) {
        // 0x80035C64: sw          $t9, 0x3B90($t3)
        MEM_W(0X3B90, ctx->r11) = ctx->r25;
            goto L_80035C30;
    }
    // 0x80035C64: sw          $t9, 0x3B90($t3)
    MEM_W(0X3B90, ctx->r11) = ctx->r25;
    // 0x80035C68: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80035C6C: sh          $zero, -0x2524($at)
    MEM_H(-0X2524, ctx->r1) = 0;
    // 0x80035C70: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80035C74: jr          $ra
    // 0x80035C78: sw          $zero, -0x648($at)
    MEM_W(-0X648, ctx->r1) = 0;
    TRACE_RETURN()
    return;
    // 0x80035C78: sw          $zero, -0x648($at)
    MEM_W(-0X648, ctx->r1) = 0;
;}
RECOMP_FUNC void func_80036B7C_3777C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80036B7C: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x80036B80: lw          $a1, 0x7CD8($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7CD8);
    // 0x80036B84: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80036B88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80036B8C: beq         $a1, $zero, L_80036BA4
    if (ctx->r5 == 0) {
        // 0x80036B90: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_80036BA4;
    }
    // 0x80036B90: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80036B94: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80036B98: jal         0x80036158
    // 0x80036B9C: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    func_80036158_36D58(rdram, ctx);
        goto after_0;
    // 0x80036B9C: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_0:
    // 0x80036BA0: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
L_80036BA4:
    // 0x80036BA4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80036BA8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80036BAC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80036BB0: jal         0x80035EEC
    // 0x80036BB4: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    func_80035EEC_36AEC(rdram, ctx);
        goto after_1;
    // 0x80036BB4: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_1:
    // 0x80036BB8: bne         $v0, $zero, L_80036BD0
    if (ctx->r2 != 0) {
        // 0x80036BBC: lw          $a3, 0x20($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X20);
            goto L_80036BD0;
    }
    // 0x80036BBC: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x80036BC0: jal         0x80035044
    // 0x80036BC4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_80035044_35C44(rdram, ctx);
        goto after_2;
    // 0x80036BC4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_2:
    // 0x80036BC8: b           L_80036CA8
    // 0x80036BCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80036CA8;
    // 0x80036BCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80036BD0:
    // 0x80036BD0: lw          $t6, 0x1C($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X1C);
    // 0x80036BD4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80036BD8: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x80036BDC: lw          $t8, -0x3A38($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3A38);
    // 0x80036BE0: sw          $t6, 0x7CD8($at)
    MEM_W(0X7CD8, ctx->r1) = ctx->r14;
    // 0x80036BE4: lw          $a0, 0x1C($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X1C);
    // 0x80036BE8: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x80036BEC: lui         $t7, 0x8007
    ctx->r15 = S32(0X8007 << 16);
    // 0x80036BF0: addiu       $t7, $t7, -0x2C14
    ctx->r15 = ADD32(ctx->r15, -0X2C14);
    // 0x80036BF4: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80036BF8: sw          $t7, 0x5F78($at)
    MEM_W(0X5F78, ctx->r1) = ctx->r15;
    // 0x80036BFC: lui         $a1, 0x8007
    ctx->r5 = S32(0X8007 << 16);
    // 0x80036C00: addiu       $a1, $a1, -0x2C20
    ctx->r5 = ADD32(ctx->r5, -0X2C20);
    // 0x80036C04: jal         0x800086D8
    // 0x80036C08: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_800086D8_92D8(rdram, ctx);
        goto after_3;
    // 0x80036C08: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_3:
    // 0x80036C0C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80036C10: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80036C14: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x80036C18: lbu         $t1, 0x8($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X8);
    // 0x80036C1C: sb          $t9, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r25;
    // 0x80036C20: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80036C24: ori         $t3, $t1, 0x4
    ctx->r11 = ctx->r9 | 0X4;
    // 0x80036C28: andi        $t4, $t3, 0x1F
    ctx->r12 = ctx->r11 & 0X1F;
    // 0x80036C2C: ori         $t5, $t4, 0x60
    ctx->r13 = ctx->r12 | 0X60;
    // 0x80036C30: sb          $t3, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r11;
    // 0x80036C34: sb          $t5, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r13;
    // 0x80036C38: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x80036C3C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80036C40: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80036C44: srl         $t9, $v0, 15
    ctx->r25 = S32(U32(ctx->r2) >> 15);
    // 0x80036C48: xori        $t0, $t9, 0x6
    ctx->r8 = ctx->r25 ^ 0X6;
    // 0x80036C4C: sll         $t1, $t0, 28
    ctx->r9 = S32(ctx->r8 << 28);
    // 0x80036C50: srl         $t2, $t1, 13
    ctx->r10 = S32(U32(ctx->r9) >> 13);
    // 0x80036C54: xor         $t3, $t2, $v0
    ctx->r11 = ctx->r10 ^ ctx->r2;
    // 0x80036C58: sw          $t3, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r11;
    // 0x80036C5C: lbu         $t4, 0xA($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0XA);
    // 0x80036C60: addiu       $t6, $zero, 0xB
    ctx->r14 = ADD32(0, 0XB);
    // 0x80036C64: sb          $t6, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r14;
    // 0x80036C68: andi        $t5, $t4, 0xFF87
    ctx->r13 = ctx->r12 & 0XFF87;
    // 0x80036C6C: addiu       $t7, $zero, 0xEF
    ctx->r15 = ADD32(0, 0XEF);
    // 0x80036C70: addiu       $t8, $zero, 0x80
    ctx->r24 = ADD32(0, 0X80);
    // 0x80036C74: ori         $t6, $t5, 0x28
    ctx->r14 = ctx->r13 | 0X28;
    // 0x80036C78: sh          $zero, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = 0;
    // 0x80036C7C: sh          $zero, 0x20($a0)
    MEM_H(0X20, ctx->r4) = 0;
    // 0x80036C80: sh          $t7, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r15;
    // 0x80036C84: sb          $zero, 0xD($a0)
    MEM_B(0XD, ctx->r4) = 0;
    // 0x80036C88: sb          $zero, 0xE($a0)
    MEM_B(0XE, ctx->r4) = 0;
    // 0x80036C8C: sb          $zero, 0xF($a0)
    MEM_B(0XF, ctx->r4) = 0;
    // 0x80036C90: sb          $t8, 0x10($a0)
    MEM_B(0X10, ctx->r4) = ctx->r24;
    // 0x80036C94: sb          $zero, 0xC($a0)
    MEM_B(0XC, ctx->r4) = 0;
    // 0x80036C98: sb          $t6, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r14;
    // 0x80036C9C: swc1        $f4, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f4.u32l;
    // 0x80036CA0: swc1        $f6, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f6.u32l;
    // 0x80036CA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80036CA8:
    // 0x80036CA8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80036CAC: jr          $ra
    // 0x80036CB0: nop

    TRACE_RETURN()
    return;
    // 0x80036CB0: nop

;}
RECOMP_FUNC void func_80023EE4_24AE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80023EE4: lui         $v1, 0x8017
    ctx->r3 = S32(0X8017 << 16);
    // 0x80023EE8: lui         $v0, 0x8017
    ctx->r2 = S32(0X8017 << 16);
    // 0x80023EEC: addiu       $v0, $v0, -0x710C
    ctx->r2 = ADD32(ctx->r2, -0X710C);
    // 0x80023EF0: addiu       $v1, $v1, -0x7170
    ctx->r3 = ADD32(ctx->r3, -0X7170);
L_80023EF4:
    // 0x80023EF4: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80023EF8: sb          $zero, -0x3($v1)
    MEM_B(-0X3, ctx->r3) = 0;
    // 0x80023EFC: sb          $zero, -0x2($v1)
    MEM_B(-0X2, ctx->r3) = 0;
    // 0x80023F00: sb          $zero, -0x1($v1)
    MEM_B(-0X1, ctx->r3) = 0;
    // 0x80023F04: bne         $v1, $v0, L_80023EF4
    if (ctx->r3 != ctx->r2) {
        // 0x80023F08: sb          $zero, -0x4($v1)
        MEM_B(-0X4, ctx->r3) = 0;
            goto L_80023EF4;
    }
    // 0x80023F08: sb          $zero, -0x4($v1)
    MEM_B(-0X4, ctx->r3) = 0;
    // 0x80023F0C: jr          $ra
    // 0x80023F10: nop

    TRACE_RETURN()
    return;
    // 0x80023F10: nop

;}
RECOMP_FUNC void func_80009408_A008(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80009408: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x8000940C: addiu       $t0, $t0, 0x7A70
    ctx->r8 = ADD32(ctx->r8, 0X7A70);
    // 0x80009410: lhu         $t8, 0x0($t0)
    ctx->r24 = MEM_HU(ctx->r8, 0X0);
    // 0x80009414: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80009418: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x8000941C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x80009420: andi        $t7, $a3, 0xFF
    ctx->r15 = ctx->r7 & 0XFF;
    // 0x80009424: srl         $v0, $a0, 29
    ctx->r2 = S32(U32(ctx->r4) >> 29);
    // 0x80009428: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x8000942C: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x80009430: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80009434: beq         $v0, $t8, L_80009498
    if (ctx->r2 == ctx->r24) {
        // 0x80009438: sw          $a1, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r5;
            goto L_80009498;
    }
    // 0x80009438: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8000943C: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x80009440: addiu       $t1, $t1, -0x3A34
    ctx->r9 = ADD32(ctx->r9, -0X3A34);
    // 0x80009444: lw          $a1, 0x0($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X0);
    // 0x80009448: sh          $v0, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r2;
    // 0x8000944C: lui         $t2, 0x600
    ctx->r10 = S32(0X600 << 16);
    // 0x80009450: addiu       $t9, $a1, 0x8
    ctx->r25 = ADD32(ctx->r5, 0X8);
    // 0x80009454: sw          $t9, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r25;
    // 0x80009458: sw          $t2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r10;
    // 0x8000945C: lhu         $t3, 0x0($t0)
    ctx->r11 = MEM_HU(ctx->r8, 0X0);
    // 0x80009460: lui         $t5, 0x8006
    ctx->r13 = S32(0X8006 << 16);
    // 0x80009464: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x80009468: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8000946C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80009470: lw          $t5, -0x46B0($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X46B0);
    // 0x80009474: sw          $t5, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r13;
    // 0x80009478: lhu         $t6, 0x0($t0)
    ctx->r14 = MEM_HU(ctx->r8, 0X0);
    // 0x8000947C: slti        $at, $t6, 0x5
    ctx->r1 = SIGNED(ctx->r14) < 0X5 ? 1 : 0;
    // 0x80009480: bne         $at, $zero, L_80009490
    if (ctx->r1 != 0) {
        // 0x80009484: lui         $at, 0x8016
        ctx->r1 = S32(0X8016 << 16);
            goto L_80009490;
    }
    // 0x80009484: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80009488: b           L_80009498
    // 0x8000948C: sh          $t7, 0x7A74($at)
    MEM_H(0X7A74, ctx->r1) = ctx->r15;
        goto L_80009498;
    // 0x8000948C: sh          $t7, 0x7A74($at)
    MEM_H(0X7A74, ctx->r1) = ctx->r15;
L_80009490:
    // 0x80009490: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80009494: sh          $zero, 0x7A74($at)
    MEM_H(0X7A74, ctx->r1) = 0;
L_80009498:
    // 0x80009498: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x8000949C: beq         $v0, $zero, L_8000953C
    if (ctx->r2 == 0) {
        // 0x800094A0: addiu       $t1, $t1, -0x3A34
        ctx->r9 = ADD32(ctx->r9, -0X3A34);
            goto L_8000953C;
    }
    // 0x800094A0: addiu       $t1, $t1, -0x3A34
    ctx->r9 = ADD32(ctx->r9, -0X3A34);
    // 0x800094A4: lw          $a1, 0x0($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X0);
    // 0x800094A8: lui         $t9, 0xFA00
    ctx->r25 = S32(0XFA00 << 16);
    // 0x800094AC: andi        $t5, $a2, 0xFF
    ctx->r13 = ctx->r6 & 0XFF;
    // 0x800094B0: addiu       $t8, $a1, 0x8
    ctx->r24 = ADD32(ctx->r5, 0X8);
    // 0x800094B4: sw          $t8, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r24;
    // 0x800094B8: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x800094BC: lbu         $t3, 0x7($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X7);
    // 0x800094C0: sll         $t6, $t5, 16
    ctx->r14 = S32(ctx->r13 << 16);
    // 0x800094C4: lbu         $t5, 0x13($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X13);
    // 0x800094C8: andi        $t8, $a3, 0xFF
    ctx->r24 = ctx->r7 & 0XFF;
    // 0x800094CC: sll         $t4, $t3, 24
    ctx->r12 = S32(ctx->r11 << 24);
    // 0x800094D0: or          $t7, $t4, $t6
    ctx->r15 = ctx->r12 | ctx->r14;
    // 0x800094D4: sll         $t9, $t8, 8
    ctx->r25 = S32(ctx->r24 << 8);
    // 0x800094D8: or          $t2, $t7, $t9
    ctx->r10 = ctx->r15 | ctx->r25;
    // 0x800094DC: sll         $t8, $a0, 3
    ctx->r24 = S32(ctx->r4 << 3);
    // 0x800094E0: or          $t4, $t2, $t5
    ctx->r12 = ctx->r10 | ctx->r13;
    // 0x800094E4: bltz        $t8, L_80009514
    if (SIGNED(ctx->r24) < 0) {
        // 0x800094E8: sw          $t4, 0x4($a1)
        MEM_W(0X4, ctx->r5) = ctx->r12;
            goto L_80009514;
    }
    // 0x800094E8: sw          $t4, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r12;
    // 0x800094EC: lw          $a1, 0x0($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X0);
    // 0x800094F0: lui         $t9, 0xB900
    ctx->r25 = S32(0XB900 << 16);
    // 0x800094F4: ori         $t9, $t9, 0x2
    ctx->r25 = ctx->r25 | 0X2;
    // 0x800094F8: addiu       $t7, $a1, 0x8
    ctx->r15 = ADD32(ctx->r5, 0X8);
    // 0x800094FC: sw          $t7, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r15;
    // 0x80009500: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80009504: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80009508: sw          $t3, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r11;
    // 0x8000950C: jr          $ra
    // 0x80009510: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    TRACE_RETURN()
    return;
    // 0x80009510: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
L_80009514:
    // 0x80009514: lw          $a1, 0x0($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X0);
    // 0x80009518: lui         $t5, 0xB900
    ctx->r13 = S32(0XB900 << 16);
    // 0x8000951C: ori         $t5, $t5, 0x2
    ctx->r13 = ctx->r13 | 0X2;
    // 0x80009520: addiu       $t2, $a1, 0x8
    ctx->r10 = ADD32(ctx->r5, 0X8);
    // 0x80009524: sw          $t2, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r10;
    // 0x80009528: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x8000952C: sw          $t4, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r12;
    // 0x80009530: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
    // 0x80009534: jr          $ra
    // 0x80009538: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x80009538: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8000953C:
    // 0x8000953C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80009540: jr          $ra
    // 0x80009544: nop

    TRACE_RETURN()
    return;
    // 0x80009544: nop

;}
RECOMP_FUNC void func_80013C70_14870(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80013C70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80013C74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80013C78: jal         0x80013C90
    // 0x80013C7C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_80013C90_14890(rdram, ctx);
        goto after_0;
    // 0x80013C7C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x80013C80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80013C84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80013C88: jr          $ra
    // 0x80013C8C: nop

    TRACE_RETURN()
    return;
    // 0x80013C8C: nop

;}
RECOMP_FUNC void func_80007E28_8A28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80007E28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80007E2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80007E30: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80007E34: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80007E38: jal         0x80007EA0
    // 0x80007E3C: lhu         $a0, 0x1E($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X1E);
    func_80007EA0_8AA0(rdram, ctx);
        goto after_0;
    // 0x80007E3C: lhu         $a0, 0x1E($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X1E);
    after_0:
    // 0x80007E40: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80007E44: jal         0x80007DA8
    // 0x80007E48: lhu         $a1, 0x1E($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X1E);
    func_80007DA8_89A8(rdram, ctx);
        goto after_1;
    // 0x80007E48: lhu         $a1, 0x1E($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X1E);
    after_1:
    // 0x80007E4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80007E50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80007E54: jr          $ra
    // 0x80007E58: nop

    TRACE_RETURN()
    return;
    // 0x80007E58: nop

;}
RECOMP_FUNC void func_80037C0C_3880C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80037C0C: sll         $t6, $a0, 5
    ctx->r14 = S32(ctx->r4 << 5);
    // 0x80037C10: lui         $v0, 0x8017
    ctx->r2 = S32(0X8017 << 16);
    // 0x80037C14: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80037C18: jr          $ra
    // 0x80037C1C: lw          $v0, -0x2500($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2500);
    TRACE_RETURN()
    return;
    // 0x80037C1C: lw          $v0, -0x2500($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2500);
;}
RECOMP_FUNC void func_8000E28C_EE8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000E28C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000E290: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x8000E294: lwc1        $f18, 0x18($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8000E298: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    // 0x8000E29C: lwc1        $f16, 0x1C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8000E2A0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8000E2A4: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8000E2A8: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8000E2AC: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8000E2B0: sub.s       $f14, $f18, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f18.fl - ctx->f10.fl;
    // 0x8000E2B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000E2B8: jal         0x800040A8
    // 0x8000E2BC: sub.s       $f12, $f16, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f16.fl - ctx->f8.fl;
    func_800040A8_4CA8(rdram, ctx);
        goto after_0;
    // 0x8000E2BC: sub.s       $f12, $f16, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f16.fl - ctx->f8.fl;
    after_0:
    // 0x8000E2C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000E2C4: or          $t6, $v0, $zero
    ctx->r14 = ctx->r2 | 0;
    // 0x8000E2C8: andi        $v0, $t6, 0x3FF
    ctx->r2 = ctx->r14 & 0X3FF;
    // 0x8000E2CC: jr          $ra
    // 0x8000E2D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8000E2D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8000DD04_E904(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000DD04: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8000DD08: swc1        $f4, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f4.u32l;
    // 0x8000DD0C: lwc1        $f6, 0xC($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XC);
    // 0x8000DD10: swc1        $f6, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f6.u32l;
    // 0x8000DD14: lwc1        $f8, 0x10($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X10);
    // 0x8000DD18: swc1        $f8, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f8.u32l;
    // 0x8000DD1C: lhu         $t6, 0x14($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X14);
    // 0x8000DD20: sh          $t6, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r14;
    // 0x8000DD24: lhu         $t7, 0x16($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X16);
    // 0x8000DD28: sh          $t7, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r15;
    // 0x8000DD2C: lhu         $t8, 0x18($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X18);
    // 0x8000DD30: sh          $t8, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r24;
    // 0x8000DD34: lwc1        $f10, 0x1C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x8000DD38: swc1        $f10, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f10.u32l;
    // 0x8000DD3C: lwc1        $f16, 0x20($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X20);
    // 0x8000DD40: swc1        $f16, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f16.u32l;
    // 0x8000DD44: lwc1        $f18, 0x24($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X24);
    // 0x8000DD48: swc1        $f18, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f18.u32l;
    // 0x8000DD4C: lbu         $t9, 0x64($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X64);
    // 0x8000DD50: jr          $ra
    // 0x8000DD54: sb          $t9, 0x64($a1)
    MEM_B(0X64, ctx->r5) = ctx->r25;
    TRACE_RETURN()
    return;
    // 0x8000DD54: sb          $t9, 0x64($a1)
    MEM_B(0X64, ctx->r5) = ctx->r25;
;}
RECOMP_FUNC void func_8003DBEC_3E7EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003DBEC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8003DBF0: lui         $t6, 0x801C
    ctx->r14 = S32(0X801C << 16);
    // 0x8003DBF4: lw          $t6, 0x77D8($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X77D8);
    // 0x8003DBF8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8003DBFC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8003DC00: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8003DC04: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8003DC08: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8003DC0C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8003DC10: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8003DC14: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8003DC18: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8003DC1C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8003DC20: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8003DC24: blez        $t6, L_8003DD94
    if (SIGNED(ctx->r14) <= 0) {
        // 0x8003DC28: sw          $zero, 0x44($sp)
        MEM_W(0X44, ctx->r29) = 0;
            goto L_8003DD94;
    }
    // 0x8003DC28: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x8003DC2C: lui         $s4, 0x801C
    ctx->r20 = S32(0X801C << 16);
    // 0x8003DC30: lui         $s3, 0x801C
    ctx->r19 = S32(0X801C << 16);
    // 0x8003DC34: lui         $s2, 0x801C
    ctx->r18 = S32(0X801C << 16);
    // 0x8003DC38: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x8003DC3C: addiu       $s1, $s1, 0x77E8
    ctx->r17 = ADD32(ctx->r17, 0X77E8);
    // 0x8003DC40: addiu       $s2, $s2, 0x77E0
    ctx->r18 = ADD32(ctx->r18, 0X77E0);
    // 0x8003DC44: addiu       $s3, $s3, 0x7908
    ctx->r19 = ADD32(ctx->r19, 0X7908);
    // 0x8003DC48: addiu       $s4, $s4, 0x7754
    ctx->r20 = ADD32(ctx->r20, 0X7754);
    // 0x8003DC4C: addiu       $fp, $zero, 0x6
    ctx->r30 = ADD32(0, 0X6);
    // 0x8003DC50: addiu       $s7, $zero, 0x5
    ctx->r23 = ADD32(0, 0X5);
    // 0x8003DC54: addiu       $s6, $zero, 0x4
    ctx->r22 = ADD32(0, 0X4);
    // 0x8003DC58: addiu       $s5, $zero, 0x3
    ctx->r21 = ADD32(0, 0X3);
    // 0x8003DC5C: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
L_8003DC60:
    // 0x8003DC60: jal         0x8003DE80
    // 0x8003DC64: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    func_8003DE80_3EA80(rdram, ctx);
        goto after_0;
    // 0x8003DC64: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    after_0:
    // 0x8003DC68: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x8003DC6C: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x8003DC70: lui         $t9, 0x801C
    ctx->r25 = S32(0X801C << 16);
    // 0x8003DC74: beq         $s5, $v1, L_8003DC94
    if (ctx->r21 == ctx->r3) {
        // 0x8003DC78: nop
    
            goto L_8003DC94;
    }
    // 0x8003DC78: nop

    // 0x8003DC7C: beq         $s6, $v1, L_8003DC94
    if (ctx->r22 == ctx->r3) {
        // 0x8003DC80: nop
    
            goto L_8003DC94;
    }
    // 0x8003DC80: nop

    // 0x8003DC84: beq         $s7, $v1, L_8003DC94
    if (ctx->r23 == ctx->r3) {
        // 0x8003DC88: nop
    
            goto L_8003DC94;
    }
    // 0x8003DC88: nop

    // 0x8003DC8C: bnel        $fp, $v1, L_8003DCA0
    if (ctx->r30 != ctx->r3) {
        // 0x8003DC90: lw          $t8, 0x0($s1)
        ctx->r24 = MEM_W(ctx->r17, 0X0);
            goto L_8003DCA0;
    }
    goto skip_0;
    // 0x8003DC90: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    skip_0:
L_8003DC94:
    // 0x8003DC94: b           L_8003DD94
    // 0x8003DC98: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
        goto L_8003DD94;
    // 0x8003DC98: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
    // 0x8003DC9C: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
L_8003DCA0:
    // 0x8003DCA0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8003DCA4: sw          $t7, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r15;
    // 0x8003DCA8: bne         $t8, $zero, L_8003DCBC
    if (ctx->r24 != 0) {
        // 0x8003DCAC: lui         $v0, 0x801C
        ctx->r2 = S32(0X801C << 16);
            goto L_8003DCBC;
    }
    // 0x8003DCAC: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003DCB0: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    // 0x8003DCB4: b           L_8003DD94
    // 0x8003DCB8: sw          $zero, 0x0($s2)
    MEM_W(0X0, ctx->r18) = 0;
        goto L_8003DD94;
    // 0x8003DCB8: sw          $zero, 0x0($s2)
    MEM_W(0X0, ctx->r18) = 0;
L_8003DCBC:
    // 0x8003DCBC: lw          $t9, 0x7770($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7770);
    // 0x8003DCC0: bnel        $t9, $zero, L_8003DD70
    if (ctx->r25 != 0) {
        // 0x8003DCC4: lw          $t8, 0x44($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X44);
            goto L_8003DD70;
    }
    goto skip_1;
    // 0x8003DCC4: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    skip_1:
    // 0x8003DCC8: lhu         $t0, 0x4($s3)
    ctx->r8 = MEM_HU(ctx->r19, 0X4);
    // 0x8003DCCC: andi        $t1, $t0, 0x4000
    ctx->r9 = ctx->r8 & 0X4000;
    // 0x8003DCD0: beql        $t1, $zero, L_8003DD0C
    if (ctx->r9 == 0) {
        // 0x8003DCD4: lhu         $t2, 0xA($s1)
        ctx->r10 = MEM_HU(ctx->r17, 0XA);
            goto L_8003DD0C;
    }
    goto skip_2;
    // 0x8003DCD4: lhu         $t2, 0xA($s1)
    ctx->r10 = MEM_HU(ctx->r17, 0XA);
    skip_2:
    // 0x8003DCD8: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
    // 0x8003DCDC: lw          $v0, 0x7774($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7774);
    // 0x8003DCE0: bne         $v0, $zero, L_8003DCF8
    if (ctx->r2 != 0) {
        // 0x8003DCE4: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8003DCF8;
    }
    // 0x8003DCE4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8003DCE8: jal         0x8003E680
    // 0x8003DCEC: nop

    func_8003E680_3F280(rdram, ctx);
        goto after_1;
    // 0x8003DCEC: nop

    after_1:
    // 0x8003DCF0: b           L_8003DD98
    // 0x8003DCF4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_8003DD98;
    // 0x8003DCF4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_8003DCF8:
    // 0x8003DCF8: jal         0x8003DE48
    // 0x8003DCFC: sw          $zero, 0x0($s2)
    MEM_W(0X0, ctx->r18) = 0;
    func_8003DE48_3EA48(rdram, ctx);
        goto after_2;
    // 0x8003DCFC: sw          $zero, 0x0($s2)
    MEM_W(0X0, ctx->r18) = 0;
    after_2:
    // 0x8003DD00: lui         $at, 0x8007
    ctx->r1 = S32(0X8007 << 16);
    // 0x8003DD04: sw          $v0, 0x7858($at)
    MEM_W(0X7858, ctx->r1) = ctx->r2;
    // 0x8003DD08: lhu         $t2, 0xA($s1)
    ctx->r10 = MEM_HU(ctx->r17, 0XA);
L_8003DD0C:
    // 0x8003DD0C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8003DD10: slti        $v0, $s0, 0x3
    ctx->r2 = SIGNED(ctx->r16) < 0X3 ? 1 : 0;
    // 0x8003DD14: beql        $t2, $zero, L_8003DD4C
    if (ctx->r10 == 0) {
        // 0x8003DD18: lhu         $t5, 0x4($s3)
        ctx->r13 = MEM_HU(ctx->r19, 0X4);
            goto L_8003DD4C;
    }
    goto skip_3;
    // 0x8003DD18: lhu         $t5, 0x4($s3)
    ctx->r13 = MEM_HU(ctx->r19, 0X4);
    skip_3:
    // 0x8003DD1C: lhu         $t3, 0x2($s3)
    ctx->r11 = MEM_HU(ctx->r19, 0X2);
    // 0x8003DD20: slti        $v0, $s0, 0x3
    ctx->r2 = SIGNED(ctx->r16) < 0X3 ? 1 : 0;
    // 0x8003DD24: andi        $t4, $t3, 0x8000
    ctx->r12 = ctx->r11 & 0X8000;
    // 0x8003DD28: beq         $t4, $zero, L_8003DD40
    if (ctx->r12 == 0) {
        // 0x8003DD2C: nop
    
            goto L_8003DD40;
    }
    // 0x8003DD2C: nop

    // 0x8003DD30: beq         $v0, $zero, L_8003DD6C
    if (ctx->r2 == 0) {
        // 0x8003DD34: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8003DD6C;
    }
    // 0x8003DD34: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003DD38: b           L_8003DC60
    // 0x8003DD3C: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
        goto L_8003DC60;
    // 0x8003DD3C: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
L_8003DD40:
    // 0x8003DD40: b           L_8003DD6C
    // 0x8003DD44: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
        goto L_8003DD6C;
    // 0x8003DD44: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
    // 0x8003DD48: lhu         $t5, 0x4($s3)
    ctx->r13 = MEM_HU(ctx->r19, 0X4);
L_8003DD4C:
    // 0x8003DD4C: andi        $t6, $t5, 0x8000
    ctx->r14 = ctx->r13 & 0X8000;
    // 0x8003DD50: beql        $t6, $zero, L_8003DD70
    if (ctx->r14 == 0) {
        // 0x8003DD54: lw          $t8, 0x44($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X44);
            goto L_8003DD70;
    }
    goto skip_4;
    // 0x8003DD54: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    skip_4:
    // 0x8003DD58: sh          $t7, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r15;
    // 0x8003DD5C: beq         $v0, $zero, L_8003DD6C
    if (ctx->r2 == 0) {
        // 0x8003DD60: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8003DD6C;
    }
    // 0x8003DD60: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003DD64: b           L_8003DC60
    // 0x8003DD68: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
        goto L_8003DC60;
    // 0x8003DD68: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
L_8003DD6C:
    // 0x8003DD6C: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
L_8003DD70:
    // 0x8003DD70: lui         $t0, 0x801C
    ctx->r8 = S32(0X801C << 16);
    // 0x8003DD74: lw          $t0, 0x77D8($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X77D8);
    // 0x8003DD78: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8003DD7C: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x8003DD80: slt         $at, $t9, $t0
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8003DD84: beq         $at, $zero, L_8003DD94
    if (ctx->r1 == 0) {
        // 0x8003DD88: slti        $at, $s0, 0x3
        ctx->r1 = SIGNED(ctx->r16) < 0X3 ? 1 : 0;
            goto L_8003DD94;
    }
    // 0x8003DD88: slti        $at, $s0, 0x3
    ctx->r1 = SIGNED(ctx->r16) < 0X3 ? 1 : 0;
    // 0x8003DD8C: bnel        $at, $zero, L_8003DC60
    if (ctx->r1 != 0) {
        // 0x8003DD90: lw          $a1, 0x0($s1)
        ctx->r5 = MEM_W(ctx->r17, 0X0);
            goto L_8003DC60;
    }
    goto skip_5;
    // 0x8003DD90: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    skip_5:
L_8003DD94:
    // 0x8003DD94: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_8003DD98:
    // 0x8003DD98: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8003DD9C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8003DDA0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8003DDA4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8003DDA8: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8003DDAC: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8003DDB0: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8003DDB4: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8003DDB8: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8003DDBC: jr          $ra
    // 0x8003DDC0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x8003DDC0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80023DC4_249C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80023DC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80023DC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80023DCC: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80023DD0: jal         0x800239B8
    // 0x80023DD4: lw          $a0, 0x7740($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7740);
    func_800239B8_245B8(rdram, ctx);
        goto after_0;
    // 0x80023DD4: lw          $a0, 0x7740($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7740);
    after_0:
    // 0x80023DD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80023DDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80023DE0: jr          $ra
    // 0x80023DE4: nop

    TRACE_RETURN()
    return;
    // 0x80023DE4: nop

;}
RECOMP_FUNC void func_8002CDB0_2D9B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002CDB0: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x8002CDB4: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002CDB8: lwc1        $f4, -0x3C38($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3C38);
    // 0x8002CDBC: swc1        $f12, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f12.u32l;
    // 0x8002CDC0: swc1        $f14, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f14.u32l;
    // 0x8002CDC4: sw          $a2, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r6;
    // 0x8002CDC8: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002CDCC: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    // 0x8002CDD0: lw          $a1, 0xF0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XF0);
    // 0x8002CDD4: lwc1        $f6, -0x3C34($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X3C34);
    // 0x8002CDD8: lwc1        $f4, 0xD8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x8002CDDC: lwc1        $f10, 0xD4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x8002CDE0: lwc1        $f8, 0xD0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x8002CDE4: sdc1        $f22, 0x8($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X8, ctx->r29);
    // 0x8002CDE8: sdc1        $f30, 0x28($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X28, ctx->r29);
    // 0x8002CDEC: sw          $s3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r19;
    // 0x8002CDF0: sw          $s2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r18;
    // 0x8002CDF4: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x8002CDF8: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x8002CDFC: sdc1        $f28, 0x20($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X20, ctx->r29);
    // 0x8002CE00: mtc1        $zero, $f30
    ctx->f30.u32l = 0;
    // 0x8002CE04: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x8002CE08: mtc1        $zero, $f23
    ctx->f_odd[(23 - 1) * 2] = 0;
    // 0x8002CE0C: sw          $s6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r22;
    // 0x8002CE10: sw          $s5, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r21;
    // 0x8002CE14: sw          $s4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r20;
    // 0x8002CE18: sdc1        $f26, 0x18($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X18, ctx->r29);
    // 0x8002CE1C: sdc1        $f24, 0x10($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X10, ctx->r29);
    // 0x8002CE20: sdc1        $f20, 0x0($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X0, ctx->r29);
    // 0x8002CE24: sw          $a3, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r7;
    // 0x8002CE28: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8002CE2C: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8002CE30: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8002CE34: lwc1        $f28, 0xE8($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x8002CE38: lw          $s0, 0xF4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XF4);
    // 0x8002CE3C: addiu       $s1, $zero, 0x6
    ctx->r17 = ADD32(0, 0X6);
    // 0x8002CE40: lw          $s2, 0xEC($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XEC);
    // 0x8002CE44: addiu       $s3, $zero, 0x14
    ctx->r19 = ADD32(0, 0X14);
    // 0x8002CE48: ori         $t5, $zero, 0xFFFF
    ctx->r13 = 0 | 0XFFFF;
    // 0x8002CE4C: addiu       $t3, $zero, 0x6
    ctx->r11 = ADD32(0, 0X6);
    // 0x8002CE50: or          $t1, $a1, $zero
    ctx->r9 = ctx->r5 | 0;
    // 0x8002CE54: swc1        $f6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f6.u32l;
    // 0x8002CE58: swc1        $f4, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f4.u32l;
    // 0x8002CE5C: swc1        $f10, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f10.u32l;
    // 0x8002CE60: swc1        $f8, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f8.u32l;
L_8002CE64:
    // 0x8002CE64: multu       $v0, $t3
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002CE68: lwc1        $f6, 0xDC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x8002CE6C: c.lt.s      $f30, $f6
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f30.fl < ctx->f6.fl;
    // 0x8002CE70: mflo        $t6
    ctx->r14 = lo;
    // 0x8002CE74: addu        $v1, $a1, $t6
    ctx->r3 = ADD32(ctx->r5, ctx->r14);
    // 0x8002CE78: bc1f        L_8002CEB4
    if (!c1cs) {
        // 0x8002CE7C: lhu         $a2, 0x0($v1)
        ctx->r6 = MEM_HU(ctx->r3, 0X0);
            goto L_8002CEB4;
    }
    // 0x8002CE7C: lhu         $a2, 0x0($v1)
    ctx->r6 = MEM_HU(ctx->r3, 0X0);
    // 0x8002CE80: multu       $v0, $s1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002CE84: lwc1        $f6, 0x9C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x8002CE88: mflo        $t7
    ctx->r15 = lo;
    // 0x8002CE8C: addu        $t8, $t1, $t7
    ctx->r24 = ADD32(ctx->r9, ctx->r15);
    // 0x8002CE90: lh          $t9, 0x6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X6);
    // 0x8002CE94: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8002CE98: nop

    // 0x8002CE9C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8002CEA0: mul.s       $f4, $f10, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f28.fl);
    // 0x8002CEA4: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8002CEA8: nop

    // 0x8002CEAC: bc1tl       L_8002D0E4
    if (c1cs) {
        // 0x8002CEB0: lwc1        $f0, 0xF8($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0XF8);
            goto L_8002D0E4;
    }
    goto skip_0;
    // 0x8002CEB0: lwc1        $f0, 0xF8($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XF8);
    skip_0:
L_8002CEB4:
    // 0x8002CEB4: lwc1        $f8, 0xDC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x8002CEB8: sll         $a0, $v0, 2
    ctx->r4 = S32(ctx->r2 << 2);
    // 0x8002CEBC: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x8002CEC0: c.lt.s      $f8, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f8.fl < ctx->f30.fl;
    // 0x8002CEC4: sll         $a0, $a0, 1
    ctx->r4 = S32(ctx->r4 << 1);
    // 0x8002CEC8: addu        $a3, $t1, $a0
    ctx->r7 = ADD32(ctx->r9, ctx->r4);
    // 0x8002CECC: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x8002CED0: bc1fl       L_8002CF04
    if (!c1cs) {
        // 0x8002CED4: lh          $t7, 0xC($a3)
        ctx->r15 = MEM_H(ctx->r7, 0XC);
            goto L_8002CF04;
    }
    goto skip_1;
    // 0x8002CED4: lh          $t7, 0xC($a3)
    ctx->r15 = MEM_H(ctx->r7, 0XC);
    skip_1:
    // 0x8002CED8: lh          $t6, 0xC($a3)
    ctx->r14 = MEM_H(ctx->r7, 0XC);
    // 0x8002CEDC: lwc1        $f10, 0x9C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x8002CEE0: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8002CEE4: nop

    // 0x8002CEE8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8002CEEC: mul.s       $f8, $f6, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f28.fl);
    // 0x8002CEF0: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x8002CEF4: nop

    // 0x8002CEF8: bc1tl       L_8002D0E4
    if (c1cs) {
        // 0x8002CEFC: lwc1        $f0, 0xF8($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0XF8);
            goto L_8002D0E4;
    }
    goto skip_2;
    // 0x8002CEFC: lwc1        $f0, 0xF8($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XF8);
    skip_2:
    // 0x8002CF00: lh          $t7, 0xC($a3)
    ctx->r15 = MEM_H(ctx->r7, 0XC);
L_8002CF04:
    // 0x8002CF04: lwc1        $f0, 0xF8($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x8002CF08: lwc1        $f4, 0x9C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x8002CF0C: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x8002CF10: nop

    // 0x8002CF14: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8002CF18: mul.s       $f8, $f10, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f28.fl);
    // 0x8002CF1C: sub.s       $f6, $f8, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x8002CF20: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8002CF24: nop

    // 0x8002CF28: bc1tl       L_8002D0E4
    if (c1cs) {
        // 0x8002CF2C: lwc1        $f0, 0xF8($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0XF8);
            goto L_8002D0E4;
    }
    goto skip_3;
    // 0x8002CF2C: lwc1        $f0, 0xF8($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XF8);
    skip_3:
    // 0x8002CF30: lh          $t8, 0x6($a3)
    ctx->r24 = MEM_H(ctx->r7, 0X6);
    // 0x8002CF34: lwc1        $f20, 0xE0($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x8002CF38: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x8002CF3C: nop

    // 0x8002CF40: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8002CF44: mul.s       $f6, $f8, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f28.fl);
    // 0x8002CF48: add.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x8002CF4C: c.lt.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl < ctx->f4.fl;
    // 0x8002CF50: nop

    // 0x8002CF54: bc1tl       L_8002D0E4
    if (c1cs) {
        // 0x8002CF58: lwc1        $f0, 0xF8($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0XF8);
            goto L_8002D0E4;
    }
    goto skip_4;
    // 0x8002CF58: lwc1        $f0, 0xF8($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XF8);
    skip_4:
    // 0x8002CF5C: c.lt.s      $f30, $f20
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f30.fl < ctx->f20.fl;
    // 0x8002CF60: nop

    // 0x8002CF64: bc1fl       L_8002CF98
    if (!c1cs) {
        // 0x8002CF68: c.lt.s      $f20, $f30
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f20.fl < ctx->f30.fl;
            goto L_8002CF98;
    }
    goto skip_5;
    // 0x8002CF68: c.lt.s      $f20, $f30
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f20.fl < ctx->f30.fl;
    skip_5:
    // 0x8002CF6C: lh          $t9, 0x8($a3)
    ctx->r25 = MEM_H(ctx->r7, 0X8);
    // 0x8002CF70: lwc1        $f14, 0x98($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X98);
    // 0x8002CF74: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8002CF78: nop

    // 0x8002CF7C: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8002CF80: mul.s       $f10, $f6, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f28.fl);
    // 0x8002CF84: c.lt.s      $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f10.fl < ctx->f14.fl;
    // 0x8002CF88: nop

    // 0x8002CF8C: bc1tl       L_8002D0E4
    if (c1cs) {
        // 0x8002CF90: lwc1        $f0, 0xF8($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0XF8);
            goto L_8002D0E4;
    }
    goto skip_6;
    // 0x8002CF90: lwc1        $f0, 0xF8($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XF8);
    skip_6:
    // 0x8002CF94: c.lt.s      $f20, $f30
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f20.fl < ctx->f30.fl;
L_8002CF98:
    // 0x8002CF98: lwc1        $f14, 0x98($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X98);
    // 0x8002CF9C: bc1fl       L_8002CFCC
    if (!c1cs) {
        // 0x8002CFA0: lh          $t7, 0xE($a3)
        ctx->r15 = MEM_H(ctx->r7, 0XE);
            goto L_8002CFCC;
    }
    goto skip_7;
    // 0x8002CFA0: lh          $t7, 0xE($a3)
    ctx->r15 = MEM_H(ctx->r7, 0XE);
    skip_7:
    // 0x8002CFA4: lh          $t6, 0xE($a3)
    ctx->r14 = MEM_H(ctx->r7, 0XE);
    // 0x8002CFA8: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8002CFAC: nop

    // 0x8002CFB0: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8002CFB4: mul.s       $f6, $f8, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f28.fl);
    // 0x8002CFB8: c.lt.s      $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.fl < ctx->f6.fl;
    // 0x8002CFBC: nop

    // 0x8002CFC0: bc1tl       L_8002D0E4
    if (c1cs) {
        // 0x8002CFC4: lwc1        $f0, 0xF8($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0XF8);
            goto L_8002D0E4;
    }
    goto skip_8;
    // 0x8002CFC4: lwc1        $f0, 0xF8($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XF8);
    skip_8:
    // 0x8002CFC8: lh          $t7, 0xE($a3)
    ctx->r15 = MEM_H(ctx->r7, 0XE);
L_8002CFCC:
    // 0x8002CFCC: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x8002CFD0: nop

    // 0x8002CFD4: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8002CFD8: mul.s       $f8, $f4, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f28.fl);
    // 0x8002CFDC: sub.s       $f6, $f8, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x8002CFE0: c.lt.s      $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.fl < ctx->f6.fl;
    // 0x8002CFE4: nop

    // 0x8002CFE8: bc1tl       L_8002D0E4
    if (c1cs) {
        // 0x8002CFEC: lwc1        $f0, 0xF8($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0XF8);
            goto L_8002D0E4;
    }
    goto skip_9;
    // 0x8002CFEC: lwc1        $f0, 0xF8($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XF8);
    skip_9:
    // 0x8002CFF0: lh          $t8, 0x8($a3)
    ctx->r24 = MEM_H(ctx->r7, 0X8);
    // 0x8002CFF4: lwc1        $f18, 0xE4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x8002CFF8: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x8002CFFC: nop

    // 0x8002D000: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8002D004: mul.s       $f8, $f4, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f28.fl);
    // 0x8002D008: add.s       $f6, $f8, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x8002D00C: c.lt.s      $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f6.fl < ctx->f14.fl;
    // 0x8002D010: nop

    // 0x8002D014: bc1tl       L_8002D0E4
    if (c1cs) {
        // 0x8002D018: lwc1        $f0, 0xF8($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0XF8);
            goto L_8002D0E4;
    }
    goto skip_10;
    // 0x8002D018: lwc1        $f0, 0xF8($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XF8);
    skip_10:
    // 0x8002D01C: c.lt.s      $f30, $f18
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f30.fl < ctx->f18.fl;
    // 0x8002D020: nop

    // 0x8002D024: bc1fl       L_8002D058
    if (!c1cs) {
        // 0x8002D028: c.lt.s      $f18, $f30
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f18.fl < ctx->f30.fl;
            goto L_8002D058;
    }
    goto skip_11;
    // 0x8002D028: c.lt.s      $f18, $f30
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f18.fl < ctx->f30.fl;
    skip_11:
    // 0x8002D02C: lh          $t9, 0xA($a3)
    ctx->r25 = MEM_H(ctx->r7, 0XA);
    // 0x8002D030: lwc1        $f12, 0x94($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X94);
    // 0x8002D034: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x8002D038: nop

    // 0x8002D03C: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8002D040: mul.s       $f8, $f4, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f28.fl);
    // 0x8002D044: c.lt.s      $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f8.fl < ctx->f12.fl;
    // 0x8002D048: nop

    // 0x8002D04C: bc1tl       L_8002D0E4
    if (c1cs) {
        // 0x8002D050: lwc1        $f0, 0xF8($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0XF8);
            goto L_8002D0E4;
    }
    goto skip_12;
    // 0x8002D050: lwc1        $f0, 0xF8($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XF8);
    skip_12:
    // 0x8002D054: c.lt.s      $f18, $f30
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f18.fl < ctx->f30.fl;
L_8002D058:
    // 0x8002D058: lwc1        $f12, 0x94($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X94);
    // 0x8002D05C: bc1fl       L_8002D08C
    if (!c1cs) {
        // 0x8002D060: lh          $t7, 0x10($a3)
        ctx->r15 = MEM_H(ctx->r7, 0X10);
            goto L_8002D08C;
    }
    goto skip_13;
    // 0x8002D060: lh          $t7, 0x10($a3)
    ctx->r15 = MEM_H(ctx->r7, 0X10);
    skip_13:
    // 0x8002D064: lh          $t6, 0x10($a3)
    ctx->r14 = MEM_H(ctx->r7, 0X10);
    // 0x8002D068: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x8002D06C: nop

    // 0x8002D070: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8002D074: mul.s       $f4, $f10, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f28.fl);
    // 0x8002D078: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x8002D07C: nop

    // 0x8002D080: bc1tl       L_8002D0E4
    if (c1cs) {
        // 0x8002D084: lwc1        $f0, 0xF8($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0XF8);
            goto L_8002D0E4;
    }
    goto skip_14;
    // 0x8002D084: lwc1        $f0, 0xF8($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XF8);
    skip_14:
    // 0x8002D088: lh          $t7, 0x10($a3)
    ctx->r15 = MEM_H(ctx->r7, 0X10);
L_8002D08C:
    // 0x8002D08C: addu        $t8, $a1, $a0
    ctx->r24 = ADD32(ctx->r5, ctx->r4);
    // 0x8002D090: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x8002D094: nop

    // 0x8002D098: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8002D09C: mul.s       $f10, $f6, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f28.fl);
    // 0x8002D0A0: sub.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x8002D0A4: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x8002D0A8: nop

    // 0x8002D0AC: bc1tl       L_8002D0E4
    if (c1cs) {
        // 0x8002D0B0: lwc1        $f0, 0xF8($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0XF8);
            goto L_8002D0E4;
    }
    goto skip_15;
    // 0x8002D0B0: lwc1        $f0, 0xF8($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XF8);
    skip_15:
    // 0x8002D0B4: lh          $t9, 0xA($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA);
    // 0x8002D0B8: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8002D0BC: nop

    // 0x8002D0C0: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8002D0C4: lwc1        $f8, 0xD8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x8002D0C8: mul.s       $f10, $f6, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f28.fl);
    // 0x8002D0CC: add.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x8002D0D0: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x8002D0D4: nop

    // 0x8002D0D8: bc1fl       L_8002D360
    if (!c1cs) {
        // 0x8002D0DC: lui         $at, 0x44FA
        ctx->r1 = S32(0X44FA << 16);
            goto L_8002D360;
    }
    goto skip_16;
    // 0x8002D0DC: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    skip_16:
    // 0x8002D0E0: lwc1        $f0, 0xF8($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XF8);
L_8002D0E4:
    // 0x8002D0E4: lwc1        $f2, 0x9C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x8002D0E8: lwc1        $f12, 0x94($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X94);
    // 0x8002D0EC: lwc1        $f14, 0x98($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X98);
    // 0x8002D0F0: lwc1        $f16, 0xDC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x8002D0F4: lwc1        $f18, 0xE4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x8002D0F8: beq         $t5, $a2, L_8002D8E8
    if (ctx->r13 == ctx->r6) {
        // 0x8002D0FC: lwc1        $f20, 0xE0($sp)
        ctx->f20.u32l = MEM_W(ctx->r29, 0XE0);
            goto L_8002D8E8;
    }
    // 0x8002D0FC: lwc1        $f20, 0xE0($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x8002D100: multu       $a2, $t3
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002D104: c.lt.s      $f30, $f16
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f30.fl < ctx->f16.fl;
    // 0x8002D108: andi        $v0, $a2, 0xFFFF
    ctx->r2 = ctx->r6 & 0XFFFF;
    // 0x8002D10C: mflo        $t6
    ctx->r14 = lo;
    // 0x8002D110: addu        $t7, $a1, $t6
    ctx->r15 = ADD32(ctx->r5, ctx->r14);
    // 0x8002D114: bc1f        L_8002D14C
    if (!c1cs) {
        // 0x8002D118: lhu         $a2, 0x0($t7)
        ctx->r6 = MEM_HU(ctx->r15, 0X0);
            goto L_8002D14C;
    }
    // 0x8002D118: lhu         $a2, 0x0($t7)
    ctx->r6 = MEM_HU(ctx->r15, 0X0);
    // 0x8002D11C: multu       $v0, $s1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002D120: mflo        $t8
    ctx->r24 = lo;
    // 0x8002D124: addu        $t9, $t1, $t8
    ctx->r25 = ADD32(ctx->r9, ctx->r24);
    // 0x8002D128: lh          $t6, 0x6($t9)
    ctx->r14 = MEM_H(ctx->r25, 0X6);
    // 0x8002D12C: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x8002D130: nop

    // 0x8002D134: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8002D138: mul.s       $f4, $f10, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f28.fl);
    // 0x8002D13C: c.lt.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl < ctx->f2.fl;
    // 0x8002D140: nop

    // 0x8002D144: bc1tl       L_8002D0E4
    if (c1cs) {
        // 0x8002D148: lwc1        $f0, 0xF8($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0XF8);
            goto L_8002D0E4;
    }
    goto skip_17;
    // 0x8002D148: lwc1        $f0, 0xF8($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XF8);
    skip_17:
L_8002D14C:
    // 0x8002D14C: c.lt.s      $f16, $f30
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f16.fl < ctx->f30.fl;
    // 0x8002D150: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x8002D154: subu        $t7, $t7, $v0
    ctx->r15 = SUB32(ctx->r15, ctx->r2);
    // 0x8002D158: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x8002D15C: addu        $a3, $t1, $t7
    ctx->r7 = ADD32(ctx->r9, ctx->r15);
    // 0x8002D160: bc1f        L_8002D18C
    if (!c1cs) {
        // 0x8002D164: or          $s4, $v0, $zero
        ctx->r20 = ctx->r2 | 0;
            goto L_8002D18C;
    }
    // 0x8002D164: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x8002D168: lh          $t8, 0xC($a3)
    ctx->r24 = MEM_H(ctx->r7, 0XC);
    // 0x8002D16C: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x8002D170: nop

    // 0x8002D174: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8002D178: mul.s       $f10, $f6, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f28.fl);
    // 0x8002D17C: c.lt.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl < ctx->f10.fl;
    // 0x8002D180: nop

    // 0x8002D184: bc1tl       L_8002D0E4
    if (c1cs) {
        // 0x8002D188: lwc1        $f0, 0xF8($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0XF8);
            goto L_8002D0E4;
    }
    goto skip_18;
    // 0x8002D188: lwc1        $f0, 0xF8($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XF8);
    skip_18:
L_8002D18C:
    // 0x8002D18C: lh          $t9, 0xC($a3)
    ctx->r25 = MEM_H(ctx->r7, 0XC);
    // 0x8002D190: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8002D194: nop

    // 0x8002D198: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8002D19C: mul.s       $f6, $f8, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f28.fl);
    // 0x8002D1A0: sub.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x8002D1A4: c.lt.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl < ctx->f10.fl;
    // 0x8002D1A8: nop

    // 0x8002D1AC: bc1tl       L_8002D0E4
    if (c1cs) {
        // 0x8002D1B0: lwc1        $f0, 0xF8($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0XF8);
            goto L_8002D0E4;
    }
    goto skip_19;
    // 0x8002D1B0: lwc1        $f0, 0xF8($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XF8);
    skip_19:
    // 0x8002D1B4: lh          $t6, 0x6($a3)
    ctx->r14 = MEM_H(ctx->r7, 0X6);
    // 0x8002D1B8: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8002D1BC: nop

    // 0x8002D1C0: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8002D1C4: mul.s       $f6, $f8, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f28.fl);
    // 0x8002D1C8: add.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x8002D1CC: c.lt.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl < ctx->f2.fl;
    // 0x8002D1D0: nop

    // 0x8002D1D4: bc1tl       L_8002D0E4
    if (c1cs) {
        // 0x8002D1D8: lwc1        $f0, 0xF8($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0XF8);
            goto L_8002D0E4;
    }
    goto skip_20;
    // 0x8002D1D8: lwc1        $f0, 0xF8($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XF8);
    skip_20:
    // 0x8002D1DC: c.lt.s      $f30, $f20
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f30.fl < ctx->f20.fl;
    // 0x8002D1E0: nop

    // 0x8002D1E4: bc1fl       L_8002D214
    if (!c1cs) {
        // 0x8002D1E8: c.lt.s      $f20, $f30
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f20.fl < ctx->f30.fl;
            goto L_8002D214;
    }
    goto skip_21;
    // 0x8002D1E8: c.lt.s      $f20, $f30
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f20.fl < ctx->f30.fl;
    skip_21:
    // 0x8002D1EC: lh          $t7, 0x8($a3)
    ctx->r15 = MEM_H(ctx->r7, 0X8);
    // 0x8002D1F0: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8002D1F4: nop

    // 0x8002D1F8: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8002D1FC: mul.s       $f6, $f8, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f28.fl);
    // 0x8002D200: c.lt.s      $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f6.fl < ctx->f14.fl;
    // 0x8002D204: nop

    // 0x8002D208: bc1tl       L_8002D0E4
    if (c1cs) {
        // 0x8002D20C: lwc1        $f0, 0xF8($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0XF8);
            goto L_8002D0E4;
    }
    goto skip_22;
    // 0x8002D20C: lwc1        $f0, 0xF8($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XF8);
    skip_22:
    // 0x8002D210: c.lt.s      $f20, $f30
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f20.fl < ctx->f30.fl;
L_8002D214:
    // 0x8002D214: nop

    // 0x8002D218: bc1fl       L_8002D248
    if (!c1cs) {
        // 0x8002D21C: lh          $t9, 0xE($a3)
        ctx->r25 = MEM_H(ctx->r7, 0XE);
            goto L_8002D248;
    }
    goto skip_23;
    // 0x8002D21C: lh          $t9, 0xE($a3)
    ctx->r25 = MEM_H(ctx->r7, 0XE);
    skip_23:
    // 0x8002D220: lh          $t8, 0xE($a3)
    ctx->r24 = MEM_H(ctx->r7, 0XE);
    // 0x8002D224: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x8002D228: nop

    // 0x8002D22C: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8002D230: mul.s       $f8, $f4, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f28.fl);
    // 0x8002D234: c.lt.s      $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f14.fl < ctx->f8.fl;
    // 0x8002D238: nop

    // 0x8002D23C: bc1tl       L_8002D0E4
    if (c1cs) {
        // 0x8002D240: lwc1        $f0, 0xF8($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0XF8);
            goto L_8002D0E4;
    }
    goto skip_24;
    // 0x8002D240: lwc1        $f0, 0xF8($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XF8);
    skip_24:
    // 0x8002D244: lh          $t9, 0xE($a3)
    ctx->r25 = MEM_H(ctx->r7, 0XE);
L_8002D248:
    // 0x8002D248: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x8002D24C: nop

    // 0x8002D250: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8002D254: mul.s       $f4, $f10, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f28.fl);
    // 0x8002D258: sub.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x8002D25C: c.lt.s      $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f14.fl < ctx->f8.fl;
    // 0x8002D260: nop

    // 0x8002D264: bc1tl       L_8002D0E4
    if (c1cs) {
        // 0x8002D268: lwc1        $f0, 0xF8($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0XF8);
            goto L_8002D0E4;
    }
    goto skip_25;
    // 0x8002D268: lwc1        $f0, 0xF8($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XF8);
    skip_25:
    // 0x8002D26C: lh          $t6, 0x8($a3)
    ctx->r14 = MEM_H(ctx->r7, 0X8);
    // 0x8002D270: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x8002D274: nop

    // 0x8002D278: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8002D27C: mul.s       $f4, $f10, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f28.fl);
    // 0x8002D280: add.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x8002D284: c.lt.s      $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f8.fl < ctx->f14.fl;
    // 0x8002D288: nop

    // 0x8002D28C: bc1tl       L_8002D0E4
    if (c1cs) {
        // 0x8002D290: lwc1        $f0, 0xF8($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0XF8);
            goto L_8002D0E4;
    }
    goto skip_26;
    // 0x8002D290: lwc1        $f0, 0xF8($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XF8);
    skip_26:
    // 0x8002D294: c.lt.s      $f30, $f18
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f30.fl < ctx->f18.fl;
    // 0x8002D298: nop

    // 0x8002D29C: bc1fl       L_8002D2CC
    if (!c1cs) {
        // 0x8002D2A0: c.lt.s      $f18, $f30
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f18.fl < ctx->f30.fl;
            goto L_8002D2CC;
    }
    goto skip_27;
    // 0x8002D2A0: c.lt.s      $f18, $f30
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f18.fl < ctx->f30.fl;
    skip_27:
    // 0x8002D2A4: lh          $t7, 0xA($a3)
    ctx->r15 = MEM_H(ctx->r7, 0XA);
    // 0x8002D2A8: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x8002D2AC: nop

    // 0x8002D2B0: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8002D2B4: mul.s       $f4, $f10, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f28.fl);
    // 0x8002D2B8: c.lt.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl < ctx->f12.fl;
    // 0x8002D2BC: nop

    // 0x8002D2C0: bc1tl       L_8002D0E4
    if (c1cs) {
        // 0x8002D2C4: lwc1        $f0, 0xF8($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0XF8);
            goto L_8002D0E4;
    }
    goto skip_28;
    // 0x8002D2C4: lwc1        $f0, 0xF8($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XF8);
    skip_28:
    // 0x8002D2C8: c.lt.s      $f18, $f30
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f18.fl < ctx->f30.fl;
L_8002D2CC:
    // 0x8002D2CC: nop

    // 0x8002D2D0: bc1fl       L_8002D300
    if (!c1cs) {
        // 0x8002D2D4: lh          $t9, 0x10($a3)
        ctx->r25 = MEM_H(ctx->r7, 0X10);
            goto L_8002D300;
    }
    goto skip_29;
    // 0x8002D2D4: lh          $t9, 0x10($a3)
    ctx->r25 = MEM_H(ctx->r7, 0X10);
    skip_29:
    // 0x8002D2D8: lh          $t8, 0x10($a3)
    ctx->r24 = MEM_H(ctx->r7, 0X10);
    // 0x8002D2DC: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x8002D2E0: nop

    // 0x8002D2E4: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8002D2E8: mul.s       $f10, $f6, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f28.fl);
    // 0x8002D2EC: c.lt.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl < ctx->f10.fl;
    // 0x8002D2F0: nop

    // 0x8002D2F4: bc1tl       L_8002D0E4
    if (c1cs) {
        // 0x8002D2F8: lwc1        $f0, 0xF8($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0XF8);
            goto L_8002D0E4;
    }
    goto skip_30;
    // 0x8002D2F8: lwc1        $f0, 0xF8($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XF8);
    skip_30:
    // 0x8002D2FC: lh          $t9, 0x10($a3)
    ctx->r25 = MEM_H(ctx->r7, 0X10);
L_8002D300:
    // 0x8002D300: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8002D304: nop

    // 0x8002D308: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8002D30C: mul.s       $f6, $f8, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f28.fl);
    // 0x8002D310: sub.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x8002D314: c.lt.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl < ctx->f10.fl;
    // 0x8002D318: nop

    // 0x8002D31C: bc1tl       L_8002D0E4
    if (c1cs) {
        // 0x8002D320: lwc1        $f0, 0xF8($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0XF8);
            goto L_8002D0E4;
    }
    goto skip_31;
    // 0x8002D320: lwc1        $f0, 0xF8($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XF8);
    skip_31:
    // 0x8002D324: lh          $t6, 0xA($a3)
    ctx->r14 = MEM_H(ctx->r7, 0XA);
    // 0x8002D328: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8002D32C: nop

    // 0x8002D330: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8002D334: mul.s       $f6, $f8, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f28.fl);
    // 0x8002D338: add.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x8002D33C: c.lt.s      $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f10.fl < ctx->f12.fl;
    // 0x8002D340: nop

    // 0x8002D344: bc1tl       L_8002D0E4
    if (c1cs) {
        // 0x8002D348: lwc1        $f0, 0xF8($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0XF8);
            goto L_8002D0E4;
    }
    goto skip_32;
    // 0x8002D348: lwc1        $f0, 0xF8($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XF8);
    skip_32:
    // 0x8002D34C: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x8002D350: subu        $t7, $t7, $v0
    ctx->r15 = SUB32(ctx->r15, ctx->r2);
    // 0x8002D354: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x8002D358: addu        $v1, $a1, $t7
    ctx->r3 = ADD32(ctx->r5, ctx->r15);
    // 0x8002D35C: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
L_8002D360:
    // 0x8002D360: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x8002D364: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8002D368: lh          $t8, 0x2($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X2);
    // 0x8002D36C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8002D370: addiu       $v0, $s4, 0x3
    ctx->r2 = ADD32(ctx->r20, 0X3);
    // 0x8002D374: andi        $t9, $v0, 0xFFFF
    ctx->r25 = ctx->r2 & 0XFFFF;
    // 0x8002D378: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x8002D37C: andi        $t0, $t9, 0xFFFF
    ctx->r8 = ctx->r25 & 0XFFFF;
    // 0x8002D380: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8002D384: andi        $a0, $s3, 0xFFFF
    ctx->r4 = ctx->r19 & 0XFFFF;
    // 0x8002D388: sh          $t8, 0x56($sp)
    MEM_H(0X56, ctx->r29) = ctx->r24;
    // 0x8002D38C: swc1        $f4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f4.u32l;
L_8002D390:
    // 0x8002D390: multu       $v0, $t3
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002D394: lwc1        $f6, 0x9C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x8002D398: lwc1        $f4, 0x98($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X98);
    // 0x8002D39C: mflo        $t6
    ctx->r14 = lo;
    // 0x8002D3A0: addu        $v1, $a1, $t6
    ctx->r3 = ADD32(ctx->r5, ctx->r14);
    // 0x8002D3A4: lhu         $s4, 0x0($v1)
    ctx->r20 = MEM_HU(ctx->r3, 0X0);
    // 0x8002D3A8: multu       $s4, $s3
    result = U64(U32(ctx->r20)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002D3AC: mflo        $t7
    ctx->r15 = lo;
    // 0x8002D3B0: addu        $s6, $s2, $t7
    ctx->r22 = ADD32(ctx->r18, ctx->r15);
    // 0x8002D3B4: lwc1        $f8, 0xC($s6)
    ctx->f8.u32l = MEM_W(ctx->r22, 0XC);
    // 0x8002D3B8: lwc1        $f14, 0x0($s6)
    ctx->f14.u32l = MEM_W(ctx->r22, 0X0);
    // 0x8002D3BC: lwc1        $f16, 0x4($s6)
    ctx->f16.u32l = MEM_W(ctx->r22, 0X4);
    // 0x8002D3C0: mul.s       $f20, $f8, $f28
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f20.fl = MUL_S(ctx->f8.fl, ctx->f28.fl);
    // 0x8002D3C4: lwc1        $f18, 0x8($s6)
    ctx->f18.u32l = MEM_W(ctx->r22, 0X8);
    // 0x8002D3C8: lbu         $s5, 0x10($s6)
    ctx->r21 = MEM_BU(ctx->r22, 0X10);
    // 0x8002D3CC: mul.s       $f10, $f6, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x8002D3D0: or          $v0, $s5, $zero
    ctx->r2 = ctx->r21 | 0;
    // 0x8002D3D4: mul.s       $f8, $f4, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x8002D3D8: lwc1        $f4, 0x94($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X94);
    // 0x8002D3DC: add.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x8002D3E0: mul.s       $f10, $f4, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x8002D3E4: lwc1        $f4, 0xDC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x8002D3E8: add.s       $f12, $f6, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x8002D3EC: lwc1        $f10, 0xE0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x8002D3F0: add.s       $f0, $f12, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f20.fl;
    // 0x8002D3F4: beq         $s5, $zero, L_8002D410
    if (ctx->r21 == 0) {
        // 0x8002D3F8: mov.s       $f24, $f0
        CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
            goto L_8002D410;
    }
    // 0x8002D3F8: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    // 0x8002D3FC: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x8002D400: c.lt.d      $f22, $f8
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f22.d < ctx->f8.d;
    // 0x8002D404: nop

    // 0x8002D408: bc1fl       L_8002D594
    if (!c1cs) {
        // 0x8002D40C: cvt.d.s     $f10, $f24
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f10.d = CVT_D_S(ctx->f24.fl);
            goto L_8002D594;
    }
    goto skip_33;
    // 0x8002D40C: cvt.d.s     $f10, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f10.d = CVT_D_S(ctx->f24.fl);
    skip_33:
L_8002D410:
    // 0x8002D410: mul.s       $f6, $f14, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f4.fl);
    // 0x8002D414: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x8002D418: mul.s       $f8, $f16, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f10.fl);
    // 0x8002D41C: lwc1        $f10, 0xE4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x8002D420: add.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8002D424: mul.s       $f6, $f18, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x8002D428: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8002D42C: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x8002D430: c.eq.d      $f22, $f8
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f22.d == ctx->f8.d;
    // 0x8002D434: nop

    // 0x8002D438: bc1fl       L_8002D450
    if (!c1cs) {
        // 0x8002D43C: neg.s       $f10, $f20
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = -ctx->f20.fl;
            goto L_8002D450;
    }
    goto skip_34;
    // 0x8002D43C: neg.s       $f10, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = -ctx->f20.fl;
    skip_34:
    // 0x8002D440: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8002D444: b           L_8002D458
    // 0x8002D448: nop

        goto L_8002D458;
    // 0x8002D448: nop

    // 0x8002D44C: neg.s       $f10, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = -ctx->f20.fl;
L_8002D450:
    // 0x8002D450: sub.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f12.fl;
    // 0x8002D454: div.s       $f2, $f4, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
L_8002D458:
    // 0x8002D458: bne         $v0, $zero, L_8002D550
    if (ctx->r2 != 0) {
        // 0x8002D45C: lui         $at, 0x8008
        ctx->r1 = S32(0X8008 << 16);
            goto L_8002D550;
    }
    // 0x8002D45C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002D460: ldc1        $f6, -0x3C30($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X3C30);
    // 0x8002D464: cvt.d.s     $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.d = CVT_D_S(ctx->f2.fl);
    // 0x8002D468: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002D46C: c.lt.d      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.d < ctx->f6.d;
    // 0x8002D470: nop

    // 0x8002D474: bc1f        L_8002D4D0
    if (!c1cs) {
        // 0x8002D478: nop
    
            goto L_8002D4D0;
    }
    // 0x8002D478: nop

    // 0x8002D47C: ldc1        $f8, -0x3C28($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X3C28);
    // 0x8002D480: lwc1        $f10, 0x9C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x8002D484: lwc1        $f4, 0xDC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x8002D488: c.lt.d      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.d < ctx->f0.d;
    // 0x8002D48C: nop

    // 0x8002D490: bc1f        L_8002D4D0
    if (!c1cs) {
        // 0x8002D494: nop
    
            goto L_8002D4D0;
    }
    // 0x8002D494: nop

    // 0x8002D498: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8002D49C: lwc1        $f4, 0xE0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x8002D4A0: lwc1        $f10, 0x98($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X98);
    // 0x8002D4A4: mov.s       $f2, $f30
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 30);
    ctx->f2.fl = ctx->f30.fl;
    // 0x8002D4A8: mul.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x8002D4AC: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8002D4B0: mul.s       $f10, $f6, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x8002D4B4: lwc1        $f6, 0x94($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X94);
    // 0x8002D4B8: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8002D4BC: lwc1        $f8, 0xE4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x8002D4C0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8002D4C4: mul.s       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x8002D4C8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8002D4CC: add.s       $f24, $f8, $f20
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f24.fl = ctx->f8.fl + ctx->f20.fl;
L_8002D4D0:
    // 0x8002D4D0: beql        $a3, $zero, L_8002D554
    if (ctx->r7 == 0) {
        // 0x8002D4D4: cvt.d.s     $f8, $f2
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
            goto L_8002D554;
    }
    goto skip_35;
    // 0x8002D4D4: cvt.d.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
    skip_35:
    // 0x8002D4D8: cvt.d.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
    // 0x8002D4DC: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8002D4E0: c.eq.d      $f22, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f22.d == ctx->f10.d;
    // 0x8002D4E4: nop

    // 0x8002D4E8: bc1fl       L_8002D554
    if (!c1cs) {
        // 0x8002D4EC: cvt.d.s     $f8, $f2
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
            goto L_8002D554;
    }
    goto skip_36;
    // 0x8002D4EC: cvt.d.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
    skip_36:
    // 0x8002D4F0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8002D4F4: lwc1        $f8, 0x78($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X78);
    // 0x8002D4F8: c.le.d      $f6, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f6.d <= ctx->f22.d;
    // 0x8002D4FC: nop

    // 0x8002D500: bc1fl       L_8002D554
    if (!c1cs) {
        // 0x8002D504: cvt.d.s     $f8, $f2
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
            goto L_8002D554;
    }
    goto skip_37;
    // 0x8002D504: cvt.d.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
    skip_37:
    // 0x8002D508: c.eq.s      $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f8.fl == ctx->f14.fl;
    // 0x8002D50C: lwc1        $f10, 0x74($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X74);
    // 0x8002D510: bc1fl       L_8002D554
    if (!c1cs) {
        // 0x8002D514: cvt.d.s     $f8, $f2
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
            goto L_8002D554;
    }
    goto skip_38;
    // 0x8002D514: cvt.d.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
    skip_38:
    // 0x8002D518: c.eq.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl == ctx->f16.fl;
    // 0x8002D51C: lwc1        $f4, 0x70($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8002D520: bc1fl       L_8002D554
    if (!c1cs) {
        // 0x8002D524: cvt.d.s     $f8, $f2
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
            goto L_8002D554;
    }
    goto skip_39;
    // 0x8002D524: cvt.d.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
    skip_39:
    // 0x8002D528: c.eq.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl == ctx->f18.fl;
    // 0x8002D52C: lwc1        $f6, 0x6C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8002D530: bc1fl       L_8002D554
    if (!c1cs) {
        // 0x8002D534: cvt.d.s     $f8, $f2
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
            goto L_8002D554;
    }
    goto skip_40;
    // 0x8002D534: cvt.d.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
    skip_40:
    // 0x8002D538: c.eq.s      $f6, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f6.fl == ctx->f20.fl;
    // 0x8002D53C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8002D540: bc1fl       L_8002D554
    if (!c1cs) {
        // 0x8002D544: cvt.d.s     $f8, $f2
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
            goto L_8002D554;
    }
    goto skip_41;
    // 0x8002D544: cvt.d.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
    skip_41:
    // 0x8002D548: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x8002D54C: nop

L_8002D550:
    // 0x8002D550: cvt.d.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
L_8002D554:
    // 0x8002D554: c.lt.d      $f22, $f8
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f22.d < ctx->f8.d;
    // 0x8002D558: nop

    // 0x8002D55C: bc1fl       L_8002D594
    if (!c1cs) {
        // 0x8002D560: cvt.d.s     $f10, $f24
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f10.d = CVT_D_S(ctx->f24.fl);
            goto L_8002D594;
    }
    goto skip_42;
    // 0x8002D560: cvt.d.s     $f10, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f10.d = CVT_D_S(ctx->f24.fl);
    skip_42:
    // 0x8002D564: c.le.s      $f2, $f26
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f2.fl <= ctx->f26.fl;
    // 0x8002D568: nop

    // 0x8002D56C: bc1fl       L_8002D594
    if (!c1cs) {
        // 0x8002D570: cvt.d.s     $f10, $f24
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f10.d = CVT_D_S(ctx->f24.fl);
            goto L_8002D594;
    }
    goto skip_43;
    // 0x8002D570: cvt.d.s     $f10, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f10.d = CVT_D_S(ctx->f24.fl);
    skip_43:
    // 0x8002D574: mov.s       $f26, $f2
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 2);
    ctx->f26.fl = ctx->f2.fl;
    // 0x8002D578: swc1        $f14, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f14.u32l;
    // 0x8002D57C: swc1        $f16, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f16.u32l;
    // 0x8002D580: swc1        $f18, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f18.u32l;
    // 0x8002D584: swc1        $f20, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f20.u32l;
    // 0x8002D588: swc1        $f24, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f24.u32l;
    // 0x8002D58C: andi        $t2, $s5, 0xFF
    ctx->r10 = ctx->r21 & 0XFF;
    // 0x8002D590: cvt.d.s     $f10, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f10.d = CVT_D_S(ctx->f24.fl);
L_8002D594:
    // 0x8002D594: c.lt.d      $f22, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f22.d < ctx->f10.d;
    // 0x8002D598: nop

    // 0x8002D59C: bc1fl       L_8002D7F4
    if (!c1cs) {
        // 0x8002D5A0: lh          $s4, 0x2($v1)
        ctx->r20 = MEM_H(ctx->r3, 0X2);
            goto L_8002D7F4;
    }
    goto skip_44;
    // 0x8002D5A0: lh          $s4, 0x2($v1)
    ctx->r20 = MEM_H(ctx->r3, 0X2);
    skip_44:
    // 0x8002D5A4: lh          $s4, 0x4($v1)
    ctx->r20 = MEM_H(ctx->r3, 0X4);
    // 0x8002D5A8: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002D5AC: lwc1        $f8, 0xDC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x8002D5B0: bne         $s4, $zero, L_8002D7E8
    if (ctx->r20 != 0) {
        // 0x8002D5B4: lwc1        $f10, 0x90($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X90);
            goto L_8002D7E8;
    }
    // 0x8002D5B4: lwc1        $f10, 0x90($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X90);
    // 0x8002D5B8: ldc1        $f6, -0x3C20($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X3C20);
    // 0x8002D5BC: cvt.d.s     $f4, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f26.fl); 
    ctx->f4.d = CVT_D_S(ctx->f26.fl);
    // 0x8002D5C0: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002D5C4: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x8002D5C8: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
    // 0x8002D5CC: andi        $v0, $t0, 0xFFFF
    ctx->r2 = ctx->r8 & 0XFFFF;
    // 0x8002D5D0: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x8002D5D4: bc1f        L_8002D7C4
    if (!c1cs) {
        // 0x8002D5D8: nop
    
            goto L_8002D7C4;
    }
    // 0x8002D5D8: nop

    // 0x8002D5DC: mul.s       $f2, $f8, $f26
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f2.fl = MUL_S(ctx->f8.fl, ctx->f26.fl);
    // 0x8002D5E0: swc1        $f10, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f10.u32l;
    // 0x8002D5E4: lwc1        $f10, 0x7C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x8002D5E8: lwc1        $f8, 0x84($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X84);
    // 0x8002D5EC: lwc1        $f4, 0x8C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x8002D5F0: lwc1        $f6, 0x88($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X88);
    // 0x8002D5F4: andi        $t4, $t2, 0xFF
    ctx->r12 = ctx->r10 & 0XFF;
    // 0x8002D5F8: c.lt.s      $f2, $f30
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f2.fl < ctx->f30.fl;
    // 0x8002D5FC: swc1        $f10, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f10.u32l;
    // 0x8002D600: swc1        $f8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f8.u32l;
    // 0x8002D604: swc1        $f4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f4.u32l;
    // 0x8002D608: bc1f        L_8002D61C
    if (!c1cs) {
        // 0x8002D60C: swc1        $f6, 0x70($sp)
        MEM_W(0X70, ctx->r29) = ctx->f6.u32l;
            goto L_8002D61C;
    }
    // 0x8002D60C: swc1        $f6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f6.u32l;
    // 0x8002D610: mov.s       $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    ctx->f16.fl = ctx->f2.fl;
    // 0x8002D614: b           L_8002D624
    // 0x8002D618: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
        goto L_8002D624;
    // 0x8002D618: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
L_8002D61C:
    // 0x8002D61C: mov.s       $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    ctx->f16.fl = ctx->f2.fl;
    // 0x8002D620: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_8002D624:
    // 0x8002D624: ldc1        $f6, -0x3C18($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X3C18);
    // 0x8002D628: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x8002D62C: lwc1        $f8, 0xDC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x8002D630: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x8002D634: lwc1        $f6, 0xE0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x8002D638: bc1f        L_8002D67C
    if (!c1cs) {
        // 0x8002D63C: nop
    
            goto L_8002D67C;
    }
    // 0x8002D63C: nop

    // 0x8002D640: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8002D644: c.eq.d      $f22, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f22.d == ctx->f10.d;
    // 0x8002D648: nop

    // 0x8002D64C: bc1t        L_8002D67C
    if (c1cs) {
        // 0x8002D650: nop
    
            goto L_8002D67C;
    }
    // 0x8002D650: nop

    // 0x8002D654: cvt.d.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
    // 0x8002D658: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002D65C: c.le.d      $f22, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f22.d <= ctx->f4.d;
    // 0x8002D660: nop

    // 0x8002D664: bc1f        L_8002D678
    if (!c1cs) {
        // 0x8002D668: nop
    
            goto L_8002D678;
    }
    // 0x8002D668: nop

    // 0x8002D66C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002D670: b           L_8002D67C
    // 0x8002D674: lwc1        $f16, -0x3C10($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X3C10);
        goto L_8002D67C;
    // 0x8002D674: lwc1        $f16, -0x3C10($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X3C10);
L_8002D678:
    // 0x8002D678: lwc1        $f16, -0x3C0C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X3C0C);
L_8002D67C:
    // 0x8002D67C: mul.s       $f2, $f6, $f26
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f26.fl);
    // 0x8002D680: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002D684: lwc1        $f4, 0xE0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x8002D688: c.lt.s      $f2, $f30
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f2.fl < ctx->f30.fl;
    // 0x8002D68C: nop

    // 0x8002D690: bc1fl       L_8002D6A8
    if (!c1cs) {
        // 0x8002D694: mov.s       $f14, $f2
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.fl = ctx->f2.fl;
            goto L_8002D6A8;
    }
    goto skip_45;
    // 0x8002D694: mov.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.fl = ctx->f2.fl;
    skip_45:
    // 0x8002D698: mov.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.fl = ctx->f2.fl;
    // 0x8002D69C: b           L_8002D6AC
    // 0x8002D6A0: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
        goto L_8002D6AC;
    // 0x8002D6A0: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x8002D6A4: mov.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.fl = ctx->f2.fl;
L_8002D6A8:
    // 0x8002D6A8: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_8002D6AC:
    // 0x8002D6AC: ldc1        $f10, -0x3C08($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X3C08);
    // 0x8002D6B0: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x8002D6B4: c.lt.d      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.d < ctx->f10.d;
    // 0x8002D6B8: lwc1        $f10, 0xE4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x8002D6BC: bc1f        L_8002D700
    if (!c1cs) {
        // 0x8002D6C0: nop
    
            goto L_8002D700;
    }
    // 0x8002D6C0: nop

    // 0x8002D6C4: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8002D6C8: c.eq.d      $f22, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f22.d == ctx->f6.d;
    // 0x8002D6CC: nop

    // 0x8002D6D0: bc1t        L_8002D700
    if (c1cs) {
        // 0x8002D6D4: nop
    
            goto L_8002D700;
    }
    // 0x8002D6D4: nop

    // 0x8002D6D8: cvt.d.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
    // 0x8002D6DC: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002D6E0: c.le.d      $f22, $f8
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f22.d <= ctx->f8.d;
    // 0x8002D6E4: nop

    // 0x8002D6E8: bc1f        L_8002D6FC
    if (!c1cs) {
        // 0x8002D6EC: nop
    
            goto L_8002D6FC;
    }
    // 0x8002D6EC: nop

    // 0x8002D6F0: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002D6F4: b           L_8002D700
    // 0x8002D6F8: lwc1        $f14, -0x3C00($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X3C00);
        goto L_8002D700;
    // 0x8002D6F8: lwc1        $f14, -0x3C00($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X3C00);
L_8002D6FC:
    // 0x8002D6FC: lwc1        $f14, -0x3BFC($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X3BFC);
L_8002D700:
    // 0x8002D700: mul.s       $f2, $f10, $f26
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f2.fl = MUL_S(ctx->f10.fl, ctx->f26.fl);
    // 0x8002D704: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002D708: lwc1        $f8, 0xE4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x8002D70C: c.lt.s      $f2, $f30
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f2.fl < ctx->f30.fl;
    // 0x8002D710: nop

    // 0x8002D714: bc1fl       L_8002D72C
    if (!c1cs) {
        // 0x8002D718: mov.s       $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
            goto L_8002D72C;
    }
    goto skip_46;
    // 0x8002D718: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    skip_46:
    // 0x8002D71C: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    // 0x8002D720: b           L_8002D730
    // 0x8002D724: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
        goto L_8002D730;
    // 0x8002D724: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x8002D728: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
L_8002D72C:
    // 0x8002D72C: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_8002D730:
    // 0x8002D730: ldc1        $f6, -0x3BF8($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X3BF8);
    // 0x8002D734: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x8002D738: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x8002D73C: lwc1        $f6, 0x9C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x8002D740: bc1fl       L_8002D788
    if (!c1cs) {
        // 0x8002D744: add.s       $f8, $f16, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f6.fl;
            goto L_8002D788;
    }
    goto skip_47;
    // 0x8002D744: add.s       $f8, $f16, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f6.fl;
    skip_47:
    // 0x8002D748: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8002D74C: c.eq.d      $f22, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f22.d == ctx->f10.d;
    // 0x8002D750: nop

    // 0x8002D754: bc1tl       L_8002D788
    if (c1cs) {
        // 0x8002D758: add.s       $f8, $f16, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f6.fl;
            goto L_8002D788;
    }
    goto skip_48;
    // 0x8002D758: add.s       $f8, $f16, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f6.fl;
    skip_48:
    // 0x8002D75C: cvt.d.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
    // 0x8002D760: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002D764: c.le.d      $f22, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f22.d <= ctx->f4.d;
    // 0x8002D768: nop

    // 0x8002D76C: bc1f        L_8002D780
    if (!c1cs) {
        // 0x8002D770: nop
    
            goto L_8002D780;
    }
    // 0x8002D770: nop

    // 0x8002D774: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002D778: b           L_8002D784
    // 0x8002D77C: lwc1        $f12, -0x3BF0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X3BF0);
        goto L_8002D784;
    // 0x8002D77C: lwc1        $f12, -0x3BF0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X3BF0);
L_8002D780:
    // 0x8002D780: lwc1        $f12, -0x3BEC($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X3BEC);
L_8002D784:
    // 0x8002D784: add.s       $f8, $f16, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f6.fl;
L_8002D788:
    // 0x8002D788: lwc1        $f10, 0x98($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X98);
    // 0x8002D78C: lwc1        $f6, 0x94($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X94);
    // 0x8002D790: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x8002D794: swc1        $f8, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f8.u32l;
    // 0x8002D798: add.s       $f4, $f14, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f14.fl + ctx->f10.fl;
    // 0x8002D79C: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x8002D7A0: andi        $t8, $a0, 0xFFFF
    ctx->r24 = ctx->r4 & 0XFFFF;
    // 0x8002D7A4: add.s       $f8, $f12, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f12.fl + ctx->f6.fl;
    // 0x8002D7A8: swc1        $f4, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f4.u32l;
    // 0x8002D7AC: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x8002D7B0: bne         $t8, $zero, L_8002D390
    if (ctx->r24 != 0) {
        // 0x8002D7B4: swc1        $f8, 0x94($sp)
        MEM_W(0X94, ctx->r29) = ctx->f8.u32l;
            goto L_8002D390;
    }
    // 0x8002D7B4: swc1        $f8, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f8.u32l;
    // 0x8002D7B8: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x8002D7BC: b           L_8002D8E8
    // 0x8002D7C0: sh          $t9, 0x38($s0)
    MEM_H(0X38, ctx->r16) = ctx->r25;
        goto L_8002D8E8;
    // 0x8002D7C0: sh          $t9, 0x38($s0)
    MEM_H(0X38, ctx->r16) = ctx->r25;
L_8002D7C4:
    // 0x8002D7C4: beq         $t5, $a2, L_8002D8E8
    if (ctx->r13 == ctx->r6) {
        // 0x8002D7C8: andi        $v0, $a2, 0xFFFF
        ctx->r2 = ctx->r6 & 0XFFFF;
            goto L_8002D8E8;
    }
    // 0x8002D7C8: andi        $v0, $a2, 0xFFFF
    ctx->r2 = ctx->r6 & 0XFFFF;
    // 0x8002D7CC: lwc1        $f10, 0xD0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x8002D7D0: lwc1        $f4, 0xD4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x8002D7D4: lwc1        $f6, 0xD8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x8002D7D8: swc1        $f10, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f10.u32l;
    // 0x8002D7DC: swc1        $f4, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f4.u32l;
    // 0x8002D7E0: b           L_8002CE64
    // 0x8002D7E4: swc1        $f6, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f6.u32l;
        goto L_8002CE64;
    // 0x8002D7E4: swc1        $f6, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f6.u32l;
L_8002D7E8:
    // 0x8002D7E8: b           L_8002D390
    // 0x8002D7EC: andi        $v0, $s4, 0xFFFF
    ctx->r2 = ctx->r20 & 0XFFFF;
        goto L_8002D390;
    // 0x8002D7EC: andi        $v0, $s4, 0xFFFF
    ctx->r2 = ctx->r20 & 0XFFFF;
    // 0x8002D7F0: lh          $s4, 0x2($v1)
    ctx->r20 = MEM_H(ctx->r3, 0X2);
L_8002D7F4:
    // 0x8002D7F4: bne         $s4, $zero, L_8002D8E0
    if (ctx->r20 != 0) {
        // 0x8002D7F8: addiu       $at, $zero, 0x7FFF
        ctx->r1 = ADD32(0, 0X7FFF);
            goto L_8002D8E0;
    }
    // 0x8002D7F8: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x8002D7FC: bne         $a3, $at, L_8002D8C0
    if (ctx->r7 != ctx->r1) {
        // 0x8002D800: andi        $v0, $a2, 0xFFFF
        ctx->r2 = ctx->r6 & 0XFFFF;
            goto L_8002D8C0;
    }
    // 0x8002D800: andi        $v0, $a2, 0xFFFF
    ctx->r2 = ctx->r6 & 0XFFFF;
    // 0x8002D804: bne         $t4, $zero, L_8002D82C
    if (ctx->r12 != 0) {
        // 0x8002D808: lwc1        $f8, 0x90($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X90);
            goto L_8002D82C;
    }
    // 0x8002D808: lwc1        $f8, 0x90($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X90);
    // 0x8002D80C: lwc1        $f10, 0x8C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x8002D810: lwc1        $f4, 0x88($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X88);
    // 0x8002D814: lwc1        $f6, 0x84($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X84);
    // 0x8002D818: swc1        $f8, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f8.u32l;
    // 0x8002D81C: andi        $t4, $t2, 0xFF
    ctx->r12 = ctx->r10 & 0XFF;
    // 0x8002D820: swc1        $f10, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f10.u32l;
    // 0x8002D824: swc1        $f4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f4.u32l;
    // 0x8002D828: swc1        $f6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f6.u32l;
L_8002D82C:
    // 0x8002D82C: lwc1        $f8, 0x9C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x8002D830: lwc1        $f10, 0xD0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x8002D834: lwc1        $f4, 0x98($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X98);
    // 0x8002D838: lwc1        $f6, 0xD4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x8002D83C: sub.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8002D840: lwc1        $f10, 0xD8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x8002D844: lwc1        $f8, 0x94($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X94);
    // 0x8002D848: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8002D84C: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8002D850: addiu       $t6, $zero, 0x7FFF
    ctx->r14 = ADD32(0, 0X7FFF);
    // 0x8002D854: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8002D858: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x8002D85C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8002D860: mul.s       $f10, $f14, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x8002D864: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8002D868: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8002D86C: c.lt.s      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.fl < ctx->f4.fl;
    // 0x8002D870: nop

    // 0x8002D874: bc1f        L_8002D8C0
    if (!c1cs) {
        // 0x8002D878: nop
    
            goto L_8002D8C0;
    }
    // 0x8002D878: nop

    // 0x8002D87C: swc1        $f16, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f16.u32l;
    // 0x8002D880: swc1        $f16, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f16.u32l;
    // 0x8002D884: sh          $t6, 0x38($s0)
    MEM_H(0X38, ctx->r16) = ctx->r14;
    // 0x8002D888: swc1        $f2, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f2.u32l;
    // 0x8002D88C: swc1        $f12, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f12.u32l;
    // 0x8002D890: swc1        $f14, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f14.u32l;
    // 0x8002D894: lwc1        $f6, 0x78($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X78);
    // 0x8002D898: swc1        $f6, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f6.u32l;
    // 0x8002D89C: lwc1        $f8, 0x74($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X74);
    // 0x8002D8A0: swc1        $f8, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f8.u32l;
    // 0x8002D8A4: lwc1        $f10, 0x70($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8002D8A8: swc1        $f10, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f10.u32l;
    // 0x8002D8AC: lwc1        $f4, 0x6C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8002D8B0: sb          $t4, 0x34($s0)
    MEM_B(0X34, ctx->r16) = ctx->r12;
    // 0x8002D8B4: swc1        $f4, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f4.u32l;
    // 0x8002D8B8: lhu         $t7, 0x56($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X56);
    // 0x8002D8BC: sh          $t7, 0x36($s0)
    MEM_H(0X36, ctx->r16) = ctx->r15;
L_8002D8C0:
    // 0x8002D8C0: beq         $t5, $a2, L_8002D8E8
    if (ctx->r13 == ctx->r6) {
        // 0x8002D8C4: lwc1        $f6, 0xD0($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0XD0);
            goto L_8002D8E8;
    }
    // 0x8002D8C4: lwc1        $f6, 0xD0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x8002D8C8: lwc1        $f8, 0xD4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x8002D8CC: lwc1        $f10, 0xD8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x8002D8D0: swc1        $f6, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f6.u32l;
    // 0x8002D8D4: swc1        $f8, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f8.u32l;
    // 0x8002D8D8: b           L_8002CE64
    // 0x8002D8DC: swc1        $f10, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f10.u32l;
        goto L_8002CE64;
    // 0x8002D8DC: swc1        $f10, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f10.u32l;
L_8002D8E0:
    // 0x8002D8E0: b           L_8002D390
    // 0x8002D8E4: andi        $v0, $s4, 0xFFFF
    ctx->r2 = ctx->r20 & 0XFFFF;
        goto L_8002D390;
    // 0x8002D8E4: andi        $v0, $s4, 0xFFFF
    ctx->r2 = ctx->r20 & 0XFFFF;
L_8002D8E8:
    // 0x8002D8E8: ldc1        $f20, 0x0($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X0);
    // 0x8002D8EC: ldc1        $f22, 0x8($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X8);
    // 0x8002D8F0: ldc1        $f24, 0x10($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X10);
    // 0x8002D8F4: ldc1        $f26, 0x18($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X18);
    // 0x8002D8F8: ldc1        $f28, 0x20($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X20);
    // 0x8002D8FC: ldc1        $f30, 0x28($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X28);
    // 0x8002D900: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x8002D904: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x8002D908: lw          $s2, 0x3C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X3C);
    // 0x8002D90C: lw          $s3, 0x40($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X40);
    // 0x8002D910: lw          $s4, 0x44($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X44);
    // 0x8002D914: lw          $s5, 0x48($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X48);
    // 0x8002D918: lw          $s6, 0x4C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X4C);
    // 0x8002D91C: jr          $ra
    // 0x8002D920: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    TRACE_RETURN()
    return;
    // 0x8002D920: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void func_800037E4_43E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800037E4: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x800037E8: addiu       $v1, $v1, -0x3A38
    ctx->r3 = ADD32(ctx->r3, -0X3A38);
    // 0x800037EC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800037F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800037F4: lui         $t6, 0x4
    ctx->r14 = S32(0X4 << 16);
    // 0x800037F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800037FC: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x80003800: lbu         $t6, -0x522C($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X522C);
    // 0x80003804: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80003808: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8000380C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80003810: sb          $t7, -0x522C($at)
    MEM_B(-0X522C, ctx->r1) = ctx->r15;
    // 0x80003814: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x80003818: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8000381C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80003820: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80003824: jal         0x80003628
    // 0x80003828: sb          $zero, -0x522B($at)
    MEM_B(-0X522B, ctx->r1) = 0;
    func_80003628_4228(rdram, ctx);
        goto after_0;
    // 0x80003828: sb          $zero, -0x522B($at)
    MEM_B(-0X522B, ctx->r1) = 0;
    after_0:
    // 0x8000382C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80003830: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80003834: jr          $ra
    // 0x80003838: nop

    TRACE_RETURN()
    return;
    // 0x80003838: nop

;}
RECOMP_FUNC void alSynSetPitch(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80048890: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80048894: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80048898: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8004889C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800488A0: lw          $t6, 0x8($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X8);
    // 0x800488A4: beql        $t6, $zero, L_80048908
    if (ctx->r14 == 0) {
        // 0x800488A8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80048908;
    }
    goto skip_0;
    // 0x800488A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800488AC: jal         0x80047960
    // 0x800488B0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    __allocParam(rdram, ctx);
        goto after_0;
    // 0x800488B0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800488B4: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x800488B8: beq         $v0, $zero, L_80048904
    if (ctx->r2 == 0) {
        // 0x800488BC: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_80048904;
    }
    // 0x800488BC: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x800488C0: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x800488C4: lw          $t9, 0x8($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X8);
    // 0x800488C8: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x800488CC: lw          $t8, 0x1C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X1C);
    // 0x800488D0: lw          $t0, 0xD8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XD8);
    // 0x800488D4: sh          $t2, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r10;
    // 0x800488D8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800488DC: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x800488E0: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x800488E4: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800488E8: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x800488EC: swc1        $f4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f4.u32l;
    // 0x800488F0: lw          $t3, 0x8($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X8);
    // 0x800488F4: lw          $a0, 0xC($t3)
    ctx->r4 = MEM_W(ctx->r11, 0XC);
    // 0x800488F8: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x800488FC: jalr        $t9
    // 0x80048900: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x80048900: nop

    after_1:
L_80048904:
    // 0x80048904: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80048908:
    // 0x80048908: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004890C: jr          $ra
    // 0x80048910: nop

    TRACE_RETURN()
    return;
    // 0x80048910: nop

;}
RECOMP_FUNC void func_80011B58_12758(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80011B58: jr          $ra
    // 0x80011B5C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    TRACE_RETURN()
    return;
    // 0x80011B5C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_80017D8C_1898C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80017D8C: lui         $v1, 0x8017
    ctx->r3 = S32(0X8017 << 16);
    // 0x80017D90: addiu       $v1, $v1, -0x7AFC
    ctx->r3 = ADD32(ctx->r3, -0X7AFC);
    // 0x80017D94: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80017D98: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x80017D9C: sw          $s1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r17;
    // 0x80017DA0: addiu       $t6, $v0, 0x40
    ctx->r14 = ADD32(ctx->r2, 0X40);
    // 0x80017DA4: addiu       $t7, $t6, 0x40
    ctx->r15 = ADD32(ctx->r14, 0X40);
    // 0x80017DA8: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80017DAC: addiu       $t8, $t7, 0x40
    ctx->r24 = ADD32(ctx->r15, 0X40);
    // 0x80017DB0: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80017DB4: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80017DB8: addiu       $t9, $t8, 0x40
    ctx->r25 = ADD32(ctx->r24, 0X40);
    // 0x80017DBC: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x80017DC0: sw          $s0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r16;
    // 0x80017DC4: sw          $a1, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r5;
    // 0x80017DC8: sw          $t6, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r14;
    // 0x80017DCC: sw          $t7, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r15;
    // 0x80017DD0: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80017DD4: sw          $t8, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r24;
    // 0x80017DD8: sw          $v0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r2;
    // 0x80017DDC: lhu         $t1, 0x18($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X18);
    // 0x80017DE0: lui         $s1, 0x8017
    ctx->r17 = S32(0X8017 << 16);
    // 0x80017DE4: addiu       $s1, $s1, -0x7B5C
    ctx->r17 = ADD32(ctx->r17, -0X7B5C);
    // 0x80017DE8: sw          $a0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r4;
    // 0x80017DEC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80017DF0: jal         0x800196F0
    // 0x80017DF4: sh          $t1, 0xB6($sp)
    MEM_H(0XB6, ctx->r29) = ctx->r9;
    func_800196F0_1A2F0(rdram, ctx);
        goto after_0;
    // 0x80017DF4: sh          $t1, 0xB6($sp)
    MEM_H(0XB6, ctx->r29) = ctx->r9;
    after_0:
    // 0x80017DF8: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
    // 0x80017DFC: lui         $s0, 0x8016
    ctx->r16 = S32(0X8016 << 16);
    // 0x80017E00: lui         $t1, 0x380
    ctx->r9 = S32(0X380 << 16);
    // 0x80017E04: lw          $a1, 0x40($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X40);
    // 0x80017E08: lui         $v0, 0x8017
    ctx->r2 = S32(0X8017 << 16);
    // 0x80017E0C: addiu       $s0, $s0, -0x3A34
    ctx->r16 = ADD32(ctx->r16, -0X3A34);
    // 0x80017E10: beq         $a1, $zero, L_80017EA8
    if (ctx->r5 == 0) {
        // 0x80017E14: ori         $t1, $t1, 0x10
        ctx->r9 = ctx->r9 | 0X10;
            goto L_80017EA8;
    }
    // 0x80017E14: ori         $t1, $t1, 0x10
    ctx->r9 = ctx->r9 | 0X10;
    // 0x80017E18: addiu       $v0, $v0, -0x7B0C
    ctx->r2 = ADD32(ctx->r2, -0X7B0C);
    // 0x80017E1C: lui         $a2, 0x8017
    ctx->r6 = S32(0X8017 << 16);
    // 0x80017E20: lbu         $t4, 0x0($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X0);
    // 0x80017E24: addiu       $a2, $a2, -0x7B00
    ctx->r6 = ADD32(ctx->r6, -0X7B00);
    // 0x80017E28: lw          $t3, 0x0($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X0);
    // 0x80017E2C: lw          $at, 0x0($a1)
    ctx->r1 = MEM_W(ctx->r5, 0X0);
    // 0x80017E30: sll         $t5, $t4, 4
    ctx->r13 = S32(ctx->r12 << 4);
    // 0x80017E34: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x80017E38: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x80017E3C: lw          $t8, 0x4($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X4);
    // 0x80017E40: lui         $s0, 0x8016
    ctx->r16 = S32(0X8016 << 16);
    // 0x80017E44: addiu       $s0, $s0, -0x3A34
    ctx->r16 = ADD32(ctx->r16, -0X3A34);
    // 0x80017E48: sw          $t8, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r24;
    // 0x80017E4C: lw          $at, 0x8($a1)
    ctx->r1 = MEM_W(ctx->r5, 0X8);
    // 0x80017E50: lui         $t1, 0x380
    ctx->r9 = S32(0X380 << 16);
    // 0x80017E54: ori         $t1, $t1, 0x10
    ctx->r9 = ctx->r9 | 0X10;
    // 0x80017E58: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x80017E5C: lw          $t8, 0xC($a1)
    ctx->r24 = MEM_W(ctx->r5, 0XC);
    // 0x80017E60: sw          $t8, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->r24;
    // 0x80017E64: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x80017E68: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x80017E6C: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x80017E70: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x80017E74: lbu         $t2, 0x0($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X0);
    // 0x80017E78: lw          $t3, 0x0($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X0);
    // 0x80017E7C: sll         $t4, $t2, 4
    ctx->r12 = S32(ctx->r10 << 4);
    // 0x80017E80: addu        $t5, $t4, $t3
    ctx->r13 = ADD32(ctx->r12, ctx->r11);
    // 0x80017E84: sw          $t5, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r13;
    // 0x80017E88: lbu         $t7, 0x0($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X0);
    // 0x80017E8C: addiu       $t6, $t7, 0x1
    ctx->r14 = ADD32(ctx->r15, 0X1);
    // 0x80017E90: andi        $t8, $t6, 0xFF
    ctx->r24 = ctx->r14 & 0XFF;
    // 0x80017E94: slti        $at, $t8, 0x5
    ctx->r1 = SIGNED(ctx->r24) < 0X5 ? 1 : 0;
    // 0x80017E98: bne         $at, $zero, L_80017EC4
    if (ctx->r1 != 0) {
        // 0x80017E9C: sb          $t6, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r14;
            goto L_80017EC4;
    }
    // 0x80017E9C: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
    // 0x80017EA0: b           L_80017EC8
    // 0x80017EA4: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
        goto L_80017EC8;
    // 0x80017EA4: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
L_80017EA8:
    // 0x80017EA8: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x80017EAC: lui         $t2, 0x8007
    ctx->r10 = S32(0X8007 << 16);
    // 0x80017EB0: addiu       $t2, $t2, -0x49D0
    ctx->r10 = ADD32(ctx->r10, -0X49D0);
    // 0x80017EB4: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x80017EB8: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x80017EBC: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x80017EC0: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
L_80017EC4:
    // 0x80017EC4: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
L_80017EC8:
    // 0x80017EC8: lw          $a0, 0xB0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XB0);
    // 0x80017ECC: lbu         $t4, 0x3E($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X3E);
    // 0x80017ED0: andi        $t3, $t4, 0x1
    ctx->r11 = ctx->r12 & 0X1;
    // 0x80017ED4: bnel        $t3, $zero, L_80017F80
    if (ctx->r11 != 0) {
        // 0x80017ED8: lwc1        $f4, 0x54($v0)
        ctx->f4.u32l = MEM_W(ctx->r2, 0X54);
            goto L_80017F80;
    }
    goto skip_0;
    // 0x80017ED8: lwc1        $f4, 0x54($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X54);
    skip_0:
    // 0x80017EDC: lhu         $t5, 0x1A($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X1A);
    // 0x80017EE0: lw          $a0, 0xB0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XB0);
    // 0x80017EE4: addiu       $a1, $sp, 0xB4
    ctx->r5 = ADD32(ctx->r29, 0XB4);
    // 0x80017EE8: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x80017EEC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80017EF0: bgez        $t5, L_80017F04
    if (SIGNED(ctx->r13) >= 0) {
        // 0x80017EF4: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80017F04;
    }
    // 0x80017EF4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80017EF8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80017EFC: nop

    // 0x80017F00: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_80017F04:
    // 0x80017F04: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80017F08: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80017F0C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80017F10: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80017F14: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80017F18: lui         $at, 0x4700
    ctx->r1 = S32(0X4700 << 16);
    // 0x80017F1C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80017F20: lwc1        $f10, 0x1C($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x80017F24: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80017F28: lui         $a3, 0x3FAA
    ctx->r7 = S32(0X3FAA << 16);
    // 0x80017F2C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80017F30: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80017F34: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80017F38: lwc1        $f16, 0x20($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X20);
    // 0x80017F3C: ori         $a3, $a3, 0xAAAB
    ctx->r7 = ctx->r7 | 0XAAAB;
    // 0x80017F40: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x80017F44: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x80017F48: div.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x80017F4C: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x80017F50: jal         0x80043250
    // 0x80017F54: nop

    guPerspective(rdram, ctx);
        goto after_1;
    // 0x80017F54: nop

    after_1:
    // 0x80017F58: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x80017F5C: lui         $t6, 0xBC00
    ctx->r14 = S32(0XBC00 << 16);
    // 0x80017F60: ori         $t6, $t6, 0xE
    ctx->r14 = ctx->r14 | 0XE;
    // 0x80017F64: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x80017F68: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x80017F6C: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80017F70: lhu         $t8, 0xB4($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0XB4);
    // 0x80017F74: b           L_80017FB0
    // 0x80017F78: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
        goto L_80017FB0;
    // 0x80017F78: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x80017F7C: lwc1        $f4, 0x54($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X54);
L_80017F80:
    // 0x80017F80: lw          $a1, 0x50($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X50);
    // 0x80017F84: lw          $a2, 0x58($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X58);
    // 0x80017F88: lw          $a3, 0x5C($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X5C);
    // 0x80017F8C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80017F90: lwc1        $f8, 0x1C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x80017F94: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80017F98: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80017F9C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x80017FA0: lwc1        $f6, 0x20($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X20);
    // 0x80017FA4: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x80017FA8: jal         0x80042CF4
    // 0x80017FAC: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    guFrustum(rdram, ctx);
        goto after_2;
    // 0x80017FAC: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    after_2:
L_80017FB0:
    // 0x80017FB0: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x80017FB4: lui         $t1, 0x103
    ctx->r9 = S32(0X103 << 16);
    // 0x80017FB8: ori         $t1, $t1, 0x40
    ctx->r9 = ctx->r9 | 0X40;
    // 0x80017FBC: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x80017FC0: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x80017FC4: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x80017FC8: lw          $t2, 0xB0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB0);
    // 0x80017FCC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80017FD0: addu        $t4, $t2, $at
    ctx->r12 = ADD32(ctx->r10, ctx->r1);
    // 0x80017FD4: sw          $t4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r12;
    // 0x80017FD8: lw          $t3, 0x0($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X0);
    // 0x80017FDC: lbu         $t5, 0x3E($t3)
    ctx->r13 = MEM_BU(ctx->r11, 0X3E);
    // 0x80017FE0: andi        $t7, $t5, 0x1
    ctx->r15 = ctx->r13 & 0X1;
    // 0x80017FE4: bnel        $t7, $zero, L_800180E0
    if (ctx->r15 != 0) {
        // 0x80017FE8: lw          $a0, 0xBC($sp)
        ctx->r4 = MEM_W(ctx->r29, 0XBC);
            goto L_800180E0;
    }
    goto skip_1;
    // 0x80017FE8: lw          $a0, 0xBC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XBC);
    skip_1:
    // 0x80017FEC: jal         0x80003E10
    // 0x80017FF0: lhu         $a0, 0xB6($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0XB6);
    func_80003E10_4A10(rdram, ctx);
        goto after_3;
    // 0x80017FF0: lhu         $a0, 0xB6($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0XB6);
    after_3:
    // 0x80017FF4: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    // 0x80017FF8: jal         0x80003EA0
    // 0x80017FFC: lhu         $a0, 0xB6($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0XB6);
    func_80003EA0_4AA0(rdram, ctx);
        goto after_4;
    // 0x80017FFC: lhu         $a0, 0xB6($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0XB6);
    after_4:
    // 0x80018000: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80018004: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80018008: lui         $v1, 0x8017
    ctx->r3 = S32(0X8017 << 16);
    // 0x8001800C: lwc1        $f16, 0x4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80018010: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x80018014: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80018018: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x8001801C: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80018020: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80018024: addiu       $t0, $t0, -0x7AF4
    ctx->r8 = ADD32(ctx->r8, -0X7AF4);
    // 0x80018028: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x8001802C: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80018030: addiu       $v1, $v1, -0x7AF8
    ctx->r3 = ADD32(ctx->r3, -0X7AF8);
    // 0x80018034: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x80018038: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x8001803C: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80018040: lw          $a2, 0x0($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X0);
    // 0x80018044: addiu       $t9, $a1, 0x20
    ctx->r25 = ADD32(ctx->r5, 0X20);
    // 0x80018048: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x8001804C: lwc1        $f6, 0x14($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X14);
    // 0x80018050: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80018054: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x80018058: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x8001805C: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x80018060: lwc1        $f18, 0x24($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X24);
    // 0x80018064: addiu       $t1, $a2, 0x10
    ctx->r9 = ADD32(ctx->r6, 0X10);
    // 0x80018068: lw          $a0, 0xAC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XAC);
    // 0x8001806C: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    // 0x80018070: lwc1        $f4, 0x28($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X28);
    // 0x80018074: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    // 0x80018078: lwc1        $f8, 0x2C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X2C);
    // 0x8001807C: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    // 0x80018080: lwc1        $f6, 0x30($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X30);
    // 0x80018084: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    // 0x80018088: lwc1        $f10, 0x34($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X34);
    // 0x8001808C: swc1        $f10, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f10.u32l;
    // 0x80018090: lwc1        $f16, 0x38($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X38);
    // 0x80018094: swc1        $f16, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f16.u32l;
    // 0x80018098: lb          $t6, 0x3C($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X3C);
    // 0x8001809C: sw          $t6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r14;
    // 0x800180A0: lb          $t8, 0x3D($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X3D);
    // 0x800180A4: sw          $t1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r9;
    // 0x800180A8: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x800180AC: jal         0x800439E8
    // 0x800180B0: sw          $t8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r24;
    guLookAtHilite(rdram, ctx);
        goto after_5;
    // 0x800180B0: sw          $t8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r24;
    after_5:
    // 0x800180B4: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x800180B8: lui         $t4, 0x101
    ctx->r12 = S32(0X101 << 16);
    // 0x800180BC: ori         $t4, $t4, 0x40
    ctx->r12 = ctx->r12 | 0X40;
    // 0x800180C0: addiu       $t2, $v1, 0x8
    ctx->r10 = ADD32(ctx->r3, 0X8);
    // 0x800180C4: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
    // 0x800180C8: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x800180CC: lw          $t3, 0xAC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XAC);
    // 0x800180D0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800180D4: addu        $t5, $t3, $at
    ctx->r13 = ADD32(ctx->r11, ctx->r1);
    // 0x800180D8: sw          $t5, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r13;
    // 0x800180DC: lw          $a0, 0xBC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XBC);
L_800180E0:
    // 0x800180E0: jal         0x80043AA0
    // 0x800180E4: lw          $a1, 0xA4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA4);
    guMtxF2L(rdram, ctx);
        goto after_6;
    // 0x800180E4: lw          $a1, 0xA4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA4);
    after_6:
    // 0x800180E8: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x800180EC: lui         $t6, 0x101
    ctx->r14 = S32(0X101 << 16);
    // 0x800180F0: ori         $t6, $t6, 0x40
    ctx->r14 = ctx->r14 | 0X40;
    // 0x800180F4: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x800180F8: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x800180FC: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80018100: lw          $t8, 0xA4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA4);
    // 0x80018104: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80018108: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x8001810C: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x80018110: jal         0x80043C28
    // 0x80018114: lw          $a0, 0xA8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA8);
    guMtxIdent(rdram, ctx);
        goto after_7;
    // 0x80018114: lw          $a0, 0xA8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA8);
    after_7:
    // 0x80018118: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x8001811C: lui         $t2, 0x102
    ctx->r10 = S32(0X102 << 16);
    // 0x80018120: ori         $t2, $t2, 0x40
    ctx->r10 = ctx->r10 | 0X40;
    // 0x80018124: addiu       $t1, $v1, 0x8
    ctx->r9 = ADD32(ctx->r3, 0X8);
    // 0x80018128: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    // 0x8001812C: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    // 0x80018130: lw          $t4, 0xA8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XA8);
    // 0x80018134: lui         $at, 0x1FFF
    ctx->r1 = S32(0X1FFF << 16);
    // 0x80018138: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8001813C: and         $t3, $t4, $at
    ctx->r11 = ctx->r12 & ctx->r1;
    // 0x80018140: sw          $t3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r11;
    // 0x80018144: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80018148: lw          $t5, 0x44($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X44);
    // 0x8001814C: beql        $t5, $zero, L_800181F8
    if (ctx->r13 == 0) {
        // 0x80018150: lh          $t7, 0x48($v0)
        ctx->r15 = MEM_H(ctx->r2, 0X48);
            goto L_800181F8;
    }
    goto skip_2;
    // 0x80018150: lh          $t7, 0x48($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X48);
    skip_2:
    // 0x80018154: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x80018158: lui         $t6, 0xBC00
    ctx->r14 = S32(0XBC00 << 16);
    // 0x8001815C: ori         $t6, $t6, 0x404
    ctx->r14 = ctx->r14 | 0X404;
    // 0x80018160: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x80018164: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x80018168: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8001816C: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x80018170: lui         $t2, 0xBC00
    ctx->r10 = S32(0XBC00 << 16);
    // 0x80018174: ori         $t2, $t2, 0xC04
    ctx->r10 = ctx->r10 | 0XC04;
    // 0x80018178: lw          $t9, 0x44($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X44);
    // 0x8001817C: lui         $t7, 0xBC00
    ctx->r15 = S32(0XBC00 << 16);
    // 0x80018180: ori         $t7, $t7, 0x1404
    ctx->r15 = ctx->r15 | 0X1404;
    // 0x80018184: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x80018188: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x8001818C: lui         $t0, 0x1
    ctx->r8 = S32(0X1 << 16);
    // 0x80018190: addiu       $t1, $v1, 0x8
    ctx->r9 = ADD32(ctx->r3, 0X8);
    // 0x80018194: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    // 0x80018198: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    // 0x8001819C: lw          $t4, 0x0($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X0);
    // 0x800181A0: lui         $t2, 0xBC00
    ctx->r10 = S32(0XBC00 << 16);
    // 0x800181A4: ori         $t2, $t2, 0x1C04
    ctx->r10 = ctx->r10 | 0X1C04;
    // 0x800181A8: lw          $t3, 0x44($t4)
    ctx->r11 = MEM_W(ctx->r12, 0X44);
    // 0x800181AC: sw          $t3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r11;
    // 0x800181B0: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x800181B4: addiu       $t5, $v1, 0x8
    ctx->r13 = ADD32(ctx->r3, 0X8);
    // 0x800181B8: sw          $t5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r13;
    // 0x800181BC: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x800181C0: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x800181C4: lw          $t8, 0x44($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X44);
    // 0x800181C8: subu        $t9, $t0, $t8
    ctx->r25 = SUB32(ctx->r8, ctx->r24);
    // 0x800181CC: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x800181D0: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x800181D4: addiu       $t1, $v1, 0x8
    ctx->r9 = ADD32(ctx->r3, 0X8);
    // 0x800181D8: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    // 0x800181DC: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    // 0x800181E0: lw          $t4, 0x0($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X0);
    // 0x800181E4: lw          $t3, 0x44($t4)
    ctx->r11 = MEM_W(ctx->r12, 0X44);
    // 0x800181E8: subu        $t5, $t0, $t3
    ctx->r13 = SUB32(ctx->r8, ctx->r11);
    // 0x800181EC: sw          $t5, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r13;
    // 0x800181F0: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x800181F4: lh          $t7, 0x48($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X48);
L_800181F8:
    // 0x800181F8: lh          $t6, 0x4A($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X4A);
    // 0x800181FC: lh          $t9, 0x4C($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X4C);
    // 0x80018200: lh          $t2, 0x4E($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X4E);
    // 0x80018204: or          $t8, $t7, $t6
    ctx->r24 = ctx->r15 | ctx->r14;
    // 0x80018208: or          $t1, $t8, $t9
    ctx->r9 = ctx->r24 | ctx->r25;
    // 0x8001820C: or          $t4, $t1, $t2
    ctx->r12 = ctx->r9 | ctx->r10;
    // 0x80018210: beql        $t4, $zero, L_800182CC
    if (ctx->r12 == 0) {
        // 0x80018214: lw          $ra, 0x5C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X5C);
            goto L_800182CC;
    }
    goto skip_3;
    // 0x80018214: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    skip_3:
    // 0x80018218: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x8001821C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80018220: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80018224: addiu       $t3, $v1, 0x8
    ctx->r11 = ADD32(ctx->r3, 0X8);
    // 0x80018228: sw          $t3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r11;
    // 0x8001822C: lh          $t5, 0x48($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X48);
    // 0x80018230: lh          $t2, 0x4A($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X4A);
    // 0x80018234: lui         $at, 0xED00
    ctx->r1 = S32(0XED00 << 16);
    // 0x80018238: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x8001823C: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x80018240: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80018244: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80018248: mul.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8001824C: nop

    // 0x80018250: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80018254: trunc.w.s   $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80018258: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8001825C: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x80018260: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x80018264: andi        $t8, $t6, 0xFFF
    ctx->r24 = ctx->r14 & 0XFFF;
    // 0x80018268: sll         $t9, $t8, 12
    ctx->r25 = S32(ctx->r24 << 12);
    // 0x8001826C: or          $t1, $t9, $at
    ctx->r9 = ctx->r25 | ctx->r1;
    // 0x80018270: andi        $t5, $t3, 0xFFF
    ctx->r13 = ctx->r11 & 0XFFF;
    // 0x80018274: or          $t7, $t1, $t5
    ctx->r15 = ctx->r9 | ctx->r13;
    // 0x80018278: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8001827C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80018280: lh          $t6, 0x4C($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X4C);
    // 0x80018284: lh          $t3, 0x4E($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X4E);
    // 0x80018288: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x8001828C: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x80018290: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80018294: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80018298: mul.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8001829C: nop

    // 0x800182A0: mul.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x800182A4: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x800182A8: trunc.w.s   $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x800182AC: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x800182B0: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x800182B4: andi        $t2, $t9, 0xFFF
    ctx->r10 = ctx->r25 & 0XFFF;
    // 0x800182B8: sll         $t4, $t2, 12
    ctx->r12 = S32(ctx->r10 << 12);
    // 0x800182BC: andi        $t7, $t5, 0xFFF
    ctx->r15 = ctx->r13 & 0XFFF;
    // 0x800182C0: or          $t6, $t4, $t7
    ctx->r14 = ctx->r12 | ctx->r15;
    // 0x800182C4: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x800182C8: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
L_800182CC:
    // 0x800182CC: lw          $s0, 0x54($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X54);
    // 0x800182D0: lw          $s1, 0x58($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X58);
    // 0x800182D4: jr          $ra
    // 0x800182D8: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    TRACE_RETURN()
    return;
    // 0x800182D8: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void __osBlockSum(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800460A8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800460AC: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x800460B0: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x800460B4: lbu         $t6, 0x4F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X4F);
    // 0x800460B8: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x800460BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800460C0: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x800460C4: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x800460C8: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x800460CC: sb          $t6, 0x65($t7)
    MEM_B(0X65, ctx->r15) = ctx->r14;
    // 0x800460D0: jal         0x8004CF0C
    // 0x800460D4: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    __osPfsSelectBank_recomp(rdram, ctx);
        goto after_0;
    // 0x800460D4: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    after_0:
    // 0x800460D8: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x800460DC: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x800460E0: beq         $t8, $zero, L_800460F0
    if (ctx->r24 == 0) {
        // 0x800460E4: nop
    
            goto L_800460F0;
    }
    // 0x800460E4: nop

    // 0x800460E8: b           L_80046188
    // 0x800460EC: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
        goto L_80046188;
    // 0x800460EC: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_800460F0:
    // 0x800460F0: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
L_800460F4:
    // 0x800460F4: lbu         $t0, 0x47($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X47);
    // 0x800460F8: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x800460FC: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80046100: sll         $t1, $t0, 3
    ctx->r9 = S32(ctx->r8 << 3);
    // 0x80046104: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    // 0x80046108: lw          $a0, 0x4($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X4);
    // 0x8004610C: lw          $a1, 0x8($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X8);
    // 0x80046110: jal         0x8004CF80
    // 0x80046114: addu        $a2, $t1, $t2
    ctx->r6 = ADD32(ctx->r9, ctx->r10);
    __osContRamRead_recomp(rdram, ctx);
        goto after_1;
    // 0x80046114: addu        $a2, $t1, $t2
    ctx->r6 = ADD32(ctx->r9, ctx->r10);
    after_1:
    // 0x80046118: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x8004611C: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x80046120: beq         $t3, $zero, L_80046140
    if (ctx->r11 == 0) {
        // 0x80046124: nop
    
            goto L_80046140;
    }
    // 0x80046124: nop

    // 0x80046128: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x8004612C: sb          $zero, 0x65($t4)
    MEM_B(0X65, ctx->r12) = 0;
    // 0x80046130: jal         0x8004CF0C
    // 0x80046134: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    __osPfsSelectBank_recomp(rdram, ctx);
        goto after_2;
    // 0x80046134: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    after_2:
    // 0x80046138: b           L_80046188
    // 0x8004613C: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
        goto L_80046188;
    // 0x8004613C: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
L_80046140:
    // 0x80046140: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x80046144: jal         0x8004C220
    // 0x80046148: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    __osSumcalc(rdram, ctx);
        goto after_3;
    // 0x80046148: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_3:
    // 0x8004614C: lw          $t5, 0x48($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X48);
    // 0x80046150: lhu         $t6, 0x0($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0X0);
    // 0x80046154: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x80046158: sh          $t7, 0x0($t5)
    MEM_H(0X0, ctx->r13) = ctx->r15;
    // 0x8004615C: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80046160: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80046164: slti        $at, $t9, 0x8
    ctx->r1 = SIGNED(ctx->r25) < 0X8 ? 1 : 0;
    // 0x80046168: bne         $at, $zero, L_800460F4
    if (ctx->r1 != 0) {
        // 0x8004616C: sw          $t9, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r25;
            goto L_800460F4;
    }
    // 0x8004616C: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x80046170: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x80046174: sb          $zero, 0x65($t0)
    MEM_B(0X65, ctx->r8) = 0;
    // 0x80046178: jal         0x8004CF0C
    // 0x8004617C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    __osPfsSelectBank_recomp(rdram, ctx);
        goto after_4;
    // 0x8004617C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    after_4:
    // 0x80046180: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x80046184: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
L_80046188:
    // 0x80046188: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004618C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80046190: jr          $ra
    // 0x80046194: nop

    TRACE_RETURN()
    return;
    // 0x80046194: nop

;}
RECOMP_FUNC void func_8000DE80_EA80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000DE80: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8000DE84: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8000DE88: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8000DE8C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8000DE90: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x8000DE94: sw          $t6, 0xB0($a0)
    MEM_W(0XB0, ctx->r4) = ctx->r14;
    // 0x8000DE98: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x8000DE9C: lui         $t8, 0xFA00
    ctx->r24 = S32(0XFA00 << 16);
    // 0x8000DEA0: sw          $t8, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = ctx->r24;
    // 0x8000DEA4: sw          $t7, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->r15;
    // 0x8000DEA8: lw          $t4, 0x48($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X48);
    // 0x8000DEAC: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x8000DEB0: andi        $t1, $a3, 0xFF
    ctx->r9 = ctx->r7 & 0XFF;
    // 0x8000DEB4: sll         $t2, $t1, 16
    ctx->r10 = S32(ctx->r9 << 16);
    // 0x8000DEB8: sll         $t0, $a2, 24
    ctx->r8 = S32(ctx->r6 << 24);
    // 0x8000DEBC: andi        $t5, $t4, 0xFF
    ctx->r13 = ctx->r12 & 0XFF;
    // 0x8000DEC0: sll         $t6, $t5, 8
    ctx->r14 = S32(ctx->r13 << 8);
    // 0x8000DEC4: or          $t3, $t0, $t2
    ctx->r11 = ctx->r8 | ctx->r10;
    // 0x8000DEC8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8000DECC: or          $t7, $t3, $t6
    ctx->r15 = ctx->r11 | ctx->r14;
    // 0x8000DED0: andi        $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 & 0XFF;
    // 0x8000DED4: or          $t1, $t7, $t9
    ctx->r9 = ctx->r15 | ctx->r25;
    // 0x8000DED8: lui         $t0, 0xB800
    ctx->r8 = S32(0XB800 << 16);
    // 0x8000DEDC: sw          $t1, 0xBC($a0)
    MEM_W(0XBC, ctx->r4) = ctx->r9;
    // 0x8000DEE0: sw          $t0, 0xC0($a0)
    MEM_W(0XC0, ctx->r4) = ctx->r8;
    // 0x8000DEE4: sw          $zero, 0xC4($a0)
    MEM_W(0XC4, ctx->r4) = 0;
    // 0x8000DEE8: subu        $a1, $s0, $s0
    ctx->r5 = SUB32(ctx->r16, ctx->r16);
    // 0x8000DEEC: addiu       $a0, $a0, 0xB0
    ctx->r4 = ADD32(ctx->r4, 0XB0);
    // 0x8000DEF0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8000DEF4: jal         0x80040620
    // 0x8000DEF8: addiu       $a1, $a1, 0x18
    ctx->r5 = ADD32(ctx->r5, 0X18);
    osWritebackDCache_recomp(rdram, ctx);
        goto after_0;
    // 0x8000DEF8: addiu       $a1, $a1, 0x18
    ctx->r5 = ADD32(ctx->r5, 0X18);
    after_0:
    // 0x8000DEFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8000DF00: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x8000DF04: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8000DF08: jr          $ra
    // 0x8000DF0C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8000DF0C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8001F2D8_1FED8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001F2D8: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8001F2DC: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8001F2E0: lwc1        $f10, 0x10($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X10);
    // 0x8001F2E4: lwc1        $f16, 0x4($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X4);
    // 0x8001F2E8: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8001F2EC: lwc1        $f6, 0x8($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X8);
    // 0x8001F2F0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8001F2F4: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8001F2F8: lwc1        $f10, 0x20($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X20);
    // 0x8001F2FC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8001F300: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8001F304: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8001F308: add.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x8001F30C: add.s       $f8, $f16, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x8001F310: swc1        $f8, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f8.u32l;
    // 0x8001F314: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8001F318: lwc1        $f18, 0x4($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8001F31C: lwc1        $f4, 0x4($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X4);
    // 0x8001F320: lwc1        $f16, 0x14($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X14);
    // 0x8001F324: mul.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x8001F328: nop

    // 0x8001F32C: mul.s       $f18, $f16, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x8001F330: lwc1        $f4, 0x24($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X24);
    // 0x8001F334: lwc1        $f16, 0x8($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X8);
    // 0x8001F338: add.s       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x8001F33C: mul.s       $f10, $f16, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x8001F340: add.s       $f18, $f10, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x8001F344: swc1        $f18, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f18.u32l;
    // 0x8001F348: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8001F34C: lwc1        $f16, 0x8($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8001F350: lwc1        $f18, 0x4($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X4);
    // 0x8001F354: lwc1        $f6, 0x18($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X18);
    // 0x8001F358: mul.s       $f10, $f16, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x8001F35C: nop

    // 0x8001F360: mul.s       $f16, $f6, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x8001F364: lwc1        $f18, 0x28($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X28);
    // 0x8001F368: lwc1        $f6, 0x8($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X8);
    // 0x8001F36C: add.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8001F370: mul.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x8001F374: add.s       $f16, $f10, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8001F378: swc1        $f16, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f16.u32l;
    // 0x8001F37C: lwc1        $f18, 0x10($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X10);
    // 0x8001F380: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8001F384: lwc1        $f16, 0x14($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X14);
    // 0x8001F388: lwc1        $f4, 0x10($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X10);
    // 0x8001F38C: mul.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x8001F390: nop

    // 0x8001F394: mul.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x8001F398: lwc1        $f16, 0x20($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X20);
    // 0x8001F39C: lwc1        $f4, 0x18($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X18);
    // 0x8001F3A0: add.s       $f18, $f10, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x8001F3A4: mul.s       $f10, $f4, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x8001F3A8: add.s       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x8001F3AC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x8001F3B0: lwc1        $f16, 0x10($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X10);
    // 0x8001F3B4: lwc1        $f4, 0x4($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8001F3B8: lwc1        $f6, 0x14($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X14);
    // 0x8001F3BC: lwc1        $f18, 0x14($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X14);
    // 0x8001F3C0: mul.s       $f10, $f4, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x8001F3C4: nop

    // 0x8001F3C8: mul.s       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x8001F3CC: lwc1        $f6, 0x24($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X24);
    // 0x8001F3D0: lwc1        $f18, 0x18($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X18);
    // 0x8001F3D4: add.s       $f16, $f10, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8001F3D8: mul.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x8001F3DC: add.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8001F3E0: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x8001F3E4: lwc1        $f6, 0x10($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X10);
    // 0x8001F3E8: lwc1        $f18, 0x8($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8001F3EC: lwc1        $f4, 0x14($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X14);
    // 0x8001F3F0: lwc1        $f16, 0x18($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X18);
    // 0x8001F3F4: mul.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x8001F3F8: nop

    // 0x8001F3FC: mul.s       $f18, $f16, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x8001F400: lwc1        $f4, 0x28($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X28);
    // 0x8001F404: lwc1        $f16, 0x18($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X18);
    // 0x8001F408: add.s       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x8001F40C: mul.s       $f10, $f16, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x8001F410: add.s       $f18, $f10, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x8001F414: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x8001F418: lwc1        $f4, 0x20($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X20);
    // 0x8001F41C: lwc1        $f16, 0x0($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8001F420: lwc1        $f18, 0x24($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X24);
    // 0x8001F424: lwc1        $f6, 0x10($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X10);
    // 0x8001F428: mul.s       $f10, $f16, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x8001F42C: nop

    // 0x8001F430: mul.s       $f16, $f6, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x8001F434: lwc1        $f18, 0x20($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X20);
    // 0x8001F438: lwc1        $f6, 0x28($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X28);
    // 0x8001F43C: add.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8001F440: mul.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x8001F444: add.s       $f16, $f10, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8001F448: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x8001F44C: lwc1        $f18, 0x20($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X20);
    // 0x8001F450: lwc1        $f6, 0x4($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8001F454: lwc1        $f16, 0x24($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X24);
    // 0x8001F458: lwc1        $f4, 0x14($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X14);
    // 0x8001F45C: mul.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x8001F460: nop

    // 0x8001F464: mul.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x8001F468: lwc1        $f16, 0x24($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X24);
    // 0x8001F46C: lwc1        $f4, 0x28($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X28);
    // 0x8001F470: add.s       $f18, $f10, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x8001F474: mul.s       $f10, $f4, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x8001F478: add.s       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x8001F47C: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x8001F480: lwc1        $f16, 0x20($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X20);
    // 0x8001F484: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8001F488: lwc1        $f6, 0x24($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X24);
    // 0x8001F48C: lwc1        $f18, 0x18($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X18);
    // 0x8001F490: mul.s       $f10, $f4, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x8001F494: nop

    // 0x8001F498: mul.s       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x8001F49C: lwc1        $f6, 0x28($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X28);
    // 0x8001F4A0: lwc1        $f18, 0x28($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X28);
    // 0x8001F4A4: add.s       $f16, $f10, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8001F4A8: mul.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x8001F4AC: add.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8001F4B0: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x8001F4B4: lwc1        $f6, 0x30($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X30);
    // 0x8001F4B8: lwc1        $f18, 0x0($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8001F4BC: lwc1        $f4, 0x34($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X34);
    // 0x8001F4C0: lwc1        $f16, 0x10($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X10);
    // 0x8001F4C4: mul.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x8001F4C8: nop

    // 0x8001F4CC: mul.s       $f18, $f16, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x8001F4D0: lwc1        $f4, 0x38($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X38);
    // 0x8001F4D4: lwc1        $f16, 0x20($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X20);
    // 0x8001F4D8: add.s       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x8001F4DC: mul.s       $f10, $f16, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x8001F4E0: lwc1        $f4, 0x30($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X30);
    // 0x8001F4E4: lwc1        $f16, 0x3C($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X3C);
    // 0x8001F4E8: add.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x8001F4EC: mul.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x8001F4F0: add.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x8001F4F4: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    // 0x8001F4F8: lwc1        $f4, 0x30($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X30);
    // 0x8001F4FC: lwc1        $f16, 0x4($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8001F500: lwc1        $f10, 0x34($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X34);
    // 0x8001F504: lwc1        $f18, 0x14($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X14);
    // 0x8001F508: mul.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x8001F50C: nop

    // 0x8001F510: mul.s       $f16, $f18, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x8001F514: lwc1        $f10, 0x38($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X38);
    // 0x8001F518: lwc1        $f18, 0x24($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X24);
    // 0x8001F51C: add.s       $f4, $f6, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x8001F520: mul.s       $f6, $f18, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x8001F524: lwc1        $f10, 0x34($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X34);
    // 0x8001F528: lwc1        $f18, 0x3C($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X3C);
    // 0x8001F52C: add.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8001F530: mul.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x8001F534: add.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x8001F538: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    // 0x8001F53C: lwc1        $f10, 0x30($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X30);
    // 0x8001F540: lwc1        $f18, 0x8($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8001F544: lwc1        $f6, 0x34($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X34);
    // 0x8001F548: lwc1        $f16, 0x18($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X18);
    // 0x8001F54C: mul.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x8001F550: nop

    // 0x8001F554: mul.s       $f18, $f16, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x8001F558: lwc1        $f6, 0x38($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X38);
    // 0x8001F55C: lwc1        $f16, 0x28($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X28);
    // 0x8001F560: add.s       $f10, $f4, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x8001F564: mul.s       $f4, $f16, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x8001F568: lwc1        $f6, 0x38($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X38);
    // 0x8001F56C: lwc1        $f16, 0x3C($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X3C);
    // 0x8001F570: add.s       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8001F574: mul.s       $f10, $f16, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x8001F578: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x8001F57C: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x8001F580: swc1        $f8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f8.u32l;
    // 0x8001F584: lwc1        $f16, 0x4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4);
    // 0x8001F588: swc1        $f16, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f16.u32l;
    // 0x8001F58C: lwc1        $f6, 0x8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X8);
    // 0x8001F590: swc1        $f6, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f6.u32l;
    // 0x8001F594: lwc1        $f10, 0x10($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X10);
    // 0x8001F598: swc1        $f10, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f10.u32l;
    // 0x8001F59C: lwc1        $f18, 0x14($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8001F5A0: swc1        $f18, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->f18.u32l;
    // 0x8001F5A4: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8001F5A8: swc1        $f4, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->f4.u32l;
    // 0x8001F5AC: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8001F5B0: swc1        $f8, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f8.u32l;
    // 0x8001F5B4: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8001F5B8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8001F5BC: swc1        $f16, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f16.u32l;
    // 0x8001F5C0: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8001F5C4: swc1        $f6, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f6.u32l;
    // 0x8001F5C8: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8001F5CC: swc1        $f10, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->f10.u32l;
    // 0x8001F5D0: lwc1        $f18, 0x34($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8001F5D4: swc1        $f18, 0x34($a1)
    MEM_W(0X34, ctx->r5) = ctx->f18.u32l;
    // 0x8001F5D8: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8001F5DC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8001F5E0: swc1        $f0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f0.u32l;
    // 0x8001F5E4: swc1        $f0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f0.u32l;
    // 0x8001F5E8: swc1        $f0, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->f0.u32l;
    // 0x8001F5EC: swc1        $f8, 0x3C($a1)
    MEM_W(0X3C, ctx->r5) = ctx->f8.u32l;
    // 0x8001F5F0: jr          $ra
    // 0x8001F5F4: swc1        $f4, 0x38($a1)
    MEM_W(0X38, ctx->r5) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x8001F5F4: swc1        $f4, 0x38($a1)
    MEM_W(0X38, ctx->r5) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_80023FB8_24BB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80023FB8: bgez        $a0, L_80023FC8
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80023FBC: sra         $t6, $a0, 3
        ctx->r14 = S32(SIGNED(ctx->r4) >> 3);
            goto L_80023FC8;
    }
    // 0x80023FBC: sra         $t6, $a0, 3
    ctx->r14 = S32(SIGNED(ctx->r4) >> 3);
    // 0x80023FC0: addiu       $at, $a0, 0x7
    ctx->r1 = ADD32(ctx->r4, 0X7);
    // 0x80023FC4: sra         $t6, $at, 3
    ctx->r14 = S32(SIGNED(ctx->r1) >> 3);
L_80023FC8:
    // 0x80023FC8: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x80023FCC: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80023FD0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80023FD4: lbu         $t8, -0x7108($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X7108);
    // 0x80023FD8: bgez        $a0, L_80023FEC
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80023FDC: andi        $t9, $a0, 0x7
        ctx->r25 = ctx->r4 & 0X7;
            goto L_80023FEC;
    }
    // 0x80023FDC: andi        $t9, $a0, 0x7
    ctx->r25 = ctx->r4 & 0X7;
    // 0x80023FE0: beq         $t9, $zero, L_80023FEC
    if (ctx->r25 == 0) {
        // 0x80023FE4: nop
    
            goto L_80023FEC;
    }
    // 0x80023FE4: nop

    // 0x80023FE8: addiu       $t9, $t9, -0x8
    ctx->r25 = ADD32(ctx->r25, -0X8);
L_80023FEC:
    // 0x80023FEC: andi        $t0, $t9, 0xFF
    ctx->r8 = ctx->r25 & 0XFF;
    // 0x80023FF0: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80023FF4: sllv        $t3, $t1, $t0
    ctx->r11 = S32(ctx->r9 << (ctx->r8 & 31));
    // 0x80023FF8: and         $v0, $t8, $t3
    ctx->r2 = ctx->r24 & ctx->r11;
    // 0x80023FFC: andi        $t4, $v0, 0xFF
    ctx->r12 = ctx->r2 & 0XFF;
    // 0x80024000: jr          $ra
    // 0x80024004: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
    TRACE_RETURN()
    return;
    // 0x80024004: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
;}
RECOMP_FUNC void func_8000769C_829C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000769C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800076A0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800076A4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800076A8: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x800076AC: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x800076B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800076B4: beq         $a1, $zero, L_80007728
    if (ctx->r5 == 0) {
        // 0x800076B8: sw          $a0, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r4;
            goto L_80007728;
    }
    // 0x800076B8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800076BC: lw          $t6, 0x10($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X10);
    // 0x800076C0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800076C4: bnel        $t6, $at, L_800076D8
    if (ctx->r14 != ctx->r1) {
        // 0x800076C8: lw          $t7, 0x4($s0)
        ctx->r15 = MEM_W(ctx->r16, 0X4);
            goto L_800076D8;
    }
    goto skip_0;
    // 0x800076C8: lw          $t7, 0x4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4);
    skip_0:
    // 0x800076CC: jal         0x800427B0
    // 0x800076D0: nop

    osWritebackDCacheAll_recomp(rdram, ctx);
        goto after_0;
    // 0x800076D0: nop

    after_0:
    // 0x800076D4: lw          $t7, 0x4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4);
L_800076D8:
    // 0x800076D8: addiu       $at, $zero, -0x31
    ctx->r1 = ADD32(0, -0X31);
    // 0x800076DC: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x800076E0: jal         0x80041EE0
    // 0x800076E4: sw          $t8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r24;
    osGetTime_recomp(rdram, ctx);
        goto after_1;
    // 0x800076E4: sw          $t8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r24;
    after_1:
    // 0x800076E8: lw          $t9, 0x10($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X10);
    // 0x800076EC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800076F0: sw          $v0, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->r2;
    // 0x800076F4: beq         $a0, $t9, L_80007704
    if (ctx->r4 == ctx->r25) {
        // 0x800076F8: sw          $v1, 0x5C($s0)
        MEM_W(0X5C, ctx->r16) = ctx->r3;
            goto L_80007704;
    }
    // 0x800076F8: sw          $v1, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->r3;
    // 0x800076FC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80007700: sb          $a0, 0x7858($at)
    MEM_B(0X7858, ctx->r1) = ctx->r4;
L_80007704:
    // 0x80007704: addiu       $a0, $s0, 0x10
    ctx->r4 = ADD32(ctx->r16, 0X10);
    // 0x80007708: jal         0x800428FC
    // 0x8000770C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    osSpTaskLoad_recomp(rdram, ctx);
        goto after_2;
    // 0x8000770C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_2:
    // 0x80007710: jal         0x80042A8C
    // 0x80007714: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    osSpTaskStartGo_recomp(rdram, ctx);
        goto after_3;
    // 0x80007714: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_3:
    // 0x80007718: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8000771C: bne         $s0, $s1, L_80007728
    if (ctx->r16 != ctx->r17) {
        // 0x80007720: sw          $s0, 0x2AC($t0)
        MEM_W(0X2AC, ctx->r8) = ctx->r16;
            goto L_80007728;
    }
    // 0x80007720: sw          $s0, 0x2AC($t0)
    MEM_W(0X2AC, ctx->r8) = ctx->r16;
    // 0x80007724: sw          $s1, 0x2B0($t0)
    MEM_W(0X2B0, ctx->r8) = ctx->r17;
L_80007728:
    // 0x80007728: beql        $s1, $zero, L_8000776C
    if (ctx->r17 == 0) {
        // 0x8000772C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8000776C;
    }
    goto skip_1;
    // 0x8000772C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x80007730: beql        $s1, $s0, L_8000776C
    if (ctx->r17 == ctx->r16) {
        // 0x80007734: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8000776C;
    }
    goto skip_2;
    // 0x80007734: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x80007738: lw          $t1, 0x3C($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X3C);
    // 0x8000773C: lw          $a0, 0x38($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X38);
    // 0x80007740: lw          $a2, 0x0($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X0);
    // 0x80007744: jal         0x80042AD0
    // 0x80007748: lw          $a3, 0x4($t1)
    ctx->r7 = MEM_W(ctx->r9, 0X4);
    osDpSetNextBuffer_recomp(rdram, ctx);
        goto after_4;
    // 0x80007748: lw          $a3, 0x4($t1)
    ctx->r7 = MEM_W(ctx->r9, 0X4);
    after_4:
    // 0x8000774C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80007750: lui         $at, 0x8006
    ctx->r1 = S32(0X8006 << 16);
    // 0x80007754: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80007758: sw          $t2, -0x4C1C($at)
    MEM_W(-0X4C1C, ctx->r1) = ctx->r10;
    // 0x8000775C: lui         $at, 0x8006
    ctx->r1 = S32(0X8006 << 16);
    // 0x80007760: sw          $zero, -0x4C18($at)
    MEM_W(-0X4C18, ctx->r1) = 0;
    // 0x80007764: sw          $s1, 0x2B0($t3)
    MEM_W(0X2B0, ctx->r11) = ctx->r17;
    // 0x80007768: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8000776C:
    // 0x8000776C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80007770: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80007774: jr          $ra
    // 0x80007778: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80007778: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80024FAC_25BAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80024FAC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80024FB0: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x80024FB4: lui         $t8, 0x8007
    ctx->r24 = S32(0X8007 << 16);
    // 0x80024FB8: addiu       $t8, $t8, -0x2E68
    ctx->r24 = ADD32(ctx->r24, -0X2E68);
    // 0x80024FBC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80024FC0: lui         $t7, 0x600
    ctx->r15 = S32(0X600 << 16);
    // 0x80024FC4: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80024FC8: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80024FCC: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x80024FD0: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x80024FD4: lui         $t9, 0xFA00
    ctx->r25 = S32(0XFA00 << 16);
    // 0x80024FD8: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x80024FDC: lbu         $t7, 0x24($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X24);
    // 0x80024FE0: lbu         $t6, 0x25($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X25);
    // 0x80024FE4: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80024FE8: sll         $t8, $t7, 24
    ctx->r24 = S32(ctx->r15 << 24);
    // 0x80024FEC: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x80024FF0: or          $t9, $t8, $t7
    ctx->r25 = ctx->r24 | ctx->r15;
    // 0x80024FF4: lbu         $t8, 0x26($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X26);
    // 0x80024FF8: lui         $a3, 0x1
    ctx->r7 = S32(0X1 << 16);
    // 0x80024FFC: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x80025000: sll         $t7, $t8, 8
    ctx->r15 = S32(ctx->r24 << 8);
    // 0x80025004: or          $t6, $t9, $t7
    ctx->r14 = ctx->r25 | ctx->r15;
    // 0x80025008: lbu         $t9, 0x27($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X27);
    // 0x8002500C: lui         $t0, 0x700
    ctx->r8 = S32(0X700 << 16);
    // 0x80025010: lui         $t1, 0xE600
    ctx->r9 = S32(0XE600 << 16);
    // 0x80025014: or          $t7, $t6, $t9
    ctx->r15 = ctx->r14 | ctx->r25;
    // 0x80025018: sw          $t7, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r15;
    // 0x8002501C: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x80025020: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x80025024: lui         $t7, 0xFD10
    ctx->r15 = S32(0XFD10 << 16);
    // 0x80025028: sll         $t6, $t8, 11
    ctx->r14 = S32(ctx->r24 << 11);
    // 0x8002502C: bgez        $t6, L_800251E4
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80025030: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_800251E4;
    }
    // 0x80025030: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80025034: lui         $t9, 0xBA00
    ctx->r25 = S32(0XBA00 << 16);
    // 0x80025038: ori         $t9, $t9, 0xE02
    ctx->r25 = ctx->r25 | 0XE02;
    // 0x8002503C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80025040: ori         $t7, $zero, 0x8000
    ctx->r15 = 0 | 0X8000;
    // 0x80025044: sw          $t7, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r15;
    // 0x80025048: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x8002504C: or          $t2, $v0, $zero
    ctx->r10 = ctx->r2 | 0;
    // 0x80025050: lui         $t8, 0xFD50
    ctx->r24 = S32(0XFD50 << 16);
    // 0x80025054: sw          $t8, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r24;
    // 0x80025058: lw          $t6, 0x30($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X30);
    // 0x8002505C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80025060: or          $t3, $v0, $zero
    ctx->r11 = ctx->r2 | 0;
    // 0x80025064: lui         $t9, 0xF550
    ctx->r25 = S32(0XF550 << 16);
    // 0x80025068: sw          $t6, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r14;
    // 0x8002506C: sw          $t9, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r25;
    // 0x80025070: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80025074: lui         $t0, 0x700
    ctx->r8 = S32(0X700 << 16);
    // 0x80025078: lui         $a3, 0x1
    ctx->r7 = S32(0X1 << 16);
    // 0x8002507C: andi        $t7, $v1, 0x10
    ctx->r15 = ctx->r3 & 0X10;
    // 0x80025080: sltu        $t8, $zero, $t7
    ctx->r24 = 0 < ctx->r15 ? 1 : 0;
    // 0x80025084: andi        $t6, $t8, 0x3
    ctx->r14 = ctx->r24 & 0X3;
    // 0x80025088: sll         $t9, $t6, 18
    ctx->r25 = S32(ctx->r14 << 18);
    // 0x8002508C: or          $t7, $t9, $t0
    ctx->r15 = ctx->r25 | ctx->r8;
    // 0x80025090: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x80025094: andi        $t6, $v1, 0x4
    ctx->r14 = ctx->r3 & 0X4;
    // 0x80025098: sltu        $t9, $zero, $t6
    ctx->r25 = 0 < ctx->r14 ? 1 : 0;
    // 0x8002509C: or          $t8, $t7, $a3
    ctx->r24 = ctx->r15 | ctx->r7;
    // 0x800250A0: andi        $t7, $t9, 0x3
    ctx->r15 = ctx->r25 & 0X3;
    // 0x800250A4: sll         $t6, $t7, 8
    ctx->r14 = S32(ctx->r15 << 8);
    // 0x800250A8: or          $t9, $t8, $t6
    ctx->r25 = ctx->r24 | ctx->r14;
    // 0x800250AC: ori         $t7, $t9, 0x60
    ctx->r15 = ctx->r25 | 0X60;
    // 0x800250B0: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x800250B4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800250B8: sw          $t7, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r15;
    // 0x800250BC: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x800250C0: lui         $t1, 0xE600
    ctx->r9 = S32(0XE600 << 16);
    // 0x800250C4: or          $t3, $v0, $zero
    ctx->r11 = ctx->r2 | 0;
    // 0x800250C8: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x800250CC: sw          $t1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r9;
    // 0x800250D0: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x800250D4: lui         $t6, 0x73F
    ctx->r14 = S32(0X73F << 16);
    // 0x800250D8: ori         $t6, $t6, 0xF200
    ctx->r14 = ctx->r14 | 0XF200;
    // 0x800250DC: or          $t4, $v0, $zero
    ctx->r12 = ctx->r2 | 0;
    // 0x800250E0: lui         $t8, 0xF300
    ctx->r24 = S32(0XF300 << 16);
    // 0x800250E4: sw          $t8, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r24;
    // 0x800250E8: sw          $t6, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r14;
    // 0x800250EC: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x800250F0: lui         $t9, 0xF540
    ctx->r25 = S32(0XF540 << 16);
    // 0x800250F4: lui         $t2, 0xE700
    ctx->r10 = S32(0XE700 << 16);
    // 0x800250F8: sw          $t2, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r10;
    // 0x800250FC: ori         $t9, $t9, 0x800
    ctx->r25 = ctx->r25 | 0X800;
    // 0x80025100: or          $t5, $v0, $zero
    ctx->r13 = ctx->r2 | 0;
    // 0x80025104: sw          $zero, 0x4($t4)
    MEM_W(0X4, ctx->r12) = 0;
    // 0x80025108: sw          $t9, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r25;
    // 0x8002510C: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80025110: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80025114: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x80025118: andi        $t7, $v1, 0x10
    ctx->r15 = ctx->r3 & 0X10;
    // 0x8002511C: sltu        $t8, $zero, $t7
    ctx->r24 = 0 < ctx->r15 ? 1 : 0;
    // 0x80025120: andi        $t6, $t8, 0x3
    ctx->r14 = ctx->r24 & 0X3;
    // 0x80025124: sll         $t9, $t6, 18
    ctx->r25 = S32(ctx->r14 << 18);
    // 0x80025128: andi        $t8, $v1, 0x4
    ctx->r24 = ctx->r3 & 0X4;
    // 0x8002512C: sltu        $t6, $zero, $t8
    ctx->r14 = 0 < ctx->r24 ? 1 : 0;
    // 0x80025130: or          $t7, $t9, $a3
    ctx->r15 = ctx->r25 | ctx->r7;
    // 0x80025134: andi        $t9, $t6, 0x3
    ctx->r25 = ctx->r14 & 0X3;
    // 0x80025138: sll         $t8, $t9, 8
    ctx->r24 = S32(ctx->r25 << 8);
    // 0x8002513C: or          $t6, $t7, $t8
    ctx->r14 = ctx->r15 | ctx->r24;
    // 0x80025140: ori         $t9, $t6, 0x60
    ctx->r25 = ctx->r14 | 0X60;
    // 0x80025144: sw          $t9, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r25;
    // 0x80025148: lui         $t8, 0xF
    ctx->r24 = S32(0XF << 16);
    // 0x8002514C: ori         $t8, $t8, 0xC0FC
    ctx->r24 = ctx->r24 | 0XC0FC;
    // 0x80025150: lui         $t7, 0xF200
    ctx->r15 = S32(0XF200 << 16);
    // 0x80025154: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80025158: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x8002515C: sw          $t8, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r24;
    // 0x80025160: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80025164: lui         $t6, 0xFD10
    ctx->r14 = S32(0XFD10 << 16);
    // 0x80025168: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8002516C: lw          $t9, 0x34($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X34);
    // 0x80025170: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80025174: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80025178: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x8002517C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80025180: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x80025184: lui         $t7, 0xE800
    ctx->r15 = S32(0XE800 << 16);
    // 0x80025188: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x8002518C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80025190: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x80025194: lui         $t8, 0xF500
    ctx->r24 = S32(0XF500 << 16);
    // 0x80025198: ori         $t8, $t8, 0x100
    ctx->r24 = ctx->r24 | 0X100;
    // 0x8002519C: or          $t3, $v0, $zero
    ctx->r11 = ctx->r2 | 0;
    // 0x800251A0: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x800251A4: sw          $t8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r24;
    // 0x800251A8: sw          $t0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r8;
    // 0x800251AC: or          $t4, $v0, $zero
    ctx->r12 = ctx->r2 | 0;
    // 0x800251B0: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x800251B4: sw          $zero, 0x4($t3)
    MEM_W(0X4, ctx->r11) = 0;
    // 0x800251B8: sw          $t1, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r9;
    // 0x800251BC: lui         $t9, 0x703
    ctx->r25 = S32(0X703 << 16);
    // 0x800251C0: ori         $t9, $t9, 0xC000
    ctx->r25 = ctx->r25 | 0XC000;
    // 0x800251C4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x800251C8: lui         $t6, 0xF000
    ctx->r14 = S32(0XF000 << 16);
    // 0x800251CC: sw          $t6, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r14;
    // 0x800251D0: sw          $t9, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r25;
    // 0x800251D4: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x800251D8: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    // 0x800251DC: b           L_800252E0
    // 0x800251E0: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
        goto L_800252E0;
    // 0x800251E0: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
L_800251E4:
    // 0x800251E4: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x800251E8: lw          $t8, 0x30($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X30);
    // 0x800251EC: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x800251F0: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x800251F4: lui         $t6, 0xF510
    ctx->r14 = S32(0XF510 << 16);
    // 0x800251F8: sw          $t8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r24;
    // 0x800251FC: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x80025200: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80025204: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80025208: or          $t2, $v0, $zero
    ctx->r10 = ctx->r2 | 0;
    // 0x8002520C: andi        $t9, $v1, 0x10
    ctx->r25 = ctx->r3 & 0X10;
    // 0x80025210: sltu        $t7, $zero, $t9
    ctx->r15 = 0 < ctx->r25 ? 1 : 0;
    // 0x80025214: andi        $t8, $t7, 0x3
    ctx->r24 = ctx->r15 & 0X3;
    // 0x80025218: sll         $t6, $t8, 18
    ctx->r14 = S32(ctx->r24 << 18);
    // 0x8002521C: or          $t9, $t6, $t0
    ctx->r25 = ctx->r14 | ctx->r8;
    // 0x80025220: andi        $t8, $v1, 0x4
    ctx->r24 = ctx->r3 & 0X4;
    // 0x80025224: sltu        $t6, $zero, $t8
    ctx->r14 = 0 < ctx->r24 ? 1 : 0;
    // 0x80025228: or          $t7, $t9, $a3
    ctx->r15 = ctx->r25 | ctx->r7;
    // 0x8002522C: andi        $t9, $t6, 0x3
    ctx->r25 = ctx->r14 & 0X3;
    // 0x80025230: sll         $t8, $t9, 8
    ctx->r24 = S32(ctx->r25 << 8);
    // 0x80025234: or          $t6, $t7, $t8
    ctx->r14 = ctx->r15 | ctx->r24;
    // 0x80025238: ori         $t9, $t6, 0x60
    ctx->r25 = ctx->r14 | 0X60;
    // 0x8002523C: sw          $t9, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r25;
    // 0x80025240: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80025244: or          $t3, $v0, $zero
    ctx->r11 = ctx->r2 | 0;
    // 0x80025248: sw          $zero, 0x4($t2)
    MEM_W(0X4, ctx->r10) = 0;
    // 0x8002524C: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x80025250: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80025254: lui         $t8, 0x77F
    ctx->r24 = S32(0X77F << 16);
    // 0x80025258: ori         $t8, $t8, 0xF080
    ctx->r24 = ctx->r24 | 0XF080;
    // 0x8002525C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80025260: lui         $t7, 0xF300
    ctx->r15 = S32(0XF300 << 16);
    // 0x80025264: sw          $t7, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r15;
    // 0x80025268: sw          $t8, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r24;
    // 0x8002526C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80025270: lui         $t2, 0xE700
    ctx->r10 = S32(0XE700 << 16);
    // 0x80025274: lui         $t6, 0xF510
    ctx->r14 = S32(0XF510 << 16);
    // 0x80025278: ori         $t6, $t6, 0x2000
    ctx->r14 = ctx->r14 | 0X2000;
    // 0x8002527C: sw          $t2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r10;
    // 0x80025280: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x80025284: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x80025288: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x8002528C: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80025290: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80025294: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x80025298: andi        $t9, $v1, 0x10
    ctx->r25 = ctx->r3 & 0X10;
    // 0x8002529C: sltu        $t7, $zero, $t9
    ctx->r15 = 0 < ctx->r25 ? 1 : 0;
    // 0x800252A0: andi        $t8, $t7, 0x3
    ctx->r24 = ctx->r15 & 0X3;
    // 0x800252A4: sll         $t6, $t8, 18
    ctx->r14 = S32(ctx->r24 << 18);
    // 0x800252A8: andi        $t7, $v1, 0x4
    ctx->r15 = ctx->r3 & 0X4;
    // 0x800252AC: sltu        $t8, $zero, $t7
    ctx->r24 = 0 < ctx->r15 ? 1 : 0;
    // 0x800252B0: or          $t9, $t6, $a3
    ctx->r25 = ctx->r14 | ctx->r7;
    // 0x800252B4: andi        $t6, $t8, 0x3
    ctx->r14 = ctx->r24 & 0X3;
    // 0x800252B8: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x800252BC: or          $t8, $t9, $t7
    ctx->r24 = ctx->r25 | ctx->r15;
    // 0x800252C0: ori         $t6, $t8, 0x60
    ctx->r14 = ctx->r24 | 0X60;
    // 0x800252C4: sw          $t6, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r14;
    // 0x800252C8: lui         $t7, 0xF
    ctx->r15 = S32(0XF << 16);
    // 0x800252CC: ori         $t7, $t7, 0xC07C
    ctx->r15 = ctx->r15 | 0XC07C;
    // 0x800252D0: lui         $t9, 0xF200
    ctx->r25 = S32(0XF200 << 16);
    // 0x800252D4: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x800252D8: sw          $t7, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r15;
    // 0x800252DC: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
L_800252E0:
    // 0x800252E0: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x800252E4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800252E8: lui         $t6, 0xB700
    ctx->r14 = S32(0XB700 << 16);
    // 0x800252EC: andi        $t8, $v1, 0x1
    ctx->r24 = ctx->r3 & 0X1;
    // 0x800252F0: beq         $t8, $zero, L_80025308
    if (ctx->r24 == 0) {
        // 0x800252F4: addiu       $t9, $zero, 0x200
        ctx->r25 = ADD32(0, 0X200);
            goto L_80025308;
    }
    // 0x800252F4: addiu       $t9, $zero, 0x200
    ctx->r25 = ADD32(0, 0X200);
    // 0x800252F8: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x800252FC: sw          $t9, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r25;
    // 0x80025300: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80025304: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
L_80025308:
    // 0x80025308: andi        $t7, $v1, 0x40
    ctx->r15 = ctx->r3 & 0X40;
    // 0x8002530C: beq         $t7, $zero, L_80025354
    if (ctx->r15 == 0) {
        // 0x80025310: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80025354;
    }
    // 0x80025310: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80025314: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80025318: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8002531C: lui         $t8, 0xB900
    ctx->r24 = S32(0XB900 << 16);
    // 0x80025320: ori         $t8, $t8, 0x2
    ctx->r24 = ctx->r24 | 0X2;
    // 0x80025324: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80025328: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8002532C: lui         $t9, 0xB900
    ctx->r25 = S32(0XB900 << 16);
    // 0x80025330: lui         $t7, 0x50
    ctx->r15 = S32(0X50 << 16);
    // 0x80025334: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x80025338: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8002533C: ori         $t7, $t7, 0x45D8
    ctx->r15 = ctx->r15 | 0X45D8;
    // 0x80025340: ori         $t9, $t9, 0x31D
    ctx->r25 = ctx->r25 | 0X31D;
    // 0x80025344: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x80025348: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x8002534C: b           L_80025370
    // 0x80025350: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
        goto L_80025370;
    // 0x80025350: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
L_80025354:
    // 0x80025354: lui         $t8, 0xB900
    ctx->r24 = S32(0XB900 << 16);
    // 0x80025358: lui         $t6, 0x55
    ctx->r14 = S32(0X55 << 16);
    // 0x8002535C: ori         $t6, $t6, 0x2478
    ctx->r14 = ctx->r14 | 0X2478;
    // 0x80025360: ori         $t8, $t8, 0x31D
    ctx->r24 = ctx->r24 | 0X31D;
    // 0x80025364: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80025368: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x8002536C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
L_80025370:
    // 0x80025370: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80025374: lui         $t9, 0xFC12
    ctx->r25 = S32(0XFC12 << 16);
    // 0x80025378: ori         $t9, $t9, 0x7E24
    ctx->r25 = ctx->r25 | 0X7E24;
    // 0x8002537C: addiu       $t7, $zero, -0x805
    ctx->r15 = ADD32(0, -0X805);
    // 0x80025380: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x80025384: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80025388: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x8002538C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80025390: jr          $ra
    // 0x80025394: sw          $v0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80025394: sw          $v0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r2;
;}
RECOMP_FUNC void func_80036158_36D58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80036158: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8003615C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80036160: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80036164: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80036168: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8003616C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80036170: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80036174: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x80036178: lw          $s1, 0x18($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X18);
    // 0x8003617C: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x80036180: andi        $s3, $a2, 0xFF
    ctx->r19 = ctx->r6 & 0XFF;
    // 0x80036184: bne         $s1, $zero, L_80036194
    if (ctx->r17 != 0) {
        // 0x80036188: or          $s4, $a0, $zero
        ctx->r20 = ctx->r4 | 0;
            goto L_80036194;
    }
    // 0x80036188: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x8003618C: b           L_80036240
    // 0x80036190: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80036240;
    // 0x80036190: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80036194:
    // 0x80036194: beql        $s1, $s2, L_800361D8
    if (ctx->r17 == ctx->r18) {
        // 0x80036198: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_800361D8;
    }
    goto skip_0;
    // 0x80036198: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    skip_0:
    // 0x8003619C: beq         $s1, $zero, L_800361C4
    if (ctx->r17 == 0) {
        // 0x800361A0: nop
    
            goto L_800361C4;
    }
    // 0x800361A0: nop

    // 0x800361A4: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x800361A8: beq         $s2, $v0, L_800361C4
    if (ctx->r18 == ctx->r2) {
        // 0x800361AC: nop
    
            goto L_800361C4;
    }
    // 0x800361AC: nop

L_800361B0:
    // 0x800361B0: beq         $v0, $zero, L_800361C4
    if (ctx->r2 == 0) {
        // 0x800361B4: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_800361C4;
    }
    // 0x800361B4: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x800361B8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x800361BC: bne         $s2, $v0, L_800361B0
    if (ctx->r18 != ctx->r2) {
        // 0x800361C0: nop
    
            goto L_800361B0;
    }
    // 0x800361C0: nop

L_800361C4:
    // 0x800361C4: bnel        $s1, $zero, L_800361DC
    if (ctx->r17 != 0) {
        // 0x800361C8: or          $v0, $s3, $zero
        ctx->r2 = ctx->r19 | 0;
            goto L_800361DC;
    }
    goto skip_1;
    // 0x800361C8: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
    skip_1:
    // 0x800361CC: b           L_80036240
    // 0x800361D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80036240;
    // 0x800361D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800361D4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_800361D8:
    // 0x800361D8: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
L_800361DC:
    // 0x800361DC: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x800361E0: andi        $t6, $s3, 0xFF
    ctx->r14 = ctx->r19 & 0XFF;
    // 0x800361E4: beq         $v0, $zero, L_8003623C
    if (ctx->r2 == 0) {
        // 0x800361E8: or          $s3, $t6, $zero
        ctx->r19 = ctx->r14 | 0;
            goto L_8003623C;
    }
    // 0x800361E8: or          $s3, $t6, $zero
    ctx->r19 = ctx->r14 | 0;
L_800361EC:
    // 0x800361EC: jal         0x80035FDC
    // 0x800361F0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80035FDC_36BDC(rdram, ctx);
        goto after_0;
    // 0x800361F0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_0:
    // 0x800361F4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800361F8: jal         0x80036308
    // 0x800361FC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80036308_36F08(rdram, ctx);
        goto after_1;
    // 0x800361FC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_1:
    // 0x80036200: beq         $s1, $zero, L_80036210
    if (ctx->r17 == 0) {
        // 0x80036204: or          $s2, $s0, $zero
        ctx->r18 = ctx->r16 | 0;
            goto L_80036210;
    }
    // 0x80036204: or          $s2, $s0, $zero
    ctx->r18 = ctx->r16 | 0;
    // 0x80036208: b           L_80036214
    // 0x8003620C: sw          $s0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r16;
        goto L_80036214;
    // 0x8003620C: sw          $s0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r16;
L_80036210:
    // 0x80036210: sw          $s0, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r16;
L_80036214:
    // 0x80036214: bne         $s0, $zero, L_8003622C
    if (ctx->r16 != 0) {
        // 0x80036218: or          $v0, $s3, $zero
        ctx->r2 = ctx->r19 | 0;
            goto L_8003622C;
    }
    // 0x80036218: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
    // 0x8003621C: beq         $s3, $zero, L_8003622C
    if (ctx->r19 == 0) {
        // 0x80036220: sw          $s1, 0x1C($s4)
        MEM_W(0X1C, ctx->r20) = ctx->r17;
            goto L_8003622C;
    }
    // 0x80036220: sw          $s1, 0x1C($s4)
    MEM_W(0X1C, ctx->r20) = ctx->r17;
    // 0x80036224: b           L_80036240
    // 0x80036228: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80036240;
    // 0x80036228: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8003622C:
    // 0x8003622C: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x80036230: andi        $t7, $s3, 0xFF
    ctx->r15 = ctx->r19 & 0XFF;
    // 0x80036234: bne         $v0, $zero, L_800361EC
    if (ctx->r2 != 0) {
        // 0x80036238: or          $s3, $t7, $zero
        ctx->r19 = ctx->r15 | 0;
            goto L_800361EC;
    }
    // 0x80036238: or          $s3, $t7, $zero
    ctx->r19 = ctx->r15 | 0;
L_8003623C:
    // 0x8003623C: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
L_80036240:
    // 0x80036240: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80036244: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80036248: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8003624C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80036250: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80036254: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80036258: jr          $ra
    // 0x8003625C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8003625C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8003B248_3BE48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003B248: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B24C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003B250: addiu       $v1, $v1, 0x1728
    ctx->r3 = ADD32(ctx->r3, 0X1728);
    // 0x8003B254: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B258: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003B25C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8003B260: lhu         $t6, 0x54($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X54);
    // 0x8003B264: beq         $t6, $zero, L_8003B29C
    if (ctx->r14 == 0) {
        // 0x8003B268: nop
    
            goto L_8003B29C;
    }
    // 0x8003B268: nop

    // 0x8003B26C: sb          $t7, 0x49($v0)
    MEM_B(0X49, ctx->r2) = ctx->r15;
    // 0x8003B270: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003B274: lhu         $t8, 0x4A($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X4A);
    // 0x8003B278: lhu         $t9, 0x54($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X54);
    // 0x8003B27C: subu        $t0, $t8, $t9
    ctx->r8 = SUB32(ctx->r24, ctx->r25);
    // 0x8003B280: sh          $t0, 0x4A($v0)
    MEM_H(0X4A, ctx->r2) = ctx->r8;
    // 0x8003B284: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003B288: lhu         $t1, 0x50($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X50);
    // 0x8003B28C: jal         0x8003AFB0
    // 0x8003B290: sh          $t1, 0x4C($v0)
    MEM_H(0X4C, ctx->r2) = ctx->r9;
    func_8003AFB0_3BBB0(rdram, ctx);
        goto after_0;
    // 0x8003B290: sh          $t1, 0x4C($v0)
    MEM_H(0X4C, ctx->r2) = ctx->r9;
    after_0:
    // 0x8003B294: b           L_8003B2A8
    // 0x8003B298: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8003B2A8;
    // 0x8003B298: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003B29C:
    // 0x8003B29C: jal         0x8003B2B4
    // 0x8003B2A0: nop

    func_8003B2B4_3BEB4(rdram, ctx);
        goto after_1;
    // 0x8003B2A0: nop

    after_1:
    // 0x8003B2A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003B2A8:
    // 0x8003B2A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003B2AC: jr          $ra
    // 0x8003B2B0: nop

    TRACE_RETURN()
    return;
    // 0x8003B2B0: nop

;}
RECOMP_FUNC void func_80010180_10D80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80010180: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80010184: jr          $ra
    // 0x80010188: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x80010188: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_80003DC0_49C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80003DC0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80003DC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80003DC8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80003DCC: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x80003DD0: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80003DD4: jal         0x80003D88
    // 0x80003DD8: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    func_80003D88_4988(rdram, ctx);
        goto after_0;
    // 0x80003DD8: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x80003DDC: lwc1        $f12, 0x18($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80003DE0: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80003DE4: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x80003DE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80003DEC: c.eq.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl == ctx->f14.fl;
    // 0x80003DF0: nop

    // 0x80003DF4: bc1fl       L_80003E08
    if (!c1cs) {
        // 0x80003DF8: div.s       $f0, $f2, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = DIV_S(ctx->f2.fl, ctx->f12.fl);
            goto L_80003E08;
    }
    goto skip_0;
    // 0x80003DF8: div.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = DIV_S(ctx->f2.fl, ctx->f12.fl);
    skip_0:
    // 0x80003DFC: b           L_80003E08
    // 0x80003E00: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
        goto L_80003E08;
    // 0x80003E00: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
    // 0x80003E04: div.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = DIV_S(ctx->f2.fl, ctx->f12.fl);
L_80003E08:
    // 0x80003E08: jr          $ra
    // 0x80003E0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80003E0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void alSynNew(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80047C30: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x80047C34: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80047C38: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x80047C3C: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x80047C40: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80047C44: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80047C48: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80047C4C: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80047C50: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80047C54: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80047C58: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80047C5C: lw          $s7, 0x14($a1)
    ctx->r23 = MEM_W(ctx->r5, 0X14);
    // 0x80047C60: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x80047C64: lw          $t6, 0x4($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X4);
    // 0x80047C68: sw          $zero, 0x20($a0)
    MEM_W(0X20, ctx->r4) = 0;
    // 0x80047C6C: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
    // 0x80047C70: sw          $t6, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r14;
    // 0x80047C74: lw          $t7, 0x18($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X18);
    // 0x80047C78: addiu       $t8, $zero, 0xA0
    ctx->r24 = ADD32(0, 0XA0);
    // 0x80047C7C: sw          $t8, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->r24;
    // 0x80047C80: sw          $t7, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->r15;
    // 0x80047C84: lw          $t9, 0x10($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X10);
    // 0x80047C88: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x80047C8C: or          $fp, $a1, $zero
    ctx->r30 = ctx->r5 | 0;
    // 0x80047C90: addiu       $t0, $zero, 0x1C
    ctx->r8 = ADD32(0, 0X1C);
    // 0x80047C94: sw          $t9, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r25;
    // 0x80047C98: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80047C9C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80047CA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80047CA4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80047CA8: jal         0x800476B0
    // 0x80047CAC: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    alHeapDBAlloc(rdram, ctx);
        goto after_0;
    // 0x80047CAC: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    after_0:
    // 0x80047CB0: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    // 0x80047CB4: jal         0x8004E320
    // 0x80047CB8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    alSaveNew(rdram, ctx);
        goto after_1;
    // 0x80047CB8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80047CBC: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x80047CC0: addiu       $t2, $zero, 0x4C
    ctx->r10 = ADD32(0, 0X4C);
    // 0x80047CC4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80047CC8: sw          $t1, 0x38($s6)
    MEM_W(0X38, ctx->r22) = ctx->r9;
    // 0x80047CCC: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80047CD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80047CD4: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    // 0x80047CD8: jal         0x800476B0
    // 0x80047CDC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    alHeapDBAlloc(rdram, ctx);
        goto after_2;
    // 0x80047CDC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x80047CE0: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80047CE4: sw          $v0, 0x34($s6)
    MEM_W(0X34, ctx->r22) = ctx->r2;
    // 0x80047CE8: sw          $t3, 0x40($s6)
    MEM_W(0X40, ctx->r22) = ctx->r11;
    // 0x80047CEC: lw          $a3, 0x4($fp)
    ctx->r7 = MEM_W(ctx->r30, 0X4);
    // 0x80047CF0: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x80047CF4: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80047CF8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80047CFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80047D00: jal         0x800476B0
    // 0x80047D04: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    alHeapDBAlloc(rdram, ctx);
        goto after_3;
    // 0x80047D04: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    after_3:
    // 0x80047D08: lw          $a0, 0x34($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X34);
    // 0x80047D0C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80047D10: jal         0x8004E3B8
    // 0x80047D14: lw          $a2, 0x4($fp)
    ctx->r6 = MEM_W(ctx->r30, 0X4);
    alAuxBusNew(rdram, ctx);
        goto after_4;
    // 0x80047D14: lw          $a2, 0x4($fp)
    ctx->r6 = MEM_W(ctx->r30, 0X4);
    after_4:
    // 0x80047D18: addiu       $t5, $zero, 0x20
    ctx->r13 = ADD32(0, 0X20);
    // 0x80047D1C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80047D20: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80047D24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80047D28: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    // 0x80047D2C: jal         0x800476B0
    // 0x80047D30: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    alHeapDBAlloc(rdram, ctx);
        goto after_5;
    // 0x80047D30: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_5:
    // 0x80047D34: sw          $v0, 0x30($s6)
    MEM_W(0X30, ctx->r22) = ctx->r2;
    // 0x80047D38: lw          $a3, 0x4($fp)
    ctx->r7 = MEM_W(ctx->r30, 0X4);
    // 0x80047D3C: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x80047D40: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80047D44: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80047D48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80047D4C: jal         0x800476B0
    // 0x80047D50: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    alHeapDBAlloc(rdram, ctx);
        goto after_6;
    // 0x80047D50: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    after_6:
    // 0x80047D54: lw          $a0, 0x30($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X30);
    // 0x80047D58: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80047D5C: jal         0x8004E364
    // 0x80047D60: lw          $a2, 0x4($fp)
    ctx->r6 = MEM_W(ctx->r30, 0X4);
    alMainBusNew(rdram, ctx);
        goto after_7;
    // 0x80047D60: lw          $a2, 0x4($fp)
    ctx->r6 = MEM_W(ctx->r30, 0X4);
    after_7:
    // 0x80047D64: lbu         $t7, 0x1C($fp)
    ctx->r15 = MEM_BU(ctx->r30, 0X1C);
    // 0x80047D68: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x80047D6C: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    // 0x80047D70: beq         $t7, $zero, L_80047D8C
    if (ctx->r15 == 0) {
        // 0x80047D74: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_80047D8C;
    }
    // 0x80047D74: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80047D78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80047D7C: jal         0x8004EAC0
    // 0x80047D80: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    alSynAllocFX(rdram, ctx);
        goto after_8;
    // 0x80047D80: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    after_8:
    // 0x80047D84: b           L_80047D9C
    // 0x80047D88: sw          $zero, 0x4($s6)
    MEM_W(0X4, ctx->r22) = 0;
        goto L_80047D9C;
    // 0x80047D88: sw          $zero, 0x4($s6)
    MEM_W(0X4, ctx->r22) = 0;
L_80047D8C:
    // 0x80047D8C: lw          $a0, 0x30($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X30);
    // 0x80047D90: jal         0x8004EB60
    // 0x80047D94: lw          $a2, 0x34($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X34);
    alMainBusParam(rdram, ctx);
        goto after_9;
    // 0x80047D94: lw          $a2, 0x34($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X34);
    after_9:
    // 0x80047D98: sw          $zero, 0x4($s6)
    MEM_W(0X4, ctx->r22) = 0;
L_80047D9C:
    // 0x80047D9C: sw          $zero, 0x8($s6)
    MEM_W(0X8, ctx->r22) = 0;
    // 0x80047DA0: sw          $zero, 0x14($s6)
    MEM_W(0X14, ctx->r22) = 0;
    // 0x80047DA4: sw          $zero, 0x18($s6)
    MEM_W(0X18, ctx->r22) = 0;
    // 0x80047DA8: sw          $zero, 0xC($s6)
    MEM_W(0XC, ctx->r22) = 0;
    // 0x80047DAC: sw          $zero, 0x10($s6)
    MEM_W(0X10, ctx->r22) = 0;
    // 0x80047DB0: lw          $a3, 0x4($fp)
    ctx->r7 = MEM_W(ctx->r30, 0X4);
    // 0x80047DB4: addiu       $t8, $zero, 0xDC
    ctx->r24 = ADD32(0, 0XDC);
    // 0x80047DB8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80047DBC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80047DC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80047DC4: jal         0x800476B0
    // 0x80047DC8: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    alHeapDBAlloc(rdram, ctx);
        goto after_10;
    // 0x80047DC8: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    after_10:
    // 0x80047DCC: lw          $t9, 0x4($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X4);
    // 0x80047DD0: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x80047DD4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80047DD8: blez        $t9, L_80047E98
    if (SIGNED(ctx->r25) <= 0) {
        // 0x80047DDC: addiu       $a1, $s6, 0x4
        ctx->r5 = ADD32(ctx->r22, 0X4);
            goto L_80047E98;
    }
    // 0x80047DDC: addiu       $a1, $s6, 0x4
    ctx->r5 = ADD32(ctx->r22, 0X4);
    // 0x80047DE0: addiu       $s1, $v0, 0x8C
    ctx->r17 = ADD32(ctx->r2, 0X8C);
    // 0x80047DE4: addiu       $s2, $v0, 0x58
    ctx->r18 = ADD32(ctx->r2, 0X58);
    // 0x80047DE8: addiu       $s3, $v0, 0x10
    ctx->r19 = ADD32(ctx->r2, 0X10);
    // 0x80047DEC: sw          $a1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r5;
L_80047DF0:
    // 0x80047DF0: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x80047DF4: or          $s5, $s0, $zero
    ctx->r21 = ctx->r16 | 0;
    // 0x80047DF8: jal         0x80047620
    // 0x80047DFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    alLink(rdram, ctx);
        goto after_11;
    // 0x80047DFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x80047E00: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x80047E04: lw          $a1, 0x24($s6)
    ctx->r5 = MEM_W(ctx->r22, 0X24);
    // 0x80047E08: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80047E0C: jal         0x8004E494
    // 0x80047E10: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    alLoadNew(rdram, ctx);
        goto after_12;
    // 0x80047E10: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    after_12:
    // 0x80047E14: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80047E18: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80047E1C: jal         0x8004ECB0
    // 0x80047E20: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    alLoadParam(rdram, ctx);
        goto after_13;
    // 0x80047E20: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_13:
    // 0x80047E24: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80047E28: jal         0x8004E40C
    // 0x80047E2C: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    alResampleNew(rdram, ctx);
        goto after_14;
    // 0x80047E2C: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_14:
    // 0x80047E30: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80047E34: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80047E38: jal         0x8004F800
    // 0x80047E3C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    alResampleParam(rdram, ctx);
        goto after_15;
    // 0x80047E3C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_15:
    // 0x80047E40: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80047E44: jal         0x8004E53C
    // 0x80047E48: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    alEnvmixerNew(rdram, ctx);
        goto after_16;
    // 0x80047E48: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_16:
    // 0x80047E4C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80047E50: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80047E54: jal         0x8004FC14
    // 0x80047E58: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    alEnvmixerParam(rdram, ctx);
        goto after_17;
    // 0x80047E58: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_17:
    // 0x80047E5C: lw          $a0, 0x34($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X34);
    // 0x80047E60: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80047E64: jal         0x80050760
    // 0x80047E68: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    alAuxBusParam(rdram, ctx);
        goto after_18;
    // 0x80047E68: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_18:
    // 0x80047E6C: addiu       $t0, $s5, 0x8C
    ctx->r8 = ADD32(ctx->r21, 0X8C);
    // 0x80047E70: sw          $t0, 0xC($s5)
    MEM_W(0XC, ctx->r21) = ctx->r8;
    // 0x80047E74: lw          $t1, 0x4($fp)
    ctx->r9 = MEM_W(ctx->r30, 0X4);
    // 0x80047E78: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x80047E7C: addiu       $s0, $s0, 0xDC
    ctx->r16 = ADD32(ctx->r16, 0XDC);
    // 0x80047E80: slt         $at, $s4, $t1
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80047E84: addiu       $s1, $s1, 0xDC
    ctx->r17 = ADD32(ctx->r17, 0XDC);
    // 0x80047E88: addiu       $s2, $s2, 0xDC
    ctx->r18 = ADD32(ctx->r18, 0XDC);
    // 0x80047E8C: bne         $at, $zero, L_80047DF0
    if (ctx->r1 != 0) {
        // 0x80047E90: addiu       $s3, $s3, 0xDC
        ctx->r19 = ADD32(ctx->r19, 0XDC);
            goto L_80047DF0;
    }
    // 0x80047E90: addiu       $s3, $s3, 0xDC
    ctx->r19 = ADD32(ctx->r19, 0XDC);
    // 0x80047E94: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
L_80047E98:
    // 0x80047E98: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x80047E9C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80047EA0: jal         0x80050870
    // 0x80047EA4: lw          $a2, 0x30($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X30);
    alSaveParam(rdram, ctx);
        goto after_19;
    // 0x80047EA4: lw          $a2, 0x30($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X30);
    after_19:
    // 0x80047EA8: lw          $a3, 0x8($fp)
    ctx->r7 = MEM_W(ctx->r30, 0X8);
    // 0x80047EAC: addiu       $t2, $zero, 0x1C
    ctx->r10 = ADD32(0, 0X1C);
    // 0x80047EB0: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80047EB4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80047EB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80047EBC: jal         0x800476B0
    // 0x80047EC0: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    alHeapDBAlloc(rdram, ctx);
        goto after_20;
    // 0x80047EC0: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    after_20:
    // 0x80047EC4: sw          $zero, 0x2C($s6)
    MEM_W(0X2C, ctx->r22) = 0;
    // 0x80047EC8: lw          $t3, 0x8($fp)
    ctx->r11 = MEM_W(ctx->r30, 0X8);
    // 0x80047ECC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80047ED0: blezl       $t3, L_80047F00
    if (SIGNED(ctx->r11) <= 0) {
        // 0x80047ED4: sw          $s7, 0x28($s6)
        MEM_W(0X28, ctx->r22) = ctx->r23;
            goto L_80047F00;
    }
    goto skip_0;
    // 0x80047ED4: sw          $s7, 0x28($s6)
    MEM_W(0X28, ctx->r22) = ctx->r23;
    skip_0:
    // 0x80047ED8: lw          $t4, 0x2C($s6)
    ctx->r12 = MEM_W(ctx->r22, 0X2C);
L_80047EDC:
    // 0x80047EDC: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x80047EE0: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x80047EE4: sw          $v1, 0x2C($s6)
    MEM_W(0X2C, ctx->r22) = ctx->r3;
    // 0x80047EE8: lw          $t5, 0x8($fp)
    ctx->r13 = MEM_W(ctx->r30, 0X8);
    // 0x80047EEC: addiu       $v1, $v1, 0x1C
    ctx->r3 = ADD32(ctx->r3, 0X1C);
    // 0x80047EF0: slt         $at, $s4, $t5
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x80047EF4: bnel        $at, $zero, L_80047EDC
    if (ctx->r1 != 0) {
        // 0x80047EF8: lw          $t4, 0x2C($s6)
        ctx->r12 = MEM_W(ctx->r22, 0X2C);
            goto L_80047EDC;
    }
    goto skip_1;
    // 0x80047EF8: lw          $t4, 0x2C($s6)
    ctx->r12 = MEM_W(ctx->r22, 0X2C);
    skip_1:
    // 0x80047EFC: sw          $s7, 0x28($s6)
    MEM_W(0X28, ctx->r22) = ctx->r23;
L_80047F00:
    // 0x80047F00: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80047F04: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x80047F08: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x80047F0C: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80047F10: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80047F14: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80047F18: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80047F1C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80047F20: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80047F24: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80047F28: jr          $ra
    // 0x80047F2C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    TRACE_RETURN()
    return;
    // 0x80047F2C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_800353A4_35FA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800353A4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800353A8: lw          $t6, -0x254C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X254C);
    // 0x800353AC: jr          $ra
    // 0x800353B0: sw          $a0, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->r4;
    TRACE_RETURN()
    return;
    // 0x800353B0: sw          $a0, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->r4;
;}
RECOMP_FUNC void func_8001DE74_1EA74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001DE74: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8001DE78: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x8001DE7C: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x8001DE80: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8001DE84: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8001DE88: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8001DE8C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8001DE90: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x8001DE94: jal         0x800040A8
    // 0x8001DE98: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    func_800040A8_4CA8(rdram, ctx);
        goto after_0;
    // 0x8001DE98: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    after_0:
    // 0x8001DE9C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8001DEA0: sh          $v0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r2;
    // 0x8001DEA4: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001DEA8: c.lt.s      $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f20.fl < ctx->f4.fl;
    // 0x8001DEAC: lwc1        $f2, 0x44($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8001DEB0: bc1fl       L_8001DEC4
    if (!c1cs) {
        // 0x8001DEB4: mov.s       $f0, $f20
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
            goto L_8001DEC4;
    }
    goto skip_0;
    // 0x8001DEB4: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
    skip_0:
    // 0x8001DEB8: b           L_8001DEC4
    // 0x8001DEBC: neg.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = -ctx->f20.fl;
        goto L_8001DEC4;
    // 0x8001DEBC: neg.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = -ctx->f20.fl;
    // 0x8001DEC0: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
L_8001DEC4:
    // 0x8001DEC4: ldc1        $f8, -0x46B8($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X46B8);
    // 0x8001DEC8: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x8001DECC: lwc1        $f0, 0x3C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8001DED0: c.lt.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d < ctx->f8.d;
    // 0x8001DED4: nop

    // 0x8001DED8: bc1f        L_8001DF24
    if (!c1cs) {
        // 0x8001DEDC: nop
    
            goto L_8001DF24;
    }
    // 0x8001DEDC: nop

    // 0x8001DEE0: lwc1        $f0, 0x3C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8001DEE4: lwc1        $f2, 0x44($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8001DEE8: lwc1        $f16, 0x50($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8001DEEC: lwc1        $f18, 0x40($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8001DEF0: mul.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x8001DEF4: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    // 0x8001DEF8: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8001DEFC: mul.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8001DF00: neg.s       $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = -ctx->f0.fl;
    // 0x8001DF04: mul.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x8001DF08: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8001DF0C: mul.s       $f14, $f10, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x8001DF10: sub.s       $f12, $f4, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x8001DF14: jal         0x800040A8
    // 0x8001DF18: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    func_800040A8_4CA8(rdram, ctx);
        goto after_1;
    // 0x8001DF18: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    after_1:
    // 0x8001DF1C: b           L_8001DF80
    // 0x8001DF20: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
        goto L_8001DF80;
    // 0x8001DF20: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_8001DF24:
    // 0x8001DF24: mul.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x8001DF28: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8001DF2C: lwc1        $f16, 0x50($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8001DF30: lwc1        $f18, 0x40($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8001DF34: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x8001DF38: nop

    // 0x8001DF3C: mul.s       $f6, $f18, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x8001DF40: add.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x8001DF44: mul.s       $f10, $f18, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x8001DF48: div.s       $f12, $f4, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = DIV_S(ctx->f4.fl, ctx->f20.fl);
    // 0x8001DF4C: mul.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x8001DF50: nop

    // 0x8001DF54: mul.s       $f4, $f0, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x8001DF58: sub.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x8001DF5C: jal         0x800040A8
    // 0x8001DF60: div.s       $f14, $f10, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f14.fl = DIV_S(ctx->f10.fl, ctx->f20.fl);
    func_800040A8_4CA8(rdram, ctx);
        goto after_2;
    // 0x8001DF60: div.s       $f14, $f10, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f14.fl = DIV_S(ctx->f10.fl, ctx->f20.fl);
    after_2:
    // 0x8001DF64: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    // 0x8001DF68: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8001DF6C: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8001DF70: div.s       $f14, $f6, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f14.fl = DIV_S(ctx->f6.fl, ctx->f20.fl);
    // 0x8001DF74: jal         0x800040A8
    // 0x8001DF78: div.s       $f12, $f8, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = DIV_S(ctx->f8.fl, ctx->f20.fl);
    func_800040A8_4CA8(rdram, ctx);
        goto after_3;
    // 0x8001DF78: div.s       $f12, $f8, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = DIV_S(ctx->f8.fl, ctx->f20.fl);
    after_3:
    // 0x8001DF7C: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_8001DF80:
    // 0x8001DF80: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8001DF84: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x8001DF88: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8001DF8C: jr          $ra
    // 0x8001DF90: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8001DF90: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800209B4_215B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800209B4: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x800209B8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800209BC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800209C0: lui         $t6, 0x8007
    ctx->r14 = S32(0X8007 << 16);
    // 0x800209C4: addiu       $s0, $sp, 0x48
    ctx->r16 = ADD32(ctx->r29, 0X48);
    // 0x800209C8: lui         $s4, 0x8007
    ctx->r20 = S32(0X8007 << 16);
    // 0x800209CC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800209D0: addiu       $t6, $t6, -0x300C
    ctx->r14 = ADD32(ctx->r14, -0X300C);
    // 0x800209D4: addiu       $s4, $s4, -0x3044
    ctx->r20 = ADD32(ctx->r20, -0X3044);
    // 0x800209D8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800209DC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800209E0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800209E4: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x800209E8: addiu       $t9, $t6, 0x3C
    ctx->r25 = ADD32(ctx->r14, 0X3C);
    // 0x800209EC: or          $t2, $s0, $zero
    ctx->r10 = ctx->r16 | 0;
L_800209F0:
    // 0x800209F0: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x800209F4: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x800209F8: addiu       $t2, $t2, 0xC
    ctx->r10 = ADD32(ctx->r10, 0XC);
    // 0x800209FC: sw          $at, -0xC($t2)
    MEM_W(-0XC, ctx->r10) = ctx->r1;
    // 0x80020A00: lw          $at, -0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X8);
    // 0x80020A04: sw          $at, -0x8($t2)
    MEM_W(-0X8, ctx->r10) = ctx->r1;
    // 0x80020A08: lw          $at, -0x4($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X4);
    // 0x80020A0C: bne         $t6, $t9, L_800209F0
    if (ctx->r14 != ctx->r25) {
        // 0x80020A10: sw          $at, -0x4($t2)
        MEM_W(-0X4, ctx->r10) = ctx->r1;
            goto L_800209F0;
    }
    // 0x80020A10: sw          $at, -0x4($t2)
    MEM_W(-0X4, ctx->r10) = ctx->r1;
    // 0x80020A14: lw          $a3, 0x0($s4)
    ctx->r7 = MEM_W(ctx->r20, 0X0);
    // 0x80020A18: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x80020A1C: addiu       $a1, $a1, -0x4484
    ctx->r5 = ADD32(ctx->r5, -0X4484);
    // 0x80020A20: sll         $t3, $a3, 4
    ctx->r11 = S32(ctx->r7 << 4);
    // 0x80020A24: subu        $t3, $t3, $a3
    ctx->r11 = SUB32(ctx->r11, ctx->r7);
    // 0x80020A28: addiu       $a3, $t3, 0x18
    ctx->r7 = ADD32(ctx->r11, 0X18);
    // 0x80020A2C: sll         $t4, $a3, 16
    ctx->r12 = S32(ctx->r7 << 16);
    // 0x80020A30: sra         $a3, $t4, 16
    ctx->r7 = S32(SIGNED(ctx->r12) >> 16);
    // 0x80020A34: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80020A38: jal         0x800042AC
    // 0x80020A3C: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    func_800042AC_4EAC(rdram, ctx);
        goto after_0;
    // 0x80020A3C: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    after_0:
    // 0x80020A40: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80020A44: addiu       $t0, $t0, -0x3A38
    ctx->r8 = ADD32(ctx->r8, -0X3A38);
    // 0x80020A48: lw          $a1, 0x0($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X0);
    // 0x80020A4C: lui         $t1, 0x3
    ctx->r9 = S32(0X3 << 16);
    // 0x80020A50: ori         $t1, $t1, 0x8000
    ctx->r9 = ctx->r9 | 0X8000;
    // 0x80020A54: addu        $a0, $a1, $t1
    ctx->r4 = ADD32(ctx->r5, ctx->r9);
    // 0x80020A58: lhu         $t8, 0x3094($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X3094);
    // 0x80020A5C: lhu         $t7, 0x307C($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X307C);
    // 0x80020A60: or          $v1, $t8, $t7
    ctx->r3 = ctx->r24 | ctx->r15;
    // 0x80020A64: andi        $t9, $v1, 0x800
    ctx->r25 = ctx->r3 & 0X800;
    // 0x80020A68: beql        $t9, $zero, L_80020AA8
    if (ctx->r25 == 0) {
        // 0x80020A6C: andi        $t7, $v1, 0x400
        ctx->r15 = ctx->r3 & 0X400;
            goto L_80020AA8;
    }
    goto skip_0;
    // 0x80020A6C: andi        $t7, $v1, 0x400
    ctx->r15 = ctx->r3 & 0X400;
    skip_0:
    // 0x80020A70: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x80020A74: addiu       $t6, $zero, 0xD
    ctx->r14 = ADD32(0, 0XD);
    // 0x80020A78: bne         $v0, $zero, L_80020A94
    if (ctx->r2 != 0) {
        // 0x80020A7C: addiu       $t4, $v0, -0x1
        ctx->r12 = ADD32(ctx->r2, -0X1);
            goto L_80020A94;
    }
    // 0x80020A7C: addiu       $t4, $v0, -0x1
    ctx->r12 = ADD32(ctx->r2, -0X1);
    // 0x80020A80: sw          $t6, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r14;
    // 0x80020A84: lhu         $t3, 0x307C($a0)
    ctx->r11 = MEM_HU(ctx->r4, 0X307C);
    // 0x80020A88: lhu         $t2, 0x3094($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0X3094);
    // 0x80020A8C: b           L_80020AA4
    // 0x80020A90: or          $v1, $t2, $t3
    ctx->r3 = ctx->r10 | ctx->r11;
        goto L_80020AA4;
    // 0x80020A90: or          $v1, $t2, $t3
    ctx->r3 = ctx->r10 | ctx->r11;
L_80020A94:
    // 0x80020A94: sw          $t4, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r12;
    // 0x80020A98: lhu         $t8, 0x307C($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X307C);
    // 0x80020A9C: lhu         $t5, 0x3094($a0)
    ctx->r13 = MEM_HU(ctx->r4, 0X3094);
    // 0x80020AA0: or          $v1, $t5, $t8
    ctx->r3 = ctx->r13 | ctx->r24;
L_80020AA4:
    // 0x80020AA4: andi        $t7, $v1, 0x400
    ctx->r15 = ctx->r3 & 0X400;
L_80020AA8:
    // 0x80020AA8: beql        $t7, $zero, L_80020AD8
    if (ctx->r15 == 0) {
        // 0x80020AAC: lw          $t8, 0x48($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X48);
            goto L_80020AD8;
    }
    goto skip_1;
    // 0x80020AAC: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    skip_1:
    // 0x80020AB0: lw          $t9, 0x0($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X0);
    // 0x80020AB4: addiu       $t6, $t9, 0x1
    ctx->r14 = ADD32(ctx->r25, 0X1);
    // 0x80020AB8: sll         $t3, $t6, 2
    ctx->r11 = S32(ctx->r14 << 2);
    // 0x80020ABC: addu        $t4, $s0, $t3
    ctx->r12 = ADD32(ctx->r16, ctx->r11);
    // 0x80020AC0: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x80020AC4: sw          $t6, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r14;
    // 0x80020AC8: bnel        $t5, $zero, L_80020AD8
    if (ctx->r13 != 0) {
        // 0x80020ACC: lw          $t8, 0x48($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X48);
            goto L_80020AD8;
    }
    goto skip_2;
    // 0x80020ACC: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    skip_2:
    // 0x80020AD0: sw          $zero, 0x0($s4)
    MEM_W(0X0, ctx->r20) = 0;
    // 0x80020AD4: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
L_80020AD8:
    // 0x80020AD8: sll         $t7, $s3, 2
    ctx->r15 = S32(ctx->r19 << 2);
    // 0x80020ADC: addiu       $t9, $sp, 0x48
    ctx->r25 = ADD32(ctx->r29, 0X48);
    // 0x80020AE0: beql        $t8, $zero, L_80020B70
    if (ctx->r24 == 0) {
        // 0x80020AE4: lhu         $t8, 0x3094($a0)
        ctx->r24 = MEM_HU(ctx->r4, 0X3094);
            goto L_80020B70;
    }
    goto skip_3;
    // 0x80020AE4: lhu         $t8, 0x3094($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X3094);
    skip_3:
    // 0x80020AE8: sll         $s2, $s3, 4
    ctx->r18 = S32(ctx->r19 << 4);
    // 0x80020AEC: subu        $s2, $s2, $s3
    ctx->r18 = SUB32(ctx->r18, ctx->r19);
    // 0x80020AF0: addu        $s0, $t7, $t9
    ctx->r16 = ADD32(ctx->r15, ctx->r25);
    // 0x80020AF4: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x80020AF8: addiu       $s2, $s2, 0x18
    ctx->r18 = ADD32(ctx->r18, 0X18);
L_80020AFC:
    // 0x80020AFC: lw          $t6, 0x0($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X0);
    // 0x80020B00: addiu       $a0, $s3, 0x2
    ctx->r4 = ADD32(ctx->r19, 0X2);
    // 0x80020B04: sll         $t2, $a0, 16
    ctx->r10 = S32(ctx->r4 << 16);
    // 0x80020B08: bne         $s3, $t6, L_80020B18
    if (ctx->r19 != ctx->r14) {
        // 0x80020B0C: sra         $a0, $t2, 16
        ctx->r4 = S32(SIGNED(ctx->r10) >> 16);
            goto L_80020B18;
    }
    // 0x80020B0C: sra         $a0, $t2, 16
    ctx->r4 = S32(SIGNED(ctx->r10) >> 16);
    // 0x80020B10: b           L_80020B1C
    // 0x80020B14: addiu       $v0, $zero, 0x88
    ctx->r2 = ADD32(0, 0X88);
        goto L_80020B1C;
    // 0x80020B14: addiu       $v0, $zero, 0x88
    ctx->r2 = ADD32(0, 0X88);
L_80020B18:
    // 0x80020B18: addiu       $v0, $zero, 0x90
    ctx->r2 = ADD32(0, 0X90);
L_80020B1C:
    // 0x80020B1C: sll         $a2, $v0, 16
    ctx->r6 = S32(ctx->r2 << 16);
    // 0x80020B20: sll         $a3, $s2, 16
    ctx->r7 = S32(ctx->r18 << 16);
    // 0x80020B24: sra         $t5, $a3, 16
    ctx->r13 = S32(SIGNED(ctx->r7) >> 16);
    // 0x80020B28: sra         $t4, $a2, 16
    ctx->r12 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80020B2C: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    // 0x80020B30: or          $a3, $t5, $zero
    ctx->r7 = ctx->r13 | 0;
    // 0x80020B34: jal         0x800042AC
    // 0x80020B38: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800042AC_4EAC(rdram, ctx);
        goto after_1;
    // 0x80020B38: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_1:
    // 0x80020B3C: lw          $s1, 0x4($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X4);
    // 0x80020B40: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80020B44: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80020B48: bne         $s1, $zero, L_80020AFC
    if (ctx->r17 != 0) {
        // 0x80020B4C: addiu       $s2, $s2, 0xF
        ctx->r18 = ADD32(ctx->r18, 0XF);
            goto L_80020AFC;
    }
    // 0x80020B4C: addiu       $s2, $s2, 0xF
    ctx->r18 = ADD32(ctx->r18, 0XF);
    // 0x80020B50: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x80020B54: lw          $a1, -0x3A38($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3A38);
    // 0x80020B58: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80020B5C: ori         $t1, $at, 0x8000
    ctx->r9 = ctx->r1 | 0X8000;
    // 0x80020B60: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80020B64: addiu       $t0, $t0, -0x3A38
    ctx->r8 = ADD32(ctx->r8, -0X3A38);
    // 0x80020B68: addu        $a0, $a1, $t1
    ctx->r4 = ADD32(ctx->r5, ctx->r9);
    // 0x80020B6C: lhu         $t8, 0x3094($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X3094);
L_80020B70:
    // 0x80020B70: lhu         $t7, 0x307C($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X307C);
    // 0x80020B74: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80020B78: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x80020B7C: or          $v1, $t8, $t7
    ctx->r3 = ctx->r24 | ctx->r15;
    // 0x80020B80: andi        $t9, $v1, 0x4000
    ctx->r25 = ctx->r3 & 0X4000;
    // 0x80020B84: beql        $t9, $zero, L_80020BA8
    if (ctx->r25 == 0) {
        // 0x80020B88: andi        $t3, $v1, 0x9000
        ctx->r11 = ctx->r3 & 0X9000;
            goto L_80020BA8;
    }
    goto skip_4;
    // 0x80020B88: andi        $t3, $v1, 0x9000
    ctx->r11 = ctx->r3 & 0X9000;
    skip_4:
    // 0x80020B8C: sb          $zero, -0x522A($at)
    MEM_B(-0X522A, ctx->r1) = 0;
    // 0x80020B90: lw          $a1, 0x0($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X0);
    // 0x80020B94: addu        $a0, $a1, $t1
    ctx->r4 = ADD32(ctx->r5, ctx->r9);
    // 0x80020B98: lhu         $t6, 0x3094($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X3094);
    // 0x80020B9C: lhu         $t2, 0x307C($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0X307C);
    // 0x80020BA0: or          $v1, $t6, $t2
    ctx->r3 = ctx->r14 | ctx->r10;
    // 0x80020BA4: andi        $t3, $v1, 0x9000
    ctx->r11 = ctx->r3 & 0X9000;
L_80020BA8:
    // 0x80020BA8: beq         $t3, $zero, L_80020C58
    if (ctx->r11 == 0) {
        // 0x80020BAC: lui         $at, 0x4
        ctx->r1 = S32(0X4 << 16);
            goto L_80020C58;
    }
    // 0x80020BAC: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80020BB0: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x80020BB4: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x80020BB8: bne         $v0, $zero, L_80020BD4
    if (ctx->r2 != 0) {
        // 0x80020BBC: addiu       $t5, $v0, -0x1
        ctx->r13 = ADD32(ctx->r2, -0X1);
            goto L_80020BD4;
    }
    // 0x80020BBC: addiu       $t5, $v0, -0x1
    ctx->r13 = ADD32(ctx->r2, -0X1);
    // 0x80020BC0: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x80020BC4: jal         0x80021444
    // 0x80020BC8: sw          $t4, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r12;
    func_80021444_22044(rdram, ctx);
        goto after_2;
    // 0x80020BC8: sw          $t4, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r12;
    after_2:
    // 0x80020BCC: b           L_80020C5C
    // 0x80020BD0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_80020C5C;
    // 0x80020BD0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80020BD4:
    // 0x80020BD4: sb          $t5, -0x521C($at)
    MEM_B(-0X521C, ctx->r1) = ctx->r13;
    // 0x80020BD8: lw          $a1, 0x0($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X0);
    // 0x80020BDC: addu        $a0, $a1, $t1
    ctx->r4 = ADD32(ctx->r5, ctx->r9);
    // 0x80020BE0: lbu         $t8, 0x2DE4($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X2DE4);
    // 0x80020BE4: sltiu       $at, $t8, 0xB
    ctx->r1 = ctx->r24 < 0XB ? 1 : 0;
    // 0x80020BE8: beq         $at, $zero, L_80020C50
    if (ctx->r1 == 0) {
        // 0x80020BEC: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_80020C50;
    }
    // 0x80020BEC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80020BF0: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80020BF4: addu        $at, $at, $t8
    gpr jr_addend_80020BFC = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80020BF8: lw          $t8, -0x43B0($at)
    ctx->r24 = ADD32(ctx->r1, -0X43B0);
    // 0x80020BFC: jr          $t8
    // 0x80020C00: nop

    switch (jr_addend_80020BFC >> 2) {
        case 0: goto L_80020C04; break;
        case 1: goto L_80020C04; break;
        case 2: goto L_80020C04; break;
        case 3: goto L_80020C04; break;
        case 4: goto L_80020C04; break;
        case 5: goto L_80020C04; break;
        case 6: goto L_80020C04; break;
        case 7: goto L_80020C04; break;
        case 8: goto L_80020C04; break;
        case 9: goto L_80020C04; break;
        case 10: goto L_80020C04; break;
        default: switch_error(__func__, 0x80020BFC, 0x8007BC50);
    }
    // 0x80020C00: nop

L_80020C04:
    // 0x80020C04: lbu         $t7, 0x2DD6($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X2DD6);
    // 0x80020C08: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80020C0C: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x80020C10: addiu       $t9, $t7, 0x1
    ctx->r25 = ADD32(ctx->r15, 0X1);
    // 0x80020C14: sb          $t9, -0x522A($at)
    MEM_B(-0X522A, ctx->r1) = ctx->r25;
    // 0x80020C18: lw          $a1, 0x0($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X0);
    // 0x80020C1C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80020C20: addu        $t6, $a1, $t1
    ctx->r14 = ADD32(ctx->r5, ctx->r9);
    // 0x80020C24: lbu         $t2, 0x2DD6($t6)
    ctx->r10 = MEM_BU(ctx->r14, 0X2DD6);
    // 0x80020C28: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x80020C2C: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80020C30: sb          $t3, -0x522A($at)
    MEM_B(-0X522A, ctx->r1) = ctx->r11;
    // 0x80020C34: lw          $t4, 0x0($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X0);
    // 0x80020C38: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80020C3C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80020C40: jal         0x80004240
    // 0x80020C44: sw          $zero, -0x4FB8($at)
    MEM_W(-0X4FB8, ctx->r1) = 0;
    func_80004240_4E40(rdram, ctx);
        goto after_3;
    // 0x80020C44: sw          $zero, -0x4FB8($at)
    MEM_W(-0X4FB8, ctx->r1) = 0;
    after_3:
    // 0x80020C48: b           L_80020C5C
    // 0x80020C4C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_80020C5C;
    // 0x80020C4C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80020C50:
    // 0x80020C50: jal         0x80021444
    // 0x80020C54: nop

    func_80021444_22044(rdram, ctx);
        goto after_4;
    // 0x80020C54: nop

    after_4:
L_80020C58:
    // 0x80020C58: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80020C5C:
    // 0x80020C5C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80020C60: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80020C64: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80020C68: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80020C6C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80020C70: jr          $ra
    // 0x80020C74: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    TRACE_RETURN()
    return;
    // 0x80020C74: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_8000C640_D240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000C640: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8000C644: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8000C648: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8000C64C: lw          $v0, 0x7C48($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7C48);
    // 0x8000C650: beq         $v0, $zero, L_8000C678
    if (ctx->r2 == 0) {
        // 0x8000C654: nop
    
            goto L_8000C678;
    }
    // 0x8000C654: nop

    // 0x8000C658: lw          $t8, 0x18($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X18);
    // 0x8000C65C: lw          $t9, 0x1C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X1C);
    // 0x8000C660: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8000C664: and         $t0, $t8, $at
    ctx->r8 = ctx->r24 & ctx->r1;
    // 0x8000C668: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    // 0x8000C66C: and         $t1, $t9, $at
    ctx->r9 = ctx->r25 & ctx->r1;
    // 0x8000C670: sw          $t1, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r9;
    // 0x8000C674: sw          $t0, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r8;
L_8000C678:
    // 0x8000C678: jr          $ra
    // 0x8000C67C: nop

    TRACE_RETURN()
    return;
    // 0x8000C67C: nop

;}
RECOMP_FUNC void func_8003EB34_3F734(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003EB34: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8003EB38: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8003EB3C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8003EB40: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8003EB44: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8003EB48: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8003EB4C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8003EB50: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
L_8003EB54:
    // 0x8003EB54: lh          $a1, 0x0($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X0);
    // 0x8003EB58: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8003EB5C: bltz        $a1, L_8003EB74
    if (SIGNED(ctx->r5) < 0) {
        // 0x8003EB60: nop
    
            goto L_8003EB74;
    }
    // 0x8003EB60: nop

    // 0x8003EB64: jal         0x8000D060
    // 0x8003EB68: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8000D060_DC60(rdram, ctx);
        goto after_0;
    // 0x8003EB68: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x8003EB6C: b           L_8003EB54
    // 0x8003EB70: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
        goto L_8003EB54;
    // 0x8003EB70: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_8003EB74:
    // 0x8003EB74: beql        $s2, $a1, L_8003EB90
    if (ctx->r18 == ctx->r5) {
        // 0x8003EB78: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8003EB90;
    }
    goto skip_0;
    // 0x8003EB78: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x8003EB7C: jal         0x8003DF98
    // 0x8003EB80: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8003DF98_3EB98(rdram, ctx);
        goto after_1;
    // 0x8003EB80: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x8003EB84: b           L_8003EB54
    // 0x8003EB88: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
        goto L_8003EB54;
    // 0x8003EB88: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8003EB8C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8003EB90:
    // 0x8003EB90: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8003EB94: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8003EB98: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8003EB9C: jr          $ra
    // 0x8003EBA0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8003EBA0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80001614_2214(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80001614: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80001618: addiu       $a0, $a0, -0x3A34
    ctx->r4 = ADD32(ctx->r4, -0X3A34);
    // 0x8000161C: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80001620: lui         $t8, 0x8007
    ctx->r24 = S32(0X8007 << 16);
    // 0x80001624: addiu       $t8, $t8, -0x1FD0
    ctx->r24 = ADD32(ctx->r24, -0X1FD0);
    // 0x80001628: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x8000162C: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x80001630: lui         $t7, 0x600
    ctx->r15 = S32(0X600 << 16);
    // 0x80001634: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80001638: jr          $ra
    // 0x8000163C: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    TRACE_RETURN()
    return;
    // 0x8000163C: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
;}
