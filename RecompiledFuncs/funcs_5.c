#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8000701C_7C1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000701C: jr          $ra
    // 0x80007020: addiu       $v0, $a0, 0xB0
    ctx->r2 = ADD32(ctx->r4, 0XB0);
    TRACE_RETURN()
    return;
    // 0x80007020: addiu       $v0, $a0, 0xB0
    ctx->r2 = ADD32(ctx->r4, 0XB0);
;}
RECOMP_FUNC void func_8000C680_D280(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000C680: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8000C684: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8000C688: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8000C68C: lw          $v0, 0x7C48($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7C48);
    // 0x8000C690: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8000C694: beq         $v0, $zero, L_8000C6A0
    if (ctx->r2 == 0) {
        // 0x8000C698: nop
    
            goto L_8000C6A0;
    }
    // 0x8000C698: nop

    // 0x8000C69C: swc1        $f12, 0x44($v0)
    MEM_W(0X44, ctx->r2) = ctx->f12.u32l;
L_8000C6A0:
    // 0x8000C6A0: jr          $ra
    // 0x8000C6A4: nop

    TRACE_RETURN()
    return;
    // 0x8000C6A4: nop

;}
RECOMP_FUNC void func_80004964_5564(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80004964: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x80004968: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8000496C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80004970: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x80004974: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80004978: addiu       $t9, $t9, 0x71C0
    ctx->r25 = ADD32(ctx->r25, 0X71C0);
    // 0x8000497C: sll         $t8, $t6, 3
    ctx->r24 = S32(ctx->r14 << 3);
    // 0x80004980: sw          $a1, 0x71E0($at)
    MEM_W(0X71E0, ctx->r1) = ctx->r5;
    // 0x80004984: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x80004988: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x8000498C: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80004990: lw          $t0, -0x3A38($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3A38);
    // 0x80004994: lui         $t1, 0x4
    ctx->r9 = S32(0X4 << 16);
    // 0x80004998: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8000499C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800049A0: lhu         $t1, -0x51EA($t1)
    ctx->r9 = MEM_HU(ctx->r9, -0X51EA);
    // 0x800049A4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800049A8: bnel        $t1, $at, L_800049C4
    if (ctx->r9 != ctx->r1) {
        // 0x800049AC: lw          $t4, 0x4($a1)
        ctx->r12 = MEM_W(ctx->r5, 0X4);
            goto L_800049C4;
    }
    goto skip_0;
    // 0x800049AC: lw          $t4, 0x4($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X4);
    skip_0:
    // 0x800049B0: lw          $t2, 0x4($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X4);
    // 0x800049B4: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x800049B8: jr          $ra
    // 0x800049BC: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    TRACE_RETURN()
    return;
    // 0x800049BC: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x800049C0: lw          $t4, 0x4($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X4);
L_800049C4:
    // 0x800049C4: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x800049C8: jr          $ra
    // 0x800049CC: nop

    TRACE_RETURN()
    return;
    // 0x800049CC: nop

;}
RECOMP_FUNC void __allocParam(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80047960: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x80047964: lw          $v0, -0x5DD0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5DD0);
    // 0x80047968: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8004796C: lw          $a0, 0x2C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X2C);
    // 0x80047970: beq         $a0, $zero, L_80047988
    if (ctx->r4 == 0) {
        // 0x80047974: nop
    
            goto L_80047988;
    }
    // 0x80047974: nop

    // 0x80047978: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8004797C: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80047980: sw          $t6, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r14;
    // 0x80047984: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
L_80047988:
    // 0x80047988: jr          $ra
    // 0x8004798C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    TRACE_RETURN()
    return;
    // 0x8004798C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_8000B4DC_C0DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000B4DC: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8000B4E0: lbu         $t6, -0x3AB3($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X3AB3);
    // 0x8000B4E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000B4E8: addiu       $at, $zero, 0x80
    ctx->r1 = ADD32(0, 0X80);
    // 0x8000B4EC: bne         $t6, $at, L_8000B504
    if (ctx->r14 != ctx->r1) {
        // 0x8000B4F0: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8000B504;
    }
    // 0x8000B4F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000B4F4: jal         0x8000B51C
    // 0x8000B4F8: nop

    func_8000B51C_C11C(rdram, ctx);
        goto after_0;
    // 0x8000B4F8: nop

    after_0:
    // 0x8000B4FC: b           L_8000B510
    // 0x8000B500: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8000B510;
    // 0x8000B500: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8000B504:
    // 0x8000B504: jal         0x8000B578
    // 0x8000B508: nop

    func_8000B578_C178(rdram, ctx);
        goto after_1;
    // 0x8000B508: nop

    after_1:
    // 0x8000B50C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8000B510:
    // 0x8000B510: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000B514: jr          $ra
    // 0x8000B518: nop

    TRACE_RETURN()
    return;
    // 0x8000B518: nop

;}
RECOMP_FUNC void func_8003D45C_3E05C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003D45C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003D460: jr          $ra
    // 0x8003D464: sb          $zero, 0x78FC($at)
    MEM_B(0X78FC, ctx->r1) = 0;
    TRACE_RETURN()
    return;
    // 0x8003D464: sb          $zero, 0x78FC($at)
    MEM_B(0X78FC, ctx->r1) = 0;
