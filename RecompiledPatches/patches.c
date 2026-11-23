#include "recomp.h"
#include "funcs.h"

extern uint32_t builtin_base_event_index;
#define base_event_index builtin_base_event_index

RECOMP_FUNC void func_80016C44_17844(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808010D0: lbu         $v1, 0x5F($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X5F);
    // 0x808010D4: andi        $at, $v1, 0xF8
    ctx->r1 = ctx->r3 & 0XF8;
    // 0x808010D8: sb          $at, 0x5F($a0)
    MEM_B(0X5F, ctx->r4) = ctx->r1;
    // 0x808010DC: lbu         $at, 0x64($a0)
    ctx->r1 = MEM_BU(ctx->r4, 0X64);
    // 0x808010E0: andi        $at, $at, 0x1
    ctx->r1 = ctx->r1 & 0X1;
    // 0x808010E4: bne         $at, $zero, L_808012C0
    if (ctx->r1 != 0) {
        // 0x808010E8: addiu       $v0, $zero, 0x0
        ctx->r2 = ADD32(0, 0X0);
            goto L_808012C0;
    }
    // 0x808010E8: addiu       $v0, $zero, 0x0
    ctx->r2 = ADD32(0, 0X0);
    // 0x808010EC: lb          $at, 0x65($a0)
    ctx->r1 = MEM_B(ctx->r4, 0X65);
    // 0x808010F0: bltz        $at, L_808012C0
    if (SIGNED(ctx->r1) < 0) {
        // 0x808010F4: nop
    
            goto L_808012C0;
    }
    // 0x808010F4: nop

    // 0x808010F8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x808010FC: sw          $a0, -0x7B60($at)
    MEM_W(-0X7B60, ctx->r1) = ctx->r4;
    // 0x80801100: lhu         $a2, 0x14($a0)
    ctx->r6 = MEM_HU(ctx->r4, 0X14);
    // 0x80801104: ori         $a1, $zero, 0x8000
    ctx->r5 = 0 | 0X8000;
    // 0x80801108: bne         $a2, $a1, L_8080123C
    if (ctx->r6 != ctx->r5) {
        // 0x8080110C: nop
    
            goto L_8080123C;
    }
    // 0x8080110C: nop

    // 0x80801110: lhu         $a2, 0x16($a0)
    ctx->r6 = MEM_HU(ctx->r4, 0X16);
    // 0x80801114: bne         $a2, $a1, L_80801250
    if (ctx->r6 != ctx->r5) {
        // 0x80801118: nop
    
            goto L_80801250;
    }
    // 0x80801118: nop

L_8080111C:
    // 0x8080111C: lhu         $a2, 0x18($a0)
    ctx->r6 = MEM_HU(ctx->r4, 0X18);
    // 0x80801120: beq         $a2, $a1, L_80801130
    if (ctx->r6 == ctx->r5) {
        // 0x80801124: nop
    
            goto L_80801130;
    }
    // 0x80801124: nop

L_80801128:
    // 0x80801128: andi        $at, $a2, 0x3FF
    ctx->r1 = ctx->r6 & 0X3FF;
    // 0x8080112C: sh          $at, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r1;
L_80801130:
    // 0x80801130: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80801134: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x80801138: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8080113C: sw          $fp, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r30;
    // 0x80801140: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x80801144: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x80801148: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x8080114C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80801150: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80801154: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80801158: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8080115C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80801160: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x80801164: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x80801168: lw          $s2, 0x2C($a0)
    ctx->r18 = MEM_W(ctx->r4, 0X2C);
    // 0x8080116C: and         $s1, $s2, $at
    ctx->r17 = ctx->r18 & ctx->r1;
    // 0x80801170: beq         $s1, $zero, L_8080126C
    if (ctx->r17 == 0) {
        // 0x80801174: nop
    
            goto L_8080126C;
    }
    // 0x80801174: nop

    // 0x80801178: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8080117C: lw          $a1, -0x3A34($at)
    ctx->r5 = MEM_W(ctx->r1, -0X3A34);
    // 0x80801180: addiu       $a2, $a1, 0x10
    ctx->r6 = ADD32(ctx->r5, 0X10);
    // 0x80801184: andi        $a3, $s2, 0x1
    ctx->r7 = ctx->r18 & 0X1;
    // 0x80801188: xori        $t0, $a3, 0x1
    ctx->r8 = ctx->r7 ^ 0X1;
    // 0x8080118C: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80801190: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80801194: sb          $a3, -0x7AD4($t2)
    MEM_B(-0X7AD4, ctx->r10) = ctx->r7;
    // 0x80801198: sb          $t0, -0x7AD3($t1)
    MEM_B(-0X7AD3, ctx->r9) = ctx->r8;
    // 0x8080119C: sw          $a2, -0x3A34($at)
    MEM_W(-0X3A34, ctx->r1) = ctx->r6;
    // 0x808011A0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x808011A4: sw          $zero, -0x7ADC($at)
    MEM_W(-0X7ADC, ctx->r1) = 0;
    // 0x808011A8: lui         $a2, 0x8
    ctx->r6 = S32(0X8 << 16);
    // 0x808011AC: ori         $a2, $a2, 0x1
    ctx->r6 = ctx->r6 | 0X1;
    // 0x808011B0: lui         $a3, 0x6400
    ctx->r7 = S32(0X6400 << 16);
    // 0x808011B4: sw          $a2, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r6;
    // 0x808011B8: sw          $a0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r4;
    // 0x808011BC: ori         $a2, $a3, 0xC
    ctx->r6 = ctx->r7 | 0XC;
    // 0x808011C0: sw          $a2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r6;
    // 0x808011C4: sw          $zero, 0xC($a1)
    MEM_W(0XC, ctx->r5) = 0;
    // 0x808011C8: lui         $a1, 0x7000
    ctx->r5 = S32(0X7000 << 16);
    // 0x808011CC: and         $s0, $s2, $a1
    ctx->r16 = ctx->r18 & ctx->r5;
    // 0x808011D0: srl         $a1, $s0, 28
    ctx->r5 = S32(U32(ctx->r16) >> 28);
    // 0x808011D4: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x808011D8: lui         $a2, 0x8080
    ctx->r6 = S32(0X8080 << 16);
    // 0x808011DC: addu        $a1, $a1, $a2
    gpr jr_addend_808011E4 = ctx->r5;
    ctx->r5 = ADD32(ctx->r5, ctx->r6);
    // 0x808011E0: lw          $a1, 0x523C($a1)
    ctx->r5 = ADD32(ctx->r5, 0X523C);
    // 0x808011E4: jr          $a1
    // 0x808011E8: andi        $s3, $v1, 0x1
    ctx->r19 = ctx->r3 & 0X1;
    switch (jr_addend_808011E4 >> 2) {
        case 0: goto L_808011EC; break;
        case 1: goto L_808011EC; break;
        case 2: goto L_80801318; break;
        case 3: goto L_80801428; break;
        case 4: goto L_808012C8; break;
        case 5: goto L_80801474; break;
        case 6: goto L_808014B4; break;
        case 7: goto L_80801468; break;
        default: switch_error(__func__, 0x808011E4, 0x8080523C);
    }
    // 0x808011E8: andi        $s3, $v1, 0x1
    ctx->r19 = ctx->r3 & 0X1;
L_808011EC:
    // 0x808011EC: lui         $at, 0x8089
    ctx->r1 = S32(0X8089 << 16);
    // 0x808011F0: sb          $s3, -0x43DC($at)
    MEM_B(-0X43DC, ctx->r1) = ctx->r19;
    // 0x808011F4: lui         $at, 0x8089
    ctx->r1 = S32(0X8089 << 16);
    // 0x808011F8: sw          $a0, -0x43E0($at)
    MEM_W(-0X43E0, ctx->r1) = ctx->r4;
    // 0x808011FC: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x80801200: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80801204: slt         $at, $s1, $at
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x80801208: bne         $at, $zero, L_80801524
    if (ctx->r1 != 0) {
        // 0x8080120C: nop
    
            goto L_80801524;
    }
    // 0x8080120C: nop

    // 0x80801210: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x80801214: sltu        $at, $at, $s1
    ctx->r1 = ctx->r1 < ctx->r17 ? 1 : 0;
    // 0x80801218: lui         $v1, 0x8017
    ctx->r3 = S32(0X8017 << 16);
    // 0x8080121C: bne         $at, $zero, L_80801504
    if (ctx->r1 != 0) {
        // 0x80801220: lw          $v1, -0x7B60($v1)
        ctx->r3 = MEM_W(ctx->r3, -0X7B60);
            goto L_80801504;
    }
    // 0x80801220: lw          $v1, -0x7B60($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7B60);
    // 0x80801224: lui         $at, 0x80FF
    ctx->r1 = S32(0X80FF << 16);
    // 0x80801228: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x8080122C: and         $at, $s2, $at
    ctx->r1 = ctx->r18 & ctx->r1;
    // 0x80801230: lw          $v1, 0x38($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X38);
    // 0x80801234: j           L_80801524
    // 0x80801238: addu        $s1, $v1, $at
    ctx->r17 = ADD32(ctx->r3, ctx->r1);
        goto L_80801524;
    // 0x80801238: addu        $s1, $v1, $at
    ctx->r17 = ADD32(ctx->r3, ctx->r1);
L_8080123C:
    // 0x8080123C: andi        $at, $a2, 0x3FF
    ctx->r1 = ctx->r6 & 0X3FF;
    // 0x80801240: sh          $at, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r1;
    // 0x80801244: lhu         $a2, 0x16($a0)
    ctx->r6 = MEM_HU(ctx->r4, 0X16);
    // 0x80801248: beq         $a2, $a1, L_8080111C
    if (ctx->r6 == ctx->r5) {
        // 0x8080124C: nop
    
            goto L_8080111C;
    }
    // 0x8080124C: nop

L_80801250:
    // 0x80801250: andi        $at, $a2, 0x3FF
    ctx->r1 = ctx->r6 & 0X3FF;
    // 0x80801254: sh          $at, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r1;
    // 0x80801258: lhu         $a2, 0x18($a0)
    ctx->r6 = MEM_HU(ctx->r4, 0X18);
    // 0x8080125C: beq         $a2, $a1, L_80801130
    if (ctx->r6 == ctx->r5) {
        // 0x80801260: nop
    
            goto L_80801130;
    }
    // 0x80801260: nop

    // 0x80801264: j           L_80801128
    // 0x80801268: nop

        goto L_80801128;
    // 0x80801268: nop

L_8080126C:
    // 0x8080126C: lw          $at, 0x74($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X74);
    // 0x80801270: bne         $at, $zero, L_80801284
    if (ctx->r1 != 0) {
        // 0x80801274: nop
    
            goto L_80801284;
    }
    // 0x80801274: nop

    // 0x80801278: lw          $at, 0x78($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X78);
    // 0x8080127C: beq         $at, $zero, L_80801290
    if (ctx->r1 == 0) {
        // 0x80801280: nop
    
            goto L_80801290;
    }
    // 0x80801280: nop

L_80801284:
    // 0x80801284: jal         0x80000000
    // 0x80801288: nop

    func_800364FC_370FC(rdram, ctx);
        goto after_0;
    // 0x80801288: nop

    after_0:
    // 0x8080128C: addiu       $v0, $zero, 0x0
    ctx->r2 = ADD32(0, 0X0);
L_80801290:
    // 0x80801290: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80801294: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80801298: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8080129C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x808012A0: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x808012A4: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x808012A8: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x808012AC: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x808012B0: lw          $fp, 0x30($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X30);
    // 0x808012B4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x808012B8: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x808012BC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
L_808012C0:
    // 0x808012C0: jr          $ra
    // 0x808012C4: nop

    return;
    // 0x808012C4: nop

L_808012C8:
    // 0x808012C8: bne         $s3, $zero, L_808019A0
    if (ctx->r19 != 0) {
        // 0x808012CC: nop
    
            goto L_808019A0;
    }
    // 0x808012CC: nop

    // 0x808012D0: andi        $at, $v1, 0x4
    ctx->r1 = ctx->r3 & 0X4;
    // 0x808012D4: bne         $at, $zero, L_808015C8
    if (ctx->r1 != 0) {
        // 0x808012D8: nop
    
            goto L_808015C8;
    }
    // 0x808012D8: nop

    // 0x808012DC: andi        $at, $v1, 0x2
    ctx->r1 = ctx->r3 & 0X2;
    // 0x808012E0: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x808012E4: lw          $v0, -0x3A34($v1)
    ctx->r2 = MEM_W(ctx->r3, -0X3A34);
    // 0x808012E8: addiu       $a1, $v0, 0x10
    ctx->r5 = ADD32(ctx->r2, 0X10);
    // 0x808012EC: sw          $a1, -0x3A34($v1)
    MEM_W(-0X3A34, ctx->r3) = ctx->r5;
    // 0x808012F0: sw          $a0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r4;
    // 0x808012F4: lui         $v1, 0x6400
    ctx->r3 = S32(0X6400 << 16);
    // 0x808012F8: ori         $v1, $v1, 0xC
    ctx->r3 = ctx->r3 | 0XC;
    // 0x808012FC: bne         $at, $zero, L_80801990
    if (ctx->r1 != 0) {
        // 0x80801300: sw          $v1, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r3;
            goto L_80801990;
    }
    // 0x80801300: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x80801304: lui         $at, 0x208
    ctx->r1 = S32(0X208 << 16);
    // 0x80801308: ori         $at, $at, 0x8AAD
    ctx->r1 = ctx->r1 | 0X8AAD;
    // 0x8080130C: sw          $at, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r1;
    // 0x80801310: j           L_808019A0
    // 0x80801314: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
        goto L_808019A0;
    // 0x80801314: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
L_80801318:
    // 0x80801318: lui         $at, 0x8080
    ctx->r1 = S32(0X8080 << 16);
    // 0x8080131C: lwc1        $f20, 0x5220($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X5220);
    // 0x80801320: jal         0x8F000020
    // 0x80801324: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    recomp_get_target_aspect_ratio(rdram, ctx);
        goto after_1;
    // 0x80801324: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_1:
    // 0x80801328: c.eq.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl == ctx->f20.fl;
    // 0x8080132C: nop

    // 0x80801330: bc1t        L_808013D4
    if (c1cs) {
        // 0x80801334: nop
    
            goto L_808013D4;
    }
    // 0x80801334: nop

    // 0x80801338: lui         $at, 0x8089
    ctx->r1 = S32(0X8089 << 16);
    // 0x8080133C: addiu       $v0, $at, -0x43D0
    ctx->r2 = ADD32(ctx->r1, -0X43D0);
    // 0x80801340: addiu       $v1, $v0, 0x60
    ctx->r3 = ADD32(ctx->r2, 0X60);
L_80801344:
    // 0x80801344: lbu         $at, 0x0($s1)
    ctx->r1 = MEM_BU(ctx->r17, 0X0);
    // 0x80801348: sb          $at, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r1;
    // 0x8080134C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80801350: bne         $v0, $v1, L_80801344
    if (ctx->r2 != ctx->r3) {
        // 0x80801354: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80801344;
    }
    // 0x80801354: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80801358: lui         $at, 0x8089
    ctx->r1 = S32(0X8089 << 16);
    // 0x8080135C: addiu       $v0, $at, -0x43D0
    ctx->r2 = ADD32(ctx->r1, -0X43D0);
    // 0x80801360: lhu         $at, 0x48($v0)
    ctx->r1 = MEM_HU(ctx->r2, 0X48);
    // 0x80801364: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x80801368: bne         $at, $v1, L_80801374
    if (ctx->r1 != ctx->r3) {
        // 0x8080136C: nop
    
            goto L_80801374;
    }
    // 0x8080136C: nop

    // 0x80801370: sh          $zero, 0x48($v0)
    MEM_H(0X48, ctx->r2) = 0;
L_80801374:
    // 0x80801374: lhu         $at, 0x4A($v0)
    ctx->r1 = MEM_HU(ctx->r2, 0X4A);
    // 0x80801378: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8080137C: bne         $at, $v0, L_80801390
    if (ctx->r1 != ctx->r2) {
        // 0x80801380: nop
    
            goto L_80801390;
    }
    // 0x80801380: nop

    // 0x80801384: lui         $at, 0x8089
    ctx->r1 = S32(0X8089 << 16);
    // 0x80801388: addiu       $at, $at, -0x43D0
    ctx->r1 = ADD32(ctx->r1, -0X43D0);
    // 0x8080138C: sh          $zero, 0x4A($at)
    MEM_H(0X4A, ctx->r1) = 0;
L_80801390:
    // 0x80801390: lui         $v0, 0x8089
    ctx->r2 = S32(0X8089 << 16);
    // 0x80801394: addiu       $s1, $v0, -0x43D0
    ctx->r17 = ADD32(ctx->r2, -0X43D0);
    // 0x80801398: lhu         $at, 0x4C($s1)
    ctx->r1 = MEM_HU(ctx->r17, 0X4C);
    // 0x8080139C: addiu       $v1, $zero, 0x138
    ctx->r3 = ADD32(0, 0X138);
    // 0x808013A0: bne         $at, $v1, L_808013B4
    if (ctx->r1 != ctx->r3) {
        // 0x808013A4: nop
    
            goto L_808013B4;
    }
    // 0x808013A4: nop

    // 0x808013A8: addiu       $at, $v0, -0x43D0
    ctx->r1 = ADD32(ctx->r2, -0X43D0);
    // 0x808013AC: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
    // 0x808013B0: sh          $v0, 0x4C($at)
    MEM_H(0X4C, ctx->r1) = ctx->r2;
L_808013B4:
    // 0x808013B4: lhu         $at, 0x4E($s1)
    ctx->r1 = MEM_HU(ctx->r17, 0X4E);
    // 0x808013B8: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x808013BC: bne         $at, $v0, L_808013D4
    if (ctx->r1 != ctx->r2) {
        // 0x808013C0: nop
    
            goto L_808013D4;
    }
    // 0x808013C0: nop

    // 0x808013C4: lui         $at, 0x8089
    ctx->r1 = S32(0X8089 << 16);
    // 0x808013C8: addiu       $s1, $at, -0x43D0
    ctx->r17 = ADD32(ctx->r1, -0X43D0);
    // 0x808013CC: addiu       $at, $zero, 0xF0
    ctx->r1 = ADD32(0, 0XF0);
    // 0x808013D0: sh          $at, 0x4E($s1)
    MEM_H(0X4E, ctx->r17) = ctx->r1;
L_808013D4:
    // 0x808013D4: lui         $s3, 0x8017
    ctx->r19 = S32(0X8017 << 16);
    // 0x808013D8: lw          $a1, -0x7B60($s3)
    ctx->r5 = MEM_W(ctx->r19, -0X7B60);
    // 0x808013DC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x808013E0: addiu       $s0, $at, -0x7B50
    ctx->r16 = ADD32(ctx->r1, -0X7B50);
    // 0x808013E4: jal         0x80000000
    // 0x808013E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8001E380_1EF80(rdram, ctx);
        goto after_2;
    // 0x808013E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808013EC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808013F0: jal         0x80000000
    // 0x808013F4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80017D8C_1898C(rdram, ctx);
        goto after_3;
    // 0x808013F4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
    // 0x808013F8: bltz        $s1, L_8080161C
    if (SIGNED(ctx->r17) < 0) {
        // 0x808013FC: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_8080161C;
    }
    // 0x808013FC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80801400: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x80801404: sltu        $at, $at, $s1
    ctx->r1 = ctx->r1 < ctx->r17 ? 1 : 0;
    // 0x80801408: bne         $at, $zero, L_808015FC
    if (ctx->r1 != 0) {
        // 0x8080140C: lw          $v0, -0x7B60($s3)
        ctx->r2 = MEM_W(ctx->r19, -0X7B60);
            goto L_808015FC;
    }
    // 0x8080140C: lw          $v0, -0x7B60($s3)
    ctx->r2 = MEM_W(ctx->r19, -0X7B60);
    // 0x80801410: lui         $at, 0x80FF
    ctx->r1 = S32(0X80FF << 16);
    // 0x80801414: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x80801418: and         $at, $s2, $at
    ctx->r1 = ctx->r18 & ctx->r1;
    // 0x8080141C: lw          $v0, 0x38($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X38);
    // 0x80801420: j           L_8080161C
    // 0x80801424: addu        $a0, $v0, $at
    ctx->r4 = ADD32(ctx->r2, ctx->r1);
        goto L_8080161C;
    // 0x80801424: addu        $a0, $v0, $at
    ctx->r4 = ADD32(ctx->r2, ctx->r1);
L_80801428:
    // 0x80801428: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x8080142C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80801430: slt         $at, $s1, $at
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x80801434: bne         $at, $zero, L_80801650
    if (ctx->r1 != 0) {
        // 0x80801438: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80801650;
    }
    // 0x80801438: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8080143C: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x80801440: sltu        $at, $at, $s1
    ctx->r1 = ctx->r1 < ctx->r17 ? 1 : 0;
    // 0x80801444: lui         $v0, 0x8017
    ctx->r2 = S32(0X8017 << 16);
    // 0x80801448: bne         $at, $zero, L_80801630
    if (ctx->r1 != 0) {
        // 0x8080144C: lw          $v0, -0x7B60($v0)
        ctx->r2 = MEM_W(ctx->r2, -0X7B60);
            goto L_80801630;
    }
    // 0x8080144C: lw          $v0, -0x7B60($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7B60);
    // 0x80801450: lui         $at, 0x80FF
    ctx->r1 = S32(0X80FF << 16);
    // 0x80801454: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x80801458: and         $at, $s2, $at
    ctx->r1 = ctx->r18 & ctx->r1;
    // 0x8080145C: lw          $v0, 0x38($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X38);
    // 0x80801460: j           L_80801650
    // 0x80801464: addu        $a0, $v0, $at
    ctx->r4 = ADD32(ctx->r2, ctx->r1);
        goto L_80801650;
    // 0x80801464: addu        $a0, $v0, $at
    ctx->r4 = ADD32(ctx->r2, ctx->r1);
L_80801468:
    // 0x80801468: sw          $zero, -0x7ADC($at)
    MEM_W(-0X7ADC, ctx->r1) = 0;
    // 0x8080146C: j           L_80801290
    // 0x80801470: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80801290;
    // 0x80801470: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80801474:
    // 0x80801474: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x80801478: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8080147C: slt         $at, $s1, $at
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x80801480: bne         $at, $zero, L_80801684
    if (ctx->r1 != 0) {
        // 0x80801484: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80801684;
    }
    // 0x80801484: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80801488: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x8080148C: sltu        $at, $at, $s1
    ctx->r1 = ctx->r1 < ctx->r17 ? 1 : 0;
    // 0x80801490: lui         $v0, 0x8017
    ctx->r2 = S32(0X8017 << 16);
    // 0x80801494: bne         $at, $zero, L_80801664
    if (ctx->r1 != 0) {
        // 0x80801498: lw          $v0, -0x7B60($v0)
        ctx->r2 = MEM_W(ctx->r2, -0X7B60);
            goto L_80801664;
    }
    // 0x80801498: lw          $v0, -0x7B60($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7B60);
    // 0x8080149C: lui         $at, 0x80FF
    ctx->r1 = S32(0X80FF << 16);
    // 0x808014A0: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x808014A4: and         $at, $s2, $at
    ctx->r1 = ctx->r18 & ctx->r1;
    // 0x808014A8: lw          $v0, 0x38($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X38);
    // 0x808014AC: j           L_80801684
    // 0x808014B0: addu        $a0, $v0, $at
    ctx->r4 = ADD32(ctx->r2, ctx->r1);
        goto L_80801684;
    // 0x808014B0: addu        $a0, $v0, $at
    ctx->r4 = ADD32(ctx->r2, ctx->r1);
L_808014B4:
    // 0x808014B4: lui         $at, 0x8089
    ctx->r1 = S32(0X8089 << 16);
    // 0x808014B8: sb          $s3, -0x43D4($at)
    MEM_B(-0X43D4, ctx->r1) = ctx->r19;
    // 0x808014BC: lui         $at, 0x8089
    ctx->r1 = S32(0X8089 << 16);
    // 0x808014C0: sw          $a0, -0x43D8($at)
    MEM_W(-0X43D8, ctx->r1) = ctx->r4;
    // 0x808014C4: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x808014C8: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x808014CC: slt         $at, $s1, $at
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x808014D0: bne         $at, $zero, L_808016B8
    if (ctx->r1 != 0) {
        // 0x808014D4: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_808016B8;
    }
    // 0x808014D4: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x808014D8: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x808014DC: sltu        $at, $at, $s1
    ctx->r1 = ctx->r1 < ctx->r17 ? 1 : 0;
    // 0x808014E0: lui         $v1, 0x8017
    ctx->r3 = S32(0X8017 << 16);
    // 0x808014E4: bne         $at, $zero, L_80801698
    if (ctx->r1 != 0) {
        // 0x808014E8: lw          $v1, -0x7B60($v1)
        ctx->r3 = MEM_W(ctx->r3, -0X7B60);
            goto L_80801698;
    }
    // 0x808014E8: lw          $v1, -0x7B60($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7B60);
    // 0x808014EC: lui         $at, 0x80FF
    ctx->r1 = S32(0X80FF << 16);
    // 0x808014F0: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x808014F4: and         $at, $s2, $at
    ctx->r1 = ctx->r18 & ctx->r1;
    // 0x808014F8: lw          $v1, 0x38($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X38);
    // 0x808014FC: j           L_808016B8
    // 0x80801500: addu        $s0, $v1, $at
    ctx->r16 = ADD32(ctx->r3, ctx->r1);
        goto L_808016B8;
    // 0x80801500: addu        $s0, $v1, $at
    ctx->r16 = ADD32(ctx->r3, ctx->r1);
L_80801504:
    // 0x80801504: lui         $at, 0x80FF
    ctx->r1 = S32(0X80FF << 16);
    // 0x80801508: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x8080150C: and         $at, $s2, $at
    ctx->r1 = ctx->r18 & ctx->r1;
    // 0x80801510: srl         $a0, $s2, 21
    ctx->r4 = S32(U32(ctx->r18) >> 21);
    // 0x80801514: andi        $a0, $a0, 0x78
    ctx->r4 = ctx->r4 & 0X78;
    // 0x80801518: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8080151C: lw          $v1, -0x8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X8);
    // 0x80801520: addu        $s1, $v1, $at
    ctx->r17 = ADD32(ctx->r3, ctx->r1);
L_80801524:
    // 0x80801524: lw          $s3, 0x0($s1)
    ctx->r19 = MEM_W(ctx->r17, 0X0);
    // 0x80801528: beq         $s3, $zero, L_808015AC
    if (ctx->r19 == 0) {
        // 0x8080152C: nop
    
            goto L_808015AC;
    }
    // 0x8080152C: nop

    // 0x80801530: srl         $at, $s3, 31
    ctx->r1 = S32(U32(ctx->r19) >> 31);
    // 0x80801534: lui         $v0, 0x8017
    ctx->r2 = S32(0X8017 << 16);
    // 0x80801538: sw          $at, -0x7AE4($v0)
    MEM_W(-0X7AE4, ctx->r2) = ctx->r1;
    // 0x8080153C: andi        $at, $s3, 0xFF
    ctx->r1 = ctx->r19 & 0XFF;
    // 0x80801540: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80801544: nop

    // 0x80801548: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x8080154C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80801550: swc1        $f0, -0x7AE8($at)
    MEM_W(-0X7AE8, ctx->r1) = ctx->f0.u32l;
    // 0x80801554: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80801558: lw          $a1, -0x7B60($at)
    ctx->r5 = MEM_W(ctx->r1, -0X7B60);
    // 0x8080155C: lwc1        $f0, 0x28($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X28);
    // 0x80801560: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80801564: swc1        $f0, -0x7AF0($at)
    MEM_W(-0X7AF0, ctx->r1) = ctx->f0.u32l;
    // 0x80801568: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x8080156C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80801570: beq         $v0, $zero, L_808015C0
    if (ctx->r2 == 0) {
        // 0x80801574: sw          $v0, -0x7B10($at)
        MEM_W(-0X7B10, ctx->r1) = ctx->r2;
            goto L_808015C0;
    }
    // 0x80801574: sw          $v0, -0x7B10($at)
    MEM_W(-0X7B10, ctx->r1) = ctx->r2;
    // 0x80801578: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8080157C: bltz        $v0, L_80801790
    if (SIGNED(ctx->r2) < 0) {
        // 0x80801580: sw          $v0, -0x7AE0($at)
        MEM_W(-0X7AE0, ctx->r1) = ctx->r2;
            goto L_80801790;
    }
    // 0x80801580: sw          $v0, -0x7AE0($at)
    MEM_W(-0X7AE0, ctx->r1) = ctx->r2;
    // 0x80801584: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x80801588: sltu        $at, $at, $v0
    ctx->r1 = ctx->r1 < ctx->r2 ? 1 : 0;
    // 0x8080158C: bne         $at, $zero, L_80801768
    if (ctx->r1 != 0) {
        // 0x80801590: nop
    
            goto L_80801768;
    }
    // 0x80801590: nop

    // 0x80801594: lui         $at, 0x80FF
    ctx->r1 = S32(0X80FF << 16);
    // 0x80801598: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8080159C: and         $at, $v0, $at
    ctx->r1 = ctx->r2 & ctx->r1;
    // 0x808015A0: lw          $v0, 0x38($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X38);
    // 0x808015A4: j           L_80801788
    // 0x808015A8: addu        $v0, $at, $v0
    ctx->r2 = ADD32(ctx->r1, ctx->r2);
        goto L_80801788;
    // 0x808015A8: addu        $v0, $at, $v0
    ctx->r2 = ADD32(ctx->r1, ctx->r2);
L_808015AC:
    // 0x808015AC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x808015B0: sw          $s1, -0x7B10($at)
    MEM_W(-0X7B10, ctx->r1) = ctx->r17;
    // 0x808015B4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x808015B8: j           L_80801290
    // 0x808015BC: sw          $zero, -0x7ADC($at)
    MEM_W(-0X7ADC, ctx->r1) = 0;
        goto L_80801290;
    // 0x808015BC: sw          $zero, -0x7ADC($at)
    MEM_W(-0X7ADC, ctx->r1) = 0;
L_808015C0:
    // 0x808015C0: j           L_80801788
    // 0x808015C4: addiu       $v0, $zero, 0x0
    ctx->r2 = ADD32(0, 0X0);
        goto L_80801788;
    // 0x808015C4: addiu       $v0, $zero, 0x0
    ctx->r2 = ADD32(0, 0X0);
L_808015C8:
    // 0x808015C8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x808015CC: lw          $v0, -0x3A34($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3A34);
    // 0x808015D0: addiu       $v1, $v0, 0x10
    ctx->r3 = ADD32(ctx->r2, 0X10);
    // 0x808015D4: sw          $v1, -0x3A34($at)
    MEM_W(-0X3A34, ctx->r1) = ctx->r3;
    // 0x808015D8: lui         $at, 0x248
    ctx->r1 = S32(0X248 << 16);
    // 0x808015DC: ori         $at, $at, 0xAAAD
    ctx->r1 = ctx->r1 | 0XAAAD;
    // 0x808015E0: sw          $at, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r1;
    // 0x808015E4: sw          $a0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r4;
    // 0x808015E8: lui         $at, 0x6400
    ctx->r1 = S32(0X6400 << 16);
    // 0x808015EC: ori         $at, $at, 0xC
    ctx->r1 = ctx->r1 | 0XC;
    // 0x808015F0: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x808015F4: j           L_808019A0
    // 0x808015F8: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
        goto L_808019A0;
    // 0x808015F8: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
L_808015FC:
    // 0x808015FC: lui         $at, 0x80FF
    ctx->r1 = S32(0X80FF << 16);
    // 0x80801600: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x80801604: and         $at, $s2, $at
    ctx->r1 = ctx->r18 & ctx->r1;
    // 0x80801608: srl         $v1, $s1, 21
    ctx->r3 = S32(U32(ctx->r17) >> 21);
    // 0x8080160C: andi        $v1, $v1, 0x78
    ctx->r3 = ctx->r3 & 0X78;
    // 0x80801610: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80801614: lw          $v0, -0x8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X8);
    // 0x80801618: addu        $a0, $v0, $at
    ctx->r4 = ADD32(ctx->r2, ctx->r1);
L_8080161C:
    // 0x8080161C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80801620: jal         0x80000000
    // 0x80801624: sw          $s1, -0x7B10($at)
    MEM_W(-0X7B10, ctx->r1) = ctx->r17;
    func_8001B6D4_1C2D4(rdram, ctx);
        goto after_4;
    // 0x80801624: sw          $s1, -0x7B10($at)
    MEM_W(-0X7B10, ctx->r1) = ctx->r17;
    after_4:
    // 0x80801628: j           L_80801290
    // 0x8080162C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80801290;
    // 0x8080162C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80801630:
    // 0x80801630: lui         $at, 0x80FF
    ctx->r1 = S32(0X80FF << 16);
    // 0x80801634: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x80801638: and         $at, $s2, $at
    ctx->r1 = ctx->r18 & ctx->r1;
    // 0x8080163C: srl         $v1, $s2, 21
    ctx->r3 = S32(U32(ctx->r18) >> 21);
    // 0x80801640: andi        $v1, $v1, 0x78
    ctx->r3 = ctx->r3 & 0X78;
    // 0x80801644: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80801648: lw          $v0, -0x8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X8);
    // 0x8080164C: addu        $a0, $v0, $at
    ctx->r4 = ADD32(ctx->r2, ctx->r1);
L_80801650:
    // 0x80801650: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80801654: jal         0x80000000
    // 0x80801658: sw          $s1, -0x7B10($at)
    MEM_W(-0X7B10, ctx->r1) = ctx->r17;
    func_800185C8_191C8(rdram, ctx);
        goto after_5;
    // 0x80801658: sw          $s1, -0x7B10($at)
    MEM_W(-0X7B10, ctx->r1) = ctx->r17;
    after_5:
    // 0x8080165C: j           L_80801290
    // 0x80801660: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80801290;
    // 0x80801660: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80801664:
    // 0x80801664: lui         $at, 0x80FF
    ctx->r1 = S32(0X80FF << 16);
    // 0x80801668: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x8080166C: and         $at, $s2, $at
    ctx->r1 = ctx->r18 & ctx->r1;
    // 0x80801670: srl         $v1, $s2, 21
    ctx->r3 = S32(U32(ctx->r18) >> 21);
    // 0x80801674: andi        $v1, $v1, 0x78
    ctx->r3 = ctx->r3 & 0X78;
    // 0x80801678: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8080167C: lw          $v0, -0x8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X8);
    // 0x80801680: addu        $a0, $v0, $at
    ctx->r4 = ADD32(ctx->r2, ctx->r1);
L_80801684:
    // 0x80801684: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80801688: jal         0x80000000
    // 0x8080168C: sw          $s1, -0x7B10($at)
    MEM_W(-0X7B10, ctx->r1) = ctx->r17;
    func_800184B4_190B4(rdram, ctx);
        goto after_6;
    // 0x8080168C: sw          $s1, -0x7B10($at)
    MEM_W(-0X7B10, ctx->r1) = ctx->r17;
    after_6:
    // 0x80801690: j           L_80801290
    // 0x80801694: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80801290;
    // 0x80801694: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80801698:
    // 0x80801698: lui         $at, 0x80FF
    ctx->r1 = S32(0X80FF << 16);
    // 0x8080169C: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x808016A0: and         $at, $s2, $at
    ctx->r1 = ctx->r18 & ctx->r1;
    // 0x808016A4: srl         $a0, $s2, 21
    ctx->r4 = S32(U32(ctx->r18) >> 21);
    // 0x808016A8: andi        $a0, $a0, 0x78
    ctx->r4 = ctx->r4 & 0X78;
    // 0x808016AC: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x808016B0: lw          $v1, -0x8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X8);
    // 0x808016B4: addu        $s0, $v1, $at
    ctx->r16 = ADD32(ctx->r3, ctx->r1);
L_808016B8:
    // 0x808016B8: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x808016BC: beq         $v1, $zero, L_8080174C
    if (ctx->r3 == 0) {
        // 0x808016C0: nop
    
            goto L_8080174C;
    }
    // 0x808016C0: nop

    // 0x808016C4: srl         $at, $v1, 31
    ctx->r1 = S32(U32(ctx->r3) >> 31);
    // 0x808016C8: lui         $v0, 0x8017
    ctx->r2 = S32(0X8017 << 16);
    // 0x808016CC: sw          $at, -0x7AE4($v0)
    MEM_W(-0X7AE4, ctx->r2) = ctx->r1;
    // 0x808016D0: andi        $at, $v1, 0xFF
    ctx->r1 = ctx->r3 & 0XFF;
    // 0x808016D4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x808016D8: nop

    // 0x808016DC: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x808016E0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x808016E4: swc1        $f0, -0x7AE8($at)
    MEM_W(-0X7AE8, ctx->r1) = ctx->f0.u32l;
    // 0x808016E8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x808016EC: lw          $v0, -0x7B60($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7B60);
    // 0x808016F0: lwc1        $f0, 0x28($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X28);
    // 0x808016F4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x808016F8: swc1        $f0, -0x7AF0($at)
    MEM_W(-0X7AF0, ctx->r1) = ctx->f0.u32l;
    // 0x808016FC: lwc1        $f0, 0x70($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X70);
    // 0x80801700: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80801704: lui         $v1, 0x8017
    ctx->r3 = S32(0X8017 << 16);
    // 0x80801708: swc1        $f0, -0x7AEC($v1)
    MEM_W(-0X7AEC, ctx->r3) = ctx->f0.u32l;
    // 0x8080170C: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x80801710: beq         $v1, $zero, L_80801760
    if (ctx->r3 == 0) {
        // 0x80801714: sw          $v1, -0x7B10($at)
        MEM_W(-0X7B10, ctx->r1) = ctx->r3;
            goto L_80801760;
    }
    // 0x80801714: sw          $v1, -0x7B10($at)
    MEM_W(-0X7B10, ctx->r1) = ctx->r3;
    // 0x80801718: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8080171C: bltz        $v1, L_80801A3C
    if (SIGNED(ctx->r3) < 0) {
        // 0x80801720: sw          $v1, -0x7AE0($at)
        MEM_W(-0X7AE0, ctx->r1) = ctx->r3;
            goto L_80801A3C;
    }
    // 0x80801720: sw          $v1, -0x7AE0($at)
    MEM_W(-0X7AE0, ctx->r1) = ctx->r3;
    // 0x80801724: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x80801728: sltu        $at, $at, $v1
    ctx->r1 = ctx->r1 < ctx->r3 ? 1 : 0;
    // 0x8080172C: bne         $at, $zero, L_80801A14
    if (ctx->r1 != 0) {
        // 0x80801730: nop
    
            goto L_80801A14;
    }
    // 0x80801730: nop

    // 0x80801734: lui         $at, 0x80FF
    ctx->r1 = S32(0X80FF << 16);
    // 0x80801738: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8080173C: and         $at, $v1, $at
    ctx->r1 = ctx->r3 & ctx->r1;
    // 0x80801740: lw          $v0, 0x38($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X38);
    // 0x80801744: j           L_80801A34
    // 0x80801748: addu        $v0, $at, $v0
    ctx->r2 = ADD32(ctx->r1, ctx->r2);
        goto L_80801A34;
    // 0x80801748: addu        $v0, $at, $v0
    ctx->r2 = ADD32(ctx->r1, ctx->r2);
L_8080174C:
    // 0x8080174C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80801750: sw          $s1, -0x7B10($at)
    MEM_W(-0X7B10, ctx->r1) = ctx->r17;
    // 0x80801754: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80801758: j           L_80801290
    // 0x8080175C: sw          $zero, -0x7ADC($at)
    MEM_W(-0X7ADC, ctx->r1) = 0;
        goto L_80801290;
    // 0x8080175C: sw          $zero, -0x7ADC($at)
    MEM_W(-0X7ADC, ctx->r1) = 0;
L_80801760:
    // 0x80801760: j           L_80801A34
    // 0x80801764: addiu       $v0, $zero, 0x0
    ctx->r2 = ADD32(0, 0X0);
        goto L_80801A34;
    // 0x80801764: addiu       $v0, $zero, 0x0
    ctx->r2 = ADD32(0, 0X0);
L_80801768:
    // 0x80801768: lui         $at, 0x80FF
    ctx->r1 = S32(0X80FF << 16);
    // 0x8080176C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80801770: and         $at, $v0, $at
    ctx->r1 = ctx->r2 & ctx->r1;
    // 0x80801774: srl         $v0, $v0, 21
    ctx->r2 = S32(U32(ctx->r2) >> 21);
    // 0x80801778: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x8080177C: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x80801780: lw          $v0, -0x8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X8);
    // 0x80801784: addu        $v0, $at, $v0
    ctx->r2 = ADD32(ctx->r1, ctx->r2);
L_80801788:
    // 0x80801788: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8080178C: sw          $v0, -0x7AE0($at)
    MEM_W(-0X7AE0, ctx->r1) = ctx->r2;
L_80801790:
    // 0x80801790: srl         $at, $s3, 28
    ctx->r1 = S32(U32(ctx->r19) >> 28);
    // 0x80801794: andi        $s4, $at, 0x7
    ctx->r20 = ctx->r1 & 0X7;
    // 0x80801798: beq         $s4, $zero, L_80801830
    if (ctx->r20 == 0) {
        // 0x8080179C: addiu       $s2, $s1, 0x8
        ctx->r18 = ADD32(ctx->r17, 0X8);
            goto L_80801830;
    }
    // 0x8080179C: addiu       $s2, $s1, 0x8
    ctx->r18 = ADD32(ctx->r17, 0X8);
    // 0x808017A0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x808017A4: addiu       $s1, $at, -0x7B50
    ctx->r17 = ADD32(ctx->r1, -0X7B50);
    // 0x808017A8: jal         0x80000000
    // 0x808017AC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8001E380_1EF80(rdram, ctx);
        goto after_7;
    // 0x808017AC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_7:
    // 0x808017B0: lui         $s5, 0x8017
    ctx->r21 = S32(0X8017 << 16);
    // 0x808017B4: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x808017B8: ori         $s6, $at, 0x1
    ctx->r22 = ctx->r1 | 0X1;
    // 0x808017BC: lui         $s7, 0x8017
    ctx->r23 = S32(0X8017 << 16);
    // 0x808017C0: lui         $at, 0x80FF
    ctx->r1 = S32(0X80FF << 16);
    // 0x808017C4: ori         $fp, $at, 0xFFFF
    ctx->r30 = ctx->r1 | 0XFFFF;
L_808017C8:
    // 0x808017C8: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x808017CC: sw          $a0, -0x7B10($s5)
    MEM_W(-0X7B10, ctx->r21) = ctx->r4;
    // 0x808017D0: beq         $a0, $zero, L_80801290
    if (ctx->r4 == 0) {
        // 0x808017D4: addiu       $v0, $zero, 0x0
        ctx->r2 = ADD32(0, 0X0);
            goto L_80801290;
    }
    // 0x808017D4: addiu       $v0, $zero, 0x0
    ctx->r2 = ADD32(0, 0X0);
    // 0x808017D8: bltz        $a0, L_80801814
    if (SIGNED(ctx->r4) < 0) {
        // 0x808017DC: nop
    
            goto L_80801814;
    }
    // 0x808017DC: nop

    // 0x808017E0: sltu        $at, $a0, $s6
    ctx->r1 = ctx->r4 < ctx->r22 ? 1 : 0;
    // 0x808017E4: bne         $at, $zero, L_80801800
    if (ctx->r1 != 0) {
        // 0x808017E8: lw          $v1, -0x7B60($s7)
        ctx->r3 = MEM_W(ctx->r23, -0X7B60);
            goto L_80801800;
    }
    // 0x808017E8: lw          $v1, -0x7B60($s7)
    ctx->r3 = MEM_W(ctx->r23, -0X7B60);
    // 0x808017EC: srl         $at, $a0, 21
    ctx->r1 = S32(U32(ctx->r4) >> 21);
    // 0x808017F0: andi        $at, $at, 0x78
    ctx->r1 = ctx->r1 & 0X78;
    // 0x808017F4: addu        $at, $v1, $at
    ctx->r1 = ADD32(ctx->r3, ctx->r1);
    // 0x808017F8: j           L_80801804
    // 0x808017FC: addiu       $v1, $at, -0x8
    ctx->r3 = ADD32(ctx->r1, -0X8);
        goto L_80801804;
    // 0x808017FC: addiu       $v1, $at, -0x8
    ctx->r3 = ADD32(ctx->r1, -0X8);
L_80801800:
    // 0x80801800: addiu       $v1, $v1, 0x38
    ctx->r3 = ADD32(ctx->r3, 0X38);
L_80801804:
    // 0x80801804: lw          $at, 0x0($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X0);
    // 0x80801808: and         $v1, $a0, $fp
    ctx->r3 = ctx->r4 & ctx->r30;
    // 0x8080180C: addu        $at, $v1, $at
    ctx->r1 = ADD32(ctx->r3, ctx->r1);
    // 0x80801810: lw          $a0, 0x0($at)
    ctx->r4 = MEM_W(ctx->r1, 0X0);
L_80801814:
    // 0x80801814: beq         $a0, $zero, L_80801290
    if (ctx->r4 == 0) {
        // 0x80801818: nop
    
            goto L_80801290;
    }
    // 0x80801818: nop

    // 0x8080181C: addiu       $s4, $s4, -0x1
    ctx->r20 = ADD32(ctx->r20, -0X1);
    // 0x80801820: jal         0x80000000
    // 0x80801824: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800176F0_182F0(rdram, ctx);
        goto after_8;
    // 0x80801824: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_8:
    // 0x80801828: bne         $s4, $zero, L_808017C8
    if (ctx->r20 != 0) {
        // 0x8080182C: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_808017C8;
    }
    // 0x8080182C: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
L_80801830:
    // 0x80801830: srl         $at, $s3, 24
    ctx->r1 = S32(U32(ctx->r19) >> 24);
    // 0x80801834: andi        $s1, $at, 0xF
    ctx->r17 = ctx->r1 & 0XF;
    // 0x80801838: beq         $s1, $zero, L_808018BC
    if (ctx->r17 == 0) {
        // 0x8080183C: nop
    
            goto L_808018BC;
    }
    // 0x8080183C: nop

    // 0x80801840: lui         $s4, 0x8017
    ctx->r20 = S32(0X8017 << 16);
    // 0x80801844: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x80801848: ori         $s5, $at, 0x1
    ctx->r21 = ctx->r1 | 0X1;
    // 0x8080184C: lui         $s6, 0x8017
    ctx->r22 = S32(0X8017 << 16);
    // 0x80801850: lui         $at, 0x80FF
    ctx->r1 = S32(0X80FF << 16);
    // 0x80801854: ori         $s7, $at, 0xFFFF
    ctx->r23 = ctx->r1 | 0XFFFF;
L_80801858:
    // 0x80801858: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x8080185C: sw          $a0, -0x7B10($s4)
    MEM_W(-0X7B10, ctx->r20) = ctx->r4;
    // 0x80801860: beq         $a0, $zero, L_80801290
    if (ctx->r4 == 0) {
        // 0x80801864: addiu       $v0, $zero, 0x0
        ctx->r2 = ADD32(0, 0X0);
            goto L_80801290;
    }
    // 0x80801864: addiu       $v0, $zero, 0x0
    ctx->r2 = ADD32(0, 0X0);
    // 0x80801868: bltz        $a0, L_808018A4
    if (SIGNED(ctx->r4) < 0) {
        // 0x8080186C: nop
    
            goto L_808018A4;
    }
    // 0x8080186C: nop

    // 0x80801870: sltu        $at, $a0, $s5
    ctx->r1 = ctx->r4 < ctx->r21 ? 1 : 0;
    // 0x80801874: bne         $at, $zero, L_80801890
    if (ctx->r1 != 0) {
        // 0x80801878: lw          $v1, -0x7B60($s6)
        ctx->r3 = MEM_W(ctx->r22, -0X7B60);
            goto L_80801890;
    }
    // 0x80801878: lw          $v1, -0x7B60($s6)
    ctx->r3 = MEM_W(ctx->r22, -0X7B60);
    // 0x8080187C: srl         $at, $a0, 21
    ctx->r1 = S32(U32(ctx->r4) >> 21);
    // 0x80801880: andi        $at, $at, 0x78
    ctx->r1 = ctx->r1 & 0X78;
    // 0x80801884: addu        $at, $v1, $at
    ctx->r1 = ADD32(ctx->r3, ctx->r1);
    // 0x80801888: j           L_80801894
    // 0x8080188C: addiu       $v1, $at, -0x8
    ctx->r3 = ADD32(ctx->r1, -0X8);
        goto L_80801894;
    // 0x8080188C: addiu       $v1, $at, -0x8
    ctx->r3 = ADD32(ctx->r1, -0X8);
L_80801890:
    // 0x80801890: addiu       $v1, $v1, 0x38
    ctx->r3 = ADD32(ctx->r3, 0X38);
L_80801894:
    // 0x80801894: lw          $at, 0x0($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X0);
    // 0x80801898: and         $v1, $a0, $s7
    ctx->r3 = ctx->r4 & ctx->r23;
    // 0x8080189C: addu        $at, $v1, $at
    ctx->r1 = ADD32(ctx->r3, ctx->r1);
    // 0x808018A0: lw          $a0, 0x0($at)
    ctx->r4 = MEM_W(ctx->r1, 0X0);
L_808018A4:
    // 0x808018A4: beq         $a0, $zero, L_80801290
    if (ctx->r4 == 0) {
        // 0x808018A8: nop
    
            goto L_80801290;
    }
    // 0x808018A8: nop

    // 0x808018AC: jal         0x80000000
    // 0x808018B0: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    func_800182DC_18EDC(rdram, ctx);
        goto after_9;
    // 0x808018B0: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    after_9:
    // 0x808018B4: bne         $s1, $zero, L_80801858
    if (ctx->r17 != 0) {
        // 0x808018B8: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_80801858;
    }
    // 0x808018B8: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
L_808018BC:
    // 0x808018BC: srl         $at, $s3, 8
    ctx->r1 = S32(U32(ctx->r19) >> 8);
    // 0x808018C0: andi        $s1, $at, 0x7FFF
    ctx->r17 = ctx->r1 & 0X7FFF;
    // 0x808018C4: beq         $s1, $zero, L_80801290
    if (ctx->r17 == 0) {
        // 0x808018C8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80801290;
    }
    // 0x808018C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x808018CC: jal         0x80000000
    // 0x808018D0: nop

    func_80016AA4_176A4(rdram, ctx);
        goto after_10;
    // 0x808018D0: nop

    after_10:
    // 0x808018D4: lui         $s3, 0x8017
    ctx->r19 = S32(0X8017 << 16);
    // 0x808018D8: jal         0x80000000
    // 0x808018DC: lw          $a0, -0x7B60($s3)
    ctx->r4 = MEM_W(ctx->r19, -0X7B60);
    func_80019D40_1A940(rdram, ctx);
        goto after_11;
    // 0x808018DC: lw          $a0, -0x7B60($s3)
    ctx->r4 = MEM_W(ctx->r19, -0X7B60);
    after_11:
    // 0x808018E0: lui         $s4, 0x8017
    ctx->r20 = S32(0X8017 << 16);
    // 0x808018E4: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x808018E8: ori         $s5, $at, 0x1
    ctx->r21 = ctx->r1 | 0X1;
    // 0x808018EC: lui         $at, 0x80FF
    ctx->r1 = S32(0X80FF << 16);
    // 0x808018F0: j           L_80801908
    // 0x808018F4: ori         $s6, $at, 0xFFFF
    ctx->r22 = ctx->r1 | 0XFFFF;
        goto L_80801908;
    // 0x808018F4: ori         $s6, $at, 0xFFFF
    ctx->r22 = ctx->r1 | 0XFFFF;
L_808018F8:
    // 0x808018F8: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
L_808018FC:
    // 0x808018FC: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x80801900: beq         $s1, $zero, L_8080196C
    if (ctx->r17 == 0) {
        // 0x80801904: nop
    
            goto L_8080196C;
    }
    // 0x80801904: nop

L_80801908:
    // 0x80801908: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x8080190C: beq         $a0, $zero, L_808018F8
    if (ctx->r4 == 0) {
        // 0x80801910: sw          $a0, -0x7B10($s4)
        MEM_W(-0X7B10, ctx->r20) = ctx->r4;
            goto L_808018F8;
    }
    // 0x80801910: sw          $a0, -0x7B10($s4)
    MEM_W(-0X7B10, ctx->r20) = ctx->r4;
    // 0x80801914: bltz        $a0, L_8080193C
    if (SIGNED(ctx->r4) < 0) {
        // 0x80801918: nop
    
            goto L_8080193C;
    }
    // 0x80801918: nop

    // 0x8080191C: sltu        $at, $a0, $s5
    ctx->r1 = ctx->r4 < ctx->r21 ? 1 : 0;
    // 0x80801920: bne         $at, $zero, L_80801944
    if (ctx->r1 != 0) {
        // 0x80801924: lw          $v0, -0x7B60($s3)
        ctx->r2 = MEM_W(ctx->r19, -0X7B60);
            goto L_80801944;
    }
    // 0x80801924: lw          $v0, -0x7B60($s3)
    ctx->r2 = MEM_W(ctx->r19, -0X7B60);
    // 0x80801928: srl         $at, $a0, 21
    ctx->r1 = S32(U32(ctx->r4) >> 21);
    // 0x8080192C: andi        $at, $at, 0x78
    ctx->r1 = ctx->r1 & 0X78;
    // 0x80801930: addu        $at, $v0, $at
    ctx->r1 = ADD32(ctx->r2, ctx->r1);
    // 0x80801934: j           L_80801948
    // 0x80801938: addiu       $v0, $at, -0x8
    ctx->r2 = ADD32(ctx->r1, -0X8);
        goto L_80801948;
    // 0x80801938: addiu       $v0, $at, -0x8
    ctx->r2 = ADD32(ctx->r1, -0X8);
L_8080193C:
    // 0x8080193C: j           L_8080195C
    // 0x80801940: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
        goto L_8080195C;
    // 0x80801940: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
L_80801944:
    // 0x80801944: addiu       $v0, $v0, 0x38
    ctx->r2 = ADD32(ctx->r2, 0X38);
L_80801948:
    // 0x80801948: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x8080194C: and         $v0, $a0, $s6
    ctx->r2 = ctx->r4 & ctx->r22;
    // 0x80801950: addu        $a0, $v0, $at
    ctx->r4 = ADD32(ctx->r2, ctx->r1);
    // 0x80801954: beq         $a0, $zero, L_808018FC
    if (ctx->r4 == 0) {
        // 0x80801958: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_808018FC;
    }
    // 0x80801958: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
L_8080195C:
    // 0x8080195C: jal         0x80000000
    // 0x80801960: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80018718_19318(rdram, ctx);
        goto after_12;
    // 0x80801960: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_12:
    // 0x80801964: j           L_808018FC
    // 0x80801968: nop

        goto L_808018FC;
    // 0x80801968: nop

L_8080196C:
    // 0x8080196C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80801970: lw          $v0, -0x3A34($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3A34);
    // 0x80801974: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x80801978: sw          $v1, -0x3A34($at)
    MEM_W(-0X3A34, ctx->r1) = ctx->r3;
    // 0x8080197C: lui         $at, 0xBD00
    ctx->r1 = S32(0XBD00 << 16);
    // 0x80801980: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x80801984: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80801988: j           L_80801290
    // 0x8080198C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80801290;
    // 0x8080198C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80801990:
    // 0x80801990: lui         $at, 0x248
    ctx->r1 = S32(0X248 << 16);
    // 0x80801994: ori         $at, $at, 0x2AA5
    ctx->r1 = ctx->r1 | 0X2AA5;
    // 0x80801998: sw          $at, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r1;
    // 0x8080199C: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
L_808019A0:
    // 0x808019A0: jal         0x80000000
    // 0x808019A4: nop

    func_80016AA4_176A4(rdram, ctx);
        goto after_13;
    // 0x808019A4: nop

    after_13:
    // 0x808019A8: lui         $s0, 0x8017
    ctx->r16 = S32(0X8017 << 16);
    // 0x808019AC: jal         0x80000000
    // 0x808019B0: lw          $a0, -0x7B60($s0)
    ctx->r4 = MEM_W(ctx->r16, -0X7B60);
    func_80019D40_1A940(rdram, ctx);
        goto after_14;
    // 0x808019B0: lw          $a0, -0x7B60($s0)
    ctx->r4 = MEM_W(ctx->r16, -0X7B60);
    after_14:
    // 0x808019B4: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x808019B8: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x808019BC: lw          $v0, -0x7B60($s0)
    ctx->r2 = MEM_W(ctx->r16, -0X7B60);
    // 0x808019C0: lw          $v0, 0x2C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2C);
    // 0x808019C4: jal         0x80000000
    // 0x808019C8: and         $a0, $v0, $at
    ctx->r4 = ctx->r2 & ctx->r1;
    func_800196F0_1A2F0(rdram, ctx);
        goto after_15;
    // 0x808019C8: and         $a0, $v0, $at
    ctx->r4 = ctx->r2 & ctx->r1;
    after_15:
    // 0x808019CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x808019D0: lui         $at, 0xBD00
    ctx->r1 = S32(0XBD00 << 16);
    // 0x808019D4: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x808019D8: lw          $a0, -0x3A34($v1)
    ctx->r4 = MEM_W(ctx->r3, -0X3A34);
    // 0x808019DC: addiu       $a1, $a0, 0x8
    ctx->r5 = ADD32(ctx->r4, 0X8);
    // 0x808019E0: sw          $a1, -0x3A34($v1)
    MEM_W(-0X3A34, ctx->r3) = ctx->r5;
    // 0x808019E4: sw          $at, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r1;
    // 0x808019E8: bne         $s3, $zero, L_80801290
    if (ctx->r19 != 0) {
        // 0x808019EC: sw          $zero, 0x4($a0)
        MEM_W(0X4, ctx->r4) = 0;
            goto L_80801290;
    }
    // 0x808019EC: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x808019F0: lw          $at, -0x3A34($v1)
    ctx->r1 = MEM_W(ctx->r3, -0X3A34);
    // 0x808019F4: addiu       $v0, $at, 0x8
    ctx->r2 = ADD32(ctx->r1, 0X8);
    // 0x808019F8: sw          $v0, -0x3A34($v1)
    MEM_W(-0X3A34, ctx->r3) = ctx->r2;
    // 0x808019FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80801A00: sw          $v0, 0x4($at)
    MEM_W(0X4, ctx->r1) = ctx->r2;
    // 0x80801A04: lui         $v1, 0x6400
    ctx->r3 = S32(0X6400 << 16);
    // 0x80801A08: ori         $v1, $v1, 0xD
    ctx->r3 = ctx->r3 | 0XD;
    // 0x80801A0C: j           L_80801290
    // 0x80801A10: sw          $v1, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r3;
        goto L_80801290;
    // 0x80801A10: sw          $v1, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r3;
L_80801A14:
    // 0x80801A14: lui         $at, 0x80FF
    ctx->r1 = S32(0X80FF << 16);
    // 0x80801A18: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80801A1C: and         $at, $v1, $at
    ctx->r1 = ctx->r3 & ctx->r1;
    // 0x80801A20: srl         $v1, $v1, 21
    ctx->r3 = S32(U32(ctx->r3) >> 21);
    // 0x80801A24: andi        $v1, $v1, 0x78
    ctx->r3 = ctx->r3 & 0X78;
    // 0x80801A28: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80801A2C: lw          $v0, -0x8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X8);
    // 0x80801A30: addu        $v0, $at, $v0
    ctx->r2 = ADD32(ctx->r1, ctx->r2);
L_80801A34:
    // 0x80801A34: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80801A38: sw          $v0, -0x7AE0($at)
    MEM_W(-0X7AE0, ctx->r1) = ctx->r2;
L_80801A3C:
    // 0x80801A3C: jal         0x80000000
    // 0x80801A40: nop

    func_80016AA4_176A4(rdram, ctx);
        goto after_16;
    // 0x80801A40: nop

    after_16:
    // 0x80801A44: lui         $s1, 0x8017
    ctx->r17 = S32(0X8017 << 16);
    // 0x80801A48: jal         0x80000000
    // 0x80801A4C: lw          $a0, -0x7B60($s1)
    ctx->r4 = MEM_W(ctx->r17, -0X7B60);
    func_80019D40_1A940(rdram, ctx);
        goto after_17;
    // 0x80801A4C: lw          $a0, -0x7B60($s1)
    ctx->r4 = MEM_W(ctx->r17, -0X7B60);
    after_17:
    // 0x80801A50: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80801A54: lw          $at, -0x7AE4($at)
    ctx->r1 = MEM_W(ctx->r1, -0X7AE4);
    // 0x80801A58: beq         $at, $zero, L_80801AE0
    if (ctx->r1 == 0) {
        // 0x80801A5C: nop
    
            goto L_80801AE0;
    }
    // 0x80801A5C: nop

    // 0x80801A60: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x80801A64: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80801A68: beq         $a0, $zero, L_80801AA4
    if (ctx->r4 == 0) {
        // 0x80801A6C: sw          $a0, -0x7B10($at)
        MEM_W(-0X7B10, ctx->r1) = ctx->r4;
            goto L_80801AA4;
    }
    // 0x80801A6C: sw          $a0, -0x7B10($at)
    MEM_W(-0X7B10, ctx->r1) = ctx->r4;
    // 0x80801A70: bltz        $a0, L_80801ACC
    if (SIGNED(ctx->r4) < 0) {
        // 0x80801A74: nop
    
            goto L_80801ACC;
    }
    // 0x80801A74: nop

    // 0x80801A78: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x80801A7C: sltu        $at, $at, $a0
    ctx->r1 = ctx->r1 < ctx->r4 ? 1 : 0;
    // 0x80801A80: lui         $v0, 0x8017
    ctx->r2 = S32(0X8017 << 16);
    // 0x80801A84: bne         $at, $zero, L_80801AAC
    if (ctx->r1 != 0) {
        // 0x80801A88: lw          $v0, -0x7B60($v0)
        ctx->r2 = MEM_W(ctx->r2, -0X7B60);
            goto L_80801AAC;
    }
    // 0x80801A88: lw          $v0, -0x7B60($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7B60);
    // 0x80801A8C: lui         $at, 0x80FF
    ctx->r1 = S32(0X80FF << 16);
    // 0x80801A90: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80801A94: and         $at, $a0, $at
    ctx->r1 = ctx->r4 & ctx->r1;
    // 0x80801A98: lw          $v0, 0x38($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X38);
    // 0x80801A9C: j           L_80801ACC
    // 0x80801AA0: addu        $a0, $at, $v0
    ctx->r4 = ADD32(ctx->r1, ctx->r2);
        goto L_80801ACC;
    // 0x80801AA0: addu        $a0, $at, $v0
    ctx->r4 = ADD32(ctx->r1, ctx->r2);
L_80801AA4:
    // 0x80801AA4: j           L_80801ACC
    // 0x80801AA8: addiu       $a0, $zero, 0x0
    ctx->r4 = ADD32(0, 0X0);
        goto L_80801ACC;
    // 0x80801AA8: addiu       $a0, $zero, 0x0
    ctx->r4 = ADD32(0, 0X0);
L_80801AAC:
    // 0x80801AAC: lui         $at, 0x80FF
    ctx->r1 = S32(0X80FF << 16);
    // 0x80801AB0: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80801AB4: and         $at, $a0, $at
    ctx->r1 = ctx->r4 & ctx->r1;
    // 0x80801AB8: srl         $v1, $a0, 21
    ctx->r3 = S32(U32(ctx->r4) >> 21);
    // 0x80801ABC: andi        $v1, $v1, 0x78
    ctx->r3 = ctx->r3 & 0X78;
    // 0x80801AC0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80801AC4: lw          $v0, -0x8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X8);
    // 0x80801AC8: addu        $a0, $at, $v0
    ctx->r4 = ADD32(ctx->r1, ctx->r2);
L_80801ACC:
    // 0x80801ACC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80801AD0: lw          $at, -0x7B60($at)
    ctx->r1 = MEM_W(ctx->r1, -0X7B60);
    // 0x80801AD4: lw          $a2, 0x78($at)
    ctx->r6 = MEM_W(ctx->r1, 0X78);
    // 0x80801AD8: jal         0x80000000
    // 0x80801ADC: lui         $a1, 0x6000
    ctx->r5 = S32(0X6000 << 16);
    func_80018B28_19728(rdram, ctx);
        goto after_18;
    // 0x80801ADC: lui         $a1, 0x6000
    ctx->r5 = S32(0X6000 << 16);
    after_18:
L_80801AE0:
    // 0x80801AE0: lw          $v0, -0x7B60($s1)
    ctx->r2 = MEM_W(ctx->r17, -0X7B60);
    // 0x80801AE4: lwc1        $f0, 0x70($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X70);
    // 0x80801AE8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80801AEC: nop

    // 0x80801AF0: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x80801AF4: nop

    // 0x80801AF8: bc1t        L_80801B10
    if (c1cs) {
        // 0x80801AFC: nop
    
            goto L_80801B10;
    }
    // 0x80801AFC: nop

    // 0x80801B00: lui         $at, 0x8080
    ctx->r1 = S32(0X8080 << 16);
    // 0x80801B04: lwc1        $f2, 0x522C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X522C);
    // 0x80801B08: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x80801B0C: swc1        $f0, 0x70($v0)
    MEM_W(0X70, ctx->r2) = ctx->f0.u32l;
L_80801B10:
    // 0x80801B10: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80801B14: lw          $v0, -0x3A34($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3A34);
    // 0x80801B18: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x80801B1C: sw          $v1, -0x3A34($at)
    MEM_W(-0X3A34, ctx->r1) = ctx->r3;
    // 0x80801B20: lui         $at, 0xBD00
    ctx->r1 = S32(0XBD00 << 16);
    // 0x80801B24: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x80801B28: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80801B2C: j           L_80801290
    // 0x80801B30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80801290;
    // 0x80801B30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_80018908_19508(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801B34: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80801B38: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80801B3C: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x80801B40: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x80801B44: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80801B48: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80801B4C: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80801B50: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80801B54: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80801B58: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80801B5C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80801B60: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80801B64: lui         $at, 0x85EB
    ctx->r1 = S32(0X85EB << 16);
    // 0x80801B68: ori         $s3, $at, 0xCA6B
    ctx->r19 = ctx->r1 | 0XCA6B;
    // 0x80801B6C: lui         $at, 0xC2B2
    ctx->r1 = S32(0XC2B2 << 16);
    // 0x80801B70: ori         $s4, $at, 0xAE35
    ctx->r20 = ctx->r1 | 0XAE35;
    // 0x80801B74: lui         $s5, 0x8016
    ctx->r21 = S32(0X8016 << 16);
    // 0x80801B78: lui         $at, 0x6400
    ctx->r1 = S32(0X6400 << 16);
    // 0x80801B7C: ori         $v0, $at, 0xC
    ctx->r2 = ctx->r1 | 0XC;
    // 0x80801B80: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80801B84: lui         $v0, 0x208
    ctx->r2 = S32(0X208 << 16);
    // 0x80801B88: ori         $v0, $v0, 0x8AAD
    ctx->r2 = ctx->r2 | 0X8AAD;
    // 0x80801B8C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80801B90: lui         $v0, 0x8FFF
    ctx->r2 = S32(0X8FFF << 16);
    // 0x80801B94: ori         $s2, $v0, 0xFFFF
    ctx->r18 = ctx->r2 | 0XFFFF;
    // 0x80801B98: lui         $s6, 0x8017
    ctx->r22 = S32(0X8017 << 16);
    // 0x80801B9C: ori         $s7, $at, 0xD
    ctx->r23 = ctx->r1 | 0XD;
    // 0x80801BA0: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x80801BA4: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80801BA8: j           L_80801BC8
    // 0x80801BAC: sw          $at, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r1;
        goto L_80801BC8;
    // 0x80801BAC: sw          $at, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r1;
L_80801BB0:
    // 0x80801BB0: lb          $at, 0x5($s0)
    ctx->r1 = MEM_B(ctx->r16, 0X5);
    // 0x80801BB4: sll         $v0, $at, 3
    ctx->r2 = S32(ctx->r1 << 3);
    // 0x80801BB8: sll         $v1, $at, 4
    ctx->r3 = S32(ctx->r1 << 4);
    // 0x80801BBC: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x80801BC0: beq         $at, $zero, L_80801E80
    if (ctx->r1 == 0) {
        // 0x80801BC4: addu        $s0, $s0, $v0
        ctx->r16 = ADD32(ctx->r16, ctx->r2);
            goto L_80801E80;
    }
    // 0x80801BC4: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
L_80801BC8:
    // 0x80801BC8: lui         $at, 0x8089
    ctx->r1 = S32(0X8089 << 16);
    // 0x80801BCC: lbu         $s1, -0x43DC($at)
    ctx->r17 = MEM_BU(ctx->r1, -0X43DC);
    // 0x80801BD0: bne         $s1, $zero, L_80801C84
    if (ctx->r17 != 0) {
        // 0x80801BD4: nop
    
            goto L_80801C84;
    }
    // 0x80801BD4: nop

    // 0x80801BD8: lui         $at, 0x8089
    ctx->r1 = S32(0X8089 << 16);
    // 0x80801BDC: lw          $at, -0x43E0($at)
    ctx->r1 = MEM_W(ctx->r1, -0X43E0);
    // 0x80801BE0: srl         $v0, $at, 16
    ctx->r2 = S32(U32(ctx->r1) >> 16);
    // 0x80801BE4: xor         $v0, $v0, $at
    ctx->r2 = ctx->r2 ^ ctx->r1;
    // 0x80801BE8: mult        $v0, $s3
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80801BEC: mflo        $v0
    ctx->r2 = lo;
    // 0x80801BF0: sll         $at, $at, 16
    ctx->r1 = S32(ctx->r1 << 16);
    // 0x80801BF4: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x80801BF8: srl         $a0, $v1, 16
    ctx->r4 = S32(U32(ctx->r3) >> 16);
    // 0x80801BFC: or          $at, $a0, $at
    ctx->r1 = ctx->r4 | ctx->r1;
    // 0x80801C00: xor         $at, $at, $v1
    ctx->r1 = ctx->r1 ^ ctx->r3;
    // 0x80801C04: multu       $at, $s3
    result = U64(U32(ctx->r1)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80801C08: mfhi        $at
    ctx->r1 = hi;
    // 0x80801C0C: mflo        $v1
    ctx->r3 = lo;
    // 0x80801C10: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80801C14: srl         $v0, $at, 13
    ctx->r2 = S32(U32(ctx->r1) >> 13);
    // 0x80801C18: xor         $v0, $v0, $at
    ctx->r2 = ctx->r2 ^ ctx->r1;
    // 0x80801C1C: mult        $v0, $s4
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80801C20: mflo        $v0
    ctx->r2 = lo;
    // 0x80801C24: sll         $at, $at, 19
    ctx->r1 = S32(ctx->r1 << 19);
    // 0x80801C28: srl         $a0, $v1, 13
    ctx->r4 = S32(U32(ctx->r3) >> 13);
    // 0x80801C2C: or          $at, $a0, $at
    ctx->r1 = ctx->r4 | ctx->r1;
    // 0x80801C30: mult        $at, $s4
    result = S64(S32(ctx->r1)) * S64(S32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80801C34: mflo        $a0
    ctx->r4 = lo;
    // 0x80801C38: xor         $at, $at, $v1
    ctx->r1 = ctx->r1 ^ ctx->r3;
    // 0x80801C3C: multu       $at, $s4
    result = U64(U32(ctx->r1)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80801C40: mflo        $at
    ctx->r1 = lo;
    // 0x80801C44: mfhi        $a1
    ctx->r5 = hi;
    // 0x80801C48: lw          $a2, -0x3A34($s5)
    ctx->r6 = MEM_W(ctx->r21, -0X3A34);
    // 0x80801C4C: addiu       $a3, $a2, 0x10
    ctx->r7 = ADD32(ctx->r6, 0X10);
    // 0x80801C50: sw          $a3, -0x3A34($s5)
    MEM_W(-0X3A34, ctx->r21) = ctx->r7;
    // 0x80801C54: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80801C58: sw          $a3, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r7;
    // 0x80801C5C: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x80801C60: sw          $a3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r7;
    // 0x80801C64: sw          $zero, 0xC($a2)
    MEM_W(0XC, ctx->r6) = 0;
    // 0x80801C68: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x80801C6C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80801C70: srl         $at, $at, 16
    ctx->r1 = S32(U32(ctx->r1) >> 16);
    // 0x80801C74: or          $at, $at, $v0
    ctx->r1 = ctx->r1 | ctx->r2;
    // 0x80801C78: xor         $at, $a0, $at
    ctx->r1 = ctx->r4 ^ ctx->r1;
    // 0x80801C7C: xor         $at, $at, $v1
    ctx->r1 = ctx->r1 ^ ctx->r3;
    // 0x80801C80: sw          $at, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r1;
L_80801C84:
    // 0x80801C84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801C88: jal         0x80000000
    // 0x80801C8C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_800192D0_19ED0(rdram, ctx);
        goto after_0;
    // 0x80801C8C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_0:
    // 0x80801C90: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80801C94: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x80801C98: and         $at, $v0, $at
    ctx->r1 = ctx->r2 & ctx->r1;
    // 0x80801C9C: bne         $at, $zero, L_80801CC0
    if (ctx->r1 != 0) {
        // 0x80801CA0: nop
    
            goto L_80801CC0;
    }
    // 0x80801CA0: nop

    // 0x80801CA4: and         $a0, $v0, $s2
    ctx->r4 = ctx->r2 & ctx->r18;
    // 0x80801CA8: beq         $a0, $zero, L_80801D4C
    if (ctx->r4 == 0) {
        // 0x80801CAC: nop
    
            goto L_80801D4C;
    }
    // 0x80801CAC: nop

    // 0x80801CB0: jal         0x80000000
    // 0x80801CB4: nop

    func_800196F0_1A2F0(rdram, ctx);
        goto after_1;
    // 0x80801CB4: nop

    after_1:
    // 0x80801CB8: j           L_80801D4C
    // 0x80801CBC: nop

        goto L_80801D4C;
    // 0x80801CBC: nop

L_80801CC0:
    // 0x80801CC0: bltz        $v0, L_80801CEC
    if (SIGNED(ctx->r2) < 0) {
        // 0x80801CC4: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80801CEC;
    }
    // 0x80801CC4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80801CC8: lw          $at, 0x14($sp)
    ctx->r1 = MEM_W(ctx->r29, 0X14);
    // 0x80801CCC: and         $at, $v0, $at
    ctx->r1 = ctx->r2 & ctx->r1;
    // 0x80801CD0: lui         $v1, 0x8017
    ctx->r3 = S32(0X8017 << 16);
    // 0x80801CD4: lw          $v1, -0x7B60($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7B60);
    // 0x80801CD8: srl         $a0, $v0, 21
    ctx->r4 = S32(U32(ctx->r2) >> 21);
    // 0x80801CDC: andi        $a0, $a0, 0x78
    ctx->r4 = ctx->r4 & 0X78;
    // 0x80801CE0: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80801CE4: lw          $v1, -0x8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X8);
    // 0x80801CE8: addu        $v1, $at, $v1
    ctx->r3 = ADD32(ctx->r1, ctx->r3);
L_80801CEC:
    // 0x80801CEC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80801CF0: sw          $v0, -0x7B10($at)
    MEM_W(-0X7B10, ctx->r1) = ctx->r2;
    // 0x80801CF4: and         $fp, $v1, $s2
    ctx->r30 = ctx->r3 & ctx->r18;
    // 0x80801CF8: lw          $a0, 0x0($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X0);
    // 0x80801CFC: beq         $a0, $zero, L_80801D0C
    if (ctx->r4 == 0) {
        // 0x80801D00: nop
    
            goto L_80801D0C;
    }
    // 0x80801D00: nop

    // 0x80801D04: jal         0x80000000
    // 0x80801D08: nop

    func_800196F0_1A2F0(rdram, ctx);
        goto after_2;
    // 0x80801D08: nop

    after_2:
L_80801D0C:
    // 0x80801D0C: lb          $v0, 0x4($fp)
    ctx->r2 = MEM_B(ctx->r30, 0X4);
    // 0x80801D10: beq         $v0, $zero, L_80801D2C
    if (ctx->r2 == 0) {
        // 0x80801D14: nop
    
            goto L_80801D2C;
    }
    // 0x80801D14: nop

    // 0x80801D18: sll         $at, $v0, 3
    ctx->r1 = S32(ctx->r2 << 3);
    // 0x80801D1C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80801D20: addu        $at, $v0, $at
    ctx->r1 = ADD32(ctx->r2, ctx->r1);
    // 0x80801D24: jal         0x80801B34
    // 0x80801D28: addu        $a0, $fp, $at
    ctx->r4 = ADD32(ctx->r30, ctx->r1);
    func_80018908_19508(rdram, ctx);
        goto after_3;
    // 0x80801D28: addu        $a0, $fp, $at
    ctx->r4 = ADD32(ctx->r30, ctx->r1);
    after_3:
L_80801D2C:
    // 0x80801D2C: lb          $v0, 0x5($fp)
    ctx->r2 = MEM_B(ctx->r30, 0X5);
    // 0x80801D30: beq         $v0, $zero, L_80801D4C
    if (ctx->r2 == 0) {
        // 0x80801D34: nop
    
            goto L_80801D4C;
    }
    // 0x80801D34: nop

    // 0x80801D38: sll         $at, $v0, 3
    ctx->r1 = S32(ctx->r2 << 3);
    // 0x80801D3C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80801D40: addu        $at, $v0, $at
    ctx->r1 = ADD32(ctx->r2, ctx->r1);
    // 0x80801D44: jal         0x80801B34
    // 0x80801D48: addu        $a0, $fp, $at
    ctx->r4 = ADD32(ctx->r30, ctx->r1);
    func_80018908_19508(rdram, ctx);
        goto after_4;
    // 0x80801D48: addu        $a0, $fp, $at
    ctx->r4 = ADD32(ctx->r30, ctx->r1);
    after_4:
L_80801D4C:
    // 0x80801D4C: lhu         $at, 0xC($s0)
    ctx->r1 = MEM_HU(ctx->r16, 0XC);
    // 0x80801D50: lhu         $v0, 0xE($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XE);
    // 0x80801D54: or          $at, $v0, $at
    ctx->r1 = ctx->r2 | ctx->r1;
    // 0x80801D58: lhu         $v0, 0x10($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X10);
    // 0x80801D5C: or          $at, $at, $v0
    ctx->r1 = ctx->r1 | ctx->r2;
    // 0x80801D60: andi        $at, $at, 0x4000
    ctx->r1 = ctx->r1 & 0X4000;
    // 0x80801D64: bne         $at, $zero, L_80801D90
    if (ctx->r1 != 0) {
        // 0x80801D68: nop
    
            goto L_80801D90;
    }
    // 0x80801D68: nop

    // 0x80801D6C: lw          $at, -0x7AE4($s6)
    ctx->r1 = MEM_W(ctx->r22, -0X7AE4);
    // 0x80801D70: bne         $at, $zero, L_80801DEC
    if (ctx->r1 != 0) {
        // 0x80801D74: nop
    
            goto L_80801DEC;
    }
    // 0x80801D74: nop

    // 0x80801D78: jal         0x80000000
    // 0x80801D7C: nop

    func_800196A4_1A2A4(rdram, ctx);
        goto after_5;
    // 0x80801D7C: nop

    after_5:
    // 0x80801D80: bne         $s1, $zero, L_80801DB4
    if (ctx->r17 != 0) {
        // 0x80801D84: nop
    
            goto L_80801DB4;
    }
    // 0x80801D84: nop

    // 0x80801D88: j           L_80801E40
    // 0x80801D8C: nop

        goto L_80801E40;
    // 0x80801D8C: nop

L_80801D90:
    // 0x80801D90: jal         0x80000000
    // 0x80801D94: nop

    func_800196A4_1A2A4(rdram, ctx);
        goto after_6;
    // 0x80801D94: nop

    after_6:
    // 0x80801D98: beq         $s1, $zero, L_80801DC8
    if (ctx->r17 == 0) {
        // 0x80801D9C: nop
    
            goto L_80801DC8;
    }
    // 0x80801D9C: nop

    // 0x80801DA0: lw          $at, -0x7AE4($s6)
    ctx->r1 = MEM_W(ctx->r22, -0X7AE4);
    // 0x80801DA4: bne         $at, $zero, L_80801DEC
    if (ctx->r1 != 0) {
        // 0x80801DA8: nop
    
            goto L_80801DEC;
    }
    // 0x80801DA8: nop

    // 0x80801DAC: jal         0x80000000
    // 0x80801DB0: nop

    func_800196A4_1A2A4(rdram, ctx);
        goto after_7;
    // 0x80801DB0: nop

    after_7:
L_80801DB4:
    // 0x80801DB4: lb          $v0, 0x4($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X4);
    // 0x80801DB8: bne         $v0, $zero, L_80801E64
    if (ctx->r2 != 0) {
        // 0x80801DBC: nop
    
            goto L_80801E64;
    }
    // 0x80801DBC: nop

    // 0x80801DC0: j           L_80801BB0
    // 0x80801DC4: nop

        goto L_80801BB0;
    // 0x80801DC4: nop

L_80801DC8:
    // 0x80801DC8: lw          $at, -0x3A34($s5)
    ctx->r1 = MEM_W(ctx->r21, -0X3A34);
    // 0x80801DCC: addiu       $v0, $at, 0x8
    ctx->r2 = ADD32(ctx->r1, 0X8);
    // 0x80801DD0: sw          $v0, -0x3A34($s5)
    MEM_W(-0X3A34, ctx->r21) = ctx->r2;
    // 0x80801DD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80801DD8: sw          $v0, 0x4($at)
    MEM_W(0X4, ctx->r1) = ctx->r2;
    // 0x80801DDC: sw          $s7, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r23;
    // 0x80801DE0: lw          $at, -0x7AE4($s6)
    ctx->r1 = MEM_W(ctx->r22, -0X7AE4);
    // 0x80801DE4: beq         $at, $zero, L_80801E38
    if (ctx->r1 == 0) {
        // 0x80801DE8: nop
    
            goto L_80801E38;
    }
    // 0x80801DE8: nop

L_80801DEC:
    // 0x80801DEC: lb          $v0, 0x4($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X4);
    // 0x80801DF0: beq         $v0, $zero, L_80801E0C
    if (ctx->r2 == 0) {
        // 0x80801DF4: nop
    
            goto L_80801E0C;
    }
    // 0x80801DF4: nop

    // 0x80801DF8: sll         $at, $v0, 3
    ctx->r1 = S32(ctx->r2 << 3);
    // 0x80801DFC: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80801E00: addu        $at, $v0, $at
    ctx->r1 = ADD32(ctx->r2, ctx->r1);
    // 0x80801E04: jal         0x80801B34
    // 0x80801E08: addu        $a0, $s0, $at
    ctx->r4 = ADD32(ctx->r16, ctx->r1);
    func_80018908_19508(rdram, ctx);
        goto after_8;
    // 0x80801E08: addu        $a0, $s0, $at
    ctx->r4 = ADD32(ctx->r16, ctx->r1);
    after_8:
L_80801E0C:
    // 0x80801E0C: jal         0x80000000
    // 0x80801E10: nop

    func_800196A4_1A2A4(rdram, ctx);
        goto after_9;
    // 0x80801E10: nop

    after_9:
    // 0x80801E14: bne         $s1, $zero, L_80801BB0
    if (ctx->r17 != 0) {
        // 0x80801E18: nop
    
            goto L_80801BB0;
    }
    // 0x80801E18: nop

    // 0x80801E1C: lw          $at, -0x3A34($s5)
    ctx->r1 = MEM_W(ctx->r21, -0X3A34);
    // 0x80801E20: addiu       $v0, $at, 0x8
    ctx->r2 = ADD32(ctx->r1, 0X8);
    // 0x80801E24: sw          $v0, -0x3A34($s5)
    MEM_W(-0X3A34, ctx->r21) = ctx->r2;
    // 0x80801E28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80801E2C: sw          $v0, 0x4($at)
    MEM_W(0X4, ctx->r1) = ctx->r2;
    // 0x80801E30: j           L_80801BB0
    // 0x80801E34: sw          $s7, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r23;
        goto L_80801BB0;
    // 0x80801E34: sw          $s7, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r23;
L_80801E38:
    // 0x80801E38: jal         0x80000000
    // 0x80801E3C: nop

    func_800196A4_1A2A4(rdram, ctx);
        goto after_10;
    // 0x80801E3C: nop

    after_10:
L_80801E40:
    // 0x80801E40: lw          $at, -0x3A34($s5)
    ctx->r1 = MEM_W(ctx->r21, -0X3A34);
    // 0x80801E44: addiu       $v0, $at, 0x8
    ctx->r2 = ADD32(ctx->r1, 0X8);
    // 0x80801E48: sw          $v0, -0x3A34($s5)
    MEM_W(-0X3A34, ctx->r21) = ctx->r2;
    // 0x80801E4C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80801E50: sw          $v0, 0x4($at)
    MEM_W(0X4, ctx->r1) = ctx->r2;
    // 0x80801E54: sw          $s7, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r23;
    // 0x80801E58: lb          $v0, 0x4($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X4);
    // 0x80801E5C: beq         $v0, $zero, L_80801BB0
    if (ctx->r2 == 0) {
        // 0x80801E60: nop
    
            goto L_80801BB0;
    }
    // 0x80801E60: nop

L_80801E64:
    // 0x80801E64: sll         $at, $v0, 3
    ctx->r1 = S32(ctx->r2 << 3);
    // 0x80801E68: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80801E6C: addu        $at, $v0, $at
    ctx->r1 = ADD32(ctx->r2, ctx->r1);
    // 0x80801E70: jal         0x80801B34
    // 0x80801E74: addu        $a0, $s0, $at
    ctx->r4 = ADD32(ctx->r16, ctx->r1);
    func_80018908_19508(rdram, ctx);
        goto after_11;
    // 0x80801E74: addu        $a0, $s0, $at
    ctx->r4 = ADD32(ctx->r16, ctx->r1);
    after_11:
    // 0x80801E78: j           L_80801BB0
    // 0x80801E7C: nop

        goto L_80801BB0;
    // 0x80801E7C: nop

L_80801E80:
    // 0x80801E80: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80801E84: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80801E88: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80801E8C: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80801E90: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80801E94: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80801E98: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80801E9C: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x80801EA0: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x80801EA4: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80801EA8: jr          $ra
    // 0x80801EAC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80801EAC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80018CA0_198A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801EB0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80801EB4: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80801EB8: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x80801EBC: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x80801EC0: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x80801EC4: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x80801EC8: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x80801ECC: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80801ED0: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80801ED4: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80801ED8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80801EDC: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80801EE0: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80801EE4: lui         $s2, 0x8017
    ctx->r18 = S32(0X8017 << 16);
    // 0x80801EE8: lui         $at, 0x85EB
    ctx->r1 = S32(0X85EB << 16);
    // 0x80801EEC: ori         $at, $at, 0xCA6B
    ctx->r1 = ctx->r1 | 0XCA6B;
    // 0x80801EF0: sw          $at, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r1;
    // 0x80801EF4: lui         $at, 0xC2B2
    ctx->r1 = S32(0XC2B2 << 16);
    // 0x80801EF8: ori         $s6, $at, 0xAE35
    ctx->r22 = ctx->r1 | 0XAE35;
    // 0x80801EFC: lui         $s7, 0x8016
    ctx->r23 = S32(0X8016 << 16);
    // 0x80801F00: lui         $at, 0x6400
    ctx->r1 = S32(0X6400 << 16);
    // 0x80801F04: ori         $v0, $at, 0xC
    ctx->r2 = ctx->r1 | 0XC;
    // 0x80801F08: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80801F0C: lui         $v0, 0x208
    ctx->r2 = S32(0X208 << 16);
    // 0x80801F10: ori         $v0, $v0, 0x8AAD
    ctx->r2 = ctx->r2 | 0X8AAD;
    // 0x80801F14: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80801F18: lui         $v0, 0x8FFF
    ctx->r2 = S32(0X8FFF << 16);
    // 0x80801F1C: ori         $s4, $v0, 0xFFFF
    ctx->r20 = ctx->r2 | 0XFFFF;
    // 0x80801F20: ori         $at, $at, 0xD
    ctx->r1 = ctx->r1 | 0XD;
    // 0x80801F24: sw          $at, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r1;
    // 0x80801F28: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x80801F2C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80801F30: sw          $at, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r1;
L_80801F34:
    // 0x80801F34: lw          $at, 0x30($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X30);
    // 0x80801F38: beq         $at, $zero, L_80801F4C
    if (ctx->r1 == 0) {
        // 0x80801F3C: lw          $fp, -0x7B60($s2)
        ctx->r30 = MEM_W(ctx->r18, -0X7B60);
            goto L_80801F4C;
    }
    // 0x80801F3C: lw          $fp, -0x7B60($s2)
    ctx->r30 = MEM_W(ctx->r18, -0X7B60);
    // 0x80801F40: sw          $s0, -0x7B60($s2)
    MEM_W(-0X7B60, ctx->r18) = ctx->r16;
    // 0x80801F44: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80801F48: sw          $zero, -0x7ADC($at)
    MEM_W(-0X7ADC, ctx->r1) = 0;
L_80801F4C:
    // 0x80801F4C: lui         $at, 0x8089
    ctx->r1 = S32(0X8089 << 16);
    // 0x80801F50: lbu         $s3, -0x43D4($at)
    ctx->r19 = MEM_BU(ctx->r1, -0X43D4);
    // 0x80801F54: bne         $s3, $zero, L_8080200C
    if (ctx->r19 != 0) {
        // 0x80801F58: nop
    
            goto L_8080200C;
    }
    // 0x80801F58: nop

    // 0x80801F5C: lui         $at, 0x8089
    ctx->r1 = S32(0X8089 << 16);
    // 0x80801F60: lw          $at, -0x43D8($at)
    ctx->r1 = MEM_W(ctx->r1, -0X43D8);
    // 0x80801F64: srl         $v0, $at, 16
    ctx->r2 = S32(U32(ctx->r1) >> 16);
    // 0x80801F68: xor         $v0, $v0, $at
    ctx->r2 = ctx->r2 ^ ctx->r1;
    // 0x80801F6C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80801F70: mult        $v0, $a1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80801F74: mflo        $v0
    ctx->r2 = lo;
    // 0x80801F78: sll         $at, $at, 16
    ctx->r1 = S32(ctx->r1 << 16);
    // 0x80801F7C: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x80801F80: srl         $a0, $v1, 16
    ctx->r4 = S32(U32(ctx->r3) >> 16);
    // 0x80801F84: or          $at, $a0, $at
    ctx->r1 = ctx->r4 | ctx->r1;
    // 0x80801F88: xor         $at, $at, $v1
    ctx->r1 = ctx->r1 ^ ctx->r3;
    // 0x80801F8C: multu       $at, $a1
    result = U64(U32(ctx->r1)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80801F90: mfhi        $at
    ctx->r1 = hi;
    // 0x80801F94: mflo        $v1
    ctx->r3 = lo;
    // 0x80801F98: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80801F9C: srl         $v0, $at, 13
    ctx->r2 = S32(U32(ctx->r1) >> 13);
    // 0x80801FA0: xor         $v0, $v0, $at
    ctx->r2 = ctx->r2 ^ ctx->r1;
    // 0x80801FA4: mult        $v0, $s6
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80801FA8: mflo        $v0
    ctx->r2 = lo;
    // 0x80801FAC: sll         $at, $at, 19
    ctx->r1 = S32(ctx->r1 << 19);
    // 0x80801FB0: srl         $a0, $v1, 13
    ctx->r4 = S32(U32(ctx->r3) >> 13);
    // 0x80801FB4: or          $at, $a0, $at
    ctx->r1 = ctx->r4 | ctx->r1;
    // 0x80801FB8: mult        $at, $s6
    result = S64(S32(ctx->r1)) * S64(S32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80801FBC: mflo        $a0
    ctx->r4 = lo;
    // 0x80801FC0: xor         $at, $at, $v1
    ctx->r1 = ctx->r1 ^ ctx->r3;
    // 0x80801FC4: multu       $at, $s6
    result = U64(U32(ctx->r1)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80801FC8: mflo        $at
    ctx->r1 = lo;
    // 0x80801FCC: mfhi        $a1
    ctx->r5 = hi;
    // 0x80801FD0: lw          $a2, -0x3A34($s7)
    ctx->r6 = MEM_W(ctx->r23, -0X3A34);
    // 0x80801FD4: addiu       $a3, $a2, 0x10
    ctx->r7 = ADD32(ctx->r6, 0X10);
    // 0x80801FD8: sw          $a3, -0x3A34($s7)
    MEM_W(-0X3A34, ctx->r23) = ctx->r7;
    // 0x80801FDC: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80801FE0: sw          $a3, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r7;
    // 0x80801FE4: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x80801FE8: sw          $a3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r7;
    // 0x80801FEC: sw          $zero, 0xC($a2)
    MEM_W(0XC, ctx->r6) = 0;
    // 0x80801FF0: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x80801FF4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80801FF8: srl         $at, $at, 16
    ctx->r1 = S32(U32(ctx->r1) >> 16);
    // 0x80801FFC: or          $at, $at, $v0
    ctx->r1 = ctx->r1 | ctx->r2;
    // 0x80802000: xor         $at, $a0, $at
    ctx->r1 = ctx->r4 ^ ctx->r1;
    // 0x80802004: xor         $at, $at, $v1
    ctx->r1 = ctx->r1 ^ ctx->r3;
    // 0x80802008: sw          $at, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r1;
L_8080200C:
    // 0x8080200C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80802010: jal         0x80000000
    // 0x80802014: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800192D0_19ED0(rdram, ctx);
        goto after_0;
    // 0x80802014: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x80802018: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8080201C: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x80802020: and         $at, $v0, $at
    ctx->r1 = ctx->r2 & ctx->r1;
    // 0x80802024: bne         $at, $zero, L_80802048
    if (ctx->r1 != 0) {
        // 0x80802028: nop
    
            goto L_80802048;
    }
    // 0x80802028: nop

    // 0x8080202C: and         $a0, $v0, $s4
    ctx->r4 = ctx->r2 & ctx->r20;
    // 0x80802030: beq         $a0, $zero, L_808020D8
    if (ctx->r4 == 0) {
        // 0x80802034: nop
    
            goto L_808020D8;
    }
    // 0x80802034: nop

    // 0x80802038: jal         0x80000000
    // 0x8080203C: nop

    func_800196F0_1A2F0(rdram, ctx);
        goto after_1;
    // 0x8080203C: nop

    after_1:
    // 0x80802040: j           L_808020D8
    // 0x80802044: nop

        goto L_808020D8;
    // 0x80802044: nop

L_80802048:
    // 0x80802048: bltz        $v0, L_80802070
    if (SIGNED(ctx->r2) < 0) {
        // 0x8080204C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80802070;
    }
    // 0x8080204C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80802050: lw          $at, 0x14($sp)
    ctx->r1 = MEM_W(ctx->r29, 0X14);
    // 0x80802054: and         $at, $v0, $at
    ctx->r1 = ctx->r2 & ctx->r1;
    // 0x80802058: lw          $v1, -0x7B60($s2)
    ctx->r3 = MEM_W(ctx->r18, -0X7B60);
    // 0x8080205C: srl         $a0, $v0, 21
    ctx->r4 = S32(U32(ctx->r2) >> 21);
    // 0x80802060: andi        $a0, $a0, 0x78
    ctx->r4 = ctx->r4 & 0X78;
    // 0x80802064: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80802068: lw          $v1, -0x8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X8);
    // 0x8080206C: addu        $v1, $at, $v1
    ctx->r3 = ADD32(ctx->r1, ctx->r3);
L_80802070:
    // 0x80802070: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80802074: sw          $v0, -0x7B10($at)
    MEM_W(-0X7B10, ctx->r1) = ctx->r2;
    // 0x80802078: and         $s5, $v1, $s4
    ctx->r21 = ctx->r3 & ctx->r20;
    // 0x8080207C: lw          $a0, 0x0($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X0);
    // 0x80802080: beq         $a0, $zero, L_80802090
    if (ctx->r4 == 0) {
        // 0x80802084: nop
    
            goto L_80802090;
    }
    // 0x80802084: nop

    // 0x80802088: jal         0x80000000
    // 0x8080208C: nop

    func_800196F0_1A2F0(rdram, ctx);
        goto after_2;
    // 0x8080208C: nop

    after_2:
L_80802090:
    // 0x80802090: lb          $v0, 0x4($s5)
    ctx->r2 = MEM_B(ctx->r21, 0X4);
    // 0x80802094: beq         $v0, $zero, L_808020B4
    if (ctx->r2 == 0) {
        // 0x80802098: nop
    
            goto L_808020B4;
    }
    // 0x80802098: nop

    // 0x8080209C: sll         $at, $v0, 3
    ctx->r1 = S32(ctx->r2 << 3);
    // 0x808020A0: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x808020A4: addu        $at, $v0, $at
    ctx->r1 = ADD32(ctx->r2, ctx->r1);
    // 0x808020A8: addu        $a0, $s5, $at
    ctx->r4 = ADD32(ctx->r21, ctx->r1);
    // 0x808020AC: jal         0x80801EB0
    // 0x808020B0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80018CA0_198A0(rdram, ctx);
        goto after_3;
    // 0x808020B0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
L_808020B4:
    // 0x808020B4: lb          $v0, 0x5($s5)
    ctx->r2 = MEM_B(ctx->r21, 0X5);
    // 0x808020B8: beq         $v0, $zero, L_808020D8
    if (ctx->r2 == 0) {
        // 0x808020BC: nop
    
            goto L_808020D8;
    }
    // 0x808020BC: nop

    // 0x808020C0: sll         $at, $v0, 3
    ctx->r1 = S32(ctx->r2 << 3);
    // 0x808020C4: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x808020C8: addu        $at, $v0, $at
    ctx->r1 = ADD32(ctx->r2, ctx->r1);
    // 0x808020CC: addu        $a0, $s5, $at
    ctx->r4 = ADD32(ctx->r21, ctx->r1);
    // 0x808020D0: jal         0x80801EB0
    // 0x808020D4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80018CA0_198A0(rdram, ctx);
        goto after_4;
    // 0x808020D4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_4:
L_808020D8:
    // 0x808020D8: lhu         $at, 0xC($s1)
    ctx->r1 = MEM_HU(ctx->r17, 0XC);
    // 0x808020DC: lhu         $v0, 0xE($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XE);
    // 0x808020E0: or          $at, $v0, $at
    ctx->r1 = ctx->r2 | ctx->r1;
    // 0x808020E4: lhu         $v0, 0x10($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X10);
    // 0x808020E8: or          $at, $at, $v0
    ctx->r1 = ctx->r1 | ctx->r2;
    // 0x808020EC: andi        $at, $at, 0x4000
    ctx->r1 = ctx->r1 & 0X4000;
    // 0x808020F0: beq         $at, $zero, L_80802108
    if (ctx->r1 == 0) {
        // 0x808020F4: nop
    
            goto L_80802108;
    }
    // 0x808020F4: nop

    // 0x808020F8: jal         0x80000000
    // 0x808020FC: nop

    func_800196A4_1A2A4(rdram, ctx);
        goto after_5;
    // 0x808020FC: nop

    after_5:
    // 0x80802100: beq         $s3, $zero, L_808021E0
    if (ctx->r19 == 0) {
        // 0x80802104: nop
    
            goto L_808021E0;
    }
    // 0x80802104: nop

L_80802108:
    // 0x80802108: lw          $at, -0x7B60($s2)
    ctx->r1 = MEM_W(ctx->r18, -0X7B60);
    // 0x8080210C: beq         $fp, $at, L_80802120
    if (ctx->r30 == ctx->r1) {
        // 0x80802110: nop
    
            goto L_80802120;
    }
    // 0x80802110: nop

L_80802114:
    // 0x80802114: sw          $fp, -0x7B60($s2)
    MEM_W(-0X7B60, ctx->r18) = ctx->r30;
    // 0x80802118: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8080211C: sw          $zero, -0x7ADC($at)
    MEM_W(-0X7ADC, ctx->r1) = 0;
L_80802120:
    // 0x80802120: lbu         $at, 0x4($s1)
    ctx->r1 = MEM_BU(ctx->r17, 0X4);
    // 0x80802124: beq         $at, $zero, L_80802164
    if (ctx->r1 == 0) {
        // 0x80802128: nop
    
            goto L_80802164;
    }
    // 0x80802128: nop

    // 0x8080212C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80802130: jal         0x80000000
    // 0x80802134: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80018F3C_19B3C(rdram, ctx);
        goto after_6;
    // 0x80802134: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_6:
    // 0x80802138: beq         $v0, $zero, L_80802178
    if (ctx->r2 == 0) {
        // 0x8080213C: nop
    
            goto L_80802178;
    }
    // 0x8080213C: nop

    // 0x80802140: lb          $at, 0x4($s1)
    ctx->r1 = MEM_B(ctx->r17, 0X4);
    // 0x80802144: sll         $v1, $at, 3
    ctx->r3 = S32(ctx->r1 << 3);
    // 0x80802148: sll         $at, $at, 4
    ctx->r1 = S32(ctx->r1 << 4);
    // 0x8080214C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80802150: addu        $a0, $s1, $at
    ctx->r4 = ADD32(ctx->r17, ctx->r1);
    // 0x80802154: jal         0x80801EB0
    // 0x80802158: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_80018CA0_198A0(rdram, ctx);
        goto after_7;
    // 0x80802158: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_7:
    // 0x8080215C: j           L_80802178
    // 0x80802160: nop

        goto L_80802178;
    // 0x80802160: nop

L_80802164:
    // 0x80802164: lw          $at, 0x78($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X78);
    // 0x80802168: beq         $at, $zero, L_80802178
    if (ctx->r1 == 0) {
        // 0x8080216C: nop
    
            goto L_80802178;
    }
    // 0x8080216C: nop

    // 0x80802170: jal         0x80000000
    // 0x80802174: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8003674C_3734C(rdram, ctx);
        goto after_8;
    // 0x80802174: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
L_80802178:
    // 0x80802178: jal         0x80000000
    // 0x8080217C: nop

    func_800196A4_1A2A4(rdram, ctx);
        goto after_9;
    // 0x8080217C: nop

    after_9:
    // 0x80802180: bne         $s3, $zero, L_808021A4
    if (ctx->r19 != 0) {
        // 0x80802184: nop
    
            goto L_808021A4;
    }
    // 0x80802184: nop

    // 0x80802188: lw          $at, -0x3A34($s7)
    ctx->r1 = MEM_W(ctx->r23, -0X3A34);
    // 0x8080218C: addiu       $v0, $at, 0x8
    ctx->r2 = ADD32(ctx->r1, 0X8);
    // 0x80802190: sw          $v0, -0x3A34($s7)
    MEM_W(-0X3A34, ctx->r23) = ctx->r2;
    // 0x80802194: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80802198: sw          $v0, 0x4($at)
    MEM_W(0X4, ctx->r1) = ctx->r2;
    // 0x8080219C: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x808021A0: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
L_808021A4:
    // 0x808021A4: lbu         $at, 0x5($s1)
    ctx->r1 = MEM_BU(ctx->r17, 0X5);
    // 0x808021A8: beq         $at, $zero, L_80802210
    if (ctx->r1 == 0) {
        // 0x808021AC: nop
    
            goto L_80802210;
    }
    // 0x808021AC: nop

    // 0x808021B0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808021B4: jal         0x80000000
    // 0x808021B8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001904C_19C4C(rdram, ctx);
        goto after_10;
    // 0x808021B8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_10:
    // 0x808021BC: beq         $v0, $zero, L_80802224
    if (ctx->r2 == 0) {
        // 0x808021C0: nop
    
            goto L_80802224;
    }
    // 0x808021C0: nop

    // 0x808021C4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x808021C8: lb          $at, 0x5($s1)
    ctx->r1 = MEM_B(ctx->r17, 0X5);
    // 0x808021CC: sll         $v0, $at, 3
    ctx->r2 = S32(ctx->r1 << 3);
    // 0x808021D0: sll         $at, $at, 4
    ctx->r1 = S32(ctx->r1 << 4);
    // 0x808021D4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x808021D8: j           L_80801F34
    // 0x808021DC: addu        $s1, $s1, $at
    ctx->r17 = ADD32(ctx->r17, ctx->r1);
        goto L_80801F34;
    // 0x808021DC: addu        $s1, $s1, $at
    ctx->r17 = ADD32(ctx->r17, ctx->r1);
L_808021E0:
    // 0x808021E0: lw          $at, -0x3A34($s7)
    ctx->r1 = MEM_W(ctx->r23, -0X3A34);
    // 0x808021E4: addiu       $v0, $at, 0x8
    ctx->r2 = ADD32(ctx->r1, 0X8);
    // 0x808021E8: sw          $v0, -0x3A34($s7)
    MEM_W(-0X3A34, ctx->r23) = ctx->r2;
    // 0x808021EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x808021F0: sw          $v0, 0x4($at)
    MEM_W(0X4, ctx->r1) = ctx->r2;
    // 0x808021F4: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x808021F8: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
    // 0x808021FC: lw          $at, -0x7B60($s2)
    ctx->r1 = MEM_W(ctx->r18, -0X7B60);
    // 0x80802200: bne         $fp, $at, L_80802114
    if (ctx->r30 != ctx->r1) {
        // 0x80802204: nop
    
            goto L_80802114;
    }
    // 0x80802204: nop

    // 0x80802208: j           L_80802120
    // 0x8080220C: nop

        goto L_80802120;
    // 0x8080220C: nop

L_80802210:
    // 0x80802210: lw          $at, 0x74($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X74);
    // 0x80802214: beq         $at, $zero, L_80802224
    if (ctx->r1 == 0) {
        // 0x80802218: nop
    
            goto L_80802224;
    }
    // 0x80802218: nop

    // 0x8080221C: jal         0x80000000
    // 0x80802220: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80036798_37398(rdram, ctx);
        goto after_11;
    // 0x80802220: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
L_80802224:
    // 0x80802224: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80802228: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8080222C: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80802230: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80802234: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x80802238: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x8080223C: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x80802240: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x80802244: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x80802248: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x8080224C: jr          $ra
    // 0x80802250: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x80802250: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80021740_22340(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80802254: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80802258: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080225C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80802260: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80802264: lbu         $at, 0xE($a0)
    ctx->r1 = MEM_BU(ctx->r4, 0XE);
    // 0x80802268: andi        $at, $at, 0x20
    ctx->r1 = ctx->r1 & 0X20;
    // 0x8080226C: bne         $at, $zero, L_808022B4
    if (ctx->r1 != 0) {
        // 0x80802270: nop
    
            goto L_808022B4;
    }
    // 0x80802270: nop

    // 0x80802274: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80802278: lw          $s1, -0x3A34($at)
    ctx->r17 = MEM_W(ctx->r1, -0X3A34);
    // 0x8080227C: addiu       $v0, $s1, 0x8
    ctx->r2 = ADD32(ctx->r17, 0X8);
    // 0x80802280: sw          $v0, -0x3A34($at)
    MEM_W(-0X3A34, ctx->r1) = ctx->r2;
    // 0x80802284: lui         $at, 0xBC00
    ctx->r1 = S32(0XBC00 << 16);
    // 0x80802288: ori         $at, $at, 0x2006
    ctx->r1 = ctx->r1 | 0X2006;
    // 0x8080228C: sw          $at, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r1;
    // 0x80802290: lh          $at, 0xC($a0)
    ctx->r1 = MEM_H(ctx->r4, 0XC);
    // 0x80802294: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80802298: jal         0x80000000
    // 0x8080229C: or          $a0, $at, $zero
    ctx->r4 = ctx->r1 | 0;
    func_800141C4_14DC4(rdram, ctx);
        goto after_0;
    // 0x8080229C: or          $a0, $at, $zero
    ctx->r4 = ctx->r1 | 0;
    after_0:
    // 0x808022A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808022A4: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x808022A8: sw          $v0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r2;
    // 0x808022AC: j           L_808022CC
    // 0x808022B0: sw          $v1, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r3;
        goto L_808022CC;
    // 0x808022B0: sw          $v1, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r3;
L_808022B4:
    // 0x808022B4: lw          $v1, 0x38($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X38);
    // 0x808022B8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x808022BC: bne         $v1, $v0, L_808022CC
    if (ctx->r3 != ctx->r2) {
        // 0x808022C0: nop
    
            goto L_808022CC;
    }
    // 0x808022C0: nop

    // 0x808022C4: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x808022C8: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
L_808022CC:
    // 0x808022CC: lhu         $a1, 0xE($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0XE);
    // 0x808022D0: sll         $at, $a1, 16
    ctx->r1 = S32(ctx->r5 << 16);
    // 0x808022D4: sra         $v0, $at, 16
    ctx->r2 = S32(SIGNED(ctx->r1) >> 16);
    // 0x808022D8: andi        $at, $a1, 0x4
    ctx->r1 = ctx->r5 & 0X4;
    // 0x808022DC: bne         $at, $zero, L_80802308
    if (ctx->r1 != 0) {
        // 0x808022E0: nop
    
            goto L_80802308;
    }
    // 0x808022E0: nop

    // 0x808022E4: andi        $at, $a1, 0x8
    ctx->r1 = ctx->r5 & 0X8;
    // 0x808022E8: bne         $at, $zero, L_8080233C
    if (ctx->r1 != 0) {
        // 0x808022EC: nop
    
            goto L_8080233C;
    }
    // 0x808022EC: nop

    // 0x808022F0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x808022F4: andi        $at, $v0, 0x2000
    ctx->r1 = ctx->r2 & 0X2000;
    // 0x808022F8: bne         $at, $zero, L_80802318
    if (ctx->r1 != 0) {
        // 0x808022FC: sh          $a1, 0x40($a0)
        MEM_H(0X40, ctx->r4) = ctx->r5;
            goto L_80802318;
    }
    // 0x808022FC: sh          $a1, 0x40($a0)
    MEM_H(0X40, ctx->r4) = ctx->r5;
    // 0x80802300: j           L_8080234C
    // 0x80802304: nop

        goto L_8080234C;
    // 0x80802304: nop

L_80802308:
    // 0x80802308: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8080230C: andi        $at, $v0, 0x2000
    ctx->r1 = ctx->r2 & 0X2000;
    // 0x80802310: beq         $at, $zero, L_8080234C
    if (ctx->r1 == 0) {
        // 0x80802314: sh          $a1, 0x40($a0)
        MEM_H(0X40, ctx->r4) = ctx->r5;
            goto L_8080234C;
    }
    // 0x80802314: sh          $a1, 0x40($a0)
    MEM_H(0X40, ctx->r4) = ctx->r5;
L_80802318:
    // 0x80802318: andi        $at, $v0, 0x4000
    ctx->r1 = ctx->r2 & 0X4000;
    // 0x8080231C: bne         $at, $zero, L_80802394
    if (ctx->r1 != 0) {
        // 0x80802320: nop
    
            goto L_80802394;
    }
    // 0x80802320: nop

L_80802324:
    // 0x80802324: bltz        $v0, L_808023A4
    if (SIGNED(ctx->r2) < 0) {
        // 0x80802328: nop
    
            goto L_808023A4;
    }
    // 0x80802328: nop

    // 0x8080232C: jal         0x80802970
    // 0x80802330: nop

    func_80022A74_23674(rdram, ctx);
        goto after_1;
    // 0x80802330: nop

    after_1:
    // 0x80802334: j           L_808023B8
    // 0x80802338: nop

        goto L_808023B8;
    // 0x80802338: nop

L_8080233C:
    // 0x8080233C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80802340: andi        $at, $v0, 0x2000
    ctx->r1 = ctx->r2 & 0X2000;
    // 0x80802344: bne         $at, $zero, L_80802318
    if (ctx->r1 != 0) {
        // 0x80802348: sh          $a1, 0x40($a0)
        MEM_H(0X40, ctx->r4) = ctx->r5;
            goto L_80802318;
    }
    // 0x80802348: sh          $a1, 0x40($a0)
    MEM_H(0X40, ctx->r4) = ctx->r5;
L_8080234C:
    // 0x8080234C: lh          $at, 0x10($a0)
    ctx->r1 = MEM_H(ctx->r4, 0X10);
    // 0x80802350: lh          $a2, 0x12($a0)
    ctx->r6 = MEM_H(ctx->r4, 0X12);
    // 0x80802354: mult        $a2, $at
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r1)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80802358: mflo        $at
    ctx->r1 = lo;
    // 0x8080235C: nop

    // 0x80802360: nop

    // 0x80802364: mult        $at, $a1
    result = S64(S32(ctx->r1)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80802368: mflo        $a1
    ctx->r5 = lo;
    // 0x8080236C: slti        $at, $a1, 0x0
    ctx->r1 = SIGNED(ctx->r5) < 0X0 ? 1 : 0;
    // 0x80802370: beq         $at, $zero, L_8080237C
    if (ctx->r1 == 0) {
        // 0x80802374: nop
    
            goto L_8080237C;
    }
    // 0x80802374: nop

    // 0x80802378: addiu       $a1, $a1, 0x7
    ctx->r5 = ADD32(ctx->r5, 0X7);
L_8080237C:
    // 0x8080237C: sra         $at, $a1, 3
    ctx->r1 = S32(SIGNED(ctx->r5) >> 3);
    // 0x80802380: addu        $at, $v1, $at
    ctx->r1 = ADD32(ctx->r3, ctx->r1);
    // 0x80802384: sw          $at, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r1;
    // 0x80802388: andi        $at, $v0, 0x4000
    ctx->r1 = ctx->r2 & 0X4000;
    // 0x8080238C: beq         $at, $zero, L_80802324
    if (ctx->r1 == 0) {
        // 0x80802390: nop
    
            goto L_80802324;
    }
    // 0x80802390: nop

L_80802394:
    // 0x80802394: jal         0x808023CC
    // 0x80802398: nop

    func_80022214_22E14(rdram, ctx);
        goto after_2;
    // 0x80802398: nop

    after_2:
    // 0x8080239C: j           L_808023B8
    // 0x808023A0: nop

        goto L_808023B8;
    // 0x808023A0: nop

L_808023A4:
    // 0x808023A4: lw          $a3, 0x18($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X18);
    // 0x808023A8: lw          $a2, 0x14($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X14);
    // 0x808023AC: lw          $a1, 0x3C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X3C);
    // 0x808023B0: jal         0x80802610
    // 0x808023B4: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    func_80021894_22494(rdram, ctx);
        goto after_3;
    // 0x808023B4: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    after_3:
L_808023B8:
    // 0x808023B8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x808023BC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x808023C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808023C4: jr          $ra
    // 0x808023C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x808023C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80022A74_23674(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80802970: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x80802974: sdc1        $f24, 0x78($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X78, ctx->r29);
    // 0x80802978: sdc1        $f22, 0x70($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X70, ctx->r29);
    // 0x8080297C: sdc1        $f20, 0x68($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X68, ctx->r29);
    // 0x80802980: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x80802984: sw          $fp, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r30;
    // 0x80802988: sw          $s7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r23;
    // 0x8080298C: sw          $s6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r22;
    // 0x80802990: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x80802994: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x80802998: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x8080299C: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x808029A0: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x808029A4: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x808029A8: lwc1        $f0, 0x24($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X24);
    // 0x808029AC: trunc.w.s   $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x808029B0: mfc1        $at, $f0
    ctx->r1 = (int32_t)ctx->f0.u32l;
    // 0x808029B4: nop

    // 0x808029B8: blez        $at, L_80802BD4
    if (SIGNED(ctx->r1) <= 0) {
        // 0x808029BC: sw          $at, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r1;
            goto L_80802BD4;
    }
    // 0x808029BC: sw          $at, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r1;
    // 0x808029C0: lh          $s3, 0x10($a0)
    ctx->r19 = MEM_H(ctx->r4, 0X10);
    // 0x808029C4: blez        $s3, L_80802BD4
    if (SIGNED(ctx->r19) <= 0) {
        // 0x808029C8: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_80802BD4;
    }
    // 0x808029C8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808029CC: lh          $s4, 0x12($s0)
    ctx->r20 = MEM_H(ctx->r16, 0X12);
    // 0x808029D0: blez        $s4, L_80802BD4
    if (SIGNED(ctx->r20) <= 0) {
        // 0x808029D4: nop
    
            goto L_80802BD4;
    }
    // 0x808029D4: nop

    // 0x808029D8: lwc1        $f22, 0x18($s0)
    ctx->f22.u32l = MEM_W(ctx->r16, 0X18);
    // 0x808029DC: lwc1        $f20, 0x20($s0)
    ctx->f20.u32l = MEM_W(ctx->r16, 0X20);
    // 0x808029E0: lwc1        $f0, 0x28($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X28);
    // 0x808029E4: trunc.w.s   $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x808029E8: mfc1        $s6, $f0
    ctx->r22 = (int32_t)ctx->f0.u32l;
    // 0x808029EC: lwc1        $f0, 0x14($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X14);
    // 0x808029F0: trunc.w.s   $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x808029F4: mfc1        $s1, $f0
    ctx->r17 = (int32_t)ctx->f0.u32l;
    // 0x808029F8: lwc1        $f24, 0x1C($s0)
    ctx->f24.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x808029FC: jal         0x808031E0
    // 0x80802A00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80022EC0_23AC0(rdram, ctx);
        goto after_0;
    // 0x80802A00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80802A04: addiu       $v1, $zero, 0x800
    ctx->r3 = ADD32(0, 0X800);
    // 0x80802A08: lw          $at, 0x3C($sp)
    ctx->r1 = MEM_W(ctx->r29, 0X3C);
    // 0x80802A0C: divu        $zero, $v1, $at
    lo = S32(U32(ctx->r3) / U32(ctx->r1)); hi = S32(U32(ctx->r3) % U32(ctx->r1));
    // 0x80802A10: mflo        $at
    ctx->r1 = lo;
    // 0x80802A14: sw          $at, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r1;
    // 0x80802A18: mfhi        $at
    ctx->r1 = hi;
    // 0x80802A1C: sw          $at, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r1;
    // 0x80802A20: nop

    // 0x80802A24: div         $zero, $s1, $s3
    lo = S32(S64(S32(ctx->r17)) / S64(S32(ctx->r19))); hi = S32(S64(S32(ctx->r17)) % S64(S32(ctx->r19)));
    // 0x80802A28: mflo        $at
    ctx->r1 = lo;
    // 0x80802A2C: sw          $at, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r1;
    // 0x80802A30: mfhi        $at
    ctx->r1 = hi;
    // 0x80802A34: blez        $s6, L_80802BD4
    if (SIGNED(ctx->r22) <= 0) {
        // 0x80802A38: sw          $at, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r1;
            goto L_80802BD4;
    }
    // 0x80802A38: sw          $at, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r1;
    // 0x80802A3C: trunc.w.s   $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    ctx->f0.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x80802A40: mfc1        $at, $f0
    ctx->r1 = (int32_t)ctx->f0.u32l;
    // 0x80802A44: trunc.w.s   $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x80802A48: mfc1        $s1, $f0
    ctx->r17 = (int32_t)ctx->f0.u32l;
    // 0x80802A4C: trunc.w.s   $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    ctx->f0.u32l = TRUNC_W_S(ctx->f24.fl);
    // 0x80802A50: mfc1        $v0, $f0
    ctx->r2 = (int32_t)ctx->f0.u32l;
    // 0x80802A54: nop

    // 0x80802A58: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x80802A5C: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x80802A60: mtlo        $v0
    lo = ctx->r2;
    // 0x80802A64: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x80802A68: mthi        $v0
    hi = ctx->r2;
    // 0x80802A6C: mflo        $fp
    ctx->r30 = lo;
    // 0x80802A70: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x80802A74: mtlo        $v0
    lo = ctx->r2;
    // 0x80802A78: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x80802A7C: mthi        $v0
    hi = ctx->r2;
    // 0x80802A80: mfhi        $v0
    ctx->r2 = hi;
    // 0x80802A84: sra         $a0, $v0, 31
    ctx->r4 = S32(SIGNED(ctx->r2) >> 31);
    // 0x80802A88: and         $a0, $a0, $s3
    ctx->r4 = ctx->r4 & ctx->r19;
    // 0x80802A8C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80802A90: div         $zero, $at, $s4
    lo = S32(S64(S32(ctx->r1)) / S64(S32(ctx->r20))); hi = S32(S64(S32(ctx->r1)) % S64(S32(ctx->r20)));
    // 0x80802A94: mfhi        $at
    ctx->r1 = hi;
    // 0x80802A98: sra         $v0, $at, 31
    ctx->r2 = S32(SIGNED(ctx->r1) >> 31);
    // 0x80802A9C: and         $v0, $v0, $s4
    ctx->r2 = ctx->r2 & ctx->r20;
    // 0x80802AA0: addu        $s4, $v0, $at
    ctx->r20 = ADD32(ctx->r2, ctx->r1);
    // 0x80802AA4: lw          $at, 0x3C($sp)
    ctx->r1 = MEM_W(ctx->r29, 0X3C);
    // 0x80802AA8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80802AAC: addu        $s2, $a0, $at
    ctx->r18 = ADD32(ctx->r4, ctx->r1);
    // 0x80802AB0: lhu         $v0, 0x12($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X12);
    // 0x80802AB4: sltu        $s3, $v1, $at
    ctx->r19 = ctx->r3 < ctx->r1 ? 1 : 0;
    // 0x80802AB8: j           L_80802ACC
    // 0x80802ABC: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
        goto L_80802ACC;
    // 0x80802ABC: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
L_80802AC0:
    // 0x80802AC0: subu        $s6, $s6, $s5
    ctx->r22 = SUB32(ctx->r22, ctx->r21);
    // 0x80802AC4: blez        $s6, L_80802BD4
    if (SIGNED(ctx->r22) <= 0) {
        // 0x80802AC8: addu        $s1, $s5, $s1
        ctx->r17 = ADD32(ctx->r21, ctx->r17);
            goto L_80802BD4;
    }
    // 0x80802AC8: addu        $s1, $s5, $s1
    ctx->r17 = ADD32(ctx->r21, ctx->r17);
L_80802ACC:
    // 0x80802ACC: slt         $at, $s6, $fp
    ctx->r1 = SIGNED(ctx->r22) < SIGNED(ctx->r30) ? 1 : 0;
    // 0x80802AD0: bne         $at, $zero, L_80802ADC
    if (ctx->r1 != 0) {
        // 0x80802AD4: or          $v1, $s6, $zero
        ctx->r3 = ctx->r22 | 0;
            goto L_80802ADC;
    }
    // 0x80802AD4: or          $v1, $s6, $zero
    ctx->r3 = ctx->r22 | 0;
    // 0x80802AD8: or          $v1, $fp, $zero
    ctx->r3 = ctx->r30 | 0;
L_80802ADC:
    // 0x80802ADC: bne         $s3, $zero, L_80802AE8
    if (ctx->r19 != 0) {
        // 0x80802AE0: addiu       $s5, $zero, 0x1
        ctx->r21 = ADD32(0, 0X1);
            goto L_80802AE8;
    }
    // 0x80802AE0: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x80802AE4: or          $s5, $v1, $zero
    ctx->r21 = ctx->r3 | 0;
L_80802AE8:
    // 0x80802AE8: sll         $at, $v0, 16
    ctx->r1 = S32(ctx->r2 << 16);
    // 0x80802AEC: sra         $at, $at, 16
    ctx->r1 = S32(SIGNED(ctx->r1) >> 16);
    // 0x80802AF0: subu        $v1, $at, $s4
    ctx->r3 = SUB32(ctx->r1, ctx->r20);
    // 0x80802AF4: slt         $at, $s5, $v1
    ctx->r1 = SIGNED(ctx->r21) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80802AF8: bne         $at, $zero, L_80802B04
    if (ctx->r1 != 0) {
        // 0x80802AFC: nop
    
            goto L_80802B04;
    }
    // 0x80802AFC: nop

    // 0x80802B00: or          $s5, $v1, $zero
    ctx->r21 = ctx->r3 | 0;
L_80802B04:
    // 0x80802B04: blez        $s5, L_80802B80
    if (SIGNED(ctx->r21) <= 0) {
        // 0x80802B08: nop
    
            goto L_80802B80;
    }
    // 0x80802B08: nop

    // 0x80802B0C: lh          $v0, 0x10($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X10);
    // 0x80802B10: slt         $at, $v0, $s2
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x80802B14: beq         $at, $zero, L_80802B90
    if (ctx->r1 == 0) {
        // 0x80802B18: nop
    
            goto L_80802B90;
    }
    // 0x80802B18: nop

    // 0x80802B1C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80802B20: sw          $s5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r21;
    // 0x80802B24: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x80802B28: subu        $s2, $v0, $a2
    ctx->r18 = SUB32(ctx->r2, ctx->r6);
    // 0x80802B2C: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x80802B30: or          $s7, $s3, $zero
    ctx->r23 = ctx->r19 | 0;
    // 0x80802B34: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x80802B38: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80802B3C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80802B40: jal         0x80803554
    // 0x80802B44: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    func_80022500_23100(rdram, ctx);
        goto after_1;
    // 0x80802B44: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    after_1:
    // 0x80802B48: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80802B4C: sw          $s5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r21;
    // 0x80802B50: lw          $at, 0x3C($sp)
    ctx->r1 = MEM_W(ctx->r29, 0X3C);
    // 0x80802B54: subu        $at, $at, $s2
    ctx->r1 = SUB32(ctx->r1, ctx->r18);
    // 0x80802B58: sw          $at, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r1;
    // 0x80802B5C: addu        $a0, $s2, $s3
    ctx->r4 = ADD32(ctx->r18, ctx->r19);
    // 0x80802B60: or          $s3, $s7, $zero
    ctx->r19 = ctx->r23 | 0;
    // 0x80802B64: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80802B68: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80802B6C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80802B70: jal         0x80803554
    // 0x80802B74: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    func_80022500_23100(rdram, ctx);
        goto after_2;
    // 0x80802B74: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    after_2:
    // 0x80802B78: j           L_80802BB4
    // 0x80802B7C: nop

        goto L_80802BB4;
    // 0x80802B7C: nop

L_80802B80:
    // 0x80802B80: bgtz        $s6, L_80802ACC
    if (SIGNED(ctx->r22) > 0) {
        // 0x80802B84: addiu       $s4, $zero, 0x0
        ctx->r20 = ADD32(0, 0X0);
            goto L_80802ACC;
    }
    // 0x80802B84: addiu       $s4, $zero, 0x0
    ctx->r20 = ADD32(0, 0X0);
    // 0x80802B88: j           L_80802BD4
    // 0x80802B8C: nop

        goto L_80802BD4;
    // 0x80802B8C: nop

L_80802B90:
    // 0x80802B90: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80802B94: sw          $s5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r21;
    // 0x80802B98: lw          $at, 0x3C($sp)
    ctx->r1 = MEM_W(ctx->r29, 0X3C);
    // 0x80802B9C: sw          $at, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r1;
    // 0x80802BA0: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80802BA4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80802BA8: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x80802BAC: jal         0x80803554
    // 0x80802BB0: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    func_80022500_23100(rdram, ctx);
        goto after_3;
    // 0x80802BB0: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    after_3:
L_80802BB4:
    // 0x80802BB4: addu        $v1, $s5, $s4
    ctx->r3 = ADD32(ctx->r21, ctx->r20);
    // 0x80802BB8: lh          $v0, 0x12($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X12);
    // 0x80802BBC: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80802BC0: xori        $at, $at, 0x1
    ctx->r1 = ctx->r1 ^ 0X1;
    // 0x80802BC4: bne         $at, $zero, L_80802AC0
    if (ctx->r1 != 0) {
        // 0x80802BC8: addiu       $s4, $zero, 0x0
        ctx->r20 = ADD32(0, 0X0);
            goto L_80802AC0;
    }
    // 0x80802BC8: addiu       $s4, $zero, 0x0
    ctx->r20 = ADD32(0, 0X0);
    // 0x80802BCC: j           L_80802AC0
    // 0x80802BD0: or          $s4, $v1, $zero
    ctx->r20 = ctx->r3 | 0;
        goto L_80802AC0;
    // 0x80802BD0: or          $s4, $v1, $zero
    ctx->r20 = ctx->r3 | 0;
L_80802BD4:
    // 0x80802BD4: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x80802BD8: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x80802BDC: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x80802BE0: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x80802BE4: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x80802BE8: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x80802BEC: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x80802BF0: lw          $s7, 0x5C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X5C);
    // 0x80802BF4: lw          $fp, 0x60($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X60);
    // 0x80802BF8: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x80802BFC: ldc1        $f20, 0x68($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X68);
    // 0x80802C00: ldc1        $f22, 0x70($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X70);
    // 0x80802C04: ldc1        $f24, 0x78($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X78);
    // 0x80802C08: jr          $ra
    // 0x80802C0C: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x80802C0C: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_80022214_22E14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808023CC: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x808023D0: sdc1        $f30, 0x70($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X70, ctx->r29);
    // 0x808023D4: sdc1        $f28, 0x68($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X68, ctx->r29);
    // 0x808023D8: sdc1        $f26, 0x60($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X60, ctx->r29);
    // 0x808023DC: sdc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X58, ctx->r29);
    // 0x808023E0: sdc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X50, ctx->r29);
    // 0x808023E4: sdc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X48, ctx->r29);
    // 0x808023E8: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x808023EC: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x808023F0: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x808023F4: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x808023F8: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x808023FC: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80802400: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80802404: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80802408: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8080240C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80802410: lwc1        $f20, 0x18($a0)
    ctx->f20.u32l = MEM_W(ctx->r4, 0X18);
    // 0x80802414: lwc1        $f22, 0x1C($a0)
    ctx->f22.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x80802418: lwc1        $f30, 0x28($a0)
    ctx->f30.u32l = MEM_W(ctx->r4, 0X28);
    // 0x8080241C: lwc1        $f24, 0x20($a0)
    ctx->f24.u32l = MEM_W(ctx->r4, 0X20);
    // 0x80802420: lwc1        $f26, 0x14($a0)
    ctx->f26.u32l = MEM_W(ctx->r4, 0X14);
    // 0x80802424: lwc1        $f28, 0x24($a0)
    ctx->f28.u32l = MEM_W(ctx->r4, 0X24);
    // 0x80802428: jal         0x808031E0
    // 0x8080242C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_80022EC0_23AC0(rdram, ctx);
        goto after_0;
    // 0x8080242C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80802430: trunc.w.s   $f0, $f30
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    ctx->f0.u32l = TRUNC_W_S(ctx->f30.fl);
    // 0x80802434: mfc1        $v0, $f0
    ctx->r2 = (int32_t)ctx->f0.u32l;
    // 0x80802438: nop

    // 0x8080243C: blez        $v0, L_808025C8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80802440: nop
    
            goto L_808025C8;
    }
    // 0x80802440: nop

    // 0x80802444: lui         $at, 0x8080
    ctx->r1 = S32(0X8080 << 16);
    // 0x80802448: lwc1        $f0, 0x5214($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5214);
    // 0x8080244C: trunc.w.s   $f2, $f28
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 28);
    ctx->f2.u32l = TRUNC_W_S(ctx->f28.fl);
    // 0x80802450: mfc1        $s1, $f2
    ctx->r17 = (int32_t)ctx->f2.u32l;
    // 0x80802454: nop

    // 0x80802458: mtc1        $s1, $f2
    ctx->f2.u32l = ctx->r17;
    // 0x8080245C: nop

    // 0x80802460: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x80802464: div.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    // 0x80802468: trunc.w.s   $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x8080246C: trunc.w.s   $f2, $f26
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    ctx->f2.u32l = TRUNC_W_S(ctx->f26.fl);
    // 0x80802470: trunc.w.s   $f4, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    ctx->f4.u32l = TRUNC_W_S(ctx->f24.fl);
    // 0x80802474: mfc1        $s2, $f4
    ctx->r18 = (int32_t)ctx->f4.u32l;
    // 0x80802478: nop

    // 0x8080247C: addu        $s3, $v0, $s2
    ctx->r19 = ADD32(ctx->r2, ctx->r18);
    // 0x80802480: mfc1        $s4, $f0
    ctx->r20 = (int32_t)ctx->f0.u32l;
    // 0x80802484: nop

    // 0x80802488: mfc1        $s5, $f2
    ctx->r21 = (int32_t)ctx->f2.u32l;
    // 0x8080248C: trunc.w.s   $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    ctx->f0.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x80802490: mfc1        $s6, $f0
    ctx->r22 = (int32_t)ctx->f0.u32l;
    // 0x80802494: trunc.w.s   $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x80802498: j           L_808024B0
    // 0x8080249C: mfc1        $s7, $f0
    ctx->r23 = (int32_t)ctx->f0.u32l;
        goto L_808024B0;
    // 0x8080249C: mfc1        $s7, $f0
    ctx->r23 = (int32_t)ctx->f0.u32l;
L_808024A0:
    // 0x808024A0: addu        $s2, $fp, $s2
    ctx->r18 = ADD32(ctx->r30, ctx->r18);
    // 0x808024A4: slt         $at, $s2, $s3
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x808024A8: beq         $at, $zero, L_808025C8
    if (ctx->r1 == 0) {
        // 0x808024AC: addu        $s7, $fp, $s7
        ctx->r23 = ADD32(ctx->r30, ctx->r23);
            goto L_808025C8;
    }
    // 0x808024AC: addu        $s7, $fp, $s7
    ctx->r23 = ADD32(ctx->r30, ctx->r23);
L_808024B0:
    // 0x808024B0: addu        $at, $s2, $s4
    ctx->r1 = ADD32(ctx->r18, ctx->r20);
    // 0x808024B4: slt         $at, $s3, $at
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x808024B8: bne         $at, $zero, L_808024C8
    if (ctx->r1 != 0) {
        // 0x808024BC: nop
    
            goto L_808024C8;
    }
    // 0x808024BC: nop

    // 0x808024C0: j           L_808024CC
    // 0x808024C4: or          $fp, $s4, $zero
    ctx->r30 = ctx->r20 | 0;
        goto L_808024CC;
    // 0x808024C4: or          $fp, $s4, $zero
    ctx->r30 = ctx->r20 | 0;
L_808024C8:
    // 0x808024C8: subu        $fp, $s3, $s2
    ctx->r30 = SUB32(ctx->r19, ctx->r18);
L_808024CC:
    // 0x808024CC: lh          $v1, 0x10($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X10);
    // 0x808024D0: blez        $v1, L_808024EC
    if (SIGNED(ctx->r3) <= 0) {
        // 0x808024D4: or          $v0, $s5, $zero
        ctx->r2 = ctx->r21 | 0;
            goto L_808024EC;
    }
    // 0x808024D4: or          $v0, $s5, $zero
    ctx->r2 = ctx->r21 | 0;
    // 0x808024D8: div         $zero, $s5, $v1
    lo = S32(S64(S32(ctx->r21)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r21)) % S64(S32(ctx->r3)));
    // 0x808024DC: mfhi        $at
    ctx->r1 = hi;
    // 0x808024E0: sra         $v0, $at, 31
    ctx->r2 = S32(SIGNED(ctx->r1) >> 31);
    // 0x808024E4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x808024E8: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
L_808024EC:
    // 0x808024EC: lh          $a0, 0x12($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X12);
    // 0x808024F0: blez        $a0, L_8080250C
    if (SIGNED(ctx->r4) <= 0) {
        // 0x808024F4: or          $v1, $s7, $zero
        ctx->r3 = ctx->r23 | 0;
            goto L_8080250C;
    }
    // 0x808024F4: or          $v1, $s7, $zero
    ctx->r3 = ctx->r23 | 0;
    // 0x808024F8: div         $zero, $s7, $a0
    lo = S32(S64(S32(ctx->r23)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r23)) % S64(S32(ctx->r4)));
    // 0x808024FC: mfhi        $at
    ctx->r1 = hi;
    // 0x80802500: sra         $v1, $at, 31
    ctx->r3 = S32(SIGNED(ctx->r1) >> 31);
    // 0x80802504: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
    // 0x80802508: addu        $v1, $v1, $at
    ctx->r3 = ADD32(ctx->r3, ctx->r1);
L_8080250C:
    // 0x8080250C: lh          $a1, 0x2E($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X2E);
    // 0x80802510: lh          $t0, 0x30($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X30);
    // 0x80802514: slt         $at, $s2, $t0
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80802518: xori        $at, $at, 0x1
    ctx->r1 = ctx->r1 ^ 0X1;
    // 0x8080251C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80802520: bne         $at, $zero, L_8080252C
    if (ctx->r1 != 0) {
        // 0x80802524: addiu       $a3, $zero, 0x0
        ctx->r7 = ADD32(0, 0X0);
            goto L_8080252C;
    }
    // 0x80802524: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80802528: subu        $a3, $t0, $s2
    ctx->r7 = SUB32(ctx->r8, ctx->r18);
L_8080252C:
    // 0x8080252C: slt         $at, $s6, $a1
    ctx->r1 = SIGNED(ctx->r22) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80802530: xori        $at, $at, 0x1
    ctx->r1 = ctx->r1 ^ 0X1;
    // 0x80802534: bne         $at, $zero, L_80802540
    if (ctx->r1 != 0) {
        // 0x80802538: nop
    
            goto L_80802540;
    }
    // 0x80802538: nop

    // 0x8080253C: subu        $a2, $a1, $s6
    ctx->r6 = SUB32(ctx->r5, ctx->r22);
L_80802540:
    // 0x80802540: slt         $at, $a1, $s6
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x80802544: bne         $at, $zero, L_80802550
    if (ctx->r1 != 0) {
        // 0x80802548: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_80802550;
    }
    // 0x80802548: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x8080254C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
L_80802550:
    // 0x80802550: slt         $at, $t0, $s2
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x80802554: bne         $at, $zero, L_80802560
    if (ctx->r1 != 0) {
        // 0x80802558: or          $a1, $s2, $zero
        ctx->r5 = ctx->r18 | 0;
            goto L_80802560;
    }
    // 0x80802558: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x8080255C: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
L_80802560:
    // 0x80802560: subu        $t0, $fp, $a3
    ctx->r8 = SUB32(ctx->r30, ctx->r7);
    // 0x80802564: addu        $at, $t0, $a1
    ctx->r1 = ADD32(ctx->r8, ctx->r5);
    // 0x80802568: lh          $t1, 0x34($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X34);
    // 0x8080256C: slt         $at, $t1, $at
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x80802570: lh          $t2, 0x32($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X32);
    // 0x80802574: beq         $at, $zero, L_80802580
    if (ctx->r1 == 0) {
        // 0x80802578: nop
    
            goto L_80802580;
    }
    // 0x80802578: nop

    // 0x8080257C: subu        $t0, $t1, $a1
    ctx->r8 = SUB32(ctx->r9, ctx->r5);
L_80802580:
    // 0x80802580: subu        $t1, $s1, $a2
    ctx->r9 = SUB32(ctx->r17, ctx->r6);
    // 0x80802584: addu        $at, $t1, $a0
    ctx->r1 = ADD32(ctx->r9, ctx->r4);
    // 0x80802588: slt         $at, $t2, $at
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x8080258C: beq         $at, $zero, L_80802598
    if (ctx->r1 == 0) {
        // 0x80802590: nop
    
            goto L_80802598;
    }
    // 0x80802590: nop

    // 0x80802594: subu        $t1, $t2, $a0
    ctx->r9 = SUB32(ctx->r10, ctx->r4);
L_80802598:
    // 0x80802598: blez        $t1, L_808024A0
    if (SIGNED(ctx->r9) <= 0) {
        // 0x8080259C: nop
    
            goto L_808024A0;
    }
    // 0x8080259C: nop

    // 0x808025A0: blez        $t0, L_808024A0
    if (SIGNED(ctx->r8) <= 0) {
        // 0x808025A4: nop
    
            goto L_808024A0;
    }
    // 0x808025A4: nop

    // 0x808025A8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808025AC: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x808025B0: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x808025B4: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x808025B8: jal         0x80803554
    // 0x808025BC: addu        $a3, $a3, $v1
    ctx->r7 = ADD32(ctx->r7, ctx->r3);
    func_80022500_23100(rdram, ctx);
        goto after_1;
    // 0x808025BC: addu        $a3, $a3, $v1
    ctx->r7 = ADD32(ctx->r7, ctx->r3);
    after_1:
    // 0x808025C0: j           L_808024A0
    // 0x808025C4: nop

        goto L_808024A0;
    // 0x808025C4: nop

L_808025C8:
    // 0x808025C8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808025CC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x808025D0: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x808025D4: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x808025D8: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x808025DC: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x808025E0: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x808025E4: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x808025E8: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x808025EC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x808025F0: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x808025F4: ldc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X50);
    // 0x808025F8: ldc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X58);
    // 0x808025FC: ldc1        $f26, 0x60($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X60);
    // 0x80802600: ldc1        $f28, 0x68($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X68);
    // 0x80802604: ldc1        $f30, 0x70($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X70);
    // 0x80802608: jr          $ra
    // 0x8080260C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x8080260C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_80021894_22494(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80802610: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80802614: sdc1        $f22, 0x58($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X58, ctx->r29);
    // 0x80802618: sdc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X50, ctx->r29);
    // 0x8080261C: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80802620: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x80802624: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x80802628: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x8080262C: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x80802630: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x80802634: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80802638: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8080263C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80802640: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80802644: mtc1        $a2, $f0
    ctx->f0.u32l = ctx->r6;
    // 0x80802648: nop

    // 0x8080264C: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80802650: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x80802654: nop

    // 0x80802658: mtc1        $v0, $f2
    ctx->f2.u32l = ctx->r2;
    // 0x8080265C: nop

    // 0x80802660: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x80802664: sub.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x80802668: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8080266C: nop

    // 0x80802670: c.ult.s     $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80802674: nop

    // 0x80802678: bc1f        L_808026D0
    if (!c1cs) {
        // 0x8080267C: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_808026D0;
    }
    // 0x8080267C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80802680: lui         $at, 0x9999
    ctx->r1 = S32(0X9999 << 16);
    // 0x80802684: ori         $at, $at, 0x9999
    ctx->r1 = ctx->r1 | 0X9999;
    // 0x80802688: mult        $v0, $at
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r1)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8080268C: mfhi        $at
    ctx->r1 = hi;
    // 0x80802690: srl         $v0, $at, 31
    ctx->r2 = S32(U32(ctx->r1) >> 31);
    // 0x80802694: sra         $at, $at, 9
    ctx->r1 = S32(SIGNED(ctx->r1) >> 9);
    // 0x80802698: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8080269C: addiu       $at, $at, 0x1
    ctx->r1 = ADD32(ctx->r1, 0X1);
    // 0x808026A0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x808026A4: nop

    // 0x808026A8: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x808026AC: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x808026B0: cvt.d.s     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.d = CVT_D_S(ctx->f0.fl);
    // 0x808026B4: lui         $at, 0x8080
    ctx->r1 = S32(0X8080 << 16);
    // 0x808026B8: ldc1        $f10, 0x5290($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, 0X5290);
    // 0x808026BC: cvt.d.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f6.d = CVT_D_S(ctx->f6.fl);
    // 0x808026C0: mul.d       $f6, $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f6.d = MUL_D(ctx->f6.d, ctx->f10.d);
    // 0x808026C4: add.d       $f0, $f6, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = ctx->f6.d + ctx->f0.d;
    // 0x808026C8: add.d       $f0, $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f8.d); 
    ctx->f0.d = ctx->f0.d + ctx->f8.d;
    // 0x808026CC: cvt.s.d     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f0.fl = CVT_S_D(ctx->f0.d);
L_808026D0:
    // 0x808026D0: lui         $at, 0x8080
    ctx->r1 = S32(0X8080 << 16);
    // 0x808026D4: lwc1        $f8, 0x5230($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5230);
    // 0x808026D8: c.olt.s     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x808026DC: nop

    // 0x808026E0: bc1t        L_80802730
    if (c1cs) {
        // 0x808026E4: mtc1        $a3, $f6
        ctx->f6.u32l = ctx->r7;
            goto L_80802730;
    }
    // 0x808026E4: mtc1        $a3, $f6
    ctx->f6.u32l = ctx->r7;
    // 0x808026E8: lui         $at, 0x6666
    ctx->r1 = S32(0X6666 << 16);
    // 0x808026EC: ori         $at, $at, 0x6667
    ctx->r1 = ctx->r1 | 0X6667;
    // 0x808026F0: trunc.w.s   $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x808026F4: mfc1        $v0, $f0
    ctx->r2 = (int32_t)ctx->f0.u32l;
    // 0x808026F8: nop

    // 0x808026FC: mult        $v0, $at
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r1)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80802700: mfhi        $at
    ctx->r1 = hi;
    // 0x80802704: srl         $v1, $at, 31
    ctx->r3 = S32(U32(ctx->r1) >> 31);
    // 0x80802708: sra         $at, $at, 9
    ctx->r1 = S32(SIGNED(ctx->r1) >> 9);
    // 0x8080270C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80802710: sll         $v1, $at, 8
    ctx->r3 = S32(ctx->r1 << 8);
    // 0x80802714: sll         $at, $at, 10
    ctx->r1 = S32(ctx->r1 << 10);
    // 0x80802718: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8080271C: subu        $at, $v0, $at
    ctx->r1 = SUB32(ctx->r2, ctx->r1);
    // 0x80802720: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80802724: nop

    // 0x80802728: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x8080272C: add.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f0.fl;
L_80802730:
    // 0x80802730: lui         $at, 0x8080
    ctx->r1 = S32(0X8080 << 16);
    // 0x80802734: lwc1        $f4, 0x5228($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5228);
    // 0x80802738: c.ule.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x8080273C: nop

    // 0x80802740: bc1f        L_8080275C
    if (!c1cs) {
        // 0x80802744: nop
    
            goto L_8080275C;
    }
    // 0x80802744: nop

    // 0x80802748: c.ult.s     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl < ctx->f2.fl;
    // 0x8080274C: nop

    // 0x80802750: bc1f        L_8080275C
    if (!c1cs) {
        // 0x80802754: mov.s       $f4, $f6
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = ctx->f6.fl;
            goto L_8080275C;
    }
    // 0x80802754: mov.s       $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = ctx->f6.fl;
    // 0x80802758: mov.s       $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    ctx->f4.fl = ctx->f2.fl;
L_8080275C:
    // 0x8080275C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80802760: lw          $v0, -0x3A34($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3A34);
    // 0x80802764: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x80802768: sw          $v1, -0x3A34($at)
    MEM_W(-0X3A34, ctx->r1) = ctx->r3;
    // 0x8080276C: sw          $a1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r5;
    // 0x80802770: lui         $v1, 0xFD10
    ctx->r3 = S32(0XFD10 << 16);
    // 0x80802774: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x80802778: lw          $v0, -0x3A34($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3A34);
    // 0x8080277C: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x80802780: lui         $a0, 0x73F
    ctx->r4 = S32(0X73F << 16);
    // 0x80802784: lui         $a1, 0xF500
    ctx->r5 = S32(0XF500 << 16);
    // 0x80802788: ori         $a1, $a1, 0x100
    ctx->r5 = ctx->r5 | 0X100;
    // 0x8080278C: lui         $a2, 0x700
    ctx->r6 = S32(0X700 << 16);
    // 0x80802790: lui         $a3, 0xE800
    ctx->r7 = S32(0XE800 << 16);
    // 0x80802794: ori         $a0, $a0, 0xC000
    ctx->r4 = ctx->r4 | 0XC000;
    // 0x80802798: lui         $t0, 0xE600
    ctx->r8 = S32(0XE600 << 16);
    // 0x8080279C: lui         $t1, 0x8007
    ctx->r9 = S32(0X8007 << 16);
    // 0x808027A0: lui         $t4, 0x8007
    ctx->r12 = S32(0X8007 << 16);
    // 0x808027A4: lui         $t2, 0xE700
    ctx->r10 = S32(0XE700 << 16);
    // 0x808027A8: lui         $t3, 0xF000
    ctx->r11 = S32(0XF000 << 16);
    // 0x808027AC: sw          $v1, -0x3A34($at)
    MEM_W(-0X3A34, ctx->r1) = ctx->r3;
    // 0x808027B0: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x808027B4: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x808027B8: lw          $v0, -0x3A34($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3A34);
    // 0x808027BC: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x808027C0: sw          $v1, -0x3A34($at)
    MEM_W(-0X3A34, ctx->r1) = ctx->r3;
    // 0x808027C4: sw          $a2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r6;
    // 0x808027C8: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x808027CC: lw          $v0, -0x3A34($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3A34);
    // 0x808027D0: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x808027D4: sw          $v1, -0x3A34($at)
    MEM_W(-0X3A34, ctx->r1) = ctx->r3;
    // 0x808027D8: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x808027DC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x808027E0: lw          $v0, -0x3A34($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3A34);
    // 0x808027E4: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x808027E8: sw          $v1, -0x3A34($at)
    MEM_W(-0X3A34, ctx->r1) = ctx->r3;
    // 0x808027EC: sw          $a0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r4;
    // 0x808027F0: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x808027F4: lw          $v0, -0x3A34($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3A34);
    // 0x808027F8: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x808027FC: sw          $v1, -0x3A34($at)
    MEM_W(-0X3A34, ctx->r1) = ctx->r3;
    // 0x80802800: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x80802804: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80802808: lw          $v0, -0x2E9C($t4)
    ctx->r2 = MEM_W(ctx->r12, -0X2E9C);
    // 0x8080280C: lw          $s4, -0x2EA4($t1)
    ctx->r20 = MEM_W(ctx->r9, -0X2EA4);
    // 0x80802810: slt         $at, $s4, $v0
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80802814: beq         $at, $zero, L_80802938
    if (ctx->r1 == 0) {
        // 0x80802818: nop
    
            goto L_80802938;
    }
    // 0x80802818: nop

    // 0x8080281C: lui         $at, 0x8080
    ctx->r1 = S32(0X8080 << 16);
    // 0x80802820: lwc1        $f2, 0x5210($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X5210);
    // 0x80802824: mul.s       $f20, $f4, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x80802828: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x8080282C: trunc.w.s   $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80802830: mfc1        $at, $f0
    ctx->r1 = (int32_t)ctx->f0.u32l;
    // 0x80802834: nop

    // 0x80802838: sw          $at, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r1;
    // 0x8080283C: lui         $s6, 0x8007
    ctx->r22 = S32(0X8007 << 16);
    // 0x80802840: lui         $at, 0x8080
    ctx->r1 = S32(0X8080 << 16);
    // 0x80802844: lwc1        $f22, 0x5224($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X5224);
    // 0x80802848: j           L_8080286C
    // 0x8080284C: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
        goto L_8080286C;
    // 0x8080284C: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
L_80802850:
    // 0x80802850: lui         $at, 0x8007
    ctx->r1 = S32(0X8007 << 16);
    // 0x80802854: lw          $v0, -0x2E9C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X2E9C);
    // 0x80802858: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
L_8080285C:
    // 0x8080285C: addiu       $s4, $s4, 0x14
    ctx->r20 = ADD32(ctx->r20, 0X14);
    // 0x80802860: slt         $at, $s4, $v0
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80802864: beq         $at, $zero, L_80802938
    if (ctx->r1 == 0) {
        // 0x80802868: add.s       $f20, $f20, $f22
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f22.fl;
            goto L_80802938;
    }
    // 0x80802868: add.s       $f20, $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f22.fl;
L_8080286C:
    // 0x8080286C: addiu       $at, $v0, -0x18
    ctx->r1 = ADD32(ctx->r2, -0X18);
    // 0x80802870: slt         $at, $at, $s4
    ctx->r1 = SIGNED(ctx->r1) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x80802874: beq         $at, $zero, L_80802890
    if (ctx->r1 == 0) {
        // 0x80802878: addiu       $s3, $zero, 0xC
        ctx->r19 = ADD32(0, 0XC);
            goto L_80802890;
    }
    // 0x80802878: addiu       $s3, $zero, 0xC
    ctx->r19 = ADD32(0, 0XC);
    // 0x8080287C: subu        $at, $v0, $s4
    ctx->r1 = SUB32(ctx->r2, ctx->r20);
    // 0x80802880: addiu       $at, $at, 0x1
    ctx->r1 = ADD32(ctx->r1, 0X1);
    // 0x80802884: srl         $v1, $at, 31
    ctx->r3 = S32(U32(ctx->r1) >> 31);
    // 0x80802888: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8080288C: sra         $s3, $at, 1
    ctx->r19 = S32(SIGNED(ctx->r1) >> 1);
L_80802890:
    // 0x80802890: lw          $v1, -0x2EA0($s6)
    ctx->r3 = MEM_W(ctx->r22, -0X2EA0);
    // 0x80802894: lw          $fp, -0x2EA8($a0)
    ctx->r30 = MEM_W(ctx->r4, -0X2EA8);
    // 0x80802898: slt         $at, $fp, $v1
    ctx->r1 = SIGNED(ctx->r30) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8080289C: beq         $at, $zero, L_8080285C
    if (ctx->r1 == 0) {
        // 0x808028A0: nop
    
            goto L_8080285C;
    }
    // 0x808028A0: nop

    // 0x808028A4: trunc.w.s   $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x808028A8: mfc1        $at, $f0
    ctx->r1 = (int32_t)ctx->f0.u32l;
    // 0x808028AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x808028B0: subu        $s7, $v0, $fp
    ctx->r23 = SUB32(ctx->r2, ctx->r30);
    // 0x808028B4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x808028B8: nop

    // 0x808028BC: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x808028C0: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x808028C4: j           L_80802914
    // 0x808028C8: mfc1        $s1, $f0
    ctx->r17 = (int32_t)ctx->f0.u32l;
        goto L_80802914;
    // 0x808028C8: mfc1        $s1, $f0
    ctx->r17 = (int32_t)ctx->f0.u32l;
L_808028CC:
    // 0x808028CC: sw          $s4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r20;
    // 0x808028D0: sw          $fp, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r30;
    // 0x808028D4: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x808028D8: mtc1        $s5, $f0
    ctx->f0.u32l = ctx->r21;
    // 0x808028DC: nop

    // 0x808028E0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x808028E4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808028E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808028EC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x808028F0: jal         0x80802C10
    // 0x808028F4: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    func_80021B98_22798(rdram, ctx);
        goto after_0;
    // 0x808028F4: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    after_0:
    // 0x808028F8: addu        $at, $s5, $s2
    ctx->r1 = ADD32(ctx->r21, ctx->r18);
    // 0x808028FC: addiu       $fp, $fp, 0x146
    ctx->r30 = ADD32(ctx->r30, 0X146);
    // 0x80802900: lw          $v1, -0x2EA0($s6)
    ctx->r3 = MEM_W(ctx->r22, -0X2EA0);
    // 0x80802904: slt         $v0, $fp, $v1
    ctx->r2 = SIGNED(ctx->r30) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80802908: addiu       $s5, $at, -0x1
    ctx->r21 = ADD32(ctx->r1, -0X1);
    // 0x8080290C: beq         $v0, $zero, L_80802850
    if (ctx->r2 == 0) {
        // 0x80802910: addiu       $s7, $s7, -0x146
        ctx->r23 = ADD32(ctx->r23, -0X146);
            goto L_80802850;
    }
    // 0x80802910: addiu       $s7, $s7, -0x146
    ctx->r23 = ADD32(ctx->r23, -0X146);
L_80802914:
    // 0x80802914: addiu       $at, $v1, -0x148
    ctx->r1 = ADD32(ctx->r3, -0X148);
    // 0x80802918: slt         $at, $at, $fp
    ctx->r1 = SIGNED(ctx->r1) < SIGNED(ctx->r30) ? 1 : 0;
    // 0x8080291C: beq         $at, $zero, L_808028CC
    if (ctx->r1 == 0) {
        // 0x80802920: addiu       $s2, $zero, 0xA4
        ctx->r18 = ADD32(0, 0XA4);
            goto L_808028CC;
    }
    // 0x80802920: addiu       $s2, $zero, 0xA4
    ctx->r18 = ADD32(0, 0XA4);
    // 0x80802924: addu        $at, $v1, $s7
    ctx->r1 = ADD32(ctx->r3, ctx->r23);
    // 0x80802928: srl         $v0, $at, 31
    ctx->r2 = S32(U32(ctx->r1) >> 31);
    // 0x8080292C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80802930: j           L_808028CC
    // 0x80802934: sra         $s2, $at, 1
    ctx->r18 = S32(SIGNED(ctx->r1) >> 1);
        goto L_808028CC;
    // 0x80802934: sra         $s2, $at, 1
    ctx->r18 = S32(SIGNED(ctx->r1) >> 1);
L_80802938:
    // 0x80802938: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8080293C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80802940: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80802944: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80802948: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x8080294C: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x80802950: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x80802954: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x80802958: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x8080295C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80802960: ldc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X50);
    // 0x80802964: ldc1        $f22, 0x58($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X58);
    // 0x80802968: jr          $ra
    // 0x8080296C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x8080296C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_80022EC0_23AC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808031E0: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x808031E4: lw          $at, -0x3A34($v0)
    ctx->r1 = MEM_W(ctx->r2, -0X3A34);
    // 0x808031E8: addiu       $v1, $at, 0x8
    ctx->r3 = ADD32(ctx->r1, 0X8);
    // 0x808031EC: sw          $v1, -0x3A34($v0)
    MEM_W(-0X3A34, ctx->r2) = ctx->r3;
    // 0x808031F0: lui         $v1, 0x8007
    ctx->r3 = S32(0X8007 << 16);
    // 0x808031F4: addiu       $v1, $v1, -0x2F10
    ctx->r3 = ADD32(ctx->r3, -0X2F10);
    // 0x808031F8: sw          $v1, 0x4($at)
    MEM_W(0X4, ctx->r1) = ctx->r3;
    // 0x808031FC: lui         $v1, 0x600
    ctx->r3 = S32(0X600 << 16);
    // 0x80803200: sw          $v1, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r3;
    // 0x80803204: lhu         $v1, 0xE($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0XE);
    // 0x80803208: andi        $at, $v1, 0x10
    ctx->r1 = ctx->r3 & 0X10;
    // 0x8080320C: bne         $at, $zero, L_80803280
    if (ctx->r1 != 0) {
        // 0x80803210: nop
    
            goto L_80803280;
    }
    // 0x80803210: nop

    // 0x80803214: andi        $at, $v1, 0x20
    ctx->r1 = ctx->r3 & 0X20;
    // 0x80803218: beq         $at, $zero, L_8080334C
    if (ctx->r1 == 0) {
        // 0x8080321C: nop
    
            goto L_8080334C;
    }
    // 0x8080321C: nop

    // 0x80803220: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80803224: lw          $v0, -0x3A34($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3A34);
    // 0x80803228: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x8080322C: sw          $v1, -0x3A34($at)
    MEM_W(-0X3A34, ctx->r1) = ctx->r3;
    // 0x80803230: lui         $v1, 0xF0A
    ctx->r3 = S32(0XF0A << 16);
    // 0x80803234: ori         $v1, $v1, 0x7008
    ctx->r3 = ctx->r3 | 0X7008;
    // 0x80803238: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    // 0x8080323C: lui         $v1, 0xB900
    ctx->r3 = S32(0XB900 << 16);
    // 0x80803240: ori         $a1, $v1, 0x31D
    ctx->r5 = ctx->r3 | 0X31D;
    // 0x80803244: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x80803248: ori         $v0, $v1, 0x2
    ctx->r2 = ctx->r3 | 0X2;
    // 0x8080324C: lw          $v1, -0x3A34($at)
    ctx->r3 = MEM_W(ctx->r1, -0X3A34);
    // 0x80803250: addiu       $a1, $v1, 0x8
    ctx->r5 = ADD32(ctx->r3, 0X8);
    // 0x80803254: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80803258: lui         $a3, 0xF900
    ctx->r7 = S32(0XF900 << 16);
    // 0x8080325C: sw          $a1, -0x3A34($at)
    MEM_W(-0X3A34, ctx->r1) = ctx->r5;
    // 0x80803260: sw          $a2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r6;
    // 0x80803264: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80803268: lw          $v0, -0x3A34($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3A34);
    // 0x8080326C: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x80803270: sw          $v1, -0x3A34($at)
    MEM_W(-0X3A34, ctx->r1) = ctx->r3;
    // 0x80803274: sw          $a2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r6;
    // 0x80803278: j           L_8080334C
    // 0x8080327C: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
        goto L_8080334C;
    // 0x8080327C: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
L_80803280:
    // 0x80803280: lw          $at, -0x3A34($v0)
    ctx->r1 = MEM_W(ctx->r2, -0X3A34);
    // 0x80803284: addiu       $v1, $at, 0x8
    ctx->r3 = ADD32(ctx->r1, 0X8);
    // 0x80803288: sw          $v1, -0x3A34($v0)
    MEM_W(-0X3A34, ctx->r2) = ctx->r3;
    // 0x8080328C: lui         $v1, 0xFA00
    ctx->r3 = S32(0XFA00 << 16);
    // 0x80803290: sw          $v1, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r3;
    // 0x80803294: lbu         $v1, 0x2C($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X2C);
    // 0x80803298: addiu       $a1, $zero, -0x100
    ctx->r5 = ADD32(0, -0X100);
    // 0x8080329C: or          $a1, $v1, $a1
    ctx->r5 = ctx->r3 | ctx->r5;
    // 0x808032A0: lui         $v1, 0xB900
    ctx->r3 = S32(0XB900 << 16);
    // 0x808032A4: sw          $a1, 0x4($at)
    MEM_W(0X4, ctx->r1) = ctx->r5;
    // 0x808032A8: ori         $at, $v1, 0x31D
    ctx->r1 = ctx->r3 | 0X31D;
    // 0x808032AC: lui         $a1, 0x50
    ctx->r5 = S32(0X50 << 16);
    // 0x808032B0: ori         $a1, $a1, 0x4240
    ctx->r5 = ctx->r5 | 0X4240;
    // 0x808032B4: lw          $a2, -0x3A34($v0)
    ctx->r6 = MEM_W(ctx->r2, -0X3A34);
    // 0x808032B8: addiu       $a3, $a2, 0x8
    ctx->r7 = ADD32(ctx->r6, 0X8);
    // 0x808032BC: sw          $a3, -0x3A34($v0)
    MEM_W(-0X3A34, ctx->r2) = ctx->r7;
    // 0x808032C0: sw          $a1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r5;
    // 0x808032C4: sw          $at, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r1;
    // 0x808032C8: lhu         $at, 0xE($a0)
    ctx->r1 = MEM_HU(ctx->r4, 0XE);
    // 0x808032CC: lw          $a1, -0x3A34($v0)
    ctx->r5 = MEM_W(ctx->r2, -0X3A34);
    // 0x808032D0: addiu       $a2, $a1, 0x8
    ctx->r6 = ADD32(ctx->r5, 0X8);
    // 0x808032D4: andi        $at, $at, 0x20
    ctx->r1 = ctx->r1 & 0X20;
    // 0x808032D8: bne         $at, $zero, L_808032FC
    if (ctx->r1 != 0) {
        // 0x808032DC: sw          $a2, -0x3A34($v0)
        MEM_W(-0X3A34, ctx->r2) = ctx->r6;
            goto L_808032FC;
    }
    // 0x808032DC: sw          $a2, -0x3A34($v0)
    MEM_W(-0X3A34, ctx->r2) = ctx->r6;
    // 0x808032E0: lui         $at, 0xFFFC
    ctx->r1 = S32(0XFFFC << 16);
    // 0x808032E4: ori         $at, $at, 0xF67B
    ctx->r1 = ctx->r1 | 0XF67B;
    // 0x808032E8: sw          $at, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r1;
    // 0x808032EC: lui         $at, 0xFCFF
    ctx->r1 = S32(0XFCFF << 16);
    // 0x808032F0: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x808032F4: j           L_8080334C
    // 0x808032F8: sw          $at, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r1;
        goto L_8080334C;
    // 0x808032F8: sw          $at, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r1;
L_808032FC:
    // 0x808032FC: lui         $at, 0xFF2C
    ctx->r1 = S32(0XFF2C << 16);
    // 0x80803300: ori         $at, $at, 0xFE7F
    ctx->r1 = ctx->r1 | 0XFE7F;
    // 0x80803304: sw          $at, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r1;
    // 0x80803308: lui         $at, 0xFCFF
    ctx->r1 = S32(0XFCFF << 16);
    // 0x8080330C: ori         $at, $at, 0x97FF
    ctx->r1 = ctx->r1 | 0X97FF;
    // 0x80803310: sw          $at, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r1;
    // 0x80803314: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80803318: lw          $v0, -0x3A34($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3A34);
    // 0x8080331C: addiu       $a1, $v0, 0x8
    ctx->r5 = ADD32(ctx->r2, 0X8);
    // 0x80803320: sw          $a1, -0x3A34($at)
    MEM_W(-0X3A34, ctx->r1) = ctx->r5;
    // 0x80803324: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80803328: sw          $a1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r5;
    // 0x8080332C: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80803330: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x80803334: lui         $v0, 0xF900
    ctx->r2 = S32(0XF900 << 16);
    // 0x80803338: lw          $v1, -0x3A34($at)
    ctx->r3 = MEM_W(ctx->r1, -0X3A34);
    // 0x8080333C: addiu       $a2, $v1, 0x8
    ctx->r6 = ADD32(ctx->r3, 0X8);
    // 0x80803340: sw          $a2, -0x3A34($at)
    MEM_W(-0X3A34, ctx->r1) = ctx->r6;
    // 0x80803344: sw          $a1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r5;
    // 0x80803348: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_8080334C:
    // 0x8080334C: lhu         $v1, 0xE($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0XE);
    // 0x80803350: andi        $at, $v1, 0x1
    ctx->r1 = ctx->r3 & 0X1;
    // 0x80803354: bne         $at, $zero, L_80803368
    if (ctx->r1 != 0) {
        // 0x80803358: nop
    
            goto L_80803368;
    }
    // 0x80803358: nop

    // 0x8080335C: lui         $at, 0xBA00
    ctx->r1 = S32(0XBA00 << 16);
    // 0x80803360: j           L_80803414
    // 0x80803364: ori         $v1, $at, 0xE02
    ctx->r3 = ctx->r1 | 0XE02;
        goto L_80803414;
    // 0x80803364: ori         $v1, $at, 0xE02
    ctx->r3 = ctx->r1 | 0XE02;
L_80803368:
    // 0x80803368: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8080336C: lw          $at, -0x3A34($v0)
    ctx->r1 = MEM_W(ctx->r2, -0X3A34);
    // 0x80803370: addiu       $a1, $at, 0x8
    ctx->r5 = ADD32(ctx->r1, 0X8);
    // 0x80803374: sw          $a1, -0x3A34($v0)
    MEM_W(-0X3A34, ctx->r2) = ctx->r5;
    // 0x80803378: lui         $a1, 0xFD10
    ctx->r5 = S32(0XFD10 << 16);
    // 0x8080337C: sw          $a1, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r5;
    // 0x80803380: lw          $a0, 0x3C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3C);
    // 0x80803384: sw          $a0, 0x4($at)
    MEM_W(0X4, ctx->r1) = ctx->r4;
    // 0x80803388: andi        $at, $v1, 0x8
    ctx->r1 = ctx->r3 & 0X8;
    // 0x8080338C: sltiu       $at, $at, 0x1
    ctx->r1 = ctx->r1 < 0X1 ? 1 : 0;
    // 0x80803390: lui         $v1, 0xF500
    ctx->r3 = S32(0XF500 << 16);
    // 0x80803394: lui         $a2, 0xE800
    ctx->r6 = S32(0XE800 << 16);
    // 0x80803398: bne         $at, $zero, L_808033AC
    if (ctx->r1 != 0) {
        // 0x8080339C: ori         $a1, $v1, 0x100
        ctx->r5 = ctx->r3 | 0X100;
            goto L_808033AC;
    }
    // 0x8080339C: ori         $a1, $v1, 0x100
    ctx->r5 = ctx->r3 | 0X100;
    // 0x808033A0: lui         $at, 0x73F
    ctx->r1 = S32(0X73F << 16);
    // 0x808033A4: j           L_808033B4
    // 0x808033A8: ori         $a0, $at, 0xC000
    ctx->r4 = ctx->r1 | 0XC000;
        goto L_808033B4;
    // 0x808033A8: ori         $a0, $at, 0xC000
    ctx->r4 = ctx->r1 | 0XC000;
L_808033AC:
    // 0x808033AC: lui         $at, 0x703
    ctx->r1 = S32(0X703 << 16);
    // 0x808033B0: ori         $a0, $at, 0xC000
    ctx->r4 = ctx->r1 | 0XC000;
L_808033B4:
    // 0x808033B4: lui         $v1, 0xE700
    ctx->r3 = S32(0XE700 << 16);
    // 0x808033B8: lui         $at, 0xE600
    ctx->r1 = S32(0XE600 << 16);
    // 0x808033BC: lui         $a3, 0x700
    ctx->r7 = S32(0X700 << 16);
    // 0x808033C0: lui         $t0, 0xF000
    ctx->r8 = S32(0XF000 << 16);
    // 0x808033C4: lw          $t1, -0x3A34($v0)
    ctx->r9 = MEM_W(ctx->r2, -0X3A34);
    // 0x808033C8: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x808033CC: sw          $t2, -0x3A34($v0)
    MEM_W(-0X3A34, ctx->r2) = ctx->r10;
    // 0x808033D0: sw          $a2, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r6;
    // 0x808033D4: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x808033D8: lw          $a2, -0x3A34($v0)
    ctx->r6 = MEM_W(ctx->r2, -0X3A34);
    // 0x808033DC: addiu       $t1, $a2, 0x8
    ctx->r9 = ADD32(ctx->r6, 0X8);
    // 0x808033E0: sw          $t1, -0x3A34($v0)
    MEM_W(-0X3A34, ctx->r2) = ctx->r9;
    // 0x808033E4: sw          $a3, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r7;
    // 0x808033E8: sw          $a1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r5;
    // 0x808033EC: lw          $a1, -0x3A34($v0)
    ctx->r5 = MEM_W(ctx->r2, -0X3A34);
    // 0x808033F0: addiu       $a2, $a1, 0x8
    ctx->r6 = ADD32(ctx->r5, 0X8);
    // 0x808033F4: sw          $a2, -0x3A34($v0)
    MEM_W(-0X3A34, ctx->r2) = ctx->r6;
    // 0x808033F8: sw          $at, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r1;
    // 0x808033FC: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x80803400: lw          $at, -0x3A34($v0)
    ctx->r1 = MEM_W(ctx->r2, -0X3A34);
    // 0x80803404: addiu       $a1, $at, 0x8
    ctx->r5 = ADD32(ctx->r1, 0X8);
    // 0x80803408: sw          $a1, -0x3A34($v0)
    MEM_W(-0X3A34, ctx->r2) = ctx->r5;
    // 0x8080340C: sw          $a0, 0x4($at)
    MEM_W(0X4, ctx->r1) = ctx->r4;
    // 0x80803410: sw          $t0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r8;
L_80803414:
    // 0x80803414: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80803418: lw          $v0, -0x3A34($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3A34);
    // 0x8080341C: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
    // 0x80803420: sw          $a0, -0x3A34($at)
    MEM_W(-0X3A34, ctx->r1) = ctx->r4;
    // 0x80803424: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x80803428: jr          $ra
    // 0x8080342C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    return;
    // 0x8080342C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
;}
RECOMP_FUNC void func_80022500_23100(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80803554: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80803558: sw          $s6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r22;
    // 0x8080355C: sw          $s5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r21;
    // 0x80803560: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    // 0x80803564: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x80803568: sw          $s2, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r18;
    // 0x8080356C: sw          $s1, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r17;
    // 0x80803570: sw          $s0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r16;
    // 0x80803574: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x80803578: lhu         $t1, 0xE($t2)
    ctx->r9 = MEM_HU(ctx->r10, 0XE);
    // 0x8080357C: andi        $at, $t1, 0x1
    ctx->r1 = ctx->r9 & 0X1;
    // 0x80803580: sltiu       $at, $at, 0x1
    ctx->r1 = ctx->r1 < 0X1 ? 1 : 0;
    // 0x80803584: bne         $at, $zero, L_80803594
    if (ctx->r1 != 0) {
        // 0x80803588: nop
    
            goto L_80803594;
    }
    // 0x80803588: nop

    // 0x8080358C: j           L_808035A4
    // 0x80803590: lui         $t3, 0x40
    ctx->r11 = S32(0X40 << 16);
        goto L_808035A4;
    // 0x80803590: lui         $t3, 0x40
    ctx->r11 = S32(0X40 << 16);
L_80803594:
    // 0x80803594: sll         $at, $t1, 30
    ctx->r1 = S32(ctx->r9 << 30);
    // 0x80803598: sra         $at, $at, 31
    ctx->r1 = S32(SIGNED(ctx->r1) >> 31);
    // 0x8080359C: lui         $v0, 0x60
    ctx->r2 = S32(0X60 << 16);
    // 0x808035A0: and         $t3, $at, $v0
    ctx->r11 = ctx->r1 & ctx->r2;
L_808035A4:
    // 0x808035A4: andi        $at, $t1, 0x4
    ctx->r1 = ctx->r9 & 0X4;
    // 0x808035A8: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x808035AC: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x808035B0: bne         $at, $zero, L_808036F8
    if (ctx->r1 != 0) {
        // 0x808035B4: nop
    
            goto L_808036F8;
    }
    // 0x808035B4: nop

    // 0x808035B8: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x808035BC: lw          $t4, -0x3A34($t0)
    ctx->r12 = MEM_W(ctx->r8, -0X3A34);
    // 0x808035C0: addiu       $at, $t4, 0x8
    ctx->r1 = ADD32(ctx->r12, 0X8);
    // 0x808035C4: sw          $at, -0x3A34($t0)
    MEM_W(-0X3A34, ctx->r8) = ctx->r1;
    // 0x808035C8: lhu         $at, 0x10($t2)
    ctx->r1 = MEM_HU(ctx->r10, 0X10);
    // 0x808035CC: addiu       $at, $at, -0x1
    ctx->r1 = ADD32(ctx->r1, -0X1);
    // 0x808035D0: andi        $t5, $at, 0xFFF
    ctx->r13 = ctx->r1 & 0XFFF;
    // 0x808035D4: andi        $at, $t1, 0x8
    ctx->r1 = ctx->r9 & 0X8;
    // 0x808035D8: bne         $at, $zero, L_80803854
    if (ctx->r1 != 0) {
        // 0x808035DC: nop
    
            goto L_80803854;
    }
    // 0x808035DC: nop

    // 0x808035E0: lui         $at, 0xFD10
    ctx->r1 = S32(0XFD10 << 16);
    // 0x808035E4: or          $at, $t5, $at
    ctx->r1 = ctx->r13 | ctx->r1;
    // 0x808035E8: sw          $at, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r1;
    // 0x808035EC: addu        $at, $a2, $v1
    ctx->r1 = ADD32(ctx->r6, ctx->r3);
    // 0x808035F0: lw          $t1, 0x38($t2)
    ctx->r9 = MEM_W(ctx->r10, 0X38);
    // 0x808035F4: sw          $t1, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r9;
    // 0x808035F8: sll         $at, $at, 14
    ctx->r1 = S32(ctx->r1 << 14);
    // 0x808035FC: addu        $t1, $v0, $a3
    ctx->r9 = ADD32(ctx->r2, ctx->r7);
    // 0x80803600: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80803604: lui         $t2, 0xFF
    ctx->r10 = S32(0XFF << 16);
    // 0x80803608: ori         $t2, $t2, 0xC000
    ctx->r10 = ctx->r10 | 0XC000;
    // 0x8080360C: sll         $t3, $a2, 14
    ctx->r11 = S32(ctx->r6 << 14);
    // 0x80803610: addiu       $t1, $t1, 0xFFC
    ctx->r9 = ADD32(ctx->r9, 0XFFC);
    // 0x80803614: addiu       $at, $at, -0x4000
    ctx->r1 = ADD32(ctx->r1, -0X4000);
    // 0x80803618: and         $t3, $t3, $t2
    ctx->r11 = ctx->r11 & ctx->r10;
    // 0x8080361C: sll         $t4, $a3, 2
    ctx->r12 = S32(ctx->r7 << 2);
    // 0x80803620: lw          $t5, -0x3A34($t0)
    ctx->r13 = MEM_W(ctx->r8, -0X3A34);
    // 0x80803624: andi        $t4, $t4, 0xFFC
    ctx->r12 = ctx->r12 & 0XFFC;
    // 0x80803628: lui         $t6, 0x708
    ctx->r14 = S32(0X708 << 16);
    // 0x8080362C: lui         $t7, 0x3
    ctx->r15 = S32(0X3 << 16);
    // 0x80803630: or          $t3, $t4, $t3
    ctx->r11 = ctx->r12 | ctx->r11;
    // 0x80803634: and         $at, $at, $t2
    ctx->r1 = ctx->r1 & ctx->r10;
    // 0x80803638: andi        $t1, $t1, 0xFFC
    ctx->r9 = ctx->r9 & 0XFFC;
    // 0x8080363C: ori         $t2, $t7, 0xFE00
    ctx->r10 = ctx->r15 | 0XFE00;
    // 0x80803640: sll         $t4, $v1, 7
    ctx->r12 = S32(ctx->r3 << 7);
    // 0x80803644: ori         $t6, $t6, 0x200
    ctx->r14 = ctx->r14 | 0X200;
    // 0x80803648: addiu       $t7, $t5, 0x8
    ctx->r15 = ADD32(ctx->r13, 0X8);
    // 0x8080364C: lui         $t8, 0x8
    ctx->r24 = S32(0X8 << 16);
    // 0x80803650: lui         $t9, 0xF200
    ctx->r25 = S32(0XF200 << 16);
    // 0x80803654: lui         $s0, 0xF400
    ctx->r16 = S32(0XF400 << 16);
    // 0x80803658: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
    // 0x8080365C: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x80803660: lui         $s1, 0xE600
    ctx->r17 = S32(0XE600 << 16);
    // 0x80803664: or          $s0, $t3, $s0
    ctx->r16 = ctx->r11 | ctx->r16;
    // 0x80803668: or          $t3, $t3, $t9
    ctx->r11 = ctx->r11 | ctx->r25;
    // 0x8080366C: ori         $t8, $t8, 0x200
    ctx->r24 = ctx->r24 | 0X200;
    // 0x80803670: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x80803674: sw          $t7, -0x3A34($t0)
    MEM_W(-0X3A34, ctx->r8) = ctx->r15;
    // 0x80803678: sw          $t6, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r14;
    // 0x8080367C: addiu       $t4, $t4, 0x1C0
    ctx->r12 = ADD32(ctx->r12, 0X1C0);
    // 0x80803680: and         $t2, $t4, $t2
    ctx->r10 = ctx->r12 & ctx->r10;
    // 0x80803684: lui         $t4, 0xF510
    ctx->r12 = S32(0XF510 << 16);
    // 0x80803688: or          $t2, $t2, $t4
    ctx->r10 = ctx->r10 | ctx->r12;
    // 0x8080368C: sw          $t2, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r10;
    // 0x80803690: lw          $t4, -0x3A34($t0)
    ctx->r12 = MEM_W(ctx->r8, -0X3A34);
    // 0x80803694: addiu       $t5, $t4, 0x8
    ctx->r13 = ADD32(ctx->r12, 0X8);
    // 0x80803698: sw          $t5, -0x3A34($t0)
    MEM_W(-0X3A34, ctx->r8) = ctx->r13;
    // 0x8080369C: sw          $s1, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r17;
    // 0x808036A0: sw          $zero, 0x4($t4)
    MEM_W(0X4, ctx->r12) = 0;
    // 0x808036A4: or          $at, $t1, $at
    ctx->r1 = ctx->r9 | ctx->r1;
    // 0x808036A8: lw          $t4, -0x3A34($t0)
    ctx->r12 = MEM_W(ctx->r8, -0X3A34);
    // 0x808036AC: addiu       $t5, $t4, 0x8
    ctx->r13 = ADD32(ctx->r12, 0X8);
    // 0x808036B0: sw          $t5, -0x3A34($t0)
    MEM_W(-0X3A34, ctx->r8) = ctx->r13;
    // 0x808036B4: sw          $at, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r1;
    // 0x808036B8: sw          $s0, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r16;
    // 0x808036BC: lw          $at, -0x3A34($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X3A34);
    // 0x808036C0: addiu       $t4, $at, 0x8
    ctx->r12 = ADD32(ctx->r1, 0X8);
    // 0x808036C4: sw          $t4, -0x3A34($t0)
    MEM_W(-0X3A34, ctx->r8) = ctx->r12;
    // 0x808036C8: sw          $t9, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r25;
    // 0x808036CC: sw          $zero, 0x4($at)
    MEM_W(0X4, ctx->r1) = 0;
    // 0x808036D0: lw          $at, -0x3A34($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X3A34);
    // 0x808036D4: addiu       $t4, $at, 0x8
    ctx->r12 = ADD32(ctx->r1, 0X8);
    // 0x808036D8: sw          $t4, -0x3A34($t0)
    MEM_W(-0X3A34, ctx->r8) = ctx->r12;
    // 0x808036DC: sw          $t8, 0x4($at)
    MEM_W(0X4, ctx->r1) = ctx->r24;
    // 0x808036E0: sw          $t2, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r10;
    // 0x808036E4: lw          $t2, -0x3A34($t0)
    ctx->r10 = MEM_W(ctx->r8, -0X3A34);
    // 0x808036E8: addiu       $at, $t2, 0x8
    ctx->r1 = ADD32(ctx->r10, 0X8);
    // 0x808036EC: sw          $at, -0x3A34($t0)
    MEM_W(-0X3A34, ctx->r8) = ctx->r1;
    // 0x808036F0: j           L_80803970
    // 0x808036F4: sw          $t3, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r11;
        goto L_80803970;
    // 0x808036F4: sw          $t3, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r11;
L_808036F8:
    // 0x808036F8: addu        $t0, $v0, $a3
    ctx->r8 = ADD32(ctx->r2, ctx->r7);
    // 0x808036FC: addu        $t1, $a2, $v1
    ctx->r9 = ADD32(ctx->r6, ctx->r3);
    // 0x80803700: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80803704: lw          $t3, -0x3A34($at)
    ctx->r11 = MEM_W(ctx->r1, -0X3A34);
    // 0x80803708: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x8080370C: sw          $t4, -0x3A34($at)
    MEM_W(-0X3A34, ctx->r1) = ctx->r12;
    // 0x80803710: addiu       $t1, $t1, -0x1
    ctx->r9 = ADD32(ctx->r9, -0X1);
    // 0x80803714: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80803718: lui         $t4, 0xFF
    ctx->r12 = S32(0XFF << 16);
    // 0x8080371C: ori         $t5, $t4, 0xC000
    ctx->r13 = ctx->r12 | 0XC000;
    // 0x80803720: sll         $t6, $a2, 14
    ctx->r14 = S32(ctx->r6 << 14);
    // 0x80803724: ori         $t4, $t4, 0xE000
    ctx->r12 = ctx->r12 | 0XE000;
    // 0x80803728: sll         $t7, $a2, 13
    ctx->r15 = S32(ctx->r6 << 13);
    // 0x8080372C: lui         $t8, 0x3
    ctx->r24 = S32(0X3 << 16);
    // 0x80803730: addiu       $t0, $t0, 0xFFC
    ctx->r8 = ADD32(ctx->r8, 0XFFC);
    // 0x80803734: sll         $t9, $t1, 14
    ctx->r25 = S32(ctx->r9 << 14);
    // 0x80803738: sll         $t1, $t1, 13
    ctx->r9 = S32(ctx->r9 << 13);
    // 0x8080373C: and         $t7, $t7, $t4
    ctx->r15 = ctx->r15 & ctx->r12;
    // 0x80803740: and         $t6, $t6, $t5
    ctx->r14 = ctx->r14 & ctx->r13;
    // 0x80803744: lhu         $s0, 0x10($t2)
    ctx->r16 = MEM_HU(ctx->r10, 0X10);
    // 0x80803748: srl         $s0, $s0, 1
    ctx->r16 = S32(U32(ctx->r16) >> 1);
    // 0x8080374C: ori         $t8, $t8, 0xFE00
    ctx->r24 = ctx->r24 | 0XFE00;
    // 0x80803750: sll         $s1, $v1, 5
    ctx->r17 = S32(ctx->r3 << 5);
    // 0x80803754: addiu       $s1, $s1, 0x1C0
    ctx->r17 = ADD32(ctx->r17, 0X1C0);
    // 0x80803758: sll         $s2, $a3, 2
    ctx->r18 = S32(ctx->r7 << 2);
    // 0x8080375C: andi        $s2, $s2, 0xFFC
    ctx->r18 = ctx->r18 & 0XFFC;
    // 0x80803760: or          $t6, $t6, $s2
    ctx->r14 = ctx->r14 | ctx->r18;
    // 0x80803764: or          $t7, $t7, $s2
    ctx->r15 = ctx->r15 | ctx->r18;
    // 0x80803768: and         $t8, $s1, $t8
    ctx->r24 = ctx->r17 & ctx->r24;
    // 0x8080376C: and         $t4, $t1, $t4
    ctx->r12 = ctx->r9 & ctx->r12;
    // 0x80803770: and         $t1, $t9, $t5
    ctx->r9 = ctx->r25 & ctx->r13;
    // 0x80803774: andi        $t0, $t0, 0xFFC
    ctx->r8 = ctx->r8 & 0XFFC;
    // 0x80803778: addiu       $t5, $s0, -0x1
    ctx->r13 = ADD32(ctx->r16, -0X1);
    // 0x8080377C: lui         $t9, 0x8
    ctx->r25 = S32(0X8 << 16);
    // 0x80803780: lui         $s0, 0xF540
    ctx->r16 = S32(0XF540 << 16);
    // 0x80803784: lui         $s1, 0x700
    ctx->r17 = S32(0X700 << 16);
    // 0x80803788: lui         $s2, 0xFD48
    ctx->r18 = S32(0XFD48 << 16);
    // 0x8080378C: lui         $s3, 0xF200
    ctx->r19 = S32(0XF200 << 16);
    // 0x80803790: lui         $s4, 0xF400
    ctx->r20 = S32(0XF400 << 16);
    // 0x80803794: lui         $s5, 0x708
    ctx->r21 = S32(0X708 << 16);
    // 0x80803798: lui         $s6, 0xF548
    ctx->r22 = S32(0XF548 << 16);
    // 0x8080379C: or          $t1, $t0, $t1
    ctx->r9 = ctx->r8 | ctx->r9;
    // 0x808037A0: or          $t0, $t4, $t0
    ctx->r8 = ctx->r12 | ctx->r8;
    // 0x808037A4: or          $t4, $t8, $s6
    ctx->r12 = ctx->r24 | ctx->r22;
    // 0x808037A8: ori         $s5, $s5, 0x200
    ctx->r21 = ctx->r21 | 0X200;
    // 0x808037AC: or          $t7, $t7, $s4
    ctx->r15 = ctx->r15 | ctx->r20;
    // 0x808037B0: or          $t6, $t6, $s3
    ctx->r14 = ctx->r14 | ctx->r19;
    // 0x808037B4: or          $t8, $t8, $s0
    ctx->r24 = ctx->r24 | ctx->r16;
    // 0x808037B8: ori         $t9, $t9, 0x200
    ctx->r25 = ctx->r25 | 0X200;
    // 0x808037BC: lui         $s0, 0xE700
    ctx->r16 = S32(0XE700 << 16);
    // 0x808037C0: andi        $t5, $t5, 0xFFF
    ctx->r13 = ctx->r13 & 0XFFF;
    // 0x808037C4: or          $t5, $t5, $s2
    ctx->r13 = ctx->r13 | ctx->r18;
    // 0x808037C8: sw          $t5, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r13;
    // 0x808037CC: lw          $t2, 0x38($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X38);
    // 0x808037D0: sw          $t2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r10;
    // 0x808037D4: lw          $t2, -0x3A34($at)
    ctx->r10 = MEM_W(ctx->r1, -0X3A34);
    // 0x808037D8: or          $t0, $t0, $s1
    ctx->r8 = ctx->r8 | ctx->r17;
    // 0x808037DC: lui         $t3, 0xE600
    ctx->r11 = S32(0XE600 << 16);
    // 0x808037E0: addiu       $t5, $t2, 0x8
    ctx->r13 = ADD32(ctx->r10, 0X8);
    // 0x808037E4: sw          $t5, -0x3A34($at)
    MEM_W(-0X3A34, ctx->r1) = ctx->r13;
    // 0x808037E8: sw          $s5, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r21;
    // 0x808037EC: sw          $t4, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r12;
    // 0x808037F0: lw          $t2, -0x3A34($at)
    ctx->r10 = MEM_W(ctx->r1, -0X3A34);
    // 0x808037F4: addiu       $t4, $t2, 0x8
    ctx->r12 = ADD32(ctx->r10, 0X8);
    // 0x808037F8: sw          $t4, -0x3A34($at)
    MEM_W(-0X3A34, ctx->r1) = ctx->r12;
    // 0x808037FC: sw          $t3, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r11;
    // 0x80803800: sw          $zero, 0x4($t2)
    MEM_W(0X4, ctx->r10) = 0;
    // 0x80803804: lw          $t2, -0x3A34($at)
    ctx->r10 = MEM_W(ctx->r1, -0X3A34);
    // 0x80803808: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x8080380C: sw          $t3, -0x3A34($at)
    MEM_W(-0X3A34, ctx->r1) = ctx->r11;
    // 0x80803810: sw          $t0, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r8;
    // 0x80803814: sw          $t7, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r15;
    // 0x80803818: lw          $t0, -0x3A34($at)
    ctx->r8 = MEM_W(ctx->r1, -0X3A34);
    // 0x8080381C: addiu       $t2, $t0, 0x8
    ctx->r10 = ADD32(ctx->r8, 0X8);
    // 0x80803820: sw          $t2, -0x3A34($at)
    MEM_W(-0X3A34, ctx->r1) = ctx->r10;
    // 0x80803824: sw          $s0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r16;
    // 0x80803828: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x8080382C: lw          $t0, -0x3A34($at)
    ctx->r8 = MEM_W(ctx->r1, -0X3A34);
    // 0x80803830: addiu       $t2, $t0, 0x8
    ctx->r10 = ADD32(ctx->r8, 0X8);
    // 0x80803834: sw          $t2, -0x3A34($at)
    MEM_W(-0X3A34, ctx->r1) = ctx->r10;
    // 0x80803838: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x8080383C: sw          $t8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r24;
    // 0x80803840: lw          $t2, -0x3A34($at)
    ctx->r10 = MEM_W(ctx->r1, -0X3A34);
    // 0x80803844: addiu       $t0, $t2, 0x8
    ctx->r8 = ADD32(ctx->r10, 0X8);
    // 0x80803848: sw          $t0, -0x3A34($at)
    MEM_W(-0X3A34, ctx->r1) = ctx->r8;
    // 0x8080384C: j           L_80803970
    // 0x80803850: sw          $t6, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r14;
        goto L_80803970;
    // 0x80803850: sw          $t6, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r14;
L_80803854:
    // 0x80803854: or          $at, $t3, $t5
    ctx->r1 = ctx->r11 | ctx->r13;
    // 0x80803858: lui         $t1, 0xFD08
    ctx->r9 = S32(0XFD08 << 16);
    // 0x8080385C: or          $at, $at, $t1
    ctx->r1 = ctx->r1 | ctx->r9;
    // 0x80803860: sw          $at, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r1;
    // 0x80803864: addu        $at, $a2, $v1
    ctx->r1 = ADD32(ctx->r6, ctx->r3);
    // 0x80803868: sll         $at, $at, 14
    ctx->r1 = S32(ctx->r1 << 14);
    // 0x8080386C: addu        $t1, $v0, $a3
    ctx->r9 = ADD32(ctx->r2, ctx->r7);
    // 0x80803870: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80803874: lw          $t2, 0x38($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X38);
    // 0x80803878: sw          $t2, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r10;
    // 0x8080387C: addiu       $t1, $t1, 0xFFC
    ctx->r9 = ADD32(ctx->r9, 0XFFC);
    // 0x80803880: addiu       $at, $at, -0x4000
    ctx->r1 = ADD32(ctx->r1, -0X4000);
    // 0x80803884: lui         $t2, 0xFF
    ctx->r10 = S32(0XFF << 16);
    // 0x80803888: ori         $t2, $t2, 0xC000
    ctx->r10 = ctx->r10 | 0XC000;
    // 0x8080388C: sll         $t4, $a2, 14
    ctx->r12 = S32(ctx->r6 << 14);
    // 0x80803890: and         $t4, $t4, $t2
    ctx->r12 = ctx->r12 & ctx->r10;
    // 0x80803894: sll         $t5, $a3, 2
    ctx->r13 = S32(ctx->r7 << 2);
    // 0x80803898: andi        $t5, $t5, 0xFFC
    ctx->r13 = ctx->r13 & 0XFFC;
    // 0x8080389C: or          $t4, $t5, $t4
    ctx->r12 = ctx->r13 | ctx->r12;
    // 0x808038A0: and         $at, $at, $t2
    ctx->r1 = ctx->r1 & ctx->r10;
    // 0x808038A4: andi        $t1, $t1, 0xFFC
    ctx->r9 = ctx->r9 & 0XFFC;
    // 0x808038A8: sll         $t2, $v1, 6
    ctx->r10 = S32(ctx->r3 << 6);
    // 0x808038AC: lui         $t5, 0x708
    ctx->r13 = S32(0X708 << 16);
    // 0x808038B0: ori         $t5, $t5, 0x200
    ctx->r13 = ctx->r13 | 0X200;
    // 0x808038B4: lw          $t6, -0x3A34($t0)
    ctx->r14 = MEM_W(ctx->r8, -0X3A34);
    // 0x808038B8: lui         $t7, 0x8
    ctx->r15 = S32(0X8 << 16);
    // 0x808038BC: lui         $t8, 0xF200
    ctx->r24 = S32(0XF200 << 16);
    // 0x808038C0: lui         $t9, 0xF400
    ctx->r25 = S32(0XF400 << 16);
    // 0x808038C4: lui         $s0, 0x3
    ctx->r16 = S32(0X3 << 16);
    // 0x808038C8: ori         $s0, $s0, 0xFE00
    ctx->r16 = ctx->r16 | 0XFE00;
    // 0x808038CC: addiu       $t2, $t2, 0x1C0
    ctx->r10 = ADD32(ctx->r10, 0X1C0);
    // 0x808038D0: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
    // 0x808038D4: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x808038D8: or          $t9, $t4, $t9
    ctx->r25 = ctx->r12 | ctx->r25;
    // 0x808038DC: or          $t4, $t4, $t8
    ctx->r12 = ctx->r12 | ctx->r24;
    // 0x808038E0: ori         $t7, $t7, 0x200
    ctx->r15 = ctx->r15 | 0X200;
    // 0x808038E4: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x808038E8: addiu       $s1, $t6, 0x8
    ctx->r17 = ADD32(ctx->r14, 0X8);
    // 0x808038EC: sw          $s1, -0x3A34($t0)
    MEM_W(-0X3A34, ctx->r8) = ctx->r17;
    // 0x808038F0: sw          $t5, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r13;
    // 0x808038F4: and         $t2, $t2, $s0
    ctx->r10 = ctx->r10 & ctx->r16;
    // 0x808038F8: or          $t2, $t2, $t3
    ctx->r10 = ctx->r10 | ctx->r11;
    // 0x808038FC: lui         $t3, 0xF508
    ctx->r11 = S32(0XF508 << 16);
    // 0x80803900: or          $t2, $t2, $t3
    ctx->r10 = ctx->r10 | ctx->r11;
    // 0x80803904: sw          $t2, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r10;
    // 0x80803908: lw          $t3, -0x3A34($t0)
    ctx->r11 = MEM_W(ctx->r8, -0X3A34);
    // 0x8080390C: addiu       $t5, $t3, 0x8
    ctx->r13 = ADD32(ctx->r11, 0X8);
    // 0x80803910: sw          $t5, -0x3A34($t0)
    MEM_W(-0X3A34, ctx->r8) = ctx->r13;
    // 0x80803914: or          $at, $t1, $at
    ctx->r1 = ctx->r9 | ctx->r1;
    // 0x80803918: lui         $t5, 0xE600
    ctx->r13 = S32(0XE600 << 16);
    // 0x8080391C: sw          $t5, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r13;
    // 0x80803920: sw          $zero, 0x4($t3)
    MEM_W(0X4, ctx->r11) = 0;
    // 0x80803924: lw          $t3, -0x3A34($t0)
    ctx->r11 = MEM_W(ctx->r8, -0X3A34);
    // 0x80803928: addiu       $t5, $t3, 0x8
    ctx->r13 = ADD32(ctx->r11, 0X8);
    // 0x8080392C: sw          $t5, -0x3A34($t0)
    MEM_W(-0X3A34, ctx->r8) = ctx->r13;
    // 0x80803930: sw          $at, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r1;
    // 0x80803934: sw          $t9, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r25;
    // 0x80803938: lw          $at, -0x3A34($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X3A34);
    // 0x8080393C: addiu       $t3, $at, 0x8
    ctx->r11 = ADD32(ctx->r1, 0X8);
    // 0x80803940: sw          $t3, -0x3A34($t0)
    MEM_W(-0X3A34, ctx->r8) = ctx->r11;
    // 0x80803944: sw          $t8, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r24;
    // 0x80803948: sw          $zero, 0x4($at)
    MEM_W(0X4, ctx->r1) = 0;
    // 0x8080394C: lw          $at, -0x3A34($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X3A34);
    // 0x80803950: addiu       $t3, $at, 0x8
    ctx->r11 = ADD32(ctx->r1, 0X8);
    // 0x80803954: sw          $t3, -0x3A34($t0)
    MEM_W(-0X3A34, ctx->r8) = ctx->r11;
    // 0x80803958: sw          $t7, 0x4($at)
    MEM_W(0X4, ctx->r1) = ctx->r15;
    // 0x8080395C: sw          $t2, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r10;
    // 0x80803960: lw          $t2, -0x3A34($t0)
    ctx->r10 = MEM_W(ctx->r8, -0X3A34);
    // 0x80803964: addiu       $at, $t2, 0x8
    ctx->r1 = ADD32(ctx->r10, 0X8);
    // 0x80803968: sw          $at, -0x3A34($t0)
    MEM_W(-0X3A34, ctx->r8) = ctx->r1;
    // 0x8080396C: sw          $t4, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r12;
L_80803970:
    // 0x80803970: addu        $at, $v1, $a0
    ctx->r1 = ADD32(ctx->r3, ctx->r4);
    // 0x80803974: sll         $at, $at, 14
    ctx->r1 = S32(ctx->r1 << 14);
    // 0x80803978: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x8080397C: ori         $v1, $v1, 0xC000
    ctx->r3 = ctx->r3 | 0XC000;
    // 0x80803980: sw          $t1, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r9;
    // 0x80803984: and         $at, $at, $v1
    ctx->r1 = ctx->r1 & ctx->r3;
    // 0x80803988: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8080398C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80803990: andi        $v0, $v0, 0xFFC
    ctx->r2 = ctx->r2 & 0XFFC;
    // 0x80803994: or          $at, $at, $v0
    ctx->r1 = ctx->r1 | ctx->r2;
    // 0x80803998: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8080399C: lw          $t0, -0x3A34($v0)
    ctx->r8 = MEM_W(ctx->r2, -0X3A34);
    // 0x808039A0: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x808039A4: lui         $t2, 0xE400
    ctx->r10 = S32(0XE400 << 16);
    // 0x808039A8: sw          $t1, -0x3A34($v0)
    MEM_W(-0X3A34, ctx->r2) = ctx->r9;
    // 0x808039AC: or          $at, $at, $t2
    ctx->r1 = ctx->r1 | ctx->r10;
    // 0x808039B0: sll         $a0, $a0, 14
    ctx->r4 = S32(ctx->r4 << 14);
    // 0x808039B4: and         $v1, $a0, $v1
    ctx->r3 = ctx->r4 & ctx->r3;
    // 0x808039B8: sll         $a0, $a1, 2
    ctx->r4 = S32(ctx->r5 << 2);
    // 0x808039BC: andi        $a0, $a0, 0xFFC
    ctx->r4 = ctx->r4 & 0XFFC;
    // 0x808039C0: or          $v1, $a0, $v1
    ctx->r3 = ctx->r4 | ctx->r3;
    // 0x808039C4: sw          $v1, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r3;
    // 0x808039C8: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x808039CC: sll         $at, $a2, 21
    ctx->r1 = S32(ctx->r6 << 21);
    // 0x808039D0: sll         $v1, $a3, 5
    ctx->r3 = S32(ctx->r7 << 5);
    // 0x808039D4: andi        $v1, $v1, 0xFFE0
    ctx->r3 = ctx->r3 & 0XFFE0;
    // 0x808039D8: lui         $a0, 0x400
    ctx->r4 = S32(0X400 << 16);
    // 0x808039DC: or          $at, $v1, $at
    ctx->r1 = ctx->r3 | ctx->r1;
    // 0x808039E0: ori         $v1, $a0, 0x400
    ctx->r3 = ctx->r4 | 0X400;
    // 0x808039E4: lui         $a0, 0xB300
    ctx->r4 = S32(0XB300 << 16);
    // 0x808039E8: lui         $a1, 0xB400
    ctx->r5 = S32(0XB400 << 16);
    // 0x808039EC: lw          $a2, -0x3A34($v0)
    ctx->r6 = MEM_W(ctx->r2, -0X3A34);
    // 0x808039F0: addiu       $a3, $a2, 0x8
    ctx->r7 = ADD32(ctx->r6, 0X8);
    // 0x808039F4: sw          $a3, -0x3A34($v0)
    MEM_W(-0X3A34, ctx->r2) = ctx->r7;
    // 0x808039F8: sw          $at, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r1;
    // 0x808039FC: sw          $a1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r5;
    // 0x80803A00: lw          $at, -0x3A34($v0)
    ctx->r1 = MEM_W(ctx->r2, -0X3A34);
    // 0x80803A04: addiu       $a1, $at, 0x8
    ctx->r5 = ADD32(ctx->r1, 0X8);
    // 0x80803A08: sw          $a1, -0x3A34($v0)
    MEM_W(-0X3A34, ctx->r2) = ctx->r5;
    // 0x80803A0C: sw          $v1, 0x4($at)
    MEM_W(0X4, ctx->r1) = ctx->r3;
    // 0x80803A10: sw          $a0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r4;
    // 0x80803A14: lw          $s0, 0x4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4);
    // 0x80803A18: lw          $s1, 0x8($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X8);
    // 0x80803A1C: lw          $s2, 0xC($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XC);
    // 0x80803A20: lw          $s3, 0x10($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X10);
    // 0x80803A24: lw          $s4, 0x14($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X14);
    // 0x80803A28: lw          $s5, 0x18($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X18);
    // 0x80803A2C: lw          $s6, 0x1C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X1C);
    // 0x80803A30: jr          $ra
    // 0x80803A34: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80803A34: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80021B98_22798(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80802C10: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80802C14: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80802C18: sw          $fp, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r30;
    // 0x80802C1C: sw          $s7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r23;
    // 0x80802C20: sw          $s6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r22;
    // 0x80802C24: sw          $s5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r21;
    // 0x80802C28: sw          $s4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r20;
    // 0x80802C2C: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x80802C30: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x80802C34: sw          $s1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r17;
    // 0x80802C38: sw          $s0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r16;
    // 0x80802C3C: sll         $v1, $a3, 1
    ctx->r3 = S32(ctx->r7 << 1);
    // 0x80802C40: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
    // 0x80802C44: addu        $t1, $v0, $v1
    ctx->r9 = ADD32(ctx->r2, ctx->r3);
    // 0x80802C48: sltiu       $at, $t1, 0x281
    ctx->r1 = ctx->r9 < 0X281 ? 1 : 0;
    // 0x80802C4C: mtc1        $a2, $f4
    ctx->f4.u32l = ctx->r6;
    // 0x80802C50: nop

    // 0x80802C54: mtc1        $a1, $f0
    ctx->f0.u32l = ctx->r5;
    // 0x80802C58: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x80802C5C: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x80802C60: bne         $at, $zero, L_80802FC0
    if (ctx->r1 != 0) {
        // 0x80802C64: or          $ra, $a0, $zero
        ctx->r31 = ctx->r4 | 0;
            goto L_80802FC0;
    }
    // 0x80802C64: or          $ra, $a0, $zero
    ctx->r31 = ctx->r4 | 0;
    // 0x80802C68: addiu       $t0, $t1, -0x280
    ctx->r8 = ADD32(ctx->r9, -0X280);
    // 0x80802C6C: subu        $v1, $v1, $t0
    ctx->r3 = SUB32(ctx->r3, ctx->r8);
    // 0x80802C70: srl         $t2, $v1, 31
    ctx->r10 = S32(U32(ctx->r3) >> 31);
    // 0x80802C74: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80802C78: lw          $t3, -0x3A34($at)
    ctx->r11 = MEM_W(ctx->r1, -0X3A34);
    // 0x80802C7C: lui         $t4, 0x8080
    ctx->r12 = S32(0X8080 << 16);
    // 0x80802C80: lwc1        $f2, 0x5218($t4)
    ctx->f2.u32l = MEM_W(ctx->r12, 0X5218);
    // 0x80802C84: addu        $t2, $v1, $t2
    ctx->r10 = ADD32(ctx->r3, ctx->r10);
    // 0x80802C88: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x80802C8C: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x80802C90: trunc.w.s   $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80802C94: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80802C98: srl         $t5, $t0, 31
    ctx->r13 = S32(U32(ctx->r8) >> 31);
    // 0x80802C9C: addu        $t5, $t0, $t5
    ctx->r13 = ADD32(ctx->r8, ctx->r13);
    // 0x80802CA0: mfc1        $t0, $f8
    ctx->r8 = (int32_t)ctx->f8.u32l;
    // 0x80802CA4: nop

    // 0x80802CA8: mfc1        $s0, $f4
    ctx->r16 = (int32_t)ctx->f4.u32l;
    // 0x80802CAC: sw          $t4, -0x3A34($at)
    MEM_W(-0X3A34, ctx->r1) = ctx->r12;
    // 0x80802CB0: sra         $t2, $t2, 1
    ctx->r10 = S32(SIGNED(ctx->r10) >> 1);
    // 0x80802CB4: trunc.w.s   $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x80802CB8: addu        $t4, $v1, $v0
    ctx->r12 = ADD32(ctx->r3, ctx->r2);
    // 0x80802CBC: sra         $t5, $t5, 1
    ctx->r13 = S32(SIGNED(ctx->r13) >> 1);
    // 0x80802CC0: addu        $t6, $a1, $s0
    ctx->r14 = ADD32(ctx->r5, ctx->r16);
    // 0x80802CC4: addu        $a3, $a3, $t0
    ctx->r7 = ADD32(ctx->r7, ctx->r8);
    // 0x80802CC8: lui         $v1, 0xFD48
    ctx->r3 = S32(0XFD48 << 16);
    // 0x80802CCC: ori         $v1, $v1, 0x27F
    ctx->r3 = ctx->r3 | 0X27F;
    // 0x80802CD0: sw          $v1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r3;
    // 0x80802CD4: sw          $ra, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r31;
    // 0x80802CD8: sw          $v1, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r3;
    // 0x80802CDC: lui         $t3, 0xFF
    ctx->r11 = S32(0XFF << 16);
    // 0x80802CE0: sll         $t7, $a3, 14
    ctx->r15 = S32(ctx->r7 << 14);
    // 0x80802CE4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80802CE8: addiu       $a3, $t5, 0x7
    ctx->r7 = ADD32(ctx->r13, 0X7);
    // 0x80802CEC: sll         $t5, $t4, 14
    ctx->r13 = S32(ctx->r12 << 14);
    // 0x80802CF0: ori         $t3, $t3, 0xC000
    ctx->r11 = ctx->r11 | 0XC000;
    // 0x80802CF4: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x80802CF8: nop

    // 0x80802CFC: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80802D00: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x80802D04: lw          $t4, -0x3A34($at)
    ctx->r12 = MEM_W(ctx->r1, -0X3A34);
    // 0x80802D08: lui         $t9, 0x3
    ctx->r25 = S32(0X3 << 16);
    // 0x80802D0C: lui         $s1, 0x5F
    ctx->r17 = S32(0X5F << 16);
    // 0x80802D10: addiu       $s2, $t2, 0x7
    ctx->r18 = ADD32(ctx->r10, 0X7);
    // 0x80802D14: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x80802D18: addiu       $s3, $t6, 0xFFC
    ctx->r19 = ADD32(ctx->r14, 0XFFC);
    // 0x80802D1C: addu        $s4, $t7, $t3
    ctx->r20 = ADD32(ctx->r15, ctx->r11);
    // 0x80802D20: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x80802D24: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x80802D28: ori         $s1, $s1, 0xC000
    ctx->r17 = ctx->r17 | 0XC000;
    // 0x80802D2C: sll         $t1, $t1, 14
    ctx->r9 = S32(ctx->r9 << 14);
    // 0x80802D30: addu        $s5, $t5, $t3
    ctx->r21 = ADD32(ctx->r13, ctx->r11);
    // 0x80802D34: sra         $s6, $a3, 31
    ctx->r22 = S32(SIGNED(ctx->r7) >> 31);
    // 0x80802D38: sll         $v0, $v0, 14
    ctx->r2 = S32(ctx->r2 << 14);
    // 0x80802D3C: ori         $s7, $t9, 0xFE00
    ctx->r23 = ctx->r25 | 0XFE00;
    // 0x80802D40: lui         $fp, 0x200
    ctx->r30 = S32(0X200 << 16);
    // 0x80802D44: andi        $t6, $t8, 0xFFFF
    ctx->r14 = ctx->r24 & 0XFFFF;
    // 0x80802D48: add.s       $f4, $f0, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x80802D4C: sll         $t9, $t2, 14
    ctx->r25 = S32(ctx->r10 << 14);
    // 0x80802D50: and         $t2, $s4, $t3
    ctx->r10 = ctx->r20 & ctx->r11;
    // 0x80802D54: andi        $t8, $s3, 0xFFC
    ctx->r24 = ctx->r19 & 0XFFC;
    // 0x80802D58: addu        $t1, $t1, $s1
    ctx->r9 = ADD32(ctx->r9, ctx->r17);
    // 0x80802D5C: addu        $a1, $a1, $a2
    ctx->r5 = ADD32(ctx->r5, ctx->r6);
    // 0x80802D60: lui         $t7, 0xF548
    ctx->r15 = S32(0XF548 << 16);
    // 0x80802D64: sra         $t5, $s2, 31
    ctx->r13 = S32(SIGNED(ctx->r18) >> 31);
    // 0x80802D68: srl         $t5, $t5, 29
    ctx->r13 = S32(U32(ctx->r13) >> 29);
    // 0x80802D6C: addu        $t5, $s2, $t5
    ctx->r13 = ADD32(ctx->r18, ctx->r13);
    // 0x80802D70: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    // 0x80802D74: addiu       $s2, $a1, 0xFFC
    ctx->r18 = ADD32(ctx->r5, 0XFFC);
    // 0x80802D78: sll         $a1, $t5, 6
    ctx->r5 = S32(ctx->r13 << 6);
    // 0x80802D7C: andi        $s0, $s0, 0xFFC
    ctx->r16 = ctx->r16 & 0XFFC;
    // 0x80802D80: and         $a1, $a1, $s7
    ctx->r5 = ctx->r5 & ctx->r23;
    // 0x80802D84: or          $t5, $a1, $t7
    ctx->r13 = ctx->r5 | ctx->r15;
    // 0x80802D88: srl         $s3, $s6, 29
    ctx->r19 = S32(U32(ctx->r22) >> 29);
    // 0x80802D8C: and         $s4, $t1, $t3
    ctx->r20 = ctx->r9 & ctx->r11;
    // 0x80802D90: addu        $s6, $t9, $t3
    ctx->r22 = ADD32(ctx->r25, ctx->r11);
    // 0x80802D94: and         $s5, $s5, $t3
    ctx->r21 = ctx->r21 & ctx->r11;
    // 0x80802D98: and         $t1, $v0, $t3
    ctx->r9 = ctx->r2 & ctx->r11;
    // 0x80802D9C: andi        $a1, $a2, 0xFFC
    ctx->r5 = ctx->r6 & 0XFFC;
    // 0x80802DA0: or          $a2, $t8, $t2
    ctx->r6 = ctx->r24 | ctx->r10;
    // 0x80802DA4: ori         $t2, $fp, 0x200
    ctx->r10 = ctx->r30 | 0X200;
    // 0x80802DA8: mul.s       $f4, $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x80802DAC: trunc.w.s   $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80802DB0: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x80802DB4: andi        $fp, $s2, 0xFFC
    ctx->r30 = ctx->r18 & 0XFFC;
    // 0x80802DB8: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x80802DBC: trunc.w.s   $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80802DC0: lui         $a0, 0x788
    ctx->r4 = S32(0X788 << 16);
    // 0x80802DC4: mfc1        $v1, $f0
    ctx->r3 = (int32_t)ctx->f0.u32l;
    // 0x80802DC8: addiu       $s1, $t4, 0x8
    ctx->r17 = ADD32(ctx->r12, 0X8);
    // 0x80802DCC: sw          $s1, -0x3A34($at)
    MEM_W(-0X3A34, ctx->r1) = ctx->r17;
    // 0x80802DD0: sw          $a0, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r4;
    // 0x80802DD4: or          $s4, $fp, $s4
    ctx->r20 = ctx->r30 | ctx->r20;
    // 0x80802DD8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80802DDC: and         $t9, $t9, $t3
    ctx->r25 = ctx->r25 & ctx->r11;
    // 0x80802DE0: lui         $a0, 0xF200
    ctx->r4 = S32(0XF200 << 16);
    // 0x80802DE4: addu        $a3, $a3, $s3
    ctx->r7 = ADD32(ctx->r7, ctx->r19);
    // 0x80802DE8: sll         $s3, $a3, 6
    ctx->r19 = S32(ctx->r7 << 6);
    // 0x80802DEC: or          $a3, $t9, $s0
    ctx->r7 = ctx->r25 | ctx->r16;
    // 0x80802DF0: or          $s1, $v0, $t6
    ctx->r17 = ctx->r2 | ctx->r14;
    // 0x80802DF4: lui         $s2, 0xE400
    ctx->r18 = S32(0XE400 << 16);
    // 0x80802DF8: or          $s4, $s4, $s2
    ctx->r20 = ctx->r20 | ctx->r18;
    // 0x80802DFC: sw          $t5, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r13;
    // 0x80802E00: lw          $v0, -0x3A34($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3A34);
    // 0x80802E04: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x80802E08: sw          $t4, -0x3A34($at)
    MEM_W(-0X3A34, ctx->r1) = ctx->r12;
    // 0x80802E0C: lui         $t4, 0xE600
    ctx->r12 = S32(0XE600 << 16);
    // 0x80802E10: and         $t9, $s3, $s7
    ctx->r25 = ctx->r19 & ctx->r23;
    // 0x80802E14: and         $s3, $s6, $t3
    ctx->r19 = ctx->r22 & ctx->r11;
    // 0x80802E18: lui         $s6, 0x700
    ctx->r22 = S32(0X700 << 16);
    // 0x80802E1C: or          $s5, $fp, $s5
    ctx->r21 = ctx->r30 | ctx->r21;
    // 0x80802E20: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80802E24: sll         $t0, $t0, 14
    ctx->r8 = S32(ctx->r8 << 14);
    // 0x80802E28: and         $t0, $t0, $t3
    ctx->r8 = ctx->r8 & ctx->r11;
    // 0x80802E2C: or          $t0, $s0, $t0
    ctx->r8 = ctx->r16 | ctx->r8;
    // 0x80802E30: lui         $s0, 0xF400
    ctx->r16 = S32(0XF400 << 16);
    // 0x80802E34: or          $s7, $t0, $s0
    ctx->r23 = ctx->r8 | ctx->r16;
    // 0x80802E38: lui         $t3, 0x88
    ctx->r11 = S32(0X88 << 16);
    // 0x80802E3C: or          $v1, $t6, $v1
    ctx->r3 = ctx->r14 | ctx->r3;
    // 0x80802E40: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x80802E44: or          $s5, $s5, $s2
    ctx->r21 = ctx->r21 | ctx->r18;
    // 0x80802E48: or          $t1, $a1, $t1
    ctx->r9 = ctx->r5 | ctx->r9;
    // 0x80802E4C: lui         $fp, 0xB300
    ctx->r30 = S32(0XB300 << 16);
    // 0x80802E50: or          $s3, $s3, $t8
    ctx->r19 = ctx->r19 | ctx->r24;
    // 0x80802E54: or          $t0, $t0, $a0
    ctx->r8 = ctx->r8 | ctx->r4;
    // 0x80802E58: or          $s2, $s3, $s6
    ctx->r18 = ctx->r19 | ctx->r22;
    // 0x80802E5C: or          $t8, $t9, $t7
    ctx->r24 = ctx->r25 | ctx->r15;
    // 0x80802E60: or          $t9, $a3, $s0
    ctx->r25 = ctx->r7 | ctx->r16;
    // 0x80802E64: or          $s0, $a2, $s6
    ctx->r16 = ctx->r6 | ctx->r22;
    // 0x80802E68: lui         $s6, 0xB400
    ctx->r22 = S32(0XB400 << 16);
    // 0x80802E6C: or          $t7, $a3, $a0
    ctx->r15 = ctx->r7 | ctx->r4;
    // 0x80802E70: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x80802E74: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80802E78: lw          $v0, -0x3A34($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3A34);
    // 0x80802E7C: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
    // 0x80802E80: sw          $a0, -0x3A34($at)
    MEM_W(-0X3A34, ctx->r1) = ctx->r4;
    // 0x80802E84: sw          $s2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r18;
    // 0x80802E88: sw          $s7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r23;
    // 0x80802E8C: lw          $v0, -0x3A34($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3A34);
    // 0x80802E90: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
    // 0x80802E94: sw          $a0, -0x3A34($at)
    MEM_W(-0X3A34, ctx->r1) = ctx->r4;
    // 0x80802E98: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80802E9C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80802EA0: lw          $v0, -0x3A34($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3A34);
    // 0x80802EA4: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
    // 0x80802EA8: sw          $a0, -0x3A34($at)
    MEM_W(-0X3A34, ctx->r1) = ctx->r4;
    // 0x80802EAC: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x80802EB0: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x80802EB4: lw          $v0, -0x3A34($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3A34);
    // 0x80802EB8: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
    // 0x80802EBC: sw          $a0, -0x3A34($at)
    MEM_W(-0X3A34, ctx->r1) = ctx->r4;
    // 0x80802EC0: sw          $s3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r19;
    // 0x80802EC4: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x80802EC8: lw          $v0, -0x3A34($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3A34);
    // 0x80802ECC: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
    // 0x80802ED0: sw          $a0, -0x3A34($at)
    MEM_W(-0X3A34, ctx->r1) = ctx->r4;
    // 0x80802ED4: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x80802ED8: sw          $s5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r21;
    // 0x80802EDC: lw          $v0, -0x3A34($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3A34);
    // 0x80802EE0: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
    // 0x80802EE4: sw          $a0, -0x3A34($at)
    MEM_W(-0X3A34, ctx->r1) = ctx->r4;
    // 0x80802EE8: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    // 0x80802EEC: sw          $s6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r22;
    // 0x80802EF0: lw          $v0, -0x3A34($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3A34);
    // 0x80802EF4: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x80802EF8: sw          $v1, -0x3A34($at)
    MEM_W(-0X3A34, ctx->r1) = ctx->r3;
    // 0x80802EFC: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
    // 0x80802F00: sw          $fp, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r30;
    // 0x80802F04: lw          $v0, -0x3A34($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3A34);
    // 0x80802F08: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x80802F0C: sw          $v1, -0x3A34($at)
    MEM_W(-0X3A34, ctx->r1) = ctx->r3;
    // 0x80802F10: sw          $ra, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r31;
    // 0x80802F14: lw          $v1, 0x4($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4);
    // 0x80802F18: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x80802F1C: lw          $v0, -0x3A34($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3A34);
    // 0x80802F20: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x80802F24: sw          $v1, -0x3A34($at)
    MEM_W(-0X3A34, ctx->r1) = ctx->r3;
    // 0x80802F28: lui         $v1, 0x788
    ctx->r3 = S32(0X788 << 16);
    // 0x80802F2C: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    // 0x80802F30: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80802F34: lw          $v0, -0x3A34($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3A34);
    // 0x80802F38: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x80802F3C: sw          $v1, -0x3A34($at)
    MEM_W(-0X3A34, ctx->r1) = ctx->r3;
    // 0x80802F40: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x80802F44: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80802F48: lw          $v0, -0x3A34($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3A34);
    // 0x80802F4C: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x80802F50: sw          $v1, -0x3A34($at)
    MEM_W(-0X3A34, ctx->r1) = ctx->r3;
    // 0x80802F54: sw          $s0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r16;
    // 0x80802F58: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80802F5C: lw          $v0, -0x3A34($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3A34);
    // 0x80802F60: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x80802F64: sw          $v1, -0x3A34($at)
    MEM_W(-0X3A34, ctx->r1) = ctx->r3;
    // 0x80802F68: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80802F6C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80802F70: lw          $v0, -0x3A34($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3A34);
    // 0x80802F74: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x80802F78: sw          $v1, -0x3A34($at)
    MEM_W(-0X3A34, ctx->r1) = ctx->r3;
    // 0x80802F7C: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x80802F80: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80802F84: lw          $v0, -0x3A34($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3A34);
    // 0x80802F88: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x80802F8C: sw          $v1, -0x3A34($at)
    MEM_W(-0X3A34, ctx->r1) = ctx->r3;
    // 0x80802F90: sw          $a2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r6;
    // 0x80802F94: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80802F98: lw          $v0, -0x3A34($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3A34);
    // 0x80802F9C: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x80802FA0: sw          $v1, -0x3A34($at)
    MEM_W(-0X3A34, ctx->r1) = ctx->r3;
    // 0x80802FA4: sw          $a1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r5;
    // 0x80802FA8: sw          $s4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r20;
    // 0x80802FAC: lw          $v1, -0x3A34($at)
    ctx->r3 = MEM_W(ctx->r1, -0X3A34);
    // 0x80802FB0: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x80802FB4: sw          $v0, -0x3A34($at)
    MEM_W(-0X3A34, ctx->r1) = ctx->r2;
    // 0x80802FB8: j           L_80803188
    // 0x80802FBC: sw          $s6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r22;
        goto L_80803188;
    // 0x80802FBC: sw          $s6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r22;
L_80802FC0:
    // 0x80802FC0: sll         $a0, $a2, 2
    ctx->r4 = S32(ctx->r6 << 2);
    // 0x80802FC4: sll         $at, $a1, 3
    ctx->r1 = S32(ctx->r5 << 3);
    // 0x80802FC8: lui         $v1, 0x8080
    ctx->r3 = S32(0X8080 << 16);
    // 0x80802FCC: lwc1        $f2, 0x5218($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X5218);
    // 0x80802FD0: mul.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x80802FD4: addu        $v1, $at, $a0
    ctx->r3 = ADD32(ctx->r1, ctx->r4);
    // 0x80802FD8: mul.s       $f2, $f4, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x80802FDC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80802FE0: trunc.w.s   $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80802FE4: lw          $a2, -0x3A34($at)
    ctx->r6 = MEM_W(ctx->r1, -0X3A34);
    // 0x80802FE8: addiu       $t0, $a2, 0x8
    ctx->r8 = ADD32(ctx->r6, 0X8);
    // 0x80802FEC: sw          $t0, -0x3A34($at)
    MEM_W(-0X3A34, ctx->r1) = ctx->r8;
    // 0x80802FF0: lui         $t0, 0xFD48
    ctx->r8 = S32(0XFD48 << 16);
    // 0x80802FF4: trunc.w.s   $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.u32l = TRUNC_W_S(ctx->f2.fl);
    // 0x80802FF8: addiu       $t2, $v1, 0xFFC
    ctx->r10 = ADD32(ctx->r3, 0XFFC);
    // 0x80802FFC: trunc.w.s   $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x80803000: mfc1        $t3, $f0
    ctx->r11 = (int32_t)ctx->f0.u32l;
    // 0x80803004: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x80803008: ori         $v1, $v1, 0xC000
    ctx->r3 = ctx->r3 | 0XC000;
    // 0x8080300C: sll         $t1, $t1, 14
    ctx->r9 = S32(ctx->r9 << 14);
    // 0x80803010: addu        $t1, $t1, $v1
    ctx->r9 = ADD32(ctx->r9, ctx->r3);
    // 0x80803014: trunc.w.s   $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80803018: sll         $t4, $t3, 14
    ctx->r12 = S32(ctx->r11 << 14);
    // 0x8080301C: ori         $t0, $t0, 0x27F
    ctx->r8 = ctx->r8 | 0X27F;
    // 0x80803020: sw          $ra, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r31;
    // 0x80803024: sw          $t0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r8;
    // 0x80803028: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x8080302C: and         $t0, $t1, $v1
    ctx->r8 = ctx->r9 & ctx->r3;
    // 0x80803030: andi        $t1, $t2, 0xFFC
    ctx->r9 = ctx->r10 & 0XFFC;
    // 0x80803034: mfc1        $t2, $f2
    ctx->r10 = (int32_t)ctx->f2.u32l;
    // 0x80803038: and         $t4, $t4, $v1
    ctx->r12 = ctx->r12 & ctx->r3;
    // 0x8080303C: sll         $v0, $v0, 14
    ctx->r2 = S32(ctx->r2 << 14);
    // 0x80803040: mfc1        $t5, $f0
    ctx->r13 = (int32_t)ctx->f0.u32l;
    // 0x80803044: nop

    // 0x80803048: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8080304C: addu        $t3, $t3, $a3
    ctx->r11 = ADD32(ctx->r11, ctx->r7);
    // 0x80803050: andi        $t6, $t6, 0xFFC
    ctx->r14 = ctx->r14 & 0XFFC;
    // 0x80803054: lw          $t7, -0x3A34($at)
    ctx->r15 = MEM_W(ctx->r1, -0X3A34);
    // 0x80803058: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8080305C: or          $t4, $t6, $t4
    ctx->r12 = ctx->r14 | ctx->r12;
    // 0x80803060: andi        $t2, $t2, 0xFFFF
    ctx->r10 = ctx->r10 & 0XFFFF;
    // 0x80803064: lui         $t6, 0x3
    ctx->r14 = S32(0X3 << 16);
    // 0x80803068: lui         $t8, 0x708
    ctx->r24 = S32(0X708 << 16);
    // 0x8080306C: or          $t0, $t1, $t0
    ctx->r8 = ctx->r9 | ctx->r8;
    // 0x80803070: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x80803074: sll         $t1, $t3, 14
    ctx->r9 = S32(ctx->r11 << 14);
    // 0x80803078: ori         $t3, $t8, 0x200
    ctx->r11 = ctx->r24 | 0X200;
    // 0x8080307C: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x80803080: lui         $t9, 0xF200
    ctx->r25 = S32(0XF200 << 16);
    // 0x80803084: lui         $s0, 0xE400
    ctx->r16 = S32(0XE400 << 16);
    // 0x80803088: lui         $s2, 0x8
    ctx->r18 = S32(0X8 << 16);
    // 0x8080308C: lui         $s3, 0xF400
    ctx->r19 = S32(0XF400 << 16);
    // 0x80803090: ori         $t6, $t6, 0xFE00
    ctx->r14 = ctx->r14 | 0XFE00;
    // 0x80803094: sll         $a3, $a3, 6
    ctx->r7 = S32(ctx->r7 << 6);
    // 0x80803098: andi        $a0, $a0, 0xFFC
    ctx->r4 = ctx->r4 & 0XFFC;
    // 0x8080309C: addiu       $t1, $t1, -0x4000
    ctx->r9 = ADD32(ctx->r9, -0X4000);
    // 0x808030A0: lui         $s4, 0xE600
    ctx->r20 = S32(0XE600 << 16);
    // 0x808030A4: or          $s1, $t2, $a2
    ctx->r17 = ctx->r10 | ctx->r6;
    // 0x808030A8: lui         $a2, 0x700
    ctx->r6 = S32(0X700 << 16);
    // 0x808030AC: or          $t2, $t4, $s3
    ctx->r10 = ctx->r12 | ctx->r19;
    // 0x808030B0: ori         $s2, $s2, 0x200
    ctx->r18 = ctx->r18 | 0X200;
    // 0x808030B4: lui         $s3, 0xE700
    ctx->r19 = S32(0XE700 << 16);
    // 0x808030B8: or          $t0, $t0, $s0
    ctx->r8 = ctx->r8 | ctx->r16;
    // 0x808030BC: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x808030C0: or          $a0, $t4, $t9
    ctx->r4 = ctx->r12 | ctx->r25;
    // 0x808030C4: lui         $t4, 0xB400
    ctx->r12 = S32(0XB400 << 16);
    // 0x808030C8: sw          $t8, -0x3A34($at)
    MEM_W(-0X3A34, ctx->r1) = ctx->r24;
    // 0x808030CC: sw          $t3, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r11;
    // 0x808030D0: addiu       $a3, $a3, 0x1C0
    ctx->r7 = ADD32(ctx->r7, 0X1C0);
    // 0x808030D4: and         $a3, $a3, $t6
    ctx->r7 = ctx->r7 & ctx->r14;
    // 0x808030D8: lui         $t3, 0xF548
    ctx->r11 = S32(0XF548 << 16);
    // 0x808030DC: or          $a3, $a3, $t3
    ctx->r7 = ctx->r7 | ctx->r11;
    // 0x808030E0: sw          $a3, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r7;
    // 0x808030E4: lw          $t3, -0x3A34($at)
    ctx->r11 = MEM_W(ctx->r1, -0X3A34);
    // 0x808030E8: addiu       $t6, $t3, 0x8
    ctx->r14 = ADD32(ctx->r11, 0X8);
    // 0x808030EC: sw          $t6, -0x3A34($at)
    MEM_W(-0X3A34, ctx->r1) = ctx->r14;
    // 0x808030F0: sw          $s4, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r20;
    // 0x808030F4: sw          $zero, 0x4($t3)
    MEM_W(0X4, ctx->r11) = 0;
    // 0x808030F8: and         $v1, $t1, $v1
    ctx->r3 = ctx->r9 & ctx->r3;
    // 0x808030FC: addu        $a1, $a1, $t5
    ctx->r5 = ADD32(ctx->r5, ctx->r13);
    // 0x80803100: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x80803104: addiu       $a1, $a1, 0xFFC
    ctx->r5 = ADD32(ctx->r5, 0XFFC);
    // 0x80803108: andi        $a1, $a1, 0xFFC
    ctx->r5 = ctx->r5 & 0XFFC;
    // 0x8080310C: or          $v1, $a1, $v1
    ctx->r3 = ctx->r5 | ctx->r3;
    // 0x80803110: or          $a1, $v1, $a2
    ctx->r5 = ctx->r3 | ctx->r6;
    // 0x80803114: lw          $a2, -0x3A34($at)
    ctx->r6 = MEM_W(ctx->r1, -0X3A34);
    // 0x80803118: addiu       $t1, $a2, 0x8
    ctx->r9 = ADD32(ctx->r6, 0X8);
    // 0x8080311C: sw          $t1, -0x3A34($at)
    MEM_W(-0X3A34, ctx->r1) = ctx->r9;
    // 0x80803120: sw          $a1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r5;
    // 0x80803124: sw          $t2, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r10;
    // 0x80803128: lw          $a1, -0x3A34($at)
    ctx->r5 = MEM_W(ctx->r1, -0X3A34);
    // 0x8080312C: addiu       $a2, $a1, 0x8
    ctx->r6 = ADD32(ctx->r5, 0X8);
    // 0x80803130: sw          $a2, -0x3A34($at)
    MEM_W(-0X3A34, ctx->r1) = ctx->r6;
    // 0x80803134: sw          $s3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r19;
    // 0x80803138: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x8080313C: lw          $a1, -0x3A34($at)
    ctx->r5 = MEM_W(ctx->r1, -0X3A34);
    // 0x80803140: addiu       $a2, $a1, 0x8
    ctx->r6 = ADD32(ctx->r5, 0X8);
    // 0x80803144: sw          $a2, -0x3A34($at)
    MEM_W(-0X3A34, ctx->r1) = ctx->r6;
    // 0x80803148: sw          $s2, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r18;
    // 0x8080314C: sw          $a3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r7;
    // 0x80803150: lw          $a1, -0x3A34($at)
    ctx->r5 = MEM_W(ctx->r1, -0X3A34);
    // 0x80803154: addiu       $a2, $a1, 0x8
    ctx->r6 = ADD32(ctx->r5, 0X8);
    // 0x80803158: sw          $a2, -0x3A34($at)
    MEM_W(-0X3A34, ctx->r1) = ctx->r6;
    // 0x8080315C: sw          $v1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r3;
    // 0x80803160: sw          $a0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r4;
    // 0x80803164: lw          $v1, -0x3A34($at)
    ctx->r3 = MEM_W(ctx->r1, -0X3A34);
    // 0x80803168: addiu       $a0, $v1, 0x8
    ctx->r4 = ADD32(ctx->r3, 0X8);
    // 0x8080316C: sw          $a0, -0x3A34($at)
    MEM_W(-0X3A34, ctx->r1) = ctx->r4;
    // 0x80803170: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x80803174: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x80803178: lw          $v1, -0x3A34($at)
    ctx->r3 = MEM_W(ctx->r1, -0X3A34);
    // 0x8080317C: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x80803180: sw          $v0, -0x3A34($at)
    MEM_W(-0X3A34, ctx->r1) = ctx->r2;
    // 0x80803184: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
L_80803188:
    // 0x80803188: sw          $s1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r17;
    // 0x8080318C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80803190: lw          $v0, -0x3A34($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3A34);
    // 0x80803194: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x80803198: sw          $v1, -0x3A34($at)
    MEM_W(-0X3A34, ctx->r1) = ctx->r3;
    // 0x8080319C: lui         $at, 0x200
    ctx->r1 = S32(0X200 << 16);
    // 0x808031A0: ori         $at, $at, 0x200
    ctx->r1 = ctx->r1 | 0X200;
    // 0x808031A4: sw          $at, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r1;
    // 0x808031A8: lui         $at, 0xB300
    ctx->r1 = S32(0XB300 << 16);
    // 0x808031AC: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x808031B0: lw          $s0, 0x8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X8);
    // 0x808031B4: lw          $s1, 0xC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XC);
    // 0x808031B8: lw          $s2, 0x10($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X10);
    // 0x808031BC: lw          $s3, 0x14($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X14);
    // 0x808031C0: lw          $s4, 0x18($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X18);
    // 0x808031C4: lw          $s5, 0x1C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X1C);
    // 0x808031C8: lw          $s6, 0x20($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X20);
    // 0x808031CC: lw          $s7, 0x24($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X24);
    // 0x808031D0: lw          $fp, 0x28($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X28);
    // 0x808031D4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x808031D8: jr          $ra
    // 0x808031DC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x808031DC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80022348_22F48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80803430: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80803434: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80803438: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x8080343C: lh          $v1, 0x10($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X10);
    // 0x80803440: blez        $v1, L_8080345C
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80803444: nop
    
            goto L_8080345C;
    }
    // 0x80803444: nop

    // 0x80803448: div         $zero, $a2, $v1
    lo = S32(S64(S32(ctx->r6)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r6)) % S64(S32(ctx->r3)));
    // 0x8080344C: mfhi        $at
    ctx->r1 = hi;
    // 0x80803450: sra         $a2, $at, 31
    ctx->r6 = S32(SIGNED(ctx->r1) >> 31);
    // 0x80803454: and         $v1, $a2, $v1
    ctx->r3 = ctx->r6 & ctx->r3;
    // 0x80803458: addu        $a2, $v1, $at
    ctx->r6 = ADD32(ctx->r3, ctx->r1);
L_8080345C:
    // 0x8080345C: lh          $v1, 0x12($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X12);
    // 0x80803460: blez        $v1, L_8080347C
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80803464: nop
    
            goto L_8080347C;
    }
    // 0x80803464: nop

    // 0x80803468: div         $zero, $a3, $v1
    lo = S32(S64(S32(ctx->r7)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r7)) % S64(S32(ctx->r3)));
    // 0x8080346C: mfhi        $at
    ctx->r1 = hi;
    // 0x80803470: sra         $a3, $at, 31
    ctx->r7 = S32(SIGNED(ctx->r1) >> 31);
    // 0x80803474: and         $v1, $a3, $v1
    ctx->r3 = ctx->r7 & ctx->r3;
    // 0x80803478: addu        $a3, $v1, $at
    ctx->r7 = ADD32(ctx->r3, ctx->r1);
L_8080347C:
    // 0x8080347C: lh          $t1, 0x2E($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X2E);
    // 0x80803480: slt         $at, $a0, $t1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80803484: xori        $t2, $at, 0x1
    ctx->r10 = ctx->r1 ^ 0X1;
    // 0x80803488: lh          $t3, 0x30($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X30);
    // 0x8080348C: slt         $at, $a1, $t3
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80803490: xori        $at, $at, 0x1
    ctx->r1 = ctx->r1 ^ 0X1;
    // 0x80803494: addiu       $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
    // 0x80803498: bne         $at, $zero, L_808034A4
    if (ctx->r1 != 0) {
        // 0x8080349C: addiu       $v1, $zero, 0x0
        ctx->r3 = ADD32(0, 0X0);
            goto L_808034A4;
    }
    // 0x8080349C: addiu       $v1, $zero, 0x0
    ctx->r3 = ADD32(0, 0X0);
    // 0x808034A0: subu        $v1, $t3, $a1
    ctx->r3 = SUB32(ctx->r11, ctx->r5);
L_808034A4:
    // 0x808034A4: bne         $t2, $zero, L_808034B0
    if (ctx->r10 != 0) {
        // 0x808034A8: nop
    
            goto L_808034B0;
    }
    // 0x808034A8: nop

    // 0x808034AC: subu        $t0, $t1, $a0
    ctx->r8 = SUB32(ctx->r9, ctx->r4);
L_808034B0:
    // 0x808034B0: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x808034B4: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x808034B8: slt         $at, $t1, $a0
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x808034BC: bne         $at, $zero, L_808034C8
    if (ctx->r1 != 0) {
        // 0x808034C0: nop
    
            goto L_808034C8;
    }
    // 0x808034C0: nop

    // 0x808034C4: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
L_808034C8:
    // 0x808034C8: subu        $t1, $t2, $t0
    ctx->r9 = SUB32(ctx->r10, ctx->r8);
    // 0x808034CC: slt         $at, $t3, $a1
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x808034D0: bne         $at, $zero, L_808034DC
    if (ctx->r1 != 0) {
        // 0x808034D4: subu        $t2, $t4, $v1
        ctx->r10 = SUB32(ctx->r12, ctx->r3);
            goto L_808034DC;
    }
    // 0x808034D4: subu        $t2, $t4, $v1
    ctx->r10 = SUB32(ctx->r12, ctx->r3);
    // 0x808034D8: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
L_808034DC:
    // 0x808034DC: addu        $at, $t2, $a1
    ctx->r1 = ADD32(ctx->r10, ctx->r5);
    // 0x808034E0: lh          $t5, 0x34($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X34);
    // 0x808034E4: slt         $at, $t5, $at
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x808034E8: lh          $t4, 0x32($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X32);
    // 0x808034EC: bne         $at, $zero, L_80803510
    if (ctx->r1 != 0) {
        // 0x808034F0: addu        $t3, $t1, $a0
        ctx->r11 = ADD32(ctx->r9, ctx->r4);
            goto L_80803510;
    }
    // 0x808034F0: addu        $t3, $t1, $a0
    ctx->r11 = ADD32(ctx->r9, ctx->r4);
    // 0x808034F4: slt         $at, $t4, $t3
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x808034F8: bne         $at, $zero, L_8080351C
    if (ctx->r1 != 0) {
        // 0x808034FC: nop
    
            goto L_8080351C;
    }
    // 0x808034FC: nop

L_80803500:
    // 0x80803500: bgtz        $t1, L_80803528
    if (SIGNED(ctx->r9) > 0) {
        // 0x80803504: nop
    
            goto L_80803528;
    }
    // 0x80803504: nop

    // 0x80803508: j           L_80803548
    // 0x8080350C: nop

        goto L_80803548;
    // 0x8080350C: nop

L_80803510:
    // 0x80803510: slt         $at, $t4, $t3
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80803514: beq         $at, $zero, L_80803500
    if (ctx->r1 == 0) {
        // 0x80803518: subu        $t2, $t5, $a1
        ctx->r10 = SUB32(ctx->r13, ctx->r5);
            goto L_80803500;
    }
    // 0x80803518: subu        $t2, $t5, $a1
    ctx->r10 = SUB32(ctx->r13, ctx->r5);
L_8080351C:
    // 0x8080351C: subu        $t1, $t4, $a0
    ctx->r9 = SUB32(ctx->r12, ctx->r4);
    // 0x80803520: blez        $t1, L_80803548
    if (SIGNED(ctx->r9) <= 0) {
        // 0x80803524: nop
    
            goto L_80803548;
    }
    // 0x80803524: nop

L_80803528:
    // 0x80803528: blez        $t2, L_80803548
    if (SIGNED(ctx->r10) <= 0) {
        // 0x8080352C: nop
    
            goto L_80803548;
    }
    // 0x8080352C: nop

    // 0x80803530: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80803534: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x80803538: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8080353C: addu        $a2, $t0, $a2
    ctx->r6 = ADD32(ctx->r8, ctx->r6);
    // 0x80803540: jal         0x80803554
    // 0x80803544: addu        $a3, $v1, $a3
    ctx->r7 = ADD32(ctx->r3, ctx->r7);
    func_80022500_23100(rdram, ctx);
        goto after_0;
    // 0x80803544: addu        $a3, $v1, $a3
    ctx->r7 = ADD32(ctx->r3, ctx->r7);
    after_0:
L_80803548:
    // 0x80803548: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8080354C: jr          $ra
    // 0x80803550: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80803550: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80022DF4_239F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80803A38: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80803A3C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80803A40: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80803A44: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80803A48: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80803A4C: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80803A50: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80803A54: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80803A58: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80803A5C: lw          $s3, 0x50($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X50);
    // 0x80803A60: addu        $at, $s3, $a2
    ctx->r1 = ADD32(ctx->r19, ctx->r6);
    // 0x80803A64: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x80803A68: lh          $v0, 0x10($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X10);
    // 0x80803A6C: slt         $at, $v0, $at
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x80803A70: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x80803A74: beq         $at, $zero, L_80803AC8
    if (ctx->r1 == 0) {
        // 0x80803A78: nop
    
            goto L_80803AC8;
    }
    // 0x80803A78: nop

    // 0x80803A7C: sw          $s4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r20;
    // 0x80803A80: sw          $s5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r21;
    // 0x80803A84: subu        $s6, $v0, $a2
    ctx->r22 = SUB32(ctx->r2, ctx->r6);
    // 0x80803A88: sw          $s6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r22;
    // 0x80803A8C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80803A90: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x80803A94: jal         0x80803554
    // 0x80803A98: or          $s2, $a3, $zero
    ctx->r18 = ctx->r7 | 0;
    func_80022500_23100(rdram, ctx);
        goto after_0;
    // 0x80803A98: or          $s2, $a3, $zero
    ctx->r18 = ctx->r7 | 0;
    after_0:
    // 0x80803A9C: sw          $s4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r20;
    // 0x80803AA0: sw          $s5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r21;
    // 0x80803AA4: subu        $at, $s3, $s6
    ctx->r1 = SUB32(ctx->r19, ctx->r22);
    // 0x80803AA8: sw          $at, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r1;
    // 0x80803AAC: addu        $a0, $s6, $s0
    ctx->r4 = ADD32(ctx->r22, ctx->r16);
    // 0x80803AB0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80803AB4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80803AB8: jal         0x80803554
    // 0x80803ABC: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    func_80022500_23100(rdram, ctx);
        goto after_1;
    // 0x80803ABC: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    after_1:
    // 0x80803AC0: j           L_80803AD8
    // 0x80803AC4: nop

        goto L_80803AD8;
    // 0x80803AC4: nop

L_80803AC8:
    // 0x80803AC8: sw          $s4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r20;
    // 0x80803ACC: sw          $s5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r21;
    // 0x80803AD0: jal         0x80803554
    // 0x80803AD4: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    func_80022500_23100(rdram, ctx);
        goto after_2;
    // 0x80803AD4: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    after_2:
L_80803AD8:
    // 0x80803AD8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80803ADC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80803AE0: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80803AE4: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80803AE8: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80803AEC: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80803AF0: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80803AF4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80803AF8: jr          $ra
    // 0x80803AFC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80803AFC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void recomp_on_init(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80805208: jr          $ra
    // 0x8080520C: nop

    return;
    // 0x8080520C: nop

;}
RECOMP_FUNC void func_80004170_4D70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80803B00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80803B04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80803B08: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80803B0C: jal         0x80805208
    // 0x80803B10: nop

    recomp_trigger_event(rdram, ctx, base_event_index + 0);
        goto after_0;
    // 0x80803B10: nop

    after_0:
    // 0x80803B14: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80803B18: addiu       $s0, $at, -0x3340
    ctx->r16 = ADD32(ctx->r1, -0X3340);
    // 0x80803B1C: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x80803B20: ori         $a1, $at, 0xF908
    ctx->r5 = ctx->r1 | 0XF908;
    // 0x80803B24: jal         0x80000000
    // 0x80803B28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800041E0_4DE0(rdram, ctx);
        goto after_1;
    // 0x80803B28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80803B2C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80803B30: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x80803B34: sb          $zero, -0x3A2C($v0)
    MEM_B(-0X3A2C, ctx->r2) = 0;
    // 0x80803B38: sw          $s0, -0x3A38($at)
    MEM_W(-0X3A38, ctx->r1) = ctx->r16;
    // 0x80803B3C: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80803B40: ori         $at, $at, 0xADC0
    ctx->r1 = ctx->r1 | 0XADC0;
    // 0x80803B44: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x80803B48: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x80803B4C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80803B50: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
    // 0x80803B54: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80803B58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80803B5C: jr          $ra
    // 0x80803B60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80803B60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800012FC_1EFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80803B64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80803B68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80803B6C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80803B70: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80803B74: ori         $at, $at, 0xADCA
    ctx->r1 = ctx->r1 | 0XADCA;
    // 0x80803B78: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80803B7C: addiu       $v0, $v0, -0x3340
    ctx->r2 = ADD32(ctx->r2, -0X3340);
    // 0x80803B80: addu        $at, $v0, $at
    ctx->r1 = ADD32(ctx->r2, ctx->r1);
    // 0x80803B84: lbu         $s0, 0x0($at)
    ctx->r16 = MEM_BU(ctx->r1, 0X0);
    // 0x80803B88: jal         0x8F00005C
    // 0x80803B8C: nop

    recomp_run_ui_callbacks(rdram, ctx);
        goto after_0;
    // 0x80803B8C: nop

    after_0:
    // 0x80803B90: lui         $at, 0x52
    ctx->r1 = S32(0X52 << 16);
    // 0x80803B94: ori         $at, $at, 0x5464
    ctx->r1 = ctx->r1 | 0X5464;
    // 0x80803B98: lui         $v0, 0x1000
    ctx->r2 = S32(0X1000 << 16);
    // 0x80803B9C: ori         $v1, $v0, 0x64
    ctx->r3 = ctx->r2 | 0X64;
    // 0x80803BA0: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x80803BA4: lw          $a0, -0x3A34($v0)
    ctx->r4 = MEM_W(ctx->r2, -0X3A34);
    // 0x80803BA8: addiu       $a1, $a0, 0x8
    ctx->r5 = ADD32(ctx->r4, 0X8);
    // 0x80803BAC: sw          $a1, -0x3A34($v0)
    MEM_W(-0X3A34, ctx->r2) = ctx->r5;
    // 0x80803BB0: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
    // 0x80803BB4: beq         $s0, $zero, L_80803BE4
    if (ctx->r16 == 0) {
        // 0x80803BB8: sw          $at, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->r1;
            goto L_80803BE4;
    }
    // 0x80803BB8: sw          $at, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r1;
    // 0x80803BBC: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x80803BC0: divu        $zero, $at, $s0
    lo = S32(U32(ctx->r1) / U32(ctx->r16)); hi = S32(U32(ctx->r1) % U32(ctx->r16));
    // 0x80803BC4: mflo        $at
    ctx->r1 = lo;
    // 0x80803BC8: lw          $v1, -0x3A34($v0)
    ctx->r3 = MEM_W(ctx->r2, -0X3A34);
    // 0x80803BCC: addiu       $a0, $v1, 0x8
    ctx->r4 = ADD32(ctx->r3, 0X8);
    // 0x80803BD0: sw          $a0, -0x3A34($v0)
    MEM_W(-0X3A34, ctx->r2) = ctx->r4;
    // 0x80803BD4: sw          $at, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r1;
    // 0x80803BD8: lui         $at, 0x6400
    ctx->r1 = S32(0X6400 << 16);
    // 0x80803BDC: ori         $at, $at, 0x9
    ctx->r1 = ctx->r1 | 0X9;
    // 0x80803BE0: sw          $at, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r1;
L_80803BE4:
    // 0x80803BE4: lw          $at, -0x3A34($v0)
    ctx->r1 = MEM_W(ctx->r2, -0X3A34);
    // 0x80803BE8: addiu       $v1, $at, 0x8
    ctx->r3 = ADD32(ctx->r1, 0X8);
    // 0x80803BEC: sw          $v1, -0x3A34($v0)
    MEM_W(-0X3A34, ctx->r2) = ctx->r3;
    // 0x80803BF0: lui         $v0, 0x8007
    ctx->r2 = S32(0X8007 << 16);
    // 0x80803BF4: addiu       $v0, $v0, -0x2B20
    ctx->r2 = ADD32(ctx->r2, -0X2B20);
    // 0x80803BF8: sw          $v0, 0x4($at)
    MEM_W(0X4, ctx->r1) = ctx->r2;
    // 0x80803BFC: lui         $v0, 0x600
    ctx->r2 = S32(0X600 << 16);
    // 0x80803C00: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
    // 0x80803C04: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80803C08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80803C0C: jr          $ra
    // 0x80803C10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80803C10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void overlay_apply_relocations(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801000: sltiu       $at, $a0, 0x520
    ctx->r1 = ctx->r4 < 0X520 ? 1 : 0;
    // 0x80801004: bne         $at, $zero, L_80801014
    if (ctx->r1 != 0) {
        // 0x80801008: nop
    
            goto L_80801014;
    }
    // 0x80801008: nop

L_8080100C:
    // 0x8080100C: jr          $ra
    // 0x80801010: nop

    return;
    // 0x80801010: nop

L_80801014:
    // 0x80801014: sll         $at, $a0, 2
    ctx->r1 = S32(ctx->r4 << 2);
    // 0x80801018: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    // 0x8080101C: addu        $at, $v0, $at
    ctx->r1 = ADD32(ctx->r2, ctx->r1);
    // 0x80801020: lui         $v0, 0x8080
    ctx->r2 = S32(0X8080 << 16);
    // 0x80801024: addiu       $v0, $v0, 0x52B0
    ctx->r2 = ADD32(ctx->r2, 0X52B0);
    // 0x80801028: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x8080102C: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x80801030: beq         $v1, $zero, L_8080100C
    if (ctx->r3 == 0) {
        // 0x80801034: nop
    
            goto L_8080100C;
    }
    // 0x80801034: nop

    // 0x80801038: lhu         $a0, 0x4($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X4);
    // 0x8080103C: beq         $a0, $zero, L_8080100C
    if (ctx->r4 == 0) {
        // 0x80801040: nop
    
            goto L_8080100C;
    }
    // 0x80801040: nop

    // 0x80801044: lw          $v0, 0x8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X8);
    // 0x80801048: beq         $a1, $v0, L_8080100C
    if (ctx->r5 == ctx->r2) {
        // 0x8080104C: nop
    
            goto L_8080100C;
    }
    // 0x8080104C: nop

    // 0x80801050: subu        $v0, $a1, $v0
    ctx->r2 = SUB32(ctx->r5, ctx->r2);
    // 0x80801054: sll         $at, $a0, 3
    ctx->r1 = S32(ctx->r4 << 3);
    // 0x80801058: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8080105C: addu        $a0, $v1, $at
    ctx->r4 = ADD32(ctx->r3, ctx->r1);
    // 0x80801060: j           L_80801074
    // 0x80801064: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_80801074;
    // 0x80801064: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_80801068:
    // 0x80801068: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x8080106C: beq         $v1, $a0, L_8080100C
    if (ctx->r3 == ctx->r4) {
        // 0x80801070: nop
    
            goto L_8080100C;
    }
    // 0x80801070: nop

L_80801074:
    // 0x80801074: lbu         $at, 0x0($v1)
    ctx->r1 = MEM_BU(ctx->r3, 0X0);
    // 0x80801078: bne         $at, $a2, L_80801068
    if (ctx->r1 != ctx->r6) {
        // 0x8080107C: nop
    
            goto L_80801068;
    }
    // 0x8080107C: nop

    // 0x80801080: lw          $at, -0x4($v1)
    ctx->r1 = MEM_W(ctx->r3, -0X4);
    // 0x80801084: addu        $at, $a1, $at
    ctx->r1 = ADD32(ctx->r5, ctx->r1);
    // 0x80801088: lw          $a3, 0x0($at)
    ctx->r7 = MEM_W(ctx->r1, 0X0);
    // 0x8080108C: addu        $a3, $v0, $a3
    ctx->r7 = ADD32(ctx->r2, ctx->r7);
    // 0x80801090: j           L_80801068
    // 0x80801094: sw          $a3, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r7;
        goto L_80801068;
    // 0x80801094: sw          $a3, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r7;
;}
RECOMP_FUNC void proutPrintf(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808010A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808010A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808010A8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x808010AC: jal         0x8F000004
    // 0x808010B0: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    recomp_puts(rdram, ctx);
        goto after_0;
    // 0x808010B0: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_0:
    // 0x808010B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x808010B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808010BC: jr          $ra
    // 0x808010C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x808010C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void recomp_printf(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808051C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808051CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808051D0: or          $at, $a0, $zero
    ctx->r1 = ctx->r4 | 0;
    // 0x808051D4: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x808051D8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x808051DC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x808051E0: addiu       $a3, $sp, 0x1C
    ctx->r7 = ADD32(ctx->r29, 0X1C);
    // 0x808051E4: sw          $a3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r7;
    // 0x808051E8: lui         $v0, 0x8080
    ctx->r2 = S32(0X8080 << 16);
    // 0x808051EC: addiu       $a0, $v0, 0x10A0
    ctx->r4 = ADD32(ctx->r2, 0X10A0);
    // 0x808051F0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x808051F4: jal         0x80000000
    // 0x808051F8: or          $a2, $at, $zero
    ctx->r6 = ctx->r1 | 0;
    _Printf(rdram, ctx);
        goto after_0;
    // 0x808051F8: or          $a2, $at, $zero
    ctx->r6 = ctx->r1 | 0;
    after_0:
    // 0x808051FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80805200: jr          $ra
    // 0x80805204: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80805204: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80001C00_2800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80803C14: addiu       $v1, $a0, -0x1
    ctx->r3 = ADD32(ctx->r4, -0X1);
    // 0x80803C18: sltiu       $at, $v1, 0x51F
    ctx->r1 = ctx->r3 < 0X51F ? 1 : 0;
    // 0x80803C1C: beq         $at, $zero, L_80803D74
    if (ctx->r1 == 0) {
        // 0x80803C20: addiu       $v0, $zero, 0x0
        ctx->r2 = ADD32(0, 0X0);
            goto L_80803D74;
    }
    // 0x80803C20: addiu       $v0, $zero, 0x0
    ctx->r2 = ADD32(0, 0X0);
    // 0x80803C24: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80803C28: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80803C2C: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x80803C30: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x80803C34: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80803C38: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80803C3C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80803C40: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80803C44: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80803C48: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80803C4C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80803C50: lbu         $s4, -0x3A2C($at)
    ctx->r20 = MEM_BU(ctx->r1, -0X3A2C);
    // 0x80803C54: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80803C58: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x80803C5C: addiu       $a1, $a1, 0x73D8
    ctx->r5 = ADD32(ctx->r5, 0X73D8);
    // 0x80803C60: addu        $s6, $a1, $v0
    ctx->r22 = ADD32(ctx->r5, ctx->r2);
    // 0x80803C64: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x80803C68: lui         $v1, 0x8005
    ctx->r3 = S32(0X8005 << 16);
    // 0x80803C6C: addiu       $v1, $v1, 0x4ACC
    ctx->r3 = ADD32(ctx->r3, 0X4ACC);
    // 0x80803C70: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x80803C74: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x80803C78: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80803C7C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80803C80: lw          $v1, 0x0($s6)
    ctx->r3 = MEM_W(ctx->r22, 0X0);
    // 0x80803C84: lui         $a2, 0x7FFF
    ctx->r6 = S32(0X7FFF << 16);
    // 0x80803C88: ori         $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 | 0XFFFF;
    // 0x80803C8C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80803C90: sb          $a3, -0x3A2C($at)
    MEM_B(-0X3A2C, ctx->r1) = ctx->r7;
    // 0x80803C94: and         $s2, $v1, $a2
    ctx->r18 = ctx->r3 & ctx->r6;
    // 0x80803C98: sll         $at, $a0, 2
    ctx->r1 = S32(ctx->r4 << 2);
    // 0x80803C9C: addu        $at, $a1, $at
    ctx->r1 = ADD32(ctx->r5, ctx->r1);
    // 0x80803CA0: lw          $at, 0x0($at)
    ctx->r1 = MEM_W(ctx->r1, 0X0);
    // 0x80803CA4: and         $v1, $at, $a2
    ctx->r3 = ctx->r1 & ctx->r6;
    // 0x80803CA8: bne         $v1, $s2, L_80803CB8
    if (ctx->r3 != ctx->r18) {
        // 0x80803CAC: addu        $v0, $s0, $v0
        ctx->r2 = ADD32(ctx->r16, ctx->r2);
            goto L_80803CB8;
    }
    // 0x80803CAC: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x80803CB0: j           L_80803D28
    // 0x80803CB4: or          $s2, $s0, $zero
    ctx->r18 = ctx->r16 | 0;
        goto L_80803D28;
    // 0x80803CB4: or          $s2, $s0, $zero
    ctx->r18 = ctx->r16 | 0;
L_80803CB8:
    // 0x80803CB8: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80803CBC: or          $s5, $v0, $zero
    ctx->r21 = ctx->r2 | 0;
    // 0x80803CC0: subu        $s3, $v1, $s2
    ctx->r19 = SUB32(ctx->r3, ctx->r18);
    // 0x80803CC4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80803CC8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80803CCC: jal         0x8F000038
    // 0x80803CD0: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    recomp_load_overlays(rdram, ctx);
        goto after_0;
    // 0x80803CD0: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_0:
    // 0x80803CD4: lw          $at, 0x0($s6)
    ctx->r1 = MEM_W(ctx->r22, 0X0);
    // 0x80803CD8: bltz        $at, L_80803D04
    if (SIGNED(ctx->r1) < 0) {
        // 0x80803CDC: nop
    
            goto L_80803D04;
    }
    // 0x80803CDC: nop

    // 0x80803CE0: addiu       $at, $s3, 0x1
    ctx->r1 = ADD32(ctx->r19, 0X1);
    // 0x80803CE4: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    // 0x80803CE8: and         $s3, $at, $v0
    ctx->r19 = ctx->r1 & ctx->r2;
    // 0x80803CEC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80803CF0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80803CF4: jal         0x80000000
    // 0x80803CF8: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    func_80001640_2240(rdram, ctx);
        goto after_1;
    // 0x80803CF8: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_1:
    // 0x80803CFC: j           L_80803D18
    // 0x80803D00: addu        $s2, $s0, $s3
    ctx->r18 = ADD32(ctx->r16, ctx->r19);
        goto L_80803D18;
    // 0x80803D00: addu        $s2, $s0, $s3
    ctx->r18 = ADD32(ctx->r16, ctx->r19);
L_80803D04:
    // 0x80803D04: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80803D08: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80803D0C: jal         0x80000000
    // 0x80803D10: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    func_80005394_5F94(rdram, ctx);
        goto after_2;
    // 0x80803D10: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_2:
    // 0x80803D14: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_80803D18:
    // 0x80803D18: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80803D1C: jal         0x80801000
    // 0x80803D20: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    overlay_apply_relocations(rdram, ctx);
        goto after_3;
    // 0x80803D20: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
    // 0x80803D24: or          $v0, $s5, $zero
    ctx->r2 = ctx->r21 | 0;
L_80803D28:
    // 0x80803D28: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80803D2C: sb          $s4, -0x3A2C($at)
    MEM_B(-0X3A2C, ctx->r1) = ctx->r20;
    // 0x80803D30: sltu        $at, $s2, $v0
    ctx->r1 = ctx->r18 < ctx->r2 ? 1 : 0;
    // 0x80803D34: beq         $at, $zero, L_80803D50
    if (ctx->r1 == 0) {
        // 0x80803D38: nop
    
            goto L_80803D50;
    }
    // 0x80803D38: nop

L_80803D3C:
    // 0x80803D3C: sb          $zero, 0x0($s2)
    MEM_B(0X0, ctx->r18) = 0;
    // 0x80803D40: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80803D44: sltu        $at, $s2, $v0
    ctx->r1 = ctx->r18 < ctx->r2 ? 1 : 0;
    // 0x80803D48: bne         $at, $zero, L_80803D3C
    if (ctx->r1 != 0) {
        // 0x80803D4C: nop
    
            goto L_80803D3C;
    }
    // 0x80803D4C: nop

L_80803D50:
    // 0x80803D50: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80803D54: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80803D58: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80803D5C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80803D60: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80803D64: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x80803D68: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x80803D6C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80803D70: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
L_80803D74:
    // 0x80803D74: jr          $ra
    // 0x80803D78: nop

    return;
    // 0x80803D78: nop

;}
RECOMP_FUNC void func_8001481C_1541C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80803D7C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80803D80: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80803D84: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80803D88: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80803D8C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80803D90: lw          $a1, 0x2C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X2C);
    // 0x80803D94: lhu         $a0, 0x28($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X28);
    // 0x80803D98: jal         0x80000000
    // 0x80803D9C: nop

    func_80001EB0_2AB0(rdram, ctx);
        goto after_0;
    // 0x80803D9C: nop

    after_0:
    // 0x80803DA0: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x80803DA4: beq         $a0, $zero, L_80803DF4
    if (ctx->r4 == 0) {
        // 0x80803DA8: nop
    
            goto L_80803DF4;
    }
    // 0x80803DA8: nop

    // 0x80803DAC: lhu         $a1, 0x28($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X28);
    // 0x80803DB0: jal         0x80000000
    // 0x80803DB4: nop

    func_80014840_15440(rdram, ctx);
        goto after_1;
    // 0x80803DB4: nop

    after_1:
    // 0x80803DB8: lhu         $a0, 0x28($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X28);
    // 0x80803DBC: jal         0x80000000
    // 0x80803DC0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    func_800141C4_14DC4(rdram, ctx);
        goto after_2;
    // 0x80803DC0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    after_2:
    // 0x80803DC4: beq         $s1, $zero, L_80803DF4
    if (ctx->r17 == 0) {
        // 0x80803DC8: nop
    
            goto L_80803DF4;
    }
    // 0x80803DC8: nop

    // 0x80803DCC: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x80803DD0: beq         $s1, $v1, L_80803DF4
    if (ctx->r17 == ctx->r3) {
        // 0x80803DD4: nop
    
            goto L_80803DF4;
    }
    // 0x80803DD4: nop

    // 0x80803DD8: lui         $at, 0xBFFF
    ctx->r1 = S32(0XBFFF << 16);
    // 0x80803DDC: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80803DE0: and         $at, $v0, $at
    ctx->r1 = ctx->r2 & ctx->r1;
    // 0x80803DE4: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80803DE8: lui         $v0, 0xF800
    ctx->r2 = S32(0XF800 << 16);
    // 0x80803DEC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80803DF0: sw          $at, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r1;
L_80803DF4:
    // 0x80803DF4: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x80803DF8: beq         $a0, $zero, L_80803E48
    if (ctx->r4 == 0) {
        // 0x80803DFC: nop
    
            goto L_80803E48;
    }
    // 0x80803DFC: nop

    // 0x80803E00: lhu         $a1, 0x28($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X28);
    // 0x80803E04: jal         0x80000000
    // 0x80803E08: nop

    func_80014840_15440(rdram, ctx);
        goto after_3;
    // 0x80803E08: nop

    after_3:
    // 0x80803E0C: lhu         $a0, 0x28($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X28);
    // 0x80803E10: jal         0x80000000
    // 0x80803E14: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    func_800141C4_14DC4(rdram, ctx);
        goto after_4;
    // 0x80803E14: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    after_4:
    // 0x80803E18: beq         $s1, $zero, L_80803E48
    if (ctx->r17 == 0) {
        // 0x80803E1C: nop
    
            goto L_80803E48;
    }
    // 0x80803E1C: nop

    // 0x80803E20: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x80803E24: beq         $s1, $v1, L_80803E48
    if (ctx->r17 == ctx->r3) {
        // 0x80803E28: nop
    
            goto L_80803E48;
    }
    // 0x80803E28: nop

    // 0x80803E2C: lui         $at, 0xBFFF
    ctx->r1 = S32(0XBFFF << 16);
    // 0x80803E30: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80803E34: and         $at, $v0, $at
    ctx->r1 = ctx->r2 & ctx->r1;
    // 0x80803E38: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80803E3C: lui         $v0, 0xF800
    ctx->r2 = S32(0XF800 << 16);
    // 0x80803E40: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80803E44: sw          $at, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r1;
L_80803E48:
    // 0x80803E48: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x80803E4C: beq         $a0, $zero, L_80803E9C
    if (ctx->r4 == 0) {
        // 0x80803E50: nop
    
            goto L_80803E9C;
    }
    // 0x80803E50: nop

    // 0x80803E54: lhu         $a1, 0x28($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X28);
    // 0x80803E58: jal         0x80000000
    // 0x80803E5C: nop

    func_80014840_15440(rdram, ctx);
        goto after_5;
    // 0x80803E5C: nop

    after_5:
    // 0x80803E60: lhu         $a0, 0x28($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X28);
    // 0x80803E64: jal         0x80000000
    // 0x80803E68: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    func_800141C4_14DC4(rdram, ctx);
        goto after_6;
    // 0x80803E68: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    after_6:
    // 0x80803E6C: beq         $s1, $zero, L_80803E9C
    if (ctx->r17 == 0) {
        // 0x80803E70: nop
    
            goto L_80803E9C;
    }
    // 0x80803E70: nop

    // 0x80803E74: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x80803E78: beq         $s1, $v1, L_80803E9C
    if (ctx->r17 == ctx->r3) {
        // 0x80803E7C: nop
    
            goto L_80803E9C;
    }
    // 0x80803E7C: nop

    // 0x80803E80: lui         $at, 0xBFFF
    ctx->r1 = S32(0XBFFF << 16);
    // 0x80803E84: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80803E88: and         $at, $v0, $at
    ctx->r1 = ctx->r2 & ctx->r1;
    // 0x80803E8C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80803E90: lui         $v0, 0xF800
    ctx->r2 = S32(0XF800 << 16);
    // 0x80803E94: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80803E98: sw          $at, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r1;
L_80803E9C:
    // 0x80803E9C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80803EA0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80803EA4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80803EA8: jr          $ra
    // 0x80803EAC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80803EAC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8001198C_1258C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80803EB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80803EB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80803EB8: jal         0x80000000
    // 0x80803EBC: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    func_80013B14_14714(rdram, ctx);
        goto after_0;
    // 0x80803EBC: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_0:
    // 0x80803EC0: jal         0x80000000
    // 0x80803EC4: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    func_800141C4_14DC4(rdram, ctx);
        goto after_1;
    // 0x80803EC4: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_1:
    // 0x80803EC8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80803ECC: jal         0x80000000
    // 0x80803ED0: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    func_80001EB0_2AB0(rdram, ctx);
        goto after_2;
    // 0x80803ED0: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_2:
    // 0x80803ED4: lui         $at, 0x8007
    ctx->r1 = S32(0X8007 << 16);
    // 0x80803ED8: jal         0x80000000
    // 0x80803EDC: lw          $a0, -0x2CD8($at)
    ctx->r4 = MEM_W(ctx->r1, -0X2CD8);
    func_080026B8_71FE88(rdram, ctx);
        goto after_3;
    // 0x80803EDC: lw          $a0, -0x2CD8($at)
    ctx->r4 = MEM_W(ctx->r1, -0X2CD8);
    after_3:
    // 0x80803EE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80803EE4: jr          $ra
    // 0x80803EE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80803EE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8003AFB0_3BBB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80803EEC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80803EF0: lw          $v0, 0x1728($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1728);
    // 0x80803EF4: lbu         $at, 0x48($v0)
    ctx->r1 = MEM_BU(ctx->r2, 0X48);
    // 0x80803EF8: lh          $v1, 0x40($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X40);
    // 0x80803EFC: addu        $at, $v1, $at
    ctx->r1 = ADD32(ctx->r3, ctx->r1);
    // 0x80803F00: lh          $v1, 0x42($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X42);
    // 0x80803F04: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80803F08: lhu         $v1, 0x3A($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X3A);
    // 0x80803F0C: mult        $at, $v1
    result = S64(S32(ctx->r1)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80803F10: mflo        $a1
    ctx->r5 = lo;
    // 0x80803F14: lui         $at, 0x7F
    ctx->r1 = S32(0X7F << 16);
    // 0x80803F18: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80803F1C: slt         $v1, $at, $a1
    ctx->r3 = SIGNED(ctx->r1) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80803F20: slti        $at, $a1, 0x1
    ctx->r1 = SIGNED(ctx->r5) < 0X1 ? 1 : 0;
    // 0x80803F24: bne         $at, $zero, L_80803F30
    if (ctx->r1 != 0) {
        // 0x80803F28: addiu       $a0, $zero, 0x0
        ctx->r4 = ADD32(0, 0X0);
            goto L_80803F30;
    }
    // 0x80803F28: addiu       $a0, $zero, 0x0
    ctx->r4 = ADD32(0, 0X0);
    // 0x80803F2C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
L_80803F30:
    // 0x80803F30: lhu         $a1, 0x4A($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X4A);
    // 0x80803F34: bne         $v1, $zero, L_80803F40
    if (ctx->r3 != 0) {
        // 0x80803F38: addiu       $a2, $zero, 0x7FFF
        ctx->r6 = ADD32(0, 0X7FFF);
            goto L_80803F40;
    }
    // 0x80803F38: addiu       $a2, $zero, 0x7FFF
    ctx->r6 = ADD32(0, 0X7FFF);
    // 0x80803F3C: srl         $a2, $a0, 8
    ctx->r6 = S32(U32(ctx->r4) >> 8);
L_80803F40:
    // 0x80803F40: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80803F44: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80803F48: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80803F4C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80803F50: mult        $a2, $a1
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80803F54: mflo        $at
    ctx->r1 = lo;
    // 0x80803F58: lhu         $a0, 0xAE($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0XAE);
    // 0x80803F5C: srl         $s1, $at, 8
    ctx->r17 = S32(U32(ctx->r1) >> 8);
    // 0x80803F60: lbu         $at, 0x6($v0)
    ctx->r1 = MEM_BU(ctx->r2, 0X6);
    // 0x80803F64: andi        $at, $at, 0xFE
    ctx->r1 = ctx->r1 & 0XFE;
    // 0x80803F68: sb          $at, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r1;
    // 0x80803F6C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80803F70: lbu         $v1, 0x9D6($at)
    ctx->r3 = MEM_BU(ctx->r1, 0X9D6);
    // 0x80803F74: sltiu       $at, $a0, 0x1
    ctx->r1 = ctx->r4 < 0X1 ? 1 : 0;
    // 0x80803F78: bne         $at, $zero, L_80803F8C
    if (ctx->r1 != 0) {
        // 0x80803F7C: nop
    
            goto L_80803F8C;
    }
    // 0x80803F7C: nop

    // 0x80803F80: mult        $s1, $a0
    result = S64(S32(ctx->r17)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80803F84: mflo        $at
    ctx->r1 = lo;
    // 0x80803F88: srl         $s1, $at, 8
    ctx->r17 = S32(U32(ctx->r1) >> 8);
L_80803F8C:
    // 0x80803F8C: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x80803F90: andi        $s0, $at, 0x7FFF
    ctx->r16 = ctx->r1 & 0X7FFF;
    // 0x80803F94: sltiu       $at, $v1, 0x1
    ctx->r1 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80803F98: bne         $at, $zero, L_80803FAC
    if (ctx->r1 != 0) {
        // 0x80803F9C: sltiu       $v0, $s0, 0x100
        ctx->r2 = ctx->r16 < 0X100 ? 1 : 0;
            goto L_80803FAC;
    }
    // 0x80803F9C: sltiu       $v0, $s0, 0x100
    ctx->r2 = ctx->r16 < 0X100 ? 1 : 0;
    // 0x80803FA0: mult        $s1, $v1
    result = S64(S32(ctx->r17)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80803FA4: mflo        $at
    ctx->r1 = lo;
    // 0x80803FA8: srl         $s1, $at, 8
    ctx->r17 = S32(U32(ctx->r1) >> 8);
L_80803FAC:
    // 0x80803FAC: beq         $v0, $zero, L_80804004
    if (ctx->r2 == 0) {
        // 0x80803FB0: nop
    
            goto L_80804004;
    }
    // 0x80803FB0: nop

    // 0x80803FB4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80803FB8: lbu         $v0, 0x9D3($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X9D3);
    // 0x80803FBC: sltiu       $at, $v0, 0x1
    ctx->r1 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80803FC0: bne         $at, $zero, L_80803FD4
    if (ctx->r1 != 0) {
        // 0x80803FC4: nop
    
            goto L_80803FD4;
    }
    // 0x80803FC4: nop

    // 0x80803FC8: mult        $s1, $v0
    result = S64(S32(ctx->r17)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80803FCC: mflo        $at
    ctx->r1 = lo;
    // 0x80803FD0: srl         $s1, $at, 8
    ctx->r17 = S32(U32(ctx->r1) >> 8);
L_80803FD4:
    // 0x80803FD4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80803FD8: lbu         $v0, 0x9DC($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X9DC);
    // 0x80803FDC: sltiu       $at, $v0, 0x1
    ctx->r1 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80803FE0: bne         $at, $zero, L_80803FF4
    if (ctx->r1 != 0) {
        // 0x80803FE4: nop
    
            goto L_80803FF4;
    }
    // 0x80803FE4: nop

    // 0x80803FE8: mult        $s1, $v0
    result = S64(S32(ctx->r17)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80803FEC: mflo        $at
    ctx->r1 = lo;
    // 0x80803FF0: srl         $s1, $at, 8
    ctx->r17 = S32(U32(ctx->r1) >> 8);
L_80803FF4:
    // 0x80803FF4: jal         0x8F000028
    // 0x80803FF8: nop

    recomp_get_bgm_volume(rdram, ctx);
        goto after_0;
    // 0x80803FF8: nop

    after_0:
    // 0x80803FFC: j           L_8080400C
    // 0x80804000: nop

        goto L_8080400C;
    // 0x80804000: nop

L_80804004:
    // 0x80804004: jal         0x8F00002C
    // 0x80804008: nop

    recomp_get_se_volume(rdram, ctx);
        goto after_1;
    // 0x80804008: nop

    after_1:
L_8080400C:
    // 0x8080400C: mtc1        $s1, $f2
    ctx->f2.u32l = ctx->r17;
    // 0x80804010: nop

    // 0x80804014: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x80804018: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x8080401C: trunc.w.s   $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80804020: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80804024: lbu         $v1, 0x9CF($at)
    ctx->r3 = MEM_BU(ctx->r1, 0X9CF);
    // 0x80804028: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8080402C: lhu         $a0, 0x9E8($at)
    ctx->r4 = MEM_HU(ctx->r1, 0X9E8);
    // 0x80804030: sltiu       $at, $v1, 0x1
    ctx->r1 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80804034: bne         $at, $zero, L_80804048
    if (ctx->r1 != 0) {
        // 0x80804038: mfc1        $v0, $f0
        ctx->r2 = (int32_t)ctx->f0.u32l;
            goto L_80804048;
    }
    // 0x80804038: mfc1        $v0, $f0
    ctx->r2 = (int32_t)ctx->f0.u32l;
    // 0x8080403C: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80804040: mflo        $at
    ctx->r1 = lo;
    // 0x80804044: sra         $v0, $at, 8
    ctx->r2 = S32(SIGNED(ctx->r1) >> 8);
L_80804048:
    // 0x80804048: beq         $s0, $a0, L_80804084
    if (ctx->r16 == ctx->r4) {
        // 0x8080404C: addiu       $v1, $zero, 0x0
        ctx->r3 = ADD32(0, 0X0);
            goto L_80804084;
    }
    // 0x8080404C: addiu       $v1, $zero, 0x0
    ctx->r3 = ADD32(0, 0X0);
    // 0x80804050: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80804054: addiu       $a0, $at, 0x9E8
    ctx->r4 = ADD32(ctx->r1, 0X9E8);
    // 0x80804058: lhu         $at, 0x2($a0)
    ctx->r1 = MEM_HU(ctx->r4, 0X2);
    // 0x8080405C: beq         $s0, $at, L_80804084
    if (ctx->r16 == ctx->r1) {
        // 0x80804060: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_80804084;
    }
    // 0x80804060: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80804064: lhu         $at, 0x4($a0)
    ctx->r1 = MEM_HU(ctx->r4, 0X4);
    // 0x80804068: beq         $s0, $at, L_80804084
    if (ctx->r16 == ctx->r1) {
        // 0x8080406C: addiu       $v1, $zero, 0x2
        ctx->r3 = ADD32(0, 0X2);
            goto L_80804084;
    }
    // 0x8080406C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80804070: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80804074: addiu       $at, $at, 0x9E8
    ctx->r1 = ADD32(ctx->r1, 0X9E8);
    // 0x80804078: lhu         $at, 0x6($at)
    ctx->r1 = MEM_HU(ctx->r1, 0X6);
    // 0x8080407C: bne         $s0, $at, L_808040A0
    if (ctx->r16 != ctx->r1) {
        // 0x80804080: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_808040A0;
    }
    // 0x80804080: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
L_80804084:
    // 0x80804084: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80804088: addiu       $at, $at, 0x9E0
    ctx->r1 = ADD32(ctx->r1, 0X9E0);
    // 0x8080408C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80804090: lbu         $at, 0x0($at)
    ctx->r1 = MEM_BU(ctx->r1, 0X0);
    // 0x80804094: mult        $v0, $at
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r1)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80804098: mflo        $at
    ctx->r1 = lo;
    // 0x8080409C: sra         $v0, $at, 8
    ctx->r2 = S32(SIGNED(ctx->r1) >> 8);
L_808040A0:
    // 0x808040A0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x808040A4: lw          $v1, 0x1728($at)
    ctx->r3 = MEM_W(ctx->r1, 0X1728);
    // 0x808040A8: lhu         $a0, 0x4C($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X4C);
    // 0x808040AC: lh          $at, 0xA8($v1)
    ctx->r1 = MEM_H(ctx->r3, 0XA8);
    // 0x808040B0: bne         $v0, $at, L_808040C4
    if (ctx->r2 != ctx->r1) {
        // 0x808040B4: nop
    
            goto L_808040C4;
    }
    // 0x808040B4: nop

    // 0x808040B8: lhu         $at, 0xAA($v1)
    ctx->r1 = MEM_HU(ctx->r3, 0XAA);
    // 0x808040BC: beq         $a0, $at, L_8080410C
    if (ctx->r4 == ctx->r1) {
        // 0x808040C0: nop
    
            goto L_8080410C;
    }
    // 0x808040C0: nop

L_808040C4:
    // 0x808040C4: addiu       $at, $zero, 0x1388
    ctx->r1 = ADD32(0, 0X1388);
    // 0x808040C8: mult        $a0, $at
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r1)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x808040CC: mflo        $a3
    ctx->r7 = lo;
    // 0x808040D0: sh          $a0, 0xAA($v1)
    MEM_H(0XAA, ctx->r3) = ctx->r4;
    // 0x808040D4: sh          $v0, 0xA8($v1)
    MEM_H(0XA8, ctx->r3) = ctx->r2;
    // 0x808040D8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x808040DC: lbu         $at, 0x9CC($at)
    ctx->r1 = MEM_BU(ctx->r1, 0X9CC);
    // 0x808040E0: sll         $v1, $at, 2
    ctx->r3 = S32(ctx->r1 << 2);
    // 0x808040E4: sll         $at, $at, 5
    ctx->r1 = S32(ctx->r1 << 5);
    // 0x808040E8: subu        $at, $at, $v1
    ctx->r1 = SUB32(ctx->r1, ctx->r3);
    // 0x808040EC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x808040F0: addiu       $v1, $v1, 0xA68
    ctx->r3 = ADD32(ctx->r3, 0XA68);
    // 0x808040F4: addu        $a1, $v1, $at
    ctx->r5 = ADD32(ctx->r3, ctx->r1);
    // 0x808040F8: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x808040FC: lw          $a0, -0x5DD0($at)
    ctx->r4 = MEM_W(ctx->r1, -0X5DD0);
    // 0x80804100: sll         $at, $v0, 16
    ctx->r1 = S32(ctx->r2 << 16);
    // 0x80804104: jal         0x80000000
    // 0x80804108: sra         $a2, $at, 16
    ctx->r6 = S32(SIGNED(ctx->r1) >> 16);
    alSynSetVol(rdram, ctx);
        goto after_2;
    // 0x80804108: sra         $a2, $at, 16
    ctx->r6 = S32(SIGNED(ctx->r1) >> 16);
    after_2:
L_8080410C:
    // 0x8080410C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80804110: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80804114: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80804118: jr          $ra
    // 0x8080411C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8080411C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8000A5C4_B1C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80804120: lui         $at, 0x8006
    ctx->r1 = S32(0X8006 << 16);
    // 0x80804124: addiu       $v0, $at, -0x468C
    ctx->r2 = ADD32(ctx->r1, -0X468C);
    // 0x80804128: addiu       $a1, $a0, 0x98
    ctx->r5 = ADD32(ctx->r4, 0X98);
    // 0x8080412C: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80804130: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
L_80804134:
    // 0x80804134: lbu         $at, 0x0($v0)
    ctx->r1 = MEM_BU(ctx->r2, 0X0);
    // 0x80804138: sb          $at, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r1;
    // 0x8080413C: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80804140: bne         $a2, $a1, L_80804134
    if (ctx->r6 != ctx->r5) {
        // 0x80804144: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_80804134;
    }
    // 0x80804144: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80804148: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x8080414C: lbu         $at, 0x5F($a0)
    ctx->r1 = MEM_BU(ctx->r4, 0X5F);
    // 0x80804150: ori         $at, $at, 0x1
    ctx->r1 = ctx->r1 | 0X1;
    // 0x80804154: jr          $ra
    // 0x80804158: sb          $at, 0x5F($a0)
    MEM_B(0X5F, ctx->r4) = ctx->r1;
    return;
    // 0x80804158: sb          $at, 0x5F($a0)
    MEM_B(0X5F, ctx->r4) = ctx->r1;
;}
RECOMP_FUNC void func_08002414_715384(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080415C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80804160: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x80804164: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80804168: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8080416C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80804170: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80804174: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x80804178: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8080417C: beq         $a1, $zero, L_80804190
    if (ctx->r5 == 0) {
        // 0x80804180: or          $s1, $a0, $zero
        ctx->r17 = ctx->r4 | 0;
            goto L_80804190;
    }
    // 0x80804180: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80804184: lbu         $at, 0x5F($s0)
    ctx->r1 = MEM_BU(ctx->r16, 0X5F);
    // 0x80804188: ori         $at, $at, 0x1
    ctx->r1 = ctx->r1 | 0X1;
    // 0x8080418C: sb          $at, 0x5F($s0)
    MEM_B(0X5F, ctx->r16) = ctx->r1;
L_80804190:
    // 0x80804190: jal         0x80000000
    // 0x80804194: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    func_802192B4_5D4784(rdram, ctx);
        goto after_0;
    // 0x80804194: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_0:
    // 0x80804198: sltiu       $at, $s2, 0x6
    ctx->r1 = ctx->r18 < 0X6 ? 1 : 0;
    // 0x8080419C: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x808041A0: nop

    // 0x808041A4: cvt.d.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.d = CVT_D_W(ctx->f0.u32l);
    // 0x808041A8: lwc1        $f2, 0xE0($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0XE0);
    // 0x808041AC: beq         $at, $zero, L_8080435C
    if (ctx->r1 == 0) {
        // 0x808041B0: cvt.d.s     $f2, $f2
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.d = CVT_D_S(ctx->f2.fl);
            goto L_8080435C;
    }
    // 0x808041B0: cvt.d.s     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.d = CVT_D_S(ctx->f2.fl);
    // 0x808041B4: sll         $at, $s2, 2
    ctx->r1 = S32(ctx->r18 << 2);
    // 0x808041B8: lui         $v0, 0x8089
    ctx->r2 = S32(0X8089 << 16);
    // 0x808041BC: addu        $at, $at, $v0
    gpr jr_addend_808041C4 = ctx->r1;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x808041C0: lw          $at, -0x4420($at)
    ctx->r1 = ADD32(ctx->r1, -0X4420);
    // 0x808041C4: jr          $at
    // 0x808041C8: nop

    switch (jr_addend_808041C4 >> 2) {
        case 0: goto L_808041CC; break;
        case 1: goto L_808042C4; break;
        case 2: goto L_8080423C; break;
        case 3: goto L_80804280; break;
        case 4: goto L_80804204; break;
        case 5: goto L_80804310; break;
        default: switch_error(__func__, 0x808041C4, 0x8088BBE0);
    }
    // 0x808041C8: nop

L_808041CC:
    // 0x808041CC: lui         $at, 0x8080
    ctx->r1 = S32(0X8080 << 16);
    // 0x808041D0: ldc1        $f4, 0x5280($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, 0X5280);
    // 0x808041D4: add.d       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f4.d); 
    ctx->f2.d = ctx->f2.d + ctx->f4.d;
    // 0x808041D8: add.d       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = ctx->f2.d + ctx->f0.d;
    // 0x808041DC: cvt.s.d     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f0.fl = CVT_S_D(ctx->f0.d);
    // 0x808041E0: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
    // 0x808041E4: jal         0x80000000
    // 0x808041E8: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    func_802192B4_5D4784(rdram, ctx);
        goto after_1;
    // 0x808041E8: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_1:
    // 0x808041EC: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x808041F0: nop

    // 0x808041F4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x808041F8: lwc1        $f2, 0xE8($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0XE8);
    // 0x808041FC: j           L_8080439C
    // 0x80804200: add.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f0.fl;
        goto L_8080439C;
    // 0x80804200: add.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f0.fl;
L_80804204:
    // 0x80804204: lui         $at, 0x8080
    ctx->r1 = S32(0X8080 << 16);
    // 0x80804208: ldc1        $f4, 0x5278($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, 0X5278);
    // 0x8080420C: add.d       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f4.d); 
    ctx->f2.d = ctx->f2.d + ctx->f4.d;
    // 0x80804210: add.d       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = ctx->f2.d + ctx->f0.d;
    // 0x80804214: cvt.s.d     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f0.fl = CVT_S_D(ctx->f0.d);
    // 0x80804218: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
    // 0x8080421C: jal         0x80000000
    // 0x80804220: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    func_802192B4_5D4784(rdram, ctx);
        goto after_2;
    // 0x80804220: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_2:
    // 0x80804224: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x80804228: nop

    // 0x8080422C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x80804230: lwc1        $f2, 0xE8($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0XE8);
    // 0x80804234: j           L_8080439C
    // 0x80804238: add.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f0.fl;
        goto L_8080439C;
    // 0x80804238: add.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f0.fl;
L_8080423C:
    // 0x8080423C: lui         $at, 0x8080
    ctx->r1 = S32(0X8080 << 16);
    // 0x80804240: ldc1        $f20, 0x5288($at)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r1, 0X5288);
    // 0x80804244: add.d       $f2, $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f20.d); 
    ctx->f2.d = ctx->f2.d + ctx->f20.d;
    // 0x80804248: add.d       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = ctx->f2.d + ctx->f0.d;
    // 0x8080424C: cvt.s.d     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f0.fl = CVT_S_D(ctx->f0.d);
    // 0x80804250: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
    // 0x80804254: jal         0x80000000
    // 0x80804258: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    func_802192B4_5D4784(rdram, ctx);
        goto after_3;
    // 0x80804258: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_3:
    // 0x8080425C: lwc1        $f0, 0xE8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XE8);
    // 0x80804260: cvt.d.s     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.d = CVT_D_S(ctx->f0.fl);
    // 0x80804264: add.d       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f20.d); 
    ctx->f0.d = ctx->f0.d + ctx->f20.d;
    // 0x80804268: mtc1        $v0, $f2
    ctx->f2.u32l = ctx->r2;
    // 0x8080426C: nop

    // 0x80804270: cvt.d.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.d = CVT_D_W(ctx->f2.u32l);
    // 0x80804274: add.d       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = ctx->f0.d + ctx->f2.d;
    // 0x80804278: j           L_8080439C
    // 0x8080427C: cvt.s.d     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f0.fl = CVT_S_D(ctx->f0.d);
        goto L_8080439C;
    // 0x8080427C: cvt.s.d     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f0.fl = CVT_S_D(ctx->f0.d);
L_80804280:
    // 0x80804280: lui         $at, 0x8080
    ctx->r1 = S32(0X8080 << 16);
    // 0x80804284: ldc1        $f20, 0x5268($at)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r1, 0X5268);
    // 0x80804288: add.d       $f2, $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f20.d); 
    ctx->f2.d = ctx->f2.d + ctx->f20.d;
    // 0x8080428C: add.d       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = ctx->f2.d + ctx->f0.d;
    // 0x80804290: cvt.s.d     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f0.fl = CVT_S_D(ctx->f0.d);
    // 0x80804294: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
    // 0x80804298: jal         0x80000000
    // 0x8080429C: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    func_802192B4_5D4784(rdram, ctx);
        goto after_4;
    // 0x8080429C: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_4:
    // 0x808042A0: lwc1        $f0, 0xE8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XE8);
    // 0x808042A4: cvt.d.s     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.d = CVT_D_S(ctx->f0.fl);
    // 0x808042A8: add.d       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f20.d); 
    ctx->f0.d = ctx->f0.d + ctx->f20.d;
    // 0x808042AC: mtc1        $v0, $f2
    ctx->f2.u32l = ctx->r2;
    // 0x808042B0: nop

    // 0x808042B4: cvt.d.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.d = CVT_D_W(ctx->f2.u32l);
    // 0x808042B8: add.d       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = ctx->f0.d + ctx->f2.d;
    // 0x808042BC: j           L_8080439C
    // 0x808042C0: cvt.s.d     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f0.fl = CVT_S_D(ctx->f0.d);
        goto L_8080439C;
    // 0x808042C0: cvt.s.d     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f0.fl = CVT_S_D(ctx->f0.d);
L_808042C4:
    // 0x808042C4: lui         $at, 0x8080
    ctx->r1 = S32(0X8080 << 16);
    // 0x808042C8: ldc1        $f4, 0x5288($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, 0X5288);
    // 0x808042CC: add.d       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f4.d); 
    ctx->f2.d = ctx->f2.d + ctx->f4.d;
    // 0x808042D0: add.d       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = ctx->f2.d + ctx->f0.d;
    // 0x808042D4: cvt.s.d     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f0.fl = CVT_S_D(ctx->f0.d);
    // 0x808042D8: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
    // 0x808042DC: jal         0x80000000
    // 0x808042E0: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    func_802192B4_5D4784(rdram, ctx);
        goto after_5;
    // 0x808042E0: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_5:
    // 0x808042E4: lui         $at, 0x8080
    ctx->r1 = S32(0X8080 << 16);
    // 0x808042E8: ldc1        $f0, 0x5268($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X5268);
    // 0x808042EC: lwc1        $f2, 0xE8($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0XE8);
    // 0x808042F0: cvt.d.s     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.d = CVT_D_S(ctx->f2.fl);
    // 0x808042F4: add.d       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = ctx->f2.d + ctx->f0.d;
    // 0x808042F8: mtc1        $v0, $f2
    ctx->f2.u32l = ctx->r2;
    // 0x808042FC: nop

    // 0x80804300: cvt.d.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.d = CVT_D_W(ctx->f2.u32l);
    // 0x80804304: add.d       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = ctx->f0.d + ctx->f2.d;
    // 0x80804308: j           L_8080439C
    // 0x8080430C: cvt.s.d     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f0.fl = CVT_S_D(ctx->f0.d);
        goto L_8080439C;
    // 0x8080430C: cvt.s.d     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f0.fl = CVT_S_D(ctx->f0.d);
L_80804310:
    // 0x80804310: lui         $at, 0x8080
    ctx->r1 = S32(0X8080 << 16);
    // 0x80804314: ldc1        $f4, 0x5268($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, 0X5268);
    // 0x80804318: add.d       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f4.d); 
    ctx->f2.d = ctx->f2.d + ctx->f4.d;
    // 0x8080431C: add.d       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = ctx->f2.d + ctx->f0.d;
    // 0x80804320: cvt.s.d     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f0.fl = CVT_S_D(ctx->f0.d);
    // 0x80804324: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
    // 0x80804328: jal         0x80000000
    // 0x8080432C: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    func_802192B4_5D4784(rdram, ctx);
        goto after_6;
    // 0x8080432C: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_6:
    // 0x80804330: lui         $at, 0x8080
    ctx->r1 = S32(0X8080 << 16);
    // 0x80804334: ldc1        $f0, 0x5288($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X5288);
    // 0x80804338: lwc1        $f2, 0xE8($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0XE8);
    // 0x8080433C: cvt.d.s     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.d = CVT_D_S(ctx->f2.fl);
    // 0x80804340: add.d       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = ctx->f2.d + ctx->f0.d;
    // 0x80804344: mtc1        $v0, $f2
    ctx->f2.u32l = ctx->r2;
    // 0x80804348: nop

    // 0x8080434C: cvt.d.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.d = CVT_D_W(ctx->f2.u32l);
    // 0x80804350: add.d       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = ctx->f0.d + ctx->f2.d;
    // 0x80804354: j           L_8080439C
    // 0x80804358: cvt.s.d     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f0.fl = CVT_S_D(ctx->f0.d);
        goto L_8080439C;
    // 0x80804358: cvt.s.d     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f0.fl = CVT_S_D(ctx->f0.d);
L_8080435C:
    // 0x8080435C: lui         $at, 0x8080
    ctx->r1 = S32(0X8080 << 16);
    // 0x80804360: ldc1        $f20, 0x5288($at)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r1, 0X5288);
    // 0x80804364: add.d       $f2, $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f20.d); 
    ctx->f2.d = ctx->f2.d + ctx->f20.d;
    // 0x80804368: add.d       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = ctx->f2.d + ctx->f0.d;
    // 0x8080436C: cvt.s.d     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f0.fl = CVT_S_D(ctx->f0.d);
    // 0x80804370: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
    // 0x80804374: jal         0x80000000
    // 0x80804378: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    func_802192B4_5D4784(rdram, ctx);
        goto after_7;
    // 0x80804378: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_7:
    // 0x8080437C: lwc1        $f0, 0xE8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XE8);
    // 0x80804380: cvt.d.s     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.d = CVT_D_S(ctx->f0.fl);
    // 0x80804384: add.d       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f20.d); 
    ctx->f0.d = ctx->f0.d + ctx->f20.d;
    // 0x80804388: mtc1        $v0, $f2
    ctx->f2.u32l = ctx->r2;
    // 0x8080438C: nop

    // 0x80804390: cvt.d.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.d = CVT_D_W(ctx->f2.u32l);
    // 0x80804394: add.d       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = ctx->f0.d + ctx->f2.d;
    // 0x80804398: cvt.s.d     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f0.fl = CVT_S_D(ctx->f0.d);
L_8080439C:
    // 0x8080439C: swc1        $f0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f0.u32l;
    // 0x808043A0: jal         0x80000000
    // 0x808043A4: addiu       $a0, $zero, 0x0
    ctx->r4 = ADD32(0, 0X0);
    func_80023E94_24A94(rdram, ctx);
        goto after_8;
    // 0x808043A4: addiu       $a0, $zero, 0x0
    ctx->r4 = ADD32(0, 0X0);
    after_8:
    // 0x808043A8: beq         $v0, $zero, L_808043C4
    if (ctx->r2 == 0) {
        // 0x808043AC: nop
    
            goto L_808043C4;
    }
    // 0x808043AC: nop

L_808043B0:
    // 0x808043B0: lui         $at, 0x8080
    ctx->r1 = S32(0X8080 << 16);
    // 0x808043B4: lwc1        $f0, 0x5234($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5234);
    // 0x808043B8: lwc1        $f2, 0xE4($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0XE4);
    // 0x808043BC: j           L_808043E0
    // 0x808043C0: add.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f0.fl;
        goto L_808043E0;
    // 0x808043C0: add.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f0.fl;
L_808043C4:
    // 0x808043C4: lwc1        $f0, 0xD0($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XD0);
    // 0x808043C8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x808043CC: nop

    // 0x808043D0: c.ueq.s     $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x808043D4: nop

    // 0x808043D8: bc1t        L_808043B0
    if (c1cs) {
        // 0x808043DC: nop
    
            goto L_808043B0;
    }
    // 0x808043DC: nop

L_808043E0:
    // 0x808043E0: swc1        $f0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f0.u32l;
    // 0x808043E4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x808043E8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x808043EC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x808043F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808043F4: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x808043F8: jr          $ra
    // 0x808043FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x808043FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_801CBB94_65EA44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80804400: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80804404: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80804408: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8080440C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80804410: lhu         $at, 0x14($a1)
    ctx->r1 = MEM_HU(ctx->r5, 0X14);
    // 0x80804414: addiu       $at, $at, 0x40
    ctx->r1 = ADD32(ctx->r1, 0X40);
    // 0x80804418: andi        $at, $at, 0x3FF
    ctx->r1 = ctx->r1 & 0X3FF;
    // 0x8080441C: jal         0x80000000
    // 0x80804420: sh          $at, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r1;
    func_8001136C_11F6C(rdram, ctx);
        goto after_0;
    // 0x80804420: sh          $at, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r1;
    after_0:
    // 0x80804424: lbu         $at, 0x5F($s0)
    ctx->r1 = MEM_BU(ctx->r16, 0X5F);
    // 0x80804428: ori         $at, $at, 0x2
    ctx->r1 = ctx->r1 | 0X2;
    // 0x8080442C: sb          $at, 0x5F($s0)
    MEM_B(0X5F, ctx->r16) = ctx->r1;
    // 0x80804430: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80804434: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80804438: jr          $ra
    // 0x8080443C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8080443C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80214530_69BF30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80804440: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80804444: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80804448: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8080444C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80804450: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80804454: lui         $at, 0x8080
    ctx->r1 = S32(0X8080 << 16);
    // 0x80804458: lwc1        $f12, 0x5220($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X5220);
    // 0x8080445C: jal         0x8F000020
    // 0x80804460: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    recomp_get_target_aspect_ratio(rdram, ctx);
        goto after_0;
    // 0x80804460: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    after_0:
    // 0x80804464: lui         $at, 0x8089
    ctx->r1 = S32(0X8089 << 16);
    // 0x80804468: lwc1        $f2, -0x4370($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X4370);
    // 0x8080446C: c.ueq.s     $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x80804470: nop

    // 0x80804474: bc1t        L_8080449C
    if (c1cs) {
        // 0x80804478: nop
    
            goto L_8080449C;
    }
    // 0x80804478: nop

    // 0x8080447C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80804480: nop

    // 0x80804484: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x80804488: nop

    // 0x8080448C: bc1f        L_808044C0
    if (!c1cs) {
        // 0x80804490: nop
    
            goto L_808044C0;
    }
    // 0x80804490: nop

    // 0x80804494: j           L_808044E4
    // 0x80804498: nop

        goto L_808044E4;
    // 0x80804498: nop

L_8080449C:
    // 0x8080449C: lbu         $at, 0xEF($s1)
    ctx->r1 = MEM_BU(ctx->r17, 0XEF);
    // 0x808044A0: bne         $at, $zero, L_808044E4
    if (ctx->r1 != 0) {
        // 0x808044A4: nop
    
            goto L_808044E4;
    }
    // 0x808044A4: nop

    // 0x808044A8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x808044AC: nop

    // 0x808044B0: c.ueq.s     $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x808044B4: nop

    // 0x808044B8: bc1t        L_808044E4
    if (c1cs) {
        // 0x808044BC: nop
    
            goto L_808044E4;
    }
    // 0x808044BC: nop

L_808044C0:
    // 0x808044C0: lui         $at, 0x8080
    ctx->r1 = S32(0X8080 << 16);
    // 0x808044C4: lwc1        $f2, 0x5220($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X5220);
    // 0x808044C8: div.s       $f2, $f0, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    // 0x808044CC: swc1        $f2, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f2.u32l;
    // 0x808044D0: swc1        $f2, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f2.u32l;
    // 0x808044D4: lui         $at, 0x8089
    ctx->r1 = S32(0X8089 << 16);
    // 0x808044D8: swc1        $f0, -0x4370($at)
    MEM_W(-0X4370, ctx->r1) = ctx->f0.u32l;
    // 0x808044DC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808044E0: sb          $at, 0xEF($s1)
    MEM_B(0XEF, ctx->r17) = ctx->r1;
L_808044E4:
    // 0x808044E4: lhu         $at, 0x18($s0)
    ctx->r1 = MEM_HU(ctx->r16, 0X18);
    // 0x808044E8: addiu       $at, $at, 0x3FE
    ctx->r1 = ADD32(ctx->r1, 0X3FE);
    // 0x808044EC: andi        $at, $at, 0x3FF
    ctx->r1 = ctx->r1 & 0X3FF;
    // 0x808044F0: sh          $at, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r1;
    // 0x808044F4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x808044F8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x808044FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80804500: jr          $ra
    // 0x80804504: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80804504: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_801CC710_65F5C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80804508: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x8080450C: sdc1        $f30, 0x90($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X90, ctx->r29);
    // 0x80804510: sdc1        $f28, 0x88($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X88, ctx->r29);
    // 0x80804514: sdc1        $f26, 0x80($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X80, ctx->r29);
    // 0x80804518: sdc1        $f24, 0x78($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X78, ctx->r29);
    // 0x8080451C: sdc1        $f22, 0x70($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X70, ctx->r29);
    // 0x80804520: sdc1        $f20, 0x68($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X68, ctx->r29);
    // 0x80804524: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x80804528: sw          $fp, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r30;
    // 0x8080452C: sw          $s7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r23;
    // 0x80804530: sw          $s6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r22;
    // 0x80804534: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x80804538: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x8080453C: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x80804540: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x80804544: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x80804548: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x8080454C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80804550: lui         $at, 0x8080
    ctx->r1 = S32(0X8080 << 16);
    // 0x80804554: lwc1        $f12, 0x5220($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X5220);
    // 0x80804558: jal         0x8F000020
    // 0x8080455C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    recomp_get_target_aspect_ratio(rdram, ctx);
        goto after_0;
    // 0x8080455C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    after_0:
    // 0x80804560: lw          $s2, 0xD0($s1)
    ctx->r18 = MEM_W(ctx->r17, 0XD0);
    // 0x80804564: lw          $v1, 0x8($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X8);
    // 0x80804568: lw          $v0, 0x4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4);
    // 0x8080456C: lui         $at, 0x8089
    ctx->r1 = S32(0X8089 << 16);
    // 0x80804570: lwc1        $f2, -0x436C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X436C);
    // 0x80804574: c.ueq.s     $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x80804578: nop

    // 0x8080457C: bc1t        L_808045A4
    if (c1cs) {
        // 0x80804580: nop
    
            goto L_808045A4;
    }
    // 0x80804580: nop

    // 0x80804584: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80804588: nop

    // 0x8080458C: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x80804590: nop

    // 0x80804594: bc1f        L_808045C8
    if (!c1cs) {
        // 0x80804598: nop
    
            goto L_808045C8;
    }
    // 0x80804598: nop

    // 0x8080459C: j           L_808045F8
    // 0x808045A0: nop

        goto L_808045F8;
    // 0x808045A0: nop

L_808045A4:
    // 0x808045A4: lbu         $at, 0xEF($s1)
    ctx->r1 = MEM_BU(ctx->r17, 0XEF);
    // 0x808045A8: bne         $at, $zero, L_808045F8
    if (ctx->r1 != 0) {
        // 0x808045AC: nop
    
            goto L_808045F8;
    }
    // 0x808045AC: nop

    // 0x808045B0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x808045B4: nop

    // 0x808045B8: c.ueq.s     $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x808045BC: nop

    // 0x808045C0: bc1t        L_808045F8
    if (c1cs) {
        // 0x808045C4: nop
    
            goto L_808045F8;
    }
    // 0x808045C4: nop

L_808045C8:
    // 0x808045C8: lui         $at, 0x8080
    ctx->r1 = S32(0X8080 << 16);
    // 0x808045CC: lwc1        $f2, 0x5220($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X5220);
    // 0x808045D0: div.s       $f2, $f0, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    // 0x808045D4: lui         $at, 0x8080
    ctx->r1 = S32(0X8080 << 16);
    // 0x808045D8: lwc1        $f4, 0x521C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X521C);
    // 0x808045DC: mul.s       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x808045E0: swc1        $f2, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f2.u32l;
    // 0x808045E4: swc1        $f2, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f2.u32l;
    // 0x808045E8: lui         $at, 0x8089
    ctx->r1 = S32(0X8089 << 16);
    // 0x808045EC: swc1        $f0, -0x436C($at)
    MEM_W(-0X436C, ctx->r1) = ctx->f0.u32l;
    // 0x808045F0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808045F4: sb          $at, 0xEF($s1)
    MEM_B(0XEF, ctx->r17) = ctx->r1;
L_808045F8:
    // 0x808045F8: lbu         $at, 0x5F($s0)
    ctx->r1 = MEM_BU(ctx->r16, 0X5F);
    // 0x808045FC: ori         $at, $at, 0x4
    ctx->r1 = ctx->r1 | 0X4;
    // 0x80804600: sb          $at, 0x5F($s0)
    MEM_B(0X5F, ctx->r16) = ctx->r1;
    // 0x80804604: slti        $at, $v1, -0x1
    ctx->r1 = SIGNED(ctx->r3) < -0X1 ? 1 : 0;
    // 0x80804608: bne         $at, $zero, L_808047B0
    if (ctx->r1 != 0) {
        // 0x8080460C: nop
    
            goto L_808047B0;
    }
    // 0x8080460C: nop

    // 0x80804610: addiu       $a0, $v0, 0x2
    ctx->r4 = ADD32(ctx->r2, 0X2);
    // 0x80804614: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80804618: slt         $at, $at, $a0
    ctx->r1 = SIGNED(ctx->r1) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8080461C: bne         $at, $zero, L_8080462C
    if (ctx->r1 != 0) {
        // 0x80804620: sw          $a0, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r4;
            goto L_8080462C;
    }
    // 0x80804620: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    // 0x80804624: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80804628: sw          $at, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r1;
L_8080462C:
    // 0x8080462C: addiu       $at, $v1, 0x1
    ctx->r1 = ADD32(ctx->r3, 0X1);
    // 0x80804630: sw          $at, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r1;
    // 0x80804634: sll         $at, $v0, 2
    ctx->r1 = S32(ctx->r2 << 2);
    // 0x80804638: addiu       $at, $at, 0x8
    ctx->r1 = ADD32(ctx->r1, 0X8);
    // 0x8080463C: sw          $at, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r1;
    // 0x80804640: addiu       $s3, $zero, 0x0
    ctx->r19 = ADD32(0, 0X0);
    // 0x80804644: slti        $s5, $v0, -0x1
    ctx->r21 = SIGNED(ctx->r2) < -0X1 ? 1 : 0;
    // 0x80804648: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8080464C: ori         $s6, $at, 0xADCE
    ctx->r22 = ctx->r1 | 0XADCE;
    // 0x80804650: lui         $s7, 0x8016
    ctx->r23 = S32(0X8016 << 16);
    // 0x80804654: lui         $at, 0x8080
    ctx->r1 = S32(0X8080 << 16);
    // 0x80804658: ldc1        $f26, 0x52A0($at)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r1, 0X52A0);
    // 0x8080465C: lui         $fp, 0x801D
    ctx->r30 = S32(0X801D << 16);
    // 0x80804660: lui         $at, 0x8080
    ctx->r1 = S32(0X8080 << 16);
    // 0x80804664: ldc1        $f24, 0x5270($at)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r1, 0X5270);
    // 0x80804668: lui         $at, 0x8080
    ctx->r1 = S32(0X8080 << 16);
    // 0x8080466C: ldc1        $f22, 0x5298($at)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r1, 0X5298);
    // 0x80804670: lui         $at, 0x8080
    ctx->r1 = S32(0X8080 << 16);
    // 0x80804674: ldc1        $f30, 0x52A8($at)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r1, 0X52A8);
    // 0x80804678: lui         $at, 0x8080
    ctx->r1 = S32(0X8080 << 16);
    // 0x8080467C: ldc1        $f2, 0x5260($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, 0X5260);
    // 0x80804680: lui         $at, 0x8080
    ctx->r1 = S32(0X8080 << 16);
    // 0x80804684: lwc1        $f20, 0x5238($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X5238);
    // 0x80804688: addiu       $v0, $zero, 0x0
    ctx->r2 = ADD32(0, 0X0);
    // 0x8080468C: sdc1        $f2, 0x30($sp)
    CHECK_FR(ctx, 2);
    SD(ctx->f2.u64, 0X30, ctx->r29);
    // 0x80804690: j           L_808046AC
    // 0x80804694: sdc1        $f30, 0x28($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X28, ctx->r29);
        goto L_808046AC;
    // 0x80804694: sdc1        $f30, 0x28($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X28, ctx->r29);
L_80804698:
    // 0x80804698: lw          $at, 0x20($sp)
    ctx->r1 = MEM_W(ctx->r29, 0X20);
    // 0x8080469C: addu        $s3, $s3, $at
    ctx->r19 = ADD32(ctx->r19, ctx->r1);
    // 0x808046A0: lw          $at, 0x24($sp)
    ctx->r1 = MEM_W(ctx->r29, 0X24);
    // 0x808046A4: beq         $s0, $at, L_808047B0
    if (ctx->r16 == ctx->r1) {
        // 0x808046A8: addiu       $v0, $s0, 0x1
        ctx->r2 = ADD32(ctx->r16, 0X1);
            goto L_808047B0;
    }
    // 0x808046A8: addiu       $v0, $s0, 0x1
    ctx->r2 = ADD32(ctx->r16, 0X1);
L_808046AC:
    // 0x808046AC: bne         $s5, $zero, L_80804698
    if (ctx->r21 != 0) {
        // 0x808046B0: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80804698;
    }
    // 0x808046B0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x808046B4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x808046B8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x808046BC: ldc1        $f28, 0x10($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X10);
    // 0x808046C0: or          $s4, $s3, $zero
    ctx->r20 = ctx->r19 | 0;
    // 0x808046C4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
L_808046C8:
    // 0x808046C8: lw          $at, -0x3A38($s7)
    ctx->r1 = MEM_W(ctx->r23, -0X3A38);
    // 0x808046CC: addu        $at, $at, $s6
    ctx->r1 = ADD32(ctx->r1, ctx->r22);
    // 0x808046D0: mul.d       $f0, $f28, $f26
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f28.d); NAN_CHECK(ctx->f26.d); 
    ctx->f0.d = MUL_D(ctx->f28.d, ctx->f26.d);
    // 0x808046D4: lhu         $at, 0x0($at)
    ctx->r1 = MEM_HU(ctx->r1, 0X0);
    // 0x808046D8: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x808046DC: nop

    // 0x808046E0: cvt.d.w     $f30, $f30
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 30);
    ctx->f30.d = CVT_D_W(ctx->f30.u32l);
    // 0x808046E4: ldc1        $f2, 0x42E0($fp)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r30, 0X42E0);
    // 0x808046E8: mul.d       $f2, $f2, $f30
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f30.d); 
    ctx->f2.d = MUL_D(ctx->f2.d, ctx->f30.d);
    // 0x808046EC: add.d       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f2.d); 
    ctx->f2.d = ctx->f2.d + ctx->f2.d;
    // 0x808046F0: add.d       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = ctx->f2.d + ctx->f0.d;
    // 0x808046F4: lw          $at, 0x8($s2)
    ctx->r1 = MEM_W(ctx->r18, 0X8);
    // 0x808046F8: subu        $at, $at, $s0
    ctx->r1 = SUB32(ctx->r1, ctx->r16);
    // 0x808046FC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80804700: nop

    // 0x80804704: cvt.d.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.d = CVT_D_W(ctx->f2.u32l);
    // 0x80804708: mul.d       $f2, $f2, $f26
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f26.d); 
    ctx->f2.d = MUL_D(ctx->f2.d, ctx->f26.d);
    // 0x8080470C: add.d       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = ctx->f2.d + ctx->f0.d;
    // 0x80804710: add.d       $f0, $f0, $f26
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f26.d); 
    ctx->f0.d = ctx->f0.d + ctx->f26.d;
    // 0x80804714: mul.d       $f0, $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f24.d); 
    ctx->f0.d = MUL_D(ctx->f0.d, ctx->f24.d);
    // 0x80804718: trunc.w.d   $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.u32l = TRUNC_W_D(ctx->f0.d);
    // 0x8080471C: mfc1        $at, $f0
    ctx->r1 = (int32_t)ctx->f0.u32l;
    // 0x80804720: jal         0x80000000
    // 0x80804724: andi        $a0, $at, 0x3FF
    ctx->r4 = ctx->r1 & 0X3FF;
    func_80003E10_4A10(rdram, ctx);
        goto after_1;
    // 0x80804724: andi        $a0, $at, 0x3FF
    ctx->r4 = ctx->r1 & 0X3FF;
    after_1:
    // 0x80804728: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x8080472C: mul.d       $f0, $f28, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f28.d); NAN_CHECK(ctx->f22.d); 
    ctx->f0.d = MUL_D(ctx->f28.d, ctx->f22.d);
    // 0x80804730: ldc1        $f2, 0x42E0($fp)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r30, 0X42E0);
    // 0x80804734: mul.d       $f2, $f2, $f30
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f30.d); 
    ctx->f2.d = MUL_D(ctx->f2.d, ctx->f30.d);
    // 0x80804738: ldc1        $f30, 0x28($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X28);
    // 0x8080473C: add.d       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f2.d); 
    ctx->f2.d = ctx->f2.d + ctx->f2.d;
    // 0x80804740: add.d       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = ctx->f2.d + ctx->f0.d;
    // 0x80804744: lw          $at, 0x8($s2)
    ctx->r1 = MEM_W(ctx->r18, 0X8);
    // 0x80804748: subu        $at, $at, $s0
    ctx->r1 = SUB32(ctx->r1, ctx->r16);
    // 0x8080474C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80804750: nop

    // 0x80804754: cvt.d.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.d = CVT_D_W(ctx->f2.u32l);
    // 0x80804758: mul.d       $f2, $f2, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f22.d); 
    ctx->f2.d = MUL_D(ctx->f2.d, ctx->f22.d);
    // 0x8080475C: add.d       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = ctx->f2.d + ctx->f0.d;
    // 0x80804760: add.d       $f0, $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f22.d); 
    ctx->f0.d = ctx->f0.d + ctx->f22.d;
    // 0x80804764: mul.d       $f0, $f0, $f30
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f30.d); 
    ctx->f0.d = MUL_D(ctx->f0.d, ctx->f30.d);
    // 0x80804768: trunc.w.d   $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.u32l = TRUNC_W_D(ctx->f0.d);
    // 0x8080476C: mfc1        $at, $f0
    ctx->r1 = (int32_t)ctx->f0.u32l;
    // 0x80804770: jal         0x80000000
    // 0x80804774: andi        $a0, $at, 0x3FF
    ctx->r4 = ctx->r1 & 0X3FF;
    func_80003E10_4A10(rdram, ctx);
        goto after_2;
    // 0x80804774: andi        $a0, $at, 0x3FF
    ctx->r4 = ctx->r1 & 0X3FF;
    after_2:
    // 0x80804778: ldc1        $f2, 0x30($sp)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r29, 0X30);
    // 0x8080477C: add.d       $f28, $f28, $f2
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f28.d); NAN_CHECK(ctx->f2.d); 
    ctx->f28.d = ctx->f28.d + ctx->f2.d;
    // 0x80804780: addiu       $at, $s4, 0x4
    ctx->r1 = ADD32(ctx->r20, 0X4);
    // 0x80804784: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x80804788: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8080478C: add.s       $f0, $f10, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x80804790: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x80804794: lw          $v0, 0x58($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X58);
    // 0x80804798: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x8080479C: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x808047A0: bne         $s1, $zero, L_808046C8
    if (ctx->r17 != 0) {
        // 0x808047A4: or          $s4, $at, $zero
        ctx->r20 = ctx->r1 | 0;
            goto L_808046C8;
    }
    // 0x808047A4: or          $s4, $at, $zero
    ctx->r20 = ctx->r1 | 0;
    // 0x808047A8: j           L_80804698
    // 0x808047AC: nop

        goto L_80804698;
    // 0x808047AC: nop

L_808047B0:
    // 0x808047B0: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x808047B4: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x808047B8: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x808047BC: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x808047C0: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x808047C4: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x808047C8: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x808047CC: lw          $s7, 0x5C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X5C);
    // 0x808047D0: lw          $fp, 0x60($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X60);
    // 0x808047D4: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x808047D8: ldc1        $f20, 0x68($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X68);
    // 0x808047DC: ldc1        $f22, 0x70($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X70);
    // 0x808047E0: ldc1        $f24, 0x78($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X78);
    // 0x808047E4: ldc1        $f26, 0x80($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X80);
    // 0x808047E8: ldc1        $f28, 0x88($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X88);
    // 0x808047EC: ldc1        $f30, 0x90($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X90);
    // 0x808047F0: jr          $ra
    // 0x808047F4: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x808047F4: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_80213AC8_672A78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808047F8: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x808047FC: sdc1        $f30, 0x90($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X90, ctx->r29);
    // 0x80804800: sdc1        $f28, 0x88($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X88, ctx->r29);
    // 0x80804804: sdc1        $f26, 0x80($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X80, ctx->r29);
    // 0x80804808: sdc1        $f24, 0x78($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X78, ctx->r29);
    // 0x8080480C: sdc1        $f22, 0x70($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X70, ctx->r29);
    // 0x80804810: sdc1        $f20, 0x68($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X68, ctx->r29);
    // 0x80804814: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x80804818: sw          $fp, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r30;
    // 0x8080481C: sw          $s7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r23;
    // 0x80804820: sw          $s6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r22;
    // 0x80804824: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x80804828: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x8080482C: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x80804830: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x80804834: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x80804838: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x8080483C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80804840: lui         $at, 0x8080
    ctx->r1 = S32(0X8080 << 16);
    // 0x80804844: lwc1        $f12, 0x5220($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X5220);
    // 0x80804848: jal         0x8F000020
    // 0x8080484C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    recomp_get_target_aspect_ratio(rdram, ctx);
        goto after_0;
    // 0x8080484C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    after_0:
    // 0x80804850: lw          $s2, 0xD0($s1)
    ctx->r18 = MEM_W(ctx->r17, 0XD0);
    // 0x80804854: lw          $v1, 0x8($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X8);
    // 0x80804858: lw          $v0, 0x4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4);
    // 0x8080485C: lui         $at, 0x8089
    ctx->r1 = S32(0X8089 << 16);
    // 0x80804860: lwc1        $f2, -0x436C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X436C);
    // 0x80804864: c.ueq.s     $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x80804868: nop

    // 0x8080486C: bc1t        L_80804894
    if (c1cs) {
        // 0x80804870: nop
    
            goto L_80804894;
    }
    // 0x80804870: nop

    // 0x80804874: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80804878: nop

    // 0x8080487C: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x80804880: nop

    // 0x80804884: bc1f        L_808048B8
    if (!c1cs) {
        // 0x80804888: nop
    
            goto L_808048B8;
    }
    // 0x80804888: nop

    // 0x8080488C: j           L_808048E8
    // 0x80804890: nop

        goto L_808048E8;
    // 0x80804890: nop

L_80804894:
    // 0x80804894: lbu         $at, 0xEF($s1)
    ctx->r1 = MEM_BU(ctx->r17, 0XEF);
    // 0x80804898: bne         $at, $zero, L_808048E8
    if (ctx->r1 != 0) {
        // 0x8080489C: nop
    
            goto L_808048E8;
    }
    // 0x8080489C: nop

    // 0x808048A0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x808048A4: nop

    // 0x808048A8: c.ueq.s     $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x808048AC: nop

    // 0x808048B0: bc1t        L_808048E8
    if (c1cs) {
        // 0x808048B4: nop
    
            goto L_808048E8;
    }
    // 0x808048B4: nop

L_808048B8:
    // 0x808048B8: lui         $at, 0x8080
    ctx->r1 = S32(0X8080 << 16);
    // 0x808048BC: lwc1        $f2, 0x5220($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X5220);
    // 0x808048C0: div.s       $f2, $f0, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    // 0x808048C4: lui         $at, 0x8080
    ctx->r1 = S32(0X8080 << 16);
    // 0x808048C8: lwc1        $f4, 0x521C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X521C);
    // 0x808048CC: mul.s       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x808048D0: swc1        $f2, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f2.u32l;
    // 0x808048D4: swc1        $f2, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f2.u32l;
    // 0x808048D8: lui         $at, 0x8089
    ctx->r1 = S32(0X8089 << 16);
    // 0x808048DC: swc1        $f0, -0x436C($at)
    MEM_W(-0X436C, ctx->r1) = ctx->f0.u32l;
    // 0x808048E0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808048E4: sb          $at, 0xEF($s1)
    MEM_B(0XEF, ctx->r17) = ctx->r1;
L_808048E8:
    // 0x808048E8: lbu         $at, 0x5F($s0)
    ctx->r1 = MEM_BU(ctx->r16, 0X5F);
    // 0x808048EC: ori         $at, $at, 0x4
    ctx->r1 = ctx->r1 | 0X4;
    // 0x808048F0: sb          $at, 0x5F($s0)
    MEM_B(0X5F, ctx->r16) = ctx->r1;
    // 0x808048F4: slti        $at, $v1, -0x1
    ctx->r1 = SIGNED(ctx->r3) < -0X1 ? 1 : 0;
    // 0x808048F8: bne         $at, $zero, L_80804AA0
    if (ctx->r1 != 0) {
        // 0x808048FC: nop
    
            goto L_80804AA0;
    }
    // 0x808048FC: nop

    // 0x80804900: addiu       $a0, $v0, 0x2
    ctx->r4 = ADD32(ctx->r2, 0X2);
    // 0x80804904: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80804908: slt         $at, $at, $a0
    ctx->r1 = SIGNED(ctx->r1) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8080490C: bne         $at, $zero, L_8080491C
    if (ctx->r1 != 0) {
        // 0x80804910: sw          $a0, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r4;
            goto L_8080491C;
    }
    // 0x80804910: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    // 0x80804914: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80804918: sw          $at, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r1;
L_8080491C:
    // 0x8080491C: addiu       $at, $v1, 0x1
    ctx->r1 = ADD32(ctx->r3, 0X1);
    // 0x80804920: sw          $at, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r1;
    // 0x80804924: sll         $at, $v0, 2
    ctx->r1 = S32(ctx->r2 << 2);
    // 0x80804928: addiu       $at, $at, 0x8
    ctx->r1 = ADD32(ctx->r1, 0X8);
    // 0x8080492C: sw          $at, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r1;
    // 0x80804930: addiu       $s3, $zero, 0x0
    ctx->r19 = ADD32(0, 0X0);
    // 0x80804934: slti        $s5, $v0, -0x1
    ctx->r21 = SIGNED(ctx->r2) < -0X1 ? 1 : 0;
    // 0x80804938: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8080493C: ori         $s6, $at, 0xADCE
    ctx->r22 = ctx->r1 | 0XADCE;
    // 0x80804940: lui         $s7, 0x8016
    ctx->r23 = S32(0X8016 << 16);
    // 0x80804944: lui         $at, 0x8080
    ctx->r1 = S32(0X8080 << 16);
    // 0x80804948: ldc1        $f26, 0x52A0($at)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r1, 0X52A0);
    // 0x8080494C: lui         $fp, 0x8021
    ctx->r30 = S32(0X8021 << 16);
    // 0x80804950: lui         $at, 0x8080
    ctx->r1 = S32(0X8080 << 16);
    // 0x80804954: ldc1        $f24, 0x5270($at)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r1, 0X5270);
    // 0x80804958: lui         $at, 0x8080
    ctx->r1 = S32(0X8080 << 16);
    // 0x8080495C: ldc1        $f22, 0x5298($at)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r1, 0X5298);
    // 0x80804960: lui         $at, 0x8080
    ctx->r1 = S32(0X8080 << 16);
    // 0x80804964: ldc1        $f30, 0x52A8($at)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r1, 0X52A8);
    // 0x80804968: lui         $at, 0x8080
    ctx->r1 = S32(0X8080 << 16);
    // 0x8080496C: ldc1        $f2, 0x5260($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, 0X5260);
    // 0x80804970: lui         $at, 0x8080
    ctx->r1 = S32(0X8080 << 16);
    // 0x80804974: lwc1        $f20, 0x5238($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X5238);
    // 0x80804978: addiu       $v0, $zero, 0x0
    ctx->r2 = ADD32(0, 0X0);
    // 0x8080497C: sdc1        $f2, 0x30($sp)
    CHECK_FR(ctx, 2);
    SD(ctx->f2.u64, 0X30, ctx->r29);
    // 0x80804980: j           L_8080499C
    // 0x80804984: sdc1        $f30, 0x28($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X28, ctx->r29);
        goto L_8080499C;
    // 0x80804984: sdc1        $f30, 0x28($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X28, ctx->r29);
L_80804988:
    // 0x80804988: lw          $at, 0x20($sp)
    ctx->r1 = MEM_W(ctx->r29, 0X20);
    // 0x8080498C: addu        $s3, $s3, $at
    ctx->r19 = ADD32(ctx->r19, ctx->r1);
    // 0x80804990: lw          $at, 0x24($sp)
    ctx->r1 = MEM_W(ctx->r29, 0X24);
    // 0x80804994: beq         $s0, $at, L_80804AA0
    if (ctx->r16 == ctx->r1) {
        // 0x80804998: addiu       $v0, $s0, 0x1
        ctx->r2 = ADD32(ctx->r16, 0X1);
            goto L_80804AA0;
    }
    // 0x80804998: addiu       $v0, $s0, 0x1
    ctx->r2 = ADD32(ctx->r16, 0X1);
L_8080499C:
    // 0x8080499C: bne         $s5, $zero, L_80804988
    if (ctx->r21 != 0) {
        // 0x808049A0: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80804988;
    }
    // 0x808049A0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x808049A4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x808049A8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x808049AC: ldc1        $f28, 0x10($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X10);
    // 0x808049B0: or          $s4, $s3, $zero
    ctx->r20 = ctx->r19 | 0;
    // 0x808049B4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
L_808049B8:
    // 0x808049B8: lw          $at, -0x3A38($s7)
    ctx->r1 = MEM_W(ctx->r23, -0X3A38);
    // 0x808049BC: addu        $at, $at, $s6
    ctx->r1 = ADD32(ctx->r1, ctx->r22);
    // 0x808049C0: mul.d       $f0, $f28, $f26
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f28.d); NAN_CHECK(ctx->f26.d); 
    ctx->f0.d = MUL_D(ctx->f28.d, ctx->f26.d);
    // 0x808049C4: lhu         $at, 0x0($at)
    ctx->r1 = MEM_HU(ctx->r1, 0X0);
    // 0x808049C8: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x808049CC: nop

    // 0x808049D0: cvt.d.w     $f30, $f30
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 30);
    ctx->f30.d = CVT_D_W(ctx->f30.u32l);
    // 0x808049D4: ldc1        $f2, 0x7938($fp)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r30, 0X7938);
    // 0x808049D8: mul.d       $f2, $f2, $f30
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f30.d); 
    ctx->f2.d = MUL_D(ctx->f2.d, ctx->f30.d);
    // 0x808049DC: add.d       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f2.d); 
    ctx->f2.d = ctx->f2.d + ctx->f2.d;
    // 0x808049E0: add.d       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = ctx->f2.d + ctx->f0.d;
    // 0x808049E4: lw          $at, 0x8($s2)
    ctx->r1 = MEM_W(ctx->r18, 0X8);
    // 0x808049E8: subu        $at, $at, $s0
    ctx->r1 = SUB32(ctx->r1, ctx->r16);
    // 0x808049EC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x808049F0: nop

    // 0x808049F4: cvt.d.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.d = CVT_D_W(ctx->f2.u32l);
    // 0x808049F8: mul.d       $f2, $f2, $f26
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f26.d); 
    ctx->f2.d = MUL_D(ctx->f2.d, ctx->f26.d);
    // 0x808049FC: add.d       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = ctx->f2.d + ctx->f0.d;
    // 0x80804A00: add.d       $f0, $f0, $f26
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f26.d); 
    ctx->f0.d = ctx->f0.d + ctx->f26.d;
    // 0x80804A04: mul.d       $f0, $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f24.d); 
    ctx->f0.d = MUL_D(ctx->f0.d, ctx->f24.d);
    // 0x80804A08: trunc.w.d   $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.u32l = TRUNC_W_D(ctx->f0.d);
    // 0x80804A0C: mfc1        $at, $f0
    ctx->r1 = (int32_t)ctx->f0.u32l;
    // 0x80804A10: jal         0x80000000
    // 0x80804A14: andi        $a0, $at, 0x3FF
    ctx->r4 = ctx->r1 & 0X3FF;
    func_80003E10_4A10(rdram, ctx);
        goto after_1;
    // 0x80804A14: andi        $a0, $at, 0x3FF
    ctx->r4 = ctx->r1 & 0X3FF;
    after_1:
    // 0x80804A18: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x80804A1C: mul.d       $f0, $f28, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f28.d); NAN_CHECK(ctx->f22.d); 
    ctx->f0.d = MUL_D(ctx->f28.d, ctx->f22.d);
    // 0x80804A20: ldc1        $f2, 0x7938($fp)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r30, 0X7938);
    // 0x80804A24: mul.d       $f2, $f2, $f30
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f30.d); 
    ctx->f2.d = MUL_D(ctx->f2.d, ctx->f30.d);
    // 0x80804A28: ldc1        $f30, 0x28($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X28);
    // 0x80804A2C: add.d       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f2.d); 
    ctx->f2.d = ctx->f2.d + ctx->f2.d;
    // 0x80804A30: add.d       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = ctx->f2.d + ctx->f0.d;
    // 0x80804A34: lw          $at, 0x8($s2)
    ctx->r1 = MEM_W(ctx->r18, 0X8);
    // 0x80804A38: subu        $at, $at, $s0
    ctx->r1 = SUB32(ctx->r1, ctx->r16);
    // 0x80804A3C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80804A40: nop

    // 0x80804A44: cvt.d.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.d = CVT_D_W(ctx->f2.u32l);
    // 0x80804A48: mul.d       $f2, $f2, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f22.d); 
    ctx->f2.d = MUL_D(ctx->f2.d, ctx->f22.d);
    // 0x80804A4C: add.d       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = ctx->f2.d + ctx->f0.d;
    // 0x80804A50: add.d       $f0, $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f22.d); 
    ctx->f0.d = ctx->f0.d + ctx->f22.d;
    // 0x80804A54: mul.d       $f0, $f0, $f30
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f30.d); 
    ctx->f0.d = MUL_D(ctx->f0.d, ctx->f30.d);
    // 0x80804A58: trunc.w.d   $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.u32l = TRUNC_W_D(ctx->f0.d);
    // 0x80804A5C: mfc1        $at, $f0
    ctx->r1 = (int32_t)ctx->f0.u32l;
    // 0x80804A60: jal         0x80000000
    // 0x80804A64: andi        $a0, $at, 0x3FF
    ctx->r4 = ctx->r1 & 0X3FF;
    func_80003E10_4A10(rdram, ctx);
        goto after_2;
    // 0x80804A64: andi        $a0, $at, 0x3FF
    ctx->r4 = ctx->r1 & 0X3FF;
    after_2:
    // 0x80804A68: ldc1        $f2, 0x30($sp)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r29, 0X30);
    // 0x80804A6C: add.d       $f28, $f28, $f2
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f28.d); NAN_CHECK(ctx->f2.d); 
    ctx->f28.d = ctx->f28.d + ctx->f2.d;
    // 0x80804A70: addiu       $at, $s4, 0x4
    ctx->r1 = ADD32(ctx->r20, 0X4);
    // 0x80804A74: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x80804A78: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80804A7C: add.s       $f0, $f10, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x80804A80: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x80804A84: lw          $v0, 0x58($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X58);
    // 0x80804A88: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x80804A8C: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x80804A90: bne         $s1, $zero, L_808049B8
    if (ctx->r17 != 0) {
        // 0x80804A94: or          $s4, $at, $zero
        ctx->r20 = ctx->r1 | 0;
            goto L_808049B8;
    }
    // 0x80804A94: or          $s4, $at, $zero
    ctx->r20 = ctx->r1 | 0;
    // 0x80804A98: j           L_80804988
    // 0x80804A9C: nop

        goto L_80804988;
    // 0x80804A9C: nop

L_80804AA0:
    // 0x80804AA0: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x80804AA4: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x80804AA8: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x80804AAC: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x80804AB0: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x80804AB4: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x80804AB8: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x80804ABC: lw          $s7, 0x5C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X5C);
    // 0x80804AC0: lw          $fp, 0x60($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X60);
    // 0x80804AC4: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x80804AC8: ldc1        $f20, 0x68($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X68);
    // 0x80804ACC: ldc1        $f22, 0x70($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X70);
    // 0x80804AD0: ldc1        $f24, 0x78($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X78);
    // 0x80804AD4: ldc1        $f26, 0x80($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X80);
    // 0x80804AD8: ldc1        $f28, 0x88($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X88);
    // 0x80804ADC: ldc1        $f30, 0x90($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X90);
    // 0x80804AE0: jr          $ra
    // 0x80804AE4: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x80804AE4: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_801DD218_6085F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80804AE8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80804AEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80804AF0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80804AF4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80804AF8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80804AFC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80804B00: lwc1        $f4, 0xA0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XA0);
    // 0x80804B04: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80804B08: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80804B0C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80804B10: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80804B14: addiu       $t7, $zero, 0x28
    ctx->r15 = ADD32(0, 0X28);
    // 0x80804B18: swc1        $f8, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f8.u32l;
    // 0x80804B1C: lwc1        $f10, 0xA0($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0XA0);
    // 0x80804B20: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80804B24: c.le.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl <= ctx->f10.fl;
    // 0x80804B28: nop

    // 0x80804B2C: bc1fl       L_80804B50
    if (!c1cs) {
        // 0x80804B30: lui         $at, 0x41F0
        ctx->r1 = S32(0X41F0 << 16);
            goto L_80804B50;
    }
    goto skip_0;
    // 0x80804B30: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    skip_0:
    // 0x80804B34: sw          $t7, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r15;
    // 0x80804B38: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x80804B3C: addiu       $a0, $a0, -0x30E8
    ctx->r4 = ADD32(ctx->r4, -0X30E8);
    // 0x80804B40: jal         0x80000000
    // 0x80804B44: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x80804B44: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    after_0:
    // 0x80804B48: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80804B4C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
L_80804B50:
    // 0x80804B50: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80804B54: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80804B58: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80804B5C: lwc1        $f18, 0x9C($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X9C);
    // 0x80804B60: lui         $at, 0xC20C
    ctx->r1 = S32(0XC20C << 16);
    // 0x80804B64: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80804B68: swc1        $f6, 0x9C($a1)
    MEM_W(0X9C, ctx->r5) = ctx->f6.u32l;
    // 0x80804B6C: lwc1        $f8, 0x9C($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X9C);
    // 0x80804B70: c.le.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl <= ctx->f0.fl;
    // 0x80804B74: nop

    // 0x80804B78: bc1fl       L_80804B88
    if (!c1cs) {
        // 0x80804B7C: lw          $t8, 0x94($a1)
        ctx->r24 = MEM_W(ctx->r5, 0X94);
            goto L_80804B88;
    }
    goto skip_1;
    // 0x80804B7C: lw          $t8, 0x94($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X94);
    skip_1:
    // 0x80804B80: swc1        $f0, 0x9C($a1)
    MEM_W(0X9C, ctx->r5) = ctx->f0.u32l;
    // 0x80804B84: lw          $t8, 0x94($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X94);
L_80804B88:
    // 0x80804B88: bnel        $t8, $zero, L_80804BCC
    if (ctx->r24 != 0) {
        // 0x80804B8C: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_80804BCC;
    }
    goto skip_2;
    // 0x80804B8C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_2:
    // 0x80804B90: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x80804B94: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80804B98: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80804B9C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80804BA0: lwc1        $f10, 0x98($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X98);
    // 0x80804BA4: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80804BA8: swc1        $f18, 0x98($a1)
    MEM_W(0X98, ctx->r5) = ctx->f18.u32l;
    // 0x80804BAC: lwc1        $f4, 0x98($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X98);
    // 0x80804BB0: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x80804BB4: nop

    // 0x80804BB8: bc1f        L_80804BF8
    if (!c1cs) {
        // 0x80804BBC: nop
    
            goto L_80804BF8;
    }
    // 0x80804BBC: nop

    // 0x80804BC0: b           L_80804BF8
    // 0x80804BC4: swc1        $f0, 0x98($a1)
    MEM_W(0X98, ctx->r5) = ctx->f0.u32l;
        goto L_80804BF8;
    // 0x80804BC4: swc1        $f0, 0x98($a1)
    MEM_W(0X98, ctx->r5) = ctx->f0.u32l;
    // 0x80804BC8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
L_80804BCC:
    // 0x80804BCC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80804BD0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80804BD4: lwc1        $f6, 0x98($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X98);
    // 0x80804BD8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80804BDC: swc1        $f10, 0x98($a1)
    MEM_W(0X98, ctx->r5) = ctx->f10.u32l;
    // 0x80804BE0: lwc1        $f16, 0x98($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X98);
    // 0x80804BE4: c.le.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl <= ctx->f16.fl;
    // 0x80804BE8: nop

    // 0x80804BEC: bc1f        L_80804BF8
    if (!c1cs) {
        // 0x80804BF0: nop
    
            goto L_80804BF8;
    }
    // 0x80804BF0: nop

    // 0x80804BF4: swc1        $f0, 0x98($a1)
    MEM_W(0X98, ctx->r5) = ctx->f0.u32l;
L_80804BF8:
    // 0x80804BF8: jal         0x80000000
    // 0x80804BFC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_801DD3DC_6087BC(rdram, ctx);
        goto after_1;
    // 0x80804BFC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_1:
    // 0x80804C00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80804C04: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80804C08: jr          $ra
    // 0x80804C0C: nop

    return;
    // 0x80804C0C: nop

    // 0x80804C10: jr          $ra
    // 0x80804C14: nop

    return;
    // 0x80804C14: nop

;}
RECOMP_FUNC void func_801DD134_608514(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80804C18: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80804C1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80804C20: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80804C24: lw          $t6, 0x7C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X7C);
    // 0x80804C28: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80804C2C: beql        $t6, $zero, L_80804C78
    if (ctx->r14 == 0) {
        // 0x80804C30: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_80804C78;
    }
    goto skip_0;
    // 0x80804C30: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_0:
    // 0x80804C34: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80804C38: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80804C3C: lwc1        $f4, 0x9C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X9C);
    // 0x80804C40: lw          $t7, 0x94($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X94);
    // 0x80804C44: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x80804C48: bne         $t7, $zero, L_80804C60
    if (ctx->r15 != 0) {
        // 0x80804C4C: swc1        $f6, 0x9C($a0)
        MEM_W(0X9C, ctx->r4) = ctx->f6.u32l;
            goto L_80804C60;
    }
    // 0x80804C4C: swc1        $f6, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->f6.u32l;
    // 0x80804C50: lwc1        $f8, 0x98($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X98);
    // 0x80804C54: sub.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x80804C58: b           L_80804C6C
    // 0x80804C5C: swc1        $f10, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->f10.u32l;
        goto L_80804C6C;
    // 0x80804C5C: swc1        $f10, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->f10.u32l;
L_80804C60:
    // 0x80804C60: lwc1        $f16, 0x98($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X98);
    // 0x80804C64: add.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x80804C68: swc1        $f18, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->f18.u32l;
L_80804C6C:
    // 0x80804C6C: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x80804C70: b           L_80804CA8
    // 0x80804C74: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
        goto L_80804CA8;
    // 0x80804C74: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
L_80804C78:
    // 0x80804C78: lwc1        $f4, 0x9C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X9C);
    // 0x80804C7C: lw          $t8, 0x94($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X94);
    // 0x80804C80: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x80804C84: bne         $t8, $zero, L_80804C9C
    if (ctx->r24 != 0) {
        // 0x80804C88: swc1        $f6, 0x9C($a0)
        MEM_W(0X9C, ctx->r4) = ctx->f6.u32l;
            goto L_80804C9C;
    }
    // 0x80804C88: swc1        $f6, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->f6.u32l;
    // 0x80804C8C: lwc1        $f8, 0x98($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X98);
    // 0x80804C90: sub.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x80804C94: b           L_80804CA8
    // 0x80804C98: swc1        $f10, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->f10.u32l;
        goto L_80804CA8;
    // 0x80804C98: swc1        $f10, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->f10.u32l;
L_80804C9C:
    // 0x80804C9C: lwc1        $f16, 0x98($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X98);
    // 0x80804CA0: add.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x80804CA4: swc1        $f18, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->f18.u32l;
L_80804CA8:
    // 0x80804CA8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80804CAC: lwc1        $f6, 0x9C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X9C);
    // 0x80804CB0: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80804CB4: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x80804CB8: nop

    // 0x80804CBC: bc1f        L_80804CE0
    if (!c1cs) {
        // 0x80804CC0: nop
    
            goto L_80804CE0;
    }
    // 0x80804CC0: nop

    // 0x80804CC4: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x80804CC8: addiu       $v0, $v0, 0x140
    ctx->r2 = ADD32(ctx->r2, 0X140);
    // 0x80804CCC: sb          $zero, 0xC($v0)
    MEM_B(0XC, ctx->r2) = 0;
    // 0x80804CD0: jal         0x80000000
    // 0x80804CD4: sb          $zero, 0xD($v0)
    MEM_B(0XD, ctx->r2) = 0;
    func_80034ED4_35AD4(rdram, ctx);
        goto after_0;
    // 0x80804CD4: sb          $zero, 0xD($v0)
    MEM_B(0XD, ctx->r2) = 0;
    after_0:
    // 0x80804CD8: b           L_80804CEC
    // 0x80804CDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80804CEC;
    // 0x80804CDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80804CE0:
    // 0x80804CE0: jal         0x80000000
    // 0x80804CE4: nop

    func_801DD3DC_6087BC(rdram, ctx);
        goto after_1;
    // 0x80804CE4: nop

    after_1:
    // 0x80804CE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80804CEC:
    // 0x80804CEC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80804CF0: jr          $ra
    // 0x80804CF4: nop

    return;
    // 0x80804CF4: nop

;}
RECOMP_FUNC void func_801EBF48_5A7E58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80804CF8: addiu       $sp, $sp, -0xE0
    ctx->r29 = ADD32(ctx->r29, -0XE0);
    // 0x80804CFC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80804D00: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x80804D04: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80804D08: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80804D0C: sw          $a1, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r5;
    // 0x80804D10: sw          $a2, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r6;
    // 0x80804D14: sw          $a3, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r7;
    // 0x80804D18: lw          $s0, 0x18($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X18);
    // 0x80804D1C: lw          $v1, 0x5C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X5C);
    // 0x80804D20: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80804D24: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x80804D28: lw          $s2, 0x18($v1)
    ctx->r18 = MEM_W(ctx->r3, 0X18);
    // 0x80804D2C: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80804D30: sw          $t7, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r15;
    // 0x80804D34: lbu         $t8, 0x60($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X60);
    // 0x80804D38: sltiu       $at, $t8, 0x5
    ctx->r1 = ctx->r24 < 0X5 ? 1 : 0;
    // 0x80804D3C: beq         $at, $zero, L_808051B0
    if (ctx->r1 == 0) {
        // 0x80804D40: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_808051B0;
    }
    // 0x80804D40: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80804D44: lui         $at, 0x8089
    ctx->r1 = S32(0X8089 << 16);
    // 0x80804D48: addu        $at, $at, $t8
    gpr jr_addend_80804D50 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80804D4C: lw          $t8, -0x4408($at)
    ctx->r24 = ADD32(ctx->r1, -0X4408);
    // 0x80804D50: jr          $t8
    // 0x80804D54: nop

    switch (jr_addend_80804D50 >> 2) {
        case 0: goto L_80804D58; break;
        case 1: goto L_80804E48; break;
        case 2: goto L_80804FE4; break;
        case 3: goto L_80805038; break;
        case 4: goto L_80805104; break;
        default: switch_error(__func__, 0x80804D50, 0x8088BBF8);
    }
    // 0x80804D54: nop

L_80804D58:
    // 0x80804D58: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80804D5C: jal         0x80000000
    // 0x80804D60: sw          $v1, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r3;
    func_801DCCF0_598C00(rdram, ctx);
        goto after_0;
    // 0x80804D60: sw          $v1, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r3;
    after_0:
    // 0x80804D64: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80804D68: jal         0x80000000
    // 0x80804D6C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_801EE28C_5AA19C(rdram, ctx);
        goto after_1;
    // 0x80804D6C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x80804D70: lwc1        $f4, 0xEC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x80804D74: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80804D78: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80804D7C: lw          $a2, 0xE4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XE4);
    // 0x80804D80: lw          $a3, 0xE8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XE8);
    // 0x80804D84: jal         0x80000000
    // 0x80804D88: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_801EE530_5AA440(rdram, ctx);
        goto after_2;
    // 0x80804D88: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x80804D8C: addiu       $t9, $zero, 0x1E
    ctx->r25 = ADD32(0, 0X1E);
    // 0x80804D90: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80804D94: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80804D98: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80804D9C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80804DA0: addiu       $a3, $zero, 0x1C
    ctx->r7 = ADD32(0, 0X1C);
    // 0x80804DA4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80804DA8: jal         0x80000000
    // 0x80804DAC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_801EE228_5AA138(rdram, ctx);
        goto after_3;
    // 0x80804DAC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_3:
    // 0x80804DB0: lw          $v1, 0xD4($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XD4);
    // 0x80804DB4: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80804DB8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80804DBC: lwc1        $f6, 0x68($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X68);
    // 0x80804DC0: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80804DC4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80804DC8: swc1        $f6, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f6.u32l;
    // 0x80804DCC: lwc1        $f8, 0x6C($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X6C);
    // 0x80804DD0: addiu       $t1, $sp, 0xB8
    ctx->r9 = ADD32(ctx->r29, 0XB8);
    // 0x80804DD4: addiu       $t2, $sp, 0xB4
    ctx->r10 = ADD32(ctx->r29, 0XB4);
    // 0x80804DD8: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80804DDC: addiu       $a3, $sp, 0xBC
    ctx->r7 = ADD32(ctx->r29, 0XBC);
    // 0x80804DE0: swc1        $f16, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f16.u32l;
    // 0x80804DE4: lwc1        $f18, 0x70($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X70);
    // 0x80804DE8: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80804DEC: swc1        $f6, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f6.u32l;
    // 0x80804DF0: lhu         $a2, 0x18($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X18);
    // 0x80804DF4: lhu         $a1, 0x16($s2)
    ctx->r5 = MEM_HU(ctx->r18, 0X16);
    // 0x80804DF8: lhu         $a0, 0x14($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X14);
    // 0x80804DFC: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x80804E00: jal         0x80000000
    // 0x80804E04: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    func_80033898_34498(rdram, ctx);
        goto after_4;
    // 0x80804E04: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_4:
    // 0x80804E08: lwc1        $f8, 0xBC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x80804E0C: lbu         $t4, 0x60($s1)
    ctx->r12 = MEM_BU(ctx->r17, 0X60);
    // 0x80804E10: addiu       $t3, $zero, 0x5A
    ctx->r11 = ADD32(0, 0X5A);
    // 0x80804E14: swc1        $f8, 0x6C($s1)
    MEM_W(0X6C, ctx->r17) = ctx->f8.u32l;
    // 0x80804E18: lwc1        $f10, 0xB8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x80804E1C: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80804E20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80804E24: swc1        $f10, 0x70($s1)
    MEM_W(0X70, ctx->r17) = ctx->f10.u32l;
    // 0x80804E28: lwc1        $f16, 0xB4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x80804E2C: sh          $t3, 0x62($s1)
    MEM_H(0X62, ctx->r17) = ctx->r11;
    // 0x80804E30: sb          $t5, 0x60($s1)
    MEM_B(0X60, ctx->r17) = ctx->r13;
    // 0x80804E34: swc1        $f16, 0x74($s1)
    MEM_W(0X74, ctx->r17) = ctx->f16.u32l;
    // 0x80804E38: jal         0x80000000
    // 0x80804E3C: lw          $a1, 0xCC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XCC);
    func_801EE160_5AA070(rdram, ctx);
        goto after_5;
    // 0x80804E3C: lw          $a1, 0xCC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XCC);
    after_5:
    // 0x80804E40: b           L_808051B4
    // 0x80804E44: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_808051B4;
    // 0x80804E44: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80804E48:
    // 0x80804E48: lhu         $t6, 0x62($s1)
    ctx->r14 = MEM_HU(ctx->r17, 0X62);
    // 0x80804E4C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80804E50: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80804E54: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80804E58: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x80804E5C: bgtz        $t8, L_80804E6C
    if (SIGNED(ctx->r24) > 0) {
        // 0x80804E60: sh          $t7, 0x62($s1)
        MEM_H(0X62, ctx->r17) = ctx->r15;
            goto L_80804E6C;
    }
    // 0x80804E60: sh          $t7, 0x62($s1)
    MEM_H(0X62, ctx->r17) = ctx->r15;
    // 0x80804E64: b           L_808051B0
    // 0x80804E68: sb          $t9, 0x65($s1)
    MEM_B(0X65, ctx->r17) = ctx->r25;
        goto L_808051B0;
    // 0x80804E68: sb          $t9, 0x65($s1)
    MEM_B(0X65, ctx->r17) = ctx->r25;
L_80804E6C:
    // 0x80804E6C: lwc1        $f18, 0x70($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X70);
    // 0x80804E70: lwc1        $f4, -0x458C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X458C);
    // 0x80804E74: lwc1        $f10, 0x6C($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X6C);
    // 0x80804E78: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80804E7C: swc1        $f6, 0x70($s1)
    MEM_W(0X70, ctx->r17) = ctx->f6.u32l;
    // 0x80804E80: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x80804E84: lwc1        $f18, 0xC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XC);
    // 0x80804E88: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80804E8C: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x80804E90: swc1        $f16, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f16.u32l;
    // 0x80804E94: lwc1        $f4, 0x70($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X70);
    // 0x80804E98: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80804E9C: swc1        $f6, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f6.u32l;
    // 0x80804EA0: lwc1        $f10, 0x74($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X74);
    // 0x80804EA4: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80804EA8: swc1        $f16, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f16.u32l;
    // 0x80804EAC: lw          $t1, 0x34($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X34);
    // 0x80804EB0: beql        $t1, $zero, L_80804ECC
    if (ctx->r9 == 0) {
        // 0x80804EB4: lwc1        $f18, 0x6C($s1)
        ctx->f18.u32l = MEM_W(ctx->r17, 0X6C);
            goto L_80804ECC;
    }
    goto skip_0;
    // 0x80804EB4: lwc1        $f18, 0x6C($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X6C);
    skip_0:
    // 0x80804EB8: lbu         $t2, 0x60($s1)
    ctx->r10 = MEM_BU(ctx->r17, 0X60);
    // 0x80804EBC: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80804EC0: b           L_808051B0
    // 0x80804EC4: sb          $t3, 0x60($s1)
    MEM_B(0X60, ctx->r17) = ctx->r11;
        goto L_808051B0;
    // 0x80804EC4: sb          $t3, 0x60($s1)
    MEM_B(0X60, ctx->r17) = ctx->r11;
    // 0x80804EC8: lwc1        $f18, 0x6C($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X6C);
L_80804ECC:
    // 0x80804ECC: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x80804ED0: swc1        $f18, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f18.u32l;
    // 0x80804ED4: lwc1        $f4, 0x70($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X70);
    // 0x80804ED8: swc1        $f4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f4.u32l;
    // 0x80804EDC: lwc1        $f6, 0x74($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X74);
    // 0x80804EE0: jal         0x80000000
    // 0x80804EE4: swc1        $f6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f6.u32l;
    func_8001D394_1DF94(rdram, ctx);
        goto after_6;
    // 0x80804EE4: swc1        $f6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f6.u32l;
    after_6:
    // 0x80804EE8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80804EEC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80804EF0: lwc1        $f10, 0x1C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x80804EF4: lwc1        $f8, 0x60($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X60);
    // 0x80804EF8: lwc1        $f4, 0x64($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80804EFC: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80804F00: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    // 0x80804F04: mul.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x80804F08: lwc1        $f16, 0x68($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X68);
    // 0x80804F0C: swc1        $f18, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f18.u32l;
    // 0x80804F10: lwc1        $f6, 0x20($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X20);
    // 0x80804F14: mul.s       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80804F18: nop

    // 0x80804F1C: mul.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x80804F20: swc1        $f8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f8.u32l;
    // 0x80804F24: lwc1        $f6, 0x24($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X24);
    // 0x80804F28: mul.s       $f4, $f0, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80804F2C: nop

    // 0x80804F30: mul.s       $f10, $f16, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x80804F34: swc1        $f10, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f10.u32l;
    // 0x80804F38: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x80804F3C: add.s       $f16, $f18, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x80804F40: swc1        $f16, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f16.u32l;
    // 0x80804F44: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x80804F48: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x80804F4C: add.s       $f18, $f8, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x80804F50: swc1        $f18, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f18.u32l;
    // 0x80804F54: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x80804F58: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x80804F5C: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x80804F60: swc1        $f8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f8.u32l;
    // 0x80804F64: lwc1        $f4, 0x6C($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X6C);
    // 0x80804F68: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x80804F6C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80804F70: lwc1        $f10, 0x70($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X70);
    // 0x80804F74: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x80804F78: lwc1        $f6, 0x74($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X74);
    // 0x80804F7C: jal         0x80000000
    // 0x80804F80: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    func_8002A458_2B058(rdram, ctx);
        goto after_7;
    // 0x80804F80: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    after_7:
    // 0x80804F84: lh          $t4, 0xA4($sp)
    ctx->r12 = MEM_H(ctx->r29, 0XA4);
    // 0x80804F88: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x80804F8C: lwc1        $f18, 0x84($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X84);
    // 0x80804F90: bne         $t4, $at, L_80804FD4
    if (ctx->r12 != ctx->r1) {
        // 0x80804F94: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80804FD4;
    }
    // 0x80804F94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80804F98: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    // 0x80804F9C: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x80804FA0: add.s       $f8, $f16, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80804FA4: lwc1        $f16, 0x10($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X10);
    // 0x80804FA8: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
    // 0x80804FAC: lwc1        $f10, 0x88($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X88);
    // 0x80804FB0: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x80804FB4: swc1        $f6, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f6.u32l;
    // 0x80804FB8: lwc1        $f18, 0x8C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x80804FBC: add.s       $f8, $f16, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80804FC0: swc1        $f8, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f8.u32l;
    // 0x80804FC4: lbu         $t5, 0x60($s1)
    ctx->r13 = MEM_BU(ctx->r17, 0X60);
    // 0x80804FC8: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80804FCC: b           L_808051B0
    // 0x80804FD0: sb          $t6, 0x60($s1)
    MEM_B(0X60, ctx->r17) = ctx->r14;
        goto L_808051B0;
    // 0x80804FD0: sb          $t6, 0x60($s1)
    MEM_B(0X60, ctx->r17) = ctx->r14;
L_80804FD4:
    // 0x80804FD4: jal         0x80000000
    // 0x80804FD8: lw          $a1, 0xCC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XCC);
    func_801EE160_5AA070(rdram, ctx);
        goto after_8;
    // 0x80804FD8: lw          $a1, 0xCC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XCC);
    after_8:
    // 0x80804FDC: b           L_808051B4
    // 0x80804FE0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_808051B4;
    // 0x80804FE0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80804FE4:
    // 0x80804FE4: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x80804FE8: lw          $t7, -0x39D8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X39D8);
    // 0x80804FEC: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    // 0x80804FF0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x80804FF4: lui         $a3, 0x43FA
    ctx->r7 = S32(0X43FA << 16);
    // 0x80804FF8: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80804FFC: jal         0x80000000
    // 0x80805000: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    func_8000F420_10020(rdram, ctx);
        goto after_9;
    // 0x80805000: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    after_9:
    // 0x80805004: jal         0x80000000
    // 0x80805008: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801EC414_5A8324(rdram, ctx);
        goto after_10;
    // 0x80805008: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_10:
    // 0x8080500C: lw          $t9, 0xCC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XCC);
    // 0x80805010: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80805014: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80805018: sb          $t8, 0x64($t9)
    MEM_B(0X64, ctx->r25) = ctx->r24;
    // 0x8080501C: lbu         $t2, 0x60($s1)
    ctx->r10 = MEM_BU(ctx->r17, 0X60);
    // 0x80805020: addiu       $t1, $zero, 0x64
    ctx->r9 = ADD32(0, 0X64);
    // 0x80805024: sh          $t1, 0x4E($s1)
    MEM_H(0X4E, ctx->r17) = ctx->r9;
    // 0x80805028: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8080502C: sb          $t3, 0x60($s1)
    MEM_B(0X60, ctx->r17) = ctx->r11;
    // 0x80805030: b           L_808051B0
    // 0x80805034: swc1        $f4, 0x9C($s1)
    MEM_W(0X9C, ctx->r17) = ctx->f4.u32l;
        goto L_808051B0;
    // 0x80805034: swc1        $f4, 0x9C($s1)
    MEM_W(0X9C, ctx->r17) = ctx->f4.u32l;
L_80805038:
    // 0x80805038: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8080503C: lwc1        $f14, -0x4588($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X4588);
    // 0x80805040: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80805044: lwc1        $f6, -0x4584($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X4584);
    // 0x80805048: lwc1        $f10, 0x9C($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X9C);
    // 0x8080504C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80805050: addiu       $s2, $s1, 0xA0
    ctx->r18 = ADD32(ctx->r17, 0XA0);
    // 0x80805054: add.s       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x80805058: swc1        $f16, 0x9C($s1)
    MEM_W(0X9C, ctx->r17) = ctx->f16.u32l;
    // 0x8080505C: lwc1        $f2, 0x9C($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X9C);
    // 0x80805060: lwc1        $f8, -0x4580($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X4580);
    // 0x80805064: lwc1        $f18, 0x1C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x80805068: mul.s       $f12, $f2, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8080506C: nop

    // 0x80805070: mul.s       $f4, $f8, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x80805074: add.s       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80805078: swc1        $f10, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f10.u32l;
    // 0x8080507C: lwc1        $f0, 0x1C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x80805080: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x80805084: nop

    // 0x80805088: bc1f        L_808050A4
    if (!c1cs) {
        // 0x8080508C: nop
    
            goto L_808050A4;
    }
    // 0x8080508C: nop

    // 0x80805090: swc1        $f14, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f14.u32l;
    // 0x80805094: lbu         $t4, 0x60($s1)
    ctx->r12 = MEM_BU(ctx->r17, 0X60);
    // 0x80805098: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8080509C: sb          $t5, 0x60($s1)
    MEM_B(0X60, ctx->r17) = ctx->r13;
    // 0x808050A0: lwc1        $f0, 0x1C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X1C);
L_808050A4:
    // 0x808050A4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x808050A8: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x808050AC: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x808050B0: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x808050B4: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x808050B8: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x808050BC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x808050C0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x808050C4: lbu         $t6, 0x1($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X1);
    // 0x808050C8: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x808050CC: addiu       $a2, $a2, 0x49C0
    ctx->r6 = ADD32(ctx->r6, 0X49C0);
    // 0x808050D0: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x808050D4: lbu         $t7, 0x2($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X2);
    // 0x808050D8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x808050DC: addiu       $a1, $s1, 0xA8
    ctx->r5 = ADD32(ctx->r17, 0XA8);
    // 0x808050E0: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x808050E4: lbu         $t8, 0x3($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X3);
    // 0x808050E8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x808050EC: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x808050F0: lbu         $t9, 0x0($s2)
    ctx->r25 = MEM_BU(ctx->r18, 0X0);
    // 0x808050F4: jal         0x80000000
    // 0x808050F8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    func_801DC554_598464(rdram, ctx);
        goto after_11;
    // 0x808050F8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    after_11:
    // 0x808050FC: b           L_808051B4
    // 0x80805100: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_808051B4;
    // 0x80805100: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80805104:
    // 0x80805104: addiu       $s2, $s1, 0xA0
    ctx->r18 = ADD32(ctx->r17, 0XA0);
    // 0x80805108: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8080510C: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x80805110: jal         0x80000000
    // 0x80805114: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_801EE330_5AA240(rdram, ctx);
        goto after_12;
    // 0x80805114: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_12:
    // 0x80805118: beq         $v0, $zero, L_80805130
    if (ctx->r2 == 0) {
        // 0x8080511C: lui         $at, 0x8021
        ctx->r1 = S32(0X8021 << 16);
            goto L_80805130;
    }
    // 0x8080511C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80805120: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80805124: sb          $t1, 0x65($s1)
    MEM_B(0X65, ctx->r17) = ctx->r9;
    // 0x80805128: b           L_80805174
    // 0x8080512C: lbu         $t0, 0x1($s2)
    ctx->r8 = MEM_BU(ctx->r18, 0X1);
        goto L_80805174;
    // 0x8080512C: lbu         $t0, 0x1($s2)
    ctx->r8 = MEM_BU(ctx->r18, 0X1);
L_80805130:
    // 0x80805130: lwc1        $f6, 0x1C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x80805134: lwc1        $f16, -0x457C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X457C);
    // 0x80805138: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8080513C: add.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x80805140: swc1        $f8, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f8.u32l;
    // 0x80805144: lwc1        $f2, 0x1C($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x80805148: swc1        $f2, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f2.u32l;
    // 0x8080514C: swc1        $f2, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f2.u32l;
    // 0x80805150: swc1        $f2, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f2.u32l;
    // 0x80805154: swc1        $f2, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f2.u32l;
    // 0x80805158: swc1        $f2, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f2.u32l;
    // 0x8080515C: lbu         $t2, 0x1($s2)
    ctx->r10 = MEM_BU(ctx->r18, 0X1);
    // 0x80805160: addiu       $t3, $t2, -0xC
    ctx->r11 = ADD32(ctx->r10, -0XC);
    // 0x80805164: andi        $t0, $t3, 0xFF
    ctx->r8 = ctx->r11 & 0XFF;
    // 0x80805168: sb          $t0, 0x3($s2)
    MEM_B(0X3, ctx->r18) = ctx->r8;
    // 0x8080516C: sb          $t0, 0x2($s2)
    MEM_B(0X2, ctx->r18) = ctx->r8;
    // 0x80805170: sb          $t3, 0x1($s2)
    MEM_B(0X1, ctx->r18) = ctx->r11;
L_80805174:
    // 0x80805174: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80805178: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8080517C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x80805180: lbu         $t4, 0x2($s2)
    ctx->r12 = MEM_BU(ctx->r18, 0X2);
    // 0x80805184: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x80805188: addiu       $a2, $a2, 0x49C0
    ctx->r6 = ADD32(ctx->r6, 0X49C0);
    // 0x8080518C: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x80805190: lbu         $t5, 0x3($s2)
    ctx->r13 = MEM_BU(ctx->r18, 0X3);
    // 0x80805194: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80805198: addiu       $a1, $s1, 0xA8
    ctx->r5 = ADD32(ctx->r17, 0XA8);
    // 0x8080519C: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x808051A0: lbu         $t6, 0x0($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X0);
    // 0x808051A4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x808051A8: jal         0x80000000
    // 0x808051AC: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    func_801DC554_598464(rdram, ctx);
        goto after_13;
    // 0x808051AC: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    after_13:
L_808051B0:
    // 0x808051B0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_808051B4:
    // 0x808051B4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x808051B8: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x808051BC: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x808051C0: jr          $ra
    // 0x808051C4: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
    return;
    // 0x808051C4: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
;}
