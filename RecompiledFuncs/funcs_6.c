#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80023480_24080(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80023480: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80023484: lw          $a0, -0x717C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X717C);
    // 0x80023488: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8002348C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80023490: lw          $a1, 0x3F0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X3F0);
    // 0x80023494: sll         $t6, $a1, 5
    ctx->r14 = S32(ctx->r5 << 5);
    // 0x80023498: addu        $a2, $a0, $t6
    ctx->r6 = ADD32(ctx->r4, ctx->r14);
    // 0x8002349C: jal         0x80044E70
    // 0x800234A0: addiu       $a2, $a2, 0x1B0
    ctx->r6 = ADD32(ctx->r6, 0X1B0);
    osPfsFileState_recomp(rdram, ctx);
        goto after_0;
    // 0x800234A0: addiu       $a2, $a2, 0x1B0
    ctx->r6 = ADD32(ctx->r6, 0X1B0);
    after_0:
    // 0x800234A4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x800234A8: jal         0x80023ADC
    // 0x800234AC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80023ADC_246DC(rdram, ctx);
        goto after_1;
    // 0x800234AC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x800234B0: lui         $v1, 0x8017
    ctx->r3 = S32(0X8017 << 16);
    // 0x800234B4: addiu       $v1, $v1, -0x717C
    ctx->r3 = ADD32(ctx->r3, -0X717C);
    // 0x800234B8: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x800234BC: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800234C0: sw          $t7, 0x3FC($t8)
    MEM_W(0X3FC, ctx->r24) = ctx->r15;
    // 0x800234C4: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x800234C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800234CC: lw          $v0, 0x3FC($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X3FC);
    // 0x800234D0: jr          $ra
    // 0x800234D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x800234D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void MusPtrBankGetCurrent(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004A438: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x8004A43C: lw          $v0, -0x6BA8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6BA8);
    // 0x8004A440: jr          $ra
    // 0x8004A444: nop

    TRACE_RETURN()
    return;
    // 0x8004A444: nop

;}
RECOMP_FUNC void func_80015AB0_166B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80015AB0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80015AB4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80015AB8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80015ABC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80015AC0: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80015AC4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80015AC8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80015ACC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80015AD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80015AD4: jal         0x80016480
    // 0x80015AD8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80016480_17080(rdram, ctx);
        goto after_0;
    // 0x80015AD8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80015ADC: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x80015AE0: lw          $t7, 0x4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4);
    // 0x80015AE4: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    // 0x80015AE8: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80015AEC: mflo        $t8
    ctx->r24 = lo;
    // 0x80015AF0: bltzl       $t8, L_80015B98
    if (SIGNED(ctx->r24) < 0) {
        // 0x80015AF4: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80015B98;
    }
    goto skip_0;
    // 0x80015AF4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
L_80015AF8:
    // 0x80015AF8: jal         0x80015BB0
    // 0x80015AFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80015BB0_167B0(rdram, ctx);
        goto after_1;
    // 0x80015AFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80015B00: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x80015B04: lw          $t9, 0x4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4);
    // 0x80015B08: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x80015B0C: multu       $v1, $t9
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80015B10: mflo        $a0
    ctx->r4 = lo;
    // 0x80015B14: slt         $at, $s1, $a0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80015B18: beql        $at, $zero, L_80015B8C
    if (ctx->r1 == 0) {
        // 0x80015B1C: slt         $at, $s1, $a0
        ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r4) ? 1 : 0;
            goto L_80015B8C;
    }
    goto skip_1;
    // 0x80015B1C: slt         $at, $s1, $a0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r4) ? 1 : 0;
    skip_1:
    // 0x80015B20: div         $zero, $s1, $v1
    lo = S32(S64(S32(ctx->r17)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r17)) % S64(S32(ctx->r3)));
    // 0x80015B24: mfhi        $s2
    ctx->r18 = hi;
    // 0x80015B28: mflo        $s3
    ctx->r19 = lo;
    // 0x80015B2C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x80015B30: bne         $v1, $zero, L_80015B3C
    if (ctx->r3 != 0) {
        // 0x80015B34: nop
    
            goto L_80015B3C;
    }
    // 0x80015B34: nop

    // 0x80015B38: break       7
    do_break(2147572536);
L_80015B3C:
    // 0x80015B3C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80015B40: bne         $v1, $at, L_80015B54
    if (ctx->r3 != ctx->r1) {
        // 0x80015B44: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80015B54;
    }
    // 0x80015B44: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80015B48: bne         $s1, $at, L_80015B54
    if (ctx->r17 != ctx->r1) {
        // 0x80015B4C: nop
    
            goto L_80015B54;
    }
    // 0x80015B4C: nop

    // 0x80015B50: break       6
    do_break(2147572560);
L_80015B54:
    // 0x80015B54: jal         0x80014CC4
    // 0x80015B58: nop

    func_80014CC4_158C4(rdram, ctx);
        goto after_2;
    // 0x80015B58: nop

    after_2:
    // 0x80015B5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80015B60: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80015B64: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x80015B68: jal         0x80015D90
    // 0x80015B6C: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    func_80015D90_16990(rdram, ctx);
        goto after_3;
    // 0x80015B6C: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    after_3:
    // 0x80015B70: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x80015B74: lw          $t1, 0x4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X4);
    // 0x80015B78: multu       $t0, $t1
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80015B7C: mflo        $a0
    ctx->r4 = lo;
    // 0x80015B80: nop

    // 0x80015B84: nop

    // 0x80015B88: slt         $at, $s1, $a0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r4) ? 1 : 0;
L_80015B8C:
    // 0x80015B8C: bne         $at, $zero, L_80015AF8
    if (ctx->r1 != 0) {
        // 0x80015B90: nop
    
            goto L_80015AF8;
    }
    // 0x80015B90: nop

    // 0x80015B94: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80015B98:
    // 0x80015B98: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80015B9C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80015BA0: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80015BA4: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80015BA8: jr          $ra
    // 0x80015BAC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80015BAC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80034268_34E68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80034268: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8003426C: sw          $s1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r17;
    // 0x80034270: sw          $s0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r16;
    // 0x80034274: sw          $a0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r4;
    // 0x80034278: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x8003427C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80034280: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80034284: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80034288: or          $s1, $a3, $zero
    ctx->r17 = ctx->r7 | 0;
    // 0x8003428C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80034290: lw          $t0, -0x708C($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X708C);
L_80034294:
    // 0x80034294: addu        $t7, $a0, $t0
    ctx->r15 = ADD32(ctx->r4, ctx->r8);
    // 0x80034298: lbu         $v0, 0x0($t7)
    ctx->r2 = MEM_BU(ctx->r15, 0X0);
    // 0x8003429C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x800342A0: andi        $t8, $a0, 0xFFFF
    ctx->r24 = ctx->r4 & 0XFFFF;
    // 0x800342A4: slti        $at, $v0, 0x78
    ctx->r1 = SIGNED(ctx->r2) < 0X78 ? 1 : 0;
    // 0x800342A8: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x800342AC: beq         $at, $zero, L_80034398
    if (ctx->r1 == 0) {
        // 0x800342B0: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_80034398;
    }
    // 0x800342B0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800342B4: slti        $at, $v0, 0x60
    ctx->r1 = SIGNED(ctx->r2) < 0X60 ? 1 : 0;
    // 0x800342B8: bne         $at, $zero, L_800342D4
    if (ctx->r1 != 0) {
        // 0x800342BC: addu        $t9, $t8, $t0
        ctx->r25 = ADD32(ctx->r24, ctx->r8);
            goto L_800342D4;
    }
    // 0x800342BC: addu        $t9, $t8, $t0
    ctx->r25 = ADD32(ctx->r24, ctx->r8);
    // 0x800342C0: addiu       $a0, $t8, 0x1
    ctx->r4 = ADD32(ctx->r24, 0X1);
    // 0x800342C4: andi        $t2, $a0, 0xFFFF
    ctx->r10 = ctx->r4 & 0XFFFF;
    // 0x800342C8: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x800342CC: b           L_80034308
    // 0x800342D0: lbu         $v1, 0x0($t9)
    ctx->r3 = MEM_BU(ctx->r25, 0X0);
        goto L_80034308;
    // 0x800342D0: lbu         $v1, 0x0($t9)
    ctx->r3 = MEM_BU(ctx->r25, 0X0);
L_800342D4:
    // 0x800342D4: slti        $at, $a1, 0x40
    ctx->r1 = SIGNED(ctx->r5) < 0X40 ? 1 : 0;
    // 0x800342D8: bnel        $at, $zero, L_800342F4
    if (ctx->r1 != 0) {
        // 0x800342DC: slti        $at, $a1, 0x20
        ctx->r1 = SIGNED(ctx->r5) < 0X20 ? 1 : 0;
            goto L_800342F4;
    }
    goto skip_0;
    // 0x800342DC: slti        $at, $a1, 0x20
    ctx->r1 = SIGNED(ctx->r5) < 0X20 ? 1 : 0;
    skip_0:
    // 0x800342E0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800342E4: andi        $t3, $v1, 0xFF
    ctx->r11 = ctx->r3 & 0XFF;
    // 0x800342E8: b           L_80034308
    // 0x800342EC: or          $v1, $t3, $zero
    ctx->r3 = ctx->r11 | 0;
        goto L_80034308;
    // 0x800342EC: or          $v1, $t3, $zero
    ctx->r3 = ctx->r11 | 0;
    // 0x800342F0: slti        $at, $a1, 0x20
    ctx->r1 = SIGNED(ctx->r5) < 0X20 ? 1 : 0;
L_800342F4:
    // 0x800342F4: bne         $at, $zero, L_80034308
    if (ctx->r1 != 0) {
        // 0x800342F8: nop
    
            goto L_80034308;
    }
    // 0x800342F8: nop

    // 0x800342FC: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80034300: andi        $t4, $v1, 0xFF
    ctx->r12 = ctx->r3 & 0XFF;
    // 0x80034304: or          $v1, $t4, $zero
    ctx->r3 = ctx->r12 | 0;
L_80034308:
    // 0x80034308: bltz        $s0, L_80034350
    if (SIGNED(ctx->r16) < 0) {
        // 0x8003430C: andi        $t3, $a1, 0x1F
        ctx->r11 = ctx->r5 & 0X1F;
            goto L_80034350;
    }
    // 0x8003430C: andi        $t3, $a1, 0x1F
    ctx->r11 = ctx->r5 & 0X1F;
    // 0x80034310: andi        $t5, $a1, 0x1F
    ctx->r13 = ctx->r5 & 0X1F;
    // 0x80034314: beq         $t5, $zero, L_80034324
    if (ctx->r13 == 0) {
        // 0x80034318: slt         $at, $s0, $t5
        ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r13) ? 1 : 0;
            goto L_80034324;
    }
    // 0x80034318: slt         $at, $s0, $t5
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x8003431C: beq         $at, $zero, L_8003434C
    if (ctx->r1 == 0) {
        // 0x80034320: or          $t1, $t5, $zero
        ctx->r9 = ctx->r13 | 0;
            goto L_8003434C;
    }
    // 0x80034320: or          $t1, $t5, $zero
    ctx->r9 = ctx->r13 | 0;
L_80034324:
    // 0x80034324: addu        $t6, $a0, $s0
    ctx->r14 = ADD32(ctx->r4, ctx->r16);
    // 0x80034328: addu        $t7, $t6, $t0
    ctx->r15 = ADD32(ctx->r14, ctx->r8);
    // 0x8003432C: lbu         $t8, 0x0($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X0);
    // 0x80034330: sll         $t9, $v1, 8
    ctx->r25 = S32(ctx->r3 << 8);
    // 0x80034334: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80034338: addu        $t2, $t8, $t9
    ctx->r10 = ADD32(ctx->r24, ctx->r25);
    // 0x8003433C: sh          $t2, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r10;
    // 0x80034340: lw          $t0, -0x708C($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X708C);
    // 0x80034344: b           L_80034350
    // 0x80034348: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
        goto L_80034350;
    // 0x80034348: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
L_8003434C:
    // 0x8003434C: subu        $s0, $s0, $t1
    ctx->r16 = SUB32(ctx->r16, ctx->r9);
L_80034350:
    // 0x80034350: beq         $t3, $zero, L_80034364
    if (ctx->r11 == 0) {
        // 0x80034354: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_80034364;
    }
    // 0x80034354: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80034358: slt         $at, $s1, $t3
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x8003435C: beq         $at, $zero, L_80034384
    if (ctx->r1 == 0) {
        // 0x80034360: or          $t1, $t3, $zero
        ctx->r9 = ctx->r11 | 0;
            goto L_80034384;
    }
    // 0x80034360: or          $t1, $t3, $zero
    ctx->r9 = ctx->r11 | 0;
L_80034364:
    // 0x80034364: addu        $t4, $a3, $s1
    ctx->r12 = ADD32(ctx->r7, ctx->r17);
    // 0x80034368: addu        $t5, $t4, $t0
    ctx->r13 = ADD32(ctx->r12, ctx->r8);
    // 0x8003436C: lbu         $t6, 0x0($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X0);
    // 0x80034370: sll         $t7, $v1, 8
    ctx->r15 = S32(ctx->r3 << 8);
    // 0x80034374: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x80034378: andi        $t8, $v0, 0xFFFF
    ctx->r24 = ctx->r2 & 0XFFFF;
    // 0x8003437C: b           L_8003453C
    // 0x80034380: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
        goto L_8003453C;
    // 0x80034380: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_80034384:
    // 0x80034384: addu        $a0, $a3, $t1
    ctx->r4 = ADD32(ctx->r7, ctx->r9);
    // 0x80034388: andi        $t9, $a0, 0xFFFF
    ctx->r25 = ctx->r4 & 0XFFFF;
    // 0x8003438C: subu        $s1, $s1, $t1
    ctx->r17 = SUB32(ctx->r17, ctx->r9);
    // 0x80034390: b           L_80034294
    // 0x80034394: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
        goto L_80034294;
    // 0x80034394: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
L_80034398:
    // 0x80034398: slti        $at, $a1, 0xF0
    ctx->r1 = SIGNED(ctx->r5) < 0XF0 ? 1 : 0;
    // 0x8003439C: beq         $at, $zero, L_80034498
    if (ctx->r1 == 0) {
        // 0x800343A0: andi        $t9, $a1, 0xF
        ctx->r25 = ctx->r5 & 0XF;
            goto L_80034498;
    }
    // 0x800343A0: andi        $t9, $a1, 0xF
    ctx->r25 = ctx->r5 & 0XF;
    // 0x800343A4: slti        $at, $a1, 0xD8
    ctx->r1 = SIGNED(ctx->r5) < 0XD8 ? 1 : 0;
    // 0x800343A8: bne         $at, $zero, L_800343C8
    if (ctx->r1 != 0) {
        // 0x800343AC: addiu       $t6, $a1, -0x78
        ctx->r14 = ADD32(ctx->r5, -0X78);
            goto L_800343C8;
    }
    // 0x800343AC: addiu       $t6, $a1, -0x78
    ctx->r14 = ADD32(ctx->r5, -0X78);
    // 0x800343B0: addu        $t2, $a0, $t0
    ctx->r10 = ADD32(ctx->r4, ctx->r8);
    // 0x800343B4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x800343B8: andi        $t3, $a0, 0xFFFF
    ctx->r11 = ctx->r4 & 0XFFFF;
    // 0x800343BC: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x800343C0: b           L_800343FC
    // 0x800343C4: lbu         $v1, 0x0($t2)
    ctx->r3 = MEM_BU(ctx->r10, 0X0);
        goto L_800343FC;
    // 0x800343C4: lbu         $v1, 0x0($t2)
    ctx->r3 = MEM_BU(ctx->r10, 0X0);
L_800343C8:
    // 0x800343C8: slti        $at, $a1, 0xB8
    ctx->r1 = SIGNED(ctx->r5) < 0XB8 ? 1 : 0;
    // 0x800343CC: bnel        $at, $zero, L_800343E8
    if (ctx->r1 != 0) {
        // 0x800343D0: slti        $at, $a1, 0x98
        ctx->r1 = SIGNED(ctx->r5) < 0X98 ? 1 : 0;
            goto L_800343E8;
    }
    goto skip_1;
    // 0x800343D0: slti        $at, $a1, 0x98
    ctx->r1 = SIGNED(ctx->r5) < 0X98 ? 1 : 0;
    skip_1:
    // 0x800343D4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800343D8: andi        $t4, $v1, 0xFF
    ctx->r12 = ctx->r3 & 0XFF;
    // 0x800343DC: b           L_800343FC
    // 0x800343E0: or          $v1, $t4, $zero
    ctx->r3 = ctx->r12 | 0;
        goto L_800343FC;
    // 0x800343E0: or          $v1, $t4, $zero
    ctx->r3 = ctx->r12 | 0;
    // 0x800343E4: slti        $at, $a1, 0x98
    ctx->r1 = SIGNED(ctx->r5) < 0X98 ? 1 : 0;
L_800343E8:
    // 0x800343E8: bnel        $at, $zero, L_80034400
    if (ctx->r1 != 0) {
        // 0x800343EC: andi        $t7, $t6, 0x1F
        ctx->r15 = ctx->r14 & 0X1F;
            goto L_80034400;
    }
    goto skip_2;
    // 0x800343EC: andi        $t7, $t6, 0x1F
    ctx->r15 = ctx->r14 & 0X1F;
    skip_2:
    // 0x800343F0: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x800343F4: andi        $t5, $v1, 0xFF
    ctx->r13 = ctx->r3 & 0XFF;
    // 0x800343F8: or          $v1, $t5, $zero
    ctx->r3 = ctx->r13 | 0;
L_800343FC:
    // 0x800343FC: andi        $t7, $t6, 0x1F
    ctx->r15 = ctx->r14 & 0X1F;
L_80034400:
    // 0x80034400: andi        $t1, $t7, 0xFFFF
    ctx->r9 = ctx->r15 & 0XFFFF;
    // 0x80034404: beq         $t1, $zero, L_80034418
    if (ctx->r9 == 0) {
        // 0x80034408: andi        $v0, $t7, 0xFFFF
        ctx->r2 = ctx->r15 & 0XFFFF;
            goto L_80034418;
    }
    // 0x80034408: andi        $v0, $t7, 0xFFFF
    ctx->r2 = ctx->r15 & 0XFFFF;
    // 0x8003440C: addiu       $v0, $t1, 0x2
    ctx->r2 = ADD32(ctx->r9, 0X2);
    // 0x80034410: andi        $t8, $v0, 0xFFFF
    ctx->r24 = ctx->r2 & 0XFFFF;
    // 0x80034414: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_80034418:
    // 0x80034418: bltz        $s0, L_80034458
    if (SIGNED(ctx->r16) < 0) {
        // 0x8003441C: nop
    
            goto L_80034458;
    }
    // 0x8003441C: nop

    // 0x80034420: beq         $v0, $zero, L_80034430
    if (ctx->r2 == 0) {
        // 0x80034424: slt         $at, $s0, $v0
        ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_80034430;
    }
    // 0x80034424: slt         $at, $s0, $v0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80034428: beq         $at, $zero, L_80034454
    if (ctx->r1 == 0) {
        // 0x8003442C: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_80034454;
    }
    // 0x8003442C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_80034430:
    // 0x80034430: addu        $t9, $a0, $t0
    ctx->r25 = ADD32(ctx->r4, ctx->r8);
    // 0x80034434: lbu         $t2, 0x0($t9)
    ctx->r10 = MEM_BU(ctx->r25, 0X0);
    // 0x80034438: sll         $t3, $v1, 8
    ctx->r11 = S32(ctx->r3 << 8);
    // 0x8003443C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80034440: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80034444: sh          $t4, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r12;
    // 0x80034448: lw          $t0, -0x708C($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X708C);
    // 0x8003444C: b           L_80034458
    // 0x80034450: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
        goto L_80034458;
    // 0x80034450: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
L_80034454:
    // 0x80034454: subu        $s0, $s0, $a1
    ctx->r16 = SUB32(ctx->r16, ctx->r5);
L_80034458:
    // 0x80034458: beq         $v0, $zero, L_80034468
    if (ctx->r2 == 0) {
        // 0x8003445C: slt         $at, $s1, $v0
        ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_80034468;
    }
    // 0x8003445C: slt         $at, $s1, $v0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80034460: beq         $at, $zero, L_80034484
    if (ctx->r1 == 0) {
        // 0x80034464: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_80034484;
    }
    // 0x80034464: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_80034468:
    // 0x80034468: addu        $t5, $a0, $t0
    ctx->r13 = ADD32(ctx->r4, ctx->r8);
    // 0x8003446C: lbu         $t6, 0x0($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X0);
    // 0x80034470: sll         $t7, $v1, 8
    ctx->r15 = S32(ctx->r3 << 8);
    // 0x80034474: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x80034478: andi        $t8, $v0, 0xFFFF
    ctx->r24 = ctx->r2 & 0XFFFF;
    // 0x8003447C: b           L_8003453C
    // 0x80034480: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
        goto L_8003453C;
    // 0x80034480: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_80034484:
    // 0x80034484: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80034488: andi        $t9, $a0, 0xFFFF
    ctx->r25 = ctx->r4 & 0XFFFF;
    // 0x8003448C: subu        $s1, $s1, $a1
    ctx->r17 = SUB32(ctx->r17, ctx->r5);
    // 0x80034490: b           L_80034294
    // 0x80034494: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
        goto L_80034294;
    // 0x80034494: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
L_80034498:
    // 0x80034498: bltz        $s0, L_800344E4
    if (SIGNED(ctx->r16) < 0) {
        // 0x8003449C: andi        $t2, $a1, 0xF
        ctx->r10 = ctx->r5 & 0XF;
            goto L_800344E4;
    }
    // 0x8003449C: andi        $t2, $a1, 0xF
    ctx->r10 = ctx->r5 & 0XF;
    // 0x800344A0: beq         $t2, $zero, L_800344B0
    if (ctx->r10 == 0) {
        // 0x800344A4: slt         $at, $s0, $t2
        ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r10) ? 1 : 0;
            goto L_800344B0;
    }
    // 0x800344A4: slt         $at, $s0, $t2
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x800344A8: beq         $at, $zero, L_800344E0
    if (ctx->r1 == 0) {
        // 0x800344AC: or          $t1, $t2, $zero
        ctx->r9 = ctx->r10 | 0;
            goto L_800344E0;
    }
    // 0x800344AC: or          $t1, $t2, $zero
    ctx->r9 = ctx->r10 | 0;
L_800344B0:
    // 0x800344B0: sll         $t3, $s0, 1
    ctx->r11 = S32(ctx->r16 << 1);
    // 0x800344B4: addu        $t4, $a0, $t3
    ctx->r12 = ADD32(ctx->r4, ctx->r11);
    // 0x800344B8: addu        $v0, $t4, $t0
    ctx->r2 = ADD32(ctx->r12, ctx->r8);
    // 0x800344BC: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x800344C0: lbu         $t5, 0x1($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X1);
    // 0x800344C4: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800344C8: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x800344CC: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x800344D0: sh          $t8, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r24;
    // 0x800344D4: lw          $t0, -0x708C($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X708C);
    // 0x800344D8: b           L_800344E4
    // 0x800344DC: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
        goto L_800344E4;
    // 0x800344DC: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
L_800344E0:
    // 0x800344E0: subu        $s0, $s0, $t1
    ctx->r16 = SUB32(ctx->r16, ctx->r9);
L_800344E4:
    // 0x800344E4: beq         $t9, $zero, L_800344F8
    if (ctx->r25 == 0) {
        // 0x800344E8: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_800344F8;
    }
    // 0x800344E8: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x800344EC: slt         $at, $s1, $t9
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x800344F0: beq         $at, $zero, L_80034520
    if (ctx->r1 == 0) {
        // 0x800344F4: or          $t1, $t9, $zero
        ctx->r9 = ctx->r25 | 0;
            goto L_80034520;
    }
    // 0x800344F4: or          $t1, $t9, $zero
    ctx->r9 = ctx->r25 | 0;
L_800344F8:
    // 0x800344F8: sll         $t2, $s1, 1
    ctx->r10 = S32(ctx->r17 << 1);
    // 0x800344FC: addu        $t3, $a3, $t2
    ctx->r11 = ADD32(ctx->r7, ctx->r10);
    // 0x80034500: addu        $v1, $t3, $t0
    ctx->r3 = ADD32(ctx->r11, ctx->r8);
    // 0x80034504: lbu         $t6, 0x0($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X0);
    // 0x80034508: lbu         $t4, 0x1($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X1);
    // 0x8003450C: sll         $t5, $t6, 8
    ctx->r13 = S32(ctx->r14 << 8);
    // 0x80034510: addu        $v0, $t4, $t5
    ctx->r2 = ADD32(ctx->r12, ctx->r13);
    // 0x80034514: andi        $t7, $v0, 0xFFFF
    ctx->r15 = ctx->r2 & 0XFFFF;
    // 0x80034518: b           L_8003453C
    // 0x8003451C: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
        goto L_8003453C;
    // 0x8003451C: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_80034520:
    // 0x80034520: sll         $t8, $t1, 1
    ctx->r24 = S32(ctx->r9 << 1);
    // 0x80034524: addu        $v0, $a3, $t8
    ctx->r2 = ADD32(ctx->r7, ctx->r24);
    // 0x80034528: addu        $t9, $v0, $t0
    ctx->r25 = ADD32(ctx->r2, ctx->r8);
    // 0x8003452C: subu        $s1, $s1, $t1
    ctx->r17 = SUB32(ctx->r17, ctx->r9);
    // 0x80034530: lbu         $v1, -0x2($t9)
    ctx->r3 = MEM_BU(ctx->r25, -0X2);
    // 0x80034534: b           L_80034294
    // 0x80034538: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
        goto L_80034294;
    // 0x80034538: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
L_8003453C:
    // 0x8003453C: lw          $s0, 0x8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X8);
    // 0x80034540: lw          $s1, 0xC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XC);
    // 0x80034544: jr          $ra
    // 0x80034548: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    TRACE_RETURN()
    return;
    // 0x80034548: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_80002F54_3B54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80002F54: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80002F58: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x80002F5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80002F60: lui         $t7, 0x4
    ctx->r15 = S32(0X4 << 16);
    // 0x80002F64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80002F68: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80002F6C: lbu         $t7, -0x522A($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X522A);
    // 0x80002F70: sltiu       $at, $t7, 0x5
    ctx->r1 = ctx->r15 < 0X5 ? 1 : 0;
    // 0x80002F74: beq         $at, $zero, L_800030E0
    if (ctx->r1 == 0) {
        // 0x80002F78: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_800030E0;
    }
    // 0x80002F78: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80002F7C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80002F80: addu        $at, $at, $t7
    gpr jr_addend_80002F88 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80002F84: lw          $t7, -0x5788($at)
    ctx->r15 = ADD32(ctx->r1, -0X5788);
    // 0x80002F88: jr          $t7
    // 0x80002F8C: nop

    switch (jr_addend_80002F88 >> 2) {
        case 0: goto L_80002F90; break;
        case 1: goto L_80002FB8; break;
        case 2: goto L_80003034; break;
        case 3: goto L_80003060; break;
        case 4: goto L_80003070; break;
        default: switch_error(__func__, 0x80002F88, 0x8007A878);
    }
    // 0x80002F8C: nop

L_80002F90:
    // 0x80002F90: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80002F94: addiu       $v0, $v0, -0x3340
    ctx->r2 = ADD32(ctx->r2, -0X3340);
    // 0x80002F98: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x80002F9C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80002FA0: sh          $t8, 0x2DB7($at)
    MEM_H(0X2DB7, ctx->r1) = ctx->r24;
    // 0x80002FA4: addiu       $t9, $v0, 0x7FFF
    ctx->r25 = ADD32(ctx->r2, 0X7FFF);
    // 0x80002FA8: lbu         $t9, 0x2DD7($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X2DD7);
    // 0x80002FAC: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80002FB0: b           L_800030E0
    // 0x80002FB4: sb          $t0, 0x2DD7($at)
    MEM_B(0X2DD7, ctx->r1) = ctx->r8;
        goto L_800030E0;
    // 0x80002FB4: sb          $t0, 0x2DD7($at)
    MEM_B(0X2DD7, ctx->r1) = ctx->r8;
L_80002FB8:
    // 0x80002FB8: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x80002FBC: lw          $t1, 0x48D8($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X48D8);
    // 0x80002FC0: bnel        $t1, $zero, L_800030E4
    if (ctx->r9 != 0) {
        // 0x80002FC4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800030E4;
    }
    goto skip_0;
    // 0x80002FC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80002FC8: jal         0x8000383C
    // 0x80002FCC: nop

    func_8000383C_443C(rdram, ctx);
        goto after_0;
    // 0x80002FCC: nop

    after_0:
    // 0x80002FD0: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x80002FD4: addiu       $v0, $v0, -0x3A38
    ctx->r2 = ADD32(ctx->r2, -0X3A38);
    // 0x80002FD8: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x80002FDC: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80002FE0: addiu       $t2, $zero, 0xC
    ctx->r10 = ADD32(0, 0XC);
    // 0x80002FE4: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80002FE8: sb          $t2, -0x521C($at)
    MEM_B(-0X521C, ctx->r1) = ctx->r10;
    // 0x80002FEC: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x80002FF0: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80002FF4: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80002FF8: jal         0x80020440
    // 0x80002FFC: sh          $zero, -0x520C($at)
    MEM_H(-0X520C, ctx->r1) = 0;
    func_80020440_21040(rdram, ctx);
        goto after_1;
    // 0x80002FFC: sh          $zero, -0x520C($at)
    MEM_H(-0X520C, ctx->r1) = 0;
    after_1:
    // 0x80003000: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x80003004: jal         0x800369B4
    // 0x80003008: lw          $a0, -0x2CD8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2CD8);
    func_800369B4_375B4(rdram, ctx);
        goto after_2;
    // 0x80003008: lw          $a0, -0x2CD8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2CD8);
    after_2:
    // 0x8000300C: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x80003010: lw          $v0, -0x3A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A38);
    // 0x80003014: lui         $t5, 0x4
    ctx->r13 = S32(0X4 << 16);
    // 0x80003018: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8000301C: addu        $t5, $t5, $v0
    ctx->r13 = ADD32(ctx->r13, ctx->r2);
    // 0x80003020: lbu         $t5, -0x522A($t5)
    ctx->r13 = MEM_BU(ctx->r13, -0X522A);
    // 0x80003024: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80003028: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8000302C: b           L_800030E0
    // 0x80003030: sb          $t6, -0x522A($at)
    MEM_B(-0X522A, ctx->r1) = ctx->r14;
        goto L_800030E0;
    // 0x80003030: sb          $t6, -0x522A($at)
    MEM_B(-0X522A, ctx->r1) = ctx->r14;
L_80003034:
    // 0x80003034: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80003038: addiu       $v0, $v0, -0x3340
    ctx->r2 = ADD32(ctx->r2, -0X3340);
    // 0x8000303C: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x80003040: sh          $zero, 0x2DB7($at)
    MEM_H(0X2DB7, ctx->r1) = 0;
    // 0x80003044: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x80003048: jal         0x80036840
    // 0x8000304C: lw          $a0, -0x2CD8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2CD8);
    func_80036840_37440(rdram, ctx);
        goto after_3;
    // 0x8000304C: lw          $a0, -0x2CD8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2CD8);
    after_3:
    // 0x80003050: jal         0x800038E4
    // 0x80003054: nop

    func_800038E4_44E4(rdram, ctx);
        goto after_4;
    // 0x80003054: nop

    after_4:
    // 0x80003058: b           L_800030E4
    // 0x8000305C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800030E4;
    // 0x8000305C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80003060:
    // 0x80003060: jal         0x8000394C
    // 0x80003064: nop

    func_8000394C_454C(rdram, ctx);
        goto after_5;
    // 0x80003064: nop

    after_5:
    // 0x80003068: b           L_800030E4
    // 0x8000306C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800030E4;
    // 0x8000306C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80003070:
    // 0x80003070: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x80003074: lw          $t7, 0x48D8($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X48D8);
    // 0x80003078: bnel        $t7, $zero, L_800030E4
    if (ctx->r15 != 0) {
        // 0x8000307C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800030E4;
    }
    goto skip_1;
    // 0x8000307C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x80003080: jal         0x8000383C
    // 0x80003084: nop

    func_8000383C_443C(rdram, ctx);
        goto after_6;
    // 0x80003084: nop

    after_6:
    // 0x80003088: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x8000308C: addiu       $v0, $v0, -0x3340
    ctx->r2 = ADD32(ctx->r2, -0X3340);
    // 0x80003090: addiu       $t8, $v0, 0x7FFF
    ctx->r24 = ADD32(ctx->r2, 0X7FFF);
    // 0x80003094: lbu         $t8, 0x2DD6($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X2DD6);
    // 0x80003098: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8000309C: bne         $t8, $at, L_800030D8
    if (ctx->r24 != ctx->r1) {
        // 0x800030A0: nop
    
            goto L_800030D8;
    }
    // 0x800030A0: nop

    // 0x800030A4: jal         0x8000B6E0
    // 0x800030A8: nop

    func_8000B6E0_C2E0(rdram, ctx);
        goto after_7;
    // 0x800030A8: nop

    after_7:
    // 0x800030AC: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x800030B0: addiu       $v0, $v0, -0x3340
    ctx->r2 = ADD32(ctx->r2, -0X3340);
    // 0x800030B4: addiu       $t9, $v0, 0x7FFF
    ctx->r25 = ADD32(ctx->r2, 0X7FFF);
    // 0x800030B8: lbu         $t9, 0x2E0D($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X2E0D);
    // 0x800030BC: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x800030C0: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x800030C4: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x800030C8: jal         0x80003728
    // 0x800030CC: sb          $t0, 0x2E0D($at)
    MEM_B(0X2E0D, ctx->r1) = ctx->r8;
    func_80003728_4328(rdram, ctx);
        goto after_8;
    // 0x800030CC: sb          $t0, 0x2E0D($at)
    MEM_B(0X2E0D, ctx->r1) = ctx->r8;
    after_8:
    // 0x800030D0: b           L_800030E4
    // 0x800030D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800030E4;
    // 0x800030D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800030D8:
    // 0x800030D8: jal         0x80003728
    // 0x800030DC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_80003728_4328(rdram, ctx);
        goto after_9;
    // 0x800030DC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_9:
L_800030E0:
    // 0x800030E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800030E4:
    // 0x800030E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800030E8: jr          $ra
    // 0x800030EC: nop

    TRACE_RETURN()
    return;
    // 0x800030EC: nop

;}
RECOMP_FUNC void func_800203D4_20FD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800203D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800203D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800203DC: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x800203E0: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x800203E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800203E8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800203EC: beq         $t6, $zero, L_80020408
    if (ctx->r14 == 0) {
        // 0x800203F0: andi        $a2, $a1, 0xFFFF
        ctx->r6 = ctx->r5 & 0XFFFF;
            goto L_80020408;
    }
    // 0x800203F0: andi        $a2, $a1, 0xFFFF
    ctx->r6 = ctx->r5 & 0XFFFF;
    // 0x800203F4: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x800203F8: addiu       $a1, $a1, -0x4BA0
    ctx->r5 = ADD32(ctx->r5, -0X4BA0);
    // 0x800203FC: jal         0x80001C00
    // 0x80020400: sh          $a2, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r6;
    func_80001C00_2800(rdram, ctx);
        goto after_0;
    // 0x80020400: sh          $a2, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r6;
    after_0:
    // 0x80020404: lhu         $a2, 0x1E($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X1E);
L_80020408:
    // 0x80020408: beq         $a2, $zero, L_8002041C
    if (ctx->r6 == 0) {
        // 0x8002040C: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_8002041C;
    }
    // 0x8002040C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x80020410: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80020414: jal         0x80001C00
    // 0x80020418: addiu       $a1, $a1, -0x2D60
    ctx->r5 = ADD32(ctx->r5, -0X2D60);
    func_80001C00_2800(rdram, ctx);
        goto after_1;
    // 0x80020418: addiu       $a1, $a1, -0x2D60
    ctx->r5 = ADD32(ctx->r5, -0X2D60);
    after_1:
L_8002041C:
    // 0x8002041C: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x80020420: beq         $v0, $zero, L_80020438
    if (ctx->r2 == 0) {
        // 0x80020424: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80020438;
    }
    // 0x80020424: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80020428:
    // 0x80020428: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8002042C: andi        $t7, $v0, 0xFFFF
    ctx->r15 = ctx->r2 & 0XFFFF;
    // 0x80020430: bne         $t7, $zero, L_80020428
    if (ctx->r15 != 0) {
        // 0x80020434: or          $v0, $t7, $zero
        ctx->r2 = ctx->r15 | 0;
            goto L_80020428;
    }
    // 0x80020434: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_80020438:
    // 0x80020438: jr          $ra
    // 0x8002043C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8002043C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80034F44_35B44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80034F44: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80034F48: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80034F4C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80034F50: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80034F54: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80034F58: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80034F5C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80034F60: lw          $a1, 0x0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X0);
    // 0x80034F64: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x80034F68: beql        $a1, $zero, L_80035004
    if (ctx->r5 == 0) {
        // 0x80034F6C: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_80035004;
    }
    goto skip_0;
    // 0x80034F6C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x80034F70: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    // 0x80034F74: lhu         $s2, 0x20($a0)
    ctx->r18 = MEM_HU(ctx->r4, 0X20);
    // 0x80034F78: lhu         $t6, 0x20($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X20);
    // 0x80034F7C: lui         $s3, 0x8003
    ctx->r19 = S32(0X8003 << 16);
    // 0x80034F80: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80034F84: slt         $at, $s2, $t6
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80034F88: beq         $at, $zero, L_80035000
    if (ctx->r1 == 0) {
        // 0x80034F8C: addiu       $s3, $s3, 0x54B4
        ctx->r19 = ADD32(ctx->r19, 0X54B4);
            goto L_80035000;
    }
    // 0x80034F8C: addiu       $s3, $s3, 0x54B4
    ctx->r19 = ADD32(ctx->r19, 0X54B4);
    // 0x80034F90: lui         $s1, 0x8007
    ctx->r17 = S32(0X8007 << 16);
    // 0x80034F94: addiu       $s1, $s1, -0x2CD8
    ctx->r17 = ADD32(ctx->r17, -0X2CD8);
    // 0x80034F98: lhu         $t7, 0xC($s1)
    ctx->r15 = MEM_HU(ctx->r17, 0XC);
L_80034F9C:
    // 0x80034F9C: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x80034FA0: sh          $t8, 0xC($s1)
    MEM_H(0XC, ctx->r17) = ctx->r24;
    // 0x80034FA4: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x80034FA8: jal         0x800351B4
    // 0x80034FAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800351B4_35DB4(rdram, ctx);
        goto after_0;
    // 0x80034FAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80034FB0: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x80034FB4: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x80034FB8: sw          $s3, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r19;
    // 0x80034FBC: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x80034FC0: beq         $v1, $zero, L_80034FD0
    if (ctx->r3 == 0) {
        // 0x80034FC4: sw          $zero, 0x4($s0)
        MEM_W(0X4, ctx->r16) = 0;
            goto L_80034FD0;
    }
    // 0x80034FC4: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x80034FC8: b           L_80034FD4
    // 0x80034FCC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_80034FD4;
    // 0x80034FCC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80034FD0:
    // 0x80034FD0: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
L_80034FD4:
    // 0x80034FD4: lhu         $t9, 0x20($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X20);
    // 0x80034FD8: slt         $at, $s2, $t9
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80034FDC: bnel        $at, $zero, L_80034F9C
    if (ctx->r1 != 0) {
        // 0x80034FE0: lhu         $t7, 0xC($s1)
        ctx->r15 = MEM_HU(ctx->r17, 0XC);
            goto L_80034F9C;
    }
    goto skip_1;
    // 0x80034FE0: lhu         $t7, 0xC($s1)
    ctx->r15 = MEM_HU(ctx->r17, 0XC);
    skip_1:
    // 0x80034FE4: sw          $s4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r20;
    // 0x80034FE8: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x80034FEC: sw          $t0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r8;
    // 0x80034FF0: lw          $t1, 0x8($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X8);
    // 0x80034FF4: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    // 0x80034FF8: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x80034FFC: sw          $t2, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r10;
L_80035000:
    // 0x80035000: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80035004:
    // 0x80035004: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80035008: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8003500C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80035010: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80035014: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80035018: jr          $ra
    // 0x8003501C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8003501C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80025790_26390(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80025790: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x80025794: lui         $t6, 0xBA00
    ctx->r14 = S32(0XBA00 << 16);
    // 0x80025798: ori         $t6, $t6, 0x1402
    ctx->r14 = ctx->r14 | 0X1402;
    // 0x8002579C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x800257A0: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x800257A4: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x800257A8: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x800257AC: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x800257B0: lui         $t7, 0xFA00
    ctx->r15 = S32(0XFA00 << 16);
    // 0x800257B4: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x800257B8: lbu         $t2, 0x25($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X25);
    // 0x800257BC: lbu         $t9, 0x24($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X24);
    // 0x800257C0: lbu         $t6, 0x26($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X26);
    // 0x800257C4: lbu         $t1, 0x27($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X27);
    // 0x800257C8: sll         $t3, $t2, 16
    ctx->r11 = S32(ctx->r10 << 16);
    // 0x800257CC: sll         $t0, $t9, 24
    ctx->r8 = S32(ctx->r25 << 24);
    // 0x800257D0: or          $t4, $t0, $t3
    ctx->r12 = ctx->r8 | ctx->r11;
    // 0x800257D4: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x800257D8: or          $t8, $t4, $t7
    ctx->r24 = ctx->r12 | ctx->r15;
    // 0x800257DC: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x800257E0: or          $t2, $t8, $t1
    ctx->r10 = ctx->r24 | ctx->r9;
    // 0x800257E4: sw          $t2, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r10;
    // 0x800257E8: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x800257EC: lui         $t3, 0xD
    ctx->r11 = S32(0XD << 16);
    // 0x800257F0: ori         $t3, $t3, 0x3200
    ctx->r11 = ctx->r11 | 0X3200;
    // 0x800257F4: lui         $t0, 0xB600
    ctx->r8 = S32(0XB600 << 16);
    // 0x800257F8: sw          $t0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r8;
    // 0x800257FC: sw          $t3, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r11;
    // 0x80025800: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x80025804: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80025808: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8002580C: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x80025810: beq         $t6, $zero, L_80025838
    if (ctx->r14 == 0) {
        // 0x80025814: lui         $t9, 0xB700
        ctx->r25 = S32(0XB700 << 16);
            goto L_80025838;
    }
    // 0x80025814: lui         $t9, 0xB700
    ctx->r25 = S32(0XB700 << 16);
    // 0x80025818: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8002581C: lui         $t7, 0x2
    ctx->r15 = S32(0X2 << 16);
    // 0x80025820: ori         $t7, $t7, 0x205
    ctx->r15 = ctx->r15 | 0X205;
    // 0x80025824: lui         $t4, 0xB700
    ctx->r12 = S32(0XB700 << 16);
    // 0x80025828: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x8002582C: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x80025830: b           L_8002584C
    // 0x80025834: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
        goto L_8002584C;
    // 0x80025834: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
L_80025838:
    // 0x80025838: lui         $t8, 0x2
    ctx->r24 = S32(0X2 << 16);
    // 0x8002583C: ori         $t8, $t8, 0x4
    ctx->r24 = ctx->r24 | 0X4;
    // 0x80025840: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x80025844: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80025848: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
L_8002584C:
    // 0x8002584C: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x80025850: lui         $t7, 0xFC32
    ctx->r15 = S32(0XFC32 << 16);
    // 0x80025854: lui         $t4, 0xBB00
    ctx->r12 = S32(0XBB00 << 16);
    // 0x80025858: andi        $t2, $t1, 0x40
    ctx->r10 = ctx->r9 & 0X40;
    // 0x8002585C: beq         $t2, $zero, L_80025888
    if (ctx->r10 == 0) {
        // 0x80025860: ori         $t7, $t7, 0x7E64
        ctx->r15 = ctx->r15 | 0X7E64;
            goto L_80025888;
    }
    // 0x80025860: ori         $t7, $t7, 0x7E64
    ctx->r15 = ctx->r15 | 0X7E64;
    // 0x80025864: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80025868: lui         $t0, 0xB900
    ctx->r8 = S32(0XB900 << 16);
    // 0x8002586C: lui         $t3, 0x50
    ctx->r11 = S32(0X50 << 16);
    // 0x80025870: ori         $t3, $t3, 0x45D8
    ctx->r11 = ctx->r11 | 0X45D8;
    // 0x80025874: ori         $t0, $t0, 0x31D
    ctx->r8 = ctx->r8 | 0X31D;
    // 0x80025878: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x8002587C: sw          $t3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r11;
    // 0x80025880: b           L_800258A8
    // 0x80025884: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
        goto L_800258A8;
    // 0x80025884: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
L_80025888:
    // 0x80025888: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8002588C: lui         $t5, 0xB900
    ctx->r13 = S32(0XB900 << 16);
    // 0x80025890: lui         $t6, 0x55
    ctx->r14 = S32(0X55 << 16);
    // 0x80025894: ori         $t6, $t6, 0x2478
    ctx->r14 = ctx->r14 | 0X2478;
    // 0x80025898: ori         $t5, $t5, 0x31D
    ctx->r13 = ctx->r13 | 0X31D;
    // 0x8002589C: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x800258A0: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x800258A4: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
L_800258A8:
    // 0x800258A8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x800258AC: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
    // 0x800258B0: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x800258B4: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x800258B8: addiu       $t9, $zero, -0x805
    ctx->r25 = ADD32(0, -0X805);
    // 0x800258BC: sw          $t9, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r25;
    // 0x800258C0: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x800258C4: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
    // 0x800258C8: jr          $ra
    // 0x800258CC: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x800258CC: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void _nsqrtf(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800417E0: jr          $ra
    // 0x800417E4: sqrt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = sqrtf(ctx->f12.fl);
    TRACE_RETURN()
    return;
    // 0x800417E4: sqrt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = sqrtf(ctx->f12.fl);
;}
RECOMP_FUNC void func_8000F924_10524(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000F924: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8000F928: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8000F92C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8000F930: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8000F934: lw          $v1, 0x60($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X60);
    // 0x8000F938: lw          $v0, 0x64($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X64);
    // 0x8000F93C: lwc1        $f6, 0x0($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8000F940: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8000F944: lwc1        $f10, 0x4($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X4);
    // 0x8000F948: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8000F94C: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8000F950: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8000F954: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8000F958: sub.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8000F95C: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8000F960: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8000F964: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8000F968: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8000F96C: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8000F970: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x8000F974: jal         0x800417E0
    // 0x8000F978: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    _nsqrtf(rdram, ctx);
        goto after_0;
    // 0x8000F978: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_0:
    // 0x8000F97C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x8000F980: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8000F984: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8000F988: addiu       $s0, $a0, 0x5C
    ctx->r16 = ADD32(ctx->r4, 0X5C);
    // 0x8000F98C: lwc1        $f8, 0xC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC);
    // 0x8000F990: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x8000F994: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8000F998: div.s       $f16, $f0, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = DIV_S(ctx->f0.fl, ctx->f8.fl);
    // 0x8000F99C: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
    // 0x8000F9A0: nop

    // 0x8000F9A4: bc1fl       L_8000F9B4
    if (!c1cs) {
        // 0x8000F9A8: cvt.d.s     $f4, $f16
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.d = CVT_D_S(ctx->f16.fl);
            goto L_8000F9B4;
    }
    goto skip_0;
    // 0x8000F9A8: cvt.d.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.d = CVT_D_S(ctx->f16.fl);
    skip_0:
    // 0x8000F9AC: mov.s       $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    ctx->f16.fl = ctx->f2.fl;
    // 0x8000F9B0: cvt.d.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.d = CVT_D_S(ctx->f16.fl);
L_8000F9B4:
    // 0x8000F9B4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8000F9B8: c.lt.d      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.d < ctx->f4.d;
    // 0x8000F9BC: nop

    // 0x8000F9C0: bc1fl       L_8000F9D4
    if (!c1cs) {
        // 0x8000F9C4: lw          $v1, 0x4($s0)
        ctx->r3 = MEM_W(ctx->r16, 0X4);
            goto L_8000F9D4;
    }
    goto skip_1;
    // 0x8000F9C4: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    skip_1:
    // 0x8000F9C8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8000F9CC: nop

    // 0x8000F9D0: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
L_8000F9D4:
    // 0x8000F9D4: lwc1        $f12, 0xC($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0XC);
    // 0x8000F9D8: lwc1        $f14, 0x14($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X14);
    // 0x8000F9DC: lw          $a2, 0x0($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X0);
    // 0x8000F9E0: lw          $a3, 0x8($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X8);
    // 0x8000F9E4: jal         0x8000E28C
    // 0x8000F9E8: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    func_8000E28C_EE8C(rdram, ctx);
        goto after_1;
    // 0x8000F9E8: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    after_1:
    // 0x8000F9EC: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
    // 0x8000F9F0: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x8000F9F4: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x8000F9F8: lw          $a2, 0x0($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X0);
    // 0x8000F9FC: lw          $a3, 0x8($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X8);
    // 0x8000FA00: lwc1        $f12, 0x8($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8000FA04: jal         0x8000E28C
    // 0x8000FA08: lwc1        $f14, 0x10($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X10);
    func_8000E28C_EE8C(rdram, ctx);
        goto after_2;
    // 0x8000FA08: lwc1        $f14, 0x10($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X10);
    after_2:
    // 0x8000FA0C: lhu         $t6, 0x20($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X20);
    // 0x8000FA10: subu        $t7, $v0, $t6
    ctx->r15 = SUB32(ctx->r2, ctx->r14);
    // 0x8000FA14: jal         0x80003E10
    // 0x8000FA18: andi        $a0, $t7, 0x3FF
    ctx->r4 = ctx->r15 & 0X3FF;
    func_80003E10_4A10(rdram, ctx);
        goto after_3;
    // 0x8000FA18: andi        $a0, $t7, 0x3FF
    ctx->r4 = ctx->r15 & 0X3FF;
    after_3:
    // 0x8000FA1C: lui         $at, 0x4280
    ctx->r1 = S32(0X4280 << 16);
    // 0x8000FA20: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8000FA24: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8000FA28: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8000FA2C: mul.s       $f6, $f0, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f14.fl);
    // 0x8000FA30: lui         $at, 0x42FE
    ctx->r1 = S32(0X42FE << 16);
    // 0x8000FA34: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8000FA38: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x8000FA3C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8000FA40: lui         $at, 0x431F
    ctx->r1 = S32(0X431F << 16);
    // 0x8000FA44: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8000FA48: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8000FA4C: add.s       $f12, $f6, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f14.fl;
    // 0x8000FA50: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8000FA54: mul.s       $f4, $f16, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f10.fl);
    // 0x8000FA58: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8000FA5C: c.lt.s      $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f12.fl < ctx->f18.fl;
    // 0x8000FA60: nop

    // 0x8000FA64: bc1f        L_8000FA70
    if (!c1cs) {
        // 0x8000FA68: sub.s       $f6, $f8, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f4.fl;
            goto L_8000FA70;
    }
    // 0x8000FA68: sub.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x8000FA6C: mov.s       $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = ctx->f18.fl;
L_8000FA70:
    // 0x8000FA70: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x8000FA74: nop

    // 0x8000FA78: bc1fl       L_8000FA88
    if (!c1cs) {
        // 0x8000FA7C: cfc1        $t9, $FpcCsr
        ctx->r25 = get_cop1_cs();
            goto L_8000FA88;
    }
    goto skip_2;
    // 0x8000FA7C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    skip_2:
    // 0x8000FA80: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x8000FA84: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
L_8000FA88:
    // 0x8000FA88: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x8000FA8C: lhu         $a0, 0x0($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X0);
    // 0x8000FA90: cvt.w.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8000FA94: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x8000FA98: nop

    // 0x8000FA9C: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x8000FAA0: beql        $a1, $zero, L_8000FAF0
    if (ctx->r5 == 0) {
        // 0x8000FAA4: mfc1        $a1, $f10
        ctx->r5 = (int32_t)ctx->f10.u32l;
            goto L_8000FAF0;
    }
    goto skip_3;
    // 0x8000FAA4: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    skip_3:
    // 0x8000FAA8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8000FAAC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8000FAB0: sub.s       $f10, $f6, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x8000FAB4: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x8000FAB8: nop

    // 0x8000FABC: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8000FAC0: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x8000FAC4: nop

    // 0x8000FAC8: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x8000FACC: bne         $a1, $zero, L_8000FAE4
    if (ctx->r5 != 0) {
        // 0x8000FAD0: nop
    
            goto L_8000FAE4;
    }
    // 0x8000FAD0: nop

    // 0x8000FAD4: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x8000FAD8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8000FADC: b           L_8000FAFC
    // 0x8000FAE0: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
        goto L_8000FAFC;
    // 0x8000FAE0: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
L_8000FAE4:
    // 0x8000FAE4: b           L_8000FAFC
    // 0x8000FAE8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
        goto L_8000FAFC;
    // 0x8000FAE8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x8000FAEC: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
L_8000FAF0:
    // 0x8000FAF0: nop

    // 0x8000FAF4: bltz        $a1, L_8000FAE4
    if (SIGNED(ctx->r5) < 0) {
        // 0x8000FAF8: nop
    
            goto L_8000FAE4;
    }
    // 0x8000FAF8: nop

L_8000FAFC:
    // 0x8000FAFC: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8000FB00: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8000FB04: andi        $t0, $a1, 0xFFFF
    ctx->r8 = ctx->r5 & 0XFFFF;
    // 0x8000FB08: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x8000FB0C: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8000FB10: ctc1        $a2, $FpcCsr
    set_cop1_cs(ctx->r6);
    // 0x8000FB14: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8000FB18: cvt.w.s     $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    ctx->f8.u32l = CVT_W_S(ctx->f12.fl);
    // 0x8000FB1C: cfc1        $a2, $FpcCsr
    ctx->r6 = get_cop1_cs();
    // 0x8000FB20: nop

    // 0x8000FB24: andi        $a2, $a2, 0x78
    ctx->r6 = ctx->r6 & 0X78;
    // 0x8000FB28: beql        $a2, $zero, L_8000FB78
    if (ctx->r6 == 0) {
        // 0x8000FB2C: mfc1        $a2, $f8
        ctx->r6 = (int32_t)ctx->f8.u32l;
            goto L_8000FB78;
    }
    goto skip_4;
    // 0x8000FB2C: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    skip_4:
    // 0x8000FB30: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8000FB34: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8000FB38: sub.s       $f8, $f12, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f12.fl - ctx->f8.fl;
    // 0x8000FB3C: ctc1        $a2, $FpcCsr
    set_cop1_cs(ctx->r6);
    // 0x8000FB40: nop

    // 0x8000FB44: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8000FB48: cfc1        $a2, $FpcCsr
    ctx->r6 = get_cop1_cs();
    // 0x8000FB4C: nop

    // 0x8000FB50: andi        $a2, $a2, 0x78
    ctx->r6 = ctx->r6 & 0X78;
    // 0x8000FB54: bne         $a2, $zero, L_8000FB6C
    if (ctx->r6 != 0) {
        // 0x8000FB58: nop
    
            goto L_8000FB6C;
    }
    // 0x8000FB58: nop

    // 0x8000FB5C: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x8000FB60: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8000FB64: b           L_8000FB84
    // 0x8000FB68: or          $a2, $a2, $at
    ctx->r6 = ctx->r6 | ctx->r1;
        goto L_8000FB84;
    // 0x8000FB68: or          $a2, $a2, $at
    ctx->r6 = ctx->r6 | ctx->r1;
L_8000FB6C:
    // 0x8000FB6C: b           L_8000FB84
    // 0x8000FB70: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
        goto L_8000FB84;
    // 0x8000FB70: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8000FB74: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
L_8000FB78:
    // 0x8000FB78: nop

    // 0x8000FB7C: bltz        $a2, L_8000FB6C
    if (SIGNED(ctx->r6) < 0) {
        // 0x8000FB80: nop
    
            goto L_8000FB6C;
    }
    // 0x8000FB80: nop

L_8000FB84:
    // 0x8000FB84: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8000FB88: andi        $t2, $a2, 0xFF
    ctx->r10 = ctx->r6 & 0XFF;
    // 0x8000FB8C: jal         0x80038D94
    // 0x8000FB90: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    func_80038D94_39994(rdram, ctx);
        goto after_4;
    // 0x8000FB90: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    after_4:
    // 0x8000FB94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8000FB98: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8000FB9C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8000FBA0: jr          $ra
    // 0x8000FBA4: nop

    TRACE_RETURN()
    return;
    // 0x8000FBA4: nop

;}
RECOMP_FUNC void func_80000450_1050(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80000450: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80000454: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80000458: jal         0x8003F720
    // 0x8000045C: nop

    osInitialize_recomp(rdram, ctx);
        goto after_0;
    // 0x8000045C: nop

    after_0:
    // 0x80000460: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x80000464: addiu       $t6, $t6, 0x41D0
    ctx->r14 = ADD32(ctx->r14, 0X41D0);
    // 0x80000468: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8000046C: lui         $a2, 0x8000
    ctx->r6 = S32(0X8000 << 16);
    // 0x80000470: addiu       $t7, $zero, 0x9
    ctx->r15 = ADD32(0, 0X9);
    // 0x80000474: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80000478: addiu       $a2, $a2, 0x4AC
    ctx->r6 = ADD32(ctx->r6, 0X4AC);
    // 0x8000047C: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    // 0x80000480: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80000484: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80000488: jal         0x8003F9B0
    // 0x8000048C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    osCreateThread_recomp(rdram, ctx);
        goto after_1;
    // 0x8000048C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x80000490: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x80000494: jal         0x8003FB00
    // 0x80000498: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    osStartThread_recomp(rdram, ctx);
        goto after_2;
    // 0x80000498: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    after_2:
    // 0x8000049C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800004A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800004A4: jr          $ra
    // 0x800004A8: nop

    TRACE_RETURN()
    return;
    // 0x800004A8: nop

;}
RECOMP_FUNC void func_80012848_13448(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80012848: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8001284C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80012850: swc1        $f12, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->f12.u32l;
    // 0x80012854: jr          $ra
    // 0x80012858: swc1        $f4, 0xC4($a0)
    MEM_W(0XC4, ctx->r4) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x80012858: swc1        $f4, 0xC4($a0)
    MEM_W(0XC4, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_8003B2B4_3BEB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003B2B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B2B8: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003B2BC: addiu       $v1, $v1, 0x1728
    ctx->r3 = ADD32(ctx->r3, 0X1728);
    // 0x8003B2C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B2C4: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x8003B2C8: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8003B2CC: sb          $t6, 0x49($t7)
    MEM_B(0X49, ctx->r15) = ctx->r14;
    // 0x8003B2D0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003B2D4: lhu         $t8, 0x52($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X52);
    // 0x8003B2D8: beql        $t8, $zero, L_8003B2F8
    if (ctx->r24 == 0) {
        // 0x8003B2DC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8003B2F8;
    }
    goto skip_0;
    // 0x8003B2DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8003B2E0: sh          $zero, 0x4A($v0)
    MEM_H(0X4A, ctx->r2) = 0;
    // 0x8003B2E4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003B2E8: lhu         $t9, 0x52($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X52);
    // 0x8003B2EC: jal         0x8003AFB0
    // 0x8003B2F0: sh          $t9, 0x4C($v0)
    MEM_H(0X4C, ctx->r2) = ctx->r25;
    func_8003AFB0_3BBB0(rdram, ctx);
        goto after_0;
    // 0x8003B2F0: sh          $t9, 0x4C($v0)
    MEM_H(0X4C, ctx->r2) = ctx->r25;
    after_0:
    // 0x8003B2F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003B2F8:
    // 0x8003B2F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003B2FC: jr          $ra
    // 0x8003B300: nop

    TRACE_RETURN()
    return;
    // 0x8003B300: nop

;}
RECOMP_FUNC void func_80000580_1180(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80000580: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80000584: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80000588: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8000058C: lui         $s1, 0x30
    ctx->r17 = S32(0X30 << 16);
    // 0x80000590: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x80000594: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x80000598: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8000059C: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x800005A0: jal         0x80004170
    // 0x800005A4: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    func_80004170_4D70(rdram, ctx);
        goto after_0;
    // 0x800005A4: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    after_0:
    // 0x800005A8: jal         0x80001FE8
    // 0x800005AC: nop

    func_80001FE8_2BE8(rdram, ctx);
        goto after_1;
    // 0x800005AC: nop

    after_1:
    // 0x800005B0: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x800005B4: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x800005B8: lui         $a2, 0x8005
    ctx->r6 = S32(0X8005 << 16);
    // 0x800005BC: lui         $a3, 0x8008
    ctx->r7 = S32(0X8008 << 16);
    // 0x800005C0: ori         $t6, $zero, 0x8000
    ctx->r14 = 0 | 0X8000;
    // 0x800005C4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800005C8: addiu       $a3, $a3, -0x2AA0
    ctx->r7 = ADD32(ctx->r7, -0X2AA0);
    // 0x800005CC: addiu       $a2, $a2, 0x2680
    ctx->r6 = ADD32(ctx->r6, 0X2680);
    // 0x800005D0: addiu       $a1, $a1, -0x5720
    ctx->r5 = ADD32(ctx->r5, -0X5720);
    // 0x800005D4: jal         0x800016E4
    // 0x800005D8: addiu       $a0, $a0, -0x56E0
    ctx->r4 = ADD32(ctx->r4, -0X56E0);
    func_800016E4_22E4(rdram, ctx);
        goto after_2;
    // 0x800005D8: addiu       $a0, $a0, -0x56E0
    ctx->r4 = ADD32(ctx->r4, -0X56E0);
    after_2:
    // 0x800005DC: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x800005E0: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x800005E4: addiu       $a1, $a1, -0x5780
    ctx->r5 = ADD32(ctx->r5, -0X5780);
    // 0x800005E8: addiu       $a0, $a0, -0x5798
    ctx->r4 = ADD32(ctx->r4, -0X5798);
    // 0x800005EC: jal         0x8003FEC0
    // 0x800005F0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_3;
    // 0x800005F0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x800005F4: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x800005F8: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x800005FC: addiu       $a1, $a1, -0x5760
    ctx->r5 = ADD32(ctx->r5, -0X5760);
    // 0x80000600: addiu       $a0, $a0, -0x5778
    ctx->r4 = ADD32(ctx->r4, -0X5778);
    // 0x80000604: jal         0x8003FEC0
    // 0x80000608: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_4;
    // 0x80000608: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x8000060C: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80000610: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x80000614: addiu       $a1, $a1, -0x5728
    ctx->r5 = ADD32(ctx->r5, -0X5728);
    // 0x80000618: addiu       $a0, $a0, -0x5740
    ctx->r4 = ADD32(ctx->r4, -0X5740);
    // 0x8000061C: jal         0x8003FEC0
    // 0x80000620: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_5;
    // 0x80000620: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x80000624: lui         $a1, 0x8026
    ctx->r5 = S32(0X8026 << 16);
    // 0x80000628: addiu       $a1, $a1, 0x1000
    ctx->r5 = ADD32(ctx->r5, 0X1000);
    // 0x8000062C: jal         0x80001C00
    // 0x80000630: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_80001C00_2800(rdram, ctx);
        goto after_6;
    // 0x80000630: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_6:
    // 0x80000634: lui         $a1, 0x8030
    ctx->r5 = S32(0X8030 << 16);
    // 0x80000638: addiu       $a1, $a1, 0x4000
    ctx->r5 = ADD32(ctx->r5, 0X4000);
    // 0x8000063C: jal         0x80001C00
    // 0x80000640: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80001C00_2800(rdram, ctx);
        goto after_7;
    // 0x80000640: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_7:
    // 0x80000644: lui         $t7, 0x8000
    ctx->r15 = S32(0X8000 << 16);
    // 0x80000648: lw          $t7, 0x300($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X300);
    // 0x8000064C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80000650: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x80000654: bne         $t7, $at, L_8000068C
    if (ctx->r15 != ctx->r1) {
        // 0x80000658: addiu       $s0, $s0, -0x5610
        ctx->r16 = ADD32(ctx->r16, -0X5610);
            goto L_8000068C;
    }
    // 0x80000658: addiu       $s0, $s0, -0x5610
    ctx->r16 = ADD32(ctx->r16, -0X5610);
    // 0x8000065C: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x80000660: addiu       $s0, $s0, -0x5610
    ctx->r16 = ADD32(ctx->r16, -0X5610);
    // 0x80000664: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x80000668: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8000066C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80000670: addiu       $a1, $a1, -0x3350
    ctx->r5 = ADD32(ctx->r5, -0X3350);
    // 0x80000674: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80000678: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    // 0x8000067C: jal         0x80006DF0
    // 0x80000680: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    func_80006DF0_79F0(rdram, ctx);
        goto after_8;
    // 0x80000680: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    after_8:
    // 0x80000684: b           L_800006AC
    // 0x80000688: nop

        goto L_800006AC;
    // 0x80000688: nop

L_8000068C:
    // 0x8000068C: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x80000690: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80000694: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80000698: addiu       $a1, $a1, -0x3350
    ctx->r5 = ADD32(ctx->r5, -0X3350);
    // 0x8000069C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800006A0: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    // 0x800006A4: jal         0x80006DF0
    // 0x800006A8: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_80006DF0_79F0(rdram, ctx);
        goto after_9;
    // 0x800006A8: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_9:
L_800006AC:
    // 0x800006AC: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x800006B0: addiu       $v0, $v0, -0x3A38
    ctx->r2 = ADD32(ctx->r2, -0X3A38);
    // 0x800006B4: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x800006B8: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x800006BC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x800006C0: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800006C4: sh          $v1, -0x523C($at)
    MEM_H(-0X523C, ctx->r1) = ctx->r3;
    // 0x800006C8: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x800006CC: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x800006D0: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x800006D4: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800006D8: sb          $t1, -0x5236($at)
    MEM_B(-0X5236, ctx->r1) = ctx->r9;
    // 0x800006DC: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x800006E0: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x800006E4: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x800006E8: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800006EC: sh          $zero, -0x524E($at)
    MEM_H(-0X524E, ctx->r1) = 0;
    // 0x800006F0: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x800006F4: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x800006F8: addiu       $a2, $a2, -0x5778
    ctx->r6 = ADD32(ctx->r6, -0X5778);
    // 0x800006FC: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80000700: sh          $zero, -0x5248($at)
    MEM_H(-0X5248, ctx->r1) = 0;
    // 0x80000704: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x80000708: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8000070C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80000710: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80000714: sh          $v1, -0x5250($at)
    MEM_H(-0X5250, ctx->r1) = ctx->r3;
    // 0x80000718: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8000071C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80000720: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x80000724: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80000728: jal         0x80006F3C
    // 0x8000072C: sh          $zero, -0x524A($at)
    MEM_H(-0X524A, ctx->r1) = 0;
    func_80006F3C_7B3C(rdram, ctx);
        goto after_10;
    // 0x8000072C: sh          $zero, -0x524A($at)
    MEM_H(-0X524A, ctx->r1) = 0;
    after_10:
    // 0x80000730: jal         0x80007014
    // 0x80000734: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80007014_7C14(rdram, ctx);
        goto after_11;
    // 0x80000734: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x80000738: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8000073C: sw          $v0, -0x3350($at)
    MEM_W(-0X3350, ctx->r1) = ctx->r2;
    // 0x80000740: jal         0x8003FF50
    // 0x80000744: addiu       $a0, $zero, 0x5A
    ctx->r4 = ADD32(0, 0X5A);
    osViSetSpecialFeatures_recomp(rdram, ctx);
        goto after_12;
    // 0x80000744: addiu       $a0, $zero, 0x5A
    ctx->r4 = ADD32(0, 0X5A);
    after_12:
    // 0x80000748: jal         0x800049D0
    // 0x8000074C: nop

    func_800049D0_55D0(rdram, ctx);
        goto after_13;
    // 0x8000074C: nop

    after_13:
    // 0x80000750: addiu       $v1, $s1, -0x1
    ctx->r3 = ADD32(ctx->r17, -0X1);
    // 0x80000754: beq         $v1, $zero, L_80000784
    if (ctx->r3 == 0) {
        // 0x80000758: andi        $a0, $v1, 0x3
        ctx->r4 = ctx->r3 & 0X3;
            goto L_80000784;
    }
    // 0x80000758: andi        $a0, $v1, 0x3
    ctx->r4 = ctx->r3 & 0X3;
    // 0x8000075C: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
    // 0x80000760: beq         $a0, $zero, L_80000778
    if (ctx->r4 == 0) {
        // 0x80000764: addu        $v0, $a0, $v1
        ctx->r2 = ADD32(ctx->r4, ctx->r3);
            goto L_80000778;
    }
    // 0x80000764: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
    // 0x80000768: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
L_8000076C:
    // 0x8000076C: bnel        $v0, $v1, L_8000076C
    if (ctx->r2 != ctx->r3) {
        // 0x80000770: addiu       $v1, $v1, -0x1
        ctx->r3 = ADD32(ctx->r3, -0X1);
            goto L_8000076C;
    }
    goto skip_0;
    // 0x80000770: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    skip_0:
    // 0x80000774: beq         $v1, $zero, L_80000784
    if (ctx->r3 == 0) {
        // 0x80000778: addiu       $v1, $v1, -0x4
        ctx->r3 = ADD32(ctx->r3, -0X4);
            goto L_80000784;
    }
L_80000778:
    // 0x80000778: addiu       $v1, $v1, -0x4
    ctx->r3 = ADD32(ctx->r3, -0X4);
L_8000077C:
    // 0x8000077C: bnel        $v1, $zero, L_8000077C
    if (ctx->r3 != 0) {
        // 0x80000780: addiu       $v1, $v1, -0x4
        ctx->r3 = ADD32(ctx->r3, -0X4);
            goto L_8000077C;
    }
    goto skip_1;
    // 0x80000780: addiu       $v1, $v1, -0x4
    ctx->r3 = ADD32(ctx->r3, -0X4);
    skip_1:
L_80000784:
    // 0x80000784: jal         0x800386E0
    // 0x80000788: nop

    func_800386E0_392E0(rdram, ctx);
        goto after_14;
    // 0x80000788: nop

    after_14:
    // 0x8000078C: lui         $v1, 0x2F
    ctx->r3 = S32(0X2F << 16);
    // 0x80000790: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x80000794: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
L_80000798:
    // 0x80000798: bnel        $v1, $zero, L_80000798
    if (ctx->r3 != 0) {
        // 0x8000079C: addiu       $v1, $v1, -0x1
        ctx->r3 = ADD32(ctx->r3, -0X1);
            goto L_80000798;
    }
    goto skip_2;
    // 0x8000079C: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    skip_2:
    // 0x800007A0: jal         0x800231E0
    // 0x800007A4: nop

    func_800231E0_23DE0(rdram, ctx);
        goto after_15;
    // 0x800007A4: nop

    after_15:
    // 0x800007A8: lui         $s3, 0x800C
    ctx->r19 = S32(0X800C << 16);
    // 0x800007AC: addiu       $s3, $s3, -0x3340
    ctx->r19 = ADD32(ctx->r19, -0X3340);
    // 0x800007B0: addiu       $at, $s3, 0x7FFF
    ctx->r1 = ADD32(ctx->r19, 0X7FFF);
    // 0x800007B4: sh          $v0, 0x2E15($at)
    MEM_H(0X2E15, ctx->r1) = ctx->r2;
    // 0x800007B8: addiu       $t7, $s3, 0x7FFF
    ctx->r15 = ADD32(ctx->r19, 0X7FFF);
    // 0x800007BC: lhu         $t7, 0x2E15($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X2E15);
    // 0x800007C0: bne         $t7, $zero, L_80000804
    if (ctx->r15 != 0) {
        // 0x800007C4: nop
    
            goto L_80000804;
    }
    // 0x800007C4: nop

    // 0x800007C8: jal         0x800232EC
    // 0x800007CC: nop

    func_800232EC_23EEC(rdram, ctx);
        goto after_16;
    // 0x800007CC: nop

    after_16:
    // 0x800007D0: bne         $v0, $zero, L_80000804
    if (ctx->r2 != 0) {
        // 0x800007D4: nop
    
            goto L_80000804;
    }
    // 0x800007D4: nop

    // 0x800007D8: jal         0x80023410
    // 0x800007DC: nop

    func_80023410_24010(rdram, ctx);
        goto after_17;
    // 0x800007DC: nop

    after_17:
    // 0x800007E0: bne         $v0, $zero, L_80000804
    if (ctx->r2 != 0) {
        // 0x800007E4: nop
    
            goto L_80000804;
    }
    // 0x800007E4: nop

    // 0x800007E8: jal         0x80023480
    // 0x800007EC: nop

    func_80023480_24080(rdram, ctx);
        goto after_18;
    // 0x800007EC: nop

    after_18:
    // 0x800007F0: bne         $v0, $zero, L_80000804
    if (ctx->r2 != 0) {
        // 0x800007F4: lui         $a0, 0x8016
        ctx->r4 = S32(0X8016 << 16);
            goto L_80000804;
    }
    // 0x800007F4: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x800007F8: jal         0x80023560
    // 0x800007FC: addiu       $a0, $a0, -0x33E8
    ctx->r4 = ADD32(ctx->r4, -0X33E8);
    func_80023560_24160(rdram, ctx);
        goto after_19;
    // 0x800007FC: addiu       $a0, $a0, -0x33E8
    ctx->r4 = ADD32(ctx->r4, -0X33E8);
    after_19:
    // 0x80000800: beq         $v0, $zero, L_80000830
    if (ctx->r2 == 0) {
        // 0x80000804: lui         $v0, 0x8016
        ctx->r2 = S32(0X8016 << 16);
            goto L_80000830;
    }
L_80000804:
    // 0x80000804: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x80000808: addiu       $v0, $v0, -0x33E8
    ctx->r2 = ADD32(ctx->r2, -0X33E8);
    // 0x8000080C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80000810: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
L_80000814:
    // 0x80000814: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80000818: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x8000081C: sb          $zero, 0x1($v0)
    MEM_B(0X1, ctx->r2) = 0;
    // 0x80000820: sb          $zero, 0x2($v0)
    MEM_B(0X2, ctx->r2) = 0;
    // 0x80000824: sb          $zero, 0x3($v0)
    MEM_B(0X3, ctx->r2) = 0;
    // 0x80000828: bne         $v1, $a0, L_80000814
    if (ctx->r3 != ctx->r4) {
        // 0x8000082C: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_80000814;
    }
    // 0x8000082C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
L_80000830:
    // 0x80000830: lui         $s2, 0x8005
    ctx->r18 = S32(0X8005 << 16);
    // 0x80000834: lui         $s1, 0x8005
    ctx->r17 = S32(0X8005 << 16);
    // 0x80000838: lui         $s0, 0x8005
    ctx->r16 = S32(0X8005 << 16);
    // 0x8000083C: addiu       $s0, $s0, 0x48D4
    ctx->r16 = ADD32(ctx->r16, 0X48D4);
    // 0x80000840: addiu       $s1, $s1, 0x48EC
    ctx->r17 = ADD32(ctx->r17, 0X48EC);
    // 0x80000844: addiu       $s2, $s2, 0x48DC
    ctx->r18 = ADD32(ctx->r18, 0X48DC);
L_80000848:
    // 0x80000848: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8000084C: addiu       $a0, $a0, -0x5778
    ctx->r4 = ADD32(ctx->r4, -0X5778);
    // 0x80000850: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x80000854: jal         0x80040110
    // 0x80000858: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_20;
    // 0x80000858: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_20:
    // 0x8000085C: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x80000860: lh          $v1, 0x0($t8)
    ctx->r3 = MEM_H(ctx->r24, 0X0);
    // 0x80000864: beq         $v1, $zero, L_80000848
    if (ctx->r3 == 0) {
        // 0x80000868: nop
    
            goto L_80000848;
    }
    // 0x80000868: nop

    // 0x8000086C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80000870: beq         $v1, $at, L_80000894
    if (ctx->r3 == ctx->r1) {
        // 0x80000874: addiu       $t9, $s3, 0x7FFF
        ctx->r25 = ADD32(ctx->r19, 0X7FFF);
            goto L_80000894;
    }
    // 0x80000874: addiu       $t9, $s3, 0x7FFF
    ctx->r25 = ADD32(ctx->r19, 0X7FFF);
    // 0x80000878: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8000087C: beq         $v1, $at, L_80000920
    if (ctx->r3 == ctx->r1) {
        // 0x80000880: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_80000920;
    }
    // 0x80000880: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80000884: beq         $v1, $at, L_80000954
    if (ctx->r3 == ctx->r1) {
        // 0x80000888: nop
    
            goto L_80000954;
    }
    // 0x80000888: nop

    // 0x8000088C: b           L_80000848
    // 0x80000890: nop

        goto L_80000848;
    // 0x80000890: nop

L_80000894:
    // 0x80000894: lhu         $t9, 0x2DCD($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0X2DCD);
    // 0x80000898: addiu       $at, $s3, 0x7FFF
    ctx->r1 = ADD32(ctx->r19, 0X7FFF);
    // 0x8000089C: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x800008A0: sh          $t0, 0x2DCD($at)
    MEM_H(0X2DCD, ctx->r1) = ctx->r8;
    // 0x800008A4: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x800008A8: lhu         $t2, 0x0($s1)
    ctx->r10 = MEM_HU(ctx->r17, 0X0);
    // 0x800008AC: addiu       $t1, $v0, 0x1
    ctx->r9 = ADD32(ctx->r2, 0X1);
    // 0x800008B0: bne         $t2, $zero, L_80000910
    if (ctx->r10 != 0) {
        // 0x800008B4: sw          $t1, 0x0($s2)
        MEM_W(0X0, ctx->r18) = ctx->r9;
            goto L_80000910;
    }
    // 0x800008B4: sw          $t1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r9;
    // 0x800008B8: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x800008BC: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800008C0: lui         $t7, 0x4
    ctx->r15 = S32(0X4 << 16);
    // 0x800008C4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800008C8: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
    // 0x800008CC: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x800008D0: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x800008D4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800008D8: lbu         $t7, -0x5236($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X5236);
    // 0x800008DC: slt         $at, $t4, $t7
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x800008E0: bne         $at, $zero, L_80000848
    if (ctx->r1 != 0) {
        // 0x800008E4: nop
    
            goto L_80000848;
    }
    // 0x800008E4: nop

    // 0x800008E8: lw          $t8, 0x48E8($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X48E8);
    // 0x800008EC: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x800008F0: addiu       $a0, $a0, -0x5740
    ctx->r4 = ADD32(ctx->r4, -0X5740);
    // 0x800008F4: bne         $t8, $zero, L_80000848
    if (ctx->r24 != 0) {
        // 0x800008F8: lui         $a1, 0x8005
        ctx->r5 = S32(0X8005 << 16);
            goto L_80000848;
    }
    // 0x800008F8: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x800008FC: addiu       $a1, $a1, 0x48D0
    ctx->r5 = ADD32(ctx->r5, 0X48D0);
    // 0x80000900: jal         0x80040250
    // 0x80000904: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    osSendMesg_recomp(rdram, ctx);
        goto after_21;
    // 0x80000904: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_21:
    // 0x80000908: b           L_80000848
    // 0x8000090C: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
        goto L_80000848;
    // 0x8000090C: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
L_80000910:
    // 0x80000910: jal         0x80000D00
    // 0x80000914: nop

    func_80000D00_1900(rdram, ctx);
        goto after_22;
    // 0x80000914: nop

    after_22:
    // 0x80000918: b           L_80000848
    // 0x8000091C: nop

        goto L_80000848;
    // 0x8000091C: nop

L_80000920:
    // 0x80000920: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80000924: sw          $zero, 0x48D8($at)
    MEM_W(0X48D8, ctx->r1) = 0;
    // 0x80000928: lhu         $t9, 0x0($s1)
    ctx->r25 = MEM_HU(ctx->r17, 0X0);
    // 0x8000092C: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x80000930: bne         $t9, $zero, L_80000848
    if (ctx->r25 != 0) {
        // 0x80000934: nop
    
            goto L_80000848;
    }
    // 0x80000934: nop

    // 0x80000938: lw          $t0, 0x48E0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X48E0);
    // 0x8000093C: bne         $t0, $zero, L_80000848
    if (ctx->r8 != 0) {
        // 0x80000940: nop
    
            goto L_80000848;
    }
    // 0x80000940: nop

    // 0x80000944: jal         0x8000098C
    // 0x80000948: nop

    func_8000098C_158C(rdram, ctx);
        goto after_23;
    // 0x80000948: nop

    after_23:
    // 0x8000094C: b           L_80000848
    // 0x80000950: nop

        goto L_80000848;
    // 0x80000950: nop

L_80000954:
    // 0x80000954: jal         0x80038BC8
    // 0x80000958: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80038BC8_397C8(rdram, ctx);
        goto after_24;
    // 0x80000958: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_24:
    // 0x8000095C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80000960: sw          $zero, 0x48E4($at)
    MEM_W(0X48E4, ctx->r1) = 0;
    // 0x80000964: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80000968: b           L_80000848
    // 0x8000096C: sh          $t1, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r9;
        goto L_80000848;
    // 0x8000096C: sh          $t1, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r9;
    // 0x80000970: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80000974: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80000978: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8000097C: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x80000980: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x80000984: jr          $ra
    // 0x80000988: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x80000988: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_80038A20_39620(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80038A20: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x80038A24: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80038A28: sw          $s7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r23;
    // 0x80038A2C: sw          $s6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r22;
    // 0x80038A30: sw          $s5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r21;
    // 0x80038A34: sw          $s4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r20;
    // 0x80038A38: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x80038A3C: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x80038A40: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x80038A44: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x80038A48: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x80038A4C: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x80038A50: lui         $s2, 0x801C
    ctx->r18 = S32(0X801C << 16);
    // 0x80038A54: lui         $s7, 0x801C
    ctx->r23 = S32(0X801C << 16);
    // 0x80038A58: lui         $s5, 0x8017
    ctx->r21 = S32(0X8017 << 16);
    // 0x80038A5C: lui         $s3, 0x8008
    ctx->r19 = S32(0X8008 << 16);
    // 0x80038A60: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x80038A64: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80038A68: addiu       $s0, $s0, 0x1728
    ctx->r16 = ADD32(ctx->r16, 0X1728);
    // 0x80038A6C: addiu       $s3, $s3, -0x5DD0
    ctx->r19 = ADD32(ctx->r19, -0X5DD0);
    // 0x80038A70: addiu       $s5, $s5, 0x29A8
    ctx->r21 = ADD32(ctx->r21, 0X29A8);
    // 0x80038A74: addiu       $s7, $s7, 0x1728
    ctx->r23 = ADD32(ctx->r23, 0X1728);
    // 0x80038A78: addiu       $s2, $s2, 0xC28
    ctx->r18 = ADD32(ctx->r18, 0XC28);
    // 0x80038A7C: addiu       $s1, $s1, 0xA68
    ctx->r17 = ADD32(ctx->r17, 0XA68);
    // 0x80038A80: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    // 0x80038A84: addiu       $s4, $sp, 0x70
    ctx->r20 = ADD32(ctx->r29, 0X70);
L_80038A88:
    // 0x80038A88: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x80038A8C: sh          $t6, 0x70($sp)
    MEM_H(0X70, ctx->r29) = ctx->r14;
    // 0x80038A90: sh          $zero, 0x72($sp)
    MEM_H(0X72, ctx->r29) = 0;
    // 0x80038A94: sb          $zero, 0x74($sp)
    MEM_B(0X74, ctx->r29) = 0;
    // 0x80038A98: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x80038A9C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80038AA0: jal         0x800482F8
    // 0x80038AA4: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    alSynAllocVoice(rdram, ctx);
        goto after_0;
    // 0x80038AA4: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_0:
    // 0x80038AA8: sw          $s2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r18;
    // 0x80038AAC: sb          $zero, 0xD($s2)
    MEM_B(0XD, ctx->r18) = 0;
    // 0x80038AB0: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x80038AB4: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80038AB8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80038ABC: lbu         $t8, 0xD($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0XD);
    // 0x80038AC0: sb          $t8, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r24;
    // 0x80038AC4: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x80038AC8: lbu         $t9, 0xC($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0XC);
    // 0x80038ACC: lbu         $t6, 0xD($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0XD);
    // 0x80038AD0: sll         $t3, $t9, 2
    ctx->r11 = S32(ctx->r25 << 2);
    // 0x80038AD4: addu        $t4, $s5, $t3
    ctx->r12 = ADD32(ctx->r21, ctx->r11);
    // 0x80038AD8: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x80038ADC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80038AE0: lw          $t0, 0x4($t5)
    ctx->r8 = MEM_W(ctx->r13, 0X4);
    // 0x80038AE4: addu        $t8, $t0, $t7
    ctx->r24 = ADD32(ctx->r8, ctx->r15);
    // 0x80038AE8: lw          $t1, 0xC($t8)
    ctx->r9 = MEM_W(ctx->r24, 0XC);
    // 0x80038AEC: addiu       $t8, $zero, 0x40
    ctx->r24 = ADD32(0, 0X40);
    // 0x80038AF0: lw          $t2, 0x10($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X10);
    // 0x80038AF4: lw          $t9, 0x8($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X8);
    // 0x80038AF8: sw          $t9, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r25;
    // 0x80038AFC: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x80038B00: swc1        $f20, 0xA4($t3)
    MEM_W(0XA4, ctx->r11) = ctx->f20.u32l;
    // 0x80038B04: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x80038B08: sh          $zero, 0xA8($t4)
    MEM_H(0XA8, ctx->r12) = 0;
    // 0x80038B0C: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    // 0x80038B10: sh          $zero, 0xAA($t5)
    MEM_H(0XAA, ctx->r13) = 0;
    // 0x80038B14: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x80038B18: sb          $s6, 0xE($t6)
    MEM_B(0XE, ctx->r14) = ctx->r22;
    // 0x80038B1C: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x80038B20: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x80038B24: lw          $a2, 0x14($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X14);
    // 0x80038B28: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80038B2C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80038B30: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x80038B34: jal         0x80048440
    // 0x80038B38: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    alSynStartVoiceParams(rdram, ctx);
        goto after_1;
    // 0x80038B38: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x80038B3C: addiu       $s2, $s2, 0xB0
    ctx->r18 = ADD32(ctx->r18, 0XB0);
    // 0x80038B40: bne         $s2, $s7, L_80038A88
    if (ctx->r18 != ctx->r23) {
        // 0x80038B44: addiu       $s1, $s1, 0x1C
        ctx->r17 = ADD32(ctx->r17, 0X1C);
            goto L_80038A88;
    }
    // 0x80038B44: addiu       $s1, $s1, 0x1C
    ctx->r17 = ADD32(ctx->r17, 0X1C);
    // 0x80038B48: jal         0x80039D60
    // 0x80038B4C: nop

    func_80039D60_3A960(rdram, ctx);
        goto after_2;
    // 0x80038B4C: nop

    after_2:
    // 0x80038B50: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x80038B54: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80038B58: jal         0x80048530
    // 0x80038B5C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    alSynGetFXRef(rdram, ctx);
        goto after_3;
    // 0x80038B5C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80038B60: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80038B64: sw          $v0, 0x7730($at)
    MEM_W(0X7730, ctx->r1) = ctx->r2;
    // 0x80038B68: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80038B6C: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x80038B70: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x80038B74: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x80038B78: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x80038B7C: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x80038B80: lw          $s4, 0x3C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3C);
    // 0x80038B84: lw          $s5, 0x40($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X40);
    // 0x80038B88: lw          $s6, 0x44($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X44);
    // 0x80038B8C: lw          $s7, 0x48($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X48);
    // 0x80038B90: jr          $ra
    // 0x80038B94: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    TRACE_RETURN()
    return;
    // 0x80038B94: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_80005FFC_6BFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80005FFC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80006000: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80006004: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x80006008: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8000600C: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x80006010: lhu         $t3, 0x3A($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X3A);
    // 0x80006014: lhu         $t4, 0x3E($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X3E);
    // 0x80006018: lhu         $t5, 0x42($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X42);
    // 0x8000601C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80006020: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80006024: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80006028: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x8000602C: sll         $t7, $a1, 16
    ctx->r15 = S32(ctx->r5 << 16);
    // 0x80006030: sll         $t9, $a2, 16
    ctx->r25 = S32(ctx->r6 << 16);
    // 0x80006034: sll         $t1, $a3, 16
    ctx->r9 = S32(ctx->r7 << 16);
    // 0x80006038: sra         $a3, $t1, 16
    ctx->r7 = S32(SIGNED(ctx->r9) >> 16);
    // 0x8000603C: sra         $a2, $t9, 16
    ctx->r6 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80006040: sra         $a1, $t7, 16
    ctx->r5 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80006044: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80006048: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8000604C: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x80006050: jal         0x8000607C
    // 0x80006054: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    func_8000607C_6C7C(rdram, ctx);
        goto after_0;
    // 0x80006054: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    after_0:
    // 0x80006058: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x8000605C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80006060: sh          $t7, 0x7AD6($at)
    MEM_H(0X7AD6, ctx->r1) = ctx->r15;
    // 0x80006064: jal         0x80003728
    // 0x80006068: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_80003728_4328(rdram, ctx);
        goto after_1;
    // 0x80006068: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_1:
    // 0x8000606C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80006070: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80006074: jr          $ra
    // 0x80006078: nop

    TRACE_RETURN()
    return;
    // 0x80006078: nop

;}
RECOMP_FUNC void func_80023610_24210(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80023610: lui         $v0, 0x8017
    ctx->r2 = S32(0X8017 << 16);
    // 0x80023614: addiu       $v0, $v0, -0x717C
    ctx->r2 = ADD32(ctx->r2, -0X717C);
    // 0x80023618: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8002361C: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80023620: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80023624: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80023628: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8002362C: sw          $a0, 0x3F4($t7)
    MEM_W(0X3F4, ctx->r15) = ctx->r4;
    // 0x80023630: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x80023634: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x80023638: addiu       $t9, $zero, 0x500
    ctx->r25 = ADD32(0, 0X500);
    // 0x8002363C: lw          $a1, 0x3F0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X3F0);
    // 0x80023640: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80023644: sll         $t8, $a3, 2
    ctx->r24 = S32(ctx->r7 << 2);
    // 0x80023648: lw          $t0, 0x3F4($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X3F4);
    // 0x8002364C: addu        $t8, $t8, $a3
    ctx->r24 = ADD32(ctx->r24, ctx->r7);
    // 0x80023650: sll         $t8, $t8, 8
    ctx->r24 = S32(ctx->r24 << 8);
    // 0x80023654: addiu       $a3, $t8, 0x100
    ctx->r7 = ADD32(ctx->r24, 0X100);
    // 0x80023658: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8002365C: jal         0x8004525C
    // 0x80023660: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    osPfsReadWriteFile_recomp(rdram, ctx);
        goto after_0;
    // 0x80023660: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_0:
    // 0x80023664: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80023668: jal         0x80023ADC
    // 0x8002366C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80023ADC_246DC(rdram, ctx);
        goto after_1;
    // 0x8002366C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80023670: lui         $v1, 0x8017
    ctx->r3 = S32(0X8017 << 16);
    // 0x80023674: addiu       $v1, $v1, -0x717C
    ctx->r3 = ADD32(ctx->r3, -0X717C);
    // 0x80023678: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x8002367C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80023680: sw          $t1, 0x3FC($t2)
    MEM_W(0X3FC, ctx->r10) = ctx->r9;
    // 0x80023684: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x80023688: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8002368C: lw          $v0, 0x3FC($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X3FC);
    // 0x80023690: jr          $ra
    // 0x80023694: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80023694: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8003BA40_3C640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003BA40: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003BA44: addiu       $a0, $a0, 0x172C
    ctx->r4 = ADD32(ctx->r4, 0X172C);
    // 0x8003BA48: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x8003BA4C: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8003BA50: addiu       $a1, $a1, 0x1728
    ctx->r5 = ADD32(ctx->r5, 0X1728);
    // 0x8003BA54: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8003BA58: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x8003BA5C: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8003BA60: bne         $v0, $zero, L_8003BAA4
    if (ctx->r2 != 0) {
        // 0x8003BA64: sll         $t1, $v0, 1
        ctx->r9 = S32(ctx->r2 << 1);
            goto L_8003BAA4;
    }
    // 0x8003BA64: sll         $t1, $v0, 1
    ctx->r9 = S32(ctx->r2 << 1);
    // 0x8003BA68: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8003BA6C: addiu       $a1, $a1, 0x1728
    ctx->r5 = ADD32(ctx->r5, 0X1728);
    // 0x8003BA70: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x8003BA74: sh          $zero, 0x52($t7)
    MEM_H(0X52, ctx->r15) = 0;
    // 0x8003BA78: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x8003BA7C: lbu         $t8, 0x22($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X22);
    // 0x8003BA80: bne         $t8, $zero, L_8003BAF8
    if (ctx->r24 != 0) {
        // 0x8003BA84: nop
    
            goto L_8003BAF8;
    }
    // 0x8003BA84: nop

    // 0x8003BA88: lbu         $t9, 0x49($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X49);
    // 0x8003BA8C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8003BA90: addiu       $t0, $zero, 0x7FFF
    ctx->r8 = ADD32(0, 0X7FFF);
    // 0x8003BA94: bne         $t9, $at, L_8003BAF8
    if (ctx->r25 != ctx->r1) {
        // 0x8003BA98: nop
    
            goto L_8003BAF8;
    }
    // 0x8003BA98: nop

    // 0x8003BA9C: jr          $ra
    // 0x8003BAA0: sh          $t0, 0x4C($v1)
    MEM_H(0X4C, ctx->r3) = ctx->r8;
    TRACE_RETURN()
    return;
    // 0x8003BAA0: sh          $t0, 0x4C($v1)
    MEM_H(0X4C, ctx->r3) = ctx->r8;
L_8003BAA4:
    // 0x8003BAA4: negu        $t2, $t1
    ctx->r10 = SUB32(0, ctx->r9);
    // 0x8003BAA8: lui         $t3, 0x8007
    ctx->r11 = S32(0X8007 << 16);
    // 0x8003BAAC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8003BAB0: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x8003BAB4: lhu         $t3, -0x1702($t3)
    ctx->r11 = MEM_HU(ctx->r11, -0X1702);
    // 0x8003BAB8: lhu         $a0, 0x52($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X52);
    // 0x8003BABC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8003BAC0: sh          $t4, 0x52($v1)
    MEM_H(0X52, ctx->r3) = ctx->r12;
    // 0x8003BAC4: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x8003BAC8: lbu         $t5, 0x22($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X22);
    // 0x8003BACC: bne         $t5, $zero, L_8003BAF8
    if (ctx->r13 != 0) {
        // 0x8003BAD0: nop
    
            goto L_8003BAF8;
    }
    // 0x8003BAD0: nop

    // 0x8003BAD4: lbu         $t6, 0x49($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X49);
    // 0x8003BAD8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8003BADC: bne         $t6, $at, L_8003BAF8
    if (ctx->r14 != ctx->r1) {
        // 0x8003BAE0: nop
    
            goto L_8003BAF8;
    }
    // 0x8003BAE0: nop

    // 0x8003BAE4: lhu         $t7, 0x52($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X52);
    // 0x8003BAE8: bne         $a0, $zero, L_8003BAF8
    if (ctx->r4 != 0) {
        // 0x8003BAEC: sh          $t7, 0x4C($v1)
        MEM_H(0X4C, ctx->r3) = ctx->r15;
            goto L_8003BAF8;
    }
    // 0x8003BAEC: sh          $t7, 0x4C($v1)
    MEM_H(0X4C, ctx->r3) = ctx->r15;
    // 0x8003BAF0: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x8003BAF4: sh          $zero, 0x4A($t8)
    MEM_H(0X4A, ctx->r24) = 0;
L_8003BAF8:
    // 0x8003BAF8: jr          $ra
    // 0x8003BAFC: nop

    TRACE_RETURN()
    return;
    // 0x8003BAFC: nop

;}
RECOMP_FUNC void func_8002EB10_2F710(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002EB10: addiu       $sp, $sp, -0x138
    ctx->r29 = ADD32(ctx->r29, -0X138);
    // 0x8002EB14: lwc1        $f12, 0x14C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x8002EB18: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8002EB1C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8002EB20: mul.s       $f0, $f12, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x8002EB24: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x8002EB28: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8002EB2C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8002EB30: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8002EB34: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8002EB38: addiu       $s0, $sp, 0xF0
    ctx->r16 = ADD32(ctx->r29, 0XF0);
    // 0x8002EB3C: add.s       $f2, $f12, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f12.fl + ctx->f6.fl;
    // 0x8002EB40: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8002EB44: sw          $a0, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->r4;
    // 0x8002EB48: add.s       $f4, $f0, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f14.fl;
    // 0x8002EB4C: sw          $a3, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r7;
    // 0x8002EB50: sw          $a1, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->r5;
    // 0x8002EB54: sw          $a2, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->r6;
    // 0x8002EB58: sh          $zero, 0xE0($sp)
    MEM_H(0XE0, ctx->r29) = 0;
    // 0x8002EB5C: swc1        $f4, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f4.u32l;
    // 0x8002EB60: lw          $a3, 0x148($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X148);
    // 0x8002EB64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8002EB68: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    // 0x8002EB6C: swc1        $f2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f2.u32l;
    // 0x8002EB70: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x8002EB74: swc1        $f14, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f14.u32l;
    // 0x8002EB78: swc1        $f20, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f20.u32l;
    // 0x8002EB7C: swc1        $f20, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f20.u32l;
    // 0x8002EB80: swc1        $f20, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f20.u32l;
    // 0x8002EB84: swc1        $f20, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f20.u32l;
    // 0x8002EB88: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8002EB8C: jal         0x8002AA00
    // 0x8002EB90: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    func_8002AA00_2B600(rdram, ctx);
        goto after_0;
    // 0x8002EB90: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x8002EB94: lh          $t6, 0x128($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X128);
    // 0x8002EB98: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x8002EB9C: bne         $t6, $at, L_8002EC50
    if (ctx->r14 != ctx->r1) {
        // 0x8002EBA0: nop
    
            goto L_8002EC50;
    }
    // 0x8002EBA0: nop

    // 0x8002EBA4: lwc1        $f12, 0x12C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x8002EBA8: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8002EBAC: lwc1        $f10, 0x118($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X118);
    // 0x8002EBB0: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8002EBB4: c.le.s      $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f12.fl <= ctx->f8.fl;
    // 0x8002EBB8: nop

    // 0x8002EBBC: bc1f        L_8002EC50
    if (!c1cs) {
        // 0x8002EBC0: nop
    
            goto L_8002EC50;
    }
    // 0x8002EBC0: nop

    // 0x8002EBC4: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x8002EBC8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8002EBCC: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x8002EBD0: lwc1        $f4, 0xE4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x8002EBD4: c.lt.d      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.d < ctx->f18.d;
    // 0x8002EBD8: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x8002EBDC: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x8002EBE0: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x8002EBE4: bc1f        L_8002EC50
    if (!c1cs) {
        // 0x8002EBE8: addiu       $a3, $sp, 0x54
        ctx->r7 = ADD32(ctx->r29, 0X54);
            goto L_8002EC50;
    }
    // 0x8002EBE8: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x8002EBEC: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x8002EBF0: addiu       $t7, $sp, 0xA8
    ctx->r15 = ADD32(ctx->r29, 0XA8);
    // 0x8002EBF4: or          $t0, $s0, $zero
    ctx->r8 = ctx->r16 | 0;
    // 0x8002EBF8: addiu       $t9, $s0, 0x48
    ctx->r25 = ADD32(ctx->r16, 0X48);
    // 0x8002EBFC: bc1fl       L_8002EC2C
    if (!c1cs) {
        // 0x8002EC00: lwc1        $f12, 0x108($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X108);
            goto L_8002EC2C;
    }
    goto skip_0;
    // 0x8002EC00: lwc1        $f12, 0x108($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X108);
    skip_0:
L_8002EC04:
    // 0x8002EC04: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x8002EC08: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x8002EC0C: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x8002EC10: sw          $at, -0xC($t7)
    MEM_W(-0XC, ctx->r15) = ctx->r1;
    // 0x8002EC14: lw          $at, -0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X8);
    // 0x8002EC18: sw          $at, -0x8($t7)
    MEM_W(-0X8, ctx->r15) = ctx->r1;
    // 0x8002EC1C: lw          $at, -0x4($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X4);
    // 0x8002EC20: bne         $t0, $t9, L_8002EC04
    if (ctx->r8 != ctx->r25) {
        // 0x8002EC24: sw          $at, -0x4($t7)
        MEM_W(-0X4, ctx->r15) = ctx->r1;
            goto L_8002EC04;
    }
    // 0x8002EC24: sw          $at, -0x4($t7)
    MEM_W(-0X4, ctx->r15) = ctx->r1;
    // 0x8002EC28: lwc1        $f12, 0x108($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X108);
L_8002EC2C:
    // 0x8002EC2C: lwc1        $f6, 0x14C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x8002EC30: sub.s       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f6.fl;
    // 0x8002EC34: c.lt.s      $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl < ctx->f12.fl;
    // 0x8002EC38: swc1        $f12, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f12.u32l;
    // 0x8002EC3C: bc1f        L_8002EC48
    if (!c1cs) {
        // 0x8002EC40: nop
    
            goto L_8002EC48;
    }
    // 0x8002EC40: nop

    // 0x8002EC44: swc1        $f20, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f20.u32l;
L_8002EC48:
    // 0x8002EC48: jal         0x80030688
    // 0x8002EC4C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80030688_31288(rdram, ctx);
        goto after_1;
    // 0x8002EC4C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_1:
L_8002EC50:
    // 0x8002EC50: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002EC54: lwc1        $f8, -0x3B70($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X3B70);
    // 0x8002EC58: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002EC5C: lwc1        $f10, -0x3B6C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X3B6C);
    // 0x8002EC60: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8002EC64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8002EC68: lw          $a1, 0x13C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X13C);
    // 0x8002EC6C: lw          $a2, 0x140($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X140);
    // 0x8002EC70: lw          $a3, 0x148($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X148);
    // 0x8002EC74: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8002EC78: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x8002EC7C: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x8002EC80: jal         0x8002AA00
    // 0x8002EC84: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    func_8002AA00_2B600(rdram, ctx);
        goto after_2;
    // 0x8002EC84: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x8002EC88: lh          $t1, 0x128($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X128);
    // 0x8002EC8C: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x8002EC90: bne         $t1, $at, L_8002ED88
    if (ctx->r9 != ctx->r1) {
        // 0x8002EC94: nop
    
            goto L_8002ED88;
    }
    // 0x8002EC94: nop

    // 0x8002EC98: lwc1        $f12, 0x12C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x8002EC9C: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8002ECA0: lwc1        $f4, 0x118($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X118);
    // 0x8002ECA4: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8002ECA8: c.le.s      $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f12.fl <= ctx->f18.fl;
    // 0x8002ECAC: nop

    // 0x8002ECB0: bc1f        L_8002ED88
    if (!c1cs) {
        // 0x8002ECB4: nop
    
            goto L_8002ED88;
    }
    // 0x8002ECB4: nop

    // 0x8002ECB8: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x8002ECBC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8002ECC0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8002ECC4: lwc1        $f10, 0xE4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x8002ECC8: c.lt.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d < ctx->f8.d;
    // 0x8002ECCC: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x8002ECD0: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x8002ECD4: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x8002ECD8: bc1f        L_8002ED88
    if (!c1cs) {
        // 0x8002ECDC: addiu       $a3, $sp, 0x54
        ctx->r7 = ADD32(ctx->r29, 0X54);
            goto L_8002ED88;
    }
    // 0x8002ECDC: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x8002ECE0: c.lt.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl < ctx->f10.fl;
    // 0x8002ECE4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8002ECE8: addiu       $t2, $sp, 0xA8
    ctx->r10 = ADD32(ctx->r29, 0XA8);
    // 0x8002ECEC: or          $t5, $s0, $zero
    ctx->r13 = ctx->r16 | 0;
    // 0x8002ECF0: bc1f        L_8002ED1C
    if (!c1cs) {
        // 0x8002ECF4: addiu       $t4, $s0, 0x48
        ctx->r12 = ADD32(ctx->r16, 0X48);
            goto L_8002ED1C;
    }
    // 0x8002ECF4: addiu       $t4, $s0, 0x48
    ctx->r12 = ADD32(ctx->r16, 0X48);
L_8002ECF8:
    // 0x8002ECF8: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x8002ECFC: addiu       $t5, $t5, 0xC
    ctx->r13 = ADD32(ctx->r13, 0XC);
    // 0x8002ED00: addiu       $t2, $t2, 0xC
    ctx->r10 = ADD32(ctx->r10, 0XC);
    // 0x8002ED04: sw          $at, -0xC($t2)
    MEM_W(-0XC, ctx->r10) = ctx->r1;
    // 0x8002ED08: lw          $at, -0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, -0X8);
    // 0x8002ED0C: sw          $at, -0x8($t2)
    MEM_W(-0X8, ctx->r10) = ctx->r1;
    // 0x8002ED10: lw          $at, -0x4($t5)
    ctx->r1 = MEM_W(ctx->r13, -0X4);
    // 0x8002ED14: bne         $t5, $t4, L_8002ECF8
    if (ctx->r13 != ctx->r12) {
        // 0x8002ED18: sw          $at, -0x4($t2)
        MEM_W(-0X4, ctx->r10) = ctx->r1;
            goto L_8002ECF8;
    }
    // 0x8002ED18: sw          $at, -0x4($t2)
    MEM_W(-0X4, ctx->r10) = ctx->r1;
L_8002ED1C:
    // 0x8002ED1C: lwc1        $f16, 0x14C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x8002ED20: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002ED24: ldc1        $f18, -0x3B68($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0X3B68);
    // 0x8002ED28: cvt.d.s     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f0.d = CVT_D_S(ctx->f16.fl);
    // 0x8002ED2C: lwc1        $f12, 0x108($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X108);
    // 0x8002ED30: mul.d       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f0.d, ctx->f18.d);
    // 0x8002ED34: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8002ED38: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x8002ED3C: nop

    // 0x8002ED40: mul.d       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f0.d, ctx->f8.d);
    // 0x8002ED44: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x8002ED48: sub.s       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f6.fl;
    // 0x8002ED4C: c.lt.s      $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl < ctx->f12.fl;
    // 0x8002ED50: swc1        $f12, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f12.u32l;
    // 0x8002ED54: bc1fl       L_8002ED64
    if (!c1cs) {
        // 0x8002ED58: cvt.s.d     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
            goto L_8002ED64;
    }
    goto skip_1;
    // 0x8002ED58: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    skip_1:
    // 0x8002ED5C: swc1        $f20, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f20.u32l;
    // 0x8002ED60: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
L_8002ED64:
    // 0x8002ED64: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
    // 0x8002ED68: sub.s       $f12, $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f16.fl;
    // 0x8002ED6C: c.lt.s      $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl < ctx->f12.fl;
    // 0x8002ED70: swc1        $f12, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f12.u32l;
    // 0x8002ED74: bc1f        L_8002ED80
    if (!c1cs) {
        // 0x8002ED78: nop
    
            goto L_8002ED80;
    }
    // 0x8002ED78: nop

    // 0x8002ED7C: swc1        $f20, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f20.u32l;
L_8002ED80:
    // 0x8002ED80: jal         0x80030688
    // 0x8002ED84: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80030688_31288(rdram, ctx);
        goto after_3;
    // 0x8002ED84: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_3:
L_8002ED88:
    // 0x8002ED88: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002ED8C: lwc1        $f18, -0x3B60($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X3B60);
    // 0x8002ED90: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002ED94: lwc1        $f4, -0x3B5C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3B5C);
    // 0x8002ED98: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8002ED9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8002EDA0: lw          $a1, 0x13C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X13C);
    // 0x8002EDA4: lw          $a2, 0x140($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X140);
    // 0x8002EDA8: lw          $a3, 0x148($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X148);
    // 0x8002EDAC: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8002EDB0: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x8002EDB4: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x8002EDB8: jal         0x8002AA00
    // 0x8002EDBC: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    func_8002AA00_2B600(rdram, ctx);
        goto after_4;
    // 0x8002EDBC: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x8002EDC0: lh          $t6, 0x128($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X128);
    // 0x8002EDC4: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x8002EDC8: bnel        $t6, $at, L_8002EEC4
    if (ctx->r14 != ctx->r1) {
        // 0x8002EDCC: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8002EEC4;
    }
    goto skip_2;
    // 0x8002EDCC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_2:
    // 0x8002EDD0: lwc1        $f12, 0x12C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x8002EDD4: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8002EDD8: lwc1        $f10, 0x118($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X118);
    // 0x8002EDDC: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8002EDE0: c.le.s      $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f12.fl <= ctx->f8.fl;
    // 0x8002EDE4: nop

    // 0x8002EDE8: bc1fl       L_8002EEC4
    if (!c1cs) {
        // 0x8002EDEC: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8002EEC4;
    }
    goto skip_3;
    // 0x8002EDEC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_3:
    // 0x8002EDF0: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x8002EDF4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8002EDF8: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x8002EDFC: lwc1        $f14, 0x14C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x8002EE00: c.lt.d      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.d < ctx->f18.d;
    // 0x8002EE04: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002EE08: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x8002EE0C: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x8002EE10: bc1f        L_8002EEC0
    if (!c1cs) {
        // 0x8002EE14: addiu       $a2, $sp, 0x58
        ctx->r6 = ADD32(ctx->r29, 0X58);
            goto L_8002EEC0;
    }
    // 0x8002EE14: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x8002EE18: ldc1        $f6, -0x3B58($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X3B58);
    // 0x8002EE1C: cvt.d.s     $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f4.d = CVT_D_S(ctx->f14.fl);
    // 0x8002EE20: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8002EE24: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x8002EE28: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x8002EE2C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8002EE30: cvt.d.s     $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f10.d = CVT_D_S(ctx->f14.fl);
    // 0x8002EE34: lwc1        $f4, 0xE4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x8002EE38: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x8002EE3C: addiu       $t8, $sp, 0xA8
    ctx->r24 = ADD32(ctx->r29, 0XA8);
    // 0x8002EE40: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x8002EE44: or          $t7, $s0, $zero
    ctx->r15 = ctx->r16 | 0;
    // 0x8002EE48: addiu       $t0, $s0, 0x48
    ctx->r8 = ADD32(ctx->r16, 0X48);
    // 0x8002EE4C: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x8002EE50: cvt.s.d     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f0.fl = CVT_S_D(ctx->f8.d);
    // 0x8002EE54: bc1f        L_8002EE80
    if (!c1cs) {
        // 0x8002EE58: cvt.s.d     $f2, $f18
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f2.fl = CVT_S_D(ctx->f18.d);
            goto L_8002EE80;
    }
    // 0x8002EE58: cvt.s.d     $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f2.fl = CVT_S_D(ctx->f18.d);
L_8002EE5C:
    // 0x8002EE5C: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x8002EE60: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x8002EE64: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x8002EE68: sw          $at, -0xC($t8)
    MEM_W(-0XC, ctx->r24) = ctx->r1;
    // 0x8002EE6C: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x8002EE70: sw          $at, -0x8($t8)
    MEM_W(-0X8, ctx->r24) = ctx->r1;
    // 0x8002EE74: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x8002EE78: bne         $t7, $t0, L_8002EE5C
    if (ctx->r15 != ctx->r8) {
        // 0x8002EE7C: sw          $at, -0x4($t8)
        MEM_W(-0X4, ctx->r24) = ctx->r1;
            goto L_8002EE5C;
    }
    // 0x8002EE7C: sw          $at, -0x4($t8)
    MEM_W(-0X4, ctx->r24) = ctx->r1;
L_8002EE80:
    // 0x8002EE80: lwc1        $f12, 0x108($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X108);
    // 0x8002EE84: sub.s       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x8002EE88: c.lt.s      $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl < ctx->f12.fl;
    // 0x8002EE8C: swc1        $f12, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f12.u32l;
    // 0x8002EE90: bc1fl       L_8002EEA0
    if (!c1cs) {
        // 0x8002EE94: lwc1        $f12, 0x110($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
            goto L_8002EEA0;
    }
    goto skip_4;
    // 0x8002EE94: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
    skip_4:
    // 0x8002EE98: swc1        $f20, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f20.u32l;
    // 0x8002EE9C: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
L_8002EEA0:
    // 0x8002EEA0: sub.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x8002EEA4: c.lt.s      $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl < ctx->f12.fl;
    // 0x8002EEA8: swc1        $f12, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f12.u32l;
    // 0x8002EEAC: bc1f        L_8002EEB8
    if (!c1cs) {
        // 0x8002EEB0: nop
    
            goto L_8002EEB8;
    }
    // 0x8002EEB0: nop

    // 0x8002EEB4: swc1        $f20, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f20.u32l;
L_8002EEB8:
    // 0x8002EEB8: jal         0x80030688
    // 0x8002EEBC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80030688_31288(rdram, ctx);
        goto after_5;
    // 0x8002EEBC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_5:
L_8002EEC0:
    // 0x8002EEC0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_8002EEC4:
    // 0x8002EEC4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8002EEC8: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8002EECC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8002EED0: lw          $a1, 0x13C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X13C);
    // 0x8002EED4: lw          $a2, 0x140($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X140);
    // 0x8002EED8: lw          $a3, 0x148($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X148);
    // 0x8002EEDC: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x8002EEE0: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8002EEE4: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x8002EEE8: jal         0x8002AA00
    // 0x8002EEEC: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    func_8002AA00_2B600(rdram, ctx);
        goto after_6;
    // 0x8002EEEC: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    after_6:
    // 0x8002EEF0: lh          $t1, 0x128($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X128);
    // 0x8002EEF4: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x8002EEF8: bne         $t1, $at, L_8002EFAC
    if (ctx->r9 != ctx->r1) {
        // 0x8002EEFC: nop
    
            goto L_8002EFAC;
    }
    // 0x8002EEFC: nop

    // 0x8002EF00: lwc1        $f12, 0x12C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x8002EF04: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8002EF08: lwc1        $f16, 0x118($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X118);
    // 0x8002EF0C: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8002EF10: c.le.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl <= ctx->f10.fl;
    // 0x8002EF14: nop

    // 0x8002EF18: bc1f        L_8002EFAC
    if (!c1cs) {
        // 0x8002EF1C: nop
    
            goto L_8002EFAC;
    }
    // 0x8002EF1C: nop

    // 0x8002EF20: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x8002EF24: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8002EF28: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x8002EF2C: lwc1        $f6, 0xE4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x8002EF30: c.lt.d      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.d < ctx->f4.d;
    // 0x8002EF34: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x8002EF38: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x8002EF3C: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x8002EF40: bc1f        L_8002EFAC
    if (!c1cs) {
        // 0x8002EF44: addiu       $a3, $sp, 0x54
        ctx->r7 = ADD32(ctx->r29, 0X54);
            goto L_8002EFAC;
    }
    // 0x8002EF44: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x8002EF48: c.lt.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl < ctx->f6.fl;
    // 0x8002EF4C: addiu       $t3, $sp, 0xA8
    ctx->r11 = ADD32(ctx->r29, 0XA8);
    // 0x8002EF50: or          $t2, $s0, $zero
    ctx->r10 = ctx->r16 | 0;
    // 0x8002EF54: addiu       $t5, $s0, 0x48
    ctx->r13 = ADD32(ctx->r16, 0X48);
    // 0x8002EF58: bc1fl       L_8002EF88
    if (!c1cs) {
        // 0x8002EF5C: lwc1        $f12, 0x110($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
            goto L_8002EF88;
    }
    goto skip_5;
    // 0x8002EF5C: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
    skip_5:
L_8002EF60:
    // 0x8002EF60: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x8002EF64: addiu       $t2, $t2, 0xC
    ctx->r10 = ADD32(ctx->r10, 0XC);
    // 0x8002EF68: addiu       $t3, $t3, 0xC
    ctx->r11 = ADD32(ctx->r11, 0XC);
    // 0x8002EF6C: sw          $at, -0xC($t3)
    MEM_W(-0XC, ctx->r11) = ctx->r1;
    // 0x8002EF70: lw          $at, -0x8($t2)
    ctx->r1 = MEM_W(ctx->r10, -0X8);
    // 0x8002EF74: sw          $at, -0x8($t3)
    MEM_W(-0X8, ctx->r11) = ctx->r1;
    // 0x8002EF78: lw          $at, -0x4($t2)
    ctx->r1 = MEM_W(ctx->r10, -0X4);
    // 0x8002EF7C: bne         $t2, $t5, L_8002EF60
    if (ctx->r10 != ctx->r13) {
        // 0x8002EF80: sw          $at, -0x4($t3)
        MEM_W(-0X4, ctx->r11) = ctx->r1;
            goto L_8002EF60;
    }
    // 0x8002EF80: sw          $at, -0x4($t3)
    MEM_W(-0X4, ctx->r11) = ctx->r1;
    // 0x8002EF84: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
L_8002EF88:
    // 0x8002EF88: lwc1        $f8, 0x14C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x8002EF8C: sub.s       $f12, $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f8.fl;
    // 0x8002EF90: c.lt.s      $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl < ctx->f12.fl;
    // 0x8002EF94: swc1        $f12, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f12.u32l;
    // 0x8002EF98: bc1f        L_8002EFA4
    if (!c1cs) {
        // 0x8002EF9C: nop
    
            goto L_8002EFA4;
    }
    // 0x8002EF9C: nop

    // 0x8002EFA0: swc1        $f20, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f20.u32l;
L_8002EFA4:
    // 0x8002EFA4: jal         0x80030688
    // 0x8002EFA8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80030688_31288(rdram, ctx);
        goto after_7;
    // 0x8002EFA8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_7:
L_8002EFAC:
    // 0x8002EFAC: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002EFB0: lwc1        $f10, -0x3B50($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X3B50);
    // 0x8002EFB4: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002EFB8: lwc1        $f16, -0x3B4C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X3B4C);
    // 0x8002EFBC: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8002EFC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8002EFC4: lw          $a1, 0x13C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X13C);
    // 0x8002EFC8: lw          $a2, 0x140($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X140);
    // 0x8002EFCC: lw          $a3, 0x148($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X148);
    // 0x8002EFD0: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8002EFD4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8002EFD8: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x8002EFDC: jal         0x8002AA00
    // 0x8002EFE0: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    func_8002AA00_2B600(rdram, ctx);
        goto after_8;
    // 0x8002EFE0: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    after_8:
    // 0x8002EFE4: lh          $t6, 0x128($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X128);
    // 0x8002EFE8: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x8002EFEC: bne         $t6, $at, L_8002F0E4
    if (ctx->r14 != ctx->r1) {
        // 0x8002EFF0: nop
    
            goto L_8002F0E4;
    }
    // 0x8002EFF0: nop

    // 0x8002EFF4: lwc1        $f12, 0x12C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x8002EFF8: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8002EFFC: lwc1        $f6, 0x118($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X118);
    // 0x8002F000: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8002F004: c.le.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl <= ctx->f4.fl;
    // 0x8002F008: nop

    // 0x8002F00C: bc1f        L_8002F0E4
    if (!c1cs) {
        // 0x8002F010: nop
    
            goto L_8002F0E4;
    }
    // 0x8002F010: nop

    // 0x8002F014: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x8002F018: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8002F01C: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8002F020: lwc1        $f14, 0x14C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x8002F024: c.lt.d      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.d < ctx->f10.d;
    // 0x8002F028: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002F02C: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x8002F030: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x8002F034: bc1f        L_8002F0E4
    if (!c1cs) {
        // 0x8002F038: addiu       $a2, $sp, 0x58
        ctx->r6 = ADD32(ctx->r29, 0X58);
            goto L_8002F0E4;
    }
    // 0x8002F038: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x8002F03C: ldc1        $f18, -0x3B48($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0X3B48);
    // 0x8002F040: cvt.d.s     $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f16.d = CVT_D_S(ctx->f14.fl);
    // 0x8002F044: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8002F048: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x8002F04C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x8002F050: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8002F054: cvt.d.s     $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f6.d = CVT_D_S(ctx->f14.fl);
    // 0x8002F058: lwc1        $f16, 0xE4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x8002F05C: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x8002F060: addiu       $t9, $sp, 0xA8
    ctx->r25 = ADD32(ctx->r29, 0XA8);
    // 0x8002F064: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    // 0x8002F068: or          $t8, $s0, $zero
    ctx->r24 = ctx->r16 | 0;
    // 0x8002F06C: addiu       $t7, $s0, 0x48
    ctx->r15 = ADD32(ctx->r16, 0X48);
    // 0x8002F070: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x8002F074: cvt.s.d     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f0.fl = CVT_S_D(ctx->f4.d);
    // 0x8002F078: bc1f        L_8002F0A4
    if (!c1cs) {
        // 0x8002F07C: cvt.s.d     $f2, $f10
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f2.fl = CVT_S_D(ctx->f10.d);
            goto L_8002F0A4;
    }
    // 0x8002F07C: cvt.s.d     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f2.fl = CVT_S_D(ctx->f10.d);
L_8002F080:
    // 0x8002F080: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x8002F084: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x8002F088: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x8002F08C: sw          $at, -0xC($t9)
    MEM_W(-0XC, ctx->r25) = ctx->r1;
    // 0x8002F090: lw          $at, -0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X8);
    // 0x8002F094: sw          $at, -0x8($t9)
    MEM_W(-0X8, ctx->r25) = ctx->r1;
    // 0x8002F098: lw          $at, -0x4($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X4);
    // 0x8002F09C: bne         $t8, $t7, L_8002F080
    if (ctx->r24 != ctx->r15) {
        // 0x8002F0A0: sw          $at, -0x4($t9)
        MEM_W(-0X4, ctx->r25) = ctx->r1;
            goto L_8002F080;
    }
    // 0x8002F0A0: sw          $at, -0x4($t9)
    MEM_W(-0X4, ctx->r25) = ctx->r1;
L_8002F0A4:
    // 0x8002F0A4: lwc1        $f12, 0x108($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X108);
    // 0x8002F0A8: add.s       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f2.fl;
    // 0x8002F0AC: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
    // 0x8002F0B0: swc1        $f12, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f12.u32l;
    // 0x8002F0B4: bc1fl       L_8002F0C4
    if (!c1cs) {
        // 0x8002F0B8: lwc1        $f12, 0x110($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
            goto L_8002F0C4;
    }
    goto skip_6;
    // 0x8002F0B8: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
    skip_6:
    // 0x8002F0BC: swc1        $f20, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f20.u32l;
    // 0x8002F0C0: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
L_8002F0C4:
    // 0x8002F0C4: sub.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x8002F0C8: c.lt.s      $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl < ctx->f12.fl;
    // 0x8002F0CC: swc1        $f12, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f12.u32l;
    // 0x8002F0D0: bc1f        L_8002F0DC
    if (!c1cs) {
        // 0x8002F0D4: nop
    
            goto L_8002F0DC;
    }
    // 0x8002F0D4: nop

    // 0x8002F0D8: swc1        $f20, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f20.u32l;
L_8002F0DC:
    // 0x8002F0DC: jal         0x80030688
    // 0x8002F0E0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80030688_31288(rdram, ctx);
        goto after_9;
    // 0x8002F0E0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_9:
L_8002F0E4:
    // 0x8002F0E4: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002F0E8: lwc1        $f18, -0x3B40($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X3B40);
    // 0x8002F0EC: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002F0F0: lwc1        $f4, -0x3B3C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3B3C);
    // 0x8002F0F4: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8002F0F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8002F0FC: lw          $a1, 0x13C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X13C);
    // 0x8002F100: lw          $a2, 0x140($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X140);
    // 0x8002F104: lw          $a3, 0x148($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X148);
    // 0x8002F108: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8002F10C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x8002F110: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x8002F114: jal         0x8002AA00
    // 0x8002F118: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    func_8002AA00_2B600(rdram, ctx);
        goto after_10;
    // 0x8002F118: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    after_10:
    // 0x8002F11C: lh          $t1, 0x128($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X128);
    // 0x8002F120: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x8002F124: bnel        $t1, $at, L_8002F220
    if (ctx->r9 != ctx->r1) {
        // 0x8002F128: lui         $at, 0xBF80
        ctx->r1 = S32(0XBF80 << 16);
            goto L_8002F220;
    }
    goto skip_7;
    // 0x8002F128: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    skip_7:
    // 0x8002F12C: lwc1        $f12, 0x12C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x8002F130: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8002F134: lwc1        $f10, 0x118($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X118);
    // 0x8002F138: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8002F13C: c.le.s      $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f12.fl <= ctx->f8.fl;
    // 0x8002F140: nop

    // 0x8002F144: bc1fl       L_8002F220
    if (!c1cs) {
        // 0x8002F148: lui         $at, 0xBF80
        ctx->r1 = S32(0XBF80 << 16);
            goto L_8002F220;
    }
    goto skip_8;
    // 0x8002F148: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    skip_8:
    // 0x8002F14C: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x8002F150: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8002F154: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x8002F158: lwc1        $f14, 0x14C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x8002F15C: c.lt.d      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.d < ctx->f18.d;
    // 0x8002F160: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002F164: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x8002F168: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x8002F16C: bc1f        L_8002F21C
    if (!c1cs) {
        // 0x8002F170: addiu       $a2, $sp, 0x58
        ctx->r6 = ADD32(ctx->r29, 0X58);
            goto L_8002F21C;
    }
    // 0x8002F170: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x8002F174: ldc1        $f6, -0x3B38($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X3B38);
    // 0x8002F178: cvt.d.s     $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f4.d = CVT_D_S(ctx->f14.fl);
    // 0x8002F17C: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8002F180: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x8002F184: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x8002F188: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8002F18C: cvt.d.s     $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f10.d = CVT_D_S(ctx->f14.fl);
    // 0x8002F190: lwc1        $f4, 0xE4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x8002F194: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x8002F198: addiu       $t4, $sp, 0xA8
    ctx->r12 = ADD32(ctx->r29, 0XA8);
    // 0x8002F19C: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x8002F1A0: or          $t3, $s0, $zero
    ctx->r11 = ctx->r16 | 0;
    // 0x8002F1A4: addiu       $t2, $s0, 0x48
    ctx->r10 = ADD32(ctx->r16, 0X48);
    // 0x8002F1A8: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x8002F1AC: cvt.s.d     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f0.fl = CVT_S_D(ctx->f8.d);
    // 0x8002F1B0: bc1f        L_8002F1DC
    if (!c1cs) {
        // 0x8002F1B4: cvt.s.d     $f2, $f18
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f2.fl = CVT_S_D(ctx->f18.d);
            goto L_8002F1DC;
    }
    // 0x8002F1B4: cvt.s.d     $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f2.fl = CVT_S_D(ctx->f18.d);
L_8002F1B8:
    // 0x8002F1B8: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x8002F1BC: addiu       $t3, $t3, 0xC
    ctx->r11 = ADD32(ctx->r11, 0XC);
    // 0x8002F1C0: addiu       $t4, $t4, 0xC
    ctx->r12 = ADD32(ctx->r12, 0XC);
    // 0x8002F1C4: sw          $at, -0xC($t4)
    MEM_W(-0XC, ctx->r12) = ctx->r1;
    // 0x8002F1C8: lw          $at, -0x8($t3)
    ctx->r1 = MEM_W(ctx->r11, -0X8);
    // 0x8002F1CC: sw          $at, -0x8($t4)
    MEM_W(-0X8, ctx->r12) = ctx->r1;
    // 0x8002F1D0: lw          $at, -0x4($t3)
    ctx->r1 = MEM_W(ctx->r11, -0X4);
    // 0x8002F1D4: bne         $t3, $t2, L_8002F1B8
    if (ctx->r11 != ctx->r10) {
        // 0x8002F1D8: sw          $at, -0x4($t4)
        MEM_W(-0X4, ctx->r12) = ctx->r1;
            goto L_8002F1B8;
    }
    // 0x8002F1D8: sw          $at, -0x4($t4)
    MEM_W(-0X4, ctx->r12) = ctx->r1;
L_8002F1DC:
    // 0x8002F1DC: lwc1        $f12, 0x108($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X108);
    // 0x8002F1E0: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    // 0x8002F1E4: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
    // 0x8002F1E8: swc1        $f12, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f12.u32l;
    // 0x8002F1EC: bc1fl       L_8002F1FC
    if (!c1cs) {
        // 0x8002F1F0: lwc1        $f12, 0x110($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
            goto L_8002F1FC;
    }
    goto skip_9;
    // 0x8002F1F0: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
    skip_9:
    // 0x8002F1F4: swc1        $f20, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f20.u32l;
    // 0x8002F1F8: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
L_8002F1FC:
    // 0x8002F1FC: sub.s       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x8002F200: c.lt.s      $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl < ctx->f12.fl;
    // 0x8002F204: swc1        $f12, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f12.u32l;
    // 0x8002F208: bc1f        L_8002F214
    if (!c1cs) {
        // 0x8002F20C: nop
    
            goto L_8002F214;
    }
    // 0x8002F20C: nop

    // 0x8002F210: swc1        $f20, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f20.u32l;
L_8002F214:
    // 0x8002F214: jal         0x80030688
    // 0x8002F218: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80030688_31288(rdram, ctx);
        goto after_11;
    // 0x8002F218: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_11:
L_8002F21C:
    // 0x8002F21C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
L_8002F220:
    // 0x8002F220: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8002F224: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8002F228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8002F22C: lw          $a1, 0x13C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X13C);
    // 0x8002F230: lw          $a2, 0x140($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X140);
    // 0x8002F234: lw          $a3, 0x148($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X148);
    // 0x8002F238: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8002F23C: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x8002F240: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x8002F244: jal         0x8002AA00
    // 0x8002F248: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_8002AA00_2B600(rdram, ctx);
        goto after_12;
    // 0x8002F248: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_12:
    // 0x8002F24C: lh          $t6, 0x128($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X128);
    // 0x8002F250: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x8002F254: bne         $t6, $at, L_8002F308
    if (ctx->r14 != ctx->r1) {
        // 0x8002F258: nop
    
            goto L_8002F308;
    }
    // 0x8002F258: nop

    // 0x8002F25C: lwc1        $f12, 0x12C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x8002F260: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8002F264: lwc1        $f16, 0x118($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X118);
    // 0x8002F268: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8002F26C: c.le.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl <= ctx->f10.fl;
    // 0x8002F270: nop

    // 0x8002F274: bc1f        L_8002F308
    if (!c1cs) {
        // 0x8002F278: nop
    
            goto L_8002F308;
    }
    // 0x8002F278: nop

    // 0x8002F27C: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x8002F280: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8002F284: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x8002F288: lwc1        $f6, 0xE4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x8002F28C: c.lt.d      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.d < ctx->f4.d;
    // 0x8002F290: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x8002F294: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x8002F298: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x8002F29C: bc1f        L_8002F308
    if (!c1cs) {
        // 0x8002F2A0: addiu       $a3, $sp, 0x54
        ctx->r7 = ADD32(ctx->r29, 0X54);
            goto L_8002F308;
    }
    // 0x8002F2A0: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x8002F2A4: c.lt.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl < ctx->f6.fl;
    // 0x8002F2A8: addiu       $t0, $sp, 0xA8
    ctx->r8 = ADD32(ctx->r29, 0XA8);
    // 0x8002F2AC: or          $t9, $s0, $zero
    ctx->r25 = ctx->r16 | 0;
    // 0x8002F2B0: addiu       $t8, $s0, 0x48
    ctx->r24 = ADD32(ctx->r16, 0X48);
    // 0x8002F2B4: bc1fl       L_8002F2E4
    if (!c1cs) {
        // 0x8002F2B8: lwc1        $f12, 0x108($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X108);
            goto L_8002F2E4;
    }
    goto skip_10;
    // 0x8002F2B8: lwc1        $f12, 0x108($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X108);
    skip_10:
L_8002F2BC:
    // 0x8002F2BC: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x8002F2C0: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x8002F2C4: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x8002F2C8: sw          $at, -0xC($t0)
    MEM_W(-0XC, ctx->r8) = ctx->r1;
    // 0x8002F2CC: lw          $at, -0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X8);
    // 0x8002F2D0: sw          $at, -0x8($t0)
    MEM_W(-0X8, ctx->r8) = ctx->r1;
    // 0x8002F2D4: lw          $at, -0x4($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X4);
    // 0x8002F2D8: bne         $t9, $t8, L_8002F2BC
    if (ctx->r25 != ctx->r24) {
        // 0x8002F2DC: sw          $at, -0x4($t0)
        MEM_W(-0X4, ctx->r8) = ctx->r1;
            goto L_8002F2BC;
    }
    // 0x8002F2DC: sw          $at, -0x4($t0)
    MEM_W(-0X4, ctx->r8) = ctx->r1;
    // 0x8002F2E0: lwc1        $f12, 0x108($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X108);
L_8002F2E4:
    // 0x8002F2E4: lwc1        $f8, 0x14C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x8002F2E8: add.s       $f12, $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f8.fl;
    // 0x8002F2EC: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
    // 0x8002F2F0: swc1        $f12, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f12.u32l;
    // 0x8002F2F4: bc1f        L_8002F300
    if (!c1cs) {
        // 0x8002F2F8: nop
    
            goto L_8002F300;
    }
    // 0x8002F2F8: nop

    // 0x8002F2FC: swc1        $f20, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f20.u32l;
L_8002F300:
    // 0x8002F300: jal         0x80030688
    // 0x8002F304: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80030688_31288(rdram, ctx);
        goto after_13;
    // 0x8002F304: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_13:
L_8002F308:
    // 0x8002F308: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002F30C: lwc1        $f10, -0x3B30($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X3B30);
    // 0x8002F310: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002F314: lwc1        $f16, -0x3B2C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X3B2C);
    // 0x8002F318: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8002F31C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8002F320: lw          $a1, 0x13C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X13C);
    // 0x8002F324: lw          $a2, 0x140($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X140);
    // 0x8002F328: lw          $a3, 0x148($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X148);
    // 0x8002F32C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8002F330: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8002F334: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x8002F338: jal         0x8002AA00
    // 0x8002F33C: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    func_8002AA00_2B600(rdram, ctx);
        goto after_14;
    // 0x8002F33C: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    after_14:
    // 0x8002F340: lh          $t1, 0x128($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X128);
    // 0x8002F344: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x8002F348: bne         $t1, $at, L_8002F440
    if (ctx->r9 != ctx->r1) {
        // 0x8002F34C: nop
    
            goto L_8002F440;
    }
    // 0x8002F34C: nop

    // 0x8002F350: lwc1        $f12, 0x12C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x8002F354: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8002F358: lwc1        $f6, 0x118($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X118);
    // 0x8002F35C: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8002F360: c.le.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl <= ctx->f4.fl;
    // 0x8002F364: nop

    // 0x8002F368: bc1f        L_8002F440
    if (!c1cs) {
        // 0x8002F36C: nop
    
            goto L_8002F440;
    }
    // 0x8002F36C: nop

    // 0x8002F370: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x8002F374: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8002F378: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8002F37C: lwc1        $f14, 0x14C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x8002F380: c.lt.d      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.d < ctx->f10.d;
    // 0x8002F384: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002F388: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x8002F38C: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x8002F390: bc1f        L_8002F440
    if (!c1cs) {
        // 0x8002F394: addiu       $a2, $sp, 0x58
        ctx->r6 = ADD32(ctx->r29, 0X58);
            goto L_8002F440;
    }
    // 0x8002F394: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x8002F398: ldc1        $f18, -0x3B28($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0X3B28);
    // 0x8002F39C: cvt.d.s     $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f16.d = CVT_D_S(ctx->f14.fl);
    // 0x8002F3A0: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8002F3A4: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x8002F3A8: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x8002F3AC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8002F3B0: cvt.d.s     $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f6.d = CVT_D_S(ctx->f14.fl);
    // 0x8002F3B4: lwc1        $f16, 0xE4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x8002F3B8: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x8002F3BC: addiu       $t5, $sp, 0xA8
    ctx->r13 = ADD32(ctx->r29, 0XA8);
    // 0x8002F3C0: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    // 0x8002F3C4: or          $t4, $s0, $zero
    ctx->r12 = ctx->r16 | 0;
    // 0x8002F3C8: addiu       $t3, $s0, 0x48
    ctx->r11 = ADD32(ctx->r16, 0X48);
    // 0x8002F3CC: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x8002F3D0: cvt.s.d     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f0.fl = CVT_S_D(ctx->f4.d);
    // 0x8002F3D4: bc1f        L_8002F400
    if (!c1cs) {
        // 0x8002F3D8: cvt.s.d     $f2, $f10
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f2.fl = CVT_S_D(ctx->f10.d);
            goto L_8002F400;
    }
    // 0x8002F3D8: cvt.s.d     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f2.fl = CVT_S_D(ctx->f10.d);
L_8002F3DC:
    // 0x8002F3DC: lw          $at, 0x0($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X0);
    // 0x8002F3E0: addiu       $t4, $t4, 0xC
    ctx->r12 = ADD32(ctx->r12, 0XC);
    // 0x8002F3E4: addiu       $t5, $t5, 0xC
    ctx->r13 = ADD32(ctx->r13, 0XC);
    // 0x8002F3E8: sw          $at, -0xC($t5)
    MEM_W(-0XC, ctx->r13) = ctx->r1;
    // 0x8002F3EC: lw          $at, -0x8($t4)
    ctx->r1 = MEM_W(ctx->r12, -0X8);
    // 0x8002F3F0: sw          $at, -0x8($t5)
    MEM_W(-0X8, ctx->r13) = ctx->r1;
    // 0x8002F3F4: lw          $at, -0x4($t4)
    ctx->r1 = MEM_W(ctx->r12, -0X4);
    // 0x8002F3F8: bne         $t4, $t3, L_8002F3DC
    if (ctx->r12 != ctx->r11) {
        // 0x8002F3FC: sw          $at, -0x4($t5)
        MEM_W(-0X4, ctx->r13) = ctx->r1;
            goto L_8002F3DC;
    }
    // 0x8002F3FC: sw          $at, -0x4($t5)
    MEM_W(-0X4, ctx->r13) = ctx->r1;
L_8002F400:
    // 0x8002F400: lwc1        $f12, 0x108($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X108);
    // 0x8002F404: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    // 0x8002F408: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
    // 0x8002F40C: swc1        $f12, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f12.u32l;
    // 0x8002F410: bc1fl       L_8002F420
    if (!c1cs) {
        // 0x8002F414: lwc1        $f12, 0x110($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
            goto L_8002F420;
    }
    goto skip_11;
    // 0x8002F414: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
    skip_11:
    // 0x8002F418: swc1        $f20, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f20.u32l;
    // 0x8002F41C: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
L_8002F420:
    // 0x8002F420: add.s       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f2.fl;
    // 0x8002F424: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
    // 0x8002F428: swc1        $f12, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f12.u32l;
    // 0x8002F42C: bc1f        L_8002F438
    if (!c1cs) {
        // 0x8002F430: nop
    
            goto L_8002F438;
    }
    // 0x8002F430: nop

    // 0x8002F434: swc1        $f20, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f20.u32l;
L_8002F438:
    // 0x8002F438: jal         0x80030688
    // 0x8002F43C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80030688_31288(rdram, ctx);
        goto after_15;
    // 0x8002F43C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_15:
L_8002F440:
    // 0x8002F440: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002F444: lwc1        $f18, -0x3B20($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X3B20);
    // 0x8002F448: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002F44C: lwc1        $f4, -0x3B1C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3B1C);
    // 0x8002F450: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8002F454: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8002F458: lw          $a1, 0x13C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X13C);
    // 0x8002F45C: lw          $a2, 0x140($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X140);
    // 0x8002F460: lw          $a3, 0x148($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X148);
    // 0x8002F464: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8002F468: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x8002F46C: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x8002F470: jal         0x8002AA00
    // 0x8002F474: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    func_8002AA00_2B600(rdram, ctx);
        goto after_16;
    // 0x8002F474: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    after_16:
    // 0x8002F478: lh          $t6, 0x128($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X128);
    // 0x8002F47C: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x8002F480: bnel        $t6, $at, L_8002F57C
    if (ctx->r14 != ctx->r1) {
        // 0x8002F484: lui         $at, 0xBF80
        ctx->r1 = S32(0XBF80 << 16);
            goto L_8002F57C;
    }
    goto skip_12;
    // 0x8002F484: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    skip_12:
    // 0x8002F488: lwc1        $f12, 0x12C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x8002F48C: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8002F490: lwc1        $f10, 0x118($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X118);
    // 0x8002F494: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8002F498: c.le.s      $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f12.fl <= ctx->f8.fl;
    // 0x8002F49C: nop

    // 0x8002F4A0: bc1fl       L_8002F57C
    if (!c1cs) {
        // 0x8002F4A4: lui         $at, 0xBF80
        ctx->r1 = S32(0XBF80 << 16);
            goto L_8002F57C;
    }
    goto skip_13;
    // 0x8002F4A4: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    skip_13:
    // 0x8002F4A8: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x8002F4AC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8002F4B0: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x8002F4B4: lwc1        $f14, 0x14C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x8002F4B8: c.lt.d      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.d < ctx->f18.d;
    // 0x8002F4BC: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002F4C0: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x8002F4C4: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x8002F4C8: bc1f        L_8002F578
    if (!c1cs) {
        // 0x8002F4CC: addiu       $a2, $sp, 0x58
        ctx->r6 = ADD32(ctx->r29, 0X58);
            goto L_8002F578;
    }
    // 0x8002F4CC: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x8002F4D0: ldc1        $f6, -0x3B18($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X3B18);
    // 0x8002F4D4: cvt.d.s     $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f4.d = CVT_D_S(ctx->f14.fl);
    // 0x8002F4D8: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8002F4DC: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x8002F4E0: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x8002F4E4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8002F4E8: cvt.d.s     $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f10.d = CVT_D_S(ctx->f14.fl);
    // 0x8002F4EC: lwc1        $f4, 0xE4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x8002F4F0: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x8002F4F4: addiu       $t7, $sp, 0xA8
    ctx->r15 = ADD32(ctx->r29, 0XA8);
    // 0x8002F4F8: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x8002F4FC: or          $t0, $s0, $zero
    ctx->r8 = ctx->r16 | 0;
    // 0x8002F500: addiu       $t9, $s0, 0x48
    ctx->r25 = ADD32(ctx->r16, 0X48);
    // 0x8002F504: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x8002F508: cvt.s.d     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f0.fl = CVT_S_D(ctx->f8.d);
    // 0x8002F50C: bc1f        L_8002F538
    if (!c1cs) {
        // 0x8002F510: cvt.s.d     $f2, $f18
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f2.fl = CVT_S_D(ctx->f18.d);
            goto L_8002F538;
    }
    // 0x8002F510: cvt.s.d     $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f2.fl = CVT_S_D(ctx->f18.d);
L_8002F514:
    // 0x8002F514: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x8002F518: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x8002F51C: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x8002F520: sw          $at, -0xC($t7)
    MEM_W(-0XC, ctx->r15) = ctx->r1;
    // 0x8002F524: lw          $at, -0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X8);
    // 0x8002F528: sw          $at, -0x8($t7)
    MEM_W(-0X8, ctx->r15) = ctx->r1;
    // 0x8002F52C: lw          $at, -0x4($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X4);
    // 0x8002F530: bne         $t0, $t9, L_8002F514
    if (ctx->r8 != ctx->r25) {
        // 0x8002F534: sw          $at, -0x4($t7)
        MEM_W(-0X4, ctx->r15) = ctx->r1;
            goto L_8002F514;
    }
    // 0x8002F534: sw          $at, -0x4($t7)
    MEM_W(-0X4, ctx->r15) = ctx->r1;
L_8002F538:
    // 0x8002F538: lwc1        $f12, 0x108($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X108);
    // 0x8002F53C: add.s       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f2.fl;
    // 0x8002F540: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
    // 0x8002F544: swc1        $f12, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f12.u32l;
    // 0x8002F548: bc1fl       L_8002F558
    if (!c1cs) {
        // 0x8002F54C: lwc1        $f12, 0x110($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
            goto L_8002F558;
    }
    goto skip_14;
    // 0x8002F54C: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
    skip_14:
    // 0x8002F550: swc1        $f20, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f20.u32l;
    // 0x8002F554: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
L_8002F558:
    // 0x8002F558: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    // 0x8002F55C: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
    // 0x8002F560: swc1        $f12, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f12.u32l;
    // 0x8002F564: bc1f        L_8002F570
    if (!c1cs) {
        // 0x8002F568: nop
    
            goto L_8002F570;
    }
    // 0x8002F568: nop

    // 0x8002F56C: swc1        $f20, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f20.u32l;
L_8002F570:
    // 0x8002F570: jal         0x80030688
    // 0x8002F574: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80030688_31288(rdram, ctx);
        goto after_17;
    // 0x8002F574: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_17:
L_8002F578:
    // 0x8002F578: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
L_8002F57C:
    // 0x8002F57C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8002F580: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8002F584: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8002F588: lw          $a1, 0x13C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X13C);
    // 0x8002F58C: lw          $a2, 0x140($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X140);
    // 0x8002F590: lw          $a3, 0x148($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X148);
    // 0x8002F594: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x8002F598: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8002F59C: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x8002F5A0: jal         0x8002AA00
    // 0x8002F5A4: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    func_8002AA00_2B600(rdram, ctx);
        goto after_18;
    // 0x8002F5A4: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    after_18:
    // 0x8002F5A8: lh          $t1, 0x128($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X128);
    // 0x8002F5AC: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x8002F5B0: bne         $t1, $at, L_8002F664
    if (ctx->r9 != ctx->r1) {
        // 0x8002F5B4: nop
    
            goto L_8002F664;
    }
    // 0x8002F5B4: nop

    // 0x8002F5B8: lwc1        $f12, 0x12C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x8002F5BC: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8002F5C0: lwc1        $f16, 0x118($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X118);
    // 0x8002F5C4: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8002F5C8: c.le.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl <= ctx->f10.fl;
    // 0x8002F5CC: nop

    // 0x8002F5D0: bc1f        L_8002F664
    if (!c1cs) {
        // 0x8002F5D4: nop
    
            goto L_8002F664;
    }
    // 0x8002F5D4: nop

    // 0x8002F5D8: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x8002F5DC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8002F5E0: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x8002F5E4: lwc1        $f6, 0xE4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x8002F5E8: c.lt.d      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.d < ctx->f4.d;
    // 0x8002F5EC: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x8002F5F0: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x8002F5F4: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x8002F5F8: bc1f        L_8002F664
    if (!c1cs) {
        // 0x8002F5FC: addiu       $a3, $sp, 0x54
        ctx->r7 = ADD32(ctx->r29, 0X54);
            goto L_8002F664;
    }
    // 0x8002F5FC: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x8002F600: c.lt.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl < ctx->f6.fl;
    // 0x8002F604: addiu       $t2, $sp, 0xA8
    ctx->r10 = ADD32(ctx->r29, 0XA8);
    // 0x8002F608: or          $t5, $s0, $zero
    ctx->r13 = ctx->r16 | 0;
    // 0x8002F60C: addiu       $t4, $s0, 0x48
    ctx->r12 = ADD32(ctx->r16, 0X48);
    // 0x8002F610: bc1fl       L_8002F640
    if (!c1cs) {
        // 0x8002F614: lwc1        $f12, 0x110($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
            goto L_8002F640;
    }
    goto skip_15;
    // 0x8002F614: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
    skip_15:
L_8002F618:
    // 0x8002F618: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x8002F61C: addiu       $t5, $t5, 0xC
    ctx->r13 = ADD32(ctx->r13, 0XC);
    // 0x8002F620: addiu       $t2, $t2, 0xC
    ctx->r10 = ADD32(ctx->r10, 0XC);
    // 0x8002F624: sw          $at, -0xC($t2)
    MEM_W(-0XC, ctx->r10) = ctx->r1;
    // 0x8002F628: lw          $at, -0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, -0X8);
    // 0x8002F62C: sw          $at, -0x8($t2)
    MEM_W(-0X8, ctx->r10) = ctx->r1;
    // 0x8002F630: lw          $at, -0x4($t5)
    ctx->r1 = MEM_W(ctx->r13, -0X4);
    // 0x8002F634: bne         $t5, $t4, L_8002F618
    if (ctx->r13 != ctx->r12) {
        // 0x8002F638: sw          $at, -0x4($t2)
        MEM_W(-0X4, ctx->r10) = ctx->r1;
            goto L_8002F618;
    }
    // 0x8002F638: sw          $at, -0x4($t2)
    MEM_W(-0X4, ctx->r10) = ctx->r1;
    // 0x8002F63C: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
L_8002F640:
    // 0x8002F640: lwc1        $f8, 0x14C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x8002F644: add.s       $f12, $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f8.fl;
    // 0x8002F648: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
    // 0x8002F64C: swc1        $f12, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f12.u32l;
    // 0x8002F650: bc1f        L_8002F65C
    if (!c1cs) {
        // 0x8002F654: nop
    
            goto L_8002F65C;
    }
    // 0x8002F654: nop

    // 0x8002F658: swc1        $f20, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f20.u32l;
L_8002F65C:
    // 0x8002F65C: jal         0x80030688
    // 0x8002F660: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80030688_31288(rdram, ctx);
        goto after_19;
    // 0x8002F660: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_19:
L_8002F664:
    // 0x8002F664: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002F668: lwc1        $f10, -0x3B10($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X3B10);
    // 0x8002F66C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002F670: lwc1        $f16, -0x3B0C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X3B0C);
    // 0x8002F674: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8002F678: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8002F67C: lw          $a1, 0x13C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X13C);
    // 0x8002F680: lw          $a2, 0x140($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X140);
    // 0x8002F684: lw          $a3, 0x148($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X148);
    // 0x8002F688: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8002F68C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8002F690: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x8002F694: jal         0x8002AA00
    // 0x8002F698: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    func_8002AA00_2B600(rdram, ctx);
        goto after_20;
    // 0x8002F698: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    after_20:
    // 0x8002F69C: lh          $t6, 0x128($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X128);
    // 0x8002F6A0: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x8002F6A4: bne         $t6, $at, L_8002F79C
    if (ctx->r14 != ctx->r1) {
        // 0x8002F6A8: nop
    
            goto L_8002F79C;
    }
    // 0x8002F6A8: nop

    // 0x8002F6AC: lwc1        $f12, 0x12C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x8002F6B0: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8002F6B4: lwc1        $f6, 0x118($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X118);
    // 0x8002F6B8: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8002F6BC: c.le.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl <= ctx->f4.fl;
    // 0x8002F6C0: nop

    // 0x8002F6C4: bc1f        L_8002F79C
    if (!c1cs) {
        // 0x8002F6C8: nop
    
            goto L_8002F79C;
    }
    // 0x8002F6C8: nop

    // 0x8002F6CC: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x8002F6D0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8002F6D4: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8002F6D8: lwc1        $f14, 0x14C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x8002F6DC: c.lt.d      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.d < ctx->f10.d;
    // 0x8002F6E0: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002F6E4: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x8002F6E8: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x8002F6EC: bc1f        L_8002F79C
    if (!c1cs) {
        // 0x8002F6F0: addiu       $a2, $sp, 0x58
        ctx->r6 = ADD32(ctx->r29, 0X58);
            goto L_8002F79C;
    }
    // 0x8002F6F0: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x8002F6F4: ldc1        $f18, -0x3B08($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0X3B08);
    // 0x8002F6F8: cvt.d.s     $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f16.d = CVT_D_S(ctx->f14.fl);
    // 0x8002F6FC: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8002F700: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x8002F704: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x8002F708: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8002F70C: cvt.d.s     $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f6.d = CVT_D_S(ctx->f14.fl);
    // 0x8002F710: lwc1        $f16, 0xE4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x8002F714: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x8002F718: addiu       $t8, $sp, 0xA8
    ctx->r24 = ADD32(ctx->r29, 0XA8);
    // 0x8002F71C: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    // 0x8002F720: or          $t7, $s0, $zero
    ctx->r15 = ctx->r16 | 0;
    // 0x8002F724: addiu       $t0, $s0, 0x48
    ctx->r8 = ADD32(ctx->r16, 0X48);
    // 0x8002F728: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x8002F72C: cvt.s.d     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f0.fl = CVT_S_D(ctx->f4.d);
    // 0x8002F730: bc1f        L_8002F75C
    if (!c1cs) {
        // 0x8002F734: cvt.s.d     $f2, $f10
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f2.fl = CVT_S_D(ctx->f10.d);
            goto L_8002F75C;
    }
    // 0x8002F734: cvt.s.d     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f2.fl = CVT_S_D(ctx->f10.d);
L_8002F738:
    // 0x8002F738: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x8002F73C: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x8002F740: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x8002F744: sw          $at, -0xC($t8)
    MEM_W(-0XC, ctx->r24) = ctx->r1;
    // 0x8002F748: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x8002F74C: sw          $at, -0x8($t8)
    MEM_W(-0X8, ctx->r24) = ctx->r1;
    // 0x8002F750: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x8002F754: bne         $t7, $t0, L_8002F738
    if (ctx->r15 != ctx->r8) {
        // 0x8002F758: sw          $at, -0x4($t8)
        MEM_W(-0X4, ctx->r24) = ctx->r1;
            goto L_8002F738;
    }
    // 0x8002F758: sw          $at, -0x4($t8)
    MEM_W(-0X4, ctx->r24) = ctx->r1;
L_8002F75C:
    // 0x8002F75C: lwc1        $f12, 0x108($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X108);
    // 0x8002F760: sub.s       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x8002F764: c.lt.s      $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl < ctx->f12.fl;
    // 0x8002F768: swc1        $f12, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f12.u32l;
    // 0x8002F76C: bc1fl       L_8002F77C
    if (!c1cs) {
        // 0x8002F770: lwc1        $f12, 0x110($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
            goto L_8002F77C;
    }
    goto skip_16;
    // 0x8002F770: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
    skip_16:
    // 0x8002F774: swc1        $f20, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f20.u32l;
    // 0x8002F778: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
L_8002F77C:
    // 0x8002F77C: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    // 0x8002F780: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
    // 0x8002F784: swc1        $f12, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f12.u32l;
    // 0x8002F788: bc1f        L_8002F794
    if (!c1cs) {
        // 0x8002F78C: nop
    
            goto L_8002F794;
    }
    // 0x8002F78C: nop

    // 0x8002F790: swc1        $f20, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f20.u32l;
L_8002F794:
    // 0x8002F794: jal         0x80030688
    // 0x8002F798: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80030688_31288(rdram, ctx);
        goto after_21;
    // 0x8002F798: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_21:
L_8002F79C:
    // 0x8002F79C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002F7A0: lwc1        $f18, -0x3B00($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X3B00);
    // 0x8002F7A4: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002F7A8: lwc1        $f4, -0x3AFC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3AFC);
    // 0x8002F7AC: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8002F7B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8002F7B4: lw          $a1, 0x13C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X13C);
    // 0x8002F7B8: lw          $a2, 0x140($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X140);
    // 0x8002F7BC: lw          $a3, 0x148($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X148);
    // 0x8002F7C0: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8002F7C4: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x8002F7C8: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x8002F7CC: jal         0x8002AA00
    // 0x8002F7D0: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    func_8002AA00_2B600(rdram, ctx);
        goto after_22;
    // 0x8002F7D0: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    after_22:
    // 0x8002F7D4: lh          $t1, 0x128($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X128);
    // 0x8002F7D8: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x8002F7DC: bnel        $t1, $at, L_8002F8D8
    if (ctx->r9 != ctx->r1) {
        // 0x8002F7E0: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8002F8D8;
    }
    goto skip_17;
    // 0x8002F7E0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_17:
    // 0x8002F7E4: lwc1        $f12, 0x12C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x8002F7E8: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8002F7EC: lwc1        $f10, 0x118($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X118);
    // 0x8002F7F0: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8002F7F4: c.le.s      $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f12.fl <= ctx->f8.fl;
    // 0x8002F7F8: nop

    // 0x8002F7FC: bc1fl       L_8002F8D8
    if (!c1cs) {
        // 0x8002F800: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8002F8D8;
    }
    goto skip_18;
    // 0x8002F800: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_18:
    // 0x8002F804: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x8002F808: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8002F80C: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x8002F810: lwc1        $f14, 0x14C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x8002F814: c.lt.d      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.d < ctx->f18.d;
    // 0x8002F818: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002F81C: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x8002F820: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x8002F824: bc1f        L_8002F8D4
    if (!c1cs) {
        // 0x8002F828: addiu       $a2, $sp, 0x58
        ctx->r6 = ADD32(ctx->r29, 0X58);
            goto L_8002F8D4;
    }
    // 0x8002F828: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x8002F82C: ldc1        $f6, -0x3AF8($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X3AF8);
    // 0x8002F830: cvt.d.s     $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f4.d = CVT_D_S(ctx->f14.fl);
    // 0x8002F834: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8002F838: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x8002F83C: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x8002F840: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8002F844: cvt.d.s     $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f10.d = CVT_D_S(ctx->f14.fl);
    // 0x8002F848: lwc1        $f4, 0xE4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x8002F84C: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x8002F850: addiu       $t3, $sp, 0xA8
    ctx->r11 = ADD32(ctx->r29, 0XA8);
    // 0x8002F854: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x8002F858: or          $t2, $s0, $zero
    ctx->r10 = ctx->r16 | 0;
    // 0x8002F85C: addiu       $t5, $s0, 0x48
    ctx->r13 = ADD32(ctx->r16, 0X48);
    // 0x8002F860: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x8002F864: cvt.s.d     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f0.fl = CVT_S_D(ctx->f8.d);
    // 0x8002F868: bc1f        L_8002F894
    if (!c1cs) {
        // 0x8002F86C: cvt.s.d     $f2, $f18
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f2.fl = CVT_S_D(ctx->f18.d);
            goto L_8002F894;
    }
    // 0x8002F86C: cvt.s.d     $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f2.fl = CVT_S_D(ctx->f18.d);
L_8002F870:
    // 0x8002F870: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x8002F874: addiu       $t2, $t2, 0xC
    ctx->r10 = ADD32(ctx->r10, 0XC);
    // 0x8002F878: addiu       $t3, $t3, 0xC
    ctx->r11 = ADD32(ctx->r11, 0XC);
    // 0x8002F87C: sw          $at, -0xC($t3)
    MEM_W(-0XC, ctx->r11) = ctx->r1;
    // 0x8002F880: lw          $at, -0x8($t2)
    ctx->r1 = MEM_W(ctx->r10, -0X8);
    // 0x8002F884: sw          $at, -0x8($t3)
    MEM_W(-0X8, ctx->r11) = ctx->r1;
    // 0x8002F888: lw          $at, -0x4($t2)
    ctx->r1 = MEM_W(ctx->r10, -0X4);
    // 0x8002F88C: bne         $t2, $t5, L_8002F870
    if (ctx->r10 != ctx->r13) {
        // 0x8002F890: sw          $at, -0x4($t3)
        MEM_W(-0X4, ctx->r11) = ctx->r1;
            goto L_8002F870;
    }
    // 0x8002F890: sw          $at, -0x4($t3)
    MEM_W(-0X4, ctx->r11) = ctx->r1;
L_8002F894:
    // 0x8002F894: lwc1        $f12, 0x108($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X108);
    // 0x8002F898: sub.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x8002F89C: c.lt.s      $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl < ctx->f12.fl;
    // 0x8002F8A0: swc1        $f12, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f12.u32l;
    // 0x8002F8A4: bc1fl       L_8002F8B4
    if (!c1cs) {
        // 0x8002F8A8: lwc1        $f12, 0x110($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
            goto L_8002F8B4;
    }
    goto skip_19;
    // 0x8002F8A8: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
    skip_19:
    // 0x8002F8AC: swc1        $f20, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f20.u32l;
    // 0x8002F8B0: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
L_8002F8B4:
    // 0x8002F8B4: add.s       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f2.fl;
    // 0x8002F8B8: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
    // 0x8002F8BC: swc1        $f12, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f12.u32l;
    // 0x8002F8C0: bc1f        L_8002F8CC
    if (!c1cs) {
        // 0x8002F8C4: nop
    
            goto L_8002F8CC;
    }
    // 0x8002F8C4: nop

    // 0x8002F8C8: swc1        $f20, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f20.u32l;
L_8002F8CC:
    // 0x8002F8CC: jal         0x80030688
    // 0x8002F8D0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80030688_31288(rdram, ctx);
        goto after_23;
    // 0x8002F8D0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_23:
L_8002F8D4:
    // 0x8002F8D4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_8002F8D8:
    // 0x8002F8D8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8002F8DC: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8002F8E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8002F8E4: lw          $a1, 0x13C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X13C);
    // 0x8002F8E8: lw          $a2, 0x144($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X144);
    // 0x8002F8EC: lw          $a3, 0x148($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X148);
    // 0x8002F8F0: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8002F8F4: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x8002F8F8: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x8002F8FC: jal         0x8002AA00
    // 0x8002F900: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_8002AA00_2B600(rdram, ctx);
        goto after_24;
    // 0x8002F900: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_24:
    // 0x8002F904: lh          $t6, 0x128($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X128);
    // 0x8002F908: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x8002F90C: bne         $t6, $at, L_8002F9C0
    if (ctx->r14 != ctx->r1) {
        // 0x8002F910: nop
    
            goto L_8002F9C0;
    }
    // 0x8002F910: nop

    // 0x8002F914: lwc1        $f12, 0x12C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x8002F918: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8002F91C: lwc1        $f16, 0x118($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X118);
    // 0x8002F920: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8002F924: c.le.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl <= ctx->f10.fl;
    // 0x8002F928: nop

    // 0x8002F92C: bc1f        L_8002F9C0
    if (!c1cs) {
        // 0x8002F930: nop
    
            goto L_8002F9C0;
    }
    // 0x8002F930: nop

    // 0x8002F934: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x8002F938: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8002F93C: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x8002F940: lwc1        $f6, 0xE4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x8002F944: c.lt.d      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.d < ctx->f4.d;
    // 0x8002F948: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x8002F94C: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x8002F950: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x8002F954: bc1f        L_8002F9C0
    if (!c1cs) {
        // 0x8002F958: addiu       $a3, $sp, 0x54
        ctx->r7 = ADD32(ctx->r29, 0X54);
            goto L_8002F9C0;
    }
    // 0x8002F958: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x8002F95C: c.lt.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl < ctx->f6.fl;
    // 0x8002F960: addiu       $t9, $sp, 0xA8
    ctx->r25 = ADD32(ctx->r29, 0XA8);
    // 0x8002F964: or          $t8, $s0, $zero
    ctx->r24 = ctx->r16 | 0;
    // 0x8002F968: addiu       $t7, $s0, 0x48
    ctx->r15 = ADD32(ctx->r16, 0X48);
    // 0x8002F96C: bc1fl       L_8002F99C
    if (!c1cs) {
        // 0x8002F970: lwc1        $f12, 0x108($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X108);
            goto L_8002F99C;
    }
    goto skip_20;
    // 0x8002F970: lwc1        $f12, 0x108($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X108);
    skip_20:
L_8002F974:
    // 0x8002F974: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x8002F978: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x8002F97C: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x8002F980: sw          $at, -0xC($t9)
    MEM_W(-0XC, ctx->r25) = ctx->r1;
    // 0x8002F984: lw          $at, -0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X8);
    // 0x8002F988: sw          $at, -0x8($t9)
    MEM_W(-0X8, ctx->r25) = ctx->r1;
    // 0x8002F98C: lw          $at, -0x4($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X4);
    // 0x8002F990: bne         $t8, $t7, L_8002F974
    if (ctx->r24 != ctx->r15) {
        // 0x8002F994: sw          $at, -0x4($t9)
        MEM_W(-0X4, ctx->r25) = ctx->r1;
            goto L_8002F974;
    }
    // 0x8002F994: sw          $at, -0x4($t9)
    MEM_W(-0X4, ctx->r25) = ctx->r1;
    // 0x8002F998: lwc1        $f12, 0x108($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X108);
L_8002F99C:
    // 0x8002F99C: lwc1        $f8, 0x14C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x8002F9A0: sub.s       $f12, $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f8.fl;
    // 0x8002F9A4: c.lt.s      $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl < ctx->f12.fl;
    // 0x8002F9A8: swc1        $f12, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f12.u32l;
    // 0x8002F9AC: bc1f        L_8002F9B8
    if (!c1cs) {
        // 0x8002F9B0: nop
    
            goto L_8002F9B8;
    }
    // 0x8002F9B0: nop

    // 0x8002F9B4: swc1        $f20, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f20.u32l;
L_8002F9B8:
    // 0x8002F9B8: jal         0x80030688
    // 0x8002F9BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80030688_31288(rdram, ctx);
        goto after_25;
    // 0x8002F9BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_25:
L_8002F9C0:
    // 0x8002F9C0: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002F9C4: lwc1        $f10, -0x3AF0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X3AF0);
    // 0x8002F9C8: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002F9CC: lwc1        $f16, -0x3AEC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X3AEC);
    // 0x8002F9D0: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8002F9D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8002F9D8: lw          $a1, 0x13C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X13C);
    // 0x8002F9DC: lw          $a2, 0x144($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X144);
    // 0x8002F9E0: lw          $a3, 0x148($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X148);
    // 0x8002F9E4: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8002F9E8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8002F9EC: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x8002F9F0: jal         0x8002AA00
    // 0x8002F9F4: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    func_8002AA00_2B600(rdram, ctx);
        goto after_26;
    // 0x8002F9F4: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    after_26:
    // 0x8002F9F8: lh          $t1, 0x128($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X128);
    // 0x8002F9FC: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x8002FA00: bne         $t1, $at, L_8002FAF8
    if (ctx->r9 != ctx->r1) {
        // 0x8002FA04: nop
    
            goto L_8002FAF8;
    }
    // 0x8002FA04: nop

    // 0x8002FA08: lwc1        $f12, 0x12C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x8002FA0C: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8002FA10: lwc1        $f6, 0x118($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X118);
    // 0x8002FA14: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8002FA18: c.le.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl <= ctx->f4.fl;
    // 0x8002FA1C: nop

    // 0x8002FA20: bc1f        L_8002FAF8
    if (!c1cs) {
        // 0x8002FA24: nop
    
            goto L_8002FAF8;
    }
    // 0x8002FA24: nop

    // 0x8002FA28: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x8002FA2C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8002FA30: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8002FA34: lwc1        $f14, 0x14C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x8002FA38: c.lt.d      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.d < ctx->f10.d;
    // 0x8002FA3C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002FA40: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x8002FA44: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x8002FA48: bc1f        L_8002FAF8
    if (!c1cs) {
        // 0x8002FA4C: addiu       $a2, $sp, 0x58
        ctx->r6 = ADD32(ctx->r29, 0X58);
            goto L_8002FAF8;
    }
    // 0x8002FA4C: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x8002FA50: ldc1        $f18, -0x3AE8($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0X3AE8);
    // 0x8002FA54: cvt.d.s     $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f16.d = CVT_D_S(ctx->f14.fl);
    // 0x8002FA58: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8002FA5C: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x8002FA60: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x8002FA64: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8002FA68: cvt.d.s     $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f6.d = CVT_D_S(ctx->f14.fl);
    // 0x8002FA6C: lwc1        $f16, 0xE4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x8002FA70: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x8002FA74: addiu       $t4, $sp, 0xA8
    ctx->r12 = ADD32(ctx->r29, 0XA8);
    // 0x8002FA78: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    // 0x8002FA7C: or          $t3, $s0, $zero
    ctx->r11 = ctx->r16 | 0;
    // 0x8002FA80: addiu       $t2, $s0, 0x48
    ctx->r10 = ADD32(ctx->r16, 0X48);
    // 0x8002FA84: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x8002FA88: cvt.s.d     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f0.fl = CVT_S_D(ctx->f4.d);
    // 0x8002FA8C: bc1f        L_8002FAB8
    if (!c1cs) {
        // 0x8002FA90: cvt.s.d     $f2, $f10
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f2.fl = CVT_S_D(ctx->f10.d);
            goto L_8002FAB8;
    }
    // 0x8002FA90: cvt.s.d     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f2.fl = CVT_S_D(ctx->f10.d);
L_8002FA94:
    // 0x8002FA94: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x8002FA98: addiu       $t3, $t3, 0xC
    ctx->r11 = ADD32(ctx->r11, 0XC);
    // 0x8002FA9C: addiu       $t4, $t4, 0xC
    ctx->r12 = ADD32(ctx->r12, 0XC);
    // 0x8002FAA0: sw          $at, -0xC($t4)
    MEM_W(-0XC, ctx->r12) = ctx->r1;
    // 0x8002FAA4: lw          $at, -0x8($t3)
    ctx->r1 = MEM_W(ctx->r11, -0X8);
    // 0x8002FAA8: sw          $at, -0x8($t4)
    MEM_W(-0X8, ctx->r12) = ctx->r1;
    // 0x8002FAAC: lw          $at, -0x4($t3)
    ctx->r1 = MEM_W(ctx->r11, -0X4);
    // 0x8002FAB0: bne         $t3, $t2, L_8002FA94
    if (ctx->r11 != ctx->r10) {
        // 0x8002FAB4: sw          $at, -0x4($t4)
        MEM_W(-0X4, ctx->r12) = ctx->r1;
            goto L_8002FA94;
    }
    // 0x8002FAB4: sw          $at, -0x4($t4)
    MEM_W(-0X4, ctx->r12) = ctx->r1;
L_8002FAB8:
    // 0x8002FAB8: lwc1        $f12, 0x108($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X108);
    // 0x8002FABC: sub.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x8002FAC0: c.lt.s      $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl < ctx->f12.fl;
    // 0x8002FAC4: swc1        $f12, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f12.u32l;
    // 0x8002FAC8: bc1fl       L_8002FAD8
    if (!c1cs) {
        // 0x8002FACC: lwc1        $f12, 0x110($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
            goto L_8002FAD8;
    }
    goto skip_21;
    // 0x8002FACC: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
    skip_21:
    // 0x8002FAD0: swc1        $f20, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f20.u32l;
    // 0x8002FAD4: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
L_8002FAD8:
    // 0x8002FAD8: sub.s       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x8002FADC: c.lt.s      $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl < ctx->f12.fl;
    // 0x8002FAE0: swc1        $f12, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f12.u32l;
    // 0x8002FAE4: bc1f        L_8002FAF0
    if (!c1cs) {
        // 0x8002FAE8: nop
    
            goto L_8002FAF0;
    }
    // 0x8002FAE8: nop

    // 0x8002FAEC: swc1        $f20, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f20.u32l;
L_8002FAF0:
    // 0x8002FAF0: jal         0x80030688
    // 0x8002FAF4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80030688_31288(rdram, ctx);
        goto after_27;
    // 0x8002FAF4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_27:
L_8002FAF8:
    // 0x8002FAF8: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002FAFC: lwc1        $f18, -0x3AE0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X3AE0);
    // 0x8002FB00: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002FB04: lwc1        $f4, -0x3ADC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3ADC);
    // 0x8002FB08: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8002FB0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8002FB10: lw          $a1, 0x13C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X13C);
    // 0x8002FB14: lw          $a2, 0x144($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X144);
    // 0x8002FB18: lw          $a3, 0x148($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X148);
    // 0x8002FB1C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8002FB20: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x8002FB24: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x8002FB28: jal         0x8002AA00
    // 0x8002FB2C: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    func_8002AA00_2B600(rdram, ctx);
        goto after_28;
    // 0x8002FB2C: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    after_28:
    // 0x8002FB30: lh          $t6, 0x128($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X128);
    // 0x8002FB34: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x8002FB38: bnel        $t6, $at, L_8002FC30
    if (ctx->r14 != ctx->r1) {
        // 0x8002FB3C: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8002FC30;
    }
    goto skip_22;
    // 0x8002FB3C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_22:
    // 0x8002FB40: lwc1        $f12, 0x12C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x8002FB44: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8002FB48: lwc1        $f10, 0x118($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X118);
    // 0x8002FB4C: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8002FB50: c.le.s      $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f12.fl <= ctx->f8.fl;
    // 0x8002FB54: nop

    // 0x8002FB58: bc1fl       L_8002FC30
    if (!c1cs) {
        // 0x8002FB5C: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8002FC30;
    }
    goto skip_23;
    // 0x8002FB5C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_23:
    // 0x8002FB60: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x8002FB64: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8002FB68: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x8002FB6C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002FB70: c.lt.d      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.d < ctx->f18.d;
    // 0x8002FB74: lwc1        $f4, 0x14C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x8002FB78: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x8002FB7C: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x8002FB80: bc1f        L_8002FC2C
    if (!c1cs) {
        // 0x8002FB84: addiu       $a2, $sp, 0x58
        ctx->r6 = ADD32(ctx->r29, 0X58);
            goto L_8002FC2C;
    }
    // 0x8002FB84: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x8002FB88: ldc1        $f8, -0x3AD8($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X3AD8);
    // 0x8002FB8C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8002FB90: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8002FB94: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x8002FB98: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x8002FB9C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8002FBA0: lwc1        $f4, 0xE4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x8002FBA4: addiu       $t0, $sp, 0xA8
    ctx->r8 = ADD32(ctx->r29, 0XA8);
    // 0x8002FBA8: mul.d       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f6.d, ctx->f16.d);
    // 0x8002FBAC: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x8002FBB0: or          $t9, $s0, $zero
    ctx->r25 = ctx->r16 | 0;
    // 0x8002FBB4: addiu       $t8, $s0, 0x48
    ctx->r24 = ADD32(ctx->r16, 0X48);
    // 0x8002FBB8: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x8002FBBC: cvt.s.d     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f0.fl = CVT_S_D(ctx->f10.d);
    // 0x8002FBC0: bc1f        L_8002FBEC
    if (!c1cs) {
        // 0x8002FBC4: cvt.s.d     $f2, $f18
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f2.fl = CVT_S_D(ctx->f18.d);
            goto L_8002FBEC;
    }
    // 0x8002FBC4: cvt.s.d     $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f2.fl = CVT_S_D(ctx->f18.d);
L_8002FBC8:
    // 0x8002FBC8: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x8002FBCC: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x8002FBD0: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x8002FBD4: sw          $at, -0xC($t0)
    MEM_W(-0XC, ctx->r8) = ctx->r1;
    // 0x8002FBD8: lw          $at, -0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X8);
    // 0x8002FBDC: sw          $at, -0x8($t0)
    MEM_W(-0X8, ctx->r8) = ctx->r1;
    // 0x8002FBE0: lw          $at, -0x4($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X4);
    // 0x8002FBE4: bne         $t9, $t8, L_8002FBC8
    if (ctx->r25 != ctx->r24) {
        // 0x8002FBE8: sw          $at, -0x4($t0)
        MEM_W(-0X4, ctx->r8) = ctx->r1;
            goto L_8002FBC8;
    }
    // 0x8002FBE8: sw          $at, -0x4($t0)
    MEM_W(-0X4, ctx->r8) = ctx->r1;
L_8002FBEC:
    // 0x8002FBEC: lwc1        $f12, 0x108($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X108);
    // 0x8002FBF0: sub.s       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x8002FBF4: c.lt.s      $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl < ctx->f12.fl;
    // 0x8002FBF8: swc1        $f12, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f12.u32l;
    // 0x8002FBFC: bc1fl       L_8002FC0C
    if (!c1cs) {
        // 0x8002FC00: lwc1        $f12, 0x110($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
            goto L_8002FC0C;
    }
    goto skip_24;
    // 0x8002FC00: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
    skip_24:
    // 0x8002FC04: swc1        $f20, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f20.u32l;
    // 0x8002FC08: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
L_8002FC0C:
    // 0x8002FC0C: sub.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x8002FC10: c.lt.s      $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl < ctx->f12.fl;
    // 0x8002FC14: swc1        $f12, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f12.u32l;
    // 0x8002FC18: bc1f        L_8002FC24
    if (!c1cs) {
        // 0x8002FC1C: nop
    
            goto L_8002FC24;
    }
    // 0x8002FC1C: nop

    // 0x8002FC20: swc1        $f20, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f20.u32l;
L_8002FC24:
    // 0x8002FC24: jal         0x80030688
    // 0x8002FC28: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80030688_31288(rdram, ctx);
        goto after_29;
    // 0x8002FC28: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_29:
L_8002FC2C:
    // 0x8002FC2C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_8002FC30:
    // 0x8002FC30: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8002FC34: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8002FC38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8002FC3C: lw          $a1, 0x13C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X13C);
    // 0x8002FC40: lw          $a2, 0x144($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X144);
    // 0x8002FC44: lw          $a3, 0x148($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X148);
    // 0x8002FC48: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x8002FC4C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8002FC50: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x8002FC54: jal         0x8002AA00
    // 0x8002FC58: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    func_8002AA00_2B600(rdram, ctx);
        goto after_30;
    // 0x8002FC58: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_30:
    // 0x8002FC5C: lh          $t1, 0x128($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X128);
    // 0x8002FC60: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x8002FC64: bne         $t1, $at, L_8002FD18
    if (ctx->r9 != ctx->r1) {
        // 0x8002FC68: nop
    
            goto L_8002FD18;
    }
    // 0x8002FC68: nop

    // 0x8002FC6C: lwc1        $f12, 0x12C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x8002FC70: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8002FC74: lwc1        $f16, 0x118($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X118);
    // 0x8002FC78: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8002FC7C: c.le.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl <= ctx->f6.fl;
    // 0x8002FC80: nop

    // 0x8002FC84: bc1f        L_8002FD18
    if (!c1cs) {
        // 0x8002FC88: nop
    
            goto L_8002FD18;
    }
    // 0x8002FC88: nop

    // 0x8002FC8C: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x8002FC90: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8002FC94: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x8002FC98: lwc1        $f8, 0xE4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x8002FC9C: c.lt.d      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.d < ctx->f4.d;
    // 0x8002FCA0: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x8002FCA4: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x8002FCA8: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x8002FCAC: bc1f        L_8002FD18
    if (!c1cs) {
        // 0x8002FCB0: addiu       $a3, $sp, 0x54
        ctx->r7 = ADD32(ctx->r29, 0X54);
            goto L_8002FD18;
    }
    // 0x8002FCB0: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x8002FCB4: c.lt.s      $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f12.fl < ctx->f8.fl;
    // 0x8002FCB8: addiu       $t5, $sp, 0xA8
    ctx->r13 = ADD32(ctx->r29, 0XA8);
    // 0x8002FCBC: or          $t4, $s0, $zero
    ctx->r12 = ctx->r16 | 0;
    // 0x8002FCC0: addiu       $t3, $s0, 0x48
    ctx->r11 = ADD32(ctx->r16, 0X48);
    // 0x8002FCC4: bc1fl       L_8002FCF4
    if (!c1cs) {
        // 0x8002FCC8: lwc1        $f12, 0x110($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
            goto L_8002FCF4;
    }
    goto skip_25;
    // 0x8002FCC8: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
    skip_25:
L_8002FCCC:
    // 0x8002FCCC: lw          $at, 0x0($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X0);
    // 0x8002FCD0: addiu       $t4, $t4, 0xC
    ctx->r12 = ADD32(ctx->r12, 0XC);
    // 0x8002FCD4: addiu       $t5, $t5, 0xC
    ctx->r13 = ADD32(ctx->r13, 0XC);
    // 0x8002FCD8: sw          $at, -0xC($t5)
    MEM_W(-0XC, ctx->r13) = ctx->r1;
    // 0x8002FCDC: lw          $at, -0x8($t4)
    ctx->r1 = MEM_W(ctx->r12, -0X8);
    // 0x8002FCE0: sw          $at, -0x8($t5)
    MEM_W(-0X8, ctx->r13) = ctx->r1;
    // 0x8002FCE4: lw          $at, -0x4($t4)
    ctx->r1 = MEM_W(ctx->r12, -0X4);
    // 0x8002FCE8: bne         $t4, $t3, L_8002FCCC
    if (ctx->r12 != ctx->r11) {
        // 0x8002FCEC: sw          $at, -0x4($t5)
        MEM_W(-0X4, ctx->r13) = ctx->r1;
            goto L_8002FCCC;
    }
    // 0x8002FCEC: sw          $at, -0x4($t5)
    MEM_W(-0X4, ctx->r13) = ctx->r1;
    // 0x8002FCF0: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
L_8002FCF4:
    // 0x8002FCF4: lwc1        $f10, 0x14C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x8002FCF8: sub.s       $f12, $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f10.fl;
    // 0x8002FCFC: c.lt.s      $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl < ctx->f12.fl;
    // 0x8002FD00: swc1        $f12, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f12.u32l;
    // 0x8002FD04: bc1f        L_8002FD10
    if (!c1cs) {
        // 0x8002FD08: nop
    
            goto L_8002FD10;
    }
    // 0x8002FD08: nop

    // 0x8002FD0C: swc1        $f20, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f20.u32l;
L_8002FD10:
    // 0x8002FD10: jal         0x80030688
    // 0x8002FD14: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80030688_31288(rdram, ctx);
        goto after_31;
    // 0x8002FD14: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_31:
L_8002FD18:
    // 0x8002FD18: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002FD1C: lwc1        $f6, -0x3AD0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X3AD0);
    // 0x8002FD20: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002FD24: lwc1        $f16, -0x3ACC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X3ACC);
    // 0x8002FD28: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8002FD2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8002FD30: lw          $a1, 0x13C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X13C);
    // 0x8002FD34: lw          $a2, 0x144($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X144);
    // 0x8002FD38: lw          $a3, 0x148($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X148);
    // 0x8002FD3C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8002FD40: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x8002FD44: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x8002FD48: jal         0x8002AA00
    // 0x8002FD4C: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    func_8002AA00_2B600(rdram, ctx);
        goto after_32;
    // 0x8002FD4C: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    after_32:
    // 0x8002FD50: lh          $t6, 0x128($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X128);
    // 0x8002FD54: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x8002FD58: bne         $t6, $at, L_8002FE4C
    if (ctx->r14 != ctx->r1) {
        // 0x8002FD5C: nop
    
            goto L_8002FE4C;
    }
    // 0x8002FD5C: nop

    // 0x8002FD60: lwc1        $f12, 0x12C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x8002FD64: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8002FD68: lwc1        $f8, 0x118($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X118);
    // 0x8002FD6C: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8002FD70: c.le.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl <= ctx->f4.fl;
    // 0x8002FD74: nop

    // 0x8002FD78: bc1f        L_8002FE4C
    if (!c1cs) {
        // 0x8002FD7C: nop
    
            goto L_8002FE4C;
    }
    // 0x8002FD7C: nop

    // 0x8002FD80: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x8002FD84: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8002FD88: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8002FD8C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002FD90: c.lt.d      $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.d < ctx->f6.d;
    // 0x8002FD94: lwc1        $f16, 0x14C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x8002FD98: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x8002FD9C: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x8002FDA0: bc1f        L_8002FE4C
    if (!c1cs) {
        // 0x8002FDA4: addiu       $a2, $sp, 0x58
        ctx->r6 = ADD32(ctx->r29, 0X58);
            goto L_8002FE4C;
    }
    // 0x8002FDA4: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x8002FDA8: ldc1        $f4, -0x3AC8($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X3AC8);
    // 0x8002FDAC: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x8002FDB0: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8002FDB4: mul.d       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x8002FDB8: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x8002FDBC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8002FDC0: lwc1        $f16, 0xE4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x8002FDC4: addiu       $t7, $sp, 0xA8
    ctx->r15 = ADD32(ctx->r29, 0XA8);
    // 0x8002FDC8: mul.d       $f6, $f18, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f10.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f10.d);
    // 0x8002FDCC: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    // 0x8002FDD0: or          $t0, $s0, $zero
    ctx->r8 = ctx->r16 | 0;
    // 0x8002FDD4: addiu       $t9, $s0, 0x48
    ctx->r25 = ADD32(ctx->r16, 0X48);
    // 0x8002FDD8: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x8002FDDC: cvt.s.d     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f0.fl = CVT_S_D(ctx->f8.d);
    // 0x8002FDE0: bc1f        L_8002FE0C
    if (!c1cs) {
        // 0x8002FDE4: cvt.s.d     $f2, $f6
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f2.fl = CVT_S_D(ctx->f6.d);
            goto L_8002FE0C;
    }
    // 0x8002FDE4: cvt.s.d     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f2.fl = CVT_S_D(ctx->f6.d);
L_8002FDE8:
    // 0x8002FDE8: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x8002FDEC: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x8002FDF0: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x8002FDF4: sw          $at, -0xC($t7)
    MEM_W(-0XC, ctx->r15) = ctx->r1;
    // 0x8002FDF8: lw          $at, -0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X8);
    // 0x8002FDFC: sw          $at, -0x8($t7)
    MEM_W(-0X8, ctx->r15) = ctx->r1;
    // 0x8002FE00: lw          $at, -0x4($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X4);
    // 0x8002FE04: bne         $t0, $t9, L_8002FDE8
    if (ctx->r8 != ctx->r25) {
        // 0x8002FE08: sw          $at, -0x4($t7)
        MEM_W(-0X4, ctx->r15) = ctx->r1;
            goto L_8002FDE8;
    }
    // 0x8002FE08: sw          $at, -0x4($t7)
    MEM_W(-0X4, ctx->r15) = ctx->r1;
L_8002FE0C:
    // 0x8002FE0C: lwc1        $f12, 0x108($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X108);
    // 0x8002FE10: add.s       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f2.fl;
    // 0x8002FE14: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
    // 0x8002FE18: swc1        $f12, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f12.u32l;
    // 0x8002FE1C: bc1fl       L_8002FE2C
    if (!c1cs) {
        // 0x8002FE20: lwc1        $f12, 0x110($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
            goto L_8002FE2C;
    }
    goto skip_26;
    // 0x8002FE20: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
    skip_26:
    // 0x8002FE24: swc1        $f20, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f20.u32l;
    // 0x8002FE28: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
L_8002FE2C:
    // 0x8002FE2C: sub.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x8002FE30: c.lt.s      $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl < ctx->f12.fl;
    // 0x8002FE34: swc1        $f12, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f12.u32l;
    // 0x8002FE38: bc1f        L_8002FE44
    if (!c1cs) {
        // 0x8002FE3C: nop
    
            goto L_8002FE44;
    }
    // 0x8002FE3C: nop

    // 0x8002FE40: swc1        $f20, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f20.u32l;
L_8002FE44:
    // 0x8002FE44: jal         0x80030688
    // 0x8002FE48: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80030688_31288(rdram, ctx);
        goto after_33;
    // 0x8002FE48: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_33:
L_8002FE4C:
    // 0x8002FE4C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002FE50: lwc1        $f4, -0x3AC0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3AC0);
    // 0x8002FE54: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002FE58: lwc1        $f8, -0x3ABC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X3ABC);
    // 0x8002FE5C: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8002FE60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8002FE64: lw          $a1, 0x13C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X13C);
    // 0x8002FE68: lw          $a2, 0x144($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X144);
    // 0x8002FE6C: lw          $a3, 0x148($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X148);
    // 0x8002FE70: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8002FE74: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8002FE78: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x8002FE7C: jal         0x8002AA00
    // 0x8002FE80: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    func_8002AA00_2B600(rdram, ctx);
        goto after_34;
    // 0x8002FE80: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    after_34:
    // 0x8002FE84: lh          $t1, 0x128($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X128);
    // 0x8002FE88: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x8002FE8C: bnel        $t1, $at, L_8002FF84
    if (ctx->r9 != ctx->r1) {
        // 0x8002FE90: lui         $at, 0xBF80
        ctx->r1 = S32(0XBF80 << 16);
            goto L_8002FF84;
    }
    goto skip_27;
    // 0x8002FE90: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    skip_27:
    // 0x8002FE94: lwc1        $f12, 0x12C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x8002FE98: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8002FE9C: lwc1        $f6, 0x118($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X118);
    // 0x8002FEA0: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8002FEA4: c.le.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl <= ctx->f10.fl;
    // 0x8002FEA8: nop

    // 0x8002FEAC: bc1fl       L_8002FF84
    if (!c1cs) {
        // 0x8002FEB0: lui         $at, 0xBF80
        ctx->r1 = S32(0XBF80 << 16);
            goto L_8002FF84;
    }
    goto skip_28;
    // 0x8002FEB0: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    skip_28:
    // 0x8002FEB4: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x8002FEB8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8002FEBC: cvt.d.s     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f16.d = CVT_D_S(ctx->f6.fl);
    // 0x8002FEC0: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002FEC4: c.lt.d      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.d < ctx->f4.d;
    // 0x8002FEC8: lwc1        $f8, 0x14C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x8002FECC: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x8002FED0: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x8002FED4: bc1f        L_8002FF80
    if (!c1cs) {
        // 0x8002FED8: addiu       $a2, $sp, 0x58
        ctx->r6 = ADD32(ctx->r29, 0X58);
            goto L_8002FF80;
    }
    // 0x8002FED8: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x8002FEDC: ldc1        $f10, -0x3AB8($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X3AB8);
    // 0x8002FEE0: cvt.d.s     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f18.d = CVT_D_S(ctx->f8.fl);
    // 0x8002FEE4: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8002FEE8: mul.d       $f6, $f18, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f10.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f10.d);
    // 0x8002FEEC: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x8002FEF0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8002FEF4: lwc1        $f8, 0xE4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x8002FEF8: addiu       $t2, $sp, 0xA8
    ctx->r10 = ADD32(ctx->r29, 0XA8);
    // 0x8002FEFC: mul.d       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f16.d);
    // 0x8002FF00: c.lt.s      $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f12.fl < ctx->f8.fl;
    // 0x8002FF04: or          $t5, $s0, $zero
    ctx->r13 = ctx->r16 | 0;
    // 0x8002FF08: addiu       $t4, $s0, 0x48
    ctx->r12 = ADD32(ctx->r16, 0X48);
    // 0x8002FF0C: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x8002FF10: cvt.s.d     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f0.fl = CVT_S_D(ctx->f6.d);
    // 0x8002FF14: bc1f        L_8002FF40
    if (!c1cs) {
        // 0x8002FF18: cvt.s.d     $f2, $f4
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f2.fl = CVT_S_D(ctx->f4.d);
            goto L_8002FF40;
    }
    // 0x8002FF18: cvt.s.d     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f2.fl = CVT_S_D(ctx->f4.d);
L_8002FF1C:
    // 0x8002FF1C: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x8002FF20: addiu       $t5, $t5, 0xC
    ctx->r13 = ADD32(ctx->r13, 0XC);
    // 0x8002FF24: addiu       $t2, $t2, 0xC
    ctx->r10 = ADD32(ctx->r10, 0XC);
    // 0x8002FF28: sw          $at, -0xC($t2)
    MEM_W(-0XC, ctx->r10) = ctx->r1;
    // 0x8002FF2C: lw          $at, -0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, -0X8);
    // 0x8002FF30: sw          $at, -0x8($t2)
    MEM_W(-0X8, ctx->r10) = ctx->r1;
    // 0x8002FF34: lw          $at, -0x4($t5)
    ctx->r1 = MEM_W(ctx->r13, -0X4);
    // 0x8002FF38: bne         $t5, $t4, L_8002FF1C
    if (ctx->r13 != ctx->r12) {
        // 0x8002FF3C: sw          $at, -0x4($t2)
        MEM_W(-0X4, ctx->r10) = ctx->r1;
            goto L_8002FF1C;
    }
    // 0x8002FF3C: sw          $at, -0x4($t2)
    MEM_W(-0X4, ctx->r10) = ctx->r1;
L_8002FF40:
    // 0x8002FF40: lwc1        $f12, 0x108($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X108);
    // 0x8002FF44: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    // 0x8002FF48: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
    // 0x8002FF4C: swc1        $f12, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f12.u32l;
    // 0x8002FF50: bc1fl       L_8002FF60
    if (!c1cs) {
        // 0x8002FF54: lwc1        $f12, 0x110($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
            goto L_8002FF60;
    }
    goto skip_29;
    // 0x8002FF54: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
    skip_29:
    // 0x8002FF58: swc1        $f20, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f20.u32l;
    // 0x8002FF5C: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
L_8002FF60:
    // 0x8002FF60: sub.s       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x8002FF64: c.lt.s      $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl < ctx->f12.fl;
    // 0x8002FF68: swc1        $f12, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f12.u32l;
    // 0x8002FF6C: bc1f        L_8002FF78
    if (!c1cs) {
        // 0x8002FF70: nop
    
            goto L_8002FF78;
    }
    // 0x8002FF70: nop

    // 0x8002FF74: swc1        $f20, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f20.u32l;
L_8002FF78:
    // 0x8002FF78: jal         0x80030688
    // 0x8002FF7C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80030688_31288(rdram, ctx);
        goto after_35;
    // 0x8002FF7C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_35:
L_8002FF80:
    // 0x8002FF80: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
L_8002FF84:
    // 0x8002FF84: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8002FF88: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8002FF8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8002FF90: lw          $a1, 0x13C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X13C);
    // 0x8002FF94: lw          $a2, 0x144($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X144);
    // 0x8002FF98: lw          $a3, 0x148($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X148);
    // 0x8002FF9C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8002FFA0: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x8002FFA4: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x8002FFA8: jal         0x8002AA00
    // 0x8002FFAC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_8002AA00_2B600(rdram, ctx);
        goto after_36;
    // 0x8002FFAC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_36:
    // 0x8002FFB0: lh          $t6, 0x128($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X128);
    // 0x8002FFB4: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x8002FFB8: bne         $t6, $at, L_8003006C
    if (ctx->r14 != ctx->r1) {
        // 0x8002FFBC: nop
    
            goto L_8003006C;
    }
    // 0x8002FFBC: nop

    // 0x8002FFC0: lwc1        $f12, 0x12C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x8002FFC4: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8002FFC8: lwc1        $f16, 0x118($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X118);
    // 0x8002FFCC: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8002FFD0: c.le.s      $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f12.fl <= ctx->f18.fl;
    // 0x8002FFD4: nop

    // 0x8002FFD8: bc1f        L_8003006C
    if (!c1cs) {
        // 0x8002FFDC: nop
    
            goto L_8003006C;
    }
    // 0x8002FFDC: nop

    // 0x8002FFE0: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x8002FFE4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8002FFE8: cvt.d.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.d = CVT_D_S(ctx->f16.fl);
    // 0x8002FFEC: lwc1        $f10, 0xE4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x8002FFF0: c.lt.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d < ctx->f8.d;
    // 0x8002FFF4: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x8002FFF8: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x8002FFFC: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x80030000: bc1f        L_8003006C
    if (!c1cs) {
        // 0x80030004: addiu       $a3, $sp, 0x54
        ctx->r7 = ADD32(ctx->r29, 0X54);
            goto L_8003006C;
    }
    // 0x80030004: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x80030008: c.lt.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl < ctx->f10.fl;
    // 0x8003000C: addiu       $t8, $sp, 0xA8
    ctx->r24 = ADD32(ctx->r29, 0XA8);
    // 0x80030010: or          $t7, $s0, $zero
    ctx->r15 = ctx->r16 | 0;
    // 0x80030014: addiu       $t0, $s0, 0x48
    ctx->r8 = ADD32(ctx->r16, 0X48);
    // 0x80030018: bc1fl       L_80030048
    if (!c1cs) {
        // 0x8003001C: lwc1        $f12, 0x108($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X108);
            goto L_80030048;
    }
    goto skip_30;
    // 0x8003001C: lwc1        $f12, 0x108($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X108);
    skip_30:
L_80030020:
    // 0x80030020: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x80030024: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x80030028: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x8003002C: sw          $at, -0xC($t8)
    MEM_W(-0XC, ctx->r24) = ctx->r1;
    // 0x80030030: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x80030034: sw          $at, -0x8($t8)
    MEM_W(-0X8, ctx->r24) = ctx->r1;
    // 0x80030038: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x8003003C: bne         $t7, $t0, L_80030020
    if (ctx->r15 != ctx->r8) {
        // 0x80030040: sw          $at, -0x4($t8)
        MEM_W(-0X4, ctx->r24) = ctx->r1;
            goto L_80030020;
    }
    // 0x80030040: sw          $at, -0x4($t8)
    MEM_W(-0X4, ctx->r24) = ctx->r1;
    // 0x80030044: lwc1        $f12, 0x108($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X108);
L_80030048:
    // 0x80030048: lwc1        $f6, 0x14C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x8003004C: add.s       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f6.fl;
    // 0x80030050: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
    // 0x80030054: swc1        $f12, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f12.u32l;
    // 0x80030058: bc1f        L_80030064
    if (!c1cs) {
        // 0x8003005C: nop
    
            goto L_80030064;
    }
    // 0x8003005C: nop

    // 0x80030060: swc1        $f20, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f20.u32l;
L_80030064:
    // 0x80030064: jal         0x80030688
    // 0x80030068: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80030688_31288(rdram, ctx);
        goto after_37;
    // 0x80030068: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_37:
L_8003006C:
    // 0x8003006C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80030070: lwc1        $f18, -0x3AB0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X3AB0);
    // 0x80030074: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80030078: lwc1        $f16, -0x3AAC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X3AAC);
    // 0x8003007C: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80030080: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80030084: lw          $a1, 0x13C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X13C);
    // 0x80030088: lw          $a2, 0x144($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X144);
    // 0x8003008C: lw          $a3, 0x148($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X148);
    // 0x80030090: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80030094: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x80030098: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x8003009C: jal         0x8002AA00
    // 0x800300A0: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    func_8002AA00_2B600(rdram, ctx);
        goto after_38;
    // 0x800300A0: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    after_38:
    // 0x800300A4: lh          $t1, 0x128($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X128);
    // 0x800300A8: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x800300AC: bne         $t1, $at, L_800301A0
    if (ctx->r9 != ctx->r1) {
        // 0x800300B0: nop
    
            goto L_800301A0;
    }
    // 0x800300B0: nop

    // 0x800300B4: lwc1        $f12, 0x12C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x800300B8: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800300BC: lwc1        $f10, 0x118($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X118);
    // 0x800300C0: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x800300C4: c.le.s      $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f12.fl <= ctx->f8.fl;
    // 0x800300C8: nop

    // 0x800300CC: bc1f        L_800301A0
    if (!c1cs) {
        // 0x800300D0: nop
    
            goto L_800301A0;
    }
    // 0x800300D0: nop

    // 0x800300D4: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x800300D8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800300DC: cvt.d.s     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f6.d = CVT_D_S(ctx->f10.fl);
    // 0x800300E0: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x800300E4: c.lt.d      $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f6.d < ctx->f18.d;
    // 0x800300E8: lwc1        $f16, 0x14C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x800300EC: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x800300F0: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x800300F4: bc1f        L_800301A0
    if (!c1cs) {
        // 0x800300F8: addiu       $a2, $sp, 0x58
        ctx->r6 = ADD32(ctx->r29, 0X58);
            goto L_800301A0;
    }
    // 0x800300F8: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x800300FC: ldc1        $f8, -0x3AA8($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X3AA8);
    // 0x80030100: cvt.d.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.d = CVT_D_S(ctx->f16.fl);
    // 0x80030104: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80030108: mul.d       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f4.d, ctx->f8.d);
    // 0x8003010C: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80030110: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80030114: lwc1        $f16, 0xE4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x80030118: addiu       $t3, $sp, 0xA8
    ctx->r11 = ADD32(ctx->r29, 0XA8);
    // 0x8003011C: mul.d       $f18, $f4, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f18.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x80030120: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    // 0x80030124: or          $t2, $s0, $zero
    ctx->r10 = ctx->r16 | 0;
    // 0x80030128: addiu       $t5, $s0, 0x48
    ctx->r13 = ADD32(ctx->r16, 0X48);
    // 0x8003012C: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x80030130: cvt.s.d     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f0.fl = CVT_S_D(ctx->f10.d);
    // 0x80030134: bc1f        L_80030160
    if (!c1cs) {
        // 0x80030138: cvt.s.d     $f2, $f18
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f2.fl = CVT_S_D(ctx->f18.d);
            goto L_80030160;
    }
    // 0x80030138: cvt.s.d     $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f2.fl = CVT_S_D(ctx->f18.d);
L_8003013C:
    // 0x8003013C: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x80030140: addiu       $t2, $t2, 0xC
    ctx->r10 = ADD32(ctx->r10, 0XC);
    // 0x80030144: addiu       $t3, $t3, 0xC
    ctx->r11 = ADD32(ctx->r11, 0XC);
    // 0x80030148: sw          $at, -0xC($t3)
    MEM_W(-0XC, ctx->r11) = ctx->r1;
    // 0x8003014C: lw          $at, -0x8($t2)
    ctx->r1 = MEM_W(ctx->r10, -0X8);
    // 0x80030150: sw          $at, -0x8($t3)
    MEM_W(-0X8, ctx->r11) = ctx->r1;
    // 0x80030154: lw          $at, -0x4($t2)
    ctx->r1 = MEM_W(ctx->r10, -0X4);
    // 0x80030158: bne         $t2, $t5, L_8003013C
    if (ctx->r10 != ctx->r13) {
        // 0x8003015C: sw          $at, -0x4($t3)
        MEM_W(-0X4, ctx->r11) = ctx->r1;
            goto L_8003013C;
    }
    // 0x8003015C: sw          $at, -0x4($t3)
    MEM_W(-0X4, ctx->r11) = ctx->r1;
L_80030160:
    // 0x80030160: lwc1        $f12, 0x108($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X108);
    // 0x80030164: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    // 0x80030168: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
    // 0x8003016C: swc1        $f12, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f12.u32l;
    // 0x80030170: bc1fl       L_80030180
    if (!c1cs) {
        // 0x80030174: lwc1        $f12, 0x110($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
            goto L_80030180;
    }
    goto skip_31;
    // 0x80030174: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
    skip_31:
    // 0x80030178: swc1        $f20, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f20.u32l;
    // 0x8003017C: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
L_80030180:
    // 0x80030180: add.s       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f2.fl;
    // 0x80030184: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
    // 0x80030188: swc1        $f12, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f12.u32l;
    // 0x8003018C: bc1f        L_80030198
    if (!c1cs) {
        // 0x80030190: nop
    
            goto L_80030198;
    }
    // 0x80030190: nop

    // 0x80030194: swc1        $f20, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f20.u32l;
L_80030198:
    // 0x80030198: jal         0x80030688
    // 0x8003019C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80030688_31288(rdram, ctx);
        goto after_39;
    // 0x8003019C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_39:
L_800301A0:
    // 0x800301A0: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x800301A4: lwc1        $f8, -0x3AA0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X3AA0);
    // 0x800301A8: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x800301AC: lwc1        $f10, -0x3A9C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X3A9C);
    // 0x800301B0: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x800301B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800301B8: lw          $a1, 0x13C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X13C);
    // 0x800301BC: lw          $a2, 0x144($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X144);
    // 0x800301C0: lw          $a3, 0x148($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X148);
    // 0x800301C4: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x800301C8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x800301CC: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x800301D0: jal         0x8002AA00
    // 0x800301D4: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    func_8002AA00_2B600(rdram, ctx);
        goto after_40;
    // 0x800301D4: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    after_40:
    // 0x800301D8: lh          $t6, 0x128($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X128);
    // 0x800301DC: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x800301E0: lwc1        $f12, 0x12C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x800301E4: bne         $t6, $at, L_800302CC
    if (ctx->r14 != ctx->r1) {
        // 0x800301E8: lwc1        $f6, 0x3C($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
            goto L_800302CC;
    }
    // 0x800301E8: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800301EC: c.le.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl <= ctx->f6.fl;
    // 0x800301F0: lwc1        $f18, 0x118($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X118);
    // 0x800301F4: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x800301F8: bc1fl       L_800302D0
    if (!c1cs) {
        // 0x800301FC: lui         $at, 0xBF80
        ctx->r1 = S32(0XBF80 << 16);
            goto L_800302D0;
    }
    goto skip_32;
    // 0x800301FC: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    skip_32:
    // 0x80030200: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80030204: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80030208: cvt.d.s     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f16.d = CVT_D_S(ctx->f18.fl);
    // 0x8003020C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80030210: c.lt.d      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.d < ctx->f8.d;
    // 0x80030214: lwc1        $f10, 0x14C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x80030218: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x8003021C: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x80030220: bc1f        L_800302CC
    if (!c1cs) {
        // 0x80030224: addiu       $a2, $sp, 0x58
        ctx->r6 = ADD32(ctx->r29, 0X58);
            goto L_800302CC;
    }
    // 0x80030224: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x80030228: ldc1        $f6, -0x3A98($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X3A98);
    // 0x8003022C: cvt.d.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.d = CVT_D_S(ctx->f10.fl);
    // 0x80030230: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80030234: mul.d       $f18, $f4, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f18.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x80030238: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x8003023C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80030240: lwc1        $f10, 0xE4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x80030244: addiu       $t9, $sp, 0xA8
    ctx->r25 = ADD32(ctx->r29, 0XA8);
    // 0x80030248: mul.d       $f8, $f4, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f16.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f16.d);
    // 0x8003024C: c.lt.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl < ctx->f10.fl;
    // 0x80030250: or          $t8, $s0, $zero
    ctx->r24 = ctx->r16 | 0;
    // 0x80030254: addiu       $t7, $s0, 0x48
    ctx->r15 = ADD32(ctx->r16, 0X48);
    // 0x80030258: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x8003025C: cvt.s.d     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f0.fl = CVT_S_D(ctx->f18.d);
    // 0x80030260: bc1f        L_8003028C
    if (!c1cs) {
        // 0x80030264: cvt.s.d     $f2, $f8
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f2.fl = CVT_S_D(ctx->f8.d);
            goto L_8003028C;
    }
    // 0x80030264: cvt.s.d     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f2.fl = CVT_S_D(ctx->f8.d);
L_80030268:
    // 0x80030268: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x8003026C: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x80030270: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x80030274: sw          $at, -0xC($t9)
    MEM_W(-0XC, ctx->r25) = ctx->r1;
    // 0x80030278: lw          $at, -0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X8);
    // 0x8003027C: sw          $at, -0x8($t9)
    MEM_W(-0X8, ctx->r25) = ctx->r1;
    // 0x80030280: lw          $at, -0x4($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X4);
    // 0x80030284: bne         $t8, $t7, L_80030268
    if (ctx->r24 != ctx->r15) {
        // 0x80030288: sw          $at, -0x4($t9)
        MEM_W(-0X4, ctx->r25) = ctx->r1;
            goto L_80030268;
    }
    // 0x80030288: sw          $at, -0x4($t9)
    MEM_W(-0X4, ctx->r25) = ctx->r1;
L_8003028C:
    // 0x8003028C: lwc1        $f12, 0x108($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X108);
    // 0x80030290: add.s       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f2.fl;
    // 0x80030294: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
    // 0x80030298: swc1        $f12, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f12.u32l;
    // 0x8003029C: bc1fl       L_800302AC
    if (!c1cs) {
        // 0x800302A0: lwc1        $f12, 0x110($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
            goto L_800302AC;
    }
    goto skip_33;
    // 0x800302A0: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
    skip_33:
    // 0x800302A4: swc1        $f20, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f20.u32l;
    // 0x800302A8: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
L_800302AC:
    // 0x800302AC: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    // 0x800302B0: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
    // 0x800302B4: swc1        $f12, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f12.u32l;
    // 0x800302B8: bc1f        L_800302C4
    if (!c1cs) {
        // 0x800302BC: nop
    
            goto L_800302C4;
    }
    // 0x800302BC: nop

    // 0x800302C0: swc1        $f20, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f20.u32l;
L_800302C4:
    // 0x800302C4: jal         0x80030688
    // 0x800302C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80030688_31288(rdram, ctx);
        goto after_41;
    // 0x800302C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_41:
L_800302CC:
    // 0x800302CC: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
L_800302D0:
    // 0x800302D0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800302D4: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x800302D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800302DC: lw          $a1, 0x13C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X13C);
    // 0x800302E0: lw          $a2, 0x144($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X144);
    // 0x800302E4: lw          $a3, 0x148($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X148);
    // 0x800302E8: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x800302EC: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x800302F0: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    // 0x800302F4: jal         0x8002AA00
    // 0x800302F8: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    func_8002AA00_2B600(rdram, ctx);
        goto after_42;
    // 0x800302F8: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    after_42:
    // 0x800302FC: lh          $t1, 0x128($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X128);
    // 0x80030300: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x80030304: lwc1        $f12, 0x12C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x80030308: bne         $t1, $at, L_800303B0
    if (ctx->r9 != ctx->r1) {
        // 0x8003030C: lwc1        $f4, 0x3C($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
            goto L_800303B0;
    }
    // 0x8003030C: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80030310: c.le.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl <= ctx->f4.fl;
    // 0x80030314: lwc1        $f16, 0x118($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X118);
    // 0x80030318: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8003031C: bc1f        L_800303B0
    if (!c1cs) {
        // 0x80030320: nop
    
            goto L_800303B0;
    }
    // 0x80030320: nop

    // 0x80030324: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x80030328: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8003032C: cvt.d.s     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f8.d = CVT_D_S(ctx->f16.fl);
    // 0x80030330: lwc1        $f6, 0xE4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x80030334: c.lt.d      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.d < ctx->f10.d;
    // 0x80030338: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x8003033C: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x80030340: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x80030344: bc1f        L_800303B0
    if (!c1cs) {
        // 0x80030348: addiu       $a3, $sp, 0x54
        ctx->r7 = ADD32(ctx->r29, 0X54);
            goto L_800303B0;
    }
    // 0x80030348: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x8003034C: c.lt.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl < ctx->f6.fl;
    // 0x80030350: addiu       $t4, $sp, 0xA8
    ctx->r12 = ADD32(ctx->r29, 0XA8);
    // 0x80030354: or          $t3, $s0, $zero
    ctx->r11 = ctx->r16 | 0;
    // 0x80030358: addiu       $t2, $s0, 0x48
    ctx->r10 = ADD32(ctx->r16, 0X48);
    // 0x8003035C: bc1fl       L_8003038C
    if (!c1cs) {
        // 0x80030360: lwc1        $f12, 0x110($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
            goto L_8003038C;
    }
    goto skip_34;
    // 0x80030360: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
    skip_34:
L_80030364:
    // 0x80030364: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x80030368: addiu       $t3, $t3, 0xC
    ctx->r11 = ADD32(ctx->r11, 0XC);
    // 0x8003036C: addiu       $t4, $t4, 0xC
    ctx->r12 = ADD32(ctx->r12, 0XC);
    // 0x80030370: sw          $at, -0xC($t4)
    MEM_W(-0XC, ctx->r12) = ctx->r1;
    // 0x80030374: lw          $at, -0x8($t3)
    ctx->r1 = MEM_W(ctx->r11, -0X8);
    // 0x80030378: sw          $at, -0x8($t4)
    MEM_W(-0X8, ctx->r12) = ctx->r1;
    // 0x8003037C: lw          $at, -0x4($t3)
    ctx->r1 = MEM_W(ctx->r11, -0X4);
    // 0x80030380: bne         $t3, $t2, L_80030364
    if (ctx->r11 != ctx->r10) {
        // 0x80030384: sw          $at, -0x4($t4)
        MEM_W(-0X4, ctx->r12) = ctx->r1;
            goto L_80030364;
    }
    // 0x80030384: sw          $at, -0x4($t4)
    MEM_W(-0X4, ctx->r12) = ctx->r1;
    // 0x80030388: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
L_8003038C:
    // 0x8003038C: lwc1        $f18, 0x14C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x80030390: add.s       $f12, $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f18.fl;
    // 0x80030394: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
    // 0x80030398: swc1        $f12, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f12.u32l;
    // 0x8003039C: bc1f        L_800303A8
    if (!c1cs) {
        // 0x800303A0: nop
    
            goto L_800303A8;
    }
    // 0x800303A0: nop

    // 0x800303A4: swc1        $f20, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f20.u32l;
L_800303A8:
    // 0x800303A8: jal         0x80030688
    // 0x800303AC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80030688_31288(rdram, ctx);
        goto after_43;
    // 0x800303AC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_43:
L_800303B0:
    // 0x800303B0: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x800303B4: lwc1        $f4, -0x3A90($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3A90);
    // 0x800303B8: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x800303BC: lwc1        $f16, -0x3A8C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X3A8C);
    // 0x800303C0: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x800303C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800303C8: lw          $a1, 0x13C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X13C);
    // 0x800303CC: lw          $a2, 0x144($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X144);
    // 0x800303D0: lw          $a3, 0x148($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X148);
    // 0x800303D4: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x800303D8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800303DC: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x800303E0: jal         0x8002AA00
    // 0x800303E4: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    func_8002AA00_2B600(rdram, ctx);
        goto after_44;
    // 0x800303E4: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    after_44:
    // 0x800303E8: lh          $t6, 0x128($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X128);
    // 0x800303EC: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x800303F0: lwc1        $f12, 0x12C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x800303F4: bne         $t6, $at, L_800304DC
    if (ctx->r14 != ctx->r1) {
        // 0x800303F8: lwc1        $f10, 0x3C($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
            goto L_800304DC;
    }
    // 0x800303F8: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800303FC: c.le.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl <= ctx->f10.fl;
    // 0x80030400: lwc1        $f6, 0x118($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X118);
    // 0x80030404: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80030408: bc1f        L_800304DC
    if (!c1cs) {
        // 0x8003040C: nop
    
            goto L_800304DC;
    }
    // 0x8003040C: nop

    // 0x80030410: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80030414: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80030418: cvt.d.s     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f18.d = CVT_D_S(ctx->f6.fl);
    // 0x8003041C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80030420: c.lt.d      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.d < ctx->f4.d;
    // 0x80030424: lwc1        $f16, 0x14C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x80030428: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x8003042C: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x80030430: bc1f        L_800304DC
    if (!c1cs) {
        // 0x80030434: addiu       $a2, $sp, 0x58
        ctx->r6 = ADD32(ctx->r29, 0X58);
            goto L_800304DC;
    }
    // 0x80030434: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x80030438: ldc1        $f10, -0x3A88($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X3A88);
    // 0x8003043C: cvt.d.s     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f8.d = CVT_D_S(ctx->f16.fl);
    // 0x80030440: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80030444: mul.d       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f6.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x80030448: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x8003044C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80030450: lwc1        $f16, 0xE4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x80030454: addiu       $t0, $sp, 0xA8
    ctx->r8 = ADD32(ctx->r29, 0XA8);
    // 0x80030458: mul.d       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f8.d, ctx->f18.d);
    // 0x8003045C: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    // 0x80030460: or          $t9, $s0, $zero
    ctx->r25 = ctx->r16 | 0;
    // 0x80030464: addiu       $t8, $s0, 0x48
    ctx->r24 = ADD32(ctx->r16, 0X48);
    // 0x80030468: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x8003046C: cvt.s.d     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f0.fl = CVT_S_D(ctx->f6.d);
    // 0x80030470: bc1f        L_8003049C
    if (!c1cs) {
        // 0x80030474: cvt.s.d     $f2, $f4
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f2.fl = CVT_S_D(ctx->f4.d);
            goto L_8003049C;
    }
    // 0x80030474: cvt.s.d     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f2.fl = CVT_S_D(ctx->f4.d);
L_80030478:
    // 0x80030478: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x8003047C: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x80030480: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x80030484: sw          $at, -0xC($t0)
    MEM_W(-0XC, ctx->r8) = ctx->r1;
    // 0x80030488: lw          $at, -0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X8);
    // 0x8003048C: sw          $at, -0x8($t0)
    MEM_W(-0X8, ctx->r8) = ctx->r1;
    // 0x80030490: lw          $at, -0x4($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X4);
    // 0x80030494: bne         $t9, $t8, L_80030478
    if (ctx->r25 != ctx->r24) {
        // 0x80030498: sw          $at, -0x4($t0)
        MEM_W(-0X4, ctx->r8) = ctx->r1;
            goto L_80030478;
    }
    // 0x80030498: sw          $at, -0x4($t0)
    MEM_W(-0X4, ctx->r8) = ctx->r1;
L_8003049C:
    // 0x8003049C: lwc1        $f12, 0x108($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X108);
    // 0x800304A0: sub.s       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x800304A4: c.lt.s      $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl < ctx->f12.fl;
    // 0x800304A8: swc1        $f12, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f12.u32l;
    // 0x800304AC: bc1fl       L_800304BC
    if (!c1cs) {
        // 0x800304B0: lwc1        $f12, 0x110($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
            goto L_800304BC;
    }
    goto skip_35;
    // 0x800304B0: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
    skip_35:
    // 0x800304B4: swc1        $f20, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f20.u32l;
    // 0x800304B8: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
L_800304BC:
    // 0x800304BC: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    // 0x800304C0: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
    // 0x800304C4: swc1        $f12, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f12.u32l;
    // 0x800304C8: bc1f        L_800304D4
    if (!c1cs) {
        // 0x800304CC: nop
    
            goto L_800304D4;
    }
    // 0x800304CC: nop

    // 0x800304D0: swc1        $f20, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f20.u32l;
L_800304D4:
    // 0x800304D4: jal         0x80030688
    // 0x800304D8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80030688_31288(rdram, ctx);
        goto after_45;
    // 0x800304D8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_45:
L_800304DC:
    // 0x800304DC: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x800304E0: lwc1        $f10, -0x3A80($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X3A80);
    // 0x800304E4: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x800304E8: lwc1        $f6, -0x3A7C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X3A7C);
    // 0x800304EC: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x800304F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800304F4: lw          $a1, 0x13C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X13C);
    // 0x800304F8: lw          $a2, 0x144($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X144);
    // 0x800304FC: lw          $a3, 0x148($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X148);
    // 0x80030500: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80030504: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80030508: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x8003050C: jal         0x8002AA00
    // 0x80030510: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    func_8002AA00_2B600(rdram, ctx);
        goto after_46;
    // 0x80030510: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    after_46:
    // 0x80030514: lh          $t1, 0x128($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X128);
    // 0x80030518: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x8003051C: lwc1        $f12, 0x12C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x80030520: bne         $t1, $at, L_80030608
    if (ctx->r9 != ctx->r1) {
        // 0x80030524: lwc1        $f18, 0x3C($sp)
        ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
            goto L_80030608;
    }
    // 0x80030524: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80030528: c.le.s      $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f12.fl <= ctx->f18.fl;
    // 0x8003052C: lwc1        $f4, 0x118($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X118);
    // 0x80030530: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80030534: bc1fl       L_8003060C
    if (!c1cs) {
        // 0x80030538: lh          $t6, 0xE0($sp)
        ctx->r14 = MEM_H(ctx->r29, 0XE0);
            goto L_8003060C;
    }
    goto skip_36;
    // 0x80030538: lh          $t6, 0xE0($sp)
    ctx->r14 = MEM_H(ctx->r29, 0XE0);
    skip_36:
    // 0x8003053C: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x80030540: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80030544: cvt.d.s     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f16.d = CVT_D_S(ctx->f4.fl);
    // 0x80030548: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8003054C: c.lt.d      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.d < ctx->f10.d;
    // 0x80030550: lwc1        $f6, 0x14C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x80030554: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x80030558: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x8003055C: bc1f        L_80030608
    if (!c1cs) {
        // 0x80030560: addiu       $a2, $sp, 0x58
        ctx->r6 = ADD32(ctx->r29, 0X58);
            goto L_80030608;
    }
    // 0x80030560: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x80030564: ldc1        $f18, -0x3A78($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0X3A78);
    // 0x80030568: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8003056C: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80030570: mul.d       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f8.d, ctx->f18.d);
    // 0x80030574: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x80030578: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8003057C: lwc1        $f6, 0xE4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x80030580: addiu       $t5, $sp, 0xA8
    ctx->r13 = ADD32(ctx->r29, 0XA8);
    // 0x80030584: mul.d       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f16.d);
    // 0x80030588: c.lt.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl < ctx->f6.fl;
    // 0x8003058C: or          $t4, $s0, $zero
    ctx->r12 = ctx->r16 | 0;
    // 0x80030590: addiu       $t3, $s0, 0x48
    ctx->r11 = ADD32(ctx->r16, 0X48);
    // 0x80030594: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x80030598: cvt.s.d     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f0.fl = CVT_S_D(ctx->f4.d);
    // 0x8003059C: bc1f        L_800305C8
    if (!c1cs) {
        // 0x800305A0: cvt.s.d     $f2, $f10
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f2.fl = CVT_S_D(ctx->f10.d);
            goto L_800305C8;
    }
    // 0x800305A0: cvt.s.d     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f2.fl = CVT_S_D(ctx->f10.d);
L_800305A4:
    // 0x800305A4: lw          $at, 0x0($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X0);
    // 0x800305A8: addiu       $t4, $t4, 0xC
    ctx->r12 = ADD32(ctx->r12, 0XC);
    // 0x800305AC: addiu       $t5, $t5, 0xC
    ctx->r13 = ADD32(ctx->r13, 0XC);
    // 0x800305B0: sw          $at, -0xC($t5)
    MEM_W(-0XC, ctx->r13) = ctx->r1;
    // 0x800305B4: lw          $at, -0x8($t4)
    ctx->r1 = MEM_W(ctx->r12, -0X8);
    // 0x800305B8: sw          $at, -0x8($t5)
    MEM_W(-0X8, ctx->r13) = ctx->r1;
    // 0x800305BC: lw          $at, -0x4($t4)
    ctx->r1 = MEM_W(ctx->r12, -0X4);
    // 0x800305C0: bne         $t4, $t3, L_800305A4
    if (ctx->r12 != ctx->r11) {
        // 0x800305C4: sw          $at, -0x4($t5)
        MEM_W(-0X4, ctx->r13) = ctx->r1;
            goto L_800305A4;
    }
    // 0x800305C4: sw          $at, -0x4($t5)
    MEM_W(-0X4, ctx->r13) = ctx->r1;
L_800305C8:
    // 0x800305C8: lwc1        $f12, 0x108($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X108);
    // 0x800305CC: sub.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x800305D0: c.lt.s      $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl < ctx->f12.fl;
    // 0x800305D4: swc1        $f12, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f12.u32l;
    // 0x800305D8: bc1fl       L_800305E8
    if (!c1cs) {
        // 0x800305DC: lwc1        $f12, 0x110($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
            goto L_800305E8;
    }
    goto skip_37;
    // 0x800305DC: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
    skip_37:
    // 0x800305E0: swc1        $f20, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f20.u32l;
    // 0x800305E4: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
L_800305E8:
    // 0x800305E8: add.s       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f2.fl;
    // 0x800305EC: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
    // 0x800305F0: swc1        $f12, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f12.u32l;
    // 0x800305F4: bc1f        L_80030600
    if (!c1cs) {
        // 0x800305F8: nop
    
            goto L_80030600;
    }
    // 0x800305F8: nop

    // 0x800305FC: swc1        $f20, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f20.u32l;
L_80030600:
    // 0x80030600: jal         0x80030688
    // 0x80030604: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80030688_31288(rdram, ctx);
        goto after_47;
    // 0x80030604: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_47:
L_80030608:
    // 0x80030608: lh          $t6, 0xE0($sp)
    ctx->r14 = MEM_H(ctx->r29, 0XE0);
L_8003060C:
    // 0x8003060C: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x80030610: bnel        $t6, $at, L_80030640
    if (ctx->r14 != ctx->r1) {
        // 0x80030614: lw          $v1, 0x138($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X138);
            goto L_80030640;
    }
    goto skip_38;
    // 0x80030614: lw          $v1, 0x138($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X138);
    skip_38:
    // 0x80030618: lwc1        $f18, 0x60($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8003061C: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80030620: lwc1        $f16, 0x58($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80030624: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80030628: add.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8003062C: swc1        $f20, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f20.u32l;
    // 0x80030630: add.s       $f6, $f16, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x80030634: swc1        $f8, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f8.u32l;
    // 0x80030638: swc1        $f6, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f6.u32l;
    // 0x8003063C: lw          $v1, 0x138($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X138);
L_80030640:
    // 0x80030640: addiu       $t7, $sp, 0xA8
    ctx->r15 = ADD32(ctx->r29, 0XA8);
    // 0x80030644: addiu       $t0, $t7, 0x48
    ctx->r8 = ADD32(ctx->r15, 0X48);
    // 0x80030648: or          $t1, $v1, $zero
    ctx->r9 = ctx->r3 | 0;
L_8003064C:
    // 0x8003064C: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x80030650: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x80030654: addiu       $t1, $t1, 0xC
    ctx->r9 = ADD32(ctx->r9, 0XC);
    // 0x80030658: sw          $at, -0xC($t1)
    MEM_W(-0XC, ctx->r9) = ctx->r1;
    // 0x8003065C: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x80030660: sw          $at, -0x8($t1)
    MEM_W(-0X8, ctx->r9) = ctx->r1;
    // 0x80030664: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x80030668: bne         $t7, $t0, L_8003064C
    if (ctx->r15 != ctx->r8) {
        // 0x8003066C: sw          $at, -0x4($t1)
        MEM_W(-0X4, ctx->r9) = ctx->r1;
            goto L_8003064C;
    }
    // 0x8003066C: sw          $at, -0x4($t1)
    MEM_W(-0X4, ctx->r9) = ctx->r1;
    // 0x80030670: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80030674: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x80030678: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8003067C: addiu       $sp, $sp, 0x138
    ctx->r29 = ADD32(ctx->r29, 0X138);
    // 0x80030680: jr          $ra
    // 0x80030684: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    TRACE_RETURN()
    return;
    // 0x80030684: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_800116AC_122AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800116AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800116B0: bne         $a0, $zero, L_800116C0
    if (ctx->r4 != 0) {
        // 0x800116B4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800116C0;
    }
    // 0x800116B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800116B8: b           L_800116CC
    // 0x800116BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800116CC;
    // 0x800116BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800116C0:
    // 0x800116C0: jal         0x80011634
    // 0x800116C4: lhu         $a1, 0x20($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0X20);
    func_80011634_12234(rdram, ctx);
        goto after_0;
    // 0x800116C4: lhu         $a1, 0x20($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0X20);
    after_0:
    // 0x800116C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800116CC:
    // 0x800116CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800116D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800116D4: jr          $ra
    // 0x800116D8: nop

    TRACE_RETURN()
    return;
    // 0x800116D8: nop

;}
RECOMP_FUNC void func_8002AAD8_2B6D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002AAD8: addiu       $sp, $sp, -0x1A8
    ctx->r29 = ADD32(ctx->r29, -0X1A8);
    // 0x8002AADC: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x8002AAE0: lui         $v1, 0x8017
    ctx->r3 = S32(0X8017 << 16);
    // 0x8002AAE4: lw          $v1, -0x70A0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X70A0);
    // 0x8002AAE8: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x8002AAEC: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x8002AAF0: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x8002AAF4: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x8002AAF8: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x8002AAFC: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x8002AB00: sdc1        $f30, 0x30($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X30, ctx->r29);
    // 0x8002AB04: sdc1        $f28, 0x28($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X28, ctx->r29);
    // 0x8002AB08: sdc1        $f26, 0x20($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X20, ctx->r29);
    // 0x8002AB0C: sdc1        $f24, 0x18($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X18, ctx->r29);
    // 0x8002AB10: sdc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X10, ctx->r29);
    // 0x8002AB14: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x8002AB18: sw          $a0, 0x1A8($sp)
    MEM_W(0X1A8, ctx->r29) = ctx->r4;
    // 0x8002AB1C: sw          $a1, 0x1AC($sp)
    MEM_W(0X1AC, ctx->r29) = ctx->r5;
    // 0x8002AB20: sw          $a2, 0x1B0($sp)
    MEM_W(0X1B0, ctx->r29) = ctx->r6;
    // 0x8002AB24: sw          $a3, 0x1B4($sp)
    MEM_W(0X1B4, ctx->r29) = ctx->r7;
    // 0x8002AB28: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8002AB2C: sh          $zero, 0x114($sp)
    MEM_H(0X114, ctx->r29) = 0;
    // 0x8002AB30: swc1        $f14, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f14.u32l;
    // 0x8002AB34: swc1        $f14, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f14.u32l;
    // 0x8002AB38: bne         $v1, $zero, L_8002AB78
    if (ctx->r3 != 0) {
        // 0x8002AB3C: swc1        $f14, 0x108($sp)
        MEM_W(0X108, ctx->r29) = ctx->f14.u32l;
            goto L_8002AB78;
    }
    // 0x8002AB3C: swc1        $f14, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f14.u32l;
    // 0x8002AB40: addiu       $t7, $sp, 0xDC
    ctx->r15 = ADD32(ctx->r29, 0XDC);
    // 0x8002AB44: addiu       $t9, $t7, 0x48
    ctx->r25 = ADD32(ctx->r15, 0X48);
    // 0x8002AB48: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
L_8002AB4C:
    // 0x8002AB4C: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x8002AB50: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x8002AB54: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x8002AB58: sw          $at, -0xC($t6)
    MEM_W(-0XC, ctx->r14) = ctx->r1;
    // 0x8002AB5C: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x8002AB60: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x8002AB64: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x8002AB68: bne         $t7, $t9, L_8002AB4C
    if (ctx->r15 != ctx->r25) {
        // 0x8002AB6C: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_8002AB4C;
    }
    // 0x8002AB6C: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x8002AB70: b           L_8002B378
    // 0x8002AB74: lw          $v0, 0x1A8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1A8);
        goto L_8002B378;
    // 0x8002AB74: lw          $v0, 0x1A8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1A8);
L_8002AB78:
    // 0x8002AB78: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002AB7C: lwc1        $f4, -0x3CE4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3CE4);
    // 0x8002AB80: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002AB84: lwc1        $f6, -0x3CE0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X3CE0);
    // 0x8002AB88: lui         $a3, 0x8017
    ctx->r7 = S32(0X8017 << 16);
    // 0x8002AB8C: mtc1        $zero, $f19
    ctx->f_odd[(19 - 1) * 2] = 0;
    // 0x8002AB90: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8002AB94: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8002AB98: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8002AB9C: or          $s1, $v1, $zero
    ctx->r17 = ctx->r3 | 0;
    // 0x8002ABA0: lw          $a3, -0x709C($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X709C);
    // 0x8002ABA4: lwc1        $f20, 0x1AC($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1AC);
    // 0x8002ABA8: lwc1        $f0, 0x1B0($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1B0);
    // 0x8002ABAC: lwc1        $f16, 0x1B4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1B4);
    // 0x8002ABB0: addiu       $s0, $zero, 0x14
    ctx->r16 = ADD32(0, 0X14);
    // 0x8002ABB4: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x8002ABB8: ori         $t4, $zero, 0xFFFF
    ctx->r12 = 0 | 0XFFFF;
    // 0x8002ABBC: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x8002ABC0: swc1        $f4, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f4.u32l;
    // 0x8002ABC4: swc1        $f6, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->f6.u32l;
L_8002ABC8:
    // 0x8002ABC8: multu       $v0, $t0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002ABCC: lwc1        $f4, 0x1AC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1AC);
    // 0x8002ABD0: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8002ABD4: mflo        $t8
    ctx->r24 = lo;
    // 0x8002ABD8: addu        $v1, $a3, $t8
    ctx->r3 = ADD32(ctx->r7, ctx->r24);
    // 0x8002ABDC: lhu         $a1, 0x0($v1)
    ctx->r5 = MEM_HU(ctx->r3, 0X0);
    // 0x8002ABE0: multu       $v0, $t5
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002ABE4: mflo        $t9
    ctx->r25 = lo;
    // 0x8002ABE8: addu        $a0, $a3, $t9
    ctx->r4 = ADD32(ctx->r7, ctx->r25);
    // 0x8002ABEC: lh          $t7, 0x6($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X6);
    // 0x8002ABF0: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x8002ABF4: nop

    // 0x8002ABF8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8002ABFC: c.lt.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl < ctx->f4.fl;
    // 0x8002AC00: nop

    // 0x8002AC04: bc1tl       L_8002AD30
    if (c1cs) {
        // 0x8002AC08: lwc1        $f2, 0x1C4($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0X1C4);
            goto L_8002AD30;
    }
    goto skip_0;
    // 0x8002AC08: lwc1        $f2, 0x1C4($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1C4);
    skip_0:
    // 0x8002AC0C: lh          $t6, 0xC($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XC);
    // 0x8002AC10: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x8002AC14: nop

    // 0x8002AC18: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8002AC1C: c.lt.s      $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f20.fl < ctx->f8.fl;
    // 0x8002AC20: nop

    // 0x8002AC24: bc1tl       L_8002AD30
    if (c1cs) {
        // 0x8002AC28: lwc1        $f2, 0x1C4($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0X1C4);
            goto L_8002AD30;
    }
    goto skip_1;
    // 0x8002AC28: lwc1        $f2, 0x1C4($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1C4);
    skip_1:
    // 0x8002AC2C: lh          $t8, 0xA($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XA);
    // 0x8002AC30: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x8002AC34: nop

    // 0x8002AC38: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8002AC3C: c.lt.s      $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.fl < ctx->f16.fl;
    // 0x8002AC40: nop

    // 0x8002AC44: bc1tl       L_8002AD30
    if (c1cs) {
        // 0x8002AC48: lwc1        $f2, 0x1C4($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0X1C4);
            goto L_8002AD30;
    }
    goto skip_2;
    // 0x8002AC48: lwc1        $f2, 0x1C4($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1C4);
    skip_2:
    // 0x8002AC4C: lh          $t9, 0x10($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X10);
    // 0x8002AC50: lwc1        $f12, 0x1BC($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1BC);
    // 0x8002AC54: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x8002AC58: nop

    // 0x8002AC5C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8002AC60: c.lt.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl < ctx->f8.fl;
    // 0x8002AC64: nop

    // 0x8002AC68: bc1tl       L_8002AD30
    if (c1cs) {
        // 0x8002AC6C: lwc1        $f2, 0x1C4($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0X1C4);
            goto L_8002AD30;
    }
    goto skip_3;
    // 0x8002AC6C: lwc1        $f2, 0x1C4($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1C4);
    skip_3:
    // 0x8002AC70: c.lt.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
    // 0x8002AC74: nop

    // 0x8002AC78: bc1fl       L_8002ACA4
    if (!c1cs) {
        // 0x8002AC7C: c.lt.s      $f12, $f14
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
            goto L_8002ACA4;
    }
    goto skip_4;
    // 0x8002AC7C: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    skip_4:
    // 0x8002AC80: lh          $t7, 0x8($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X8);
    // 0x8002AC84: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x8002AC88: nop

    // 0x8002AC8C: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8002AC90: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x8002AC94: nop

    // 0x8002AC98: bc1tl       L_8002AD30
    if (c1cs) {
        // 0x8002AC9C: lwc1        $f2, 0x1C4($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0X1C4);
            goto L_8002AD30;
    }
    goto skip_5;
    // 0x8002AC9C: lwc1        $f2, 0x1C4($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1C4);
    skip_5:
    // 0x8002ACA0: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
L_8002ACA4:
    // 0x8002ACA4: nop

    // 0x8002ACA8: bc1fl       L_8002ACD4
    if (!c1cs) {
        // 0x8002ACAC: lh          $t8, 0xE($a0)
        ctx->r24 = MEM_H(ctx->r4, 0XE);
            goto L_8002ACD4;
    }
    goto skip_6;
    // 0x8002ACAC: lh          $t8, 0xE($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XE);
    skip_6:
    // 0x8002ACB0: lh          $t6, 0xE($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XE);
    // 0x8002ACB4: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x8002ACB8: nop

    // 0x8002ACBC: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8002ACC0: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x8002ACC4: nop

    // 0x8002ACC8: bc1tl       L_8002AD30
    if (c1cs) {
        // 0x8002ACCC: lwc1        $f2, 0x1C4($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0X1C4);
            goto L_8002AD30;
    }
    goto skip_7;
    // 0x8002ACCC: lwc1        $f2, 0x1C4($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1C4);
    skip_7:
    // 0x8002ACD0: lh          $t8, 0xE($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XE);
L_8002ACD4:
    // 0x8002ACD4: lwc1        $f2, 0x1C4($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1C4);
    // 0x8002ACD8: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x8002ACDC: nop

    // 0x8002ACE0: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8002ACE4: sub.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f2.fl;
    // 0x8002ACE8: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x8002ACEC: nop

    // 0x8002ACF0: bc1tl       L_8002AD30
    if (c1cs) {
        // 0x8002ACF4: lwc1        $f2, 0x1C4($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0X1C4);
            goto L_8002AD30;
    }
    goto skip_8;
    // 0x8002ACF4: lwc1        $f2, 0x1C4($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1C4);
    skip_8:
    // 0x8002ACF8: swc1        $f0, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->f0.u32l;
    // 0x8002ACFC: swc1        $f16, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->f16.u32l;
    // 0x8002AD00: swc1        $f20, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->f20.u32l;
    // 0x8002AD04: lh          $t9, 0x8($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X8);
    // 0x8002AD08: lwc1        $f6, 0x1B0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1B0);
    // 0x8002AD0C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8002AD10: nop

    // 0x8002AD14: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8002AD18: add.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x8002AD1C: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8002AD20: nop

    // 0x8002AD24: bc1fl       L_8002AEDC
    if (!c1cs) {
        // 0x8002AD28: lui         $at, 0x44FA
        ctx->r1 = S32(0X44FA << 16);
            goto L_8002AEDC;
    }
    goto skip_9;
    // 0x8002AD28: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    skip_9:
    // 0x8002AD2C: lwc1        $f2, 0x1C4($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1C4);
L_8002AD30:
    // 0x8002AD30: bne         $t4, $a1, L_8002AD70
    if (ctx->r12 != ctx->r5) {
        // 0x8002AD34: lwc1        $f12, 0x1BC($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X1BC);
            goto L_8002AD70;
    }
    // 0x8002AD34: lwc1        $f12, 0x1BC($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1BC);
    // 0x8002AD38: addiu       $t6, $sp, 0xDC
    ctx->r14 = ADD32(ctx->r29, 0XDC);
    // 0x8002AD3C: addiu       $t9, $t6, 0x48
    ctx->r25 = ADD32(ctx->r14, 0X48);
    // 0x8002AD40: lw          $t7, 0x1A8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1A8);
L_8002AD44:
    // 0x8002AD44: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x8002AD48: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x8002AD4C: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x8002AD50: sw          $at, -0xC($t7)
    MEM_W(-0XC, ctx->r15) = ctx->r1;
    // 0x8002AD54: lw          $at, -0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X8);
    // 0x8002AD58: sw          $at, -0x8($t7)
    MEM_W(-0X8, ctx->r15) = ctx->r1;
    // 0x8002AD5C: lw          $at, -0x4($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X4);
    // 0x8002AD60: bne         $t6, $t9, L_8002AD44
    if (ctx->r14 != ctx->r25) {
        // 0x8002AD64: sw          $at, -0x4($t7)
        MEM_W(-0X4, ctx->r15) = ctx->r1;
            goto L_8002AD44;
    }
    // 0x8002AD64: sw          $at, -0x4($t7)
    MEM_W(-0X4, ctx->r15) = ctx->r1;
    // 0x8002AD68: b           L_8002B378
    // 0x8002AD6C: lw          $v0, 0x1A8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1A8);
        goto L_8002B378;
    // 0x8002AD6C: lw          $v0, 0x1A8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1A8);
L_8002AD70:
    // 0x8002AD70: multu       $a1, $t0
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002AD74: andi        $v0, $a1, 0xFFFF
    ctx->r2 = ctx->r5 & 0XFFFF;
    // 0x8002AD78: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8002AD7C: mflo        $t8
    ctx->r24 = lo;
    // 0x8002AD80: addu        $t9, $a3, $t8
    ctx->r25 = ADD32(ctx->r7, ctx->r24);
    // 0x8002AD84: lhu         $a1, 0x0($t9)
    ctx->r5 = MEM_HU(ctx->r25, 0X0);
    // 0x8002AD88: multu       $v0, $t5
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002AD8C: mflo        $t6
    ctx->r14 = lo;
    // 0x8002AD90: addu        $a0, $a3, $t6
    ctx->r4 = ADD32(ctx->r7, ctx->r14);
    // 0x8002AD94: lh          $t7, 0x6($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X6);
    // 0x8002AD98: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x8002AD9C: nop

    // 0x8002ADA0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8002ADA4: c.lt.s      $f10, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f10.fl < ctx->f20.fl;
    // 0x8002ADA8: nop

    // 0x8002ADAC: bc1tl       L_8002AD30
    if (c1cs) {
        // 0x8002ADB0: lwc1        $f2, 0x1C4($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0X1C4);
            goto L_8002AD30;
    }
    goto skip_10;
    // 0x8002ADB0: lwc1        $f2, 0x1C4($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1C4);
    skip_10:
    // 0x8002ADB4: lh          $t8, 0xC($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XC);
    // 0x8002ADB8: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x8002ADBC: nop

    // 0x8002ADC0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8002ADC4: c.lt.s      $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f20.fl < ctx->f6.fl;
    // 0x8002ADC8: nop

    // 0x8002ADCC: bc1tl       L_8002AD30
    if (c1cs) {
        // 0x8002ADD0: lwc1        $f2, 0x1C4($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0X1C4);
            goto L_8002AD30;
    }
    goto skip_11;
    // 0x8002ADD0: lwc1        $f2, 0x1C4($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1C4);
    skip_11:
    // 0x8002ADD4: lh          $t9, 0xA($a0)
    ctx->r25 = MEM_H(ctx->r4, 0XA);
    // 0x8002ADD8: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8002ADDC: nop

    // 0x8002ADE0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8002ADE4: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x8002ADE8: nop

    // 0x8002ADEC: bc1tl       L_8002AD30
    if (c1cs) {
        // 0x8002ADF0: lwc1        $f2, 0x1C4($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0X1C4);
            goto L_8002AD30;
    }
    goto skip_12;
    // 0x8002ADF0: lwc1        $f2, 0x1C4($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1C4);
    skip_12:
    // 0x8002ADF4: lh          $t6, 0x10($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X10);
    // 0x8002ADF8: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8002ADFC: nop

    // 0x8002AE00: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8002AE04: c.lt.s      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.fl < ctx->f6.fl;
    // 0x8002AE08: nop

    // 0x8002AE0C: bc1tl       L_8002AD30
    if (c1cs) {
        // 0x8002AE10: lwc1        $f2, 0x1C4($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0X1C4);
            goto L_8002AD30;
    }
    goto skip_13;
    // 0x8002AE10: lwc1        $f2, 0x1C4($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1C4);
    skip_13:
    // 0x8002AE14: c.lt.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
    // 0x8002AE18: nop

    // 0x8002AE1C: bc1fl       L_8002AE48
    if (!c1cs) {
        // 0x8002AE20: c.lt.s      $f12, $f14
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
            goto L_8002AE48;
    }
    goto skip_14;
    // 0x8002AE20: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    skip_14:
    // 0x8002AE24: lh          $t7, 0x8($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X8);
    // 0x8002AE28: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x8002AE2C: nop

    // 0x8002AE30: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8002AE34: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x8002AE38: nop

    // 0x8002AE3C: bc1tl       L_8002AD30
    if (c1cs) {
        // 0x8002AE40: lwc1        $f2, 0x1C4($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0X1C4);
            goto L_8002AD30;
    }
    goto skip_15;
    // 0x8002AE40: lwc1        $f2, 0x1C4($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1C4);
    skip_15:
    // 0x8002AE44: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
L_8002AE48:
    // 0x8002AE48: nop

    // 0x8002AE4C: bc1fl       L_8002AE78
    if (!c1cs) {
        // 0x8002AE50: lh          $t9, 0xE($a0)
        ctx->r25 = MEM_H(ctx->r4, 0XE);
            goto L_8002AE78;
    }
    goto skip_16;
    // 0x8002AE50: lh          $t9, 0xE($a0)
    ctx->r25 = MEM_H(ctx->r4, 0XE);
    skip_16:
    // 0x8002AE54: lh          $t8, 0xE($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XE);
    // 0x8002AE58: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x8002AE5C: nop

    // 0x8002AE60: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8002AE64: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x8002AE68: nop

    // 0x8002AE6C: bc1tl       L_8002AD30
    if (c1cs) {
        // 0x8002AE70: lwc1        $f2, 0x1C4($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0X1C4);
            goto L_8002AD30;
    }
    goto skip_17;
    // 0x8002AE70: lwc1        $f2, 0x1C4($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1C4);
    skip_17:
    // 0x8002AE74: lh          $t9, 0xE($a0)
    ctx->r25 = MEM_H(ctx->r4, 0XE);
L_8002AE78:
    // 0x8002AE78: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8002AE7C: nop

    // 0x8002AE80: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8002AE84: sub.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f2.fl;
    // 0x8002AE88: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x8002AE8C: nop

    // 0x8002AE90: bc1tl       L_8002AD30
    if (c1cs) {
        // 0x8002AE94: lwc1        $f2, 0x1C4($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0X1C4);
            goto L_8002AD30;
    }
    goto skip_18;
    // 0x8002AE94: lwc1        $f2, 0x1C4($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1C4);
    skip_18:
    // 0x8002AE98: lh          $t6, 0x8($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X8);
    // 0x8002AE9C: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x8002AEA0: nop

    // 0x8002AEA4: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8002AEA8: add.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f2.fl;
    // 0x8002AEAC: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x8002AEB0: nop

    // 0x8002AEB4: bc1tl       L_8002AD30
    if (c1cs) {
        // 0x8002AEB8: lwc1        $f2, 0x1C4($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0X1C4);
            goto L_8002AD30;
    }
    goto skip_19;
    // 0x8002AEB8: lwc1        $f2, 0x1C4($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1C4);
    skip_19:
    // 0x8002AEBC: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x8002AEC0: subu        $t7, $t7, $v0
    ctx->r15 = SUB32(ctx->r15, ctx->r2);
    // 0x8002AEC4: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x8002AEC8: addu        $v1, $a3, $t7
    ctx->r3 = ADD32(ctx->r7, ctx->r15);
    // 0x8002AECC: swc1        $f0, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->f0.u32l;
    // 0x8002AED0: swc1        $f16, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->f16.u32l;
    // 0x8002AED4: swc1        $f20, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->f20.u32l;
    // 0x8002AED8: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
L_8002AEDC:
    // 0x8002AEDC: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x8002AEE0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8002AEE4: lh          $t8, 0x2($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X2);
    // 0x8002AEE8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8002AEEC: addiu       $v0, $s2, 0x3
    ctx->r2 = ADD32(ctx->r18, 0X3);
    // 0x8002AEF0: andi        $t9, $v0, 0xFFFF
    ctx->r25 = ctx->r2 & 0XFFFF;
    // 0x8002AEF4: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x8002AEF8: andi        $t2, $t9, 0xFFFF
    ctx->r10 = ctx->r25 & 0XFFFF;
    // 0x8002AEFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8002AF00: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    // 0x8002AF04: sh          $t8, 0x12E($sp)
    MEM_H(0X12E, ctx->r29) = ctx->r24;
    // 0x8002AF08: swc1        $f4, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->f4.u32l;
L_8002AF0C:
    // 0x8002AF0C: multu       $v0, $t0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002AF10: lwc1        $f6, 0x1AC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1AC);
    // 0x8002AF14: lwc1        $f8, 0x1B4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1B4);
    // 0x8002AF18: lwc1        $f10, 0x144($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X144);
    // 0x8002AF1C: mflo        $t6
    ctx->r14 = lo;
    // 0x8002AF20: addu        $v1, $a3, $t6
    ctx->r3 = ADD32(ctx->r7, ctx->r14);
    // 0x8002AF24: lhu         $s2, 0x0($v1)
    ctx->r18 = MEM_HU(ctx->r3, 0X0);
    // 0x8002AF28: multu       $s2, $s0
    result = U64(U32(ctx->r18)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002AF2C: mflo        $t7
    ctx->r15 = lo;
    // 0x8002AF30: addu        $s3, $s1, $t7
    ctx->r19 = ADD32(ctx->r17, ctx->r15);
    // 0x8002AF34: lwc1        $f26, 0x0($s3)
    ctx->f26.u32l = MEM_W(ctx->r19, 0X0);
    // 0x8002AF38: lwc1        $f28, 0x8($s3)
    ctx->f28.u32l = MEM_W(ctx->r19, 0X8);
    // 0x8002AF3C: lwc1        $f14, 0x4($s3)
    ctx->f14.u32l = MEM_W(ctx->r19, 0X4);
    // 0x8002AF40: mul.s       $f20, $f6, $f26
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f20.fl = MUL_S(ctx->f6.fl, ctx->f26.fl);
    // 0x8002AF44: lwc1        $f16, 0xC($s3)
    ctx->f16.u32l = MEM_W(ctx->r19, 0XC);
    // 0x8002AF48: lbu         $s4, 0x10($s3)
    ctx->r20 = MEM_BU(ctx->r19, 0X10);
    // 0x8002AF4C: mul.s       $f22, $f8, $f28
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f22.fl = MUL_S(ctx->f8.fl, ctx->f28.fl);
    // 0x8002AF50: or          $s5, $s4, $zero
    ctx->r21 = ctx->r20 | 0;
    // 0x8002AF54: mul.s       $f4, $f10, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x8002AF58: lwc1        $f10, 0x1BC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1BC);
    // 0x8002AF5C: add.s       $f6, $f20, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f20.fl + ctx->f4.fl;
    // 0x8002AF60: add.s       $f12, $f6, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f22.fl;
    // 0x8002AF64: add.s       $f0, $f12, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f16.fl;
    // 0x8002AF68: beq         $s4, $zero, L_8002AF84
    if (ctx->r20 == 0) {
        // 0x8002AF6C: mov.s       $f24, $f0
        CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
            goto L_8002AF84;
    }
    // 0x8002AF6C: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    // 0x8002AF70: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x8002AF74: c.lt.d      $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f18.d < ctx->f8.d;
    // 0x8002AF78: nop

    // 0x8002AF7C: bc1fl       L_8002B0D4
    if (!c1cs) {
        // 0x8002AF80: cvt.d.s     $f10, $f24
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f10.d = CVT_D_S(ctx->f24.fl);
            goto L_8002B0D4;
    }
    goto skip_20;
    // 0x8002AF80: cvt.d.s     $f10, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f10.d = CVT_D_S(ctx->f24.fl);
    skip_20:
L_8002AF84:
    // 0x8002AF84: mul.s       $f0, $f14, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = MUL_S(ctx->f14.fl, ctx->f10.fl);
    // 0x8002AF88: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x8002AF8C: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x8002AF90: c.eq.d      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.d == ctx->f4.d;
    // 0x8002AF94: nop

    // 0x8002AF98: bc1fl       L_8002AFB0
    if (!c1cs) {
        // 0x8002AF9C: neg.s       $f6, $f16
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = -ctx->f16.fl;
            goto L_8002AFB0;
    }
    goto skip_21;
    // 0x8002AF9C: neg.s       $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = -ctx->f16.fl;
    skip_21:
    // 0x8002AFA0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8002AFA4: b           L_8002AFB8
    // 0x8002AFA8: nop

        goto L_8002AFB8;
    // 0x8002AFA8: nop

    // 0x8002AFAC: neg.s       $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = -ctx->f16.fl;
L_8002AFB0:
    // 0x8002AFB0: sub.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f12.fl;
    // 0x8002AFB4: div.s       $f2, $f8, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
L_8002AFB8:
    // 0x8002AFB8: bne         $s5, $zero, L_8002B090
    if (ctx->r21 != 0) {
        // 0x8002AFBC: lui         $at, 0x8008
        ctx->r1 = S32(0X8008 << 16);
            goto L_8002B090;
    }
    // 0x8002AFBC: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002AFC0: ldc1        $f10, -0x3CD8($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X3CD8);
    // 0x8002AFC4: cvt.d.s     $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.d = CVT_D_S(ctx->f2.fl);
    // 0x8002AFC8: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002AFCC: c.lt.d      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.d < ctx->f10.d;
    // 0x8002AFD0: nop

    // 0x8002AFD4: bc1f        L_8002B010
    if (!c1cs) {
        // 0x8002AFD8: nop
    
            goto L_8002B010;
    }
    // 0x8002AFD8: nop

    // 0x8002AFDC: ldc1        $f4, -0x3CD0($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X3CD0);
    // 0x8002AFE0: lwc1        $f6, 0x144($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X144);
    // 0x8002AFE4: lwc1        $f8, 0x1BC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1BC);
    // 0x8002AFE8: c.lt.d      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.d < ctx->f0.d;
    // 0x8002AFEC: nop

    // 0x8002AFF0: bc1f        L_8002B010
    if (!c1cs) {
        // 0x8002AFF4: nop
    
            goto L_8002B010;
    }
    // 0x8002AFF4: nop

    // 0x8002AFF8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8002AFFC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8002B000: mul.s       $f4, $f10, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x8002B004: add.s       $f6, $f20, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f20.fl + ctx->f4.fl;
    // 0x8002B008: add.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f22.fl;
    // 0x8002B00C: add.s       $f24, $f8, $f16
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f24.fl = ctx->f8.fl + ctx->f16.fl;
L_8002B010:
    // 0x8002B010: beql        $a2, $zero, L_8002B094
    if (ctx->r6 == 0) {
        // 0x8002B014: cvt.d.s     $f8, $f2
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
            goto L_8002B094;
    }
    goto skip_22;
    // 0x8002B014: cvt.d.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
    skip_22:
    // 0x8002B018: cvt.d.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
    // 0x8002B01C: lwc1        $f4, 0x14C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x8002B020: c.eq.d      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.d == ctx->f10.d;
    // 0x8002B024: nop

    // 0x8002B028: bc1fl       L_8002B094
    if (!c1cs) {
        // 0x8002B02C: cvt.d.s     $f8, $f2
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
            goto L_8002B094;
    }
    goto skip_23;
    // 0x8002B02C: cvt.d.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
    skip_23:
    // 0x8002B030: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8002B034: lwc1        $f8, 0x15C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X15C);
    // 0x8002B038: c.le.d      $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f6.d <= ctx->f18.d;
    // 0x8002B03C: nop

    // 0x8002B040: bc1fl       L_8002B094
    if (!c1cs) {
        // 0x8002B044: cvt.d.s     $f8, $f2
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
            goto L_8002B094;
    }
    goto skip_24;
    // 0x8002B044: cvt.d.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
    skip_24:
    // 0x8002B048: c.eq.s      $f8, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f8.fl == ctx->f26.fl;
    // 0x8002B04C: lwc1        $f10, 0x158($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X158);
    // 0x8002B050: bc1fl       L_8002B094
    if (!c1cs) {
        // 0x8002B054: cvt.d.s     $f8, $f2
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
            goto L_8002B094;
    }
    goto skip_25;
    // 0x8002B054: cvt.d.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
    skip_25:
    // 0x8002B058: c.eq.s      $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f10.fl == ctx->f14.fl;
    // 0x8002B05C: lwc1        $f4, 0x154($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X154);
    // 0x8002B060: bc1fl       L_8002B094
    if (!c1cs) {
        // 0x8002B064: cvt.d.s     $f8, $f2
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
            goto L_8002B094;
    }
    goto skip_26;
    // 0x8002B064: cvt.d.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
    skip_26:
    // 0x8002B068: c.eq.s      $f4, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f4.fl == ctx->f28.fl;
    // 0x8002B06C: lwc1        $f6, 0x150($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X150);
    // 0x8002B070: bc1fl       L_8002B094
    if (!c1cs) {
        // 0x8002B074: cvt.d.s     $f8, $f2
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
            goto L_8002B094;
    }
    goto skip_27;
    // 0x8002B074: cvt.d.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
    skip_27:
    // 0x8002B078: c.eq.s      $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f6.fl == ctx->f16.fl;
    // 0x8002B07C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8002B080: bc1fl       L_8002B094
    if (!c1cs) {
        // 0x8002B084: cvt.d.s     $f8, $f2
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
            goto L_8002B094;
    }
    goto skip_28;
    // 0x8002B084: cvt.d.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
    skip_28:
    // 0x8002B088: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x8002B08C: nop

L_8002B090:
    // 0x8002B090: cvt.d.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
L_8002B094:
    // 0x8002B094: c.lt.d      $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f18.d < ctx->f8.d;
    // 0x8002B098: nop

    // 0x8002B09C: bc1fl       L_8002B0D4
    if (!c1cs) {
        // 0x8002B0A0: cvt.d.s     $f10, $f24
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f10.d = CVT_D_S(ctx->f24.fl);
            goto L_8002B0D4;
    }
    goto skip_29;
    // 0x8002B0A0: cvt.d.s     $f10, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f10.d = CVT_D_S(ctx->f24.fl);
    skip_29:
    // 0x8002B0A4: c.le.s      $f2, $f30
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f2.fl <= ctx->f30.fl;
    // 0x8002B0A8: nop

    // 0x8002B0AC: bc1fl       L_8002B0D4
    if (!c1cs) {
        // 0x8002B0B0: cvt.d.s     $f10, $f24
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f10.d = CVT_D_S(ctx->f24.fl);
            goto L_8002B0D4;
    }
    goto skip_30;
    // 0x8002B0B0: cvt.d.s     $f10, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f10.d = CVT_D_S(ctx->f24.fl);
    skip_30:
    // 0x8002B0B4: mov.s       $f30, $f2
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 2);
    ctx->f30.fl = ctx->f2.fl;
    // 0x8002B0B8: swc1        $f26, 0x174($sp)
    MEM_W(0X174, ctx->r29) = ctx->f26.u32l;
    // 0x8002B0BC: swc1        $f14, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->f14.u32l;
    // 0x8002B0C0: swc1        $f28, 0x16C($sp)
    MEM_W(0X16C, ctx->r29) = ctx->f28.u32l;
    // 0x8002B0C4: swc1        $f16, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->f16.u32l;
    // 0x8002B0C8: swc1        $f24, 0x160($sp)
    MEM_W(0X160, ctx->r29) = ctx->f24.u32l;
    // 0x8002B0CC: andi        $t1, $s4, 0xFF
    ctx->r9 = ctx->r20 & 0XFF;
    // 0x8002B0D0: cvt.d.s     $f10, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f10.d = CVT_D_S(ctx->f24.fl);
L_8002B0D4:
    // 0x8002B0D4: c.lt.d      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.d < ctx->f10.d;
    // 0x8002B0D8: nop

    // 0x8002B0DC: bc1fl       L_8002B278
    if (!c1cs) {
        // 0x8002B0E0: lh          $s2, 0x2($v1)
        ctx->r18 = MEM_H(ctx->r3, 0X2);
            goto L_8002B278;
    }
    goto skip_31;
    // 0x8002B0E0: lh          $s2, 0x2($v1)
    ctx->r18 = MEM_H(ctx->r3, 0X2);
    skip_31:
    // 0x8002B0E4: lh          $s2, 0x4($v1)
    ctx->r18 = MEM_H(ctx->r3, 0X4);
    // 0x8002B0E8: lwc1        $f4, 0x1C4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C4);
    // 0x8002B0EC: lwc1        $f6, 0x1BC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1BC);
    // 0x8002B0F0: bne         $s2, $zero, L_8002B26C
    if (ctx->r18 != 0) {
        // 0x8002B0F4: lwc1        $f8, 0x174($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X174);
            goto L_8002B26C;
    }
    // 0x8002B0F4: lwc1        $f8, 0x174($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X174);
    // 0x8002B0F8: c.lt.s      $f30, $f4
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f30.fl < ctx->f4.fl;
    // 0x8002B0FC: addiu       $a2, $zero, 0x7FFF
    ctx->r6 = ADD32(0, 0X7FFF);
    // 0x8002B100: andi        $v0, $t2, 0xFFFF
    ctx->r2 = ctx->r10 & 0XFFFF;
    // 0x8002B104: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002B108: bc1f        L_8002B210
    if (!c1cs) {
        // 0x8002B10C: addiu       $a0, $a0, -0x1
        ctx->r4 = ADD32(ctx->r4, -0X1);
            goto L_8002B210;
    }
    // 0x8002B10C: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x8002B110: mul.s       $f0, $f6, $f30
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f30.fl);
    // 0x8002B114: lwc1        $f10, 0x170($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X170);
    // 0x8002B118: swc1        $f8, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->f8.u32l;
    // 0x8002B11C: lwc1        $f8, 0x160($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X160);
    // 0x8002B120: swc1        $f10, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->f10.u32l;
    // 0x8002B124: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8002B128: lwc1        $f6, 0x168($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X168);
    // 0x8002B12C: lwc1        $f4, 0x16C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X16C);
    // 0x8002B130: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x8002B134: andi        $t3, $t1, 0xFF
    ctx->r11 = ctx->r9 & 0XFF;
    // 0x8002B138: swc1        $f8, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->f8.u32l;
    // 0x8002B13C: swc1        $f6, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f6.u32l;
    // 0x8002B140: bc1f        L_8002B154
    if (!c1cs) {
        // 0x8002B144: swc1        $f4, 0x154($sp)
        MEM_W(0X154, ctx->r29) = ctx->f4.u32l;
            goto L_8002B154;
    }
    // 0x8002B144: swc1        $f4, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->f4.u32l;
    // 0x8002B148: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x8002B14C: b           L_8002B15C
    // 0x8002B150: neg.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
        goto L_8002B15C;
    // 0x8002B150: neg.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
L_8002B154:
    // 0x8002B154: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x8002B158: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_8002B15C:
    // 0x8002B15C: ldc1        $f6, -0x3CC8($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X3CC8);
    // 0x8002B160: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x8002B164: andi        $t8, $a0, 0xFFFF
    ctx->r24 = ctx->r4 & 0XFFFF;
    // 0x8002B168: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x8002B16C: lwc1        $f8, 0x1BC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1BC);
    // 0x8002B170: lwc1        $f6, 0x144($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X144);
    // 0x8002B174: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x8002B178: bc1fl       L_8002B1C0
    if (!c1cs) {
        // 0x8002B17C: add.s       $f8, $f2, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f6.fl;
            goto L_8002B1C0;
    }
    goto skip_32;
    // 0x8002B17C: add.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f6.fl;
    skip_32:
    // 0x8002B180: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8002B184: c.eq.d      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.d == ctx->f10.d;
    // 0x8002B188: nop

    // 0x8002B18C: bc1tl       L_8002B1C0
    if (c1cs) {
        // 0x8002B190: add.s       $f8, $f2, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f6.fl;
            goto L_8002B1C0;
    }
    goto skip_33;
    // 0x8002B190: add.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f6.fl;
    skip_33:
    // 0x8002B194: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x8002B198: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002B19C: c.le.d      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.d <= ctx->f4.d;
    // 0x8002B1A0: nop

    // 0x8002B1A4: bc1f        L_8002B1B8
    if (!c1cs) {
        // 0x8002B1A8: nop
    
            goto L_8002B1B8;
    }
    // 0x8002B1A8: nop

    // 0x8002B1AC: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002B1B0: b           L_8002B1BC
    // 0x8002B1B4: lwc1        $f2, -0x3CC0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X3CC0);
        goto L_8002B1BC;
    // 0x8002B1B4: lwc1        $f2, -0x3CC0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X3CC0);
L_8002B1B8:
    // 0x8002B1B8: lwc1        $f2, -0x3CBC($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X3CBC);
L_8002B1BC:
    // 0x8002B1BC: add.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f6.fl;
L_8002B1C0:
    // 0x8002B1C0: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x8002B1C4: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x8002B1C8: bne         $t8, $zero, L_8002AF0C
    if (ctx->r24 != 0) {
        // 0x8002B1CC: swc1        $f8, 0x144($sp)
        MEM_W(0X144, ctx->r29) = ctx->f8.u32l;
            goto L_8002AF0C;
    }
    // 0x8002B1CC: swc1        $f8, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->f8.u32l;
    // 0x8002B1D0: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x8002B1D4: sh          $t9, 0x114($sp)
    MEM_H(0X114, ctx->r29) = ctx->r25;
    // 0x8002B1D8: addiu       $t7, $sp, 0xDC
    ctx->r15 = ADD32(ctx->r29, 0XDC);
    // 0x8002B1DC: addiu       $t9, $t7, 0x48
    ctx->r25 = ADD32(ctx->r15, 0X48);
    // 0x8002B1E0: lw          $t6, 0x1A8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1A8);
L_8002B1E4:
    // 0x8002B1E4: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x8002B1E8: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x8002B1EC: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x8002B1F0: sw          $at, -0xC($t6)
    MEM_W(-0XC, ctx->r14) = ctx->r1;
    // 0x8002B1F4: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x8002B1F8: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x8002B1FC: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x8002B200: bne         $t7, $t9, L_8002B1E4
    if (ctx->r15 != ctx->r25) {
        // 0x8002B204: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_8002B1E4;
    }
    // 0x8002B204: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x8002B208: b           L_8002B378
    // 0x8002B20C: lw          $v0, 0x1A8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1A8);
        goto L_8002B378;
    // 0x8002B20C: lw          $v0, 0x1A8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1A8);
L_8002B210:
    // 0x8002B210: bne         $t4, $a1, L_8002B250
    if (ctx->r12 != ctx->r5) {
        // 0x8002B214: lwc1        $f10, 0x1B0($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X1B0);
            goto L_8002B250;
    }
    // 0x8002B214: lwc1        $f10, 0x1B0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1B0);
    // 0x8002B218: addiu       $t9, $sp, 0xDC
    ctx->r25 = ADD32(ctx->r29, 0XDC);
    // 0x8002B21C: addiu       $t6, $t9, 0x48
    ctx->r14 = ADD32(ctx->r25, 0X48);
    // 0x8002B220: lw          $t8, 0x1A8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1A8);
L_8002B224:
    // 0x8002B224: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x8002B228: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x8002B22C: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x8002B230: sw          $at, -0xC($t8)
    MEM_W(-0XC, ctx->r24) = ctx->r1;
    // 0x8002B234: lw          $at, -0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X8);
    // 0x8002B238: sw          $at, -0x8($t8)
    MEM_W(-0X8, ctx->r24) = ctx->r1;
    // 0x8002B23C: lw          $at, -0x4($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X4);
    // 0x8002B240: bne         $t9, $t6, L_8002B224
    if (ctx->r25 != ctx->r14) {
        // 0x8002B244: sw          $at, -0x4($t8)
        MEM_W(-0X4, ctx->r24) = ctx->r1;
            goto L_8002B224;
    }
    // 0x8002B244: sw          $at, -0x4($t8)
    MEM_W(-0X4, ctx->r24) = ctx->r1;
    // 0x8002B248: b           L_8002B378
    // 0x8002B24C: lw          $v0, 0x1A8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1A8);
        goto L_8002B378;
    // 0x8002B24C: lw          $v0, 0x1A8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1A8);
L_8002B250:
    // 0x8002B250: andi        $v0, $a1, 0xFFFF
    ctx->r2 = ctx->r5 & 0XFFFF;
    // 0x8002B254: swc1        $f10, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->f10.u32l;
L_8002B258:
    // 0x8002B258: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x8002B25C: lwc1        $f20, 0x148($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X148);
    // 0x8002B260: lwc1        $f16, 0x140($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X140);
    // 0x8002B264: b           L_8002ABC8
    // 0x8002B268: lwc1        $f0, 0x144($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X144);
        goto L_8002ABC8;
    // 0x8002B268: lwc1        $f0, 0x144($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X144);
L_8002B26C:
    // 0x8002B26C: b           L_8002AF0C
    // 0x8002B270: andi        $v0, $s2, 0xFFFF
    ctx->r2 = ctx->r18 & 0XFFFF;
        goto L_8002AF0C;
    // 0x8002B270: andi        $v0, $s2, 0xFFFF
    ctx->r2 = ctx->r18 & 0XFFFF;
    // 0x8002B274: lh          $s2, 0x2($v1)
    ctx->r18 = MEM_H(ctx->r3, 0X2);
L_8002B278:
    // 0x8002B278: bne         $s2, $zero, L_8002B370
    if (ctx->r18 != 0) {
        // 0x8002B27C: addiu       $at, $zero, 0x7FFF
        ctx->r1 = ADD32(0, 0X7FFF);
            goto L_8002B370;
    }
    // 0x8002B27C: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x8002B280: bne         $a2, $at, L_8002B324
    if (ctx->r6 != ctx->r1) {
        // 0x8002B284: nop
    
            goto L_8002B324;
    }
    // 0x8002B284: nop

    // 0x8002B288: bne         $t3, $zero, L_8002B2B0
    if (ctx->r11 != 0) {
        // 0x8002B28C: lwc1        $f4, 0x174($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X174);
            goto L_8002B2B0;
    }
    // 0x8002B28C: lwc1        $f4, 0x174($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X174);
    // 0x8002B290: lwc1        $f6, 0x170($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X170);
    // 0x8002B294: lwc1        $f8, 0x16C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X16C);
    // 0x8002B298: lwc1        $f10, 0x168($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X168);
    // 0x8002B29C: swc1        $f4, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->f4.u32l;
    // 0x8002B2A0: andi        $t3, $t1, 0xFF
    ctx->r11 = ctx->r9 & 0XFF;
    // 0x8002B2A4: swc1        $f6, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->f6.u32l;
    // 0x8002B2A8: swc1        $f8, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->f8.u32l;
    // 0x8002B2AC: swc1        $f10, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f10.u32l;
L_8002B2B0:
    // 0x8002B2B0: lwc1        $f4, 0x144($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X144);
    // 0x8002B2B4: lwc1        $f6, 0x1B0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1B0);
    // 0x8002B2B8: lwc1        $f8, 0x90($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X90);
    // 0x8002B2BC: addiu       $t7, $zero, 0x7FFF
    ctx->r15 = ADD32(0, 0X7FFF);
    // 0x8002B2C0: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8002B2C4: mul.s       $f2, $f0, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8002B2C8: c.lt.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl < ctx->f8.fl;
    // 0x8002B2CC: nop

    // 0x8002B2D0: bc1f        L_8002B324
    if (!c1cs) {
        // 0x8002B2D4: nop
    
            goto L_8002B324;
    }
    // 0x8002B2D4: nop

    // 0x8002B2D8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8002B2DC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8002B2E0: lwc1        $f6, 0x15C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X15C);
    // 0x8002B2E4: swc1        $f10, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f10.u32l;
    // 0x8002B2E8: swc1        $f4, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f4.u32l;
    // 0x8002B2EC: lwc1        $f8, 0x158($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X158);
    // 0x8002B2F0: lwc1        $f10, 0x154($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X154);
    // 0x8002B2F4: lwc1        $f4, 0x150($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X150);
    // 0x8002B2F8: lhu         $t6, 0x12E($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X12E);
    // 0x8002B2FC: sh          $t7, 0x114($sp)
    MEM_H(0X114, ctx->r29) = ctx->r15;
    // 0x8002B300: swc1        $f2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f2.u32l;
    // 0x8002B304: swc1        $f2, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f2.u32l;
    // 0x8002B308: swc1        $f0, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f0.u32l;
    // 0x8002B30C: sb          $t3, 0x110($sp)
    MEM_B(0X110, ctx->r29) = ctx->r11;
    // 0x8002B310: swc1        $f6, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f6.u32l;
    // 0x8002B314: swc1        $f8, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f8.u32l;
    // 0x8002B318: swc1        $f10, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f10.u32l;
    // 0x8002B31C: swc1        $f4, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f4.u32l;
    // 0x8002B320: sh          $t6, 0x112($sp)
    MEM_H(0X112, ctx->r29) = ctx->r14;
L_8002B324:
    // 0x8002B324: bne         $t4, $a1, L_8002B364
    if (ctx->r12 != ctx->r5) {
        // 0x8002B328: lwc1        $f6, 0x1B0($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X1B0);
            goto L_8002B364;
    }
    // 0x8002B328: lwc1        $f6, 0x1B0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1B0);
    // 0x8002B32C: addiu       $t8, $sp, 0xDC
    ctx->r24 = ADD32(ctx->r29, 0XDC);
    // 0x8002B330: addiu       $t6, $t8, 0x48
    ctx->r14 = ADD32(ctx->r24, 0X48);
    // 0x8002B334: lw          $t9, 0x1A8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1A8);
L_8002B338:
    // 0x8002B338: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x8002B33C: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x8002B340: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x8002B344: sw          $at, -0xC($t9)
    MEM_W(-0XC, ctx->r25) = ctx->r1;
    // 0x8002B348: lw          $at, -0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X8);
    // 0x8002B34C: sw          $at, -0x8($t9)
    MEM_W(-0X8, ctx->r25) = ctx->r1;
    // 0x8002B350: lw          $at, -0x4($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X4);
    // 0x8002B354: bne         $t8, $t6, L_8002B338
    if (ctx->r24 != ctx->r14) {
        // 0x8002B358: sw          $at, -0x4($t9)
        MEM_W(-0X4, ctx->r25) = ctx->r1;
            goto L_8002B338;
    }
    // 0x8002B358: sw          $at, -0x4($t9)
    MEM_W(-0X4, ctx->r25) = ctx->r1;
    // 0x8002B35C: b           L_8002B378
    // 0x8002B360: lw          $v0, 0x1A8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1A8);
        goto L_8002B378;
    // 0x8002B360: lw          $v0, 0x1A8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1A8);
L_8002B364:
    // 0x8002B364: andi        $v0, $a1, 0xFFFF
    ctx->r2 = ctx->r5 & 0XFFFF;
    // 0x8002B368: b           L_8002B258
    // 0x8002B36C: swc1        $f6, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->f6.u32l;
        goto L_8002B258;
    // 0x8002B36C: swc1        $f6, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->f6.u32l;
L_8002B370:
    // 0x8002B370: b           L_8002AF0C
    // 0x8002B374: andi        $v0, $s2, 0xFFFF
    ctx->r2 = ctx->r18 & 0XFFFF;
        goto L_8002AF0C;
    // 0x8002B374: andi        $v0, $s2, 0xFFFF
    ctx->r2 = ctx->r18 & 0XFFFF;
L_8002B378:
    // 0x8002B378: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    // 0x8002B37C: ldc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X10);
    // 0x8002B380: ldc1        $f24, 0x18($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X18);
    // 0x8002B384: ldc1        $f26, 0x20($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X20);
    // 0x8002B388: ldc1        $f28, 0x28($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X28);
    // 0x8002B38C: ldc1        $f30, 0x30($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X30);
    // 0x8002B390: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8002B394: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x8002B398: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x8002B39C: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x8002B3A0: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x8002B3A4: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x8002B3A8: jr          $ra
    // 0x8002B3AC: addiu       $sp, $sp, 0x1A8
    ctx->r29 = ADD32(ctx->r29, 0X1A8);
    TRACE_RETURN()
    return;
    // 0x8002B3AC: addiu       $sp, $sp, 0x1A8
    ctx->r29 = ADD32(ctx->r29, 0X1A8);
;}
RECOMP_FUNC void func_80038D3C_3993C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80038D3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80038D40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80038D44: addiu       $a0, $zero, 0xF1
    ctx->r4 = ADD32(0, 0XF1);
    // 0x80038D48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80038D4C: jal         0x80038C30
    // 0x80038D50: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80038C30_39830(rdram, ctx);
        goto after_0;
    // 0x80038D50: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80038D54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80038D58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80038D5C: jr          $ra
    // 0x80038D60: nop

    TRACE_RETURN()
    return;
    // 0x80038D60: nop

;}
RECOMP_FUNC void func_800042F4_4EF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800042F4: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x800042F8: lw          $t2, -0x3A38($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X3A38);
    // 0x800042FC: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x80004300: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80004304: sll         $t3, $t7, 4
    ctx->r11 = S32(ctx->r15 << 4);
    // 0x80004308: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8000430C: ori         $at, $at, 0xB168
    ctx->r1 = ctx->r1 | 0XB168;
    // 0x80004310: addu        $v0, $t2, $t3
    ctx->r2 = ADD32(ctx->r10, ctx->r11);
    // 0x80004314: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80004318: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8000431C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x80004320: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x80004324: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x80004328: sb          $t4, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r12;
    // 0x8000432C: sh          $a2, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r6;
    // 0x80004330: sh          $a3, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r7;
    // 0x80004334: jr          $ra
    // 0x80004338: sw          $a1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x80004338: sw          $a1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r5;
;}
RECOMP_FUNC void func_800142BC_14EBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800142BC: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x800142C0: lui         $a3, 0x8005
    ctx->r7 = S32(0X8005 << 16);
    // 0x800142C4: addiu       $a3, $a3, 0x4910
    ctx->r7 = ADD32(ctx->r7, 0X4910);
    // 0x800142C8: lhu         $t8, 0x0($a3)
    ctx->r24 = MEM_HU(ctx->r7, 0X0);
    // 0x800142CC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800142D0: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x800142D4: lh          $t6, 0x7A76($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X7A76);
    // 0x800142D8: lui         $s1, 0x8007
    ctx->r17 = S32(0X8007 << 16);
    // 0x800142DC: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x800142E0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800142E4: addu        $s1, $s1, $t7
    ctx->r17 = ADD32(ctx->r17, ctx->r15);
    // 0x800142E8: sltu        $at, $a0, $t8
    ctx->r1 = ctx->r4 < ctx->r24 ? 1 : 0;
    // 0x800142EC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x800142F0: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x800142F4: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x800142F8: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x800142FC: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80014300: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80014304: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80014308: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8001430C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80014310: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80014314: lw          $s1, -0x66E4($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X66E4);
    // 0x80014318: bne         $at, $zero, L_8001434C
    if (ctx->r1 != 0) {
        // 0x8001431C: sh          $t6, 0x46($sp)
        MEM_H(0X46, ctx->r29) = ctx->r14;
            goto L_8001434C;
    }
    // 0x8001431C: sh          $t6, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r14;
    // 0x80014320: lui         $v0, 0x8005
    ctx->r2 = S32(0X8005 << 16);
    // 0x80014324: addiu       $v0, $v0, 0x4910
    ctx->r2 = ADD32(ctx->r2, 0X4910);
    // 0x80014328: lhu         $v1, 0x4($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X4);
L_8001432C:
    // 0x8001432C: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    // 0x80014330: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80014334: bne         $v1, $zero, L_80014344
    if (ctx->r3 != 0) {
        // 0x80014338: sltu        $at, $a0, $v1
        ctx->r1 = ctx->r4 < ctx->r3 ? 1 : 0;
            goto L_80014344;
    }
    // 0x80014338: sltu        $at, $a0, $v1
    ctx->r1 = ctx->r4 < ctx->r3 ? 1 : 0;
    // 0x8001433C: b           L_800144B8
    // 0x80014340: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800144B8;
    // 0x80014340: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80014344:
    // 0x80014344: beql        $at, $zero, L_8001432C
    if (ctx->r1 == 0) {
        // 0x80014348: lhu         $v1, 0x4($v0)
        ctx->r3 = MEM_HU(ctx->r2, 0X4);
            goto L_8001432C;
    }
    goto skip_0;
    // 0x80014348: lhu         $v1, 0x4($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X4);
    skip_0:
L_8001434C:
    // 0x8001434C: sll         $t9, $a2, 1
    ctx->r25 = S32(ctx->r6 << 1);
    // 0x80014350: addu        $t0, $a3, $t9
    ctx->r8 = ADD32(ctx->r7, ctx->r25);
    // 0x80014354: lhu         $t1, 0x2($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X2);
    // 0x80014358: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8001435C: lui         $s7, 0x8026
    ctx->r23 = S32(0X8026 << 16);
    // 0x80014360: sll         $t2, $t1, 24
    ctx->r10 = S32(ctx->r9 << 24);
    // 0x80014364: beq         $a0, $zero, L_8001447C
    if (ctx->r4 == 0) {
        // 0x80014368: subu        $s3, $a1, $t2
        ctx->r19 = SUB32(ctx->r5, ctx->r10);
            goto L_8001447C;
    }
    // 0x80014368: subu        $s3, $a1, $t2
    ctx->r19 = SUB32(ctx->r5, ctx->r10);
    // 0x8001436C: lui         $fp, 0x3
    ctx->r30 = S32(0X3 << 16);
    // 0x80014370: lui         $s5, 0xC
    ctx->r21 = S32(0XC << 16);
    // 0x80014374: lui         $s4, 0x802F
    ctx->r20 = S32(0X802F << 16);
    // 0x80014378: lui         $s2, 0x8016
    ctx->r18 = S32(0X8016 << 16);
    // 0x8001437C: addiu       $s2, $s2, -0x3A38
    ctx->r18 = ADD32(ctx->r18, -0X3A38);
    // 0x80014380: addiu       $s4, $s4, 0x7000
    ctx->r20 = ADD32(ctx->r20, 0X7000);
    // 0x80014384: ori         $s5, $s5, 0x7FA4
    ctx->r21 = ctx->r21 | 0X7FA4;
    // 0x80014388: ori         $fp, $fp, 0x8000
    ctx->r30 = ctx->r30 | 0X8000;
    // 0x8001438C: addiu       $s7, $s7, 0x1000
    ctx->r23 = ADD32(ctx->r23, 0X1000);
    // 0x80014390: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
L_80014394:
    // 0x80014394: jal         0x80014698
    // 0x80014398: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80014698_15298(rdram, ctx);
        goto after_0;
    // 0x80014398: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8001439C: sltiu       $at, $v0, 0x2001
    ctx->r1 = ctx->r2 < 0X2001 ? 1 : 0;
    // 0x800143A0: beq         $at, $zero, L_800143E8
    if (ctx->r1 == 0) {
        // 0x800143A4: nop
    
            goto L_800143E8;
    }
    // 0x800143A4: nop

    // 0x800143A8: beq         $s0, $zero, L_800143B8
    if (ctx->r16 == 0) {
        // 0x800143AC: sltu        $at, $s0, $s4
        ctx->r1 = ctx->r16 < ctx->r20 ? 1 : 0;
            goto L_800143B8;
    }
    // 0x800143AC: sltu        $at, $s0, $s4
    ctx->r1 = ctx->r16 < ctx->r20 ? 1 : 0;
    // 0x800143B0: beql        $at, $zero, L_800143D0
    if (ctx->r1 == 0) {
        // 0x800143B4: lw          $t4, 0x4($s1)
        ctx->r12 = MEM_W(ctx->r17, 0X4);
            goto L_800143D0;
    }
    goto skip_1;
    // 0x800143B4: lw          $t4, 0x4($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X4);
    skip_1:
L_800143B8:
    // 0x800143B8: lw          $t3, 0x0($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X0);
    // 0x800143BC: addiu       $a1, $zero, 0x2000
    ctx->r5 = ADD32(0, 0X2000);
    // 0x800143C0: jal         0x800148F0
    // 0x800143C4: addu        $a0, $t3, $s5
    ctx->r4 = ADD32(ctx->r11, ctx->r21);
    func_800148F0_154F0(rdram, ctx);
        goto after_1;
    // 0x800143C4: addu        $a0, $t3, $s5
    ctx->r4 = ADD32(ctx->r11, ctx->r21);
    after_1:
    // 0x800143C8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800143CC: lw          $t4, 0x4($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X4);
L_800143D0:
    // 0x800143D0: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x800143D4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800143D8: jal         0x800144E8
    // 0x800143DC: addu        $a2, $t4, $s3
    ctx->r6 = ADD32(ctx->r12, ctx->r19);
    func_800144E8_150E8(rdram, ctx);
        goto after_2;
    // 0x800143DC: addu        $a2, $t4, $s3
    ctx->r6 = ADD32(ctx->r12, ctx->r19);
    after_2:
    // 0x800143E0: b           L_80014470
    // 0x800143E4: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
        goto L_80014470;
    // 0x800143E4: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
L_800143E8:
    // 0x800143E8: beq         $s0, $zero, L_80014408
    if (ctx->r16 == 0) {
        // 0x800143EC: sltu        $at, $s0, $s4
        ctx->r1 = ctx->r16 < ctx->r20 ? 1 : 0;
            goto L_80014408;
    }
    // 0x800143EC: sltu        $at, $s0, $s4
    ctx->r1 = ctx->r16 < ctx->r20 ? 1 : 0;
    // 0x800143F0: bnel        $at, $zero, L_8001440C
    if (ctx->r1 != 0) {
        // 0x800143F4: lw          $t6, 0x0($s2)
        ctx->r14 = MEM_W(ctx->r18, 0X0);
            goto L_8001440C;
    }
    goto skip_2;
    // 0x800143F4: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    skip_2:
    // 0x800143F8: lw          $t5, 0x0($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X0);
    // 0x800143FC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80014400: jal         0x80014B74
    // 0x80014404: addu        $a0, $t5, $s5
    ctx->r4 = ADD32(ctx->r13, ctx->r21);
    func_80014B74_15774(rdram, ctx);
        goto after_3;
    // 0x80014404: addu        $a0, $t5, $s5
    ctx->r4 = ADD32(ctx->r13, ctx->r21);
    after_3:
L_80014408:
    // 0x80014408: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
L_8001440C:
    // 0x8001440C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80014410: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80014414: sh          $s6, -0x524A($at)
    MEM_H(-0X524A, ctx->r1) = ctx->r22;
    // 0x80014418: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x8001441C: lw          $t1, 0x4($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X4);
    // 0x80014420: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80014424: addu        $t8, $t7, $fp
    ctx->r24 = ADD32(ctx->r15, ctx->r30);
    // 0x80014428: lh          $t9, 0x2DB0($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X2DB0);
    // 0x8001442C: addu        $a2, $t1, $s3
    ctx->r6 = ADD32(ctx->r9, ctx->r19);
    // 0x80014430: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80014434: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80014438: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8001443C: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x80014440: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80014444: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x80014448: sll         $t0, $t0, 11
    ctx->r8 = S32(ctx->r8 << 11);
    // 0x8001444C: addu        $s0, $s7, $t0
    ctx->r16 = ADD32(ctx->r23, ctx->r8);
    // 0x80014450: jal         0x800144E8
    // 0x80014454: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800144E8_150E8(rdram, ctx);
        goto after_4;
    // 0x80014454: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_4:
    // 0x80014458: lw          $t3, 0x0($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X0);
    // 0x8001445C: lh          $t2, 0x46($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X46);
    // 0x80014460: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80014464: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80014468: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x8001446C: sh          $t2, -0x524A($at)
    MEM_H(-0X524A, ctx->r1) = ctx->r10;
L_80014470:
    // 0x80014470: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80014474: bne         $a0, $zero, L_80014394
    if (ctx->r4 != 0) {
        // 0x80014478: nop
    
            goto L_80014394;
    }
    // 0x80014478: nop

L_8001447C:
    // 0x8001447C: lui         $s2, 0x8016
    ctx->r18 = S32(0X8016 << 16);
    // 0x80014480: lui         $s4, 0x802F
    ctx->r20 = S32(0X802F << 16);
    // 0x80014484: lui         $s5, 0xC
    ctx->r21 = S32(0XC << 16);
    // 0x80014488: ori         $s5, $s5, 0x7FA4
    ctx->r21 = ctx->r21 | 0X7FA4;
    // 0x8001448C: addiu       $s4, $s4, 0x7000
    ctx->r20 = ADD32(ctx->r20, 0X7000);
    // 0x80014490: beq         $s0, $zero, L_800144B4
    if (ctx->r16 == 0) {
        // 0x80014494: addiu       $s2, $s2, -0x3A38
        ctx->r18 = ADD32(ctx->r18, -0X3A38);
            goto L_800144B4;
    }
    // 0x80014494: addiu       $s2, $s2, -0x3A38
    ctx->r18 = ADD32(ctx->r18, -0X3A38);
    // 0x80014498: sltu        $at, $s0, $s4
    ctx->r1 = ctx->r16 < ctx->r20 ? 1 : 0;
    // 0x8001449C: bnel        $at, $zero, L_800144B8
    if (ctx->r1 != 0) {
        // 0x800144A0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_800144B8;
    }
    goto skip_3;
    // 0x800144A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_3:
    // 0x800144A4: lw          $t4, 0x0($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X0);
    // 0x800144A8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800144AC: jal         0x80014B74
    // 0x800144B0: addu        $a0, $t4, $s5
    ctx->r4 = ADD32(ctx->r12, ctx->r21);
    func_80014B74_15774(rdram, ctx);
        goto after_5;
    // 0x800144B0: addu        $a0, $t4, $s5
    ctx->r4 = ADD32(ctx->r12, ctx->r21);
    after_5:
L_800144B4:
    // 0x800144B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800144B8:
    // 0x800144B8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x800144BC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800144C0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800144C4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800144C8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800144CC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800144D0: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x800144D4: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x800144D8: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x800144DC: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x800144E0: jr          $ra
    // 0x800144E4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x800144E4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_8003D9B8_3E5B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003D9B8: ori         $at, $zero, 0x8002
    ctx->r1 = 0 | 0X8002;
    // 0x8003D9BC: bne         $a0, $at, L_8003D9D4
    if (ctx->r4 != ctx->r1) {
        // 0x8003D9C0: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_8003D9D4;
    }
    // 0x8003D9C0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8003D9C4: bne         $a1, $a2, L_8003DB04
    if (ctx->r5 != ctx->r6) {
        // 0x8003D9C8: nop
    
            goto L_8003DB04;
    }
    // 0x8003D9C8: nop

    // 0x8003D9CC: jr          $ra
    // 0x8003D9D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x8003D9D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8003D9D4:
    // 0x8003D9D4: ori         $at, $zero, 0x8003
    ctx->r1 = 0 | 0X8003;
    // 0x8003D9D8: bnel        $a0, $at, L_8003D9F4
    if (ctx->r4 != ctx->r1) {
        // 0x8003D9DC: ori         $at, $zero, 0x800C
        ctx->r1 = 0 | 0X800C;
            goto L_8003D9F4;
    }
    goto skip_0;
    // 0x8003D9DC: ori         $at, $zero, 0x800C
    ctx->r1 = 0 | 0X800C;
    skip_0:
    // 0x8003D9E0: beq         $a1, $a2, L_8003DB04
    if (ctx->r5 == ctx->r6) {
        // 0x8003D9E4: nop
    
            goto L_8003DB04;
    }
    // 0x8003D9E4: nop

    // 0x8003D9E8: jr          $ra
    // 0x8003D9EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x8003D9EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8003D9F0: ori         $at, $zero, 0x800C
    ctx->r1 = 0 | 0X800C;
L_8003D9F4:
    // 0x8003D9F4: bne         $a0, $at, L_8003DA0C
    if (ctx->r4 != ctx->r1) {
        // 0x8003D9F8: slt         $at, $a1, $a2
        ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r6) ? 1 : 0;
            goto L_8003DA0C;
    }
    // 0x8003D9F8: slt         $at, $a1, $a2
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8003D9FC: beq         $at, $zero, L_8003DB04
    if (ctx->r1 == 0) {
        // 0x8003DA00: nop
    
            goto L_8003DB04;
    }
    // 0x8003DA00: nop

    // 0x8003DA04: jr          $ra
    // 0x8003DA08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x8003DA08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8003DA0C:
    // 0x8003DA0C: ori         $at, $zero, 0x800D
    ctx->r1 = 0 | 0X800D;
    // 0x8003DA10: bne         $a0, $at, L_8003DA28
    if (ctx->r4 != ctx->r1) {
        // 0x8003DA14: slt         $at, $a2, $a1
        ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r5) ? 1 : 0;
            goto L_8003DA28;
    }
    // 0x8003DA14: slt         $at, $a2, $a1
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8003DA18: beq         $at, $zero, L_8003DB04
    if (ctx->r1 == 0) {
        // 0x8003DA1C: nop
    
            goto L_8003DB04;
    }
    // 0x8003DA1C: nop

    // 0x8003DA20: jr          $ra
    // 0x8003DA24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x8003DA24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8003DA28:
    // 0x8003DA28: ori         $at, $zero, 0x800E
    ctx->r1 = 0 | 0X800E;
    // 0x8003DA2C: bne         $a0, $at, L_8003DA44
    if (ctx->r4 != ctx->r1) {
        // 0x8003DA30: slt         $at, $a2, $a1
        ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r5) ? 1 : 0;
            goto L_8003DA44;
    }
    // 0x8003DA30: slt         $at, $a2, $a1
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8003DA34: bne         $at, $zero, L_8003DB04
    if (ctx->r1 != 0) {
        // 0x8003DA38: nop
    
            goto L_8003DB04;
    }
    // 0x8003DA38: nop

    // 0x8003DA3C: jr          $ra
    // 0x8003DA40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x8003DA40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8003DA44:
    // 0x8003DA44: ori         $at, $zero, 0x800F
    ctx->r1 = 0 | 0X800F;
    // 0x8003DA48: bne         $a0, $at, L_8003DA60
    if (ctx->r4 != ctx->r1) {
        // 0x8003DA4C: slt         $at, $a1, $a2
        ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r6) ? 1 : 0;
            goto L_8003DA60;
    }
    // 0x8003DA4C: slt         $at, $a1, $a2
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8003DA50: bne         $at, $zero, L_8003DB04
    if (ctx->r1 != 0) {
        // 0x8003DA54: nop
    
            goto L_8003DB04;
    }
    // 0x8003DA54: nop

    // 0x8003DA58: jr          $ra
    // 0x8003DA5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x8003DA5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8003DA60:
    // 0x8003DA60: ori         $at, $zero, 0x8030
    ctx->r1 = 0 | 0X8030;
    // 0x8003DA64: bne         $a0, $at, L_8003DA7C
    if (ctx->r4 != ctx->r1) {
        // 0x8003DA68: lw          $a2, 0x0($a2)
        ctx->r6 = MEM_W(ctx->r6, 0X0);
            goto L_8003DA7C;
    }
    // 0x8003DA68: lw          $a2, 0x0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X0);
    // 0x8003DA6C: bne         $a1, $a2, L_8003DB04
    if (ctx->r5 != ctx->r6) {
        // 0x8003DA70: nop
    
            goto L_8003DB04;
    }
    // 0x8003DA70: nop

    // 0x8003DA74: jr          $ra
    // 0x8003DA78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x8003DA78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8003DA7C:
    // 0x8003DA7C: ori         $at, $zero, 0x8031
    ctx->r1 = 0 | 0X8031;
    // 0x8003DA80: bnel        $a0, $at, L_8003DA9C
    if (ctx->r4 != ctx->r1) {
        // 0x8003DA84: ori         $at, $zero, 0x8032
        ctx->r1 = 0 | 0X8032;
            goto L_8003DA9C;
    }
    goto skip_1;
    // 0x8003DA84: ori         $at, $zero, 0x8032
    ctx->r1 = 0 | 0X8032;
    skip_1:
    // 0x8003DA88: beq         $a1, $a2, L_8003DB04
    if (ctx->r5 == ctx->r6) {
        // 0x8003DA8C: nop
    
            goto L_8003DB04;
    }
    // 0x8003DA8C: nop

    // 0x8003DA90: jr          $ra
    // 0x8003DA94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x8003DA94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8003DA98: ori         $at, $zero, 0x8032
    ctx->r1 = 0 | 0X8032;
L_8003DA9C:
    // 0x8003DA9C: bne         $a0, $at, L_8003DAB4
    if (ctx->r4 != ctx->r1) {
        // 0x8003DAA0: slt         $at, $a1, $a2
        ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r6) ? 1 : 0;
            goto L_8003DAB4;
    }
    // 0x8003DAA0: slt         $at, $a1, $a2
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8003DAA4: beq         $at, $zero, L_8003DB04
    if (ctx->r1 == 0) {
        // 0x8003DAA8: nop
    
            goto L_8003DB04;
    }
    // 0x8003DAA8: nop

    // 0x8003DAAC: jr          $ra
    // 0x8003DAB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x8003DAB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8003DAB4:
    // 0x8003DAB4: ori         $at, $zero, 0x8033
    ctx->r1 = 0 | 0X8033;
    // 0x8003DAB8: bne         $a0, $at, L_8003DAD0
    if (ctx->r4 != ctx->r1) {
        // 0x8003DABC: slt         $at, $a2, $a1
        ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r5) ? 1 : 0;
            goto L_8003DAD0;
    }
    // 0x8003DABC: slt         $at, $a2, $a1
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8003DAC0: beq         $at, $zero, L_8003DB04
    if (ctx->r1 == 0) {
        // 0x8003DAC4: nop
    
            goto L_8003DB04;
    }
    // 0x8003DAC4: nop

    // 0x8003DAC8: jr          $ra
    // 0x8003DACC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x8003DACC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8003DAD0:
    // 0x8003DAD0: ori         $at, $zero, 0x8034
    ctx->r1 = 0 | 0X8034;
    // 0x8003DAD4: bne         $a0, $at, L_8003DAEC
    if (ctx->r4 != ctx->r1) {
        // 0x8003DAD8: slt         $at, $a2, $a1
        ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r5) ? 1 : 0;
            goto L_8003DAEC;
    }
    // 0x8003DAD8: slt         $at, $a2, $a1
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8003DADC: bne         $at, $zero, L_8003DB04
    if (ctx->r1 != 0) {
        // 0x8003DAE0: nop
    
            goto L_8003DB04;
    }
    // 0x8003DAE0: nop

    // 0x8003DAE4: jr          $ra
    // 0x8003DAE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x8003DAE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8003DAEC:
    // 0x8003DAEC: ori         $at, $zero, 0x8035
    ctx->r1 = 0 | 0X8035;
    // 0x8003DAF0: bne         $a0, $at, L_8003DB04
    if (ctx->r4 != ctx->r1) {
        // 0x8003DAF4: slt         $at, $a1, $a2
        ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r6) ? 1 : 0;
            goto L_8003DB04;
    }
    // 0x8003DAF4: slt         $at, $a1, $a2
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8003DAF8: bne         $at, $zero, L_8003DB04
    if (ctx->r1 != 0) {
        // 0x8003DAFC: nop
    
            goto L_8003DB04;
    }
    // 0x8003DAFC: nop

    // 0x8003DB00: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_8003DB04:
    // 0x8003DB04: jr          $ra
    // 0x8003DB08: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    TRACE_RETURN()
    return;
    // 0x8003DB08: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_8001E7C4_1F3C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001E7C4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8001E7C8: andi        $v0, $a1, 0xFFFF
    ctx->r2 = ctx->r5 & 0XFFFF;
    // 0x8001E7CC: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x8001E7D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001E7D4: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x8001E7D8: bne         $v0, $at, L_8001E7E8
    if (ctx->r2 != ctx->r1) {
        // 0x8001E7DC: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_8001E7E8;
    }
    // 0x8001E7DC: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8001E7E0: b           L_8001E7EC
    // 0x8001E7E4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
        goto L_8001E7EC;
    // 0x8001E7E4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_8001E7E8:
    // 0x8001E7E8: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
L_8001E7EC:
    // 0x8001E7EC: andi        $a0, $a3, 0xFFFF
    ctx->r4 = ctx->r7 & 0XFFFF;
    // 0x8001E7F0: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x8001E7F4: jal         0x80003F30
    // 0x8001E7F8: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    func_80003F30_4B30(rdram, ctx);
        goto after_0;
    // 0x8001E7F8: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    after_0:
    // 0x8001E7FC: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x8001E800: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8001E804: neg.s       $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = -ctx->f0.fl;
    // 0x8001E808: swc1        $f0, 0x18($a2)
    MEM_W(0X18, ctx->r6) = ctx->f0.u32l;
    // 0x8001E80C: swc1        $f6, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f6.u32l;
    // 0x8001E810: swc1        $f4, 0x14($a2)
    MEM_W(0X14, ctx->r6) = ctx->f4.u32l;
    // 0x8001E814: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8001E818: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8001E81C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8001E820: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8001E824: swc1        $f8, 0x28($a2)
    MEM_W(0X28, ctx->r6) = ctx->f8.u32l;
    // 0x8001E828: swc1        $f2, 0x38($a2)
    MEM_W(0X38, ctx->r6) = ctx->f2.u32l;
    // 0x8001E82C: swc1        $f2, 0x34($a2)
    MEM_W(0X34, ctx->r6) = ctx->f2.u32l;
    // 0x8001E830: swc1        $f2, 0x30($a2)
    MEM_W(0X30, ctx->r6) = ctx->f2.u32l;
    // 0x8001E834: swc1        $f2, 0x2C($a2)
    MEM_W(0X2C, ctx->r6) = ctx->f2.u32l;
    // 0x8001E838: swc1        $f2, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f2.u32l;
    // 0x8001E83C: swc1        $f2, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f2.u32l;
    // 0x8001E840: swc1        $f2, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f2.u32l;
    // 0x8001E844: swc1        $f2, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f2.u32l;
    // 0x8001E848: swc1        $f2, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f2.u32l;
    // 0x8001E84C: swc1        $f2, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f2.u32l;
    // 0x8001E850: swc1        $f12, 0x3C($a2)
    MEM_W(0X3C, ctx->r6) = ctx->f12.u32l;
    // 0x8001E854: swc1        $f12, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f12.u32l;
    // 0x8001E858: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001E85C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8001E860: jr          $ra
    // 0x8001E864: nop

    TRACE_RETURN()
    return;
    // 0x8001E864: nop

;}
RECOMP_FUNC void func_800390D8_39CD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800390D8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800390DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800390E0: lui         $a3, 0x801C
    ctx->r7 = S32(0X801C << 16);
    // 0x800390E4: lw          $a3, 0xA20($a3)
    ctx->r7 = MEM_W(ctx->r7, 0XA20);
    // 0x800390E8: andi        $t6, $a3, 0x7FFF
    ctx->r14 = ctx->r7 & 0X7FFF;
    // 0x800390EC: slti        $at, $t6, 0x200
    ctx->r1 = SIGNED(ctx->r14) < 0X200 ? 1 : 0;
    // 0x800390F0: bne         $at, $zero, L_800392E8
    if (ctx->r1 != 0) {
        // 0x800390F4: or          $a1, $t6, $zero
        ctx->r5 = ctx->r14 | 0;
            goto L_800392E8;
    }
    // 0x800390F4: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x800390F8: slti        $at, $t6, 0x3AE
    ctx->r1 = SIGNED(ctx->r14) < 0X3AE ? 1 : 0;
    // 0x800390FC: beq         $at, $zero, L_80039428
    if (ctx->r1 == 0) {
        // 0x80039100: lui         $t2, 0x801C
        ctx->r10 = S32(0X801C << 16);
            goto L_80039428;
    }
    // 0x80039100: lui         $t2, 0x801C
    ctx->r10 = S32(0X801C << 16);
    // 0x80039104: sra         $t7, $t6, 8
    ctx->r15 = S32(SIGNED(ctx->r14) >> 8);
    // 0x80039108: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8003910C: lui         $v1, 0x8007
    ctx->r3 = S32(0X8007 << 16);
    // 0x80039110: addu        $v1, $v1, $t8
    ctx->r3 = ADD32(ctx->r3, ctx->r24);
    // 0x80039114: lw          $v1, -0x1D64($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1D64);
    // 0x80039118: andi        $t9, $t6, 0xFF
    ctx->r25 = ctx->r14 & 0XFF;
    // 0x8003911C: sll         $t4, $t9, 3
    ctx->r12 = S32(ctx->r25 << 3);
    // 0x80039120: addu        $t3, $v1, $t4
    ctx->r11 = ADD32(ctx->r3, ctx->r12);
    // 0x80039124: lbu         $v0, 0x0($t3)
    ctx->r2 = MEM_BU(ctx->r11, 0X0);
    // 0x80039128: addiu       $t2, $t2, 0x9F0
    ctx->r10 = ADD32(ctx->r10, 0X9F0);
    // 0x8003912C: slti        $at, $a1, 0x35B
    ctx->r1 = SIGNED(ctx->r5) < 0X35B ? 1 : 0;
    // 0x80039130: sb          $v0, 0x2($t2)
    MEM_B(0X2, ctx->r10) = ctx->r2;
    // 0x80039134: andi        $t7, $v0, 0x1F
    ctx->r15 = ctx->r2 & 0X1F;
    // 0x80039138: sb          $t7, 0x2($t2)
    MEM_B(0X2, ctx->r10) = ctx->r15;
    // 0x8003913C: lbu         $t1, 0x1($t3)
    ctx->r9 = MEM_BU(ctx->r11, 0X1);
    // 0x80039140: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x80039144: andi        $t6, $a2, 0x80
    ctx->r14 = ctx->r6 & 0X80;
    // 0x80039148: andi        $t8, $t1, 0xF
    ctx->r24 = ctx->r9 & 0XF;
    // 0x8003914C: sra         $t1, $t1, 4
    ctx->r9 = S32(SIGNED(ctx->r9) >> 4);
    // 0x80039150: andi        $t9, $t1, 0xFF
    ctx->r25 = ctx->r9 & 0XFF;
    // 0x80039154: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x80039158: sb          $t8, 0x3($t2)
    MEM_B(0X3, ctx->r10) = ctx->r24;
    // 0x8003915C: bne         $at, $zero, L_80039214
    if (ctx->r1 != 0) {
        // 0x80039160: or          $t1, $t9, $zero
        ctx->r9 = ctx->r25 | 0;
            goto L_80039214;
    }
    // 0x80039160: or          $t1, $t9, $zero
    ctx->r9 = ctx->r25 | 0;
    // 0x80039164: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80039168: addiu       $v0, $v0, 0x1308
    ctx->r2 = ADD32(ctx->r2, 0X1308);
    // 0x8003916C: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
    // 0x80039170: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
L_80039174:
    // 0x80039174: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x80039178: andi        $t5, $t4, 0x7FFF
    ctx->r13 = ctx->r12 & 0X7FFF;
    // 0x8003917C: sltiu       $at, $t5, 0x35B
    ctx->r1 = ctx->r13 < 0X35B ? 1 : 0;
    // 0x80039180: bnel        $at, $zero, L_800391A8
    if (ctx->r1 != 0) {
        // 0x80039184: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_800391A8;
    }
    goto skip_0;
    // 0x80039184: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_0:
    // 0x80039188: lbu         $t6, 0x4($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X4);
    // 0x8003918C: lbu         $t7, 0x2($t2)
    ctx->r15 = MEM_BU(ctx->r10, 0X2);
    // 0x80039190: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80039194: beql        $at, $zero, L_8003942C
    if (ctx->r1 == 0) {
        // 0x80039198: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8003942C;
    }
    goto skip_1;
    // 0x80039198: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x8003919C: b           L_800391B0
    // 0x800391A0: andi        $t1, $v1, 0xFF
    ctx->r9 = ctx->r3 & 0XFF;
        goto L_800391B0;
    // 0x800391A0: andi        $t1, $v1, 0xFF
    ctx->r9 = ctx->r3 & 0XFF;
    // 0x800391A4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_800391A8:
    // 0x800391A8: bne         $v1, $a0, L_80039174
    if (ctx->r3 != ctx->r4) {
        // 0x800391AC: addiu       $v0, $v0, 0xB0
        ctx->r2 = ADD32(ctx->r2, 0XB0);
            goto L_80039174;
    }
    // 0x800391AC: addiu       $v0, $v0, 0xB0
    ctx->r2 = ADD32(ctx->r2, 0XB0);
L_800391B0:
    // 0x800391B0: lui         $t8, 0x801C
    ctx->r24 = S32(0X801C << 16);
    // 0x800391B4: addiu       $t8, $t8, 0x1728
    ctx->r24 = ADD32(ctx->r24, 0X1728);
    // 0x800391B8: bne         $v0, $t8, L_800392C4
    if (ctx->r2 != ctx->r24) {
        // 0x800391BC: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_800392C4;
    }
    // 0x800391BC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800391C0: jal         0x80039440
    // 0x800391C4: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    func_80039440_3A040(rdram, ctx);
        goto after_0;
    // 0x800391C4: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    after_0:
    // 0x800391C8: sll         $t4, $v0, 2
    ctx->r12 = S32(ctx->r2 << 2);
    // 0x800391CC: subu        $t4, $t4, $v0
    ctx->r12 = SUB32(ctx->r12, ctx->r2);
    // 0x800391D0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800391D4: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x800391D8: subu        $t4, $t4, $v0
    ctx->r12 = SUB32(ctx->r12, ctx->r2);
    // 0x800391DC: addiu       $v1, $v1, 0xC28
    ctx->r3 = ADD32(ctx->r3, 0XC28);
    // 0x800391E0: lui         $t2, 0x801C
    ctx->r10 = S32(0X801C << 16);
    // 0x800391E4: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800391E8: addiu       $t2, $t2, 0x9F0
    ctx->r10 = ADD32(ctx->r10, 0X9F0);
    // 0x800391EC: addu        $t5, $v1, $t4
    ctx->r13 = ADD32(ctx->r3, ctx->r12);
    // 0x800391F0: lbu         $t6, 0x4($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X4);
    // 0x800391F4: lbu         $t9, 0x2($t2)
    ctx->r25 = MEM_BU(ctx->r10, 0X2);
    // 0x800391F8: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x800391FC: andi        $t1, $v0, 0xFF
    ctx->r9 = ctx->r2 & 0XFF;
    // 0x80039200: slt         $at, $t9, $t6
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80039204: beq         $at, $zero, L_800392C4
    if (ctx->r1 == 0) {
        // 0x80039208: nop
    
            goto L_800392C4;
    }
    // 0x80039208: nop

    // 0x8003920C: b           L_8003942C
    // 0x80039210: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8003942C;
    // 0x80039210: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80039214:
    // 0x80039214: bne         $t1, $zero, L_80039294
    if (ctx->r9 != 0) {
        // 0x80039218: or          $t0, $t1, $zero
        ctx->r8 = ctx->r9 | 0;
            goto L_80039294;
    }
    // 0x80039218: or          $t0, $t1, $zero
    ctx->r8 = ctx->r9 | 0;
    // 0x8003921C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80039220: addiu       $v0, $v0, 0x1308
    ctx->r2 = ADD32(ctx->r2, 0X1308);
    // 0x80039224: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
    // 0x80039228: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
L_8003922C:
    // 0x8003922C: beql        $a2, $zero, L_80039250
    if (ctx->r6 == 0) {
        // 0x80039230: lw          $t8, 0x0($v0)
        ctx->r24 = MEM_W(ctx->r2, 0X0);
            goto L_80039250;
    }
    goto skip_2;
    // 0x80039230: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    skip_2:
    // 0x80039234: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80039238: bnel        $a3, $t7, L_8003926C
    if (ctx->r7 != ctx->r15) {
        // 0x8003923C: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_8003926C;
    }
    goto skip_3;
    // 0x8003923C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_3:
    // 0x80039240: andi        $t1, $v1, 0xFF
    ctx->r9 = ctx->r3 & 0XFF;
    // 0x80039244: b           L_80039274
    // 0x80039248: or          $t0, $t1, $zero
    ctx->r8 = ctx->r9 | 0;
        goto L_80039274;
    // 0x80039248: or          $t0, $t1, $zero
    ctx->r8 = ctx->r9 | 0;
    // 0x8003924C: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
L_80039250:
    // 0x80039250: andi        $t4, $t8, 0x7FFF
    ctx->r12 = ctx->r24 & 0X7FFF;
    // 0x80039254: bnel        $a1, $t4, L_8003926C
    if (ctx->r5 != ctx->r12) {
        // 0x80039258: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_8003926C;
    }
    goto skip_4;
    // 0x80039258: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_4:
    // 0x8003925C: andi        $t1, $v1, 0xFF
    ctx->r9 = ctx->r3 & 0XFF;
    // 0x80039260: b           L_80039274
    // 0x80039264: or          $t0, $t1, $zero
    ctx->r8 = ctx->r9 | 0;
        goto L_80039274;
    // 0x80039264: or          $t0, $t1, $zero
    ctx->r8 = ctx->r9 | 0;
    // 0x80039268: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_8003926C:
    // 0x8003926C: bne         $v1, $a0, L_8003922C
    if (ctx->r3 != ctx->r4) {
        // 0x80039270: addiu       $v0, $v0, 0xB0
        ctx->r2 = ADD32(ctx->r2, 0XB0);
            goto L_8003922C;
    }
    // 0x80039270: addiu       $v0, $v0, 0xB0
    ctx->r2 = ADD32(ctx->r2, 0XB0);
L_80039274:
    // 0x80039274: bne         $t0, $zero, L_80039294
    if (ctx->r8 != 0) {
        // 0x80039278: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_80039294;
    }
    // 0x80039278: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8003927C: jal         0x80039440
    // 0x80039280: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    func_80039440_3A040(rdram, ctx);
        goto after_1;
    // 0x80039280: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    after_1:
    // 0x80039284: lui         $t2, 0x801C
    ctx->r10 = S32(0X801C << 16);
    // 0x80039288: addiu       $t2, $t2, 0x9F0
    ctx->r10 = ADD32(ctx->r10, 0X9F0);
    // 0x8003928C: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x80039290: andi        $t1, $v0, 0xFF
    ctx->r9 = ctx->r2 & 0XFF;
L_80039294:
    // 0x80039294: sll         $t9, $t1, 2
    ctx->r25 = S32(ctx->r9 << 2);
    // 0x80039298: subu        $t9, $t9, $t1
    ctx->r25 = SUB32(ctx->r25, ctx->r9);
    // 0x8003929C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800392A0: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x800392A4: subu        $t9, $t9, $t1
    ctx->r25 = SUB32(ctx->r25, ctx->r9);
    // 0x800392A8: addiu       $v1, $v1, 0xC28
    ctx->r3 = ADD32(ctx->r3, 0XC28);
    // 0x800392AC: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800392B0: addu        $t6, $v1, $t9
    ctx->r14 = ADD32(ctx->r3, ctx->r25);
    // 0x800392B4: lbu         $t7, 0x4($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X4);
    // 0x800392B8: lbu         $t5, 0x2($t2)
    ctx->r13 = MEM_BU(ctx->r10, 0X2);
    // 0x800392BC: slt         $at, $t5, $t7
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x800392C0: bne         $at, $zero, L_80039428
    if (ctx->r1 != 0) {
        // 0x800392C4: lui         $v0, 0x801C
        ctx->r2 = S32(0X801C << 16);
            goto L_80039428;
    }
L_800392C4:
    // 0x800392C4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x800392C8: addiu       $v0, $v0, 0xA28
    ctx->r2 = ADD32(ctx->r2, 0XA28);
    // 0x800392CC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800392D0: sb          $t1, 0x1($t2)
    MEM_B(0X1, ctx->r10) = ctx->r9;
    // 0x800392D4: sb          $t8, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r24;
    // 0x800392D8: sw          $v0, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r2;
    // 0x800392DC: lw          $t4, 0x4($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X4);
    // 0x800392E0: b           L_8003941C
    // 0x800392E4: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
        goto L_8003941C;
    // 0x800392E4: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
L_800392E8:
    // 0x800392E8: slti        $at, $a1, 0x182
    ctx->r1 = SIGNED(ctx->r5) < 0X182 ? 1 : 0;
    // 0x800392EC: beq         $at, $zero, L_80039428
    if (ctx->r1 == 0) {
        // 0x800392F0: sra         $t9, $a1, 8
        ctx->r25 = S32(SIGNED(ctx->r5) >> 8);
            goto L_80039428;
    }
    // 0x800392F0: sra         $t9, $a1, 8
    ctx->r25 = S32(SIGNED(ctx->r5) >> 8);
    // 0x800392F4: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x800392F8: lui         $v0, 0x8007
    ctx->r2 = S32(0X8007 << 16);
    // 0x800392FC: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80039300: lw          $v0, -0x1D64($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1D64);
    // 0x80039304: andi        $t5, $a1, 0xFF
    ctx->r13 = ctx->r5 & 0XFF;
    // 0x80039308: sll         $t7, $t5, 3
    ctx->r15 = S32(ctx->r13 << 3);
    // 0x8003930C: addu        $a2, $v0, $t7
    ctx->r6 = ADD32(ctx->r2, ctx->r15);
    // 0x80039310: lbu         $t1, 0x0($a2)
    ctx->r9 = MEM_BU(ctx->r6, 0X0);
    // 0x80039314: lui         $t2, 0x801C
    ctx->r10 = S32(0X801C << 16);
    // 0x80039318: addiu       $t2, $t2, 0x9F0
    ctx->r10 = ADD32(ctx->r10, 0X9F0);
    // 0x8003931C: sra         $t4, $t1, 5
    ctx->r12 = S32(SIGNED(ctx->r9) >> 5);
    // 0x80039320: addiu       $t9, $t4, 0x1
    ctx->r25 = ADD32(ctx->r12, 0X1);
    // 0x80039324: andi        $t8, $t1, 0x1F
    ctx->r24 = ctx->r9 & 0X1F;
    // 0x80039328: sb          $t8, 0x2($t2)
    MEM_B(0X2, ctx->r10) = ctx->r24;
    // 0x8003932C: sb          $t9, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r25;
    // 0x80039330: lbu         $t1, 0x1($a2)
    ctx->r9 = MEM_BU(ctx->r6, 0X1);
    // 0x80039334: andi        $t7, $t9, 0xFF
    ctx->r15 = ctx->r25 & 0XFF;
    // 0x80039338: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8003933C: andi        $t6, $t1, 0xF
    ctx->r14 = ctx->r9 & 0XF;
    // 0x80039340: sra         $t1, $t1, 4
    ctx->r9 = S32(SIGNED(ctx->r9) >> 4);
    // 0x80039344: andi        $t5, $t1, 0xFF
    ctx->r13 = ctx->r9 & 0XFF;
    // 0x80039348: sb          $t6, 0x3($t2)
    MEM_B(0X3, ctx->r10) = ctx->r14;
    // 0x8003934C: bne         $t7, $at, L_80039410
    if (ctx->r15 != ctx->r1) {
        // 0x80039350: or          $t1, $t5, $zero
        ctx->r9 = ctx->r13 | 0;
            goto L_80039410;
    }
    // 0x80039350: or          $t1, $t5, $zero
    ctx->r9 = ctx->r13 | 0;
    // 0x80039354: bne         $t5, $zero, L_800393B8
    if (ctx->r13 != 0) {
        // 0x80039358: or          $t0, $t5, $zero
        ctx->r8 = ctx->r13 | 0;
            goto L_800393B8;
    }
    // 0x80039358: or          $t0, $t5, $zero
    ctx->r8 = ctx->r13 | 0;
    // 0x8003935C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80039360: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80039364: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80039368: addiu       $v0, $v0, 0x15C8
    ctx->r2 = ADD32(ctx->r2, 0X15C8);
    // 0x8003936C: addiu       $v1, $zero, 0xE
    ctx->r3 = ADD32(0, 0XE);
L_80039370:
    // 0x80039370: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80039374: andi        $t4, $t8, 0x7FFF
    ctx->r12 = ctx->r24 & 0X7FFF;
    // 0x80039378: bnel        $a0, $t4, L_80039390
    if (ctx->r4 != ctx->r12) {
        // 0x8003937C: addiu       $v1, $v1, -0x2
        ctx->r3 = ADD32(ctx->r3, -0X2);
            goto L_80039390;
    }
    goto skip_5;
    // 0x8003937C: addiu       $v1, $v1, -0x2
    ctx->r3 = ADD32(ctx->r3, -0X2);
    skip_5:
    // 0x80039380: andi        $t1, $v1, 0xFF
    ctx->r9 = ctx->r3 & 0XFF;
    // 0x80039384: b           L_80039398
    // 0x80039388: or          $t0, $t1, $zero
    ctx->r8 = ctx->r9 | 0;
        goto L_80039398;
    // 0x80039388: or          $t0, $t1, $zero
    ctx->r8 = ctx->r9 | 0;
    // 0x8003938C: addiu       $v1, $v1, -0x2
    ctx->r3 = ADD32(ctx->r3, -0X2);
L_80039390:
    // 0x80039390: bne         $v1, $a1, L_80039370
    if (ctx->r3 != ctx->r5) {
        // 0x80039394: addiu       $v0, $v0, -0x160
        ctx->r2 = ADD32(ctx->r2, -0X160);
            goto L_80039370;
    }
    // 0x80039394: addiu       $v0, $v0, -0x160
    ctx->r2 = ADD32(ctx->r2, -0X160);
L_80039398:
    // 0x80039398: bne         $t0, $zero, L_800393B8
    if (ctx->r8 != 0) {
        // 0x8003939C: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_800393B8;
    }
    // 0x8003939C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x800393A0: jal         0x80039440
    // 0x800393A4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_80039440_3A040(rdram, ctx);
        goto after_2;
    // 0x800393A4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_2:
    // 0x800393A8: lui         $t2, 0x801C
    ctx->r10 = S32(0X801C << 16);
    // 0x800393AC: addiu       $t2, $t2, 0x9F0
    ctx->r10 = ADD32(ctx->r10, 0X9F0);
    // 0x800393B0: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x800393B4: andi        $t1, $v0, 0xFF
    ctx->r9 = ctx->r2 & 0XFF;
L_800393B8:
    // 0x800393B8: sll         $t9, $t1, 2
    ctx->r25 = S32(ctx->r9 << 2);
    // 0x800393BC: subu        $t9, $t9, $t1
    ctx->r25 = SUB32(ctx->r25, ctx->r9);
    // 0x800393C0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800393C4: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x800393C8: subu        $t9, $t9, $t1
    ctx->r25 = SUB32(ctx->r25, ctx->r9);
    // 0x800393CC: addiu       $v1, $v1, 0xC28
    ctx->r3 = ADD32(ctx->r3, 0XC28);
    // 0x800393D0: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800393D4: addu        $t6, $v1, $t9
    ctx->r14 = ADD32(ctx->r3, ctx->r25);
    // 0x800393D8: lbu         $t5, 0x4($t6)
    ctx->r13 = MEM_BU(ctx->r14, 0X4);
    // 0x800393DC: lbu         $v0, 0x2($t2)
    ctx->r2 = MEM_BU(ctx->r10, 0X2);
    // 0x800393E0: sll         $t7, $t1, 2
    ctx->r15 = S32(ctx->r9 << 2);
    // 0x800393E4: subu        $t7, $t7, $t1
    ctx->r15 = SUB32(ctx->r15, ctx->r9);
    // 0x800393E8: slt         $at, $v0, $t5
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x800393EC: bne         $at, $zero, L_80039428
    if (ctx->r1 != 0) {
        // 0x800393F0: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_80039428;
    }
    // 0x800393F0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800393F4: subu        $t7, $t7, $t1
    ctx->r15 = SUB32(ctx->r15, ctx->r9);
    // 0x800393F8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800393FC: addu        $t8, $v1, $t7
    ctx->r24 = ADD32(ctx->r3, ctx->r15);
    // 0x80039400: lbu         $t4, 0xB4($t8)
    ctx->r12 = MEM_BU(ctx->r24, 0XB4);
    // 0x80039404: slt         $at, $v0, $t4
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x80039408: bnel        $at, $zero, L_8003942C
    if (ctx->r1 != 0) {
        // 0x8003940C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8003942C;
    }
    goto skip_6;
    // 0x8003940C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_6:
L_80039410:
    // 0x80039410: sb          $t1, 0x1($t2)
    MEM_B(0X1, ctx->r10) = ctx->r9;
    // 0x80039414: lw          $t9, 0x4($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X4);
    // 0x80039418: sw          $t9, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r25;
L_8003941C:
    // 0x8003941C: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x80039420: jal         0x80039A70
    // 0x80039424: sb          $t6, 0x4($t2)
    MEM_B(0X4, ctx->r10) = ctx->r14;
    func_80039A70_3A670(rdram, ctx);
        goto after_3;
    // 0x80039424: sb          $t6, 0x4($t2)
    MEM_B(0X4, ctx->r10) = ctx->r14;
    after_3:
L_80039428:
    // 0x80039428: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003942C:
    // 0x8003942C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80039430: jr          $ra
    // 0x80039434: nop

    TRACE_RETURN()
    return;
    // 0x80039434: nop

    // 0x80039438: jr          $ra
    // 0x8003943C: nop

    TRACE_RETURN()
    return;
    // 0x8003943C: nop

;}
RECOMP_FUNC void func_8003E548_3F148(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003E548: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8003E54C: lui         $t6, 0x801C
    ctx->r14 = S32(0X801C << 16);
    // 0x8003E550: lui         $t7, 0x801C
    ctx->r15 = S32(0X801C << 16);
    // 0x8003E554: lui         $t8, 0x801C
    ctx->r24 = S32(0X801C << 16);
    // 0x8003E558: lw          $t8, 0x776C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X776C);
    // 0x8003E55C: lw          $t7, 0x7768($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7768);
    // 0x8003E560: lw          $t6, 0x7764($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7764);
    // 0x8003E564: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8003E568: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003E56C: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8003E570: lui         $a2, 0x801C
    ctx->r6 = S32(0X801C << 16);
    // 0x8003E574: lui         $a3, 0x801C
    ctx->r7 = S32(0X801C << 16);
    // 0x8003E578: lw          $a3, 0x7760($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X7760);
    // 0x8003E57C: lw          $a2, 0x775C($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X775C);
    // 0x8003E580: lw          $a1, 0x7758($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7758);
    // 0x8003E584: lw          $a0, 0x7754($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7754);
    // 0x8003E588: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8003E58C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8003E590: jal         0x8000C260
    // 0x8003E594: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_8000C260_CE60(rdram, ctx);
        goto after_0;
    // 0x8003E594: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x8003E598: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x8003E59C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003E5A0: jal         0x8003E5EC
    // 0x8003E5A4: sw          $t9, 0x77E0($at)
    MEM_W(0X77E0, ctx->r1) = ctx->r25;
    func_8003E5EC_3F1EC(rdram, ctx);
        goto after_1;
    // 0x8003E5A4: sw          $t9, 0x77E0($at)
    MEM_W(0X77E0, ctx->r1) = ctx->r25;
    after_1:
    // 0x8003E5A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8003E5AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8003E5B0: jr          $ra
    // 0x8003E5B4: nop

    TRACE_RETURN()
    return;
    // 0x8003E5B4: nop

;}
RECOMP_FUNC void __osPfsReleasePages(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80045E60: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80045E64: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80045E68: lbu         $t8, 0x33($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X33);
    // 0x80045E6C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80045E70: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80045E74: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x80045E78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80045E7C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80045E80: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x80045E84: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80045E88: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x80045E8C: lhu         $at, 0x0($t0)
    ctx->r1 = MEM_HU(ctx->r8, 0X0);
    // 0x80045E90: addiu       $t6, $sp, 0x24
    ctx->r14 = ADD32(ctx->r29, 0X24);
    // 0x80045E94: sh          $at, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r1;
    // 0x80045E98: lhu         $t4, 0x24($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X24);
    // 0x80045E9C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80045EA0: beq         $t4, $at, L_80045ED0
    if (ctx->r12 == ctx->r1) {
        // 0x80045EA4: nop
    
            goto L_80045ED0;
    }
    // 0x80045EA4: nop

    // 0x80045EA8: lbu         $t5, 0x24($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X24);
    // 0x80045EAC: blez        $t5, L_80045EC0
    if (SIGNED(ctx->r13) <= 0) {
        // 0x80045EB0: nop
    
            goto L_80045EC0;
    }
    // 0x80045EB0: nop

    // 0x80045EB4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80045EB8: b           L_80045EF4
    // 0x80045EBC: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
        goto L_80045EF4;
    // 0x80045EBC: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
L_80045EC0:
    // 0x80045EC0: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80045EC4: lw          $t9, 0x60($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X60);
    // 0x80045EC8: b           L_80045EF4
    // 0x80045ECC: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
        goto L_80045EF4;
    // 0x80045ECC: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
L_80045ED0:
    // 0x80045ED0: lbu         $t2, 0x3B($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X3B);
    // 0x80045ED4: blez        $t2, L_80045EE8
    if (SIGNED(ctx->r10) <= 0) {
        // 0x80045ED8: nop
    
            goto L_80045EE8;
    }
    // 0x80045ED8: nop

    // 0x80045EDC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80045EE0: b           L_80045EF4
    // 0x80045EE4: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
        goto L_80045EF4;
    // 0x80045EE4: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
L_80045EE8:
    // 0x80045EE8: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80045EEC: lw          $t0, 0x60($t6)
    ctx->r8 = MEM_W(ctx->r14, 0X60);
    // 0x80045EF0: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
L_80045EF4:
    // 0x80045EF4: lbu         $t3, 0x25($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X25);
    // 0x80045EF8: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x80045EFC: slt         $at, $t3, $t4
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x80045F00: beq         $at, $zero, L_80045F20
    if (ctx->r1 == 0) {
        // 0x80045F04: nop
    
            goto L_80045F20;
    }
    // 0x80045F04: nop

    // 0x80045F08: lhu         $t5, 0x24($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X24);
    // 0x80045F0C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80045F10: beq         $t5, $at, L_80045F20
    if (ctx->r13 == ctx->r1) {
        // 0x80045F14: nop
    
            goto L_80045F20;
    }
    // 0x80045F14: nop

    // 0x80045F18: b           L_80046098
    // 0x80045F1C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_80046098;
    // 0x80045F1C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80045F20:
    // 0x80045F20: addiu       $t7, $sp, 0x24
    ctx->r15 = ADD32(ctx->r29, 0X24);
    // 0x80045F24: lhu         $at, 0x0($t7)
    ctx->r1 = MEM_HU(ctx->r15, 0X0);
    // 0x80045F28: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80045F2C: sh          $at, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r1;
    // 0x80045F30: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x80045F34: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80045F38: bne         $t1, $at, L_80045F58
    if (ctx->r9 != ctx->r1) {
        // 0x80045F3C: nop
    
            goto L_80045F58;
    }
    // 0x80045F3C: nop

    // 0x80045F40: lbu         $t3, 0x33($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X33);
    // 0x80045F44: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80045F48: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x80045F4C: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x80045F50: addu        $t5, $t0, $t4
    ctx->r13 = ADD32(ctx->r8, ctx->r12);
    // 0x80045F54: sh          $t6, 0x0($t5)
    MEM_H(0X0, ctx->r13) = ctx->r14;
L_80045F58:
    // 0x80045F58: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80045F5C: lbu         $a1, 0x33($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X33);
    // 0x80045F60: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x80045F64: jal         0x800460A8
    // 0x80045F68: lbu         $a3, 0x3B($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X3B);
    __osBlockSum(rdram, ctx);
        goto after_0;
    // 0x80045F68: lbu         $a3, 0x3B($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X3B);
    after_0:
    // 0x80045F6C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80045F70: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80045F74: beq         $t9, $zero, L_80045F84
    if (ctx->r25 == 0) {
        // 0x80045F78: nop
    
            goto L_80045F84;
    }
    // 0x80045F78: nop

    // 0x80045F7C: b           L_80046098
    // 0x80045F80: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
        goto L_80046098;
    // 0x80045F80: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
L_80045F84:
    // 0x80045F84: lhu         $t8, 0x24($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X24);
    // 0x80045F88: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80045F8C: bne         $t8, $at, L_80045F9C
    if (ctx->r24 != ctx->r1) {
        // 0x80045F90: nop
    
            goto L_80045F9C;
    }
    // 0x80045F90: nop

    // 0x80045F94: b           L_80046098
    // 0x80045F98: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80046098;
    // 0x80045F98: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80045F9C:
    // 0x80045F9C: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80045FA0: lhu         $t7, 0x24($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X24);
    // 0x80045FA4: lw          $t1, 0x60($t2)
    ctx->r9 = MEM_W(ctx->r10, 0X60);
    // 0x80045FA8: slt         $at, $t7, $t1
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80045FAC: bne         $at, $zero, L_80046044
    if (ctx->r1 != 0) {
        // 0x80045FB0: nop
    
            goto L_80046044;
    }
    // 0x80045FB0: nop

L_80045FB4:
    // 0x80045FB4: lbu         $t6, 0x25($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X25);
    // 0x80045FB8: lhu         $t3, 0x24($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X24);
    // 0x80045FBC: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80045FC0: sll         $t5, $t6, 1
    ctx->r13 = S32(ctx->r14 << 1);
    // 0x80045FC4: sh          $t3, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r11;
    // 0x80045FC8: addu        $t9, $t4, $t5
    ctx->r25 = ADD32(ctx->r12, ctx->r13);
    // 0x80045FCC: lhu         $at, 0x0($t9)
    ctx->r1 = MEM_HU(ctx->r25, 0X0);
    // 0x80045FD0: addiu       $t0, $sp, 0x24
    ctx->r8 = ADD32(ctx->r29, 0X24);
    // 0x80045FD4: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x80045FD8: sh          $at, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r1;
    // 0x80045FDC: lbu         $t3, 0x21($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X21);
    // 0x80045FE0: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80045FE4: sll         $t6, $t3, 1
    ctx->r14 = S32(ctx->r11 << 1);
    // 0x80045FE8: addu        $t4, $t1, $t6
    ctx->r12 = ADD32(ctx->r9, ctx->r14);
    // 0x80045FEC: sh          $t7, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r15;
    // 0x80045FF0: lbu         $a3, 0x3B($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X3B);
    // 0x80045FF4: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x80045FF8: lbu         $a1, 0x21($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X21);
    // 0x80045FFC: jal         0x800460A8
    // 0x80046000: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    __osBlockSum(rdram, ctx);
        goto after_1;
    // 0x80046000: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_1:
    // 0x80046004: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80046008: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8004600C: beq         $t5, $zero, L_8004601C
    if (ctx->r13 == 0) {
        // 0x80046010: nop
    
            goto L_8004601C;
    }
    // 0x80046010: nop

    // 0x80046014: b           L_80046098
    // 0x80046018: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
        goto L_80046098;
    // 0x80046018: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
L_8004601C:
    // 0x8004601C: lbu         $t8, 0x24($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X24);
    // 0x80046020: lbu         $t0, 0x3B($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X3B);
    // 0x80046024: bne         $t8, $t0, L_80046044
    if (ctx->r24 != ctx->r8) {
        // 0x80046028: nop
    
            goto L_80046044;
    }
    // 0x80046028: nop

    // 0x8004602C: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80046030: lhu         $t9, 0x24($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X24);
    // 0x80046034: lw          $t3, 0x60($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X60);
    // 0x80046038: slt         $at, $t9, $t3
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x8004603C: beq         $at, $zero, L_80045FB4
    if (ctx->r1 == 0) {
        // 0x80046040: nop
    
            goto L_80045FB4;
    }
    // 0x80046040: nop

L_80046044:
    // 0x80046044: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80046048: lhu         $t1, 0x24($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X24);
    // 0x8004604C: lw          $t7, 0x60($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X60);
    // 0x80046050: slt         $at, $t1, $t7
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80046054: bne         $at, $zero, L_80046084
    if (ctx->r1 != 0) {
        // 0x80046058: nop
    
            goto L_80046084;
    }
    // 0x80046058: nop

    // 0x8004605C: lbu         $t4, 0x24($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X24);
    // 0x80046060: lbu         $t5, 0x3B($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X3B);
    // 0x80046064: bne         $t4, $t5, L_80046084
    if (ctx->r12 != ctx->r13) {
        // 0x80046068: nop
    
            goto L_80046084;
    }
    // 0x80046068: nop

    // 0x8004606C: lbu         $t2, 0x25($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X25);
    // 0x80046070: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80046074: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x80046078: sll         $t9, $t2, 1
    ctx->r25 = S32(ctx->r10 << 1);
    // 0x8004607C: addu        $t3, $t0, $t9
    ctx->r11 = ADD32(ctx->r8, ctx->r25);
    // 0x80046080: sh          $t8, 0x0($t3)
    MEM_H(0X0, ctx->r11) = ctx->r24;
L_80046084:
    // 0x80046084: addiu       $t1, $sp, 0x24
    ctx->r9 = ADD32(ctx->r29, 0X24);
    // 0x80046088: lhu         $at, 0x0($t1)
    ctx->r1 = MEM_HU(ctx->r9, 0X0);
    // 0x8004608C: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80046090: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80046094: sh          $at, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r1;
L_80046098:
    // 0x80046098: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004609C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800460A0: jr          $ra
    // 0x800460A4: nop

    TRACE_RETURN()
    return;
    // 0x800460A4: nop

;}
RECOMP_FUNC void func_80035964_36564(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80035964: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80035968: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x8003596C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80035970: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80035974: beq         $a0, $zero, L_80035A48
    if (ctx->r4 == 0) {
        // 0x80035978: sw          $a0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r4;
            goto L_80035A48;
    }
    // 0x80035978: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8003597C: lw          $a0, 0x1C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1C);
    // 0x80035980: beql        $a0, $zero, L_80035A4C
    if (ctx->r4 == 0) {
        // 0x80035984: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80035A4C;
    }
    goto skip_0;
    // 0x80035984: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80035988: sw          $a1, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r5;
    // 0x8003598C: sw          $a2, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r6;
    // 0x80035990: swc1        $f12, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f12.u32l;
    // 0x80035994: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80035998: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x8003599C: lui         $t2, 0xC
    ctx->r10 = S32(0XC << 16);
    // 0x800359A0: swc1        $f4, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f4.u32l;
    // 0x800359A4: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800359A8: swc1        $f6, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f6.u32l;
    // 0x800359AC: lhu         $t6, 0x3A($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X3A);
    // 0x800359B0: sh          $t6, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r14;
    // 0x800359B4: lhu         $t7, 0x3E($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X3E);
    // 0x800359B8: sh          $t7, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r15;
    // 0x800359BC: lhu         $t8, 0x42($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X42);
    // 0x800359C0: sh          $t8, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r24;
    // 0x800359C4: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x800359C8: swc1        $f8, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f8.u32l;
    // 0x800359CC: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x800359D0: swc1        $f10, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f10.u32l;
    // 0x800359D4: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x800359D8: swc1        $f16, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f16.u32l;
    // 0x800359DC: lhu         $t9, 0x52($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X52);
    // 0x800359E0: sh          $t9, 0x34($a0)
    MEM_H(0X34, ctx->r4) = ctx->r25;
    // 0x800359E4: lhu         $t0, 0x56($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X56);
    // 0x800359E8: sh          $t0, 0x3C($a0)
    MEM_H(0X3C, ctx->r4) = ctx->r8;
    // 0x800359EC: lw          $t1, -0x3A38($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X3A38);
    // 0x800359F0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800359F4: lhu         $t2, 0x2D90($t2)
    ctx->r10 = MEM_HU(ctx->r10, 0X2D90);
    // 0x800359F8: sh          $zero, 0x4C($a0)
    MEM_H(0X4C, ctx->r4) = 0;
    // 0x800359FC: sh          $zero, 0x54($a0)
    MEM_H(0X54, ctx->r4) = 0;
    // 0x80035A00: sh          $zero, 0x5C($a0)
    MEM_H(0X5C, ctx->r4) = 0;
    // 0x80035A04: sh          $t2, 0x44($a0)
    MEM_H(0X44, ctx->r4) = ctx->r10;
    // 0x80035A08: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x80035A0C: jal         0x80014218
    // 0x80035A10: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_80014218_14E18(rdram, ctx);
        goto after_0;
    // 0x80035A10: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x80035A14: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80035A18: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x80035A1C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80035A20: sb          $zero, 0x64($a0)
    MEM_B(0X64, ctx->r4) = 0;
    // 0x80035A24: sb          $zero, 0x65($a0)
    MEM_B(0X65, ctx->r4) = 0;
    // 0x80035A28: sw          $zero, 0x74($a0)
    MEM_W(0X74, ctx->r4) = 0;
    // 0x80035A2C: sw          $zero, 0x78($a0)
    MEM_W(0X78, ctx->r4) = 0;
    // 0x80035A30: sb          $zero, 0x7C($a0)
    MEM_B(0X7C, ctx->r4) = 0;
    // 0x80035A34: sh          $zero, 0x7E($a0)
    MEM_H(0X7E, ctx->r4) = 0;
    // 0x80035A38: swc1        $f0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f0.u32l;
    // 0x80035A3C: swc1        $f0, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f0.u32l;
    // 0x80035A40: swc1        $f0, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f0.u32l;
    // 0x80035A44: swc1        $f0, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f0.u32l;
L_80035A48:
    // 0x80035A48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80035A4C:
    // 0x80035A4C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80035A50: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    // 0x80035A54: jr          $ra
    // 0x80035A58: nop

    TRACE_RETURN()
    return;
    // 0x80035A58: nop

;}
RECOMP_FUNC void func_80002DE4_39E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80002DE4: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80002DE8: addiu       $v1, $v1, -0x3340
    ctx->r3 = ADD32(ctx->r3, -0X3340);
    // 0x80002DEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80002DF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80002DF4: addiu       $v0, $v1, 0x7FFF
    ctx->r2 = ADD32(ctx->r3, 0X7FFF);
    // 0x80002DF8: lbu         $v0, 0x2DD7($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2DD7);
    // 0x80002DFC: addiu       $t6, $v1, 0x7FFF
    ctx->r14 = ADD32(ctx->r3, 0X7FFF);
    // 0x80002E00: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x80002E04: bne         $v0, $zero, L_80002E2C
    if (ctx->r2 != 0) {
        // 0x80002E08: nop
    
            goto L_80002E2C;
    }
    // 0x80002E08: nop

    // 0x80002E0C: lh          $t6, 0x2DB7($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X2DB7);
    // 0x80002E10: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80002E14: addiu       $at, $v1, 0x7FFF
    ctx->r1 = ADD32(ctx->r3, 0X7FFF);
    // 0x80002E18: bne         $t6, $zero, L_80002E2C
    if (ctx->r14 != 0) {
        // 0x80002E1C: addiu       $t8, $v0, 0x1
        ctx->r24 = ADD32(ctx->r2, 0X1);
            goto L_80002E2C;
    }
    // 0x80002E1C: addiu       $t8, $v0, 0x1
    ctx->r24 = ADD32(ctx->r2, 0X1);
    // 0x80002E20: sh          $t7, 0x2DB7($at)
    MEM_H(0X2DB7, ctx->r1) = ctx->r15;
    // 0x80002E24: b           L_80002E60
    // 0x80002E28: sb          $t8, 0x2DD7($at)
    MEM_B(0X2DD7, ctx->r1) = ctx->r24;
        goto L_80002E60;
    // 0x80002E28: sb          $t8, 0x2DD7($at)
    MEM_B(0X2DD7, ctx->r1) = ctx->r24;
L_80002E2C:
    // 0x80002E2C: lw          $t9, 0x48D8($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X48D8);
    // 0x80002E30: bnel        $t9, $zero, L_80002E64
    if (ctx->r25 != 0) {
        // 0x80002E34: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80002E64;
    }
    goto skip_0;
    // 0x80002E34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80002E38: jal         0x8000B2A0
    // 0x80002E3C: nop

    func_8000B2A0_BEA0(rdram, ctx);
        goto after_0;
    // 0x80002E3C: nop

    after_0:
    // 0x80002E40: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80002E44: addiu       $v1, $v1, -0x3340
    ctx->r3 = ADD32(ctx->r3, -0X3340);
    // 0x80002E48: addiu       $at, $v1, 0x7FFF
    ctx->r1 = ADD32(ctx->r3, 0X7FFF);
    // 0x80002E4C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80002E50: jal         0x8000383C
    // 0x80002E54: sb          $t0, 0x2DD7($at)
    MEM_B(0X2DD7, ctx->r1) = ctx->r8;
    func_8000383C_443C(rdram, ctx);
        goto after_1;
    // 0x80002E54: sb          $t0, 0x2DD7($at)
    MEM_B(0X2DD7, ctx->r1) = ctx->r8;
    after_1:
    // 0x80002E58: jal         0x80003728
    // 0x80002E5C: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    func_80003728_4328(rdram, ctx);
        goto after_2;
    // 0x80002E5C: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    after_2:
L_80002E60:
    // 0x80002E60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80002E64:
    // 0x80002E64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80002E68: jr          $ra
    // 0x80002E6C: nop

    TRACE_RETURN()
    return;
    // 0x80002E6C: nop

;}
RECOMP_FUNC void func_80004170_4D70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80004170: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80004174: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80004178: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8000417C: lui         $a1, 0xC
    ctx->r5 = S32(0XC << 16);
    // 0x80004180: ori         $a1, $a1, 0xF908
    ctx->r5 = ctx->r5 | 0XF908;
    // 0x80004184: jal         0x800041E0
    // 0x80004188: addiu       $a0, $a0, -0x3340
    ctx->r4 = ADD32(ctx->r4, -0X3340);
    func_800041E0_4DE0(rdram, ctx);
        goto after_0;
    // 0x80004188: addiu       $a0, $a0, -0x3340
    ctx->r4 = ADD32(ctx->r4, -0X3340);
    after_0:
    // 0x8000418C: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x80004190: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80004194: addiu       $v0, $v0, -0x3A38
    ctx->r2 = ADD32(ctx->r2, -0X3A38);
    // 0x80004198: addiu       $t6, $t6, -0x3340
    ctx->r14 = ADD32(ctx->r14, -0X3340);
    // 0x8000419C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x800041A0: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800041A4: sb          $zero, -0x3A2C($at)
    MEM_B(-0X3A2C, ctx->r1) = 0;
    // 0x800041A8: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x800041AC: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x800041B0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800041B4: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800041B8: sh          $t7, -0x5240($at)
    MEM_H(-0X5240, ctx->r1) = ctx->r15;
    // 0x800041BC: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x800041C0: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x800041C4: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x800041C8: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800041CC: sh          $t9, -0x523E($at)
    MEM_H(-0X523E, ctx->r1) = ctx->r25;
    // 0x800041D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800041D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800041D8: jr          $ra
    // 0x800041DC: nop

    TRACE_RETURN()
    return;
    // 0x800041DC: nop

;}
RECOMP_FUNC void osSyncPrintf(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800408E0: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800408E4: sw          $a0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r4;
    // 0x800408E8: sw          $a1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r5;
    // 0x800408EC: sw          $a2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r6;
    // 0x800408F0: sw          $a3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r7;
    // 0x800408F4: jr          $ra
    // 0x800408F8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x800408F8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80033024_33C24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80033024: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80033028: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8003302C: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80033030: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80033034: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80033038: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8003303C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80033040: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80033044: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80033048: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8003304C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80033050: lhu         $t6, 0x20($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X20);
    // 0x80033054: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x80033058: or          $s7, $a1, $zero
    ctx->r23 = ctx->r5 | 0;
    // 0x8003305C: beq         $a0, $zero, L_800333D4
    if (ctx->r4 == 0) {
        // 0x80033060: sh          $t6, 0x42($sp)
        MEM_H(0X42, ctx->r29) = ctx->r14;
            goto L_800333D4;
    }
    // 0x80033060: sh          $t6, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r14;
    // 0x80033064: lui         $fp, 0x8017
    ctx->r30 = S32(0X8017 << 16);
    // 0x80033068: lui         $s6, 0x8017
    ctx->r22 = S32(0X8017 << 16);
    // 0x8003306C: addiu       $s6, $s6, -0x7070
    ctx->r22 = ADD32(ctx->r22, -0X7070);
    // 0x80033070: addiu       $fp, $fp, -0x7090
    ctx->r30 = ADD32(ctx->r30, -0X7090);
    // 0x80033074: lw          $s4, 0x18($s3)
    ctx->r20 = MEM_W(ctx->r19, 0X18);
L_80033078:
    // 0x80033078: beql        $s4, $zero, L_800333B0
    if (ctx->r20 == 0) {
        // 0x8003307C: lw          $s3, 0x0($s3)
        ctx->r19 = MEM_W(ctx->r19, 0X0);
            goto L_800333B0;
    }
    goto skip_0;
    // 0x8003307C: lw          $s3, 0x0($s3)
    ctx->r19 = MEM_W(ctx->r19, 0X0);
    skip_0:
    // 0x80033080: lbu         $t7, 0x4($s4)
    ctx->r15 = MEM_BU(ctx->r20, 0X4);
    // 0x80033084: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80033088: bnel        $t7, $at, L_800333B0
    if (ctx->r15 != ctx->r1) {
        // 0x8003308C: lw          $s3, 0x0($s3)
        ctx->r19 = MEM_W(ctx->r19, 0X0);
            goto L_800333B0;
    }
    goto skip_1;
    // 0x8003308C: lw          $s3, 0x0($s3)
    ctx->r19 = MEM_W(ctx->r19, 0X0);
    skip_1:
    // 0x80033090: lw          $a1, 0x48($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X48);
    // 0x80033094: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80033098: beql        $a1, $zero, L_800333B0
    if (ctx->r5 == 0) {
        // 0x8003309C: lw          $s3, 0x0($s3)
        ctx->r19 = MEM_W(ctx->r19, 0X0);
            goto L_800333B0;
    }
    goto skip_2;
    // 0x8003309C: lw          $s3, 0x0($s3)
    ctx->r19 = MEM_W(ctx->r19, 0X0);
    skip_2:
    // 0x800330A0: bnel        $a1, $at, L_80033148
    if (ctx->r5 != ctx->r1) {
        // 0x800330A4: lui         $at, 0x8FFF
        ctx->r1 = S32(0X8FFF << 16);
            goto L_80033148;
    }
    goto skip_3;
    // 0x800330A4: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    skip_3:
    // 0x800330A8: lw          $t8, 0x38($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X38);
    // 0x800330AC: bnel        $t8, $zero, L_800333B0
    if (ctx->r24 != 0) {
        // 0x800330B0: lw          $s3, 0x0($s3)
        ctx->r19 = MEM_W(ctx->r19, 0X0);
            goto L_800333B0;
    }
    goto skip_4;
    // 0x800330B0: lw          $s3, 0x0($s3)
    ctx->r19 = MEM_W(ctx->r19, 0X0);
    skip_4:
    // 0x800330B4: lbu         $t9, 0x30($s3)
    ctx->r25 = MEM_BU(ctx->r19, 0X30);
    // 0x800330B8: andi        $t0, $t9, 0x2
    ctx->r8 = ctx->r25 & 0X2;
    // 0x800330BC: beql        $t0, $zero, L_800333B0
    if (ctx->r8 == 0) {
        // 0x800330C0: lw          $s3, 0x0($s3)
        ctx->r19 = MEM_W(ctx->r19, 0X0);
            goto L_800333B0;
    }
    goto skip_5;
    // 0x800330C0: lw          $s3, 0x0($s3)
    ctx->r19 = MEM_W(ctx->r19, 0X0);
    skip_5:
    // 0x800330C4: lhu         $t1, 0x4E($s3)
    ctx->r9 = MEM_HU(ctx->r19, 0X4E);
    // 0x800330C8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800330CC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800330D0: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x800330D4: bgez        $t1, L_800330E8
    if (SIGNED(ctx->r9) >= 0) {
        // 0x800330D8: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_800330E8;
    }
    // 0x800330D8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800330DC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800330E0: nop

    // 0x800330E4: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_800330E8:
    // 0x800330E8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800330EC: swc1        $f6, -0x7074($at)
    MEM_W(-0X7074, ctx->r1) = ctx->f6.u32l;
    // 0x800330F0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800330F4: swc1        $f10, -0x7080($at)
    MEM_W(-0X7080, ctx->r1) = ctx->f10.u32l;
    // 0x800330F8: lh          $t2, 0x50($s3)
    ctx->r10 = MEM_H(ctx->r19, 0X50);
    // 0x800330FC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80033100: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80033104: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x80033108: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8003310C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80033110: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80033114: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    // 0x80033118: swc1        $f18, -0x707C($at)
    MEM_W(-0X707C, ctx->r1) = ctx->f18.u32l;
    // 0x8003311C: lh          $t3, 0x52($s3)
    ctx->r11 = MEM_H(ctx->r19, 0X52);
    // 0x80033120: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80033124: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x80033128: nop

    // 0x8003312C: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80033130: swc1        $f8, -0x7078($at)
    MEM_W(-0X7078, ctx->r1) = ctx->f8.u32l;
    // 0x80033134: jal         0x80033404
    // 0x80033138: sb          $t4, 0x0($s6)
    MEM_B(0X0, ctx->r22) = ctx->r12;
    func_80033404_34004(rdram, ctx);
        goto after_0;
    // 0x80033138: sb          $t4, 0x0($s6)
    MEM_B(0X0, ctx->r22) = ctx->r12;
    after_0:
    // 0x8003313C: b           L_800333B0
    // 0x80033140: lw          $s3, 0x0($s3)
    ctx->r19 = MEM_W(ctx->r19, 0X0);
        goto L_800333B0;
    // 0x80033140: lw          $s3, 0x0($s3)
    ctx->r19 = MEM_W(ctx->r19, 0X0);
    // 0x80033144: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
L_80033148:
    // 0x80033148: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x8003314C: and         $t5, $a1, $at
    ctx->r13 = ctx->r5 & ctx->r1;
    // 0x80033150: sw          $t5, 0x0($fp)
    MEM_W(0X0, ctx->r30) = ctx->r13;
    // 0x80033154: beq         $t5, $zero, L_800331C4
    if (ctx->r13 == 0) {
        // 0x80033158: or          $v0, $t5, $zero
        ctx->r2 = ctx->r13 | 0;
            goto L_800331C4;
    }
    // 0x80033158: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
    // 0x8003315C: sll         $t6, $t5, 0
    ctx->r14 = S32(ctx->r13 << 0);
    // 0x80033160: bgez        $t6, L_80033170
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80033164: lui         $at, 0x800
        ctx->r1 = S32(0X800 << 16);
            goto L_80033170;
    }
    // 0x80033164: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x80033168: b           L_800331C8
    // 0x8003316C: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
        goto L_800331C8;
    // 0x8003316C: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
L_80033170:
    // 0x80033170: ori         $at, $at, 0x1
    ctx->r1 = ctx->r1 | 0X1;
    // 0x80033174: sltu        $at, $v0, $at
    ctx->r1 = ctx->r2 < ctx->r1 ? 1 : 0;
    // 0x80033178: bne         $at, $zero, L_800331A4
    if (ctx->r1 != 0) {
        // 0x8003317C: srl         $t7, $v0, 24
        ctx->r15 = S32(U32(ctx->r2) >> 24);
            goto L_800331A4;
    }
    // 0x8003317C: srl         $t7, $v0, 24
    ctx->r15 = S32(U32(ctx->r2) >> 24);
    // 0x80033180: andi        $t8, $t7, 0xF
    ctx->r24 = ctx->r15 & 0XF;
    // 0x80033184: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x80033188: addu        $t0, $s4, $t9
    ctx->r8 = ADD32(ctx->r20, ctx->r25);
    // 0x8003318C: lui         $at, 0x80FF
    ctx->r1 = S32(0X80FF << 16);
    // 0x80033190: lw          $t1, -0x8($t0)
    ctx->r9 = MEM_W(ctx->r8, -0X8);
    // 0x80033194: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80033198: and         $t2, $v0, $at
    ctx->r10 = ctx->r2 & ctx->r1;
    // 0x8003319C: b           L_800331B8
    // 0x800331A0: addu        $a0, $t1, $t2
    ctx->r4 = ADD32(ctx->r9, ctx->r10);
        goto L_800331B8;
    // 0x800331A0: addu        $a0, $t1, $t2
    ctx->r4 = ADD32(ctx->r9, ctx->r10);
L_800331A4:
    // 0x800331A4: lw          $t3, 0x38($s4)
    ctx->r11 = MEM_W(ctx->r20, 0X38);
    // 0x800331A8: lui         $at, 0x80FF
    ctx->r1 = S32(0X80FF << 16);
    // 0x800331AC: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x800331B0: and         $t4, $v0, $at
    ctx->r12 = ctx->r2 & ctx->r1;
    // 0x800331B4: addu        $a0, $t3, $t4
    ctx->r4 = ADD32(ctx->r11, ctx->r12);
L_800331B8:
    // 0x800331B8: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x800331BC: b           L_800331C8
    // 0x800331C0: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
        goto L_800331C8;
    // 0x800331C0: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
L_800331C4:
    // 0x800331C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_800331C8:
    // 0x800331C8: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x800331CC: sltu        $at, $a1, $at
    ctx->r1 = ctx->r5 < ctx->r1 ? 1 : 0;
    // 0x800331D0: beq         $at, $zero, L_800331FC
    if (ctx->r1 == 0) {
        // 0x800331D4: lhu         $t5, 0x42($sp)
        ctx->r13 = MEM_HU(ctx->r29, 0X42);
            goto L_800331FC;
    }
    // 0x800331D4: lhu         $t5, 0x42($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X42);
    // 0x800331D8: lw          $s3, 0x0($s3)
    ctx->r19 = MEM_W(ctx->r19, 0X0);
    // 0x800331DC: beql        $s3, $zero, L_800333D8
    if (ctx->r19 == 0) {
        // 0x800331E0: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_800333D8;
    }
    goto skip_6;
    // 0x800331E0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_6:
    // 0x800331E4: lhu         $t6, 0x20($s3)
    ctx->r14 = MEM_HU(ctx->r19, 0X20);
    // 0x800331E8: slt         $at, $t5, $t6
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x800331EC: bne         $at, $zero, L_800333CC
    if (ctx->r1 != 0) {
        // 0x800331F0: nop
    
            goto L_800333CC;
    }
    // 0x800331F0: nop

    // 0x800331F4: b           L_800333D8
    // 0x800331F8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_800333D8;
    // 0x800331F8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_800331FC:
    // 0x800331FC: lw          $t7, 0x38($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X38);
    // 0x80033200: bnel        $t7, $zero, L_800333B0
    if (ctx->r15 != 0) {
        // 0x80033204: lw          $s3, 0x0($s3)
        ctx->r19 = MEM_W(ctx->r19, 0X0);
            goto L_800333B0;
    }
    goto skip_7;
    // 0x80033204: lw          $s3, 0x0($s3)
    ctx->r19 = MEM_W(ctx->r19, 0X0);
    skip_7:
    // 0x80033208: lbu         $t8, 0x30($s3)
    ctx->r24 = MEM_BU(ctx->r19, 0X30);
    // 0x8003320C: andi        $t9, $t8, 0x2
    ctx->r25 = ctx->r24 & 0X2;
    // 0x80033210: beql        $t9, $zero, L_800333B0
    if (ctx->r25 == 0) {
        // 0x80033214: lw          $s3, 0x0($s3)
        ctx->r19 = MEM_W(ctx->r19, 0X0);
            goto L_800333B0;
    }
    goto skip_8;
    // 0x80033214: lw          $s3, 0x0($s3)
    ctx->r19 = MEM_W(ctx->r19, 0X0);
    skip_8:
    // 0x80033218: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x8003321C: beq         $v1, $zero, L_800333AC
    if (ctx->r3 == 0) {
        // 0x80033220: srl         $a2, $v1, 8
        ctx->r6 = S32(U32(ctx->r3) >> 8);
            goto L_800333AC;
    }
    // 0x80033220: srl         $a2, $v1, 8
    ctx->r6 = S32(U32(ctx->r3) >> 8);
    // 0x80033224: andi        $t1, $v1, 0xFF
    ctx->r9 = ctx->r3 & 0XFF;
    // 0x80033228: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x8003322C: andi        $s5, $a2, 0x7FFF
    ctx->r21 = ctx->r6 & 0X7FFF;
    // 0x80033230: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x80033234: bgez        $t1, L_8003324C
    if (SIGNED(ctx->r9) >= 0) {
        // 0x80033238: cvt.s.w     $f10, $f6
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
            goto L_8003324C;
    }
    // 0x80033238: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8003323C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80033240: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80033244: nop

    // 0x80033248: add.s       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f16.fl;
L_8003324C:
    // 0x8003324C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80033250: swc1        $f10, -0x7088($at)
    MEM_W(-0X7088, ctx->r1) = ctx->f10.u32l;
    // 0x80033254: lwc1        $f18, 0x28($s4)
    ctx->f18.u32l = MEM_W(ctx->r20, 0X28);
    // 0x80033258: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8003325C: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x80033260: swc1        $f18, -0x7084($at)
    MEM_W(-0X7084, ctx->r1) = ctx->f18.u32l;
    // 0x80033264: lw          $t2, 0x0($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X0);
    // 0x80033268: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8003326C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80033270: sw          $t2, 0x0($fp)
    MEM_W(0X0, ctx->r30) = ctx->r10;
    // 0x80033274: beq         $t2, $zero, L_800332E8
    if (ctx->r10 == 0) {
        // 0x80033278: or          $v0, $t2, $zero
        ctx->r2 = ctx->r10 | 0;
            goto L_800332E8;
    }
    // 0x80033278: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x8003327C: sll         $t3, $t2, 0
    ctx->r11 = S32(ctx->r10 << 0);
    // 0x80033280: bgez        $t3, L_80033290
    if (SIGNED(ctx->r11) >= 0) {
        // 0x80033284: lui         $at, 0x800
        ctx->r1 = S32(0X800 << 16);
            goto L_80033290;
    }
    // 0x80033284: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x80033288: b           L_800332DC
    // 0x8003328C: or          $v1, $t2, $zero
    ctx->r3 = ctx->r10 | 0;
        goto L_800332DC;
    // 0x8003328C: or          $v1, $t2, $zero
    ctx->r3 = ctx->r10 | 0;
L_80033290:
    // 0x80033290: ori         $at, $at, 0x1
    ctx->r1 = ctx->r1 | 0X1;
    // 0x80033294: sltu        $at, $v0, $at
    ctx->r1 = ctx->r2 < ctx->r1 ? 1 : 0;
    // 0x80033298: bne         $at, $zero, L_800332C4
    if (ctx->r1 != 0) {
        // 0x8003329C: srl         $t4, $v0, 24
        ctx->r12 = S32(U32(ctx->r2) >> 24);
            goto L_800332C4;
    }
    // 0x8003329C: srl         $t4, $v0, 24
    ctx->r12 = S32(U32(ctx->r2) >> 24);
    // 0x800332A0: andi        $t5, $t4, 0xF
    ctx->r13 = ctx->r12 & 0XF;
    // 0x800332A4: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x800332A8: addu        $t7, $s4, $t6
    ctx->r15 = ADD32(ctx->r20, ctx->r14);
    // 0x800332AC: lui         $at, 0x80FF
    ctx->r1 = S32(0X80FF << 16);
    // 0x800332B0: lw          $t8, -0x8($t7)
    ctx->r24 = MEM_W(ctx->r15, -0X8);
    // 0x800332B4: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x800332B8: and         $t9, $v0, $at
    ctx->r25 = ctx->r2 & ctx->r1;
    // 0x800332BC: b           L_800332D8
    // 0x800332C0: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
        goto L_800332D8;
    // 0x800332C0: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
L_800332C4:
    // 0x800332C4: lw          $t0, 0x38($s4)
    ctx->r8 = MEM_W(ctx->r20, 0X38);
    // 0x800332C8: lui         $at, 0x80FF
    ctx->r1 = S32(0X80FF << 16);
    // 0x800332CC: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x800332D0: and         $t1, $v0, $at
    ctx->r9 = ctx->r2 & ctx->r1;
    // 0x800332D4: addu        $a0, $t0, $t1
    ctx->r4 = ADD32(ctx->r8, ctx->r9);
L_800332D8:
    // 0x800332D8: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_800332DC:
    // 0x800332DC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800332E0: b           L_800332EC
    // 0x800332E4: sw          $v1, -0x708C($at)
    MEM_W(-0X708C, ctx->r1) = ctx->r3;
        goto L_800332EC;
    // 0x800332E4: sw          $v1, -0x708C($at)
    MEM_W(-0X708C, ctx->r1) = ctx->r3;
L_800332E8:
    // 0x800332E8: sw          $zero, -0x708C($at)
    MEM_W(-0X708C, ctx->r1) = 0;
L_800332EC:
    // 0x800332EC: lw          $t2, 0x4($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X4);
    // 0x800332F0: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x800332F4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x800332F8: sw          $t2, 0x0($fp)
    MEM_W(0X0, ctx->r30) = ctx->r10;
    // 0x800332FC: beq         $t2, $zero, L_8003336C
    if (ctx->r10 == 0) {
        // 0x80033300: or          $v0, $t2, $zero
        ctx->r2 = ctx->r10 | 0;
            goto L_8003336C;
    }
    // 0x80033300: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x80033304: sll         $t3, $t2, 0
    ctx->r11 = S32(ctx->r10 << 0);
    // 0x80033308: bgez        $t3, L_80033318
    if (SIGNED(ctx->r11) >= 0) {
        // 0x8003330C: lui         $at, 0x800
        ctx->r1 = S32(0X800 << 16);
            goto L_80033318;
    }
    // 0x8003330C: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x80033310: b           L_8003336C
    // 0x80033314: or          $s1, $t2, $zero
    ctx->r17 = ctx->r10 | 0;
        goto L_8003336C;
    // 0x80033314: or          $s1, $t2, $zero
    ctx->r17 = ctx->r10 | 0;
L_80033318:
    // 0x80033318: ori         $at, $at, 0x1
    ctx->r1 = ctx->r1 | 0X1;
    // 0x8003331C: sltu        $at, $v0, $at
    ctx->r1 = ctx->r2 < ctx->r1 ? 1 : 0;
    // 0x80033320: bne         $at, $zero, L_8003334C
    if (ctx->r1 != 0) {
        // 0x80033324: srl         $t4, $v0, 24
        ctx->r12 = S32(U32(ctx->r2) >> 24);
            goto L_8003334C;
    }
    // 0x80033324: srl         $t4, $v0, 24
    ctx->r12 = S32(U32(ctx->r2) >> 24);
    // 0x80033328: andi        $t5, $t4, 0xF
    ctx->r13 = ctx->r12 & 0XF;
    // 0x8003332C: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x80033330: addu        $t7, $s4, $t6
    ctx->r15 = ADD32(ctx->r20, ctx->r14);
    // 0x80033334: lui         $at, 0x80FF
    ctx->r1 = S32(0X80FF << 16);
    // 0x80033338: lw          $t8, -0x8($t7)
    ctx->r24 = MEM_W(ctx->r15, -0X8);
    // 0x8003333C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80033340: and         $t9, $v0, $at
    ctx->r25 = ctx->r2 & ctx->r1;
    // 0x80033344: b           L_80033360
    // 0x80033348: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
        goto L_80033360;
    // 0x80033348: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
L_8003334C:
    // 0x8003334C: lw          $t0, 0x38($s4)
    ctx->r8 = MEM_W(ctx->r20, 0X38);
    // 0x80033350: lui         $at, 0x80FF
    ctx->r1 = S32(0X80FF << 16);
    // 0x80033354: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80033358: and         $t1, $v0, $at
    ctx->r9 = ctx->r2 & ctx->r1;
    // 0x8003335C: addu        $a0, $t0, $t1
    ctx->r4 = ADD32(ctx->r8, ctx->r9);
L_80033360:
    // 0x80033360: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80033364: b           L_8003336C
    // 0x80033368: or          $s1, $v1, $zero
    ctx->r17 = ctx->r3 | 0;
        goto L_8003336C;
    // 0x80033368: or          $s1, $v1, $zero
    ctx->r17 = ctx->r3 | 0;
L_8003336C:
    // 0x8003336C: blez        $a2, L_800333AC
    if (SIGNED(ctx->r6) <= 0) {
        // 0x80033370: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_800333AC;
    }
    // 0x80033370: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80033374:
    // 0x80033374: jal         0x80033590
    // 0x80033378: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80033590_34190(rdram, ctx);
        goto after_1;
    // 0x80033378: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x8003337C: addiu       $t2, $s0, 0x1
    ctx->r10 = ADD32(ctx->r16, 0X1);
    // 0x80033380: sb          $t2, 0x0($s6)
    MEM_B(0X0, ctx->r22) = ctx->r10;
    // 0x80033384: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80033388: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8003338C: jal         0x80033404
    // 0x80033390: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    func_80033404_34004(rdram, ctx);
        goto after_2;
    // 0x80033390: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    after_2:
    // 0x80033394: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80033398: andi        $s0, $s2, 0xFFFF
    ctx->r16 = ctx->r18 & 0XFFFF;
    // 0x8003339C: slt         $at, $s0, $s5
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x800333A0: or          $s2, $s0, $zero
    ctx->r18 = ctx->r16 | 0;
    // 0x800333A4: bne         $at, $zero, L_80033374
    if (ctx->r1 != 0) {
        // 0x800333A8: addiu       $s1, $s1, 0x8
        ctx->r17 = ADD32(ctx->r17, 0X8);
            goto L_80033374;
    }
    // 0x800333A8: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
L_800333AC:
    // 0x800333AC: lw          $s3, 0x0($s3)
    ctx->r19 = MEM_W(ctx->r19, 0X0);
L_800333B0:
    // 0x800333B0: lhu         $t4, 0x42($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X42);
    // 0x800333B4: beql        $s3, $zero, L_800333D8
    if (ctx->r19 == 0) {
        // 0x800333B8: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_800333D8;
    }
    goto skip_9;
    // 0x800333B8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_9:
    // 0x800333BC: lhu         $t5, 0x20($s3)
    ctx->r13 = MEM_HU(ctx->r19, 0X20);
    // 0x800333C0: slt         $at, $t4, $t5
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x800333C4: beql        $at, $zero, L_800333D8
    if (ctx->r1 == 0) {
        // 0x800333C8: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_800333D8;
    }
    goto skip_10;
    // 0x800333C8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_10:
L_800333CC:
    // 0x800333CC: bnel        $s3, $zero, L_80033078
    if (ctx->r19 != 0) {
        // 0x800333D0: lw          $s4, 0x18($s3)
        ctx->r20 = MEM_W(ctx->r19, 0X18);
            goto L_80033078;
    }
    goto skip_11;
    // 0x800333D0: lw          $s4, 0x18($s3)
    ctx->r20 = MEM_W(ctx->r19, 0X18);
    skip_11:
L_800333D4:
    // 0x800333D4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_800333D8:
    // 0x800333D8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800333DC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800333E0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800333E4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800333E8: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800333EC: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x800333F0: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x800333F4: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x800333F8: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x800333FC: jr          $ra
    // 0x80033400: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x80033400: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_8001EEF4_1FAF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001EEF4: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8001EEF8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8001EEFC: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x8001EF00: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x8001EF04: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x8001EF08: bne         $a0, $zero, L_8001EF18
    if (ctx->r4 != 0) {
        // 0x8001EF0C: sw          $a3, 0x64($sp)
        MEM_W(0X64, ctx->r29) = ctx->r7;
            goto L_8001EF18;
    }
    // 0x8001EF0C: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x8001EF10: addiu       $t7, $sp, 0x54
    ctx->r15 = ADD32(ctx->r29, 0X54);
    // 0x8001EF14: sw          $t7, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r15;
L_8001EF18:
    // 0x8001EF18: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x8001EF1C: bne         $t8, $zero, L_8001EF28
    if (ctx->r24 != 0) {
        // 0x8001EF20: addiu       $t9, $sp, 0x50
        ctx->r25 = ADD32(ctx->r29, 0X50);
            goto L_8001EF28;
    }
    // 0x8001EF20: addiu       $t9, $sp, 0x50
    ctx->r25 = ADD32(ctx->r29, 0X50);
    // 0x8001EF24: sw          $t9, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r25;
L_8001EF28:
    // 0x8001EF28: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x8001EF2C: bne         $t0, $zero, L_8001EF38
    if (ctx->r8 != 0) {
        // 0x8001EF30: addiu       $t1, $sp, 0x4C
        ctx->r9 = ADD32(ctx->r29, 0X4C);
            goto L_8001EF38;
    }
    // 0x8001EF30: addiu       $t1, $sp, 0x4C
    ctx->r9 = ADD32(ctx->r29, 0X4C);
    // 0x8001EF34: sw          $t1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r9;
L_8001EF38:
    // 0x8001EF38: lw          $t2, 0x64($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X64);
    // 0x8001EF3C: bne         $t2, $zero, L_8001EF48
    if (ctx->r10 != 0) {
        // 0x8001EF40: addiu       $t3, $sp, 0x3E
        ctx->r11 = ADD32(ctx->r29, 0X3E);
            goto L_8001EF48;
    }
    // 0x8001EF40: addiu       $t3, $sp, 0x3E
    ctx->r11 = ADD32(ctx->r29, 0X3E);
    // 0x8001EF44: sw          $t3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r11;
L_8001EF48:
    // 0x8001EF48: lw          $t4, 0x68($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X68);
    // 0x8001EF4C: addiu       $t5, $sp, 0x3C
    ctx->r13 = ADD32(ctx->r29, 0X3C);
    // 0x8001EF50: bnel        $t4, $zero, L_8001EF60
    if (ctx->r12 != 0) {
        // 0x8001EF54: lw          $a2, 0x6C($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X6C);
            goto L_8001EF60;
    }
    goto skip_0;
    // 0x8001EF54: lw          $a2, 0x6C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X6C);
    skip_0:
    // 0x8001EF58: sw          $t5, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r13;
    // 0x8001EF5C: lw          $a2, 0x6C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X6C);
L_8001EF60:
    // 0x8001EF60: lw          $v1, 0x70($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X70);
    // 0x8001EF64: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    // 0x8001EF68: bne         $a2, $zero, L_8001EF74
    if (ctx->r6 != 0) {
        // 0x8001EF6C: lw          $a1, 0x78($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X78);
            goto L_8001EF74;
    }
    // 0x8001EF6C: lw          $a1, 0x78($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X78);
    // 0x8001EF70: addiu       $a2, $sp, 0x3A
    ctx->r6 = ADD32(ctx->r29, 0X3A);
L_8001EF74:
    // 0x8001EF74: bne         $v1, $zero, L_8001EF80
    if (ctx->r3 != 0) {
        // 0x8001EF78: lw          $t6, 0x64($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X64);
            goto L_8001EF80;
    }
    // 0x8001EF78: lw          $t6, 0x64($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X64);
    // 0x8001EF7C: addiu       $v1, $sp, 0x48
    ctx->r3 = ADD32(ctx->r29, 0X48);
L_8001EF80:
    // 0x8001EF80: bne         $a0, $zero, L_8001EF8C
    if (ctx->r4 != 0) {
        // 0x8001EF84: nop
    
            goto L_8001EF8C;
    }
    // 0x8001EF84: nop

    // 0x8001EF88: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
L_8001EF8C:
    // 0x8001EF8C: bnel        $a1, $zero, L_8001EF9C
    if (ctx->r5 != 0) {
        // 0x8001EF90: lhu         $t7, 0x0($t6)
        ctx->r15 = MEM_HU(ctx->r14, 0X0);
            goto L_8001EF9C;
    }
    goto skip_1;
    // 0x8001EF90: lhu         $t7, 0x0($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X0);
    skip_1:
    // 0x8001EF94: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x8001EF98: lhu         $t7, 0x0($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X0);
L_8001EF9C:
    // 0x8001EF9C: lw          $t8, 0x68($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X68);
    // 0x8001EFA0: lw          $v0, 0x7C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X7C);
    // 0x8001EFA4: sh          $t7, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r15;
    // 0x8001EFA8: lhu         $t9, 0x0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X0);
    // 0x8001EFAC: addiu       $t1, $zero, 0x200
    ctx->r9 = ADD32(0, 0X200);
    // 0x8001EFB0: sh          $t9, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r25;
    // 0x8001EFB4: lhu         $t0, 0x0($a2)
    ctx->r8 = MEM_HU(ctx->r6, 0X0);
    // 0x8001EFB8: sh          $t0, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r8;
    // 0x8001EFBC: sh          $t1, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r9;
    // 0x8001EFC0: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x8001EFC4: lwc1        $f4, 0x30($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X30);
    // 0x8001EFC8: swc1        $f4, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f4.u32l;
    // 0x8001EFCC: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x8001EFD0: lwc1        $f6, 0x34($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X34);
    // 0x8001EFD4: swc1        $f6, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f6.u32l;
    // 0x8001EFD8: lw          $t4, 0x60($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X60);
    // 0x8001EFDC: lwc1        $f8, 0x38($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X38);
    // 0x8001EFE0: swc1        $f8, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f8.u32l;
    // 0x8001EFE4: lwc1        $f12, 0x0($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8001EFE8: lwc1        $f14, 0x4($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8001EFEC: lwc1        $f2, 0x8($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8001EFF0: mul.s       $f10, $f12, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x8001EFF4: nop

    // 0x8001EFF8: mul.s       $f4, $f14, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x8001EFFC: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8001F000: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8001F004: add.s       $f0, $f8, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x8001F008: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x8001F00C: swc1        $f0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f0.u32l;
    // 0x8001F010: lwc1        $f10, 0x14($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8001F014: lwc1        $f18, 0x10($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8001F018: lwc1        $f16, 0x18($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X18);
    // 0x8001F01C: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x8001F020: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8001F024: mul.s       $f8, $f4, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x8001F028: nop

    // 0x8001F02C: mul.s       $f6, $f18, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x8001F030: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8001F034: mul.s       $f4, $f16, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x8001F038: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8001F03C: add.s       $f0, $f4, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x8001F040: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x8001F044: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    // 0x8001F048: lwc1        $f12, 0x20($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X20);
    // 0x8001F04C: lwc1        $f14, 0x24($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X24);
    // 0x8001F050: lwc1        $f2, 0x28($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X28);
    // 0x8001F054: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x8001F058: nop

    // 0x8001F05C: mul.s       $f8, $f14, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x8001F060: add.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8001F064: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8001F068: add.s       $f0, $f10, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8001F06C: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x8001F070: swc1        $f0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f0.u32l;
    // 0x8001F074: lwc1        $f16, 0x0($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8001F078: c.eq.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl == ctx->f16.fl;
    // 0x8001F07C: nop

    // 0x8001F080: bc1t        L_8001F0B4
    if (c1cs) {
        // 0x8001F084: nop
    
            goto L_8001F0B4;
    }
    // 0x8001F084: nop

    // 0x8001F088: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8001F08C: lwc1        $f10, 0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8001F090: div.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f16.fl);
    // 0x8001F094: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
    // 0x8001F098: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8001F09C: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8001F0A0: div.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f10.fl, ctx->f4.fl);
    // 0x8001F0A4: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
    // 0x8001F0A8: lwc1        $f10, 0x0($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8001F0AC: div.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8001F0B0: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
L_8001F0B4:
    // 0x8001F0B4: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8001F0B8: c.eq.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl == ctx->f0.fl;
    // 0x8001F0BC: nop

    // 0x8001F0C0: bc1tl       L_8001F0F8
    if (c1cs) {
        // 0x8001F0C4: lwc1        $f0, 0x0($a1)
        ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
            goto L_8001F0F8;
    }
    goto skip_2;
    // 0x8001F0C4: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    skip_2:
    // 0x8001F0C8: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8001F0CC: lwc1        $f10, 0x14($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8001F0D0: div.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8001F0D4: swc1        $f8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f8.u32l;
    // 0x8001F0D8: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8001F0DC: lwc1        $f8, 0x18($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X18);
    // 0x8001F0E0: div.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f10.fl, ctx->f4.fl);
    // 0x8001F0E4: swc1        $f6, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f6.u32l;
    // 0x8001F0E8: lwc1        $f10, 0x0($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8001F0EC: div.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8001F0F0: swc1        $f4, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f4.u32l;
    // 0x8001F0F4: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
L_8001F0F8:
    // 0x8001F0F8: c.eq.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl == ctx->f0.fl;
    // 0x8001F0FC: nop

    // 0x8001F100: bc1tl       L_8001F138
    if (c1cs) {
        // 0x8001F104: lwc1        $f14, 0x4($v0)
        ctx->f14.u32l = MEM_W(ctx->r2, 0X4);
            goto L_8001F138;
    }
    goto skip_3;
    // 0x8001F104: lwc1        $f14, 0x4($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X4);
    skip_3:
    // 0x8001F108: lwc1        $f6, 0x20($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X20);
    // 0x8001F10C: lwc1        $f10, 0x24($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X24);
    // 0x8001F110: div.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8001F114: swc1        $f8, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f8.u32l;
    // 0x8001F118: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8001F11C: lwc1        $f8, 0x28($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X28);
    // 0x8001F120: div.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f10.fl, ctx->f4.fl);
    // 0x8001F124: swc1        $f6, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f6.u32l;
    // 0x8001F128: lwc1        $f10, 0x0($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8001F12C: div.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8001F130: swc1        $f4, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f4.u32l;
    // 0x8001F134: lwc1        $f14, 0x4($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X4);
L_8001F138:
    // 0x8001F138: lwc1        $f12, 0x0($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8001F13C: sw          $a2, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r6;
    // 0x8001F140: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x8001F144: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8001F148: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x8001F14C: mul.s       $f8, $f12, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x8001F150: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x8001F154: add.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8001F158: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x8001F15C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8001F160: jal         0x8001F19C
    // 0x8001F164: nop

    func_8001F19C_1FD9C(rdram, ctx);
        goto after_0;
    // 0x8001F164: nop

    after_0:
    // 0x8001F168: lhu         $t5, 0x2E($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X2E);
    // 0x8001F16C: lhu         $t7, 0x30($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X30);
    // 0x8001F170: lw          $a2, 0x6C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X6C);
    // 0x8001F174: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x8001F178: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x8001F17C: lhu         $a3, 0x2C($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X2C);
    // 0x8001F180: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x8001F184: jal         0x8001F6C8
    // 0x8001F188: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    func_8001F6C8_202C8(rdram, ctx);
        goto after_1;
    // 0x8001F188: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_1:
    // 0x8001F18C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8001F190: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x8001F194: jr          $ra
    // 0x8001F198: nop

    TRACE_RETURN()
    return;
    // 0x8001F198: nop

;}
RECOMP_FUNC void func_8003CCFC_3D8FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003CCFC: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003CD00: addiu       $a0, $a0, 0x172C
    ctx->r4 = ADD32(ctx->r4, 0X172C);
    // 0x8003CD04: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x8003CD08: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003CD0C: lui         $t2, 0x801C
    ctx->r10 = S32(0X801C << 16);
    // 0x8003CD10: lbu         $t6, 0x0($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X0);
    // 0x8003CD14: addiu       $t8, $v1, 0x1
    ctx->r24 = ADD32(ctx->r3, 0X1);
    // 0x8003CD18: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x8003CD1C: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x8003CD20: beq         $t7, $zero, L_8003CD58
    if (ctx->r15 == 0) {
        // 0x8003CD24: nop
    
            goto L_8003CD58;
    }
    // 0x8003CD24: nop

    // 0x8003CD28: lw          $v0, 0x1728($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1728);
    // 0x8003CD2C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8003CD30: lbu         $t0, 0x2970($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X2970);
    // 0x8003CD34: lbu         $t9, 0x3($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X3);
    // 0x8003CD38: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8003CD3C: slt         $at, $t9, $t0
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8003CD40: beq         $at, $zero, L_8003CD50
    if (ctx->r1 == 0) {
        // 0x8003CD44: nop
    
            goto L_8003CD50;
    }
    // 0x8003CD44: nop

    // 0x8003CD48: jr          $ra
    // 0x8003CD4C: sb          $zero, 0xAC($v0)
    MEM_B(0XAC, ctx->r2) = 0;
    TRACE_RETURN()
    return;
    // 0x8003CD4C: sb          $zero, 0xAC($v0)
    MEM_B(0XAC, ctx->r2) = 0;
L_8003CD50:
    // 0x8003CD50: jr          $ra
    // 0x8003CD54: sb          $t1, 0xAC($v0)
    MEM_B(0XAC, ctx->r2) = ctx->r9;
    TRACE_RETURN()
    return;
    // 0x8003CD54: sb          $t1, 0xAC($v0)
    MEM_B(0XAC, ctx->r2) = ctx->r9;
L_8003CD58:
    // 0x8003CD58: lw          $t2, 0x1728($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X1728);
    // 0x8003CD5C: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8003CD60: lbu         $t4, 0x2970($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X2970);
    // 0x8003CD64: lbu         $t3, 0x3($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X3);
    // 0x8003CD68: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8003CD6C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8003CD70: beq         $t3, $t4, L_8003CD7C
    if (ctx->r11 == ctx->r12) {
        // 0x8003CD74: nop
    
            goto L_8003CD7C;
    }
    // 0x8003CD74: nop

    // 0x8003CD78: sb          $t5, 0x2971($at)
    MEM_B(0X2971, ctx->r1) = ctx->r13;
L_8003CD7C:
    // 0x8003CD7C: jr          $ra
    // 0x8003CD80: nop

    TRACE_RETURN()
    return;
    // 0x8003CD80: nop

;}
RECOMP_FUNC void func_8003E5B8_3F1B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003E5B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003E5BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003E5C0: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003E5C4: jal         0x8000C3A0
    // 0x8003E5C8: lw          $a0, 0x7754($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7754);
    func_8000C3A0_CFA0(rdram, ctx);
        goto after_0;
    // 0x8003E5C8: lw          $a0, 0x7754($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7754);
    after_0:
    // 0x8003E5CC: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x8003E5D0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003E5D4: jal         0x8003E620
    // 0x8003E5D8: sw          $t6, 0x77E0($at)
    MEM_W(0X77E0, ctx->r1) = ctx->r14;
    func_8003E620_3F220(rdram, ctx);
        goto after_1;
    // 0x8003E5D8: sw          $t6, 0x77E0($at)
    MEM_W(0X77E0, ctx->r1) = ctx->r14;
    after_1:
    // 0x8003E5DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003E5E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003E5E4: jr          $ra
    // 0x8003E5E8: nop

    TRACE_RETURN()
    return;
    // 0x8003E5E8: nop

;}
RECOMP_FUNC void func_80035B50_36750(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80035B50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80035B54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80035B58: jal         0x80035B88
    // 0x80035B5C: nop

    func_80035B88_36788(rdram, ctx);
        goto after_0;
    // 0x80035B5C: nop

    after_0:
    // 0x80035B60: jal         0x80035BF8
    // 0x80035B64: nop

    func_80035BF8_367F8(rdram, ctx);
        goto after_1;
    // 0x80035B64: nop

    after_1:
    // 0x80035B68: jal         0x80035C7C
    // 0x80035B6C: nop

    func_80035C7C_3687C(rdram, ctx);
        goto after_2;
    // 0x80035B6C: nop

    after_2:
    // 0x80035B70: jal         0x80035D00
    // 0x80035B74: nop

    func_80035D00_36900(rdram, ctx);
        goto after_3;
    // 0x80035B74: nop

    after_3:
    // 0x80035B78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80035B7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80035B80: jr          $ra
    // 0x80035B84: nop

    TRACE_RETURN()
    return;
    // 0x80035B84: nop

;}
RECOMP_FUNC void func_80035094_35C94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80035094: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80035098: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003509C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800350A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800350A4: jal         0x800362DC
    // 0x800350A8: lw          $a0, -0x254C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X254C);
    func_800362DC_36EDC(rdram, ctx);
        goto after_0;
    // 0x800350A8: lw          $a0, -0x254C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X254C);
    after_0:
    // 0x800350AC: jal         0x800350C4
    // 0x800350B0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800350C4_35CC4(rdram, ctx);
        goto after_1;
    // 0x800350B0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x800350B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800350B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800350BC: jr          $ra
    // 0x800350C0: nop

    TRACE_RETURN()
    return;
    // 0x800350C0: nop

;}
RECOMP_FUNC void func_8000F2EC_FEEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000F2EC: lui         $at, 0x43A0
    ctx->r1 = S32(0X43A0 << 16);
    // 0x8000F2F0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8000F2F4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8000F2F8: lui         $at, 0x4300
    ctx->r1 = S32(0X4300 << 16);
    // 0x8000F2FC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8000F300: div.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f12.fl, ctx->f4.fl);
    // 0x8000F304: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8000F308: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000F30C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8000F310: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x8000F314: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8000F318: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000F31C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8000F320: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8000F324: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8000F328: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x8000F32C: nop

    // 0x8000F330: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8000F334: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x8000F338: nop

    // 0x8000F33C: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x8000F340: beql        $v0, $zero, L_8000F390
    if (ctx->r2 == 0) {
        // 0x8000F344: mfc1        $v0, $f16
        ctx->r2 = (int32_t)ctx->f16.u32l;
            goto L_8000F390;
    }
    goto skip_0;
    // 0x8000F344: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    skip_0:
    // 0x8000F348: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8000F34C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8000F350: sub.s       $f16, $f10, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8000F354: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x8000F358: nop

    // 0x8000F35C: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8000F360: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x8000F364: nop

    // 0x8000F368: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x8000F36C: bne         $v0, $zero, L_8000F384
    if (ctx->r2 != 0) {
        // 0x8000F370: nop
    
            goto L_8000F384;
    }
    // 0x8000F370: nop

    // 0x8000F374: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x8000F378: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8000F37C: b           L_8000F39C
    // 0x8000F380: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
        goto L_8000F39C;
    // 0x8000F380: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
L_8000F384:
    // 0x8000F384: b           L_8000F39C
    // 0x8000F388: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8000F39C;
    // 0x8000F388: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8000F38C: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
L_8000F390:
    // 0x8000F390: nop

    // 0x8000F394: bltz        $v0, L_8000F384
    if (SIGNED(ctx->r2) < 0) {
        // 0x8000F398: nop
    
            goto L_8000F384;
    }
    // 0x8000F398: nop

L_8000F39C:
    // 0x8000F39C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8000F3A0: andi        $t8, $v0, 0xFFFF
    ctx->r24 = ctx->r2 & 0XFFFF;
    // 0x8000F3A4: bgtz        $t8, L_8000F3B0
    if (SIGNED(ctx->r24) > 0) {
        // 0x8000F3A8: andi        $v1, $v0, 0xFFFF
        ctx->r3 = ctx->r2 & 0XFFFF;
            goto L_8000F3B0;
    }
    // 0x8000F3A8: andi        $v1, $v0, 0xFFFF
    ctx->r3 = ctx->r2 & 0XFFFF;
    // 0x8000F3AC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_8000F3B0:
    // 0x8000F3B0: slti        $at, $v1, 0x80
    ctx->r1 = SIGNED(ctx->r3) < 0X80 ? 1 : 0;
    // 0x8000F3B4: bne         $at, $zero, L_8000F3C0
    if (ctx->r1 != 0) {
        // 0x8000F3B8: nop
    
            goto L_8000F3C0;
    }
    // 0x8000F3B8: nop

    // 0x8000F3BC: addiu       $v1, $zero, 0x7F
    ctx->r3 = ADD32(0, 0X7F);
L_8000F3C0:
    // 0x8000F3C0: jal         0x80038BF8
    // 0x8000F3C4: andi        $a1, $v1, 0xFF
    ctx->r5 = ctx->r3 & 0XFF;
    func_80038BF8_397F8(rdram, ctx);
        goto after_0;
    // 0x8000F3C4: andi        $a1, $v1, 0xFF
    ctx->r5 = ctx->r3 & 0XFF;
    after_0:
    // 0x8000F3C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000F3CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000F3D0: jr          $ra
    // 0x8000F3D4: nop

    TRACE_RETURN()
    return;
    // 0x8000F3D4: nop

;}
RECOMP_FUNC void func_8003266C_3326C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003266C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80032670: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80032674: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x80032678: lui         $t7, 0x4
    ctx->r15 = S32(0X4 << 16);
    // 0x8003267C: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80032680: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x80032684: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x80032688: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x8003268C: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80032690: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80032694: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x80032698: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x8003269C: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x800326A0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800326A4: lbu         $t7, -0x521C($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X521C);
    // 0x800326A8: mtc1        $a2, $f24
    ctx->f24.u32l = ctx->r6;
    // 0x800326AC: mov.s       $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    ctx->f20.fl = ctx->f12.fl;
    // 0x800326B0: slti        $at, $t7, 0x4
    ctx->r1 = SIGNED(ctx->r15) < 0X4 ? 1 : 0;
    // 0x800326B4: bne         $at, $zero, L_800326C4
    if (ctx->r1 != 0) {
        // 0x800326B8: mov.s       $f22, $f14
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 14);
    ctx->f22.fl = ctx->f14.fl;
            goto L_800326C4;
    }
    // 0x800326B8: mov.s       $f22, $f14
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 14);
    ctx->f22.fl = ctx->f14.fl;
    // 0x800326BC: b           L_80032820
    // 0x800326C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80032820;
    // 0x800326C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800326C4:
    // 0x800326C4: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x800326C8: lw          $v1, -0x3340($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3340);
    // 0x800326CC: bnel        $v1, $zero, L_800326E0
    if (ctx->r3 != 0) {
        // 0x800326D0: lw          $s0, 0x0($v1)
        ctx->r16 = MEM_W(ctx->r3, 0X0);
            goto L_800326E0;
    }
    goto skip_0;
    // 0x800326D0: lw          $s0, 0x0($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X0);
    skip_0:
    // 0x800326D4: b           L_80032820
    // 0x800326D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80032820;
    // 0x800326D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800326DC: lw          $s0, 0x0($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X0);
L_800326E0:
    // 0x800326E0: lhu         $v0, 0x20($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X20);
    // 0x800326E4: beq         $s0, $zero, L_80032770
    if (ctx->r16 == 0) {
        // 0x800326E8: nop
    
            goto L_80032770;
    }
    // 0x800326E8: nop

    // 0x800326EC: lhu         $t8, 0x20($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X20);
    // 0x800326F0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x800326F4: addiu       $s4, $zero, 0x7FFF
    ctx->r20 = ADD32(0, 0X7FFF);
    // 0x800326F8: slt         $at, $v0, $t8
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x800326FC: beq         $at, $zero, L_80032770
    if (ctx->r1 == 0) {
        // 0x80032700: addiu       $s3, $zero, 0x2
        ctx->r19 = ADD32(0, 0X2);
            goto L_80032770;
    }
    // 0x80032700: addiu       $s3, $zero, 0x2
    ctx->r19 = ADD32(0, 0X2);
    // 0x80032704: lui         $s2, 0x8000
    ctx->r18 = S32(0X8000 << 16);
    // 0x80032708: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
L_8003270C:
    // 0x8003270C: beql        $v0, $zero, L_80032758
    if (ctx->r2 == 0) {
        // 0x80032710: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_80032758;
    }
    goto skip_1;
    // 0x80032710: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_1:
    // 0x80032714: lw          $t9, 0x60($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X60);
    // 0x80032718: and         $t0, $t9, $s2
    ctx->r8 = ctx->r25 & ctx->r18;
    // 0x8003271C: beql        $t0, $zero, L_80032758
    if (ctx->r8 == 0) {
        // 0x80032720: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_80032758;
    }
    goto skip_2;
    // 0x80032720: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_2:
    // 0x80032724: lbu         $t1, 0x4($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X4);
    // 0x80032728: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x8003272C: bnel        $s3, $t1, L_80032758
    if (ctx->r19 != ctx->r9) {
        // 0x80032730: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_80032758;
    }
    goto skip_3;
    // 0x80032730: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_3:
    // 0x80032734: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x80032738: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x8003273C: jal         0x800277C0
    // 0x80032740: mov.s       $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    ctx->f14.fl = ctx->f22.fl;
    func_800277C0_283C0(rdram, ctx);
        goto after_0;
    // 0x80032740: mov.s       $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    ctx->f14.fl = ctx->f22.fl;
    after_0:
    // 0x80032744: bnel        $s4, $v0, L_80032758
    if (ctx->r20 != ctx->r2) {
        // 0x80032748: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_80032758;
    }
    goto skip_4;
    // 0x80032748: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_4:
    // 0x8003274C: b           L_80032820
    // 0x80032750: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
        goto L_80032820;
    // 0x80032750: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x80032754: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_80032758:
    // 0x80032758: beq         $s0, $zero, L_80032770
    if (ctx->r16 == 0) {
        // 0x8003275C: nop
    
            goto L_80032770;
    }
    // 0x8003275C: nop

    // 0x80032760: lhu         $t2, 0x20($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X20);
    // 0x80032764: slt         $at, $s1, $t2
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80032768: bnel        $at, $zero, L_8003270C
    if (ctx->r1 != 0) {
        // 0x8003276C: lw          $v0, 0x18($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X18);
            goto L_8003270C;
    }
    goto skip_5;
    // 0x8003276C: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    skip_5:
L_80032770:
    // 0x80032770: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x80032774: lw          $v1, -0x3328($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3328);
    // 0x80032778: lui         $s2, 0x8000
    ctx->r18 = S32(0X8000 << 16);
    // 0x8003277C: addiu       $s3, $zero, 0x2
    ctx->r19 = ADD32(0, 0X2);
    // 0x80032780: bne         $v1, $zero, L_80032790
    if (ctx->r3 != 0) {
        // 0x80032784: addiu       $s4, $zero, 0x7FFF
        ctx->r20 = ADD32(0, 0X7FFF);
            goto L_80032790;
    }
    // 0x80032784: addiu       $s4, $zero, 0x7FFF
    ctx->r20 = ADD32(0, 0X7FFF);
    // 0x80032788: b           L_80032820
    // 0x8003278C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80032820;
    // 0x8003278C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80032790:
    // 0x80032790: lw          $s0, 0x0($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X0);
    // 0x80032794: lhu         $v0, 0x20($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X20);
    // 0x80032798: beql        $s0, $zero, L_80032820
    if (ctx->r16 == 0) {
        // 0x8003279C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80032820;
    }
    goto skip_6;
    // 0x8003279C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_6:
    // 0x800327A0: lhu         $t3, 0x20($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X20);
    // 0x800327A4: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x800327A8: slt         $at, $v0, $t3
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x800327AC: beql        $at, $zero, L_80032820
    if (ctx->r1 == 0) {
        // 0x800327B0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80032820;
    }
    goto skip_7;
    // 0x800327B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_7:
    // 0x800327B4: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
L_800327B8:
    // 0x800327B8: beql        $v0, $zero, L_80032804
    if (ctx->r2 == 0) {
        // 0x800327BC: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_80032804;
    }
    goto skip_8;
    // 0x800327BC: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_8:
    // 0x800327C0: lw          $t4, 0x60($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X60);
    // 0x800327C4: and         $t5, $t4, $s2
    ctx->r13 = ctx->r12 & ctx->r18;
    // 0x800327C8: beql        $t5, $zero, L_80032804
    if (ctx->r13 == 0) {
        // 0x800327CC: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_80032804;
    }
    goto skip_9;
    // 0x800327CC: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_9:
    // 0x800327D0: lbu         $t6, 0x4($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X4);
    // 0x800327D4: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x800327D8: bnel        $s3, $t6, L_80032804
    if (ctx->r19 != ctx->r14) {
        // 0x800327DC: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_80032804;
    }
    goto skip_10;
    // 0x800327DC: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_10:
    // 0x800327E0: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x800327E4: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x800327E8: jal         0x800277C0
    // 0x800327EC: mov.s       $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    ctx->f14.fl = ctx->f22.fl;
    func_800277C0_283C0(rdram, ctx);
        goto after_1;
    // 0x800327EC: mov.s       $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    ctx->f14.fl = ctx->f22.fl;
    after_1:
    // 0x800327F0: bnel        $s4, $v0, L_80032804
    if (ctx->r20 != ctx->r2) {
        // 0x800327F4: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_80032804;
    }
    goto skip_11;
    // 0x800327F4: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_11:
    // 0x800327F8: b           L_80032820
    // 0x800327FC: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
        goto L_80032820;
    // 0x800327FC: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x80032800: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_80032804:
    // 0x80032804: beql        $s0, $zero, L_80032820
    if (ctx->r16 == 0) {
        // 0x80032808: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80032820;
    }
    goto skip_12;
    // 0x80032808: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_12:
    // 0x8003280C: lhu         $t7, 0x20($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X20);
    // 0x80032810: slt         $at, $s1, $t7
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80032814: bnel        $at, $zero, L_800327B8
    if (ctx->r1 != 0) {
        // 0x80032818: lw          $v0, 0x18($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X18);
            goto L_800327B8;
    }
    goto skip_13;
    // 0x80032818: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    skip_13:
    // 0x8003281C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80032820:
    // 0x80032820: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80032824: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x80032828: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x8003282C: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x80032830: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80032834: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80032838: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x8003283C: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x80032840: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x80032844: jr          $ra
    // 0x80032848: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x80032848: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80037DB0_389B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80037DB0: jr          $ra
    // 0x80037DB4: nop

    TRACE_RETURN()
    return;
    // 0x80037DB4: nop

;}
RECOMP_FUNC void func_800396DC_3A2DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800396DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800396E0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x800396E4: addiu       $v0, $v0, 0xA26
    ctx->r2 = ADD32(ctx->r2, 0XA26);
    // 0x800396E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800396EC: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x800396F0: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x800396F4: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x800396F8: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x800396FC: bne         $t8, $zero, L_800397A8
    if (ctx->r24 != 0) {
        // 0x80039700: sb          $t7, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r15;
            goto L_800397A8;
    }
    // 0x80039700: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    // 0x80039704: lbu         $t9, -0x3A2C($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X3A2C);
    // 0x80039708: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8003970C: beq         $t9, $zero, L_8003971C
    if (ctx->r25 == 0) {
        // 0x80039710: nop
    
            goto L_8003971C;
    }
    // 0x80039710: nop

    // 0x80039714: b           L_800397A8
    // 0x80039718: sb          $t0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r8;
        goto L_800397A8;
    // 0x80039718: sb          $t0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r8;
L_8003971C:
    // 0x8003971C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80039720: lhu         $v0, 0xA24($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XA24);
    // 0x80039724: lui         $t2, 0x8007
    ctx->r10 = S32(0X8007 << 16);
    // 0x80039728: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x8003972C: addiu       $v1, $v0, -0x10
    ctx->r3 = ADD32(ctx->r2, -0X10);
    // 0x80039730: andi        $t1, $v1, 0xFFFF
    ctx->r9 = ctx->r3 & 0XFFFF;
    // 0x80039734: sll         $a3, $t1, 2
    ctx->r7 = S32(ctx->r9 << 2);
    // 0x80039738: addu        $t2, $t2, $a3
    ctx->r10 = ADD32(ctx->r10, ctx->r7);
    // 0x8003973C: lbu         $t2, -0xEB2($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0XEB2);
    // 0x80039740: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80039744: addiu       $a0, $a0, -0x1D54
    ctx->r4 = ADD32(ctx->r4, -0X1D54);
    // 0x80039748: sb          $v0, 0x9FC($at)
    MEM_B(0X9FC, ctx->r1) = ctx->r2;
    // 0x8003974C: andi        $t3, $t2, 0xFF
    ctx->r11 = ctx->r10 & 0XFF;
    // 0x80039750: beq         $t3, $zero, L_80039768
    if (ctx->r11 == 0) {
        // 0x80039754: sb          $t2, 0x0($a0)
        MEM_B(0X0, ctx->r4) = ctx->r10;
            goto L_80039768;
    }
    // 0x80039754: sb          $t2, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r10;
    // 0x80039758: jal         0x8003987C
    // 0x8003975C: nop

    func_8003987C_3A47C(rdram, ctx);
        goto after_0;
    // 0x8003975C: nop

    after_0:
    // 0x80039760: b           L_800397AC
    // 0x80039764: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800397AC;
    // 0x80039764: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80039768:
    // 0x80039768: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x8003976C: lui         $t4, 0x8007
    ctx->r12 = S32(0X8007 << 16);
    // 0x80039770: addu        $t4, $t4, $a3
    ctx->r12 = ADD32(ctx->r12, ctx->r7);
    // 0x80039774: addu        $a0, $a0, $a3
    ctx->r4 = ADD32(ctx->r4, ctx->r7);
    // 0x80039778: lw          $a0, -0x1D28($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1D28);
    // 0x8003977C: lw          $t4, -0x1BAC($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1BAC);
    // 0x80039780: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x80039784: addiu       $a1, $a1, 0x1730
    ctx->r5 = ADD32(ctx->r5, 0X1730);
    // 0x80039788: jal         0x80005394
    // 0x8003978C: subu        $a2, $t4, $a0
    ctx->r6 = SUB32(ctx->r12, ctx->r4);
    func_80005394_5F94(rdram, ctx);
        goto after_1;
    // 0x8003978C: subu        $a2, $t4, $a0
    ctx->r6 = SUB32(ctx->r12, ctx->r4);
    after_1:
    // 0x80039790: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80039794: lhu         $a0, 0xA24($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XA24);
    // 0x80039798: jal         0x800397B8
    // 0x8003979C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_800397B8_3A3B8(rdram, ctx);
        goto after_2;
    // 0x8003979C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_2:
    // 0x800397A0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800397A4: sh          $zero, 0xA24($at)
    MEM_H(0XA24, ctx->r1) = 0;
L_800397A8:
    // 0x800397A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800397AC:
    // 0x800397AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800397B0: jr          $ra
    // 0x800397B4: nop

    TRACE_RETURN()
    return;
    // 0x800397B4: nop

;}
RECOMP_FUNC void func_8000C904_D504(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000C904: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x8000C908: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x8000C90C: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x8000C910: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x8000C914: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x8000C918: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x8000C91C: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x8000C920: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x8000C924: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x8000C928: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x8000C92C: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x8000C930: sdc1        $f30, 0x30($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X30, ctx->r29);
    // 0x8000C934: sdc1        $f28, 0x28($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X28, ctx->r29);
    // 0x8000C938: sdc1        $f26, 0x20($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X20, ctx->r29);
    // 0x8000C93C: sdc1        $f24, 0x18($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X18, ctx->r29);
    // 0x8000C940: sdc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X10, ctx->r29);
    // 0x8000C944: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x8000C948: lh          $s3, 0x32($a0)
    ctx->r19 = MEM_H(ctx->r4, 0X32);
    // 0x8000C94C: lh          $t8, 0x68($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X68);
    // 0x8000C950: lh          $t6, 0x64($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X64);
    // 0x8000C954: lh          $s6, 0x34($a0)
    ctx->r22 = MEM_H(ctx->r4, 0X34);
    // 0x8000C958: lh          $t7, 0x66($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X66);
    // 0x8000C95C: lwc1        $f28, 0x44($a0)
    ctx->f28.u32l = MEM_W(ctx->r4, 0X44);
    // 0x8000C960: addu        $t9, $t8, $s3
    ctx->r25 = ADD32(ctx->r24, ctx->r19);
    // 0x8000C964: sw          $t9, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r25;
    // 0x8000C968: addu        $s1, $t6, $s3
    ctx->r17 = ADD32(ctx->r14, ctx->r19);
    // 0x8000C96C: lh          $t6, 0x6A($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X6A);
    // 0x8000C970: addu        $ra, $t7, $s6
    ctx->r31 = ADD32(ctx->r15, ctx->r22);
    // 0x8000C974: lui         $at, 0x43A0
    ctx->r1 = S32(0X43A0 << 16);
    // 0x8000C978: addu        $t7, $t6, $s6
    ctx->r15 = ADD32(ctx->r14, ctx->r22);
    // 0x8000C97C: sw          $t7, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r15;
    // 0x8000C980: lh          $t8, 0x3E($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X3E);
    // 0x8000C984: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8000C988: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8000C98C: addu        $t9, $t8, $s3
    ctx->r25 = ADD32(ctx->r24, ctx->r19);
    // 0x8000C990: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8000C994: lw          $t6, 0x64($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X64);
    // 0x8000C998: bgez        $s1, L_8000C9A4
    if (SIGNED(ctx->r17) >= 0) {
        // 0x8000C99C: cvt.s.w     $f24, $f4
        CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    ctx->f24.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8000C9A4;
    }
    // 0x8000C99C: cvt.s.w     $f24, $f4
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    ctx->f24.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8000C9A0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8000C9A4:
    // 0x8000C9A4: bgez        $ra, L_8000C9B0
    if (SIGNED(ctx->r31) >= 0) {
        // 0x8000C9A8: div.s       $f0, $f6, $f28
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f28.fl);
            goto L_8000C9B0;
    }
    // 0x8000C9A8: div.s       $f0, $f6, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f28.fl);
    // 0x8000C9AC: or          $ra, $zero, $zero
    ctx->r31 = 0 | 0;
L_8000C9B0:
    // 0x8000C9B0: mtc1        $s1, $f8
    ctx->f8.u32l = ctx->r17;
    // 0x8000C9B4: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x8000C9B8: bgez        $t6, L_8000C9C4
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8000C9BC: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_8000C9C4;
    }
    // 0x8000C9BC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8000C9C0: sw          $zero, 0x64($sp)
    MEM_W(0X64, ctx->r29) = 0;
L_8000C9C4:
    // 0x8000C9C4: lw          $t7, 0x60($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X60);
    // 0x8000C9C8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8000C9CC: mtc1        $ra, $f8
    ctx->f8.u32l = ctx->r31;
    // 0x8000C9D0: bgez        $t7, L_8000C9DC
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8000C9D4: div.s       $f2, $f6, $f28
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f2.fl = DIV_S(ctx->f6.fl, ctx->f28.fl);
            goto L_8000C9DC;
    }
    // 0x8000C9D4: div.s       $f2, $f6, $f28
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f2.fl = DIV_S(ctx->f6.fl, ctx->f28.fl);
    // 0x8000C9D8: sw          $zero, 0x60($sp)
    MEM_W(0X60, ctx->r29) = 0;
L_8000C9DC:
    // 0x8000C9DC: lw          $t6, 0x64($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X64);
    // 0x8000C9E0: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x8000C9E4: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8000C9E8: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x8000C9EC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8000C9F0: lui         $fp, 0xE700
    ctx->r30 = S32(0XE700 << 16);
    // 0x8000C9F4: lui         $s7, 0xE600
    ctx->r23 = S32(0XE600 << 16);
    // 0x8000C9F8: lui         $s4, 0x700
    ctx->r20 = S32(0X700 << 16);
    // 0x8000C9FC: bc1f        L_8000CA10
    if (!c1cs) {
        // 0x8000CA00: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_8000CA10;
    }
    // 0x8000CA00: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8000CA04: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x8000CA08: mfc1        $s1, $f4
    ctx->r17 = (int32_t)ctx->f4.u32l;
    // 0x8000CA0C: nop

L_8000CA10:
    // 0x8000CA10: c.lt.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl < ctx->f10.fl;
    // 0x8000CA14: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x8000CA18: bc1fl       L_8000CA30
    if (!c1cs) {
        // 0x8000CA1C: c.lt.s      $f0, $f8
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
            goto L_8000CA30;
    }
    goto skip_0;
    // 0x8000CA1C: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    skip_0:
    // 0x8000CA20: trunc.w.s   $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    ctx->f4.u32l = TRUNC_W_S(ctx->f2.fl);
    // 0x8000CA24: mfc1        $ra, $f4
    ctx->r31 = (int32_t)ctx->f4.u32l;
    // 0x8000CA28: nop

    // 0x8000CA2C: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
L_8000CA30:
    // 0x8000CA30: nop

    // 0x8000CA34: bc1fl       L_8000CA50
    if (!c1cs) {
        // 0x8000CA38: lw          $t9, 0x60($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X60);
            goto L_8000CA50;
    }
    goto skip_1;
    // 0x8000CA38: lw          $t9, 0x60($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X60);
    skip_1:
    // 0x8000CA3C: trunc.w.s   $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x8000CA40: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x8000CA44: nop

    // 0x8000CA48: sw          $t8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r24;
    // 0x8000CA4C: lw          $t9, 0x60($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X60);
L_8000CA50:
    // 0x8000CA50: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8000CA54: nop

    // 0x8000CA58: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8000CA5C: c.lt.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl < ctx->f6.fl;
    // 0x8000CA60: nop

    // 0x8000CA64: bc1fl       L_8000CA80
    if (!c1cs) {
        // 0x8000CA68: lh          $a3, 0x42($s0)
        ctx->r7 = MEM_H(ctx->r16, 0X42);
            goto L_8000CA80;
    }
    goto skip_2;
    // 0x8000CA68: lh          $a3, 0x42($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X42);
    skip_2:
    // 0x8000CA6C: trunc.w.s   $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    ctx->f8.u32l = TRUNC_W_S(ctx->f2.fl);
    // 0x8000CA70: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x8000CA74: nop

    // 0x8000CA78: sw          $t7, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r15;
    // 0x8000CA7C: lh          $a3, 0x42($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X42);
L_8000CA80:
    // 0x8000CA80: or          $t5, $zero, $zero
    ctx->r13 = 0 | 0;
    // 0x8000CA84: blezl       $a3, L_8000D01C
    if (SIGNED(ctx->r7) <= 0) {
        // 0x8000CA88: lw          $ra, 0x5C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X5C);
            goto L_8000D01C;
    }
    goto skip_3;
    // 0x8000CA88: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    skip_3:
    // 0x8000CA8C: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x8000CA90: addiu       $t2, $t2, -0x3A34
    ctx->r10 = ADD32(ctx->r10, -0X3A34);
L_8000CA94:
    // 0x8000CA94: lh          $v0, 0x40($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X40);
    // 0x8000CA98: addiu       $s2, $t5, 0x1
    ctx->r18 = ADD32(ctx->r13, 0X1);
    // 0x8000CA9C: multu       $v0, $t5
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8000CAA0: mflo        $t8
    ctx->r24 = lo;
    // 0x8000CAA4: addu        $t9, $t8, $s6
    ctx->r25 = ADD32(ctx->r24, ctx->r22);
    // 0x8000CAA8: lw          $t8, 0x64($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X64);
    // 0x8000CAAC: multu       $v0, $s2
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8000CAB0: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x8000CAB4: slt         $at, $t8, $s3
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x8000CAB8: cvt.s.w     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    ctx->f2.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8000CABC: mflo        $t6
    ctx->r14 = lo;
    // 0x8000CAC0: addu        $t7, $t6, $s6
    ctx->r15 = ADD32(ctx->r14, ctx->r22);
    // 0x8000CAC4: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8000CAC8: bne         $at, $zero, L_8000D00C
    if (ctx->r1 != 0) {
        // 0x8000CACC: cvt.s.w     $f12, $f4
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8000D00C;
    }
    // 0x8000CACC: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8000CAD0: mtc1        $s1, $f6
    ctx->f6.u32l = ctx->r17;
    // 0x8000CAD4: nop

    // 0x8000CAD8: cvt.s.w     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    ctx->f16.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8000CADC: c.lt.s      $f24, $f16
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f24.fl < ctx->f16.fl;
    // 0x8000CAE0: nop

    // 0x8000CAE4: bc1tl       L_8000D010
    if (c1cs) {
        // 0x8000CAE8: slt         $at, $s2, $a3
        ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r7) ? 1 : 0;
            goto L_8000D010;
    }
    goto skip_4;
    // 0x8000CAE8: slt         $at, $s2, $a3
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r7) ? 1 : 0;
    skip_4:
    // 0x8000CAEC: mtc1        $ra, $f8
    ctx->f8.u32l = ctx->r31;
    // 0x8000CAF0: lw          $t9, 0x60($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X60);
    // 0x8000CAF4: cvt.s.w     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8000CAF8: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x8000CAFC: nop

    // 0x8000CB00: bc1tl       L_8000D010
    if (c1cs) {
        // 0x8000CB04: slt         $at, $s2, $a3
        ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r7) ? 1 : 0;
            goto L_8000D010;
    }
    goto skip_5;
    // 0x8000CB04: slt         $at, $s2, $a3
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r7) ? 1 : 0;
    skip_5:
    // 0x8000CB08: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x8000CB0C: nop

    // 0x8000CB10: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8000CB14: c.lt.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl < ctx->f2.fl;
    // 0x8000CB18: nop

    // 0x8000CB1C: bc1tl       L_8000D010
    if (c1cs) {
        // 0x8000CB20: slt         $at, $s2, $a3
        ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r7) ? 1 : 0;
            goto L_8000D010;
    }
    goto skip_6;
    // 0x8000CB20: slt         $at, $s2, $a3
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r7) ? 1 : 0;
    skip_6:
    // 0x8000CB24: lw          $v1, 0x0($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X0);
    // 0x8000CB28: lui         $t7, 0xFD10
    ctx->r15 = S32(0XFD10 << 16);
    // 0x8000CB2C: mtc1        $s3, $f6
    ctx->f6.u32l = ctx->r19;
    // 0x8000CB30: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x8000CB34: sw          $t6, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r14;
    // 0x8000CB38: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8000CB3C: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
    // 0x8000CB40: lui         $t6, 0xE800
    ctx->r14 = S32(0XE800 << 16);
    // 0x8000CB44: cvt.s.w     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    ctx->f18.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8000CB48: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x8000CB4C: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
    // 0x8000CB50: lui         $t8, 0xF500
    ctx->r24 = S32(0XF500 << 16);
    // 0x8000CB54: ori         $t8, $t8, 0x1F0
    ctx->r24 = ctx->r24 | 0X1F0;
    // 0x8000CB58: addiu       $t9, $a0, 0x8
    ctx->r25 = ADD32(ctx->r4, 0X8);
    // 0x8000CB5C: sw          $t9, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r25;
    // 0x8000CB60: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x8000CB64: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8000CB68: lw          $a1, 0x0($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X0);
    // 0x8000CB6C: mtc1        $s6, $f8
    ctx->f8.u32l = ctx->r22;
    // 0x8000CB70: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8000CB74: addiu       $t7, $a1, 0x8
    ctx->r15 = ADD32(ctx->r5, 0X8);
    // 0x8000CB78: sw          $t7, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r15;
    // 0x8000CB7C: sw          $s4, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r20;
    // 0x8000CB80: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x8000CB84: lw          $a2, 0x0($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X0);
    // 0x8000CB88: lui         $t8, 0x703
    ctx->r24 = S32(0X703 << 16);
    // 0x8000CB8C: ori         $t8, $t8, 0xC000
    ctx->r24 = ctx->r24 | 0XC000;
    // 0x8000CB90: addiu       $t9, $a2, 0x8
    ctx->r25 = ADD32(ctx->r6, 0X8);
    // 0x8000CB94: sw          $t9, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r25;
    // 0x8000CB98: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x8000CB9C: sw          $s7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r23;
    // 0x8000CBA0: lw          $a3, 0x0($t2)
    ctx->r7 = MEM_W(ctx->r10, 0X0);
    // 0x8000CBA4: lui         $t7, 0xF000
    ctx->r15 = S32(0XF000 << 16);
    // 0x8000CBA8: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8000CBAC: addiu       $t6, $a3, 0x8
    ctx->r14 = ADD32(ctx->r7, 0X8);
    // 0x8000CBB0: sw          $t6, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r14;
    // 0x8000CBB4: sw          $t8, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r24;
    // 0x8000CBB8: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
    // 0x8000CBBC: lw          $t0, 0x0($t2)
    ctx->r8 = MEM_W(ctx->r10, 0X0);
    // 0x8000CBC0: lui         $t7, 0xFD50
    ctx->r15 = S32(0XFD50 << 16);
    // 0x8000CBC4: addiu       $a3, $zero, 0x7FF
    ctx->r7 = ADD32(0, 0X7FF);
    // 0x8000CBC8: addiu       $t9, $t0, 0x8
    ctx->r25 = ADD32(ctx->r8, 0X8);
    // 0x8000CBCC: sw          $t9, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r25;
    // 0x8000CBD0: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x8000CBD4: sw          $fp, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r30;
    // 0x8000CBD8: lw          $v0, 0x0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X0);
    // 0x8000CBDC: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8000CBE0: sw          $t6, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r14;
    // 0x8000CBE4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8000CBE8: lh          $t9, 0x40($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X40);
    // 0x8000CBEC: lh          $t8, 0x3E($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X3E);
    // 0x8000CBF0: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
    // 0x8000CBF4: multu       $t8, $t9
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8000CBF8: lw          $t9, 0x4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4);
    // 0x8000CBFC: mflo        $t6
    ctx->r14 = lo;
    // 0x8000CC00: nop

    // 0x8000CC04: nop

    // 0x8000CC08: multu       $t6, $t5
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8000CC0C: mflo        $t7
    ctx->r15 = lo;
    // 0x8000CC10: bgez        $t7, L_8000CC20
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8000CC14: sra         $t8, $t7, 1
        ctx->r24 = S32(SIGNED(ctx->r15) >> 1);
            goto L_8000CC20;
    }
    // 0x8000CC14: sra         $t8, $t7, 1
    ctx->r24 = S32(SIGNED(ctx->r15) >> 1);
    // 0x8000CC18: addiu       $at, $t7, 0x1
    ctx->r1 = ADD32(ctx->r15, 0X1);
    // 0x8000CC1C: sra         $t8, $at, 1
    ctx->r24 = S32(SIGNED(ctx->r1) >> 1);
L_8000CC20:
    // 0x8000CC20: addu        $t6, $t9, $t8
    ctx->r14 = ADD32(ctx->r25, ctx->r24);
    // 0x8000CC24: sw          $t6, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r14;
    // 0x8000CC28: lw          $t4, 0x0($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X0);
    // 0x8000CC2C: lui         $t9, 0xF550
    ctx->r25 = S32(0XF550 << 16);
    // 0x8000CC30: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
    // 0x8000CC34: addiu       $t7, $t4, 0x8
    ctx->r15 = ADD32(ctx->r12, 0X8);
    // 0x8000CC38: sw          $t7, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r15;
    // 0x8000CC3C: sw          $t9, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r25;
    // 0x8000CC40: lw          $t8, 0x64($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X64);
    // 0x8000CC44: lw          $t7, 0x60($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X60);
    // 0x8000CC48: subu        $t6, $t8, $s1
    ctx->r14 = SUB32(ctx->r24, ctx->r17);
    // 0x8000CC4C: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x8000CC50: subu        $t9, $t7, $ra
    ctx->r25 = SUB32(ctx->r15, ctx->r31);
    // 0x8000CC54: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8000CC58: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8000CC5C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8000CC60: mul.s       $f6, $f4, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f28.fl);
    // 0x8000CC64: add.s       $f20, $f6, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f20.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x8000CC68: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8000CC6C: mul.s       $f4, $f10, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f28.fl);
    // 0x8000CC70: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8000CC74: div.s       $f8, $f6, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f28.fl);
    // 0x8000CC78: add.s       $f22, $f4, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x8000CC7C: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8000CC80: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8000CC84: nop

    // 0x8000CC88: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8000CC8C: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8000CC90: nop

    // 0x8000CC94: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x8000CC98: beql        $t3, $zero, L_8000CCE8
    if (ctx->r11 == 0) {
        // 0x8000CC9C: mfc1        $t3, $f10
        ctx->r11 = (int32_t)ctx->f10.u32l;
            goto L_8000CCE8;
    }
    goto skip_7;
    // 0x8000CC9C: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    skip_7:
    // 0x8000CCA0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8000CCA4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8000CCA8: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8000CCAC: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8000CCB0: nop

    // 0x8000CCB4: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8000CCB8: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8000CCBC: nop

    // 0x8000CCC0: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x8000CCC4: bne         $t3, $zero, L_8000CCDC
    if (ctx->r11 != 0) {
        // 0x8000CCC8: nop
    
            goto L_8000CCDC;
    }
    // 0x8000CCC8: nop

    // 0x8000CCCC: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x8000CCD0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8000CCD4: b           L_8000CCF4
    // 0x8000CCD8: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
        goto L_8000CCF4;
    // 0x8000CCD8: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
L_8000CCDC:
    // 0x8000CCDC: b           L_8000CCF4
    // 0x8000CCE0: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
        goto L_8000CCF4;
    // 0x8000CCE0: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x8000CCE4: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
L_8000CCE8:
    // 0x8000CCE8: nop

    // 0x8000CCEC: bltz        $t3, L_8000CCDC
    if (SIGNED(ctx->r11) < 0) {
        // 0x8000CCF0: nop
    
            goto L_8000CCDC;
    }
    // 0x8000CCF0: nop

L_8000CCF4:
    // 0x8000CCF4: sw          $s4, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r20;
    // 0x8000CCF8: lw          $v1, 0x0($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X0);
    // 0x8000CCFC: andi        $t6, $t3, 0xFFFF
    ctx->r14 = ctx->r11 & 0XFFFF;
    // 0x8000CD00: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x8000CD04: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x8000CD08: sw          $t9, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r25;
    // 0x8000CD0C: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8000CD10: sw          $s7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r23;
    // 0x8000CD14: lw          $t1, 0x0($t2)
    ctx->r9 = MEM_W(ctx->r10, 0X0);
    // 0x8000CD18: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8000CD1C: or          $s5, $t7, $t6
    ctx->r21 = ctx->r15 | ctx->r14;
    // 0x8000CD20: or          $t3, $t6, $zero
    ctx->r11 = ctx->r14 | 0;
    // 0x8000CD24: addiu       $t8, $t1, 0x8
    ctx->r24 = ADD32(ctx->r9, 0X8);
    // 0x8000CD28: sw          $t8, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r24;
    // 0x8000CD2C: lui         $t6, 0xF300
    ctx->r14 = S32(0XF300 << 16);
    // 0x8000CD30: sw          $t6, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r14;
    // 0x8000CD34: lh          $t7, 0x40($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X40);
    // 0x8000CD38: lh          $a0, 0x3E($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X3E);
    // 0x8000CD3C: multu       $a0, $t7
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8000CD40: mflo        $a1
    ctx->r5 = lo;
    // 0x8000CD44: addiu       $a1, $a1, 0x3
    ctx->r5 = ADD32(ctx->r5, 0X3);
    // 0x8000CD48: sra         $t9, $a1, 2
    ctx->r25 = S32(SIGNED(ctx->r5) >> 2);
    // 0x8000CD4C: addiu       $a1, $t9, -0x1
    ctx->r5 = ADD32(ctx->r25, -0X1);
    // 0x8000CD50: slti        $at, $a1, 0x7FF
    ctx->r1 = SIGNED(ctx->r5) < 0X7FF ? 1 : 0;
    // 0x8000CD54: beq         $at, $zero, L_8000CD64
    if (ctx->r1 == 0) {
        // 0x8000CD58: nop
    
            goto L_8000CD64;
    }
    // 0x8000CD58: nop

    // 0x8000CD5C: b           L_8000CD64
    // 0x8000CD60: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
        goto L_8000CD64;
    // 0x8000CD60: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
L_8000CD64:
    // 0x8000CD64: bgez        $a0, L_8000CD74
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8000CD68: sra         $v0, $a0, 4
        ctx->r2 = S32(SIGNED(ctx->r4) >> 4);
            goto L_8000CD74;
    }
    // 0x8000CD68: sra         $v0, $a0, 4
    ctx->r2 = S32(SIGNED(ctx->r4) >> 4);
    // 0x8000CD6C: addiu       $at, $a0, 0xF
    ctx->r1 = ADD32(ctx->r4, 0XF);
    // 0x8000CD70: sra         $v0, $at, 4
    ctx->r2 = S32(SIGNED(ctx->r1) >> 4);
L_8000CD74:
    // 0x8000CD74: bgtz        $v0, L_8000CD84
    if (SIGNED(ctx->r2) > 0) {
        // 0x8000CD78: or          $t0, $v0, $zero
        ctx->r8 = ctx->r2 | 0;
            goto L_8000CD84;
    }
    // 0x8000CD78: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x8000CD7C: b           L_8000CD84
    // 0x8000CD80: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
        goto L_8000CD84;
    // 0x8000CD80: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
L_8000CD84:
    // 0x8000CD84: bgtz        $v0, L_8000CD94
    if (SIGNED(ctx->r2) > 0) {
        // 0x8000CD88: addiu       $t8, $t0, 0x7FF
        ctx->r24 = ADD32(ctx->r8, 0X7FF);
            goto L_8000CD94;
    }
    // 0x8000CD88: addiu       $t8, $t0, 0x7FF
    ctx->r24 = ADD32(ctx->r8, 0X7FF);
    // 0x8000CD8C: b           L_8000CD98
    // 0x8000CD90: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_8000CD98;
    // 0x8000CD90: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_8000CD94:
    // 0x8000CD94: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
L_8000CD98:
    // 0x8000CD98: div         $zero, $t8, $a2
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r6)));
    // 0x8000CD9C: mflo        $t6
    ctx->r14 = lo;
    // 0x8000CDA0: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x8000CDA4: bne         $a2, $zero, L_8000CDB0
    if (ctx->r6 != 0) {
        // 0x8000CDA8: nop
    
            goto L_8000CDB0;
    }
    // 0x8000CDA8: nop

    // 0x8000CDAC: break       7
    do_break(2147536300);
L_8000CDB0:
    // 0x8000CDB0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8000CDB4: bne         $a2, $at, L_8000CDC8
    if (ctx->r6 != ctx->r1) {
        // 0x8000CDB8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8000CDC8;
    }
    // 0x8000CDB8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8000CDBC: bne         $t8, $at, L_8000CDC8
    if (ctx->r24 != ctx->r1) {
        // 0x8000CDC0: nop
    
            goto L_8000CDC8;
    }
    // 0x8000CDC0: nop

    // 0x8000CDC4: break       6
    do_break(2147536324);
L_8000CDC8:
    // 0x8000CDC8: andi        $t8, $a3, 0xFFF
    ctx->r24 = ctx->r7 & 0XFFF;
    // 0x8000CDCC: sll         $t6, $t8, 12
    ctx->r14 = S32(ctx->r24 << 12);
    // 0x8000CDD0: or          $t9, $t7, $s4
    ctx->r25 = ctx->r15 | ctx->r20;
    // 0x8000CDD4: or          $t7, $t9, $t6
    ctx->r15 = ctx->r25 | ctx->r14;
    // 0x8000CDD8: sw          $t7, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r15;
    // 0x8000CDDC: lw          $v0, 0x0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X0);
    // 0x8000CDE0: lui         $at, 0xF540
    ctx->r1 = S32(0XF540 << 16);
    // 0x8000CDE4: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x8000CDE8: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8000CDEC: sw          $t8, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r24;
    // 0x8000CDF0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8000CDF4: sw          $fp, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r30;
    // 0x8000CDF8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8000CDFC: lw          $v0, 0x0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X0);
    // 0x8000CE00: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8000CE04: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8000CE08: sw          $t9, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r25;
    // 0x8000CE0C: lh          $t6, 0x3E($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X3E);
    // 0x8000CE10: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8000CE14: sra         $t7, $t6, 1
    ctx->r15 = S32(SIGNED(ctx->r14) >> 1);
    // 0x8000CE18: addiu       $t8, $t7, 0x7
    ctx->r24 = ADD32(ctx->r15, 0X7);
    // 0x8000CE1C: sra         $t9, $t8, 3
    ctx->r25 = S32(SIGNED(ctx->r24) >> 3);
    // 0x8000CE20: andi        $t6, $t9, 0x1FF
    ctx->r14 = ctx->r25 & 0X1FF;
    // 0x8000CE24: sll         $t7, $t6, 9
    ctx->r15 = S32(ctx->r14 << 9);
    // 0x8000CE28: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x8000CE2C: lui         $t9, 0xF0
    ctx->r25 = S32(0XF0 << 16);
    // 0x8000CE30: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8000CE34: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8000CE38: lw          $v0, 0x0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X0);
    // 0x8000CE3C: lui         $t7, 0xF200
    ctx->r15 = S32(0XF200 << 16);
    // 0x8000CE40: slt         $at, $s3, $s1
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x8000CE44: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8000CE48: sw          $t6, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r14;
    // 0x8000CE4C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8000CE50: lh          $t8, 0x3E($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X3E);
    // 0x8000CE54: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8000CE58: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x8000CE5C: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x8000CE60: lh          $t9, 0x40($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X40);
    // 0x8000CE64: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x8000CE68: sll         $t8, $t7, 12
    ctx->r24 = S32(ctx->r15 << 12);
    // 0x8000CE6C: addiu       $t6, $t9, -0x1
    ctx->r14 = ADD32(ctx->r25, -0X1);
    // 0x8000CE70: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8000CE74: andi        $t9, $t7, 0xFFF
    ctx->r25 = ctx->r15 & 0XFFF;
    // 0x8000CE78: or          $t6, $t8, $t9
    ctx->r14 = ctx->r24 | ctx->r25;
    // 0x8000CE7C: beq         $at, $zero, L_8000CE8C
    if (ctx->r1 == 0) {
        // 0x8000CE80: sw          $t6, 0x4($v0)
        MEM_W(0X4, ctx->r2) = ctx->r14;
            goto L_8000CE8C;
    }
    // 0x8000CE80: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8000CE84: b           L_8000CE8C
    // 0x8000CE88: subu        $t0, $s1, $s3
    ctx->r8 = SUB32(ctx->r17, ctx->r19);
        goto L_8000CE8C;
    // 0x8000CE88: subu        $t0, $s1, $s3
    ctx->r8 = SUB32(ctx->r17, ctx->r19);
L_8000CE8C:
    // 0x8000CE8C: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x8000CE90: nop

    // 0x8000CE94: bc1f        L_8000CEB0
    if (!c1cs) {
        // 0x8000CE98: nop
    
            goto L_8000CEB0;
    }
    // 0x8000CE98: nop

    // 0x8000CE9C: sub.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x8000CEA0: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x8000CEA4: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x8000CEA8: b           L_8000CEB4
    // 0x8000CEAC: lh          $t8, 0x3E($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X3E);
        goto L_8000CEB4;
    // 0x8000CEAC: lh          $t8, 0x3E($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X3E);
L_8000CEB0:
    // 0x8000CEB0: lh          $t8, 0x3E($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X3E);
L_8000CEB4:
    // 0x8000CEB4: lh          $t9, 0x40($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X40);
    // 0x8000CEB8: slt         $at, $s1, $s3
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x8000CEBC: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x8000CEC0: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x8000CEC4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8000CEC8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8000CECC: mul.s       $f4, $f10, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f28.fl);
    // 0x8000CED0: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x8000CED4: mul.s       $f30, $f8, $f28
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f30.fl = MUL_S(ctx->f8.fl, ctx->f28.fl);
    // 0x8000CED8: mtc1        $s2, $f8
    ctx->f8.u32l = ctx->r18;
    // 0x8000CEDC: add.s       $f24, $f18, $f4
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f24.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8000CEE0: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8000CEE4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8000CEE8: mul.s       $f6, $f30, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f30.fl, ctx->f4.fl);
    // 0x8000CEEC: nop

    // 0x8000CEF0: mul.s       $f4, $f30, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f30.fl, ctx->f10.fl);
    // 0x8000CEF4: add.s       $f2, $f14, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f14.fl + ctx->f6.fl;
    // 0x8000CEF8: beq         $at, $zero, L_8000CF08
    if (ctx->r1 == 0) {
        // 0x8000CEFC: add.s       $f12, $f14, $f4
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f14.fl + ctx->f4.fl;
            goto L_8000CF08;
    }
    // 0x8000CEFC: add.s       $f12, $f14, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f14.fl + ctx->f4.fl;
    // 0x8000CF00: b           L_8000CF0C
    // 0x8000CF04: mov.s       $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.fl = ctx->f18.fl;
        goto L_8000CF0C;
    // 0x8000CF04: mov.s       $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.fl = ctx->f18.fl;
L_8000CF08:
    // 0x8000CF08: mov.s       $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = ctx->f16.fl;
L_8000CF0C:
    // 0x8000CF0C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x8000CF10: nop

    // 0x8000CF14: bc1fl       L_8000CF28
    if (!c1cs) {
        // 0x8000CF18: mov.s       $f16, $f0
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.fl = ctx->f0.fl;
            goto L_8000CF28;
    }
    goto skip_8;
    // 0x8000CF18: mov.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.fl = ctx->f0.fl;
    skip_8:
    // 0x8000CF1C: b           L_8000CF28
    // 0x8000CF20: mov.s       $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    ctx->f16.fl = ctx->f2.fl;
        goto L_8000CF28;
    // 0x8000CF20: mov.s       $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    ctx->f16.fl = ctx->f2.fl;
    // 0x8000CF24: mov.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.fl = ctx->f0.fl;
L_8000CF28:
    // 0x8000CF28: c.lt.s      $f24, $f20
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f24.fl < ctx->f20.fl;
    // 0x8000CF2C: nop

    // 0x8000CF30: bc1fl       L_8000CF44
    if (!c1cs) {
        // 0x8000CF34: mov.s       $f0, $f20
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
            goto L_8000CF44;
    }
    goto skip_9;
    // 0x8000CF34: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
    skip_9:
    // 0x8000CF38: b           L_8000CF44
    // 0x8000CF3C: mov.s       $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    ctx->f0.fl = ctx->f24.fl;
        goto L_8000CF44;
    // 0x8000CF3C: mov.s       $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    ctx->f0.fl = ctx->f24.fl;
    // 0x8000CF40: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
L_8000CF44:
    // 0x8000CF44: mul.s       $f6, $f0, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f26.fl);
    // 0x8000CF48: c.lt.s      $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f12.fl < ctx->f22.fl;
    // 0x8000CF4C: nop

    // 0x8000CF50: bc1f        L_8000CF60
    if (!c1cs) {
        // 0x8000CF54: trunc.w.s   $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
            goto L_8000CF60;
    }
    // 0x8000CF54: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x8000CF58: b           L_8000CF64
    // 0x8000CF5C: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
        goto L_8000CF64;
    // 0x8000CF5C: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
L_8000CF60:
    // 0x8000CF60: mov.s       $f2, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    ctx->f2.fl = ctx->f22.fl;
L_8000CF64:
    // 0x8000CF64: mul.s       $f10, $f2, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f26.fl);
    // 0x8000CF68: lw          $v0, 0x0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X0);
    // 0x8000CF6C: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x8000CF70: mul.s       $f6, $f14, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f26.fl);
    // 0x8000CF74: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8000CF78: sw          $t6, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r14;
    // 0x8000CF7C: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x8000CF80: sll         $t6, $t9, 12
    ctx->r14 = S32(ctx->r25 << 12);
    // 0x8000CF84: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x8000CF88: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x8000CF8C: mul.s       $f10, $f16, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f26.fl);
    // 0x8000CF90: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x8000CF94: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x8000CF98: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x8000CF9C: andi        $t6, $t9, 0xFFF
    ctx->r14 = ctx->r25 & 0XFFF;
    // 0x8000CFA0: or          $t8, $t7, $t6
    ctx->r24 = ctx->r15 | ctx->r14;
    // 0x8000CFA4: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x8000CFA8: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x8000CFAC: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8000CFB0: andi        $t6, $t7, 0xFFF
    ctx->r14 = ctx->r15 & 0XFFF;
    // 0x8000CFB4: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x8000CFB8: sll         $t8, $t6, 12
    ctx->r24 = S32(ctx->r14 << 12);
    // 0x8000CFBC: andi        $t6, $t7, 0xFFF
    ctx->r14 = ctx->r15 & 0XFFF;
    // 0x8000CFC0: or          $t9, $t8, $t6
    ctx->r25 = ctx->r24 | ctx->r14;
    // 0x8000CFC4: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8000CFC8: lw          $v0, 0x0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X0);
    // 0x8000CFCC: lui         $t8, 0xB400
    ctx->r24 = S32(0XB400 << 16);
    // 0x8000CFD0: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8000CFD4: sw          $t7, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r15;
    // 0x8000CFD8: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8000CFDC: sll         $t8, $a2, 5
    ctx->r24 = S32(ctx->r6 << 5);
    // 0x8000CFE0: andi        $t6, $t8, 0xFFFF
    ctx->r14 = ctx->r24 & 0XFFFF;
    // 0x8000CFE4: sll         $t7, $t0, 21
    ctx->r15 = S32(ctx->r8 << 21);
    // 0x8000CFE8: or          $t9, $t7, $t6
    ctx->r25 = ctx->r15 | ctx->r14;
    // 0x8000CFEC: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8000CFF0: lw          $v0, 0x0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X0);
    // 0x8000CFF4: lui         $t7, 0xB300
    ctx->r15 = S32(0XB300 << 16);
    // 0x8000CFF8: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8000CFFC: sw          $t8, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r24;
    // 0x8000D000: sw          $s5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r21;
    // 0x8000D004: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8000D008: lh          $a3, 0x42($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X42);
L_8000D00C:
    // 0x8000D00C: slt         $at, $s2, $a3
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r7) ? 1 : 0;
L_8000D010:
    // 0x8000D010: bne         $at, $zero, L_8000CA94
    if (ctx->r1 != 0) {
        // 0x8000D014: or          $t5, $s2, $zero
        ctx->r13 = ctx->r18 | 0;
            goto L_8000CA94;
    }
    // 0x8000D014: or          $t5, $s2, $zero
    ctx->r13 = ctx->r18 | 0;
    // 0x8000D018: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
L_8000D01C:
    // 0x8000D01C: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    // 0x8000D020: ldc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X10);
    // 0x8000D024: ldc1        $f24, 0x18($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X18);
    // 0x8000D028: ldc1        $f26, 0x20($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X20);
    // 0x8000D02C: ldc1        $f28, 0x28($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X28);
    // 0x8000D030: ldc1        $f30, 0x30($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X30);
    // 0x8000D034: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8000D038: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x8000D03C: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x8000D040: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x8000D044: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x8000D048: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x8000D04C: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x8000D050: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x8000D054: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x8000D058: jr          $ra
    // 0x8000D05C: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    TRACE_RETURN()
    return;
    // 0x8000D05C: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void func_80025D74_26974(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80025D74: lw          $v0, 0xD0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD0);
    // 0x80025D78: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80025D7C: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x80025D80: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80025D84: slti        $at, $a1, 0x2
    ctx->r1 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x80025D88: bnel        $at, $zero, L_80025E18
    if (ctx->r1 != 0) {
        // 0x80025D8C: slti        $at, $a1, 0x2
        ctx->r1 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
            goto L_80025E18;
    }
    goto skip_0;
    // 0x80025D8C: slti        $at, $a1, 0x2
    ctx->r1 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    skip_0:
    // 0x80025D90: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
    // 0x80025D94: addiu       $a3, $a2, 0x1
    ctx->r7 = ADD32(ctx->r6, 0X1);
    // 0x80025D98: slti        $at, $a3, 0x2
    ctx->r1 = SIGNED(ctx->r7) < 0X2 ? 1 : 0;
L_80025D9C:
    // 0x80025D9C: bne         $at, $zero, L_80025E00
    if (ctx->r1 != 0) {
        // 0x80025DA0: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_80025E00;
    }
    // 0x80025DA0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80025DA4: addiu       $t6, $a2, 0x2
    ctx->r14 = ADD32(ctx->r6, 0X2);
L_80025DA8:
    // 0x80025DA8: multu       $v1, $t6
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80025DAC: lw          $t5, 0x54($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X54);
    // 0x80025DB0: lwc1        $f6, 0x18($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X18);
    // 0x80025DB4: lw          $t9, 0x58($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X58);
    // 0x80025DB8: mflo        $t7
    ctx->r15 = lo;
    // 0x80025DBC: addu        $t0, $a0, $t7
    ctx->r8 = ADD32(ctx->r4, ctx->r15);
    // 0x80025DC0: sll         $t8, $t0, 2
    ctx->r24 = S32(ctx->r8 << 2);
    // 0x80025DC4: addu        $t6, $t5, $t8
    ctx->r14 = ADD32(ctx->r13, ctx->r24);
    // 0x80025DC8: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x80025DCC: addu        $t1, $t9, $t8
    ctx->r9 = ADD32(ctx->r25, ctx->r24);
    // 0x80025DD0: lwc1        $f10, 0x0($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X0);
    // 0x80025DD4: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80025DD8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80025DDC: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x80025DE0: swc1        $f16, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f16.u32l;
    // 0x80025DE4: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
    // 0x80025DE8: addiu       $a3, $a2, 0x1
    ctx->r7 = ADD32(ctx->r6, 0X1);
    // 0x80025DEC: slt         $at, $a0, $a3
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x80025DF0: bnel        $at, $zero, L_80025DA8
    if (ctx->r1 != 0) {
        // 0x80025DF4: addiu       $t6, $a2, 0x2
        ctx->r14 = ADD32(ctx->r6, 0X2);
            goto L_80025DA8;
    }
    goto skip_1;
    // 0x80025DF4: addiu       $t6, $a2, 0x2
    ctx->r14 = ADD32(ctx->r6, 0X2);
    skip_1:
    // 0x80025DF8: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x80025DFC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_80025E00:
    // 0x80025E00: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80025E04: slt         $at, $v1, $a1
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80025E08: bnel        $at, $zero, L_80025D9C
    if (ctx->r1 != 0) {
        // 0x80025E0C: slti        $at, $a3, 0x2
        ctx->r1 = SIGNED(ctx->r7) < 0X2 ? 1 : 0;
            goto L_80025D9C;
    }
    goto skip_2;
    // 0x80025E0C: slti        $at, $a3, 0x2
    ctx->r1 = SIGNED(ctx->r7) < 0X2 ? 1 : 0;
    skip_2:
    // 0x80025E10: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80025E14: slti        $at, $a1, 0x2
    ctx->r1 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
L_80025E18:
    // 0x80025E18: bne         $at, $zero, L_80026038
    if (ctx->r1 != 0) {
        // 0x80025E1C: nop
    
            goto L_80026038;
    }
    // 0x80025E1C: nop

    // 0x80025E20: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
    // 0x80025E24: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x80025E28: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80025E2C: addiu       $a3, $a2, 0x1
    ctx->r7 = ADD32(ctx->r6, 0X1);
    // 0x80025E30: slti        $at, $a3, 0x2
    ctx->r1 = SIGNED(ctx->r7) < 0X2 ? 1 : 0;
L_80025E34:
    // 0x80025E34: bne         $at, $zero, L_80026028
    if (ctx->r1 != 0) {
        // 0x80025E38: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_80026028;
    }
    // 0x80025E38: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80025E3C: addiu       $t2, $v1, 0x1
    ctx->r10 = ADD32(ctx->r3, 0X1);
    // 0x80025E40: addiu       $t3, $v1, -0x1
    ctx->r11 = ADD32(ctx->r3, -0X1);
    // 0x80025E44: andi        $t7, $a0, 0x1
    ctx->r15 = ctx->r4 & 0X1;
L_80025E48:
    // 0x80025E48: bne         $t7, $zero, L_80025F10
    if (ctx->r15 != 0) {
        // 0x80025E4C: addiu       $a3, $a2, 0x2
        ctx->r7 = ADD32(ctx->r6, 0X2);
            goto L_80025F10;
    }
    // 0x80025E4C: addiu       $a3, $a2, 0x2
    ctx->r7 = ADD32(ctx->r6, 0X2);
    // 0x80025E50: addiu       $a3, $a2, 0x2
    ctx->r7 = ADD32(ctx->r6, 0X2);
    // 0x80025E54: multu       $v1, $a3
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80025E58: lw          $a1, 0x58($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X58);
    // 0x80025E5C: sll         $t5, $a0, 2
    ctx->r13 = S32(ctx->r4 << 2);
    // 0x80025E60: addu        $t6, $a1, $t5
    ctx->r14 = ADD32(ctx->r5, ctx->r13);
    // 0x80025E64: mflo        $t8
    ctx->r24 = lo;
    // 0x80025E68: addu        $t0, $a0, $t8
    ctx->r8 = ADD32(ctx->r4, ctx->r24);
    // 0x80025E6C: sll         $t9, $t0, 2
    ctx->r25 = S32(ctx->r8 << 2);
    // 0x80025E70: multu       $t2, $a3
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80025E74: or          $t0, $t9, $zero
    ctx->r8 = ctx->r25 | 0;
    // 0x80025E78: addu        $t1, $a1, $t9
    ctx->r9 = ADD32(ctx->r5, ctx->r25);
    // 0x80025E7C: sll         $t9, $a0, 2
    ctx->r25 = S32(ctx->r4 << 2);
    // 0x80025E80: addu        $t5, $a1, $t9
    ctx->r13 = ADD32(ctx->r5, ctx->r25);
    // 0x80025E84: lwc1        $f4, -0x4($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, -0X4);
    // 0x80025E88: lwc1        $f10, 0x4($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X4);
    // 0x80025E8C: lw          $t9, 0x5C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X5C);
    // 0x80025E90: mflo        $t7
    ctx->r15 = lo;
    // 0x80025E94: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80025E98: addu        $t4, $t6, $t8
    ctx->r12 = ADD32(ctx->r14, ctx->r24);
    // 0x80025E9C: multu       $t3, $a3
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80025EA0: lwc1        $f16, -0x4($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, -0X4);
    // 0x80025EA4: mflo        $t7
    ctx->r15 = lo;
    // 0x80025EA8: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x80025EAC: addu        $t8, $t5, $t6
    ctx->r24 = ADD32(ctx->r13, ctx->r14);
    // 0x80025EB0: lwc1        $f18, 0x0($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X0);
    // 0x80025EB4: addu        $t7, $t9, $t0
    ctx->r15 = ADD32(ctx->r25, ctx->r8);
    // 0x80025EB8: lw          $t5, 0x54($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X54);
    // 0x80025EBC: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x80025EC0: lwc1        $f18, 0x0($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X0);
    // 0x80025EC4: addu        $t6, $t5, $t0
    ctx->r14 = ADD32(ctx->r13, ctx->r8);
    // 0x80025EC8: lw          $t8, 0x50($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X50);
    // 0x80025ECC: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80025ED0: lwc1        $f10, 0x4($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X4);
    // 0x80025ED4: addu        $t9, $t8, $t0
    ctx->r25 = ADD32(ctx->r24, ctx->r8);
    // 0x80025ED8: add.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x80025EDC: lwc1        $f16, 0x0($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X0);
    // 0x80025EE0: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x80025EE4: mul.s       $f4, $f0, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80025EE8: lwc1        $f16, 0x0($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X0);
    // 0x80025EEC: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80025EF0: lwc1        $f6, 0x0($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X0);
    // 0x80025EF4: sub.s       $f18, $f8, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x80025EF8: lwc1        $f8, 0x14($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X14);
    // 0x80025EFC: div.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = DIV_S(ctx->f18.fl, ctx->f6.fl);
    // 0x80025F00: mul.s       $f4, $f16, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f8.fl);
    // 0x80025F04: sub.s       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x80025F08: b           L_80025FC8
    // 0x80025F0C: swc1        $f18, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f18.u32l;
        goto L_80025FC8;
    // 0x80025F0C: swc1        $f18, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f18.u32l;
L_80025F10:
    // 0x80025F10: multu       $v1, $a3
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80025F14: lw          $a1, 0x58($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X58);
    // 0x80025F18: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80025F1C: addu        $t8, $a1, $t6
    ctx->r24 = ADD32(ctx->r5, ctx->r14);
    // 0x80025F20: mflo        $t7
    ctx->r15 = lo;
    // 0x80025F24: addu        $t0, $a0, $t7
    ctx->r8 = ADD32(ctx->r4, ctx->r15);
    // 0x80025F28: sll         $t5, $t0, 2
    ctx->r13 = S32(ctx->r8 << 2);
    // 0x80025F2C: multu       $t3, $a3
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80025F30: addu        $t1, $a1, $t5
    ctx->r9 = ADD32(ctx->r5, ctx->r13);
    // 0x80025F34: lwc1        $f18, -0x4($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, -0X4);
    // 0x80025F38: or          $t0, $t5, $zero
    ctx->r8 = ctx->r13 | 0;
    // 0x80025F3C: sll         $t5, $a0, 2
    ctx->r13 = S32(ctx->r4 << 2);
    // 0x80025F40: addu        $t6, $a1, $t5
    ctx->r14 = ADD32(ctx->r5, ctx->r13);
    // 0x80025F44: lw          $t5, 0x5C($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X5C);
    // 0x80025F48: mflo        $t9
    ctx->r25 = lo;
    // 0x80025F4C: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x80025F50: addu        $t4, $t8, $t7
    ctx->r12 = ADD32(ctx->r24, ctx->r15);
    // 0x80025F54: multu       $t2, $a3
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80025F58: lwc1        $f6, -0x4($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, -0X4);
    // 0x80025F5C: lwc1        $f16, 0x0($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X0);
    // 0x80025F60: lwc1        $f10, 0x4($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X4);
    // 0x80025F64: add.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x80025F68: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80025F6C: mflo        $t9
    ctx->r25 = lo;
    // 0x80025F70: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x80025F74: addu        $t7, $t6, $t8
    ctx->r15 = ADD32(ctx->r14, ctx->r24);
    // 0x80025F78: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x80025F7C: lwc1        $f16, 0x0($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X0);
    // 0x80025F80: lwc1        $f18, 0x0($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X0);
    // 0x80025F84: lwc1        $f10, 0x4($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X4);
    // 0x80025F88: add.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x80025F8C: mul.s       $f6, $f0, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x80025F90: addu        $t9, $t5, $t0
    ctx->r25 = ADD32(ctx->r13, ctx->r8);
    // 0x80025F94: lw          $t6, 0x54($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X54);
    // 0x80025F98: lw          $t7, 0x50($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X50);
    // 0x80025F9C: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80025FA0: lwc1        $f8, 0x0($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X0);
    // 0x80025FA4: addu        $t8, $t6, $t0
    ctx->r24 = ADD32(ctx->r14, ctx->r8);
    // 0x80025FA8: lwc1        $f18, 0x0($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X0);
    // 0x80025FAC: sub.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80025FB0: lwc1        $f4, 0x14($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
    // 0x80025FB4: addu        $t5, $t7, $t0
    ctx->r13 = ADD32(ctx->r15, ctx->r8);
    // 0x80025FB8: div.s       $f10, $f16, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f16.fl, ctx->f8.fl);
    // 0x80025FBC: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x80025FC0: sub.s       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x80025FC4: swc1        $f16, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f16.u32l;
L_80025FC8:
    // 0x80025FC8: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x80025FCC: lwc1        $f18, 0x18($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X18);
    // 0x80025FD0: lw          $t5, 0x54($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X54);
    // 0x80025FD4: addiu       $t6, $t9, 0x2
    ctx->r14 = ADD32(ctx->r25, 0X2);
    // 0x80025FD8: multu       $v1, $t6
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80025FDC: lw          $t9, 0x50($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X50);
    // 0x80025FE0: mflo        $t8
    ctx->r24 = lo;
    // 0x80025FE4: addu        $t0, $a0, $t8
    ctx->r8 = ADD32(ctx->r4, ctx->r24);
    // 0x80025FE8: sll         $t7, $t0, 2
    ctx->r15 = S32(ctx->r8 << 2);
    // 0x80025FEC: addu        $t6, $t9, $t7
    ctx->r14 = ADD32(ctx->r25, ctx->r15);
    // 0x80025FF0: lwc1        $f8, 0x0($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X0);
    // 0x80025FF4: addu        $a1, $t5, $t7
    ctx->r5 = ADD32(ctx->r13, ctx->r15);
    // 0x80025FF8: lwc1        $f10, 0x0($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80025FFC: mul.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x80026000: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80026004: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80026008: swc1        $f6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f6.u32l;
    // 0x8002600C: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
    // 0x80026010: addiu       $a3, $a2, 0x1
    ctx->r7 = ADD32(ctx->r6, 0X1);
    // 0x80026014: slt         $at, $a0, $a3
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x80026018: bnel        $at, $zero, L_80025E48
    if (ctx->r1 != 0) {
        // 0x8002601C: andi        $t7, $a0, 0x1
        ctx->r15 = ctx->r4 & 0X1;
            goto L_80025E48;
    }
    goto skip_3;
    // 0x8002601C: andi        $t7, $a0, 0x1
    ctx->r15 = ctx->r4 & 0X1;
    skip_3:
    // 0x80026020: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x80026024: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_80026028:
    // 0x80026028: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8002602C: slt         $at, $v1, $a1
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80026030: bnel        $at, $zero, L_80025E34
    if (ctx->r1 != 0) {
        // 0x80026034: slti        $at, $a3, 0x2
        ctx->r1 = SIGNED(ctx->r7) < 0X2 ? 1 : 0;
            goto L_80025E34;
    }
    goto skip_4;
    // 0x80026034: slti        $at, $a3, 0x2
    ctx->r1 = SIGNED(ctx->r7) < 0X2 ? 1 : 0;
    skip_4:
L_80026038:
    // 0x80026038: jr          $ra
    // 0x8002603C: nop

    TRACE_RETURN()
    return;
    // 0x8002603C: nop

;}
RECOMP_FUNC void func_800357BC_363BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800357BC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x800357C0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x800357C4: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x800357C8: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x800357CC: lhu         $a3, 0x7E($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X7E);
    // 0x800357D0: jal         0x80034CBC
    // 0x800357D4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80034CBC_358BC(rdram, ctx);
        goto after_0;
    // 0x800357D4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
    // 0x800357D8: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x800357DC: lwc1        $f6, 0x60($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X60);
    // 0x800357E0: lhu         $t6, 0x66($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X66);
    // 0x800357E4: lhu         $t7, 0x6A($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X6A);
    // 0x800357E8: lhu         $t8, 0x6E($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X6E);
    // 0x800357EC: lwc1        $f8, 0x70($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X70);
    // 0x800357F0: lwc1        $f10, 0x74($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X74);
    // 0x800357F4: lwc1        $f16, 0x78($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X78);
    // 0x800357F8: lhu         $t9, 0x7E($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X7E);
    // 0x800357FC: lhu         $t0, 0x82($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X82);
    // 0x80035800: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x80035804: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80035808: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x8003580C: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
    // 0x80035810: lw          $a3, 0x58($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X58);
    // 0x80035814: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80035818: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x8003581C: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x80035820: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x80035824: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x80035828: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x8003582C: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x80035830: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x80035834: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x80035838: jal         0x80035964
    // 0x8003583C: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    func_80035964_36564(rdram, ctx);
        goto after_1;
    // 0x8003583C: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    after_1:
    // 0x80035840: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80035844: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
    // 0x80035848: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8003584C: jr          $ra
    // 0x80035850: nop

    TRACE_RETURN()
    return;
    // 0x80035850: nop

;}
RECOMP_FUNC void func_8000A2C8_AEC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000A2C8: lui         $t7, 0x8006
    ctx->r15 = S32(0X8006 << 16);
    // 0x8000A2CC: addiu       $t7, $t7, -0x4690
    ctx->r15 = ADD32(ctx->r15, -0X4690);
    // 0x8000A2D0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8000A2D4: addu        $a2, $t6, $t7
    ctx->r6 = ADD32(ctx->r14, ctx->r15);
    // 0x8000A2D8: lh          $t8, 0x0($a2)
    ctx->r24 = MEM_H(ctx->r6, 0X0);
    // 0x8000A2DC: lh          $a3, 0x2($a2)
    ctx->r7 = MEM_H(ctx->r6, 0X2);
    // 0x8000A2E0: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x8000A2E4: ori         $at, $at, 0x2D94
    ctx->r1 = ctx->r1 | 0X2D94;
    // 0x8000A2E8: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x8000A2EC: sll         $t9, $t8, 6
    ctx->r25 = S32(ctx->r24 << 6);
    // 0x8000A2F0: addu        $t0, $t9, $at
    ctx->r8 = ADD32(ctx->r25, ctx->r1);
    // 0x8000A2F4: addiu       $t1, $t1, -0x3340
    ctx->r9 = ADD32(ctx->r9, -0X3340);
    // 0x8000A2F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8000A2FC: addu        $a1, $t0, $t1
    ctx->r5 = ADD32(ctx->r8, ctx->r9);
    // 0x8000A300: blez        $a3, L_8000A32C
    if (SIGNED(ctx->r7) <= 0) {
        // 0x8000A304: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_8000A32C;
    }
    // 0x8000A304: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8000A308:
    // 0x8000A308: lbu         $t2, 0x4($a1)
    ctx->r10 = MEM_BU(ctx->r5, 0X4);
    // 0x8000A30C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8000A310: slt         $at, $v1, $a3
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x8000A314: bne         $t2, $zero, L_8000A324
    if (ctx->r10 != 0) {
        // 0x8000A318: nop
    
            goto L_8000A324;
    }
    // 0x8000A318: nop

    // 0x8000A31C: b           L_8000A32C
    // 0x8000A320: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8000A32C;
    // 0x8000A320: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8000A324:
    // 0x8000A324: bne         $at, $zero, L_8000A308
    if (ctx->r1 != 0) {
        // 0x8000A328: addiu       $a1, $a1, 0x40
        ctx->r5 = ADD32(ctx->r5, 0X40);
            goto L_8000A308;
    }
    // 0x8000A328: addiu       $a1, $a1, 0x40
    ctx->r5 = ADD32(ctx->r5, 0X40);
L_8000A32C:
    // 0x8000A32C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8000A330: bne         $v0, $at, L_8000A33C
    if (ctx->r2 != ctx->r1) {
        // 0x8000A334: nop
    
            goto L_8000A33C;
    }
    // 0x8000A334: nop

    // 0x8000A338: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_8000A33C:
    // 0x8000A33C: jr          $ra
    // 0x8000A340: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    TRACE_RETURN()
    return;
    // 0x8000A340: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
;}
RECOMP_FUNC void func_80011634_12234(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80011634: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80011638: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8001163C: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x80011640: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x80011644: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80011648: beq         $a0, $zero, L_8001169C
    if (ctx->r4 == 0) {
        // 0x8001164C: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_8001169C;
    }
    // 0x8001164C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80011650: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x80011654: beql        $a0, $zero, L_8001167C
    if (ctx->r4 == 0) {
        // 0x80011658: lw          $v0, 0x60($a2)
        ctx->r2 = MEM_W(ctx->r6, 0X60);
            goto L_8001167C;
    }
    goto skip_0;
    // 0x80011658: lw          $v0, 0x60($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X60);
    skip_0:
    // 0x8001165C: lhu         $t7, 0x20($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X20);
    // 0x80011660: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80011664: beql        $at, $zero, L_8001167C
    if (ctx->r1 == 0) {
        // 0x80011668: lw          $v0, 0x60($a2)
        ctx->r2 = MEM_W(ctx->r6, 0X60);
            goto L_8001167C;
    }
    goto skip_1;
    // 0x80011668: lw          $v0, 0x60($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X60);
    skip_1:
    // 0x8001166C: jal         0x80011634
    // 0x80011670: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_80011634_12234(rdram, ctx);
        goto after_0;
    // 0x80011670: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x80011674: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80011678: lw          $v0, 0x60($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X60);
L_8001167C:
    // 0x8001167C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x80011680: beq         $v0, $zero, L_80011694
    if (ctx->r2 == 0) {
        // 0x80011684: nop
    
            goto L_80011694;
    }
    // 0x80011684: nop

    // 0x80011688: jalr        $v0
    // 0x8001168C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x8001168C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x80011690: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
L_80011694:
    // 0x80011694: jal         0x80034EF8
    // 0x80011698: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_2;
    // 0x80011698: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_2:
L_8001169C:
    // 0x8001169C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800116A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800116A4: jr          $ra
    // 0x800116A8: nop

    TRACE_RETURN()
    return;
    // 0x800116A8: nop

;}
RECOMP_FUNC void func_80005A20_6620(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80005A20: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x80005A24: lw          $a1, -0x3A38($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3A38);
    // 0x80005A28: lui         $a2, 0x4
    ctx->r6 = S32(0X4 << 16);
    // 0x80005A2C: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x80005A30: addu        $a2, $a2, $a1
    ctx->r6 = ADD32(ctx->r6, ctx->r5);
    // 0x80005A34: lbu         $a2, -0x4F8C($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X4F8C);
    // 0x80005A38: ori         $at, $at, 0x5F80
    ctx->r1 = ctx->r1 | 0X5F80;
    // 0x80005A3C: sll         $t6, $a2, 2
    ctx->r14 = S32(ctx->r6 << 2);
    // 0x80005A40: addu        $v1, $a1, $t6
    ctx->r3 = ADD32(ctx->r5, ctx->r14);
    // 0x80005A44: addu        $v1, $v1, $at
    ctx->r3 = ADD32(ctx->r3, ctx->r1);
    // 0x80005A48: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80005A4C: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x80005A50: addiu       $t7, $a2, 0x1
    ctx->r15 = ADD32(ctx->r6, 0X1);
    // 0x80005A54: sb          $t7, -0x4F8C($at)
    MEM_B(-0X4F8C, ctx->r1) = ctx->r15;
    // 0x80005A58: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    // 0x80005A5C: jr          $ra
    // 0x80005A60: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    TRACE_RETURN()
    return;
    // 0x80005A60: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
;}
RECOMP_FUNC void func_800133E0_13FE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800133E0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800133E4: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x800133E8: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x800133EC: swc1        $f12, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f12.u32l;
    // 0x800133F0: swc1        $f14, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f14.u32l;
    // 0x800133F4: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x800133F8: jr          $ra
    // 0x800133FC: swc1        $f4, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x800133FC: swc1        $f4, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f4.u32l;
;}