;}
RECOMP_FUNC void func_8003CD84_3D984(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003CD84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003CD88: lui         $t0, 0x801C
    ctx->r8 = S32(0X801C << 16);
    // 0x8003CD8C: addiu       $t0, $t0, 0x1728
    ctx->r8 = ADD32(ctx->r8, 0X1728);
    // 0x8003CD90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003CD94: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x8003CD98: lui         $t1, 0x801C
    ctx->r9 = S32(0X801C << 16);
    // 0x8003CD9C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8003CDA0: lbu         $t6, 0xE($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0XE);
    // 0x8003CDA4: addiu       $t1, $t1, 0xA68
    ctx->r9 = ADD32(ctx->r9, 0XA68);
    // 0x8003CDA8: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8003CDAC: beq         $t6, $zero, L_8003CDE8
    if (ctx->r14 == 0) {
        // 0x8003CDB0: lui         $t8, 0x801C
        ctx->r24 = S32(0X801C << 16);
            goto L_8003CDE8;
    }
    // 0x8003CDB0: lui         $t8, 0x801C
    ctx->r24 = S32(0X801C << 16);
    // 0x8003CDB4: sb          $t7, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r15;
    // 0x8003CDB8: lbu         $t8, 0x9CC($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X9CC);
    // 0x8003CDBC: lw          $a0, -0x5DD0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5DD0);
    // 0x8003CDC0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8003CDC4: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x8003CDC8: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x8003CDCC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8003CDD0: addu        $a1, $t9, $t1
    ctx->r5 = ADD32(ctx->r25, ctx->r9);
    // 0x8003CDD4: jal         0x800486E0
    // 0x8003CDD8: addiu       $a3, $zero, 0x1388
    ctx->r7 = ADD32(0, 0X1388);
    alSynSetVol(rdram, ctx);
        goto after_0;
    // 0x8003CDD8: addiu       $a3, $zero, 0x1388
    ctx->r7 = ADD32(0, 0X1388);
    after_0:
    // 0x8003CDDC: lui         $t0, 0x801C
    ctx->r8 = S32(0X801C << 16);
    // 0x8003CDE0: addiu       $t0, $t0, 0x1728
    ctx->r8 = ADD32(ctx->r8, 0X1728);
    // 0x8003CDE4: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
L_8003CDE8:
    // 0x8003CDE8: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003CDEC: addiu       $v0, $v0, 0x172C
    ctx->r2 = ADD32(ctx->r2, 0X172C);
    // 0x8003CDF0: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x8003CDF4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8003CDF8: lbu         $t3, 0x0($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X0);
    // 0x8003CDFC: sb          $t3, 0x21($v1)
    MEM_B(0X21, ctx->r3) = ctx->r11;
    // 0x8003CE00: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x8003CE04: lw          $t7, 0x0($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X0);
    // 0x8003CE08: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8003CE0C: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x8003CE10: sb          $t6, 0x22($t7)
    MEM_B(0X22, ctx->r15) = ctx->r14;
    // 0x8003CE14: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
    // 0x8003CE18: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x8003CE1C: sw          $t8, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r24;
    // 0x8003CE20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003CE24: jr          $ra
    // 0x8003CE28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8003CE28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80007204_7E04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80007204: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80007208: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8000720C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80007210: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80007214: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80007218: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8000721C: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x80007220: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x80007224: lw          $t6, 0x2B4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X2B4);
    // 0x80007228: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8000722C: addiu       $s3, $sp, 0x44
    ctx->r19 = ADD32(ctx->r29, 0X44);
    // 0x80007230: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80007234: sw          $t7, 0x2B4($a0)
    MEM_W(0X2B4, ctx->r4) = ctx->r15;
    // 0x80007238: addiu       $s2, $a0, 0x78
    ctx->r18 = ADD32(ctx->r4, 0X78);
    // 0x8000723C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80007240: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80007244: jal         0x80040110
    // 0x80007248: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x80007248: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8000724C: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    // 0x80007250: beq         $v0, $s0, L_80007278
    if (ctx->r2 == ctx->r16) {
        // 0x80007254: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80007278;
    }
    // 0x80007254: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_80007258:
    // 0x80007258: jal         0x80007634
    // 0x8000725C: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    func_80007634_8234(rdram, ctx);
        goto after_1;
    // 0x8000725C: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    after_1:
    // 0x80007260: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80007264: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80007268: jal         0x80040110
    // 0x8000726C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x8000726C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80007270: bnel        $v0, $s0, L_80007258
    if (ctx->r2 != ctx->r16) {
        // 0x80007274: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80007258;
    }
    goto skip_0;
    // 0x80007274: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_0:
L_80007278:
    // 0x80007278: lw          $t8, 0x2B8($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X2B8);
    // 0x8000727C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80007280: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x80007284: beql        $t8, $zero, L_800072AC
    if (ctx->r24 == 0) {
        // 0x80007288: lw          $t0, 0x2AC($s1)
        ctx->r8 = MEM_W(ctx->r17, 0X2AC);
            goto L_800072AC;
    }
    goto skip_1;
    // 0x80007288: lw          $t0, 0x2AC($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X2AC);
    skip_1:
    // 0x8000728C: lw          $t9, 0x2AC($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X2AC);
    // 0x80007290: beql        $t9, $zero, L_800072AC
    if (ctx->r25 == 0) {
        // 0x80007294: lw          $t0, 0x2AC($s1)
        ctx->r8 = MEM_W(ctx->r17, 0X2AC);
            goto L_800072AC;
    }
    goto skip_2;
    // 0x80007294: lw          $t0, 0x2AC($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X2AC);
    skip_2:
    // 0x80007298: jal         0x8000777C
    // 0x8000729C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8000777C_837C(rdram, ctx);
        goto after_3;
    // 0x8000729C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x800072A0: b           L_800072E4
    // 0x800072A4: lw          $s0, 0x298($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X298);
        goto L_800072E4;
    // 0x800072A4: lw          $s0, 0x298($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X298);
    // 0x800072A8: lw          $t0, 0x2AC($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X2AC);
L_800072AC:
    // 0x800072AC: lw          $t3, 0x2B0($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X2B0);
    // 0x800072B0: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x800072B4: sltiu       $t1, $t0, 0x1
    ctx->r9 = ctx->r8 < 0X1 ? 1 : 0;
    // 0x800072B8: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x800072BC: sltiu       $t4, $t3, 0x1
    ctx->r12 = ctx->r11 < 0X1 ? 1 : 0;
    // 0x800072C0: or          $s0, $t2, $t4
    ctx->r16 = ctx->r10 | ctx->r12;
    // 0x800072C4: jal         0x800077B8
    // 0x800072C8: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    func_800077B8_83B8(rdram, ctx);
        goto after_4;
    // 0x800072C8: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    after_4:
    // 0x800072CC: beq         $v0, $s0, L_800072E0
    if (ctx->r2 == ctx->r16) {
        // 0x800072D0: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_800072E0;
    }
    // 0x800072D0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800072D4: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x800072D8: jal         0x8000769C
    // 0x800072DC: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    func_8000769C_829C(rdram, ctx);
        goto after_5;
    // 0x800072DC: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    after_5:
L_800072E0:
    // 0x800072E0: lw          $s0, 0x298($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X298);
L_800072E4:
    // 0x800072E4: beql        $s0, $zero, L_8000730C
    if (ctx->r16 == 0) {
        // 0x800072E8: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8000730C;
    }
    goto skip_3;
    // 0x800072E8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_3:
    // 0x800072EC: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
L_800072F0:
    // 0x800072F0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800072F4: jal         0x80040250
    // 0x800072F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    osSendMesg_recomp(rdram, ctx);
        goto after_6;
    // 0x800072F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x800072FC: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x80007300: bnel        $s0, $zero, L_800072F0
    if (ctx->r16 != 0) {
        // 0x80007304: lw          $a0, 0x4($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X4);
            goto L_800072F0;
    }
    goto skip_4;
    // 0x80007304: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    skip_4:
    // 0x80007308: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8000730C:
    // 0x8000730C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80007310: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80007314: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80007318: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8000731C: jr          $ra
    // 0x80007320: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x80007320: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8002A168_2AD68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002A168: lui         $v1, 0x8017
    ctx->r3 = S32(0X8017 << 16);
    // 0x8002A16C: lw          $v1, -0x70A0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X70A0);
    // 0x8002A170: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8002A174: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x8002A178: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x8002A17C: sdc1        $f24, 0x18($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X18, ctx->r29);
    // 0x8002A180: sdc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X10, ctx->r29);
    // 0x8002A184: bne         $v1, $zero, L_8002A194
    if (ctx->r3 != 0) {
        // 0x8002A188: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8002A194;
    }
    // 0x8002A188: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8002A18C: b           L_8002A444
    // 0x8002A190: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8002A444;
    // 0x8002A190: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8002A194:
    // 0x8002A194: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8002A198: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x8002A19C: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x8002A1A0: mtc1        $zero, $f25
    ctx->f_odd[(25 - 1) * 2] = 0;
    // 0x8002A1A4: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x8002A1A8: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x8002A1AC: lw          $a1, -0x709C($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X709C);
    // 0x8002A1B0: addiu       $t4, $zero, 0x14
    ctx->r12 = ADD32(0, 0X14);
    // 0x8002A1B4: ori         $t3, $zero, 0xFFFF
    ctx->r11 = 0 | 0XFFFF;
    // 0x8002A1B8: addiu       $t2, $zero, 0x6
    ctx->r10 = ADD32(0, 0X6);
    // 0x8002A1BC: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
L_8002A1C0:
    // 0x8002A1C0: multu       $v0, $t1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002A1C4: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8002A1C8: mflo        $t6
    ctx->r14 = lo;
    // 0x8002A1CC: addu        $t7, $a1, $t6
    ctx->r15 = ADD32(ctx->r5, ctx->r14);
    // 0x8002A1D0: lhu         $v1, 0x0($t7)
    ctx->r3 = MEM_HU(ctx->r15, 0X0);
    // 0x8002A1D4: multu       $v0, $t2
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002A1D8: mflo        $t8
    ctx->r24 = lo;
    // 0x8002A1DC: addu        $a3, $a1, $t8
    ctx->r7 = ADD32(ctx->r5, ctx->r24);
    // 0x8002A1E0: lh          $t9, 0x6($a3)
    ctx->r25 = MEM_H(ctx->r7, 0X6);
    // 0x8002A1E4: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8002A1E8: nop

    // 0x8002A1EC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8002A1F0: c.lt.s      $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f6.fl < ctx->f12.fl;
    // 0x8002A1F4: nop

    // 0x8002A1F8: bc1t        L_8002A2A4
    if (c1cs) {
        // 0x8002A1FC: nop
    
            goto L_8002A2A4;
    }
    // 0x8002A1FC: nop

    // 0x8002A200: lh          $t5, 0xC($a3)
    ctx->r13 = MEM_H(ctx->r7, 0XC);
    // 0x8002A204: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x8002A208: nop

    // 0x8002A20C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8002A210: c.lt.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl < ctx->f10.fl;
    // 0x8002A214: nop

    // 0x8002A218: bc1t        L_8002A2A4
    if (c1cs) {
        // 0x8002A21C: nop
    
            goto L_8002A2A4;
    }
    // 0x8002A21C: nop

    // 0x8002A220: lh          $t6, 0x8($a3)
    ctx->r14 = MEM_H(ctx->r7, 0X8);
    // 0x8002A224: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8002A228: nop

    // 0x8002A22C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8002A230: c.lt.s      $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f6.fl < ctx->f14.fl;
    // 0x8002A234: nop

    // 0x8002A238: bc1t        L_8002A2A4
    if (c1cs) {
        // 0x8002A23C: nop
    
            goto L_8002A2A4;
    }
    // 0x8002A23C: nop

    // 0x8002A240: lh          $t7, 0xE($a3)
    ctx->r15 = MEM_H(ctx->r7, 0XE);
    // 0x8002A244: add.s       $f8, $f14, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = ctx->f14.fl + ctx->f22.fl;
    // 0x8002A248: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x8002A24C: nop

    // 0x8002A250: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8002A254: c.lt.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl < ctx->f4.fl;
    // 0x8002A258: nop

    // 0x8002A25C: bc1t        L_8002A2A4
    if (c1cs) {
        // 0x8002A260: nop
    
            goto L_8002A2A4;
    }
    // 0x8002A260: nop

    // 0x8002A264: lh          $t8, 0xA($a3)
    ctx->r24 = MEM_H(ctx->r7, 0XA);
    // 0x8002A268: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8002A26C: nop

    // 0x8002A270: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8002A274: c.lt.s      $f10, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f10.fl < ctx->f20.fl;
    // 0x8002A278: nop

    // 0x8002A27C: bc1t        L_8002A2A4
    if (c1cs) {
        // 0x8002A280: nop
    
            goto L_8002A2A4;
    }
    // 0x8002A280: nop

    // 0x8002A284: lh          $t9, 0x10($a3)
    ctx->r25 = MEM_H(ctx->r7, 0X10);
    // 0x8002A288: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8002A28C: nop

    // 0x8002A290: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8002A294: c.lt.s      $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f20.fl < ctx->f4.fl;
    // 0x8002A298: nop

    // 0x8002A29C: bc1fl       L_8002A39C
    if (!c1cs) {
        // 0x8002A2A0: addiu       $v0, $a2, 0x3
        ctx->r2 = ADD32(ctx->r6, 0X3);
            goto L_8002A39C;
    }
    goto skip_0;
    // 0x8002A2A0: addiu       $v0, $a2, 0x3
    ctx->r2 = ADD32(ctx->r6, 0X3);
    skip_0:
L_8002A2A4:
    // 0x8002A2A4: bne         $t3, $v1, L_8002A2B4
    if (ctx->r11 != ctx->r3) {
        // 0x8002A2A8: nop
    
            goto L_8002A2B4;
    }
    // 0x8002A2A8: nop

    // 0x8002A2AC: b           L_8002A444
    // 0x8002A2B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8002A444;
    // 0x8002A2B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8002A2B4:
    // 0x8002A2B4: multu       $v1, $t1
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002A2B8: andi        $a2, $v1, 0xFFFF
    ctx->r6 = ctx->r3 & 0XFFFF;
    // 0x8002A2BC: mflo        $t5
    ctx->r13 = lo;
    // 0x8002A2C0: addu        $t6, $a1, $t5
    ctx->r14 = ADD32(ctx->r5, ctx->r13);
    // 0x8002A2C4: lhu         $v1, 0x0($t6)
    ctx->r3 = MEM_HU(ctx->r14, 0X0);
    // 0x8002A2C8: multu       $a2, $t2
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002A2CC: mflo        $t7
    ctx->r15 = lo;
    // 0x8002A2D0: addu        $a3, $a1, $t7
    ctx->r7 = ADD32(ctx->r5, ctx->r15);
    // 0x8002A2D4: lh          $t8, 0x6($a3)
    ctx->r24 = MEM_H(ctx->r7, 0X6);
    // 0x8002A2D8: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8002A2DC: nop

    // 0x8002A2E0: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8002A2E4: c.lt.s      $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f10.fl < ctx->f12.fl;
    // 0x8002A2E8: nop

    // 0x8002A2EC: bc1t        L_8002A2A4
    if (c1cs) {
        // 0x8002A2F0: nop
    
            goto L_8002A2A4;
    }
    // 0x8002A2F0: nop

    // 0x8002A2F4: lh          $t9, 0xC($a3)
    ctx->r25 = MEM_H(ctx->r7, 0XC);
    // 0x8002A2F8: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8002A2FC: nop

    // 0x8002A300: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8002A304: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x8002A308: nop

    // 0x8002A30C: bc1t        L_8002A2A4
    if (c1cs) {
        // 0x8002A310: nop
    
            goto L_8002A2A4;
    }
    // 0x8002A310: nop

    // 0x8002A314: lh          $t5, 0x8($a3)
    ctx->r13 = MEM_H(ctx->r7, 0X8);
    // 0x8002A318: mtc1        $t5, $f6
    ctx->f6.u32l = ctx->r13;
    // 0x8002A31C: nop

    // 0x8002A320: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8002A324: c.lt.s      $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f10.fl < ctx->f14.fl;
    // 0x8002A328: nop

    // 0x8002A32C: bc1t        L_8002A2A4
    if (c1cs) {
        // 0x8002A330: nop
    
            goto L_8002A2A4;
    }
    // 0x8002A330: nop

    // 0x8002A334: lh          $t6, 0xE($a3)
    ctx->r14 = MEM_H(ctx->r7, 0XE);
    // 0x8002A338: add.s       $f8, $f14, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = ctx->f14.fl + ctx->f22.fl;
    // 0x8002A33C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8002A340: nop

    // 0x8002A344: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8002A348: c.lt.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl < ctx->f6.fl;
    // 0x8002A34C: nop

    // 0x8002A350: bc1t        L_8002A2A4
    if (c1cs) {
        // 0x8002A354: nop
    
            goto L_8002A2A4;
    }
    // 0x8002A354: nop

    // 0x8002A358: lh          $t7, 0xA($a3)
    ctx->r15 = MEM_H(ctx->r7, 0XA);
    // 0x8002A35C: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x8002A360: nop

    // 0x8002A364: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8002A368: c.lt.s      $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f4.fl < ctx->f20.fl;
    // 0x8002A36C: nop

    // 0x8002A370: bc1t        L_8002A2A4
    if (c1cs) {
        // 0x8002A374: nop
    
            goto L_8002A2A4;
    }
    // 0x8002A374: nop

    // 0x8002A378: lh          $t8, 0x10($a3)
    ctx->r24 = MEM_H(ctx->r7, 0X10);
    // 0x8002A37C: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x8002A380: nop

    // 0x8002A384: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8002A388: c.lt.s      $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f20.fl < ctx->f6.fl;
    // 0x8002A38C: nop

    // 0x8002A390: bc1t        L_8002A2A4
    if (c1cs) {
        // 0x8002A394: nop
    
            goto L_8002A2A4;
    }
    // 0x8002A394: nop

    // 0x8002A398: addiu       $v0, $a2, 0x3
    ctx->r2 = ADD32(ctx->r6, 0X3);
L_8002A39C:
    // 0x8002A39C: andi        $t9, $v0, 0xFFFF
    ctx->r25 = ctx->r2 & 0XFFFF;
    // 0x8002A3A0: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
L_8002A3A4:
    // 0x8002A3A4: multu       $v0, $t1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002A3A8: mflo        $t5
    ctx->r13 = lo;
    // 0x8002A3AC: addu        $a2, $a1, $t5
    ctx->r6 = ADD32(ctx->r5, ctx->r13);
    // 0x8002A3B0: lhu         $a3, 0x0($a2)
    ctx->r7 = MEM_HU(ctx->r6, 0X0);
    // 0x8002A3B4: multu       $a3, $t4
    result = U64(U32(ctx->r7)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002A3B8: mflo        $t6
    ctx->r14 = lo;
    // 0x8002A3BC: addu        $t0, $a0, $t6
    ctx->r8 = ADD32(ctx->r4, ctx->r14);
    // 0x8002A3C0: lwc1        $f0, 0x0($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X0);
    // 0x8002A3C4: lwc1        $f2, 0x4($t0)
    ctx->f2.u32l = MEM_W(ctx->r8, 0X4);
    // 0x8002A3C8: lwc1        $f16, 0x8($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X8);
    // 0x8002A3CC: mul.s       $f10, $f12, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x8002A3D0: lwc1        $f18, 0xC($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0XC);
    // 0x8002A3D4: mul.s       $f4, $f14, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x8002A3D8: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8002A3DC: mul.s       $f6, $f20, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8002A3E0: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x8002A3E4: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x8002A3E8: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x8002A3EC: c.lt.d      $f8, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f8.d < ctx->f24.d;
    // 0x8002A3F0: nop

    // 0x8002A3F4: bc1fl       L_8002A41C
    if (!c1cs) {
        // 0x8002A3F8: lh          $a3, 0x4($a2)
        ctx->r7 = MEM_H(ctx->r6, 0X4);
            goto L_8002A41C;
    }
    goto skip_1;
    // 0x8002A3F8: lh          $a3, 0x4($a2)
    ctx->r7 = MEM_H(ctx->r6, 0X4);
    skip_1:
    // 0x8002A3FC: lh          $a3, 0x2($a2)
    ctx->r7 = MEM_H(ctx->r6, 0X2);
    // 0x8002A400: bne         $a3, $zero, L_8002A410
    if (ctx->r7 != 0) {
        // 0x8002A404: nop
    
            goto L_8002A410;
    }
    // 0x8002A404: nop

    // 0x8002A408: b           L_8002A444
    // 0x8002A40C: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
        goto L_8002A444;
    // 0x8002A40C: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
L_8002A410:
    // 0x8002A410: b           L_8002A3A4
    // 0x8002A414: andi        $v0, $a3, 0xFFFF
    ctx->r2 = ctx->r7 & 0XFFFF;
        goto L_8002A3A4;
    // 0x8002A414: andi        $v0, $a3, 0xFFFF
    ctx->r2 = ctx->r7 & 0XFFFF;
    // 0x8002A418: lh          $a3, 0x4($a2)
    ctx->r7 = MEM_H(ctx->r6, 0X4);
L_8002A41C:
    // 0x8002A41C: bne         $a3, $zero, L_8002A43C
    if (ctx->r7 != 0) {
        // 0x8002A420: nop
    
            goto L_8002A43C;
    }
    // 0x8002A420: nop

    // 0x8002A424: bne         $t3, $v1, L_8002A434
    if (ctx->r11 != ctx->r3) {
        // 0x8002A428: nop
    
            goto L_8002A434;
    }
    // 0x8002A428: nop

    // 0x8002A42C: b           L_8002A444
    // 0x8002A430: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8002A444;
    // 0x8002A430: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8002A434:
    // 0x8002A434: b           L_8002A1C0
    // 0x8002A438: andi        $v0, $v1, 0xFFFF
    ctx->r2 = ctx->r3 & 0XFFFF;
        goto L_8002A1C0;
    // 0x8002A438: andi        $v0, $v1, 0xFFFF
    ctx->r2 = ctx->r3 & 0XFFFF;
L_8002A43C:
    // 0x8002A43C: b           L_8002A3A4
    // 0x8002A440: andi        $v0, $a3, 0xFFFF
    ctx->r2 = ctx->r7 & 0XFFFF;
        goto L_8002A3A4;
    // 0x8002A440: andi        $v0, $a3, 0xFFFF
    ctx->r2 = ctx->r7 & 0XFFFF;
L_8002A444:
    // 0x8002A444: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    // 0x8002A448: ldc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X10);
    // 0x8002A44C: ldc1        $f24, 0x18($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X18);
    // 0x8002A450: jr          $ra
    // 0x8002A454: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8002A454: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8000A614_B214(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000A614: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8000A618: addiu       $v0, $v0, -0x3A38
    ctx->r2 = ADD32(ctx->r2, -0X3A38);
    // 0x8000A61C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8000A620: addiu       $a2, $zero, 0x2970
    ctx->r6 = ADD32(0, 0X2970);
    // 0x8000A624: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8000A628: lui         $a0, 0xC
    ctx->r4 = S32(0XC << 16);
L_8000A62C:
    // 0x8000A62C: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8000A630: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x8000A634: addu        $t8, $t7, $a0
    ctx->r24 = ADD32(ctx->r15, ctx->r4);
    // 0x8000A638: sb          $a1, 0x3705($t8)
    MEM_B(0X3705, ctx->r24) = ctx->r5;
    // 0x8000A63C: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x8000A640: addu        $t0, $t9, $v1
    ctx->r8 = ADD32(ctx->r25, ctx->r3);
    // 0x8000A644: addu        $t1, $t0, $a0
    ctx->r9 = ADD32(ctx->r8, ctx->r4);
    // 0x8000A648: sb          $a1, 0x3A79($t1)
    MEM_B(0X3A79, ctx->r9) = ctx->r5;
    // 0x8000A64C: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x8000A650: addu        $t3, $t2, $v1
    ctx->r11 = ADD32(ctx->r10, ctx->r3);
    // 0x8000A654: addu        $t4, $t3, $a0
    ctx->r12 = ADD32(ctx->r11, ctx->r4);
    // 0x8000A658: sb          $a1, 0x3DED($t4)
    MEM_B(0X3DED, ctx->r12) = ctx->r5;
    // 0x8000A65C: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x8000A660: addu        $t6, $t5, $v1
    ctx->r14 = ADD32(ctx->r13, ctx->r3);
    // 0x8000A664: addu        $t7, $t6, $a0
    ctx->r15 = ADD32(ctx->r14, ctx->r4);
    // 0x8000A668: addiu       $v1, $v1, 0xDD0
    ctx->r3 = ADD32(ctx->r3, 0XDD0);
    // 0x8000A66C: bne         $v1, $a2, L_8000A62C
    if (ctx->r3 != ctx->r6) {
        // 0x8000A670: sb          $a1, 0x4161($t7)
        MEM_B(0X4161, ctx->r15) = ctx->r5;
            goto L_8000A62C;
    }
    // 0x8000A670: sb          $a1, 0x4161($t7)
    MEM_B(0X4161, ctx->r15) = ctx->r5;
    // 0x8000A674: jr          $ra
    // 0x8000A678: nop

    TRACE_RETURN()
    return;
    // 0x8000A678: nop

    // 0x8000A67C: nop

;}
RECOMP_FUNC void func_800040A8_4CA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800040A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800040AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800040B0: jal         0x80003A94
    // 0x800040B4: nop

    func_80003A94_4694(rdram, ctx);
        goto after_0;
    // 0x800040B4: nop

    after_0:
    // 0x800040B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800040BC: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x800040C0: sra         $t7, $v0, 6
    ctx->r15 = S32(SIGNED(ctx->r2) >> 6);
    // 0x800040C4: andi        $v0, $t7, 0x3FF
    ctx->r2 = ctx->r15 & 0X3FF;
    // 0x800040C8: jr          $ra
    // 0x800040CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x800040CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8000A430_B030(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000A430: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8000A434: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8000A438: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8000A43C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8000A440: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x8000A444: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8000A448: addiu       $s0, $s0, -0x7838
    ctx->r16 = ADD32(ctx->r16, -0X7838);
    // 0x8000A44C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8000A450: addiu       $s2, $zero, 0x2
    ctx->r18 = ADD32(0, 0X2);
L_8000A454:
    // 0x8000A454: jal         0x8000A480
    // 0x8000A458: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8000A480_B080(rdram, ctx);
        goto after_0;
    // 0x8000A458: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8000A45C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8000A460: bne         $s1, $s2, L_8000A454
    if (ctx->r17 != ctx->r18) {
        // 0x8000A464: addiu       $s0, $s0, 0x44
        ctx->r16 = ADD32(ctx->r16, 0X44);
            goto L_8000A454;
    }
    // 0x8000A464: addiu       $s0, $s0, 0x44
    ctx->r16 = ADD32(ctx->r16, 0X44);
    // 0x8000A468: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8000A46C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8000A470: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8000A474: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8000A478: jr          $ra
    // 0x8000A47C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8000A47C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80007B3C_873C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80007B3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80007B40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80007B44: jal         0x800079C0
    // 0x80007B48: lw          $a1, 0x38($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X38);
    func_800079C0_85C0(rdram, ctx);
        goto after_0;
    // 0x80007B48: lw          $a1, 0x38($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X38);
    after_0:
    // 0x80007B4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80007B50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80007B54: jr          $ra
    // 0x80007B58: nop

    TRACE_RETURN()
    return;
    // 0x80007B58: nop

;}
RECOMP_FUNC void func_8000F280_FE80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000F280: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8000F284: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x8000F288: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x8000F28C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8000F290: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8000F294: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8000F298: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8000F29C: addiu       $t6, $sp, 0x24
    ctx->r14 = ADD32(ctx->r29, 0X24);
    // 0x8000F2A0: addiu       $t7, $sp, 0x20
    ctx->r15 = ADD32(ctx->r29, 0X20);
    // 0x8000F2A4: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x8000F2A8: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x8000F2AC: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8000F2B0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8000F2B4: jal         0x8001CC38
    // 0x8000F2B8: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    func_8001CC38_1D838(rdram, ctx);
        goto after_0;
    // 0x8000F2B8: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    after_0:
    // 0x8000F2BC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8000F2C0: lhu         $a0, 0x2A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X2A);
    // 0x8000F2C4: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x8000F2C8: nop

    // 0x8000F2CC: bc1fl       L_8000F2E0
    if (!c1cs) {
        // 0x8000F2D0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8000F2E0;
    }
    goto skip_0;
    // 0x8000F2D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x8000F2D4: jal         0x8000F2EC
    // 0x8000F2D8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8000F2EC_FEEC(rdram, ctx);
        goto after_1;
    // 0x8000F2D8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_1:
    // 0x8000F2DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8000F2E0:
    // 0x8000F2E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8000F2E4: jr          $ra
    // 0x8000F2E8: nop

    TRACE_RETURN()
    return;
    // 0x8000F2E8: nop

;}
RECOMP_FUNC void func_800125F0_131F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800125F0: lw          $t7, 0xCC($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XCC);
    // 0x800125F4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800125F8: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x800125FC: sb          $t6, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r14;
    // 0x80012600: lw          $t8, 0xCC($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XCC);
    // 0x80012604: sh          $a1, 0x2($t8)
    MEM_H(0X2, ctx->r24) = ctx->r5;
    // 0x80012608: lw          $t9, 0xCC($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XCC);
    // 0x8001260C: swc1        $f12, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f12.u32l;
    // 0x80012610: lw          $t0, 0xCC($a0)
    ctx->r8 = MEM_W(ctx->r4, 0XCC);
    // 0x80012614: sw          $a2, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r6;
    // 0x80012618: sh          $zero, 0xC8($a0)
    MEM_H(0XC8, ctx->r4) = 0;
    // 0x8001261C: lh          $t1, 0x12($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X12);
    // 0x80012620: jr          $ra
    // 0x80012624: sh          $t1, 0xCA($a0)
    MEM_H(0XCA, ctx->r4) = ctx->r9;
    TRACE_RETURN()
    return;
    // 0x80012624: sh          $t1, 0xCA($a0)
    MEM_H(0XCA, ctx->r4) = ctx->r9;
;}
RECOMP_FUNC void func_80020804_21404(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80020804: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80020808: lui         $t6, 0x8007
    ctx->r14 = S32(0X8007 << 16);
    // 0x8002080C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80020810: addiu       $t6, $t6, -0x3020
    ctx->r14 = ADD32(ctx->r14, -0X3020);
    // 0x80020814: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x80020818: addiu       $t0, $sp, 0x24
    ctx->r8 = ADD32(ctx->r29, 0X24);
    // 0x8002081C: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x80020820: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x80020824: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x80020828: lui         $a1, 0x8007
    ctx->r5 = S32(0X8007 << 16);
    // 0x8002082C: addiu       $a1, $a1, -0x3048
    ctx->r5 = ADD32(ctx->r5, -0X3048);
    // 0x80020830: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x80020834: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x80020838: addiu       $a2, $zero, 0x88
    ctx->r6 = ADD32(0, 0X88);
    // 0x8002083C: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    // 0x80020840: sw          $at, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r1;
    // 0x80020844: lw          $t9, 0xC($t6)
    ctx->r25 = MEM_W(ctx->r14, 0XC);
    // 0x80020848: sw          $t9, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r25;
    // 0x8002084C: lw          $at, 0x10($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X10);
    // 0x80020850: sw          $at, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->r1;
    // 0x80020854: lw          $v1, -0x3A38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A38);
    // 0x80020858: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8002085C: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x80020860: addu        $v1, $v1, $at
    ctx->r3 = ADD32(ctx->r3, ctx->r1);
    // 0x80020864: lhu         $a0, 0x307C($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X307C);
    // 0x80020868: andi        $t1, $a0, 0x800
    ctx->r9 = ctx->r4 & 0X800;
    // 0x8002086C: beq         $t1, $zero, L_800208A4
    if (ctx->r9 == 0) {
        // 0x80020870: nop
    
            goto L_800208A4;
    }
    // 0x80020870: nop

    // 0x80020874: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x80020878: bne         $v0, $zero, L_80020888
    if (ctx->r2 != 0) {
        // 0x8002087C: nop
    
            goto L_80020888;
    }
    // 0x8002087C: nop

    // 0x80020880: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80020884: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
L_80020888:
    // 0x80020888: bnel        $v0, $zero, L_8002089C
    if (ctx->r2 != 0) {
        // 0x8002088C: addiu       $t4, $v0, -0x1
        ctx->r12 = ADD32(ctx->r2, -0X1);
            goto L_8002089C;
    }
    goto skip_0;
    // 0x8002088C: addiu       $t4, $v0, -0x1
    ctx->r12 = ADD32(ctx->r2, -0X1);
    skip_0:
    // 0x80020890: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80020894: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x80020898: addiu       $t4, $v0, -0x1
    ctx->r12 = ADD32(ctx->r2, -0X1);
L_8002089C:
    // 0x8002089C: sw          $t4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r12;
    // 0x800208A0: lhu         $a0, 0x307C($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X307C);
L_800208A4:
    // 0x800208A4: lui         $a1, 0x8007
    ctx->r5 = S32(0X8007 << 16);
    // 0x800208A8: andi        $t5, $a0, 0x400
    ctx->r13 = ctx->r4 & 0X400;
    // 0x800208AC: beq         $t5, $zero, L_800208C0
    if (ctx->r13 == 0) {
        // 0x800208B0: addiu       $a1, $a1, -0x3048
        ctx->r5 = ADD32(ctx->r5, -0X3048);
            goto L_800208C0;
    }
    // 0x800208B0: addiu       $a1, $a1, -0x3048
    ctx->r5 = ADD32(ctx->r5, -0X3048);
    // 0x800208B4: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x800208B8: addiu       $t7, $t8, 0x1
    ctx->r15 = ADD32(ctx->r24, 0X1);
    // 0x800208BC: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
L_800208C0:
    // 0x800208C0: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x800208C4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x800208C8: sltiu       $at, $v0, 0x4
    ctx->r1 = ctx->r2 < 0X4 ? 1 : 0;
    // 0x800208CC: bnel        $at, $zero, L_800208E0
    if (ctx->r1 != 0) {
        // 0x800208D0: sll         $t6, $v0, 2
        ctx->r14 = S32(ctx->r2 << 2);
            goto L_800208E0;
    }
    goto skip_1;
    // 0x800208D0: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    skip_1:
    // 0x800208D4: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    // 0x800208D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800208DC: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
L_800208E0:
    // 0x800208E0: addu        $t9, $t0, $t6
    ctx->r25 = ADD32(ctx->r8, ctx->r14);
    // 0x800208E4: jal         0x800042AC
    // 0x800208E8: lw          $a1, 0x0($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X0);
    func_800042AC_4EAC(rdram, ctx);
        goto after_0;
    // 0x800208E8: lw          $a1, 0x0($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X0);
    after_0:
    // 0x800208EC: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x800208F0: lw          $v1, -0x3A38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A38);
    // 0x800208F4: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x800208F8: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x800208FC: addu        $v1, $v1, $at
    ctx->r3 = ADD32(ctx->r3, ctx->r1);
    // 0x80020900: lhu         $t1, 0x3094($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X3094);
    // 0x80020904: lhu         $t2, 0x307C($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0X307C);
    // 0x80020908: or          $v0, $t1, $t2
    ctx->r2 = ctx->r9 | ctx->r10;
    // 0x8002090C: andi        $t3, $v0, 0x9000
    ctx->r11 = ctx->r2 & 0X9000;
    // 0x80020910: beql        $t3, $zero, L_80020944
    if (ctx->r11 == 0) {
        // 0x80020914: andi        $t8, $v0, 0x4000
        ctx->r24 = ctx->r2 & 0X4000;
            goto L_80020944;
    }
    goto skip_2;
    // 0x80020914: andi        $t8, $v0, 0x4000
    ctx->r24 = ctx->r2 & 0X4000;
    skip_2:
    // 0x80020918: jal         0x80003678
    // 0x8002091C: nop

    func_80003678_4278(rdram, ctx);
        goto after_1;
    // 0x8002091C: nop

    after_1:
    // 0x80020920: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x80020924: lw          $v1, -0x3A38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A38);
    // 0x80020928: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8002092C: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x80020930: addu        $v1, $v1, $at
    ctx->r3 = ADD32(ctx->r3, ctx->r1);
    // 0x80020934: lhu         $t4, 0x3094($v1)
    ctx->r12 = MEM_HU(ctx->r3, 0X3094);
    // 0x80020938: lhu         $t5, 0x307C($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X307C);
    // 0x8002093C: or          $v0, $t4, $t5
    ctx->r2 = ctx->r12 | ctx->r13;
    // 0x80020940: andi        $t8, $v0, 0x4000
    ctx->r24 = ctx->r2 & 0X4000;
L_80020944:
    // 0x80020944: beql        $t8, $zero, L_80020958
    if (ctx->r24 == 0) {
        // 0x80020948: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80020958;
    }
    goto skip_3;
    // 0x80020948: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x8002094C: jal         0x80003728
    // 0x80020950: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_80003728_4328(rdram, ctx);
        goto after_2;
    // 0x80020950: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_2:
    // 0x80020954: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80020958:
    // 0x80020958: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8002095C: jr          $ra
    // 0x80020960: nop

    TRACE_RETURN()
    return;
    // 0x80020960: nop

;}
RECOMP_FUNC void func_80001A00_2600(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80001A00: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80001A04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80001A08: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80001A0C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80001A10: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80001A14: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80001A18: lui         $a0, 0x8000
    ctx->r4 = S32(0X8000 << 16);
    // 0x80001A1C: addiu       $a0, $a0, 0x1A40
    ctx->r4 = ADD32(ctx->r4, 0X1A40);
    // 0x80001A20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80001A24: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80001A28: jal         0x80040FD0
    // 0x80001A2C: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    _Printf(rdram, ctx);
        goto after_0;
    // 0x80001A2C: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    after_0:
    // 0x80001A30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80001A34: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80001A38: jr          $ra
    // 0x80001A3C: nop

    TRACE_RETURN()
    return;
    // 0x80001A3C: nop

;}
RECOMP_FUNC void func_8003F038_3FC38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003F038: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8003F03C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8003F040: addiu       $at, $zero, 0x100
    ctx->r1 = ADD32(0, 0X100);
    // 0x8003F044: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8003F048: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003F04C: bne         $a0, $at, L_8003F05C
    if (ctx->r4 != ctx->r1) {
        // 0x8003F050: sw          $a0, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r4;
            goto L_8003F05C;
    }
    // 0x8003F050: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8003F054: b           L_8003F0EC
    // 0x8003F058: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8003F0EC;
    // 0x8003F058: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8003F05C:
    // 0x8003F05C: bgez        $a1, L_8003F06C
    if (SIGNED(ctx->r5) >= 0) {
        // 0x8003F060: sra         $v1, $a1, 1
        ctx->r3 = S32(SIGNED(ctx->r5) >> 1);
            goto L_8003F06C;
    }
    // 0x8003F060: sra         $v1, $a1, 1
    ctx->r3 = S32(SIGNED(ctx->r5) >> 1);
    // 0x8003F064: addiu       $at, $a1, 0x1
    ctx->r1 = ADD32(ctx->r5, 0X1);
    // 0x8003F068: sra         $v1, $at, 1
    ctx->r3 = S32(SIGNED(ctx->r1) >> 1);
L_8003F06C:
    // 0x8003F06C: sll         $t6, $v1, 1
    ctx->r14 = S32(ctx->r3 << 1);
    // 0x8003F070: lui         $v0, 0x8007
    ctx->r2 = S32(0X8007 << 16);
    // 0x8003F074: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8003F078: lh          $v0, 0x7894($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X7894);
    // 0x8003F07C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x8003F080: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    // 0x8003F084: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8003F088: jal         0x800141C4
    // 0x8003F08C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_800141C4_14DC4(rdram, ctx);
        goto after_0;
    // 0x8003F08C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_0:
    // 0x8003F090: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8003F094: bne         $v0, $at, L_8003F0A4
    if (ctx->r2 != ctx->r1) {
        // 0x8003F098: nop
    
            goto L_8003F0A4;
    }
    // 0x8003F098: nop

    // 0x8003F09C: jal         0x80013B14
    // 0x8003F0A0: lhu         $a0, 0x1A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X1A);
    func_80013B14_14714(rdram, ctx);
        goto after_1;
    // 0x8003F0A0: lhu         $a0, 0x1A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X1A);
    after_1:
L_8003F0A4:
    // 0x8003F0A4: jal         0x800141C4
    // 0x8003F0A8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800141C4_14DC4(rdram, ctx);
        goto after_2;
    // 0x8003F0A8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x8003F0AC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8003F0B0: bne         $v0, $at, L_8003F0C0
    if (ctx->r2 != ctx->r1) {
        // 0x8003F0B4: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8003F0C0;
    }
    // 0x8003F0B4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8003F0B8: b           L_8003F0EC
    // 0x8003F0BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8003F0EC;
    // 0x8003F0BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8003F0C0:
    // 0x8003F0C0: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8003F0C4: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8003F0C8: slti        $at, $t7, 0x4
    ctx->r1 = SIGNED(ctx->r15) < 0X4 ? 1 : 0;
    // 0x8003F0CC: beq         $at, $zero, L_8003F0E8
    if (ctx->r1 == 0) {
        // 0x8003F0D0: sll         $t9, $t8, 11
        ctx->r25 = S32(ctx->r24 << 11);
            goto L_8003F0E8;
    }
    // 0x8003F0D0: sll         $t9, $t8, 11
    ctx->r25 = S32(ctx->r24 << 11);
    // 0x8003F0D4: bgez        $t9, L_8003F0E4
    if (SIGNED(ctx->r25) >= 0) {
        // 0x8003F0D8: sra         $t0, $t9, 1
        ctx->r8 = S32(SIGNED(ctx->r25) >> 1);
            goto L_8003F0E4;
    }
    // 0x8003F0D8: sra         $t0, $t9, 1
    ctx->r8 = S32(SIGNED(ctx->r25) >> 1);
    // 0x8003F0DC: addiu       $at, $t9, 0x1
    ctx->r1 = ADD32(ctx->r25, 0X1);
    // 0x8003F0E0: sra         $t0, $at, 1
    ctx->r8 = S32(SIGNED(ctx->r1) >> 1);
L_8003F0E4:
    // 0x8003F0E4: addu        $v1, $v0, $t0
    ctx->r3 = ADD32(ctx->r2, ctx->r8);
L_8003F0E8:
    // 0x8003F0E8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8003F0EC:
    // 0x8003F0EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003F0F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8003F0F4: jr          $ra
    // 0x8003F0F8: nop

    TRACE_RETURN()
    return;
    // 0x8003F0F8: nop

;}
RECOMP_FUNC void func_8003C47C_3D07C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003C47C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003C480: addiu       $v0, $v0, 0x172C
    ctx->r2 = ADD32(ctx->r2, 0X172C);
    // 0x8003C484: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8003C488: addiu       $t7, $t6, 0x3
    ctx->r15 = ADD32(ctx->r14, 0X3);
    // 0x8003C48C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8003C490: jr          $ra
    // 0x8003C494: nop

    TRACE_RETURN()
    return;
    // 0x8003C494: nop

;}
RECOMP_FUNC void guFrustum(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80042CF4: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80042CF8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80042CFC: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80042D00: mtc1        $a3, $f16
    ctx->f16.u32l = ctx->r7;
    // 0x80042D04: lwc1        $f4, 0x78($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80042D08: lwc1        $f6, 0x7C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x80042D0C: lwc1        $f8, 0x80($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X80);
    // 0x80042D10: lwc1        $f10, 0x84($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X84);
    // 0x80042D14: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80042D18: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x80042D1C: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x80042D20: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x80042D24: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x80042D28: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80042D2C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80042D30: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x80042D34: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x80042D38: jal         0x80042BA0
    // 0x80042D3C: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    guFrustumF(rdram, ctx);
        goto after_0;
    // 0x80042D3C: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x80042D40: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80042D44: jal         0x80043AA0
    // 0x80042D48: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    guMtxF2L(rdram, ctx);
        goto after_1;
    // 0x80042D48: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    after_1:
    // 0x80042D4C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80042D50: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x80042D54: jr          $ra
    // 0x80042D58: nop

    TRACE_RETURN()
    return;
    // 0x80042D58: nop

;}
RECOMP_FUNC void func_800353BC_35FBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800353BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800353C0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800353C4: sll         $a2, $a1, 16
    ctx->r6 = S32(ctx->r5 << 16);
    // 0x800353C8: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800353CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800353D0: sra         $t6, $a2, 16
    ctx->r14 = S32(SIGNED(ctx->r6) >> 16);
    // 0x800353D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800353D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800353DC: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x800353E0: jal         0x800353F8
    // 0x800353E4: lw          $a0, -0x254C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X254C);
    func_800353F8_35FF8(rdram, ctx);
        goto after_0;
    // 0x800353E4: lw          $a0, -0x254C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X254C);
    after_0:
    // 0x800353E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800353EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800353F0: jr          $ra
    // 0x800353F4: nop

    TRACE_RETURN()
    return;
    // 0x800353F4: nop

;}
RECOMP_FUNC void func_8001D898_1E498(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001D898: lwc1        $f2, 0x4($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X4);
    // 0x8001D89C: lwc1        $f12, 0x0($a2)
    ctx->f12.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8001D8A0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8001D8A4: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8001D8A8: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8001D8AC: c.le.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl <= ctx->f2.fl;
    // 0x8001D8B0: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x8001D8B4: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8001D8B8: bc1f        L_8001D8D0
    if (!c1cs) {
        // 0x8001D8BC: sqrt.s      $f0, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
            goto L_8001D8D0;
    }
    // 0x8001D8BC: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x8001D8C0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8001D8C4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8001D8C8: b           L_8001D8DC
    // 0x8001D8CC: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
        goto L_8001D8DC;
    // 0x8001D8CC: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
L_8001D8D0:
    // 0x8001D8D0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8001D8D4: nop

    // 0x8001D8D8: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
L_8001D8DC:
    // 0x8001D8DC: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001D8E0: bc1fl       L_8001D8F4
    if (!c1cs) {
        // 0x8001D8E4: mov.s       $f16, $f0
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.fl = ctx->f0.fl;
            goto L_8001D8F4;
    }
    goto skip_0;
    // 0x8001D8E4: mov.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.fl = ctx->f0.fl;
    skip_0:
    // 0x8001D8E8: b           L_8001D8F4
    // 0x8001D8EC: neg.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = -ctx->f0.fl;
        goto L_8001D8F4;
    // 0x8001D8EC: neg.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = -ctx->f0.fl;
    // 0x8001D8F0: mov.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.fl = ctx->f0.fl;
L_8001D8F4:
    // 0x8001D8F4: ldc1        $f10, -0x46D0($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X46D0);
    // 0x8001D8F8: cvt.d.s     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f8.d = CVT_D_S(ctx->f16.fl);
    // 0x8001D8FC: c.lt.d      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.d < ctx->f10.d;
    // 0x8001D900: nop

    // 0x8001D904: bc1fl       L_8001D964
    if (!c1cs) {
        // 0x8001D908: lwc1        $f4, 0x0($a0)
        ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
            goto L_8001D964;
    }
    goto skip_1;
    // 0x8001D908: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    skip_1:
    // 0x8001D90C: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8001D910: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x8001D914: lwc1        $f6, 0x8($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X8);
    // 0x8001D918: c.lt.s      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.fl < ctx->f6.fl;
    // 0x8001D91C: nop

    // 0x8001D920: bc1fl       L_8001D948
    if (!c1cs) {
        // 0x8001D924: lwc1        $f6, 0x8($a0)
        ctx->f6.u32l = MEM_W(ctx->r4, 0X8);
            goto L_8001D948;
    }
    goto skip_2;
    // 0x8001D924: lwc1        $f6, 0x8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X8);
    skip_2:
    // 0x8001D928: lwc1        $f8, 0x8($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8001D92C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8001D930: swc1        $f8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f8.u32l;
    // 0x8001D934: lwc1        $f10, 0x4($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8001D938: neg.s       $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = -ctx->f10.fl;
    // 0x8001D93C: jr          $ra
    // 0x8001D940: swc1        $f4, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x8001D940: swc1        $f4, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f4.u32l;
    // 0x8001D944: lwc1        $f6, 0x8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X8);
L_8001D948:
    // 0x8001D948: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x8001D94C: swc1        $f8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f8.u32l;
    // 0x8001D950: lwc1        $f10, 0x4($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8001D954: swc1        $f10, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f10.u32l;
    // 0x8001D958: jr          $ra
    // 0x8001D95C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x8001D95C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8001D960: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
L_8001D964:
    // 0x8001D964: lwc1        $f8, 0x4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8001D968: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8001D96C: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x8001D970: nop

    // 0x8001D974: mul.s       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f8.fl);
    // 0x8001D978: sub.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x8001D97C: div.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8001D980: mul.s       $f6, $f8, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x8001D984: swc1        $f6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f6.u32l;
    // 0x8001D988: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8001D98C: lwc1        $f10, 0x0($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8001D990: lwc1        $f6, 0x4($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8001D994: mul.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x8001D998: lwc1        $f10, 0x4($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X4);
    // 0x8001D99C: mul.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8001D9A0: lwc1        $f10, 0x8($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X8);
    // 0x8001D9A4: add.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x8001D9A8: lwc1        $f8, 0x8($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8001D9AC: mul.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x8001D9B0: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8001D9B4: swc1        $f10, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f10.u32l;
    // 0x8001D9B8: lwc1        $f8, 0x0($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8001D9BC: lwc1        $f16, 0x8($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X8);
    // 0x8001D9C0: lwc1        $f10, 0x0($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8001D9C4: neg.s       $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = -ctx->f8.fl;
    // 0x8001D9C8: mul.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x8001D9CC: lwc1        $f4, 0x4($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8001D9D0: mul.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8001D9D4: lwc1        $f10, 0x4($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X4);
    // 0x8001D9D8: mul.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x8001D9DC: nop

    // 0x8001D9E0: mul.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8001D9E4: sub.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x8001D9E8: lwc1        $f8, 0x8($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8001D9EC: div.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8001D9F0: mul.s       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x8001D9F4: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x8001D9F8: mul.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x8001D9FC: swc1        $f8, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f8.u32l;
    // 0x8001DA00: jr          $ra
    // 0x8001DA04: nop

    TRACE_RETURN()
    return;
    // 0x8001DA04: nop

;}
RECOMP_FUNC void guLookAtF(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80046B60: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80046B64: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80046B68: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x80046B6C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80046B70: sdc1        $f30, 0x40($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X40, ctx->r29);
    // 0x80046B74: sdc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X38, ctx->r29);
    // 0x80046B78: sdc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X30, ctx->r29);
    // 0x80046B7C: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x80046B80: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x80046B84: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x80046B88: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x80046B8C: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x80046B90: jal         0x80043BA0
    // 0x80046B94: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    guMtxIdentF(rdram, ctx);
        goto after_0;
    // 0x80046B94: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    after_0:
    // 0x80046B98: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x80046B9C: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80046BA0: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80046BA4: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80046BA8: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80046BAC: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80046BB0: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x80046BB4: sub.s       $f22, $f8, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f22.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80046BB8: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80046BBC: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80046BC0: sub.s       $f24, $f4, $f6
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f24.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80046BC4: mul.s       $f10, $f22, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f22.fl, ctx->f22.fl);
    // 0x80046BC8: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80046BCC: mul.s       $f6, $f24, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = MUL_S(ctx->f24.fl, ctx->f24.fl);
    // 0x80046BD0: jal         0x800417E0
    // 0x80046BD4: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    _nsqrtf(rdram, ctx);
        goto after_1;
    // 0x80046BD4: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_1:
    // 0x80046BD8: lui         $at, 0xBFF0
    ctx->r1 = S32(0XBFF0 << 16);
    // 0x80046BDC: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80046BE0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80046BE4: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x80046BE8: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80046BEC: div.d       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x80046BF0: lwc1        $f10, 0x74($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80046BF4: cvt.s.d     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f2.fl = CVT_S_D(ctx->f4.d);
    // 0x80046BF8: mul.s       $f20, $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f2.fl);
    // 0x80046BFC: nop

    // 0x80046C00: mul.s       $f22, $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f22.fl = MUL_S(ctx->f22.fl, ctx->f2.fl);
    // 0x80046C04: nop

    // 0x80046C08: mul.s       $f24, $f24, $f2
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f24.fl = MUL_S(ctx->f24.fl, ctx->f2.fl);
    // 0x80046C0C: nop

    // 0x80046C10: mul.s       $f8, $f6, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f24.fl);
    // 0x80046C14: nop

    // 0x80046C18: mul.s       $f4, $f10, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x80046C1C: sub.s       $f26, $f8, $f4
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f26.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x80046C20: mul.s       $f8, $f10, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x80046C24: lwc1        $f4, 0x6C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80046C28: mul.s       $f10, $f4, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f24.fl);
    // 0x80046C2C: sub.s       $f28, $f8, $f10
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f28.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80046C30: mul.s       $f8, $f4, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f22.fl);
    // 0x80046C34: nop

    // 0x80046C38: mul.s       $f10, $f6, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x80046C3C: sub.s       $f30, $f8, $f10
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f30.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80046C40: mul.s       $f4, $f26, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = MUL_S(ctx->f26.fl, ctx->f26.fl);
    // 0x80046C44: nop

    // 0x80046C48: mul.s       $f6, $f28, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = MUL_S(ctx->f28.fl, ctx->f28.fl);
    // 0x80046C4C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80046C50: mul.s       $f10, $f30, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = MUL_S(ctx->f30.fl, ctx->f30.fl);
    // 0x80046C54: jal         0x800417E0
    // 0x80046C58: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    _nsqrtf(rdram, ctx);
        goto after_2;
    // 0x80046C58: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    after_2:
    // 0x80046C5C: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80046C60: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80046C64: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80046C68: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x80046C6C: div.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f4.d, ctx->f6.d);
    // 0x80046C70: cvt.s.d     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f2.fl = CVT_S_D(ctx->f8.d);
    // 0x80046C74: mul.s       $f26, $f26, $f2
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f26.fl = MUL_S(ctx->f26.fl, ctx->f2.fl);
    // 0x80046C78: nop

    // 0x80046C7C: mul.s       $f28, $f28, $f2
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f28.fl = MUL_S(ctx->f28.fl, ctx->f2.fl);
    // 0x80046C80: nop

    // 0x80046C84: mul.s       $f30, $f30, $f2
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f30.fl = MUL_S(ctx->f30.fl, ctx->f2.fl);
    // 0x80046C88: nop

    // 0x80046C8C: mul.s       $f10, $f22, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = MUL_S(ctx->f22.fl, ctx->f30.fl);
    // 0x80046C90: nop

    // 0x80046C94: mul.s       $f4, $f24, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = MUL_S(ctx->f24.fl, ctx->f28.fl);
    // 0x80046C98: nop

    // 0x80046C9C: mul.s       $f6, $f24, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f6.fl = MUL_S(ctx->f24.fl, ctx->f26.fl);
    // 0x80046CA0: nop

    // 0x80046CA4: mul.s       $f8, $f20, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f30.fl);
    // 0x80046CA8: sub.s       $f14, $f10, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x80046CAC: mul.s       $f10, $f20, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f28.fl);
    // 0x80046CB0: nop

    // 0x80046CB4: mul.s       $f4, $f22, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = MUL_S(ctx->f22.fl, ctx->f26.fl);
    // 0x80046CB8: swc1        $f14, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f14.u32l;
    // 0x80046CBC: sub.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80046CC0: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80046CC4: nop

    // 0x80046CC8: mul.s       $f8, $f16, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x80046CCC: swc1        $f16, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f16.u32l;
    // 0x80046CD0: sub.s       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x80046CD4: mul.s       $f4, $f18, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x80046CD8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80046CDC: swc1        $f18, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f18.u32l;
    // 0x80046CE0: jal         0x800417E0
    // 0x80046CE4: add.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f4.fl;
    _nsqrtf(rdram, ctx);
        goto after_3;
    // 0x80046CE4: add.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f4.fl;
    after_3:
    // 0x80046CE8: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80046CEC: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80046CF0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80046CF4: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x80046CF8: lwc1        $f14, 0x6C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80046CFC: div.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = DIV_D(ctx->f6.d, ctx->f8.d);
    // 0x80046D00: lwc1        $f12, 0x70($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80046D04: lwc1        $f4, 0x74($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80046D08: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80046D0C: cvt.s.d     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f2.fl = CVT_S_D(ctx->f10.d);
    // 0x80046D10: mul.s       $f14, $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x80046D14: nop

    // 0x80046D18: mul.s       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x80046D1C: nop

    // 0x80046D20: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x80046D24: swc1        $f6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f6.u32l;
    // 0x80046D28: swc1        $f26, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f26.u32l;
    // 0x80046D2C: swc1        $f28, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f28.u32l;
    // 0x80046D30: swc1        $f30, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f30.u32l;
    // 0x80046D34: lwc1        $f8, 0x54($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80046D38: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80046D3C: mul.s       $f10, $f8, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f26.fl);
    // 0x80046D40: nop

    // 0x80046D44: mul.s       $f6, $f4, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f28.fl);
    // 0x80046D48: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80046D4C: swc1        $f14, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f14.u32l;
    // 0x80046D50: swc1        $f12, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f12.u32l;
    // 0x80046D54: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x80046D58: mul.s       $f10, $f4, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f30.fl);
    // 0x80046D5C: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80046D60: neg.s       $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = -ctx->f6.fl;
    // 0x80046D64: swc1        $f4, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f4.u32l;
    // 0x80046D68: lwc1        $f0, 0x74($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80046D6C: swc1        $f12, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f12.u32l;
    // 0x80046D70: swc1        $f14, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f14.u32l;
    // 0x80046D74: lwc1        $f14, 0x54($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80046D78: lwc1        $f12, 0x58($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80046D7C: lwc1        $f2, 0x5C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80046D80: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x80046D84: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80046D88: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80046D8C: swc1        $f20, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f20.u32l;
    // 0x80046D90: mul.s       $f10, $f14, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f8.fl);
    // 0x80046D94: swc1        $f22, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f22.u32l;
    // 0x80046D98: swc1        $f24, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f24.u32l;
    // 0x80046D9C: mul.s       $f4, $f12, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f6.fl);
    // 0x80046DA0: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80046DA4: mul.s       $f6, $f2, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x80046DA8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80046DAC: nop

    // 0x80046DB0: swc1        $f0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f0.u32l;
    // 0x80046DB4: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x80046DB8: swc1        $f0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f0.u32l;
    // 0x80046DBC: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x80046DC0: mul.s       $f8, $f14, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f20.fl);
    // 0x80046DC4: nop

    // 0x80046DC8: mul.s       $f6, $f12, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f22.fl);
    // 0x80046DCC: neg.s       $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = -ctx->f10.fl;
    // 0x80046DD0: swc1        $f4, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f4.u32l;
    // 0x80046DD4: mul.s       $f4, $f2, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f24.fl);
    // 0x80046DD8: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x80046DDC: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80046DE0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80046DE4: neg.s       $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = -ctx->f8.fl;
    // 0x80046DE8: swc1        $f10, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f10.u32l;
    // 0x80046DEC: swc1        $f6, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f6.u32l;
    // 0x80046DF0: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80046DF4: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x80046DF8: ldc1        $f30, 0x40($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X40);
    // 0x80046DFC: ldc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X38);
    // 0x80046E00: ldc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X30);
    // 0x80046E04: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x80046E08: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x80046E0C: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x80046E10: jr          $ra
    // 0x80046E14: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x80046E14: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void __osGetActiveQueue(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004B780: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x8004B784: jr          $ra
    // 0x8004B788: lw          $v0, -0x5D00($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5D00);
    TRACE_RETURN()
    return;
    // 0x8004B788: lw          $v0, -0x5D00($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5D00);
;}
RECOMP_FUNC void func_8001285C_1345C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001285C: lwc1        $f4, 0x8C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8C);
    // 0x80012860: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x80012864: lwc1        $f6, 0x90($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X90);
    // 0x80012868: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
    // 0x8001286C: lwc1        $f8, 0x94($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X94);
    // 0x80012870: jr          $ra
    // 0x80012874: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x80012874: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_8003C6B8_3D2B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003C6B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003C6BC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003C6C0: addiu       $v1, $v1, 0x1728
    ctx->r3 = ADD32(ctx->r3, 0X1728);
    // 0x8003C6C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003C6C8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003C6CC: lbu         $t6, 0x8C($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X8C);
    // 0x8003C6D0: bne         $t6, $zero, L_8003C708
    if (ctx->r14 != 0) {
        // 0x8003C6D4: nop
    
            goto L_8003C708;
    }
    // 0x8003C6D4: nop

    // 0x8003C6D8: lbu         $t7, 0x7C($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X7C);
    // 0x8003C6DC: bnel        $t7, $zero, L_8003C714
    if (ctx->r15 != 0) {
        // 0x8003C6E0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8003C714;
    }
    goto skip_0;
    // 0x8003C6E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8003C6E4: lbu         $t8, 0x6($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X6);
    // 0x8003C6E8: ori         $t9, $t8, 0x2
    ctx->r25 = ctx->r24 | 0X2;
    // 0x8003C6EC: sb          $t9, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r25;
    // 0x8003C6F0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003C6F4: lw          $t0, 0x28($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X28);
    // 0x8003C6F8: lw          $t1, 0x84($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X84);
    // 0x8003C6FC: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8003C700: b           L_8003C710
    // 0x8003C704: sw          $t2, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r10;
        goto L_8003C710;
    // 0x8003C704: sw          $t2, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r10;
L_8003C708:
    // 0x8003C708: jal         0x8003C860
    // 0x8003C70C: nop

    func_8003C860_3D460(rdram, ctx);
        goto after_0;
    // 0x8003C70C: nop

    after_0:
L_8003C710:
    // 0x8003C710: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003C714:
    // 0x8003C714: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003C718: jr          $ra
    // 0x8003C71C: nop

    TRACE_RETURN()
    return;
    // 0x8003C71C: nop

;}
RECOMP_FUNC void func_80015EFC_16AFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80015EFC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80015F00: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80015F04: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80015F08: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80015F0C: jal         0x80014CC4
    // 0x80015F10: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80014CC4_158C4(rdram, ctx);
        goto after_0;
    // 0x80015F10: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x80015F14: beq         $v0, $zero, L_80015F30
    if (ctx->r2 == 0) {
        // 0x80015F18: nop
    
            goto L_80015F30;
    }
    // 0x80015F18: nop

    // 0x80015F1C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80015F20:
    // 0x80015F20: jal         0x80014CC4
    // 0x80015F24: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80014CC4_158C4(rdram, ctx);
        goto after_1;
    // 0x80015F24: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x80015F28: bnel        $v0, $zero, L_80015F20
    if (ctx->r2 != 0) {
        // 0x80015F2C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80015F20;
    }
    goto skip_0;
    // 0x80015F2C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
L_80015F30:
    // 0x80015F30: jal         0x80014CC4
    // 0x80015F34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80014CC4_158C4(rdram, ctx);
        goto after_2;
    // 0x80015F34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80015F38: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80015F3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80015F40: sllv        $t7, $t6, $s0
    ctx->r15 = S32(ctx->r14 << (ctx->r16 & 31));
    // 0x80015F44: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x80015F48: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80015F4C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80015F50: jr          $ra
    // 0x80015F54: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    TRACE_RETURN()
    return;
    // 0x80015F54: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
;}
RECOMP_FUNC void func_80003380_3F80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80003380: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x80003384: addiu       $v0, $v0, -0x3A38
    ctx->r2 = ADD32(ctx->r2, -0X3A38);
    // 0x80003388: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x8000338C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80003390: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80003394: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80003398: sb          $a0, -0x5220($at)
    MEM_B(-0X5220, ctx->r1) = ctx->r4;
    // 0x8000339C: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x800033A0: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x800033A4: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800033A8: jr          $ra
    // 0x800033AC: sb          $zero, -0x521F($at)
    MEM_B(-0X521F, ctx->r1) = 0;
    TRACE_RETURN()
    return;
    // 0x800033AC: sb          $zero, -0x521F($at)
    MEM_B(-0X521F, ctx->r1) = 0;
;}
RECOMP_FUNC void func_8000A5C4_B1C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000A5C4: lui         $t6, 0x8006
    ctx->r14 = S32(0X8006 << 16);
    // 0x8000A5C8: addiu       $t6, $t6, -0x468C
    ctx->r14 = ADD32(ctx->r14, -0X468C);
    // 0x8000A5CC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8000A5D0: addiu       $t9, $t6, 0x90
    ctx->r25 = ADD32(ctx->r14, 0X90);
    // 0x8000A5D4: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
L_8000A5D8:
    // 0x8000A5D8: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x8000A5DC: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x8000A5E0: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x8000A5E4: sw          $at, -0xC($t0)
    MEM_W(-0XC, ctx->r8) = ctx->r1;
    // 0x8000A5E8: lw          $at, -0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X8);
    // 0x8000A5EC: sw          $at, -0x8($t0)
    MEM_W(-0X8, ctx->r8) = ctx->r1;
    // 0x8000A5F0: lw          $at, -0x4($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X4);
    // 0x8000A5F4: bne         $t6, $t9, L_8000A5D8
    if (ctx->r14 != ctx->r25) {
        // 0x8000A5F8: sw          $at, -0x4($t0)
        MEM_W(-0X4, ctx->r8) = ctx->r1;
            goto L_8000A5D8;
    }
    // 0x8000A5F8: sw          $at, -0x4($t0)
    MEM_W(-0X4, ctx->r8) = ctx->r1;
    // 0x8000A5FC: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x8000A600: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x8000A604: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x8000A608: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x8000A60C: jr          $ra
    // 0x8000A610: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x8000A610: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_80002454_3054(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80002454: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80002458: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x8000245C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80002460: lui         $t7, 0x4
    ctx->r15 = S32(0X4 << 16);
    // 0x80002464: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80002468: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8000246C: lbu         $t7, -0x522A($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X522A);
    // 0x80002470: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    // 0x80002474: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x80002478: bne         $t7, $zero, L_800024A8
    if (ctx->r15 != 0) {
        // 0x8000247C: nop
    
            goto L_800024A8;
    }
    // 0x8000247C: nop

    // 0x80002480: jal         0x80001C00
    // 0x80002484: addiu       $a1, $a1, -0x4BA0
    ctx->r5 = ADD32(ctx->r5, -0X4BA0);
    func_80001C00_2800(rdram, ctx);
        goto after_0;
    // 0x80002484: addiu       $a1, $a1, -0x4BA0
    ctx->r5 = ADD32(ctx->r5, -0X4BA0);
    after_0:
    // 0x80002488: ori         $v1, $zero, 0xFFFF
    ctx->r3 = 0 | 0XFFFF;
    // 0x8000248C: beq         $v1, $zero, L_800024A4
    if (ctx->r3 == 0) {
        // 0x80002490: lui         $at, 0x800C
        ctx->r1 = S32(0X800C << 16);
            goto L_800024A4;
    }
    // 0x80002490: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
L_80002494:
    // 0x80002494: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80002498: andi        $t8, $v1, 0xFFFF
    ctx->r24 = ctx->r3 & 0XFFFF;
    // 0x8000249C: bne         $t8, $zero, L_80002494
    if (ctx->r24 != 0) {
        // 0x800024A0: or          $v1, $t8, $zero
        ctx->r3 = ctx->r24 | 0;
            goto L_80002494;
    }
    // 0x800024A0: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
L_800024A4:
    // 0x800024A4: sh          $zero, 0x7A76($at)
    MEM_H(0X7A76, ctx->r1) = 0;
L_800024A8:
    // 0x800024A8: jal         0x801CB460
    // 0x800024AC: nop

    LOOKUP_FUNC(0x801CB460)(rdram, ctx);
        goto after_1;
    // 0x800024AC: nop

    after_1:
    // 0x800024B0: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x800024B4: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x800024B8: lw          $a1, -0x3A34($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3A34);
    // 0x800024BC: jal         0x801CB668
    // 0x800024C0: lh          $a0, 0x7A72($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X7A72);
    func_801CB668_69E288(rdram, ctx);
        goto after_2;
    // 0x800024C0: lh          $a0, 0x7A72($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X7A72);
    after_2:
    // 0x800024C4: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x800024C8: lw          $v1, -0x3A38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A38);
    // 0x800024CC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800024D0: lui         $t9, 0x4
    ctx->r25 = S32(0X4 << 16);
    // 0x800024D4: sw          $v0, -0x3A34($at)
    MEM_W(-0X3A34, ctx->r1) = ctx->r2;
    // 0x800024D8: addu        $t9, $t9, $v1
    ctx->r25 = ADD32(ctx->r25, ctx->r3);
    // 0x800024DC: lbu         $t9, -0x522C($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X522C);
    // 0x800024E0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800024E4: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x800024E8: beq         $t9, $at, L_80002500
    if (ctx->r25 == ctx->r1) {
        // 0x800024EC: addiu       $a0, $zero, 0x5A
        ctx->r4 = ADD32(0, 0X5A);
            goto L_80002500;
    }
    // 0x800024EC: addiu       $a0, $zero, 0x5A
    ctx->r4 = ADD32(0, 0X5A);
    // 0x800024F0: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x800024F4: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x800024F8: jal         0x8003FF50
    // 0x800024FC: sb          $t0, -0x5236($at)
    MEM_B(-0X5236, ctx->r1) = ctx->r8;
    osViSetSpecialFeatures_recomp(rdram, ctx);
        goto after_3;
    // 0x800024FC: sb          $t0, -0x5236($at)
    MEM_B(-0X5236, ctx->r1) = ctx->r8;
    after_3:
L_80002500:
    // 0x80002500: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80002504: ori         $t1, $zero, 0x8000
    ctx->r9 = 0 | 0X8000;
    // 0x80002508: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x8000250C: sh          $t1, 0x7AD8($at)
    MEM_H(0X7AD8, ctx->r1) = ctx->r9;
    // 0x80002510: jr          $ra
    // 0x80002514: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80002514: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80021444_22044(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80021444: lui         $t6, 0x8007
    ctx->r14 = S32(0X8007 << 16);
    // 0x80021448: lw          $t6, -0x3044($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3044);
    // 0x8002144C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80021450: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x80021454: beq         $t6, $at, L_800214CC
    if (ctx->r14 == ctx->r1) {
        // 0x80021458: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800214CC;
    }
    // 0x80021458: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002145C: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x80021460: addiu       $v1, $v1, -0x3A38
    ctx->r3 = ADD32(ctx->r3, -0X3A38);
    // 0x80021464: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x80021468: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x8002146C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80021470: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80021474: sb          $t7, -0x760($at)
    MEM_B(-0X760, ctx->r1) = ctx->r15;
    // 0x80021478: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8002147C: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80021480: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x80021484: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x80021488: lhu         $t9, 0x2DF2($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X2DF2);
    // 0x8002148C: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80021490: addiu       $a0, $a0, -0x39F8
    ctx->r4 = ADD32(ctx->r4, -0X39F8);
    // 0x80021494: sh          $t9, 0x204($a0)
    MEM_H(0X204, ctx->r4) = ctx->r25;
    // 0x80021498: lbu         $t0, 0x2DE4($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X2DE4);
    // 0x8002149C: lui         $t1, 0x8007
    ctx->r9 = S32(0X8007 << 16);
    // 0x800214A0: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800214A4: sb          $t0, 0x206($a0)
    MEM_B(0X206, ctx->r4) = ctx->r8;
    // 0x800214A8: lw          $t1, -0x3048($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X3048);
    // 0x800214AC: jal         0x800214E4
    // 0x800214B0: sw          $t1, -0x3A24($at)
    MEM_W(-0X3A24, ctx->r1) = ctx->r9;
    func_800214E4_220E4(rdram, ctx);
        goto after_0;
    // 0x800214B0: sw          $t1, -0x3A24($at)
    MEM_W(-0X3A24, ctx->r1) = ctx->r9;
    after_0:
    // 0x800214B4: jal         0x8000B864
    // 0x800214B8: nop

    func_8000B864_C464(rdram, ctx);
        goto after_1;
    // 0x800214B8: nop

    after_1:
    // 0x800214BC: jal         0x80003728
    // 0x800214C0: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    func_80003728_4328(rdram, ctx);
        goto after_2;
    // 0x800214C0: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_2:
    // 0x800214C4: b           L_800214D8
    // 0x800214C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800214D8;
    // 0x800214C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800214CC:
    // 0x800214CC: jal         0x80003728
    // 0x800214D0: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    func_80003728_4328(rdram, ctx);
        goto after_3;
    // 0x800214D0: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_3:
    // 0x800214D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800214D8:
    // 0x800214D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800214DC: jr          $ra
    // 0x800214E0: nop

    TRACE_RETURN()
    return;
    // 0x800214E0: nop

;}
RECOMP_FUNC void func_8000378C_438C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000378C: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x80003790: addiu       $v1, $v1, -0x3A38
    ctx->r3 = ADD32(ctx->r3, -0X3A38);
    // 0x80003794: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80003798: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000379C: lui         $t6, 0x4
    ctx->r14 = S32(0X4 << 16);
    // 0x800037A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800037A4: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x800037A8: lbu         $t6, -0x522C($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X522C);
    // 0x800037AC: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x800037B0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800037B4: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x800037B8: sb          $t7, -0x522C($at)
    MEM_B(-0X522C, ctx->r1) = ctx->r15;
    // 0x800037BC: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x800037C0: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x800037C4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800037C8: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800037CC: jal         0x80003628
    // 0x800037D0: sb          $zero, -0x522B($at)
    MEM_B(-0X522B, ctx->r1) = 0;
    func_80003628_4228(rdram, ctx);
        goto after_0;
    // 0x800037D0: sb          $zero, -0x522B($at)
    MEM_B(-0X522B, ctx->r1) = 0;
    after_0:
    // 0x800037D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800037D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800037DC: jr          $ra
    // 0x800037E0: nop

    TRACE_RETURN()
    return;
    // 0x800037E0: nop

;}
RECOMP_FUNC void func_800374AC_380AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800374AC: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x800374B0: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x800374B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800374B8: andi        $a1, $a0, 0xFF
    ctx->r5 = ctx->r4 & 0XFF;
    // 0x800374BC: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x800374C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800374C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800374C8: addiu       $t6, $a1, 0x21C
    ctx->r14 = ADD32(ctx->r5, 0X21C);
    // 0x800374CC: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800374D0: sh          $t6, -0x5020($at)
    MEM_H(-0X5020, ctx->r1) = ctx->r14;
    // 0x800374D4: jal         0x80003728
    // 0x800374D8: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    func_80003728_4328(rdram, ctx);
        goto after_0;
    // 0x800374D8: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_0:
    // 0x800374DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800374E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800374E4: jr          $ra
    // 0x800374E8: nop

    TRACE_RETURN()
    return;
    // 0x800374E8: nop

;}
RECOMP_FUNC void func_8003CA30_3D630(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003CA30: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003CA34: addiu       $v1, $v1, 0x1728
    ctx->r3 = ADD32(ctx->r3, 0X1728);
    // 0x8003CA38: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x8003CA3C: lui         $t7, 0x801C
    ctx->r15 = S32(0X801C << 16);
    // 0x8003CA40: sb          $zero, 0x64($t6)
    MEM_B(0X64, ctx->r14) = 0;
    // 0x8003CA44: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x8003CA48: lw          $t7, 0x172C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X172C);
    // 0x8003CA4C: sw          $t7, 0x68($t8)
    MEM_W(0X68, ctx->r24) = ctx->r15;
    // 0x8003CA50: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x8003CA54: sh          $zero, 0x42($t9)
    MEM_H(0X42, ctx->r25) = 0;
    // 0x8003CA58: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003CA5C: lh          $t0, 0x42($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X42);
    // 0x8003CA60: sh          $t0, 0x34($v0)
    MEM_H(0X34, ctx->r2) = ctx->r8;
    // 0x8003CA64: jr          $ra
    // 0x8003CA68: nop

    TRACE_RETURN()
    return;
    // 0x8003CA68: nop

;}
RECOMP_FUNC void func_8003D0B0_3DCB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003D0B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003D0B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003D0B8: jal         0x8003F0FC
    // 0x8003D0BC: nop

    func_8003F0FC_3FCFC(rdram, ctx);
        goto after_0;
    // 0x8003D0BC: nop

    after_0:
    // 0x8003D0C0: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003D0C4: addiu       $v1, $v1, 0x792C
    ctx->r3 = ADD32(ctx->r3, 0X792C);
    // 0x8003D0C8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8003D0CC: bne         $v0, $at, L_8003D11C
    if (ctx->r2 != ctx->r1) {
        // 0x8003D0D0: sw          $v0, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r2;
            goto L_8003D11C;
    }
    // 0x8003D0D0: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x8003D0D4: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003D0D8: addiu       $a0, $a0, 0x7924
    ctx->r4 = ADD32(ctx->r4, 0X7924);
    // 0x8003D0DC: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8003D0E0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8003D0E4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003D0E8: bne         $v1, $t7, L_8003D100
    if (ctx->r3 != ctx->r15) {
        // 0x8003D0EC: addiu       $v0, $v0, 0x7920
        ctx->r2 = ADD32(ctx->r2, 0X7920);
            goto L_8003D100;
    }
    // 0x8003D0EC: addiu       $v0, $v0, 0x7920
    ctx->r2 = ADD32(ctx->r2, 0X7920);
    // 0x8003D0F0: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8003D0F4: addiu       $a1, $a1, 0x7928
    ctx->r5 = ADD32(ctx->r5, 0X7928);
    // 0x8003D0F8: b           L_8003D10C
    // 0x8003D0FC: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
        goto L_8003D10C;
    // 0x8003D0FC: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
L_8003D100:
    // 0x8003D100: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8003D104: addiu       $a1, $a1, 0x7928
    ctx->r5 = ADD32(ctx->r5, 0X7928);
    // 0x8003D108: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
L_8003D10C:
    // 0x8003D10C: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x8003D110: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x8003D114: b           L_8003D148
    // 0x8003D118: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
        goto L_8003D148;
    // 0x8003D118: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
L_8003D11C:
    // 0x8003D11C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003D120: addiu       $v0, $v0, 0x7920
    ctx->r2 = ADD32(ctx->r2, 0X7920);
    // 0x8003D124: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x8003D128: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003D12C: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8003D130: addiu       $a1, $a1, 0x7928
    ctx->r5 = ADD32(ctx->r5, 0X7928);
    // 0x8003D134: addiu       $a0, $a0, 0x7924
    ctx->r4 = ADD32(ctx->r4, 0X7924);
    // 0x8003D138: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8003D13C: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    // 0x8003D140: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x8003D144: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
L_8003D148:
    // 0x8003D148: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x8003D14C: bnel        $t0, $zero, L_8003D16C
    if (ctx->r8 != 0) {
        // 0x8003D150: sw          $zero, 0x0($a1)
        MEM_W(0X0, ctx->r5) = 0;
            goto L_8003D16C;
    }
    goto skip_0;
    // 0x8003D150: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    skip_0:
    // 0x8003D154: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8003D158: bnel        $v1, $t1, L_8003D16C
    if (ctx->r3 != ctx->r9) {
        // 0x8003D15C: sw          $zero, 0x0($a1)
        MEM_W(0X0, ctx->r5) = 0;
            goto L_8003D16C;
    }
    goto skip_1;
    // 0x8003D15C: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    skip_1:
    // 0x8003D160: b           L_8003D16C
    // 0x8003D164: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
        goto L_8003D16C;
    // 0x8003D164: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x8003D168: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
L_8003D16C:
    // 0x8003D16C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003D170: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003D174: jr          $ra
    // 0x8003D178: nop

    TRACE_RETURN()
    return;
    // 0x8003D178: nop

;}
RECOMP_FUNC void func_80020C78_21878(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80020C78: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x80020C7C: lui         $t7, 0x8007
    ctx->r15 = S32(0X8007 << 16);
    // 0x80020C80: addiu       $t7, $t7, -0x2FD0
    ctx->r15 = ADD32(ctx->r15, -0X2FD0);
    // 0x80020C84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80020C88: addiu       $t0, $t7, 0x24
    ctx->r8 = ADD32(ctx->r15, 0X24);
    // 0x80020C8C: addiu       $t6, $sp, 0x50
    ctx->r14 = ADD32(ctx->r29, 0X50);
L_80020C90:
    // 0x80020C90: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x80020C94: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x80020C98: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x80020C9C: sw          $at, -0xC($t6)
    MEM_W(-0XC, ctx->r14) = ctx->r1;
    // 0x80020CA0: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x80020CA4: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x80020CA8: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x80020CAC: bne         $t7, $t0, L_80020C90
    if (ctx->r15 != ctx->r8) {
        // 0x80020CB0: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_80020C90;
    }
    // 0x80020CB0: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x80020CB4: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x80020CB8: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x80020CBC: lui         $t2, 0x8007
    ctx->r10 = S32(0X8007 << 16);
    // 0x80020CC0: addiu       $t2, $t2, -0x2FA4
    ctx->r10 = ADD32(ctx->r10, -0X2FA4);
    // 0x80020CC4: addiu       $t5, $t2, 0x24
    ctx->r13 = ADD32(ctx->r10, 0X24);
    // 0x80020CC8: addiu       $t1, $sp, 0x24
    ctx->r9 = ADD32(ctx->r29, 0X24);
    // 0x80020CCC: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x80020CD0: sw          $t0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r8;
L_80020CD4:
    // 0x80020CD4: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x80020CD8: addiu       $t2, $t2, 0xC
    ctx->r10 = ADD32(ctx->r10, 0XC);
    // 0x80020CDC: addiu       $t1, $t1, 0xC
    ctx->r9 = ADD32(ctx->r9, 0XC);
    // 0x80020CE0: sw          $at, -0xC($t1)
    MEM_W(-0XC, ctx->r9) = ctx->r1;
    // 0x80020CE4: lw          $at, -0x8($t2)
    ctx->r1 = MEM_W(ctx->r10, -0X8);
    // 0x80020CE8: sw          $at, -0x8($t1)
    MEM_W(-0X8, ctx->r9) = ctx->r1;
    // 0x80020CEC: lw          $at, -0x4($t2)
    ctx->r1 = MEM_W(ctx->r10, -0X4);
    // 0x80020CF0: bne         $t2, $t5, L_80020CD4
    if (ctx->r10 != ctx->r13) {
        // 0x80020CF4: sw          $at, -0x4($t1)
        MEM_W(-0X4, ctx->r9) = ctx->r1;
            goto L_80020CD4;
    }
    // 0x80020CF4: sw          $at, -0x4($t1)
    MEM_W(-0X4, ctx->r9) = ctx->r1;
    // 0x80020CF8: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x80020CFC: lw          $t5, 0x4($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X4);
    // 0x80020D00: lui         $a2, 0x8016
    ctx->r6 = S32(0X8016 << 16);
    // 0x80020D04: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x80020D08: sw          $t5, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r13;
    // 0x80020D0C: lw          $a2, -0x3A38($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3A38);
    // 0x80020D10: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80020D14: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x80020D18: addu        $a1, $a2, $at
    ctx->r5 = ADD32(ctx->r6, ctx->r1);
    // 0x80020D1C: lhu         $t9, 0x3094($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0X3094);
    // 0x80020D20: lhu         $t8, 0x307C($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X307C);
    // 0x80020D24: mtc1        $zero, $f11
    ctx->f_odd[(11 - 1) * 2] = 0;
    // 0x80020D28: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80020D2C: or          $t0, $t9, $t8
    ctx->r8 = ctx->r25 | ctx->r24;
    // 0x80020D30: andi        $t7, $t0, 0x800
    ctx->r15 = ctx->r8 & 0X800;
    // 0x80020D34: beq         $t7, $zero, L_80020D64
    if (ctx->r15 == 0) {
        // 0x80020D38: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_80020D64;
    }
    // 0x80020D38: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80020D3C: lhu         $t6, 0x2DF2($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X2DF2);
    // 0x80020D40: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80020D44: addu        $at, $at, $a2
    ctx->r1 = ADD32(ctx->r1, ctx->r6);
    // 0x80020D48: addiu       $t4, $t6, -0x1
    ctx->r12 = ADD32(ctx->r14, -0X1);
    // 0x80020D4C: sh          $t4, -0x520E($at)
    MEM_H(-0X520E, ctx->r1) = ctx->r12;
    // 0x80020D50: lui         $a2, 0x8016
    ctx->r6 = S32(0X8016 << 16);
    // 0x80020D54: lw          $a2, -0x3A38($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3A38);
    // 0x80020D58: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80020D5C: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x80020D60: addu        $a1, $a2, $at
    ctx->r5 = ADD32(ctx->r6, ctx->r1);
L_80020D64:
    // 0x80020D64: lhu         $v0, 0x2DF2($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2DF2);
    // 0x80020D68: addiu       $a3, $zero, 0x50
    ctx->r7 = ADD32(0, 0X50);
    // 0x80020D6C: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80020D70: bgez        $v0, L_80020D8C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80020D74: cvt.d.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
            goto L_80020D8C;
    }
    // 0x80020D74: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x80020D78: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80020D7C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80020D80: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80020D84: nop

    // 0x80020D88: add.d       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = ctx->f6.d + ctx->f8.d;
L_80020D8C:
    // 0x80020D8C: c.lt.d      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.d < ctx->f10.d;
    // 0x80020D90: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80020D94: addu        $at, $at, $a2
    ctx->r1 = ADD32(ctx->r1, ctx->r6);
    // 0x80020D98: addiu       $t3, $zero, 0x63
    ctx->r11 = ADD32(0, 0X63);
    // 0x80020D9C: bc1fl       L_80020DC4
    if (!c1cs) {
        // 0x80020DA0: lhu         $t5, 0x3094($a1)
        ctx->r13 = MEM_HU(ctx->r5, 0X3094);
            goto L_80020DC4;
    }
    goto skip_0;
    // 0x80020DA0: lhu         $t5, 0x3094($a1)
    ctx->r13 = MEM_HU(ctx->r5, 0X3094);
    skip_0:
    // 0x80020DA4: sh          $t3, -0x520E($at)
    MEM_H(-0X520E, ctx->r1) = ctx->r11;
    // 0x80020DA8: lui         $a2, 0x8016
    ctx->r6 = S32(0X8016 << 16);
    // 0x80020DAC: lw          $a2, -0x3A38($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3A38);
    // 0x80020DB0: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80020DB4: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x80020DB8: addu        $a1, $a2, $at
    ctx->r5 = ADD32(ctx->r6, ctx->r1);
    // 0x80020DBC: lhu         $v0, 0x2DF2($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2DF2);
    // 0x80020DC0: lhu         $t5, 0x3094($a1)
    ctx->r13 = MEM_HU(ctx->r5, 0X3094);
L_80020DC4:
    // 0x80020DC4: lhu         $t2, 0x307C($a1)
    ctx->r10 = MEM_HU(ctx->r5, 0X307C);
    // 0x80020DC8: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x80020DCC: addiu       $t8, $v0, 0x1
    ctx->r24 = ADD32(ctx->r2, 0X1);
    // 0x80020DD0: or          $t1, $t5, $t2
    ctx->r9 = ctx->r13 | ctx->r10;
    // 0x80020DD4: andi        $t9, $t1, 0x400
    ctx->r25 = ctx->r9 & 0X400;
    // 0x80020DD8: beq         $t9, $zero, L_80020E00
    if (ctx->r25 == 0) {
        // 0x80020DDC: addiu       $a1, $a1, -0x4414
        ctx->r5 = ADD32(ctx->r5, -0X4414);
            goto L_80020E00;
    }
    // 0x80020DDC: addiu       $a1, $a1, -0x4414
    ctx->r5 = ADD32(ctx->r5, -0X4414);
    // 0x80020DE0: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80020DE4: addu        $at, $at, $a2
    ctx->r1 = ADD32(ctx->r1, ctx->r6);
    // 0x80020DE8: sh          $t8, -0x520E($at)
    MEM_H(-0X520E, ctx->r1) = ctx->r24;
    // 0x80020DEC: lui         $a2, 0x8016
    ctx->r6 = S32(0X8016 << 16);
    // 0x80020DF0: lw          $a2, -0x3A38($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3A38);
    // 0x80020DF4: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
    // 0x80020DF8: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80020DFC: lhu         $v0, -0x520E($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X520E);
L_80020E00:
    // 0x80020E00: slti        $at, $v0, 0x64
    ctx->r1 = SIGNED(ctx->r2) < 0X64 ? 1 : 0;
    // 0x80020E04: bne         $at, $zero, L_80020E14
    if (ctx->r1 != 0) {
        // 0x80020E08: lui         $at, 0x4
        ctx->r1 = S32(0X4 << 16);
            goto L_80020E14;
    }
    // 0x80020E08: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80020E0C: addu        $at, $at, $a2
    ctx->r1 = ADD32(ctx->r1, ctx->r6);
    // 0x80020E10: sh          $zero, -0x520E($at)
    MEM_H(-0X520E, ctx->r1) = 0;
L_80020E14:
    // 0x80020E14: jal         0x800042AC
    // 0x80020E18: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    func_800042AC_4EAC(rdram, ctx);
        goto after_0;
    // 0x80020E18: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    after_0:
    // 0x80020E1C: lui         $a2, 0x8016
    ctx->r6 = S32(0X8016 << 16);
    // 0x80020E20: lw          $a2, -0x3A38($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3A38);
    // 0x80020E24: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80020E28: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x80020E2C: addu        $a1, $a2, $at
    ctx->r5 = ADD32(ctx->r6, ctx->r1);
    // 0x80020E30: lhu         $v1, 0x2DF2($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X2DF2);
    // 0x80020E34: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80020E38: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
L_80020E3C:
    // 0x80020E3C: slti        $at, $v1, 0xA
    ctx->r1 = SIGNED(ctx->r3) < 0XA ? 1 : 0;
    // 0x80020E40: beq         $at, $zero, L_80020E9C
    if (ctx->r1 == 0) {
        // 0x80020E44: sll         $t0, $v1, 2
        ctx->r8 = S32(ctx->r3 << 2);
            goto L_80020E9C;
    }
    // 0x80020E44: sll         $t0, $v1, 2
    ctx->r8 = S32(ctx->r3 << 2);
    // 0x80020E48: addu        $a1, $sp, $t0
    ctx->r5 = ADD32(ctx->r29, ctx->r8);
    // 0x80020E4C: lw          $a1, 0x50($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X50);
    // 0x80020E50: sw          $v0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r2;
    // 0x80020E54: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x80020E58: addiu       $a2, $zero, 0xA0
    ctx->r6 = ADD32(0, 0XA0);
    // 0x80020E5C: jal         0x800042AC
    // 0x80020E60: addiu       $a3, $zero, 0x50
    ctx->r7 = ADD32(0, 0X50);
    func_800042AC_4EAC(rdram, ctx);
        goto after_1;
    // 0x80020E60: addiu       $a3, $zero, 0x50
    ctx->r7 = ADD32(0, 0X50);
    after_1:
    // 0x80020E64: lw          $v0, 0x84($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X84);
    // 0x80020E68: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80020E6C: addiu       $a2, $zero, 0x95
    ctx->r6 = ADD32(0, 0X95);
    // 0x80020E70: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x80020E74: addu        $a1, $sp, $t7
    ctx->r5 = ADD32(ctx->r29, ctx->r15);
    // 0x80020E78: lw          $a1, 0x24($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X24);
    // 0x80020E7C: jal         0x800042AC
    // 0x80020E80: addiu       $a3, $zero, 0x50
    ctx->r7 = ADD32(0, 0X50);
    func_800042AC_4EAC(rdram, ctx);
        goto after_2;
    // 0x80020E80: addiu       $a3, $zero, 0x50
    ctx->r7 = ADD32(0, 0X50);
    after_2:
    // 0x80020E84: lui         $a2, 0x8016
    ctx->r6 = S32(0X8016 << 16);
    // 0x80020E88: lw          $a2, -0x3A38($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3A38);
    // 0x80020E8C: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80020E90: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x80020E94: b           L_80020EA8
    // 0x80020E98: addu        $a1, $a2, $at
    ctx->r5 = ADD32(ctx->r6, ctx->r1);
        goto L_80020EA8;
    // 0x80020E98: addu        $a1, $a2, $at
    ctx->r5 = ADD32(ctx->r6, ctx->r1);
L_80020E9C:
    // 0x80020E9C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80020EA0: bne         $v0, $a0, L_80020E3C
    if (ctx->r2 != ctx->r4) {
        // 0x80020EA4: addiu       $v1, $v1, -0xA
        ctx->r3 = ADD32(ctx->r3, -0XA);
            goto L_80020E3C;
    }
    // 0x80020EA4: addiu       $v1, $v1, -0xA
    ctx->r3 = ADD32(ctx->r3, -0XA);
L_80020EA8:
    // 0x80020EA8: lhu         $t6, 0x3094($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X3094);
    // 0x80020EAC: lhu         $t4, 0x307C($a1)
    ctx->r12 = MEM_HU(ctx->r5, 0X307C);
    // 0x80020EB0: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80020EB4: addu        $at, $at, $a2
    ctx->r1 = ADD32(ctx->r1, ctx->r6);
    // 0x80020EB8: or          $v0, $t6, $t4
    ctx->r2 = ctx->r14 | ctx->r12;
    // 0x80020EBC: andi        $t3, $v0, 0x4000
    ctx->r11 = ctx->r2 & 0X4000;
    // 0x80020EC0: beq         $t3, $zero, L_80020EEC
    if (ctx->r11 == 0) {
        // 0x80020EC4: addiu       $t5, $zero, 0x2
        ctx->r13 = ADD32(0, 0X2);
            goto L_80020EEC;
    }
    // 0x80020EC4: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x80020EC8: sb          $t5, -0x522A($at)
    MEM_B(-0X522A, ctx->r1) = ctx->r13;
    // 0x80020ECC: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x80020ED0: lw          $a1, -0x3A38($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3A38);
    // 0x80020ED4: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80020ED8: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x80020EDC: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x80020EE0: lhu         $t2, 0x3094($a1)
    ctx->r10 = MEM_HU(ctx->r5, 0X3094);
    // 0x80020EE4: lhu         $t1, 0x307C($a1)
    ctx->r9 = MEM_HU(ctx->r5, 0X307C);
    // 0x80020EE8: or          $v0, $t2, $t1
    ctx->r2 = ctx->r10 | ctx->r9;
L_80020EEC:
    // 0x80020EEC: andi        $t9, $v0, 0x9000
    ctx->r25 = ctx->r2 & 0X9000;
    // 0x80020EF0: beql        $t9, $zero, L_80020F04
    if (ctx->r25 == 0) {
        // 0x80020EF4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80020F04;
    }
    goto skip_1;
    // 0x80020EF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x80020EF8: jal         0x80021444
    // 0x80020EFC: nop

    func_80021444_22044(rdram, ctx);
        goto after_3;
    // 0x80020EFC: nop

    after_3:
    // 0x80020F00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80020F04:
    // 0x80020F04: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    // 0x80020F08: jr          $ra
    // 0x80020F0C: nop

    TRACE_RETURN()
    return;
    // 0x80020F0C: nop

;}
RECOMP_FUNC void func_80038D14_39914(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80038D14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80038D18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80038D1C: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    // 0x80038D20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80038D24: jal         0x80038C30
    // 0x80038D28: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80038C30_39830(rdram, ctx);
        goto after_0;
    // 0x80038D28: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80038D2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80038D30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80038D34: jr          $ra
    // 0x80038D38: nop

    TRACE_RETURN()
    return;
    // 0x80038D38: nop

;}
RECOMP_FUNC void func_80001D68_2968(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80001D68: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x80001D6C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80001D70: lui         $v0, 0x8005
    ctx->r2 = S32(0X8005 << 16);
    // 0x80001D74: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x80001D78: lw          $v0, 0x73D4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X73D4);
    // 0x80001D7C: lui         $at, 0x7FFF
    ctx->r1 = S32(0X7FFF << 16);
    // 0x80001D80: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80001D84: and         $t8, $v0, $at
    ctx->r24 = ctx->r2 & ctx->r1;
    // 0x80001D88: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x80001D8C: jr          $ra
    // 0x80001D90: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    TRACE_RETURN()
    return;
    // 0x80001D90: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_8000D33C_DF3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000D33C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8000D340: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8000D344: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8000D348: lw          $v0, 0x7C48($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7C48);
    // 0x8000D34C: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x8000D350: subu        $t7, $t7, $a1
    ctx->r15 = SUB32(ctx->r15, ctx->r5);
    // 0x8000D354: beq         $v0, $zero, L_8000D3B0
    if (ctx->r2 == 0) {
        // 0x8000D358: sll         $t7, $t7, 4
        ctx->r15 = S32(ctx->r15 << 4);
            goto L_8000D3B0;
    }
    // 0x8000D358: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8000D35C: addu        $v1, $v0, $t7
    ctx->r3 = ADD32(ctx->r2, ctx->r15);
    // 0x8000D360: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8000D364: addiu       $t8, $zero, 0x0
    ctx->r24 = ADD32(0, 0X0);
    // 0x8000D368: addiu       $t9, $zero, 0x0
    ctx->r25 = ADD32(0, 0X0);
    // 0x8000D36C: addiu       $v1, $v1, 0x198
    ctx->r3 = ADD32(ctx->r3, 0X198);
    // 0x8000D370: sh          $zero, 0x4($v1)
    MEM_H(0X4, ctx->r3) = 0;
    // 0x8000D374: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x8000D378: sw          $t9, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r25;
    // 0x8000D37C: sw          $t8, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r24;
    // 0x8000D380: sh          $zero, 0x6($v1)
    MEM_H(0X6, ctx->r3) = 0;
    // 0x8000D384: sh          $zero, 0x8($v1)
    MEM_H(0X8, ctx->r3) = 0;
    // 0x8000D388: sh          $zero, 0xA($v1)
    MEM_H(0XA, ctx->r3) = 0;
    // 0x8000D38C: sh          $zero, 0xC($v1)
    MEM_H(0XC, ctx->r3) = 0;
    // 0x8000D390: sh          $zero, 0xE($v1)
    MEM_H(0XE, ctx->r3) = 0;
    // 0x8000D394: sh          $zero, 0x10($v1)
    MEM_H(0X10, ctx->r3) = 0;
    // 0x8000D398: sh          $zero, 0x12($v1)
    MEM_H(0X12, ctx->r3) = 0;
    // 0x8000D39C: sh          $zero, 0x20($v1)
    MEM_H(0X20, ctx->r3) = 0;
    // 0x8000D3A0: sh          $zero, 0x22($v1)
    MEM_H(0X22, ctx->r3) = 0;
    // 0x8000D3A4: swc1        $f0, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f0.u32l;
    // 0x8000D3A8: swc1        $f0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->f0.u32l;
    // 0x8000D3AC: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
L_8000D3B0:
    // 0x8000D3B0: jr          $ra
    // 0x8000D3B4: nop

    TRACE_RETURN()
    return;
    // 0x8000D3B4: nop

;}
RECOMP_FUNC void func_80034C4C_3584C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80034C4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80034C50: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80034C54: andi        $a3, $a1, 0xFFFF
    ctx->r7 = ctx->r5 & 0XFFFF;
    // 0x80034C58: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80034C5C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80034C60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80034C64: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80034C68: lw          $a0, -0x254C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X254C);
    // 0x80034C6C: jal         0x80034CBC
    // 0x80034C70: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80034CBC_358BC(rdram, ctx);
        goto after_0;
    // 0x80034C70: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x80034C74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80034C78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80034C7C: jr          $ra
    // 0x80034C80: nop

    TRACE_RETURN()
    return;
    // 0x80034C80: nop

;}
RECOMP_FUNC void func_8001CF5C_1DB5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001CF5C: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x8001CF60: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8001CF64: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8001CF68: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8001CF6C: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x8001CF70: sw          $a3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r7;
    // 0x8001CF74: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8001CF78: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8001CF7C: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x8001CF80: swc1        $f4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f4.u32l;
    // 0x8001CF84: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x8001CF88: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8001CF8C: swc1        $f6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f6.u32l;
    // 0x8001CF90: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x8001CF94: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x8001CF98: jal         0x8001D898
    // 0x8001CF9C: swc1        $f8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f8.u32l;
    func_8001D898_1E498(rdram, ctx);
        goto after_0;
    // 0x8001CF9C: swc1        $f8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x8001CFA0: lwc1        $f14, 0x58($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8001CFA4: lwc1        $f16, 0x50($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8001CFA8: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8001CFAC: mul.s       $f10, $f14, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x8001CFB0: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001CFB4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8001CFB8: mul.s       $f4, $f16, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x8001CFBC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8001CFC0: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x8001CFC4: add.s       $f0, $f10, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8001CFC8: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x8001CFCC: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x8001CFD0: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    // 0x8001CFD4: bc1fl       L_8001CFE8
    if (!c1cs) {
        // 0x8001CFD8: mov.s       $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
            goto L_8001CFE8;
    }
    goto skip_0;
    // 0x8001CFD8: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    skip_0:
    // 0x8001CFDC: b           L_8001CFE8
    // 0x8001CFE0: neg.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
        goto L_8001CFE8;
    // 0x8001CFE0: neg.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
    // 0x8001CFE4: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_8001CFE8:
    // 0x8001CFE8: ldc1        $f18, -0x4708($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0X4708);
    // 0x8001CFEC: cvt.d.s     $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f6.d = CVT_D_S(ctx->f12.fl);
    // 0x8001CFF0: c.lt.d      $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f6.d < ctx->f18.d;
    // 0x8001CFF4: nop

    // 0x8001CFF8: bc1f        L_8001D010
    if (!c1cs) {
        // 0x8001CFFC: nop
    
            goto L_8001D010;
    }
    // 0x8001CFFC: nop

    // 0x8001D000: swc1        $f20, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f20.u32l;
    // 0x8001D004: swc1        $f20, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f20.u32l;
    // 0x8001D008: b           L_8001D134
    // 0x8001D00C: swc1        $f20, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f20.u32l;
        goto L_8001D134;
    // 0x8001D00C: swc1        $f20, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f20.u32l;
L_8001D010:
    // 0x8001D010: jal         0x8001D898
    // 0x8001D014: lw          $a2, 0x84($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X84);
    func_8001D898_1E498(rdram, ctx);
        goto after_1;
    // 0x8001D014: lw          $a2, 0x84($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X84);
    after_1:
    // 0x8001D018: lwc1        $f14, 0x58($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8001D01C: lwc1        $f16, 0x50($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8001D020: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001D024: mul.s       $f8, $f14, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x8001D028: ldc1        $f18, -0x4700($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0X4700);
    // 0x8001D02C: swc1        $f20, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f20.u32l;
    // 0x8001D030: mul.s       $f10, $f16, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x8001D034: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8001D038: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8001D03C: add.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8001D040: lwc1        $f8, 0x88($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X88);
    // 0x8001D044: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x8001D048: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x8001D04C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x8001D050: bc1fl       L_8001D064
    if (!c1cs) {
        // 0x8001D054: mov.s       $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
            goto L_8001D064;
    }
    goto skip_1;
    // 0x8001D054: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    skip_1:
    // 0x8001D058: b           L_8001D064
    // 0x8001D05C: neg.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
        goto L_8001D064;
    // 0x8001D05C: neg.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
    // 0x8001D060: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_8001D064:
    // 0x8001D064: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x8001D068: c.lt.d      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.d < ctx->f18.d;
    // 0x8001D06C: nop

    // 0x8001D070: bc1f        L_8001D088
    if (!c1cs) {
        // 0x8001D074: nop
    
            goto L_8001D088;
    }
    // 0x8001D074: nop

    // 0x8001D078: swc1        $f20, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f20.u32l;
    // 0x8001D07C: swc1        $f20, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f20.u32l;
    // 0x8001D080: b           L_8001D134
    // 0x8001D084: swc1        $f20, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f20.u32l;
        goto L_8001D134;
    // 0x8001D084: swc1        $f20, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f20.u32l;
L_8001D088:
    // 0x8001D088: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8001D08C: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x8001D090: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8001D094: lw          $a2, 0x84($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X84);
    // 0x8001D098: div.s       $f2, $f10, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = DIV_S(ctx->f10.fl, ctx->f2.fl);
    // 0x8001D09C: mul.s       $f16, $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x8001D0A0: nop

    // 0x8001D0A4: mul.s       $f14, $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x8001D0A8: swc1        $f16, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f16.u32l;
    // 0x8001D0AC: jal         0x8001D718
    // 0x8001D0B0: swc1        $f14, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f14.u32l;
    func_8001D718_1E318(rdram, ctx);
        goto after_2;
    // 0x8001D0B0: swc1        $f14, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f14.u32l;
    after_2:
    // 0x8001D0B4: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x8001D0B8: addiu       $s1, $sp, 0x6C
    ctx->r17 = ADD32(ctx->r29, 0X6C);
    // 0x8001D0BC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8001D0C0: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    // 0x8001D0C4: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x8001D0C8: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    // 0x8001D0CC: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x8001D0D0: jal         0x8001D394
    // 0x8001D0D4: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    func_8001D394_1DF94(rdram, ctx);
        goto after_3;
    // 0x8001D0D4: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x8001D0D8: jal         0x8001D394
    // 0x8001D0DC: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    func_8001D394_1DF94(rdram, ctx);
        goto after_4;
    // 0x8001D0DC: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    after_4:
    // 0x8001D0E0: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x8001D0E4: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x8001D0E8: jal         0x8001D898
    // 0x8001D0EC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_8001D898_1E498(rdram, ctx);
        goto after_5;
    // 0x8001D0EC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_5:
    // 0x8001D0F0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8001D0F4: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8001D0F8: bgez        $zero, L_8001D110
    if (SIGNED(0) >= 0) {
        // 0x8001D0FC: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8001D110;
    }
    // 0x8001D0FC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8001D100: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8001D104: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8001D108: nop

    // 0x8001D10C: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_8001D110:
    // 0x8001D110: c.lt.s      $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.fl < ctx->f6.fl;
    // 0x8001D114: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8001D118: bc1f        L_8001D134
    if (!c1cs) {
        // 0x8001D11C: nop
    
            goto L_8001D134;
    }
    // 0x8001D11C: nop

    // 0x8001D120: swc1        $f20, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f20.u32l;
    // 0x8001D124: swc1        $f20, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f20.u32l;
    // 0x8001D128: swc1        $f20, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f20.u32l;
    // 0x8001D12C: b           L_8001D134
    // 0x8001D130: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8001D134;
    // 0x8001D130: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8001D134:
    // 0x8001D134: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8001D138: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x8001D13C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8001D140: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8001D144: jr          $ra
    // 0x8001D148: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    TRACE_RETURN()
    return;
    // 0x8001D148: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_80027364_27F64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80027364: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x80027368: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x8002736C: lwc1        $f10, 0x4($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X4);
    // 0x80027370: lwc1        $f16, 0x8($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80027374: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80027378: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x8002737C: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80027380: sub.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f18.fl;
    // 0x80027384: swc1        $f4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f4.u32l;
    // 0x80027388: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8002738C: lwc1        $f10, 0x8($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80027390: lwc1        $f18, 0x0($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80027394: lwc1        $f8, 0x8($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X8);
    // 0x80027398: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8002739C: nop

    // 0x800273A0: mul.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x800273A4: sub.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x800273A8: swc1        $f6, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f6.u32l;
    // 0x800273AC: lwc1        $f8, 0x0($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X0);
    // 0x800273B0: lwc1        $f10, 0x4($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X4);
    // 0x800273B4: lwc1        $f4, 0x4($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X4);
    // 0x800273B8: lwc1        $f16, 0x0($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X0);
    // 0x800273BC: mul.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x800273C0: nop

    // 0x800273C4: mul.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x800273C8: sub.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x800273CC: jr          $ra
    // 0x800273D0: swc1        $f10, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f10.u32l;
    TRACE_RETURN()
    return;
    // 0x800273D0: swc1        $f10, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f10.u32l;
;}
RECOMP_FUNC void func_80011968_12568(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80011968: beq         $a0, $zero, L_80011984
    if (ctx->r4 == 0) {
        // 0x8001196C: nop
    
            goto L_80011984;
    }
    // 0x8001196C: nop

    // 0x80011970: bne         $a1, $zero, L_80011980
    if (ctx->r5 != 0) {
        // 0x80011974: addiu       $t6, $a1, 0x5C
        ctx->r14 = ADD32(ctx->r5, 0X5C);
            goto L_80011980;
    }
    // 0x80011974: addiu       $t6, $a1, 0x5C
    ctx->r14 = ADD32(ctx->r5, 0X5C);
    // 0x80011978: jr          $ra
    // 0x8001197C: sw          $zero, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = 0;
    TRACE_RETURN()
    return;
    // 0x8001197C: sw          $zero, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = 0;
L_80011980:
    // 0x80011980: sw          $t6, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->r14;
L_80011984:
    // 0x80011984: jr          $ra
    // 0x80011988: nop

    TRACE_RETURN()
    return;
    // 0x80011988: nop

;}
RECOMP_FUNC void func_800084F4_90F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800084F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800084F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800084FC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80008500: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80008504: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80008508: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8000850C: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x80008510: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x80008514: andi        $t8, $a2, 0xFF
    ctx->r24 = ctx->r6 & 0XFF;
    // 0x80008518: andi        $t9, $a3, 0xFF
    ctx->r25 = ctx->r7 & 0XFF;
    // 0x8000851C: addiu       $t0, $zero, 0xF0
    ctx->r8 = ADD32(0, 0XF0);
    // 0x80008520: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
    // 0x80008524: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x80008528: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x8000852C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80008530: jal         0x80008330
    // 0x80008534: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_80008330_8F30(rdram, ctx);
        goto after_0;
    // 0x80008534: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_0:
    // 0x80008538: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8000853C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80008540: jr          $ra
    // 0x80008544: nop

    TRACE_RETURN()
    return;
    // 0x80008544: nop

;}
RECOMP_FUNC void func_8000A394_AF94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000A394: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8000A398: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8000A39C: addiu       $t6, $zero, 0x83
    ctx->r14 = ADD32(0, 0X83);
    // 0x8000A3A0: addiu       $t7, $zero, 0x140
    ctx->r15 = ADD32(0, 0X140);
    // 0x8000A3A4: addiu       $t8, $zero, 0xF0
    ctx->r24 = ADD32(0, 0XF0);
    // 0x8000A3A8: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x8000A3AC: addiu       $t0, $zero, 0x140
    ctx->r8 = ADD32(0, 0X140);
    // 0x8000A3B0: addiu       $t1, $zero, 0xF0
    ctx->r9 = ADD32(0, 0XF0);
    // 0x8000A3B4: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x8000A3B8: addiu       $t3, $zero, 0x7
    ctx->r11 = ADD32(0, 0X7);
    // 0x8000A3BC: sb          $t6, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r14;
    // 0x8000A3C0: sb          $zero, 0x31($a0)
    MEM_B(0X31, ctx->r4) = 0;
    // 0x8000A3C4: sb          $zero, 0x5($a0)
    MEM_B(0X5, ctx->r4) = 0;
    // 0x8000A3C8: sh          $zero, 0x6($a0)
    MEM_H(0X6, ctx->r4) = 0;
    // 0x8000A3CC: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    // 0x8000A3D0: sh          $v0, 0x3C($a0)
    MEM_H(0X3C, ctx->r4) = ctx->r2;
    // 0x8000A3D4: sh          $v0, 0x3E($a0)
    MEM_H(0X3E, ctx->r4) = ctx->r2;
    // 0x8000A3D8: sh          $v0, 0x40($a0)
    MEM_H(0X40, ctx->r4) = ctx->r2;
    // 0x8000A3DC: sh          $v0, 0x42($a0)
    MEM_H(0X42, ctx->r4) = ctx->r2;
    // 0x8000A3E0: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x8000A3E4: sw          $zero, 0x10($a0)
    MEM_W(0X10, ctx->r4) = 0;
    // 0x8000A3E8: sw          $zero, 0x14($a0)
    MEM_W(0X14, ctx->r4) = 0;
    // 0x8000A3EC: sw          $zero, 0x18($a0)
    MEM_W(0X18, ctx->r4) = 0;
    // 0x8000A3F0: sw          $zero, 0x28($a0)
    MEM_W(0X28, ctx->r4) = 0;
    // 0x8000A3F4: sh          $t7, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r15;
    // 0x8000A3F8: sh          $t8, 0x1E($a0)
    MEM_H(0X1E, ctx->r4) = ctx->r24;
    // 0x8000A3FC: sh          $v1, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r3;
    // 0x8000A400: sh          $v1, 0x22($a0)
    MEM_H(0X22, ctx->r4) = ctx->r3;
    // 0x8000A404: sb          $t9, 0x30($a0)
    MEM_B(0X30, ctx->r4) = ctx->r25;
    // 0x8000A408: sh          $zero, 0x32($a0)
    MEM_H(0X32, ctx->r4) = 0;
    // 0x8000A40C: sh          $zero, 0x34($a0)
    MEM_H(0X34, ctx->r4) = 0;
    // 0x8000A410: sh          $zero, 0x36($a0)
    MEM_H(0X36, ctx->r4) = 0;
    // 0x8000A414: sh          $t0, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r8;
    // 0x8000A418: sh          $t1, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r9;
    // 0x8000A41C: sh          $zero, 0x44($a0)
    MEM_H(0X44, ctx->r4) = 0;
    // 0x8000A420: sh          $zero, 0x46($a0)
    MEM_H(0X46, ctx->r4) = 0;
    // 0x8000A424: sh          $t2, 0x48($a0)
    MEM_H(0X48, ctx->r4) = ctx->r10;
    // 0x8000A428: jr          $ra
    // 0x8000A42C: sh          $t3, 0x4A($a0)
    MEM_H(0X4A, ctx->r4) = ctx->r11;
    TRACE_RETURN()
    return;
    // 0x8000A42C: sh          $t3, 0x4A($a0)
    MEM_H(0X4A, ctx->r4) = ctx->r11;
;}
RECOMP_FUNC void func_80034DD8_359D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80034DD8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80034DDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80034DE0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80034DE4: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x80034DE8: jal         0x80034B24
    // 0x80034DEC: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    func_80034B24_35724(rdram, ctx);
        goto after_0;
    // 0x80034DEC: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    after_0:
    // 0x80034DF0: jal         0x80034D24
    // 0x80034DF4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80034D24_35924(rdram, ctx);
        goto after_1;
    // 0x80034DF4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80034DF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80034DFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80034E00: jr          $ra
    // 0x80034E04: nop

    TRACE_RETURN()
    return;
    // 0x80034E04: nop

;}
RECOMP_FUNC void func_8000B2A0_BEA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000B2A0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x8000B2A4: addiu       $v0, $v0, -0x3340
    ctx->r2 = ADD32(ctx->r2, -0X3340);
    // 0x8000B2A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000B2AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000B2B0: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8000B2B4: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x8000B2B8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8000B2BC: addiu       $a0, $a0, -0x3A38
    ctx->r4 = ADD32(ctx->r4, -0X3A38);
    // 0x8000B2C0: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x8000B2C4: sh          $t6, 0x2DB7($at)
    MEM_H(0X2DB7, ctx->r1) = ctx->r14;
    // 0x8000B2C8: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8000B2CC: addiu       $v1, $v1, -0x39F8
    ctx->r3 = ADD32(ctx->r3, -0X39F8);
    // 0x8000B2D0: lhu         $t7, 0x204($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X204);
    // 0x8000B2D4: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8000B2D8: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8000B2DC: sh          $t7, -0x5020($at)
    MEM_H(-0X5020, ctx->r1) = ctx->r15;
    // 0x8000B2E0: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8000B2E4: lui         $t0, 0x4
    ctx->r8 = S32(0X4 << 16);
    // 0x8000B2E8: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x8000B2EC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8000B2F0: lhu         $t0, -0x5020($t0)
    ctx->r8 = MEM_HU(ctx->r8, -0X5020);
    // 0x8000B2F4: sh          $t0, 0x2DF3($at)
    MEM_H(0X2DF3, ctx->r1) = ctx->r8;
    // 0x8000B2F8: lh          $t1, 0x208($v1)
    ctx->r9 = MEM_H(ctx->r3, 0X208);
    // 0x8000B2FC: sh          $t1, 0x2FE3($at)
    MEM_H(0X2FE3, ctx->r1) = ctx->r9;
    // 0x8000B300: lh          $t2, 0x20A($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X20A);
    // 0x8000B304: sh          $t2, 0x2FE5($at)
    MEM_H(0X2FE5, ctx->r1) = ctx->r10;
    // 0x8000B308: lh          $t3, 0x20C($v1)
    ctx->r11 = MEM_H(ctx->r3, 0X20C);
    // 0x8000B30C: sh          $t3, 0x2FE7($at)
    MEM_H(0X2FE7, ctx->r1) = ctx->r11;
    // 0x8000B310: lh          $t4, 0x20E($v1)
    ctx->r12 = MEM_H(ctx->r3, 0X20E);
    // 0x8000B314: sh          $t4, 0x2FE9($at)
    MEM_H(0X2FE9, ctx->r1) = ctx->r12;
    // 0x8000B318: lhu         $t5, 0x210($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X210);
    // 0x8000B31C: jal         0x8000B3E4
    // 0x8000B320: sh          $t5, 0x2FEB($at)
    MEM_H(0X2FEB, ctx->r1) = ctx->r13;
    func_8000B3E4_BFE4(rdram, ctx);
        goto after_0;
    // 0x8000B320: sh          $t5, 0x2FEB($at)
    MEM_H(0X2FEB, ctx->r1) = ctx->r13;
    after_0:
    // 0x8000B324: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x8000B328: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x8000B32C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8000B330: addiu       $t6, $zero, 0x14
    ctx->r14 = ADD32(0, 0X14);
    // 0x8000B334: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8000B338: jal         0x8000B4A0
    // 0x8000B33C: sh          $t6, -0x51DC($at)
    MEM_H(-0X51DC, ctx->r1) = ctx->r14;
    func_8000B4A0_C0A0(rdram, ctx);
        goto after_1;
    // 0x8000B33C: sh          $t6, -0x51DC($at)
    MEM_H(-0X51DC, ctx->r1) = ctx->r14;
    after_1:
    // 0x8000B340: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8000B344: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8000B348: sb          $t8, -0x3A9E($at)
    MEM_B(-0X3A9E, ctx->r1) = ctx->r24;
    // 0x8000B34C: jal         0x80037B10
    // 0x8000B350: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80037B10_38710(rdram, ctx);
        goto after_2;
    // 0x8000B350: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x8000B354: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000B358: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000B35C: jr          $ra
    // 0x8000B360: nop

    TRACE_RETURN()
    return;
    // 0x8000B360: nop

;}
RECOMP_FUNC void func_800033EC_3FEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800033EC: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x800033F0: addiu       $v1, $v1, -0x3A38
    ctx->r3 = ADD32(ctx->r3, -0X3A38);
    // 0x800033F4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800033F8: lui         $t6, 0x4
    ctx->r14 = S32(0X4 << 16);
    // 0x800033FC: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80003400: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x80003404: lbu         $t6, -0x5220($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X5220);
    // 0x80003408: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8000340C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80003410: sb          $t7, -0x5220($at)
    MEM_B(-0X5220, ctx->r1) = ctx->r15;
    // 0x80003414: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x80003418: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8000341C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80003420: jr          $ra
    // 0x80003424: sb          $zero, -0x521F($at)
    MEM_B(-0X521F, ctx->r1) = 0;
    TRACE_RETURN()
    return;
    // 0x80003424: sb          $zero, -0x521F($at)
    MEM_B(-0X521F, ctx->r1) = 0;
;}
RECOMP_FUNC void _doModFunc(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800518E0: mtc1        $a1, $f6
    ctx->f6.u32l = ctx->r5;
    // 0x800518E4: lwc1        $f4, 0x10($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X10);
    // 0x800518E8: lwc1        $f16, 0x14($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X14);
    // 0x800518EC: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800518F0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800518F4: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x800518F8: lui         $at, 0x4010
    ctx->r1 = S32(0X4010 << 16);
    // 0x800518FC: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x80051900: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80051904: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x80051908: swc1        $f18, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f18.u32l;
    // 0x8005190C: lwc1        $f6, 0x14($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X14);
    // 0x80051910: cvt.d.s     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f0.d = CVT_D_S(ctx->f6.fl);
    // 0x80051914: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80051918: c.lt.d      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.d < ctx->f0.d;
    // 0x8005191C: nop

    // 0x80051920: bc1fl       L_80051948
    if (!c1cs) {
        // 0x80051924: cvt.s.d     $f18, $f0
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f18.fl = CVT_S_D(ctx->f0.d);
            goto L_80051948;
    }
    goto skip_0;
    // 0x80051924: cvt.s.d     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f18.fl = CVT_S_D(ctx->f0.d);
    skip_0:
    // 0x80051928: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x8005192C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80051930: nop

    // 0x80051934: sub.d       $f16, $f0, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = ctx->f0.d - ctx->f8.d;
    // 0x80051938: cvt.s.d     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f10.fl = CVT_S_D(ctx->f16.d);
    // 0x8005193C: b           L_8005194C
    // 0x80051940: swc1        $f10, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f10.u32l;
        goto L_8005194C;
    // 0x80051940: swc1        $f10, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f10.u32l;
    // 0x80051944: cvt.s.d     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f18.fl = CVT_S_D(ctx->f0.d);
L_80051948:
    // 0x80051948: swc1        $f18, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f18.u32l;
L_8005194C:
    // 0x8005194C: lwc1        $f2, 0x14($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X14);
    // 0x80051950: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80051954: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80051958: c.lt.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl < ctx->f6.fl;
    // 0x8005195C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80051960: bc1fl       L_80051970
    if (!c1cs) {
        // 0x80051964: cvt.d.s     $f4, $f2
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
            goto L_80051970;
    }
    goto skip_1;
    // 0x80051964: cvt.d.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
    skip_1:
    // 0x80051968: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x8005196C: cvt.d.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
L_80051970:
    // 0x80051970: lwc1        $f10, 0x1C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x80051974: sub.d       $f16, $f4, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = ctx->f4.d - ctx->f8.d;
    // 0x80051978: cvt.s.d     $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f2.fl = CVT_S_D(ctx->f16.d);
    // 0x8005197C: mul.s       $f0, $f10, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x80051980: jr          $ra
    // 0x80051984: nop

    TRACE_RETURN()
    return;
    // 0x80051984: nop

;}
RECOMP_FUNC void func_8001CB40_1D740(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001CB40: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8001CB44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001CB48: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8001CB4C: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x8001CB50: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8001CB54: lwc1        $f6, 0xC($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XC);
    // 0x8001CB58: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8001CB5C: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8001CB60: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8001CB64: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8001CB68: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    // 0x8001CB6C: lwc1        $f10, 0x4($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8001CB70: lwc1        $f16, 0x10($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X10);
    // 0x8001CB74: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8001CB78: swc1        $f18, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f18.u32l;
    // 0x8001CB7C: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8001CB80: lwc1        $f6, 0x14($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X14);
    // 0x8001CB84: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8001CB88: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8001CB8C: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    // 0x8001CB90: lwc1        $f10, 0x0($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8001CB94: sub.s       $f16, $f12, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f12.fl - ctx->f10.fl;
    // 0x8001CB98: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    // 0x8001CB9C: lwc1        $f18, 0x4($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8001CBA0: sub.s       $f4, $f14, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f14.fl - ctx->f18.fl;
    // 0x8001CBA4: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x8001CBA8: lwc1        $f8, 0x8($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8001CBAC: sw          $a3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r7;
    // 0x8001CBB0: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x8001CBB4: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8001CBB8: jal         0x8001D394
    // 0x8001CBBC: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    func_8001D394_1DF94(rdram, ctx);
        goto after_0;
    // 0x8001CBBC: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x8001CBC0: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x8001CBC4: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x8001CBC8: jal         0x8001D460
    // 0x8001CBCC: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    func_8001D460_1E060(rdram, ctx);
        goto after_1;
    // 0x8001CBCC: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    after_1:
    // 0x8001CBD0: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x8001CBD4: jal         0x80003DC0
    // 0x8001CBD8: lhu         $a0, 0x1A($a3)
    ctx->r4 = MEM_HU(ctx->r7, 0X1A);
    func_80003DC0_49C0(rdram, ctx);
        goto after_2;
    // 0x8001CBD8: lhu         $a0, 0x1A($a3)
    ctx->r4 = MEM_HU(ctx->r7, 0X1A);
    after_2:
    // 0x8001CBDC: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8001CBE0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8001CBE4: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8001CBE8: neg.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = -ctx->f16.fl;
    // 0x8001CBEC: mul.s       $f2, $f0, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x8001CBF0: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x8001CBF4: nop

    // 0x8001CBF8: bc1fl       L_8001CC0C
    if (!c1cs) {
        // 0x8001CBFC: div.s       $f8, $f6, $f2
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f2.fl);
            goto L_8001CC0C;
    }
    goto skip_0;
    // 0x8001CBFC: div.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f2.fl);
    skip_0:
    // 0x8001CC00: b           L_8001CC28
    // 0x8001CC04: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
        goto L_8001CC28;
    // 0x8001CC04: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x8001CC08: div.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f2.fl);
L_8001CC0C:
    // 0x8001CC0C: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x8001CC10: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x8001CC14: swc1        $f8, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f8.u32l;
    // 0x8001CC18: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8001CC1C: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x8001CC20: div.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f2.fl);
    // 0x8001CC24: swc1        $f16, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f16.u32l;
L_8001CC28:
    // 0x8001CC28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001CC2C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8001CC30: jr          $ra
    // 0x8001CC34: nop

    TRACE_RETURN()
    return;
    // 0x8001CC34: nop

;}
